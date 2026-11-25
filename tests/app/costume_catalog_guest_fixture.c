#include <stdio.h>
#include <stdlib.h>
#include "recomp_funcs.h"

/* Only unrelated engine services are stubbed. The native cycle and filename
 * formatter are the production guest functions. */
ptrdiff_t g_xbox_mem_offset;
uint32_t g_xbox_code_lo,g_xbox_code_hi;
RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp,g_esi;
volatile uint32_t g_icall_trace[ICALL_TRACE_SIZE],g_icall_trace_idx;
volatile uint64_t g_icall_count;
static unsigned stock_default, formatted, calls;
void xml1_graphics_observe(uint32_t va){(void)va;}
void recomp_icall_fail_log(uint32_t va){fprintf(stderr,"unexpected icall %x",va);abort();}
void recomp_icall_not_code_log(uint32_t va){recomp_icall_fail_log(va);}
recomp_func_t recomp_lookup(uint32_t va){(void)va;return NULL;}
recomp_func_t recomp_lookup_kernel(uint32_t va){return recomp_lookup(va);}
recomp_func_t recomp_lookup_manual(uint32_t va){return recomp_lookup(va);}
void xml1_guest_progress_manager_get(void){abort();} /* cycle must bypass retail gate */
void sub_000B0E40(void){g_eax=stock_default;g_esp+=8;}
void sub_00341792(void){formatted=MEM32(g_esp+16);++calls;g_esp+=4;}
static void ensure(int condition){if(!condition)abort();}
static unsigned form(unsigned selected,unsigned requested,unsigned mission,unsigned force) {
    const unsigned character=0x1000,stack=0x3000;
    MEM8(character+0x1e)=selected;
    MEM32(stack+4)=requested;MEM32(stack+8)=force;
    g_ecx=character;g_esp=stack;g_esi=0x12345678;stock_default=mission;calls=0;
    xml1_guest_character_format_skin();
    ensure(g_esp==stack+12 && g_esi==0x12345678 && MEM8(character+0x1e)==selected && calls==1);
    return formatted;
}
void fixture_guest_outfits(void) {
    const unsigned character=0x1000,stack=0x3000;
    void* data=calloc(1,0x500000);
    ensure(data!=NULL);
    g_xbox_mem_offset=(ptrdiff_t)data;
    strcpy((char*)XBOX_PTR(character+0x20c),"Hero");
    MEM8(character+0x370)=5;MEM8(character+0x371)=3;MEM8(character+0x1e)=3;
    g_ecx=character;g_esp=stack;
    xml1_guest_character_definition_cycle_skin();
    ensure(g_esp==stack+4 && MEM8(character+0x1e)==5);
    g_ecx=character;g_esp=stack;
    xml1_guest_character_definition_cycle_skin();
    ensure(g_esp==stack+4 && MEM8(character+0x1e)==3);
    ensure(form(9,UINT32_MAX,5,0)==3); /* absent saved skin wins over mission default */
    ensure(form(5,UINT32_MAX,5,0)==5); /* installed saved skin retained */
    ensure(form(255,UINT32_MAX,5,0)==5); /* native mission outfit retained */
    ensure(form(255,UINT32_MAX,28,0)==3); /* bad mission resource resolves safely */
    ensure(form(5,28,0,0)==3); /* bad explicit request to formatter */
    ensure(form(5,5,0,0)==5);
    ensure(form(9,UINT32_MAX,3,1)==3); /* explicit default request ignores saved ID */
    free(data);
}
