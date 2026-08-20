#include "global.h"
#include "assertf.h"
#include "constants/characters.h"
#include "constants/evidence.h"
#include "constants/field_weather.h"
#include "constants/item.h"
#include "constants/items.h"
#include "event_data.h"
#include "evidence.h"
#include "field_weather.h"
#include "gba/defines.h"
#include "gba/io_reg.h"
#include "gba/isagbprint.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "line_break.h"
#include "list_menu.h"
#include "main.h"
#include "bg.h"
#include "metaprogram.h"
#include "pokemon_summary_screen.h"
#include "progress_bar.h"
#include "script.h"
#include "script_menu.h"
#include "strings.h"
#include "text.h"
#include "text_window.h"
#include "window.h"
#include "logic_menu.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "menu_helpers.h"
#include "menu.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "constants/rgb.h"
#include "decompress.h"
#include "constants/songs.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "gpu_regs.h"
#include "util.h"
#include <string.h>

#define MAX_SELECTIONS 8

#define TASK_DATA(...) struct { s16 __VA_ARGS__; } *tData = (void *)gTasks[taskId].data
#define TASK_DATA_N(n,...) struct { s16 __VA_ARGS__; } *tData = (void *)&gTasks[taskId].data[n]

#define ACCUSE_MENU_BORDER_TILE 0x1D5
#define ACCUSE_MENU_DIALOG_TILE 0x1DD

enum {

    ACCUSE_TAG_P1 = 0x3000,
    ACCUSE_TAG_P2,
    ACCUSE_TAG_P3,
    ACCUSE_TAG_P4,
    ACCUSE_TAG_P5,
    ACCUSE_TAG_P6,
    ACCUSE_TAG_P7,
    ACCUSE_TAG_P8,
    ACCUSE_TAG_CON,
    ACCUSE_TAG_SCROLL_ARROW,

};

struct AccuseMenuState
{
    MainCallback savedCallback;
    struct WindowTemplate* winTempls;
    struct ListMenuItem* evidence;
    u8 spriteIds[MAX_SELECTIONS];
    u8 scrollIndicatorTask;
    u8 loadState;
    u8 maxSelections;
    u8 remainingSelections;
    u32 selected[MAX_SELECTIONS];
};

struct AccuseMenuPrint {
    u8 window;
    u8 x;
    u8 y;
    const u8* text;
    union TextColor color;
    u8 font;
};

enum WindowIds
{
    WIN_ACCUSE_LIST,
    WIN_ACCUSE_DESC,
    WIN_ACCUSE_NAME,
    WIN_ACCUSE_HINTS,
    WIN_ACCUSE_COUNT
};

static EWRAM_DATA struct AccuseMenuState *sAccuseMenuState = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;
static EWRAM_DATA u8 *sBg2TilemapBuffer = NULL;

static const struct BgTemplate sAccuseMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .priority = 2
    },
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 3
    }
};

static const struct WindowTemplate sAccuseMenuWindowTemplates[] = {
    [WIN_ACCUSE_LIST] =
        {
            .bg = 0,
            .tilemapLeft = 18,
            .tilemapTop = 1,
            .width = 11,
            .height = 16,
            .paletteNum = 15,
            .baseBlock = 1,
        },

    /* [WIN_ACCUSE_MSG] = */
    /*     { */
    /*         .bg = 2, */
    /*         .tilemapLeft = 2, */
    /*         .tilemapTop = 15, */
    /*         .width = 27, */
    /*         .height = 4, */
    /*         .paletteNum = 15, */
    /*         .baseBlock = 1, */
    /*     }, */
    [WIN_ACCUSE_DESC] =
        {
            .bg = 0,
            .tilemapLeft = 1,
            .tilemapTop = 11,
            .width = 15,
            .height = 7,
            .paletteNum = 15,
            .baseBlock = 1,
        },
    [WIN_ACCUSE_NAME] =
        {
            .bg = 0,
            .tilemapLeft = 3,
            .tilemapTop = 9,
            .width = 12,
            .height = 2,
            .paletteNum = 15,
            .baseBlock = 1,
        },
    [WIN_ACCUSE_HINTS] =
        {
            .bg = 0,
            .tilemapLeft = 16,
            .tilemapTop = 16,
            .width = 14,
            .height = 2,
            .paletteNum = 15,
            .baseBlock = 1,
        },
    DUMMY_WIN_TEMPLATE,
};

static const u32 sAccuseMenuTiles[] = INCBIN_U32("graphics/accuse_menu/bg/tiles.4bpp.smol");
static const u32 sAccuseMenuTilemap[] = INCBIN_U32("graphics/accuse_menu/bg/map.bin.smolTM");
static const u16 sAccuseMenuPalette[] = INCBIN_U16("graphics/accuse_menu/bg/palette_00.gbapal");

