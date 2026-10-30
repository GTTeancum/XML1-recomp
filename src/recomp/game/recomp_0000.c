/**
 * X-Men Legends - Recompiled code chunk 0
 * Functions: 250 (0x00011000 - 0x00018550)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00011000
 * Original: 0x00011000 - 0x00011040 (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011000(void)
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

loc_00011000: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001103C; /* jne: not equal / not zero */

loc_00011009: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001103C; /* jne: not equal / not zero */

loc_00011019: ;
    PUSH32(esp, 0x0001101Eu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0001101E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00011025u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011025: ;
    fp_top() = fp_top() - MEMF(esi + 0xC); /* fsub dword ptr [esi + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0001103C; /* jp: parity */

loc_00011035: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001103C: ;
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
 * sub_00011040
 * Original: 0x00011040 - 0x00011063 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011040(void)
{

loc_00011040: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = ecx;
    edx = edi;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011070
 * Original: 0x00011070 - 0x000110F7 (135 bytes, 49 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011070(void)
{

loc_00011070: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00011078u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_00011078: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001107Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001107E: ;
    PUSH32(esp, 0x00011083u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_00011083: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0001108Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001108C: ;
    PUSH32(esp, 0x00011091u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00011091: ;
    esi = eax;
    PUSH32(esp, 0x00011098u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_00011098: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBC1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000110A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000110A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x000110AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000110AE: ;
    PUSH32(esp, 0x000110B3u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000110B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000110BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000110BC: ;
    PUSH32(esp, 0x000110C1u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000110C1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000110C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000110C8: ;
    PUSH32(esp, 0x000110CDu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000110CD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000110D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000110D6: ;
    PUSH32(esp, 0x000110DBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000110DB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000110E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000110E7: ;
    PUSH32(esp, 0x000110ECu); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_000110EC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000110F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000110F5: ;
    goto loc_000110C8;

}

/**
 * sub_00011100
 * Original: 0x00011100 - 0x00011130 (48 bytes, 22 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011100: ;
    eax = MEM32(esp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0001112D; /* js: sign (negative) */

loc_00011107: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_00011120: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00011124u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011124: ;
    esi = esi + ebp;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011120; /* jne: not equal / not zero */

loc_00011129: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001112D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00011104
 * Original: 0x00011104 - 0x00011130 (44 bytes, 21 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011104(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011104: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0001112D; /* js: sign (negative) */

loc_00011107: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_00011120: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00011124u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011124: ;
    esi = esi + ebp;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011120; /* jne: not equal / not zero */

loc_00011129: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001112D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00011105
 * Original: 0x00011105 - 0x00011130 (43 bytes, 20 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011105(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011105: ;
    if (_flags /* js: sign (negative) */) goto loc_0001112D;

loc_00011107: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = eax + 1;
    /* nop */

loc_00011120: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00011124u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011124: ;
    esi = esi + ebp;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00011120; /* jne: not equal / not zero */

loc_00011129: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0001112D: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00011130
 * Original: 0x00011130 - 0x00011300 (464 bytes, 157 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011130(void)
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

loc_00011130: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00011139u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00011139: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C6E84);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011145u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011145: ;
    PUSH32(esp, 0x0001114Au); RECOMP_ABI_CALL(0x0011D8C0u, sub_0011D8C0); /* call 0x0011D8C0 */

loc_0001114A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C6E7C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011156u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011156: ;
    PUSH32(esp, 0x0001115Bu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0001115B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x505220);
    PUSH32(esp, 0x3C6E6C);
    PUSH32(esp, 0x3C6E5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00011173u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011173: ;
    PUSH32(esp, 0x00011178u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00011178: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    /* PC default: native max_fps=60; retain real elapsed-time simulation. */
    PUSH32(esp, 0x3C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C6E54);
    PUSH32(esp, 0x3C6E44);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00011190u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011190: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x3C (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000111A0; /* jle: less or equal (signed <=) */

loc_00011197: ;
    MEM32(esi + 4) = 0;
    goto loc_000111AD;

loc_000111A0: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000111AD: ;
    PUSH32(esp, 0x000111B2u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_000111B2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000111B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000111B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000111BFu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_000111BF: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000111C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000111C9: ;
    PUSH32(esp, 0x000111CEu); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_000111CE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000111D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000111D4: ;
    PUSH32(esp, 0x000111D9u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000111D9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000111DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000111DF: ;
    PUSH32(esp, 0x000111E4u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_000111E4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000111EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000111EB: ;
    PUSH32(esp, 0x000111F0u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000111F0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000111F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000111F6: ;
    PUSH32(esp, 0x000111FBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000111FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00011201u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011201: ;
    PUSH32(esp, 0x00011206u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00011206: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C6E34);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00011214u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011214: ;
    PUSH32(esp, 0x00011219u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00011219: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00011220u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011220: ;
    PUSH32(esp, 0x00011225u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00011225: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011231u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011231: ;
    PUSH32(esp, 0x00011236u); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_00011236: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0001123Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001123F: ;
    ecx = esi;
    PUSH32(esp, 0x00011246u); RECOMP_ABI_CALL(0x00011300u, sub_00011300); /* call 0x00011300 */

loc_00011246: ;
    PUSH32(esp, 0x0001124Bu); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_0001124B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3C6E10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011259u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011259: ;
    PUSH32(esp, 0x0001125Eu); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_0001125E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 0x3C6DE8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0001126Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001126C: ;
    PUSH32(esp, 0x00011271u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_00011271: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00011277u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011277: ;
    PUSH32(esp, 0x0001127Cu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0001127C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00011284u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011284: ;
    PUSH32(esp, 0x00011289u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_00011289: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001128Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001128F: ;
    PUSH32(esp, 0x00011294u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_00011294: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001129Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001129A: ;
    PUSH32(esp, 0x0001129Fu); RECOMP_ABI_CALL(0x000A51D0u, sub_000A51D0); /* call 0x000A51D0 */

loc_0001129F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000112A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000112A5: ;
    PUSH32(esp, 0x000112AAu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000112AA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x000112B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000112B4: ;
    PUSH32(esp, 0x000112B9u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_000112B9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000112C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000112C1: ;
    PUSH32(esp, 0x000112C6u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_000112C6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000112CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000112CD: ;
    PUSH32(esp, 0x000112D2u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_000112D2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000112D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000112D8: ;
    PUSH32(esp, 0x000112DDu); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000112DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000112E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000112E3: ;
    PUSH32(esp, 0x000112E8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000112E8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000112F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000112F4: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 8;
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
 * sub_00011300
 * Original: 0x00011300 - 0x00011318 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00011300(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00011300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00011308u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00011308: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0001130Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001130F: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x10) = MEM8(esi + 0x10) & 0xFB;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011320
 * Original: 0x00011320 - 0x00011387 (103 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011320: ;
    SET_LO8(ecx, MEM8(0x47C4F4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00011381; /* jne: not equal / not zero */

loc_0001132F: ;
    ecx = MEM32(0x47C4F4);
    SET_LO8(edx, MEM8(0x47C4F0));
    ecx = ecx | eax;
    SET_LO8(edx, LO8(edx) & 0xF0);
    PUSH32(esp, 0x359D00);
    MEM32(0x47C4F4) = ecx;
    MEM32(0x47C4E0) = 0x3C6DBC;
    MEM32(0x47C4E4) = 0;
    MEM32(0x47C4E8) = 0;
    MEM32(0x47C4EC) = 0;
    MEM8(0x47C4F0) = LO8(edx);
    PUSH32(esp, 0x0001137Eu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0001137E: ;
    esp = esp + 4;

loc_00011381: ;
    eax = 0x47C4E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00011390
 * Original: 0x00011390 - 0x000116CA (826 bytes, 294 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_frame_limit_pause(double elapsed, float minimum);
void sub_00011390(void)
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

loc_00011390: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000113A1; /* jne: not equal / not zero */

loc_0001139C: ;
    PUSH32(esp, 0x000113A1u); RECOMP_ABI_CALL(0x000116D0u, sub_000116D0); /* call 0x000116D0 */

loc_000113A1: ;
    PUSH32(esp, 0x000113A6u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_000113A6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000113AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000113AF: ;
    PUSH32(esp, 0x000113B4u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_000113B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000113BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000113BB: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000113C4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000113C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x140); PUSH32(esp, 0x000113CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000113CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011421; /* jne: not equal / not zero */

loc_000113D2: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011421; /* jne: not equal / not zero */

loc_000113E2: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0001141F; /* jne: not equal / not zero */

loc_000113F6: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00011421; /* jp: parity */

loc_00011400: ;
    PUSH32(esp, 0x00011405u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_00011405: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0001140Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001140C: ;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    xml1_frame_limit_pause(fp_top(), MEMF(esi + 4)); /* PC: sleep, then the original poll decides */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00011400; /* jnp: not parity */

loc_0001141D: ;
    goto loc_00011421;

loc_0001141F: ;
    fp_pop(); /* fstp st(0) */

loc_00011421: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0001142Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0001142D: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00011439u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011439: ;
    PUSH32(esp, 0x0001143Eu); RECOMP_ABI_CALL(0x000579E0u, sub_000579E0); /* call 0x000579E0 */

loc_0001143E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00011445u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011445: ;
    PUSH32(esp, 0x0001144Au); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0001144A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00011450u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011450: ;
    PUSH32(esp, 0x00011455u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00011455: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0001145Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001145C: ;
    PUSH32(esp, 0x00011461u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_00011461: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00011468u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011468: ;
    PUSH32(esp, 0x0001146Du); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0001146D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00011474u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011474: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011497; /* jne: not equal / not zero */

loc_00011478: ;
    PUSH32(esp, 0x0001147Du); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0001147D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00011484u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011484: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011497; /* jne: not equal / not zero */

loc_00011488: ;
    PUSH32(esp, 0x0001148Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0001148D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x00011497u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011497: ;
    PUSH32(esp, 0x0001149Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0001149C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x000114A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000114A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000114B6; /* jne: not equal / not zero */

loc_000114A7: ;
    PUSH32(esp, 0x000114ACu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000114AC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000114B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000114B4: ;
    goto loc_00011510;

loc_000114B6: ;
    PUSH32(esp, 0x000114BBu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000114BB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000114C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000114C3: ;
    PUSH32(esp, 0x000114C8u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000114C8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000114CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000114CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011504; /* jne: not equal / not zero */

loc_000114D3: ;
    PUSH32(esp, 0x000114D8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000114D8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x000114E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000114E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00011504; /* je: equal / zero */

loc_000114E6: ;
    PUSH32(esp, 0x000114EBu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000114EB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x000114F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000114F2: ;
    PUSH32(esp, 0x000114F7u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000114F7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011502u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011502: ;
    goto loc_00011510;

loc_00011504: ;
    PUSH32(esp, 0x00011509u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00011509: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00011510u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011510: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00011517u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00011517: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x00011521u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011521: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011566; /* jne: not equal / not zero */

loc_00011525: ;
    PUSH32(esp, 0x0001152Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0001152A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00011531u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011531: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000115C7; /* jne: not equal / not zero */

loc_00011539: ;
    PUSH32(esp, 0x0001153Eu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_0001153E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00011545u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011545: ;
    PUSH32(esp, 0x0001154Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0001154A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x00011554u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011554: ;
    PUSH32(esp, 0x00011559u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_00011559: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00011561u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011561: ;
    goto loc_00011605;

loc_00011566: ;
    PUSH32(esp, 0x0001156Bu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0001156B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00011575u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011575: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011539; /* jne: not equal / not zero */

loc_00011579: ;
    PUSH32(esp, 0x0001157Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0001157E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x00011588u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011588: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000115B2; /* je: equal / zero */

loc_0001158C: ;
    PUSH32(esp, 0x00011591u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00011591: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0001159Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001159B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011539; /* jne: not equal / not zero */

loc_0001159F: ;
    PUSH32(esp, 0x000115A4u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000115A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x000115AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000115AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00011539; /* je: equal / zero */

loc_000115B2: ;
    PUSH32(esp, 0x000115B7u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000115B7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x000115C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000115C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000115C7; /* je: equal / zero */

loc_000115C5: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */

loc_000115C7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000115CDu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_000115CD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000115D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000115D4: ;
    PUSH32(esp, 0x000115D9u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000115D9: ;
    esi = eax;
    PUSH32(esp, 0x000115E0u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000115E0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000115E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000115E7: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x104); PUSH32(esp, 0x000115F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000115F7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x00011600u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011600: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_00011631; /* je: equal / zero */

loc_00011605: ;
    PUSH32(esp, 0x0001160Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0001160A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011611u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011611: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00011618u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011618: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0001165B; /* jne: not equal / not zero */

loc_0001161C: ;
    PUSH32(esp, 0x00011621u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00011621: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011628u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011628: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0001162Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001162F: ;
    goto loc_0001165B;

loc_00011631: ;
    PUSH32(esp, 0x00011636u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00011636: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001163Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001163D: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00011644u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011644: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0001165B; /* je: equal / zero */

loc_00011648: ;
    PUSH32(esp, 0x0001164Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0001164D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011654u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011654: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0001165Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001165B: ;
    PUSH32(esp, 0x00011660u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00011660: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x16C); PUSH32(esp, 0x0001166Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001166A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011694; /* jne: not equal / not zero */

loc_0001166E: ;
    PUSH32(esp, 0x00011673u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00011673: ;
    esi = eax;
    PUSH32(esp, 0x0001167Au); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_0001167A: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00011688u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011688: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x14); PUSH32(esp, 0x00011694u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011694: ;
    PUSH32(esp, 0x00011699u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00011699: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000116A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000116A2: ;
    PUSH32(esp, 0x000116A7u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_000116A7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000116AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000116AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000116B7; /* jne: not equal / not zero */

loc_000116B5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000116B7: ;
    PUSH32(esp, 0x000116BCu); RECOMP_ABI_CALL(0x00152940u, sub_00152940); /* call 0x00152940 */

loc_000116BC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000116C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000116C6: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000116D0
 * Original: 0x000116D0 - 0x00011800 (304 bytes, 94 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000116D0(void)
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

loc_000116D0: ;
    esp = esp - 0x48;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = eax;
    esi = ecx;
    PUSH32(esp, 0x000116E4u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_000116E4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000116EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000116EB: ;
    fp_top() = fp_top() - MEMF(esi + 0xC); /* fsub dword ptr [esi + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000117F2; /* jnp: not parity */

loc_000116FF: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00011734; /* jne: not equal / not zero */

loc_00011705: ;
    PUSH32(esp, 0x0001170Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_0001170A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011711u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011711: ;
    PUSH32(esp, 0x00011716u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00011716: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011722u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011722: ;
    PUSH32(esp, 0x00011727u); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_00011727: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00011730u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011730: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 4;

loc_00011734: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001174C; /* jne: not equal / not zero */

loc_0001173A: ;
    PUSH32(esp, 0x0001173Fu); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0001173F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00011748u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011748: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 2;

loc_0001174C: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000117F2; /* jne: not equal / not zero */

loc_00011756: ;
    PUSH32(esp, 0x0001175Bu); RECOMP_ABI_CALL(0x000A81F0u, sub_000A81F0); /* call 0x000A81F0 */

loc_0001175B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00011762u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011762: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000117F2; /* jne: not equal / not zero */

loc_0001176A: ;
    MEM8(esp + 7) = LO8(eax);
    PUSH32(esp, 0x00011773u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00011773: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C6EC8);
    PUSH32(esp, 0x3C6EC0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0001178Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001178B: ;
    PUSH32(esp, 0x00011790u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_00011790: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C6EB4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0001179Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001179C: ;
    PUSH32(esp, 0x40);
    eax = esp + 0xC;
    PUSH32(esp, 0x3C6EAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000117ADu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000117AD: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x3C6EAC);
    PUSH32(esp, ecx);
    MEM8(esp + 0x5B) = 0;
    PUSH32(esp, 0x000117C1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000117C1: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000117DD; /* je: equal / zero */

loc_000117C8: ;
    PUSH32(esp, 0x000117CDu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000117CD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000117DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000117DB: ;
    goto loc_000117EE;

loc_000117DD: ;
    PUSH32(esp, 0x000117E2u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_000117E2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C6E8C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000117EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000117EE: ;
    MEM8(esi + 0x10) = MEM8(esi + 0x10) | 1;

loc_000117F2: ;
    ecx = MEM32(esp + 0x48);
    POP32(esp, esi);
    PUSH32(esp, 0x000117FCu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000117FC: ;
    esp = esp + 0x48;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00011800
 * Original: 0x00011800 - 0x0001180A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011800(void)
{

loc_00011800: ;
    eax = ecx;
    MEM32(eax + 0x44) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00011810
 * Original: 0x00011810 - 0x000119DE (462 bytes, 151 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011810: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00011819u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_00011819: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011820u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011820: ;
    PUSH32(esp, 0x00011825u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_00011825: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001182Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001182C: ;
    PUSH32(esp, 0x00011831u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_00011831: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011838u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011838: ;
    PUSH32(esp, 0x0001183Du); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0001183D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011844u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011844: ;
    PUSH32(esp, 0x00011849u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_00011849: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011850u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011850: ;
    PUSH32(esp, 0x00011855u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00011855: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x0001185Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001185F: ;
    PUSH32(esp, 0x00011864u); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_00011864: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0001186Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001186B: ;
    PUSH32(esp, 0x00011870u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_00011870: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011877u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011877: ;
    PUSH32(esp, 0x0001187Cu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0001187C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011883u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011883: ;
    PUSH32(esp, 0x00011888u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_00011888: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0001188Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001188F: ;
    PUSH32(esp, 0x00011894u); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_00011894: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001189Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001189B: ;
    PUSH32(esp, 0x000118A0u); RECOMP_ABI_CALL(0x00153570u, sub_00153570); /* call 0x00153570 */

loc_000118A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000118A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000118A7: ;
    PUSH32(esp, 0x000118ACu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000118AC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000118B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000118B3: ;
    PUSH32(esp, 0x000118B8u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_000118B8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000118BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000118BF: ;
    PUSH32(esp, 0x000118C4u); RECOMP_ABI_CALL(0x001463F0u, sub_001463F0); /* call 0x001463F0 */

loc_000118C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000118CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000118CB: ;
    PUSH32(esp, 0x000118D0u); RECOMP_ABI_CALL(0x00131660u, sub_00131660); /* call 0x00131660 */

loc_000118D0: ;
    ecx = eax;
    PUSH32(esp, 0x000118D7u); RECOMP_ABI_CALL(0x00131280u, sub_00131280); /* call 0x00131280 */

loc_000118D7: ;
    PUSH32(esp, 0x000118DCu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_000118DC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000118E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000118E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000118EAu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_000118EA: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000118F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000118F4: ;
    PUSH32(esp, 0x000118F9u); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_000118F9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011900u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011900: ;
    PUSH32(esp, 0x00011905u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00011905: ;
    PUSH32(esp, 0x0001190Au); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0001190A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00011911u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011911: ;
    PUSH32(esp, 0x00011916u); RECOMP_ABI_CALL(0x0011D8C0u, sub_0011D8C0); /* call 0x0011D8C0 */

loc_00011916: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001191Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001191D: ;
    PUSH32(esp, 0x00011922u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00011922: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001192Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001192D: ;
    PUSH32(esp, 0x00011932u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00011932: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001193Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001193D: ;
    PUSH32(esp, 0x00011942u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00011942: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001194Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001194D: ;
    PUSH32(esp, 0x00011952u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00011952: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001195Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001195D: ;
    PUSH32(esp, 0x00011962u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00011962: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001196Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001196D: ;
    PUSH32(esp, 0x00011972u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00011972: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001197Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001197D: ;
    PUSH32(esp, 0x00011982u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_00011982: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xB);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001198Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001198D: ;
    PUSH32(esp, 0x00011992u); RECOMP_ABI_CALL(0x0005E660u, sub_0005E660); /* call 0x0005E660 */

loc_00011992: ;
    PUSH32(esp, 0x00011997u); RECOMP_ABI_CALL(0x0005E6D0u, sub_0005E6D0); /* call 0x0005E6D0 */

loc_00011997: ;
    PUSH32(esp, 0x0001199Cu); RECOMP_ABI_CALL(0x00025350u, sub_00025350); /* call 0x00025350 */

loc_0001199C: ;
    PUSH32(esp, 0x000119A1u); RECOMP_ABI_CALL(0x000C9420u, sub_000C9420); /* call 0x000C9420 */

loc_000119A1: ;
    PUSH32(esp, 0x000119A6u); RECOMP_ABI_CALL(0x000E8BB0u, sub_000E8BB0); /* call 0x000E8BB0 */

loc_000119A6: ;
    PUSH32(esp, 0x000119ABu); RECOMP_ABI_CALL(0x001812B0u, sub_001812B0); /* call 0x001812B0 */

loc_000119AB: ;
    PUSH32(esp, 0x000119B0u); RECOMP_ABI_CALL(0x0017CFB0u, sub_0017CFB0); /* call 0x0017CFB0 */

loc_000119B0: ;
    PUSH32(esp, 0x000119B5u); RECOMP_ABI_CALL(0x000E1660u, sub_000E1660); /* call 0x000E1660 */

loc_000119B5: ;
    PUSH32(esp, 0x000119BAu); RECOMP_ABI_CALL(0x00185700u, sub_00185700); /* call 0x00185700 */

loc_000119BA: ;
    esi = MEM32(0x47C53C);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_000119CD; /* js: sign (negative) */

loc_000119C3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi * 4 + 0x47C4F8); PUSH32(esp, 0x000119CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000119CA: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000119C3; /* jns: not sign (positive) */

loc_000119CD: ;
    MEM32(0x47C53C) = 0;
    MEM8(edi + 0x10) = MEM8(edi + 0x10) & 0xF7;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000119E0
 * Original: 0x000119E0 - 0x000119EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000119E0(void)
{

loc_000119E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000119E8u); RECOMP_ABI_CALL(0x00011800u, sub_00011800); /* call 0x00011800 */

loc_000119E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000119F0
 * Original: 0x000119F0 - 0x00011A08 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000119F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000119F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x47C53C);
    MEM32(ecx * 4 + 0x47C4F8) = eax;
    MEM32(0x47C53C) = MEM32(0x47C53C) + 1;
    _fa = (uint32_t)(MEM32(0x47C53C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00011A10
 * Original: 0x00011A10 - 0x00011A15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011A10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011A10: ;
    g_seh_ebp = ebp; sub_00227D00(); return; /* tail jmp 0x00227D00 */

}

/**
 * sub_00011A20
 * Original: 0x00011A20 - 0x00011A36 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011A20: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011A35; /* jne: not equal / not zero */

loc_00011A30: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00011A35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011A40
 * Original: 0x00011A40 - 0x00011A5E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00011A40: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011A5D; /* je: equal / zero */

loc_00011A48: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011A5D; /* jne: not equal / not zero */

loc_00011A58: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00011A5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011A60
 * Original: 0x00011A60 - 0x00011E35 (981 bytes, 297 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00011A60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E052);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, 0x3C7054);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00011A8Au); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00011A8A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, 0x00011A92u); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_00011A92: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00011AAE; /* jl: less (signed <) */

loc_00011A9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00011AAE; /* jg: greater (signed >) */

loc_00011A9F: ;
    eax = MEM32(eax * 4 + 0x44B114);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C7038);
    goto loc_00011AB4;

loc_00011AAE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C701C);

loc_00011AB4: ;
    PUSH32(esp, 0x00011AB9u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00011AB9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    PUSH32(esp, 0x00011AC1u); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_00011AC1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00011ACDu); RECOMP_ABI_CALL(0x001E9C10u, sub_001E9C10); /* call 0x001E9C10 */

loc_00011ACD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C7000);
    PUSH32(esp, 0x00011AD8u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00011AD8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x00011AE0u); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_00011AE0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x00011AEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011AEA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C6FE4);
    PUSH32(esp, 0x00011AF5u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00011AF5: ;
    PUSH32(esp, 0x00011AFAu); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_00011AFA: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C6FC8);
    PUSH32(esp, 0x00011B09u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00011B09: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x00011B11u); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_00011B11: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00011B1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011B1B: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    ecx = esi;
    if ((eax == 0)) goto loc_00011B2B; /* je: equal / zero */

loc_00011B21: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00011B29u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011B29: ;
    goto loc_00011B35;

loc_00011B2B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00011B33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011B33: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_00011B35: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C6FAC);
    PUSH32(esp, 0x00011B41u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00011B41: ;
    PUSH32(esp, 0x00011B46u); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_00011B46: ;
    eax = MEM32(esi + 0x38);
    esi = MEM32(esi + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C6F90);
    PUSH32(esp, 0x00011B58u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00011B58: ;
    PUSH32(esp, 0x00011B5Du); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_00011B5D: ;
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, 0x00011B67u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00011B67: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    PUSH32(esp, 0x00011B6Fu); RECOMP_ABI_CALL(0x001EB1B0u, sub_001EB1B0); /* call 0x001EB1B0 */

loc_00011B6F: ;
    PUSH32(esp, 0x00011B74u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00011B74: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00011B83u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011B83: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = 1;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 8) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00011BCE; /* je: equal / zero */

loc_00011B9A: ;
    PUSH32(esp, 0x00011B9Fu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00011B9F: ;
    edx = MEM32(eax);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00011BAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011BAE: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = ebx;
    ebx = 3;
    MEM32(esp + 8) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00011BC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011BC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0x2C) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00011BD3; /* jne: not equal / not zero */

loc_00011BCE: ;
    MEM8(esp + 0x2C) = 1;

loc_00011BD3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00011C09; /* je: equal / zero */

loc_00011BE0: ;
    eax = MEM32(esp + 0x24);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 8) = ebx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00011C09; /* je: equal / zero */

loc_00011BF1: ;
    esi = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00011C09; /* jne: not equal / not zero */

loc_00011C04: ;
    PUSH32(esp, 0x00011C09u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00011C09: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00011C37; /* je: equal / zero */

loc_00011C15: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00011C37; /* je: equal / zero */

loc_00011C1F: ;
    ebx = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011C37; /* jne: not equal / not zero */

loc_00011C32: ;
    PUSH32(esp, 0x00011C37u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00011C37: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00011C52; /* je: equal / zero */

loc_00011C3F: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_00011C52: ;
    PUSH32(esp, 0x00011C57u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00011C57: ;
    edx = MEM32(eax);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011C66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011C66: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2B8); PUSH32(esp, 0x00011C78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011C78: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esp + 0x2C);
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = esi;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00011CA4; /* je: equal / zero */

loc_00011C8E: ;
    edx = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011CA4; /* jne: not equal / not zero */

loc_00011C9F: ;
    PUSH32(esp, 0x00011CA4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00011CA4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00011C3F; /* jne: not equal / not zero */

loc_00011CA8: ;
    PUSH32(esp, 0x00011CADu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00011CAD: ;
    edx = MEM32(eax);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011CBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011CBC: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF006600u);
    MEM32(esp + 0x20) = 3;
    { uint32_t _icall_target = MEM32(edx + 0x2C8); PUSH32(esp, 0x00011CD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011CD3: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = esi;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00011CF9; /* je: equal / zero */

loc_00011CE1: ;
    ebx = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011CF9; /* jne: not equal / not zero */

loc_00011CF4: ;
    PUSH32(esp, 0x00011CF9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00011CF9: ;
    PUSH32(esp, 0x00011CFEu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00011CFE: ;
    edx = MEM32(eax);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011D0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011D0D: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0x2C) = 4;
    { uint32_t _icall_target = MEM32(edx + 0x388); PUSH32(esp, 0x00011D27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011D27: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = esi;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00011D4D; /* je: equal / zero */

loc_00011D35: ;
    ebx = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011D4D; /* jne: not equal / not zero */

loc_00011D48: ;
    PUSH32(esp, 0x00011D4Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00011D4D: ;
    PUSH32(esp, 0x00011D52u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00011D52: ;
    edx = MEM32(eax);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011D61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011D61: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    MEM32(esp + 0x20) = 5;
    { uint32_t _icall_target = MEM32(edx + 0x2C4); PUSH32(esp, 0x00011D75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011D75: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = esi;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00011D9B; /* je: equal / zero */

loc_00011D83: ;
    ebx = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011D9B; /* jne: not equal / not zero */

loc_00011D96: ;
    PUSH32(esp, 0x00011D9Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00011D9B: ;
    PUSH32(esp, 0x00011DA0u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00011DA0: ;
    edx = MEM32(eax);
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011DAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011DAF: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = 6;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C0); PUSH32(esp, 0x00011DC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011DC1: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = esi;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00011DE7; /* je: equal / zero */

loc_00011DCF: ;
    ebx = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00011DE7; /* jne: not equal / not zero */

loc_00011DE2: ;
    PUSH32(esp, 0x00011DE7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00011DE7: ;
    PUSH32(esp, 0x00011DECu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00011DEC: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00011DFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011DFB: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = 7;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2BC); PUSH32(esp, 0x00011E0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011E0D: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x1C) = esi;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00011E33; /* je: equal / zero */

loc_00011E1B: ;
    esi = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00011E33; /* jne: not equal / not zero */

loc_00011E2E: ;
    PUSH32(esp, 0x00011E33u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00011E33: ;
    goto loc_00011E33;

}

/**
 * sub_00011E40
 * Original: 0x00011E40 - 0x00011EEE (174 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011E40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E068);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x5024C8));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    MEM8(0x5BC548) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00011E6E; /* jne: not equal / not zero */

loc_00011E69: ;
    PUSH32(esp, 0x00011E6Eu); RECOMP_ABI_CALL(0x0011DD40u, sub_0011DD40); /* call 0x0011DD40 */

loc_00011E6E: ;
    PUSH32(esp, 0x11A60);
    PUSH32(esp, 0x00011E78u); RECOMP_ABI_CALL(0x001E8DE0u, sub_001E8DE0); /* call 0x001E8DE0 */

loc_00011E78: ;
    PUSH32(esp, 0xC80);
    MEM8(0x46A3A5) = LO8(ebx);
    MEM8(0x46A3A6) = LO8(ebx);
    MEM8(0x46A3A8) = LO8(ebx);
    MEM8(0x46A3A9) = LO8(ebx);
    PUSH32(esp, 0x00011E9Au); RECOMP_ABI_CALL(0x00239E50u, sub_00239E50); /* call 0x00239E50 */

loc_00011E9A: ;
    esp = esp + 8;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x00011EA6u); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00011EA6: ;
    PUSH32(esp, 0x00011EABu); RECOMP_ABI_CALL(0x00290500u, sub_00290500); /* call 0x00290500 */

loc_00011EAB: ;
    PUSH32(esp, 0x00011EB0u); RECOMP_ABI_CALL(0x00303FD0u, sub_00303FD0); /* call 0x00303FD0 */

loc_00011EB0: ;
    PUSH32(esp, 0x00011EB5u); RECOMP_ABI_CALL(0x00304AD0u, sub_00304AD0); /* call 0x00304AD0 */

loc_00011EB5: ;
    PUSH32(esp, 0x00011EBAu); RECOMP_ABI_CALL(0x003042B0u, sub_003042B0); /* call 0x003042B0 */

loc_00011EBA: ;
    PUSH32(esp, 0x00011EBFu); RECOMP_ABI_CALL(0x00145340u, sub_00145340); /* call 0x00145340 */

loc_00011EBF: ;
    /* nop */

loc_00011EC0: ;
    PUSH32(esp, 0x00011EC5u); RECOMP_ABI_CALL(0x00011320u, sub_00011320); /* call 0x00011320 */

loc_00011EC5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00011ECBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011ECB: ;
    goto loc_00011ED0;

    /* nop */

loc_00011ED0: ;
    PUSH32(esp, 0x00011ED5u); RECOMP_ABI_CALL(0x00011320u, sub_00011320); /* call 0x00011320 */

loc_00011ED5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00011EDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011EDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00011ED0; /* jne: not equal / not zero */

loc_00011EE0: ;
    PUSH32(esp, 0x00011EE5u); RECOMP_ABI_CALL(0x00011320u, sub_00011320); /* call 0x00011320 */

loc_00011EE5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00011EECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011EEC: ;
    goto loc_00011EC0;

}

/**
 * sub_00011EF0
 * Original: 0x00011EF0 - 0x00011F0F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011EF0: ;
    eax = MEM32(0x47C544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F0E; /* je: equal / zero */

loc_00011EF9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011F01u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00011F01: ;
    esp = esp + 8;
    MEM32(0x47C544) = 0;

loc_00011F0E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011F10
 * Original: 0x00011F10 - 0x00011F2F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011F10: ;
    eax = MEM32(0x47C548);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F2E; /* je: equal / zero */

loc_00011F19: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00011F21u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00011F21: ;
    esp = esp + 8;
    MEM32(0x47C548) = 0;

loc_00011F2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00011F30
 * Original: 0x00011F30 - 0x00011F51 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F30(void)
{

loc_00011F30: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = ecx;
    esi = edi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00011F60
 * Original: 0x00011F60 - 0x00011F6E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F60(void)
{

loc_00011F60: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011F70
 * Original: 0x00011F70 - 0x00011FC7 (87 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00011F70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011F92; /* je: equal / zero */

loc_00011F86: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00011F92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011F92: ;
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011FAA; /* je: equal / zero */

loc_00011F9E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00011FAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011FAA: ;
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), 0x20000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00011FC2; /* je: equal / zero */

loc_00011FB6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00011FC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00011FC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00011FD0
 * Original: 0x00011FD0 - 0x00011FE9 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011FD0(void)
{

loc_00011FD0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00011FF0
 * Original: 0x00011FF0 - 0x00012007 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00011FF0(void)
{

loc_00011FF0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012010
 * Original: 0x00012010 - 0x00012027 (23 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012010(void)
{

loc_00012010: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00012030
 * Original: 0x00012030 - 0x0001205B (43 bytes, 14 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00012030(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012030: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012060
 * Original: 0x00012060 - 0x0001208F (47 bytes, 20 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00012060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012060: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
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
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012090
 * Original: 0x00012090 - 0x000120C4 (52 bytes, 12 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00012090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012090: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 0xC;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000120C1u); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_000120C1: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000120D0
 * Original: 0x000120D0 - 0x000120E9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000120D0(void)
{
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000120D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000120DFu); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_000120DF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000120F0
 * Original: 0x000120F0 - 0x00012124 (52 bytes, 19 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000120F0(void)
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

loc_000120F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00012112; /* jp: parity */

loc_0001210A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_00012112: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012121; /* jne: not equal / not zero */

loc_0001211C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 0xC)); /* fld float */

loc_00012121: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012130
 * Original: 0x00012130 - 0x000121B8 (136 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012130: ;
    esp = esp - 0x28;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(ecx + 0xC);
    fp_top() = fp_top() * MEMF(ecx + 0x14); /* fmul dword ptr [ecx + 0x14] */
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x20) = eax;
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x1C); /* fmul dword ptr [ecx + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    ecx = MEM32(ecx + 0x10);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x10) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    edx = eax;
    MEM32(edx) = ecx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 0x10) = ecx;
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000121C0
 * Original: 0x000121C0 - 0x00012249 (137 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000121C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000121C0: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000121CBu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000121CB: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x14); /* fmul dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x24) = eax;
    fp_top() = fp_top() * MEMF(esi + 0x18); /* fmul dword ptr [esi + 0x18] */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 0x1C); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    POP32(esp, esi);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = edx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    edx = eax;
    MEM32(edx) = ecx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 0x10) = ecx;
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012250
 * Original: 0x00012250 - 0x000122E9 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012250: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00012267; /* jl: less (signed <) */

loc_0001225E: ;
    eax = 0x24C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00012267: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0001227A; /* jne: not equal / not zero */

loc_00012278: ;
    edx = ~edx;

loc_0001227A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000122A4; /* jne: not equal / not zero */

loc_00012285: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000122DF; /* jge: greater or equal (signed >=) */

loc_00012292: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000122A0; /* jne: not equal / not zero */

loc_0001229E: ;
    edx = ~edx;

loc_000122A0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012285; /* je: equal / zero */

loc_000122A4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000122B2; /* jne: not equal / not zero */

loc_000122AC: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000122B2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000122BC; /* jne: not equal / not zero */

loc_000122B6: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000122BC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000122C7; /* jne: not equal / not zero */

loc_000122C1: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000122C7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000122D8; /* jne: not equal / not zero */

loc_000122CC: ;
    /* nop */

loc_000122D0: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000122D0; /* je: equal / zero */

loc_000122D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000122E4; /* jl: less (signed <) */

loc_000122DF: ;
    eax = 0x24C;

loc_000122E4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000122F0
 * Original: 0x000122F0 - 0x00012389 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000122F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000122F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00012307; /* jl: less (signed <) */

loc_000122FE: ;
    eax = 0x80;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00012307: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0001231A; /* jne: not equal / not zero */

loc_00012318: ;
    edx = ~edx;

loc_0001231A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012344; /* jne: not equal / not zero */

loc_00012325: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001237F; /* jge: greater or equal (signed >=) */

loc_00012332: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00012340; /* jne: not equal / not zero */

loc_0001233E: ;
    edx = ~edx;

loc_00012340: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012325; /* je: equal / zero */

loc_00012344: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012352; /* jne: not equal / not zero */

loc_0001234C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00012352: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001235C; /* jne: not equal / not zero */

loc_00012356: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0001235C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012367; /* jne: not equal / not zero */

loc_00012361: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00012367: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012378; /* jne: not equal / not zero */

loc_0001236C: ;
    /* nop */

loc_00012370: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012370; /* je: equal / zero */

loc_00012378: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012384; /* jl: less (signed <) */

loc_0001237F: ;
    eax = 0x80;

loc_00012384: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012390
 * Original: 0x00012390 - 0x00012429 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012390: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000123A7; /* jl: less (signed <) */

loc_0001239E: ;
    eax = 0xAF;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000123A7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000123BA; /* jne: not equal / not zero */

loc_000123B8: ;
    edx = ~edx;

loc_000123BA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000123E4; /* jne: not equal / not zero */

loc_000123C5: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0001241F; /* jge: greater or equal (signed >=) */

loc_000123D2: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000123E0; /* jne: not equal / not zero */

loc_000123DE: ;
    edx = ~edx;

loc_000123E0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000123C5; /* je: equal / zero */

loc_000123E4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000123F2; /* jne: not equal / not zero */

loc_000123EC: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000123F2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000123FC; /* jne: not equal / not zero */

loc_000123F6: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000123FC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012407; /* jne: not equal / not zero */

loc_00012401: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00012407: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012418; /* jne: not equal / not zero */

loc_0001240C: ;
    /* nop */

loc_00012410: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00012410; /* je: equal / zero */

loc_00012418: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00012424; /* jl: less (signed <) */

loc_0001241F: ;
    eax = 0xAF;

loc_00012424: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012430
 * Original: 0x00012430 - 0x00012484 (84 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012430: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = ecx;
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00012472; /* je: equal / zero */

loc_00012444: ;
    ebx = MEM32(edx);
    esi = MEM32(eax + ebx * 4 + 4);
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    esi = esi + eax + 0x8008;
    ebp = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0001247B; /* je: equal / zero */

loc_0001245F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & 0x1FFF;
    ecx = ebx;
    MEM32(edx) = ebx;
    esi = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012444; /* jne: not equal / not zero */

loc_00012472: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0001247B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00012490
 * Original: 0x00012490 - 0x000124E4 (84 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012490: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = ecx;
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000124D2; /* je: equal / zero */

loc_000124A4: ;
    ebx = MEM32(edx);
    esi = MEM32(eax + ebx * 4 + 4);
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    esi = esi + eax + 0x2008;
    ebp = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000124DB; /* je: equal / zero */

loc_000124BF: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & 0x7FF;
    ecx = ebx;
    MEM32(edx) = ebx;
    esi = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000124A4; /* jne: not equal / not zero */

loc_000124D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000124DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000124F0
 * Original: 0x000124F0 - 0x00012544 (84 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000124F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000124F0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = ecx;
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00012532; /* je: equal / zero */

loc_00012504: ;
    ebx = MEM32(edx);
    esi = MEM32(eax + ebx * 4 + 4);
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    esi = esi + eax + 0x1008;
    ebp = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0001253B; /* je: equal / zero */

loc_0001251F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & 0x3FF;
    ecx = ebx;
    MEM32(edx) = ebx;
    esi = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012504; /* jne: not equal / not zero */

loc_00012532: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0001253B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00012550
 * Original: 0x00012550 - 0x000125A4 (84 bytes, 37 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012550: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = ecx;
    ecx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00012592; /* je: equal / zero */

loc_00012564: ;
    ebx = MEM32(edx);
    esi = MEM32(eax + ebx * 4 + 4);
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    esi = esi + eax + 0x4008;
    ebp = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0001259B; /* je: equal / zero */

loc_0001257F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx & 0xFFF;
    ecx = ebx;
    MEM32(edx) = ebx;
    esi = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012564; /* jne: not equal / not zero */

loc_00012592: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0001259B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000125B0
 * Original: 0x000125B0 - 0x000125ED (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000125B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000125B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    eax = esi;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000125BE; /* jge: greater or equal (signed >=) */

loc_000125BC: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_000125BE: ;
    edx = MEM32(esp + 0xC);
    ecx = 1;

loc_000125C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000125CE; /* je: equal / zero */

loc_000125CB: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);

loc_000125CE: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000125DB; /* je: equal / zero */

loc_000125D4: ;
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    goto loc_000125C7;

loc_000125DB: ;
    POP32(esp, edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000125EA; /* jge: greater or equal (signed >=) */

loc_000125E1: ;
    eax = 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esp += 4; return; /* ret */

loc_000125EA: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000125F0
 * Original: 0x000125F0 - 0x0001263E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000125F0(void)
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

loc_000125F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00012602u); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_00012602: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001263A; /* je: equal / zero */

loc_00012609: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00012617u); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_00012617: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001263A; /* je: equal / zero */

loc_0001261E: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0001262Cu); RECOMP_ABI_CALL(0x00341446u, sub_00341446); /* call 0x00341446 */

loc_0001262C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0001263A; /* je: equal / zero */

loc_00012633: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0001263A: ;
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
 * sub_00012640
 * Original: 0x00012640 - 0x0001265F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012640: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3C70AC;
    if (TEST_Z(_fa, _fb)) goto loc_00012659; /* je: equal / zero */

loc_00012650: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00012656u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00012656: ;
    esp = esp + 4;

loc_00012659: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012660
 * Original: 0x00012660 - 0x000126C3 (99 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012660(void)
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

loc_00012660: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esi = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000126BF; /* jnp: not parity */

loc_00012676: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00012687u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00012687: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(esp + 0x18));
    MEM32(esi + 0x20) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x24) = 0;
    MEM8(esi + 0x28) = LO8(ecx);

loc_000126BF: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000126D0
 * Original: 0x000126D0 - 0x000126EC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000126D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000126E0u); RECOMP_ABI_CALL(0x000125B0u, sub_000125B0); /* call 0x000125B0 */

loc_000126E0: ;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000126F0
 * Original: 0x000126F0 - 0x00012866 (374 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000126F0(void)
{

loc_000126F0: ;
    esp = esp - 0x78;
    eax = MEM32(esp + 0x84);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0x80);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    eax = MEM32(eax);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    edx = esp + 0x8C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xA8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    MEM32(esp + 0x90) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0x461C4000;
    MEM32(esp + 0x4C) = 0xC61C4000u;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x3F800000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0;
    MEM32(esp + 0x84) = 0x461C4000;
    MEM32(esp + 0x88) = 0xC61C4000u;
    MEM32(esp + 0x8C) = 0;
    MEM32(esp + 0x90) = 0;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    MEM32(esp + 0xA0) = 0;
    MEM32(esp + 0xA4) = 0;
    MEM32(esp + 0xAC) = 0x461C4000;
    MEM32(esp + 0xB0) = 0xC61C4000u;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00012860u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00012860: ;
    esp = esp + 0x78;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00012870
 * Original: 0x00012870 - 0x000129B6 (326 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012870(void)
{

loc_00012870: ;
    esp = esp - 0x64;
    eax = MEM32(esp + 0x74);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x78);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0x84);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x84);
    PUSH32(esp, edx);
    eax = MEM32(eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x9C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0x461C4000;
    MEM32(esp + 0x54) = 0xC61C4000u;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x64) = 0x461C4000;
    MEM32(esp + 0x68) = 0xC61C4000u;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x78) = 0x461C4000;
    MEM32(esp + 0x7C) = 0xC61C4000u;
    MEM32(esp + 0x80) = 0;
    MEM32(esp + 0x84) = 0;
    MEM32(esp + 0x8C) = 0x461C4000;
    MEM32(esp + 0x90) = 0xC61C4000u;
    MEM32(esp + 0x94) = 0;
    MEM32(esp + 0x98) = 0;
    MEM32(esp + 0xA0) = 0x461C4000;
    MEM32(esp + 0xA4) = 0xC61C4000u;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x000129B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000129B0: ;
    esp = esp + 0x64;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000129C0
 * Original: 0x000129C0 - 0x000129FD (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000129C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000129C0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
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
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012A00
 * Original: 0x00012A00 - 0x00012A67 (103 bytes, 29 insns)
 * CC: cdecl, 8 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00012A00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012A00: ;
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x461C4000;
    MEM32(eax + 0x24) = 0xC61C4000u;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(eax + 0x20) = edx;
    fp_top() = fp_top() - MEMF(esp + 8); /* fsub dword ptr [esp + 8] */
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012A70
 * Original: 0x00012A70 - 0x00012A87 (23 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A70(void)
{

loc_00012A70: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xFFFFFF;
    edx = MEM32(ecx + eax * 4 + 4);
    eax = edx + ecx + 0x8008;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012A90
 * Original: 0x00012A90 - 0x00012B1F (143 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012A90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00012ABE; /* jle: less or equal (signed <=) */

loc_00012AA4: ;
    eax = 0x77;
    edx = ebp;
    goto loc_00012AB0;

    /* nop */

loc_00012AB0: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + eax + -119);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    ecx = ecx + edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012AB0; /* jne: not equal / not zero */

loc_00012ABE: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    eax = eax ^ ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    eax = eax & 0x1FFF;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00012ADCu); RECOMP_ABI_CALL(0x00012430u, sub_00012430); /* call 0x00012430 */

loc_00012ADC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_00012B11; /* jne: not equal / not zero */

loc_00012AE4: ;
    eax = MEM32(ebx + 0x8004);
    edi = eax + ebx + 0x8008;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x8004);
    MEM32(ebx + edx * 4 + 4) = ecx;
    MEM32(ebx + 0x8004) = MEM32(ebx + 0x8004) + ebp;

loc_00012B11: ;
    eax = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax << 0x18;
    POP32(esp, ebp);
    eax = eax | edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012B20
 * Original: 0x00012B20 - 0x00012BAF (143 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012B20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00012B4E; /* jle: less or equal (signed <=) */

loc_00012B34: ;
    eax = 0x77;
    edx = ebp;
    goto loc_00012B40;

    /* nop */

loc_00012B40: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + eax + -119);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    ecx = ecx + edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012B40; /* jne: not equal / not zero */

loc_00012B4E: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    eax = eax ^ ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    eax = eax & 0x7FF;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00012B6Cu); RECOMP_ABI_CALL(0x00012490u, sub_00012490); /* call 0x00012490 */

loc_00012B6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_00012BA1; /* jne: not equal / not zero */

loc_00012B74: ;
    eax = MEM32(ebx + 0x2004);
    edi = eax + ebx + 0x2008;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x2004);
    MEM32(ebx + edx * 4 + 4) = ecx;
    MEM32(ebx + 0x2004) = MEM32(ebx + 0x2004) + ebp;

loc_00012BA1: ;
    eax = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax << 0x18;
    POP32(esp, ebp);
    eax = eax | edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012BB0
 * Original: 0x00012BB0 - 0x00012C3F (143 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012BB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012BB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00012BDE; /* jle: less or equal (signed <=) */

loc_00012BC4: ;
    eax = 0x77;
    edx = ebp;
    goto loc_00012BD0;

    /* nop */

loc_00012BD0: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + eax + -119);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    ecx = ecx + edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012BD0; /* jne: not equal / not zero */

loc_00012BDE: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    eax = eax ^ ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    eax = eax & 0xFFF;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00012BFCu); RECOMP_ABI_CALL(0x00012550u, sub_00012550); /* call 0x00012550 */

loc_00012BFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = MEM32(esp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_00012C31; /* jne: not equal / not zero */

loc_00012C04: ;
    eax = MEM32(ebx + 0x4004);
    edi = eax + ebx + 0x4008;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(ebx + 0x4004);
    MEM32(ebx + edx * 4 + 4) = ecx;
    MEM32(ebx + 0x4004) = MEM32(ebx + 0x4004) + ebp;

loc_00012C31: ;
    eax = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax << 0x18;
    POP32(esp, ebp);
    eax = eax | edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00012C40
 * Original: 0x00012C40 - 0x00012C5B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00012C40: ;
    eax = MEM32(ecx + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x48) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    eax = MEM32(ecx + 0x4C);
    if (CMP_L(_fas, _fbs)) goto loc_00012C56; /* jl: less (signed <) */

loc_00012C4F: ;
    MEM32(ecx + 0x48) = 0;

loc_00012C56: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x4C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00012C60
 * Original: 0x00012C60 - 0x00012CCE (110 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00012C60: ;
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    ecx = eax + 0xC;
    PUSH32(esp, edi);
    edx = ecx;
    edx = edx - eax;
    edi = eax;
    edx = edx + esi + 8;
    edi = edi - esi;
    ebx = 3;
    edi = edi;

loc_00012C90: ;
    ebp = MEM32(edx + -8);
    MEM32(ecx) = ebp;
    ebp = MEM32(edx + -4);
    MEM32(ecx + 4) = ebp;
    ebp = MEM32(edx);
    MEM32(edi + edx) = ebp;
    ecx = ecx + 0xC;
    edx = edx + 0xC;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00012C90; /* jne: not equal / not zero */

loc_00012CA9: ;
    ecx = MEM32(esi + 0x30);
    MEM32(eax + 0x30) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(esi + 0x38);
    MEM32(eax + 0x38) = ecx;
    edx = MEM32(esi + 0x3C);
    POP32(esp, edi);
    MEM32(eax + 0x3C) = edx;
    ecx = MEM32(esi + 0x40);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x40) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012CD0
 * Original: 0x00012CD0 - 0x00012D80 (176 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012CD0(void)
{

loc_00012CD0: ;
    eax = ecx;
    MEM32(eax) = 0x3C7124;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    edx = 0xC61C4000u;
    MEM32(eax + 0x64) = edx;
    PUSH32(esp, esi);
    esi = 0x461C4000;
    MEM32(eax + 0x60) = esi;
    MEM32(eax + 0x74) = esi;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x78) = edx;
    MEM32(eax + 0x88) = esi;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x80) = ecx;
    MEM32(eax + 0x84) = ecx;
    MEM32(eax + 0x8C) = edx;
    MEM32(eax + 0x9C) = esi;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = ecx;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0xA0) = edx;
    MEM32(eax + 0xB0) = esi;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0xAC) = ecx;
    MEM32(eax + 0xB4) = edx;
    MEM32(eax + 0xC4) = esi;
    MEM32(eax + 0xB8) = ecx;
    MEM32(eax + 0xBC) = ecx;
    MEM32(eax + 0xC0) = ecx;
    MEM32(eax + 0xC8) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012D80
 * Original: 0x00012D80 - 0x00012D90 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D80(void)
{

loc_00012D80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012D90
 * Original: 0x00012D90 - 0x00012D9D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012D90(void)
{

loc_00012D90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xEC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012DA0
 * Original: 0x00012DA0 - 0x00012DAA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012DA0(void)
{

loc_00012DA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012DB0
 * Original: 0x00012DB0 - 0x00012DB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012DB0(void)
{

loc_00012DB0: ;
    eax = MEM32(ecx + 0xE8);
    esp += 4; return; /* ret */

}

/**
 * sub_00012DC0
 * Original: 0x00012DC0 - 0x00012DC7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012DC0(void)
{

loc_00012DC0: ;
    eax = MEM32(ecx + 0xCC);
    esp += 4; return; /* ret */

}

/**
 * sub_00012DD0
 * Original: 0x00012DD0 - 0x00012DD7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012DD0(void)
{

loc_00012DD0: ;
    eax = MEM32(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_00012DE0
 * Original: 0x00012DE0 - 0x00012DE7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012DE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012DE0: ;
    fp_push(MEMF(ecx + 0xD4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012DF0
 * Original: 0x00012DF0 - 0x00012DF4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012DF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012DF0: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012E00
 * Original: 0x00012E00 - 0x00012E07 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00012E00: ;
    fp_push(MEMF(ecx + 0xD8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012E10
 * Original: 0x00012E10 - 0x00012E17 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E10(void)
{

loc_00012E10: ;
    eax = MEM32(ecx + 0xEC);
    esp += 4; return; /* ret */

}

/**
 * sub_00012E20
 * Original: 0x00012E20 - 0x00012E38 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E20(void)
{

loc_00012E20: ;
    edx = MEM32(ecx + 0x2C);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x34);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012E40
 * Original: 0x00012E40 - 0x00012E58 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E40(void)
{

loc_00012E40: ;
    edx = MEM32(ecx + 0x38);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x40);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012E60
 * Original: 0x00012E60 - 0x00012E78 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E60(void)
{

loc_00012E60: ;
    edx = MEM32(ecx + 0x44);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x4C);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012E80
 * Original: 0x00012E80 - 0x00012EA1 (33 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012E80(void)
{

loc_00012E80: ;
    edx = MEM32(ecx + 0xDC);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xE0);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0xE4);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00012EB0
 * Original: 0x00012EB0 - 0x00012EDF (47 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012EB0(void)
{

loc_00012EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00012EB8u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00012EB8: ;
    SET_LO8(ecx, MEM8(esi + 0xF0));
    eax = 0; /* xor self */
    MEM32(esi + 0x118) = eax;
    SET_LO8(ecx, LO8(ecx) | 4);
    MEM32(esi + 0x120) = eax;
    MEM32(esi) = 0x3C720C;
    MEM8(esi + 0xF0) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00012EE0
 * Original: 0x00012EE0 - 0x00012F01 (33 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012EE0(void)
{

loc_00012EE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xF4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0xF8) = edx;
    MEM32(ecx + 0xFC) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00012F10
 * Original: 0x00012F10 - 0x00012F40 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F10(void)
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

loc_00012F10: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00012F24u); RECOMP_ABI_CALL(0x0001E200u, sub_0001E200); /* call 0x0001E200 */

loc_00012F24: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00012F3B; /* jne: not equal / not zero */

loc_00012F36: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00012F3B: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00012F40
 * Original: 0x00012F40 - 0x00012F46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F40(void)
{

loc_00012F40: ;
    eax = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_00012F50
 * Original: 0x00012F50 - 0x00013037 (231 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00012F50(void)
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

loc_00012F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xE8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0xF0));
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00012F69; /* je: equal / zero */

loc_00012F65: ;
    SET_LO8(eax, LO8(eax) | 1);
    goto loc_00012F6B;

loc_00012F69: ;
    SET_LO8(eax, LO8(eax) & 0xFE);

loc_00012F6B: ;
    edi = MEM32(esp + 0xC);
    MEM8(esi + 0xF0) = LO8(eax);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) | 4);
    MEM8(esi + 0xF0) = LO8(ecx);
    eax = MEM32(edi);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 4);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(eax);
    MEM32(esi + 0x38) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x3C) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x44) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x50) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00013032; /* je: equal / zero */

loc_00012FC9: ;
    eax = MEM32(esi + 0xE8);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00013016; /* jns: not sign (positive) */

loc_00012FD3: ;
    PUSH32(esp, 0x00012FD8u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00012FD8: ;
    fp_top() = fp_top() * MEMF(0x3C72F0); /* fmul dword ptr [0x3c72f0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00012FE7u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00012FE7: ;
    fp_top() = fp_top() * MEMF(0x3C72F0); /* fmul dword ptr [0x3c72f0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00012FF6u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00012FF6: ;
    fp_top() = fp_top() * MEMF(0x3C72F0); /* fmul dword ptr [0x3c72f0] */
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0xF8) = edx;
    MEMF(esi + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xFC) = eax;

loc_00013016: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001301Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001301E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    esi = esi + 0xF4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00013032u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00013032: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013040
 * Original: 0x00013040 - 0x00013084 (68 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013040(void)
{

loc_00013040: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013048u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00013048: ;
    MEM32(esi) = 0x3C72FC;
    MEM32(esi + 0xF0) = 0xFFFFFFFFu;
    eax = 0; /* xor self */
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0x100) = 0x461C4000;
    MEM32(esi + 0x104) = 0xC61C4000u;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013090
 * Original: 0x00013090 - 0x000130C3 (51 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013090(void)
{

loc_00013090: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0xF4) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xF8) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xFC) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x100) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x104) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000130D0
 * Original: 0x000130D0 - 0x000130D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000130D0(void)
{

loc_000130D0: ;
    eax = 0xD;
    esp += 4; return; /* ret */

}

/**
 * sub_000130E0
 * Original: 0x000130E0 - 0x000130FA (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000130E0(void)
{

loc_000130E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000130E8u); RECOMP_ABI_CALL(0x0001D2A0u, sub_0001D2A0); /* call 0x0001D2A0 */

loc_000130E8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013100
 * Original: 0x00013100 - 0x00013106 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013100(void)
{

loc_00013100: ;
    eax = 0xF;
    esp += 4; return; /* ret */

}

/**
 * sub_00013110
 * Original: 0x00013110 - 0x0001314F (63 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013110(void)
{

loc_00013110: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x1C) = edx;
    eax = MEM32(eax + 0x24);
    MEM32(ecx + 0x20) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013150
 * Original: 0x00013150 - 0x0001317F (47 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00013150(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00013150: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    MEM32(ecx + 0x110) = 0;
    MEM32(ecx + 0xF8) = eax;
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013180
 * Original: 0x00013180 - 0x0001319B (27 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00013180(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00013180: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C76B0); /* fmul dword ptr [0x3c76b0] */
    MEMF(ecx + 0xFC) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(ecx + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000131A0
 * Original: 0x000131A0 - 0x000131B7 (23 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000131A0(void)
{

loc_000131A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x100) = eax;
    MEM32(ecx + 0x104) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000131C0
 * Original: 0x000131C0 - 0x000131C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000131C0(void)
{

loc_000131C0: ;
    eax = 0x12;
    esp += 4; return; /* ret */

}

/**
 * sub_000131D0
 * Original: 0x000131D0 - 0x0001320A (58 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000131D0(void)
{

loc_000131D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000131D8u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_000131D8: ;
    eax = esi + 0xF8;
    MEM32(esi + 0xF0) = 0x3C70A4;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x3C76C4;
    MEM32(esi + 0xF0) = 0x3C76B8;
    PUSH32(esp, 0x00013203u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00013203: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013210
 * Original: 0x00013210 - 0x00013231 (33 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013210(void)
{

loc_00013210: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x138) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x13C) = edx;
    MEM32(ecx + 0x140) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00013240
 * Original: 0x00013240 - 0x0001328A (74 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013240(void)
{

loc_00013240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013248u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00013248: ;
    eax = esi + 0xF8;
    MEM32(esi + 0xF0) = 0x3C70A4;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x3C76C4;
    MEM32(esi + 0xF0) = 0x3C76B8;
    PUSH32(esp, 0x00013273u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00013273: ;
    esp = esp + 8;
    MEM32(esi) = 0x3C77BC;
    MEM32(esi + 0xF0) = 0x3C77B0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013290
 * Original: 0x00013290 - 0x000132AB (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013290(void)
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

loc_00013290: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x24); /* fadd dword ptr [ecx + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000132A6; /* jne: not equal / not zero */

loc_000132A1: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_000132A6: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000132B0
 * Original: 0x000132B0 - 0x000132B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132B0(void)
{

loc_000132B0: ;
    eax = 0xE;
    esp += 4; return; /* ret */

}

/**
 * sub_000132C0
 * Original: 0x000132C0 - 0x000132FA (58 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000132C0(void)
{

loc_000132C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000132C8u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_000132C8: ;
    eax = esi + 0x11C;
    MEM32(esi + 0xF0) = 0x3C70A4;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x3C78B4;
    MEM32(esi + 0xF0) = 0x3C78A8;
    PUSH32(esp, 0x000132F3u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000132F3: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013300
 * Original: 0x00013300 - 0x0001333B (59 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013300(void)
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

loc_00013300: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0001331Fu); RECOMP_ABI_CALL(0x0001F820u, sub_0001F820); /* call 0x0001F820 */

loc_0001331F: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013336; /* jne: not equal / not zero */

loc_00013331: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00013336: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013340
 * Original: 0x00013340 - 0x0001337F (63 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013340(void)
{

loc_00013340: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x104) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x108) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x10C) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x110) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x114) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x118) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013380
 * Original: 0x00013380 - 0x000133CA (74 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013380(void)
{

loc_00013380: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013388u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00013388: ;
    eax = esi + 0xF8;
    MEM32(esi + 0xF0) = 0x3C70A4;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x3C76C4;
    MEM32(esi + 0xF0) = 0x3C76B8;
    PUSH32(esp, 0x000133B3u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000133B3: ;
    esp = esp + 8;
    MEM32(esi) = 0x3C79AC;
    MEM32(esi + 0xF0) = 0x3C79A0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000133D0
 * Original: 0x000133D0 - 0x000133EE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133D0(void)
{

loc_000133D0: ;
    eax = ecx + 0x150;
    PUSH32(esp, eax);
    ecx = ecx + 0x144;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000133E8u); RECOMP_ABI_CALL(0x00120A30u, sub_00120A30); /* call 0x00120A30 */

loc_000133E8: ;
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000133F0
 * Original: 0x000133F0 - 0x0001342F (63 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000133F0(void)
{

loc_000133F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x144) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x148) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x14C) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0x150) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 0x154) = eax;
    MEM32(ecx + 0x158) = edx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00013430
 * Original: 0x00013430 - 0x000134A2 (114 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013430(void)
{

loc_00013430: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013438u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00013438: ;
    eax = esi + 0xF8;
    MEM32(esi + 0xF0) = 0x3C70A4;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x3C76C4;
    MEM32(esi + 0xF0) = 0x3C76B8;
    PUSH32(esp, 0x00013463u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00013463: ;
    MEM32(esi) = 0x3C7AA4;
    MEM32(esi + 0xF0) = 0x3C7A98;
    eax = 0; /* xor self */
    MEM32(esi + 0x150) = eax;
    MEM32(esi + 0x154) = eax;
    MEM32(esi + 0x158) = eax;
    esp = esp + 8;
    MEM32(esi + 0x15C) = 0x461C4000;
    MEM32(esi + 0x160) = 0xC61C4000u;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000134B0
 * Original: 0x000134B0 - 0x000134E3 (51 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000134B0(void)
{

loc_000134B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x150) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x154) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x158) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x15C) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x160) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000134F0
 * Original: 0x000134F0 - 0x000134F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000134F0(void)
{

loc_000134F0: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_00013500
 * Original: 0x00013500 - 0x000135E0 (224 bytes, 61 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00013500(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00013500: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    esp = esp - 0xC;
    eax = esp;
    esi = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00013533u); RECOMP_ABI_CALL(0x0001CD50u, sub_0001CD50); /* call 0x0001CD50 */

loc_00013533: ;
    eax = MEM32(edi);
    MEM32(esi + 0x144) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x148) = ecx;
    edx = MEM32(edi + 8);
    MEM32(esi + 0x14C) = edx;
    fp_push(MEMF(esi + 0x144)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    POP32(esp, edi);
    MEMF(esi + 0x144) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x148)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14C)); /* fld float */
    fp_push(MEMF(esi + 0x148)); /* fld float */
    fp_push(MEMF(esi + 0x144)); /* fld float */
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
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x144); /* fmul dword ptr [esi + 0x144] */
    MEMF(esi + 0x144) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x148); /* fmul dword ptr [esi + 0x148] */
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 0x14C); /* fmul dword ptr [esi + 0x14c] */
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000135E0
 * Original: 0x000135E0 - 0x00013678 (152 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000135E0(void)
{

loc_000135E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000135E8u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_000135E8: ;
    eax = esi + 0xF8;
    MEM32(esi + 0xF0) = 0x3C70A4;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x3C76C4;
    MEM32(esi + 0xF0) = 0x3C76B8;
    PUSH32(esp, 0x00013613u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00013613: ;
    MEM32(esi) = 0x3C7B9C;
    MEM32(esi + 0xF0) = 0x3C7B94;
    eax = 0; /* xor self */
    MEM32(esi + 0x144) = eax;
    MEM32(esi + 0x148) = eax;
    MEM32(esi + 0x14C) = eax;
    edx = 0x461C4000;
    MEM32(esi + 0x150) = edx;
    ecx = 0xC61C4000u;
    MEM32(esi + 0x154) = ecx;
    MEM32(esi + 0x158) = eax;
    MEM32(esi + 0x15C) = eax;
    MEM32(esi + 0x160) = eax;
    MEM32(esi + 0x164) = edx;
    MEM32(esi + 0x168) = ecx;
    MEM8(esi + 0x16C) = LO8(eax);
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013680
 * Original: 0x00013680 - 0x000136E3 (99 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013680(void)
{

loc_00013680: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x144) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x148) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x14C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x150) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x154) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x158) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x15C) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x160) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x164) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x168) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000136F0
 * Original: 0x000136F0 - 0x00013732 (66 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000136F0(void)
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

loc_000136F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00013716u); RECOMP_ABI_CALL(0x0001F140u, sub_0001F140); /* call 0x0001F140 */

loc_00013716: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001372D; /* jne: not equal / not zero */

loc_00013728: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0001372D: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013740
 * Original: 0x00013740 - 0x0001375F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013740(void)
{

loc_00013740: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    esi = ecx + 0x16C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013754u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00013754: ;
    esp = esp + 0xC;
    MEM8(esi + 7) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013760
 * Original: 0x00013760 - 0x000137F2 (146 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013760(void)
{

loc_00013760: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013768u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00013768: ;
    eax = esi + 0xF8;
    MEM32(esi + 0xF0) = 0x3C70A4;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    MEM32(esi) = 0x3C76C4;
    MEM32(esi + 0xF0) = 0x3C76B8;
    PUSH32(esp, 0x00013793u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00013793: ;
    MEM32(esi) = 0x3C7C9C;
    MEM32(esi + 0xF0) = 0x3C7C90;
    eax = 0; /* xor self */
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x170) = eax;
    MEM32(esi + 0x174) = eax;
    edx = 0x461C4000;
    MEM32(esi + 0x178) = edx;
    ecx = 0xC61C4000u;
    MEM32(esi + 0x17C) = ecx;
    MEM32(esi + 0x180) = eax;
    MEM32(esi + 0x184) = eax;
    MEM32(esi + 0x188) = eax;
    esp = esp + 8;
    MEM32(esi + 0x18C) = edx;
    MEM32(esi + 0x190) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013800
 * Original: 0x00013800 - 0x00013867 (103 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013800(void)
{

loc_00013800: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x144) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x148) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x14C) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x150) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x154) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x158) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 0x15C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x160) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(ecx + 0x164) = edx;
    MEM32(ecx + 0x168) = eax;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00013870
 * Original: 0x00013870 - 0x000138D3 (99 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013870(void)
{

loc_00013870: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x16C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x170) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x174) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x178) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x17C) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x180) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x184) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x188) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x18C) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x190) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000138E0
 * Original: 0x000138E0 - 0x000138E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000138E0(void)
{

loc_000138E0: ;
    eax = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_000138F0
 * Original: 0x000138F0 - 0x00013934 (68 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000138F0(void)
{

loc_000138F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000138F8u); RECOMP_ABI_CALL(0x00013760u, sub_00013760); /* call 0x00013760 */

loc_000138F8: ;
    MEM32(esi) = 0x3C7D94;
    MEM32(esi + 0xF0) = 0x3C7D88;
    eax = 0; /* xor self */
    MEM32(esi + 0x194) = eax;
    MEM32(esi + 0x198) = eax;
    MEM32(esi + 0x19C) = eax;
    MEM32(esi + 0x1A0) = 0x461C4000;
    MEM32(esi + 0x1A4) = 0xC61C4000u;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013940
 * Original: 0x00013940 - 0x0001397D (61 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013940(void)
{

loc_00013940: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x194) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x198) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x19C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x1A0) = edx;
    eax = MEM32(eax + 0x10);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1A4) = eax;
    MEM32(ecx + 0x1A8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00013980
 * Original: 0x00013980 - 0x00013986 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013980(void)
{

loc_00013980: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_00013990
 * Original: 0x00013990 - 0x00013A12 (130 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013990(void)
{

loc_00013990: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013998u); RECOMP_ABI_CALL(0x00013760u, sub_00013760); /* call 0x00013760 */

loc_00013998: ;
    MEM32(esi) = 0x3C7E8C;
    MEM32(esi + 0xF0) = 0x3C7E80;
    eax = 0; /* xor self */
    MEM32(esi + 0x194) = eax;
    MEM32(esi + 0x198) = eax;
    MEM32(esi + 0x19C) = eax;
    edx = 0x461C4000;
    MEM32(esi + 0x1A0) = edx;
    ecx = 0xC61C4000u;
    MEM32(esi + 0x1A4) = ecx;
    MEM32(esi + 0x1AC) = eax;
    MEM32(esi + 0x1B0) = eax;
    MEM32(esi + 0x1B4) = eax;
    MEM32(esi + 0x1B8) = edx;
    MEM32(esi + 0x1BC) = ecx;
    MEM32(esi + 0x1C0) = eax;
    MEM32(esi + 0x1C4) = eax;
    MEM32(esi + 0x1C8) = eax;
    MEM32(esi + 0x1CC) = edx;
    MEM32(esi + 0x1D0) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013A20
 * Original: 0x00013A20 - 0x00013A9B (123 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013A20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x1AC) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x1B0) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x1B4) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x1B8) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x1BC) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x1C0) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x1C4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x1C8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x1CC) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x1D0) = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx + 0x1A8) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_00013A98; /* jg: greater (signed >) */

loc_00013A8E: ;
    MEM32(ecx + 0x1A8) = 0x17;

loc_00013A98: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00013AA0
 * Original: 0x00013AA0 - 0x00013AD3 (51 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013AA0(void)
{

loc_00013AA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x194) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x198) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x19C) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x1A0) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 0x1A4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013AE0
 * Original: 0x00013AE0 - 0x00013B01 (33 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013AE0(void)
{

loc_00013AE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1D4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x1D8) = edx;
    MEM32(ecx + 0x1DC) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00013B10
 * Original: 0x00013B10 - 0x00013B7D (109 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B10(void)
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

loc_00013B10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    edx = esi + 0x38;
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00013B38u); RECOMP_ABI_CALL(0x0001F140u, sub_0001F140); /* call 0x0001F140 */

loc_00013B38: ;
    ecx = MEM32(esi + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esi + 0x15C;
    PUSH32(esp, edx);
    eax = esi + 0x150;
    PUSH32(esp, eax);
    ecx = esi + 0x144;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00013B5Fu); RECOMP_ABI_CALL(0x0001F140u, sub_0001F140); /* call 0x0001F140 */

loc_00013B5F: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013B78; /* jne: not equal / not zero */

loc_00013B73: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00013B78: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013B80
 * Original: 0x00013B80 - 0x00013BC4 (68 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013B80(void)
{

loc_00013B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00013B88u); RECOMP_ABI_CALL(0x00013760u, sub_00013760); /* call 0x00013760 */

loc_00013B88: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x194) = eax;
    MEM32(esi + 0x198) = eax;
    MEM32(esi + 0x19C) = eax;
    MEM32(esi + 0x1A0) = 0x461C4000;
    MEM32(esi + 0x1A4) = 0xC61C4000u;
    MEM32(esi) = 0x3C7F84;
    MEM32(esi + 0xF0) = 0x3C7F78;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013BD0
 * Original: 0x00013BD0 - 0x00013BD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013BD0(void)
{

loc_00013BD0: ;
    eax = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_00013BD8
 * Original: 0x00013BD8 - 0x00013BE0 (8 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013BD8(void)
{

loc_00013BD8: ;
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
 * sub_00013BE0
 * Original: 0x00013BE0 - 0x00013C55 (117 bytes, 38 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013BE0(void)
{

loc_00013BE0: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x40) = ecx;
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00013C60
 * Original: 0x00013C60 - 0x00013C83 (35 bytes, 12 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00013C60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00013C60: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    eax = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013C90
 * Original: 0x00013C90 - 0x00013CB1 (33 bytes, 12 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00013C90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00013C90: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013CC0
 * Original: 0x00013CC0 - 0x00013DB7 (247 bytes, 73 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00013CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00013CC0: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x00013CE6u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00013CE6: ;
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 4) = ecx;
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00013CFEu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00013CFE: ;
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    edx = MEM32(esi + 0x14);
    MEM32(esp + 4) = edx;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00013D16u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00013D16: ;
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    eax = MEM32(esp + 0x34);
    POP32(esp, esi);
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0xC); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x10); /* fmul dword ptr [eax + 0x10] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x14); /* fmul dword ptr [eax + 0x14] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(eax + 0x18); /* fmul dword ptr [eax + 0x18] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x1C); /* fmul dword ptr [eax + 0x1c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax + 0x20); /* fmul dword ptr [eax + 0x20] */
    eax = MEM32(esp + 0x2C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00013DC0
 * Original: 0x00013DC0 - 0x00013DE6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013DC0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013DCE; /* jne: not equal / not zero */

loc_00013DC7: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00013DCE: ;
    PUSH32(esp, 0x00013DD3u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00013DD3: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013DF0
 * Original: 0x00013DF0 - 0x00013E30 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00013DF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x6570);
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x62B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x62B4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00013E2A; /* jne: not equal / not zero */

loc_00013E08: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0x6298);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_00013E2A: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013E30
 * Original: 0x00013E30 - 0x00013EB0 (128 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013E30: ;
    eax = MEM32(ecx + 0x44E80);
    PUSH32(esp, edi);
    edi = ecx + 0x44E80;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013E5D; /* jne: not equal / not zero */

loc_00013E43: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x24C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013EA5; /* jge: greater or equal (signed >=) */

loc_00013E51: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013E43; /* je: equal / zero */

loc_00013E5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013E6A; /* jne: not equal / not zero */

loc_00013E64: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00013E6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013E74; /* jne: not equal / not zero */

loc_00013E6E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00013E74: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013E7E; /* jne: not equal / not zero */

loc_00013E78: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00013E7E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013E89; /* jne: not equal / not zero */

loc_00013E82: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013E82; /* je: equal / zero */

loc_00013E89: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x24C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013EA5; /* jge: greater or equal (signed >=) */

loc_00013E91: ;
    eax = edx;

loc_00013E93: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00013E9Eu); RECOMP_ABI_CALL(0x00012250u, sub_00012250); /* call 0x00012250 */

loc_00013E9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013E93; /* jl: less (signed <) */

loc_00013EA5: ;
    ecx = 0x13;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013EB0
 * Original: 0x00013EB0 - 0x00013EEB (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013EB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00013EE0; /* je: equal / zero */

loc_00013EBC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00013EE0; /* je: equal / zero */

loc_00013EC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013EC7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00013EC7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00013ED2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00013ED2: ;
    ecx = eax;
    PUSH32(esp, 0x00013ED9u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00013ED9: ;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00013EE0: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00013EF0
 * Original: 0x00013EF0 - 0x00013F74 (132 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013EF0: ;
    eax = MEM32(ecx + 0x2200);
    PUSH32(esp, esi);
    esi = ecx + 0x2200;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013F1D; /* jne: not equal / not zero */

loc_00013F03: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013F65; /* jge: greater or equal (signed >=) */

loc_00013F11: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013F03; /* je: equal / zero */

loc_00013F1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013F2A; /* jne: not equal / not zero */

loc_00013F24: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00013F2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013F34; /* jne: not equal / not zero */

loc_00013F2E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00013F34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013F3E; /* jne: not equal / not zero */

loc_00013F38: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00013F3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013F49; /* jne: not equal / not zero */

loc_00013F42: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013F42; /* je: equal / zero */

loc_00013F49: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00013F65; /* jge: greater or equal (signed >=) */

loc_00013F51: ;
    eax = edx;

loc_00013F53: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00013F5Eu); RECOMP_ABI_CALL(0x000122F0u, sub_000122F0); /* call 0x000122F0 */

loc_00013F5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013F53; /* jl: less (signed <) */

loc_00013F65: ;
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00013F80
 * Original: 0x00013F80 - 0x0001402D (173 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00013F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00013F80: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x5FB4);
    PUSH32(esp, edi);
    edi = ebx + 0x5FB4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013FBA; /* jne: not equal / not zero */

loc_00013F96: ;
    goto loc_00013FA0;

    /* nop */
    /* nop */

loc_00013FA0: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xAF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014017; /* jge: greater or equal (signed >=) */

loc_00013FAE: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013FA0; /* je: equal / zero */

loc_00013FBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013FC7; /* jne: not equal / not zero */

loc_00013FC1: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_00013FC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013FD1; /* jne: not equal / not zero */

loc_00013FCB: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00013FD1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013FDB; /* jne: not equal / not zero */

loc_00013FD5: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00013FDB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00013FE7; /* jne: not equal / not zero */

loc_00013FDF: ;
    /* nop */

loc_00013FE0: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00013FE0; /* je: equal / zero */

loc_00013FE7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xAF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014017; /* jge: greater or equal (signed >=) */

loc_00013FEF: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_00013FF2: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8C);
    ecx = ecx + ebx;
    PUSH32(esp, 0x00014001u); RECOMP_ABI_CALL(0x000258D0u, sub_000258D0); /* call 0x000258D0 */

loc_00014001: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0001400Cu); RECOMP_ABI_CALL(0x00012390u, sub_00012390); /* call 0x00012390 */

loc_0001400C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xAF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00013FF2; /* jl: less (signed <) */

loc_00014016: ;
    POP32(esp, esi);

loc_00014017: ;
    ecx = 0; /* xor self */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = ecx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00014030
 * Original: 0x00014030 - 0x000140B7 (135 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    esi = ecx + 0xF0;
    ebp = 0x10;
    ebx = 0; /* xor self */
    goto loc_00014050;

    /* nop */
    /* nop */

loc_00014050: ;
    edi = esi + -240;
    ecx = edi;
    PUSH32(esp, 0x0001405Du); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_0001405D: ;
    PUSH32(esp, 0x2E6B0);
    MEM32(esi) = 0x3C70A4;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0xC);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    MEM32(edi) = 0x3C75BC;
    MEM32(esi) = 0x3C75B4;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = 0x40800000;
    MEM32(esi + 0x1C) = 0x40C00000;
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x0001409Bu); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_0001409B: ;
    MEM32(esi + 0x1C0) = ebx;
    MEM32(esi + -32) = ebx;
    esi = esi + 0x2B4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00014050; /* jne: not equal / not zero */

loc_000140AD: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000140C0
 * Original: 0x000140C0 - 0x000140D7 (23 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000140C0(void)
{

loc_000140C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x204) = ecx;
    MEM32(eax + 0x208) = ecx;
    MEM32(eax + 0x20C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000140E0
 * Original: 0x000140E0 - 0x0001413F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000140E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000140E0: ;
    edx = ecx;
    eax = MEM32(edx + 0x40C);
    eax = MEM32(edx + eax * 4 + 0x304);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x414;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x40C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(edx + 0x40C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00014129; /* jl: less (signed <) */

loc_0001411F: ;
    MEM32(edx + 0x40C) = 0;

loc_00014129: ;
    MEM32(edx + 0x410) = MEM32(edx + 0x410) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x410)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x41C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x41C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014140
 * Original: 0x00014140 - 0x00014157 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014140(void)
{

loc_00014140: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x934) = ecx;
    MEM32(eax + 0x938) = ecx;
    MEM32(eax + 0x93C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00014160
 * Original: 0x00014160 - 0x0001416E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014160(void)
{

loc_00014160: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00014170
 * Original: 0x00014170 - 0x00014183 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014170: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014182; /* je: equal / zero */

loc_00014178: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00014182u); RECOMP_ABI_CALL(0x00012C60u, sub_00012C60); /* call 0x00012C60 */

loc_00014182: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00014190
 * Original: 0x00014190 - 0x000141A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014190(void)
{

loc_00014190: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x104) = ecx;
    MEM32(eax + 0x108) = ecx;
    MEM32(eax + 0x10C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000141B0
 * Original: 0x000141B0 - 0x000141C7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141B0(void)
{

loc_000141B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x2C0) = ecx;
    MEM32(eax + 0x2C4) = ecx;
    MEM32(eax + 0x2C8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000141D0
 * Original: 0x000141D0 - 0x000141E7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141D0(void)
{

loc_000141D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x20D4) = ecx;
    MEM32(eax + 0x20D8) = ecx;
    MEM32(eax + 0x20DC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000141F0
 * Original: 0x000141F0 - 0x00014207 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000141F0(void)
{

loc_000141F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0xBBC) = ecx;
    MEM32(eax + 0xBC0) = ecx;
    MEM32(eax + 0xBC4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00014210
 * Original: 0x00014210 - 0x0001421F (15 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00014210: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00014218u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00014218: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x3C)); return; /* indirect tail jmp */

}

/**
 * sub_00014220
 * Original: 0x00014220 - 0x00014282 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014220: ;
    edx = ecx;
    eax = MEM32(edx + 0x45804);
    eax = MEM32(edx + eax * 4 + 0x44ECC);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x4580C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x45804);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    MEM32(edx + 0x45804) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0001426C; /* jl: less (signed <) */

loc_00014262: ;
    MEM32(edx + 0x45804) = 0;

loc_0001426C: ;
    MEM32(edx + 0x45808) = MEM32(edx + 0x45808) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x45808)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x45858);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x45858) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014290
 * Original: 0x00014290 - 0x0001438F (255 bytes, 80 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014290(void)
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

loc_00014290: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x34);
    edi = esi + 0x2C;
    PUSH32(esp, 1);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = ecx;
    ecx = esi + 0x44;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x1C) = edx;
    edx = esi + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000142CFu); RECOMP_ABI_CALL(0x0001F140u, sub_0001F140); /* call 0x0001F140 */

loc_000142CF: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001436C; /* jne: not equal / not zero */

loc_000142E4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x14C) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x144) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14C)); /* fld float */
    fp_push(MEMF(esi + 0x148)); /* fld float */
    fp_push(MEMF(esi + 0x144)); /* fld float */
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
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x144); /* fmul dword ptr [esi + 0x144] */
    MEMF(esi + 0x144) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(esi + 0x148); /* fmul dword ptr [esi + 0x148] */
    MEMF(esi + 0x148) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 0x14C); /* fmul dword ptr [esi + 0x14c] */
    MEMF(esi + 0x14C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0001436C: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    POP32(esp, edi);
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    POP32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00014387; /* jne: not equal / not zero */

loc_0001437F: ;
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_00014387: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00014390
 * Original: 0x00014390 - 0x000144FC (364 bytes, 119 insns)
 * CC: cdecl, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00014390(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00014390: ;
    esp = esp - 0x38;
    eax = MEM32(esp + 0x3C);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x78); /* fmul dword ptr [eax + 0x78] */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    fp_top() = fp_top() + MEMF(eax + 0x74); /* fadd dword ptr [eax + 0x74] */
    ebx = esi + 0x18;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    fp_top() = fp_top() + MEMF(eax + 0x70); /* fadd dword ptr [eax + 0x70] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x64); /* fmul dword ptr [eax + 0x64] */
    fp_top() = fp_top() + MEMF(eax + 0x58); /* fadd dword ptr [eax + 0x58] */
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    fp_top() = fp_top() + MEMF(eax + 0x4C); /* fadd dword ptr [eax + 0x4c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = sin(fp_top()); /* fsin */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx); /* fmul dword ptr [ebx] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x1C); /* fmul dword ptr [esi + 0x1c] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x10); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x20); /* fmul dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x14); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x40); /* fmul dword ptr [eax + 0x40] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x44); /* fmul dword ptr [eax + 0x44] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x48); /* fmul dword ptr [eax + 0x48] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x54); /* fmul dword ptr [esp + 0x54] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x34); /* fmul dword ptr [eax + 0x34] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x38); /* fmul dword ptr [eax + 0x38] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x3C); /* fmul dword ptr [eax + 0x3c] */
    eax = MEM32(esp + 0x4C);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0x0001449Fu); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_0001449F: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(esi); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 8); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(edi); /* fmul dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 8); /* fmul dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    POP32(esp, esi);
    fp_top() = fp_top() * MEMF(ebx); /* fmul dword ptr [ebx] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 4); /* fmul dword ptr [ebx + 4] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx + 8); /* fmul dword ptr [ebx + 8] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00014500
 * Original: 0x00014500 - 0x0001453F (63 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014500: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00014532; /* je: equal / zero */

loc_0001450C: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014532; /* je: equal / zero */

loc_00014511: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00014517u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00014517: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00014522u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00014522: ;
    ecx = eax;
    PUSH32(esp, 0x00014529u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00014529: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00014532: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014540
 * Original: 0x00014540 - 0x0001459F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014540: ;
    edx = ecx;
    eax = MEM32(edx + 0x2B8C);
    eax = MEM32(edx + eax * 4 + 0x2B44);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x2B94;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x2B8C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(edx + 0x2B8C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00014589; /* jl: less (signed <) */

loc_0001457F: ;
    MEM32(edx + 0x2B8C) = 0;

loc_00014589: ;
    MEM32(edx + 0x2B90) = MEM32(edx + 0x2B90) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x2B90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2B98);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2B98) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000145A0
 * Original: 0x000145A0 - 0x000145AC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000145A0(void)
{

loc_000145A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000145A8u); RECOMP_ABI_CALL(0x000140C0u, sub_000140C0); /* call 0x000140C0 */

loc_000145A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000145B0
 * Original: 0x000145B0 - 0x00014612 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000145B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000145B0: ;
    edx = ecx;
    eax = MEM32(edx + 0x126C);
    eax = MEM32(edx + eax * 4 + 0x934);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1274;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x126C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    MEM32(edx + 0x126C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000145FC; /* jl: less (signed <) */

loc_000145F2: ;
    MEM32(edx + 0x126C) = 0;

loc_000145FC: ;
    MEM32(edx + 0x1270) = MEM32(edx + 0x1270) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1270)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x12C0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x12C0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014620
 * Original: 0x00014620 - 0x00014692 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014620: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x414;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x408);
    edi = MEM32(eax + 0x410);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(eax + 0x408) = ecx;
    MEM32(eax + 0x410) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00014678; /* jl: less (signed <) */

loc_00014667: ;
    MEM32(eax + 0x408) = 0;
    ecx = 0x3F;
    goto loc_00014679;

loc_00014678: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00014679: ;
    MEM32(eax + ecx * 4 + 0x304) = esi;
    ecx = MEM32(eax + 0x41C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x41C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000146A0
 * Original: 0x000146A0 - 0x000146AC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146A0(void)
{

loc_000146A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000146A8u); RECOMP_ABI_CALL(0x00014140u, sub_00014140); /* call 0x00014140 */

loc_000146A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000146B0
 * Original: 0x000146B0 - 0x000146BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146B0(void)
{

loc_000146B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000146B8u); RECOMP_ABI_CALL(0x00014160u, sub_00014160); /* call 0x00014160 */

loc_000146B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000146C0
 * Original: 0x000146C0 - 0x00014722 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000146C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000146C0: ;
    edx = ecx;
    eax = MEM32(edx + 0x21CC);
    eax = MEM32(edx + eax * 4 + 0x1954);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x21D4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x21CC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x21C (32-bit) */
    MEM32(edx + 0x21CC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0001470C; /* jl: less (signed <) */

loc_00014702: ;
    MEM32(edx + 0x21CC) = 0;

loc_0001470C: ;
    MEM32(edx + 0x21D0) = MEM32(edx + 0x21D0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x21D0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2218);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2218) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014730
 * Original: 0x00014730 - 0x00014792 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014730: ;
    edx = ecx;
    eax = MEM32(edx + 0x2418);
    eax = MEM32(edx + eax * 4 + 0x2210);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x2420;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x2418);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(edx + 0x2418) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0001477C; /* jl: less (signed <) */

loc_00014772: ;
    MEM32(edx + 0x2418) = 0;

loc_0001477C: ;
    MEM32(edx + 0x241C) = MEM32(edx + 0x241C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x241C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2430);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2430) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000147A0
 * Original: 0x000147A0 - 0x000147FD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000147A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000147A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x408) = esi;
    MEM32(ecx + 0x40C) = esi;
    MEM32(ecx + 0x410) = esi;
    edx = 0; /* xor self */
    goto loc_000147C0;

    /* nop */

loc_000147C0: ;
    eax = MEM32(ecx + 0x408);
    edi = MEM32(ecx + 0x410);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(ecx + 0x408) = eax;
    MEM32(ecx + 0x410) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000147EC; /* jl: less (signed <) */

loc_000147DF: ;
    MEM32(ecx + 0x408) = esi;
    eax = 0x3F;
    goto loc_000147ED;

loc_000147EC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000147ED: ;
    MEM32(ecx + eax * 4 + 0x304) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000147C0; /* jl: less (signed <) */

loc_000147FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014800
 * Original: 0x00014800 - 0x0001480C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014800(void)
{

loc_00014800: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014808u); RECOMP_ABI_CALL(0x00014190u, sub_00014190); /* call 0x00014190 */

loc_00014808: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014810
 * Original: 0x00014810 - 0x0001481C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014810(void)
{

loc_00014810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014818u); RECOMP_ABI_CALL(0x000141B0u, sub_000141B0); /* call 0x000141B0 */

loc_00014818: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014820
 * Original: 0x00014820 - 0x00014882 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014820: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x628C) = esi;
    MEM32(ecx + 0x6290) = esi;
    MEM32(ecx + 0x6294) = esi;
    edx = 0; /* xor self */
    goto loc_00014840;

    /* nop */

loc_00014840: ;
    eax = MEM32(ecx + 0x628C);
    edi = MEM32(ecx + 0x6294);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF (32-bit) */
    MEM32(ecx + 0x628C) = eax;
    MEM32(ecx + 0x6294) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0001486E; /* jl: less (signed <) */

loc_00014861: ;
    MEM32(ecx + 0x628C) = esi;
    eax = 0xAE;
    goto loc_0001486F;

loc_0001486E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001486F: ;
    MEM32(ecx + eax * 4 + 0x5FCC) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xAF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014840; /* jl: less (signed <) */

loc_0001487F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014890
 * Original: 0x00014890 - 0x000148F2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014890: ;
    edx = ecx;
    eax = MEM32(edx + 0x2B11C);
    eax = MEM32(edx + eax * 4 + 0x29044);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x2B124;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x2B11C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x834) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x834 (32-bit) */
    MEM32(edx + 0x2B11C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000148DC; /* jl: less (signed <) */

loc_000148D2: ;
    MEM32(edx + 0x2B11C) = 0;

loc_000148DC: ;
    MEM32(edx + 0x2B120) = MEM32(edx + 0x2B120) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x2B120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2B22C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2B22C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014900
 * Original: 0x00014900 - 0x0001490C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014900(void)
{

loc_00014900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014908u); RECOMP_ABI_CALL(0x000141D0u, sub_000141D0); /* call 0x000141D0 */

loc_00014908: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014910
 * Original: 0x00014910 - 0x00014972 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014910: ;
    edx = ecx;
    eax = MEM32(edx + 0x9864);
    eax = MEM32(edx + eax * 4 + 0x8CA4);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x986C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x9864);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2EE (32-bit) */
    MEM32(edx + 0x9864) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0001495C; /* jl: less (signed <) */

loc_00014952: ;
    MEM32(edx + 0x9864) = 0;

loc_0001495C: ;
    MEM32(edx + 0x9868) = MEM32(edx + 0x9868) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x9868)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x98CC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x98CC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014980
 * Original: 0x00014980 - 0x0001498C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014980(void)
{

loc_00014980: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00014988u); RECOMP_ABI_CALL(0x000141F0u, sub_000141F0); /* call 0x000141F0 */

loc_00014988: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014990
 * Original: 0x00014990 - 0x000149F2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014990: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x36B8) = esi;
    MEM32(ecx + 0x36BC) = esi;
    MEM32(ecx + 0x36C0) = esi;
    edx = 0; /* xor self */
    goto loc_000149B0;

    /* nop */

loc_000149B0: ;
    eax = MEM32(ecx + 0x36B8);
    edi = MEM32(ecx + 0x36C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF (32-bit) */
    MEM32(ecx + 0x36B8) = eax;
    MEM32(ecx + 0x36C0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000149DE; /* jl: less (signed <) */

loc_000149D1: ;
    MEM32(ecx + 0x36B8) = esi;
    eax = 0xAE;
    goto loc_000149DF;

loc_000149DE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000149DF: ;
    MEM32(ecx + eax * 4 + 0x33F8) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xAF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000149B0; /* jl: less (signed <) */

loc_000149EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014A00
 * Original: 0x00014A00 - 0x00014A82 (130 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014A00: ;
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
    edi = MEM32(ecx + eax + 0x2200);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x2200) = edi;
    MEM32(ecx + eax + 0x2420) = MEM32(ecx + eax + 0x2420) & edx;
    ecx = MEM32(eax + 0x2414);
    edx = MEM32(eax + 0x241C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(eax + 0x2414) = ecx;
    MEM32(eax + 0x241C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00014A68; /* jl: less (signed <) */

loc_00014A57: ;
    MEM32(eax + 0x2414) = 0;
    ecx = 0x7F;
    goto loc_00014A69;

loc_00014A68: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00014A69: ;
    MEM32(eax + ecx * 4 + 0x2210) = esi;
    ecx = MEM32(eax + 0x2430);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x2430) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014A90
 * Original: 0x00014A90 - 0x00014B5A (202 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014A90(void)
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

loc_00014A90: ;
    esp = esp - 0xC;
    eax = MEM32(0x47A050);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx + 0x404);
    edx = edi + edi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014B4A; /* jge: greater or equal (signed >=) */

loc_00014AB3: ;
    PUSH32(esp, esi);
    esi = edi + edi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014AD3; /* jge: greater or equal (signed >=) */

loc_00014ABC: ;
    eax = edi;
    eax = eax << 4;
    fp_push(MEMF(eax + ecx + 0x10)); /* fld float */
    eax = eax + ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00014AD3; /* je: equal / zero */

loc_00014AD1: ;
    edx = esi;

loc_00014AD3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014B49; /* je: equal / zero */

loc_00014AD7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    /* nop */

loc_00014AE0: ;
    fp_push(MEMF(ecx + edi * 8)); /* fld float */
    esi = ecx + edi * 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + edx * 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + edx*8] */
    edi = ecx + edx * 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00014B47; /* jne: not equal / not zero */

loc_00014AF3: ;
    ebx = edi;
    eax = MEM32(ebx);
    ebx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(edi) = ebp;
    ebx = MEM32(ebx + 4);
    MEM32(edi + 4) = ebx;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 4) = eax;
    eax = MEM32(ecx + 0x404);
    esi = edx + edx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    edi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00014B47; /* jge: greater or equal (signed >=) */

loc_00014B23: ;
    ebx = edx + edx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00014B41; /* jge: greater or equal (signed >=) */

loc_00014B2B: ;
    edx = edx << 4;
    fp_push(MEMF(edx + ecx + 0x10)); /* fld float */
    eax = edx + ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 8] */
    edx = ebx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00014B43; /* jne: not equal / not zero */

loc_00014B41: ;
    edx = esi;

loc_00014B43: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00014AE0; /* jne: not equal / not zero */

loc_00014B47: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00014B49: ;
    POP32(esp, esi);

loc_00014B4A: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    PUSH32(esp, 0x00014B54u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00014B54: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00014B60
 * Original: 0x00014B60 - 0x00014BC5 (101 bytes, 28 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014B60: ;
    eax = MEM32(ecx + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00014BC2; /* jg: greater (signed >) */

loc_00014B6B: ;
    edx = MEM32(esp + 4);
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(eax + ecx + 0xC) = edx;
    edx = MEM32(esp + 8);
    eax = eax + ecx + 0xC;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x24) = edx;
    MEM32(ecx + 0x2B3B4) = MEM32(ecx + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00014BC2: ;
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00014BD0
 * Original: 0x00014BD0 - 0x00014C19 (73 bytes, 20 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014BD0: ;
    eax = MEM32(ecx + 0x9910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00014C16; /* jg: greater (signed >) */

loc_00014BDB: ;
    edx = MEM32(esp + 4);
    eax = eax + eax * 2;
    eax = eax << 4;
    MEM32(eax + ecx + 0xC) = edx;
    edx = MEM32(esp + 8);
    eax = eax + ecx + 0xC;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = edx;
    MEM32(ecx + 0x9910) = MEM32(ecx + 0x9910) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x9910)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00014C16: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00014C20
 * Original: 0x00014C20 - 0x00014C79 (89 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014C20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00014C35; /* je: equal / zero */

loc_00014C2C: ;
    edx = eax + eax * 2;
    edi = MEM32(ecx + edx * 4 + 4);
    goto loc_00014C3B;

loc_00014C35: ;
    edi = MEM32(ecx + 0x2220);

loc_00014C3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = edx + edx * 2;
    esi = ecx + esi * 4;
    MEM32(esi + 4) = edi;
    MEM32(esi) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00014C5A; /* je: equal / zero */

loc_00014C51: ;
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 4) = edx;
    goto loc_00014C60;

loc_00014C5A: ;
    MEM32(ecx + 0x2220) = edx;

loc_00014C60: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014C6F; /* je: equal / zero */

loc_00014C65: ;
    eax = edi + edi * 2;
    MEM32(ecx + eax * 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00014C6F: ;
    MEM32(ecx + 0x221C) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014C80
 * Original: 0x00014C80 - 0x00014CD9 (89 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014C80: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00014C95; /* je: equal / zero */

loc_00014C8C: ;
    edx = eax + eax * 2;
    edi = MEM32(ecx + edx * 4 + 4);
    goto loc_00014C9B;

loc_00014C95: ;
    edi = MEM32(ecx + 0x424);

loc_00014C9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = edx + edx * 2;
    esi = ecx + esi * 4;
    MEM32(esi + 4) = edi;
    MEM32(esi) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00014CBA; /* je: equal / zero */

loc_00014CB1: ;
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 4) = edx;
    goto loc_00014CC0;

loc_00014CBA: ;
    MEM32(ecx + 0x424) = edx;

loc_00014CC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014CCF; /* je: equal / zero */

loc_00014CC5: ;
    eax = edi + edi * 2;
    MEM32(ecx + eax * 4) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_00014CCF: ;
    MEM32(ecx + 0x420) = edx;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00014CE0
 * Original: 0x00014CE0 - 0x00014D55 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014CE0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x21D4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x21C8);
    edi = MEM32(eax + 0x21D0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x21C (32-bit) */
    MEM32(eax + 0x21C8) = ecx;
    MEM32(eax + 0x21D0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00014D3B; /* jl: less (signed <) */

loc_00014D2A: ;
    MEM32(eax + 0x21C8) = 0;
    ecx = 0x21B;
    goto loc_00014D3C;

loc_00014D3B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00014D3C: ;
    MEM32(eax + ecx * 4 + 0x1954) = esi;
    ecx = MEM32(eax + 0x2218);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x2218) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014D60
 * Original: 0x00014D60 - 0x00014DC2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014D60: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2414) = esi;
    MEM32(ecx + 0x2418) = esi;
    MEM32(ecx + 0x241C) = esi;
    edx = 0; /* xor self */
    goto loc_00014D80;

    /* nop */

loc_00014D80: ;
    eax = MEM32(ecx + 0x2414);
    edi = MEM32(ecx + 0x241C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(ecx + 0x2414) = eax;
    MEM32(ecx + 0x241C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00014DAE; /* jl: less (signed <) */

loc_00014DA1: ;
    MEM32(ecx + 0x2414) = esi;
    eax = 0x7F;
    goto loc_00014DAF;

loc_00014DAE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00014DAF: ;
    MEM32(ecx + eax * 4 + 0x2210) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014D80; /* jl: less (signed <) */

loc_00014DBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014DD0
 * Original: 0x00014DD0 - 0x00014E41 (113 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014DD0(void)
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

loc_00014DD0: ;
    esp = esp - 0xC;
    eax = MEM32(0x47A050);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00014E31; /* je: equal / zero */

loc_00014DE5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_00014DE8: ;
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    edx = ecx + edi * 8;
    fp_push(MEMF(ecx + esi * 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00014E2E; /* jne: not equal / not zero */

loc_00014E01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00014E28; /* je: equal / zero */

loc_00014E05: ;
    eax = ecx + esi * 8;
    ebx = eax;
    edi = MEM32(ebx);
    ebx = MEM32(ebx + 4);
    MEM32(esp + 0x14) = ebx;
    ebx = edx;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebx = MEM32(ebx + 4);
    MEM32(eax + 4) = ebx;
    eax = MEM32(esp + 0x14);
    MEM32(edx) = edi;
    MEM32(edx + 4) = eax;

loc_00014E28: ;
    edi = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00014DE8; /* jne: not equal / not zero */

loc_00014E2E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00014E31: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    PUSH32(esp, 0x00014E3Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00014E3B: ;
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00014E50
 * Original: 0x00014E50 - 0x00014EB2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014E50: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1268) = esi;
    MEM32(ecx + 0x126C) = esi;
    MEM32(ecx + 0x1270) = esi;
    edx = 0; /* xor self */
    goto loc_00014E70;

    /* nop */

loc_00014E70: ;
    eax = MEM32(ecx + 0x1268);
    edi = MEM32(ecx + 0x1270);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    MEM32(ecx + 0x1268) = eax;
    MEM32(ecx + 0x1270) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00014E9E; /* jl: less (signed <) */

loc_00014E91: ;
    MEM32(ecx + 0x1268) = esi;
    eax = 0x24B;
    goto loc_00014E9F;

loc_00014E9E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00014E9F: ;
    MEM32(ecx + eax * 4 + 0x934) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x24C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00014E70; /* jl: less (signed <) */

loc_00014EAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014EC0
 * Original: 0x00014EC0 - 0x00014EF0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014EC0(void)
{

loc_00014EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x934;
    PUSH32(esp, 0x00014ECFu); RECOMP_ABI_CALL(0x000146A0u, sub_000146A0); /* call 0x000146A0 */

loc_00014ECF: ;
    eax = 0; /* xor self */
    ecx = 0x13;
    edi = esi + 0x1274;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x12C0) = eax;
    PUSH32(esp, 0x00014EEBu); RECOMP_ABI_CALL(0x00014E50u, sub_00014E50); /* call 0x00014E50 */

loc_00014EEB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014EF0
 * Original: 0x00014EF0 - 0x00014F65 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014EF0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x1274;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1268);
    edi = MEM32(eax + 0x1270);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    MEM32(eax + 0x1268) = ecx;
    MEM32(eax + 0x1270) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00014F4B; /* jl: less (signed <) */

loc_00014F3A: ;
    MEM32(eax + 0x1268) = 0;
    ecx = 0x24B;
    goto loc_00014F4C;

loc_00014F4B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00014F4C: ;
    MEM32(eax + ecx * 4 + 0x934) = esi;
    ecx = MEM32(eax + 0x12C0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x12C0) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00014F70
 * Original: 0x00014F70 - 0x00014FC8 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014F70(void)
{

loc_00014F70: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x5FB4;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(esi + 0x628C) = eax;
    MEM32(esi + 0x6290) = eax;
    MEM32(esi + 0x6294) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x6298;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    ecx = esi;
    MEM32(esi + 0x62B0) = eax;
    PUSH32(esp, 0x00014FC4u); RECOMP_ABI_CALL(0x00014820u, sub_00014820); /* call 0x00014820 */

loc_00014FC4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00014FD0
 * Original: 0x00014FD0 - 0x00015045 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00014FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00014FD0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x2B124;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x2B118);
    edi = MEM32(eax + 0x2B120);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x834) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x834 (32-bit) */
    MEM32(eax + 0x2B118) = ecx;
    MEM32(eax + 0x2B120) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0001502B; /* jl: less (signed <) */

loc_0001501A: ;
    MEM32(eax + 0x2B118) = 0;
    ecx = 0x833;
    goto loc_0001502C;

loc_0001502B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001502C: ;
    MEM32(eax + ecx * 4 + 0x29044) = esi;
    ecx = MEM32(eax + 0x2B22C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x2B22C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015050
 * Original: 0x00015050 - 0x000150C5 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015050: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x986C;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x9860);
    edi = MEM32(eax + 0x9868);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2EE (32-bit) */
    MEM32(eax + 0x9860) = ecx;
    MEM32(eax + 0x9868) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000150AB; /* jl: less (signed <) */

loc_0001509A: ;
    MEM32(eax + 0x9860) = 0;
    ecx = 0x2ED;
    goto loc_000150AC;

loc_000150AB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000150AC: ;
    MEM32(eax + ecx * 4 + 0x8CA4) = esi;
    ecx = MEM32(eax + 0x98CC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x98CC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000150D0
 * Original: 0x000150D0 - 0x00015132 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000150D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000150D0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x45800) = esi;
    MEM32(ecx + 0x45804) = esi;
    MEM32(ecx + 0x45808) = esi;
    edx = 0; /* xor self */
    goto loc_000150F0;

    /* nop */

loc_000150F0: ;
    eax = MEM32(ecx + 0x45800);
    edi = MEM32(ecx + 0x45808);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    MEM32(ecx + 0x45800) = eax;
    MEM32(ecx + 0x45808) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0001511E; /* jl: less (signed <) */

loc_00015111: ;
    MEM32(ecx + 0x45800) = esi;
    eax = 0x24B;
    goto loc_0001511F;

loc_0001511E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001511F: ;
    MEM32(ecx + eax * 4 + 0x44ECC) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x24C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000150F0; /* jl: less (signed <) */

loc_0001512F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015140
 * Original: 0x00015140 - 0x0001519D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015140: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2B88) = esi;
    MEM32(ecx + 0x2B8C) = esi;
    MEM32(ecx + 0x2B90) = esi;
    edx = 0; /* xor self */
    goto loc_00015160;

    /* nop */

loc_00015160: ;
    eax = MEM32(ecx + 0x2B88);
    edi = MEM32(ecx + 0x2B90);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ecx + 0x2B88) = eax;
    MEM32(ecx + 0x2B90) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0001518C; /* jl: less (signed <) */

loc_0001517F: ;
    MEM32(ecx + 0x2B88) = esi;
    eax = 0xF;
    goto loc_0001518D;

loc_0001518C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001518D: ;
    MEM32(ecx + eax * 4 + 0x2B44) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015160; /* jl: less (signed <) */

loc_0001519A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000151A0
 * Original: 0x000151A0 - 0x00015202 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000151A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000151A0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x21C8) = esi;
    MEM32(ecx + 0x21CC) = esi;
    MEM32(ecx + 0x21D0) = esi;
    edx = 0; /* xor self */
    goto loc_000151C0;

    /* nop */

loc_000151C0: ;
    eax = MEM32(ecx + 0x21C8);
    edi = MEM32(ecx + 0x21D0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21C (32-bit) */
    MEM32(ecx + 0x21C8) = eax;
    MEM32(ecx + 0x21D0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000151EE; /* jl: less (signed <) */

loc_000151E1: ;
    MEM32(ecx + 0x21C8) = esi;
    eax = 0x21B;
    goto loc_000151EF;

loc_000151EE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000151EF: ;
    MEM32(ecx + eax * 4 + 0x1954) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x21C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000151C0; /* jl: less (signed <) */

loc_000151FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015210
 * Original: 0x00015210 - 0x0001525E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015210: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0xAF;
    goto loc_00015220;

    /* nop */

loc_00015220: ;
    MEM8(eax) = 0;
    eax = eax + 0x4C;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00015220; /* jne: not equal / not zero */

loc_00015229: ;
    ecx = esi + 0x33F8;
    PUSH32(esp, 0x00015234u); RECOMP_ABI_CALL(0x00014810u, sub_00014810); /* call 0x00014810 */

loc_00015234: ;
    eax = 0; /* xor self */
    ecx = esi + 0x36C4;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    ecx = esi;
    MEM32(esi + 0x36DC) = eax;
    PUSH32(esp, 0x0001525Au); RECOMP_ABI_CALL(0x00014990u, sub_00014990); /* call 0x00014990 */

loc_0001525A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015260
 * Original: 0x00015260 - 0x000152C2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015260: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2B118) = esi;
    MEM32(ecx + 0x2B11C) = esi;
    MEM32(ecx + 0x2B120) = esi;
    edx = 0; /* xor self */
    goto loc_00015280;

    /* nop */

loc_00015280: ;
    eax = MEM32(ecx + 0x2B118);
    edi = MEM32(ecx + 0x2B120);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x834) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x834 (32-bit) */
    MEM32(ecx + 0x2B118) = eax;
    MEM32(ecx + 0x2B120) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000152AE; /* jl: less (signed <) */

loc_000152A1: ;
    MEM32(ecx + 0x2B118) = esi;
    eax = 0x833;
    goto loc_000152AF;

loc_000152AE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000152AF: ;
    MEM32(ecx + eax * 4 + 0x29044) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x834) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x834 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00015280; /* jl: less (signed <) */

loc_000152BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000152D0
 * Original: 0x000152D0 - 0x00015332 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000152D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000152D0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x9860) = esi;
    MEM32(ecx + 0x9864) = esi;
    MEM32(ecx + 0x9868) = esi;
    edx = 0; /* xor self */
    goto loc_000152F0;

    /* nop */

loc_000152F0: ;
    eax = MEM32(ecx + 0x9860);
    edi = MEM32(ecx + 0x9868);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2EE (32-bit) */
    MEM32(ecx + 0x9860) = eax;
    MEM32(ecx + 0x9868) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0001531E; /* jl: less (signed <) */

loc_00015311: ;
    MEM32(ecx + 0x9860) = esi;
    eax = 0x2ED;
    goto loc_0001531F;

loc_0001531E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001531F: ;
    MEM32(ecx + eax * 4 + 0x8CA4) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2EE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000152F0; /* jl: less (signed <) */

loc_0001532F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00015340
 * Original: 0x00015340 - 0x000153E8 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015340: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000153D6; /* je: equal / zero */

loc_0001536B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00015373u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015373: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_000153B7; /* je: equal / zero */

loc_000153AC: ;
    ecx = eax;
    PUSH32(esp, 0x000153B3u); RECOMP_ABI_CALL(0x000131D0u, sub_000131D0); /* call 0x000131D0 */

loc_000153B3: ;
    esi = eax;
    goto loc_000153B9;

loc_000153B7: ;
    esi = 0; /* xor self */

loc_000153B9: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000153C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000153C8: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000153D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000153D4: ;
    eax = esi;

loc_000153D6: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000153F0
 * Original: 0x000153F0 - 0x00015498 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000153F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000153F0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015486; /* je: equal / zero */

loc_0001541B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00015423u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015423: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00015467; /* je: equal / zero */

loc_0001545C: ;
    ecx = eax;
    PUSH32(esp, 0x00015463u); RECOMP_ABI_CALL(0x00013380u, sub_00013380); /* call 0x00013380 */

loc_00015463: ;
    esi = eax;
    goto loc_00015469;

loc_00015467: ;
    esi = 0; /* xor self */

loc_00015469: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015478u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015478: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015484u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015484: ;
    eax = esi;

loc_00015486: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000154A0
 * Original: 0x000154A0 - 0x00015548 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000154A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000154A0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015536; /* je: equal / zero */

loc_000154CB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000154D3u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_000154D3: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00015517; /* je: equal / zero */

loc_0001550C: ;
    ecx = eax;
    PUSH32(esp, 0x00015513u); RECOMP_ABI_CALL(0x00013430u, sub_00013430); /* call 0x00013430 */

loc_00015513: ;
    esi = eax;
    goto loc_00015519;

loc_00015517: ;
    esi = 0; /* xor self */

loc_00015519: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015528u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015528: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015534u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015534: ;
    eax = esi;

loc_00015536: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015550
 * Original: 0x00015550 - 0x000155F8 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015550: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000155E6; /* je: equal / zero */

loc_0001557B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00015583u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015583: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_000155C7; /* je: equal / zero */

loc_000155BC: ;
    ecx = eax;
    PUSH32(esp, 0x000155C3u); RECOMP_ABI_CALL(0x00013760u, sub_00013760); /* call 0x00013760 */

loc_000155C3: ;
    esi = eax;
    goto loc_000155C9;

loc_000155C7: ;
    esi = 0; /* xor self */

loc_000155C9: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000155D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000155D8: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000155E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000155E4: ;
    eax = esi;

loc_000155E6: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015600
 * Original: 0x00015600 - 0x000156A8 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015600: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015696; /* je: equal / zero */

loc_0001562B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00015633u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015633: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00015677; /* je: equal / zero */

loc_0001566C: ;
    ecx = eax;
    PUSH32(esp, 0x00015673u); RECOMP_ABI_CALL(0x000138F0u, sub_000138F0); /* call 0x000138F0 */

loc_00015673: ;
    esi = eax;
    goto loc_00015679;

loc_00015677: ;
    esi = 0; /* xor self */

loc_00015679: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015688u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015688: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015694u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015694: ;
    eax = esi;

loc_00015696: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000156B0
 * Original: 0x000156B0 - 0x00015758 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000156B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000156B0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015746; /* je: equal / zero */

loc_000156DB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000156E3u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_000156E3: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00015727; /* je: equal / zero */

loc_0001571C: ;
    ecx = eax;
    PUSH32(esp, 0x00015723u); RECOMP_ABI_CALL(0x00013990u, sub_00013990); /* call 0x00013990 */

loc_00015723: ;
    esi = eax;
    goto loc_00015729;

loc_00015727: ;
    esi = 0; /* xor self */

loc_00015729: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015738u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015738: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015744u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015744: ;
    eax = esi;

loc_00015746: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015760
 * Original: 0x00015760 - 0x00015808 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015760: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000157F6; /* je: equal / zero */

loc_0001578B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00015793u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015793: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_000157D7; /* je: equal / zero */

loc_000157CC: ;
    ecx = eax;
    PUSH32(esp, 0x000157D3u); RECOMP_ABI_CALL(0x00013B80u, sub_00013B80); /* call 0x00013B80 */

loc_000157D3: ;
    esi = eax;
    goto loc_000157D9;

loc_000157D7: ;
    esi = 0; /* xor self */

loc_000157D9: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000157E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000157E8: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000157F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000157F4: ;
    eax = esi;

loc_000157F6: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015810
 * Original: 0x00015810 - 0x00015889 (121 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015810: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x45858);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015882; /* je: equal / zero */

loc_00015823: ;
    PUSH32(esp, 0x00015828u); RECOMP_ABI_CALL(0x0001CB80u, sub_0001CB80); /* call 0x0001CB80 */

loc_00015828: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015882; /* je: equal / zero */

loc_0001582C: ;
    ecx = esi;
    PUSH32(esp, 0x00015833u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015833: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    if ((eax == 0)) goto loc_00015866; /* je: equal / zero */

loc_0001585B: ;
    ecx = eax;
    PUSH32(esp, 0x00015862u); RECOMP_ABI_CALL(0x00012EB0u, sub_00012EB0); /* call 0x00012EB0 */

loc_00015862: ;
    esi = eax;
    goto loc_00015868;

loc_00015866: ;
    esi = 0; /* xor self */

loc_00015868: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001586Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001586F: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0001587Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001587B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00015882: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015890
 * Original: 0x00015890 - 0x00015909 (121 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015890: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x45858);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015902; /* je: equal / zero */

loc_000158A3: ;
    PUSH32(esp, 0x000158A8u); RECOMP_ABI_CALL(0x002751C0u, sub_002751C0); /* call 0x002751C0 */

loc_000158A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015902; /* je: equal / zero */

loc_000158AC: ;
    ecx = esi;
    PUSH32(esp, 0x000158B3u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_000158B3: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    if ((eax == 0)) goto loc_000158E6; /* je: equal / zero */

loc_000158DB: ;
    ecx = eax;
    PUSH32(esp, 0x000158E2u); RECOMP_ABI_CALL(0x00013040u, sub_00013040); /* call 0x00013040 */

loc_000158E2: ;
    esi = eax;
    goto loc_000158E8;

loc_000158E6: ;
    esi = 0; /* xor self */

loc_000158E8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000158EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000158EF: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000158FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000158FB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00015902: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015910
 * Original: 0x00015910 - 0x00015980 (112 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015910: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001597C; /* je: equal / zero */

loc_00015923: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0001592Bu); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_0001592B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    esi = eax;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00015965; /* je: equal / zero */

loc_00015956: ;
    ecx = esi;
    PUSH32(esp, 0x0001595Du); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_0001595D: ;
    MEM32(esi) = 0x3C73E4;
    goto loc_00015967;

loc_00015965: ;
    esi = 0; /* xor self */

loc_00015967: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0001596Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001596E: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0001597Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001597A: ;
    eax = esi;

loc_0001597C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015980
 * Original: 0x00015980 - 0x00015A28 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015980: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015A16; /* je: equal / zero */

loc_000159AB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000159B3u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_000159B3: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_000159F7; /* je: equal / zero */

loc_000159EC: ;
    ecx = eax;
    PUSH32(esp, 0x000159F3u); RECOMP_ABI_CALL(0x00013240u, sub_00013240); /* call 0x00013240 */

loc_000159F3: ;
    esi = eax;
    goto loc_000159F9;

loc_000159F7: ;
    esi = 0; /* xor self */

loc_000159F9: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015A08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015A08: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015A14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015A14: ;
    eax = esi;

loc_00015A16: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015A30
 * Original: 0x00015A30 - 0x00015AA0 (112 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015A9C; /* je: equal / zero */

loc_00015A43: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00015A4Bu); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015A4B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    esi = eax;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00015A85; /* je: equal / zero */

loc_00015A76: ;
    ecx = esi;
    PUSH32(esp, 0x00015A7Du); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00015A7D: ;
    MEM32(esi) = 0x3C74CC;
    goto loc_00015A87;

loc_00015A85: ;
    esi = 0; /* xor self */

loc_00015A87: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015A8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015A8E: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015A9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015A9A: ;
    eax = esi;

loc_00015A9C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015AA0
 * Original: 0x00015AA0 - 0x00015B48 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015AA0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015B36; /* je: equal / zero */

loc_00015ACB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00015AD3u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015AD3: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00015B17; /* je: equal / zero */

loc_00015B0C: ;
    ecx = eax;
    PUSH32(esp, 0x00015B13u); RECOMP_ABI_CALL(0x000132C0u, sub_000132C0); /* call 0x000132C0 */

loc_00015B13: ;
    esi = eax;
    goto loc_00015B19;

loc_00015B17: ;
    esi = 0; /* xor self */

loc_00015B19: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015B28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015B28: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015B34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015B34: ;
    eax = esi;

loc_00015B36: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015B50
 * Original: 0x00015B50 - 0x00015BCF (127 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015B50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x45858);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015BC8; /* je: equal / zero */

loc_00015B63: ;
    PUSH32(esp, 0x00015B68u); RECOMP_ABI_CALL(0x0001CC40u, sub_0001CC40); /* call 0x0001CC40 */

loc_00015B68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015BC8; /* je: equal / zero */

loc_00015B6C: ;
    ecx = esi;
    PUSH32(esp, 0x00015B73u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015B73: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    esi = eax;
    if ((eax == 0)) goto loc_00015BAC; /* je: equal / zero */

loc_00015B9D: ;
    ecx = esi;
    PUSH32(esp, 0x00015BA4u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00015BA4: ;
    MEM32(esi) = 0x3C8074;
    goto loc_00015BAE;

loc_00015BAC: ;
    esi = 0; /* xor self */

loc_00015BAE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015BB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015BB5: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015BC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015BC1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00015BC8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015BD0
 * Original: 0x00015BD0 - 0x00015C57 (135 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x45858);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015C50; /* je: equal / zero */

loc_00015BE3: ;
    PUSH32(esp, 0x00015BE8u); RECOMP_ABI_CALL(0x0001CC40u, sub_0001CC40); /* call 0x0001CC40 */

loc_00015BE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00015C50; /* je: equal / zero */

loc_00015BEC: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00015BF4u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015BF4: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | ebx;
    eax = eax + esi;
    MEM32(edx) = ecx;
    esi = eax;
    POP32(esp, ebx);
    if ((eax == 0)) goto loc_00015C34; /* je: equal / zero */

loc_00015C1F: ;
    ecx = esi;
    PUSH32(esp, 0x00015C26u); RECOMP_ABI_CALL(0x00012CD0u, sub_00012CD0); /* call 0x00012CD0 */

loc_00015C26: ;
    MEM32(esi) = 0x3C815C;
    MEM32(esi + 0xF0) = edi;
    goto loc_00015C36;

loc_00015C34: ;
    esi = 0; /* xor self */

loc_00015C36: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015C3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015C3D: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015C49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015C49: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00015C50: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015C60
 * Original: 0x00015C60 - 0x00015D08 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015C60: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x45858);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015CF6; /* je: equal / zero */

loc_00015C8B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00015C93u); RECOMP_ABI_CALL(0x00014220u, sub_00014220); /* call 0x00014220 */

loc_00015C93: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x44E80;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1E0);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | edi;
    eax = eax + esi;
    MEM32(edx) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = 0;
    POP32(esp, edi);
    if ((eax == 0)) goto loc_00015CD7; /* je: equal / zero */

loc_00015CCC: ;
    ecx = eax;
    PUSH32(esp, 0x00015CD3u); RECOMP_ABI_CALL(0x000135E0u, sub_000135E0); /* call 0x000135E0 */

loc_00015CD3: ;
    esi = eax;
    goto loc_00015CD9;

loc_00015CD7: ;
    esi = 0; /* xor self */

loc_00015CD9: ;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00015CE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015CE8: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00015CF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00015CF4: ;
    eax = esi;

loc_00015CF6: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00015D10
 * Original: 0x00015D10 - 0x00015D69 (89 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015D10: ;
    eax = MEM32(esp + 8);
    edx = ecx;
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0x351B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0x351B8), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015D4A; /* jne: not equal / not zero */

loc_00015D32: ;
    eax = MEM32(esp + 0xC);
    esi = edx + 0xA094;
    ecx = 0xA;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00015D4A: ;
    eax = eax + eax * 4;
    eax = eax << 4;
    esi = eax + edx + 0xA094;
    eax = MEM32(esp + 0xC);
    ecx = 0xA;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015D70
 * Original: 0x00015D70 - 0x00015DCE (94 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015D70: ;
    eax = MEM32(esp + 8);
    edx = ecx;
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0x351B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0x351B8), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015DAC; /* jne: not equal / not zero */

loc_00015D91: ;
    esi = MEM32(esp + 8);
    ecx = edx + 0xA094;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015DA6u); RECOMP_ABI_CALL(0x00012130u, sub_00012130); /* call 0x00012130 */

loc_00015DA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015DAC: ;
    esi = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = eax + edx + 0xA094;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015DC8u); RECOMP_ABI_CALL(0x00012130u, sub_00012130); /* call 0x00012130 */

loc_00015DC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00015DD0
 * Original: 0x00015DD0 - 0x00015E24 (84 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015DD0: ;
    eax = MEM32(esp + 8);
    edx = ecx;
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0x351B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0x351B8), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015E07; /* jne: not equal / not zero */

loc_00015DF1: ;
    esi = MEM32(esp + 8);
    ecx = edx + 0xA094;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015E01u); RECOMP_ABI_CALL(0x000121C0u, sub_000121C0); /* call 0x000121C0 */

loc_00015E01: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00015E07: ;
    esi = MEM32(esp + 8);
    eax = eax + eax * 4;
    eax = eax << 4;
    ecx = eax + edx + 0xA094;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015E1Eu); RECOMP_ABI_CALL(0x000121C0u, sub_000121C0); /* call 0x000121C0 */

loc_00015E1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015E30
 * Original: 0x00015E30 - 0x00015E90 (96 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015E30: ;
    eax = MEM32(esp + 8);
    edx = ecx;
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0x3ECB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0x3ECB8), esi (32-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00015E5A; /* jne: not equal / not zero */

loc_00015E52: ;
    ecx = edx + 0x3544C;
    goto loc_00015E67;

loc_00015E5A: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    ecx = eax + edx + 0x3544C;

loc_00015E67: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00015E90
 * Original: 0x00015E90 - 0x00015EEE (94 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015E90: ;
    eax = MEM32(esp + 8);
    edx = ecx;
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0x3ECB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0x3ECB8), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015ECC; /* jne: not equal / not zero */

loc_00015EB1: ;
    esi = MEM32(esp + 8);
    ecx = edx + 0x3544C;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015EC6u); RECOMP_ABI_CALL(0x00013CC0u, sub_00013CC0); /* call 0x00013CC0 */

loc_00015EC6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00015ECC: ;
    esi = MEM32(esp + 8);
    eax = eax + eax * 2;
    eax = eax << 4;
    ecx = eax + edx + 0x3544C;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00015EE8u); RECOMP_ABI_CALL(0x00013CC0u, sub_00013CC0); /* call 0x00013CC0 */

loc_00015EE8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00015EF0
 * Original: 0x00015EF0 - 0x00015F9C (172 bytes, 49 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00015EF0(void)
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

loc_00015EF0: ;
    eax = MEM32(esp + 8);
    edx = ecx;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0x3ECB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0x3ECB8), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00015F1C; /* jne: not equal / not zero */

loc_00015F14: ;
    esi = edx + 0x3544C;
    goto loc_00015F29;

loc_00015F1C: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    esi = eax + edx + 0x3544C;

loc_00015F29: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 8);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x00015F49u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00015F49: ;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x18) = edx;
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00015F61u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00015F61: ;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    eax = MEM32(esi + 0x14);
    MEM32(esp + 0x18) = eax;
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00015F79u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00015F79: ;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 8);
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEM32(eax + 4) = ecx;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00015FA0
 * Original: 0x00015FA0 - 0x00015FF6 (86 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00015FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00015FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    edx = eax + eax * 2;
    esi = MEM32(ecx + edx * 4 + 4);
    edx = ecx + edx * 4;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015FC1; /* je: equal / zero */

loc_00015FBA: ;
    ebx = edx + edx * 2;
    MEM32(ecx + ebx * 4 + 4) = esi;

loc_00015FC1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00015FCC; /* je: equal / zero */

loc_00015FC6: ;
    ebx = esi + esi * 2;
    MEM32(ecx + ebx * 4) = edx;

loc_00015FCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x424)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x424) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FDA; /* jne: not equal / not zero */

loc_00015FD4: ;
    MEM32(ecx + 0x424) = esi;

loc_00015FDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x420)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x420) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00015FE8; /* jne: not equal / not zero */

loc_00015FE2: ;
    MEM32(ecx + 0x420) = edx;

loc_00015FE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00015FEEu); RECOMP_ABI_CALL(0x00014620u, sub_00014620); /* call 0x00014620 */

loc_00015FEE: ;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016000
 * Original: 0x00016000 - 0x00016064 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00016009u); RECOMP_ABI_CALL(0x00014EC0u, sub_00014EC0); /* call 0x00014EC0 */

loc_00016009: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x1BF4) = eax;
    MEM32(esi + 0x1BF8) = eax;
    edx = 0x24B;
    edi = 0; /* xor self */

loc_00016020: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016020; /* jne: not equal / not zero */

loc_0001602C: ;
    MEM32(esi + 0x1BF4) = ecx;
    MEM32(esi + 0x1BF8) = edi;
    edx = esi + 0x12C4;
    edi = edi;

loc_00016040: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x1BF8);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016040; /* jl: less (signed <) */

loc_0001605F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016070
 * Original: 0x00016070 - 0x000160D4 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00016079u); RECOMP_ABI_CALL(0x00014F70u, sub_00014F70); /* call 0x00014F70 */

loc_00016079: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x6570) = eax;
    MEM32(esi + 0x6574) = eax;
    edx = 0xAE;
    edi = 0; /* xor self */

loc_00016090: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016090; /* jne: not equal / not zero */

loc_0001609C: ;
    MEM32(esi + 0x6570) = ecx;
    MEM32(esi + 0x6574) = edi;
    edx = esi + 0x62B4;
    edi = edi;

loc_000160B0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x6574);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000160B0; /* jl: less (signed <) */

loc_000160CF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000160E0
 * Original: 0x000160E0 - 0x0001610C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000160E0(void)
{

loc_000160E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000160E8u); RECOMP_ABI_CALL(0x00014030u, sub_00014030); /* call 0x00014030 */

loc_000160E8: ;
    ecx = esi + 0x2B44;
    PUSH32(esp, 0x000160F3u); RECOMP_ABI_CALL(0x000146B0u, sub_000146B0); /* call 0x000146B0 */

loc_000160F3: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x2B94) = eax;
    ecx = esi;
    MEM32(esi + 0x2B98) = eax;
    PUSH32(esp, 0x00016108u); RECOMP_ABI_CALL(0x00015140u, sub_00015140); /* call 0x00015140 */

loc_00016108: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016110
 * Original: 0x00016110 - 0x00016140 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016110(void)
{

loc_00016110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x29044;
    PUSH32(esp, 0x0001611Fu); RECOMP_ABI_CALL(0x00014900u, sub_00014900); /* call 0x00014900 */

loc_0001611F: ;
    eax = 0; /* xor self */
    ecx = 0x42;
    edi = esi + 0x2B124;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x2B22C) = eax;
    PUSH32(esp, 0x0001613Bu); RECOMP_ABI_CALL(0x00015260u, sub_00015260); /* call 0x00015260 */

loc_0001613B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016140
 * Original: 0x00016140 - 0x00016170 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016140(void)
{

loc_00016140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x8CA4;
    PUSH32(esp, 0x0001614Fu); RECOMP_ABI_CALL(0x00014980u, sub_00014980); /* call 0x00014980 */

loc_0001614F: ;
    eax = 0; /* xor self */
    ecx = 0x18;
    edi = esi + 0x986C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x98CC) = eax;
    PUSH32(esp, 0x0001616Bu); RECOMP_ABI_CALL(0x000152D0u, sub_000152D0); /* call 0x000152D0 */

loc_0001616B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016170
 * Original: 0x00016170 - 0x00016175 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016170(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016170: ;
    g_seh_ebp = ebp; sub_00013E30(); return; /* tail jmp 0x00013E30 */

}

/**
 * sub_00016180
 * Original: 0x00016180 - 0x000161FF (127 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016180(void)
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

loc_00016180: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0x5D50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x5D50), 0x24C (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00016199; /* jne: not equal / not zero */

loc_00016191: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

loc_00016199: ;
    esi = ebx + 0x4A90;
    ecx = esi;
    PUSH32(esp, 0x000161A6u); RECOMP_ABI_CALL(0x000145B0u, sub_000145B0); /* call 0x000145B0 */

loc_000161A6: ;
    edi = MEM32(esi + eax * 4 + 0x12C4);
    PUSH32(esp, 0x000161B2u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000161B2: ;
    ecx = MEM32(esi + 0x1BF4);
    edx = MEM32(eax);
    ecx = ecx & edi;
    esi = esi + ecx * 4;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000161C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000161C7: ;
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000161F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000161F7: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00016200
 * Original: 0x00016200 - 0x00016256 (86 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    edx = eax + eax * 2;
    esi = MEM32(ecx + edx * 4 + 4);
    edx = ecx + edx * 4;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00016221; /* je: equal / zero */

loc_0001621A: ;
    ebx = edx + edx * 2;
    MEM32(ecx + ebx * 4 + 4) = esi;

loc_00016221: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0001622C; /* je: equal / zero */

loc_00016226: ;
    ebx = esi + esi * 2;
    MEM32(ecx + ebx * 4) = edx;

loc_0001622C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2220)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x2220) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0001623A; /* jne: not equal / not zero */

loc_00016234: ;
    MEM32(ecx + 0x2220) = esi;

loc_0001623A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x221C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x221C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016248; /* jne: not equal / not zero */

loc_00016242: ;
    MEM32(ecx + 0x221C) = edx;

loc_00016248: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001624Eu); RECOMP_ABI_CALL(0x00014CE0u, sub_00014CE0); /* call 0x00014CE0 */

loc_0001624E: ;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016260
 * Original: 0x00016260 - 0x000162E0 (128 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016260: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0001626Cu); RECOMP_ABI_CALL(0x00014730u, sub_00014730); /* call 0x00014730 */

loc_0001626C: ;
    edi = eax;
    eax = MEM32(esp + 0x18);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44);
    PUSH32(esp, eax);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00016280u); RECOMP_ABI_CALL(0x00014170u, sub_00014170); /* call 0x00014170 */

loc_00016280: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x2200;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esi = esi + 0x2434;
    esp = esp + 8;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x404);
    eax = MEM32(esp + 0x14);
    edx = esi + ecx * 8;
    MEM32(edx) = eax;
    MEM32(edx + 4) = edi;
    ecx = MEM32(esi + 0x404);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000162CBu); RECOMP_ABI_CALL(0x00014DD0u, sub_00014DD0); /* call 0x00014DD0 */

loc_000162CB: ;
    eax = MEM32(esi + 0x404);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x404) = eax;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000162E0
 * Original: 0x000162E0 - 0x0001641F (319 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000162E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000162E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(esi + 0x12C0) = 0;
    ecx = 0x13;
    edi = esi + 0x1274;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 0x00016305u); RECOMP_ABI_CALL(0x00014E50u, sub_00014E50); /* call 0x00014E50 */

loc_00016305: ;
    edx = 2;
    eax = esi + 0x12C8;

loc_00016310: ;
    ecx = MEM32(esi + 0x1BF8);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + -4) = MEM32(eax + -4) + edi;
    if (((int32_t)MEM32(eax + -4) >= 0)) goto loc_0001633A; /* jns: not sign (positive) */

loc_00016322: ;
    edi = edx + -2;
    MEM32(eax + -4) = edi;
    ecx = MEM32(esi + 0x1BF8);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + -4) = ebx;

loc_0001633A: ;
    ecx = MEM32(esi + 0x1BF8);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax) = MEM32(eax) + edi;
    if (((int32_t)MEM32(eax) >= 0)) goto loc_00016361; /* jns: not sign (positive) */

loc_0001634B: ;
    edi = edx + -1;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x1BF8);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax) = ebx;

loc_00016361: ;
    ecx = MEM32(esi + 0x1BF8);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 4) = MEM32(eax + 4) + edi;
    if (((int32_t)MEM32(eax + 4) >= 0)) goto loc_00016388; /* jns: not sign (positive) */

loc_00016373: ;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x1BF8);
    edi = 1;
    edi = edi << LO8(ecx);
    edi = edi | edx;
    MEM32(eax + 4) = edi;

loc_00016388: ;
    ecx = MEM32(esi + 0x1BF8);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    if (((int32_t)MEM32(eax + 8) >= 0)) goto loc_000163B2; /* jns: not sign (positive) */

loc_0001639A: ;
    edi = edx + 1;
    MEM32(eax + 8) = edi;
    ecx = MEM32(esi + 0x1BF8);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 8) = ebx;

loc_000163B2: ;
    ecx = MEM32(esi + 0x1BF8);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + edi;
    if (((int32_t)MEM32(eax + 0xC) >= 0)) goto loc_000163DC; /* jns: not sign (positive) */

loc_000163C4: ;
    edi = edx + 2;
    MEM32(eax + 0xC) = edi;
    ecx = MEM32(esi + 0x1BF8);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 0xC) = ebx;

loc_000163DC: ;
    ecx = MEM32(esi + 0x1BF8);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + edi;
    if (((int32_t)MEM32(eax + 0x10) >= 0)) goto loc_00016406; /* jns: not sign (positive) */

loc_000163EE: ;
    edi = edx + 3;
    MEM32(eax + 0x10) = edi;
    ecx = MEM32(esi + 0x1BF8);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 0x10) = ebx;

loc_00016406: ;
    edx = edx + 6;
    ecx = edx + -2;
    eax = eax + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016310; /* jl: less (signed <) */

loc_0001641B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016420
 * Original: 0x00016420 - 0x0001646E (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016420(void)
{
    int _flags = 0; /* fallback flag var */

loc_00016420: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x1BF4);
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00016436u); RECOMP_ABI_CALL(0x00014EF0u, sub_00014EF0); /* call 0x00014EF0 */

loc_00016436: ;
    ecx = MEM32(edi + 0x1BF8);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0x12C4) = MEM32(edi + esi * 4 + 0x12C4) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0x12C4) >= 0)) goto loc_00016469; /* jns: not sign (positive) */

loc_0001644C: ;
    MEM32(edi + esi * 4 + 0x12C4) = esi;
    ecx = MEM32(edi + 0x1BF8);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0x12C4) = edx;

loc_00016469: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016470
 * Original: 0x00016470 - 0x00016515 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016470: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x13;
    edi = esi + 0x44E80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x45800) = ebx;
    MEM32(esi + 0x45804) = ebx;
    MEM32(esi + 0x45808) = ebx;
    ecx = 0x13;
    edi = esi + 0x4580C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x45858) = ebx;
    PUSH32(esp, 0x000164B2u); RECOMP_ABI_CALL(0x000150D0u, sub_000150D0); /* call 0x000150D0 */

loc_000164B2: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x4618C) = ebx;
    MEM32(esi + 0x46190) = ebx;
    ecx = 0x24B;
    edx = 0; /* xor self */

loc_000164C7: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000164C7; /* jne: not equal / not zero */

loc_000164D3: ;
    MEM32(esi + 0x4618C) = eax;
    MEM32(esi + 0x46190) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x4585C;
    goto loc_000164F0;

    /* nop */

loc_000164F0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x46190);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000164F0; /* jl: less (signed <) */

loc_0001650F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016520
 * Original: 0x00016520 - 0x00016582 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016520: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00016529u); RECOMP_ABI_CALL(0x000160E0u, sub_000160E0); /* call 0x000160E0 */

loc_00016529: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x2BDC) = eax;
    MEM32(esi + 0x2BE0) = eax;
    edx = 0xF;
    edi = 0; /* xor self */

loc_00016540: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00016540; /* jne: not equal / not zero */

loc_0001654C: ;
    MEM32(esi + 0x2BDC) = ecx;
    MEM32(esi + 0x2BE0) = edi;
    edx = esi + 0x2B9C;
    edi = edi;

loc_00016560: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x2BE0);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016560; /* jl: less (signed <) */

loc_0001657D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016590
 * Original: 0x00016590 - 0x0001659C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016590(void)
{

loc_00016590: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016598u); RECOMP_ABI_CALL(0x00016110u, sub_00016110); /* call 0x00016110 */

loc_00016598: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000165A0
 * Original: 0x000165A0 - 0x000165AC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000165A0(void)
{

loc_000165A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000165A8u); RECOMP_ABI_CALL(0x00016140u, sub_00016140); /* call 0x00016140 */

loc_000165A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000165B0
 * Original: 0x000165B0 - 0x000165B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000165B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000165B0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000165C0(); return; /* tail jmp 0x000165C0 */

}

/**
 * sub_000165C0
 * Original: 0x000165C0 - 0x00016635 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000165C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000165C0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x36C4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x36B8);
    edi = MEM32(eax + 0x36C0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xAF (32-bit) */
    MEM32(eax + 0x36B8) = ecx;
    MEM32(eax + 0x36C0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0001661B; /* jl: less (signed <) */

loc_0001660A: ;
    MEM32(eax + 0x36B8) = 0;
    ecx = 0xAE;
    goto loc_0001661C;

loc_0001661B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0001661C: ;
    MEM32(eax + ecx * 4 + 0x33F8) = esi;
    ecx = MEM32(eax + 0x36DC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x36DC) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016640
 * Original: 0x00016640 - 0x00016645 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016640: ;
    g_seh_ebp = ebp; sub_00013F80(); return; /* tail jmp 0x00013F80 */

}



/**
 * sub_000166A0
 * Original: 0x000166A0 - 0x000166FD (93 bytes, 32 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000166A0(void)
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

loc_000166A0: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x4684)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4684), 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000166F6; /* je: equal / zero */

loc_000166B2: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000166DBu); RECOMP_ABI_CALL(0x00013BE0u, sub_00013BE0); /* call 0x00013BE0 */

loc_000166DB: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x2254;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000166F6u); RECOMP_ABI_CALL(0x00016260u, sub_00016260); /* call 0x00016260 */

loc_000166F6: ;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00016700
 * Original: 0x00016700 - 0x00016756 (86 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016700(void)
{

loc_00016700: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2200;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x2414) = edi;
    MEM32(esi + 0x2418) = edi;
    MEM32(esi + 0x241C) = edi;
    edx = 0; /* xor self */
    eax = esi + 0x2420;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    ecx = esi;
    MEM32(esi + 0x2430) = edi;
    PUSH32(esp, 0x0001674Bu); RECOMP_ABI_CALL(0x00014D60u, sub_00014D60); /* call 0x00014D60 */

loc_0001674B: ;
    MEM32(esi + 0x2838) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016760
 * Original: 0x00016760 - 0x0001676C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016760(void)
{

loc_00016760: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016768u); RECOMP_ABI_CALL(0x00016590u, sub_00016590); /* call 0x00016590 */

loc_00016768: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016770
 * Original: 0x00016770 - 0x0001677C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016770(void)
{

loc_00016770: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016778u); RECOMP_ABI_CALL(0x000165A0u, sub_000165A0); /* call 0x000165A0 */

loc_00016778: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00016780
 * Original: 0x00016780 - 0x00016796 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016780(void)
{

loc_00016780: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2254;
    PUSH32(esp, 0x0001678Eu); RECOMP_ABI_CALL(0x00013EF0u, sub_00013EF0); /* call 0x00013EF0 */

loc_0001678E: ;
    MEM32(esi) = 0x3C70AC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000167A0
 * Original: 0x000167A0 - 0x000167E7 (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000167A0(void)
{

loc_000167A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E088);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x000167C2u); RECOMP_ABI_CALL(0x00016470u, sub_00016470); /* call 0x00016470 */

loc_000167C2: ;
    ecx = esi + 0x46194;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000167D5u); RECOMP_ABI_CALL(0x00016520u, sub_00016520); /* call 0x00016520 */

loc_000167D5: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000167F0
 * Original: 0x000167F0 - 0x0001690C (284 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000167F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000167F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = ebx + 0xC;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00016801u); RECOMP_ABI_CALL(0x00016760u, sub_00016760); /* call 0x00016760 */

loc_00016801: ;
    edi = ebx + 0x2B240;
    MEM32(esp + 0x10) = 0x2F;
    /* nop */

loc_00016810: ;
    eax = MEM32(esi + 0x2B11C);
    eax = MEM32(esi + eax * 4 + 0x29044);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x2B124;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    MEM32(edx) = MEM32(edx) | ebp;
    edx = MEM32(esi + 0x2B11C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x834) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x834 (32-bit) */
    MEM32(esi + 0x2B11C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00016858; /* jl: less (signed <) */

loc_0001684E: ;
    MEM32(esi + 0x2B11C) = 0;

loc_00016858: ;
    MEM32(esi + 0x2B120) = MEM32(esi + 0x2B120) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x2B120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x2B22C) = MEM32(esi + 0x2B22C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2B22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + -4) = eax;
    edx = MEM32(esi + 0x2B11C);
    eax = MEM32(esi + edx * 4 + 0x29044);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x2B124;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    MEM32(edx) = MEM32(edx) | ebp;
    edx = MEM32(esi + 0x2B11C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    MEM32(esi + 0x2B11C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x834) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x834 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000168AD; /* jl: less (signed <) */

loc_000168A7: ;
    MEM32(esi + 0x2B11C) = edx;

loc_000168AD: ;
    MEM32(esi + 0x2B120) = MEM32(esi + 0x2B120) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x2B120)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x2B22C) = MEM32(esi + 0x2B22C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2B22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    edi = edi + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00016810; /* jne: not equal / not zero */

loc_000168CD: ;
    MEM32(ebx + 0x2B3B4) = 1;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    eax = 0xC61C4000u;
    MEM32(esi + 0x10) = eax;
    ecx = 0x461C4000;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, edi);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = edx;
    MEM32(esi + 0x20) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x2B23C) = edx;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016910
 * Original: 0x00016910 - 0x00016935 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016910: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx + 0xC;
    esi = ecx + 0x2B23C;
    edi = 0x5E;

loc_00016921: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0001692Bu); RECOMP_ABI_CALL(0x00014FD0u, sub_00014FD0); /* call 0x00014FD0 */

loc_0001692B: ;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00016921; /* jne: not equal / not zero */

loc_00016931: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016940
 * Original: 0x00016940 - 0x000169EF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = ebx + 0xC;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00016951u); RECOMP_ABI_CALL(0x00016770u, sub_00016770); /* call 0x00016770 */

loc_00016951: ;
    edi = ebx + 0x98DC;
    MEM32(esp + 0x10) = 0xD;
    /* nop */

loc_00016960: ;
    eax = MEM32(esi + 0x9864);
    eax = MEM32(esi + eax * 4 + 0x8CA4);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x986C;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    MEM32(edx) = MEM32(edx) | ebp;
    edx = MEM32(esi + 0x9864);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2EE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2EE (32-bit) */
    MEM32(esi + 0x9864) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000169A8; /* jl: less (signed <) */

loc_0001699E: ;
    ecx = 0; /* xor self */
    MEM32(esi + 0x9864) = ecx;
    goto loc_000169AA;

loc_000169A8: ;
    ecx = 0; /* xor self */

loc_000169AA: ;
    MEM32(esi + 0x9868) = MEM32(esi + 0x9868) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x9868)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x98CC) = MEM32(esi + 0x98CC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x98CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x10);
    edi = edi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00016960; /* jne: not equal / not zero */

loc_000169C6: ;
    MEM32(ebx + 0x9910) = 1;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x98DC) = ecx;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000169F0
 * Original: 0x000169F0 - 0x00016A15 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000169F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000169F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx + 0xC;
    esi = ecx + 0x98DC;
    edi = 0xD;

loc_00016A01: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00016A0Bu); RECOMP_ABI_CALL(0x00015050u, sub_00015050); /* call 0x00015050 */

loc_00016A0B: ;
    esi = esi + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00016A01; /* jne: not equal / not zero */

loc_00016A11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016A20
 * Original: 0x00016A20 - 0x00016AD5 (181 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00016A20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3C827C;
    MEM32(esi + 4) = ebp;
    ebx = esi + 0x30;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = ebp;
    PUSH32(esp, edi);
    MEM32(ebx + 0x21C8) = ebp;
    MEM32(ebx + 0x21CC) = ebp;
    MEM32(ebx + 0x21D0) = ebp;
    eax = 0; /* xor self */
    ecx = 0x11;
    edi = ebx + 0x21D4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    MEM32(ebx + 0x2218) = ebp;
    PUSH32(esp, 0x00016A68u); RECOMP_ABI_CALL(0x000151A0u, sub_000151A0); /* call 0x000151A0 */

loc_00016A68: ;
    eax = eax | 0xFFFFFFFFu;
    ecx = esi + 0x2254;
    MEM32(ebx + 0x221C) = eax;
    MEM32(ebx + 0x2220) = eax;
    PUSH32(esp, 0x00016A82u); RECOMP_ABI_CALL(0x00016700u, sub_00016700); /* call 0x00016700 */

loc_00016A82: ;
    ecx = esi + 0x4A90;
    PUSH32(esp, 0x00016A8Du); RECOMP_ABI_CALL(0x00016000u, sub_00016000); /* call 0x00016000 */

loc_00016A8D: ;
    edi = esi + 0x668C;
    MEM32(edi + 0x408) = ebp;
    MEM32(edi + 0x40C) = ebp;
    MEM32(edi + 0x410) = ebp;
    eax = 0; /* xor self */
    ecx = edi + 0x414;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    ecx = edi;
    MEM32(edi + 0x41C) = ebp;
    PUSH32(esp, 0x00016ABFu); RECOMP_ABI_CALL(0x000147A0u, sub_000147A0); /* call 0x000147A0 */

loc_00016ABF: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi + 0x420) = eax;
    MEM32(edi + 0x424) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00016AE0
 * Original: 0x00016AE0 - 0x00016AFE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00016AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00016AE8u); RECOMP_ABI_CALL(0x00016780u, sub_00016780); /* call 0x00016780 */

loc_00016AE8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00016AF8; /* je: equal / zero */

loc_00016AEF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00016AF5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00016AF5: ;
    esp = esp + 4;

loc_00016AF8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00016B00
 * Original: 0x00016B00 - 0x00018345 (6213 bytes, 1367 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00016B00(void)
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

loc_00016B00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0CA);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x170;
    MEM32(esp + 0x14) = esi;
    MEM32(esi + 0x168) = 0x3FFFFFFF;
    MEM32(esi + 0x16C) = 0xFFFFFFFFu;
    MEM32(esi + 0x164) = 0x3C824C;
    PUSH32(esp, 0x00016B4Bu); RECOMP_ABI_CALL(0x00015210u, sub_00015210); /* call 0x00015210 */

loc_00016B4B: ;
    ecx = esi + 0x3B10;
    MEM32(esi + 0x164) = 0x3C8264;
    PUSH32(esp, 0x00016B60u); RECOMP_ABI_CALL(0x00016070u, sub_00016070); /* call 0x00016070 */

loc_00016B60: ;
    ebp = esi + 0xA088;
    ebx = 0; /* xor self */
    ecx = ebp;
    MEM32(esp + 0x80) = ebx;
    PUSH32(esp, 0x00016B76u); RECOMP_ABI_CALL(0x000167F0u, sub_000167F0); /* call 0x000167F0 */

loc_00016B76: ;
    ecx = esi + 0x35440;
    PUSH32(esp, 0x00016B81u); RECOMP_ABI_CALL(0x00016940u, sub_00016940); /* call 0x00016940 */

loc_00016B81: ;
    esi = esi + 0x160;
    MEM8(esp + 0x80) = 2;
    MEM8(esi) = LO8(ebx);
    PUSH32(esp, 0x00016B96u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_00016B96: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C82FC);
    PUSH32(esp, 0x3C82EC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00016BA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00016BA9: ;
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x78;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x7C) = 0xBF800000u;
    MEM32(esp + 0x80) = 0x3F800000;
    MEM32(esp + 0x84) = 0x461C4000;
    MEM32(esp + 0x88) = 0xC61C4000u;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016C18u); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016C18: ;
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x78;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x7C) = 0xBF800000u;
    MEM32(esp + 0x80) = 0x40000000;
    MEM32(esp + 0x84) = 0x461C4000;
    MEM32(esp + 0x88) = 0xC61C4000u;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016C87u); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016C87: ;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = 0xBF800000u;
    MEM32(esp + 0x58) = 0x40800000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    esp = esp - 0x28;
    ecx = 0xA;
    edi = esp;
    esi = esp + 0x78;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016CDEu); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016CDE: ;
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x78;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x80) = 0x40C90FDB;
    MEM32(esp + 0x84) = 0x461C4000;
    MEM32(esp + 0x88) = 0xC61C4000u;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016D49u); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016D49: ;
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x78;
    MEM32(esp + 0x78) = 0x40800000;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x80) = 0x40400000;
    MEM32(esp + 0x84) = 0x461C4000;
    MEM32(esp + 0x88) = 0xC61C4000u;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016DB8u); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016DB8: ;
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x78;
    MEM32(esp + 0x78) = 0xC0000000u;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x80) = 0x3F800000;
    MEM32(esp + 0x84) = 0x461C4000;
    MEM32(esp + 0x88) = 0xC61C4000u;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016E2Bu); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016E2B: ;
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x78;
    MEM32(esp + 0x78) = 0xC0800000u;
    MEM32(esp + 0x7C) = 0x40400000;
    MEM32(esp + 0x80) = 0x3F800000;
    MEM32(esp + 0x84) = 0x461C4000;
    MEM32(esp + 0x88) = 0xC61C4000u;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016E9Eu); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016E9E: ;
    MEM32(esp + 0x50) = 0xC0800000u;
    MEM32(esp + 0x54) = 0x40800000;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x78;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016EFBu); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016EFB: ;
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x78;
    MEM32(esp + 0x78) = 0xC1000000u;
    MEM32(esp + 0x7C) = 0x41000000;
    MEM32(esp + 0x80) = ebx;
    MEM32(esp + 0x84) = 0x461C4000;
    MEM32(esp + 0x88) = 0xC61C4000u;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = 0x461C4000;
    MEM32(esp + 0x9C) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    PUSH32(esp, 0x00016F6Au); RECOMP_ABI_CALL(0x00014B60u, sub_00014B60); /* call 0x00014B60 */

