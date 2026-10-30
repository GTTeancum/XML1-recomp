#include "diagnostics/performance_log.h"
#include "graphics/dx8/vertex_program.h"
#include "xbox_memory_layout.h"
#include "graphics/dx8/dx8_packet.h"
#include "input/guest_input.h"
#include "ui/pc_menu.h"
#include "platform/windows/fair_gate.h"
#include "graphics/dx8/light_state.h"
#include "platform/windows/shared_completion.h"
#include "platform/windows/worker_lifetime.h"
#include "graphics/dx8/texture_wire_cache.h"
#include "../../../external/xboxrecomp/src/d3d/d3d8_swizzle.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
extern RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp;
extern ptrdiff_t g_xbox_mem_offset;

static int enabled=-1;
static uint32_t matrices[10][16], matrix_mask, viewport[6], stream, stride, textures[4], fvf, pixel_shader;
static float vertex_constants[192][4],vertex_offset[4],vertex_scale[4];
static xml1_vertex_program vertex_program;
static uint32_t vertex_program_words[1024],vertex_program_count;
static uint32_t vertex_decl[0x114/4];
static uint32_t methods[0x800], method_set[0x800];
static uint32_t material[17];
static xml1_light_state light_state;
static int material_valid;
static unsigned char *packet;
static size_t used, capacity;
static unsigned char *ordered_packet;
static size_t ordered_used,ordered_capacity;
static uint32_t ordered_commands;
static uint32_t draws, frames;
static uint32_t source_dimensions[2];
static unsigned menu_item;
static struct { unsigned command,item; } menu_commands[256];
static float menu_rect[4];
static int menu_slider_trace_active;
static void menu_current_owner(void) {
    /* CMenuManager singleton (00183D20), current menu field (00181810). */
    unsigned manager=*(const unsigned *)((uintptr_t)g_xbox_mem_offset+0x577210);
    unsigned owner=manager?*(const unsigned *)((uintptr_t)g_xbox_mem_offset+manager+0xC08):0;
    xml1_pc_native_menu(owner);
    xml1_pc_native_menu_type(owner?*(const unsigned *)((uintptr_t)g_xbox_mem_offset+owner):0);
}
void xml1_graphics_menu_vertex_owner(unsigned address) {
    static unsigned reports;
    if(menu_item && reports++<4 && getenv("XML1_PC_NATIVE_BOUNDS"))
        fprintf(stderr,"[PC VERTEX OWNER] item=%08X address=%08X\n",menu_item,address);
    xml1_pc_native_vertex_owner(address,menu_item);
}
void xml1_graphics_menu_writer(unsigned writer,unsigned target,const unsigned *fields) {
    static unsigned previous, reports;
    if((!menu_item && !xml1_pc_native_tracking()) || writer==previous || reports>=12 || !getenv("XML1_PC_NATIVE_BOUNDS"))return;
    previous=writer;++reports;
    fprintf(stderr,"[PC WRITER] item=%08X writer=%08X target=%08X fields",menu_item,writer,target);
    for(unsigned i=0;i<8;++i)fprintf(stderr," %08X",fields[i]);
    fprintf(stderr,"\n");
}
void xml1_graphics_menu_begin(unsigned item) {
    menu_current_owner();
    menu_item=xml1_pc_native_interested(item)?item:0;
    menu_rect[0]=menu_rect[1]=FLT_MAX;
    menu_rect[2]=menu_rect[3]=-FLT_MAX;
}
void xml1_graphics_menu_end(void) {
    if(menu_item && menu_rect[0]<=menu_rect[2] && menu_rect[1]<=menu_rect[3])
        xml1_pc_native_screen_bounds(menu_item,menu_rect[0],menu_rect[1],menu_rect[2],menu_rect[3]);
    menu_item=0;
}
void xml1_graphics_menu_command(unsigned command) {
    unsigned slot=(command>>5)&255;
    menu_commands[slot].command=command;menu_commands[slot].item=menu_item;
}
void xml1_graphics_menu_replay(unsigned command) {
    unsigned slot=(command>>5)&255;
    xml1_graphics_menu_begin(menu_commands[slot].command==command?menu_commands[slot].item:0);
}
static void menu_draw_vertex(unsigned address,const void *vertex) {
    unsigned item=xml1_pc_native_vertex_item(address);
    if(!item || !source_dimensions[0] || !source_dimensions[1])return;
    float point[4]={0,0,0,1};memcpy(point,vertex,12);
    const unsigned order[3]={6,0,1};
    for(unsigned m=0;m<3;++m) {
        float matrix[16],next[4]={0};memcpy(matrix,matrices[order[m]],64);
        for(unsigned column=0;column<4;++column)
            for(unsigned row=0;row<4;++row)next[column]+=point[row]*matrix[row*4+column];
        memcpy(point,next,sizeof(point));
    }
    if(!isfinite(point[3]) || point[3]<=0)return;
    float x=(viewport[0]+(point[0]/point[3]+1)*.5f*viewport[2])/source_dimensions[0];
    float y=(viewport[1]+(1-point[1]/point[3])*.5f*viewport[3])/source_dimensions[1];
    if(!isfinite(x) || !isfinite(y))return;
    xml1_pc_native_render_vertex(item,x,y,frames);
}
void xml1_graphics_menu_quad(float left,float top,float right,float bottom) {
    (void)left;(void)top;(void)right;(void)bottom;
}
/* Loaded native menu scene data. Only the verified slider/Alchemy layouts are
   read here; no resource aliases, synthesized rectangles or asset mutation. */