static const u32 sAccuseMenuScrollingBgTiles[] = INCGFX_U32("graphics/accuse_menu/scroll/tiles.png", ".4bpp.smol");
static const u32 sAccuseMenuScrollingBgTilemap[] = INCBIN_U32("graphics/accuse_menu/scroll/map.bin.smolTM");
static const u16 sAccuseMenuScrollingBgPalette[] = INCGFX_U16("graphics/accuse_menu/scroll/palette_01.pal", ".gbapal");

static const u32 sAccuseMenuProgBarGfx[] = INCGFX_U32("graphics/accuse_menu/progbar/progbar.png", ".4bpp");
static const u16 sAccuseMenuProgBarPal[] = INCGFX_U16("graphics/accuse_menu/progbar/progbar.png", ".gbapal");

static const ProgBar_Template sAccuseProgBarTemplate = 
{
    .totalBarPixels = 228,
    .numStartTiles = 1,
    .numEndTiles = 1,
    .xOffset = 3,
    .yPos = 146,
    .tileTag = PROG_BAR_TAG,
    .palTag = PROG_BAR_TAG,
    .pal = sAccuseMenuProgBarPal,
    .barGfx = (const Tile4BPP*)sAccuseMenuProgBarGfx,
};


static EWRAM_INIT ProgBar_Tracker sAccuseMenuProgTracker = {0, 0, 0};

enum FontColor
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_BLUE,
    FONT_GREEN,
    FONT_RED,
};

static const struct ListMenuTemplate sAccuseMenuListTemplate =
{
    .item_X = 12,
    .cursor_X = 4,
    .upText_Y = 8,
    .cursorPal = TEXT_COLOR_DARK_GRAY,
    .fillValue = 0,
    .cursorShadowPal = TEXT_COLOR_LIGHT_GRAY,
    .lettersSpacing = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .itemVerticalPadding = 0,
    .fontId = FONT_SMALL,
    .maxShowed = 6,
};

static union TextColor sAccuseMenuWindowFontColors[] = {
    [FONT_BLACK] =
        {
            .background = TEXT_COLOR_TRANSPARENT,
            .foreground = TEXT_COLOR_DARK_GRAY,
            .shadow     = TEXT_COLOR_LIGHT_GRAY,
        },
    [FONT_WHITE] =
        {
            .background = TEXT_COLOR_TRANSPARENT,
            .foreground = TEXT_COLOR_WHITE,
            .shadow     = TEXT_COLOR_DARK_GRAY,
        },
    [FONT_BLUE] =
        {
            .background = TEXT_COLOR_TRANSPARENT,
            .foreground = TEXT_COLOR_BLUE,
            .shadow     = TEXT_COLOR_LIGHT_BLUE,
        },
    [FONT_RED] =
        {
            .background = TEXT_COLOR_TRANSPARENT,
            .foreground = TEXT_COLOR_RED,
            .shadow     = TEXT_COLOR_LIGHT_RED,
        },
    [FONT_GREEN] =
        {
            .background = TEXT_COLOR_TRANSPARENT,
            .foreground = TEXT_COLOR_GREEN,
            .shadow     = TEXT_COLOR_LIGHT_GREEN,
        },
};

enum {
    EVD_POS_LEFT,
    EVD_POS_RIGHT,
    EVD_POS_RESULT,
};

static const struct Coords16 sAccuseMenuIconPos = {34, 53};

static const u8 sText_DeductionSuccess[] = _("Deduction Successful. Recieved new evidence:\n{STR_VAR_1}");

static void AccuseMenu_SetupCB(void);
static void AccuseMenu_MainCB(void);
static void AccuseMenu_VBlankCB(void);

static void Task_AccuseMenuWaitFadeIn(u8 taskId);
static void Task_AccuseMenuInitList(u8 taskId);
static void Task_AccuseMenuMainInput(u8 taskId);
static void Task_AccuseMenuHandleDeduction(u8 taskId);
static void Task_AccuseMenuWaitFadeAndExit(u8 taskId);
static void Task_AccuseMenuScrollBg(u8 taskId);