loc_00016F6A: ;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = 0x3E800000;
    MEM32(esp + 0x20) = 0x3F000000;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    eax = esp + 0x18;
    MEM32(esp + 0x10) = 4;
    goto loc_00016FC0;

    /* nop */
    /* nop */

loc_00016FC0: ;
    edx = 0; /* xor self */

loc_00016FC2: ;
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    ecx = 0xA;
    fp_push(MEMF(eax)); /* fld float */
    esi = esp + 0x50;
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    edi = esp + 0x28;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x58) = 0;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00017061; /* jg: greater (signed >) */

loc_0001700A: ;
    esi = MEM32(esp + 0x28);
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    MEM32(ecx + ebp + 0xC) = esi;
    esi = MEM32(esp + 0x2C);
    ecx = ecx + ebp + 0xC;
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x30);
    MEM32(ecx + 8) = esi;
    esi = MEM32(esp + 0x34);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(esp + 0x38);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(esp + 0x3C);
    MEM32(ecx + 0x14) = esi;
    esi = MEM32(esp + 0x40);
    MEM32(ecx + 0x18) = esi;
    esi = MEM32(esp + 0x44);
    MEM32(ecx + 0x1C) = esi;
    esi = MEM32(esp + 0x48);
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(esp + 0x4C);
    MEM32(ecx + 0x24) = esi;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017061: ;
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    ecx = 0xA;
    fp_push(MEMF(eax)); /* fld float */
    esi = esp + 0x50;
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    edi = esp + 0x28;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x58) = 0x3E800000;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00017100; /* jg: greater (signed >) */