static const unsigned *menu_words(unsigned address,unsigned bytes) {
    if(address<0x10000u || address>0x10000000u-bytes)return NULL;
    return (const unsigned *)((uintptr_t)g_xbox_mem_offset+address);
}
static void menu_identity(float *m) {
    memset(m,0,64);m[0]=m[5]=m[10]=m[15]=1;
}
static void menu_multiply(float *out,const float *a,const float *b) {
    float result[16]={0};
    for(unsigned r=0;r<4;++r)for(unsigned c=0;c<4;++c)
        for(unsigned k=0;k<4;++k)result[r*4+c]+=a[r*4+k]*b[k*4+c];
    memcpy(out,result,64);
}
static int menu_group(unsigned vt) {
    return vt==0x403958u || vt==0x3E0F44u || vt==0x3E1214u ||
           vt==0x404DD0u || vt==0x3E1434u;
}
static int menu_slider_box(unsigned node,const float *parent,float *low,float *high,unsigned depth) {
    const unsigned *n=menu_words(node,32);if(!n || depth>16)return 0;
    const unsigned *box=n[3]?menu_words(n[3],32):NULL;
    /* igAABox at +C includes this node's own transform and descendants. */
    if(box && box[0]==0x3FC270u) {
        float bounds[6];memcpy(bounds,box+2,24);
        for(unsigned i=0;i<3;++i)if(!isfinite(bounds[i]) || !isfinite(bounds[i+3]) || bounds[i]>bounds[i+3])return 0;
        for(unsigned corner=0;corner<8;++corner) {
            float point[4]={bounds[(corner&1)?3:0],bounds[(corner&2)?4:1],bounds[(corner&4)?5:2],1};
            for(unsigned c=0;c<3;++c) {
                float v=0;for(unsigned r=0;r<4;++r)v+=point[r]*parent[r*4+c];
                if(v<low[c])low[c]=v;if(v>high[c])high[c]=v;
            }
        }
        return 1;
    }
    if(!menu_group(n[0]))return 0;
    float world[16];memcpy(world,parent,64);
    if(n[0]==0x403958u) {
        const unsigned *matrix=menu_words(node+0x20,64);if(!matrix)return 0;
        float local[16];memcpy(local,matrix,64);menu_multiply(world,local,parent);
    }
    const unsigned *list=n[7]?menu_words(n[7],20):NULL;
    if(!list || !list[2] || list[2]>64)return 0;
    const unsigned *children=menu_words(list[4],list[2]*4);if(!children)return 0;
    int found=0;
    for(unsigned i=0;i<list[2];++i)found|=menu_slider_box(children[i],world,low,high,depth+1);
    return found;
}
static void menu_slider_bounds(unsigned item) {
    if(!xml1_pc_native_interested(item) || (matrix_mask&3)!=3 || !source_dimensions[0] || !source_dimensions[1])return;
    const unsigned *entry=menu_words(item,0x88);if(!entry)return;
    const unsigned *vt=menu_words(entry[0],0x40);
    if(!vt || vt[0x3C/4]!=0x17CE40u)return;
    menu_slider_trace_active=1;
    const unsigned *wrapper=menu_words(entry[0x84/4],20);
    if(!wrapper || wrapper[0]!=0x3DC374u)return;
    const unsigned *component=menu_words(wrapper[2],8);
    if(!component || component[0]!=0x3DC288u)return;
    unsigned root=component[1],node=root,seen[32],count=0;
    float parent[16];menu_identity(parent);
    /* Unique instance ancestry, before the slider's local transform. */
    for(;;) {
        const unsigned *n=menu_words(node,20);if(!n)return;
        const unsigned *list=n[4]?menu_words(n[4],20):NULL;
        if(!list || !list[2])break;
        if(list[2]!=1 || count==32)return;
        const unsigned *data=menu_words(list[4],4);if(!data)return;
        node=data[0];
        for(unsigned i=0;i<count;++i)if(seen[i]==node)return;
        seen[count++]=node;
        n=menu_words(node,32);if(!n || !menu_group(n[0]))return;
        if(n[0]==0x403958u) {
            const unsigned *matrix=menu_words(node+0x20,64);if(!matrix)return;
            float local[16];memcpy(local,matrix,64);menu_multiply(parent,parent,local);
        }
    }
    float low[3]={FLT_MAX,FLT_MAX,FLT_MAX},high[3]={-FLT_MAX,-FLT_MAX,-FLT_MAX};
    if(!menu_slider_box(root,parent,low,high,0))return;
    /* Menu camera 0 owns the 3D menu models (001833A0). Its native
       world-to-camera matrix is refreshed at +AC by 00143830/001300C0.
       Font rendering uses camera 1, so its current world matrix cannot
       project the model's XZ-plane bounds. Preserve the live camera transform. */
    const unsigned *manager_slot=menu_words(0x577210u,4);
    const unsigned *manager=manager_slot?menu_words(*manager_slot,0xBD8):NULL;
    const unsigned *camera=manager?menu_words(manager[0xBD4/4],0xEC):NULL;
    if(!camera || camera[0]!=0x3DCD1Cu)return;
    float camera_matrix[16];memcpy(camera_matrix,camera+0xAC/4,64);
    for(unsigned i=0;i<16;++i)if(!isfinite(camera_matrix[i]))return;
    float combined[16],view[16],projection[16],model_view[16];
    memcpy(view,matrices[0],64);memcpy(projection,matrices[1],64);
    menu_multiply(model_view,camera_matrix,view);
    menu_multiply(combined,model_view,projection);
    float rect[4]={FLT_MAX,FLT_MAX,-FLT_MAX,-FLT_MAX};
    for(unsigned corner=0;corner<8;++corner) {
        float point[4]={corner&1?high[0]:low[0],corner&2?high[1]:low[1],corner&4?high[2]:low[2],1},clip[4]={0};
        for(unsigned c=0;c<4;++c)for(unsigned r=0;r<4;++r)clip[c]+=point[r]*combined[r*4+c];
        if(!isfinite(clip[3]) || clip[3]<=0)return;
        float x=(viewport[0]+(clip[0]/clip[3]+1)*.5f*viewport[2])/source_dimensions[0];
        float y=(viewport[1]+(1-clip[1]/clip[3])*.5f*viewport[3])/source_dimensions[1];
        if(!isfinite(x) || !isfinite(y))return;
        if(x<rect[0])rect[0]=x;if(y<rect[1])rect[1]=y;if(x>rect[2])rect[2]=x;if(y>rect[3])rect[3]=y;
    }
    xml1_pc_native_slider_bounds(item,rect[0],rect[1],rect[2],rect[3],frames);
    static unsigned reports;
    if(reports<4 && getenv("XML1_PC_NATIVE_BOUNDS")) {
        ++reports;fprintf(stderr,"[PC SLIDER RECT] item=%08X callback=%08X rect=%.6f %.6f %.6f %.6f\n",item,entry[0x30/4],rect[0],rect[1],rect[2],rect[3]);
        fprintf(stderr,"[PC SLIDER SPACE] low/high");
        for(unsigned i=0;i<3;++i)fprintf(stderr," %.6f %.6f",low[i],high[i]);
        fprintf(stderr," | world");
        float actual_world[16];memcpy(actual_world,matrices[6],64);
        for(unsigned i=0;i<16;++i)fprintf(stderr," %.6f",actual_world[i]);
        const unsigned *display=menu_words(0x58F2B8u,0x54);
        fprintf(stderr," | display");
        for(unsigned i=0x28/4;i<0x54/4;++i) {float v;memcpy(&v,display+i,4);fprintf(stderr," %.6f",v);}
        fprintf(stderr,"\n");
    }
}
void xml1_graphics_menu_projection(unsigned item) {
    menu_slider_bounds(item);
    if((matrix_mask & 0x43)==0x43) {
        float world[16],view[16],projection[16];
        memcpy(world,matrices[6],sizeof(world));
        memcpy(view,matrices[0],sizeof(view));
        memcpy(projection,matrices[1],sizeof(projection));
        xml1_pc_native_projection(item,world,view,projection);
    }
}
static xml1_texture_wire_cache texture_wire;
static uint32_t wire_reset_pending=1;
unsigned xml1_graphics_frame_number(void) { return frames; }
static uint32_t sequence;
static int frame_geometry;
static void fatal(const char* message);
static FILE *capture_stream;
static unsigned capture_request_id;
static size_t capture_stream_bytes;
static void capture_next_frame(void) {
    if(frames==240 && getenv("XML1_CAPTURE_MOVIE_PACKET")) {
        capture_stream=fopen("build/movie-frame241.bin","wb");
        if(!capture_stream) fatal("cannot capture movie packet");
        capture_stream_bytes=0;
        xml1_texture_wire_reset(&texture_wire);wire_reset_pending=1;
        return;
    }
    const char *path=getenv("XML1_DX8_CAPTURE_REQUEST");
    if(!path||!*path) return;
    FILE *request=fopen(path,"rb");
    if(!request) return;
    char line[64]={0},extra; unsigned id=0;
    int complete=fgets(line,sizeof(line),request)!=NULL && strchr(line,'\n')!=NULL;
    fclose(request);
    if(!complete) return;
    if(sscanf(line,"%u %c",&id,&extra)!=1) fatal("invalid DX8 capture request");
    if(id<=capture_request_id) return;
    char output[128];
    snprintf(output,sizeof(output),"build/dx8-request-%u-frame-%u.bin",id,frames+1);
    capture_stream=fopen(output,"wbx");
    if(!capture_stream) fatal("cannot create exclusive DX8 frame capture");
    capture_request_id=id; capture_stream_bytes=0;
    /* An explicit reset starts every capture with fresh definitions, so it
     * remains independently replayable despite reuse during ordinary play. */
    xml1_texture_wire_reset(&texture_wire);wire_reset_pending=1;
    fprintf(stderr,"[DX8 FRAME CAPTURE] begin id=%u frame=%u path=%s\n",id,frames+1,output);
}
static void flush_completed_work(uint32_t device);
static void ordered_clear(const uint32_t *args);
static HANDLE pipe=INVALID_HANDLE_VALUE, worker_job;
static xml1_fair_gate transport_lock;
static void lock_transport(const char *operation) {
    ULONGLONG start=GetTickCount64();
    xml1_fair_enter(&transport_lock);
    ULONGLONG elapsed=GetTickCount64()-start;
    if(elapsed>=100) fprintf(stderr,"[DX8 WAIT] op=%s wait_ms=%llu frame=%u\n",operation,elapsed,frames);
}
static void fatal(const char* message) {
    fprintf(stderr,"[FATAL DX8 LIVE] %s (Win32=%lu, frame=%u, draws=%u)\n",message,GetLastError(),frames,draws);
    _exit(4);
}
static int live(void) {
    if (enabled<0) { const char *v=getenv("XML1_LIVE_DX8"); enabled=v&&!strcmp(v,"1"); }
    return enabled;
}
static void *guest(uint32_t address,size_t bytes) {
    uint64_t end=(uint64_t)address+bytes;
    if (end<=xbox_GetMappedSize() || (address>=0x80000000 && end<=0x84000000))
        return (void*)((uintptr_t)g_xbox_mem_offset+address);
    fatal("invalid guest graphics memory"); return NULL;
}
static void append(const void* data,size_t bytes) {
    if (bytes>128u*1024*1024 || used+bytes>128u*1024*1024) fatal("frame exceeds diagnostic packet limit");
    if (used+bytes>capacity) {
        size_t next=(used+bytes+0xFFFF)&~(size_t)0xFFFF;
        void *replacement=realloc(packet,next);
        if (!replacement) fatal("graphics packet allocation failed");
        packet=replacement; capacity=next;
    }
    memcpy(packet+used,data,bytes); used+=bytes;
}
static void append_texture(uint32_t address,unsigned width,unsigned height,uint32_t packed,unsigned stage) {
    size_t total=xml1_texture_bytes(width,height,packed);
    if(!total) fatal("invalid mip chain");
    unsigned format=packed&255;
    const unsigned char *pixels=guest(address,total-(format==11?1024:0));
    unsigned char *indexed=NULL;
    if(format==11) {
        /* Native SetPalette 0035C210 stores the resource at device+F98+
         * stage*4, then emits NV097_SET_TEXTURE_PALETTE (1B20+stage*40).
         * Snapshot both indices and palette: either may change between draws. */
        uint32_t device=*(const uint32_t*)guest(0x36CAF8,4);
        uint32_t palette=*(const uint32_t*)guest(device+0xF98+stage*4,4);
        if(!palette)fatal("P8 texture without bound palette");
        const uint32_t *p=guest(palette,12);
        unsigned entries=256u>>((p[0]>>30)&3);
        indexed=malloc(total);if(!indexed)fatal("P8 snapshot allocation failed");
        memset(indexed,0,1024);memcpy(indexed,guest(0x80000000u+p[1],entries*4),entries*4);
        /* Compare the palette plus native indices before unswizzling. Palette
         * animation changes this key, while repeated unchanged draws avoid the
         * conversion. The wire still contains a linear index mip chain. */
        for(size_t i=0;i<total-1024;++i)if(pixels[i]>=entries)fatal("P8 palette index out of bounds");
        memcpy(indexed+1024,pixels,total-1024);
        pixels=indexed;
    }
    static int wire_enabled=-1;
    if(wire_enabled<0) wire_enabled=getenv("XML1_DX8_NO_WIRE_CACHE")==NULL;
    uint32_t token=wire_enabled?xml1_texture_wire_token_v9(&texture_wire,address,width,height,packed,pixels,total):0;
    uint32_t evictions=wire_enabled?texture_wire.evicted_count:0;
    append(&evictions,4);
    if(evictions)append(texture_wire.evicted,evictions*4);
    append(&token,4);
    if(token && !(token&XML1_WIRE_TEXTURE_DEFINE)) {free(indexed);return;}
    if(indexed) {
        append(indexed,1024);size_t at=1024;unsigned w=width,h=height;
        for(unsigned level=0;level<xml1_texture_levels(packed);++level) {
            size_t bytes=(size_t)w*h;void *linear=malloc(bytes);
            if(!linear)fatal("P8 mip allocation failed");
            xbox_unswizzle_rect(linear,indexed+at,w,h,1);append(linear,bytes);free(linear);
            at+=bytes;w=w>1?w/2:1;h=h>1?h/2:1;
        }
        free(indexed);return;
    }
    for(unsigned level=0;level<xml1_texture_levels(packed);++level) {
        size_t bytes=xml1_texture_level_bytes(width,height,format);
        if(format==12||format==14) append(pixels,bytes);
        else {
            void *linear=malloc(bytes);
            if(!linear) fatal("mip conversion allocation failed");
            xbox_unswizzle_rect(linear,pixels,width,height,(format==6||format==7)?4:1);
            if(frames==299 && format==6 && level==0 && getenv("XML1_CAPTURE_MOVIE_SOURCE")) {
                FILE *out=fopen("build/movie-upload-frame300.bgra","wb");
                if(!out || fwrite(linear,1,bytes,out)!=bytes) fatal("movie upload capture failed");
                fclose(out);
            }
            append(linear,bytes); free(linear);
        }
        pixels+=bytes; width=width>1?width/2:1; height=height>1?height/2:1;
    }
}
extern const wchar_t *xml1_embedded_worker(void);
static void connect_worker_channel(HANDLE *channel,HANDLE *job,const char *suffix,const char *mode) {
    char name[128]; wchar_t command[32768];
    snprintf(name,sizeof(name),"\\\\.\\pipe\\OpenXML1DX8-%lu-%s",GetCurrentProcessId(),suffix);
    *channel=CreateNamedPipeA(name,PIPE_ACCESS_DUPLEX,PIPE_TYPE_BYTE|PIPE_READMODE_BYTE|PIPE_WAIT|PIPE_REJECT_REMOTE_CLIENTS,
        1,1024*1024,4096,10000,NULL);
    if (*channel==INVALID_HANDLE_VALUE) fatal("CreateNamedPipe failed");
    *job=CreateJobObjectW(NULL,NULL);
    JOBOBJECT_EXTENDED_LIMIT_INFORMATION limit={0};
    limit.BasicLimitInformation.LimitFlags=JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE;
    if (!*job||!SetInformationJobObject(*job,JobObjectExtendedLimitInformation,&limit,sizeof(limit)))
        fatal("cannot bind graphics worker lifetime");
    STARTUPINFOW start={0}; PROCESS_INFORMATION process={0}; start.cb=sizeof(start);
    const wchar_t *worker=xml1_embedded_worker();
    if (!worker) fatal("cannot prepare embedded DX8 renderer");
    if(swprintf(command,32768,L"\"%ls\" %hs %hs",worker,mode,name)<0)
        fatal("graphics worker command is too long");
    if (!CreateProcessW(worker,command,NULL,NULL,FALSE,CREATE_NO_WINDOW|CREATE_SUSPENDED,NULL,NULL,&start,&process))
        fatal("cannot launch native DX8 worker");
    if (!AssignProcessToJobObject(*job,process.hProcess)) {
        TerminateProcess(process.hProcess,4); fatal("cannot contain graphics worker lifetime");
    }
    if(!xml1_monitor_worker_exit(process.hProcess)) {
        TerminateProcess(process.hProcess,4); fatal("cannot monitor graphics worker lifetime");
    }
    ResumeThread(process.hThread); CloseHandle(process.hThread);
    if (!ConnectNamedPipe(*channel,NULL)&&GetLastError()!=ERROR_PIPE_CONNECTED) fatal("graphics worker connection failed");
    fprintf(stderr,"[DX8 LIVE] connected native DX8 %s worker\n",suffix);
}
static void connect_worker(void) { connect_worker_channel(&pipe,&worker_job,"graphics","--stream"); }

