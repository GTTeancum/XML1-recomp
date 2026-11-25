#pragma once
#include <stdint.h>
#include <stddef.h>
/* V9 adds an eviction count + token IDs before each texture token, and
 * index_count/unique_vertex_count + vertices + uint16 indices after textures.
 * B1 wraps an ordered list of commands with one final acknowledgement. Only
 * its final command can present; F9/R9 completion still covers all prior work.
 * Evictions retire token ownership in stream order, never guest fence state. */
/* V9 primary width=height=packed=0 represents a NULL texture binding and has
 * no texture token/payload, matching the existing absent secondary texture.
 * Vertex counts and layout are unaffected. Older versions require a texture. */
/* D8 carries the same version-8 draw records as F8/R8, but acknowledges
 * ordered submission only. It neither presents nor publishes GPU completion;
 * a subsequent F8/R8 must complete all preceding D8 draws and C5 clears. */
/* C6 preserves C5's five uint32 fields and 16-byte rectangle layout, but
 * every rectangle is already clipped to the Xbox viewport active at Clear.
 * Zero rectangles mean no pixels (not the whole target); replay C4/C5 using
 * their historical behavior. Like C5, C6 does not signal a guest fence. */
/* Version6 packs the explicit mip count above the low-byte Xbox format. Older
 * packets carry a bare format and therefore represent one level. */
static unsigned xml1_texture_levels(uint32_t format) { return (format>>8)?(format>>8):1; }
static size_t xml1_texture_level_bytes(unsigned width,unsigned height,unsigned format) {
    return (format==12||format==14)?(size_t)((width+3)/4)*((height+3)/4)*(format==12?8:16):(size_t)width*height*((format==6||format==7)?4:1);
}
static size_t xml1_texture_bytes(unsigned width,unsigned height,uint32_t packed) {
    unsigned format=packed&255,levels=xml1_texture_levels(packed),max_levels=1;
    if(!width||!height||width>4096||height>4096||(format!=0&&format!=6&&format!=7&&format!=11&&format!=12&&format!=14&&format!=25)) return 0;
    for(unsigned n=width>height?width:height;n>1;n>>=1) ++max_levels;
    if(levels>max_levels) return 0;
    /* P8 carries a draw-time ARGB palette before its linear index mip chain. */
    size_t total=format==11?1024:0;
    for(unsigned level=0;level<levels;++level) {
        total+=xml1_texture_level_bytes(width,height,format);
        width=width>1?width/2:1; height=height>1?height/2:1;
    }
    return total;
}
/* Fixed-function XYZ, optional normal/diffuse, and up to eight coordinate
 * sets. Each set has its own two-bit dimension code: 2, 3, 4, or 1 floats.
 * Conversion Sequencer uses 0x500452: XYZ, normal, diffuse, 2/2/3/3 UVs. */
static unsigned xml1_fvf_stride(uint32_t fvf) {
    if(fvf==0x80000001u)return 120; /* CPU NV vertex result, homogeneous DX8 VS input. */
    if((fvf&~0xffff0f52u)||!(fvf&2)) return 0;
    unsigned count=(fvf>>8)&15, sizes=fvf>>16;
    if(count>8 || (count<8 && (sizes>>(count*2)))) return 0;
    unsigned stride=12+((fvf&0x10)?12:0)+((fvf&0x40)?4:0);
    static const unsigned components[4]={2,3,4,1};
    for(unsigned i=0;i<count;++i)stride+=4*components[(sizes>>(i*2))&3];
    return stride;
}
