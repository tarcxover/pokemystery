#include "global.h"
#include "assertf.h"
#include "constants/evidence.h"
#include "constants/items.h"
#include "event_data.h"
#include "evidence.h"
#include "gba/isagbprint.h"
#include "script.h"

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
    enum Evidence e = GetDeduction(EVD_LOCKED_DOOR, EVD_BLOODY_DOORFRAME);
    assertf(e != EVD_COUNT){};
    DebugPrintf("Recieved Evidence %d", e);
}

bool32 ScrCmd_evidencetoitem(struct ScriptContext *ctx)
{
    enum Evidence evd = ScriptReadHalfword(ctx);
    fatal_assertf(evd < EVD_COUNT);
    gSpecialVar_Result = gEvidence[evd].itemId;
    return FALSE;
}