int xml1_graphics_fence_complete(uint32_t device,uint32_t target) {
    if(!live() || !frames) return 0;
    const uint32_t *d=guest(device,0x34);
    uint32_t latest=d[0x2c/4],completed=*(uint32_t*)guest(d[0x30/4],4);
    /* Match the XDK's unsigned, wrap-aware completion comparison. Reading this
     * does not issue a fence, submit work, or manufacture an event signal. */
    return (uint32_t)(latest-target)>=(uint32_t)(latest-completed);
}
static void flush_completed_work(uint32_t device);
void xml1_graphics_kickoff_tag(uint32_t pointer,uint32_t value) {
    // XDK's software push-buffer branch writes a completed tag inline. The
    // native backend now defers kickoff, so that store must not advertise work
    // as finished. Bootstrap/non-live behavior retains the original store.
    if(!live() || !frames)*(uint32_t*)guest(pointer,4)=value;
}
int xml1_graphics_wait_fence(uint32_t device,uint32_t target) {
    if(xml1_graphics_fence_complete(device,target))return 1;
    if(!live() || !frames)return 0;
    const uint32_t *d=guest(device,0x34);
    // A current/unissued tag belongs to InsertFence, not to this wait. The
    // verified post-insert hook below calls us again once it is issued.
    if(d[0x2c/4]==target)return 0;
    flush_completed_work(device);
    return xml1_graphics_fence_complete(device,target);
}

