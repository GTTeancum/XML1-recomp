#include "engine/powers/raven_victim_event_guest.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_absorb_runtime.h"
#include "engine/combat/raven_native_damage.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/world/raven_progress_guest.h"
/**
 * X-Men Legends - Recompiled code chunk 11
 * Functions: 250 (0x0008C280 - 0x00095210)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "game/xml1/costume_catalog.h"
#include <math.h>
#include "app/build_settings.h"
#include "game/xml1/character_limits.h"

/**
 * sub_0008C280
 * Original: 0x0008C280 - 0x0008C2B5 (53 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C280: ;
    SET_LO8(edx, MEM8(ecx + 6));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 4));
    PUSH32(esp, ebx);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(ecx + 6) = LO8(eax);
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(edx));
    SET_LO8(edx, MEM8(ecx + 0x32C));
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(ecx + 0x32C) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C2C0
 * Original: 0x0008C2C0 - 0x0008C2C6 (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C2C0(void)
{

loc_0008C2C0: ;
    SET_LO8(eax, MEM8(ecx + 6));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C2D0
 * Original: 0x0008C2D0 - 0x0008C2ED (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C2D0(void)
{

loc_0008C2D0: ;
    SET_LO8(eax, MEM8(ecx + 0x195));
    SET_LO8(eax, LO8(eax) ^ MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x195));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x195) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C2F0
 * Original: 0x0008C2F0 - 0x0008C2F9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C2F0(void)
{

loc_0008C2F0: ;
    if (xml1_costumes_active()) { SET_LO8(eax,1); esp+=4; return; }
    /* Modder mode remains effective even if a loaded save resets GameState. */
    if (xml1_build_settings.modder_mode) { SET_LO8(eax,1); esp+=4; return; }
    SET_LO8(eax, MEM8(ecx + 0x195));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}



/**
 * sub_0008C370
 * Original: 0x0008C370 - 0x0008C37B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C370(void)
{

loc_0008C370: ;
    SET_LO8(eax, MEM8(ecx + 0x195));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0008C380
 * Original: 0x0008C380 - 0x0008C3AD (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C380: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008C3AA; /* jl: less (signed <) */

loc_0008C38A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008C3AA; /* jge: greater or equal (signed >=) */

loc_0008C392: ;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0x150;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;

loc_0008C3AA: ;
    esp += 8; return; /* ret 4 */

}



/**
 * sub_0008C3F0
 * Original: 0x0008C3F0 - 0x0008C4AE (190 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008C3F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ebx);
    fp_push(MEMF(0x44E634)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0008C404u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0008C404: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008C425; /* jne: not equal / not zero */

loc_0008C411: ;
    fp_push(MEMF(0x44E634)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008C425: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008C444; /* jp: parity */

loc_0008C43A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_0008C45D;

loc_0008C444: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008C45D; /* jne: not equal / not zero */

loc_0008C455: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */

loc_0008C45D: ;
    SET_LO8(ebx, MEM8(esi + 4));
    fp_top() = fp_top() * MEMF(0x3C8324); /* fmul dword ptr [0x3c8324] */
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x1F;
    edi = eax;
    PUSH32(esp, 0x0008C474u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008C474: ;
    edx = MEM32(esi);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0x1F);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    ecx = esi;
    MEM8(esi + 4) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008C484u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008C484: ;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, MEM8(esi + 0x32C));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    POP32(esp, edi);
    MEM8(esi + 0x32C) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008C4B0
 * Original: 0x0008C4B0 - 0x0008C560 (176 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008C4B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ebx);
    fp_push(MEMF(0x44E634)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0008C4C4u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0008C4C4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008C4E5; /* jne: not equal / not zero */

loc_0008C4D1: ;
    fp_push(MEMF(0x44E634)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008C4E5: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008C504; /* jp: parity */

loc_0008C4FA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_0008C51D;

loc_0008C504: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008C51D; /* jne: not equal / not zero */

loc_0008C515: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */

loc_0008C51D: ;
    SET_LO8(ebx, MEM8(esi + 5));
    fp_top() = fp_top() * MEMF(0x3C8324); /* fmul dword ptr [0x3c8324] */
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x1F;
    edi = eax;
    PUSH32(esp, 0x0008C534u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008C534: ;
    SET_LO8(ecx, MEM8(esi + 0x32C));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0x1F);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(esi + 5) = LO8(eax);
    eax = eax & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    POP32(esp, edi);
    MEM8(esi + 0x32C) = LO8(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008C560
 * Original: 0x0008C560 - 0x0008C5A0 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C560: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0008C597; /* jl: less (signed <) */

loc_0008C56A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008C597; /* jge: greater or equal (signed >=) */

loc_0008C56F: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008C597; /* jl: less (signed <) */

loc_0008C577: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008C597; /* jge: greater or equal (signed >=) */

loc_0008C57C: ;
    eax = edx + eax * 8 + 0x170;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;

loc_0008C597: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008C5A0
 * Original: 0x0008C5A0 - 0x0008C5E4 (68 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0008C5A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0008C5DF; /* jl: less (signed <) */

loc_0008C5AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008C5DF; /* jge: greater or equal (signed >=) */

loc_0008C5AF: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0008C5DF; /* jl: less (signed <) */

loc_0008C5B7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008C5DF; /* jge: greater or equal (signed >=) */

loc_0008C5BC: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((5) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    eax = esi + eax * 2 + 0x5C;
    eax = MEM32(edx + eax * 4);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0008C5DF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}



/**
 * sub_0008C620
 * Original: 0x0008C620 - 0x0008C81D (509 bytes, 155 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C620: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebx + 0x18C));
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x18C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_0008C63C; /* jbe: below or equal (unsigned <=) */

loc_0008C63A: ;
    SET_LO8(eax, LO8(ecx));

loc_0008C63C: ;
    SET_LO8(ecx, MEM8(ebp + 0x18D));
    MEM8(ebp + 0x18C) = LO8(eax);
    SET_LO8(eax, MEM8(ebx + 0x18D));
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(ebp + 0x18D) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 0x18D));
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0x18D) = LO8(ecx);
    eax = 2;

loc_0008C676: ;
    esi = eax + -2;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ebx + ecx * 4 + 0x148)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4 + 0x148), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C69A; /* je: equal / zero */

loc_0008C693: ;
    MEM32(ebp + ecx * 4 + 0x148) = MEM32(ebp + ecx * 4 + 0x148) | edx;

loc_0008C69A: ;
    esi = eax + -1;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ebx + ecx * 4 + 0x148)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4 + 0x148), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C6BE; /* je: equal / zero */

loc_0008C6B7: ;
    MEM32(ebp + ecx * 4 + 0x148) = MEM32(ebp + ecx * 4 + 0x148) | edx;

loc_0008C6BE: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ebx + ecx * 4 + 0x148)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4 + 0x148), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C6DF; /* je: equal / zero */

loc_0008C6D8: ;
    MEM32(ebp + ecx * 4 + 0x148) = MEM32(ebp + ecx * 4 + 0x148) | edx;

loc_0008C6DF: ;
    esi = eax + 1;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(ebx + ecx * 4 + 0x148)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4 + 0x148), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C703; /* je: equal / zero */

loc_0008C6FC: ;
    MEM32(ebp + ecx * 4 + 0x148) = MEM32(ebp + ecx * 4 + 0x148) | edx;

loc_0008C703: ;
    eax = eax + 4;
    edx = eax + -2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C676; /* jl: less (signed <) */

loc_0008C715: ;
    eax = MEM32(ebx + 0x144);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008C750; /* jle: less or equal (signed <=) */

loc_0008C721: ;
    eax = ebx;

loc_0008C723: ;
    edi = MEM32(ebp + 0x144);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008C742; /* je: equal / zero */

loc_0008C72E: ;
    edi = edi << 5;
    edi = edi + ebp;
    ecx = 8;
    esi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebp + 0x144) = MEM32(ebp + 0x144) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x144)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0008C742: ;
    ecx = MEM32(ebx + 0x144);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C723; /* jl: less (signed <) */

loc_0008C750: ;
    MEM32(esp + 0x14) = 0x168;
    edi = 0x5A;
    /* nop */

loc_0008C760: ;
    eax = 2;

