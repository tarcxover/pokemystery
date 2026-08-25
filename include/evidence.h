#ifndef EVIDENCE_H
#define EVIDENCE_H

#include "global.h"
#include "constants/evidence.h"
#include "constants/items.h"
#include "metaprogram.h"

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
    const enum Suspects* suspects;
    const enum Questions* questions;
    u8 score;
};

enum { DEDUCTION_COUNT = (0 FOREACH_DEDUCTION(PLUS_ONE)) };

struct DeductionInfo
{
    enum Evidence premises[2];
    enum Evidence conclusion;
};

extern const struct EvidenceInfo gEvidence[EVD_COUNT];
extern const struct DeductionInfo gDeductions[DEDUCTION_COUNT];


extern enum Evidence gAccuseEvidence[4];

enum Evidence GetDeduction(enum Evidence p1, enum Evidence p2);
const u8* GetQuestionText(enum Questions q);
const u8* GetSuspectText(enum Suspects s);

#endif /* end of include guard: EVIDENCE_H */