loc_000170A9: ;
    esi = MEM32(esp + 0x28);
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    MEM32(ecx + ebp + 0xC) = esi;
    esi = MEM32(esp + 0x2C);
    ecx = ecx + ebp + 0xC;
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x30);
    MEM32(ecx + 8) = esi;
    esi = MEM32(esp + 0x34);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(esp + 0x38);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(esp + 0x3C);
    MEM32(ecx + 0x14) = esi;
    esi = MEM32(esp + 0x40);
    MEM32(ecx + 0x18) = esi;
    esi = MEM32(esp + 0x44);
    MEM32(ecx + 0x1C) = esi;
    esi = MEM32(esp + 0x48);
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(esp + 0x4C);
    MEM32(ecx + 0x24) = esi;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017100: ;
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    ecx = 0xA;
    fp_push(MEMF(eax)); /* fld float */
    esi = esp + 0x50;
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    edi = esp + 0x28;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x58) = 0x3F000000;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001719F; /* jg: greater (signed >) */

loc_00017148: ;
    esi = MEM32(esp + 0x28);
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    MEM32(ecx + ebp + 0xC) = esi;
    esi = MEM32(esp + 0x2C);
    ecx = ecx + ebp + 0xC;
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x30);
    MEM32(ecx + 8) = esi;
    esi = MEM32(esp + 0x34);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(esp + 0x38);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(esp + 0x3C);
    MEM32(ecx + 0x14) = esi;
    esi = MEM32(esp + 0x40);
    MEM32(ecx + 0x18) = esi;
    esi = MEM32(esp + 0x44);
    MEM32(ecx + 0x1C) = esi;
    esi = MEM32(esp + 0x48);
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(esp + 0x4C);
    MEM32(ecx + 0x24) = esi;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001719F: ;
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    ecx = 0xA;
    fp_push(MEMF(eax)); /* fld float */
    esi = esp + 0x50;
    MEMF(esp + 0x50) = (float)fp_top(); /* fst */
    edi = esp + 0x28;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x58) = 0x3F800000;
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + edx * 4 + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5D (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0001723E; /* jg: greater (signed >) */

loc_000171E7: ;
    esi = MEM32(esp + 0x28);
    ecx = ecx + ecx * 4;
    ecx = ecx << 4;
    MEM32(ecx + ebp + 0xC) = esi;
    esi = MEM32(esp + 0x2C);
    ecx = ecx + ebp + 0xC;
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x30);
    MEM32(ecx + 8) = esi;
    esi = MEM32(esp + 0x34);
    MEM32(ecx + 0xC) = esi;
    esi = MEM32(esp + 0x38);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(esp + 0x3C);
    MEM32(ecx + 0x14) = esi;
    esi = MEM32(esp + 0x40);
    MEM32(ecx + 0x18) = esi;
    esi = MEM32(esp + 0x44);
    MEM32(ecx + 0x1C) = esi;
    esi = MEM32(esp + 0x48);
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(esp + 0x4C);
    MEM32(ecx + 0x24) = esi;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0001723E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00016FC2; /* jl: less (signed <) */

