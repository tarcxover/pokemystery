#include "global.h"
#include "assertf.h"
#include "constants/evidence.h"
#include "constants/item.h"
#include "constants/items.h"
#include "event_data.h"
#include "evidence.h"
#include "gba/isagbprint.h"
#include "item.h"
#include "list_menu.h"
#include "malloc.h"
#include "script.h"
#include "script_menu.h"
#include "string_util.h"
#include <stdint.h>

#define PREMISE_KEY(a, b)            \
    ({                               \
        u16 _a = (a);                \
        u16 _b = (b);                \
        if (_a > _b)                 \
            Swap(_a, _b);            \
        (((u32)_a << 16) | (u32)_b); \
    })

static enum Evidence GetDeduction(enum Evidence p1, enum Evidence p2)
{
    assertf(p1 != p2, "p1 (%d) is equal to p2 (%d)", p1, p2) { return EVD_COUNT; }
    u32 key = PREMISE_KEY(p1, p2);
    for (u32 i = 0; i < NELEMS(gDeductions); i++)
    {
        const struct DeductionInfo *d = &gDeductions[i];
        u32 candidate = PREMISE_KEY(d->premises[0], d->premises[1]);
        if (key == candidate)
            return d->conclusion;
    }
    return EVD_COUNT;
}

void TestEvidence(void)
{
    enum Evidence p1 = EVD_LOCKED_DOOR;
    enum Evidence p2 = EVD_BLOODY_DOORFRAME;
    enum Evidence e = GetDeduction(p1, p2);
    assertf(e != EVD_COUNT){};
    DebugPrintf("Deduced that %S and %S imply %S", gEvidence[p1].name,gEvidence[p2].name,gEvidence[e].name);
}

u32 GetHeldEvidenceCount(void)
{
    struct BagPocket *pocket = &gBagPockets[POCKET_EVIDENCE];
    u8 usedSlots = 0;

    for (u32 i = 0; i < pocket->capacity; i++)
    {
        if (BagPocket_GetSlotData(pocket, i).itemId != ITEM_NONE)
            usedSlots++;
    }
    return usedSlots;
}

void PushEvidenceToDynMultiStack()
{
    u32 count = GetHeldEvidenceCount();

    for (u32 pos = 0; pos < count; pos++)
    {
        enum Item itemId = GetBagItemId(POCKET_EVIDENCE, pos);
        u8* nameBuffer = Alloc(100);
        StringExpandPlaceholders(nameBuffer, GetItemName(itemId));
        struct ListMenuItem res = {nameBuffer, itemId};
        MultichoiceDynamic_PushElement(res);
    }
}

bool32 ScrCmd_evidencetoitem(struct ScriptContext *ctx)
{
    enum Evidence evd = VarGet(ScriptReadHalfword(ctx));
    fatal_assertf(evd < EVD_COUNT);
    gSpecialVar_Result = gEvidence[evd].itemId;
    return FALSE;
}

bool32 ScrCmd_getdeduction(struct ScriptContext *ctx)
{
    enum Evidence p1 = ScriptReadHalfword(ctx);
    enum Evidence p2 = ScriptReadHalfword(ctx);
    enum Evidence c = GetDeduction(p1, p2);
    gSpecialVar_Result = c;
    return FALSE;
}

bool32 ScrCmd_getheldevidencecount(struct ScriptContext *ctx)
{
    gSpecialVar_Result = GetHeldEvidenceCount();
    return FALSE;
}

bool32 ScrCmd_getevidenceatpos(struct ScriptContext *ctx)
{
    u32 pos = VarGet(ScriptReadHalfword(ctx));
    enum Item itemId = GetBagItemId(POCKET_EVIDENCE, pos);
    assertf(itemId > ITEM_EVIDENCE_START && itemId < ITEM_EVIDENCE_START + EVD_COUNT)
    {
        gSpecialVar_Result = UINT8_MAX;
        return FALSE;
    }
    gSpecialVar_Result = itemId - ITEM_EVIDENCE_START;
    return FALSE;
}

bool32 ScrCmd_dynmultipushheldevidence(struct ScriptContext *ctx)
{
    Script_RequestEffects(SCREFF_V1 | SCREFF_HARDWARE);
    PushEvidenceToDynMultiStack();
    return FALSE;
}
