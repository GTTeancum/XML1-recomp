#pragma once
#include <stdint.h>

typedef struct xml1_clear_rect {
    int32_t x1, y1, x2, y2;
} xml1_clear_rect;

/* 00362603..003626A6: an empty input list means the current Xbox viewport.
 * Explicit rectangles are in target coordinates, intersected with that same
 * viewport. A disjoint or inverted rectangle does not clear anything. */
static inline int xml1_clear_region(const uint32_t view[4], uint32_t width, uint32_t height,
                                    const xml1_clear_rect *requested, xml1_clear_rect *out) {
    if (view[0]>=width || view[1]>=height || width>INT32_MAX || height>INT32_MAX) return 0;
    uint64_t right=(uint64_t)view[0]+view[2], bottom=(uint64_t)view[1]+view[3];
    xml1_clear_rect r={(int32_t)view[0], (int32_t)view[1],
                       (int32_t)(right<width?right:width), (int32_t)(bottom<height?bottom:height)};
    if (requested) {
        if (requested->x1>r.x1) r.x1=requested->x1;
        if (requested->y1>r.y1) r.y1=requested->y1;
        if (requested->x2<r.x2) r.x2=requested->x2;
        if (requested->y2<r.y2) r.y2=requested->y2;
    }
    if (r.x2<=r.x1 || r.y2<=r.y1) return 0;
    *out=r; return 1;
}