loc_00017248: ;
    ecx = MEM32(esp + 0x10);
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00016FC0; /* jne: not equal / not zero */

loc_0001725A: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0x3F000000;
    MEM32(esp + 0x58) = 0x3F333333;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017319; /* jg: greater (signed >) */

loc_000172C4: ;
    ecx = MEM32(esp + 0x28);
    edx = eax + eax * 4;
    edx = edx << 4;
    eax = edx + ebp + 0xC;
    edx = MEM32(esp + 0x2C);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017319: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x3F2147AE;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_000173D8; /* jg: greater (signed >) */

loc_00017383: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000173D8: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3F400000;
    MEM32(esp + 0x54) = 0x3F400000;
    MEM32(esp + 0x58) = 0x3F400000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017497; /* jg: greater (signed >) */

loc_00017442: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017497: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F000000;
    MEM32(esp + 0x58) = 0x3F800000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017556; /* jg: greater (signed >) */

loc_00017501: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017556: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3F000000;
    MEM32(esp + 0x54) = 0x3F000000;
    MEM32(esp + 0x58) = 0x3F400000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017615; /* jg: greater (signed >) */

loc_000175C0: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017615: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x40C90E56;
    MEM32(esp + 0x54) = 0x40C90E56;
    MEM32(esp + 0x58) = 0x40C90E56;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_000176D4; /* jg: greater (signed >) */

