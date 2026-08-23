#pragma once

#define SUBSPRITE_SHAPE(dim) \
    .shape = SPRITE_SHAPE(dim), .size = SPRITE_SIZE(dim)

#define SUBSPRITE(_x, _y, dim, offset, prio) \
    {                                        \
        .x = _x,                             \
        .y = _y,                             \
        SUBSPRITE_SHAPE(dim),                \
        .tileOffset = offset,                \
        .priority = prio,                    \
    }

#define SUBSPRITE_TABLE_ENTRY(x) {ARRAY_COUNT(x), x}
