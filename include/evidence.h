#ifndef EVIDENCE_H
#define EVIDENCE_H

#include "global.h"
#include "constants/evidence.h"
#include "constants/items.h"

#define EVD(e) CAT(EVD_, e)
#define EVD_ITEM(e) CAT(ITEM_, e)
#define _EVD_TO_ITEM_HELPER(e, ...) APPEND_COMMA([EVD(e)] = EVD_ITEM(e))

extern const enum Item EvidenceToItem[EVD_COUNT];

struct EvidenceInfo
{
    const u8 *name;
    const u8 *description;
    const u8 *details;
    enum Item itemId;
};

enum { DEDUCTION_COUNT = (0 FOREACH_DEDUCTION(PLUS_ONE)) };

struct DeductionInfo
{
    enum Evidence premises[2];
    enum Evidence conclusion;
};

extern const struct EvidenceInfo gEvidence[EVD_COUNT];
extern const struct DeductionInfo gDeductions[DEDUCTION_COUNT];


enum Evidence GetDeduction(enum Evidence p1, enum Evidence p2);

#endif /* end of include guard: EVIDENCE_H */
