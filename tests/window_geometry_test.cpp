#include "../renderer/window_geometry.h"
#include <cstdio>
#include <cstdlib>
int main() {
    const long resolutions[][2]={{1920,1080},{1280,720},{640,480},{1600,1200},{1920,1200},{3440,1440},{5120,1440},{1080,1920},{1366,768}};
    const long work[][2]={{1920,1040},{1366,728},{3840,2080},{1024,728}};
    for(auto &r:resolutions)for(auto &a:work)for(long border:{8L,16L,32L})for(bool enlarge:{false,true}) {
        auto s=xml1_fit_window(r[0],r[1],a[0],a[1],border,border+31,enlarge);
        if(s.width>a[0] || s.height>a[1] || s.width<=border || s.height<=border+31)return 1;
        const auto delta=std::abs((s.width-border)*r[1]-(s.height-border-31)*r[0]);
        if(delta>std::max(r[0],r[1]))return 2;
        if(!enlarge && (s.width-border>r[0] || s.height-border-31>r[1]))return 3;
    }
    puts("Window sizing: work-area bounds, decorations, aspect ratio, maximize and original resolution passed");
}
