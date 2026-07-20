#ifndef EVIDENCE_H
#define EVIDENCE_H

#include "global.h"
#include "constants/evidence.h"
#include "constants/items.h"


struct EvidenceInfo
{
    const u8 *name;
    const u8 *description;
    enum Item itemId;
};


struct DeductionInfo
{
    enum Evidence premises[2];
    enum Evidence conclusion;
};

const struct DeductionInfo gDeductions[] = {
    {
        .premises = { EVD_BLOODY_DOORFRAME, EVD_LOCKED_DOOR },
        .conclusion = EVD_VICTIM_MURDERED,
    },
};

#endif /* end of include guard: EVIDENCE_H */