static void AccuseMenu_Init(MainCallback callback);
static void AccuseMenu_ResetGpuRegsAndBgs(void);
static bool8 AccuseMenu_InitBgs(void);
static void AccuseMenu_FadeAndBail(void);
static bool8 AccuseMenu_LoadGraphics(void);
static void AccuseMenu_InitWindows(void);
static u32 CreateEvidenceListMenu(struct ListMenuTemplate* t);
static void DrawAccuseMenuMsgWin(u8 winId);
static void AccuseMenuPrintMsg(struct AccuseMenuPrint *p);
static void AccuseMenuCenterText(struct AccuseMenuPrint *p);
static u32 CreateEvidenceIcon(u32 pos, u32 input);
static void DestroyEvidenceIcon(u32 pos);
static void DestroyAllEvidenceIcons(void);
static void RedrawEvidenceIcons(void);
static u32 GetListMaxShowable(struct ListMenuTemplate* t);
static void AccuseMenuList_PrintFunc(const struct ListMenu *list, u32 index, u8 y);
static void PrintDescription(enum Item id);
static void PrintDeductionMessage(struct EvidenceInfo e);
static void ClearAccuseMenuWinMsg(u8 winId);
static void PrintAccuseMenuHints(u32 color);
static void PrintAccuseMenuItemName(enum Item item);
static u32 FillEvdList(struct ListMenuItem *items);
static u32 AddAccuseMenuScrollArrows(struct ListMenu *list);


static void Accuse_CreateProgBar();

static void AccuseMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list);
static void AccuseMenu_FreeResources(void);


void CB2_InitAccuseMenu(void)
{
    FadeScreen(FADE_TO_BLACK, 0);
    CreateTask(Task_OpenAccuseMenu, 1);
}

void Task_OpenAccuseMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        AccuseMenu_Init(CB2_ReturnToFieldWithOpenMenu);
        DestroyTask(taskId);
    }
}

static void AccuseMenu_Init(MainCallback callback)
{
    sAccuseMenuState = AllocZeroed(sizeof(struct AccuseMenuState));
    if (sAccuseMenuState == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    for (u32 i = 0; i < MAX_SELECTIONS; i++)
        sAccuseMenuState->spriteIds[i] = SPRITE_NONE;

    sAccuseMenuState->loadState = 0;
    sAccuseMenuState->savedCallback = callback;
    sAccuseMenuState->maxSelections = MAX_SELECTIONS;
    sAccuseMenuState->remainingSelections = sAccuseMenuState->maxSelections;

    SetMainCallback2(AccuseMenu_SetupCB);
}

static void AccuseMenu_ResetGpuRegsAndBgs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_WIN1H, 0);
    SetGpuReg(REG_OFFSET_WIN1V, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    CpuFill16(0, (void*)VRAM, VRAM_SIZE);
    CpuFill32(0, (void*)OAM, OAM_SIZE);
}