loc_0008C765: ;
    ecx = eax + -2;
    edx = ecx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = edi + edx;
    _fa = (uint32_t)(MEM32(ebx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C788; /* je: equal / zero */

loc_0008C77F: ;
    ecx = MEM32(esp + 0x14);
    ecx = ecx + ebp;
    MEM32(ecx + edx * 4) = MEM32(ecx + edx * 4) | esi;

loc_0008C788: ;
    ecx = eax + -1;
    edx = ecx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = edi + edx;
    _fa = (uint32_t)(MEM32(ebx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C7AB; /* je: equal / zero */

loc_0008C7A2: ;
    ecx = MEM32(esp + 0x14);
    ecx = ecx + ebp;
    MEM32(ecx + edx * 4) = MEM32(ecx + edx * 4) | esi;

loc_0008C7AB: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    edx = eax;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = edi + edx;
    _fa = (uint32_t)(MEM32(ebx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C7CD; /* je: equal / zero */

loc_0008C7C4: ;
    ecx = MEM32(esp + 0x14);
    ecx = ecx + ebp;
    MEM32(ecx + edx * 4) = MEM32(ecx + edx * 4) | esi;

loc_0008C7CD: ;
    ecx = eax + 1;
    edx = ecx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = edi + edx;
    _fa = (uint32_t)(MEM32(ebx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C7F0; /* je: equal / zero */

loc_0008C7E7: ;
    ecx = MEM32(esp + 0x14);
    ecx = ecx + ebp;
    MEM32(ecx + edx * 4) = MEM32(ecx + edx * 4) | esi;

loc_0008C7F0: ;
    eax = eax + 4;
    edx = eax + -2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008C765; /* jl: less (signed <) */

loc_0008C7FF: ;
    ecx = MEM32(esp + 0x14);
    edi = edi + 2;
    ecx = ecx + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x62) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x62 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0008C760; /* jl: less (signed <) */

loc_0008C816: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_0008C860
 * Original: 0x0008C860 - 0x0008C8E7 (135 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, 0x0008C870u); RECOMP_ABI_CALL(0x0008C8F0u, sub_0008C8F0); /* call 0x0008C8F0 */

loc_0008C870: ;
    eax = MEM32(ebp + 0x144);
    MEM32(ebx + 0x144) = eax;
    ecx = 8;
    esi = ebp + 0x148;
    edi = ebx + 0x148;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp + 0x168;
    PUSH32(esp, ecx);
    ecx = ebx + 0x168;
    PUSH32(esp, 0x0008C8A1u); RECOMP_ABI_CALL(0x0008C910u, sub_0008C910); /* call 0x0008C910 */

loc_0008C8A1: ;
    SET_LO8(edx, MEM8(ebp + 0x18C));
    SET_LO8(eax, MEM8(ebx + 0x18D));
    MEM8(ebx + 0x18C) = LO8(edx);
    SET_LO8(eax, LO8(eax) ^ MEM8(ebp + 0x18D));
    SET_LO8(ecx, MEM8(ebx + 0x18D));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebx + 0x18D) = LO8(ecx);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(ecx, MEM8(ebp + 0x18D));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) & 2);
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, ebp);
    MEM8(ebx + 0x18D) = LO8(ecx);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C8F0
 * Original: 0x0008C8F0 - 0x0008C906 (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C8F0(void)
{

loc_0008C8F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    ecx = 0x51;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008C910
 * Original: 0x0008C910 - 0x0008C926 (22 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C910(void)
{

loc_0008C910: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    ecx = 9;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}





/**
 * sub_0008C9E0
 * Original: 0x0008C9E0 - 0x0008CA18 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008C9E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008C9E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008C9E6u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008C9E6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008C9EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008C9ED: ;
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x10C));
    MEMF(esi + 0x104) = (float)fp_top(); /* fst */
    SET_LO8(eax, LO8(eax) | 0xE);
    MEMF(esi + 0x108) = (float)fp_top(); /* fst */
    MEM8(esi + 0x10C) = LO8(eax);
    PUSH32(esp, 0x0008CA10u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008CA10: ;
    MEM32(esi + 0x100) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008CA20
 * Original: 0x0008CA20 - 0x0008CB22 (258 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008CA20: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CA2Au); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CA2A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008CA31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CA31: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008CA74; /* jne: not equal / not zero */

loc_0008CA3E: ;
    PUSH32(esp, 0x0008CA43u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CA43: ;
    esi = eax;
    PUSH32(esp, 0x0008CA4Au); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CA4A: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0008CA53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CA53: ;
    fp_top() = fp_top() + MEMF(0x44E634); /* fadd dword ptr [0x44e634] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008CAB6; /* jp: parity */

loc_0008CA6A: ;
    MEM32(esp + 0x14) = 0;
    goto loc_0008CACF;

loc_0008CA74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008CAE7; /* jne: not equal / not zero */

loc_0008CA79: ;
    eax = MEM32(0x44E634);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0008CA87u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CA87: ;
    esi = eax;
    PUSH32(esp, 0x0008CA8Eu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CA8E: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008CA97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CA97: ;
    fp_top() = fp_top() - MEMF(0x44E634); /* fsub dword ptr [0x44e634] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008CAB6; /* jp: parity */

loc_0008CAAC: ;
    eax = MEM32(esp + 8);
    MEM32(esp + 0x14) = eax;
    goto loc_0008CACF;

loc_0008CAB6: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008CACF; /* jne: not equal / not zero */

loc_0008CAC7: ;
    MEM32(esp + 0x14) = 0x3F800000;

loc_0008CACF: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0008CADBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CADB: ;
    PUSH32(esp, 0x0008CAE0u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CAE0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008CAE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CAE7: ;
    PUSH32(esp, 0x0008CAECu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CAEC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0008CAF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CAF3: ;
    fp_top() = MEMF(esp + 0xC) - fp_top(); /* fsubr dword ptr [esp + 0xc] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x44E634)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008CB1E; /* jp: parity */

loc_0008CB10: ;
    PUSH32(esp, 0x0008CB15u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0008CB15: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0008CB1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CB1E: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008CB30
 * Original: 0x0008CB30 - 0x0008CB68 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CB30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008CB30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008CB36u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CB36: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0008CB3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CB3D: ;
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x10C));
    MEMF(esi + 0x104) = (float)fp_top(); /* fst */
    SET_LO8(eax, LO8(eax) | 0xE);
    MEMF(esi + 0x108) = (float)fp_top(); /* fst */
    MEM8(esi + 0x10C) = LO8(eax);
    PUSH32(esp, 0x0008CB60u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008CB60: ;
    MEM32(esi + 0x100) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008CB70
 * Original: 0x0008CB70 - 0x0008CC63 (243 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CB70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008CB70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CB77u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CB77: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0008CB7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CB7E: ;
    fp_pop(); /* fstp st(0) */
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008CBF2; /* jne: not equal / not zero */

loc_0008CB89: ;
    PUSH32(esp, 0x0008CB8Eu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CB8E: ;
    esi = eax;
    PUSH32(esp, 0x0008CB95u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CB95: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0008CB9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CB9E: ;
    fp_top() = fp_top() + MEMF(0x44E634); /* fadd dword ptr [0x44e634] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008CBBF; /* jp: parity */

loc_0008CBB5: ;
    MEM32(esp + 0xC) = 0;
    goto loc_0008CBD8;

loc_0008CBBF: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008CBD8; /* jne: not equal / not zero */

loc_0008CBD0: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_0008CBD8: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0008CBE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CBE4: ;
    PUSH32(esp, 0x0008CBE9u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CBE9: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0008CBF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008CC60; /* jne: not equal / not zero */

loc_0008CBF7: ;
    PUSH32(esp, 0x0008CBFCu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CBFC: ;
    esi = eax;
    PUSH32(esp, 0x0008CC03u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CC03: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0008CC0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CC0C: ;
    fp_top() = fp_top() - MEMF(0x44E634); /* fsub dword ptr [0x44e634] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008CC2D; /* jp: parity */

loc_0008CC23: ;
    MEM32(esp + 0xC) = 0;
    goto loc_0008CC46;

loc_0008CC2D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008CC46; /* jne: not equal / not zero */

loc_0008CC3E: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_0008CC46: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0008CC52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CC52: ;
    PUSH32(esp, 0x0008CC57u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CC57: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0008CC60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008CC70
 * Original: 0x0008CC70 - 0x0008CC91 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CC70(void)
{

loc_0008CC70: ;
    PUSH32(esp, 0x0008CC75u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CC75: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0008CC7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CC7C: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CCA0
 * Original: 0x0008CCA0 - 0x0008CCD1 (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CCA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0008CCA0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008CCD0; /* jne: not equal / not zero */

loc_0008CCA7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CCAFu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CCAF: ;
    esi = eax;
    PUSH32(esp, 0x0008CCB6u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CCB6: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0008CCC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CCC1: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x5C); PUSH32(esp, 0x0008CCCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CCCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008CCD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CCE0
 * Original: 0x0008CCE0 - 0x0008CD01 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CCE0(void)
{

loc_0008CCE0: ;
    PUSH32(esp, 0x0008CCE5u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CCE5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0008CCECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CCEC: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CD10
 * Original: 0x0008CD10 - 0x0008CD41 (49 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0008CD10: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008CD40; /* jne: not equal / not zero */

loc_0008CD17: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CD1Fu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CD1F: ;
    esi = eax;
    PUSH32(esp, 0x0008CD26u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CD26: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0008CD31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CD31: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x64); PUSH32(esp, 0x0008CD3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CD3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008CD40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CD50
 * Original: 0x0008CD50 - 0x0008CD71 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CD50(void)
{

loc_0008CD50: ;
    PUSH32(esp, 0x0008CD55u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CD55: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0008CD5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CD5C: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CD80
 * Original: 0x0008CD80 - 0x0008CDED (109 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0008CD80: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008CDEC; /* jne: not equal / not zero */

loc_0008CD87: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CD8Fu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CD8F: ;
    esi = eax;
    PUSH32(esp, 0x0008CD96u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CD96: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0008CDA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CDA1: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x6C); PUSH32(esp, 0x0008CDADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CDAD: ;
    PUSH32(esp, 0x0008CDB2u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CDB2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0008CDB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CDB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008CDE9; /* je: equal / zero */

loc_0008CDBD: ;
    PUSH32(esp, 0x0008CDC2u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0008CDC2: ;
    esi = eax;
    PUSH32(esp, 0x0008CDC9u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_0008CDC9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F000000);
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x0008CDE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CDE3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x44); PUSH32(esp, 0x0008CDE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CDE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008CDEC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CDF0
 * Original: 0x0008CDF0 - 0x0008CE0E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CDF0(void)
{

loc_0008CDF0: ;
    PUSH32(esp, 0x0008CDF5u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CDF5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0008CDFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CDFC: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x10C) = MEM8(ecx + 0x10C) | 2;
    MEM32(ecx + 0x100) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CE10
 * Original: 0x0008CE10 - 0x0008CE2F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008CE10: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008CE2E; /* jne: not equal / not zero */

loc_0008CE17: ;
    PUSH32(esp, 0x0008CE1Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CE1C: ;
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x100);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0008CE2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CE2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CE30
 * Original: 0x0008CE30 - 0x0008CE54 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CE30(void)
{

loc_0008CE30: ;
    PUSH32(esp, 0x0008CE35u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CE35: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0008CE3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CE3F: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CE60
 * Original: 0x0008CE60 - 0x0008CE94 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0008CE60: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008CE93; /* jne: not equal / not zero */

loc_0008CE67: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CE6Fu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CE6F: ;
    esi = eax;
    PUSH32(esp, 0x0008CE76u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CE76: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0008CE84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CE84: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x7C); PUSH32(esp, 0x0008CE90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CE90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008CE93: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CEA0
 * Original: 0x0008CEA0 - 0x0008CEC4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CEA0(void)
{

loc_0008CEA0: ;
    PUSH32(esp, 0x0008CEA5u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CEA5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0008CEAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CEAF: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CED0
 * Original: 0x0008CED0 - 0x0008CF07 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0008CED0: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008CF06; /* jne: not equal / not zero */

loc_0008CED7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008CEDFu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CEDF: ;
    esi = eax;
    PUSH32(esp, 0x0008CEE6u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_0008CEE6: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0008CEF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CEF4: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x84); PUSH32(esp, 0x0008CF03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CF03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008CF06: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008CF10
 * Original: 0x0008CF10 - 0x0008D046 (310 bytes, 93 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008CF10(void)
{

loc_0008CF10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008CF19u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0008CF19: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8C9E0);
    PUSH32(esp, 0x8CA20);
    PUSH32(esp, 0x3CFAD0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CF2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CF2E: ;
    PUSH32(esp, 0x0008CF33u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0008CF33: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8CB30);
    PUSH32(esp, 0x8CB70);
    PUSH32(esp, 0x3CFAC4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CF48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CF48: ;
    PUSH32(esp, 0x0008CF4Du); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0008CF4D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8CC70);
    PUSH32(esp, 0x8CCA0);
    PUSH32(esp, 0x3CFABC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CF62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CF62: ;
    PUSH32(esp, 0x0008CF67u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0008CF67: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8CCE0);
    PUSH32(esp, 0x8CD10);
    PUSH32(esp, 0x3CFAB0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CF7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CF7C: ;
    PUSH32(esp, 0x0008CF81u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0008CF81: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8CD50);
    PUSH32(esp, 0x8CD80);
    PUSH32(esp, 0x3CFAA4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CF96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CF96: ;
    PUSH32(esp, 0x0008CF9Bu); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0008CF9B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8CDF0);
    PUSH32(esp, 0x8CE10);
    PUSH32(esp, 0x3CFA98);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CFB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CFB0: ;
    PUSH32(esp, 0x0008CFB5u); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0008CFB5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8CEA0);
    PUSH32(esp, 0x8CED0);
    PUSH32(esp, 0x3CFA8C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CFCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CFCA: ;
    PUSH32(esp, 0x0008CFCFu); RECOMP_ABI_CALL(0x0011CDD0u, sub_0011CDD0); /* call 0x0011CDD0 */

loc_0008CFCF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8CE30);
    PUSH32(esp, 0x8CE60);
    PUSH32(esp, 0x3CFA80);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008CFE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008CFE4: ;
    PUSH32(esp, 0x0008CFE9u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0008CFE9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFA74);
    PUSH32(esp, 0x3CFA6C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008D004u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D004: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0008D010u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D010: ;
    PUSH32(esp, 0x0008D015u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0008D015: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F4CCCCD);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFA60);
    PUSH32(esp, 0x3CFA6C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008D030u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D030: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0008D03Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D03C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008D043u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D043: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008D050
 * Original: 0x0008D050 - 0x0008D06F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D050: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0008D067; /* jae: above or equal (unsigned >=) */

loc_0008D05A: ;
    SET_LO8(ecx, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 1) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0008D067; /* jae: above or equal (unsigned >=) */

loc_0008D062: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_0008D067: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D070
 * Original: 0x0008D070 - 0x0008D08F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0008D070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D070: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D08A; /* jne: not equal / not zero */

loc_0008D07A: ;
    SET_LO8(ecx, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D08A; /* jne: not equal / not zero */

loc_0008D082: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0008D08A: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008D090
 * Original: 0x0008D090 - 0x0008D0D8 (72 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D090: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_0008D0D2; /* jl: less (signed <) */

loc_0008D099: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D0D2; /* jl: less (signed <) */

loc_0008D0A1: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D0D2; /* jl: less (signed <) */

loc_0008D0A9: ;
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ecx + 0x12A58));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0008D0D2; /* jge: greater or equal (signed >=) */

loc_0008D0B6: ;
    eax = ZX8(MEM8(ecx + 0x12A59));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D0D2; /* jge: greater or equal (signed >=) */

loc_0008D0C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D0D2; /* jge: greater or equal (signed >=) */

loc_0008D0C9: ;
    eax = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0008D0D2: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0008D0E0
 * Original: 0x0008D0E0 - 0x0008D115 (53 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0008D0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D0E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D110; /* jl: less (signed <) */

loc_0008D0E8: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D110; /* jl: less (signed <) */

loc_0008D0F0: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0x12A58));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0008D110; /* jge: greater or equal (signed >=) */

loc_0008D0FD: ;
    eax = ZX8(MEM8(ecx + 0x12A59));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D110; /* jge: greater or equal (signed >=) */

loc_0008D108: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_0008D110: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008D120
 * Original: 0x0008D120 - 0x0008D1CD (173 bytes, 55 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    fp_push(MEMF(edi)); /* fld float */
    esi = ecx;
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    fp_top() = fp_top() - MEMF(esi + 0x12A38); /* fsub dword ptr [esi + 0x12a38] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008D143u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D143: ;
    ebx = MEM32(esp + 0x18);
    MEM32(ebx) = eax;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    fp_top() = fp_top() - MEMF(esi + 0x12A3C); /* fsub dword ptr [esi + 0x12a3c] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008D163u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D163: ;
    ebp = MEM32(esp + 0x1C);
    MEM32(ebp) = eax;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    PUSH32(esp, 0x0008D184u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D184: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    ebx = MEM32(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = MEM32(ebp);
    if (TEST_S(_fas, _fbs)) goto loc_0008D1C4; /* jl: less (signed <) */

loc_0008D193: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D1C4; /* jl: less (signed <) */

loc_0008D197: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D1C4; /* jl: less (signed <) */

loc_0008D19B: ;
    edx = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D1C4; /* jge: greater or equal (signed >=) */

loc_0008D1A6: ;
    ecx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D1C4; /* jge: greater or equal (signed >=) */

loc_0008D1B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D1C4; /* jge: greater or equal (signed >=) */

loc_0008D1B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0008D1C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008D1D0
 * Original: 0x0008D1D0 - 0x0008D275 (165 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008D1D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    fp_push(MEMF(edi)); /* fld float */
    esi = ecx;
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    fp_top() = fp_top() - MEMF(esi + 0x12A38); /* fsub dword ptr [esi + 0x12a38] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008D1F2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D1F2: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    ebx = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A3C); /* fsub dword ptr [esi + 0x12a3c] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008D20Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D20E: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    MEM32(esp + 0x10) = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    PUSH32(esp, 0x0008D22Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D22C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D26D; /* jl: less (signed <) */

loc_0008D230: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D26D; /* jl: less (signed <) */

loc_0008D238: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008D26D; /* jl: less (signed <) */

loc_0008D23C: ;
    ecx = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D26D; /* jge: greater or equal (signed >=) */

loc_0008D247: ;
    ecx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D26D; /* jge: greater or equal (signed >=) */

loc_0008D252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008D26D; /* jge: greater or equal (signed >=) */

loc_0008D259: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx) = LO8(ebx);
    MEM8(ecx + 2) = LO8(eax);
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0008D26D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008D280
 * Original: 0x0008D280 - 0x0008D2AF (47 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008D280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(ebx, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D2A8; /* je: equal / zero */

loc_0008D28E: ;
    ecx = ZX8(MEM8(esi));
    eax = ZX8(LO8(ebx));
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + ecx;
    ecx = ZX8(MEM8(esp + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(eax, LO8(ebx));
    if (CMP_GE(_fas, _fbs)) goto loc_0008D2AA; /* jge: greater or equal (signed >=) */

loc_0008D2A8: ;
    SET_LO8(eax, MEM8(esi));

loc_0008D2AA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008D2B0
 * Original: 0x0008D2B0 - 0x0008D30C (92 bytes, 23 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008D2B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008D2B0: ;
    eax = MEM32(esp + 4);
    edx = ZX8(MEM8(eax));
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x12A20); /* fmul dword ptr [ecx + 0x12a20] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A38); /* fadd dword ptr [ecx + 0x12a38] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ZX8(MEM8(eax + 1));
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x12A20); /* fmul dword ptr [ecx + 0x12a20] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A3C); /* fadd dword ptr [ecx + 0x12a3c] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX8(MEM8(eax + 2));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CFB38); /* fmul dword ptr [0x3cfb38] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A40); /* fadd dword ptr [ecx + 0x12a40] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008D310
 * Original: 0x0008D310 - 0x0008D36A (90 bytes, 20 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008D310(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008D310: ;
    eax = ZX8(MEM8(esp + 4));
    edx = ZX8(MEM8(esp + 8));
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x10);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    edx = ZX8(MEM8(esp + 0xC));
    fp_top() = fp_top() * MEMF(ecx + 0x12A20); /* fmul dword ptr [ecx + 0x12a20] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A38); /* fadd dword ptr [ecx + 0x12a38] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    fp_top() = fp_top() * MEMF(ecx + 0x12A20); /* fmul dword ptr [ecx + 0x12a20] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A3C); /* fadd dword ptr [ecx + 0x12a3c] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CFB38); /* fmul dword ptr [0x3cfb38] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A40); /* fadd dword ptr [ecx + 0x12a40] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008D370
 * Original: 0x0008D370 - 0x0008D443 (211 bytes, 48 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008D370(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008D370: ;
    eax = MEM32(esp + 4);
    edx = ZX8(MEM8(eax));
    MEM32(esp + 4) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x12A20); /* fmul dword ptr [ecx + 0x12a20] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A38); /* fadd dword ptr [ecx + 0x12a38] */
    fp_top() = fp_top() - MEMF(ecx + 0x12A2C); /* fsub dword ptr [ecx + 0x12a2c] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ZX8(MEM8(eax + 1));
    MEM32(esp + 8) = esi;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x12A20); /* fmul dword ptr [ecx + 0x12a20] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A3C); /* fadd dword ptr [ecx + 0x12a3c] */
    fp_top() = fp_top() - MEMF(ecx + 0x12A2C); /* fsub dword ptr [ecx + 0x12a2c] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ZX8(MEM8(eax + 2));
    MEM32(esp + 8) = esi;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CFB38); /* fmul dword ptr [0x3cfb38] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A40); /* fadd dword ptr [ecx + 0x12a40] */
    fp_top() = fp_top() - MEMF(0x3CFB3C); /* fsub dword ptr [0x3cfb3c] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX8(MEM8(eax));
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 0x10);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x12A20); /* fmul dword ptr [ecx + 0x12a20] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A38); /* fadd dword ptr [ecx + 0x12a38] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A2C); /* fadd dword ptr [ecx + 0x12a2c] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esi = ZX8(MEM8(eax + 1));
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x12A20); /* fmul dword ptr [ecx + 0x12a20] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A3C); /* fadd dword ptr [ecx + 0x12a3c] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A2C); /* fadd dword ptr [ecx + 0x12a2c] */
    MEMF(edx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX8(MEM8(eax + 2));
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CFB38); /* fmul dword ptr [0x3cfb38] */
    fp_top() = fp_top() + MEMF(ecx + 0x12A40); /* fadd dword ptr [ecx + 0x12a40] */
    fp_top() = fp_top() + MEMF(0x3CAA50); /* fadd dword ptr [0x3caa50] */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008D450
 * Original: 0x0008D450 - 0x0008D48E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0008D450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008D450: ;
    fp_push(MEMF(ecx + 0x108)); /* fld float */
    fp_push(MEMF(ecx + 0x104)); /* fld float */
    fp_push(MEMF(ecx + 0x100)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CD304)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cd304] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D48B; /* jne: not equal / not zero */

loc_0008D485: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0008D48B: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008D490
 * Original: 0x0008D490 - 0x0008D613 (387 bytes, 101 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008D490: ;
    esp = esp - 0x18;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = MEM32(esp + 0x1C);
    fp_top() = fp_top() / MEMF(esp + 0x1C); /* fdiv dword ptr [esp + 0x1c] */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x12A20) = eax;
    MEMF(esi + 0x12A28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esi + 0x12A2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA844); /* fmul dword ptr [0x3ca844] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esi + 0x12A24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0008D4DCu); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0008D4DC: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008D4E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D4E8: ;
    edx = MEM32(eax);
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x0008D4F3u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0008D4F3: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008D4FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D4FF: ;
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0008D50Bu); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0008D50B: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008D517u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D517: ;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0008D522u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0008D522: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0008D52Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D52E: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    MEMF(esi + 0x12A38) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(esi + 0x12A3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x12A30)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CFB3C); /* fadd dword ptr [0x3cfb3c] */
    MEMF(esi + 0x12A40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esi + 0x12A2C); /* fsub dword ptr [esi + 0x12a2c] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008D578u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D578: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x12A2C); /* fsub dword ptr [esi + 0x12a2c] */
    MEM32(esi + 0x12A44) = eax;
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008D593u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D593: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    MEM32(esi + 0x12A48) = eax;
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008D5ACu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D5AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    ebx = 0xFF;
    if (CMP_G(_fas, _fbs)) goto loc_0008D5BA; /* jg: greater (signed >) */

loc_0008D5B8: ;
    ebx = eax;

loc_0008D5BA: ;
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    MEM8(esi + 0x12A58) = LO8(ebx);
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008D5CFu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D5CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008D5DB; /* jle: less or equal (signed <=) */

loc_0008D5D6: ;
    eax = 0xFF;

loc_0008D5DB: ;
    edx = ZX8(LO8(eax));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2400 (32-bit) */
    MEM8(esi + 0x12A59) = LO8(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_0008D60B; /* jle: less or equal (signed <=) */

loc_0008D5F2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x60 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0008D5F9; /* jbe: below or equal (unsigned <=) */

loc_0008D5F7: ;
    SET_LO8(ebx, 0x60);

loc_0008D5F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x60) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x60 (8-bit) */
    MEM8(esi + 0x12A58) = LO8(ebx);
    if (CMP_BE(_fa, _fb)) goto loc_0008D605; /* jbe: below or equal (unsigned <=) */

loc_0008D603: ;
    SET_LO8(eax, 0x60);

loc_0008D605: ;
    MEM8(esi + 0x12A59) = LO8(eax);

loc_0008D60B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008D620
 * Original: 0x0008D620 - 0x0008D6C3 (163 bytes, 41 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008D620: ;
    eax = ZX8(MEM8(esp + 4));
    edx = ZX8(MEM8(ecx + 0x641));
    MEM32(esp + 4) = eax;
    eax = ZX8(MEM8(esp + 8));
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    edx = ZX8(MEM8(ecx + 0x642));
    fp_top() = fp_top() - (double)SMEM32(esp + 4); /* fisub dword ptr [esp + 4] */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = ZX8(MEM8(esp + 0xC));
    MEM32(esp + 4) = edx;
    edx = ZX8(MEM8(ecx + 0x643));
    fp_top() = fp_top() - (double)SMEM32(esp + 4); /* fisub dword ptr [esp + 4] */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    fp_top() = fp_top() - (double)SMEM32(esp + 4); /* fisub dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    MEMF(ecx + 0x65C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8360)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8360] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D6AF; /* jne: not equal / not zero */

loc_0008D6A5: ;
    MEM32(ecx + 0x65C) = 0x437F0000;

loc_0008D6AF: ;
    fp_push(MEMF(ecx + 0x65C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    PUSH32(esp, 0x0008D6C0u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008D6C0: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008D6D0
 * Original: 0x0008D6D0 - 0x0008D74E (126 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D6D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D6D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0008D6EB; /* je: equal / zero */

loc_0008D6E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D6EB; /* je: equal / zero */

loc_0008D6E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008D735; /* jne: not equal / not zero */

loc_0008D6EB: ;
    eax = MEM32(esi + 0x3E4);
    ebp = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008D6FB; /* jl: less (signed <) */

loc_0008D6F9: ;
    ebp = eax;

loc_0008D6FB: ;
    edi = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008D735; /* jle: less or equal (signed <=) */

loc_0008D704: ;
    ebx = MEM32(esp + 0x14);
    goto loc_0008D710;

    /* nop */

loc_0008D710: ;
    eax = MEM32(esi + 0x3E4);
    edx = MEM32(esi);
    eax = eax - edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008D720u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D73F; /* je: equal / zero */

loc_0008D724: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008D730; /* je: equal / zero */

loc_0008D72C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008D73F; /* je: equal / zero */

loc_0008D730: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008D710; /* jl: less (signed <) */

loc_0008D735: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO16(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0008D73F: ;
    eax = MEM32(esi + 0x3E4);
    eax = eax - edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0008D750
 * Original: 0x0008D750 - 0x0008DAE4 (916 bytes, 302 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008D750(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008D750: ;
    esp = esp - 0xC;
    edx = ZX8(MEM8(esp + 0x14));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x20);
    MEM8(eax) = 0;
    eax = ecx;
    eax = eax - esi;
    eax = eax - 4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM32(esi + 0x12A5C) = eax;
    SET_LO8(ecx, MEM8(edx + ecx));
    MEM8(esi + 0x12A64) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x12A58));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebp = esi + 0x12A14;
    PUSH32(esp, ebp);
    edi = esi + 0x12A62;
    ecx = esi;
    MEM32(esp + 0x2C) = 0;
    MEM8(esi + 0x12A63) = LO8(eax);
    eax = esi + 0x12A08;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM8(edi) = LO8(edx);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0008D7CCu); RECOMP_ABI_CALL(0x0008D370u, sub_0008D370); /* call 0x0008D370 */

loc_0008D7CC: ;
    edx = ZX8(MEM8(edi));
    eax = ZX8(MEM8(edi + 1));
    ecx = ZX8(MEM8(edi + 2));
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEM32(esp + 0x20) = eax;
    eax = ebp;
    fp_top() = fp_top() * MEMF(esi + 0x12A20); /* fmul dword ptr [esi + 0x12a20] */
    fp_top() = fp_top() + MEMF(esi + 0x12A38); /* fadd dword ptr [esi + 0x12a38] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEM32(esp + 0x20) = ecx;
    ecx = 2;
    fp_top() = fp_top() * MEMF(esi + 0x12A20); /* fmul dword ptr [esi + 0x12a20] */
    fp_top() = fp_top() + MEMF(esi + 0x12A3C); /* fadd dword ptr [esi + 0x12a3c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CFB38); /* fmul dword ptr [0x3cfb38] */
    fp_top() = fp_top() + MEMF(esi + 0x12A40); /* fadd dword ptr [esi + 0x12a40] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0008D826: ;
    fp_push(MEMF(esi + 0x12A20)); /* fld float */
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    fp_top() = fp_top() + MEMF(eax + -16); /* fadd dword ptr [eax - 0x10] */
    MEMF(eax + -16) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x12A20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    fp_top() = MEMF(eax + -4) - fp_top(); /* fsubr dword ptr [eax - 4] */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_0008D826; /* jne: not equal / not zero */

loc_0008D850: ;
    PUSH32(esp, 0x0008D855u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0008D855: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0008D863u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D863: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DAD6; /* je: equal / zero */

loc_0008D86B: ;
    eax = MEM32(ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D891; /* jne: not equal / not zero */

loc_0008D873: ;
    edi = edi & 0xFFFFFFE0u;
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DAD6; /* jge: greater or equal (signed >=) */

loc_0008D885: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = MEM32(ebx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008D873; /* je: equal / zero */

loc_0008D891: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D89E; /* jne: not equal / not zero */

loc_0008D898: ;
    edi = edi + 0x10;
    eax = eax >> 0x10;

loc_0008D89E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D8A8; /* jne: not equal / not zero */

loc_0008D8A2: ;
    edi = edi + 8;
    eax = eax >> 8;

loc_0008D8A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D8B2; /* jne: not equal / not zero */

loc_0008D8AC: ;
    edi = edi + 4;
    eax = eax >> 4;

loc_0008D8B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D8BD; /* jne: not equal / not zero */

loc_0008D8B6: ;
    eax = eax >> 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008D8B6; /* je: equal / zero */

loc_0008D8BD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DAD6; /* jge: greater or equal (signed >=) */

loc_0008D8C9: ;
    /* nop */

loc_0008D8D0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008D8D6u); RECOMP_ABI_CALL(0x00066B00u, sub_00066B00); /* call 0x00066B00 */

loc_0008D8D6: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008D903; /* je: equal / zero */

loc_0008D8DF: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0008D8E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D8E5: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D910; /* jne: not equal / not zero */

loc_0008D903: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ebx + ecx * 4;
    goto loc_0008DA4E;

loc_0008D910: ;
    fp_push(MEMF(esi + 0x108)); /* fld float */
    fp_push(MEMF(esi + 0x104)); /* fld float */
    fp_push(MEMF(esi + 0x100)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CD304)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cd304] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D952; /* jne: not equal / not zero */

loc_0008D945: ;
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = ebx + eax * 4;
    goto loc_0008DA4E;

loc_0008D952: ;
    _fa = (uint32_t)(MEM8(esi + 0x234)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x234), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008D968; /* je: equal / zero */

loc_0008D95B: ;
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = ebx + eax * 4;
    goto loc_0008DA4E;

loc_0008D968: ;
    eax = MEM32(esi + 4);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008D97E; /* je: equal / zero */

loc_0008D971: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ebx + ecx * 4;
    goto loc_0008DA4E;

loc_0008D97E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0008D984u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D984: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DA46; /* jne: not equal / not zero */

loc_0008D9A6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008D9ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008D9AC: ;
    edx = MEM32(0x49ECE8);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DA46; /* jne: not equal / not zero */

loc_0008D9CA: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esi + 0x50;
    PUSH32(esp, 0x0008D9D7u); RECOMP_ABI_CALL(0x00057D00u, sub_00057D00); /* call 0x00057D00 */

loc_0008D9D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008D9E5; /* jne: not equal / not zero */

loc_0008D9DB: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ebx + ecx * 4;
    goto loc_0008DA4E;

loc_0008D9E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008D9EBu); RECOMP_ABI_CALL(0x00034700u, sub_00034700); /* call 0x00034700 */

loc_0008D9EB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DA19; /* je: equal / zero */

loc_0008D9F2: ;
    eax = MEM32(eax + 4);
    ecx = eax;
    ecx = ecx >> 0x11;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DA19; /* je: equal / zero */

loc_0008D9FF: ;
    eax = eax >> 0x15;
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DA12; /* je: equal / zero */

loc_0008DA08: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0008DA10u); RECOMP_ABI_CALL(0x0014A7A0u, sub_0014A7A0); /* call 0x0014A7A0 */

loc_0008DA10: ;
    goto loc_0008DA62;

loc_0008DA12: ;
    edx = MEM32(esp + 0x2C);
    MEM8(edx) = 1;

loc_0008DA19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008DA1Fu); RECOMP_ABI_CALL(0x0002F590u, sub_0002F590); /* call 0x0002F590 */

loc_0008DA1F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DA40; /* je: equal / zero */

loc_0008DA26: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0008DA32u); RECOMP_ABI_CALL(0x000B62D0u, sub_000B62D0); /* call 0x000B62D0 */

loc_0008DA32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DA40; /* jne: not equal / not zero */

loc_0008DA36: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0008DA3Eu); RECOMP_ABI_CALL(0x0014A7A0u, sub_0014A7A0); /* call 0x0014A7A0 */

loc_0008DA3E: ;
    goto loc_0008DA62;

loc_0008DA40: ;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0008DA62;

loc_0008DA46: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = ebx + edx * 4;

loc_0008DA4E: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_0008DA62: ;
    edx = edi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DAD6; /* jge: greater or equal (signed >=) */

loc_0008DA6D: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ebx + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DA9A; /* jne: not equal / not zero */

loc_0008DA80: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DAD6; /* jge: greater or equal (signed >=) */

loc_0008DA8E: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(ebx + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DA80; /* je: equal / zero */

loc_0008DA9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DAA7; /* jne: not equal / not zero */

loc_0008DAA1: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0008DAA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DAB1; /* jne: not equal / not zero */

loc_0008DAAB: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0008DAB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DABB; /* jne: not equal / not zero */

loc_0008DAB5: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0008DABB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DAC7; /* jne: not equal / not zero */

loc_0008DABF: ;
    /* nop */

loc_0008DAC0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DAC0; /* je: equal / zero */

loc_0008DAC7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DAD6; /* jge: greater or equal (signed >=) */

loc_0008DACF: ;
    edi = edx;
    goto loc_0008D8D0;

loc_0008DAD6: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008DAF0
 * Original: 0x0008DAF0 - 0x0008DD1B (555 bytes, 159 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0008DAF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008DAF0: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x20);
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(esi + 0x12A38);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esi + 0x12A58));
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x20) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    MEM32(esp + 0x24) = edx;
    fp_top() = fp_top() * MEMF(esi + 0x12A20); /* fmul dword ptr [esi + 0x12a20] */
    fp_top() = fp_top() + MEMF(esi + 0x12A38); /* fadd dword ptr [esi + 0x12a38] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008DB51; /* jp: parity */

loc_0008DB45: ;
    ecx = MEM32(esp + 0x10);
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x30) = ecx;
    goto loc_0008DB64;

loc_0008DB51: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DB64; /* jne: not equal / not zero */

loc_0008DB5C: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x30) = edx;

loc_0008DB64: ;
    ebp = ZX8(MEM8(esi + 0x12A59));
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x12A20); /* fmul dword ptr [esi + 0x12a20] */
    fp_top() = fp_top() + MEMF(esi + 0x12A3C); /* fadd dword ptr [esi + 0x12a3c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x12A3C)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008DBA4; /* jp: parity */

loc_0008DB9E: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0008DBBD;

loc_0008DBA4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DBBD; /* jne: not equal / not zero */

loc_0008DBB5: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = ecx;

loc_0008DBBD: ;
    fp_push(MEMF(esi + 0x12A40)); /* fld float */
    edx = MEM32(esi + 0x12A40);
    fp_top() = fp_top() + MEMF(0x3CFB4C); /* fadd dword ptr [0x3cfb4c] */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008DBF2; /* jp: parity */

loc_0008DBEA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    goto loc_0008DC07;

loc_0008DBF2: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DC07; /* jne: not equal / not zero */

loc_0008DC01: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_0008DC07: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    fp_top() = fp_top() - MEMF(esi + 0x12A38); /* fsub dword ptr [esi + 0x12a38] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008DC22u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008DC22: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    ebx = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A3C); /* fsub dword ptr [esi + 0x12a3c] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008DC3Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008DC3F: ;
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    MEM32(esp + 0x18) = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    PUSH32(esp, 0x0008DC5Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008DC5A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_0008DCBA; /* jl: less (signed <) */

loc_0008DC62: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008DCBA; /* jl: less (signed <) */

loc_0008DC6A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DCBA; /* jge: greater or equal (signed >=) */

loc_0008DC6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DCBA; /* jge: greater or equal (signed >=) */

loc_0008DC72: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = ZX8(LO8(ebx));
    eax = eax + ecx;
    ecx = esi + eax * 8 + 4;
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DCBA; /* je: equal / zero */

loc_0008DC88: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esp + 0x30) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0008DCB1; /* je: equal / zero */

loc_0008DC93: ;
    edi = ZX8(MEM8(ecx));
    eax = ZX8(LO8(eax));
    eax = eax - edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = ZX8(MEM8(esp + 0x10));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008DCB1; /* jl: less (signed <) */

loc_0008DCAB: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    goto loc_0008DCB3;

loc_0008DCB1: ;
    SET_LO8(ecx, MEM8(ecx));

loc_0008DCB3: ;
    eax = ZX8(LO8(ecx));
    MEM32(esp + 0x10) = eax;

loc_0008DCBA: ;
    edx = ZX8(MEM8(esp + 0x18));
    eax = ZX8(MEM8(esp + 0x10));
    ecx = ZX8(LO8(ebx));
    MEM32(esp + 0x30) = ecx;
    POP32(esp, edi);
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEM32(esp + 0x2C) = edx;
    fp_top() = fp_top() * MEMF(esi + 0x12A20); /* fmul dword ptr [esi + 0x12a20] */
    fp_top() = fp_top() + MEMF(esi + 0x12A38); /* fadd dword ptr [esi + 0x12a38] */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x28);
    fp_top() = fp_top() * MEMF(esi + 0x12A20); /* fmul dword ptr [esi + 0x12a20] */
    fp_top() = fp_top() + MEMF(esi + 0x12A3C); /* fadd dword ptr [esi + 0x12a3c] */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CFB38); /* fmul dword ptr [0x3cfb38] */
    fp_top() = fp_top() + MEMF(esi + 0x12A40); /* fadd dword ptr [esi + 0x12a40] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    POP32(esp, esi);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008DD20
 * Original: 0x0008DD20 - 0x0008DE20 (256 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008DD20: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008DD41u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_0008DD41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DE19; /* je: equal / zero */

loc_0008DD49: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008DD64u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_0008DD64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DE19; /* je: equal / zero */

loc_0008DD6C: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_0008DE18; /* jge: greater or equal (signed >=) */

loc_0008DD86: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);

loc_0008DD90: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DE09; /* jge: greater or equal (signed >=) */

loc_0008DD94: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008DE00; /* jl: less (signed <) */

loc_0008DD98: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008DE00; /* jl: less (signed <) */

loc_0008DD9C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008DE00; /* jl: less (signed <) */

loc_0008DDA0: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DE00; /* jge: greater or equal (signed >=) */

loc_0008DDAB: ;
    ebp = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DE00; /* jge: greater or equal (signed >=) */

loc_0008DDB6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DDFC; /* jge: greater or equal (signed >=) */

loc_0008DDBE: ;
    ebx = ZX8(LO8(ecx));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    eax = ZX8(LO8(edx));
    ebx = ebx + eax;
    eax = esi + ebx * 8 + 4;
    SET_LO8(ebx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008DDE0; /* jne: not equal / not zero */

loc_0008DDD4: ;
    ebx = MEM32(esp + 0x20);
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 4) = 0x40;
    goto loc_0008DE00;

loc_0008DDE0: ;
    ebx = ZX8(MEM8(eax));
    ebp = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DDFC; /* je: equal / zero */

loc_0008DDEB: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008DDFC; /* jne: not equal / not zero */

loc_0008DDF1: ;
    MEM8(eax + 5) = MEM8(eax + 5) | 0x40;
    ebx = ebp;
    MEM8(eax + 1) = LO8(ebx);
    goto loc_0008DE00;

loc_0008DDFC: ;
    ebx = MEM32(esp + 0x20);

loc_0008DE00: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008DD94; /* jl: less (signed <) */

loc_0008DE05: ;
    ecx = MEM32(esp + 0x10);

loc_0008DE09: ;
    eax = MEM32(esp + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008DD90; /* jl: less (signed <) */

loc_0008DE16: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0008DE18: ;
    POP32(esp, ebx);

loc_0008DE19: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008DE20
 * Original: 0x0008DE20 - 0x0008DFE0 (448 bytes, 149 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DE20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008DE20: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(edi);
    fp_top() = fp_top() - MEMF(edi + 0xC); /* fsub dword ptr [edi + 0xc] */
    esi = ecx;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x3C) = ecx;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = eax;
    fp_push(MEMF(edi + 4)); /* fld float */
    ecx = esp + 0x14;
    fp_top() = fp_top() - MEMF(edi + 0xC); /* fsub dword ptr [edi + 0xc] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = edx;
    edx = esp + 0x20;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = eax;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    MEM32(esp + 0x38) = eax;
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x2C;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    ecx = esi;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008DE83u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_0008DE83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DFD8; /* je: equal / zero */

loc_0008DE8B: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0008DEA6u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_0008DEA6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008DFD8; /* je: equal / zero */

loc_0008DEAE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = eax;
    MEM32(esp + 0xC) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0008DFD8; /* jge: greater or equal (signed >=) */

loc_0008DECD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_0008DED0: ;
    ebx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DFC5; /* jge: greater or equal (signed >=) */

loc_0008DEDE: ;
    ebp = ZX8(LO8(edx));
    MEM32(esp + 0x20) = ebp;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    /* nop */

loc_0008DEF0: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = ZX8(LO8(ebx));
    fp_top() = fp_top() * MEMF(esi + 0x12A20); /* fmul dword ptr [esi + 0x12a20] */
    MEM32(esp + 0x20) = ecx;
    fp_top() = fp_top() + MEMF(esi + 0x12A38); /* fadd dword ptr [esi + 0x12a38] */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x12A20); /* fmul dword ptr [esi + 0x12a20] */
    fp_top() = fp_top() + MEMF(esi + 0x12A3C); /* fadd dword ptr [esi + 0x12a3c] */
    fp_top() = fp_top() - MEMF(esp + 0x44); /* fsub dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008DFB6; /* jp: parity */

loc_0008DF3B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008DFB6; /* jl: less (signed <) */

loc_0008DF3F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008DFB6; /* jl: less (signed <) */

loc_0008DF43: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008DFB6; /* jl: less (signed <) */

loc_0008DF4B: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DFB2; /* jge: greater or equal (signed >=) */

loc_0008DF56: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DFB2; /* jge: greater or equal (signed >=) */

loc_0008DF61: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008DFB2; /* jge: greater or equal (signed >=) */

loc_0008DF6B: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + ebp;
    SET_LO8(eax, MEM8(esi + ecx * 8 + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = esi + ecx * 8 + 4;
    if (TEST_Z(_fa, _fb)) goto loc_0008DFB2; /* je: equal / zero */

loc_0008DF7C: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008DFA6; /* je: equal / zero */

loc_0008DF83: ;
    edi = ZX8(MEM8(ecx));
    eax = ZX8(LO8(eax));
    eax = eax - edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = ZX8(MEM8(esp + 0x10));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    edi = MEM32(esp + 0x50);
    if (CMP_L(_fas, _fbs)) goto loc_0008DFA6; /* jl: less (signed <) */

loc_0008DF9F: ;
    eax = 1;
    goto loc_0008DFA8;

loc_0008DFA6: ;
    eax = 0; /* xor self */

loc_0008DFA8: ;
    eax = ZX8(LO8(eax));
    eax = eax + ecx + 4;
    MEM8(eax) = MEM8(eax) | 0x80;

loc_0008DFB2: ;
    edx = MEM32(esp + 0x14);

loc_0008DFB6: ;
    eax = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008DEF0; /* jl: less (signed <) */

loc_0008DFC3: ;
    fp_pop(); /* fstp st(0) */

loc_0008DFC5: ;
    eax = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0008DED0; /* jl: less (signed <) */

loc_0008DFD6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0008DFD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008DFE0
 * Original: 0x0008DFE0 - 0x0008E0E2 (258 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008DFE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008DFE0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008E001u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_0008E001: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008E0DB; /* je: equal / zero */

loc_0008E009: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0008E024u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_0008E024: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008E0DB; /* je: equal / zero */

loc_0008E02C: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0008E0D9; /* jge: greater or equal (signed >=) */

loc_0008E045: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    /* nop */

loc_0008E050: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008E0CB; /* jge: greater or equal (signed >=) */

loc_0008E058: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008E0C6; /* jl: less (signed <) */

loc_0008E05C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008E0C6; /* jl: less (signed <) */

loc_0008E060: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008E0C6; /* jl: less (signed <) */

loc_0008E064: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008E0C6; /* jge: greater or equal (signed >=) */

loc_0008E06F: ;
    ecx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008E0C6; /* jge: greater or equal (signed >=) */

loc_0008E07A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008E0C6; /* jge: greater or equal (signed >=) */

loc_0008E082: ;
    ecx = ZX8(LO8(edx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = ZX8(LO8(ebx));
    ecx = ecx + eax;
    eax = esi + ecx * 8 + 4;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008E0AB; /* je: equal / zero */

loc_0008E099: ;
    SET_LO8(ecx, LO8(ecx) & 0xBF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 4) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0008E0AB; /* jne: not equal / not zero */

loc_0008E0A4: ;
    MEM8(eax) = 0xFF;
    MEM8(eax + 4) = 0;

loc_0008E0AB: ;
    SET_LO8(ecx, MEM8(eax + 5));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008E0C6; /* je: equal / zero */

loc_0008E0B3: ;
    SET_LO8(ecx, LO8(ecx) & 0xBF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 5) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0008E0C6; /* jne: not equal / not zero */

loc_0008E0BE: ;
    MEM8(eax + 1) = 0xFF;
    MEM8(eax + 5) = 0;

loc_0008E0C6: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008E058; /* jl: less (signed <) */

loc_0008E0CB: ;
    eax = MEM32(esp + 0x20);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008E050; /* jl: less (signed <) */

loc_0008E0D8: ;
    POP32(esp, ebp);

loc_0008E0D9: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0008E0DB: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008E0F0
 * Original: 0x0008E0F0 - 0x0008E120 (48 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E0F0(void)
{

loc_0008E0F0: ;
    edx = ZX8(MEM8(ecx + 0x63C));
    eax = ZX8(MEM8(ecx + 0x657));
    eax = eax - edx;
    edx = ZX8(MEM8(ecx + 0x63B));
    eax = eax + eax * 2;
    eax = eax << 3;
    eax = eax - edx;
    edx = ZX8(MEM8(ecx + 0x656));
    eax = eax + ecx;
    eax = edx + eax + 0x3FA;
    esp += 4; return; /* ret */

}

/**
 * sub_0008E120
 * Original: 0x0008E120 - 0x0008E170 (80 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008E120: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0008E125u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008E125: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CAA50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3caa50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008E163; /* jp: parity */

loc_0008E15E: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_0008E163: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008E170
 * Original: 0x0008E170 - 0x0008E17D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E170(void)
{

loc_0008E170: ;
    eax = ecx;
    MEM32(eax + 0x184) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008E180
 * Original: 0x0008E180 - 0x0008E18D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E180(void)
{

loc_0008E180: ;
    eax = ecx;
    MEM32(eax + 0x7F0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008E190
 * Original: 0x0008E190 - 0x0008E19D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E190(void)
{

loc_0008E190: ;
    eax = ecx;
    MEM32(eax + 0x204) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008E1A0
 * Original: 0x0008E1A0 - 0x0008E1AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E1A0(void)
{

loc_0008E1A0: ;
    eax = ecx;
    MEM32(eax + 0x40) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008E1B0
 * Original: 0x0008E1B0 - 0x0008E1BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E1B0(void)
{

loc_0008E1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008E1B8u); RECOMP_ABI_CALL(0x0008E170u, sub_0008E170); /* call 0x0008E170 */

loc_0008E1B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E1C0
 * Original: 0x0008E1C0 - 0x0008E1CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E1C0(void)
{

loc_0008E1C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008E1C8u); RECOMP_ABI_CALL(0x0008E180u, sub_0008E180); /* call 0x0008E180 */

loc_0008E1C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E1D0
 * Original: 0x0008E1D0 - 0x0008E22F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E1D0: ;
    edx = ecx;
    eax = MEM32(edx + 0xCD0C);
    eax = MEM32(edx + eax * 4 + 0xCC84);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xCD14;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xCD0C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(edx + 0xCD0C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0008E219; /* jl: less (signed <) */

loc_0008E20F: ;
    MEM32(edx + 0xCD0C) = 0;

loc_0008E219: ;
    MEM32(edx + 0xCD10) = MEM32(edx + 0xCD10) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xCD10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xCD18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xCD18) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E230
 * Original: 0x0008E230 - 0x0008E23C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E230(void)
{

loc_0008E230: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008E238u); RECOMP_ABI_CALL(0x0008E190u, sub_0008E190); /* call 0x0008E190 */

loc_0008E238: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E240
 * Original: 0x0008E240 - 0x0008E24C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E240(void)
{

loc_0008E240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008E248u); RECOMP_ABI_CALL(0x0008E1A0u, sub_0008E1A0); /* call 0x0008E1A0 */

loc_0008E248: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E250
 * Original: 0x0008E250 - 0x0008E277 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E250: ;
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 2;
    esi = 0x80;
    ebx = 0; /* xor self */
    edi = edi;

loc_0008E260: ;
    MEM8(edx + -2) = LO8(ebx);
    MEM8(edx + -1) = LO8(ebx);
    MEM8(edx) = LO8(ebx);
    edx = edx + 3;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008E260; /* jne: not equal / not zero */

loc_0008E26E: ;
    POP32(esp, esi);
    MEM32(eax + 0x184) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E280
 * Original: 0x0008E280 - 0x0008E44C (460 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E280: ;
    esp = esp - 0x18;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0x7F0);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0008E320; /* jle: less or equal (signed <=) */

loc_0008E2A3: ;
    eax = ebx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edi = eax;
    esi = ebx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    /* nop */

loc_0008E2B0: ;
    eax = edi + edi * 2;
    fp_push(MEMF(ecx + eax * 4 + 8)); /* fld float */
    edx = ecx + eax * 4;
    eax = esi + esi * 2;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + eax * 4 + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + eax*4 + 8] */
    esi = ecx + eax * 4;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008E311; /* jp: parity */

loc_0008E2CB: ;
    ebx = edx;
    eax = MEM32(ebx);
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebp;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(edx) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edx + 4) = ebp;
    ebx = MEM32(ebx + 8);
    MEM32(edx + 8) = ebx;
    edx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = edi;
    edi = eax;
    goto loc_0008E2B0;

loc_0008E311: ;
    eax = MEM32(ecx + 0x7F0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0008E2A3; /* jl: less (signed <) */

loc_0008E320: ;
    eax = MEM32(ecx + 0x7F0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0008E43C; /* jle: less or equal (signed <=) */

loc_0008E333: ;
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_0008E340: ;
    edi = MEM32(esp + 0x14);
    ebp = MEM32(edi);
    esi = ecx;
    eax = MEM32(esi);
    edx = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    ebx = ecx;
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    ebp = MEM32(esp + 0x10);
    MEM32(ebx + 8) = edi;
    edi = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008E397; /* jle: less or equal (signed <=) */

loc_0008E377: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008E389; /* jle: less or equal (signed <=) */

loc_0008E37C: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008E390; /* jp: parity */

loc_0008E389: ;
    edx = 1;
    goto loc_0008E3A0;

loc_0008E390: ;
    edx = 2;
    goto loc_0008E3A0;

loc_0008E397: ;
    edx = 0; /* xor self */
    /* nop */

loc_0008E3A0: ;
    eax = edi + edi * 2;
    fp_push(MEMF(ecx + eax * 4 + 8)); /* fld float */
    esi = ecx + eax * 4;
    eax = edx + edx * 2;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + eax * 4 + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + eax*4 + 8] */
    edi = ecx + eax * 4;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008E424; /* jp: parity */

loc_0008E3BB: ;
    ebx = edi;
    eax = MEM32(ebx);
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebp;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(edi) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(edi + 4) = ebp;
    ebx = MEM32(ebx + 8);
    ebp = MEM32(esp + 0x10);
    MEM32(edi + 8) = ebx;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 8) = eax;
    esi = edx + edx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    edi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0008E3A0; /* jge: greater or equal (signed >=) */

loc_0008E3FD: ;
    ebx = edx + edx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008E419; /* jge: greater or equal (signed >=) */

loc_0008E405: ;
    edx = edx + edx * 2;
    fp_push(MEMF(ecx + edx * 8 + 0x20)); /* fld float */
    eax = ecx + edx * 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0008E41D; /* jp: parity */

loc_0008E419: ;
    edx = esi;
    goto loc_0008E3A0;

loc_0008E41D: ;
    edx = ebx;
    goto loc_0008E3A0;

loc_0008E424: ;
    edx = MEM32(esp + 0x14);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx - 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0008E340; /* jg: greater (signed >) */

loc_0008E43C: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    g_seh_ebp = ebp; sub_00340F54(); return; /* tail jmp 0x00340F54 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008E450
 * Original: 0x0008E450 - 0x0008E4CA (122 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0008E450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008E450: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0008E4C5; /* je: equal / zero */

loc_0008E45C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edi = edi;

loc_0008E460: ;
    eax = ebp + edi * 2;
    ebx = ZX8(MEM8(edi + eax + 1));
    ecx = ZX8(MEM8(edi + eax + 2));
    esi = edi + eax;
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = ebp + eax * 2;
    edx = edx + eax;
    ecx = ecx + ebx;
    ebx = ZX8(MEM8(edx + 2));
    edx = ZX8(MEM8(edx + 1));
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008E4C3; /* jle: less or equal (signed <=) */

loc_0008E48F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E4BD; /* je: equal / zero */

loc_0008E493: ;
    edx = ebp + eax * 2;
    edx = edx + eax;
    ecx = edx;
    SET_LO16(edi, MEM16(ecx));
    SET_LO8(ecx, MEM8(ecx + 2));
    MEM8(esp + 0x16) = LO8(ecx);
    ecx = esi;
    SET_LO16(ebx, MEM16(ecx));
    MEM16(edx) = LO16(ebx);
    SET_LO8(ecx, MEM8(ecx + 2));
    MEM8(edx + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(esp + 0x16));
    MEM16(esi) = LO16(edi);
    MEM8(esi + 2) = LO8(edx);

loc_0008E4BD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008E460; /* jne: not equal / not zero */

loc_0008E4C3: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0008E4C5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E4D0
 * Original: 0x0008E4D0 - 0x0008E5B3 (227 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E4D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E4D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x184);
    eax = esi + esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008E5AE; /* jge: greater or equal (signed >=) */

loc_0008E4EA: ;
    edx = esi + esi + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    if (CMP_GE(_fas, _fbs)) goto loc_0008E516; /* jge: greater or equal (signed >=) */

loc_0008E4F4: ;
    ecx = esi + esi * 2;
    ebp = ZX8(MEM8(edi + ecx * 2 + 4));
    ebx = ZX8(MEM8(edi + ecx * 2 + 5));
    ecx = edi + ecx * 2;
    ebx = ebx + ebp;
    ebp = ZX8(MEM8(ecx + 8));
    ecx = ZX8(MEM8(ecx + 7));
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0008E516; /* jg: greater (signed >) */

loc_0008E514: ;
    eax = edx;

loc_0008E516: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008E5AC; /* je: equal / zero */

loc_0008E51E: ;
    edi = edi;

loc_0008E520: ;
    edx = edi + eax * 2;
    ebx = ZX8(MEM8(edx + eax + 1));
    edx = edx + eax;
    ecx = edi + esi * 2;
    ebp = ZX8(MEM8(esi + ecx + 1));
    esi = esi + ecx;
    ecx = ZX8(MEM8(edx + 2));
    ecx = ecx + ebx;
    ebx = ZX8(MEM8(esi + 2));
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0008E5AC; /* jle: less or equal (signed <=) */

loc_0008E544: ;
    ecx = edx;
    SET_LO16(ebp, MEM16(ecx));
    SET_LO8(ecx, MEM8(ecx + 2));
    MEM8(esp + 0x16) = LO8(ecx);
    ecx = esi;
    SET_LO16(ebx, MEM16(ecx));
    MEM16(edx) = LO16(ebx);
    SET_LO8(ecx, MEM8(ecx + 2));
    MEM8(edx + 2) = LO8(ecx);
    SET_LO8(edx, MEM8(esp + 0x16));
    MEM16(esi) = LO16(ebp);
    MEM8(esi + 2) = LO8(edx);
    edx = MEM32(edi + 0x184);
    ecx = eax + eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    esi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0008E5AC; /* jge: greater or equal (signed >=) */

loc_0008E578: ;
    ebx = eax + eax + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008E5A2; /* jge: greater or equal (signed >=) */

loc_0008E580: ;
    eax = eax + eax * 2;
    ebp = ZX8(MEM8(edi + eax * 2 + 4));
    edx = ZX8(MEM8(edi + eax * 2 + 5));
    eax = edi + eax * 2;
    edx = edx + ebp;
    ebp = ZX8(MEM8(eax + 8));
    eax = ZX8(MEM8(eax + 7));
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    eax = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0008E5A4; /* jle: less or equal (signed <=) */

loc_0008E5A2: ;
    eax = ecx;

loc_0008E5A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008E520; /* jne: not equal / not zero */

loc_0008E5AC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0008E5AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008E5C0
 * Original: 0x0008E5C0 - 0x0008E5CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E5C0(void)
{

loc_0008E5C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0008E5C8u); RECOMP_ABI_CALL(0x0008E250u, sub_0008E250); /* call 0x0008E250 */

loc_0008E5C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008E5D0
 * Original: 0x0008E5D0 - 0x0008E685 (181 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E5D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E5D0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp + 0x12008;
    MEM32(ebp) = 0x3CFB54;
    PUSH32(esp, 0x0008E5EBu); RECOMP_ABI_CALL(0x0008E1B0u, sub_0008E1B0); /* call 0x0008E1B0 */

loc_0008E5EB: ;
    esi = ebp + 0x12190;
    ecx = esi;
    PUSH32(esp, 0x0008E5F8u); RECOMP_ABI_CALL(0x0008E1C0u, sub_0008E1C0); /* call 0x0008E1C0 */

loc_0008E5F8: ;
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = ebp + 0x12A68;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebp + 0x12980) = eax;
    edx = 0xFFFFFFFAu;

loc_0008E612: ;
    edi = edx;
    eax = 0xFFFFFFFAu;
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    /* nop */

loc_0008E620: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + edi;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x7F0);
    ecx = ecx + ecx * 2;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = esi + ecx * 4;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x1C);
    MEM32(ecx + 8) = ebx;
    ecx = MEM32(esi + 0x7F0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(esi + 0x7F0) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0008E620; /* jl: less (signed <) */

loc_0008E660: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008E612; /* jl: less (signed <) */

loc_0008E666: ;
    ecx = esi;
    PUSH32(esp, 0x0008E66Du); RECOMP_ABI_CALL(0x0008E280u, sub_0008E280); /* call 0x0008E280 */

loc_0008E66D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    MEM8(ebp + 0x12A58) = LO8(eax);
    MEM8(ebp + 0x12A59) = LO8(eax);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008E690
 * Original: 0x0008E690 - 0x0008E697 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E690(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008E690: ;
    fp_push(MEMF(ecx + 0x12A20)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008E6A0
 * Original: 0x0008E6A0 - 0x0008E6A7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E6A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0008E6A0: ;
    fp_push(MEMF(ecx + 0x12A24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008E6B0
 * Original: 0x0008E6B0 - 0x0008EF0C (2140 bytes, 548 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008E6B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008E6B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F93F);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1E8));
    esp = esp - 0x1E8;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x1EC) = eax;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = esi + 0x12984;
    ecx = 0x20;
    /* nop */

loc_0008E6F0: ;
    MEM32(eax) = edx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008E6F0; /* jne: not equal / not zero */

loc_0008E6F8: ;
    eax = MEM32(esp + 0x200);
    ecx = MEM32(esp + 0x204);
    MEM32(esi + 0x1218C) = edi;
    MEM32(esi + 0x12A30) = eax;
    MEM32(esi + 0x12A34) = ecx;
    MEM32(esi + 0x12A20) = edi;
    MEM32(esi + 0x12A24) = edi;
    MEM32(esi + 0x12A28) = edi;
    MEM32(esi + 0x12A2C) = edi;
    MEM32(esi + 0x12A38) = edi;
    MEM32(esi + 0x12A3C) = edi;
    MEM32(esi + 0x12A40) = edi;
    MEM32(esi + 0x12A44) = edi;
    MEM32(esi + 0x12A48) = edi;
    MEM16(esi + 0x12A50) = LO16(edi);
    MEM32(esi + 0x12A54) = edi;
    MEM8(esi + 0x12A58) = 0;
    MEM8(esi + 0x12A59) = 0;
    eax = esi + 9;
    ecx = 0x2400;

loc_0008E771: ;
    MEM8(eax + -1) = 0;
    MEM8(eax) = 0;
    MEM8(eax + 1) = 0;
    MEM16(eax + -3) = LO16(edi);
    MEM8(eax + -5) = 0xFF;
    MEM8(eax + -4) = 0xFF;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0008E771; /* jne: not equal / not zero */

loc_0008E78E: ;
    eax = MEM32(esi + 0x1218C);
    edx = eax + eax * 2;
    eax = esi + edx * 2 + 0x12008;
    SET_LO16(edx, MEM16(esp + 0x24));
    MEM8(esp + 0x20) = 0xFF;
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    MEM16(eax + 4) = LO16(edx);
    MEM32(esi + 0x1218C) = MEM32(esi + 0x1218C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x1218C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0008E7BDu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008E7BD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0008E7C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008E7C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0008EEE7; /* jne: not equal / not zero */

loc_0008E7CF: ;
    MEM8(esp + 0xEC) = LO8(eax);
    PUSH32(esp, 0x0008E7DBu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008E7DB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CE9E8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008E7E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008E7E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E7EDu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0008E7ED: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0008E831; /* jne: not equal / not zero */

loc_0008E7F4: ;
    PUSH32(esp, 0x100);
    eax = esp + 0xF0;
    PUSH32(esp, 0x3CE9E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E80Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0008E80B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(esp + 0x1EB) = 0;
    PUSH32(esp, 0x0008E81Bu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008E81B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008E822u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008E822: ;
    PUSH32(esp, eax);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x0008E82Fu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0008E82F: ;
    goto loc_0008E85B;

loc_0008E831: ;
    PUSH32(esp, 0x0008E836u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0008E836: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0008E83Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008E83D: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0xF4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E850u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0008E850: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(esp + 0x1EB) = 0;

loc_0008E85B: ;
    ecx = esp + 0xEC;
    PUSH32(esp, 0x3CFBD4);
    PUSH32(esp, 0x0008E86Cu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0008E86C: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xAC;
    PUSH32(esp, 0x0008E879u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_0008E879: ;
    PUSH32(esp, 2);
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    MEM32(esp + 0x204) = edi;
    PUSH32(esp, 0x0008E893u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008E893: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0xB8;
    MEM8(esp + 0x208) = 1;
    PUSH32(esp, 0x0008E8B0u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_0008E8B0: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = esp + 0x30;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x1FC) = 0;
    PUSH32(esp, 0x0008E8C9u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008E8C9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008E8E9; /* je: equal / zero */

loc_0008E8CD: ;
    ecx = esp + 0xAC;
    MEM32(esp + 0x1FC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0008E8E4u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0008E8E4: ;
    goto loc_0008EEE6;

loc_0008E8E9: ;
    eax = MEM32(esp + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E8CD; /* je: equal / zero */

loc_0008E8F4: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    ebp = ecx;
    MEM32(esp + 0x20) = ebp;
    if ((ecx == 0)) goto loc_0008EECE; /* je: equal / zero */

loc_0008E90F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFBC8);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0008E91Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008E91F: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM8(esp + 0x204) = 2;
    PUSH32(esp, 0x0008E933u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008E933: ;
    ecx = esp + 0x34;
    ebx = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008E946u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008E946: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008E959; /* je: equal / zero */

loc_0008E94A: ;
    ecx = ebx;
    PUSH32(esp, 0x0008E951u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0008E951: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008E957u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_0008E957: ;
    goto loc_0008E96E;

loc_0008E959: ;
    PUSH32(esp, 0x0008E95Eu); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0008E95E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008E965u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008E965: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8CC8); /* fmul dword ptr [0x3c8cc8] */
    PUSH32(esp, ecx);

loc_0008E96E: ;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0008E978u); RECOMP_ABI_CALL(0x0008D490u, sub_0008D490); /* call 0x0008D490 */

loc_0008E978: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFBC4);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0008E988u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008E988: ;
    PUSH32(esp, edi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM8(esp + 0x208) = 3;
    PUSH32(esp, 0x0008E99Du); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0008E99D: ;
    ecx = esp + 0x34;
    ebp = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008E9B0u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008E9B0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008EB10; /* je: equal / zero */

loc_0008E9B8: ;
    goto loc_0008E9C0;

    /* nop */

loc_0008E9C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFBC0);
    ecx = esp + 0x58;
    PUSH32(esp, 0x0008E9D0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008E9D0: ;
    ebx = MEM32(ebp + 8);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x204) = 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & ebp;
    PUSH32(esp, 0x0008E9F0u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008E9F0: ;
    ecx = esp + 0x50;
    edi = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EA03u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EA03: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008EACC; /* je: equal / zero */

loc_0008EA0B: ;
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFBB4);
    ecx = edi;
    PUSH32(esp, 0x0008EA26u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0008EA26: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EA2Cu); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_0008EA2C: ;
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    ebx = MEM32(esp + 0x44);
    eax = MEM32(esi + 0x12A44);
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    edx = MEM32(esi + 0x12A48);
    edi = MEM32(esp + 0x38);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    MEM32(esp + 0x30) = ebx;
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    MEM32(esp + 0x24) = edi;
    PUSH32(esp, 0x0008EA6Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008EA6A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0008EACC; /* jl: less (signed <) */

loc_0008EA6E: ;
    ecx = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0008EACC; /* jl: less (signed <) */

loc_0008EA74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0008EACC; /* jl: less (signed <) */

loc_0008EA78: ;
    edi = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008EACC; /* jge: greater or equal (signed >=) */

loc_0008EA83: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008EACC; /* jge: greater or equal (signed >=) */

loc_0008EA8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008EACC; /* jge: greater or equal (signed >=) */

loc_0008EA95: ;
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    edx = ZX8(LO8(ebx));
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    SET_LO8(edx, MEM8(esi + ecx * 8 + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + ecx * 8 + 4;
    MEM8(ecx + 4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0008EACA; /* je: equal / zero */

loc_0008EAB1: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 0xFF (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0008EACC; /* jne: not equal / not zero */

loc_0008EAB7: ;
    edi = ZX8(LO8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ecx + 5) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_0008EAC7; /* jle: less or equal (signed <=) */

loc_0008EAC2: ;
    MEM8(ecx + 1) = LO8(eax);
    goto loc_0008EACC;

loc_0008EAC7: ;
    MEM8(ecx + 1) = LO8(edx);

loc_0008EACA: ;
    MEM8(ecx) = LO8(eax);

loc_0008EACC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFBC4);
    ecx = esp + 0x68;
    PUSH32(esp, 0x0008EADCu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008EADC: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    MEM8(esp + 0x208) = 5;
    PUSH32(esp, 0x0008EAF3u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0008EAF3: ;
    ecx = esp + 0x60;
    ebp = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EB06u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EB06: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0008E9C0; /* jne: not equal / not zero */

loc_0008EB0E: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_0008EB10: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFBAC);
    ecx = esp + 0x68;
    PUSH32(esp, 0x0008EB20u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008EB20: ;
    PUSH32(esp, edi);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEM8(esp + 0x208) = 6;
    PUSH32(esp, 0x0008EB37u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0008EB37: ;
    ecx = esp + 0x60;
    edi = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EB4Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EB4A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008EECE; /* je: equal / zero */

loc_0008EB52: ;
    _fa = (uint32_t)(MEM32(esi + 0x1218C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1218C), 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0008EECE; /* je: equal / zero */

loc_0008EB5F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFBA8);
    ecx = esp + 0x58;
    PUSH32(esp, 0x0008EB6Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008EB6F: ;
    ebx = MEM32(edi + 8);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esp + 0x50;
    PUSH32(esp, edx);
    MEM8(esp + 0x204) = 7;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    PUSH32(esp, 0x0008EB8Fu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008EB8F: ;
    ecx = esp + 0x50;
    ebx = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EBA2u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EBA2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFBA4);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0008EBB2u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008EBB2: ;
    eax = esp + 0x34;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    PUSH32(esp, eax);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x204) = 8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    PUSH32(esp, 0x0008EBD0u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008EBD0: ;
    ecx = esp + 0x34;
    ebp = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EBE3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EBE3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0008EC2A; /* jne: not equal / not zero */

loc_0008EBE7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFB9C);
    ecx = esp + 0x78;
    PUSH32(esp, 0x0008EBF7u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008EBF7: ;
    ebp = MEM32(edi + 8);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x204) = 9;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    PUSH32(esp, 0x0008EC17u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008EC17: ;
    ecx = esp + 0x70;
    ebp = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EC2Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EC2A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008EE83; /* je: equal / zero */

loc_0008EC32: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008EE83; /* je: equal / zero */

loc_0008EC3A: ;
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFBB4);
    ecx = ebx;
    PUSH32(esp, 0x0008EC55u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0008EC55: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EC5Bu); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_0008EC5B: ;
    fp_push((double)SMEM32(esp + 0x60)); /* fild */
    edx = MEM32(esi + 0x12A44);
    eax = MEM32(esp + 0x28);
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    ebx = MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    MEM32(esp + 0x28) = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    eax = MEM32(esi + 0x12A48);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x0008EC99u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008EC99: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    ebx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CFBB4);
    ecx = ebp;
    PUSH32(esp, 0x0008ECB6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0008ECB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008ECBCu); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_0008ECBC: ;
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    ebp = MEM32(esp + 0x30);
    ecx = MEM32(esi + 0x12A44);
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    eax = MEM32(esp + 0x2C);
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ecx));
    ebp = ebp - ecx;
    ecx = MEM32(esi + 0x12A48);
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    MEM32(esp + 0x1C) = ebp;
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0008ECFAu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008ECFA: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x28) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_0008EE83; /* jl: less (signed <) */

loc_0008ED0A: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0008EE83; /* jl: less (signed <) */

loc_0008ED16: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0008EE83; /* jl: less (signed <) */

loc_0008ED1E: ;
    edx = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008EE83; /* jge: greater or equal (signed >=) */

loc_0008ED2D: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008EE83; /* jge: greater or equal (signed >=) */

loc_0008ED3E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0008EE83; /* jge: greater or equal (signed >=) */

loc_0008ED4A: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0008ED58u); RECOMP_ABI_CALL(0x0008D090u, sub_0008D090); /* call 0x0008D090 */

loc_0008ED58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008EE83; /* je: equal / zero */

loc_0008ED60: ;
    ecx = ZX8(MEM8(esi + 0x12A58));
    edx = ZX8(MEM8(esp + 0x10));
    eax = MEM32(esi + 0x1218C);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    MEM8(esi + edx * 8 + 0xA) = LO8(eax);
    ebp = MEM32(esi + 0x1218C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebp;
    MEM32(esi + 0x1218C) = ebp;
    edx = eax + eax * 2;
    ebp = esi + edx * 2 + 0x12002;
    SET_LO8(edx, MEM8(esp + 0x28));
    MEM8(ebp) = LO8(ebx);
    SET_LO8(eax, MEM8(esp + 0x1C));
    MEM8(ebp + 1) = LO8(eax);
    SET_LO8(ecx, MEM8(esp + 0x18));
    PUSH32(esp, 2);
    MEM8(ebp + 2) = LO8(ecx);
    PUSH32(esp, 0x3CFB94);
    ecx = esp + 0x98;
    MEM8(ebp + 3) = LO8(edx);
    PUSH32(esp, 0x0008EDC4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008EDC4: ;
    eax = esp + 0x90;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    PUSH32(esp, eax);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x204) = 0xA;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    PUSH32(esp, 0x0008EDE5u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008EDE5: ;
    ecx = esp + 0x90;
    ebx = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EDFBu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EDFB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008EE14; /* je: equal / zero */

loc_0008EDFF: ;
    ecx = ebx;
    PUSH32(esp, 0x0008EE06u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0008EE06: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EE0Cu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0008EE0C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM8(ebp + 4) = LO8(eax);
    goto loc_0008EE18;

loc_0008EE14: ;
    MEM8(ebp + 4) = 0;

loc_0008EE18: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C9708);
    ecx = esp + 0xA8;
    PUSH32(esp, 0x0008EE2Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008EE2B: ;
    eax = MEM32(edi + 8);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0x204) = 0xB;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    PUSH32(esp, 0x0008EE4Eu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0008EE4E: ;
    ecx = esp + 0xA0;
    ebx = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EE64u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EE64: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0008EE7F; /* je: equal / zero */

loc_0008EE68: ;
    ecx = ebx;
    PUSH32(esp, 0x0008EE6Fu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0008EE6F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008EE75u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_0008EE75: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x1A)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x1A);
    MEM8(ebp + 5) = LO8(eax);
    goto loc_0008EE83;

loc_0008EE7F: ;
    MEM8(ebp + 5) = 0x1A;

loc_0008EE83: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CFBAC);
    ecx = esp + 0x88;
    PUSH32(esp, 0x0008EE96u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0008EE96: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    MEM8(esp + 0x208) = 0xC;
    PUSH32(esp, 0x0008EEB0u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_0008EEB0: ;
    ecx = esp + 0x80;
    edi = eax;
    MEM8(esp + 0x200) = 0;
    PUSH32(esp, 0x0008EEC6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0008EEC6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0008EB52; /* jne: not equal / not zero */

loc_0008EECE: ;
    ecx = esp + 0xB0;
    MEM32(esp + 0x200) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0008EEE5u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_0008EEE5: ;
    POP32(esp, ebp);

loc_0008EEE6: ;
    POP32(esp, ebx);

loc_0008EEE7: ;
    ecx = MEM32(esp + 0x1F0);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x1E8);
    POP32(esp, esi);
    PUSH32(esp, 0x0008EF03u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0008EF03: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1F4)) >> 32) & 1);
    esp = esp + 0x1F4;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008EF10
 * Original: 0x0008EF10 - 0x0008EF5C (76 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EF10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008EF10: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x184);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ecx + 0x184) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0008EF53; /* je: equal / zero */

loc_0008EF22: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = ecx + edx * 2;
    PUSH32(esp, esi);
    eax = eax + edx;
    PUSH32(esp, edi);
    edx = ecx;
    SET_LO16(esi, MEM16(edx));
    SET_LO8(edx, MEM8(edx + 2));
    edi = eax;
    SET_LO16(ebp, MEM16(edi));
    ebx = ecx;
    MEM16(ebx) = LO16(ebp);
    MEM32(esp + 0x10) = ecx;
    SET_LO8(ecx, MEM8(edi + 2));
    MEM8(ebx + 2) = LO8(ecx);
    POP32(esp, edi);
    MEM16(eax) = LO16(esi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx = ebx;
    MEM8(eax + 2) = LO8(edx);
    POP32(esp, ebx);

loc_0008EF53: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0008EF5Au); RECOMP_ABI_CALL(0x0008E4D0u, sub_0008E4D0); /* call 0x0008E4D0 */

loc_0008EF5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EF60
 * Original: 0x0008EF60 - 0x0008EFBD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EF60: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xCD08) = esi;
    MEM32(ecx + 0xCD0C) = esi;
    MEM32(ecx + 0xCD10) = esi;
    edx = 0; /* xor self */
    goto loc_0008EF80;

    /* nop */

loc_0008EF80: ;
    eax = MEM32(ecx + 0xCD08);
    edi = MEM32(ecx + 0xCD10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(ecx + 0xCD08) = eax;
    MEM32(ecx + 0xCD10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0008EFAC; /* jl: less (signed <) */

loc_0008EF9F: ;
    MEM32(ecx + 0xCD08) = esi;
    eax = 0x1F;
    goto loc_0008EFAD;

loc_0008EFAC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0008EFAD: ;
    MEM32(ecx + eax * 4 + 0xCC84) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008EF80; /* jl: less (signed <) */

loc_0008EFBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008EFC0
 * Original: 0x0008EFC0 - 0x0008F032 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008EFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008EFC0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0xCD14;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xCD08);
    edi = MEM32(eax + 0xCD10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(eax + 0xCD08) = ecx;
    MEM32(eax + 0xCD10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0008F018; /* jl: less (signed <) */

loc_0008F007: ;
    MEM32(eax + 0xCD08) = 0;
    ecx = 0x1F;
    goto loc_0008F019;

loc_0008F018: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0008F019: ;
    MEM32(eax + ecx * 4 + 0xCC84) = esi;
    ecx = MEM32(eax + 0xCD18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xCD18) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F040
 * Original: 0x0008F040 - 0x0008F072 (50 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F040(void)
{

loc_0008F040: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CFBE0;
    ecx = esi + 8;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0008F058u); RECOMP_ABI_CALL(0x0008E230u, sub_0008E230); /* call 0x0008E230 */

loc_0008F058: ;
    ecx = esi + 0x210;
    PUSH32(esp, 0x0008F063u); RECOMP_ABI_CALL(0x0008E5C0u, sub_0008E5C0); /* call 0x0008E5C0 */

loc_0008F063: ;
    ecx = esi + 0x3A4;
    PUSH32(esp, 0x0008F06Eu); RECOMP_ABI_CALL(0x0008E240u, sub_0008E240); /* call 0x0008E240 */

loc_0008F06E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F080
 * Original: 0x0008F080 - 0x0008F087 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F080(void)
{

loc_0008F080: ;
    eax = MEM32(ecx + 0x3F4);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F090
 * Original: 0x0008F090 - 0x0008F097 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F090(void)
{

loc_0008F090: ;
    eax = ecx + 0x644;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F0A0
 * Original: 0x0008F0A0 - 0x0008F0B5 (21 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F0A0(void)
{

loc_0008F0A0: ;
    MEM32(ecx + 0x3F4) = 5;
    MEM32(ecx + 0x650) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F0C0
 * Original: 0x0008F0C0 - 0x0008F0CE (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F0C0: ;
    eax = MEM32(ecx + 0x3E4);
    edx = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0008F0CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008F0CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F0D0
 * Original: 0x0008F0D0 - 0x0008F0DE (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F0D0: ;
    eax = MEM32(ecx + 0x3E4);
    edx = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0008F0DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008F0DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F0E0
 * Original: 0x0008F0E0 - 0x0008F121 (65 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F0E0: ;
    _fa = (uint32_t)(MEM32(0x4BFD18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4BFD18), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F0EE; /* jne: not equal / not zero */

loc_0008F0E9: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_0008F0EE: ;
    ecx = 0x4B3000;
    PUSH32(esp, 0x0008F0F8u); RECOMP_ABI_CALL(0x0008E1D0u, sub_0008E1D0); /* call 0x0008E1D0 */

loc_0008F0F8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x664);
    ecx = MEM32(esp + 4);
    eax = eax + 0x4B3000;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x650) = 0;
    MEM32(eax + 0x3F4) = 5;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F130
 * Original: 0x0008F130 - 0x0008F16A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F130: ;
    SET_LO8(ecx, MEM8(0x4B2FFC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008F164; /* jne: not equal / not zero */

loc_0008F13F: ;
    edx = MEM32(0x4B2FFC);
    edx = edx | eax;
    ecx = 0x4A0548;
    MEM32(0x4B2FFC) = edx;
    PUSH32(esp, 0x0008F157u); RECOMP_ABI_CALL(0x0008E5D0u, sub_0008E5D0); /* call 0x0008E5D0 */

loc_0008F157: ;
    PUSH32(esp, 0x359FD0);
    PUSH32(esp, 0x0008F161u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0008F161: ;
    esp = esp + 4;

loc_0008F164: ;
    eax = 0x4A0548;
    esp += 4; return; /* ret */

}

/**
 * sub_0008F170
 * Original: 0x0008F170 - 0x0008F175 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F170(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F170: ;
    g_seh_ebp = ebp; sub_0008F130(); return; /* tail jmp 0x0008F130 */

}

/**
 * sub_0008F180
 * Original: 0x0008F180 - 0x0008F22C (172 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x20C));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM8(edi) = LO8(eax);
    ebx = MEM32(esi + 0x20C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x20C) = ebx;
    SET_LO8(ecx, MEM8(esi + 0x654));
    eax = ebx;
    MEM8(esi + eax * 4 + 7) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x656));
    MEM8(esi + eax * 4 + 4) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x657));
    MEM8(esi + eax * 4 + 5) = LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x658));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + eax * 4 + 5));
    MEM8(esi + eax * 4 + 6) = LO8(ecx);
    eax = ZX8(MEM8(esi + eax * 4 + 4));
    SET_LO8(ebx, MEM8(edi));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008F1E1u); RECOMP_ABI_CALL(0x0008D620u, sub_0008D620); /* call 0x0008D620 */

loc_0008F1E1: ;
    SET_LO8(ecx, MEM8(esi + 0x65A));
    esi = esi + 0x210;
    MEM8(esp + 0x11) = LO8(ecx);
    ecx = MEM32(esi + 0x184);
    edx = esi + ecx * 2;
    edx = edx + ecx;
    MEM8(esp + 0x10) = LO8(ebx);
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(edx) = LO16(ecx);
    MEM8(edx + 2) = LO8(eax);
    edx = MEM32(esi + 0x184);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0008F219u); RECOMP_ABI_CALL(0x0008E450u, sub_0008E450); /* call 0x0008E450 */

loc_0008F219: ;
    eax = MEM32(esi + 0x184);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x184) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F230
 * Original: 0x0008F230 - 0x0008F272 (66 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    PUSH32(esp, 0x0008F23Cu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008F23C: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F24Au); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0008F24A: ;
    ecx = eax;
    PUSH32(esp, 0x0008F251u); RECOMP_ABI_CALL(0x0008D1D0u, sub_0008D1D0); /* call 0x0008D1D0 */

loc_0008F251: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x641)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x641) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F26D; /* jne: not equal / not zero */

loc_0008F25D: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x642)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), MEM8(esi + 0x642) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008F26D; /* jne: not equal / not zero */

loc_0008F265: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0008F26D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0008F280
 * Original: 0x0008F280 - 0x0008F30E (142 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F280: ;
    eax = MEM32(ecx + 0x3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F2A3; /* je: equal / zero */

loc_0008F28B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F2A3; /* je: equal / zero */

loc_0008F290: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F2A3; /* je: equal / zero */

loc_0008F295: ;
    ecx = ecx + 4;
    PUSH32(esp, 0x0008F29Du); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0008F29D: ;
    eax = eax + 0x20;
    esp += 8; return; /* ret 4 */

loc_0008F2A3: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    PUSH32(esp, esi);
    esi = ecx + 0x3E8;
    PUSH32(esp, esi);
    if (CMP_BE(_fa & _fb, 0)) goto loc_0008F2C2; /* jbe: below or equal (unsigned <=) */

loc_0008F2B5: ;
    eax = ZX16(LO16(eax));
    edx = ZX8(MEM8(eax + ecx + 0x3A4));
    goto loc_0008F2CF;

loc_0008F2C2: ;
    SET_LO8(eax, MEM8(ecx + 0x3F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F2F5; /* je: equal / zero */

loc_0008F2CC: ;
    edx = ZX8(LO8(eax));

loc_0008F2CF: ;
    eax = ecx + edx * 4 + 8;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 2));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F2E8u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0008F2E8: ;
    ecx = eax;
    PUSH32(esp, 0x0008F2EFu); RECOMP_ABI_CALL(0x0008D310u, sub_0008D310); /* call 0x0008D310 */

loc_0008F2EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008F2F5: ;
    ecx = ecx + 0x398;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0008F301u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0008F301: ;
    ecx = eax;
    PUSH32(esp, 0x0008F308u); RECOMP_ABI_CALL(0x0008D2B0u, sub_0008D2B0); /* call 0x0008D2B0 */

loc_0008F308: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F310
 * Original: 0x0008F310 - 0x0008F326 (22 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F310: ;
    eax = 0; /* xor self */
    MEM32(0x4BFD18) = eax;
    MEM32(0x4BFD14) = eax;
    ecx = 0x4B3000;
    g_seh_ebp = ebp; sub_0008EF60(); return; /* tail jmp 0x0008EF60 */

}

/**
 * sub_0008F330
 * Original: 0x0008F330 - 0x0008F35B (43 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F330: ;
    ecx = MEM32(esp + 4);
    ecx = ecx - 0x4B3000;
    eax = 0xA03C1689u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 4) = eax;
    ecx = 0x4B3000;
    g_seh_ebp = ebp; sub_0008EFC0(); return; /* tail jmp 0x0008EFC0 */

}

/**
 * sub_0008F360
 * Original: 0x0008F360 - 0x0008F602 (674 bytes, 201 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F360(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F360: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebp + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0008F393; /* je: equal / zero */

loc_0008F375: ;
    ecx = ZX8(MEM8(ebp));
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + ecx;
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F393; /* jl: less (signed <) */

loc_0008F38C: ;
    eax = 1;
    goto loc_0008F395;

loc_0008F393: ;
    eax = 0; /* xor self */

loc_0008F395: ;
    edx = ZX8(LO8(eax));
    MEM8(esi + 0x12A60) = LO8(eax);
    eax = edx + ebp + 4;
    MEM8(eax) = MEM8(eax) & 0xE1;
    SET_LO16(eax, MEM16(esi + 0x12A50));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    MEM16(ebp + 2) = LO16(eax);
    SET_LO8(edx, MEM8(esi + 0x12A60));
    edi = esi + 0x12AA8;
    PUSH32(esp, edi);
    ecx = esi + 0x12A68;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0008F3D1u); RECOMP_ABI_CALL(0x0008D750u, sub_0008D750); /* call 0x0008D750 */

loc_0008F3D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F408; /* je: equal / zero */

loc_0008F3D5: ;
    SET_LO8(ebx, MEM8(edi));
    eax = ZX8(MEM8(esi + 0x12A60));
    SET_LO8(edx, MEM8(eax + ebp + 4));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + ebp + 4;
    POP32(esp, edi);
    ecx = ecx * 8 + 8;
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    MEM8(eax) = LO8(edx);
    edx = ZX8(MEM8(esi + 0x12A60));
    SET_LO8(eax, MEM8(edx + ebp + 4));
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0008F408: ;
    MEM8(esi + 0x12A65) = 0;
    PUSH32(esp, 0x0008F414u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0008F414: ;
    edx = MEM32(esp + 0x14);
    ebp = eax;
    eax = edx;
    eax = eax - ebp;
    ecx = ZX8(LO8(ebx));
    eax = eax - 4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    MEM32(ebp + 0x12A5C) = eax;
    MEM32(esp + 0x18) = ecx;
    SET_LO8(ecx, MEM8(ecx + edx));
    MEM8(ebp + 0x12A64) = LO8(ecx);
    ecx = ZX8(MEM8(ebp + 0x12A58));
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM8(ebp + 0x12A63) = LO8(eax);
    MEM8(ebp + 0x12A62) = LO8(edx);
    MEM32(esi + 0x12AAC) = 0xFFFFFFFFu;
    goto loc_0008F460;

    /* nop */

loc_0008F460: ;
    MEM32(esi + 0x12AB0) = 0xFFFFFFFFu;
    /* nop */

loc_0008F470: ;
    edi = MEM32(esi + 0x12AAC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008F488; /* jne: not equal / not zero */

loc_0008F47A: ;
    eax = MEM32(esi + 0x12AB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F581; /* je: equal / zero */

loc_0008F488: ;
    SET_LO8(edx, MEM8(ebp + 0x12A63));
    ecx = MEM32(esi + 0x12AB0);
    SET_LO8(ebx, MEM8(ebp + 0x12A62));
    eax = ZX8(LO8(edx));
    eax = eax + ecx;
    ecx = ZX8(LO8(ebx));
    ecx = ecx + edi;
    if (((int32_t)ecx < 0)) goto loc_0008F581; /* js: sign (negative) */

loc_0008F4AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008F581; /* jl: less (signed <) */

loc_0008F4B2: ;
    edi = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008F581; /* jge: greater or equal (signed >=) */

loc_0008F4C1: ;
    ecx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008F581; /* jge: greater or equal (signed >=) */

loc_0008F4D0: ;
    SET_LO8(eax, MEM8(esi + 0x12AB0));
    SET_LO8(eax, LO8(eax) + LO8(edx));
    SET_LO8(edx, MEM8(esi + 0x12AAC));
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    eax = ZX8(LO8(edx));
    ecx = ecx + eax;
    SET_LO8(eax, MEM8(esi + ecx * 8 + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esi + ecx * 8 + 4;
    if (TEST_Z(_fa, _fb)) goto loc_0008F581; /* je: equal / zero */

loc_0008F4FB: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F520; /* je: equal / zero */

loc_0008F502: ;
    SET_LO8(ebx, MEM8(ecx));
    eax = ZX8(LO8(eax));
    edi = ZX8(LO8(ebx));
    eax = eax - edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F520; /* jl: less (signed <) */

loc_0008F51B: ;
    SET_LO8(eax, MEM8(ecx + 1));
    goto loc_0008F524;

loc_0008F520: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(eax, LO8(ebx));

loc_0008F524: ;
    edx = ZX8(MEM8(esi + 0x12A60));
    edi = MEM32(esp + 0x14);
    edx = ZX8(MEM8(edx + edi));
    eax = ZX8(LO8(eax));
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008F581; /* jge: greater or equal (signed >=) */

loc_0008F542: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F567; /* je: equal / zero */

loc_0008F549: ;
    eax = ZX8(LO8(eax));
    edi = ZX8(LO8(ebx));
    eax = eax - edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F567; /* jl: less (signed <) */

loc_0008F560: ;
    eax = 1;
    goto loc_0008F569;

loc_0008F567: ;
    eax = 0; /* xor self */

loc_0008F569: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(eax + ecx + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x38) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x38 (8-bit) */
    MEM8(esi + 0x12A61) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0008F581; /* jne: not equal / not zero */

loc_0008F57B: ;
    MEM8(esi + 0x12A65) = MEM8(esi + 0x12A65) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x12A65)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0008F581: ;
    eax = MEM32(esi + 0x12AB0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esi + 0x12AB0) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0008F470; /* jl: less (signed <) */

loc_0008F597: ;
    eax = MEM32(esi + 0x12AAC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esi + 0x12AAC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0008F460; /* jl: less (signed <) */

loc_0008F5AD: ;
    _fa = (uint32_t)(MEM8(esi + 0x12A65)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x12A65), 5 (8-bit) */
    ecx = MEM32(esp + 0x14);
    if (CMP_AE(_fa, _fb)) goto loc_0008F5C8; /* jae: above or equal (unsigned >=) */

loc_0008F5BA: ;
    edx = ZX8(MEM8(esi + 0x12A60));
    eax = edx + ecx + 4;
    MEM8(eax) = MEM8(eax) | 4;

loc_0008F5C8: ;
    _fa = (uint32_t)(MEM8(esi + 0x12A65)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x12A65), 8 (8-bit) */
    eax = ZX8(MEM8(esi + 0x12A60));
    if (CMP_NE(_fa, _fb)) goto loc_0008F5F7; /* jne: not equal / not zero */

loc_0008F5D8: ;
    SET_LO8(edx, MEM8(eax + ecx + 4));
    eax = eax + ecx + 4;
    SET_LO8(edx, LO8(edx) | 2);
    POP32(esp, edi);
    MEM8(eax) = LO8(edx);
    edx = ZX8(MEM8(esi + 0x12A60));
    SET_LO8(eax, MEM8(edx + ecx + 4));
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0008F5F7: ;
    SET_LO8(eax, MEM8(eax + ecx + 4));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008F610
 * Original: 0x0008F610 - 0x0008F683 (115 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F610: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F67D; /* je: equal / zero */

loc_0008F61C: ;
    SET_LO16(eax, MEM16(ecx + 0x12A50));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 2) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0008F66B; /* jae: above or equal (unsigned >=) */

loc_0008F629: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F65B; /* je: equal / zero */

loc_0008F630: ;
    ecx = ZX8(MEM8(esi));
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + ecx;
    ecx = ZX8(MEM8(esp + 0xC));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F65B; /* jl: less (signed <) */

loc_0008F648: ;
    eax = 1;
    edx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(edx + esi + 4));
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0008F65B: ;
    eax = 0; /* xor self */
    edx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(edx + esi + 4));
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0008F66B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F676u); RECOMP_ABI_CALL(0x0008F360u, sub_0008F360); /* call 0x0008F360 */

loc_0008F676: ;
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0008F67D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008F690
 * Original: 0x0008F690 - 0x0008F6B7 (39 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0008F690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F690: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F6B2; /* je: equal / zero */

loc_0008F69B: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F6A6u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008F6A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008F6B2; /* jne: not equal / not zero */

loc_0008F6AA: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_0008F6B2: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008F6C0
 * Original: 0x0008F6C0 - 0x0008F6E7 (39 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F6C0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F6DF; /* je: equal / zero */

loc_0008F6CB: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F6D6u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008F6D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008F6DF; /* jne: not equal / not zero */

loc_0008F6DA: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

loc_0008F6DF: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0008F6F0
 * Original: 0x0008F6F0 - 0x0008F903 (531 bytes, 165 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F6F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F6F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F960);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x0008F714u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0008F714: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0008F71Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008F71E: ;
    MEMF(esi + 0x12A4C) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x44E690)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, 0x0008F731u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008F731: ;
    MEM16(esi + 0x12A50) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008F751; /* jne: not equal / not zero */

loc_0008F740: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x12A54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x12a54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008F8EF; /* jne: not equal / not zero */

loc_0008F751: ;
    fp_top() = fp_top() + MEMF(0x3C83B0); /* fadd dword ptr [0x3c83b0] */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    MEMF(esi + 0x12A54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x485874);
    ecx = esp + 0x44;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0008F779u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_0008F779: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0x3C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008F78Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008F78A: ;
    ecx = MEM32(esp + 0x3C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x3C898C;
    PUSH32(esp, 0x0008F7A1u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0008F7A1: ;
    ebp = eax;
    esp = esp + 8;
    MEM32(esp + 0x28) = ebp;
    MEM8(esp + 0x34) = 1;
    edi = esi + 0x12984;

loc_0008F7B5: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F7C5; /* je: equal / zero */

loc_0008F7BB: ;
    MEM8(eax + 4) = MEM8(eax + 4) & 0xDF;
    eax = MEM32(edi);
    MEM8(eax + 5) = MEM8(eax + 5) & 0xDF;

loc_0008F7C5: ;
    MEM32(edi) = 0;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0008F7D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008F7D2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008F8AE; /* jge: greater or equal (signed >=) */

loc_0008F7DA: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0008F7E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008F7E3: ;
    fp_push(MEMF(eax + 0x108)); /* fld float */
    fp_push(MEMF(eax + 0x104)); /* fld float */
    fp_push(MEMF(eax + 0x100)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CD304)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cd304] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F8AE; /* je: equal / zero */

loc_0008F81C: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0008F825u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008F825: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008F83Fu); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_0008F83F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F8AE; /* je: equal / zero */

loc_0008F843: ;
    edx = ZX8(MEM8(esi + 0x12A58));
    eax = ZX8(MEM8(esp + 0x20));
    ecx = ZX8(MEM8(esp + 0x24));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + ecx;
    ecx = MEM32(esp + 0x10);
    esi = esi + edx * 8 + 4;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0008F86Cu); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008F86C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F8AA; /* je: equal / zero */

loc_0008F870: ;
    MEM32(edi) = esi;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008F898; /* je: equal / zero */

loc_0008F879: ;
    ecx = ZX8(MEM8(esi));
    eax = ZX8(LO8(eax));
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + ecx;
    ecx = ZX8(MEM8(esp + 0x14));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F898; /* jl: less (signed <) */

loc_0008F891: ;
    eax = 1;
    goto loc_0008F89A;

loc_0008F898: ;
    eax = 0; /* xor self */

loc_0008F89A: ;
    edx = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(edx + esi + 4));
    eax = edx + esi + 4;
    SET_LO8(ecx, LO8(ecx) | 0x20);
    MEM8(eax) = LO8(ecx);

loc_0008F8AA: ;
    esi = MEM32(esp + 0x10);

loc_0008F8AE: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008F7B5; /* jl: less (signed <) */

loc_0008F8BB: ;
    PUSH32(esp, ebp);
    MEM8(esp + 0x38) = 0;
    PUSH32(esp, 0x0008F8C6u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0008F8C6: ;
    esp = esp + 4;
    ecx = esp + 0x3C;
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0008F8DAu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0008F8DA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x1C);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_0008F8EF: ;
    ecx = MEM32(esp + 0x20);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008F910
 * Original: 0x0008F910 - 0x0008F977 (103 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008F910: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x12A62;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008F925u); RECOMP_ABI_CALL(0x0008D1D0u, sub_0008D1D0); /* call 0x0008D1D0 */

loc_0008F925: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008F970; /* je: equal / zero */

loc_0008F929: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    edx = ZX8(MEM8(esi + 0x12A63));
    SET_LO8(ecx, MEM8(esi + 0x12A64));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM8(esp + 0xC) = LO8(ecx);
    ecx = ZX8(MEM8(edi));
    edx = edx + ecx;
    SET_LO8(ecx, MEM8(esi + edx * 8 + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = esi + edx * 8 + 4;
    if (TEST_Z(_fa, _fb)) goto loc_0008F970; /* je: equal / zero */

loc_0008F955: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008F962u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008F962: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008F970; /* jne: not equal / not zero */

loc_0008F966: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0008F970: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0008F980
 * Original: 0x0008F980 - 0x0008FAC7 (327 bytes, 117 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008F980(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008F980: ;
    eax = ZX8(MEM8(esp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ZX8(MEM8(esp + 0xC));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ZX8(MEM8(esp + 0x14));
    PUSH32(esp, edi);
    if (TEST_S(_fas, _fbs)) goto loc_0008FABE; /* jl: less (signed <) */

loc_0008F99D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008FABE; /* jl: less (signed <) */

loc_0008F9A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008FABE; /* jl: less (signed <) */

loc_0008F9AD: ;
    edx = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FABE; /* jge: greater or equal (signed >=) */

loc_0008F9BC: ;
    ebx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FABE; /* jge: greater or equal (signed >=) */

loc_0008F9CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FABE; /* jge: greater or equal (signed >=) */

loc_0008F9D6: ;
    ecx = ZX8(MEM8(esp + 0x20));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = ZX8(MEM8(esp + 0x28));
    eax = ZX8(MEM8(esp + 0x24));
    if (TEST_S(_fas, _fbs)) goto loc_0008FA75; /* jl: less (signed <) */

loc_0008F9ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008FA75; /* jl: less (signed <) */

loc_0008F9F5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008FA75; /* jl: less (signed <) */

loc_0008F9F9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FA75; /* jge: greater or equal (signed >=) */

loc_0008F9FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FA75; /* jge: greater or equal (signed >=) */

loc_0008FA01: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FA75; /* jge: greater or equal (signed >=) */

loc_0008FA09: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax + ecx;
    eax = esi + eax * 8 + 4;
    SET_LO8(eax, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008FA75; /* je: equal / zero */

loc_0008FA19: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    edi = esi + eax * 2 + 0x12008;
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0008FA34u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0008FA34: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    SET_LO8(ecx, MEM8(edi + 1));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008FA75; /* jne: not equal / not zero */

loc_0008FA42: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(MEM8(edi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 2), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008FA75; /* jne: not equal / not zero */

loc_0008FA4B: ;
    SET_LO8(edx, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esp + 0x1C) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008FA75; /* jne: not equal / not zero */

loc_0008FA54: ;
    SET_LO8(ebx, MEM8(edi + 5));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x1A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FA6B; /* je: equal / zero */

loc_0008FA5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008FA75; /* je: equal / zero */

loc_0008FA60: ;
    ecx = eax;
    PUSH32(esp, 0x0008FA67u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0008FA67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0008FA75; /* jne: not equal / not zero */

loc_0008FA6B: ;
    SET_LO8(eax, MEM8(edi + 4));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_0008FA75: ;
    eax = MEM32(esp + 0x1C);
    ecx = ZX8(MEM8(esi + 0x12A58));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esp + 0x1C));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + ebp;
    edx = esi + ecx * 8 + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0008FA97u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008FA97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008FAA4; /* je: equal / zero */

loc_0008FA9B: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_0008FAA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FAB5; /* jne: not equal / not zero */

loc_0008FAA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008FABE; /* je: equal / zero */

loc_0008FAAC: ;
    SET_LO8(eax, 3);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_0008FAB5: ;
    SET_LO8(eax, 2);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_0008FABE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0008FAD0
 * Original: 0x0008FAD0 - 0x0008FBB4 (228 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FAD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    eax = esp;
    MEM32(eax) = ecx;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    PUSH32(esp, 0x0008FAFDu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FAFD: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    ebx = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A3C); /* fsub dword ptr [esi + 0x12a3c] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008FB19u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FB19: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    ebp = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A38); /* fsub dword ptr [esi + 0x12a38] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008FB34u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FB34: ;
    edi = MEM32(esp + 0x18);
    fp_push(MEMF(edi + 8)); /* fld float */
    MEM32(esp + 0x20) = eax;
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    PUSH32(esp, 0x0008FB56u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FB56: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    MEM32(esp + 0x1C) = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A3C); /* fsub dword ptr [esi + 0x12a3c] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008FB74u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FB74: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    MEM32(esp + 0x18) = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A38); /* fsub dword ptr [esi + 0x12a38] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008FB91u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FB91: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008FBAAu); RECOMP_ABI_CALL(0x0008F980u, sub_0008F980); /* call 0x0008F980 */

loc_0008FBAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ZX8(LO8(eax));
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FBC0
 * Original: 0x0008FBC0 - 0x0008FC3E (126 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FBC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FBC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CFB38); /* fadd dword ptr [0x3cfb38] */
    esi = ecx;
    fp_top() = fp_top() - MEMF(esi + 0x12A40); /* fsub dword ptr [esi + 0x12a40] */
    fp_top() = fp_top() * MEMF(0x3CFB40); /* fmul dword ptr [0x3cfb40] */
    PUSH32(esp, 0x0008FBEDu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FBED: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x12A2C); /* fadd dword ptr [esi + 0x12a2c] */
    ebx = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A3C); /* fsub dword ptr [esi + 0x12a3c] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008FC09u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FC09: ;
    fp_push(MEMF(esi + 0x12A2C)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    ebp = eax;
    fp_top() = fp_top() - MEMF(esi + 0x12A38); /* fsub dword ptr [esi + 0x12a38] */
    fp_top() = fp_top() * MEMF(esi + 0x12A28); /* fmul dword ptr [esi + 0x12a28] */
    PUSH32(esp, 0x0008FC24u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0008FC24: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008FC34u); RECOMP_ABI_CALL(0x0008F980u, sub_0008F980); /* call 0x0008F980 */

loc_0008FC34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ZX8(LO8(eax));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FC40
 * Original: 0x0008FC40 - 0x0008FFA1 (865 bytes, 320 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FC40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008FC40: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0008FC62u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_0008FC62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008FF49; /* je: equal / zero */

loc_0008FC6A: ;
    ecx = ZX8(MEM8(edi));
    edx = ZX8(MEM8(esi + 0x12A58));
    eax = ZX8(MEM8(ebx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx + eax;
    SET_LO8(eax, MEM8(esp + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ebx, MEM8(esi + ecx * 8 + 5));
    edi = esi + ecx * 8 + 4;
    if (TEST_Z(_fa, _fb)) goto loc_0008FCF4; /* je: equal / zero */

loc_0008FC8C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FCAE; /* je: equal / zero */

loc_0008FC91: ;
    ecx = ZX8(MEM8(edi));
    eax = ZX8(LO8(ebx));
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + ecx;
    ecx = ZX8(MEM8(ebp));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008FCAE; /* jl: less (signed <) */

loc_0008FCA8: ;
    MEM8(esp + 0x10) = LO8(ebx);
    goto loc_0008FCB4;

loc_0008FCAE: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(esp + 0x10) = LO8(edx);

loc_0008FCB4: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008FD54; /* je: equal / zero */

loc_0008FCBF: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008FCCCu); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008FCCC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FD54; /* jne: not equal / not zero */

loc_0008FCD4: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008FCE2u); RECOMP_ABI_CALL(0x0008D280u, sub_0008D280); /* call 0x0008D280 */

loc_0008FCE2: ;
    edx = ZX8(LO8(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 28; return; /* ret 24 */

loc_0008FCF4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FD16; /* je: equal / zero */

loc_0008FCF9: ;
    ecx = ZX8(MEM8(edi));
    eax = ZX8(LO8(ebx));
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + ecx;
    ecx = ZX8(MEM8(ebp));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0008FD16; /* jl: less (signed <) */

loc_0008FD10: ;
    MEM8(esp + 0x10) = LO8(ebx);
    goto loc_0008FD1C;

loc_0008FD16: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(esp + 0x10) = LO8(edx);

loc_0008FD1C: ;
    SET_LO8(eax, MEM8(edi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008FD54; /* je: equal / zero */

loc_0008FD23: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008FD30u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008FD30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FD54; /* jne: not equal / not zero */

loc_0008FD34: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0008FD42u); RECOMP_ABI_CALL(0x0008D280u, sub_0008D280); /* call 0x0008D280 */

loc_0008FD42: ;
    edx = ZX8(LO8(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 28; return; /* ret 24 */

loc_0008FD54: ;
    eax = MEM32(esp + 0x2C);
    ebx = MEM32(eax);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp));
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx));
    ecx = MEM32(esp + 0x34);
    SET_LO8(edx, MEM8(ecx));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0008FD84u); RECOMP_ABI_CALL(0x0008D310u, sub_0008D310); /* call 0x0008D310 */

loc_0008FD84: ;
    fp_push(MEMF(esi + 0x12A20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    ecx = MEM32(esp + 0x28);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FDA6; /* jne: not equal / not zero */

loc_0008FDA3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0008FDB6;

loc_0008FDA6: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FDB6; /* jne: not equal / not zero */

loc_0008FDB5: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0008FDB6: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FDCF; /* jne: not equal / not zero */

loc_0008FDC6: ;
    eax = MEM32(esp + 0x10);
    fp_pop(); /* fstp st(0) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0008FDE6;

loc_0008FDCF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FDEA; /* jne: not equal / not zero */

loc_0008FDE1: ;
    eax = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0008FDE6: ;
    MEM32(esp + 0x10) = eax;

loc_0008FDEA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008FE3D; /* jl: less (signed <) */

loc_0008FDEE: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008FE3D; /* jl: less (signed <) */

loc_0008FDF6: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FE3D; /* jge: greater or equal (signed >=) */

loc_0008FE01: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FE3D; /* jge: greater or equal (signed >=) */

loc_0008FE0C: ;
    ecx = ZX8(LO8(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    SET_LO8(eax, MEM8(esp + 0x3C));
    edx = ZX8(LO8(ebx));
    ecx = ecx + edx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = esi + ecx * 8 + 4;
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0008FED5; /* je: equal / zero */

loc_0008FE29: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008FE35u); RECOMP_ABI_CALL(0x0008F690u, sub_0008F690); /* call 0x0008F690 */

loc_0008FE35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FEE9; /* jne: not equal / not zero */

loc_0008FE3D: ;
    MEM32(esp + 0x28) = 0;
    edi = esi + 0x12190;
    goto loc_0008FE50;

    /* nop */

loc_0008FE50: ;
    ebp = MEM32(esp + 0x30);
    ebx = MEM32(edi + 4);
    eax = MEM32(ebp);
    edx = MEM32(edi);
    eax = eax + ebx;
    ebx = MEM32(esp + 0x2C);
    ecx = MEM32(ebx);
    ecx = ecx + edx;
    if (((int32_t)ecx < 0)) goto loc_0008FF32; /* js: sign (negative) */

loc_0008FE6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0008FF32; /* jl: less (signed <) */

loc_0008FE74: ;
    edx = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FF32; /* jge: greater or equal (signed >=) */

loc_0008FE83: ;
    ecx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FF32; /* jge: greater or equal (signed >=) */

loc_0008FE92: ;
    SET_LO8(eax, MEM8(ebp));
    SET_LO8(eax, LO8(eax) + MEM8(edi + 4));
    ecx = ZX8(LO8(eax));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    SET_LO8(edx, MEM8(ebx));
    SET_LO8(edx, LO8(edx) + MEM8(edi));
    eax = ZX8(LO8(edx));
    ecx = ecx + eax;
    SET_LO8(eax, MEM8(esp + 0x3C));
    ebp = esi + ecx * 8 + 4;
    ecx = MEM32(esp + 0x34);
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, MEM8(ebp + 4));
    if (TEST_Z(_fa, _fb)) goto loc_0008FF19; /* je: equal / zero */

loc_0008FEBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_0008FF32; /* je: equal / zero */

loc_0008FEC4: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0008FED1u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008FED1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    goto loc_0008FF30;

loc_0008FED5: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008FEE1u); RECOMP_ABI_CALL(0x0008F6C0u, sub_0008F6C0); /* call 0x0008F6C0 */

loc_0008FEE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008FE3D; /* jne: not equal / not zero */

loc_0008FEE9: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x30);
    MEM32(eax) = ebx;
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp));
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008FF07u); RECOMP_ABI_CALL(0x0008D280u, sub_0008D280); /* call 0x0008D280 */

loc_0008FF07: ;
    ecx = ZX8(LO8(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 28; return; /* ret 24 */

loc_0008FF19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x14) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_0008FF32; /* je: equal / zero */

loc_0008FF21: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0008FF2Eu); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_0008FF2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */

loc_0008FF30: ;
    if (TEST_Z(_fa, _fb)) goto loc_0008FF55; /* je: equal / zero */

loc_0008FF32: ;
    eax = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA9 (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0008FE50; /* jl: less (signed <) */

loc_0008FF49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 28; return; /* ret 24 */

loc_0008FF55: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(edi);
    MEM32(eax) = MEM32(eax) + ecx;
    eax = MEM32(esp + 0x30);
    edx = MEM32(edi + 4);
    MEM32(eax) = MEM32(eax) + edx;
    SET_LO8(ecx, MEM8(ebp + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0008FF89; /* je: equal / zero */

loc_0008FF6E: ;
    esi = ZX8(MEM8(ebp));
    eax = ZX8(LO8(ecx));
    eax = eax - esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(esp + 0x34);
    edx = ZX8(MEM8(edx));
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0008FF8C; /* jge: greater or equal (signed >=) */

loc_0008FF89: ;
    SET_LO8(ecx, MEM8(ebp));

loc_0008FF8C: ;
    POP32(esp, edi);
    eax = ZX8(LO8(ecx));
    ecx = MEM32(esp + 0x30);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0008FFB0
 * Original: 0x0008FFB0 - 0x00090003 (83 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0008FFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008FFB0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0008FFD8u); RECOMP_ABI_CALL(0x0008FC40u, sub_0008FC40); /* call 0x0008FC40 */

loc_0008FFD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008FFFD; /* je: equal / zero */

loc_0008FFDC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0008FFF7u); RECOMP_ABI_CALL(0x0008D310u, sub_0008D310); /* call 0x0008D310 */

loc_0008FFF7: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0008FFFD: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00090000
 * Original: 0x00090000 - 0x00090003 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090000(void)
{

loc_00090000: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00090004
 * Original: 0x00090004 - 0x00090006 (2 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090004(void)
{

loc_00090004: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00090006
 * Original: 0x00090006 - 0x00090010 (10 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090006(void)
{

loc_00090006: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00090007
 * Original: 0x00090007 - 0x00090010 (9 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090007(void)
{

loc_00090007: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00090008
 * Original: 0x00090008 - 0x00090010 (8 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090008(void)
{

loc_00090008: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00090009
 * Original: 0x00090009 - 0x00090010 (7 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090009(void)
{

loc_00090009: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0009000B
 * Original: 0x0009000B - 0x00090010 (5 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009000B(void)
{

loc_0009000B: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0009000E
 * Original: 0x0009000E - 0x00090010 (2 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009000E(void)
{

loc_0009000E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0009000F
 * Original: 0x0009000F - 0x00090010 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009000F(void)
{

loc_0009000F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00090010
 * Original: 0x00090010 - 0x00090059 (73 bytes, 26 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090010: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00090033u); RECOMP_ABI_CALL(0x0008FC40u, sub_0008FC40); /* call 0x0008FC40 */

loc_00090033: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090054; /* je: equal / zero */

loc_00090037: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

loc_00090054: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00090014
 * Original: 0x00090014 - 0x00090059 (69 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090014(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090014: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00090033u); RECOMP_ABI_CALL(0x0008FC40u, sub_0008FC40); /* call 0x0008FC40 */

loc_00090033: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090054; /* je: equal / zero */

loc_00090037: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

loc_00090054: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0009001F
 * Original: 0x0009001F - 0x00090059 (58 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009001F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0009001F: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00090033u); RECOMP_ABI_CALL(0x0008FC40u, sub_0008FC40); /* call 0x0008FC40 */

loc_00090033: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090054; /* je: equal / zero */

loc_00090037: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

loc_00090054: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00090033
 * Original: 0x00090033 - 0x00090059 (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090033(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090033: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090054; /* je: equal / zero */

loc_00090037: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

loc_00090054: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00090037
 * Original: 0x00090037 - 0x00090059 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090037(void)
{

loc_00090037: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0009003B
 * Original: 0x0009003B - 0x00090059 (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009003B(void)
{

loc_0009003B: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0009003F
 * Original: 0x0009003F - 0x00090059 (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009003F(void)
{

loc_0009003F: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0009004F
 * Original: 0x0009004F - 0x00090059 (10 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009004F(void)
{

loc_0009004F: ;
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00090060
 * Original: 0x00090060 - 0x00090178 (280 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090060: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090081u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_00090081: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090092; /* jne: not equal / not zero */

loc_00090085: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_00090092: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x12A20); /* fdiv dword ptr [esi + 0x12a20] */
    PUSH32(esp, 0x000900A1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000900A1: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009006B
 * Original: 0x0009006B - 0x00090178 (269 bytes, 95 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009006B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009006B: ;
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090081u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_00090081: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090092; /* jne: not equal / not zero */

loc_00090085: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_00090092: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x12A20); /* fdiv dword ptr [esi + 0x12a20] */
    PUSH32(esp, 0x000900A1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000900A1: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009006F
 * Original: 0x0009006F - 0x00090178 (265 bytes, 94 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009006F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009006F: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090081u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_00090081: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090092; /* jne: not equal / not zero */

loc_00090085: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_00090092: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x12A20); /* fdiv dword ptr [esi + 0x12a20] */
    PUSH32(esp, 0x000900A1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000900A1: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090073
 * Original: 0x00090073 - 0x00090178 (261 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090073(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090073: ;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090081u); RECOMP_ABI_CALL(0x0008D120u, sub_0008D120); /* call 0x0008D120 */

loc_00090081: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090092; /* jne: not equal / not zero */

loc_00090085: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_00090092: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x12A20); /* fdiv dword ptr [esi + 0x12a20] */
    PUSH32(esp, 0x000900A1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000900A1: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009008B
 * Original: 0x0009008B - 0x00090178 (237 bytes, 84 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009008B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009008B: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009008F
 * Original: 0x0009008F - 0x00090178 (233 bytes, 82 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009008F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009008F: ;
    esp += 12; return; /* ret 8 */

    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900A7
 * Original: 0x000900A7 - 0x00090178 (209 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900A7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900A7: ;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900AB
 * Original: 0x000900AB - 0x00090178 (205 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900AB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900AB: ;
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900AF
 * Original: 0x000900AF - 0x00090178 (201 bytes, 74 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900AF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900AF: ;
    ecx = edx;
    ecx = ecx - eax;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900B3
 * Original: 0x000900B3 - 0x00090178 (197 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900B3: ;
    edx = eax + edx + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900B7
 * Original: 0x000900B7 - 0x00090178 (193 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900B7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900B7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0009016B; /* jge: greater or equal (signed >=) */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900C7
 * Original: 0x000900C7 - 0x00090178 (177 bytes, 67 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900C7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900C7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900CB
 * Original: 0x000900CB - 0x00090178 (173 bytes, 66 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900CB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ebx = edx;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000900D3
 * Original: 0x000900D3 - 0x00090178 (165 bytes, 62 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000900D3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000900D3: ;
    ebx = ebx - eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    edi = eax + edx + 1;
    goto loc_000900E4;

loc_000900E0: ;
    ebx = MEM32(esp + 0x18);

loc_000900E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090144; /* jge: greater or equal (signed >=) */

loc_000900E8: ;
    eax = MEM32(esp + 0x24);
    edx = edi;
    edx = edx - ebx;
    eax = eax + edx;
    MEM32(esp + 0x24) = eax;

loc_000900F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0009013F; /* jl: less (signed <) */

loc_000900FE: ;
    eax = ZX8(MEM8(esi + 0x12A58));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000900F6; /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000900E0; /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090107
 * Original: 0x00090107 - 0x00090178 (113 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090107(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090107: ;
    if (_flags /* jge: greater or equal (signed >=) */) goto loc_0009013F;

loc_00090109: ;
    edx = ZX8(MEM8(esi + 0x12A59));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009013F; /* jge: greater or equal (signed >=) */

loc_00090114: ;
    edx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900F6(); return; } /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900E0(); return; } /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090117
 * Original: 0x00090117 - 0x00090178 (97 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090117(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090117: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = ZX8(LO8(ecx));
    edx = edx + eax;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900F6(); return; } /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900E0(); return; } /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009011F
 * Original: 0x0009011F - 0x00090178 (89 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009011F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009011F: ;
    eax = esi + edx * 8 + 4;
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009013F; /* je: equal / zero */

loc_0009012A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900F6(); return; } /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900E0(); return; } /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009012B
 * Original: 0x0009012B - 0x00090178 (77 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009012B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009012B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00090133u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900F6(); return; } /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900E0(); return; } /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090133
 * Original: 0x00090133 - 0x00090178 (69 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090133(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090133: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    ecx = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_0009013F; /* jne: not equal / not zero */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900F6(); return; } /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900E0(); return; } /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009013B
 * Original: 0x0009013B - 0x00090178 (61 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009013B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009013B: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900F6(); return; } /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900E0(); return; } /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009013F
 * Original: 0x0009013F - 0x00090178 (57 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009013F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009013F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900F6(); return; } /* jl: less (signed <) */

loc_00090144: ;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000900E0(); return; } /* jl: less (signed <) */

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009014B
 * Original: 0x0009014B - 0x00090178 (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009014B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009014B: ;
    MEM32(esp + 0x28) = ecx;
    if (_flags /* jl: less (signed <) */) { g_seh_ebp = ebp; sub_000900E0(); return; }

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009014F
 * Original: 0x0009014F - 0x00090178 (41 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009014F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0009014F: ;
    if (_flags /* jl: less (signed <) */) { g_seh_ebp = ebp; sub_000900E0(); return; }

loc_00090151: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0009016B; /* jle: less or equal (signed <=) */

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090157
 * Original: 0x00090157 - 0x00090178 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090157(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090157: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (_flags /* jle: less or equal (signed <=) */) goto loc_0009016B;

loc_0009015C: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, esi);
    fp_top() = fp_top() / (double)SMEM32(esp + 0x14); /* fidiv dword ptr [esp + 0x14] */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0009016B
 * Original: 0x0009016B - 0x00090178 (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0009016B(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0009016B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090180
 * Original: 0x00090180 - 0x00090341 (449 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090180: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    edx = 0; /* xor self */
    eax = esi + 0x3A4;
    MEM32(esi + 0x3E4) = edx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x40);
    edi = edi + eax;
    SET_LO8(ecx, 0); /* xor self */
    MEM8(edi) = LO8(ecx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi + 0x3F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0xA) = LO8(eax);
    MEM8(esp + 0xB) = LO8(ecx);
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0009030B; /* je: equal / zero */

loc_000901BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_000901C3;

loc_000901BF: ;
    SET_LO8(eax, MEM8(esp + 0x12));

loc_000901C3: ;
    _fa = (uint32_t)(MEM32(esi + 0x3E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3E4), 0x3C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_000901D0: ;
    SET_LO8(edx, MEM8(esi + 0x398));
    edi = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + edi * 4 + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    MEM8(esp + 0x14) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000901F5; /* jne: not equal / not zero */

loc_000901E5: ;
    SET_LO8(ecx, MEM8(esi + edi * 4 + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x399)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x399) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000902FC; /* je: equal / zero */

loc_000901F5: ;
    SET_LO8(ecx, MEM8(esi + 0x3F9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090207; /* je: equal / zero */

loc_000901FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_00090207: ;
    SET_LO8(ebx, MEM8(esi + edi * 4 + 9));
    PUSH32(esp, 0x00090210u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090210: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebp = eax + edx * 8 + 4;
    PUSH32(esp, 0x0009022Du); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009022D: ;
    ecx = ZX8(MEM8(ebp + 6));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x1B) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0009029C; /* jne: not equal / not zero */

loc_00090247: ;
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009029C; /* je: equal / zero */

loc_0009024F: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    SET_LO8(ebx, MEM8(esi + eax * 4 + 9));
    eax = esi + eax * 4 + 8;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0x00090267u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090267: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebx = eax + edx * 8 + 4;
    PUSH32(esp, 0x00090284u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090284: ;
    ecx = ZX8(MEM8(ebx + 6));
    SET_LO8(ebx, MEM8(esp + 0x1B));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000902A2;

loc_0009029C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902A2: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000902BBu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000902BB: ;
    ecx = eax;
    PUSH32(esp, 0x000902C2u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000902C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902DD; /* jne: not equal / not zero */

loc_000902C6: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = esi + 0x3A4;
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000902DD: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000901BF; /* jne: not equal / not zero */

loc_000902FA: ;
    goto loc_00090302;

loc_000902FC: ;
    MEM8(esi + 0x3F9) = LO8(eax);

loc_00090302: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0009033B; /* jg: greater (signed >) */

loc_0009030B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009033B; /* jne: not equal / not zero */

loc_00090314: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090339; /* jp: parity */

loc_0009032D: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00090339: ;
    fp_pop(); /* fstp st(0) */

loc_0009033B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000901A7
 * Original: 0x000901A7 - 0x00090341 (410 bytes, 118 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901A7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000901A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0xA) = LO8(eax);
    MEM8(esp + 0xB) = LO8(ecx);
    MEM32(esp + 0x14) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0009030B; /* je: equal / zero */

loc_000901BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_000901C3;

loc_000901BF: ;
    SET_LO8(eax, MEM8(esp + 0x12));

loc_000901C3: ;
    _fa = (uint32_t)(MEM32(esi + 0x3E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3E4), 0x3C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_000901D0: ;
    SET_LO8(edx, MEM8(esi + 0x398));
    edi = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + edi * 4 + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    MEM8(esp + 0x14) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000901F5; /* jne: not equal / not zero */

loc_000901E5: ;
    SET_LO8(ecx, MEM8(esi + edi * 4 + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x399)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x399) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000902FC; /* je: equal / zero */

loc_000901F5: ;
    SET_LO8(ecx, MEM8(esi + 0x3F9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090207; /* je: equal / zero */

loc_000901FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_00090207: ;
    SET_LO8(ebx, MEM8(esi + edi * 4 + 9));
    PUSH32(esp, 0x00090210u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090210: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebp = eax + edx * 8 + 4;
    PUSH32(esp, 0x0009022Du); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009022D: ;
    ecx = ZX8(MEM8(ebp + 6));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x1B) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0009029C; /* jne: not equal / not zero */

loc_00090247: ;
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009029C; /* je: equal / zero */

loc_0009024F: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    SET_LO8(ebx, MEM8(esi + eax * 4 + 9));
    eax = esi + eax * 4 + 8;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0x00090267u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090267: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebx = eax + edx * 8 + 4;
    PUSH32(esp, 0x00090284u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090284: ;
    ecx = ZX8(MEM8(ebx + 6));
    SET_LO8(ebx, MEM8(esp + 0x1B));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000902A2;

loc_0009029C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902A2: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000902BBu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000902BB: ;
    ecx = eax;
    PUSH32(esp, 0x000902C2u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000902C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902DD; /* jne: not equal / not zero */

loc_000902C6: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = esi + 0x3A4;
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000902DD: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000901BF; /* jne: not equal / not zero */

loc_000902FA: ;
    goto loc_00090302;

loc_000902FC: ;
    MEM8(esi + 0x3F9) = LO8(eax);

loc_00090302: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0009033B; /* jg: greater (signed >) */

loc_0009030B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009033B; /* jne: not equal / not zero */

loc_00090314: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090339; /* jp: parity */

loc_0009032D: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00090339: ;
    fp_pop(); /* fstp st(0) */

loc_0009033B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000901BB
 * Original: 0x000901BB - 0x00090341 (390 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901BB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000901BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    goto loc_000901C3;

loc_000901BF: ;
    SET_LO8(eax, MEM8(esp + 0x12));

loc_000901C3: ;
    _fa = (uint32_t)(MEM32(esi + 0x3E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3E4), 0x3C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_000901D0: ;
    SET_LO8(edx, MEM8(esi + 0x398));
    edi = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + edi * 4 + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    MEM8(esp + 0x14) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000901F5; /* jne: not equal / not zero */

loc_000901E5: ;
    SET_LO8(ecx, MEM8(esi + edi * 4 + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x399)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x399) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000902FC; /* je: equal / zero */

loc_000901F5: ;
    SET_LO8(ecx, MEM8(esi + 0x3F9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090207; /* je: equal / zero */

loc_000901FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_00090207: ;
    SET_LO8(ebx, MEM8(esi + edi * 4 + 9));
    PUSH32(esp, 0x00090210u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090210: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebp = eax + edx * 8 + 4;
    PUSH32(esp, 0x0009022Du); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009022D: ;
    ecx = ZX8(MEM8(ebp + 6));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x1B) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0009029C; /* jne: not equal / not zero */

loc_00090247: ;
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009029C; /* je: equal / zero */

loc_0009024F: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    SET_LO8(ebx, MEM8(esi + eax * 4 + 9));
    eax = esi + eax * 4 + 8;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0x00090267u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090267: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebx = eax + edx * 8 + 4;
    PUSH32(esp, 0x00090284u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090284: ;
    ecx = ZX8(MEM8(ebx + 6));
    SET_LO8(ebx, MEM8(esp + 0x1B));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000902A2;

loc_0009029C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902A2: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000902BBu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000902BB: ;
    ecx = eax;
    PUSH32(esp, 0x000902C2u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000902C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902DD; /* jne: not equal / not zero */

loc_000902C6: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = esi + 0x3A4;
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000902DD: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000901BF; /* jne: not equal / not zero */

loc_000902FA: ;
    goto loc_00090302;

loc_000902FC: ;
    MEM8(esi + 0x3F9) = LO8(eax);

loc_00090302: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0009033B; /* jg: greater (signed >) */

loc_0009030B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009033B; /* jne: not equal / not zero */

loc_00090314: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090339; /* jp: parity */

loc_0009032D: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00090339: ;
    fp_pop(); /* fstp st(0) */

loc_0009033B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000901BF
 * Original: 0x000901BF - 0x00090341 (386 bytes, 110 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901BF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000901BF: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(MEM32(esi + 0x3E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3E4), 0x3C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_000901D0: ;
    SET_LO8(edx, MEM8(esi + 0x398));
    edi = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + edi * 4 + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    MEM8(esp + 0x14) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000901F5; /* jne: not equal / not zero */

loc_000901E5: ;
    SET_LO8(ecx, MEM8(esi + edi * 4 + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x399)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x399) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000902FC; /* je: equal / zero */

loc_000901F5: ;
    SET_LO8(ecx, MEM8(esi + 0x3F9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090207; /* je: equal / zero */

loc_000901FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_00090207: ;
    SET_LO8(ebx, MEM8(esi + edi * 4 + 9));
    PUSH32(esp, 0x00090210u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090210: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebp = eax + edx * 8 + 4;
    PUSH32(esp, 0x0009022Du); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009022D: ;
    ecx = ZX8(MEM8(ebp + 6));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x1B) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0009029C; /* jne: not equal / not zero */

loc_00090247: ;
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009029C; /* je: equal / zero */

loc_0009024F: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    SET_LO8(ebx, MEM8(esi + eax * 4 + 9));
    eax = esi + eax * 4 + 8;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0x00090267u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090267: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebx = eax + edx * 8 + 4;
    PUSH32(esp, 0x00090284u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090284: ;
    ecx = ZX8(MEM8(ebx + 6));
    SET_LO8(ebx, MEM8(esp + 0x1B));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000902A2;

loc_0009029C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902A2: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000902BBu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000902BB: ;
    ecx = eax;
    PUSH32(esp, 0x000902C2u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000902C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902DD; /* jne: not equal / not zero */

loc_000902C6: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = esi + 0x3A4;
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000902DD: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000901BF; /* jne: not equal / not zero */

loc_000902FA: ;
    goto loc_00090302;

loc_000902FC: ;
    MEM8(esi + 0x3F9) = LO8(eax);

loc_00090302: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0009033B; /* jg: greater (signed >) */

loc_0009030B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009033B; /* jne: not equal / not zero */

loc_00090314: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090339; /* jp: parity */

loc_0009032D: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00090339: ;
    fp_pop(); /* fstp st(0) */

loc_0009033B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000901DF
 * Original: 0x000901DF - 0x00090341 (354 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901DF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000901DF: ;
    MEM8(esp + 0x14) = LO8(ecx);
    if (_flags /* jne: not equal / not zero */) goto loc_000901F5;

loc_000901E5: ;
    SET_LO8(ecx, MEM8(esi + edi * 4 + 9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x399)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x399) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000902FC; /* je: equal / zero */

loc_000901F5: ;
    SET_LO8(ecx, MEM8(esi + 0x3F9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090207; /* je: equal / zero */

loc_000901FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_00090207: ;
    SET_LO8(ebx, MEM8(esi + edi * 4 + 9));
    PUSH32(esp, 0x00090210u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090210: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebp = eax + edx * 8 + 4;
    PUSH32(esp, 0x0009022Du); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009022D: ;
    ecx = ZX8(MEM8(ebp + 6));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x1B) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0009029C; /* jne: not equal / not zero */

loc_00090247: ;
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009029C; /* je: equal / zero */

loc_0009024F: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    SET_LO8(ebx, MEM8(esi + eax * 4 + 9));
    eax = esi + eax * 4 + 8;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0x00090267u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090267: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebx = eax + edx * 8 + 4;
    PUSH32(esp, 0x00090284u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090284: ;
    ecx = ZX8(MEM8(ebx + 6));
    SET_LO8(ebx, MEM8(esp + 0x1B));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000902A2;

loc_0009029C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902A2: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000902BBu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000902BB: ;
    ecx = eax;
    PUSH32(esp, 0x000902C2u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000902C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902DD; /* jne: not equal / not zero */

loc_000902C6: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = esi + 0x3A4;
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000902DD: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000901BF(); return; } /* jne: not equal / not zero */

loc_000902FA: ;
    goto loc_00090302;

loc_000902FC: ;
    MEM8(esi + 0x3F9) = LO8(eax);

loc_00090302: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0009033B; /* jg: greater (signed >) */

loc_0009030B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009033B; /* jne: not equal / not zero */

loc_00090314: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090339; /* jp: parity */

loc_0009032D: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00090339: ;
    fp_pop(); /* fstp st(0) */

loc_0009033B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000901EF
 * Original: 0x000901EF - 0x00090341 (338 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901EF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000901EF: ;
    if (_flags /* je: equal / zero */) goto loc_000902FC;

loc_000901F5: ;
    SET_LO8(ecx, MEM8(esi + 0x3F9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090207; /* je: equal / zero */

loc_000901FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_00090207: ;
    SET_LO8(ebx, MEM8(esi + edi * 4 + 9));
    PUSH32(esp, 0x00090210u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090210: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebp = eax + edx * 8 + 4;
    PUSH32(esp, 0x0009022Du); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009022D: ;
    ecx = ZX8(MEM8(ebp + 6));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x1B) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0009029C; /* jne: not equal / not zero */

loc_00090247: ;
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009029C; /* je: equal / zero */

loc_0009024F: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    SET_LO8(ebx, MEM8(esi + eax * 4 + 9));
    eax = esi + eax * 4 + 8;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0x00090267u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090267: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebx = eax + edx * 8 + 4;
    PUSH32(esp, 0x00090284u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090284: ;
    ecx = ZX8(MEM8(ebx + 6));
    SET_LO8(ebx, MEM8(esp + 0x1B));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000902A2;

loc_0009029C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902A2: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000902BBu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000902BB: ;
    ecx = eax;
    PUSH32(esp, 0x000902C2u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000902C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902DD; /* jne: not equal / not zero */

loc_000902C6: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = esi + 0x3A4;
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000902DD: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000901BF(); return; } /* jne: not equal / not zero */

loc_000902FA: ;
    goto loc_00090302;

loc_000902FC: ;
    MEM8(esi + 0x3F9) = LO8(eax);

loc_00090302: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0009033B; /* jg: greater (signed >) */

loc_0009030B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009033B; /* jne: not equal / not zero */

loc_00090314: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090339; /* jp: parity */

loc_0009032D: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00090339: ;
    fp_pop(); /* fstp st(0) */

loc_0009033B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000901FB
 * Original: 0x000901FB - 0x00090341 (326 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901FB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000901FB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090207; /* je: equal / zero */

loc_000901FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_00090207: ;
    SET_LO8(ebx, MEM8(esi + edi * 4 + 9));
    PUSH32(esp, 0x00090210u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090210: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebp = eax + edx * 8 + 4;
    PUSH32(esp, 0x0009022Du); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009022D: ;
    ecx = ZX8(MEM8(ebp + 6));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x1B) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0009029C; /* jne: not equal / not zero */

loc_00090247: ;
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009029C; /* je: equal / zero */

loc_0009024F: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    SET_LO8(ebx, MEM8(esi + eax * 4 + 9));
    eax = esi + eax * 4 + 8;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0x00090267u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090267: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebx = eax + edx * 8 + 4;
    PUSH32(esp, 0x00090284u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090284: ;
    ecx = ZX8(MEM8(ebx + 6));
    SET_LO8(ebx, MEM8(esp + 0x1B));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000902A2;

loc_0009029C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902A2: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000902BBu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000902BB: ;
    ecx = eax;
    PUSH32(esp, 0x000902C2u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000902C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902DD; /* jne: not equal / not zero */

loc_000902C6: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = esi + 0x3A4;
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000902DD: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000901BF(); return; } /* jne: not equal / not zero */

loc_000902FA: ;
    goto loc_00090302;

    MEM8(esi + 0x3F9) = LO8(eax);

loc_00090302: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0009033B; /* jg: greater (signed >) */

loc_0009030B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009033B; /* jne: not equal / not zero */

loc_00090314: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090339; /* jp: parity */

loc_0009032D: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00090339: ;
    fp_pop(); /* fstp st(0) */

loc_0009033B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000901FF
 * Original: 0x000901FF - 0x00090341 (322 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000901FF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000901FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090302; /* je: equal / zero */

loc_00090207: ;
    SET_LO8(ebx, MEM8(esi + edi * 4 + 9));
    PUSH32(esp, 0x00090210u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090210: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebp = eax + edx * 8 + 4;
    PUSH32(esp, 0x0009022Du); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009022D: ;
    ecx = ZX8(MEM8(ebp + 6));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x1B) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0009029C; /* jne: not equal / not zero */

loc_00090247: ;
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009029C; /* je: equal / zero */

loc_0009024F: ;
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    SET_LO8(ebx, MEM8(esi + eax * 4 + 9));
    eax = esi + eax * 4 + 8;
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0x00090267u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090267: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = ZX8(LO8(ebx));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    ebx = eax + edx * 8 + 4;
    PUSH32(esp, 0x00090284u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090284: ;
    ecx = ZX8(MEM8(ebx + 6));
    SET_LO8(ebx, MEM8(esp + 0x1B));
    edx = ecx + ecx * 2;
    _fa = (uint32_t)(MEM8(eax + edx * 2 + 0x12008)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 2 + 0x12008), 0xFF (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000902A2;

loc_0009029C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902A2: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902C6; /* jne: not equal / not zero */

loc_000902AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000902BBu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000902BB: ;
    ecx = eax;
    PUSH32(esp, 0x000902C2u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000902C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000902DD; /* jne: not equal / not zero */

loc_000902C6: ;
    ecx = MEM32(esi + 0x3E4);
    SET_LO8(edx, MEM8(esp + 0x12));
    eax = esi + 0x3A4;
    ecx = ecx + eax;
    MEM8(ecx) = LO8(edx);
    MEM32(eax + 0x40) = MEM32(eax + 0x40) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000902DD: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esi + edi * 4 + 0xB));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    MEM32(esp + 0x1C) = edx;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000901BF(); return; } /* jne: not equal / not zero */

loc_000902FA: ;
    goto loc_00090302;

    MEM8(esi + 0x3F9) = LO8(eax);

loc_00090302: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_G(_fas, _fbs)) goto loc_0009033B; /* jg: greater (signed >) */

loc_0009030B: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009033B; /* jne: not equal / not zero */

loc_00090314: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090339; /* jp: parity */

loc_0009032D: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00090339: ;
    fp_pop(); /* fstp st(0) */

loc_0009033B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090340
 * Original: 0x00090340 - 0x00090341 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090340(void)
{

loc_00090340: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00090350
 * Original: 0x00090350 - 0x0009058F (575 bytes, 167 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090350: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x20C) = ebx;
    eax = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x20C) = eax;
    MEM32(esi + 0x394) = ebx;
    MEM32(esi + 0x3E4) = ebx;
    eax = esi + 0x398;
    SET_LO16(edx, MEM16(eax));
    SET_LO8(eax, MEM8(eax + 2));
    ecx = esi + 0x656;
    MEM16(ecx) = LO16(edx);
    PUSH32(esp, edi);
    MEM8(esi + 0x3F8) = LO8(ebx);
    MEM8(esi + 0x3F9) = LO8(ebx);
    MEM32(esi + 0x3F4) = 1;
    MEM8(esi + 0x654) = LO8(ebx);
    MEM8(ecx + 2) = LO8(eax);
    MEM8(esi + 0x65B) = LO8(ebx);
    MEM8(esi + 0x663) = LO8(ebx);
    PUSH32(esp, 0x000903BAu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000903BA: ;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000903D7u); RECOMP_ABI_CALL(0x0008FC40u, sub_0008FC40); /* call 0x0008FC40 */

loc_000903D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090584; /* je: equal / zero */

loc_000903DF: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esi + 0x643) = LO8(ecx);
    ecx = esi + 4;
    MEM8(esi + 0x641) = LO8(edx);
    MEM8(esi + 0x642) = LO8(eax);
    PUSH32(esp, 0x00090405u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00090405: ;
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    edx = MEM32(eax + 0x28);
    eax = eax + 0x20;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    edi = esi + 0x63B;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00090456u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090456: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00090473u); RECOMP_ABI_CALL(0x0008FC40u, sub_0008FC40); /* call 0x0008FC40 */

loc_00090473: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090584; /* je: equal / zero */

loc_0009047B: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = LO8(ecx);
    MEM8(edi + 2) = LO8(edx);
    edx = esi + 0x63E;
    PUSH32(esp, ebp);
    eax = edi;
    SET_LO16(ebp, MEM16(eax));
    SET_LO8(eax, MEM8(eax + 2));
    ecx = edx;
    MEM16(ecx) = LO16(ebp);
    MEM8(ecx + 2) = LO8(eax);
    ecx = ZX8(MEM8(edi));
    ecx = ecx - 0xC;
    eax = ebx;
    SET_LO8(eax, (((int32_t)ecx < 0)) ? 1 : 0); /* sets */
    POP32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    ecx = ZX8(MEM8(esi + 0x63C));
    MEM8(edi) = LO8(eax);
    ecx = ecx - 0xC;
    eax = ebx;
    SET_LO8(eax, (((int32_t)ecx < 0)) ? 1 : 0); /* sets */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM8(esi + 0x63C) = LO8(eax);
    eax = ZX8(MEM8(edx));
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000904E1; /* jle: less or equal (signed <=) */

loc_000904DC: ;
    eax = 0xFF;

loc_000904E1: ;
    MEM8(edx) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x63F));
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000904F9; /* jle: less or equal (signed <=) */

loc_000904F4: ;
    eax = 0xFF;

loc_000904F9: ;
    MEM8(esi + 0x63F) = LO8(eax);
    SET_LO8(ecx, 0); /* xor self */
    eax = 0; /* xor self */

loc_00090503: ;
    MEM8(eax + esi + 0x3FA) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x240) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x240 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00090503; /* jl: less (signed <) */

loc_00090512: ;
    SET_LO8(ecx, MEM8(esi + 0x398));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00090584; /* jb: below (unsigned <) */

loc_0009051C: ;
    SET_LO8(eax, MEM8(esi + 0x399));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 1) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00090584; /* jb: below (unsigned <) */

loc_00090527: ;
    SET_LO8(ecx, MEM8(esi + 0x398));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00090584; /* jae: above or equal (unsigned >=) */

loc_00090531: ;
    SET_LO8(eax, MEM8(esi + 0x399));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 1) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00090584; /* jae: above or equal (unsigned >=) */

loc_0009053C: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax);
    MEM32(esi + 0x644) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x648) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x64C) = eax;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C836C); /* fadd dword ptr [0x3c836c] */
    ecx = esi;
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00090573u); RECOMP_ABI_CALL(0x0008E0F0u, sub_0008E0F0); /* call 0x0008E0F0 */

loc_00090573: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090579u); RECOMP_ABI_CALL(0x0008F180u, sub_0008F180); /* call 0x0008F180 */

loc_00090579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_00090584: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000903C0
 * Original: 0x000903C0 - 0x0009058F (463 bytes, 139 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000903C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000903C0: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000903D7u); RECOMP_ABI_CALL(0x0008FC40u, sub_0008FC40); /* call 0x0008FC40 */

loc_000903D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090584; /* je: equal / zero */

loc_000903DF: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(esi + 0x643) = LO8(ecx);
    ecx = esi + 4;
    MEM8(esi + 0x641) = LO8(edx);
    MEM8(esi + 0x642) = LO8(eax);
    PUSH32(esp, 0x00090405u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00090405: ;
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    edx = MEM32(eax + 0x28);
    eax = eax + 0x20;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    edi = esi + 0x63B;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00090456u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090456: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00090473u); RECOMP_ABI_CALL(0x0008FC40u, sub_0008FC40); /* call 0x0008FC40 */

loc_00090473: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090584; /* je: equal / zero */

loc_0009047B: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(edi) = LO8(eax);
    MEM8(edi + 1) = LO8(ecx);
    MEM8(edi + 2) = LO8(edx);
    edx = esi + 0x63E;
    PUSH32(esp, ebp);
    eax = edi;
    SET_LO16(ebp, MEM16(eax));
    SET_LO8(eax, MEM8(eax + 2));
    ecx = edx;
    MEM16(ecx) = LO16(ebp);
    MEM8(ecx + 2) = LO8(eax);
    ecx = ZX8(MEM8(edi));
    ecx = ecx - 0xC;
    eax = ebx;
    SET_LO8(eax, (((int32_t)ecx < 0)) ? 1 : 0); /* sets */
    POP32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    ecx = ZX8(MEM8(esi + 0x63C));
    MEM8(edi) = LO8(eax);
    ecx = ecx - 0xC;
    eax = ebx;
    SET_LO8(eax, (((int32_t)ecx < 0)) ? 1 : 0); /* sets */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM8(esi + 0x63C) = LO8(eax);
    eax = ZX8(MEM8(edx));
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000904E1; /* jle: less or equal (signed <=) */

loc_000904DC: ;
    eax = 0xFF;

loc_000904E1: ;
    MEM8(edx) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x63F));
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000904F9; /* jle: less or equal (signed <=) */

loc_000904F4: ;
    eax = 0xFF;

loc_000904F9: ;
    MEM8(esi + 0x63F) = LO8(eax);
    SET_LO8(ecx, 0); /* xor self */
    eax = 0; /* xor self */

loc_00090503: ;
    MEM8(eax + esi + 0x3FA) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x240) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x240 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00090503; /* jl: less (signed <) */

loc_00090512: ;
    SET_LO8(ecx, MEM8(esi + 0x398));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edi) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00090584; /* jb: below (unsigned <) */

loc_0009051C: ;
    SET_LO8(eax, MEM8(esi + 0x399));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 1) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00090584; /* jb: below (unsigned <) */

loc_00090527: ;
    SET_LO8(ecx, MEM8(esi + 0x398));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(edx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00090584; /* jae: above or equal (unsigned >=) */

loc_00090531: ;
    SET_LO8(eax, MEM8(esi + 0x399));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 1) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00090584; /* jae: above or equal (unsigned >=) */

loc_0009053C: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax);
    MEM32(esi + 0x644) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x648) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x64C) = eax;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C836C); /* fadd dword ptr [0x3c836c] */
    ecx = esi;
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00090573u); RECOMP_ABI_CALL(0x0008E0F0u, sub_0008E0F0); /* call 0x0008E0F0 */

loc_00090573: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090579u); RECOMP_ABI_CALL(0x0008F180u, sub_0008F180); /* call 0x0008F180 */

loc_00090579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_00090584: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090540
 * Original: 0x00090540 - 0x0009058F (79 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090540(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090540: ;
    ecx = MEM32(eax);
    MEM32(esi + 0x644) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x648) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x64C) = eax;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C836C); /* fadd dword ptr [0x3c836c] */
    ecx = esi;
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00090573u); RECOMP_ABI_CALL(0x0008E0F0u, sub_0008E0F0); /* call 0x0008E0F0 */

loc_00090573: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090579u); RECOMP_ABI_CALL(0x0008F180u, sub_0008F180); /* call 0x0008F180 */

loc_00090579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090590
 * Original: 0x00090590 - 0x0009066A (218 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090590: ;
    eax = MEM32(ecx + 0x3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000905AC; /* je: equal / zero */

loc_0009059C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000905AC; /* je: equal / zero */

loc_000905A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000905AC; /* je: equal / zero */

loc_000905A6: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000905AC: ;
    SET_LO16(eax, MEM16(esp + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    PUSH32(esp, ecx);
    if (CMP_BE(_fa & _fb, 0)) goto loc_000905ED; /* jbe: below or equal (unsigned <=) */

loc_000905B7: ;
    eax = ZX16(LO16(eax));
    edx = ZX8(MEM8(eax + ecx + 0x3A4));
    eax = ecx + edx * 4 + 8;
    SET_LO8(edx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000905FE; /* je: equal / zero */

loc_000905CD: ;
    edx = ZX8(LO8(edx));
    edx = ecx + edx * 4 + 8;
    ecx = MEM32(ecx + 4);
    esi = esp;
    MEM32(esi) = ecx;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 2));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 1));
    edx = ZX8(MEM8(edx));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_0009060C;

loc_000905ED: ;
    SET_LO8(eax, MEM8(ecx + 0x3F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009062F; /* je: equal / zero */

loc_000905F7: ;
    edx = ZX8(LO8(eax));
    eax = ecx + edx * 4 + 8;

loc_000905FE: ;
    ecx = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ecx) = 0;
    PUSH32(esp, 0);

loc_0009060C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 2));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090621u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090621: ;
    ecx = eax;
    PUSH32(esp, 0x00090628u); RECOMP_ABI_CALL(0x0008F980u, sub_0008F980); /* call 0x0008F980 */

loc_00090628: ;
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009062F: ;
    eax = esp;
    MEM32(eax) = 0;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 0x39A));
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x399));
    ecx = ZX8(MEM8(ecx + 0x398));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009065Cu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009065C: ;
    ecx = eax;
    PUSH32(esp, 0x00090663u); RECOMP_ABI_CALL(0x0008F980u, sub_0008F980); /* call 0x0008F980 */

loc_00090663: ;
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00090670
 * Original: 0x00090670 - 0x0009068A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090670(void)
{

loc_00090670: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x3F4) = 2;
    PUSH32(esp, 0x00090682u); RECOMP_ABI_CALL(0x00090180u, sub_00090180); /* call 0x00090180 */

loc_00090682: ;
    eax = MEM32(esi + 0x3F4);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00090690
 * Original: 0x00090690 - 0x000906A3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090690(void)
{

loc_00090690: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x664);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000906A2u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000906A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000906B0
 * Original: 0x000906B0 - 0x00090C49 (1433 bytes, 371 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000906B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000906B0: ;
    esp = esp - 0x10;
    eax = ZX8(MEM8(esp + 0x14));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00090BAF; /* jle: less or equal (signed <=) */

loc_000906CE: ;
    edi = edi;

loc_000906D0: ;
    SET_LO8(eax, MEM8(esi + 0x663));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000906E8; /* jne: not equal / not zero */

loc_000906DA: ;
    eax = MEM32(esi + 0x394);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090BD0; /* je: equal / zero */

loc_000906E8: ;
    eax = MEM32(esi + 0x394);
    ebx = 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090C3A; /* je: equal / zero */

loc_000906FB: ;
    _fa = (uint32_t)(MEM32(esi + 0x20C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090C3A; /* je: equal / zero */

loc_00090707: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090C3A; /* je: equal / zero */

loc_0009070F: ;
    SET_LO8(eax, MEM8(esi + 0x210));
    ecx = esi + 0x210;
    MEM8(esi + 0x654) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x65B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(edx, MEM8(ecx + 1));
    MEM8(esi + 0x655) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_00090739; /* je: equal / zero */

loc_00090734: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0009074A; /* jae: above or equal (unsigned >=) */

loc_00090739: ;
    SET_LO8(eax, MEM8(ecx + 2));
    MEM8(esi + 0x65B) = LO8(eax);
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + 0x3F8) = LO8(edx);

loc_0009074A: ;
    PUSH32(esp, 0x0009074Fu); RECOMP_ABI_CALL(0x0008EF10u, sub_0008EF10); /* call 0x0008EF10 */

loc_0009074F: ;
    eax = ZX8(MEM8(esi + 0x654));
    SET_LO8(ecx, MEM8(esi + eax * 4 + 8));
    edi = esi + eax * 4 + 8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x641)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x641) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009078C; /* jne: not equal / not zero */

loc_00090766: ;
    SET_LO8(edx, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x642)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x642) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009078C; /* jne: not equal / not zero */

loc_00090771: ;
    ecx = ZX8(MEM8(esi + 0x643));
    eax = ZX8(MEM8(edi + 2));
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00090C1D; /* jl: less (signed <) */

loc_0009078C: ;
    MEM8(esi + 0x660) = 0;
    goto loc_000907A0;

loc_00090795: ;
    ebx = 0x80;
    /* nop */

loc_000907A0: ;
    _fa = (uint32_t)(MEM32(esi + 0x394)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x394), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090C3A; /* je: equal / zero */

loc_000907AC: ;
    _fa = (uint32_t)(MEM32(esi + 0x20C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090C3A; /* je: equal / zero */

loc_000907B8: ;
    SET_LO8(eax, MEM8(esi + 0x660));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 8 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00090A98; /* jae: above or equal (unsigned >=) */

loc_000907C6: ;
    SET_LO8(ecx, MEM8(edi));
    eax = ZX8(LO8(eax));
    eax = eax << 3;
    SET_LO8(edx, MEM8(eax + 0x3CFAF0));
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    ebx = esi + 0x656;
    MEM8(ebx) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 0x3CFAF4));
    SET_LO8(edx, MEM8(edi + 1));
    ebp = ZX8(MEM8(ebx));
    SET_LO8(eax, LO8(eax) + LO8(edx));
    MEM8(esi + 0x657) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000907FEu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000907FE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00090B81; /* jl: less (signed <) */

loc_00090806: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00090B81; /* jl: less (signed <) */

loc_00090812: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090B81; /* jge: greater or equal (signed >=) */

loc_00090821: ;
    eax = ZX8(MEM8(eax + 0x12A59));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00090B81; /* jge: greater or equal (signed >=) */

loc_00090830: ;
    SET_LO8(ecx, MEM8(esi + 0x657));
    SET_LO8(edx, MEM8(ebx));
    MEM8(esp + 0x10) = LO8(ecx);
    MEM8(esp + 0x14) = LO8(edx);
    PUSH32(esp, 0x00090845u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090845: ;
    ecx = ZX8(MEM8(eax + 0x12A58));
    edx = ZX8(MEM8(esp + 0x10));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX8(MEM8(esp + 0x14));
    ecx = ecx + edx;
    ebp = eax + ecx * 8 + 4;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 2));
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0009086Bu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_0009086B: ;
    ecx = eax;
    PUSH32(esp, 0x00090872u); RECOMP_ABI_CALL(0x0008D280u, sub_0008D280); /* call 0x0008D280 */

loc_00090872: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esi + 0x658) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00090B81; /* je: equal / zero */

loc_00090880: ;
    edx = ZX8(MEM8(edi + 2));
    ecx = ZX8(LO8(eax));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00090B81; /* jg: greater (signed >) */

loc_00090892: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFCu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00090B81; /* jl: less (signed <) */

loc_0009089B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000908A2u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000908A2: ;
    ecx = eax;
    PUSH32(esp, 0x000908A9u); RECOMP_ABI_CALL(0x0008F610u, sub_0008F610); /* call 0x0008F610 */

loc_000908A9: ;
    ebp = ZX8(MEM8(esi + 0x660));
    SET_LO8(edx, MEM8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x398)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x398) (8-bit) */
    MEM8(esi + 0x659) = LO8(eax);
    SET_LO8(ecx, MEM8(ebp + 0x3CFB30));
    MEM8(esi + 0x65A) = LO8(ecx);
    MEM8(esp + 0x14) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_000908E2; /* jne: not equal / not zero */

loc_000908D0: ;
    SET_LO8(edx, MEM8(esi + 0x657));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x399)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x399) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090917; /* je: equal / zero */

loc_000908DE: ;
    SET_LO8(edx, MEM8(esp + 0x14));

loc_000908E2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x641)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x641) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000908F8; /* jne: not equal / not zero */

loc_000908EA: ;
    SET_LO8(edx, MEM8(esi + 0x657));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x642)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 0x642) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090917; /* je: equal / zero */

loc_000908F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x30 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090B81; /* jne: not equal / not zero */

loc_00090900: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009090C; /* je: equal / zero */

loc_00090904: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x65A) = LO8(ecx);

loc_0009090C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00090917; /* jns: not sign (positive) */

loc_00090910: ;
    MEM8(esi + 0x65A) = MEM8(esi + 0x65A) + 5;

loc_00090917: ;
    SET_LO8(ecx, MEM8(esi + 0x660));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00090B29; /* jae: above or equal (unsigned >=) */

loc_00090926: ;
    _fa = (uint32_t)(MEM8(ebp + 0x3CFB30)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x3CFB30), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00090B29; /* jbe: below or equal (unsigned <=) */

loc_00090933: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090B29; /* jne: not equal / not zero */

loc_0009093B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = ebp + -1;
    if (CMP_A(_fa & _fb, 0)) goto loc_00090947; /* ja: above (unsigned >) */

loc_00090942: ;
    eax = 7;

loc_00090947: ;
    SET_LO8(eax, MEM8(eax * 8 + 0x3CFAF0));
    SET_LO8(eax, LO8(eax) + MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM8(esi + 0x661) = LO8(eax);
    eax = ebp + -1;
    if (CMP_A(_fa & _fb, 0)) goto loc_00090962; /* ja: above (unsigned >) */

loc_0009095D: ;
    eax = 7;

loc_00090962: ;
    SET_LO8(ecx, MEM8(edi + 1));
    SET_LO8(eax, MEM8(eax * 8 + 0x3CFAF4));
    edx = ZX8(MEM8(esi + 0x661));
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(esi + 0x662) = LO8(eax);
    PUSH32(esp, 0x00090985u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090985: ;
    ecx = eax;
    PUSH32(esp, 0x0009098Cu); RECOMP_ABI_CALL(0x0008D0E0u, sub_0008D0E0); /* call 0x0008D0E0 */

loc_0009098C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090B81; /* je: equal / zero */

loc_00090994: ;
    SET_LO8(eax, MEM8(esi + 0x662));
    SET_LO8(ecx, MEM8(esi + 0x661));
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x10) = LO8(ecx);
    PUSH32(esp, 0x000909ADu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000909AD: ;
    ecx = ZX8(MEM8(eax + 0x12A58));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x658));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esp + 0x18));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX8(MEM8(esp + 0x14));
    ecx = ecx + edx;
    eax = eax + ecx * 8 + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000909D6u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_000909D6: ;
    ecx = eax;
    PUSH32(esp, 0x000909DDu); RECOMP_ABI_CALL(0x0008F6C0u, sub_0008F6C0); /* call 0x0008F6C0 */

loc_000909DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090B81; /* jne: not equal / not zero */

loc_000909E5: ;
    SET_LO8(eax, MEM8(esi + 0x660));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000909F5; /* jae: above or equal (unsigned >=) */

loc_000909EF: ;
    ebp = ZX8(LO8(eax));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000909F7;

loc_000909F5: ;
    ebp = 0; /* xor self */

loc_000909F7: ;
    SET_LO8(ecx, MEM8(ebp * 8 + 0x3CFAF0));
    SET_LO8(ecx, LO8(ecx) + MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 7 (8-bit) */
    MEM8(esi + 0x661) = LO8(ecx);
    if (CMP_AE(_fa, _fb)) goto loc_00090A10; /* jae: above or equal (unsigned >=) */

loc_00090A0A: ;
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00090A12;

loc_00090A10: ;
    eax = 0; /* xor self */

loc_00090A12: ;
    SET_LO8(eax, MEM8(eax * 8 + 0x3CFAF4));
    SET_LO8(eax, LO8(eax) + MEM8(edi + 1));
    edx = ZX8(LO8(eax));
    MEM8(esi + 0x662) = LO8(eax);
    eax = ZX8(MEM8(esi + 0x661));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090A33u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090A33: ;
    ecx = eax;
    PUSH32(esp, 0x00090A3Au); RECOMP_ABI_CALL(0x0008D0E0u, sub_0008D0E0); /* call 0x0008D0E0 */

loc_00090A3A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090B81; /* je: equal / zero */

loc_00090A42: ;
    SET_LO8(ecx, MEM8(esi + 0x662));
    SET_LO8(edx, MEM8(esi + 0x661));
    MEM8(esp + 0x14) = LO8(ecx);
    MEM8(esp + 0x10) = LO8(edx);
    PUSH32(esp, 0x00090A5Bu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090A5B: ;
    edx = ZX8(MEM8(eax + 0x12A58));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x658));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esp + 0x18));
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    ecx = ZX8(MEM8(esp + 0x14));
    edx = edx + ecx;
    edx = eax + edx * 8 + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00090A84u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090A84: ;
    ecx = eax;
    PUSH32(esp, 0x00090A8Bu); RECOMP_ABI_CALL(0x0008F6C0u, sub_0008F6C0); /* call 0x0008F6C0 */

loc_00090A8B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090B29; /* je: equal / zero */

loc_00090A93: ;
    goto loc_00090B81;

loc_00090A98: ;
    SET_LO8(eax, MEM8(edi));
    SET_LO8(ebx, MEM8(edi + 1));
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00090AA6u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090AA6: ;
    ecx = ZX8(MEM8(eax + 0x12A58));
    edx = ZX8(LO8(ebx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = ZX8(MEM8(esp + 0x14));
    ecx = ecx + edx;
    ebx = eax + ecx * 8 + 4;
    PUSH32(esp, 0x00090AC3u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090AC3: ;
    ecx = ZX8(MEM8(ebx + 6));
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 2 + 0x12008;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090B81; /* je: equal / zero */

loc_00090ADB: ;
    edx = ZX8(MEM8(edi + 2));
    eax = ZX8(LO8(eax));
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00090B81; /* jg: greater (signed >) */

loc_00090AF2: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ebx = esi + 0x656;
    MEM8(ebx) = LO8(eax);
    SET_LO8(edx, MEM8(ecx + 2));
    MEM8(esi + 0x657) = LO8(edx);
    SET_LO8(eax, MEM8(ecx + 3));
    ecx = ZX8(MEM8(esi + 0x660));
    MEM8(esi + 0x658) = LO8(eax);
    MEM8(esi + 0x659) = 0;
    SET_LO8(edx, MEM8(ecx + 0x3CFB30));
    MEM8(esi + 0x65A) = LO8(edx);

loc_00090B29: ;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x63B)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 0x63B) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00090B7A; /* jb: below (unsigned <) */

loc_00090B33: ;
    SET_LO8(ecx, MEM8(ebx + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 0x63C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 0x63C) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00090B7A; /* jb: below (unsigned <) */

loc_00090B3E: ;
    edx = esi + 0x63E;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00090B4Cu); RECOMP_ABI_CALL(0x0008D050u, sub_0008D050); /* call 0x0008D050 */

loc_00090B4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090B7A; /* jne: not equal / not zero */

loc_00090B50: ;
    ecx = esi;
    PUSH32(esp, 0x00090B57u); RECOMP_ABI_CALL(0x0008E0F0u, sub_0008E0F0); /* call 0x0008E0F0 */

loc_00090B57: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090B81; /* jne: not equal / not zero */

loc_00090B5C: ;
    SET_LO8(ecx, MEM8(esi + 0x655));
    SET_LO8(edx, MEM8(esi + 0x65A));
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esi + 0x65A) = LO8(edx);
    PUSH32(esp, 0x00090B78u); RECOMP_ABI_CALL(0x0008F180u, sub_0008F180); /* call 0x0008F180 */

loc_00090B78: ;
    goto loc_00090B81;

loc_00090B7A: ;
    MEM8(esi + 0x663) = 1;

loc_00090B81: ;
    SET_LO8(ecx, MEM8(esi + 0x660));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    MEM8(esi + 0x660) = LO8(ecx);
    if (CMP_B(_fa, _fb)) goto loc_00090795; /* jb: below (unsigned <) */

loc_00090B99: ;
    ecx = MEM32(esp + 0x18);
    eax = ZX8(MEM8(esp + 0x24));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000906D0; /* jl: less (signed <) */

loc_00090BAF: ;
    MEM32(esi + 0x3F4) = 1;

loc_00090BB9: ;
    ecx = esi;
    PUSH32(esp, 0x00090BC0u); RECOMP_ABI_CALL(0x00090180u, sub_00090180); /* call 0x00090180 */

loc_00090BC0: ;
    eax = MEM32(esi + 0x3F4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_00090BD0: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CA844); /* fadd dword ptr [0x3ca844] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090C05; /* jp: parity */

loc_00090BE9: ;
    POP32(esp, edi);
    MEMF(esi + 0x650) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x3F4) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_00090C05: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x3F4) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_00090C1D: ;
    SET_LO8(edx, MEM8(esi + 0x654));
    ecx = esi;
    MEM8(esi + 0x3F8) = LO8(edx);
    PUSH32(esp, 0x00090C30u); RECOMP_ABI_CALL(0x00090670u, sub_00090670); /* call 0x00090670 */

loc_00090C30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_00090C3A: ;
    MEM32(esi + 0x3F4) = 4;
    goto loc_00090BB9;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090C50
 * Original: 0x00090C50 - 0x00090E4A (506 bytes, 163 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090C50: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 4;
    if (TEST_Z(_fa, _fb)) goto loc_00090C6C; /* je: equal / zero */

loc_00090C61: ;
    ecx = edi;
    PUSH32(esp, 0x00090C68u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_00090C68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090C80; /* jne: not equal / not zero */

loc_00090C6C: ;
    POP32(esp, edi);
    MEM32(esi + 0x3F4) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_00090C80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00090C86u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00090C86: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00090C90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00090C90: ;
    MEMF(esi + 0x39C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x00090C9Du); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00090C9D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090CC7; /* je: equal / zero */

loc_00090CA3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00090CA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00090CA9: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090CC9; /* jne: not equal / not zero */

loc_00090CC7: ;
    edi = 0; /* xor self */

loc_00090CC9: ;
    ecx = MEM32(edi + 0x20);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(edi + 0x24);
    MEM32(esp + 0x10) = edx;
    eax = MEM32(edi + 0x28);
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(MEM8(edi + 0x334)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x334), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090D11; /* je: equal / zero */

loc_00090CE7: ;
    PUSH32(esp, 0x00090CECu); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090CEC: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00090CFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00090CFD: ;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = edx;

loc_00090D11: ;
    ebx = MEM32(esp + 0x28);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esi + 0x3A0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090D55; /* jp: parity */

loc_00090D41: ;
    POP32(esp, ebx);
    eax = 3;
    POP32(esp, edi);
    MEM32(esi + 0x3F4) = eax;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_00090D55: ;
    ecx = edi;
    PUSH32(esp, 0x00090D5Cu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_00090D5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    MEM32(esp + 0x28) = 0x40000000;
    if (CMP_NE(_fa, _fb)) goto loc_00090D71; /* jne: not equal / not zero */

loc_00090D69: ;
    MEM32(esp + 0x28) = 0x3F800000;

loc_00090D71: ;
    PUSH32(esp, 0x00090D76u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090D76: ;
    fp_push(MEMF(eax + 0x12A20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C836C); /* fmul dword ptr [0x3c836c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x3A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x3a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00090E35; /* jnp: not parity */

loc_00090D9D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = esi + 0x398;
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00090DB2u); RECOMP_ABI_CALL(0x0008F130u, sub_0008F130); /* call 0x0008F130 */

loc_00090DB2: ;
    ecx = eax;
    PUSH32(esp, 0x00090DB9u); RECOMP_ABI_CALL(0x00090010u, sub_00090010); /* call 0x00090010 */

loc_00090DB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090E35; /* je: equal / zero */

loc_00090DBD: ;
    fp_push(MEMF(esi + 0x39C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090DE9; /* je: equal / zero */

loc_00090DD0: ;
    ecx = esi + 0x644;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00090DDEu); RECOMP_ABI_CALL(0x00074340u, sub_00074340); /* call 0x00074340 */

loc_00090DDE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090DF5; /* jne: not equal / not zero */

loc_00090DE9: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00090DF1u); RECOMP_ABI_CALL(0x00090350u, sub_00090350); /* call 0x00090350 */

loc_00090DF1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00090E35; /* je: equal / zero */

loc_00090DF5: ;
    PUSH32(esp, edi);
    ecx = esi + 0x641;
    PUSH32(esp, 0x00090E01u); RECOMP_ABI_CALL(0x0008D070u, sub_0008D070); /* call 0x0008D070 */

loc_00090E01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090D41; /* jne: not equal / not zero */

loc_00090E09: ;
    _fa = (uint32_t)(MEM32(esi + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3F4), 2 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00090E22; /* jne: not equal / not zero */

loc_00090E14: ;
    PUSH32(esp, 0x00090E19u); RECOMP_ABI_CALL(0x00090670u, sub_00090670); /* call 0x00090670 */

loc_00090E19: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_00090E22: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00090E2Cu); RECOMP_ABI_CALL(0x000906B0u, sub_000906B0); /* call 0x000906B0 */

loc_00090E2C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_00090E35: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0x3F4) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090E50
 * Original: 0x00090E50 - 0x00090E95 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090E50(void)
{

loc_00090E50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0x8F040);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x664);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00090E6Au); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_00090E6A: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xCD08) = eax;
    MEM32(esi + 0xCD0C) = eax;
    MEM32(esi + 0xCD10) = eax;
    MEM32(esi + 0xCD14) = eax;
    ecx = esi;
    MEM32(esi + 0xCD18) = eax;
    PUSH32(esp, 0x00090E91u); RECOMP_ABI_CALL(0x0008EF60u, sub_0008EF60); /* call 0x0008EF60 */

loc_00090E91: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00090EA0
 * Original: 0x00090EA0 - 0x00090EDA (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x254)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBF800000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x254), 0xBF800000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00090EB3; /* jne: not equal / not zero */

loc_00090EAF: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00090EB3: ;
    PUSH32(esp, 0x00090EB8u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00090EB8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00090EC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00090EC2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x254)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x254] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090ED6; /* jp: parity */

loc_00090ECF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00090ED6: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090EE0
 * Original: 0x00090EE0 - 0x00090F34 (84 bytes, 26 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00090EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090EE0: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(esp + 8)); /* fld float */
    esi = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00090F04; /* jp: parity */

loc_00090EF6: ;
    MEM32(esi + 0x254) = 0xBF800000u;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00090F04: ;
    PUSH32(esp, 0x00090F09u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00090F09: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00090F13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00090F13: ;
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x254)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0x254] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090F2E; /* jne: not equal / not zero */

loc_00090F24: ;
    MEMF(esi + 0x254) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00090F2E: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090F40
 * Original: 0x00090F40 - 0x00090F4C (12 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00090F40: ;
    MEM8(ecx + 0x2B9) = MEM8(ecx + 0x2B9) | 2;
    g_seh_ebp = ebp; sub_00077BE0(); return; /* tail jmp 0x00077BE0 */

}

/**
 * sub_00090F50
 * Original: 0x00090F50 - 0x00090FA8 (88 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090F50(void)
{

loc_00090F50: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00090F5Bu); RECOMP_ABI_CALL(0x00026CA0u, sub_00026CA0); /* call 0x00026CA0 */

loc_00090F5B: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00090F67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00090F67: ;
    PUSH32(esp, eax);
    ecx = esi + 0x25C;
    PUSH32(esp, 0x00090F73u); RECOMP_ABI_CALL(0x0006E000u, sub_0006E000); /* call 0x0006E000 */

loc_00090F73: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00090F7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00090F7F: ;
    PUSH32(esp, eax);
    ecx = esi + 0x260;
    PUSH32(esp, 0x00090F8Bu); RECOMP_ABI_CALL(0x0006E000u, sub_0006E000); /* call 0x0006E000 */

loc_00090F8B: ;
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00090F97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00090F97: ;
    PUSH32(esp, eax);
    ecx = esi + 0x26C;
    PUSH32(esp, 0x00090FA3u); RECOMP_ABI_CALL(0x0006E000u, sub_0006E000); /* call 0x0006E000 */

loc_00090FA3: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00090FB0
 * Original: 0x00090FB0 - 0x00090FDB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00090FB0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C2), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00090FD8; /* jae: above or equal (unsigned >=) */

loc_00090FB9: ;
    fp_push(MEMF(ecx + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090FD8; /* jne: not equal / not zero */

loc_00090FCC: ;
    eax = MEM32(ecx + 4);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090FD8; /* jne: not equal / not zero */

loc_00090FD5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00090FD8: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00090FE0
 * Original: 0x00090FE0 - 0x00090FFC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00090FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00090FE0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2C3)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x2C3), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00090FF6; /* je: equal / zero */

loc_00090FE9: ;
    eax = MEM32(ecx + 4);
    eax = eax >> 3;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00090FF6; /* jne: not equal / not zero */

loc_00090FF3: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00090FF6: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00091000
 * Original: 0x00091000 - 0x0009103E (62 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00091000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0009100Eu); RECOMP_ABI_CALL(0x00074C00u, sub_00074C00); /* call 0x00074C00 */

loc_0009100E: ;
    fp_push(MEMF(edi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    SET_LO8(ecx, LO8(eax));
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091032; /* je: equal / zero */

loc_00091026: ;
    SET_LO8(eax, LO8(eax) | 0x10);
    MEM8(esi + 0xD) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00091032: ;
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(esi + 0xD) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00091040
 * Original: 0x00091040 - 0x000910BB (123 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00091040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x2B8)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2B8), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000910B6; /* jne: not equal / not zero */

loc_0009104D: ;
    _fa = (uint32_t)(MEM16(esi + 0x244)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x244), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091073; /* je: equal / zero */

loc_00091057: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x246);
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091099; /* je: equal / zero */

loc_00091073: ;
    _fa = (uint32_t)(MEM16(esi + 0x2BA)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2BA), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000910B6; /* je: equal / zero */

loc_0009107D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2BC);
    MEM32(esp + 4) = ecx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x248)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x248] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000910B6; /* jne: not equal / not zero */

loc_00091099: ;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x44E7DC);
    ecx = esi;
    PUSH32(esp, 0x000910AAu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000910AA: ;
    MEM8(esi + 0x2B8) = MEM8(esi + 0x2B8) | 0x40;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000910B6: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000910C0
 * Original: 0x000910C0 - 0x000910F6 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000910C0(void)
{

loc_000910C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000910C8u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000910C8: ;
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(esi + 0x2AC);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2A8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x000910E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000910E8: ;
    MEM32(esi + 0x2A8) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00091100
 * Original: 0x00091100 - 0x00091154 (84 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00091100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0009110Eu); RECOMP_ABI_CALL(0x00027350u, sub_00027350); /* call 0x00027350 */

loc_0009110E: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009114F; /* jne: not equal / not zero */

loc_00091121: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    eax = MEM32(esi);
    fp_top() = fp_top() + MEMF(esi + 0x240); /* fadd dword ptr [esi + 0x240] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x00091138u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091138: ;
    fp_push(MEMF(esi + 0x248)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x1A0); PUSH32(esp, 0x0009114Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009114F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00091160
 * Original: 0x00091160 - 0x0009118D (45 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091160(void)
{

loc_00091160: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00091173u); RECOMP_ABI_CALL(0x00027310u, sub_00027310); /* call 0x00027310 */

loc_00091173: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x00091188u); RECOMP_ABI_CALL(0x00029DC0u, sub_00029DC0); /* call 0x00029DC0 */

loc_00091188: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00091190
 * Original: 0x00091190 - 0x000911FF (111 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091190(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00091190: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x244);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2BA);
    SET_LO8(edx, MEM8(esi + 0x2B8));
    MEM32(esp + 4) = eax;
    SET_LO8(edx, LO8(edx) & 0xBF);
    eax = esp + 8;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = ecx;
    MEM8(esi + 0x2B8) = LO8(edx);
    edx = MEM32(esi);
    fp_top() = fp_top() * MEMF(0x3CFC1C); /* fmul dword ptr [0x3cfc1c] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CFC1C); /* fmul dword ptr [0x3cfc1c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000911EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000911EE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x190); PUSH32(esp, 0x000911F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000911F8: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00091200
 * Original: 0x00091200 - 0x00091227 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00091200: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00091224; /* jp: parity */

loc_00091212: ;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00091224u); RECOMP_ABI_CALL(0x00091190u, sub_00091190); /* call 0x00091190 */

loc_00091224: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00091230
 * Original: 0x00091230 - 0x00091236 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091230(void)
{

loc_00091230: ;
    eax = 0x2C4;
    esp += 4; return; /* ret */

}

/**
 * sub_00091240
 * Original: 0x00091240 - 0x0009127E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091240: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0009124Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0009124A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009127A; /* je: equal / zero */

loc_00091250: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00091257u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091257: ;
    edx = MEM32(0x4D737C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0009127A; /* je: equal / zero */

loc_00091276: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0009127A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00091280
 * Original: 0x00091280 - 0x000912AF (47 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00091280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0009128Fu); RECOMP_ABI_CALL(0x00077080u, sub_00077080); /* call 0x00077080 */

loc_0009128F: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xD), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000912A7; /* je: equal / zero */

loc_00091297: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000912A4u); RECOMP_ABI_CALL(0x00066B40u, sub_00066B40); /* call 0x00066B40 */

loc_000912A4: ;
    esp = esp + 4;

loc_000912A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000912B0
 * Original: 0x000912B0 - 0x0009137C (204 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000912B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000912B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, ZX8(MEM8(ecx + 0x2C3)));
    ecx = esp + 0x14;
    MEM32(esp + 8) = 0x3F800000;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000912D4u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000912D4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091300; /* je: equal / zero */

loc_000912DA: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000912E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000912E1: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00091302; /* jne: not equal / not zero */

loc_00091300: ;
    esi = 0; /* xor self */

loc_00091302: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edi), LO16(edi) (16-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00091362; /* jl: less (signed <) */

loc_00091307: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 5 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00091366; /* jge: greater or equal (signed >=) */

loc_0009130D: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091323; /* je: equal / zero */

loc_00091317: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CFC3C); /* fmul dword ptr [0x3cfc3c] */
    goto loc_00091327;

loc_00091323: ;
    fp_push(MEMF(esp + 8)); /* fld float */

loc_00091327: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009134D; /* je: equal / zero */

loc_0009132B: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0x2C3)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0009133C; /* jge: greater or equal (signed >=) */

loc_00091338: ;
    eax = 0; /* xor self */
    goto loc_00091342;

loc_0009133C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 5 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0009134D; /* jge: greater or equal (signed >=) */

loc_00091342: ;
    edi = edi - eax;
    ecx = edi;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0009134D; /* jge: greater or equal (signed >=) */

loc_0009134B: ;
    ecx = 0; /* xor self */

loc_0009134D: ;
    eax = SX16(LO16(ecx));
    fp_top() = fp_top() * MEMF(eax * 4 + 0x3CFC24); /* fmul dword ptr [eax*4 + 0x3cfc24] */
    PUSH32(esp, 0x0009135Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0009135C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00091362: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 5 (16-bit) */

loc_00091366: ;
    if (CMP_NE(_fa, _fb)) goto loc_00091374; /* jne: not equal / not zero */

loc_00091368: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */

loc_00091374: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00091380
 * Original: 0x00091380 - 0x000913DE (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00091380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00091389u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00091389: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00091390u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091390: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009139Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009139C: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000913B9; /* jne: not equal / not zero */

loc_000913B1: ;
    MEM32(esp + 0xC) = 0;

loc_000913B9: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x44E7EC);
    ecx = esi;
    MEM32(0x44E7F0) = edi;
    MEM32(0x44E7F4) = eax;
    PUSH32(esp, 0x000913D9u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000913D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000913E0
 * Original: 0x000913E0 - 0x000914B4 (212 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000913E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000913E0: ;
    eax = MEM32(ecx + 0xC80);
    PUSH32(esp, esi);
    esi = ecx + 0xC80;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009140E; /* jne: not equal / not zero */

loc_000913F3: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000914AC; /* jge: greater or equal (signed >=) */

loc_00091402: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000913F3; /* je: equal / zero */

loc_0009140E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009141B; /* jne: not equal / not zero */

loc_00091415: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0009141B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091425; /* jne: not equal / not zero */

loc_0009141F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00091425: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009142F; /* jne: not equal / not zero */

loc_00091429: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0009142F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009143A; /* jne: not equal / not zero */

loc_00091433: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091433; /* je: equal / zero */

loc_0009143A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000914AC; /* jge: greater or equal (signed >=) */

loc_0009143F: ;
    /* nop */

loc_00091440: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000914AC; /* jge: greater or equal (signed >=) */

loc_00091446: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091477; /* jne: not equal / not zero */

loc_00091459: ;
    /* nop */

loc_00091460: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000914AC; /* jge: greater or equal (signed >=) */

loc_0009146B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091460; /* je: equal / zero */

loc_00091477: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091484; /* jne: not equal / not zero */

loc_0009147E: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00091484: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009148E; /* jne: not equal / not zero */

loc_00091488: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0009148E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091498; /* jne: not equal / not zero */

loc_00091492: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00091498: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000914A7; /* jne: not equal / not zero */

loc_0009149C: ;
    /* nop */

loc_000914A0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000914A0; /* je: equal / zero */

loc_000914A7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00091440; /* jl: less (signed <) */

loc_000914AC: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000914C0
 * Original: 0x000914C0 - 0x0009155F (159 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000914C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000914C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000914CFu); RECOMP_ABI_CALL(0x00027740u, sub_00027740); /* call 0x00027740 */

loc_000914CF: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091548; /* je: equal / zero */

loc_000914D7: ;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000914E1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000914E1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091551; /* je: equal / zero */

loc_000914E7: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000914EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000914EE: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0009153A; /* je: equal / zero */

loc_0009150D: ;
    ecx = esi + 0x100;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0009151Bu); RECOMP_ABI_CALL(0x00039160u, sub_00039160); /* call 0x00039160 */

loc_0009151B: ;
    edx = esi + 0x10C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00091529u); RECOMP_ABI_CALL(0x00077020u, sub_00077020); /* call 0x00077020 */

loc_00091529: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xF0); PUSH32(esp, 0x0009153Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009153A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00091548: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00091551: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00091560
 * Original: 0x00091560 - 0x00091EDA (2426 bytes, 656 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091560: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F97B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x88;
    esi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0x0009159Bu); RECOMP_ABI_CALL(0x000A2A10u, sub_000A2A10); /* call 0x000A2A10 */

loc_0009159B: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x54;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0x000915B0u); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000915B0: ;
    ecx = MEM32(0x5BC9D0);
    edx = MEM32(0x5BC9D4);
    eax = MEM32(0x5BC9D8);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0x8C) = ecx;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x7C) = ecx;
    edi = esi + 0x23D;
    ecx = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x9C) = edx;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0x90) = edx;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = eax;
    PUSH32(esp, 0x0009163Au); RECOMP_ABI_CALL(0x00083750u, sub_00083750); /* call 0x00083750 */

loc_0009163A: ;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    PUSH32(esp, 0x00091645u); RECOMP_ABI_CALL(0x00083740u, sub_00083740); /* call 0x00083740 */

loc_00091645: ;
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009164Eu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0009164E: ;
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009168B; /* je: equal / zero */

loc_00091656: ;
    SET_LO8(eax, MEM8(esi + 0x2B8));
    edi = MEM32(esp + 0xB4);
    SET_LO8(eax, LO8(eax) & 0xF7);
    MEM8(esi + 0x2B8) = LO8(eax);
    MEM16(esi + 0x2C0) = LO16(ebx);
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = eax;
    goto loc_00091764;

loc_0009168B: ;
    _fa = (uint32_t)(MEM8(esi + 0x2B9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2B9), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000916A4; /* je: equal / zero */

loc_00091694: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x485874);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000916A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000916A4: ;
    _fa = (uint32_t)(MEM8(esi + 0x2B9)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2B9), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000916BA; /* je: equal / zero */

loc_000916AD: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000916BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000916BA: ;
    SET_LO8(eax, MEM8(esi + 0x2A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    edi = esi + 0x274;
    if (TEST_Z(_fa, _fb)) goto loc_000916E1; /* je: equal / zero */

loc_000916CA: ;
    ecx = edi;
    PUSH32(esp, 0x000916D1u); RECOMP_ABI_CALL(0x0005CBD0u, sub_0005CBD0); /* call 0x0005CBD0 */

loc_000916D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000916E1; /* je: equal / zero */

loc_000916D5: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000916E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000916E1: ;
    edi = MEM32(esp + 0xB4);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00091720u); RECOMP_ABI_CALL(0x00077F90u, sub_00077F90); /* call 0x00077F90 */

loc_00091720: ;
    SET_LO8(ecx, MEM8(esi + 0x2B8));
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEM8(esi + 0x2B8) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0009175B; /* je: equal / zero */

loc_0009173B: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x00091744u); RECOMP_ABI_CALL(0x000A0820u, sub_000A0820); /* call 0x000A0820 */

loc_00091744: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9760)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9760] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0009175B; /* jp: parity */

loc_00091751: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0009175D;

loc_0009175B: ;
    eax = 0; /* xor self */

loc_0009175D: ;
    MEM16(esi + 0x2C0) = LO16(eax);

loc_00091764: ;
    fp_push(MEMF(edi + 0x14)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() + MEMF(esi + 0x34); /* fadd dword ptr [esi + 0x34] */
    eax = esp + 0x64;
    fp_push(MEMF(edi + 0x10)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_top() = fp_top() + MEMF(esi + 0x30); /* fadd dword ptr [esi + 0x30] */
    ecx = esp + 0x3C;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esi + 0x2C); /* fadd dword ptr [esi + 0x2c] */
    ecx = esi;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x20); /* fadd dword ptr [esi + 0x20] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000917B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000917B7: ;
    ecx = esi;
    PUSH32(esp, 0x000917BEu); RECOMP_ABI_CALL(0x00076610u, sub_00076610); /* call 0x00076610 */

loc_000917BE: ;
    ecx = esi;
    PUSH32(esp, 0x000917C5u); RECOMP_ABI_CALL(0x00078CB0u, sub_00078CB0); /* call 0x00078CB0 */

loc_000917C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000917D5; /* je: equal / zero */

loc_000917C9: ;
    MEM16(esi + 0x2C0) = LO16(ebx);
    goto loc_00091EAB;

loc_000917D5: ;
    edx = MEM32(esi + 0x100);
    eax = MEM32(esi + 0x104);
    ecx = MEM32(esi + 0x108);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 4);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000918AA; /* jne: not equal / not zero */

loc_00091802: ;
    eax = MEM32(esi + 0x28C);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00091811u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00091811: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00091857; /* jp: parity */

loc_0009181C: ;
    fp_push(MEMF(esi + 0x258)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7084)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7084] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091857; /* jne: not equal / not zero */

loc_0009182F: ;
    PUSH32(esp, 0x00091834u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00091834: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0009183Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009183B: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    goto loc_0009187D;

loc_00091857: ;
    PUSH32(esp, 0x0009185Cu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0009185C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00091863u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091863: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x258); /* fmul dword ptr [esi + 0x258] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x258); /* fmul dword ptr [esi + 0x258] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x258); /* fmul dword ptr [esi + 0x258] */

loc_0009187D: ;
    fp_top() = fp_top() * MEMF(esp + 0xB8); /* fmul dword ptr [esp + 0xb8] */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0xB8); /* fmul dword ptr [esp + 0xb8] */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0xB8); /* fmul dword ptr [esp + 0xb8] */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000918AA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    SET_LO8(eax, MEM8(esi + 0x2B8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_00091E9F; /* je: equal / zero */

loc_000918DA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = esp;
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0x2C) = esp;
    PUSH32(esp, ecx);
    MEM32(eax + 8) = edx;
    ecx = MEM32(esp + 0x74);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x30) = esp;
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x0009191Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009191D: ;
    PUSH32(esp, 0x00091922u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00091922: ;
    fp_top() = fp_top() - MEMF(esi + 0x24C); /* fsub dword ptr [esi + 0x24c] */
    _fa = (uint32_t)(MEM8(esi + 0x2C3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C3), 1 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0009198F; /* jbe: below or equal (unsigned <=) */

loc_00091931: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA844)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3ca844] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091991; /* jne: not equal / not zero */

loc_0009193E: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x00091947u); RECOMP_ABI_CALL(0x000A09D0u, sub_000A09D0); /* call 0x000A09D0 */

loc_00091947: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091959; /* je: equal / zero */

loc_0009194B: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x00091954u); RECOMP_ABI_CALL(0x000A09D0u, sub_000A09D0); /* call 0x000A09D0 */

loc_00091954: ;
    eax = ZX8(MEM8(eax));
    goto loc_0009195E;

loc_00091959: ;
    eax = 0x10;

loc_0009195E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x00091968u); RECOMP_ABI_CALL(0x00083730u, sub_00083730); /* call 0x00083730 */

loc_00091968: ;
    edi = MEM32(esi);
    PUSH32(esp, ebx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00091984u); RECOMP_ABI_CALL(0x000837C0u, sub_000837C0); /* call 0x000837C0 */

loc_00091984: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x80); PUSH32(esp, 0x0009198Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009198D: ;
    goto loc_00091991;

loc_0009198F: ;
    fp_pop(); /* fstp st(0) */

loc_00091991: ;
    PUSH32(esp, 0x00091996u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00091996: ;
    MEMF(esi + 0x24C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x20) = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000919AEu); RECOMP_ABI_CALL(0x0002B810u, sub_0002B810); /* call 0x0002B810 */

loc_000919AE: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00091B33; /* je: equal / zero */

loc_000919BB: ;
    _fa = (uint32_t)(MEM8(edi + 0x235)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x235), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091B33; /* je: equal / zero */

loc_000919C8: ;
    ecx = edi;
    PUSH32(esp, 0x000919CFu); RECOMP_ABI_CALL(0x00090FE0u, sub_00090FE0); /* call 0x00090FE0 */

loc_000919CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091B33; /* jne: not equal / not zero */

loc_000919D7: ;
    ebp = edi + 0x100;
    ecx = ebp;
    PUSH32(esp, 0x000919E4u); RECOMP_ABI_CALL(0x00199BA0u, sub_00199BA0); /* call 0x00199BA0 */

loc_000919E4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091A06; /* je: equal / zero */

loc_000919F1: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091C1D; /* jne: not equal / not zero */

loc_00091A06: ;
    eax = ZX8(MEM8(edi + 0x2C3));
    fp_push(MEMF(edi + 0x230)); /* fld float */
    ecx = ZX8(MEM8(esi + 0x2C3));
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x230)); /* fld float */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091B33; /* jne: not equal / not zero */

loc_00091A5D: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(0x5BC9D8);
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    edx = MEM32(0x5BC9D0);
    eax = MEM32(0x5BC9D4);
    PUSH32(esp, ebp);
    fp_top() = fp_top() / MEMF(esp + 0x4C); /* fdiv dword ptr [esp + 0x4c] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x48) = ecx;
    ecx = esp + 0x6C;
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00091AA0u); RECOMP_ABI_CALL(0x00012030u, sub_00012030); /* call 0x00012030 */

loc_00091AA0: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x6C;
    fp_top() = fp_top() / MEMF(esp + 0x50); /* fdiv dword ptr [esp + 0x50] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00091ABCu); RECOMP_ABI_CALL(0x00012030u, sub_00012030); /* call 0x00012030 */

loc_00091ABC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    fp_top() = fp_top() / MEMF(esp + 0x50); /* fdiv dword ptr [esp + 0x50] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00091AD4u); RECOMP_ABI_CALL(0x00012030u, sub_00012030); /* call 0x00012030 */

loc_00091AD4: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    fp_top() = fp_top() / MEMF(esp + 0x50); /* fdiv dword ptr [esp + 0x50] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00091AF2u); RECOMP_ABI_CALL(0x00012030u, sub_00012030); /* call 0x00012030 */

loc_00091AF2: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00091AFEu); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_00091AFE: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xBF800000u);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00091B0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091B0E: ;
    ecx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00091B2Fu); RECOMP_ABI_CALL(0x00199BA0u, sub_00199BA0); /* call 0x00199BA0 */

loc_00091B2F: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00091B33: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091C1D; /* jne: not equal / not zero */

loc_00091B48: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CFC80); /* fmul dword ptr [0x3cfc80] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00091B81; /* jp: parity */

loc_00091B7B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_00091B81: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x3C); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x40); /* fsub dword ptr [esp + 0x40] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00091C1D: ;
    _fa = (uint32_t)(MEM32(esi + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC0), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00091D41; /* jne: not equal / not zero */

loc_00091C29: ;
    eax = MEM32(esi + 4);
    eax = eax >> 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091D41; /* jne: not equal / not zero */

loc_00091C37: ;
    _fa = (uint32_t)(MEM16(esi + 0x2C0)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2C0), 3 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00091C56; /* jg: greater (signed >) */

loc_00091C41: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8388)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8388] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00091D41; /* jp: parity */

loc_00091C56: ;
    edx = MEM32(esi);
    eax = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00091C62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091C62: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00091C81; /* je: equal / zero */

loc_00091C73: ;
    eax = MEM32(edi);
    ecx = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00091C7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091C7F: ;
    goto loc_00091C88;

loc_00091C81: ;
    eax = esp + 0x8C;

loc_00091C88: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    MEM32(esp + 0x34) = 0;
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091CD5; /* jne: not equal / not zero */

loc_00091CC4: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00091CCDu); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00091CCD: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    goto loc_00091CE3;

loc_00091CD5: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    MEM32(esp + 0x30) = 0;

loc_00091CE3: ;
    fp_top() = fp_top() * MEMF(0x3CA9EC); /* fmul dword ptr [0x3ca9ec] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA9EC); /* fmul dword ptr [0x3ca9ec] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA9EC); /* fmul dword ptr [0x3ca9ec] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00091D41: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091D86; /* jne: not equal / not zero */

loc_00091D52: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_00091D86: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00091DBC; /* jp: parity */

loc_00091D97: ;
    edx = MEM32(0x5BC9D0);
    eax = MEM32(0x5BC9D4);
    ecx = MEM32(0x5BC9D8);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = 0;

loc_00091DBC: ;
    _fa = (uint32_t)(MEM8(esi + 0x235)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x235), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091E8C; /* je: equal / zero */

loc_00091DC9: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CAA50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3caa50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091E8C; /* jne: not equal / not zero */

loc_00091DDE: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x20); /* fdiv dword ptr [esp + 0x20] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = MEMF(esp + 0x20) - fp_top(); /* fsubr dword ptr [esp + 0x20] */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CFC1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3cfc1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091E8A; /* jne: not equal / not zero */

loc_00091E1F: ;
    fp_top() = fp_top() * MEMF(0x3C8324); /* fmul dword ptr [0x3c8324] */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    ecx = esp + 0x80;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00091E67u); RECOMP_ABI_CALL(0x0023FB90u, sub_0023FB90); /* call 0x0023FB90 */

loc_00091E67: ;
    ecx = esp + 0x7C;
    PUSH32(esp, 0x00091E70u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00091E70: ;
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 1);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00091E88u); RECOMP_ABI_CALL(0x00076420u, sub_00076420); /* call 0x00076420 */

loc_00091E88: ;
    goto loc_00091E9F;

loc_00091E8A: ;
    fp_pop(); /* fstp st(0) */

loc_00091E8C: ;
    ecx = esi;
    PUSH32(esp, 0x00091E93u); RECOMP_ABI_CALL(0x00074950u, sub_00074950); /* call 0x00074950 */

loc_00091E93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091E9F; /* je: equal / zero */

loc_00091E97: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00091E9Fu); RECOMP_ABI_CALL(0x00075180u, sub_00075180); /* call 0x00075180 */

loc_00091E9F: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00091EABu); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_00091EAB: ;
    ecx = esp + 0x28;
    MEM32(esp + 0xAC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00091EBFu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_00091EBF: ;
    ecx = MEM32(esp + 0xA4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xA0;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00091EE0
 * Original: 0x00091EE0 - 0x000920BE (478 bytes, 154 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00091EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00091EE0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00091F1D; /* je: equal / zero */

loc_00091EF1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00091EF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091EF7: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091F1D; /* je: equal / zero */

loc_00091F15: ;
    ecx = esi;
    MEM32(esp + 0x10) = ecx;
    goto loc_00091F29;

loc_00091F1D: ;
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);

loc_00091F29: ;
    edx = MEM32(ebx + 4);
    edx = edx >> 0x15;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091FDE; /* je: equal / zero */

loc_00091F38: ;
    eax = MEM32(ebx + 0x2B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = ebx + 0x2B0;
    if (TEST_Z(_fa, _fb)) goto loc_00091FDE; /* je: equal / zero */

loc_00091F4C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091FF0; /* je: equal / zero */

loc_00091F54: ;
    eax = MEM32(ecx + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    eax = eax * 4 + 0x48585C;
    if (CMP_NE(_fa, _fb)) goto loc_00091F6B; /* jne: not equal / not zero */

loc_00091F66: ;
    eax = 0x498D90;

loc_00091F6B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00091FF0; /* jne: not equal / not zero */

loc_00091F72: ;
    PUSH32(esp, 0x00091F77u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_00091F77: ;
    esi = eax;
    ebp = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0x00091F82u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_00091F82: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x5C); PUSH32(esp, 0x00091F88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091F88: ;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0x00091F91u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_00091F91: ;
    ebp = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00091F9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091F9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00092045; /* jbe: below or equal (unsigned <=) */

loc_00091FA5: ;
    _fa = (uint32_t)(MEM8(ebx + 0x2B8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x2B8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091FDA; /* je: equal / zero */

loc_00091FAE: ;
    PUSH32(esp, 0x00091FB3u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_00091FB3: ;
    esi = eax;
    PUSH32(esp, 0x00091FBAu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_00091FBA: ;
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00091FCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091FCA: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    ecx = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00091FDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00091FDA: ;
    esi = MEM32(esp + 0x1C);

loc_00091FDE: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00091FE6u); RECOMP_ABI_CALL(0x00078D40u, sub_00078D40); /* call 0x00078D40 */

loc_00091FE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00091FF0: ;
    esi = MEM32(esi + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00091FFE; /* jne: not equal / not zero */

loc_00091FF7: ;
    ebp = 0x3C806C;
    goto loc_00092014;

loc_00091FFE: ;
    PUSH32(esp, 0x00092003u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00092003: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    ebp = ecx + eax + 0x4008;

loc_00092014: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092021; /* jne: not equal / not zero */

loc_0009201A: ;
    eax = 0x3C806C;
    goto loc_00092037;

loc_00092021: ;
    PUSH32(esp, 0x00092026u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00092026: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x4008;

loc_00092037: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009203Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009203E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00091FDA; /* je: equal / zero */

loc_00092045: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000920B2; /* je: equal / zero */

loc_0009204D: ;
    _fa = (uint32_t)(MEM8(eax + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000920B2; /* jne: not equal / not zero */

loc_00092056: ;
    PUSH32(esp, 0x0009205Bu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0009205B: ;
    esi = eax;
    PUSH32(esp, 0x00092062u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00092062: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esp = esp - 0x10;
    edi = eax;
    eax = esp;
    ecx = 0x3F4CCCCD;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x3F800000;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x899);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00092092u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092092: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x20); PUSH32(esp, 0x00092098u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092098: ;
    eax = MEM32(ebx + 0x2B4);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x000920A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000920A9: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x000920B2u); RECOMP_ABI_CALL(0x00031CE0u, sub_00031CE0); /* call 0x00031CE0 */

loc_000920B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000920C0
 * Original: 0x000920C0 - 0x00092189 (201 bytes, 68 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000920C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000920C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x000920D8u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000920D8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092181; /* je: equal / zero */

loc_000920E2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000920E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000920E8: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092181; /* je: equal / zero */

loc_00092106: ;
    fp_push(MEMF(edi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092181; /* jne: not equal / not zero */

loc_00092119: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092181; /* jne: not equal / not zero */

loc_0009212C: ;
    _fa = (uint32_t)(MEM8(esi + 0x235)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x235), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092155; /* jne: not equal / not zero */

loc_00092135: ;
    fp_push(MEMF(esi + 0x3B0)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C83B0); /* fadd dword ptr [0x3c83b0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0009214Au); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0009214A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00092181; /* jp: parity */

loc_00092155: ;
    esi = MEM32(esp + 0x1C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0009216Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009216C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x198); PUSH32(esp, 0x00092181u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092181: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00092190
 * Original: 0x00092190 - 0x000921B1 (33 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092190(void)
{

loc_00092190: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    esp = esp - 8;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000921AEu); RECOMP_ABI_CALL(0x000920C0u, sub_000920C0); /* call 0x000920C0 */

loc_000921AE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000921C0
 * Original: 0x000921C0 - 0x0009221F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000921C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000921C0: ;
    edx = ecx;
    eax = MEM32(edx + 0xD0C);
    eax = MEM32(edx + eax * 4 + 0xC84);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xD14;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xD0C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(edx + 0xD0C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00092209; /* jl: less (signed <) */

loc_000921FF: ;
    MEM32(edx + 0xD0C) = 0;

loc_00092209: ;
    MEM32(edx + 0xD10) = MEM32(edx + 0xD10) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xD10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xD18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xD18) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00092220
 * Original: 0x00092220 - 0x00092963 (1859 bytes, 564 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092220(void)
{
    uint32_t secondary_victim_handle = 0;
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092220: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x94);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0009223Du); RECOMP_ABI_CALL(0x0002B720u, xml1_guest_damage_record_copy); /* call 0x0002B720 */

loc_0009223D: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009224F; /* je: equal / zero */

loc_00092247: ;
    MEM8(esp + 0xA4) = 1;

loc_0009224F: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092956; /* jne: not equal / not zero */

loc_00092266: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0009226Eu); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_0009226E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092956; /* jne: not equal / not zero */

loc_00092276: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092956; /* jne: not equal / not zero */

loc_00092281: ;
    SET_LO8(eax, MEM8(esp + 0xAC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000922D3; /* je: equal / zero */

loc_0009228C: ;
    _fa = (uint32_t)(MEM8(esp + 0x80)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x80), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000922D3; /* jne: not equal / not zero */

loc_00092296: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0009229Fu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0009229F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000922A5u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_000922A5: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000922D3; /* je: equal / zero */

loc_000922AE: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000922C3u); RECOMP_ABI_CALL(0x0005CCA0u, sub_0005CCA0); /* call 0x0005CCA0 */

loc_000922C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000922D3u); RECOMP_ABI_CALL(0x00029FD0u, sub_00029FD0); /* call 0x00029FD0 */

loc_000922D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000922D9u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_000922D9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009239E; /* jne: not equal / not zero */

loc_000922E4: ;
    eax = MEM32(esp + 0x30);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009230A; /* jne: not equal / not zero */

loc_000922F1: ;
    PUSH32(esp, 0x000922F6u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000922F6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000922FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000922FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009230A; /* jne: not equal / not zero */

loc_00092301: ;
    raven_native_damage_set(0x92301, esp + 0x20, 0, SMEM16(esp + 0x28));
    MEM16(esp + 0x28) = 0;
    goto loc_00092328;

loc_0009230A: ;
    _fa = (uint32_t)(MEM8(esp + 0x80)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x80), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092320; /* je: equal / zero */

loc_00092314: ;
    raven_native_damage_scale(0x92314, esp + 0x20, 3, SMEM16(esp + 0x28));
    eax = MEM32(esp + 0x28);
    eax = eax + eax * 2;
    MEM16(esp + 0x28) = LO16(eax);

loc_00092320: ;
    _fa = (uint32_t)(MEM16(esp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x28), 0 (16-bit) */
    if (raven_native_damage_amount(esp + 0x20, SMEM16(esp + 0x28)) > 0.0) goto loc_00092337; /* jg: greater (signed >) */

loc_00092328: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 0x38), 0x800100 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092337; /* je: equal / zero */

loc_00092332: ;
    raven_native_damage_set(0x92332, esp + 0x20, (int16_t)edi, SMEM16(esp + 0x28));
    MEM16(esp + 0x28) = LO16(edi);

loc_00092337: ;
    if (MEM8(ebx + 0x56)) secondary_victim_handle = MEM32(esi + 0x1C);
    SET_LO8(eax, MEM8(ebx + 0x55));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00092386; /* jbe: below or equal (unsigned <=) */

loc_0009233E: ;
    ecx = ebx;
    PUSH32(esp, 0x00092345u); RECOMP_ABI_CALL(0x0001CD30u, sub_0001CD30); /* call 0x0001CD30 */

loc_00092345: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092386; /* je: equal / zero */

loc_00092349: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00092355u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_00092355: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092386; /* je: equal / zero */

loc_0009235E: ;
    PUSH32(esp, 0);
    edx = ebx + 0x4C;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0009236Bu); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_0009236B: ;
    ecx = eax;
    PUSH32(esp, 0x00092372u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_00092372: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092386; /* je: equal / zero */

loc_00092376: ;
    SET_LO8(ecx, MEM8(ebx + 0x55));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00092386u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092386: ;
    if (secondary_victim_handle) raven_secondary_victim_dispatch(ebx, secondary_victim_handle);
    raven_xml1_trigger_hurt_attempt(esi, esp + 0x20);
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0009239Eu); RECOMP_ABI_CALL(0x00029DC0u, sub_00029DC0); /* call 0x00029DC0 */

loc_0009239E: ;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000923B2; /* je: equal / zero */

loc_000923A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x204)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x204) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00092956; /* je: equal / zero */

loc_000923B2: ;
    edx = ZX8(MEM8(esi + 0x2C2));
    _fa = (uint32_t)(MEM16(esp + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x34), LO16(edx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000923D4; /* jl: less (signed <) */

loc_000923C0: ;
    ecx = esi;
    PUSH32(esp, 0x000923C7u); RECOMP_ABI_CALL(0x00090EA0u, sub_00090EA0); /* call 0x00090EA0 */

loc_000923C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000923D4; /* jne: not equal / not zero */

loc_000923CB: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C2), 0xA (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000923E4; /* jb: below (unsigned <) */

loc_000923D4: ;
    _fa = (uint32_t)(MEM16(esp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0x7D00) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x28), 0x7D00 (16-bit) */
    if (raven_native_damage_amount(esp + 0x20, SMEM16(esp + 0x28)) == 32000.0) goto loc_000923E4; /* je: equal / zero */

loc_000923DD: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000923F7; /* jne: not equal / not zero */

loc_000923E4: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009241A; /* je: equal / zero */

loc_000923F7: ;
    SET_LO8(eax, MEM8(esi + 0x2C3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00092545; /* jae: above or equal (unsigned >=) */

loc_00092405: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM16(esp + 0x34)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x34), LO16(eax) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00092545; /* jl: less (signed <) */

loc_00092413: ;
    raven_native_damage_set(0x92413, esp + 0x20, 0, SMEM16(esp + 0x28));
    MEM16(esp + 0x28) = 0;

loc_0009241A: ;
    PUSH32(esp, 0x0009241Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0009241F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00092429u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092429: ;
    xml1_bishop_trigger_contact(esi, MEM32(esp + 0x20));
    MEMF(esi + 0x250) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00092441u); RECOMP_ABI_CALL(0x00027330u, sub_00027330); /* call 0x00027330 */

loc_00092441: ;
    PUSH32(esp, 0x00092446u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00092446: ;
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00092455u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092455: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0009245Eu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0009245E: ;
    ebp = eax;
    SET_LO8(ebx, 0x10);
    PUSH32(esp, 0x00092467u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00092467: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    if (TEST_Z(_fa, _fb)) goto loc_000925C9; /* je: equal / zero */

loc_00092472: ;
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0009247Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009247E: ;
    ecx = esi;
    PUSH32(esp, 0x00092485u); RECOMP_ABI_CALL(0x00090FE0u, sub_00090FE0); /* call 0x00090FE0 */

loc_00092485: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000925D6; /* jne: not equal / not zero */

loc_0009248D: ;
    _fa = (uint32_t)(MEM16(esp + 0x2A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x2A), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000925D6; /* je: equal / zero */

loc_00092499: ;
    eax = MEM32(ebp);
    ecx = esp + 0x84;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000924A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000924A9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000924BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000924BE: ;
    ecx = eax;
    PUSH32(esp, 0x000924C5u); RECOMP_ABI_CALL(0x00013C60u, sub_00013C60); /* call 0x00013C60 */

loc_000924C5: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000924CEu); RECOMP_ABI_CALL(0x00074320u, sub_00074320); /* call 0x00074320 */

loc_000924CE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000925D6; /* jne: not equal / not zero */

loc_000924DF: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x10) = 0x3F800000;
    PUSH32(esp, 0x000924F0u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000924F0: ;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, MEM8(esi + 0x2C3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00092511; /* jbe: below or equal (unsigned <=) */

loc_000924FC: ;
    edx = ZX8(LO8(eax));
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = MEMF(0x3C9404) / fp_top(); /* fdivr dword ptr [0x3c9404] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_00092511: ;
    _fa = (uint32_t)(MEM8(esp + 0x38)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x38), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092575; /* je: equal / zero */

loc_00092517: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CFC20); /* fmul dword ptr [0x3cfc20] */
    goto loc_0009257F;

loc_00092545: ;
    PUSH32(esp, 0x0009254Au); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_0009254A: ;
    ecx = MEM32(esp + 0xA4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00092568u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092568: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x8C;
    esp += 20; return; /* ret 16 */

loc_00092575: ;
    fp_push(MEMF(0x3CFC14)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_0009257F: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x2A);
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    fp_top() = fp_top() * (double)SMEM32(esp + 0x14); /* fimul dword ptr [esp + 0x14] */
    ecx = esi;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000925B6u); RECOMP_ABI_CALL(0x00039160u, sub_00039160); /* call 0x00039160 */

loc_000925B6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x000925C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000925C7: ;
    goto loc_000925D6;

loc_000925C9: ;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000925D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000925D6: ;
    _fa = (uint32_t)(MEM16(esp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x28), 0 (16-bit) */
    if (raven_native_damage_amount(esp + 0x20, SMEM16(esp + 0x28)) != 0.0) goto loc_000925EF; /* jne: not equal / not zero */

loc_000925DE: ;
    PUSH32(esp, 0x000925E3u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000925E3: ;
    ecx = MEM32(esp + 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    goto loc_000925FE;

loc_000925EF: ;
    PUSH32(esp, 0x000925F4u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000925F4: ;
    edx = MEM32(esp + 0xA4);
    PUSH32(esp, edx);
    PUSH32(esp, 0);

loc_000925FE: ;
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00092612u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092612: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00092618u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_00092618: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092626; /* jne: not equal / not zero */

loc_0009261F: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009266F; /* je: equal / zero */

loc_00092626: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0009262Cu); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_0009262C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009264A; /* jne: not equal / not zero */

loc_00092633: ;
    PUSH32(esp, 0x00092638u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00092638: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0009263Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009263F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009264A; /* jne: not equal / not zero */

loc_00092643: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009266F; /* je: equal / zero */

loc_0009264A: ;
    raven_native_damage_observe(0x9264A, esp + 0x20, SMEM16(esp + 0x28));
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    fp_push(MEMF(esi + 0x240)); /* fld float */
    eax = MEM32(esi);
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    fp_push(raven_native_damage_amount(esp + 0x24, SMEM32(esp + 0x14))); /* imported float or native fild */
    fp_top() = fp_st1() - fp_top(); /* fsubr st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x0009266Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009266F: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000928F6; /* jp: parity */

loc_00092686: ;
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x0009269Eu); RECOMP_ABI_CALL(0x00029DC0u, sub_00029DC0); /* call 0x00029DC0 */

loc_0009269E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1AC); PUSH32(esp, 0x000926A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000926A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092920; /* jne: not equal / not zero */

loc_000926B0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x246);
    fp_push(MEMF(esi + 0x240)); /* fld float */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFCEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFCEu (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFCEu;
    if (CMP_G(_fas, _fbs)) goto loc_000926D0; /* jg: greater (signed >) */

loc_000926CC: ;
    MEM32(esp + 0x10) = eax;

loc_000926D0: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000927BD; /* jp: parity */

loc_000926E3: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000926EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000926EF: ;
    edi = esi + 0x270;
    ecx = edi;
    PUSH32(esp, 0x000926FCu); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000926FC: ;
    edx = eax + 1;
    /* nop */

loc_00092700: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092700; /* jne: not equal / not zero */

loc_00092707: ;
    eax = eax - edx;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_0009272A; /* je: equal / zero */

loc_0009270F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0009271Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009271A: ;
    PUSH32(esp, 0x3C806C);
    ecx = esi + 0x268;
    PUSH32(esp, 0x0009272Au); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0009272A: ;
    edi = esi + 0x26C;
    ecx = edi;
    PUSH32(esp, 0x00092737u); RECOMP_ABI_CALL(0x0006DF90u, sub_0006DF90); /* call 0x0006DF90 */

loc_00092737: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009274B; /* je: equal / zero */

loc_0009273B: ;
    PUSH32(esp, 0x3C806C);
    ecx = esi + 0x260;
    PUSH32(esp, 0x0009274Bu); RECOMP_ABI_CALL(0x0006E0A0u, sub_0006E0A0); /* call 0x0006E0A0 */

loc_0009274B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00092757u); RECOMP_ABI_CALL(0x0006DFD0u, sub_0006DFD0); /* call 0x0006DFD0 */

loc_00092757: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009276D; /* je: equal / zero */

loc_0009275B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    ecx = esi + 0x260;
    PUSH32(esp, 0x0009276Du); RECOMP_ABI_CALL(0x0006E100u, sub_0006E100); /* call 0x0006E100 */

loc_0009276D: ;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0009277Eu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0009277E: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0xCF)));
    esp = esp + 8;
    ecx = esp + 0x84;
    edx = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0009279Eu); RECOMP_ABI_CALL(0x0006E070u, sub_0006E070); /* call 0x0006E070 */

loc_0009279E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000927BD; /* je: equal / zero */

loc_000927A2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000927ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000927AC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C806C);
    ecx = esi + 0x260;
    PUSH32(esp, 0x000927BDu); RECOMP_ABI_CALL(0x0006E170u, sub_0006E170); /* call 0x0006E170 */

loc_000927BD: ;
    SET_LO16(ecx, ZX8(MEM8(esi + 0xCF)));
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esi + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000927DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000927DB: ;
    PUSH32(esp, eax);
    ecx = esi + 0x260;
    PUSH32(esp, 0x000927E7u); RECOMP_ABI_CALL(0x0006DED0u, sub_0006DED0); /* call 0x0006DED0 */

loc_000927E7: ;
    edx = MEM32(esi);
    eax = esi + 0x268;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000927F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000927F8: ;
    PUSH32(esp, 0);
    ecx = esi + 0x264;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00092808u); RECOMP_ABI_CALL(0x00027F30u, sub_00027F30); /* call 0x00027F30 */

loc_00092808: ;
    _fa = (uint32_t)(MEM8(esi + 0xC8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC8), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009281D; /* je: equal / zero */

loc_00092810: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x0009281Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009281D: ;
    SET_LO8(eax, MEM8(esi + 0x2B8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009283B; /* je: equal / zero */

loc_00092827: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x00092836u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092836: ;
    goto loc_00092920;

loc_0009283B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092869; /* je: equal / zero */

loc_0009283F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2BE);
    edx = MEM32(esi);
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0009285Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009285F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B0); PUSH32(esp, 0x00092869u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092869: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, ecx);
    eax = esp;
    if (TEST_Z(_fa, _fb)) goto loc_00092881; /* je: equal / zero */

loc_00092870: ;
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax) = ecx;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B8); PUSH32(esp, 0x0009287Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009287F: ;
    goto loc_00092891;

loc_00092881: ;
    MEM32(eax) = 0;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1B8); PUSH32(esp, 0x00092891u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092891: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2BE);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000928EB; /* jne: not equal / not zero */

loc_000928B1: ;
    _fa = (uint32_t)(MEM8(esi + 0x2B8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2B8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000928EB; /* je: equal / zero */

loc_000928BA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x3E4CCCCD);
    fp_top() = fp_top() - MEMF(0x3C8828); /* fsub dword ptr [0x3c8828] */
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000928DEu); RECOMP_ABI_CALL(0x00026D10u, sub_00026D10); /* call 0x00026D10 */

loc_000928DE: ;
    esp = esp + 4;
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000928EBu); RECOMP_ABI_CALL(0x00075550u, sub_00075550); /* call 0x00075550 */

loc_000928EB: ;
    PUSH32(esp, 9);
    ecx = esi;
    PUSH32(esp, 0x000928F4u); RECOMP_ABI_CALL(0x000757B0u, sub_000757B0); /* call 0x000757B0 */

loc_000928F4: ;
    goto loc_00092920;

loc_000928F6: ;
    SET_LO16(edx, ZX8(MEM8(esi + 0xCF)));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esi + 0x2C;
    ecx = esi;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00092914u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092914: ;
    PUSH32(esp, eax);
    ecx = esi + 0x25C;
    PUSH32(esp, 0x00092920u); RECOMP_ABI_CALL(0x0006DED0u, sub_0006DED0); /* call 0x0006DED0 */

loc_00092920: ;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009292E; /* je: equal / zero */

loc_00092928: ;
    MEM32(esi + 0x204) = eax;

loc_0009292E: ;
    PUSH32(esp, 0x00092933u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00092933: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0009293Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009293A: ;
    PUSH32(esp, 0x0009293Fu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0009293F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00092946u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092946: ;
    raven_native_damage_copy_back(esp + 0x20, MEM32(esp + 0xA0));
    SET_LO16(eax, MEM16(esp + 0x28));
    ecx = MEM32(esp + 0xA0);
    MEM16(ecx + 8) = LO16(eax);

loc_00092956: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x8C;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00092970
 * Original: 0x00092970 - 0x00092B53 (483 bytes, 145 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00092970: ;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x48D8E8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x184); PUSH32(esp, 0x00092989u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092989: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092B47; /* jne: not equal / not zero */

loc_00092991: ;
    edi = MEM32(esp + 0x94);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092B47; /* je: equal / zero */

loc_000929A0: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000929A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000929A6: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092B47; /* je: equal / zero */

loc_000929C8: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C2)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C2), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00092B47; /* jae: above or equal (unsigned >=) */

loc_000929D5: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092B47; /* jne: not equal / not zero */

loc_000929EC: ;
    eax = MEM32(esi + 4);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092B47; /* jne: not equal / not zero */

loc_000929F9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00092A03u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092A03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092B47; /* je: equal / zero */

loc_00092A0B: ;
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00092A17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092A17: ;
    edx = MEM32(esi);
    ebx = eax;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00092A25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092A25: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00092A3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092A3A: ;
    edx = MEM32(edi);
    ebx = eax;
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00092A48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092A48: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    PUSH32(esp, esi);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00092A57u); RECOMP_ABI_CALL(0x0002F590u, sub_0002F590); /* call 0x0002F590 */

loc_00092A57: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = eax;
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    esp = esp + 4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00092AA3; /* jnp: not parity */

loc_00092A6D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092A85; /* jne: not equal / not zero */

loc_00092A71: ;
    ecx = ZX8(MEM8(esi + 0x2C3));
    edx = ZX8(MEM8(edi + 0x2C3));
    ecx = ecx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00092AA3; /* jg: greater (signed >) */

loc_00092A85: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C977C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c977c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092AA3; /* je: equal / zero */

loc_00092A96: ;
    _fa = (uint32_t)(MEM8(edi + 0x2C3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x2C3), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00092B47; /* jbe: below or equal (unsigned <=) */

loc_00092AA3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esp + 0x58;
    PUSH32(esp, 0x00092AD1u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_00092AD1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi;
    MEM16(esp + 0x44) = 0x7D00;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00092AEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092AED: ;
    ecx = esi;
    PUSH32(esp, 0x00092AF4u); RECOMP_ABI_CALL(0x00090FE0u, sub_00090FE0); /* call 0x00090FE0 */

loc_00092AF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092B47; /* jne: not equal / not zero */

loc_00092AF8: ;
    PUSH32(esp, 0x00092AFDu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00092AFD: ;
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3CDAEC); /* fmul dword ptr [0x3cdaec] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00092B12u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00092B12: ;
    fp_top() = fp_top() * MEMF(0x3CDAEC); /* fmul dword ptr [0x3cdaec] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00092B21u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00092B21: ;
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() * MEMF(0x3CDAEC); /* fmul dword ptr [0x3cdaec] */
    edx = MEM32(esp + 0xC);
    eax = esp + 0x14;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00092B47u); RECOMP_ABI_CALL(0x00039160u, sub_00039160); /* call 0x00039160 */

loc_00092B47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x84;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00092B60
 * Original: 0x00092B60 - 0x00093142 (1506 bytes, 431 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00092B60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00092B60: ;
    esp = esp - 0xF8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x100);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0x00092B80u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00092B80: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092BAA; /* je: equal / zero */

loc_00092B86: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00092B8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092B8C: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092BAC; /* jne: not equal / not zero */

loc_00092BAA: ;
    edi = 0; /* xor self */

loc_00092BAC: ;
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = ebx;
    PUSH32(esp, 0x00092BB9u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00092BB9: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092BEA; /* je: equal / zero */

loc_00092BBF: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00092BC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092BC6: ;
    edx = MEM32(0x4D737C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x1C) = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092BF2; /* jne: not equal / not zero */

loc_00092BEA: ;
    MEM32(esp + 0x1C) = 0;

loc_00092BF2: ;
    fp_push(MEMF(esp + 0x110)); /* fld float */
    SET_LO8(ebx, MEM8(esi + 0x2A0));
    fp_top() = fp_top() * MEMF(esp + 0x110); /* fmul dword ptr [esp + 0x110] */
    SET_LO8(eax, MEM8(esi + 0x2B8));
    fp_push(MEMF(esp + 0x118)); /* fld float */
    SET_LO8(ebx, LO8(ebx) >> 1);
    fp_top() = fp_top() * MEMF(esp + 0x118); /* fmul dword ptr [esp + 0x118] */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x114)); /* fld float */
    MEM8(esp + 0x13) = 0;
    fp_top() = fp_top() * MEMF(esp + 0x114); /* fmul dword ptr [esp + 0x114] */
    MEM8(esp + 0x12) = 0;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_NZ(_fa, _fb)) goto loc_00093135; /* jne: not equal / not zero */

loc_00092C49: ;
    SET_LO8(eax, MEM8(0x4BFD29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092C8A; /* je: equal / zero */

loc_00092C52: ;
    eax = MEM32(esi + 4);
    eax = eax >> 3;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092C8A; /* jne: not equal / not zero */

loc_00092C5C: ;
    _fa = (uint32_t)(MEM8(esi + 0x235)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x235), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092C8A; /* je: equal / zero */

loc_00092C65: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092C8A; /* jne: not equal / not zero */

loc_00092C69: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x110);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00092C7Au); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_00092C7A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092C8A; /* jne: not equal / not zero */

loc_00092C81: ;
    MEM8(esi + 0x234) = MEM8(esi + 0x234) | 4;
    SET_LO8(ebx, 1);

loc_00092C8A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    ebp = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x60;
    MEM32(eax) = ebp;
    PUSH32(esp, 0x00092CB3u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_00092CB3: ;
    edx = MEM32(esi + 0x28C);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00092CC2u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00092CC2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00092D8B; /* jp: parity */

loc_00092CD1: ;
    SET_LO8(eax, MEM8(esi + 0x2A0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    ebp = esi + 0x274;
    if (TEST_Z(_fa, _fb)) goto loc_00092CF1; /* je: equal / zero */

loc_00092CE1: ;
    ecx = ebp;
    PUSH32(esp, 0x00092CE8u); RECOMP_ABI_CALL(0x0005CBD0u, sub_0005CBD0); /* call 0x0005CBD0 */

loc_00092CE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_00092CF6; /* jne: not equal / not zero */

loc_00092CF1: ;
    MEM8(esp + 0x13) = 0;

loc_00092CF6: ;
    _fa = (uint32_t)(MEM8(ebp + 0x2C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x2C), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092D0C; /* je: equal / zero */

loc_00092CFC: ;
    ecx = ebp;
    PUSH32(esp, 0x00092D03u); RECOMP_ABI_CALL(0x0005CBD0u, sub_0005CBD0); /* call 0x0005CBD0 */

loc_00092D03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x12) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_00092D11; /* jne: not equal / not zero */

loc_00092D0C: ;
    MEM8(esp + 0x12) = 0;

loc_00092D11: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092D4A; /* jne: not equal / not zero */

loc_00092D22: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00092D2Cu); RECOMP_ABI_CALL(0x0005CC00u, sub_0005CC00); /* call 0x0005CC00 */

loc_00092D2C: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092D41; /* je: equal / zero */

loc_00092D34: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00092D3Du); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_00092D3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092D51; /* jne: not equal / not zero */

loc_00092D41: ;
    eax = MEM32(esi + 0x1C);
    MEM32(esp + 0x34) = eax;
    goto loc_00092D51;

loc_00092D4A: ;
    MEM16(esp + 0x3C) = 0;

loc_00092D51: ;
    PUSH32(esp, 0x00092D56u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00092D56: ;
    fp_push(MEMF(esi + 0x290)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    edx = MEM32(eax);
    ecx = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00092D70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092D70: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00092E7B; /* jp: parity */

loc_00092D7F: ;
    MEM16(esp + 0x3C) = 0;
    goto loc_00092E7B;

loc_00092D8B: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092E90; /* jne: not equal / not zero */

loc_00092DA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x114);
    eax = esp;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x00092DBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092DBD: ;
    edx = MEM32(esp + 0x110);
    ecx = SX16(LO16(eax));
    eax = MEM32(esp + 0x114);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x118);
    MEM32(esp + 0x28) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00092DF6u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00092DF6: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    MEM32(esp + 0x64) = eax;
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    MEM32(esp + 0x60) = edx;
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092E2D; /* jne: not equal / not zero */

loc_00092E27: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    goto loc_00092E33;

loc_00092E2D: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00092E33: ;
    PUSH32(esp, 0x00092E38u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00092E38: ;
    MEM16(esp + 0x3C) = LO16(eax);
    MEM8(esp + 0x94) = MEM8(esp + 0x94) | 1;
    MEM32(esp + 0x90) = ebp;
    PUSH32(esp, 0x00092E51u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00092E51: ;
    fp_push(MEMF(esi + 0x290)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    edx = MEM32(eax);
    ecx = eax;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00092E6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092E6B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00092E7B; /* jp: parity */

loc_00092E76: ;
    MEM16(esp + 0x3C) = LO16(ebp);

loc_00092E7B: ;
    PUSH32(esp, 0x00092E80u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00092E80: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00092E8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092E8A: ;
    MEMF(esi + 0x290) = (float)fp_top(); fp_pop(); /* fstp */

loc_00092E90: ;
    _fa = (uint32_t)(MEM16(esp + 0x3C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x3C), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093135; /* je: equal / zero */

loc_00092E9C: ;
    eax = MEM32(esp + 0x11C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092EC2; /* je: equal / zero */

loc_00092EA7: ;
    ecx = esp + 0x11C;
    PUSH32(esp, 0x00092EB3u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_00092EB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092EC2; /* je: equal / zero */

loc_00092EB7: ;
    eax = MEM32(esp + 0x11C);
    MEM32(esp + 0x34) = eax;

loc_00092EC2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092F53; /* jne: not equal / not zero */

loc_00092ECA: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esp + 0xA8;
    PUSH32(esp, 0x00092EDBu); RECOMP_ABI_CALL(0x0002B720u, xml1_guest_damage_record_copy); /* call 0x0002B720 */

loc_00092EDB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00092EE1u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_00092EE1: ;
    edx = MEM32(esp + 0xA8);
    ebp = eax;
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x00092EF3u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_00092EF3: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092F08; /* jne: not equal / not zero */

loc_00092EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092F08; /* je: equal / zero */

loc_00092EFE: ;
    MEM16(esp + 0xAC) = 0x7D00;

loc_00092F08: ;
    SET_LO8(eax, MEM8(esi + 0x2C2));
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM16(esp + 0xB8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0xB8), LO16(ecx) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00092F28; /* jg: greater (signed >) */

loc_00092F1B: ;
    SET_LO16(edx, ZX8(LO8(eax)));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + 0xB8) = LO16(edx);

loc_00092F28: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092F53; /* jne: not equal / not zero */

loc_00092F3B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x00092F53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092F53: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092FA9; /* je: equal / zero */

loc_00092F5B: ;
    ecx = ebx;
    PUSH32(esp, 0x00092F62u); RECOMP_ABI_CALL(0x00090FB0u, sub_00090FB0); /* call 0x00090FB0 */

loc_00092F62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092FA9; /* je: equal / zero */

loc_00092F66: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00092F76; /* jne: not equal / not zero */

loc_00092F6E: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00092FA9; /* je: equal / zero */

loc_00092F76: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esp + 0xA8;
    PUSH32(esp, 0x00092F87u); RECOMP_ABI_CALL(0x0002B720u, xml1_guest_damage_record_copy); /* call 0x0002B720 */

loc_00092F87: ;
    eax = MEM32(esp + 0xAC);
    edx = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    MEM16(esp + 0xAC) = LO16(eax);
    eax = esp + 0xA4;
    ecx = ebx;
    goto loc_00093128;

loc_00092FA9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093135; /* je: equal / zero */

loc_00092FB1: ;
    ecx = edi;
    PUSH32(esp, 0x00092FB8u); RECOMP_ABI_CALL(0x00090FB0u, sub_00090FB0); /* call 0x00090FB0 */

loc_00092FB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093135; /* je: equal / zero */

loc_00092FC0: ;
    edx = MEM32(edi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00092FCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092FCC: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = esp + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00092FDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092FDD: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    edx = MEM32(esi);
    eax = esp + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00092FF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00092FF6: ;
    edx = MEM32(esi);
    ebp = eax;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00093004u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093004: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00093014u); RECOMP_ABI_CALL(0x0002F590u, sub_0002F590); /* call 0x0002F590 */

loc_00093014: ;
    edx = MEM32(edi);
    esp = esp + 4;
    ecx = edi;
    ebp = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00093023u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093023: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093071; /* je: equal / zero */

loc_00093027: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0009306A; /* jnp: not parity */

loc_00093038: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093050; /* jne: not equal / not zero */

loc_0009303C: ;
    eax = ZX8(MEM8(edi + 0x2C3));
    ecx = ZX8(MEM8(esi + 0x2C3));
    eax = eax << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0009306A; /* jg: greater (signed >) */

loc_00093050: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C977C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c977c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009306A; /* je: equal / zero */

loc_00093061: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x2C3), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00093071; /* jbe: below or equal (unsigned <=) */

loc_0009306A: ;
    MEM16(esp + 0x3C) = 0x7D00;

loc_00093071: ;
    _fa = (uint32_t)(MEM8(esi + 0x2A0)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2A0), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093119; /* je: equal / zero */

loc_0009307E: ;
    PUSH32(esp, 0x00093083u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00093083: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0009308Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009308A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093119; /* jne: not equal / not zero */

loc_00093092: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00093098u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_00093098: ;
    ecx = MEM32(esi + 0x274);
    ebp = eax;
    esi = esi + 0x274;
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000930AFu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000930AF: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000930FD; /* jne: not equal / not zero */

loc_000930B8: ;
    PUSH32(esp, 0x000930BDu); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_000930BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093119; /* je: equal / zero */

loc_000930C1: ;
    PUSH32(esp, 0x000930C6u); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_000930C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093119; /* jne: not equal / not zero */

loc_000930CA: ;
    PUSH32(esp, 0x000930CFu); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_000930CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093119; /* jne: not equal / not zero */

loc_000930D3: ;
    ecx = esi;
    PUSH32(esp, 0x000930DAu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000930DA: ;
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x000930E3u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000930E3: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x000930ECu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000930EC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093119; /* jne: not equal / not zero */

loc_000930F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xF8;
    esp += 24; return; /* ret 20 */

loc_000930FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093119; /* je: equal / zero */

loc_00093101: ;
    ecx = ebp;
    PUSH32(esp, 0x00093108u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_00093108: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093119; /* jne: not equal / not zero */

loc_0009310D: ;
    ecx = ebx;
    PUSH32(esp, 0x00093114u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_00093114: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093135; /* je: equal / zero */

loc_00093119: ;
    MEM16(esp + 0x3E) = 0;
    edx = MEM32(edi);
    eax = esp + 0x34;
    ecx = edi;

loc_00093128: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00093135u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093135: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xF8;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00093150
 * Original: 0x00093150 - 0x0009316E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093150(void)
{

loc_00093150: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x260;
    PUSH32(esp, 0x0009315Eu); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_0009315E: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x268) = eax;
    MEM32(esi + 0x264) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093170
 * Original: 0x00093170 - 0x000931C6 (86 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093170(void)
{

loc_00093170: ;
    esp = esp - 0x64;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    esi = ecx;
    eax = esp;
    ecx = esp + 0x30;
    MEM32(eax) = 0;
    PUSH32(esp, 0x000931A5u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_000931A5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM16(esp + 0x1C) = 0x7D00;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x000931C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000931C1: ;
    POP32(esp, esi);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_000931D0
 * Original: 0x000931D0 - 0x0009324F (127 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000931D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000931D0: ;
    if (ecx == 0x4BFD30u) raven_xml1_remove_events_clear_pending(MEM32(esp + 4));
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = ecx << 2;
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax + 0xC80);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0xC80) = edi;
    MEM32(ecx + eax + 0xD14) = MEM32(ecx + eax + 0xD14) & edx;
    ecx = MEM32(eax + 0xD08);
    edx = MEM32(eax + 0xD10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(eax + 0xD08) = ecx;
    MEM32(eax + 0xD10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00093235; /* jl: less (signed <) */

loc_00093224: ;
    MEM32(eax + 0xD08) = 0;
    ecx = 0x1F;
    goto loc_00093236;

loc_00093235: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00093236: ;
    MEM32(eax + ecx * 4 + 0xC84) = esi;
    ecx = MEM32(eax + 0xD18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xD18) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093250
 * Original: 0x00093250 - 0x000932AD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093250: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xD08) = esi;
    MEM32(ecx + 0xD0C) = esi;
    MEM32(ecx + 0xD10) = esi;
    edx = 0; /* xor self */
    goto loc_00093270;

    /* nop */

loc_00093270: ;
    eax = MEM32(ecx + 0xD08);
    edi = MEM32(ecx + 0xD10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(ecx + 0xD08) = eax;
    MEM32(ecx + 0xD10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0009329C; /* jl: less (signed <) */

loc_0009328F: ;
    MEM32(ecx + 0xD08) = esi;
    eax = 0x1F;
    goto loc_0009329D;

loc_0009329C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0009329D: ;
    MEM32(ecx + eax * 4 + 0xC84) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00093270; /* jl: less (signed <) */

loc_000932AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000932B0
 * Original: 0x000932B0 - 0x0009331D (109 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000932B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000932B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F9A1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0009330E; /* je: equal / zero */

loc_000932DF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x30) = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x0009330Eu); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_0009330E: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00093320
 * Original: 0x00093320 - 0x00093864 (1348 bytes, 428 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093320(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093320: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO16(eax, ZX8(MEM8(esi + 0x2C3)));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    edx = MEM32(edi);
    ebp = esi + 0x240;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3CF6C8);
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00093354u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093354: ;
    ebx = esi + 0x246;
    fp_push(MEMF(ebp)); /* fld float */
    PUSH32(esp, 0x00093362u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00093362: ;
    ecx = esi + 0x244;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM16(ebx) = LO16(eax);
    eax = MEM32(edi);
    PUSH32(esp, 0x3CFD68);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00093378u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093378: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CFD5C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00093385u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093385: ;
    eax = MEM32(edi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFD50);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00093396u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093396: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000933A0; /* jbe: below or equal (unsigned <=) */

loc_0009339E: ;
    SET_LO8(eax, 0xA);

loc_000933A0: ;
    MEM8(esi + 0x2C2) = LO8(eax);
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CFD44);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000933B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000933B7: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000933C1; /* jbe: below or equal (unsigned <=) */

loc_000933BF: ;
    SET_LO8(eax, 5);

loc_000933C1: ;
    ebx = esi + 0x248;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x2C3) = LO8(eax);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CECE8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000933DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000933DA: ;
    fp_push(MEMF(ebx)); /* fld float */
    ebp = esi + 0x2BC;
    PUSH32(esp, 0x000933E7u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000933E7: ;
    ecx = esi + 0x2BA;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM16(ebp) = LO16(eax);
    eax = MEM32(edi);
    PUSH32(esp, 0x3CFD34);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000933FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000933FE: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3CFD28);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0009340Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009340B: ;
    eax = MEM32(edi);
    ecx = esi + 0x2BE;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFD1C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0009341Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009341E: ;
    edx = MEM32(edi);
    eax = esi + 0x258;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CFD10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00093431u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093431: ;
    edx = MEM32(edi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CFD08);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00093442u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093442: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009346A; /* je: equal / zero */

loc_00093448: ;
    _fa = (uint32_t)(MEM16(esp + 0x30)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x30), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009346A; /* jne: not equal / not zero */

loc_0009344F: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 8;
    ecx = esi;
    PUSH32(esp, 0x0009345Au); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_0009345A: ;
    eax = MEM32(esi + 4);
    eax = eax | 0x10;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0009346Au); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_0009346A: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CCB84);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00093477u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093477: ;
    SET_LO8(ecx, MEM8(esi + 0x2B8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x2B8) = LO8(ecx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3CFCF8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0009349Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009349F: ;
    SET_LO8(ecx, MEM8(esi + 0x2B8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    SET_LO8(eax, LO8(eax) << 7);
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(esi + 0x2B8) = LO8(eax);
    edx = MEM32(edi);
    PUSH32(esp, 0x3CFCE4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000934C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000934C5: ;
    SET_LO8(ecx, MEM8(esi + 0x2B9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x2B9) = LO8(ecx);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CFCD4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000934E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000934E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009350E; /* je: equal / zero */

loc_000934ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000934F3u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000934F3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000934FE; /* jge: greater or equal (signed >=) */

loc_000934FA: ;
    eax = 0; /* xor self */
    goto loc_00093508;

loc_000934FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00093508; /* jle: less or equal (signed <=) */

loc_00093503: ;
    eax = 5;

loc_00093508: ;
    MEM32(esi + 0x2A8) = eax;

loc_0009350E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CCAD8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0009351Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009351B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093538; /* je: equal / zero */

loc_0009351F: ;
    PUSH32(esp, 0x3CC6B4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0009352Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0009352A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093538; /* jne: not equal / not zero */

loc_00093531: ;
    MEM8(esi + 0x2B8) = MEM8(esi + 0x2B8) & 0xFB;

loc_00093538: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CFCC4);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00093545u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093545: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093562; /* je: equal / zero */

loc_00093549: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093554u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00093554: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093562; /* jne: not equal / not zero */

loc_0009355B: ;
    MEM8(esi + 0x2B8) = MEM8(esi + 0x2B8) | 0x20;

loc_00093562: ;
    eax = MEM32(edi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFCB4);
    ecx = edi;
    MEM32(esp + 0x20) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00093577u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093577: ;
    _fa = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0x7D00) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x18), 0x7D00 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00093587; /* jl: less (signed <) */

loc_00093580: ;
    MEM8(esi + 0x2C2) = 0xA;

loc_00093587: ;
    edx = 0; /* xor self */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = edx;
    eax = esi + 4;
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CAD3C);
    ecx = edi;
    MEM32(esp + 0x34) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000935CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000935CA: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000935D6u); RECOMP_ABI_CALL(0x00066E40u, sub_00066E40); /* call 0x00066E40 */

loc_000935D6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x190); PUSH32(esp, 0x000935E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000935E0: ;
    ebp = MEM32(esi + 0x270);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000935F1; /* jne: not equal / not zero */

loc_000935EA: ;
    eax = 0x3C806C;
    goto loc_00093607;

loc_000935F1: ;
    PUSH32(esp, 0x000935F6u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000935F6: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00093607: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CFCA8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00093614u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093614: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093640; /* je: equal / zero */

loc_0009361A: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093640; /* je: equal / zero */

loc_00093620: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00093626u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00093626: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00093631u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093631: ;
    ecx = eax;
    PUSH32(esp, 0x00093638u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00093638: ;
    MEM32(esi + 0x270) = eax;
    goto loc_00093646;

loc_00093640: ;
    MEM32(esi + 0x270) = ebx;

loc_00093646: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00093650u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093650: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCAD0);
    ecx = esi + 0x26C;
    PUSH32(esp, 0x00093662u); RECOMP_ABI_CALL(0x0006E2D0u, sub_0006E2D0); /* call 0x0006E2D0 */

loc_00093662: ;
    ebp = MEM32(esi + 0x268);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093673; /* jne: not equal / not zero */

loc_0009366C: ;
    eax = 0x3C806C;
    goto loc_00093689;

loc_00093673: ;
    PUSH32(esp, 0x00093678u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093678: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00093689: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CCB78);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00093696u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093696: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000936C2; /* je: equal / zero */

loc_0009369C: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000936C2; /* je: equal / zero */

loc_000936A2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000936A8u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000936A8: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000936B3u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000936B3: ;
    ecx = eax;
    PUSH32(esp, 0x000936BAu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000936BA: ;
    MEM32(esi + 0x268) = eax;
    goto loc_000936C8;

loc_000936C2: ;
    MEM32(esi + 0x268) = ebx;

loc_000936C8: ;
    ebp = MEM32(esi + 0x264);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000936D9; /* jne: not equal / not zero */

loc_000936D2: ;
    eax = 0x3C806C;
    goto loc_000936EF;

loc_000936D9: ;
    PUSH32(esp, 0x000936DEu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000936DE: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000936EF: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CCB68);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000936FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000936FC: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093728; /* je: equal / zero */

loc_00093702: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093728; /* je: equal / zero */

loc_00093708: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0009370Eu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0009370E: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00093719u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093719: ;
    ecx = eax;
    PUSH32(esp, 0x00093720u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00093720: ;
    MEM32(esi + 0x264) = eax;
    goto loc_0009372E;

loc_00093728: ;
    MEM32(esi + 0x264) = ebx;

loc_0009372E: ;
    eax = MEM32(esi);
    ecx = esi;
    ebp = esi + 0x260;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0009373Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009373E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CA9CC);
    ecx = ebp;
    PUSH32(esp, 0x0009374Cu); RECOMP_ABI_CALL(0x0006E2D0u, sub_0006E2D0); /* call 0x0006E2D0 */

loc_0009374C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00093756u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093756: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCAC8);
    ecx = esi + 0x25C;
    PUSH32(esp, 0x00093768u); RECOMP_ABI_CALL(0x0006E2D0u, sub_0006E2D0); /* call 0x0006E2D0 */

loc_00093768: ;
    SET_LO8(eax, MEM8(esi + 0xC8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0009379A; /* je: equal / zero */

loc_00093772: ;
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(esi + 0xC8) = LO8(eax);
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093789; /* jne: not equal / not zero */

loc_00093784: ;
    _fa = (uint32_t)(MEM32(esi + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x78), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0009379A; /* je: equal / zero */

loc_00093789: ;
    MEM32(esi + 0x264) = eax;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0009379Au); RECOMP_ABI_CALL(0x0006E240u, sub_0006E240); /* call 0x0006E240 */

loc_0009379A: ;
    ebp = MEM32(esi + 0x2B0);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000937AB; /* jne: not equal / not zero */

loc_000937A4: ;
    eax = 0x3C806C;
    goto loc_000937C1;

loc_000937AB: ;
    PUSH32(esp, 0x000937B0u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000937B0: ;
    ebp = ebp & 0xFFFFFF;
    ecx = MEM32(eax + ebp * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000937C1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CFC9C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000937CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000937CE: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000937FA; /* je: equal / zero */

loc_000937D4: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000937FA; /* je: equal / zero */

loc_000937DA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000937E0u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000937E0: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000937EBu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000937EB: ;
    ecx = eax;
    PUSH32(esp, 0x000937F2u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000937F2: ;
    MEM32(esi + 0x2B0) = eax;
    goto loc_00093800;

loc_000937FA: ;
    MEM32(esi + 0x2B0) = ebx;

loc_00093800: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CFC90);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0009380Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009380D: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093828; /* je: equal / zero */

loc_00093813: ;
    PUSH32(esp, 0x00093818u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00093818: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00093822u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093822: ;
    MEM32(esi + 0x2B4) = eax;

loc_00093828: ;
    eax = MEM32(edi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x2B8));
    ecx = ecx & 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CFC84);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00093840u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093840: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ebx, MEM8(esi + 0x2B8));
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 1);
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(esi + 0x2B8) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00093870
 * Original: 0x00093870 - 0x00093875 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093870: ;
    g_seh_ebp = ebp; sub_000913E0(); return; /* tail jmp 0x000913E0 */

}

/**
 * sub_00093880
 * Original: 0x00093880 - 0x00093A2B (427 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093880: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F9E2);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x44) = esp;
    PUSH32(esp, 0x000938C7u); RECOMP_ABI_CALL(0x00079B60u, sub_00079B60); /* call 0x00079B60 */

loc_000938C7: ;
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3C9204;
    MEM32(esi + 0x240) = 0x41200000;
    MEM16(esi + 0x244) = LO16(ebx);
    MEM16(esi + 0x246) = 0xA;
    MEM32(esi + 0x248) = ebx;
    MEM32(esi + 0x254) = ebx;
    MEM32(esi + 0x258) = 0x3F800000;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x25C) = ebx;
    MEM32(esi + 0x260) = ebx;
    MEM32(esi + 0x264) = ebx;
    MEM32(esi + 0x268) = ebx;
    MEM32(esi + 0x26C) = ebx;
    MEM32(esi + 0x270) = ebx;
    MEM32(esi + 0x274) = ebx;
    MEM32(esi + 0x278) = ebx;
    MEM32(esi + 0x27C) = ebx;
    MEM32(esi + 0x284) = 0xD;
    MEM32(esi + 0x288) = ebx;
    MEM32(esi + 0x28C) = ebx;
    MEM32(esi + 0x290) = ebx;
    MEM16(esi + 0x294) = LO16(ebx);
    MEM16(esi + 0x296) = LO16(ebx);
    MEM16(esi + 0x298) = LO16(ebx);
    eax = 1;
    MEM32(esi + 0x280) = eax;
    MEM32(esi + 0x29C) = ebx;
    MEM8(esi + 0x2A0) = MEM8(esi + 0x2A0) & 0xE0;
    MEM32(esi + 0x2B0) = ebx;
    edx = MEM32(0x3DD050);
    MEM8(esi + 0x2C3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x2B8));
    MEM32(esi + 0x2B4) = edx;
    SET_LO8(edx, MEM8(esi + 0x2B9));
    SET_LO8(eax, LO8(eax) & 0x96);
    SET_LO8(edx, LO8(edx) & 0xF9);
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(esi + 0x2B9) = LO8(edx);
    MEM16(esi + 0x2BA) = LO16(ebx);
    MEM16(esi + 0x2BC) = LO16(ebx);
    MEM16(esi + 0x2C0) = LO16(ebx);
    MEM8(esi + 0x2C2) = LO8(ebx);
    MEM8(esi + 0x2B8) = LO8(eax);
    MEM32(esi + 0x2A8) = ebx;
    MEM32(esi + 0x2AC) = ebx;
    MEM32(esi + 0x24C) = ebx;
    MEM32(esi + 0x250) = ebx;
    MEM16(esi + 0x2BE) = LO16(ebx);
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFFFFFBu;
    ecx = esi;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x00093A03u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00093A03: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x2A4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00093A15; /* je: equal / zero */

loc_00093A0D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00093A15u); RECOMP_ABI_CALL(0x00093320u, sub_00093320); /* call 0x00093320 */

loc_00093A15: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00093A30
 * Original: 0x00093A30 - 0x00093A6C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093A6A; /* je: equal / zero */

loc_00093A3D: ;
    eax = eax - 0x4BFD30;
    ecx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = 0x4BFD30;
    PUSH32(esp, 0x00093A60u); RECOMP_ABI_CALL(0x000931D0u, sub_000931D0); /* call 0x000931D0 */

loc_00093A60: ;
    MEM32(esi + 0x2A4) = 0;

loc_00093A6A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093A70
 * Original: 0x00093A70 - 0x00093AC7 (87 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093A70: ;
    xml1_raven_trace_blast_delivery(ecx, 0, 2);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093AC3; /* je: equal / zero */

loc_00093A7D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00093A8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093A8C: ;
    eax = MEM32(esi + 0x2A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093AC3; /* je: equal / zero */

loc_00093A96: ;
    eax = eax - 0x4BFD30;
    ecx = eax;
    eax = 0x51EB851F;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = 0x4BFD30;
    PUSH32(esp, 0x00093AB9u); RECOMP_ABI_CALL(0x000931D0u, sub_000931D0); /* call 0x000931D0 */

loc_00093AB9: ;
    MEM32(esi + 0x2A4) = 0;

loc_00093AC3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00093AD0
 * Original: 0x00093AD0 - 0x00093AF7 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00093AD0: ;
    xml1_raven_trace_blast_delivery(MEM32(esp + 4), ecx, 0);
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00093AF4; /* jp: parity */

loc_00093AE2: ;
    xml1_raven_trace_blast_delivery(MEM32(esp + 4), ecx, 1);
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00093AF4u); RECOMP_ABI_CALL(0x00093A70u, sub_00093A70); /* call 0x00093A70 */

loc_00093AF4: ;
    xml1_raven_trace_blast_delivery(MEM32(esp + 4), 0, 3);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00093B00
 * Original: 0x00093B00 - 0x00093B5C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093B00: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00093B0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093B0F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00093B1Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_00093B1A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093B55; /* je: equal / zero */

loc_00093B21: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00093B45u); RECOMP_ABI_CALL(0x00093880u, sub_00093880); /* call 0x00093880 */

loc_00093B45: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00093B4Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_00093B4E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00093B55: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00093B60
 * Original: 0x00093B60 - 0x00093B9C (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093B60(void)
{

loc_00093B60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00093B69u); RECOMP_ABI_CALL(0x000921C0u, sub_000921C0); /* call 0x000921C0 */

loc_00093B69: ;
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093B76u); RECOMP_ABI_CALL(0x000932B0u, sub_000932B0); /* call 0x000932B0 */

loc_00093B76: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = edi + ecx * 4 + 0xC80;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093BA0
 * Original: 0x00093BA0 - 0x00093BD2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093BA0(void)
{

loc_00093BA0: ;
    if (ecx == 0x4BFD30u) raven_xml1_remove_events_reset_pending();
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xC80) = eax;
    MEM32(esi + 0xD08) = eax;
    MEM32(esi + 0xD0C) = eax;
    MEM32(esi + 0xD10) = eax;
    MEM32(esi + 0xD14) = eax;
    MEM32(esi + 0xD18) = eax;
    PUSH32(esp, 0x00093BCEu); RECOMP_ABI_CALL(0x00093250u, sub_00093250); /* call 0x00093250 */

loc_00093BCE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093BE0
 * Original: 0x00093BE0 - 0x00093C40 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093BE0: ;
    xml1_raven_trace_blast_area_result(ecx, MEM32(esp + 4), 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0 (16-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs) && !raven_harm_pulse_accept_zero(edi)) goto loc_00093C39; /* jle: less or equal (signed <=) */

loc_00093BEF: ;
    eax = MEM32(esi + 0x2A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093C39; /* jne: not equal / not zero */

loc_00093BF9: ;
    _fa = (uint32_t)(MEM32(0x4C0A48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4C0A48), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093C39; /* je: equal / zero */

loc_00093C02: ;
    ecx = 0x4BFD30;
    PUSH32(esp, 0x00093C0Cu); RECOMP_ABI_CALL(0x00093B60u, sub_00093B60); /* call 0x00093B60 */

loc_00093C0C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    ecx = eax + 0x4BFD30;
    PUSH32(esp, edi);
    MEM32(esi + 0x2A4) = ecx;
    PUSH32(esp, 0x00093C21u); RECOMP_ABI_CALL(0x0018DD00u, sub_0018DD00); /* call 0x0018DD00 */

loc_00093C21: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x44E7E4);
    ecx = esi;
    PUSH32(esp, 0x00093C32u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00093C32: ;
    xml1_raven_trace_blast_area_result(esi, edi, 1);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00093C39: ;
    xml1_raven_trace_blast_area_result(esi, edi, 2);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00093C40
 * Original: 0x00093C40 - 0x00093C46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093C40(void)
{

loc_00093C40: ;
    eax = 0xE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00093C50
 * Original: 0x00093C50 - 0x00093C7A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093C50: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xD0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093C62; /* jne: not equal / not zero */

loc_00093C5B: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00093C62: ;
    PUSH32(esp, 0x00093C67u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093C67: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093C80
 * Original: 0x00093C80 - 0x00093CAA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00093C80: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xD4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093C92; /* jne: not equal / not zero */

loc_00093C8B: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00093C92: ;
    PUSH32(esp, 0x00093C97u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093C97: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00093CB0
 * Original: 0x00093CB0 - 0x00093E46 (406 bytes, 149 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093CB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093CB0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM16(esi + 0xDA)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xDA), 0 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00093D4C; /* jne: not equal / not zero */

loc_00093CC7: ;
    eax = MEM32(esi + 4);
    eax = eax >> 0x13;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093D4C; /* je: equal / zero */

loc_00093CD1: ;
    ebx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = MEM32(esp + 0x28);
    if (TEST_NZ(_fa, _fb)) goto loc_00093D58; /* jne: not equal / not zero */

loc_00093CDD: ;
    SET_LO16(eax, MEM16(esi + 0xD8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093CF2; /* je: equal / zero */

loc_00093CE9: ;
    ecx = SX16(LO16(eax));
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093D4C; /* jne: not equal / not zero */

loc_00093CF2: ;
    _fa = (uint32_t)(MEM8(esi + 0xDC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xDC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093D05; /* je: equal / zero */

loc_00093CFB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093D65; /* je: equal / zero */

loc_00093CFF: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093D65; /* je: equal / zero */

loc_00093D05: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00093D0Du); RECOMP_ABI_CALL(0x00093C50u, sub_00093C50); /* call 0x00093C50 */

loc_00093D0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093D13u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00093D13: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093D4C; /* jne: not equal / not zero */

loc_00093D1A: ;
    ecx = esi;
    PUSH32(esp, 0x00093D21u); RECOMP_ABI_CALL(0x00093C80u, sub_00093C80); /* call 0x00093C80 */

loc_00093D21: ;
    edx = eax + 1;

loc_00093D24: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093D24; /* jne: not equal / not zero */

loc_00093D2B: ;
    eax = eax - edx;
    MEM32(esp + 0x30) = eax;
    if ((eax == 0)) goto loc_00093D65; /* je: equal / zero */

loc_00093D33: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00093D3Fu); RECOMP_ABI_CALL(0x00093C80u, sub_00093C80); /* call 0x00093C80 */

loc_00093D3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093D45u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00093D45: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093D65; /* je: equal / zero */

loc_00093D4C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 24; return; /* ret 20 */

loc_00093D58: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093D65; /* jne: not equal / not zero */

loc_00093D5D: ;
    _fa = (uint32_t)(MEM8(esi + 0xDC)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xDC), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093D4C; /* je: equal / zero */

loc_00093D65: ;
    ecx = MEM32(esi + 0x24);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    eax = MEM32(esi + 0x20);
    fp_top() = fp_top() + MEMF(0x3C72F0); /* fadd dword ptr [0x3c72f0] */
    edi = MEM32(esp + 0x20);
    edx = MEM32(edi + 0x1C);
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x18) = ecx;
    MEM32(eax) = edx;
    PUSH32(esp, 0x00093D91u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_00093D91: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093DAD; /* je: equal / zero */

loc_00093D98: ;
    edx = MEM32(eax);
    ecx = esi + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x00093DABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093DAB: ;
    goto loc_00093DBD;

loc_00093DAD: ;
    edx = MEM32(edi);
    eax = esi + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00093DBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093DBD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM16(esi + 0xDA) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00093E0F; /* je: equal / zero */

loc_00093DCA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093DEB; /* je: equal / zero */

loc_00093DCE: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093DEB; /* jne: not equal / not zero */

loc_00093DD4: ;
    ecx = esi + 0xD0;
    PUSH32(esp, 0x00093DDFu); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_00093DDF: ;
    edx = ebp;

loc_00093DE1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093DE1; /* jne: not equal / not zero */

loc_00093DEB: ;
    ebx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093E0F; /* je: equal / zero */

loc_00093DF3: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093E0F; /* jne: not equal / not zero */

loc_00093DF8: ;
    ecx = esi + 0xD4;
    PUSH32(esp, 0x00093E03u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_00093E03: ;
    edx = ebx;

loc_00093E05: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093E05; /* jne: not equal / not zero */

loc_00093E0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00093E15u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_00093E15: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00093E2D; /* je: equal / zero */

loc_00093E1C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00093E2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093E2D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00093E3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093E3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00093E50
 * Original: 0x00093E50 - 0x00094078 (552 bytes, 171 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00093E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00093E50: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0xD0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0x110) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00093E7B; /* jne: not equal / not zero */

loc_00093E74: ;
    eax = 0x3C806C;
    goto loc_00093E91;

loc_00093E7B: ;
    PUSH32(esp, 0x00093E80u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093E80: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00093E91: ;
    ebp = MEM32(esp + 0x118);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CFDB8);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00093EA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093EA6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093ED1; /* je: equal / zero */

loc_00093EAC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093ED1; /* je: equal / zero */

loc_00093EB1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00093EB7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00093EB7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00093EC2u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093EC2: ;
    ecx = eax;
    PUSH32(esp, 0x00093EC9u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00093EC9: ;
    MEM32(ebx + 0xD0) = eax;
    goto loc_00093ED7;

loc_00093ED1: ;
    MEM32(ebx + 0xD0) = edi;

loc_00093ED7: ;
    esi = MEM32(ebx + 0xD4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093EE8; /* jne: not equal / not zero */

loc_00093EE1: ;
    eax = 0x3C806C;
    goto loc_00093EFE;

loc_00093EE8: ;
    PUSH32(esp, 0x00093EEDu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093EED: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00093EFE: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CFDAC);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00093F0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093F0C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093F37; /* je: equal / zero */

loc_00093F12: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00093F37; /* je: equal / zero */

loc_00093F17: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00093F1Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00093F1D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00093F28u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093F28: ;
    ecx = eax;
    PUSH32(esp, 0x00093F2Fu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00093F2F: ;
    MEM32(ebx + 0xD4) = eax;
    goto loc_00093F3D;

loc_00093F37: ;
    MEM32(ebx + 0xD4) = edi;

loc_00093F3D: ;
    eax = MEM32(ebp);
    ecx = ebx + 0xD8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CB778);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00093F51u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093F51: ;
    eax = MEM32(ebx + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094038; /* je: equal / zero */

loc_00093F5F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093F6C; /* jne: not equal / not zero */

loc_00093F65: ;
    eax = 0x3C806C;
    goto loc_00093F82;

loc_00093F6C: ;
    PUSH32(esp, 0x00093F71u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093F71: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x4008;

loc_00093F82: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093F8Au); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00093F8A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094038; /* jne: not equal / not zero */

loc_00093F95: ;
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0x00093F9Eu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_00093F9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00093FA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00093FA5: ;
    edx = esp + 0x10;
    /* nop */

loc_00093FB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00093FB0; /* jne: not equal / not zero */

loc_00093FBA: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x2F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00093FC6u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00093FC6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094038; /* je: equal / zero */

loc_00093FCD: ;
    MEM8(eax + 1) = 0;
    esi = MEM32(ebx + 0xD0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00093FE2; /* jne: not equal / not zero */

loc_00093FDB: ;
    eax = 0x3C806C;
    goto loc_00093FF8;

loc_00093FE2: ;
    PUSH32(esp, 0x00093FE7u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00093FE7: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00093FF8: ;
    edx = eax;
    /* nop */

loc_00094000: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094000; /* jne: not equal / not zero */

loc_00094007: ;
    edi = esp + 0x10;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00094010: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094010; /* jne: not equal / not zero */

loc_00094018: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    edx = esp + 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    PUSH32(esp, edx);
    ecx = ebx + 0xD0;
    PUSH32(esp, 0x00094038u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_00094038: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C9758);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00094047u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094047: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(ebx + 0xDC));
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    ecx = MEM32(esp + 0x10C);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0xDC) = LO8(eax);
    POP32(esp, ebx);
    PUSH32(esp, 0x0009406Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0009406F: ;
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094080
 * Original: 0x00094080 - 0x000940DC (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094080: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009408Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009408F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009409Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0009409A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000940D5; /* je: equal / zero */

loc_000940A1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000940C5u); RECOMP_ABI_CALL(0x000940E0u, sub_000940E0); /* call 0x000940E0 */

loc_000940C5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000940CEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000940CE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000940D5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000940E0
 * Original: 0x000940E0 - 0x0009418C (172 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000940E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000940E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F9F8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x00094126u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00094126: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3CFDCC;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0xD4) = eax;
    SET_LO8(edx, MEM8(esi + 0xDC));
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM8(esi + 0xDC) = LO8(edx);
    MEM16(esi + 0xD8) = LO16(eax);
    MEM16(esi + 0xDA) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00094167; /* je: equal / zero */

loc_0009415F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00094167u); RECOMP_ABI_CALL(0x00093E50u, sub_00093E50); /* call 0x00093E50 */

loc_00094167: ;
    eax = MEM32(esi + 4);
    eax = eax | 2;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00094177u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00094177: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00094190
 * Original: 0x00094190 - 0x00094196 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094190(void)
{

loc_00094190: ;
    eax = 0x4C0AA0;
    esp += 4; return; /* ret */

}

/**
 * sub_000941A0
 * Original: 0x000941A0 - 0x000941A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000941A0(void)
{

loc_000941A0: ;
    eax = 0x3CFD88;
    esp += 4; return; /* ret */

}

/**
 * sub_000941B0
 * Original: 0x000941B0 - 0x000941CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000941B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000941B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000941B8u); RECOMP_ABI_CALL(0x000941D0u, sub_000941D0); /* call 0x000941D0 */

loc_000941B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000941C8; /* je: equal / zero */

loc_000941BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000941C5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000941C5: ;
    esp = esp + 4;

loc_000941C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000941D0
 * Original: 0x000941D0 - 0x000941DB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000941D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000941D0: ;
    MEM32(ecx) = 0x3CFDCC;
    g_seh_ebp = ebp; sub_00026B60(); return; /* tail jmp 0x00026B60 */

}

/**
 * sub_000941E0
 * Original: 0x000941E0 - 0x000942AE (206 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000941E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000941E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CFEF4);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x000941F3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000941F3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094209; /* jne: not equal / not zero */

loc_000941FA: ;
    MEM32(edi + 0x2C4) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00094209: ;
    PUSH32(esp, 0x3CF3F8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094214u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00094214: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009422A; /* jne: not equal / not zero */

loc_0009421B: ;
    MEM32(edi + 0x2C4) = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009422A: ;
    PUSH32(esp, 0x3CFEE8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094235u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00094235: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009424B; /* jne: not equal / not zero */

loc_0009423C: ;
    MEM32(edi + 0x2C4) = 3;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009424B: ;
    PUSH32(esp, 0x3CFEE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094256u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00094256: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009426C; /* jne: not equal / not zero */

loc_0009425D: ;
    MEM32(edi + 0x2C4) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009426C: ;
    PUSH32(esp, 0x3CFED4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094277u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00094277: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0009428D; /* jne: not equal / not zero */

loc_0009427E: ;
    MEM32(edi + 0x2C4) = 5;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0009428D: ;
    PUSH32(esp, 0x3CFECC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094298u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00094298: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000942A9; /* jne: not equal / not zero */

loc_0009429F: ;
    MEM32(edi + 0x2C4) = 6;

loc_000942A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000942B0
 * Original: 0x000942B0 - 0x000942BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000942B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000942B0: ;
    MEM32(ecx) = 0x3CFF04;
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_000942C0
 * Original: 0x000942C0 - 0x000942C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000942C0(void)
{

loc_000942C0: ;
    eax = 0x4C0AE0;
    esp += 4; return; /* ret */

}

/**
 * sub_000942D0
 * Original: 0x000942D0 - 0x000942D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000942D0(void)
{

loc_000942D0: ;
    eax = 0x3CAAE4;
    esp += 4; return; /* ret */

}

/**
 * sub_000942E0
 * Original: 0x000942E0 - 0x00094349 (105 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000942E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000942E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x3D00C0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000942F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000942F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094302; /* je: equal / zero */

loc_000942FA: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00094302u); RECOMP_ABI_CALL(0x000941E0u, sub_000941E0); /* call 0x000941E0 */

loc_00094302: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C859C);
    ecx = esi;
    MEM32(esp + 0x14) = 0x14;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0009431Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009431B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00094334; /* jge: greater or equal (signed >=) */

loc_00094324: ;
    eax = 0x14;
    MEM8(edi + 0x2C8) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00094334: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0009433E; /* jle: less or equal (signed <=) */

loc_00094339: ;
    eax = 0x28;

loc_0009433E: ;
    MEM8(edi + 0x2C8) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094350
 * Original: 0x00094350 - 0x00094356 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094350(void)
{

loc_00094350: ;
    eax = 0x2CC;
    esp += 4; return; /* ret */

}

/**
 * sub_00094360
 * Original: 0x00094360 - 0x000943D9 (121 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094360: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FA18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x000943A6u); RECOMP_ABI_CALL(0x00093880u, sub_00093880); /* call 0x00093880 */

loc_000943A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esi) = 0x3CFF04;
    MEM32(esi + 0x2C4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000943C4; /* je: equal / zero */

loc_000943BC: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000943C4u); RECOMP_ABI_CALL(0x000942E0u, sub_000942E0); /* call 0x000942E0 */

loc_000943C4: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000943E0
 * Original: 0x000943E0 - 0x000943FE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000943E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000943E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000943E8u); RECOMP_ABI_CALL(0x000942B0u, sub_000942B0); /* call 0x000942B0 */

loc_000943E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000943F8; /* je: equal / zero */

loc_000943EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000943F5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000943F5: ;
    esp = esp + 4;

loc_000943F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094400
 * Original: 0x00094400 - 0x0009445C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094400: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0009440Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009440F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0009441Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_0009441A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094455; /* je: equal / zero */

loc_00094421: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00094445u); RECOMP_ABI_CALL(0x00094360u, sub_00094360); /* call 0x00094360 */

loc_00094445: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x0009444Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_0009444E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00094455: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00094460
 * Original: 0x00094460 - 0x00094689 (553 bytes, 173 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094460: ;
    esp = esp - 0xA0;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(esi + 0x2C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094673; /* je: equal / zero */

loc_00094483: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xAC);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0009449Bu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0009449B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000944D4; /* je: equal / zero */

loc_000944A1: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000944A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000944A8: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_000944D4; /* je: equal / zero */

loc_000944C7: ;
    _fa = (uint32_t)(MEM8(edi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094671; /* jne: not equal / not zero */

loc_000944D4: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000944DCu); RECOMP_ABI_CALL(0x00027C70u, sub_00027C70); /* call 0x00027C70 */

loc_000944DC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094671; /* jne: not equal / not zero */

loc_000944E4: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00094671; /* jnp: not parity */

loc_000944FB: ;
    xml1_bishop_trigger_contact(esi, MEM32(ebx));
    eax = MEM32(esi + 0x2C4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00094671; /* ja: above (unsigned >) */

loc_0009450B: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x9468C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00094512u) goto loc_00094512;
    if (_jt == 0x00094521u) goto loc_00094521;
    if (_jt == 0x00094530u) goto loc_00094530;
    if (_jt == 0x0009453Fu) goto loc_0009453F;
    if (_jt == 0x0009454Eu) goto loc_0009454E;
    if (_jt == 0x00094586u) goto loc_00094586;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00094512: ;
    PUSH32(esp, 0x00094517u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_00094517: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0009451Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009451F: ;
    goto loc_0009455B;

loc_00094521: ;
    PUSH32(esp, 0x00094526u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_00094526: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0009452Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009452E: ;
    goto loc_0009455B;

loc_00094530: ;
    PUSH32(esp, 0x00094535u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_00094535: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0009453Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009453D: ;
    goto loc_0009455B;

loc_0009453F: ;
    PUSH32(esp, 0x00094544u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_00094544: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0009454Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009454C: ;
    goto loc_0009455B;

loc_0009454E: ;
    PUSH32(esp, 0x00094553u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_00094553: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0009455Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0009455B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00094671; /* jle: less or equal (signed <=) */

loc_00094563: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0009456Eu); RECOMP_ABI_CALL(0x00027A60u, sub_00027A60); /* call 0x00027A60 */

loc_0009456E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x9C);
    PUSH32(esp, 0x0009457Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0009457D: ;
    esp = esp + 0xA0;
    esp += 20; return; /* ret 16 */

loc_00094586: ;
    PUSH32(esp, 0x0009458Bu); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_0009458B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00094593u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094593: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00094671; /* jle: less or equal (signed <=) */

loc_0009459B: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000945A4u); RECOMP_ABI_CALL(0x00027410u, sub_00027410); /* call 0x00027410 */

loc_000945A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094671; /* je: equal / zero */

loc_000945AC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000945B7u); RECOMP_ABI_CALL(0x00027A60u, sub_00027A60); /* call 0x00027A60 */

loc_000945B7: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    ebx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi + 0x34);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM8(esp + 0x28) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00094602; /* jne: not equal / not zero */

loc_000945EE: ;
    eax = ZX8(MEM8(esi + 0x2C8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D00F8);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    goto loc_00094632;

loc_00094602: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009461B; /* jne: not equal / not zero */

loc_00094607: ;
    edx = ZX8(MEM8(esi + 0x2C8));
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D00EC);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    goto loc_00094632;

loc_0009461B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0009463A; /* jne: not equal / not zero */

loc_00094620: ;
    ecx = ZX8(MEM8(esi + 0x2C8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D00E0);
    edx = esp + 0x30;
    PUSH32(esp, edx);

loc_00094632: ;
    PUSH32(esp, 0x00094637u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00094637: ;
    esp = esp + 0xC;

loc_0009463A: ;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094653u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_00094653: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094659u); RECOMP_ABI_CALL(0x000275E0u, sub_000275E0); /* call 0x000275E0 */

loc_00094659: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094671; /* je: equal / zero */

loc_00094660: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00094671u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094671: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00094673: ;
    ecx = MEM32(esp + 0xA0);
    POP32(esp, esi);
    PUSH32(esp, 0x00094680u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00094680: ;
    esp = esp + 0xA0;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000946B0
 * Original: 0x000946B0 - 0x000946CF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000946B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000946B0: ;
    eax = MEM32(0x4C0B18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000946CE; /* je: equal / zero */

loc_000946B9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000946C1u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_000946C1: ;
    esp = esp + 8;
    MEM32(0x4C0B18) = 0;

loc_000946CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000946D0
 * Original: 0x000946D0 - 0x000946EE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000946D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000946D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000946E9; /* jne: not equal / not zero */

loc_000946DC: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000946E9; /* jne: not equal / not zero */

loc_000946E4: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_000946E9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000946F0
 * Original: 0x000946F0 - 0x0009472A (58 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000946F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000946F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    goto loc_00094700;

    /* nop */

loc_00094700: ;
    eax = SX16(LO16(esi));
    ecx = MEM32(eax * 4 + 0x44E8C8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00094711u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00094711: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094724; /* je: equal / zero */

loc_00094718: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x3B (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00094700; /* jl: less (signed <) */

loc_0009471F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00094724: ;
    POP32(esp, edi);
    eax = SX16(LO16(esi));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094730
 * Original: 0x00094730 - 0x000947DA (170 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_00094745: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_00094751: ;
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(eax, MEM8(edi + 0x14));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_00094760: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_00094769: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ebx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO8(ebx, LO8(ebx) >> 2);
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x10) = LO8(edx);
    if (CMP_NE(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_00094781: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ebx, LO8(eax));
    SET_LO8(edx, LO8(edx) >> 3);
    SET_LO8(ebx, LO8(ebx) >> 3);
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_00094795: ;
    SET_LO8(ecx, LO8(ecx) >> 4);
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_000947A4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000947B0; /* je: equal / zero */

loc_000947A8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_000947B0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000947BC; /* je: equal / zero */

loc_000947B4: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_000947BC: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000947CA; /* je: equal / zero */

loc_000947C4: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000947D2; /* jne: not equal / not zero */

loc_000947CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000947D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000947E0
 * Original: 0x000947E0 - 0x0009484E (110 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000947E0(void)
{

loc_000947E0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 0x10);
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM32(eax + 0x10) = ecx;
    SET_LO8(edx, LO8(edx) ^ MEM8(esi + 0x14));
    SET_LO8(ecx, MEM8(eax + 0x14));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(eax + 0x14) = LO8(ecx);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(eax + 0x14) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x14));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x14) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + 0x14));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(eax + 0x14) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x14));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x14) = LO8(edx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094850
 * Original: 0x00094850 - 0x00094A4F (511 bytes, 141 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00094850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0x1C)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0x1C) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094864: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, 0x00094870u); RECOMP_ABI_CALL(0x00094730u, sub_00094730); /* call 0x00094730 */

loc_00094870: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094A48; /* je: equal / zero */

loc_00094878: ;
    edx = MEM32(esi + 0x6C);
    ecx = MEM32(edi + 0x6C);
    eax = edx;
    eax = eax ^ ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_0009488B: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094897: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000948A3: ;
    eax = edx;
    eax = eax ^ ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000948AF: ;
    fp_push(MEMF(edi + 0x48)); /* fld float */
    fp_push(MEMF(esi + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00094A48; /* jp: parity */

loc_000948C2: ;
    edx = edx ^ ecx;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000948CD: ;
    SET_LO8(ecx, MEM8(edi + 0x70));
    SET_LO8(ecx, LO8(ecx) ^ MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000948DC: ;
    edx = MEM32(esi + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x40) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000948E8: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x44) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000948F4: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094900: ;
    SET_LO8(ecx, MEM8(esi + 0x72));
    SET_LO8(edx, MEM8(edi + 0x72));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094912: ;
    fp_push(MEMF(edi + 0x4C)); /* fld float */
    fp_push(MEMF(esi + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00094A48; /* jp: parity */

loc_00094925: ;
    fp_push(MEMF(edi + 0x50)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00094A48; /* jp: parity */

loc_00094938: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094944: ;
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_0009494F: ;
    ecx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x9C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094961: ;
    edx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0xA0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094973: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xA4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094985: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xB0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0xB0) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_00094997: ;
    edx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0xB4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000949A9: ;
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xB8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000949BB: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0xA8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000949C9: ;
    edx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xAC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0xAC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000949D7: ;
    eax = MEM32(esi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xBC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xBC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094A48; /* jne: not equal / not zero */

loc_000949E5: ;
    ecx = edi + 0x54;
    PUSH32(esp, ecx);
    ecx = esi + 0x54;
    PUSH32(esp, 0x000949F1u); RECOMP_ABI_CALL(0x000946D0u, sub_000946D0); /* call 0x000946D0 */

loc_000949F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094A48; /* je: equal / zero */

loc_000949F5: ;
    edx = edi + 0x60;
    PUSH32(esp, edx);
    ecx = esi + 0x60;
    PUSH32(esp, 0x00094A01u); RECOMP_ABI_CALL(0x000946D0u, sub_000946D0); /* call 0x000946D0 */

loc_00094A01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094A48; /* je: equal / zero */

loc_00094A05: ;
    eax = edi + 0x78;
    PUSH32(esp, eax);
    ecx = esi + 0x78;
    PUSH32(esp, 0x00094A11u); RECOMP_ABI_CALL(0x000946D0u, sub_000946D0); /* call 0x000946D0 */

loc_00094A11: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094A48; /* je: equal / zero */

loc_00094A15: ;
    ecx = edi + 0x84;
    PUSH32(esp, ecx);
    ecx = esi + 0x84;
    PUSH32(esp, 0x00094A27u); RECOMP_ABI_CALL(0x000946D0u, sub_000946D0); /* call 0x000946D0 */

loc_00094A27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094A48; /* je: equal / zero */

loc_00094A2B: ;
    edi = edi + 0x90;
    PUSH32(esp, edi);
    ecx = esi + 0x90;
    PUSH32(esp, 0x00094A3Du); RECOMP_ABI_CALL(0x000946D0u, sub_000946D0); /* call 0x000946D0 */

loc_00094A3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094A48; /* je: equal / zero */

loc_00094A41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00094A48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00094A50
 * Original: 0x00094A50 - 0x00094A6D (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094A50(void)
{

loc_00094A50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    esi = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00094A60u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00094A60: ;
    esp = esp + 0xC;
    MEM8(esi + 0x37) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094A70
 * Original: 0x00094A70 - 0x00094C65 (501 bytes, 155 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094A70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094A70: ;
    esp = esp - 0x4C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x68);
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00094ABC; /* je: equal / zero */

loc_00094A9A: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00094AA8u); RECOMP_ABI_CALL(0x0002A630u, sub_0002A630); /* call 0x0002A630 */

loc_00094AA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094AC1; /* je: equal / zero */

loc_00094AAC: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00094ABCu); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_00094ABC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x12 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094AD7; /* je: equal / zero */

loc_00094AC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x3C806C;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x00094AD3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00094AD3: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

loc_00094AD7: ;
    _fa = (uint32_t)(MEM8(0x4C2568)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x4C2568), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094AED; /* jne: not equal / not zero */

loc_00094AE0: ;
    MEM32(0x4C2568) = MEM32(0x4C2568) | 1;
    MEM8(0x4C2468) = LO8(ebx);

loc_00094AED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esp + 0x18) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00094BA2; /* je: equal / zero */

loc_00094AF9: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094B38; /* jne: not equal / not zero */

loc_00094B00: ;
    PUSH32(esp, 0x40);
    edx = esp + 0x1C;
    PUSH32(esp, 0x3D03E4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00094B11u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00094B11: ;
    esp = esp + 0xC;
    MEM8(esp + 0x57) = LO8(ebx);
    PUSH32(esp, 0x00094B1Du); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00094B1D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9B);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094B29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094B29: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00094B33u); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_00094B33: ;
    goto loc_00094BC7;

loc_00094B38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094B72; /* jne: not equal / not zero */

loc_00094B3D: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x1C;
    PUSH32(esp, 0x3D03E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094B4Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00094B4E: ;
    esp = esp + 0xC;
    MEM8(esp + 0x57) = LO8(ebx);
    PUSH32(esp, 0x00094B5Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00094B5A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094B66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094B66: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00094B70u); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_00094B70: ;
    goto loc_00094BC7;

loc_00094B72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094BC7; /* jne: not equal / not zero */

loc_00094B77: ;
    PUSH32(esp, 0x3D03DC);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00094B85u); RECOMP_ABI_CALL(0x00025BF0u, sub_00025BF0); /* call 0x00025BF0 */

loc_00094B85: ;
    PUSH32(esp, 0x00094B8Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00094B8A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094B96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094B96: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00094BA0u); RECOMP_ABI_CALL(0x0003AE00u, sub_0003AE00); /* call 0x0003AE00 */

loc_00094BA0: ;
    goto loc_00094BC7;

loc_00094BA2: ;
    PUSH32(esp, 0x00094BA7u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00094BA7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x84);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094BB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094BB3: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00094BC0u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00094BC0: ;
    esp = esp + 0xC;
    MEM8(esp + 0x57) = LO8(ebx);

loc_00094BC7: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x4C2468);
    PUSH32(esp, 0x00094BDBu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00094BDB: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 0xC;
    MEM8(0x4C2567) = LO8(ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00094C06; /* jp: parity */

loc_00094BF5: ;
    PUSH32(esp, 0x00094BFAu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00094BFA: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82);
    goto loc_00094C26;

loc_00094C06: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00094C4F; /* jp: parity */

loc_00094C17: ;
    PUSH32(esp, 0x00094C1Cu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00094C1C: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x83);

loc_00094C26: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00094C2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094C2D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x4C2468);
    PUSH32(esp, 0x00094C3Du); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_00094C3D: ;
    esp = esp + 0x10;
    ecx = 0x4C2468;
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, 0x00094C4Fu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_00094C4F: ;
    ecx = MEM32(esp + 0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0x4C2468;
    POP32(esp, ebx);
    PUSH32(esp, 0x00094C61u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00094C61: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00094C70
 * Original: 0x00094C70 - 0x00094CB0 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00094C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x1928);
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x1798)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x1798), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00094CAA; /* jne: not equal / not zero */

loc_00094C88: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0x1784);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_00094CAA: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094CB0
 * Original: 0x00094CB0 - 0x00094D20 (112 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00094CB0: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00094D1A; /* je: equal / zero */

loc_00094CB9: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00094CCDu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00094CCD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00094CF9; /* je: equal / zero */

loc_00094CD3: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00094CDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094CDA: ;
    edx = MEM32(0x485878);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x21)) >> 32) & 1);
    edx = edx + 0x21;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    ebx = 1;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00094D00; /* jne: not equal / not zero */

loc_00094CF9: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00094D00: ;
    ecx = MEM32(esi + 0x2D8);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00094D0Fu); RECOMP_ABI_CALL(0x000B12F0u, sub_000B12F0); /* call 0x000B12F0 */

loc_00094D0F: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, esi);
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_00094D1A: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094D20
 * Original: 0x00094D20 - 0x00094DBD (157 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00094D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00094DB7; /* je: equal / zero */

loc_00094D2D: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00094D41u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00094D41: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00094D6D; /* je: equal / zero */

loc_00094D47: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00094D4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094D4E: ;
    edx = MEM32(0x485878);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x21)) >> 32) & 1);
    edx = edx + 0x21;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    ebx = 1;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00094D74; /* jne: not equal / not zero */

loc_00094D6D: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00094D74: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00094D81; /* jne: not equal / not zero */

loc_00094D7A: ;
    eax = 0x3C806C;
    goto loc_00094D97;

loc_00094D81: ;
    PUSH32(esp, 0x00094D86u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00094D86: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00094D97: ;
    edi = MEM32(edi + 0x2D8);
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20C)) >> 32) & 1);
    edi = edi + 0x20C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00094DAAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00094DAA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00094DB7: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094DC0
 * Original: 0x00094DC0 - 0x00094E22 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094DC0: ;
    edx = ecx;
    eax = MEM32(edx + 0x7DB0);
    eax = MEM32(edx + eax * 4 + 0x7B18);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x7DB8;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x7DB0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA4 (32-bit) */
    MEM32(edx + 0x7DB0) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00094E0C; /* jl: less (signed <) */

loc_00094E02: ;
    MEM32(edx + 0x7DB0) = 0;

loc_00094E0C: ;
    MEM32(edx + 0x7DB4) = MEM32(edx + 0x7DB4) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x7DB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x7DD0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x7DD0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094E30
 * Original: 0x00094E30 - 0x00094E8F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094E30: ;
    edx = ecx;
    eax = MEM32(edx + 0x177C);
    eax = MEM32(edx + eax * 4 + 0x15E4);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1784;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x177C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    MEM32(edx + 0x177C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00094E79; /* jl: less (signed <) */

loc_00094E6F: ;
    MEM32(edx + 0x177C) = 0;

loc_00094E79: ;
    MEM32(edx + 0x1780) = MEM32(edx + 0x1780) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1780)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1794);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1794) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00094E90
 * Original: 0x00094E90 - 0x00094EF9 (105 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00094E90: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094EF5; /* je: equal / zero */

loc_00094E99: ;
    PUSH32(esp, esi);
    esi = MEM32(0x4C2448);
    edx = esi;
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x4C22B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x4C22B8), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00094EF4; /* jne: not equal / not zero */

loc_00094EAD: ;
    PUSH32(esp, ebx);
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx * 4 + 0x4C22A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx * 4 + 0x4C22A4), ebx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00094EF4; /* je: equal / zero */

loc_00094ECC: ;
    eax = eax & esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + 0x4C0B20;
    esi = eax;
    if ((eax == 0)) goto loc_00094EF4; /* je: equal / zero */

loc_00094EDA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00094EF4; /* je: equal / zero */

loc_00094EDF: ;
    PUSH32(esp, 0x00094EE4u); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_00094EE4: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00094EF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00094EF1: ;
    MEM32(edi + 8) = eax;

loc_00094EF4: ;
    POP32(esp, esi);

loc_00094EF5: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094F00
 * Original: 0x00094F00 - 0x00094FD2 (210 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00094F00: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 2 (8-bit) */
    SET_LO8(eax, 1);
    if (TEST_NZ(_fa, _fb)) goto loc_00094FCE; /* jne: not equal / not zero */

loc_00094F0F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00094F1Fu); RECOMP_ABI_CALL(0x000494C0u, sub_000494C0); /* call 0x000494C0 */

loc_00094F1F: ;
    edx = MEM32(esi + 0xC);
    esp = esp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094F47; /* je: equal / zero */

loc_00094F29: ;
    ebx = 1;
    ecx = eax;
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094F47; /* jne: not equal / not zero */

loc_00094F36: ;
    eax = 1;
    ecx = edi;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094F47; /* jne: not equal / not zero */

loc_00094F43: ;
    eax = 0; /* xor self */
    goto loc_00094F4C;

loc_00094F47: ;
    eax = 1;

loc_00094F4C: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094F69; /* je: equal / zero */

loc_00094F57: ;
    ecx = MEM32(ebp + 0xC);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094F69; /* jne: not equal / not zero */

loc_00094F65: ;
    eax = 0; /* xor self */
    goto loc_00094F6E;

loc_00094F69: ;
    eax = 1;

loc_00094F6E: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094F86; /* je: equal / zero */

loc_00094F76: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x48) (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00094F8E; /* jne: not equal / not zero */

loc_00094F86: ;
    MEM32(esp + 0x14) = 1;

loc_00094F8E: ;
    edi = ebp + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00094F99u); RECOMP_ABI_CALL(0x00094CB0u, sub_00094CB0); /* call 0x00094CB0 */

loc_00094F99: ;
    SET_LO8(eax, LO8(eax) & MEM8(esp + 0x14));
    PUSH32(esp, edi);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    PUSH32(esp, 0x00094FA7u); RECOMP_ABI_CALL(0x00094D20u, sub_00094D20); /* call 0x00094D20 */

loc_00094FA7: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(MEM8(esi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00094FC2; /* je: equal / zero */

loc_00094FAF: ;
    _fa = (uint32_t)(MEM8(ebp + 0x60)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x60), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00094FC2; /* jne: not equal / not zero */

loc_00094FB5: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00094FC2: ;
    eax = 1;
    POP32(esp, edi);
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);

loc_00094FCE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00094FE0
 * Original: 0x00094FE0 - 0x00095017 (55 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00094FE0(void)
{

loc_00094FE0: ;
    raven_xml1_powerup_effect_scope(ecx, MEM32(esp + 4));
    raven_xml1_absorb_load_resource(ecx, MEM32(esp + 4));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x54;
    PUSH32(esp, 0x00094FF1u); RECOMP_ABI_CALL(0x00094E90u, sub_00094E90); /* call 0x00094E90 */

loc_00094FF1: ;
    PUSH32(esp, edi);
    ecx = esi + 0x78;
    PUSH32(esp, 0x00094FFAu); RECOMP_ABI_CALL(0x00094E90u, sub_00094E90); /* call 0x00094E90 */

loc_00094FFA: ;
    PUSH32(esp, edi);
    ecx = esi + 0x84;
    PUSH32(esp, 0x00095006u); RECOMP_ABI_CALL(0x00094E90u, sub_00094E90); /* call 0x00094E90 */

loc_00095006: ;
    PUSH32(esp, edi);
    ecx = esi + 0x90;
    PUSH32(esp, 0x00095012u); RECOMP_ABI_CALL(0x00094E90u, sub_00094E90); /* call 0x00094E90 */

loc_00095012: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095020
 * Original: 0x00095020 - 0x00095082 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095020: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x7DAC) = esi;
    MEM32(ecx + 0x7DB0) = esi;
    MEM32(ecx + 0x7DB4) = esi;
    edx = 0; /* xor self */
    goto loc_00095040;

    /* nop */

loc_00095040: ;
    eax = MEM32(ecx + 0x7DAC);
    edi = MEM32(ecx + 0x7DB4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA4 (32-bit) */
    MEM32(ecx + 0x7DAC) = eax;
    MEM32(ecx + 0x7DB4) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0009506E; /* jl: less (signed <) */

loc_00095061: ;
    MEM32(ecx + 0x7DAC) = esi;
    eax = 0xA3;
    goto loc_0009506F;

loc_0009506E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0009506F: ;
    MEM32(ecx + eax * 4 + 0x7B18) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095040; /* jl: less (signed <) */

loc_0009507F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095090
 * Original: 0x00095090 - 0x00095102 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095090: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x1784;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1778);
    edi = MEM32(eax + 0x1780);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    MEM32(eax + 0x1778) = ecx;
    MEM32(eax + 0x1780) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000950E8; /* jl: less (signed <) */

loc_000950D7: ;
    MEM32(eax + 0x1778) = 0;
    ecx = 0x63;
    goto loc_000950E9;

loc_000950E8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000950E9: ;
    MEM32(eax + ecx * 4 + 0x15E4) = esi;
    ecx = MEM32(eax + 0x1794);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x1794) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095110
 * Original: 0x00095110 - 0x0009516D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095110: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1778) = esi;
    MEM32(ecx + 0x177C) = esi;
    MEM32(ecx + 0x1780) = esi;
    edx = 0; /* xor self */
    goto loc_00095130;

    /* nop */

loc_00095130: ;
    eax = MEM32(ecx + 0x1778);
    edi = MEM32(ecx + 0x1780);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    MEM32(ecx + 0x1778) = eax;
    MEM32(ecx + 0x1780) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0009515C; /* jl: less (signed <) */

loc_0009514F: ;
    MEM32(ecx + 0x1778) = esi;
    eax = 0x63;
    goto loc_0009515D;

loc_0009515C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0009515D: ;
    MEM32(ecx + eax * 4 + 0x15E4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095130; /* jl: less (signed <) */

loc_0009516A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00095170
 * Original: 0x00095170 - 0x000951B8 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095170: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    ecx = 0x64;
    /* nop */

loc_00095180: ;
    MEM8(eax) = 0;
    eax = eax + 0x38;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00095180; /* jne: not equal / not zero */

loc_00095189: ;
    ecx = esi + 0x15E4;
    PUSH32(esp, 0x00095194u); RECOMP_ABI_CALL(0x000670A0u, sub_000670A0); /* call 0x000670A0 */

loc_00095194: ;
    eax = 0; /* xor self */
    ecx = esi + 0x1784;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    ecx = esi;
    MEM32(esi + 0x1794) = eax;
    PUSH32(esp, 0x000951B4u); RECOMP_ABI_CALL(0x00095110u, sub_00095110); /* call 0x00095110 */

loc_000951B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000951C0
 * Original: 0x000951C0 - 0x0009520E (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000951C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000951C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x1928);
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000951D6u); RECOMP_ABI_CALL(0x00095090u, sub_00095090); /* call 0x00095090 */

loc_000951D6: ;
    ecx = MEM32(edi + 0x192C);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0x1798) = MEM32(edi + esi * 4 + 0x1798) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0x1798) >= 0)) goto loc_00095209; /* jns: not sign (positive) */

loc_000951EC: ;
    MEM32(edi + esi * 4 + 0x1798) = esi;
    ecx = MEM32(edi + 0x192C);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0x1798) = edx;

loc_00095209: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00095210
 * Original: 0x00095210 - 0x00095272 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00095210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00095210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00095219u); RECOMP_ABI_CALL(0x00095170u, sub_00095170); /* call 0x00095170 */

loc_00095219: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x1928) = eax;
    MEM32(esi + 0x192C) = eax;
    edx = 0x63;
    edi = 0; /* xor self */

loc_00095230: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00095230; /* jne: not equal / not zero */

loc_0009523C: ;
    MEM32(esi + 0x1928) = ecx;
    MEM32(esi + 0x192C) = edi;
    edx = esi + 0x1798;
    edi = edi;

loc_00095250: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x192C);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00095250; /* jl: less (signed <) */

loc_0009526D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
