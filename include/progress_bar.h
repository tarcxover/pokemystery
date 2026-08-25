#pragma once

#include "task.h"
#define PROG_BAR_TAG 0x2001

typedef struct ProgBar_Template
{
    u16 totalBarPixels;
    u8 numStartTiles;
    u8 numEndTiles;
    s8 xOffset;
    s8 yPos;
    u32 tileTag;
    u32 palTag;
    const u16* pal;
    const Tile4BPP *barGfx;
} ProgBar_Template;

typedef struct ProgBar_Tracker
{
    s32 curr;
    s32 max;
    s32 target;
} ProgBar_Tracker;

typedef struct ProgBar_State
{
    u8 barSpriteId;
    u8 taskId;
    const ProgBar_Template *template;
    bool32 animating;
    ProgBar_Tracker *tracker;
} ProgBar_State;

enum ProgBar_Threshold {
    PROG_THRESHOLD_LOW = 25,
    PROG_THRESHOLD_MED = 75,
    PROG_THRESHOLD_HIGH = 100,
};


STATIC_ASSERT(sizeof(ProgBar_State) <= sizeof(((struct Task *)NULL)->data), ProgBarStateTooLargeForTaskData);

u32 ProgBar_CreateBar(const ProgBar_Template* t, ProgBar_Tracker* tracker);
void ProgBar_Update(const ProgBar_Template* t, ProgBar_Tracker* tracker, u32 filledPixels, u32 barId);
void ProgBar_Destroy(const ProgBar_Template* t, u32 barSpriteId);
void ProgBar_FillWithEmpty(const ProgBar_Template* t, ProgBar_Tracker* tracker, u32 barId);
u32 ProgBar_CalcFilledPixels(ProgBar_Tracker* tracker, u32 totalBarPixels);