loc_0001767F: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000176D4: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0x40C90E56;
    MEM32(esp + 0x68) = 0x40C90E56;
    MEM32(esp + 0x6C) = 0x40C90E56;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017793; /* jg: greater (signed >) */

loc_0001773E: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017793: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x40C90E56;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017852; /* jg: greater (signed >) */

loc_000177FD: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017852: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x40C90E56;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0x40C90E56;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0xC0C90E56u;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017911; /* jg: greater (signed >) */

loc_000178BC: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017911: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x40000000;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x40000000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_000179D0; /* jg: greater (signed >) */

loc_0001797B: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000179D0: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x40800000;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x40800000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017A8F; /* jg: greater (signed >) */

loc_00017A3A: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017A8F: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x41000000;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x41000000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017B4E; /* jg: greater (signed >) */

loc_00017AF9: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017B4E: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x54) = 0x40000000;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017C0D; /* jg: greater (signed >) */

loc_00017BB8: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017C0D: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x40C90E56;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017CCC; /* jg: greater (signed >) */

loc_00017C77: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017CCC: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3EF0F0F1;
    MEM32(esp + 0x54) = 0x3F39B9BA;
    MEM32(esp + 0x58) = 0x3F800000;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017D8B; /* jg: greater (signed >) */

loc_00017D36: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017D8B: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3E38B8B9;
    MEM32(esp + 0x54) = 0x3E1C9C9D;
    MEM32(esp + 0x58) = 0x3DF8F8F9;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017E4A; /* jg: greater (signed >) */

