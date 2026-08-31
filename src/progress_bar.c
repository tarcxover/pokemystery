#include "global.h"
#include "assertf.h"
#include "decompress.h"
#include "even_sprite.h"
#include "evidence.h"
#include "gba/defines.h"
#include "gba/io_reg.h"
#include "gba/isagbprint.h"
#include "graphics.h"
#include "main.h"
#include "progress_bar.h"
#include "script.h"
#include "sprite.h"
#include "task.h"
#include "util.h"
#include "math_util.h"
#include "subsprite.h"

#define PROG_BAR_MAX_SUBSPRITES 8

static struct Subsprite ProgBar_DynamicSubsprites[PROG_BAR_MAX_SUBSPRITES];
static struct SubspriteTable ProgBar_SubspriteTableDynamic;
static const u16 ProgBar_DefaultPal[] = INCGFX_U16("graphics/progress_bar/progbar.png", ".gbapal");
static const u32 ProgBar_DefaultGfx[] = INCGFX_U32("graphics/progress_bar/progbar.png", ".4bpp");

static EWRAM_INIT u8 sActiveProgTaskId = TASK_NONE;

static const ProgBar_Template ProgBar_DefaultTemplate = 
{
    .totalBarPixels = 100,
    .numStartTiles = 1,
    .numEndTiles = 1,
    .xOffset = -3,
    .tileTag = PROG_BAR_TAG,
    .palTag = PROG_BAR_TAG,
    .pal = ProgBar_DefaultPal,
    .barGfx = (const Tile4BPP*)ProgBar_DefaultGfx,
};

const struct ProgressBar gProgressBars[] = {
    [PROG_BAR_OW_ACCUSE] = {
        &ProgBar_DefaultTemplate,
        &gAccuseMenuProgTracker
    }
};

static EWRAM_INIT ProgBar_Tracker ProgBar_DefaultTracker = {0, 0, 0};

static u32 ProgBar_DrawBar(const ProgBar_Template* t);
static u32 _ProgBar_CreateSprite(const ProgBar_Template* t, s32 x, s32 y);
static u32 ProgBar_GfxSize(const ProgBar_Template* t);
static struct SubspriteTable ProgBar_BuildSubspriteTable(const ProgBar_Template* t, struct Subsprite* subspritePtr);
static const Tile4BPP* ProgBar_GetFillTile(const ProgBar_Template* t, enum ProgBar_Threshold threshold, u32 fillLevel);
enum ProgBar_Threshold ProgBar_GetThreshold(u32 filledPixels, u32 totalPixels);
static void ProgBar_MaskTileColumns(Tile4BPP* tile, u32 n);
static Tile4BPP ProgBar_GetMergedEndTile(Tile4BPP destTile, Tile4BPP srcTile, u32 n);


static void Task_ProgBarMain(u8 taskId);

u32 ProgBar_CreateBar(const ProgBar_Template* t, ProgBar_Tracker* tracker)
{
    u32 taskId = CreateTask(Task_ProgBarMain, 0);
    ProgBar_State* state  = (void*)gTasks[taskId].data;
    u32 barId = ProgBar_DrawBar(t);

    state->tracker = tracker;
    state->barSpriteId = barId;
    state->template = t;
    state->taskId = taskId;

    ProgBar_FillWithEmpty(t, tracker, barId);
    u32 filledPixels = ProgBar_CalcFilledPixels(tracker, t->totalBarPixels);
    ProgBar_Update(t, tracker, filledPixels, barId);
    return taskId;
}

void ProgBar_Update(const ProgBar_Template* t, ProgBar_Tracker* tracker, u32 filledPixels, u32 barId)
{
    struct Sprite* bar = &gSprites[barId];
    u32 numFilledTiles = filledPixels / 8;
    u32 partialFillPixels = filledPixels % 8;
    u32 threshold = ProgBar_GetThreshold(filledPixels, t->totalBarPixels);

    const Tile4BPP* fillTile = ProgBar_GetFillTile(t, threshold, 8);
    Tile4BPP* dest = SpriteTile(bar) + t->numStartTiles;
    FillTiles(fillTile, dest, numFilledTiles);

    if (!partialFillPixels)
        return;

    const Tile4BPP* lastTile = ProgBar_GetFillTile(t, threshold, partialFillPixels);
    dest += numFilledTiles;
    FillTiles(lastTile, dest, 1);

    u32 totalTiles = t->totalBarPixels/8; 
    if (t->totalBarPixels % 8 && numFilledTiles >= totalTiles)
    {
        u32 partialPixels = t->totalBarPixels % 8;
        Tile4BPP res = ProgBar_GetMergedEndTile(*dest, *(t->barGfx + 26), partialPixels);
        FillTiles(&res, dest, 1);

    }
}

