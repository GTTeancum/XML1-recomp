#pragma once
#include <cstdint>
struct Xml1ContentRect { long x,y,width,height; };
// Retail 480p uses 720 storage pixels for a 4:3 picture (non-square pixels).
// The game's widescreen mode instead supplies a square-pixel 1280x720 frame.
inline unsigned xml1_guest_display_width(unsigned width,unsigned height) {
    return width==720 && height==480?640:width;
}
inline Xml1ContentRect xml1_fit_content(long width,long height,long aspect_width,long aspect_height) {
    if(width<=0 || height<=0 || aspect_width<=0 || aspect_height<=0)return {0,0,0,0};
    long w=width,h=(long)((int64_t)width*aspect_height/aspect_width);
    if(h>height){h=height;w=(long)((int64_t)height*aspect_width/aspect_height);}
    if(w<1)w=1;if(h<1)h=1;
    return {(width-w)/2,(height-h)/2,w,h};
}
// Fit the actual picture, rather than fitting its already-letterboxed canvas
// a second time. Child-window clipping hides surplus canvas outside the parent.
inline Xml1ContentRect xml1_presentation_rect(long width,long height,long render_width,long render_height,long aspect_width,long aspect_height) {
    auto source=xml1_fit_content(render_width,render_height,aspect_width,aspect_height);
    auto target=xml1_fit_content(width,height,aspect_width,aspect_height);
    if(!source.width || !source.height)return {0,0,0,0};
    return {target.x-(long)((int64_t)source.x*target.width/source.width),
        target.y-(long)((int64_t)source.y*target.height/source.height),
        (long)((int64_t)render_width*target.width/source.width),
        (long)((int64_t)render_height*target.height/source.height)};
}