loc_00017DF5: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017E4A: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3F1A9A9B;
    MEM32(esp + 0x54) = 0x3F018182;
    MEM32(esp + 0x58) = 0x3EC8C8C9;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017F09; /* jg: greater (signed >) */

loc_00017EB4: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017F09: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3F0D8D8E;
    MEM32(esp + 0x54) = 0x3E888889;
    MEM32(esp + 0x58) = 0x3B808081;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00017FC8; /* jg: greater (signed >) */

loc_00017F73: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00017FC8: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3F44C4C5;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x3E1C9C9D;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00018087; /* jg: greater (signed >) */

loc_00018032: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00018087: ;
    eax = MEM32(ebp + 0x2B3B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5D (32-bit) */
    ecx = 0xA;
    esi = esp + 0x50;
    edi = esp + 0x28;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F4FCFD0;
    MEM32(esp + 0x58) = 0x3E808081;
    MEM32(esp + 0x5C) = 0x461C4000;
    MEM32(esp + 0x60) = 0xC61C4000u;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x70) = 0x461C4000;
    MEM32(esp + 0x74) = 0xC61C4000u;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_G(_fas, _fbs)) goto loc_00018146; /* jg: greater (signed >) */

loc_000180F1: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + ebp + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x44);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = edx;
    MEM32(ebp + 0x2B3B4) = MEM32(ebp + 0x2B3B4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2B3B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00018146: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x3ED50);
    esi = esi + 0x35440;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00018180; /* jg: greater (signed >) */