static Tile4BPP ProgBar_GetMergedEndTile(Tile4BPP destTile, Tile4BPP srcTile, u32 partialPixels) 
{
        u32 extraPixels = 8 - partialPixels;
        ProgBar_MaskTileColumns(&destTile, extraPixels);
        Tile4BPP res;
        for (int i = 0; i < 8; i++) {
            srcTile.data[i] <<= 4*partialPixels;
            res.data[i] = srcTile.data[i] | destTile.data[i];
        }
        return res;
}

void ProgBar_Destroy(const ProgBar_Template* t, u32 barSpriteId)
{
    FreeSpritePaletteByTag(t->palTag);
    FreeSpriteTilesByTag(t->tileTag);
    DestroySprite(&gSprites[barSpriteId]);
}

static u32 ProgBar_DrawBar(const ProgBar_Template* t)
{
    ProgBar_SubspriteTableDynamic = ProgBar_BuildSubspriteTable(t, ProgBar_DynamicSubsprites);
    u32 id = _ProgBar_CreateSprite(t, 0, t->yPos);
    struct Sprite* sprite = &gSprites[id];
    s32 offsetX = CalcSpriteDisplayCenterOffset(sprite);
    sprite->x += offsetX;
    sprite->x += t->xOffset;
    Tile4BPP* dest = SpriteTile(sprite);
    CopyTiles(t->barGfx, dest, t->numStartTiles);
    dest += t->numStartTiles + t->totalBarPixels/8;
    CopyTiles(t->barGfx + 26, dest, 1);
    return id;
}

static u32 _ProgBar_CreateSprite(const ProgBar_Template* t, s32 x, s32 y)
{
    struct Even_CreateSpriteStruct cs = {0};
    cs.sprite = gBlankGfxCompressed;
    cs.spriteCompressed = TRUE;
    cs.tileTag = t->tileTag;
    cs.palTag = t->palTag;
    cs.palette = t->pal;
    cs.spriteSize = SPRITE_SIZE(32x8);
    cs.spriteShape = SPRITE_SHAPE(32x8);
    cs.posX = x;
    cs.posY = y;
    cs.subpriority = 0;
    cs.subspriteTable = &ProgBar_SubspriteTableDynamic;
    return Even_CreateSprite(&cs);
}

void ProgBar_FillWithEmpty(const ProgBar_Template* t, ProgBar_Tracker* tracker, u32 barId)
{
    u32 fillTileCount = MathUtil_RoundUp(t->totalBarPixels, 8)/8;
    u32 partialPixels = t->totalBarPixels % 8;
    struct Sprite* barSprite = &gSprites[barId];
    const Tile4BPP* src = t->barGfx + t->numStartTiles;
    Tile4BPP* dest = SpriteTile(barSprite) + t->numStartTiles;
    FillTiles(src, dest, fillTileCount);
    dest += (fillTileCount - 1);
    Tile4BPP res = ProgBar_GetMergedEndTile(*dest, *(t->barGfx + 26), partialPixels);
    FillTiles(&res, dest, 1);
}

static void ProgBar_MaskTileColumns(Tile4BPP* tile, u32 n)
{
    u32 mask = ~0u >> 4*n;

    for(int i = 0; i < 8; i ++)
    {
        tile->data[i] &= mask;
    }
}

static const Tile4BPP* ProgBar_GetFillTile(const ProgBar_Template* t, enum ProgBar_Threshold threshold, u32 fillLevel)
{
    assertf(fillLevel <= 8, "Fill level must be less than 8")
    {
        fillLevel = 8;
    }

    fillLevel--;

    const Tile4BPP* start = t->barGfx + t->numStartTiles + 1;

    switch (threshold)
    {
        case PROG_THRESHOLD_LOW:
            break;
        case PROG_THRESHOLD_MED:
            start += 8;
            break;
        case PROG_THRESHOLD_HIGH:
        default:
            start += 16;
    }

    return start + fillLevel;
}

enum ProgBar_Threshold ProgBar_GetThreshold(u32 filledPixels, u32 totalBarPixels)
{
    u32 progPercent = (filledPixels * 100) / totalBarPixels;
    if (progPercent <= PROG_THRESHOLD_LOW)
        return PROG_THRESHOLD_LOW;
    else if (progPercent <= PROG_THRESHOLD_MED)
        return PROG_THRESHOLD_MED;
    else
        return PROG_THRESHOLD_HIGH;
}

u32 ProgBar_CalcFilledPixels(ProgBar_Tracker* tracker, u32 totalBarPixels)
{
    u32 pixels = tracker->curr * totalBarPixels /tracker->max;
    return pixels;
}

static struct SubspriteTable ProgBar_BuildSubspriteTable(const ProgBar_Template* t, struct Subsprite* subspritePtr)
{
    u32 tilesForBar = MathUtil_RoundUp(t->totalBarPixels, 8) / 8;
    u32 totalTiles = tilesForBar + t->numEndTiles + t->numStartTiles;
    u32 numSubspriteTiles = MathUtil_RoundUp(totalTiles, 4);

