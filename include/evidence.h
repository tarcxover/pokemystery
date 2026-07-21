#ifndef EVIDENCE_H
#define EVIDENCE_H

#include "global.h"
#include "constants/evidence.h"
#include "constants/evidence_macros.h"
#include "constants/items.h"

#define EVD(e) CAT(EVD_, e)
#define EVD_ITEM(e) CAT(ITEM_, e)
#define _EVD_TO_ITEM_HELPER(e, ...) APPEND_COMMA([EVD(e)] = EVD_ITEM(e))

const enum Item EvidenceToItem[EVD_COUNT] = {
    FOREACH_EVIDENCE(_EVD_TO_ITEM_HELPER)
};

struct EvidenceInfo
{
    const u8 *name;
    const u8 *description;
    const u8 *details;
    enum Item itemId;
};

struct DeductionInfo
{
    enum Evidence premises[2];
    enum Evidence conclusion;
};

// Generates gEvidence from an X-Macro table
#define _GEVD_HELPER(id, _name, desc, det, ...) \
    [EVD(id)] = {                               \
        .name = _name,                          \
        .description = desc,                    \
        .details = det,                         \
        .itemId = EVD_ITEM(id),                 \
    },
const struct EvidenceInfo gEvidence[EVD_COUNT] = {
    FOREACH_EVIDENCE(_GEVD_HELPER)
};
#undef _GEVD_HELPER

const struct DeductionInfo gDeductions[] = {
    {
        .premises = {EVD_BLOODY_DOORFRAME, EVD_LOCKED_DOOR},
        .conclusion = EVD_VICTIM_MURDERED,
    },
};

#endif /* end of include guard: EVIDENCE_H */