static void AccuseMenu_SetupCB(void)
{
    switch (gMain.state)
    {
    case 0:
        AccuseMenu_ResetGpuRegsAndBgs();
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (AccuseMenu_InitBgs())
        {
            sAccuseMenuState->loadState = 0;
            gMain.state++;
        }
        else
        {
            AccuseMenu_FadeAndBail();
            return;
        }
        break;
    case 3:
        if (AccuseMenu_LoadGraphics() == TRUE)
        {
            gMain.state++;
        }
        break;
    case 4:
        AccuseMenu_InitWindows();
        gMain.state++;
        break;
    case 5:
        Accuse_CreateProgBar();
        CreateTask(Task_AccuseMenuWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        CreateTask(Task_AccuseMenuScrollBg, 0);
        SetVBlankCallback(AccuseMenu_VBlankCB);
        SetMainCallback2(AccuseMenu_MainCB);
        break;
    }
}

static void Task_AccuseMenuMainInput(u8 taskId)
{
    TASK_DATA(state, listTaskId, p1, p2);

    struct ListMenu* list = (void*) gTasks[tData->listTaskId].data;
    s32 input = ListMenu_ProcessInput(tData->listTaskId);
    switch (input)
    {
    case LIST_HEADER:
        break;
    case LIST_NOTHING_CHOSEN:
        if(JOY_NEW(START_BUTTON))
            {
                tData->state = 0;
                tData->p1 = sAccuseMenuState->selected[0];
                tData->p2 = sAccuseMenuState->selected[1];
                if (sAccuseMenuState->maxSelections - sAccuseMenuState->remainingSelections < 2)
                {
                    PlaySE(SE_FAILURE);
                    break;
                }
                gTasks[taskId].func = Task_AccuseMenuHandleDeduction;
            }
        break;
    case LIST_CANCEL:
        if (!gTasks[taskId].data[1])
        {
            gSpecialVar_Result = MULTI_B_PRESSED;
            FadeScreen(FADE_TO_BLACK, 0);
            gTasks[taskId].func = Task_AccuseMenuWaitFadeAndExit;
        }
        break;
    default: {
        PlaySE(SE_SELECT);
        u32 max = sAccuseMenuState->maxSelections;
        u8 *count = &sAccuseMenuState->remainingSelections;
        u32 found = lsearch(&input, sAccuseMenuState->selected, max);
        if (found != UINT32_MAX)
        {
            size_t s = (sizeof(sAccuseMenuState->selected[0]) * (max - (found + 1)));
            u32 *listptr = &sAccuseMenuState->selected[found];
            memmove(listptr, listptr + 1, s);
            sAccuseMenuState->selected[max - 1] = 0xFF;
            (*count)++;
            goto finish;
        }

        if (*count == 0)
            break;
        u32 pos = max - *count;
        assertf(pos < MAX_SELECTIONS);
        sAccuseMenuState->selected[pos] = input;
        (*count)--;

    finish:
        RedrawEvidenceIcons();
        ListMenuRedrawRow(list, list->selectedRow);
        u32 color = 0;
        if (sAccuseMenuState->maxSelections - sAccuseMenuState->remainingSelections >= 2)
            color = sAccuseMenuWindowFontColors[FONT_GREEN].asU32;
        else
            color = sAccuseMenuWindowFontColors[FONT_RED].asU32;
        PrintAccuseMenuHints(color);
        gSpecialVar_Result = input;
        break;
    }
    }
}

static void Task_AccuseMenuHandleDeduction(u8 taskId)
{
    TASK_DATA(state, listTaskId, p1, p2);
    struct ListMenu *list = (void *)gTasks[tData->listTaskId].data;

    switch (tData->state)
    {
    case 0: {

        enum Evidence e = GetDeduction(tData->p1 - ITEM_EVIDENCE_START,
                                       tData->p2 - ITEM_EVIDENCE_START);

        struct EvidenceInfo c = gEvidence[e];

        if (e == EVD_COUNT || CheckBagHasItem(c.itemId, 1))
        {
            PlaySE(SE_FAILURE);
            gTasks[taskId].func = Task_AccuseMenuMainInput;
            return;
        }


        if (CheckBagHasSpace(c.itemId, 1))
            AddBagItem(c.itemId, 1);

        PlaySE(SE_SHINY);
        RemoveScrollIndicatorArrowPair(sAccuseMenuState->scrollIndicatorTask);
        PrintDeductionMessage(c);
        sAccuseMenuState->spriteIds[EVD_POS_RESULT] =
            CreateEvidenceIcon(EVD_POS_RESULT, c.itemId);
        ShowBg(2);
        tData->state++;
        break;
    }
    case 1:
        if (JOY_NEW(A_BUTTON))
        {
            sAccuseMenuState->remainingSelections = sAccuseMenuState->maxSelections;
            memset(sAccuseMenuState->selected, 0xFF, sizeof(sAccuseMenuState->selected));
            DestroyAllEvidenceIcons();
            DestroyEvidenceIcon(EVD_POS_RESULT);

            u32 evdCount = FillEvdList(sAccuseMenuState->evidence);
            list->template.totalItems = evdCount;
            list->template.items = sAccuseMenuState->evidence;

            u32 maxShowable = GetListMaxShowable(&list->template);
            if (list->template.totalItems > maxShowable)
            {
                if (list->selectedRow > maxShowable / 2)
                    list->selectedRow = maxShowable / 2;
                list->template.maxShowed = maxShowable;
            }
            else
            {
                list->template.maxShowed = list->template.totalItems;
            }
            tData->state++;
        }
        break;
    case 2:
        /* ClearAccuseMenuWinMsg(WIN_ACCUSE_MSG); */
        HideBg(2);
        sAccuseMenuState->scrollIndicatorTask = AddAccuseMenuScrollArrows(list);
        PrintAccuseMenuHints(sAccuseMenuWindowFontColors[FONT_RED].asU32);
        RedrawListMenu(tData->listTaskId);
        gTasks[taskId].func = Task_AccuseMenuMainInput;
    }
}

static void AccuseMenu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void AccuseMenu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_AccuseMenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        ClearTaskData(taskId);
        gTasks[taskId].func = Task_AccuseMenuInitList;
    }
}

static void Task_AccuseMenuInitList(u8 taskId)
{
    TASK_DATA(state, listTaskId);

    switch (tData->state)
    {
    case 0:
        tData->listTaskId = CreateEvidenceListMenu(&gMultiuseListMenuTemplate);
        tData->state++;
        break;
    case 1: {
        u8 listTaskId = tData->listTaskId;
        gTasks[taskId].func = Task_AccuseMenuMainInput;
        struct ListMenu *list = (void *)gTasks[listTaskId].data;
        ListMenuChangeSelectionFull(list, TRUE, FALSE, 0, TRUE);
    }
    }
}

static void AccuseMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list)
{
    if (onInit != TRUE)
        PlaySE(SE_SELECT);

    PrintDescription(itemIndex);
    PrintAccuseMenuItemName(itemIndex);
}

