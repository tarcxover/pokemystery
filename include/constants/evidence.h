#ifndef CONSTANTS_EVIDENCE_H
#define CONSTANTS_EVIDENCE_H

#define _SUSPECT_HELPER(suspect) APPEND_COMMA(CAT(SUSPECT_, suspect))

#define UNPACK_TO_EVD_ID(id, ...) APPEND_COMMA(CAT(EVD_, id))

#define _QUESTION_HELPER(question, ...) APPEND_COMMA(CAT(QUESTION_, question))

#define COUNT_OF_EVIDENCE         (0 FOREACH_EVIDENCE(PLUS_ONE))

#include "constants/evidence_macros.h"

enum Evidence : u16 {
    FOREACH_EVIDENCE(UNPACK_TO_EVD_ID) EVD_COUNT = COUNT_OF_EVIDENCE,
};

enum Suspects : u16 {
    FOREACH_SUSPECT(_SUSPECT_HELPER)
};


enum Questions : u16 {
    FOREACH_QUESTION(_QUESTION_HELPER)
    QUESTION_COUNT
};


#endif /* end of include guard: CONSTANTS_EVIDENCE_H */
