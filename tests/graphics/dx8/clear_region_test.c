#include "graphics/dx8/clear_region.h"
#include <stdio.h>

#define CHECK(x) do { if (!(x)) {fprintf(stderr,"FAIL at %d: %s\n",__LINE__,#x);return 1;} } while (0)
#define EQUAL(r,a,b,c,d) ((r).x1==(a) && (r).y1==(b) && (r).x2==(c) && (r).y2==(d))
int main(void) {
    const uint32_t full[]={0,0,640,480}, panel[]={100,50,200,60}, zero[]={100,50,0,60};
    const uint32_t large[]={639,479,UINT32_MAX,UINT32_MAX}, offscreen[]={UINT32_MAX,0,2,2};
    xml1_clear_rect r;
    CHECK(xml1_clear_region(full,640,480,NULL,&r) && EQUAL(r,0,0,640,480));
    CHECK(xml1_clear_region(panel,640,480,NULL,&r) && EQUAL(r,100,50,300,110));
    xml1_clear_rect partial={-10,72,2000,140};
    CHECK(xml1_clear_region(panel,640,480,&partial,&r) && EQUAL(r,100,72,300,110));
    xml1_clear_rect inside={102,53,106,60}, outside={0,0,99,110}, touch={0,0,100,110}, inverted={145,75,140,90};
    CHECK(xml1_clear_region(panel,640,480,&inside,&r) && EQUAL(r,102,53,106,60));
    CHECK(!xml1_clear_region(panel,640,480,&outside,&r));
    CHECK(!xml1_clear_region(panel,640,480,&touch,&r));
    CHECK(!xml1_clear_region(panel,640,480,&inverted,&r));
    CHECK(!xml1_clear_region(zero,640,480,NULL,&r));
    CHECK(!xml1_clear_region(offscreen,640,480,NULL,&r));
    CHECK(xml1_clear_region(large,640,480,NULL,&r) && EQUAL(r,639,479,640,480));
    puts("PASS native viewport clear: full, changed viewport, intersections, empty/invalid areas and oversize extents");
    return 0;
}