static const struct ScrollArrowsTemplate sEvidenceMenuScrollArrowTemplate =
{
    .firstArrowType = SCROLL_ARROW_UP,
    .firstX = 180,
    .firstY = 8,
    .secondArrowType = SCROLL_ARROW_DOWN,
    .secondX = 180,
    .secondY = 152,
    .fullyUpThreshold = 0,
    .fullyDownThreshold = 0,
    .tileTag = ACCUSE_TAG_SCROLL_ARROW,
    .palTag = ACCUSE_TAG_SCROLL_ARROW,
    .palNum = 0,
};

static u32 CreateEvidenceListMenu(struct ListMenuTemplate* template)
{

    sAccuseMenuState->evidence = AllocZeroed(sizeof(struct ListMenuItem) * gBagPockets[POCKET_EVIDENCE].capacity);

    if (sAccuseMenuState->evidence == NULL) {
        AccuseMenu_FadeAndBail(); 
        return 1;
    }
    struct ListMenuItem* items = sAccuseMenuState->evidence;

    u32 evdCount = FillEvdList(items);

    struct ListMenuTemplate* t = &gMultiuseListMenuTemplate;
    *t = sAccuseMenuListTemplate;
    t->items = items;
    t->windowId = WIN_ACCUSE_LIST;
    t->totalItems = evdCount;
    t->maxShowed = GetListMaxShowable(t);
    t->moveCursorFunc = AccuseMenu_MoveCursorFunc;
    t->itemPrintFunc  = AccuseMenuList_PrintFunc;

    u32 listTaskId = ListMenuInit(template, 0, 0);
    struct ListMenu* list = (void*)gTasks[listTaskId].data;

    sAccuseMenuState->scrollIndicatorTask = AddAccuseMenuScrollArrows(list);

    return  listTaskId;
}

static u32 AddAccuseMenuScrollArrows(struct ListMenu *list)
{
    gTempScrollArrowTemplate = sEvidenceMenuScrollArrowTemplate;
    gTempScrollArrowTemplate.fullyUpThreshold = 0;
    gTempScrollArrowTemplate.fullyDownThreshold =
        list->template.totalItems - list->template.maxShowed;

     return AddScrollIndicatorArrowPair(
        &gTempScrollArrowTemplate, &list->scrollOffset);
}

static u32 FillEvdList(struct ListMenuItem *items)
{
    u32 evdCount = BagPocket_CountUsedItemSlots(&gBagPockets[POCKET_EVIDENCE]);

    for (int i = 0; i < evdCount; i++)
    {
        struct EvidenceInfo e =
            gEvidence[GetBagItemId(POCKET_EVIDENCE, i) - ITEM_EVIDENCE_START];

        items[i] = (struct ListMenuItem){e.name, e.itemId};
    }

    return evdCount;
}

static u32 CreateEvidenceIcon(u32 pos, u32 itemId)
{
    u32 id = AddItemIconSprite(ACCUSE_TAG_P1 + pos, ACCUSE_TAG_P1 + pos, itemId);
    struct Sprite* sprite = &gSprites[id];
    sprite->x = sAccuseMenuIconPos.x + (pos % (MAX_SELECTIONS/2)) * 27;
    sprite->y = sAccuseMenuIconPos.y + (pos / (MAX_SELECTIONS/2)) * 27;
    return id;
}

static void DestroyEvidenceIcon(u32 pos)
{
    FreeSpriteTilesByTag(ACCUSE_TAG_P1 + pos);
    FreeSpritePaletteByTag(ACCUSE_TAG_P1 + pos);
    DestroySprite(&gSprites[sAccuseMenuState->spriteIds[pos]]);
    sAccuseMenuState->spriteIds[pos] = SPRITE_NONE;
}

static void DestroyAllEvidenceIcons(void)
{
    for (int i = 0; i < MAX_SELECTIONS; i++) {
        if (sAccuseMenuState->spriteIds[i] != SPRITE_NONE)
            DestroyEvidenceIcon(i);
    }
}

static void RedrawEvidenceIcons(void)
{
    u32 numSelected =
        sAccuseMenuState->maxSelections - sAccuseMenuState->remainingSelections;

    DestroyAllEvidenceIcons();

    for (u32 i = 0; i < numSelected; i++)
    {
        sAccuseMenuState->spriteIds[i] =
            CreateEvidenceIcon(i, sAccuseMenuState->selected[i]);
    }
}

static u32 GetListMaxShowable(struct ListMenuTemplate* t)
{
    u32 rowHeight = GetFontAttribute(t->fontId, FONTATTR_MAX_LETTER_HEIGHT)
                    + t->itemVerticalPadding;

    u32 availableHeight = GetWindowAttribute(t->windowId, WINDOW_HEIGHT) * 8
                         - t->upText_Y;

     return (availableHeight / rowHeight);
}