loc_0001815B: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = eax + esi + 0xC;
    MEM32(eax) = 0x42480000;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(esi + 0x9910) = MEM32(esi + 0x9910) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x9910)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00018180: ;
    eax = MEM32(esi + 0x9910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000181B0; /* jg: greater (signed >) */

loc_0001818B: ;
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    eax = ecx + esi + 0xC;
    MEM32(eax) = 0xC1200000u;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(esi + 0x9910) = MEM32(esi + 0x9910) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x9910)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000181B0: ;
    eax = MEM32(esi + 0x9910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000181E0; /* jg: greater (signed >) */

loc_000181BB: ;
    edx = eax + eax * 2;
    edx = edx << 4;
    eax = edx + esi + 0xC;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x43960000;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(esi + 0x9910) = MEM32(esi + 0x9910) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x9910)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000181E0: ;
    eax = MEM32(esi + 0x9910);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    edi = 0x3F800000;
    if (CMP_G(_fas, _fbs)) goto loc_00018211; /* jg: greater (signed >) */

loc_000181F0: ;
    eax = eax + eax * 2;
    eax = eax << 4;
    eax = eax + esi + 0xC;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(esi + 0x9910) = MEM32(esi + 0x9910) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x9910)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00018211: ;
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = 0x43480000;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    ecx = esi;
    MEM32(esp + 0x28) = esp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    PUSH32(esp, 0x00018236u); RECOMP_ABI_CALL(0x00014BD0u, sub_00014BD0); /* call 0x00014BD0 */