/* Called at the verified D990 return only for E4D0's viewport upload. */
void xml1_graphics_vertex_viewport(uint32_t offset,uint32_t scale) {
    if(!live())return;
    uint32_t device=*(const uint32_t*)guest(0x36CAF8,4);
    if(*(const uint32_t*)guest(device+8,4)&0x200)return; /* Native NORESERVEDCONSTANTS branch. */
    memcpy(vertex_offset,guest(offset,16),16);memcpy(vertex_scale,guest(scale,16),16);
    memcpy(vertex_constants[58],vertex_scale,16);memcpy(vertex_constants[59],vertex_offset,16);
}
static void append_program_vertex(const void *data) {
    float inputs[16][4]={{0}};
    for(unsigned i=0;i<16;++i) {
        inputs[i][3]=1;if(!(vertex_program.inputs&(1u<<i)))continue;
        const uint32_t *decl=vertex_decl+5+i*4;
        unsigned format=decl[2],components=format>>4,bytes=(format&15)==2?components*4:format==0x40?4:0;
        if(decl[0]||!bytes||components>4||decl[1]>stride||bytes>stride-decl[1]) {
            fprintf(stderr,"[DX8 VERTEX INPUT] reg=%u stream=%u offset=%u format=%X stride=%u\n",i,decl[0],decl[1],format,stride);
            fatal("unsupported shader vertex input");
        }
        const unsigned char *input=(const unsigned char*)data+decl[1];
        if(format==0x40) {
            inputs[i][0]=input[2]/255.0f;inputs[i][1]=input[1]/255.0f;
            inputs[i][2]=input[0]/255.0f;inputs[i][3]=input[3]/255.0f;
        } else memcpy(inputs[i],input,bytes);
    }
    xml1_program_vertex result;
    if(!xml1_vertex_program_run(&vertex_program,inputs,vertex_constants,vertex_offset,vertex_scale,&result))
        fatal("vertex shader execution range or output");
    append(&result,sizeof(result));
}
void xml1_graphics_live_observe(uint32_t va) {
    if (!live()||va<0x35ADA0||va>=0x36F300) return;
    const uint32_t *a=guest(g_esp+4,32);
    /* These native fastcall entry points receive physical NV constant indices.
     * D210 uploads without updating the XDK shadow when NORESERVEDCONSTANTS is
     * set; reading only 36BA40 therefore loses viewport and bone constants. */
    if(va==0x35D100 || va==0x35D160 || va==0x35D210) {
        unsigned words=va==0x35D100?4:va==0x35D160?16:a[0];
        if(g_ecx>=192 || words>192*4-g_ecx*4 || words%4)fatal("vertex constant range");
        memcpy(vertex_constants[g_ecx],guest(g_edx,words*4),words*4);
    }
    if(va==0x3680D0) {
        /* Original Direct3D_CreateDevice takes presentation parameters as
         * argument five (003680F6/003680FA). The initialization viewport may
         * include multisample expansion and is not the logical backbuffer. */
        const uint32_t *presentation=guest(a[4],8);
        if(!presentation[0] || !presentation[1] || presentation[0]>4096 || presentation[1]>4096)
            fatal("invalid guest presentation dimensions");
        source_dimensions[0]=presentation[0];source_dimensions[1]=presentation[1];
        fprintf(stderr,"[DX8 GUEST MODE] %ux%u from presentation parameters\n",source_dimensions[0],source_dimensions[1]);
    }
    if(va==0x3679B0||va==0x367840||va==0x367E30) {
        fprintf(stderr,"[DX8 DRAW API] va=%08X args=%08X/%08X/%08X/%08X/%08X fvf=%08X stride=%u pixel=%08X caller=%08X\n",
            va,a[0],a[1],a[2],a[3],a[4],fvf,stride,pixel_shader,*(const uint32_t *)guest(g_esp,4));
        fatal("unimplemented indexed/UP/immediate draw API");
    }
    if (va==0x35FC00 && frames) {
        uint32_t device=*(uint32_t*)guest(0x36CAF8,4);
        if(g_ecx!=device) fatal("unexpected push-buffer flush device");
        /* Kickoff is submission, not a CPU resource wait. Draw/texture bytes
         * are already snapshotted. Keep them ordered until a real BlockOnTime
         * boundary or swap; do not publish completion here. */
    }
    if (va==0x35FDE0 && frames) {
        uint32_t device=*(uint32_t*)guest(0x36CAF8,4);
        const uint32_t *d=guest(device,0x938);
        uint32_t latest=d[0x2c/4],complete=*(uint32_t*)guest(d[0x30/4],4);
        /* A resource can wait on an InsertFence with deferred kickoff. Submit
         * all recorded preceding native work before the guest chooses its
         * interrupt/event wait path. Only issued fences (latest-2) are published,
         * and only after the worker's actual GPU-completion acknowledgement. */
        /* For the current, unissued fence, BlockOnTime itself calls InsertFence
         * and kickoff. Its post-insert check observes that acknowledgement. */
        if(a[0]!=latest && (uint32_t)(latest-a[0]) < (uint32_t)(latest-complete)) {
            flush_completed_work(device);
            static unsigned pending_reports;
            if(pending_reports++<12) fprintf(stderr,"[DX8 WAIT SUBMIT] target=%08X complete=%08X latest=%08X\n",
                a[0],*(uint32_t*)guest(d[0x30/4],4),latest);
        }
        static unsigned logged;
        if (logged++<8) {
            uint32_t device=*(uint32_t*)guest(0x36CAF8,4);
            const uint32_t *d=guest(device,0x938);
            fprintf(stderr,"[DX8 FENCE] target=%08X flags=%08X latest=%08X completion_ptr=%08X completion=%08X frames=%u pending_draws=%u caller=%08X\n",
                a[0],a[1],d[0x2c/4],d[0x30/4],*(uint32_t*)guest(d[0x30/4],4),frames,draws,*(uint32_t*)guest(g_esp,4));
        }
    }
    if (va==0x35AE90) {
        if (a[0]>=10) fatal("invalid transform");
        memcpy(matrices[a[0]],guest(a[1],64),64); matrix_mask|=1u<<a[0];
    } else if (va==0x35BA10) {
        memcpy(viewport,guest(a[0],24),24);
        /* Device creation first uses an INT_MAX viewport sentinel. Record the
         * first concrete full viewport, after the game selects its mode. */
        if(!source_dimensions[0] && !viewport[0] && !viewport[1] &&
           viewport[2] && viewport[2]<=4096 && viewport[3] && viewport[3]<=4096) {
            source_dimensions[0]=viewport[2];source_dimensions[1]=viewport[3];
            fprintf(stderr,"[DX8 GUEST MODE] %ux%u\n",source_dimensions[0],source_dimensions[1]);
        }
    }
    else if (va==0x35AFB0) { memcpy(material,guest(a[0],68),68); material_valid=1; }
    else if (va==0x35BC40) {
        xml1_light *light=xml1_light_find(&light_state,a[0]);
        if(!light) fatal("light definition allocation failed");
        if(a[0]>=32) {
            static unsigned reports;
            if(reports++<16) fprintf(stderr,"[DX8 LIGHT ID] set id=%u frame=%u\n",a[0],frames);
        }
        memcpy(light->value,guest(a[1],104),104);
    }
    else if (va==0x35BF00) {
        xml1_light *light=xml1_light_find(&light_state,a[0]);
        if(!light) fatal("light definition allocation failed");
        light->enabled=a[1]!=0;
    }
    else if (va==0x35D760) {
        fvf=a[0];
        if(fvf&1) {
            const uint32_t *object=guest(fvf-1,0x114);
            if(!(object[1]&0x10)||!object[3]||object[3]>1024)fatal("unsupported shader object");
            const uint32_t *commands=guest(fvf-1+0x114,object[3]*4);
            if(vertex_program_count!=object[3]||memcmp(vertex_program_words,commands,object[3]*4)) {
                xml1_vertex_program_destroy(&vertex_program);
                if(!xml1_vertex_program_decode(&vertex_program,commands,object[3]))fatal("unsupported vertex program");
                memcpy(vertex_program_words,commands,object[3]*4);vertex_program_count=object[3];
                fprintf(stderr,"[DX8 VERTEX PROGRAM] instructions=%u inputs=%04X\n",vertex_program.steps,vertex_program.inputs);
            }
            memcpy(vertex_decl,object,0x114);
        }

        if((fvf&1)&&getenv("XML1_TRACE_VERTEX_DECL")) {
            static uint32_t seen[32];static unsigned count;
            unsigned i;for(i=0;i<count;++i)if(seen[i]==fvf)break;
            if(i==count&&count<32) {
                seen[count++]=fvf;const uint32_t *data=guest(fvf-1,192);
                fprintf(stderr,"[DX8 VERTEX DECL] handle=%08X",fvf);
                for(i=0;i<48;++i)fprintf(stderr," %08X",data[i]);fputc('\n',stderr);
                if(data[3]&&data[3]<=1024) {
                    char path[96];snprintf(path,sizeof(path),"build/vertex-program-%08X.bin",fvf);
                    FILE *capture=fopen(path,"wb");
                    size_t bytes=0x114+(size_t)data[3]*4;
                    if(!capture||fwrite(guest(fvf-1,bytes),1,bytes,capture)!=bytes)fatal("vertex program capture failed");
                    fclose(capture);
                }
            }
        }
    }
    else if (va==0x3692E0) pixel_shader=a[0];
    else if (va==0x35D360&&a[0]==0) { stream=a[1]; stride=a[2]; }
    else if (va==0x35D900) { unsigned m=(g_ecx&0x1FFF)/4; methods[m]=g_edx; method_set[m]=1; }
    else if (va==0x362430) {
        /* Coalesce the observed startup clear, preserving all later clears in
         * submission order through native DX8 commands. */
        if (frame_geometry||a[0]||a[1]||((a[2]&0xF0)&&a[3])||((a[2]&1)&&a[4]!=0x3F800000)||((a[2]&2)&&a[5])) {
            static unsigned reports;
            if(reports++<8) fprintf(stderr,"[DX8 CLEAR] count=%u rect=%08X flags=%08X color=%08X depth=%08X stencil=%08X\n",a[0],a[1],a[2],a[3],a[4],a[5]);
            ordered_clear(a);
        }
    }
    else if (va==0x367AF0||va==0x367B90) {
        int indexed=va==0x367B90;
        uint32_t vertex_count=indexed?a[1]:a[2];
        /* Read the XDK's authoritative binding table at draw time. Alchemy's
         * material toggle (001C19A0) tail-jumps to SetTexture and bypasses the
         * ABI observer; a call-only shadow retained the previous frame's font
         * atlas on terrain. The same snapshot covers every material and stage,
         * including explicit NULL bindings. 0035C0A3 writes this table. */
        uint32_t device=*(const uint32_t*)guest(0x36CAF8,4);
        memcpy(textures,guest(device+0xF88,sizeof(textures)),sizeof(textures));

        /* D3DTOP_DISABLE terminates the fixed-function texture cascade. Bound
         * resources in disabled stages do not participate in the draw. */
        uint32_t second_color_op=*(const uint32_t *)guest(0x36C660+128+12*4,4);
        const uint32_t *ts=guest(0x36C660,512);
        int second_active=ts[12]!=1&&second_color_op!=1;
        if((fvf&1)&&getenv("XML1_TRACE_VERTEX_DECL")) {
            static unsigned mismatches;
            const float *native=guest(0x36BA40+96*16,96*16);
            if(memcmp(native,vertex_constants[96],96*16)&&mismatches++<8) {
                fprintf(stderr,"[DX8 CONSTANT DIFFERENCE] frame=%u",frames);
                for(unsigned i=96;i<192;++i)if(memcmp(native+(i-96)*4,vertex_constants[i],16))fprintf(stderr," %u",i);
                fputc('\n',stderr);
            }
        }
        if ((fvf&1)&&getenv("XML1_TRACE_VERTEX_DECL")) {
            static unsigned captured;
            if(!captured++ || capture_stream) {
                char dump_path[128];snprintf(dump_path,sizeof(dump_path),"build/vertex-draw-%u.bin",frames);
                FILE *fp=fopen(dump_path,"wb");
                uint32_t device=*(const uint32_t*)guest(0x36CAF8,4);
                const uint32_t *buffer=guest(stream,12);
                uint32_t meta[8]={fvf,stride,vertex_count,indexed,a[1],a[2],buffer[1],device};
                if(!fp)fatal("vertex draw capture open");
                fwrite(meta,4,8,fp);fwrite(vertex_constants,16,192,fp);
                fwrite(guest(device,0x2000),1,0x2000,fp);
                fwrite(guest(0x36C660,512),1,512,fp);
                fwrite(guest(0x36C860,168*4),4,168,fp);
                if(indexed)fwrite(guest(a[2],vertex_count*2),2,vertex_count,fp);
                size_t bytes=(size_t)(vertex_count+(indexed?0:a[1]))*stride;
                fwrite(guest(0x80000000+buffer[1],bytes),1,bytes,fp);fclose(fp);
            }
        }
        if ((a[0]!=5&&a[0]!=6&&a[0]!=7)||(a[0]==5&&vertex_count%3)||vertex_count<3||vertex_count>1000000||(!(fvf&1)&&(!xml1_fvf_stride(fvf)||stride!=xml1_fvf_stride(fvf)))||pixel_shader||!stream||(second_active&&ts[76]!=1)) {
            for(unsigned stage=0;stage<4;++stage) if (textures[stage]) {
                const uint32_t *t=guest(textures[stage],20);
                const uint32_t *s=guest(0x36C660+stage*128,128);
                fprintf(stderr,"[DX8 RESOURCE] stage=%u texture=%08X %08X %08X %08X %08X color=%u/%u/%u alpha=%u/%u/%u coord=%08X\n",stage,t[0],t[1],t[2],t[3],t[4],s[12],s[14],s[15],s[16],s[18],s[19],s[28]);
            }
            fprintf(stderr,"[DX8 LIVE] primitive=%u vertices=%u fvf=%X stride=%u pixel=%X texture=%X/%X/%X/%X\n",
                a[0],vertex_count,fvf,stride,pixel_shader,textures[0],textures[1],textures[2],textures[3]);
            const uint32_t *r=guest(0x36C860,168*4);
            fprintf(stderr,"[DX8 LIGHTING] lighting=%u specular=%u ambient=%08X colorvertex=%u localviewer=%u normalize=%u\n",r[102],r[103],r[115],r[105],r[104],r[142]);
            fatal("unimplemented draw path");
        }
        if ((matrix_mask&0x43)!=0x43||!viewport[2]||!viewport[3]) fatal("missing transform/viewport state");
        const uint32_t null_texture[5]={0};
        const uint32_t *tex=textures[0]?guest(textures[0],20):null_texture, *vb=guest(stream,12);
        if(menu_slider_trace_active && getenv("XML1_PC_NATIVE_BOUNDS")) {
            static unsigned reports,hashes[48];unsigned hash=2166136261u;
            const unsigned slots[3]={0,1,6};
            for(unsigned m=0;m<3;++m)for(unsigned i=0;i<16;++i)hash=(hash^matrices[slots[m]][i])*16777619u;
            unsigned known=0;for(unsigned i=0;i<reports;++i)if(hashes[i]==hash)known=1;
            if(!known && reports<48) {
                hashes[reports++]=hash;fprintf(stderr,"[PC MENU CAMERAS] frame=%u",frames);
                for(unsigned m=0;m<3;++m) {
                    float values[16];memcpy(values,matrices[slots[m]],64);fprintf(stderr," | ");
                    for(unsigned i=0;i<16;++i)fprintf(stderr," %.6g",values[i]);
                }
                fprintf(stderr,"\n");
            }
        }
        const uint32_t *tex1=second_active&&textures[1]?guest(textures[1],20):NULL;
        uint32_t second_header[3]={0}; size_t second_bytes=0;
        if(tex1) {
            unsigned fmt=(tex1[3]>>8)&255;
            if((fmt!=14&&fmt!=6&&fmt!=7&&fmt!=0&&fmt!=11&&fmt!=12&&fmt!=25)||tex1[4]) fatal("unimplemented second texture format");
            second_header[0]=1u<<((tex1[3]>>20)&15); second_header[1]=1u<<((tex1[3]>>24)&15); second_header[2]=fmt|(((tex1[3]>>16)&15)<<8);
            second_bytes=xml1_texture_bytes(second_header[0],second_header[1],second_header[2]);
            if(!second_bytes) fatal("invalid second mip chain");
            if((uint64_t)tex1[1]+second_bytes-(fmt==11?1024:0)>64u*1024*1024) fatal("second texture bounds");
        }
        for(unsigned stage=0;stage<2;++stage)
            if(ts[stage*32+21]&&!(matrix_mask&(1u<<(stage+2)))) fatal("missing texture transform");
        uint32_t format=(tex[3]>>8)&255;
        if ((format!=14&&format!=6&&format!=7&&format!=0&&format!=11&&format!=12&&format!=25)||tex[4]) {
            fprintf(stderr,"[DX8 UNSUPPORTED TEXTURE] format=%u resource=%08X header=%08X/%08X/%08X/%08X/%08X\n",
                format,textures[0],tex[0],tex[1],tex[2],tex[3],tex[4]);
            fatal("unimplemented texture format");
        }
        uint32_t header[6]={1u<<((tex[3]>>20)&15),1u<<((tex[3]>>24)&15),vertex_count,format|(((tex[3]>>16)&15)<<8),(fvf&1)?XML1_VERTEX_PROGRAM_WIRE:fvf,a[0]};
        if(!textures[0]) {header[0]=header[1]=header[3]=0;} /* V9 NULL binding: no texture payload. */
        uint64_t offset=(uint64_t)vb[1]+(indexed?0:(uint64_t)a[1]*stride), bytes=(uint64_t)vertex_count*stride;
        size_t tex_bytes=textures[0]?xml1_texture_bytes(header[0],header[1],header[3]):0;
        if(textures[0]&&!tex_bytes) fatal("invalid primary mip chain");
        if (offset+bytes>64u*1024*1024||(uint64_t)tex[1]+tex_bytes-(format==11?1024:0)>64u*1024*1024) fatal("resource bounds");
        uint32_t rs[168]; memcpy(rs,guest(0x36C860,sizeof(rs)),sizeof(rs));
        uint32_t lights[32][26], light_mask;
        if(!xml1_light_snapshot(&light_state,lights,&light_mask)) fatal("more than 32 simultaneously enabled lights");
        if(rs[102]&&!material_valid) fatal("missing material");
        static const unsigned mapping[][2]={{0x300,60},{0x304,59},{0x33C,58},{0x340,61},{0x344,62},{0x348,63},
            {0x350,74},{0x354,57},{0x358,67},{0x35C,64}};
        for (unsigned i=0;i<sizeof(mapping)/sizeof(mapping[0]);++i)
            if (method_set[mapping[i][0]/4]) rs[mapping[i][1]]=methods[mapping[i][0]/4];
        append(header,sizeof(header)); append(viewport,sizeof(viewport));
        append(matrices[6],64); append(matrices[0],64); append(matrices[1],64);
        append(rs,sizeof(rs)); append(guest(0x36C660,512),512);
        append(material,sizeof(material)); append(&light_mask,4);
        for(unsigned i=0;i<32;++i) if(light_mask&(1u<<i)) append(lights[i],104);
        append(second_header,sizeof(second_header)); append(matrices[2],64); append(matrices[3],64);
        const void *pixels=textures[0]?guest(0x80000000+tex[1],tex_bytes-(format==11?1024:0)):NULL;
        if (format==6) {
            static unsigned argb_reports;
            if (argb_reports<4 || frames%60==0) {
                const uint32_t *rgba=pixels;
                size_t colored=0,opaque=0;
                for (size_t i=0;i<(size_t)header[0]*header[1];++i) {
                    colored+=(rgba[i]&0xFFFFFF)!=0;
                    opaque+=(rgba[i]>>24)!=0;
                }
                fprintf(stderr,"[DX8 ARGB] frame=%u texture=%08X data=%08X size=%ux%u colored=%zu alpha_nonzero=%zu first=%08X\n",
                    frames,textures[0],tex[1],header[0],header[1],colored,opaque,rgba[0]);
                ++argb_reports;
            }
        }
        if(textures[0]) append_texture(0x80000000+tex[1],header[0],header[1],header[3],0);
        if(tex1) append_texture(0x80000000+tex1[1],second_header[0],second_header[1],second_header[2],1);
        const int track_menu_vertices=xml1_pc_native_tracking();
        if(indexed) {
            const uint16_t *indices=guest(a[2],vertex_count*2);
            uint32_t device=*(const uint32_t *)guest(0x36CAF8,4);
            uint32_t base=*(const uint32_t *)guest(device+0x1C,4);
            static uint32_t epochs[65536],epoch;
            static uint16_t remap[65536],unique[65536];
            static uint16_t *compact;static size_t compact_capacity;
            if(++epoch==0){memset(epochs,0,sizeof(epochs));epoch=1;}
            if(vertex_count>compact_capacity){void *next=realloc(compact,(size_t)vertex_count*2);if(!next)fatal("index packet allocation failed");compact=next;compact_capacity=vertex_count;}
            uint32_t unique_count=0;
            for(uint32_t i=0;i<vertex_count;++i) {
                unsigned index=indices[i];
                if(epochs[index]!=epoch){epochs[index]=epoch;remap[index]=(uint16_t)unique_count;unique[unique_count++]=(uint16_t)index;}
                compact[i]=remap[index];
            }
            append(&vertex_count,4);append(&unique_count,4);
            for(uint32_t i=0;i<unique_count;++i) {
                uint64_t at=(uint64_t)vb[1]+((uint64_t)base+unique[i])*stride;
                if(at+stride>64u*1024*1024) fatal("indexed vertex bounds");
                if(track_menu_vertices)menu_draw_vertex(0x80000000+(uint32_t)at,guest(0x80000000+(uint32_t)at,stride));
                if(fvf&1)append_program_vertex(guest(0x80000000+(uint32_t)at,stride));
                else append(guest(0x80000000+(uint32_t)at,stride),stride);
            }
            append(compact,(size_t)vertex_count*2);
            static unsigned reports;
            if(reports++<6) fprintf(stderr,"[DX8 INDEXED] indices=%u base=%u stream=%08X first=%u\n",vertex_count,base,stream,indices[0]);
        } else {
            uint32_t index_count=0;append(&index_count,4);append(&vertex_count,4);
            const unsigned char *vertices=guest(0x80000000+(uint32_t)offset,(size_t)bytes);
            if(track_menu_vertices)for(unsigned i=0;i<vertex_count;++i)menu_draw_vertex(0x80000000+(uint32_t)offset+i*stride,vertices+(size_t)i*stride);
            if(fvf&1)for(unsigned i=0;i<vertex_count;++i)append_program_vertex(vertices+(size_t)i*stride);
            else append(vertices,(size_t)bytes);
        }
        ++draws;
        frame_geometry=1;
    }
}
static void send_bytes(const void* data,size_t bytes) {
    if(capture_stream && bytes) {
        if(bytes>512u*1024*1024-capture_stream_bytes ||
           fwrite(data,1,bytes,capture_stream)!=bytes) fatal("DX8 frame capture write failed or exceeds 512MiB");
        capture_stream_bytes+=bytes;
    }
    while (bytes) {
        DWORD written=0,part=(DWORD)(bytes>1024*1024?1024*1024:bytes);
        if (!WriteFile(pipe,data,part,&written,NULL)||!written) fatal("graphics worker write failed");
        bytes-=written; data=(const unsigned char*)data+written;
    }
}
static void receive_ack(void) {
    DWORD ack=0,bytes=0;
    if (!ReadFile(pipe,&ack,4,&bytes,NULL)||bytes!=4||ack!=sequence+1)
        fatal("graphics acknowledgement failed");
    ++sequence;
}
static void send_frame_mode(void) {
    if(!source_dimensions[0] || !source_dimensions[1]) fatal("missing guest display dimensions");
    /* One acknowledgement covers the envelope and following command. Resets
     * occur only at frame boundaries, before any texture references are used. */
    uint32_t mode[3]={source_dimensions[0],source_dimensions[1],wire_reset_pending};
    send_bytes("XMLDX8S2",8);send_bytes(mode,sizeof(mode));wire_reset_pending=0;
}
static void queue_bytes(const void *data,size_t bytes) {
    if(bytes>128u*1024*1024 || ordered_used>128u*1024*1024-bytes)fatal("ordered graphics batch exceeds limit");
    if(ordered_used+bytes>ordered_capacity) {
        size_t next=(ordered_used+bytes+65535)&~(size_t)65535;void *p=realloc(ordered_packet,next);
        if(!p)fatal("ordered graphics batch allocation failed");ordered_packet=p;ordered_capacity=next;
    }
    memcpy(ordered_packet+ordered_used,data,bytes);ordered_used+=bytes;
}
static void queue_mode(void) {
    uint32_t mode[3]={source_dimensions[0],source_dimensions[1],wire_reset_pending};
    queue_bytes("XMLDX8S2",8);queue_bytes(mode,sizeof(mode));wire_reset_pending=0;
}
static void begin_submission(void) {
    if(ordered_commands) {
        uint32_t count=ordered_commands+1;
        send_bytes("XMLDX8B1",8);send_bytes(&count,4);send_bytes(ordered_packet,ordered_used);
        ordered_commands=0;ordered_used=0;
    }
}
static void flush_completed_work(uint32_t device) {
    LARGE_INTEGER started,locked,finished,frequency;
    QueryPerformanceCounter(&started);
    lock_transport("flush");
    QueryPerformanceCounter(&locked);
    uint32_t *d=guest(device,0x938);
    uint32_t fence=d[0x2c/4]-2;
    begin_submission();send_frame_mode();send_bytes("XMLDX8F9",8); send_bytes(&draws,4); send_bytes(packet,used); receive_ack();
    QueryPerformanceCounter(&finished); QueryPerformanceFrequency(&frequency);
    static unsigned timing_reports;
    if(timing_reports++<12) fprintf(stderr,"[DX8 FLUSH TIME] draws=%u queue_ms=%.3f submit_ms=%.3f\n",draws,
        1000.0*(locked.QuadPart-started.QuadPart)/frequency.QuadPart,
        1000.0*(finished.QuadPart-locked.QuadPart)/frequency.QuadPart);
    draws=0; used=0;
    /* InsertFence records this counter before incrementing by two. Signal only
     * after all preceding native submissions have completed; no Present here. */
    /* The XDK also compares this completed fence with PGRAPH PATT_COLOR0's
     * low fence tag (0035FB70). Publish both only after native completion. */
    if(d[0x934/4]!=0xFD000000u) fatal("unexpected graphics register aperture");
    volatile uint32_t *tag=(volatile uint32_t *)((uintptr_t)g_xbox_mem_offset+0xFD400B10u);
    *tag=(*tag&~0x7Cu)|((fence<<2)&0x7Cu);
    *(uint32_t*)guest(d[0x30/4],4)=fence;
    static unsigned logged;
    if (logged++<8) fprintf(stderr,"[DX8 FENCE] native completion=%08X sequence=%u\n",fence,sequence);
    xml1_fair_leave(&transport_lock);
}
static void observe_native_vblank(void) {
    static HANDLE channel=INVALID_HANDLE_VALUE,job;
    static DWORD sequence;
    /* Adapter raster observation must not hold the draw/fence transport while
     * waiting for the next scanout. Its own DX8 device observes the same adapter. */
    if(channel==INVALID_HANDLE_VALUE) connect_worker_channel(&channel,&job,"vblank","--vblank-stream");
    DWORD bytes=0,ack=0;
    if(!WriteFile(channel,"XMLDX8V1",8,&bytes,NULL)||bytes!=8 ||
       !ReadFile(channel,&ack,4,&bytes,NULL)||bytes!=4||ack!=sequence+1)
        fatal("native vertical blank acknowledgement failed");
    ++sequence;
}
void xml1_graphics_wait_vblank(void) {
    static xml1_shared_completion completion;
    if(!live()) fatal("Vertical blank wait requires native DX8");
    xml1_wait_shared_completion(&completion,observe_native_vblank);
    g_eax=0; g_esp+=4;
}

