#ifndef CONSTANTS_EVIDENCE_H
#define CONSTANTS_EVIDENCE_H

#define UNPACK_TO_EVD_ID(id, ...) APPEND_COMMA(CAT(EVD_, id))
#define COUNT_OF_EVIDENCE         (0 FOREACH_EVIDENCE(PLUS_ONE))

#include "constants/evidence_macros.h"

enum Evidence : u16 {
    FOREACH_EVIDENCE(UNPACK_TO_EVD_ID) EVD_COUNT = COUNT_OF_EVIDENCE,
};

#endif /* end of include guard: CONSTANTS_EVIDENCE_H */