loc_00018236: ;
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x41700000;
    ecx = esi;
    MEM32(esp + 0x28) = esp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    PUSH32(esp, 0x0001825Bu); RECOMP_ABI_CALL(0x00014BD0u, sub_00014BD0); /* call 0x00014BD0 */

loc_0001825B: ;
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    ecx = esi;
    MEM32(esp + 0x28) = esp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    PUSH32(esp, 0x0001827Cu); RECOMP_ABI_CALL(0x00014BD0u, sub_00014BD0); /* call 0x00014BD0 */

loc_0001827C: ;
    esp = esp - 0x18;
    eax = esp;
    ecx = 0xC0000000u;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = esi;
    MEM32(esp + 0x28) = esp;
    PUSH32(esp, 0x000182A2u); RECOMP_ABI_CALL(0x00014BD0u, sub_00014BD0); /* call 0x00014BD0 */

loc_000182A2: ;
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    ecx = esi;
    MEM32(esp + 0x28) = esp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    PUSH32(esp, 0x000182C3u); RECOMP_ABI_CALL(0x00014BD0u, sub_00014BD0); /* call 0x00014BD0 */

loc_000182C3: ;
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ebx;
    ecx = esi;
    MEM32(esp + 0x28) = esp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    PUSH32(esp, 0x000182E4u); RECOMP_ABI_CALL(0x00014BD0u, sub_00014BD0); /* call 0x00014BD0 */

loc_000182E4: ;
    esp = esp - 0x18;
    eax = esp;
    MEM32(eax) = edi;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    ecx = esi;
    MEM32(esp + 0x28) = esp;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    PUSH32(esp, 0x00018305u); RECOMP_ABI_CALL(0x00014BD0u, sub_00014BD0); /* call 0x00014BD0 */

loc_00018305: ;
    esp = esp - 0x18;
    MEM32(esp + 0x28) = esp;
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = 0x3BA3D70A;
    ecx = esi;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = 0xBC23D70Au;
    PUSH32(esp, 0x0001832Eu); RECOMP_ABI_CALL(0x00014BD0u, sub_00014BD0); /* call 0x00014BD0 */

loc_0001832E: ;
    ecx = MEM32(esp + 0x78);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00018350
 * Original: 0x00018350 - 0x000183CE (126 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00018350: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    eax = MEM32(0x47C544);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000183BF; /* jne: not equal / not zero */

loc_00018371: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x48D78);
    PUSH32(esp, 0x0001837Fu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0001837F: ;
    esp = esp + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0001839E; /* je: equal / zero */

loc_00018395: ;
    ecx = eax;
    PUSH32(esp, 0x0001839Cu); RECOMP_ABI_CALL(0x000167A0u, sub_000167A0); /* call 0x000167A0 */

loc_0001839C: ;
    goto loc_000183A0;

loc_0001839E: ;
    eax = 0; /* xor self */

loc_000183A0: ;
    PUSH32(esp, 0x11EF0);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(0x47C544) = eax;
    PUSH32(esp, 0x000183B7u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_000183B7: ;
    eax = MEM32(0x47C544);
    esp = esp + 4;

loc_000183BF: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000183D0
 * Original: 0x000183D0 - 0x0001844E (126 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000183D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000183D0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E0F1);
    PUSH32(esp, eax);
    eax = MEM32(0x47C548);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0001843F; /* jne: not equal / not zero */

loc_000183F1: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x3ED54);
    PUSH32(esp, 0x000183FFu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000183FF: ;
    esp = esp + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0001841E; /* je: equal / zero */

loc_00018415: ;
    ecx = eax;
    PUSH32(esp, 0x0001841Cu); RECOMP_ABI_CALL(0x00016B00u, sub_00016B00); /* call 0x00016B00 */

loc_0001841C: ;
    goto loc_00018420;

loc_0001841E: ;
    eax = 0; /* xor self */

loc_00018420: ;
    PUSH32(esp, 0x11F10);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(0x47C548) = eax;
    PUSH32(esp, 0x00018437u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_00018437: ;
    eax = MEM32(0x47C548);
    esp = esp + 4;

loc_0001843F: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00018450
 * Original: 0x00018450 - 0x00018464 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018450(void)
{

loc_00018450: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00018455u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00018455: ;
    PUSH32(esp, 0x0001845Au); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_0001845A: ;
    ecx = eax;
    PUSH32(esp, 0x00018461u); RECOMP_ABI_CALL(0x00026890u, sub_00026890); /* call 0x00026890 */

loc_00018461: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00018470
 * Original: 0x00018470 - 0x00018489 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018470(void)
{

loc_00018470: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001847Fu); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_0001847F: ;
    ecx = eax;
    PUSH32(esp, 0x00018486u); RECOMP_ABI_CALL(0x000264B0u, sub_000264B0); /* call 0x000264B0 */

loc_00018486: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00018490
 * Original: 0x00018490 - 0x000184A9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018490(void)
{

loc_00018490: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0001849Fu); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_0001849F: ;
    ecx = eax;
    PUSH32(esp, 0x000184A6u); RECOMP_ABI_CALL(0x000262A0u, sub_000262A0); /* call 0x000262A0 */

loc_000184A6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000184B0
 * Original: 0x000184B0 - 0x000184C9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000184B0(void)
{

loc_000184B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000184BFu); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_000184BF: ;
    ecx = eax;
    PUSH32(esp, 0x000184C6u); RECOMP_ABI_CALL(0x00026A20u, sub_00026A20); /* call 0x00026A20 */

loc_000184C6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000184D0
 * Original: 0x000184D0 - 0x000184E9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000184D0(void)
{

loc_000184D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000184D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000184D5: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000184DFu); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_000184DF: ;
    ecx = eax;
    PUSH32(esp, 0x000184E6u); RECOMP_ABI_CALL(0x00026300u, sub_00026300); /* call 0x00026300 */

loc_000184E6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000184F0
 * Original: 0x000184F0 - 0x00018504 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000184F0(void)
{

loc_000184F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000184FAu); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_000184FA: ;
    ecx = eax;
    PUSH32(esp, 0x00018501u); RECOMP_ABI_CALL(0x00025EE0u, xml1_guest_effect_resource_interval); /* call 0x00025EE0 */

loc_00018501: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018510
 * Original: 0x00018510 - 0x00018524 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018510(void)
{

loc_00018510: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001851Au); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_0001851A: ;
    ecx = eax;
    PUSH32(esp, 0x00018521u); RECOMP_ABI_CALL(0x00025E50u, sub_00025E50); /* call 0x00025E50 */

loc_00018521: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018530
 * Original: 0x00018530 - 0x00018544 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018530(void)
{

loc_00018530: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0001853Au); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_0001853A: ;
    ecx = eax;
    PUSH32(esp, 0x00018541u); RECOMP_ABI_CALL(0x00025F50u, sub_00025F50); /* call 0x00025F50 */

loc_00018541: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00018550
 * Original: 0x00018550 - 0x00018826 (726 bytes, 193 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00018550(void)
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

loc_00018550: ;
    esp = esp - 0xA8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xB8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0001881B; /* je: equal / zero */

loc_00018569: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0001856Fu); RECOMP_ABI_CALL(0x000183D0u, sub_000183D0); /* call 0x000183D0 */

loc_0001856F: ;
    edi = MEM32(eax + 0xA080);
    eax = eax + 0x3B10;
    edi = edi & esi;
    esi = MEM32(esp + 0xB8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x8C);
    ecx = esp + 0x4C;
    edi = edi + eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x0001859Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001859A: ;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000185EF; /* jp: parity */

loc_000185D7: ;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;

loc_000185EF: ;
    PUSH32(esp, ebx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00018604u); RECOMP_ABI_CALL(0x00120A30u, sub_00120A30); /* call 0x00120A30 */

loc_00018604: ;
    eax = edi + 4;
    esp = esp + 0xC;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = 0;
    ebx = eax;

loc_00018618: ;
    ecx = MEM32(esp + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x2C) (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0001862D; /* jne: not equal / not zero */

loc_00018625: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00018819; /* je: equal / zero */

loc_0001862D: ;
    edi = MEM32(ebx);
    edi = edi + 0x18;
    PUSH32(esp, 0x00018637u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00018637: ;
    fp_top() = fp_top() * MEMF(edi + 4); /* fmul dword ptr [edi + 4] */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    PUSH32(esp, 0x00018647u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00018647: ;
    edx = MEM32(ebx);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = fp_top() / MEMF(esp + 0x18); /* fdiv dword ptr [esp + 0x18] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000187CD; /* jp: parity */

loc_0001867F: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_00018690;

    /* nop */
    edi = edi;

loc_00018690: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(MEM32(edi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x100), 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000186A7; /* je: equal / zero */

loc_0001869E: ;
    fp_top() = fp_top() * MEMF(esp + 0x48); /* fmul dword ptr [esp + 0x48] */
    fp_top() = fp_top() + MEMF(edi + 0x10); /* fadd dword ptr [edi + 0x10] */
    goto loc_000186B4;

loc_000186A7: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000186AEu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000186AE: ;
    fp_top() = fp_top() * MEMF(edi + 0x14); /* fmul dword ptr [edi + 0x14] */
    fp_top() = fp_top() + MEMF(edi + 0x10); /* fadd dword ptr [edi + 0x10] */

loc_000186B4: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000187E2; /* jne: not equal / not zero */

loc_000186C9: ;
    eax = MEM32(esi);
    ecx = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x000186DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000186DB: ;
    edx = MEM32(esi);
    ebx = MEM32(ebx);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x000186E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000186E9: ;
    MEM32(esp + 0x44) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x4684)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x4684), 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000187B0; /* je: equal / zero */

loc_000186FD: ;
    eax = MEM32(edi);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x5C) = eax;
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    eax = MEM32(edi + 4);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebx);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x28);
    edx = MEM32(ebx + 4);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x78) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x9C) = ecx;
    MEM32(esp + 0x88) = eax;
    eax = MEM32(esp + 0x44);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x94) = eax;
    eax = MEM32(esp + 0xC8);
    PUSH32(esp, ecx);
    ecx = ebp + 0x2254;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = edx;
    PUSH32(esp, 0x000187B0u); RECOMP_ABI_CALL(0x00016260u, sub_00016260); /* call 0x00016260 */

loc_000187B0: ;
    ebx = MEM32(esp + 0x14);

loc_000187B4: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00018690; /* jnp: not parity */

loc_000187CB: ;
    fp_pop(); /* fstp st(0) */

loc_000187CD: ;
    ecx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x4C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x50) = ecx;
    ebx = ebx + 4;
    goto loc_00018618;

loc_000187E2: ;
    edx = MEM32(esp + 0xC4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00018801u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00018801: ;
    ecx = MEM32(ebx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0001880Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0001880F: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00018817u); RECOMP_ABI_CALL(0x0001A5F0u, sub_0001A5F0); /* call 0x0001A5F0 */

loc_00018817: ;
    goto loc_000187B4;

loc_00018819: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_0001881B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xA8;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