static void ordered_clear(const uint32_t *a) {
    lock_transport("clear");
    if((a[2]&~0xF3u)||((a[2]&0xF0)!=0&&(a[2]&0xF0)!=0xF0)||a[0]>4096)
        fatal("unsupported clear flags or rectangle count");
    const void *rects=a[0]?guest(a[1],(size_t)a[0]*16):NULL;
    if(pipe==INVALID_HANDLE_VALUE) connect_worker();
    if(draws) {
        /* D8 acknowledges ordered submission only. A clear must follow these
         * draws on the same device, but does not publish a guest fence value. */
        queue_mode();queue_bytes("XMLDX8D9",8);queue_bytes(&draws,4);queue_bytes(packet,used);++ordered_commands;
        draws=0; used=0;
    }
    uint32_t header[5]={a[2],a[3],a[4],a[5],a[0]};
    queue_mode();queue_bytes("XMLDX8C5",8);queue_bytes(header,sizeof(header));
    if(a[0])queue_bytes(rects,(size_t)a[0]*16);
    ++ordered_commands;
    xml1_fair_leave(&transport_lock);
}
void xml1_graphics_swap(void) {
    lock_transport("swap");
    if (!live()) fatal("Swap requires XML1_LIVE_DX8=1 (trace mode stops before Swap)");
    uint32_t flags=*(uint32_t*)guest(g_esp+4,4);
    if (flags) fatal("unimplemented swap flags");
    if (frames<8) {
        uint32_t device=*(uint32_t*)guest(0x36CAF8,4);
        const uint32_t *d=guest(device,0x938);
        fprintf(stderr,"[DX8 SUBMIT] frame=%u latest_fence=%08X completed=%08X draws=%u\n",
            frames+1,d[0x2c/4],*(uint32_t*)guest(d[0x30/4],4),draws);
    }
    if (pipe==INVALID_HANDLE_VALUE) connect_worker();
    begin_submission();send_frame_mode();send_bytes("XMLDX8R9",8); send_bytes(&draws,4); send_bytes(packet,used);
    receive_ack();
    if(capture_stream) {
        if(fclose(capture_stream)) fatal("DX8 frame capture close failed");
        capture_stream=NULL;
        fprintf(stderr,"[DX8 FRAME CAPTURE] complete id=%u frame=%u bytes=%zu\n",capture_request_id,frames+1,capture_stream_bytes);
    }
    menu_current_owner();
    xml1_pc_native_frame(frames);
    ++frames;
    xml1_performance_frame(frames);
    if(texture_wire.full) {xml1_texture_wire_reset(&texture_wire);wire_reset_pending=1;}
    capture_next_frame();
    xml1_input_test_frame(frames);
    if (frames==1||frames%60==0) {
        fprintf(stderr,"[DX8 LIVE] presented frame=%u draws=%u bytes=%zu\n",frames,draws,used);
        fprintf(stderr,"[DX8 WIRE] requests=%llu references=%llu avoided_bytes=%llu\n",texture_wire.requests,texture_wire.references,texture_wire.avoided_bytes);
    }
    if(frames%120==0 && getenv("XML1_FRAME_CADENCE")) {
        /* FrameManager singleton from 00011320; 00011421 records the actual
         * elapsed clock passed to updates, not a fabricated per-frame delta. */
        static LARGE_INTEGER previous;static float previous_game;
        LARGE_INTEGER now,frequency;QueryPerformanceCounter(&now);QueryPerformanceFrequency(&frequency);
        float minimum=*(float*)guest(0x47C4E4,4),game=*(float*)guest(0x47C4E8,4);
        if(previous.QuadPart)fprintf(stderr,"[GAME CADENCE] frame=%u minimum_ms=%.6f wall_ms=%.3f game_ms=%.3f\n",frames,
            1000.0*minimum,1000.0*(now.QuadPart-previous.QuadPart)/frequency.QuadPart,1000.0*(game-previous_game));
        previous=now;previous_game=game;
    }
    draws=0; used=0; frame_geometry=0;
    /* Return only after the native renderer has consumed the submitted frame. */
    g_eax=0; g_esp+=8;
    xml1_fair_leave(&transport_lock);
}

/* Called from the retail limiter loop at 00011400 before each clock comparison.
 * Sleep through most of the remaining interval on a high-resolution timer and
 * leave the final stretch to the original poll, which still decides when the
 * frame starts and records the real elapsed time. XML1_FRAME_LIMIT_SPIN=1
 * restores pure polling for A/B measurement. */
void xml1_frame_limit_pause(double elapsed, float minimum)
{
    static HANDLE timer;
    static int enabled=-1;
    if(enabled<0) {
        enabled=!getenv("XML1_FRAME_LIMIT_SPIN");
        if(enabled) timer=CreateWaitableTimerExW(NULL,NULL,CREATE_WAITABLE_TIMER_HIGH_RESOLUTION,TIMER_ALL_ACCESS);
        if(!timer) enabled=0;
    }
    double remaining=(double)minimum-elapsed;
    if(!enabled || !(remaining>0.003) || remaining>0.1) return;
    LARGE_INTEGER due;
    due.QuadPart=-(LONGLONG)((remaining-0.0015)*1e7);
    if(SetWaitableTimer(timer,&due,0,NULL,NULL,FALSE)) WaitForSingleObject(timer,INFINITE);
}