    struct Subsprite* subspritePtrStart = subspritePtr;

    u32 numSubsprites = numSubspriteTiles / 4;
    u32 totalBarLength = numSubsprites * 32;

    s32 startX = 0;

    if (numSubsprites & 1) {
        startX -= (totalBarLength / 2);
    }
    else {
        startX -= 16;
        startX -= (totalBarLength - 32)/2;
    }

    for (u32 i = 0; i < numSubsprites; i ++) {
        struct Subsprite entry = SUBSPRITE(startX + 32*i, 0, 32x8, i*4, 1);
        *subspritePtr++ = entry;
    }
    struct SubspriteTable table = (struct SubspriteTable){numSubsprites, subspritePtrStart};
    return table;
}

static UNUSED u32 ProgBar_GfxSize(const ProgBar_Template* t)
{
    u32 tilesForBar = MathUtil_RoundUp(t->totalBarPixels, 8) / 8;
    u32 totalTiles = tilesForBar + t->numEndTiles + t->numStartTiles;
    u32 numSpriteTiles = MathUtil_RoundUp(totalTiles, 4);
    return TILE_SIZE_4BPP * numSpriteTiles;
}

static void Task_ProgBarMain(u8 taskId)
{
    u32 step = 1;
    ProgBar_State* state = (void*)gTasks[taskId].data;
    ProgBar_Tracker* tracker = state->tracker;

    if (tracker->target == tracker->curr)
    {
        state->animating = FALSE;
        return;
    }

    state->animating = TRUE;
    if (tracker->target < tracker->curr)
        step *= -1;

    tracker->curr = AddClamped(0, tracker->max, tracker->curr, step);

    ProgBar_FillWithEmpty(state->template, state->tracker, state->barSpriteId);
    u32 filledPixels = ProgBar_CalcFilledPixels(state->tracker, state->template->totalBarPixels);
    ProgBar_Update(state->template, state->tracker, filledPixels, state->barSpriteId);
}

// For Testing
static void Task_ProgressBarHandleInput(u8 taskId)
{
    TASK_DATA(progTaskId);
    const u32 step = 1;

    ProgBar_State* state = (void*)gTasks[tData->progTaskId].data;

    if (JOY_NEW(L_BUTTON) && JOY_NEW(R_BUTTON)) {
        ProgBar_Destroy(&ProgBar_DefaultTemplate, state->barSpriteId);
        DestroyTask(taskId);
        return;
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        if (state->animating)
            return;

        state->animating = TRUE;

        if (state->tracker->target == 20)
            state->tracker->target = 80;
        else
            state->tracker->target = 20;
    }

    if (JOY_HELD(R_BUTTON))
        ProgBar_DefaultTracker.curr = AddClamped(0, ProgBar_DefaultTracker.max, ProgBar_DefaultTracker.curr, step);
    else if (JOY_HELD(L_BUTTON))
        ProgBar_DefaultTracker.curr = SubtractClamped(0, ProgBar_DefaultTracker.max, ProgBar_DefaultTracker.curr, step);

    if (JOY_HELD(L_BUTTON | R_BUTTON))
    {
        ProgBar_FillWithEmpty(&ProgBar_DefaultTemplate, &ProgBar_DefaultTracker, state->barSpriteId);
        u32 filledPixels = ProgBar_CalcFilledPixels(&ProgBar_DefaultTracker, ProgBar_DefaultTemplate.totalBarPixels);
        ProgBar_Update(&ProgBar_DefaultTemplate, &ProgBar_DefaultTracker, filledPixels, state->barSpriteId);
    }
}

bool32 ScrCmd_createprogressbar(struct ScriptContext* ctx)
{
    enum ProgressBarId id = ScriptReadByte(ctx);
    const ProgBar_Template *templ = gProgressBars[id].template;
    ProgBar_Tracker *tracker = gProgressBars[id].tracker;
    sActiveProgTaskId = ProgBar_CreateBar(templ,tracker);
    return FALSE;
}

bool32 ScrCmd_destroyprogressbar(struct ScriptContext* ctx)
{
    ProgBar_State* state = (void*)gTasks[sActiveProgTaskId].data;
    ProgBar_Destroy(state->template, state->barSpriteId);
    sActiveProgTaskId = TASK_NONE;
    return FALSE;
}

void TestProgBar()
{
    ProgBar_DefaultTracker.max = 100;
    ProgBar_DefaultTracker.curr = 100;
    u32 progTaskId = ProgBar_CreateBar(&ProgBar_DefaultTemplate,&ProgBar_DefaultTracker);
    u32 taskId = CreateTask(Task_ProgressBarHandleInput, 0);
    TASK_DATA(progTaskId);
    tData->progTaskId = progTaskId;
}