static void AccuseMenuList_PrintFunc(const struct ListMenu *list, u32 index, u8 y)
{
    const struct ListMenuTemplate *templ = &list->template;
    const struct ListMenuItem *item = &templ->items[index];
    u32 windowId = templ->windowId;
    u32 id = item->id;

    bool32 selected = lsearch(&id, sAccuseMenuState->selected, sAccuseMenuState->maxSelections) != UINT32_MAX;

    const u32 color = selected ? sAccuseMenuWindowFontColors[FONT_BLUE].asU32
                               : sAccuseMenuWindowFontColors[FONT_BLACK].asU32;

    const u8 *name = item->name;

    u8 fontId =
        GetFontIdToFit(name, FONT_SMALL_NARROW, 0, templ->textNarrowWidth);
    u32 x = (id == LIST_HEADER) ? templ->header_X : templ->item_X;

    struct AccuseMenuPrint p = {
        .font = fontId,
        .text = name,
        .window = windowId,
        .x = x,
        .y = y,
        .color.asU32 = color,
    };

    AccuseMenuPrintMsg(&p);
}

static void Task_AccuseMenuWaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sAccuseMenuState->savedCallback);
        AccuseMenu_FreeResources();
        DestroyTask(taskId);
    }
}
#define TILEMAP_BUFFER_SIZE (1024 * 2)
static bool8 AccuseMenu_InitBgs(void)
{
    ResetAllBgsCoordinates();

    sBg1TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg1TilemapBuffer == NULL)
    {
        return FALSE;
    }


    sBg2TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg2TilemapBuffer == NULL)
    {
        return FALSE;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sAccuseMenuBgTemplates, NELEMS(sAccuseMenuBgTemplates));

    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    SetBgTilemapBuffer(2, sBg2TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(2);

    ShowBg(0);
    ShowBg(1);
    ShowBg(2);

    return TRUE;
}
#undef TILEMAP_BUFFER_SIZE

static void AccuseMenu_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_AccuseMenuWaitFadeAndExit, 0);
    SetVBlankCallback(AccuseMenu_VBlankCB);
    SetMainCallback2(AccuseMenu_MainCB);
}

static bool8 AccuseMenu_LoadGraphics(void)
{
    switch (sAccuseMenuState->loadState)
    {
    case 0:
        DecompressAndLoadBgGfxUsingHeap(1, sAccuseMenuTiles, 0, 0, 0);
        DecompressAndLoadBgGfxUsingHeap(2, sAccuseMenuScrollingBgTiles, 0, 0, 0);
        sAccuseMenuState->loadState++;
        break;
    case 1:
        DecompressDataWithHeaderWram(sAccuseMenuTilemap, sBg1TilemapBuffer);
        DecompressDataWithHeaderWram(sAccuseMenuScrollingBgTilemap, sBg2TilemapBuffer);
        sAccuseMenuState->loadState++;
        break;
    case 2:
        LoadBgTiles(2, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, ACCUSE_MENU_BORDER_TILE);
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, BG_PLTT_ID(2), PLTT_SIZE_4BPP);
        LoadPalette(sAccuseMenuPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(sAccuseMenuScrollingBgPalette, BG_PLTT_ID(1), PLTT_SIZE_4BPP);
        LoadPalette(gMessageBox_Pal, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sAccuseMenuState->loadState++;
    default:
        sAccuseMenuState->loadState = 0;
        return TRUE;
    }
    return FALSE;
}

enum WindowTilePosition
{
    TILE_TOP_LEFT = 0,
    TILE_TOP,
    TILE_TOP_RIGHT,
    TILE_LEFT,
    TILE_CENTER,
    TILE_RIGHT,
    TILE_BOTTOM_LEFT,
    TILE_BOTTOM,
    TILE_BOTTOM_RIGHT,
    TILE_COUNT,
};

static void UNUSED DrawAccuseMenuWindowBorder(const struct WindowTemplate *template, u16 baseTileNum)
{
    u32 topLeft     = baseTileNum + TILE_TOP_LEFT;
    u32 top         = baseTileNum + TILE_TOP;
    u32 topRight    = baseTileNum + TILE_TOP_RIGHT;
    u32 left        = baseTileNum + TILE_LEFT;
    u32 right       = baseTileNum + TILE_RIGHT;
    u32 bottomLeft  = baseTileNum + TILE_BOTTOM_LEFT;
    u32 bottom      = baseTileNum + TILE_BOTTOM;
    u32 bottomRight = baseTileNum + TILE_BOTTOM_RIGHT;

    const u8 bg = template->bg;
    const s16 winLeft = template->tilemapLeft;
    const s16 winTop = template->tilemapTop;
    const s16 width = template->width;
    const s16 height = template->height;

    FillBgTilemapBufferRect(bg, topLeft, winLeft - 1, winTop - 1, 1, 1, 2);
    FillBgTilemapBufferRect(bg, top, winLeft, winTop - 1, width, 1, 2);
    FillBgTilemapBufferRect(bg, topRight, winLeft + width, winTop - 1, 1, 1, 2);
    FillBgTilemapBufferRect(bg, left, winLeft - 1, winTop, 1, height, 2);
    FillBgTilemapBufferRect(bg, right, winLeft + width, winTop, 1, height, 2);
    FillBgTilemapBufferRect(bg, bottomLeft, winLeft - 1, winTop + height, 1, 1, 2);
    FillBgTilemapBufferRect(bg, bottom, winLeft, winTop + height, width, 1, 2);
    FillBgTilemapBufferRect(bg, bottomRight, winLeft + width, winTop + height, 1, 1, 2);

    CopyBgTilemapBufferToVram(bg);
}

static void AccuseMenu_InitWindows(void)
{
    InitWindows(sAccuseMenuWindowTemplates);

    u32 windowId = 0;
    SetWindowAttribute(windowId, WINDOW_BASE_BLOCK, 1);
    while (GetWindowAttribute(windowId, WINDOW_BG) != 0xFF) { 
        u32 b = GetWindowAttribute(windowId, WINDOW_BASE_BLOCK);
        u32 w = GetWindowAttribute(windowId, WINDOW_WIDTH);
        u32 h = GetWindowAttribute(windowId, WINDOW_HEIGHT);
        SetWindowAttribute(++windowId, WINDOW_BASE_BLOCK, b+h*w);
    }
    ScheduleBgCopyTilemapToVram(0);
    FillWindowPixelBuffer(WIN_ACCUSE_LIST, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    /* DrawAccuseMenuMsgWin(WIN_ACCUSE_MSG); */
    PrintAccuseMenuHints(sAccuseMenuWindowFontColors[FONT_RED].asU32);
    for (int i = 0; i < WIN_ACCUSE_COUNT; i++)
    {
        PutWindowTilemap(i);
        CopyWindowToVram(i, COPYWIN_FULL);
    }
}

static void DrawAccuseMenuMsgWin(u8 winId)
{
    LoadMessageBoxGfx(winId, ACCUSE_MENU_DIALOG_TILE, BG_PLTT_ID(15));
    DrawDialogFrameWithCustomTile(winId, TRUE, ACCUSE_MENU_DIALOG_TILE);
    CopyWindowToVram(winId, COPYWIN_FULL);
}

static void ClearAccuseMenuWinMsg(u8 winId)
{
    LoadMessageBoxGfx(winId, ACCUSE_MENU_DIALOG_TILE, BG_PLTT_ID(15));
    DrawDialogFrameWithCustomTile(winId, TRUE, ACCUSE_MENU_DIALOG_TILE);
    CopyWindowToVram(winId, COPYWIN_GFX);
}

static void PrintDeductionMessage(struct EvidenceInfo e)
{
    /* gTextFlags.canABSpeedUpPrint = TRUE; */
    /* struct AccuseMenuPrint p = { */
    /*     .font = FONT_SMALL, */
    /*     .window = WIN_ACCUSE_MSG, */
    /*     .text = gStringVar4, */
    /*     .color = sAccuseMenuWindowFontColors[FONT_BLACK], */
    /* }; */
    /* StringCopy(gStringVar1, GetItemName(e.itemId)); */
    /* StringExpandPlaceholders(gStringVar4, sText_DeductionSuccess); */
    /* AccuseMenuPrintMsg(&p); */
}

static void PrintDescription(enum Item id)
{
    FillWindowPixelBuffer(WIN_ACCUSE_DESC, PIXEL_FILL(0));
    struct AccuseMenuPrint p = {
        .font = FONT_SMALL_NARROWER,
        .window = WIN_ACCUSE_DESC,
        .x = 4,
        .y = 0,
        .text = gStringVar4,
        .color = {{
            TEXT_COLOR_TRANSPARENT,
            TEXT_COLOR_DARK_GRAY,
            TEXT_COLOR_LIGHT_GRAY,
        }},
    };
    StringCopy(gStringVar4, GetItemDescription(id));
    StripLineBreaks(gStringVar4);
    u32 w = GetWindowAttribute(p.window, WINDOW_WIDTH) * 8;
    BreakStringAutomatic(gStringVar4, w, 8, p.font, HIDE_SCROLL_PROMPT);
    AccuseMenuPrintMsg(&p);
}

static void PrintAccuseMenuHints(u32 color)
{
    return;
    const u8 fontId = FONT_SMALL;
    const u8* text = COMPOUND_STRING("{START_BUTTON} Deduce!");
    s16 x = GetStringCenterAlignXOffset(fontId, text, GetWindowAttribute(WIN_ACCUSE_HINTS, WINDOW_WIDTH) * 8);
    FillWindowPixelBuffer(WIN_ACCUSE_HINTS, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    struct AccuseMenuPrint p = {
        .font = fontId,
        .window = WIN_ACCUSE_HINTS,
        .x = x,
        .y = 1,
        .text = text,
        .color.asU32 = color,
    };
    AccuseMenuPrintMsg(&p);
    CopyWindowToVram(WIN_ACCUSE_HINTS, COPYWIN_GFX);
}

static void PrintAccuseMenuItemName(enum Item item)
{
    FillWindowPixelBuffer(WIN_ACCUSE_NAME, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    struct AccuseMenuPrint p = {
        .font = FONT_SMALL_NARROWER,
        .window = WIN_ACCUSE_NAME,
        .x = 0,
        .y = 0,
        .text = GetItemName(item),
        .color = sAccuseMenuWindowFontColors[FONT_WHITE],
    };

    AccuseMenuCenterText(&p);
    AccuseMenuPrintMsg(&p);
    CopyWindowToVram(WIN_ACCUSE_NAME, COPYWIN_GFX);
}

static void AccuseMenuPrintMsg(struct AccuseMenuPrint *p)
{
    const u8 colors[3] = {
        (p->color.asU32 & 0xFF),
        ((p->color.asU32 >> 8) & 0xFF),
        ((p->color.asU32 >> 16) & 0xFF),
    };
    AddTextPrinterParameterized4(p->window, p->font, p->x, p->y, 0, 0, colors, 0, p->text);
}

static void AccuseMenuCenterText(struct AccuseMenuPrint *p)
{
    u8 pixelWidth = GetWindowAttribute(p->window, WINDOW_WIDTH) * 8;
    u32 xOffset = GetStringCenterAlignXOffset(p->font, p->text, pixelWidth);
    p->x = xOffset;
}

static void Task_AccuseMenuScrollBg(u8 taskId)
{
    s16* tAccumulator = &gTasks[taskId].data[0];

    *tAccumulator += 104;

    s16 pixels = *tAccumulator >> 8;
    *tAccumulator &= 0xFF;

    if (pixels != 0) {
        ChangeBgX(2, pixels << 8, BG_COORD_ADD);
        ChangeBgY(2, pixels << 8, BG_COORD_ADD);
    }
}

// For Testing
static void Task_ProgressBarHandleInput(u8 taskId)
{
    TASK_DATA(barId);
    constexpr u32 step = 1;

    if (JOY_NEW(L_BUTTON) && JOY_NEW(R_BUTTON)) {
        ProgBar_Destroy(&sAccuseProgBarTemplate, tData->barId);
        DestroyTask(taskId);
        return;
    }

    if (JOY_HELD(R_BUTTON))
        sAccuseMenuProgTracker.curr = AddClamped(0, sAccuseMenuProgTracker.max, sAccuseMenuProgTracker.curr, step);
    else if (JOY_HELD(L_BUTTON))
        sAccuseMenuProgTracker.curr = SubtractClamped(0, sAccuseMenuProgTracker.max, sAccuseMenuProgTracker.curr, step);

    if (JOY_HELD(L_BUTTON | R_BUTTON))
    {
        ProgBar_FillWithEmpty(&sAccuseProgBarTemplate, &sAccuseMenuProgTracker, tData->barId);
        u32 filledPixels = ProgBar_CalcFilledPixels(&sAccuseMenuProgTracker, sAccuseProgBarTemplate.totalBarPixels);
        ProgBar_Update(&sAccuseProgBarTemplate, &sAccuseMenuProgTracker, filledPixels, tData->barId);
    }
}

static void Accuse_CreateProgBar()
{
    sAccuseMenuProgTracker.max = 100;
    sAccuseMenuProgTracker.curr = 100;
    u32 barId = ProgBar_CreateBar(&sAccuseProgBarTemplate,&sAccuseMenuProgTracker);
    u32 taskId = CreateTask(Task_ProgressBarHandleInput, 0);
    TASK_DATA(barId);
    tData->barId = barId;
}

static void AccuseMenu_FreeResources(void)
{
    TRY_FREE_AND_SET_NULL(sAccuseMenuState->evidence);
    TRY_FREE_AND_SET_NULL(sAccuseMenuState);
    TRY_FREE_AND_SET_NULL(sBg1TilemapBuffer);
    FreeAllWindowBuffers();
    ResetSpriteData();
}
