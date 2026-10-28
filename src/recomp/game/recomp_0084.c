/**
 * X-Men Legends - Recompiled code chunk 84
 * Functions: 250 (0x003489E5 - 0x0034E240)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003489E5
 * Original: 0x003489E5 - 0x003489EA (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003489E5(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003489E5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348A15
 * Original: 0x00348A15 - 0x00348A7E (105 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348A15(void)
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

loc_00348A15: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    /* fstp xword ptr [ebp - 0x9e] */
    fp_push(MEMF(ebp + -158)); /* fld */
    _fa = (uint32_t)(MEM8(ebp + -151)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -151), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00348A35; /* je: equal / zero */

loc_00348A2C: ;
    MEM8(ebp + -144) = 7;
    goto loc_00348A3C;

loc_00348A35: ;
    MEM8(ebp + -144) = 1;

loc_00348A3C: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    /* fstp xword ptr [ebp - 0x9e] */
    fp_push(MEMF(ebp + -158)); /* fld */
    _fa = (uint32_t)(MEM8(ebp + -151)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -151), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00348A74; /* je: equal / zero */

loc_00348A6B: ;
    MEM8(ebp + -144) = 7;
    goto loc_00348A7B;

loc_00348A74: ;
    MEM8(ebp + -144) = 1;

loc_00348A7B: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348A17
 * Original: 0x00348A17 - 0x00348A7E (103 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348A17(void)
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

loc_00348A17: ;
    /* fstp xword ptr [ebp - 0x9e] */
    fp_push(MEMF(ebp + -158)); /* fld */
    _fa = (uint32_t)(MEM8(ebp + -151)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -151), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00348A35; /* je: equal / zero */

loc_00348A2C: ;
    MEM8(ebp + -144) = 7;
    goto loc_00348A3C;

loc_00348A35: ;
    MEM8(ebp + -144) = 1;

loc_00348A3C: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    /* fstp xword ptr [ebp - 0x9e] */
    fp_push(MEMF(ebp + -158)); /* fld */
    _fa = (uint32_t)(MEM8(ebp + -151)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -151), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00348A74; /* je: equal / zero */

loc_00348A6B: ;
    MEM8(ebp + -144) = 7;
    goto loc_00348A7B;

loc_00348A74: ;
    MEM8(ebp + -144) = 1;

loc_00348A7B: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348A3F
 * Original: 0x00348A3F - 0x00348A7E (63 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348A3F(void)
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

loc_00348A3F: ;
    /* fstp xword ptr [ebp - 0x9e] */
    fp_push(MEMF(ebp + -158)); /* fld */
    _fa = (uint32_t)(MEM8(ebp + -151)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -151), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00348A74; /* je: equal / zero */

loc_00348A54: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    /* fstp xword ptr [ebp - 0x9e] */
    fp_push(MEMF(ebp + -158)); /* fld */
    _fa = (uint32_t)(MEM8(ebp + -151)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -151), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00348A74; /* je: equal / zero */

loc_00348A6B: ;
    MEM8(ebp + -144) = 7;
    goto loc_00348A7B;

loc_00348A74: ;
    MEM8(ebp + -144) = 1;

loc_00348A7B: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348A7E
 * Original: 0x00348A7E - 0x00348A91 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00348A7E(void)
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

loc_00348A7E: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A7DC)); /* fld */
    _fa = (uint32_t)(MEM8(ebp + -144)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -144), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00348A98(); return; } /* jg: greater (signed >) */

    g_seh_ebp = ebp; sub_00348A91(); return; /* fallthrough 0x00348A91 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348A91
 * Original: 0x00348A91 - 0x00348A9B (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348A91(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00348A91: ;
    MEM8(ebp + -144) = 1;
    SET_LO8(ecx, LO8(ecx) | LO8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00348A9B
 * Original: 0x00348A9B - 0x00348AA2 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348A9B(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00348A9B: ;
    SET_LO8(ecx, LO8(ecx) | LO8(ecx));
    if ((LO8(ecx) == 0)) goto loc_00348AA1; /* je: equal / zero */

loc_00348A9F: ;
    fp_top() = -fp_top(); /* fchs */

loc_00348AA1: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348AA2
 * Original: 0x00348AA2 - 0x00348AD2 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348AA2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00348AA2: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00348AB0; /* jbe: below or equal (unsigned <=) */

loc_00348AAD: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00348AB0: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00348AC4; /* jle: less or equal (signed <=) */

loc_00348AB9: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00348AC1u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00348AC1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00348AC4: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00348AD4
 * Original: 0x00348AD4 - 0x00348B3C (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348AD4(void)
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

loc_00348AD4: ;
    MEM8(ebp + -144) = 0xFE;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) != 0)) goto loc_00348B1A; /* jne: not equal / not zero */

loc_00348ADF: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00348AE1: ;
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    goto loc_00348AF2;

    MEM8(ebp + -144) = 0xFE;
    SET_HI8(ecx, 0); /* xor self */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */

loc_00348AF2: ;
    PUSH32(esp, 0x00348AF7u); RECOMP_ABI_CALL(0x00348C22u, sub_00348C22); /* call 0x00348C22 */

loc_00348AF7: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00348B08; /* je: equal / zero */

loc_00348B04: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_top() / fp_st1(); fp_pop(); /* fdivrp st(1) */

loc_00348B08: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00348B0F; /* jne: not equal / not zero */

loc_00348B0D: ;
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */

loc_00348B0F: ;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) == 0)) goto loc_00348B15; /* je: equal / zero */

loc_00348B13: ;
    fp_top() = -fp_top(); /* fchs */

loc_00348B15: ;
    g_seh_ebp = ebp; sub_003489D0(); return; /* tail jmp 0x003489D0 */

loc_00348B1A: ;
    PUSH32(esp, 0x00348B1Fu); RECOMP_ABI_CALL(0x00348C65u, sub_00348C65); /* call 0x00348C65 */

loc_00348B1F: ;
    eax = eax | eax;
    if ((eax == 0)) goto loc_00348B37; /* je: equal / zero */

loc_00348B23: ;
    SET_HI8(ecx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348B2C; /* je: equal / zero */

loc_00348B2A: ;
    SET_HI8(ecx, ~HI8(ecx));

loc_00348B2C: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    goto loc_00348AE1;

    g_seh_ebp = ebp; sub_003489E3(); return; /* tail jmp 0x003489E3 */

loc_00348B37: ;
    g_seh_ebp = ebp; sub_00348A7E(); return; /* tail jmp 0x00348A7E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348BD4
 * Original: 0x00348BD4 - 0x00348C05 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00348BD4(void)
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

loc_00348BD4: ;
    POP32(esp, eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00348BF7; /* jne: not equal / not zero */

loc_00348BE8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A808)); /* fld */
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) == 0)) goto loc_00348BF6; /* je: equal / zero */

loc_00348BF4: ;
    fp_top() = -fp_top(); /* fchs */

loc_00348BF6: ;
    esp += 4; return; /* ret */

loc_00348BF7: ;
    MEM8(ebp + -144) = 4;
    g_seh_ebp = ebp; sub_003489DE(); return; /* tail jmp 0x003489DE */

    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_00348C05(); return; /* fallthrough 0x00348C05 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348C05
 * Original: 0x00348C05 - 0x00348C15 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00348C05(void)
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

loc_00348C05: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A808)); /* fld */
    MEM8(ebp + -144) = 3;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348C22
 * Original: 0x00348C22 - 0x00348C65 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348C22(void)
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

loc_00348C22: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x47A826)); /* fld */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00348BD4(); return; } /* jne: not equal / not zero */

loc_00348C3F: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = rint(fp_top()); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    SET_LO8(edx, MEM8(ebp + -159));
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348C65
 * Original: 0x00348C65 - 0x00348C99 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348C65(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00348C65: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = rint(fp_top()); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp != 0) /* sahf */) goto loc_00348C8B; /* jne: not equal / not zero */

loc_00348C71: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMD(0x47A83A); /* fmul qword ptr [0x47a83a] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = rint(fp_top()); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp == 0) /* sahf */) goto loc_00348C92; /* je: equal / zero */

loc_00348C85: ;
    eax = 1;

loc_00348C8A: ;
    esp += 4; return; /* ret */

loc_00348C8B: ;
    eax = 0;
    goto loc_00348C8A;

loc_00348C92: ;
    eax = 2;
    goto loc_00348C8A;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348CCC
 * Original: 0x00348CCC - 0x00348CE3 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00348CCC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00348CCC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp + 0xFFFFFFE0u;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -12) = eax;
    g_seh_ebp = ebp; sub_00348CEC(); return; /* tail jmp 0x00348CEC */

}

/**
 * sub_00348CE3
 * Original: 0x00348CE3 - 0x00348D1F (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00348CE3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00348CE3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp + 0xFFFFFFE0u;
    MEM32(ebp + -32) = eax;
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = ecx;
    eax = ebp + 8;
    ecx = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348D0Cu); RECOMP_ABI_CALL(0x0034C08Fu, sub_0034C08F); /* call 0x0034C08F */

loc_00348D0C: ;
    esp = esp + 0xC;
    fp_push(MEMD(ebp + -8)); /* fld double */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348D1D; /* je: equal / zero */

loc_00348D1A: ;
    g_fp_control_word = MEM16(ebp + 8); /* fldcw word ptr [ebp + 8] */

loc_00348D1D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348CEC
 * Original: 0x00348CEC - 0x00348D1F (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348CEC(void)
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

loc_00348CEC: ;
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = ecx;
    eax = ebp + 8;
    ecx = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00348D0Cu); RECOMP_ABI_CALL(0x0034C08Fu, sub_0034C08F); /* call 0x0034C08F */

loc_00348D0C: ;
    esp = esp + 0xC;
    fp_push(MEMD(ebp + -8)); /* fld double */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348D1D; /* je: equal / zero */

loc_00348D1A: ;
    g_fp_control_word = MEM16(ebp + 8); /* fldcw word ptr [ebp + 8] */

loc_00348D1D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348D20
 * Original: 0x00348D20 - 0x00348D35 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00348D20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00348D20: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = rint(fp_top()); /* frndint */
    fp_st1() = fp_top() - fp_st1(); /* fsubr st(1), st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348D35
 * Original: 0x00348D35 - 0x00348D4C (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348D35(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00348D35: ;
    edx = MEM32(esp + 4);
    edx = edx & 0x300;
    edx = edx | 0x7F;
    MEM16(esp + 6) = LO16(edx);
    g_fp_control_word = MEM16(esp + 6); /* fldcw word ptr [esp + 6] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348D4C
 * Original: 0x00348D4C - 0x00348D65 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348D4C(void)
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

loc_00348D4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00348D59; /* je: equal / zero */

loc_00348D53: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_00348D59: ;
    fp_top() = fp_top() + MEMD(0x431384); /* fadd qword ptr [0x431384] */
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348D65
 * Original: 0x00348D65 - 0x00348DA8 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348D65(void)
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

loc_00348D65: ;
    eax = MEM32(edx + 4);
    eax = eax & 0x7FF00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF00000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348D77; /* je: equal / zero */

loc_00348D74: ;
    fp_push(MEMD(edx)); /* fld double */
    esp += 4; return; /* ret */

loc_00348D77: ;
    eax = MEM32(edx + 4);
    esp = esp - 0xA;
    eax = eax | 0x7FFF0000;
    MEM32(esp + 6) = eax;
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    eax = (eax << 0xB) | (ecx >> (32 - 0xB)); /* shld */
    ecx = ecx << 0xB;
    MEM32(esp + 4) = eax;
    MEM32(esp) = ecx;
    fp_push(MEMF(esp)); /* fld */
    esp = esp + 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0 (32-bit) */
    eax = MEM32(edx + 4);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348DA8
 * Original: 0x00348DA8 - 0x00348DBE (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348DA8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00348DA8: ;
    eax = MEM32(esp + 8);
    eax = eax & 0x7FF00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF00000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348DB9; /* je: equal / zero */

loc_00348DB8: ;
    esp += 4; return; /* ret */

loc_00348DB9: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00348DBE
 * Original: 0x00348DBE - 0x00348DCB (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348DBE(void)
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

loc_00348DBE: ;
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348DC9; /* je: equal / zero */

loc_00348DC6: ;
    g_fp_control_word = MEM16(esp); /* fldcw word ptr [esp] */

loc_00348DC9: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348DCB
 * Original: 0x00348DCB - 0x00348DF5 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348DCB(void)
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

loc_00348DCB: ;
    SET_LO16(eax, MEM16(esp));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348DF3; /* je: equal / zero */

loc_00348DD5: ;
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) == 0)) goto loc_00348DF0; /* je: equal / zero */

loc_00348DDB: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) == 0)) goto loc_00348DF0; /* je: equal / zero */

loc_00348DE4: ;
    eax = 8;
    PUSH32(esp, 0x00348DEEu); RECOMP_ABI_CALL(0x00348CE3u, sub_00348CE3); /* call 0x00348CE3 */

loc_00348DEE: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00348DF0: ;
    g_fp_control_word = MEM16(esp); /* fldcw word ptr [esp] */

loc_00348DF3: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348DF5
 * Original: 0x00348DF5 - 0x00348E09 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348DF5(void)
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

loc_00348DF5: ;
    esp = esp - 8;
    MEMD(esp) = fp_top(); /* fst */
    eax = MEM32(esp + 4);
    esp = esp + 8;
    eax = eax & 0x7FF00000;
    g_seh_ebp = ebp; sub_00348E1D(); return; /* tail jmp 0x00348E1D */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348E09
 * Original: 0x00348E09 - 0x00348EAC (163 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348E09(void)
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

loc_00348E09: ;
    esp = esp - 8;
    MEMD(esp) = fp_top(); /* fst */
    eax = MEM32(esp + 4);
    esp = esp + 8;
    eax = eax & 0x7FF00000;
    if ((eax == 0)) goto loc_00348E5A; /* je: equal / zero */

loc_00348E1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF00000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348E83; /* je: equal / zero */

loc_00348E24: ;
    SET_LO16(eax, MEM16(esp));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348E58; /* je: equal / zero */

loc_00348E2E: ;
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) != 0)) goto loc_00348E55; /* jne: not equal / not zero */

loc_00348E34: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) == 0)) goto loc_00348E55; /* je: equal / zero */

loc_00348E3D: ;
    eax = 8;

loc_00348E42: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348E4E; /* je: equal / zero */

loc_00348E47: ;
    PUSH32(esp, 0x00348E4Cu); RECOMP_ABI_CALL(0x00348CE3u, sub_00348CE3); /* call 0x00348CE3 */

loc_00348E4C: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00348E4E: ;
    PUSH32(esp, 0x00348E53u); RECOMP_ABI_CALL(0x00348CCCu, sub_00348CCC); /* call 0x00348CCC */

loc_00348E53: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00348E55: ;
    g_fp_control_word = MEM16(esp); /* fldcw word ptr [esp] */

loc_00348E58: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00348E5A: ;
    fp_push(MEMD(0x4313B0)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x4313A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x4313a0] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    eax = 4;
    if ((g_fp_cmp >= 0) /* sahf */) goto loc_00348E42; /* jae: above or equal (unsigned >=) */

loc_00348E7B: ;
    fp_top() = fp_top() * MEMD(0x4313C0); /* fmul qword ptr [0x4313c0] */
    goto loc_00348E42;

loc_00348E83: ;
    fp_push(MEMD(0x4313A8)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x431398)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x431398] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    eax = 3;
    if ((g_fp_cmp <= 0) /* sahf */) goto loc_00348E42; /* jbe: below or equal (unsigned <=) */

loc_00348EA4: ;
    fp_top() = fp_top() * MEMD(0x4313B8); /* fmul qword ptr [0x4313b8] */
    goto loc_00348E42;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348EAC
 * Original: 0x00348EAC - 0x00348F11 (101 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00348EAC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00348EAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348EBEu); RECOMP_ABI_CALL(0x0034145Bu, sub_0034145B); /* call 0x0034145B */

loc_00348EBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x90) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x90 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00348F0D; /* jne: not equal / not zero */

loc_00348EC4: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348ED1u); RECOMP_ABI_CALL(0x003470ADu, sub_003470AD); /* call 0x003470AD */

loc_00348ED1: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00348F0D; /* jp: parity */

loc_00348EDF: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMD(0x3DA0A0); /* fmul qword ptr [0x3da0a0] */
    PUSH32(esp, ecx);
    MEMD(ebp + -8) = fp_top(); /* fst */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348EF5u); RECOMP_ABI_CALL(0x003470ADu, sub_003470AD); /* call 0x003470AD */

loc_00348EF5: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    POP32(esp, ecx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00348F08; /* jp: parity */

loc_00348F03: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00348F08: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00348F0D: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348F11
 * Original: 0x00348F11 - 0x00349063 (338 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00348F11(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00348F11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x3dcf30] */
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00348F2B; /* jp: parity */

loc_00348F29: ;
    fp_top() = -fp_top(); /* fchs */

loc_00348F2B: ;
    eax = 0x7FF00000;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    ecx = 0xFFF00000u;
    if (CMP_NE(_fa, _fb)) goto loc_00348F72; /* jne: not equal / not zero */

loc_00348F3A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00348FAD; /* jne: not equal / not zero */

loc_00348F3F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3D45C8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x3d45c8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00348F50; /* jne: not equal / not zero */

loc_00348F4C: ;
    fp_pop(); /* fstp st(0) */
    goto loc_00348FCD;

loc_00348F50: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3D45C8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3d45c8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x18);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00348FEB; /* jnp: not parity */

loc_00348F64: ;
    fp_push(MEMD(0x47A6A8)); /* fld double */
    esi = 0; /* xor self */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034905C;

loc_00348F72: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00348FAD; /* jne: not equal / not zero */

loc_00348F77: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00348FAD; /* jne: not equal / not zero */

loc_00348F7C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3D45C8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x3d45c8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00348F92; /* jne: not equal / not zero */

loc_00348F89: ;
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    goto loc_00349059;

loc_00348F92: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3D45C8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3d45c8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x18);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00348F64; /* jp: parity */

loc_00348FA2: ;
    fp_push(MEMD(0x47A6A0)); /* fld double */
    goto loc_0034905C;

loc_00348FAD: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_00348FF3; /* jne: not equal / not zero */

loc_00348FB4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034905E; /* jne: not equal / not zero */

loc_00348FBD: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00348FD8; /* jne: not equal / not zero */

loc_00348FCD: ;
    fp_push(MEMD(0x47A6A0)); /* fld double */
    goto loc_00349059;

loc_00348FD8: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x18);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00348FEF; /* jp: parity */

loc_00348FEB: ;
    fp_push(0.0); /* fldz */
    goto loc_0034905C;

loc_00348FEF: ;
    fp_push(1.0); /* fld1 */
    goto loc_0034905C;

loc_00348FF3: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034905E; /* jne: not equal / not zero */

loc_00348FF8: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034905E; /* jne: not equal / not zero */

loc_00348FFD: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034900Au); RECOMP_ABI_CALL(0x00348EACu, sub_00348EAC); /* call 0x00348EAC */

loc_0034900A: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    POP32(esp, ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    POP32(esp, ecx);
    ecx = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00349036; /* jne: not equal / not zero */

loc_0034901E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    fp_push(MEMD(0x47A6A0)); /* fld double */
    if (CMP_NE(_fa, _fb)) goto loc_0034902B; /* jne: not equal / not zero */

loc_00349029: ;
    fp_top() = -fp_top(); /* fchs */

loc_0034902B: ;
    eax = MEM32(ebp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMD(eax) = fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0034905E;

loc_00349036: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00349057; /* jp: parity */

loc_00349046: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349053; /* jne: not equal / not zero */

loc_0034904B: ;
    fp_push(MEMD(0x47A6C0)); /* fld double */
    goto loc_0034902B;

loc_00349053: ;
    fp_push(0.0); /* fldz */
    goto loc_0034902B;

loc_00349057: ;
    fp_push(1.0); /* fld1 */

loc_00349059: ;
    eax = MEM32(ebp + 0x18);

loc_0034905C: ;
    MEMD(eax) = fp_top(); fp_pop(); /* fstp */

loc_0034905E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00349070
 * Original: 0x00349070 - 0x00349105 (149 bytes, 58 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00349070: ;
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if ((eax != 0)) goto loc_003490A1; /* jne: not equal / not zero */

loc_00349079: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 8);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    eax = ebx;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = esi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    goto loc_003490E8;

loc_003490A1: ;
    ecx = eax;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);

loc_003490AF: ;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    { uint32_t carry_out = ebx & 1u; ebx = (ebx >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr ebx, 1 */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    { uint32_t carry_out = eax & 1u; eax = (eax >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr eax, 1 */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    if ((ecx != 0)) goto loc_003490AF; /* jne: not equal / not zero */

loc_003490BB: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x10);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    if (_cf) goto loc_003490DD; /* jb: below (unsigned <) */

loc_003490CF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003490DD; /* ja: above (unsigned >) */

loc_003490D5: ;
    if (CMP_B(_fa, _fb)) goto loc_003490E6; /* jb: below (unsigned <) */

loc_003490D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003490E6; /* jbe: below or equal (unsigned <=) */

loc_003490DD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x10)));
    eax = eax - MEM32(esp + 0x10);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0x14)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_003490E6: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */

loc_003490E8: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 8)));
    eax = eax - MEM32(esp + 8);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0xC)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    ecx = edx;
    edx = ebx;
    ebx = ecx;
    ecx = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00349105
 * Original: 0x00349105 - 0x00349186 (129 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349105(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349105: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00349111u); RECOMP_ABI_CALL(0x0034C1FBu, sub_0034C1FB); /* call 0x0034C1FB */

loc_00349111: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00349151; /* je: equal / zero */

loc_00349117: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349121; /* je: equal / zero */

loc_0034911C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349137; /* jne: not equal / not zero */

loc_00349121: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00349128u); RECOMP_ABI_CALL(0x0034C1FBu, sub_0034C1FB); /* call 0x0034C1FB */

loc_00349128: ;
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0x00349131u); RECOMP_ABI_CALL(0x0034C1FBu, sub_0034C1FB); /* call 0x0034C1FB */

loc_00349131: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00349151; /* je: equal / zero */

loc_00349137: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034913Du); RECOMP_ABI_CALL(0x0034C1FBu, sub_0034C1FB); /* call 0x0034C1FB */

loc_0034913D: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00349144u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00349144: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00349151; /* jne: not equal / not zero */

loc_00349148: ;
    PUSH32(esp, 0x0034914Du); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034914D: ;
    edi = eax;
    goto loc_00349153;

loc_00349151: ;
    edi = 0; /* xor self */

loc_00349153: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00349159u); RECOMP_ABI_CALL(0x0034C1B2u, sub_0034C1B2); /* call 0x0034C1B2 */

loc_00349159: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(eax * 4 + 0x6F11E0);
    esi = esi & 0x1F;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, ecx);
    ecx = esi + esi * 4;
    MEM8(eax + ecx * 8 + 4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00349181; /* je: equal / zero */

loc_00349175: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034917Bu); RECOMP_ABI_CALL(0x003453D6u, sub_003453D6); /* call 0x003453D6 */

loc_0034917B: ;
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    goto loc_00349183;

loc_00349181: ;
    eax = 0; /* xor self */

loc_00349183: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00349186
 * Original: 0x00349186 - 0x003491FA (116 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349186(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00349186: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4313C8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349192u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00349192: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00349205(); return; } /* jae: above or equal (unsigned >=) */

loc_0034919D: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edi = eax * 4 + 0x6F11E0;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00349205(); return; } /* je: equal / zero */

loc_003491BD: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003491C3u); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_003491C3: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003491DD; /* je: equal / zero */

loc_003491D1: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003491D7u); RECOMP_ABI_CALL(0x00349105u, sub_00349105); /* call 0x00349105 */

loc_003491D7: ;
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    goto loc_003491EC;

loc_003491DD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003491E2u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_003491E2: ;
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_003491EC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003491F5u); RECOMP_ABI_CALL(0x003491FDu, sub_003491FD); /* call 0x003491FD */

loc_003491F5: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0034921B(); return; /* tail jmp 0x0034921B */

}

/**
 * sub_003491FA
 * Original: 0x003491FA - 0x003491FD (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003491FA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003491FA: ;
    ebx = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_003491FD(); return; /* fallthrough 0x003491FD */

}

/**
 * sub_003491FD
 * Original: 0x003491FD - 0x00349205 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003491FD(void)
{

loc_003491FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00349203u); RECOMP_ABI_CALL(0x0034C2DCu, sub_0034C2DC); /* call 0x0034C2DC */

loc_00349203: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00349205
 * Original: 0x00349205 - 0x00349221 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349205(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00349205: ;
    PUSH32(esp, 0x0034920Au); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034920A: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x00349215u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_00349215: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00349220u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00349220: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034921B
 * Original: 0x0034921B - 0x00349221 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034921B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034921B: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00349220u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00349220: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00349221
 * Original: 0x00349221 - 0x0034924C (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349221(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349221: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034924A; /* je: equal / zero */

loc_0034922D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034924A; /* je: equal / zero */

loc_00349231: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x00349239u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00349239: ;
    MEM16(esi + 0xC) = MEM16(esi + 0xC) & 0xFBF7;
    eax = 0; /* xor self */
    POP32(esp, ecx);
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;

loc_0034924A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034924C
 * Original: 0x0034924C - 0x003493B4 (360 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034924C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034924C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5D9CE0);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(edi));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00349285; /* je: equal / zero */

loc_0034926B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x72) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x72 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034927E; /* je: equal / zero */

loc_0034926F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x77) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x77 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349391; /* jne: not equal / not zero */

loc_00349277: ;
    ecx = 0x301;
    goto loc_0034928A;

loc_0034927E: ;
    ecx = 0; /* xor self */
    esi = esi | 1;
    goto loc_0034928D;

loc_00349285: ;
    ecx = 0x109;

loc_0034928A: ;
    esi = esi | 2;

loc_0034928D: ;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034936C;

loc_00349295: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349377; /* je: equal / zero */

loc_0034929D: ;
    eax = SX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x54 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00349316; /* jg: greater (signed >) */

loc_003492A5: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00349309; /* je: equal / zero */

loc_003492A7: ;
    eax = eax - 0x2B;
    if ((eax == 0)) goto loc_003492F3; /* je: equal / zero */

loc_003492AC: ;
    eax = eax - 0x19;
    if ((eax == 0)) goto loc_003492E9; /* je: equal / zero */

loc_003492B1: ;
    eax = eax - 0xE;
    if ((eax == 0)) goto loc_003492D5; /* je: equal / zero */

loc_003492B6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034934E; /* jne: not equal / not zero */

loc_003492BD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034934E; /* jne: not equal / not zero */

loc_003492C6: ;
    MEM32(ebp + -4) = 1;
    ecx = ecx | 0x20;
    goto loc_0034936C;

loc_003492D5: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034934E; /* jne: not equal / not zero */

loc_003492DA: ;
    MEM32(ebp + -4) = 1;
    ecx = ecx | 0x10;
    goto loc_0034936C;

loc_003492E9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034934E; /* jne: not equal / not zero */

loc_003492EE: ;
    ecx = ecx | 0x40;
    goto loc_0034936C;

loc_003492F3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034934E; /* jne: not equal / not zero */

loc_003492F8: ;
    ecx = ecx & 0xFFFFFFFEu;
    esi = esi & 0xFFFFFFFCu;
    ecx = ecx | 2;
    esi = esi | 0x80;
    goto loc_0034936C;

loc_00349309: ;
    eax = 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034934E; /* jne: not equal / not zero */

loc_00349312: ;
    ecx = ecx | eax;
    goto loc_0034936C;

loc_00349316: ;
    eax = eax - 0x62;
    if ((eax == 0)) goto loc_00349361; /* je: equal / zero */

loc_0034931B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00349349; /* je: equal / zero */

loc_0034931E: ;
    eax = eax - 0xB;
    if ((eax == 0)) goto loc_00349335; /* je: equal / zero */

loc_00349323: ;
    eax = eax - 6;
    if ((eax != 0)) goto loc_0034934E; /* jne: not equal / not zero */

loc_00349328: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034934E; /* jne: not equal / not zero */

loc_0034932D: ;
    ecx = ecx | 0x4000;
    goto loc_0034936C;

loc_00349335: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034934E; /* jne: not equal / not zero */

loc_0034933A: ;
    MEM32(ebp + -8) = 1;
    esi = esi & 0xFFFFBFFFu;
    goto loc_0034936C;

loc_00349349: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349352; /* je: equal / zero */

loc_0034934E: ;
    edx = 0; /* xor self */
    goto loc_0034936C;

loc_00349352: ;
    MEM32(ebp + -8) = 1;
    esi = esi | 0x4000;
    goto loc_0034936C;

loc_00349361: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034934E; /* jne: not equal / not zero */

loc_00349366: ;
    ecx = ecx | 0x8000;

loc_0034936C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349295; /* jne: not equal / not zero */

loc_00349377: ;
    PUSH32(esp, 0x1A4);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349388u); RECOMP_ABI_CALL(0x0034C710u, sub_0034C710); /* call 0x0034C710 */

loc_00349388: ;
    ecx = eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00349395; /* jge: greater or equal (signed >=) */

loc_00349391: ;
    eax = 0; /* xor self */
    goto loc_003493AF;

loc_00349395: ;
    eax = MEM32(ebp + 0x14);
    MEM32(0x5D9A00) = MEM32(0x5D9A00) + 1;
    _fa = (uint32_t)(MEM32(0x5D9A00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x10) = ecx;

loc_003493AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003493B4
 * Original: 0x003493B4 - 0x003494CA (278 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003493B4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003493B4: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4313D8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003493C0u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003493C0: ;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003493CEu); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_003493CE: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    esi = 0; /* xor self */

loc_003493D4: ;
    MEM32(ebp + -32) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F12EC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x6F12EC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003494A3; /* jge: greater or equal (signed >=) */

loc_003493E3: ;
    eax = MEM32(0x6F12E8);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034943F; /* je: equal / zero */

loc_003493EF: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x83 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00349438; /* jne: not equal / not zero */

loc_003493F5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00349411; /* jle: less or equal (signed <=) */

loc_003493FA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00349411; /* jge: greater or equal (signed >=) */

loc_003493FF: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349408u); RECOMP_ABI_CALL(0x003455D4u, sub_003455D4); /* call 0x003455D4 */

loc_00349408: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003494A3; /* je: equal / zero */

loc_00349411: ;
    eax = MEM32(0x6F12E8);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034941Fu); RECOMP_ABI_CALL(0x0034394Eu, sub_0034394E); /* call 0x0034394E */

loc_0034941F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = MEM32(0x6F12E8);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034943B; /* je: equal / zero */

loc_0034942F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349436u); RECOMP_ABI_CALL(0x003439A0u, sub_003439A0); /* call 0x003439A0 */

loc_00349436: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00349438: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003493D4;

loc_0034943B: ;
    edi = eax;
    goto loc_003494A0;

loc_0034943F: ;
    esi = esi << 2;
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349449u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00349449: ;
    POP32(esp, ecx);
    ecx = MEM32(0x6F12E8);
    MEM32(esi + ecx) = eax;
    eax = MEM32(0x6F12E8);
    eax = MEM32(esi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003494A3; /* je: equal / zero */

loc_0034945F: ;
    PUSH32(esp, 0xFA0);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034946Du); RECOMP_ABI_CALL(0x0034B1A4u, sub_0034B1A4); /* call 0x0034B1A4 */

loc_0034946D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(0x6F12E8);
    if (TEST_NZ(_fa, _fb)) goto loc_0034948B; /* jne: not equal / not zero */

loc_00349478: ;
    PUSH32(esp, MEM32(esi + eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349480u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00349480: ;
    POP32(esp, ecx);
    eax = MEM32(0x6F12E8);
    MEM32(esi + eax) = ebx;
    goto loc_003494A3;

loc_0034948B: ;
    eax = MEM32(esi + eax);
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x00349498u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00349498: ;
    eax = MEM32(0x6F12E8);
    edi = MEM32(esi + eax);

loc_003494A0: ;
    MEM32(ebp + -28) = edi;

loc_003494A3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003494B9; /* je: equal / zero */

loc_003494A7: ;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x10) = MEM32(edi + 0x10) | 0xFFFFFFFFu;

loc_003494B9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003494C2u); RECOMP_ABI_CALL(0x003494CDu, sub_003494CD); /* call 0x003494CD */

loc_003494C2: ;
    eax = edi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003494C9u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003494C9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003494CA
 * Original: 0x003494CA - 0x003494CD (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003494CA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003494CA: ;
    edi = MEM32(ebp + -28);

    g_seh_ebp = ebp; sub_003494CD(); return; /* fallthrough 0x003494CD */

}

/**
 * sub_003494CD
 * Original: 0x003494CD - 0x003494D6 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003494CD(void)
{

loc_003494CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x003494D4u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_003494D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003494D6
 * Original: 0x003494D6 - 0x0034955E (136 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003494D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003494D6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003494E3u); RECOMP_ABI_CALL(0x0034C03Au, sub_0034C03A); /* call 0x0034C03A */

loc_003494E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0034955A; /* je: equal / zero */

loc_003494E8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47A160 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003494F4; /* jne: not equal / not zero */

loc_003494F0: ;
    eax = 0; /* xor self */
    goto loc_003494FF;

loc_003494F4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47A180 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034955A; /* jne: not equal / not zero */

loc_003494FC: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003494FF: ;
    MEM32(0x5D9A00) = MEM32(0x5D9A00) + 1;
    _fa = (uint32_t)(MEM32(0x5D9A00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xC), 0x10C (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034955A; /* jne: not equal / not zero */

loc_0034950D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax * 4 + 0x5D9BD8;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    ebx = 0x1000;
    if (CMP_NE(_fa, _fb)) goto loc_00349540; /* jne: not equal / not zero */

loc_00349520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00349526u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00349526: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(edi) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00349540; /* jne: not equal / not zero */

loc_0034952D: ;
    eax = esi + 0x14;
    PUSH32(esp, 2);
    MEM32(esi + 8) = eax;
    MEM32(esi) = eax;
    POP32(esp, eax);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 4) = eax;
    goto loc_0034954D;

loc_00349540: ;
    edi = MEM32(edi);
    MEM32(esi + 8) = edi;
    MEM32(esi) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 4) = ebx;

loc_0034954D: ;
    MEM16(esi + 0xC) = MEM16(esi + 0xC) | 0x1102;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034955A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034955E
 * Original: 0x0034955E - 0x00349588 (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034955E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034955E: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349587; /* je: equal / zero */

loc_00349565: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00349586; /* je: equal / zero */

loc_00349570: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00349576u); RECOMP_ABI_CALL(0x003442E7u, sub_003442E7); /* call 0x003442E7 */

loc_00349576: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xEE;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    MEM32(esi) = MEM32(esi) & 0;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    POP32(esp, ecx);

loc_00349586: ;
    POP32(esp, esi);

loc_00349587: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00349588
 * Original: 0x00349588 - 0x003495AD (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349588(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349588: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00349594; /* je: equal / zero */

loc_0034958E: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003495AA; /* je: equal / zero */

loc_00349594: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0034959Eu); RECOMP_ABI_CALL(0x0034C765u, sub_0034C765); /* call 0x0034C765 */

loc_0034959E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003495AA; /* jne: not equal / not zero */

loc_003495A6: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_003495AA: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003495AD
 * Original: 0x003495AD - 0x003495D2 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003495AD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003495AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = eax;
    goto loc_003495C9;

loc_003495B5: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003495C3u); RECOMP_ABI_CALL(0x00349588u, sub_00349588); /* call 0x00349588 */

loc_003495C3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003495CF; /* je: equal / zero */

loc_003495C9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003495B5; /* jg: greater (signed >) */

loc_003495CF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003495D2
 * Original: 0x003495D2 - 0x0034960F (61 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003495D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003495D2: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00349605; /* je: equal / zero */

loc_003495DE: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349605; /* jne: not equal / not zero */

loc_003495E4: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = MEM32(esi) + eax;
    goto loc_0034960C;

loc_003495EC: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x003495FDu); RECOMP_ABI_CALL(0x00349588u, sub_00349588); /* call 0x00349588 */

loc_003495FD: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0034960C; /* je: equal / zero */

loc_00349605: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003495EC; /* jg: greater (signed >) */

loc_0034960C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034960F
 * Original: 0x0034960F - 0x00349DB3 (1956 bytes, 603 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034960F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034960F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x454));
    esp = esp - 0x454;
    edx = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(edx));
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00349DAD; /* je: equal / zero */

loc_00349635: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0034963C;

loc_00349639: ;
    ecx = MEM32(ebp + -60);

loc_0034963C: ;
    PUSH32(esp, 2);
    POP32(esp, edi);
    _cf = (int)((((uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00349DAB; /* jl: less (signed <) */

loc_0034964C: ;
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(esi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00349669; /* jb: below (unsigned <) */

loc_00349654: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x78 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00349669; /* ja: above (unsigned >) */

loc_0034965A: ;
    eax = ZX16(LO16(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x4312C0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    goto loc_0034966B;

loc_00349669: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0034966B: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x4312E0);
    PUSH32(esp, 7);
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((4) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -60) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00349D9C; /* ja: above (unsigned >) */

loc_00349684: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x349DB3); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0034968Bu) goto loc_0034968B;
    if (_jt == 0x003496A8u) goto loc_003496A8;
    if (_jt == 0x003496F2u) goto loc_003496F2;
    if (_jt == 0x0034972Eu) goto loc_0034972E;
    if (_jt == 0x00349737u) goto loc_00349737;
    if (_jt == 0x00349770u) goto loc_00349770;
    if (_jt == 0x00349825u) goto loc_00349825;
    if (_jt == 0x0034983Du) goto loc_0034983D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0034968B: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -28) = eax;
    goto loc_00349D9C;

loc_003496A8: ;
    eax = ZX16(LO16(ebx));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    if ((eax == 0)) goto loc_003496EA; /* je: equal / zero */

loc_003496AF: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax == 0)) goto loc_003496E1; /* je: equal / zero */

loc_003496B4: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    if ((eax == 0)) goto loc_003496D8; /* je: equal / zero */

loc_003496B9: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    if ((eax == 0)) goto loc_003496CF; /* je: equal / zero */

loc_003496BD: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax != 0)) goto loc_00349D9C; /* jne: not equal / not zero */

loc_003496C6: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    goto loc_00349D9C;

loc_003496CF: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    goto loc_00349D9C;

loc_003496D8: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    goto loc_00349D9C;

loc_003496E1: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    goto loc_00349D9C;

loc_003496EA: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | edi;
    goto loc_00349D9C;

loc_003496F2: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x2A (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349719; /* jne: not equal / not zero */

loc_003496F8: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00349D9C; /* jge: greater or equal (signed >=) */

loc_0034970D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    _cf = (int)((MEM32(ebp + -32)) != 0);
    MEM32(ebp + -32) = (uint32_t)(-(int32_t)MEM32(ebp + -32));
    goto loc_00349D9C;

loc_00349719: ;
    eax = MEM32(ebp + -32);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    goto loc_00349D9C;

loc_0034972E: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    goto loc_00349D9C;

loc_00349737: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x2A (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034975B; /* jne: not equal / not zero */

loc_0034973D: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00349D9C; /* jge: greater or equal (signed >=) */

loc_00349752: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    goto loc_00349D9C;

loc_0034975B: ;
    eax = MEM32(ebp + -8);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    goto loc_00349D9C;

loc_00349770: ;
    eax = ZX16(LO16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003497A5; /* je: equal / zero */

loc_00349778: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x68 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034979D; /* je: equal / zero */

loc_0034977D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349794; /* je: equal / zero */

loc_00349782: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x77 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349D9C; /* jne: not equal / not zero */

loc_0034978B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    goto loc_00349D9C;

loc_00349794: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    goto loc_00349D9C;

loc_0034979D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;
    goto loc_00349D9C;

loc_003497A5: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x36) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x36 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003497C8; /* jne: not equal / not zero */

loc_003497B1: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0x34 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003497C8; /* jne: not equal / not zero */

loc_003497BB: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    goto loc_00349D9C;

loc_003497C8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x33 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003497E5; /* jne: not equal / not zero */

loc_003497CE: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0x32 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003497E5; /* jne: not equal / not zero */

loc_003497D8: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0xC)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    goto loc_00349D9C;

loc_003497E5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x64 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349D9C; /* je: equal / zero */

loc_003497EF: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x69 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349D9C; /* je: equal / zero */

loc_003497F9: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x6F (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349D9C; /* je: equal / zero */

loc_00349803: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x75) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x75 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349D9C; /* je: equal / zero */

loc_0034980D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x78 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349D9C; /* je: equal / zero */

loc_00349817: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x58 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349D9C; /* je: equal / zero */

loc_00349821: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;

loc_00349825: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    esi = ebp + -20;
    MEM32(ebp + -28) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349838u); RECOMP_ABI_CALL(0x00349588u, sub_00349588); /* call 0x00349588 */

loc_00349838: ;
    goto loc_00349D9B;

loc_0034983D: ;
    eax = ZX16(LO16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00349ACF; /* jg: greater (signed >) */

loc_00349849: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003498F6; /* jge: greater or equal (signed >=) */

loc_00349852: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00349967; /* jg: greater (signed >) */

loc_0034985B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00349B43; /* je: equal / zero */

loc_00349861: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x43));
    eax = eax - 0x43;
    if ((eax == 0)) goto loc_00349919; /* je: equal / zero */

loc_0034986A: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    if ((eax == 0)) goto loc_003498ED; /* je: equal / zero */

loc_0034986E: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    if ((eax == 0)) goto loc_003498ED; /* je: equal / zero */

loc_00349872: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC));
    eax = eax - 0xC;
    if ((eax != 0)) goto loc_00349C91; /* jne: not equal / not zero */

loc_0034987B: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349886; /* jne: not equal / not zero */

loc_00349883: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;

loc_00349886: ;
    edx = MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349893; /* jne: not equal / not zero */

loc_0034988E: ;
    edx = 0x7FFFFFFF;

loc_00349893: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00349B0E; /* je: equal / zero */

loc_003498AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003498B5; /* jne: not equal / not zero */

loc_003498AE: ;
    MEM32(ebp + -12) = 0x43133C;

loc_003498B5: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + -12);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00349C91; /* jle: less or equal (signed <=) */

loc_003498C4: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349C91; /* je: equal / zero */

loc_003498CE: ;
    esi = MEM32(0x47A7C8);
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(MEM8(esi + ecx * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ecx * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003498DF; /* je: equal / zero */

loc_003498DE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003498DF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003498C4; /* jl: less (signed <) */

loc_003498E8: ;
    goto loc_00349C91;

loc_003498ED: ;
    MEM32(ebp + -64) = 1;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(esi)) >> 32) & 1);
    ebx = ebx + esi;

loc_003498F6: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ebp + -1108;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00349A10; /* jge: greater or equal (signed >=) */

loc_0034990D: ;
    MEM32(ebp + -8) = 6;
    goto loc_00349A58;

loc_00349919: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349924; /* jne: not equal / not zero */

loc_00349921: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;

loc_00349924: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax + -4));
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -68) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003499A6; /* je: equal / zero */

loc_0034993E: ;
    PUSH32(esp, MEM32(0x47A7D0));
    MEM8(ebp + -40) = LO8(eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -1108;
    PUSH32(esp, eax);
    MEM8(ebp + -39) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034995Bu); RECOMP_ABI_CALL(0x0034BB8Cu, sub_0034BB8C); /* call 0x0034BB8C */

loc_0034995B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003499AD; /* jge: greater or equal (signed >=) */

loc_00349962: ;
    MEM32(ebp + -52) = esi;
    goto loc_003499AD;

loc_00349967: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x5A));
    eax = eax - 0x5A;
    if ((eax == 0)) goto loc_003499BE; /* je: equal / zero */

loc_0034996C: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(9));
    eax = eax - 9;
    if ((eax == 0)) goto loc_00349924; /* je: equal / zero */

loc_00349971: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00349C91; /* jne: not equal / not zero */

loc_00349978: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;

loc_0034997C: ;
    MEM32(ebp + -16) = 0xA;

loc_00349983: ;
    ebx = MEM32(ebp + -4);
    esi = 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349BB3; /* je: equal / zero */

loc_00349993: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    MEM32(ebp + 0x10) = ecx;
    goto loc_00349BDB;

loc_003499A6: ;
    MEM16(ebp + -1108) = LO16(eax);

loc_003499AD: ;
    eax = ebp + -1108;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = esi;
    goto loc_00349C91;

loc_003499BE: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003499F9; /* je: equal / zero */

loc_003499CC: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003499F9; /* je: equal / zero */

loc_003499D3: ;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003499F0; /* je: equal / zero */

loc_003499DF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(ebp + -28) = 1;
    goto loc_00349C8E;

loc_003499F0: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    goto loc_00349C8E;

loc_003499F9: ;
    eax = 0x43133C;
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_00349A04: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349A04; /* jne: not equal / not zero */

loc_00349A0B: ;
    goto loc_00349AC8;

loc_00349A10: ;
    if (CMP_NE(_fa, _fb)) goto loc_00349A21; /* jne: not equal / not zero */

loc_00349A12: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x67 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349A58; /* jne: not equal / not zero */

loc_00349A18: ;
    MEM32(ebp + -8) = 1;
    goto loc_00349A58;

loc_00349A21: ;
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00349A2E; /* jle: less or equal (signed <=) */

loc_00349A2B: ;
    MEM32(ebp + -8) = eax;

loc_00349A2E: ;
    esi = 0xA3;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00349A58; /* jle: less or equal (signed <=) */

loc_00349A38: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x15D)) >> 32) & 1);
    eax = eax + 0x15D;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349A46u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00349A46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    MEM32(ebp + -44) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00349A55; /* je: equal / zero */

loc_00349A4E: ;
    MEM32(ebp + -12) = eax;
    edi = eax;
    goto loc_00349A58;

loc_00349A55: ;
    MEM32(ebp + -8) = esi;

loc_00349A58: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -64));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -80) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -84) = ecx;
    { uint32_t _icall_target = MEM32(0x47A670); PUSH32(esp, 0x00349A81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00349A81: ;
    esi = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x80;
    if ((esi == 0)) goto loc_00349A9D; /* je: equal / zero */

loc_00349A8F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349A9D; /* jne: not equal / not zero */

loc_00349A95: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x47A67C); PUSH32(esp, 0x00349A9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00349A9C: ;
    POP32(esp, ecx);

loc_00349A9D: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x67 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349AAF; /* jne: not equal / not zero */

loc_00349AA3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349AAF; /* jne: not equal / not zero */

loc_00349AA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x47A674); PUSH32(esp, 0x00349AAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00349AAE: ;
    POP32(esp, ecx);

loc_00349AAF: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349ABC; /* jne: not equal / not zero */

loc_00349AB4: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = edi;

loc_00349ABC: ;
    eax = edi;
    edx = eax + 1;

loc_00349AC1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349AC1; /* jne: not equal / not zero */

loc_00349AC8: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    goto loc_00349C8E;

loc_00349ACF: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x69));
    eax = eax - 0x69;
    if ((eax == 0)) goto loc_00349978; /* je: equal / zero */

loc_00349AD8: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(5));
    eax = eax - 5;
    if ((eax == 0)) goto loc_00349B89; /* je: equal / zero */

loc_00349AE1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00349B6F; /* je: equal / zero */

loc_00349AE8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00349B3C; /* je: equal / zero */

loc_00349AEB: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax == 0)) goto loc_00349886; /* je: equal / zero */

loc_00349AF4: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    if ((eax == 0)) goto loc_0034997C; /* je: equal / zero */

loc_00349AFC: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax != 0)) goto loc_00349C91; /* jne: not equal / not zero */

loc_00349B05: ;
    MEM32(ebp + -48) = 0x27;
    goto loc_00349B46;

loc_00349B0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349B19; /* jne: not equal / not zero */

loc_00349B12: ;
    MEM32(ebp + -12) = 0x431344;

loc_00349B19: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -28) = 1;
    goto loc_00349B2E;

loc_00349B25: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349B32; /* je: equal / zero */

loc_00349B2C: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edi)) >> 32) & 1);
    eax = eax + edi;

loc_00349B2E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349B25; /* jne: not equal / not zero */

loc_00349B32: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -12)));
    eax = eax - MEM32(ebp + -12);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    goto loc_00349C8E;

loc_00349B3C: ;
    MEM32(ebp + -8) = 8;

loc_00349B43: ;
    MEM32(ebp + -48) = ecx;

loc_00349B46: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_00349983; /* je: equal / zero */

loc_00349B57: ;
    eax = MEM32(ebp + -48);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x51)) >> 32) & 1);
    eax = eax + 0x51;
    MEM16(ebp + -36) = 0x30;
    MEM16(ebp + -34) = LO16(eax);
    MEM32(ebp + -24) = edi;
    goto loc_00349983;

loc_00349B6F: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -16) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_00349983; /* je: equal / zero */

loc_00349B80: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 2;
    goto loc_00349983;

loc_00349B89: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(_fa, _fb)) goto loc_00349BA2; /* je: equal / zero */

loc_00349B99: ;
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax) = LO16(ecx);
    goto loc_00349BA7;

loc_00349BA2: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_00349BA7: ;
    MEM32(ebp + -52) = 1;
    goto loc_00349D89;

loc_00349BB3: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00349BD1; /* je: equal / zero */

loc_00349BBF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349BCB; /* je: equal / zero */

loc_00349BC4: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_00349BC8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00349BDB;

loc_00349BCB: ;
    eax = ZX16(MEM16(eax + -4));
    goto loc_00349BC8;

loc_00349BD1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(eax + -4);
    if (TEST_NZ(_fa, _fb)) goto loc_00349BC8; /* jne: not equal / not zero */

loc_00349BD9: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_00349BDB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349BF5; /* je: equal / zero */

loc_00349BE0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00349BF5; /* jg: greater (signed >) */

loc_00349BE4: ;
    if (TEST_S(_fas, _fbs)) goto loc_00349BEA; /* jl: less (signed <) */

loc_00349BE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_00349BF5; /* jae: above or equal (unsigned >=) */

loc_00349BEA: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;

loc_00349BF5: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -4), esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00349C00; /* jne: not equal / not zero */

loc_00349BFE: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_00349C00: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00349C0F; /* jge: greater or equal (signed >=) */

loc_00349C06: ;
    MEM32(ebp + -8) = 1;
    goto loc_00349C20;

loc_00349C0F: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00349C20; /* jle: less or equal (signed <=) */

loc_00349C1D: ;
    MEM32(ebp + -8) = eax;

loc_00349C20: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    if ((eax != 0)) goto loc_00349C2A; /* jne: not equal / not zero */

loc_00349C26: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;

loc_00349C2A: ;
    esi = ebp + -597;

loc_00349C30: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00349C40; /* jg: greater (signed >) */

loc_00349C3A: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    if ((eax == 0)) goto loc_00349C64; /* je: equal / zero */

loc_00349C40: ;
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349C4Du); RECOMP_ABI_CALL(0x00349070u, sub_00349070); /* call 0x00349070 */

loc_00349C4D: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -72) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00349C5F; /* jle: less or equal (signed <=) */

loc_00349C5C: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -48))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + -48);

loc_00349C5F: ;
    MEM8(esi) = LO8(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00349C30;

loc_00349C64: ;
    eax = ebp + -597;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00349C91; /* je: equal / zero */

loc_00349C79: ;
    ecx = esi;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349C84; /* jne: not equal / not zero */

loc_00349C80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349C91; /* jne: not equal / not zero */

loc_00349C84: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00349C8E: ;
    MEM32(ebp + -16) = eax;

loc_00349C91: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349D89; /* jne: not equal / not zero */

loc_00349C9B: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349CCC; /* je: equal / zero */

loc_00349CA2: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349CAF; /* je: equal / zero */

loc_00349CA7: ;
    MEM16(ebp + -36) = 0x2D;
    goto loc_00349CC5;

loc_00349CAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349CBB; /* je: equal / zero */

loc_00349CB3: ;
    MEM16(ebp + -36) = 0x2B;
    goto loc_00349CC5;

loc_00349CBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349CCC; /* je: equal / zero */

loc_00349CBF: ;
    MEM16(ebp + -36) = 0x20;

loc_00349CC5: ;
    MEM32(ebp + -24) = 1;

loc_00349CCC: ;
    ebx = MEM32(ebp + -32);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + -24)));
    ebx = ebx - MEM32(ebp + -24);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + -16)));
    ebx = ebx - MEM32(ebp + -16);
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0xC (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349CEC; /* jne: not equal / not zero */

loc_00349CDB: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349CE9u); RECOMP_ABI_CALL(0x003495ADu, sub_003495AD); /* call 0x003495AD */

loc_00349CE9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_00349CEC: ;
    PUSH32(esp, MEM32(ebp + -24));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349CFDu); RECOMP_ABI_CALL(0x003495D2u, sub_003495D2); /* call 0x003495D2 */

loc_00349CFD: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00349D19; /* je: equal / zero */

loc_00349D04: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349D19; /* jne: not equal / not zero */

loc_00349D0A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D16u); RECOMP_ABI_CALL(0x003495ADu, sub_003495AD); /* call 0x003495AD */

loc_00349D16: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_00349D19: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00349D63; /* jne: not equal / not zero */

loc_00349D1F: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00349D63; /* jle: less or equal (signed <=) */

loc_00349D26: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -56) = eax;

loc_00349D2C: ;
    PUSH32(esp, MEM32(0x47A7D0));
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebp + -68;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D3Fu); RECOMP_ABI_CALL(0x0034BB8Cu, sub_0034BB8C); /* call 0x0034BB8C */

loc_00349D3F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -72) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00349D72; /* jle: less or equal (signed <=) */

loc_00349D49: ;
    PUSH32(esp, MEM32(ebp + -68));
    eax = MEM32(ebp + 8);
    esi = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D57u); RECOMP_ABI_CALL(0x00349588u, sub_00349588); /* call 0x00349588 */

loc_00349D57: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + -72))) >> 32) & 1);
    edi = edi + MEM32(ebp + -72);
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_00349D2C; /* jg: greater (signed >) */

loc_00349D61: ;
    goto loc_00349D72;

loc_00349D63: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D71u); RECOMP_ABI_CALL(0x003495D2u, sub_003495D2); /* call 0x003495D2 */

loc_00349D71: ;
    POP32(esp, ecx);

loc_00349D72: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00349D89; /* je: equal / zero */

loc_00349D78: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D86u); RECOMP_ABI_CALL(0x003495ADu, sub_003495AD); /* call 0x003495AD */

loc_00349D86: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_00349D89: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349D9C; /* je: equal / zero */

loc_00349D8F: ;
    PUSH32(esp, MEM32(ebp + -44));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00349D97u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00349D97: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;

loc_00349D9B: ;
    POP32(esp, ecx);

loc_00349D9C: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ebx, MEM16(eax));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ebx), LO16(ebx) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00349639; /* jne: not equal / not zero */

loc_00349DAB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00349DAD: ;
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00349DE0
 * Original: 0x00349DE0 - 0x00349E2E (78 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349DE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00349DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, 0xFF);
    edi = edi;

loc_00349DF0: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_00349E26; /* je: equal / zero */

loc_00349DF4: ;
    SET_LO8(eax, MEM8(esi));
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(1)) >> 32) & 1);
    esi = esi + 1;
    SET_HI8(eax, MEM8(edi));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(1)) >> 32) & 1);
    edi = edi + 1;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349DF0; /* je: equal / zero */

loc_00349E02: ;
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x41));
    SET_LO8(eax, LO8(eax) - 0x41);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x20);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x41)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x41);
    { uint32_t _tmp = LO8(eax);
    SET_LO8(eax, HI8(eax));
    SET_HI8(eax, _tmp); }
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x41));
    SET_LO8(eax, LO8(eax) - 0x41);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x20);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x41)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x41);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00349DF0; /* je: equal / zero */

loc_00349E22: ;
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0xFF) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */

loc_00349E26: ;
    eax = SX8(LO8(eax));
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00349E30
 * Original: 0x00349E30 - 0x00349E91 (97 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00349E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349E30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx | ecx;
    if ((ecx == 0)) goto loc_00349E8A; /* je: equal / zero */

loc_00349E3D: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    SET_HI8(ebx, 0x41);
    SET_LO8(ebx, 0x5A);
    SET_HI8(edx, 0x20);
    /* nop */

loc_00349E4C: ;
    SET_HI8(eax, MEM8(esi));
    SET_HI8(eax, HI8(eax) | HI8(eax));
    SET_LO8(eax, MEM8(edi));
    if ((HI8(eax) == 0)) goto loc_00349E7B; /* je: equal / zero */

loc_00349E54: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_00349E7B; /* je: equal / zero */

loc_00349E58: ;
    esi = esi + 1;
    edi = edi + 1;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), HI8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00349E68; /* jb: below (unsigned <) */

loc_00349E62: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00349E68; /* ja: above (unsigned >) */

loc_00349E66: ;
    SET_HI8(eax, HI8(eax) + HI8(edx));

loc_00349E68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00349E72; /* jb: below (unsigned <) */

loc_00349E6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00349E72; /* ja: above (unsigned >) */

loc_00349E70: ;
    SET_LO8(eax, LO8(eax) + HI8(edx));

loc_00349E72: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00349E81; /* jne: not equal / not zero */

loc_00349E76: ;
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_00349E4C; /* jne: not equal / not zero */

loc_00349E7B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00349E8A; /* je: equal / zero */

loc_00349E81: ;
    ecx = 0xFFFFFFFFu;
    if (CMP_B(_fa, _fb)) goto loc_00349E8A; /* jb: below (unsigned <) */

loc_00349E88: ;
    ecx = (uint32_t)(-(int32_t)ecx);

loc_00349E8A: ;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00349E94
 * Original: 0x00349E94 - 0x00349F3C (168 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349E94(void)
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

loc_00349E94: ;
    MEM8(ebp + -144) = 0xFF;
    PUSH32(esp, 0x00349EA0u); RECOMP_ABI_CALL(0x00349F3Cu, sub_00349F3C); /* call 0x00349F3C */

loc_00349EA0: ;
    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    if ((LO8(ebx) == 0)) goto loc_00349F1F; /* je: equal / zero */

loc_00349EA4: ;
    PUSH32(esp, 0x00349EA9u); RECOMP_ABI_CALL(0x00349F7Fu, sub_00349F7F); /* call 0x00349F7F */

loc_00349EA9: ;
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    goto loc_00349EFB;

    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x47A880)); /* fld */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00349F2E; /* jne: not equal / not zero */

loc_00349ECA: ;
    PUSH32(esp, 0x00349ECFu); RECOMP_ABI_CALL(0x00349F3Cu, sub_00349F3C); /* call 0x00349F3C */

loc_00349ECF: ;
    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    if ((LO8(ebx) == 0)) goto loc_00349F2E; /* je: equal / zero */

loc_00349ED3: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x00349EDAu); RECOMP_ABI_CALL(0x00349F6Du, sub_00349F6D); /* call 0x00349F6D */

loc_00349EDA: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 0x00349EE1u); RECOMP_ABI_CALL(0x00349F7Fu, sub_00349F7F); /* call 0x00349F7F */

loc_00349EE1: ;
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_st1() = fp_top() / fp_st1(); fp_pop(); /* fdivrp st(1) */
    esp += 4; return; /* ret */

    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    if ((LO8(ebx) == 0)) goto loc_00349F29; /* je: equal / zero */

loc_00349EF6: ;
    PUSH32(esp, 0x00349EFBu); RECOMP_ABI_CALL(0x00349F6Du, sub_00349F6D); /* call 0x00349F6D */

loc_00349EFB: ;
    fp_push(1.0); /* fld1 */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    g_seh_ebp = ebp; sub_003489D0(); return; /* tail jmp 0x003489D0 */

    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A808)); /* fld */
    g_seh_ebp = ebp; sub_00348A9B(); return; /* tail jmp 0x00348A9B */

    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A808)); /* fld */
    esp += 4; return; /* ret */

loc_00349F1F: ;
    PUSH32(esp, 0x00349F24u); RECOMP_ABI_CALL(0x00348C05u, sub_00348C05); /* call 0x00348C05 */

loc_00349F24: ;
    g_seh_ebp = ebp; sub_00348A9B(); return; /* tail jmp 0x00348A9B */

loc_00349F29: ;
    g_seh_ebp = ebp; sub_00348C05(); return; /* tail jmp 0x00348C05 */

loc_00349F2E: ;
    MEM8(ebp + -144) = 8;
    PUSH32(esp, 0x00349F3Au); RECOMP_ABI_CALL(0x003489E5u, sub_003489E5); /* call 0x003489E5 */

loc_00349F3A: ;
    goto loc_00349F24;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00349F3C
 * Original: 0x00349F3C - 0x00349F6D (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349F3C(void)
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

loc_00349F3C: ;
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    ebx = 0; /* xor self */
    PUSH32(esp, 0x00349F47u); RECOMP_ABI_CALL(0x00348C22u, sub_00348C22); /* call 0x00348C22 */

loc_00349F47: ;
    SET_LO8(ebx, ~LO8(ebx));
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00349F5B; /* je: equal / zero */

loc_00349F52: ;
    PUSH32(esp, 0x00349F57u); RECOMP_ABI_CALL(0x00349F7Fu, sub_00349F7F); /* call 0x00349F7F */

loc_00349F57: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */

loc_00349F5B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00349F68; /* jne: not equal / not zero */

loc_00349F60: ;
    SET_HI8(ebx, ~HI8(ebx));
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */

loc_00349F68: ;
    g_seh_ebp = ebp; sub_003489D0(); return; /* tail jmp 0x003489D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00349F6D
 * Original: 0x00349F6D - 0x00349F7F (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349F6D(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00349F6D: ;
    PUSH32(esp, 0x00349F72u); RECOMP_ABI_CALL(0x00349F7Fu, sub_00349F7F); /* call 0x00349F7F */

loc_00349F72: ;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    if ((HI8(ebx) != 0)) goto loc_00349F7E; /* jne: not equal / not zero */

loc_00349F78: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_st1() + fp_top(); /* fadd st(1), st(0) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */

loc_00349F7E: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00349F7F
 * Original: 0x00349F7F - 0x00349F90 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00349F7F(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00349F7F: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(1.0); /* fld1 */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    if ((HI8(ebx) != 0)) goto loc_00349F8D; /* jne: not equal / not zero */

loc_00349F87: ;
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00349F8D: ;
    fp_st1() = fp_top() / fp_st1(); fp_pop(); /* fdivrp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00349F90
 * Original: 0x00349F90 - 0x00349FAB (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00349F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349F90: ;
    eax = MEM32(0x5D9C00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00349FA8; /* je: equal / zero */

loc_00349F99: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00349F9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00349F9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00349FA8; /* je: equal / zero */

loc_00349FA4: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00349FA8: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00349FAB
 * Original: 0x00349FAB - 0x0034A010 (101 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00349FAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00349FAB: ;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x00349FB5u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00349FB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00349FBE; /* jne: not equal / not zero */

loc_00349FBA: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00349FBE: ;
    MEM32(0x6F11E0) = eax;
    MEM32(0x6F11C0) = 0x20;
    ecx = eax + 0x500;
    goto loc_00349FF3;

loc_00349FD5: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM8(eax + 4) = 0;
    MEM8(eax + 5) = 0xA;
    ecx = MEM32(0x6F11E0);
    eax = eax + 0x28;
    ecx = ecx + 0x500;

loc_00349FF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00349FD5; /* jb: below (unsigned <) */

loc_00349FF7: ;
    eax = 0; /* xor self */

loc_00349FF9: ;
    ecx = MEM32(0x6F11E0);
    ecx = ecx + eax;
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    MEM8(ecx + 4) = 0xC1;
    if (CMP_L(_fas, _fbs)) goto loc_00349FF9; /* jl: less (signed <) */

loc_0034A00D: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0034A010
 * Original: 0x0034A010 - 0x0034A08B (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A010: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4313E8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A01Cu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A01C: ;
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A028u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034A028: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 3);
    POP32(esp, esi);

loc_0034A02F: ;
    MEM32(ebp + -32) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F12EC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x6F12EC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034A079; /* jge: greater or equal (signed >=) */

loc_0034A03A: ;
    eax = MEM32(0x6F12E8);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A076; /* je: equal / zero */

loc_0034A046: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A05B; /* je: equal / zero */

loc_0034A04C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A052u); RECOMP_ABI_CALL(0x00342980u, sub_00342980); /* call 0x00342980 */

loc_0034A052: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A05B; /* je: equal / zero */

loc_0034A058: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034A05B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034A076; /* jl: less (signed <) */

loc_0034A060: ;
    eax = MEM32(0x6F12E8);
    PUSH32(esp, MEM32(eax + esi * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A06Du); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0034A06D: ;
    POP32(esp, ecx);
    eax = MEM32(0x6F12E8);
    MEM32(eax + esi * 4) = edi;

loc_0034A076: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034A02F;

loc_0034A079: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A082u); RECOMP_ABI_CALL(0x0034A08Bu, sub_0034A08B); /* call 0x0034A08B */

loc_0034A082: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A08Au); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A08A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A08B
 * Original: 0x0034A08B - 0x0034A094 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A08B(void)
{

loc_0034A08B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0034A092u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034A092: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A094
 * Original: 0x0034A094 - 0x0034A175 (225 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A094(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034A094: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x83 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034A170; /* je: equal / zero */

loc_0034A0A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A170; /* jne: not equal / not zero */

loc_0034A0AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034A0BB; /* je: equal / zero */

loc_0034A0B0: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20;
    MEM32(esi + 0xC) = eax;
    goto loc_0034A170;

loc_0034A0BB: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 1;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0034A0D0; /* jne: not equal / not zero */

loc_0034A0C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034A0CDu); RECOMP_ABI_CALL(0x0034A804u, sub_0034A804); /* call 0x0034A804 */

loc_0034A0CD: ;
    POP32(esp, ecx);
    goto loc_0034A0D5;

loc_0034A0D0: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = eax;

loc_0034A0D5: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x0034A0E3u); RECOMP_ABI_CALL(0x0034A34Cu, sub_0034A34C); /* call 0x0034A34C */

loc_0034A0E3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0034A15F; /* je: equal / zero */

loc_0034A0ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034A15F; /* je: equal / zero */

loc_0034A0F2: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x82 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A134; /* jne: not equal / not zero */

loc_0034A0FA: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0034A11A; /* je: equal / zero */

loc_0034A103: ;
    edi = ecx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edi)) >> ((((5) & 31u)) - 1)) & 1);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    edi = MEM32(edi * 4 + 0x6F11E0);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    ecx = ecx + ecx * 4;
    edi = edi + ecx * 8;
    goto loc_0034A11F;

loc_0034A11A: ;
    edi = 0x47A8F0;

loc_0034A11F: ;
    SET_LO8(ecx, MEM8(edi + 4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x82);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x82 (8-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0034A134; /* jne: not equal / not zero */

loc_0034A12B: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x2000;
    MEM32(esi + 0xC) = edx;

loc_0034A134: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x200 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034A151; /* jne: not equal / not zero */

loc_0034A13D: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034A151; /* je: equal / zero */

loc_0034A145: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A151; /* jne: not equal / not zero */

loc_0034A14A: ;
    MEM32(esi + 0x18) = 0x1000;

loc_0034A151: ;
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034A15F: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | eax;
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;

loc_0034A170: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A175
 * Original: 0x0034A175 - 0x0034A34C (471 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034A175(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A175: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0034A345; /* je: equal / zero */

loc_0034A191: ;
    eax = MEM32(ebp + 8);
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = eax + eax * 4;
    edi = ecx * 4 + 0x6F11E0;
    eax = MEM32(edi);
    esi = esi << 3;
    eax = eax + esi;
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A345; /* jne: not equal / not zero */

loc_0034A1B9: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x48) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x48 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A1E0; /* je: equal / zero */

loc_0034A1BE: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A1E0; /* je: equal / zero */

loc_0034A1C4: ;
    eax = MEM32(edi);
    SET_LO8(eax, MEM8(eax + esi + 5));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx) = LO8(eax);
    eax = MEM32(edi);
    edx = ebx + 1;
    MEM32(ebp + -8) = 1;
    MEM8(eax + esi + 5) = 0xA;

loc_0034A1E0: ;
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A1F4u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0034A1F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A230; /* jne: not equal / not zero */

loc_0034A1F8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A1FDu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034A1FD: ;
    PUSH32(esp, 5);
    POP32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A218; /* jne: not equal / not zero */

loc_0034A204: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A209u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A209: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A214u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A214: ;
    MEM32(eax) = esi;
    goto loc_0034A228;

loc_0034A218: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A345; /* je: equal / zero */

loc_0034A221: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A227u); RECOMP_ABI_CALL(0x003453D6u, sub_003453D6); /* call 0x003453D6 */

loc_0034A227: ;
    POP32(esp, ecx);

loc_0034A228: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0034A347;

loc_0034A230: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(edi);
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM8(ecx + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + esi + 4), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A340; /* je: equal / zero */

loc_0034A243: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A257; /* je: equal / zero */

loc_0034A247: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A257; /* jne: not equal / not zero */

loc_0034A24C: ;
    eax = ecx;
    eax = eax + esi + 4;
    MEM8(eax) = MEM8(eax) | 4;
    goto loc_0034A260;

loc_0034A257: ;
    eax = MEM32(edi);
    eax = eax + esi + 4;
    MEM8(eax) = MEM8(eax) & 0xFB;

loc_0034A260: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    ecx = ecx + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0034A33A; /* jae: above or equal (unsigned >=) */

loc_0034A276: ;
    eax = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A32A; /* je: equal / zero */

loc_0034A283: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A292; /* je: equal / zero */

loc_0034A287: ;
    MEM8(ebx) = LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034A31C;

loc_0034A292: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034A2AC; /* jae: above or equal (unsigned >=) */

loc_0034A298: ;
    eax = MEM32(ebp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A2A7; /* jne: not equal / not zero */

loc_0034A2A1: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 2;
    goto loc_0034A2FE;

loc_0034A2A7: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_0034A318;

loc_0034A2AC: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A2C5u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0034A2C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A2D2; /* jne: not equal / not zero */

loc_0034A2C9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A2CEu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034A2CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A318; /* jne: not equal / not zero */

loc_0034A2D2: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A318; /* je: equal / zero */

loc_0034A2D8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x48) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 0x48 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A2F3; /* je: equal / zero */

loc_0034A2E1: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A2FE; /* je: equal / zero */

loc_0034A2E8: ;
    MEM8(ebx) = 0xD;
    ecx = MEM32(edi);
    MEM8(ecx + esi + 5) = LO8(eax);
    goto loc_0034A31B;

loc_0034A2F3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A303; /* jne: not equal / not zero */

loc_0034A2F8: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A303; /* jne: not equal / not zero */

loc_0034A2FE: ;
    MEM8(ebx) = 0xA;
    goto loc_0034A31B;

loc_0034A303: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A30Fu); RECOMP_ABI_CALL(0x0034A62Du, sub_0034A62D); /* call 0x0034A62D */

loc_0034A30F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A31C; /* je: equal / zero */

loc_0034A318: ;
    MEM8(ebx) = 0xD;

loc_0034A31B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034A31C: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034A276; /* jb: below (unsigned <) */

loc_0034A328: ;
    goto loc_0034A33A;

loc_0034A32A: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A33A; /* jne: not equal / not zero */

loc_0034A333: ;
    esi = eax + esi + 4;
    MEM8(esi) = MEM8(esi) | 2;

loc_0034A33A: ;
    ebx = ebx - MEM32(ebp + 0xC);
    MEM32(ebp + -8) = ebx;

loc_0034A340: ;
    eax = MEM32(ebp + -8);
    goto loc_0034A347;

loc_0034A345: ;
    eax = 0; /* xor self */

loc_0034A347: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034A34C
 * Original: 0x0034A34C - 0x0034A3D0 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A34C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A34C: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4313F8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A358u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A358: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A3DB(); return; } /* jae: above or equal (unsigned >=) */

loc_0034A363: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edi = eax * 4 + 0x6F11E0;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A3DB(); return; } /* je: equal / zero */

loc_0034A383: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A389u); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_0034A389: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A3AB; /* je: equal / zero */

loc_0034A397: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A3A3u); RECOMP_ABI_CALL(0x0034A175u, sub_0034A175); /* call 0x0034A175 */

loc_0034A3A3: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    goto loc_0034A3C2;

loc_0034A3AB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A3B0u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A3B0: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A3BBu); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A3BB: ;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0034A3C2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A3CBu); RECOMP_ABI_CALL(0x0034A3D3u, sub_0034A3D3); /* call 0x0034A3D3 */

loc_0034A3CB: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0034A3F1(); return; /* tail jmp 0x0034A3F1 */

}

/**
 * sub_0034A3D0
 * Original: 0x0034A3D0 - 0x0034A3D3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A3D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A3D0: ;
    ebx = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_0034A3D3(); return; /* fallthrough 0x0034A3D3 */

}

/**
 * sub_0034A3D3
 * Original: 0x0034A3D3 - 0x0034A3DB (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A3D3(void)
{

loc_0034A3D3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0034A3D9u); RECOMP_ABI_CALL(0x0034C2DCu, sub_0034C2DC); /* call 0x0034C2DC */

loc_0034A3D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A3DB
 * Original: 0x0034A3DB - 0x0034A3F7 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A3DB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A3DB: ;
    PUSH32(esp, 0x0034A3E0u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A3E0: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0034A3EBu); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A3EB: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A3F6u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A3F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A3F1
 * Original: 0x0034A3F1 - 0x0034A3F7 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A3F1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A3F1: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A3F6u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A3F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A3F7
 * Original: 0x0034A3F7 - 0x0034A582 (395 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034A3F7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A3F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x41C;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0034A415; /* jne: not equal / not zero */

loc_0034A40E: ;
    eax = 0; /* xor self */
    goto loc_0034A57F;

loc_0034A415: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = eax & 0x1F;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    ebx = ebx * 4 + 0x6F11E0;
    eax = MEM32(ebx);
    esi = esi << 3;
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A448; /* je: equal / zero */

loc_0034A439: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A445u); RECOMP_ABI_CALL(0x0034C82Au, sub_0034C82A); /* call 0x0034C82A */

loc_0034A445: ;
    esp = esp + 0x10;

loc_0034A448: ;
    eax = MEM32(ebx);
    eax = eax + esi;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A518; /* je: equal / zero */

loc_0034A456: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0034A54E; /* jbe: below or equal (unsigned <=) */

loc_0034A468: ;
    ecx = MEM32(ebp + -12);
    ecx = ecx - MEM32(ebp + 0xC);
    eax = ebp + -1052;
    MEM32(ebp + -8) = edi;

loc_0034A477: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034A4A3; /* jae: above or equal (unsigned >=) */

loc_0034A47C: ;
    edx = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A494; /* jne: not equal / not zero */

loc_0034A48A: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0xD;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034A494: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x400 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034A477; /* jl: less (signed <) */

loc_0034A4A3: ;
    edi = eax;
    eax = ebp + -1052;
    edi = edi - eax;
    PUSH32(esp, 0);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -1052;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, MEM32(eax + esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A4C5u); RECOMP_ABI_CALL(0x0019DEB6u, sub_0019DEB6); /* call 0x0019DEB6 */

loc_0034A4C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A4E2; /* je: equal / zero */

loc_0034A4C9: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -16) = MEM32(ebp + -16) + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034A4EA; /* jl: less (signed <) */

loc_0034A4D3: ;
    eax = MEM32(ebp + -12);
    eax = eax - MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034A468; /* jb: below (unsigned <) */

loc_0034A4E0: ;
    goto loc_0034A4EC;

loc_0034A4E2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A4E7u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034A4E7: ;
    MEM32(ebp + -4) = eax;

loc_0034A4EA: ;
    edi = 0; /* xor self */

loc_0034A4EC: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A57A; /* jne: not equal / not zero */

loc_0034A4F7: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A54E; /* je: equal / zero */

loc_0034A4FC: ;
    PUSH32(esp, 5);
    POP32(esp, esi);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A543; /* jne: not equal / not zero */

loc_0034A504: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A509u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A509: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A514u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A514: ;
    MEM32(eax) = esi;
    goto loc_0034A575;

loc_0034A518: ;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A52Au); RECOMP_ABI_CALL(0x0019DEB6u, sub_0019DEB6); /* call 0x0019DEB6 */

loc_0034A52A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A539; /* je: equal / zero */

loc_0034A52E: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -16) = eax;
    goto loc_0034A4EC;

loc_0034A539: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A53Eu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034A53E: ;
    MEM32(ebp + -4) = eax;
    goto loc_0034A4EC;

loc_0034A543: ;
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A54Bu); RECOMP_ABI_CALL(0x003453D6u, sub_003453D6); /* call 0x003453D6 */

loc_0034A54B: ;
    POP32(esp, ecx);
    goto loc_0034A575;

loc_0034A54E: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A563; /* je: equal / zero */

loc_0034A557: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x1A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A563; /* jne: not equal / not zero */

loc_0034A55F: ;
    eax = 0; /* xor self */
    goto loc_0034A57D;

loc_0034A563: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A568u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A568: ;
    MEM32(eax) = 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A573u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A573: ;
    MEM32(eax) = edi;

loc_0034A575: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0034A57D;

loc_0034A57A: ;
    eax = eax - MEM32(ebp + -20);

loc_0034A57D: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0034A57F: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034A582
 * Original: 0x0034A582 - 0x0034A606 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A582(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A582: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x431408);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A58Eu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A58E: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A611(); return; } /* jae: above or equal (unsigned >=) */

loc_0034A599: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edi = eax * 4 + 0x6F11E0;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A611(); return; } /* je: equal / zero */

loc_0034A5B9: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A5BFu); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_0034A5BF: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A5E1; /* je: equal / zero */

loc_0034A5CD: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A5D9u); RECOMP_ABI_CALL(0x0034A3F7u, sub_0034A3F7); /* call 0x0034A3F7 */

loc_0034A5D9: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    goto loc_0034A5F8;

loc_0034A5E1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A5E6u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A5E6: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A5F1u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A5F1: ;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0034A5F8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A601u); RECOMP_ABI_CALL(0x0034A609u, sub_0034A609); /* call 0x0034A609 */

loc_0034A601: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0034A627(); return; /* tail jmp 0x0034A627 */

}

/**
 * sub_0034A606
 * Original: 0x0034A606 - 0x0034A609 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A606(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A606: ;
    ebx = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_0034A609(); return; /* fallthrough 0x0034A609 */

}

/**
 * sub_0034A609
 * Original: 0x0034A609 - 0x0034A611 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A609(void)
{

loc_0034A609: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0034A60Fu); RECOMP_ABI_CALL(0x0034C2DCu, sub_0034C2DC); /* call 0x0034C2DC */

loc_0034A60F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A611
 * Original: 0x0034A611 - 0x0034A62D (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A611(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A611: ;
    PUSH32(esp, 0x0034A616u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A616: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0034A621u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A621: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A62Cu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A62C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A627
 * Original: 0x0034A627 - 0x0034A62D (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A627(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A627: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A62Cu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A62C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A62D
 * Original: 0x0034A62D - 0x0034A69F (114 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A62D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A62D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034A638u); RECOMP_ABI_CALL(0x0034C1FBu, sub_0034C1FB); /* call 0x0034C1FB */

loc_0034A638: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0034A64E; /* jne: not equal / not zero */

loc_0034A63E: ;
    PUSH32(esp, 0x0034A643u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A643: ;
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034A64E: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034A65Fu); RECOMP_ABI_CALL(0x0019E010u, sub_0019E010); /* call 0x0019E010 */

loc_0034A65F: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A66D; /* jne: not equal / not zero */

loc_0034A666: ;
    PUSH32(esp, 0x0034A66Bu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034A66B: ;
    goto loc_0034A66F;

loc_0034A66D: ;
    eax = 0; /* xor self */

loc_0034A66F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A67F; /* je: equal / zero */

loc_0034A673: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034A679u); RECOMP_ABI_CALL(0x003453D6u, sub_003453D6); /* call 0x003453D6 */

loc_0034A679: ;
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    goto loc_0034A69C;

loc_0034A67F: ;
    ecx = esi;
    esi = esi & 0x1F;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    eax = esi;
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 4;
    MEM8(eax) = MEM8(eax) & 0xFD;
    eax = edi;

loc_0034A69C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A69F
 * Original: 0x0034A69F - 0x0034A723 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A69F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A69F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x431418);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A6ABu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A6AB: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A72E(); return; } /* jae: above or equal (unsigned >=) */

loc_0034A6B6: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edi = eax * 4 + 0x6F11E0;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A72E(); return; } /* je: equal / zero */

loc_0034A6D6: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A6DCu); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_0034A6DC: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A6FE; /* je: equal / zero */

loc_0034A6EA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A6F6u); RECOMP_ABI_CALL(0x0034A62Du, sub_0034A62D); /* call 0x0034A62D */

loc_0034A6F6: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    goto loc_0034A715;

loc_0034A6FE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A703u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A703: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A70Eu); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A70E: ;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0034A715: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A71Eu); RECOMP_ABI_CALL(0x0034A726u, sub_0034A726); /* call 0x0034A726 */

loc_0034A71E: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0034A744(); return; /* tail jmp 0x0034A744 */

}

/**
 * sub_0034A723
 * Original: 0x0034A723 - 0x0034A726 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A723(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A723: ;
    ebx = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_0034A726(); return; /* fallthrough 0x0034A726 */

}

/**
 * sub_0034A726
 * Original: 0x0034A726 - 0x0034A72E (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A726(void)
{

loc_0034A726: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0034A72Cu); RECOMP_ABI_CALL(0x0034C2DCu, sub_0034C2DC); /* call 0x0034C2DC */

loc_0034A72C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A72E
 * Original: 0x0034A72E - 0x0034A74A (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A72E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A72E: ;
    PUSH32(esp, 0x0034A733u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A733: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0034A73Eu); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A73E: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A749u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A749: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A744
 * Original: 0x0034A744 - 0x0034A74A (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A744(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A744: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A749u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A749: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A74A
 * Original: 0x0034A74A - 0x0034A7E5 (155 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A74A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A74A: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x431428);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A756u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A756: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A7F0(); return; } /* jae: above or equal (unsigned >=) */

loc_0034A765: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edi = eax * 4 + 0x6F11E0;
    eax = ebx;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    esi = esi << 3;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A7F0(); return; } /* je: equal / zero */

loc_0034A785: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A78Bu); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_0034A78B: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034A7C8; /* je: equal / zero */

loc_0034A799: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A79Fu); RECOMP_ABI_CALL(0x0034C1FBu, sub_0034C1FB); /* call 0x0034C1FB */

loc_0034A79F: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A7A6u); RECOMP_ABI_CALL(0x0019E2ABu, sub_0019E2AB); /* call 0x0019E2AB */

loc_0034A7A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034A7B4; /* jne: not equal / not zero */

loc_0034A7AA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A7AFu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034A7AF: ;
    MEM32(ebp + -28) = eax;
    goto loc_0034A7B8;

loc_0034A7B4: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;

loc_0034A7B8: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A7D7; /* je: equal / zero */

loc_0034A7BE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A7C3u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034A7C3: ;
    ecx = MEM32(ebp + -28);
    MEM32(eax) = ecx;

loc_0034A7C8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A7CDu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A7CD: ;
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0034A7D7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A7E0u); RECOMP_ABI_CALL(0x0034A7E8u, sub_0034A7E8); /* call 0x0034A7E8 */

loc_0034A7E0: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0034A7FE(); return; /* tail jmp 0x0034A7FE */

}

/**
 * sub_0034A7E5
 * Original: 0x0034A7E5 - 0x0034A7E8 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A7E5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A7E5: ;
    ebx = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_0034A7E8(); return; /* fallthrough 0x0034A7E8 */

}

/**
 * sub_0034A7E8
 * Original: 0x0034A7E8 - 0x0034A7F0 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A7E8(void)
{

loc_0034A7E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0034A7EEu); RECOMP_ABI_CALL(0x0034C2DCu, sub_0034C2DC); /* call 0x0034C2DC */

loc_0034A7EE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034A7F0
 * Original: 0x0034A7F0 - 0x0034A804 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A7F0: ;
    PUSH32(esp, 0x0034A7F5u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034A7F5: ;
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A803u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A803: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A7FE
 * Original: 0x0034A7FE - 0x0034A804 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A7FE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A7FE: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A803u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A803: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A804
 * Original: 0x0034A804 - 0x0034A848 (68 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A804(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A804: ;
    MEM32(0x5D9A00) = MEM32(0x5D9A00) + 1;
    _fa = (uint32_t)(MEM32(0x5D9A00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x0034A814u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_0034A814: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0034A82D; /* je: equal / zero */

loc_0034A820: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8;
    MEM32(ecx + 0x18) = 0x1000;
    goto loc_0034A83E;

loc_0034A82D: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 4;
    eax = ecx + 0x14;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x18) = 2;

loc_0034A83E: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 4) = MEM32(ecx + 4) & 0;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A848
 * Original: 0x0034A848 - 0x0034A876 (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0034A848(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A848: ;
    ecx = MEM32(0x47AAF4);
    eax = edx;
    PUSH32(esp, edi);

loc_0034A851: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A863; /* je: equal / zero */

loc_0034A856: ;
    edi = ecx + ecx * 2;
    eax = eax + 0xC;
    edi = edx + edi * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034A851; /* jb: below (unsigned <) */

loc_0034A863: ;
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    POP32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_0034A873; /* jae: above or equal (unsigned >=) */

loc_0034A86E: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A875; /* je: equal / zero */

loc_0034A873: ;
    eax = 0; /* xor self */

loc_0034A875: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A876
 * Original: 0x0034A876 - 0x0034A9A9 (307 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A876(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A876: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x431438);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A882u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A882: ;
    ecx = 0; /* xor self */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034A8F8; /* je: equal / zero */

loc_0034A88E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034A8D8; /* je: equal / zero */

loc_0034A892: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0034A8D8; /* je: equal / zero */

loc_0034A897: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0034A8D8; /* je: equal / zero */

loc_0034A89C: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0034A8CB; /* je: equal / zero */

loc_0034A8A1: ;
    eax = eax - 6;
    if ((eax == 0)) goto loc_0034A8BE; /* je: equal / zero */

loc_0034A8A6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034A8B1; /* je: equal / zero */

loc_0034A8A9: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0034A9E9(); return; /* tail jmp 0x0034A9E9 */

loc_0034A8B1: ;
    esi = 0x5D9C10;
    edi = MEM32(0x5D9C10);
    goto loc_0034A903;

loc_0034A8BE: ;
    esi = 0x5D9C0C;
    edi = MEM32(0x5D9C0C);
    goto loc_0034A903;

loc_0034A8CB: ;
    esi = 0x5D9C14;
    edi = MEM32(0x5D9C14);
    goto loc_0034A903;

loc_0034A8D8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A8DDu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_0034A8DD: ;
    ebx = eax;
    MEM32(ebp + -36) = ebx;
    edx = MEM32(ebx + 0x54);
    esi = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A8EDu); RECOMP_ABI_CALL(0x0034A848u, sub_0034A848); /* call 0x0034A848 */

loc_0034A8ED: ;
    esi = eax;
    esi = esi + 8;
    edi = MEM32(esi);
    ecx = 0; /* xor self */
    goto loc_0034A90D;

loc_0034A8F8: ;
    esi = 0x5D9C08;
    edi = MEM32(0x5D9C08);

loc_0034A903: ;
    MEM32(ebp + -28) = 1;
    ebx = MEM32(ebp + -36);

loc_0034A90D: ;
    MEM32(ebp + -32) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A9E7(); return; } /* je: equal / zero */

loc_0034A919: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A924; /* jne: not equal / not zero */

loc_0034A91D: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A924u); RECOMP_ABI_CALL(0x003428C6u, sub_003428C6); /* call 0x003428C6 */

loc_0034A924: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A932; /* je: equal / zero */

loc_0034A929: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A92Fu); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034A92F: ;
    POP32(esp, ecx);
    ecx = 0; /* xor self */

loc_0034A932: ;
    MEM32(ebp + -4) = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A947; /* je: equal / zero */

loc_0034A93D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A947; /* je: equal / zero */

loc_0034A942: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A962; /* jne: not equal / not zero */

loc_0034A947: ;
    edx = MEM32(ebx + 0x58);
    MEM32(ebp + -44) = edx;
    MEM32(ebx + 0x58) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A98E; /* jne: not equal / not zero */

loc_0034A955: ;
    edx = MEM32(ebx + 0x5C);
    MEM32(ebp + -48) = edx;
    MEM32(ebx + 0x5C) = 0x8C;

loc_0034A962: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A98E; /* jne: not equal / not zero */

loc_0034A967: ;
    eax = MEM32(0x47AAE8);

loc_0034A96C: ;
    MEM32(ebp + -40) = eax;
    edx = MEM32(0x47AAEC);
    esi = MEM32(0x47AAE8);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034A990; /* jge: greater or equal (signed >=) */

loc_0034A981: ;
    edx = eax + eax * 2;
    esi = MEM32(ebx + 0x54);
    MEM32(esi + edx * 4 + 8) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034A96C;

loc_0034A98E: ;
    MEM32(esi) = ecx;

loc_0034A990: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034A999u); RECOMP_ABI_CALL(0x0034A9B1u, sub_0034A9B1); /* call 0x0034A9B1 */

loc_0034A999: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034A9BE(); return; } /* jne: not equal / not zero */

loc_0034A99F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebx + 0x5C));
    PUSH32(esp, 8);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0034A9A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034A9A6: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0034A9C3(); return; /* tail jmp 0x0034A9C3 */

}

/**
 * sub_0034A9A9
 * Original: 0x0034A9A9 - 0x0034A9B1 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A9A9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A9A9: ;
    edi = MEM32(ebp + -32);
    ebx = MEM32(ebp + -36);
    ecx = 0; /* xor self */

    g_seh_ebp = ebp; sub_0034A9B1(); return; /* fallthrough 0x0034A9B1 */

}

/**
 * sub_0034A9B1
 * Original: 0x0034A9B1 - 0x0034A9BE (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A9B1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A9B1: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A9BD; /* je: equal / zero */

loc_0034A9B6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034A9BCu); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034A9BC: ;
    POP32(esp, ecx);

loc_0034A9BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A9BE
 * Original: 0x0034A9BE - 0x0034A9EF (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A9BE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A9BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = edi; PUSH32(esp, 0x0034A9C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034A9C3: ;
    POP32(esp, ecx);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A9D6; /* je: equal / zero */

loc_0034A9CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A9D6; /* je: equal / zero */

loc_0034A9D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A9E7; /* jne: not equal / not zero */

loc_0034A9D6: ;
    ecx = MEM32(ebp + -44);
    MEM32(ebx + 0x58) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A9E7; /* jne: not equal / not zero */

loc_0034A9E1: ;
    eax = MEM32(ebp + -48);
    MEM32(ebx + 0x5C) = eax;

loc_0034A9E7: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A9EEu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A9EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A9C3
 * Original: 0x0034A9C3 - 0x0034A9E9 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0034A9C3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A9C3: ;
    POP32(esp, ecx);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A9D6; /* je: equal / zero */

loc_0034A9CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034A9D6; /* je: equal / zero */

loc_0034A9D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A9E7; /* jne: not equal / not zero */

loc_0034A9D6: ;
    ecx = MEM32(ebp + -44);
    MEM32(ebx + 0x58) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034A9E7; /* jne: not equal / not zero */

loc_0034A9E1: ;
    eax = MEM32(ebp + -48);
    MEM32(ebx + 0x5C) = eax;

loc_0034A9E7: ;
    eax = 0; /* xor self */

    g_seh_ebp = ebp; sub_0034A9E9(); return; /* fallthrough 0x0034A9E9 */

}

/**
 * sub_0034A9E7
 * Original: 0x0034A9E7 - 0x0034A9EF (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A9E7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A9E7: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A9EEu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A9EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A9E9
 * Original: 0x0034A9E9 - 0x0034A9EF (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A9E9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034A9E9: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034A9EEu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034A9EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034A9EF
 * Original: 0x0034A9EF - 0x0034AA1B (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034A9EF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034A9EF: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */

loc_0034A9F5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax * 8 + 0x47A980)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax * 8 + 0x47A980) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034AA04; /* je: equal / zero */

loc_0034A9FE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034A9F5; /* jb: below (unsigned <) */

loc_0034AA04: ;
    eax = eax << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x47A980)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x47A980) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AA1A; /* jne: not equal / not zero */

loc_0034AA0F: ;
    PUSH32(esp, MEM32(eax + 0x47A984));
    PUSH32(esp, 0x0034AA1Au); RECOMP_ABI_CALL(0x0034D390u, sub_0034D390); /* call 0x0034D390 */

loc_0034AA1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034AA1B
 * Original: 0x0034AA1B - 0x0034AA3D (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AA1B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034AA1B: ;
    PUSH32(esp, 0xFC);
    PUSH32(esp, 0x0034AA25u); RECOMP_ABI_CALL(0x0034A9EFu, sub_0034A9EF); /* call 0x0034A9EF */

loc_0034AA25: ;
    eax = MEM32(0x5D9C18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0034AA31; /* je: equal / zero */

loc_0034AA2F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0034AA31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034AA31: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x0034AA3Bu); RECOMP_ABI_CALL(0x0034A9EFu, sub_0034A9EF); /* call 0x0034A9EF */

loc_0034AA3B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034AA40
 * Original: 0x0034AA40 - 0x0034AA86 (70 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034AA40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AA63; /* jne: not equal / not zero */

loc_0034AA4F: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AA63; /* jne: not equal / not zero */

loc_0034AA55: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AA63; /* jne: not equal / not zero */

loc_0034AA5E: ;
    PUSH32(esp, 0x0034AA63u); RECOMP_ABI_CALL(0x003467B6u, sub_003467B6); /* call 0x003467B6 */

loc_0034AA63: ;
    eax = MEM32(0x5D9C1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034AA80; /* je: equal / zero */

loc_0034AA6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034AA72u); RECOMP_ABI_CALL(0x0034B8C8u, sub_0034B8C8); /* call 0x0034B8C8 */

loc_0034AA72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0034AA80; /* je: equal / zero */

loc_0034AA77: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x5D9C1C); PUSH32(esp, 0x0034AA7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034AA7E: ;
    goto loc_0034AA82;

loc_0034AA80: ;
    eax = 0; /* xor self */

loc_0034AA82: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034AA86
 * Original: 0x0034AA86 - 0x0034AAA4 (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AA86(void)
{

loc_0034AA86: ;
    PUSH32(esp, 0x34AA40);
    PUSH32(esp, 0x0034AA90u); RECOMP_ABI_CALL(0x0019F0FFu, sub_0019F0FF); /* call 0x0019F0FF */

loc_0034AA90: ;
    MEM32(0x5D9C1C) = eax;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

}

/**
 * sub_0034AA98
 * Original: 0x0034AA98 - 0x0034AAA4 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AA98(void)
{

loc_0034AA98: ;
    PUSH32(esp, MEM32(0x5D9C1C));
    PUSH32(esp, 0x0034AAA3u); RECOMP_ABI_CALL(0x0019F0FFu, sub_0019F0FF); /* call 0x0019F0FF */

loc_0034AAA3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034AAA4
 * Original: 0x0034AAA4 - 0x0034AAE6 (66 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AAA4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034AAA4: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4317B8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034AAB0u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034AAB0: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;
    goto loc_0034AADA;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000005u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_0034AADA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034AAE3u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034AAE3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034AAC1
 * Original: 0x0034AAC1 - 0x0034AAE6 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AAC1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034AAC1: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000005u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034AAD5
 * Original: 0x0034AAD5 - 0x0034AAE6 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AAD5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034AAD5: ;
    esp = MEM32(ebp + -24);
    eax = 0; /* xor self */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034AAE3u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034AAE3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034AAE8
 * Original: 0x0034AAE8 - 0x0034AB24 (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AAE8(void)
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

loc_0034AAE8: ;
    PUSH32(esp, 0x0034AAEDu); RECOMP_ABI_CALL(0x0034AB24u, sub_0034AB24); /* call 0x0034AB24 */

loc_0034AAED: ;
    { uint32_t _tmp = LO8(ecx);
    SET_LO8(ecx, HI8(ecx));
    SET_HI8(ecx, _tmp); }
    goto loc_0034AB13;

    PUSH32(esp, 0x0034AAF6u); RECOMP_ABI_CALL(0x0034AB24u, sub_0034AB24); /* call 0x0034AB24 */

loc_0034AAF6: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    goto loc_0034AB13;

    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(1.0); /* fld1 */
    SET_HI8(ecx, LO8(ecx));
    SET_LO8(ecx, 0); /* xor self */
    goto loc_0034AB13;

    MEM8(ebp + -144) = 0xFE;
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_0034AB13: ;
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    SET_LO8(ecx, LO8(ecx) | LO8(ecx));
    if ((LO8(ecx) == 0)) goto loc_0034AB1D; /* je: equal / zero */

loc_0034AB19: ;
    fp_push(3.14159265358979323846); /* fldpi */
    fp_st1() = fp_top() - fp_st1(); fp_pop(); /* fsubrp st(1) */

loc_0034AB1D: ;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) == 0)) goto loc_0034AB23; /* je: equal / zero */

loc_0034AB21: ;
    fp_top() = -fp_top(); /* fchs */

loc_0034AB23: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034AB04
 * Original: 0x0034AB04 - 0x0034AB24 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AB04(void)
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

loc_0034AB04: ;
    MEM8(ebp + -144) = 0xFE;
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    SET_LO8(ecx, LO8(ecx) | LO8(ecx));
    if ((LO8(ecx) == 0)) goto loc_0034AB1D; /* je: equal / zero */

loc_0034AB19: ;
    fp_push(3.14159265358979323846); /* fldpi */
    fp_st1() = fp_top() - fp_st1(); fp_pop(); /* fsubrp st(1) */

loc_0034AB1D: ;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) == 0)) goto loc_0034AB23; /* je: equal / zero */

loc_0034AB21: ;
    fp_top() = -fp_top(); /* fchs */

loc_0034AB23: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034AB24
 * Original: 0x0034AB24 - 0x0034AB54 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AB24(void)
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

loc_0034AB24: ;
    fp_top() = fabs(fp_top()); /* fabs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_top() - fp_st1(); fp_pop(); /* fsubrp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034AB4E; /* jne: not equal / not zero */

loc_0034AB49: ;
    SET_HI8(ecx, 0); /* xor self */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    esp += 4; return; /* ret */

loc_0034AB4E: ;
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_00348A7E(); return; /* tail jmp 0x00348A7E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034AB54
 * Original: 0x0034AB54 - 0x0034AB5D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0034AB54(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0034AB54: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A7E6)); /* fld */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034AB5D
 * Original: 0x0034AB5D - 0x0034AB90 (51 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AB5D(void)
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

loc_0034AB5D: ;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ecx, LO8(ecx) | LO8(ecx));
    if ((LO8(ecx) == 0)) goto loc_0034AB6E; /* je: equal / zero */

loc_0034AB63: ;
    fp_pop(); /* fstp st(0) */
    fp_push(3.14159265358979323846); /* fldpi */
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) == 0)) goto loc_0034AB6D; /* je: equal / zero */

loc_0034AB6B: ;
    fp_top() = -fp_top(); /* fchs */

loc_0034AB6D: ;
    esp += 4; return; /* ret */

loc_0034AB6E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    if ((HI8(ecx) == 0)) goto loc_0034AB6D; /* je: equal / zero */

loc_0034AB76: ;
    fp_top() = -fp_top(); /* fchs */
    esp += 4; return; /* ret */

    fp_pop(); /* fstp st(0) */
    SET_LO8(ecx, HI8(ecx));
    goto loc_0034AB86;

loc_0034AB86: ;
    PUSH32(esp, 0x0034AB8Bu); RECOMP_ABI_CALL(0x0034AB54u, sub_0034AB54); /* call 0x0034AB54 */

loc_0034AB8B: ;
    g_seh_ebp = ebp; sub_00348A9B(); return; /* tail jmp 0x00348A9B */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034AB80
 * Original: 0x0034AB80 - 0x0034AB90 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AB80(void)
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

loc_0034AB80: ;
    fp_pop(); /* fstp st(0) */
    SET_LO8(ecx, HI8(ecx));
    goto loc_0034AB86;

loc_0034AB86: ;
    PUSH32(esp, 0x0034AB8Bu); RECOMP_ABI_CALL(0x0034AB54u, sub_0034AB54); /* call 0x0034AB54 */

loc_0034AB8B: ;
    g_seh_ebp = ebp; sub_00348A9B(); return; /* tail jmp 0x00348A9B */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034AB90
 * Original: 0x0034AB90 - 0x0034ACF3 (355 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034AB90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034AB90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034AB9Cu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_0034AB9C: ;
    edi = MEM32(ebp + 8);
    esi = eax;
    edx = MEM32(esi + 0x54);
    eax = MEM32(0x47AAF4);
    ecx = edx;

loc_0034ABAB: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034ABBC; /* je: equal / zero */

loc_0034ABAF: ;
    ebx = eax + eax * 2;
    ecx = ecx + 0xC;
    ebx = edx + ebx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034ABAB; /* jb: below (unsigned <) */

loc_0034ABBC: ;
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034ABCA; /* jae: above or equal (unsigned >=) */

loc_0034ABC6: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034ABCC; /* je: equal / zero */

loc_0034ABCA: ;
    ecx = 0; /* xor self */

loc_0034ABCC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034ACE6; /* je: equal / zero */

loc_0034ABD4: ;
    ebx = MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebp + 8) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0034ACE6; /* je: equal / zero */

loc_0034ABE2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034ABF3; /* jne: not equal / not zero */

loc_0034ABE7: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034ACEE;

loc_0034ABF3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034ACE1; /* je: equal / zero */

loc_0034ABFC: ;
    eax = MEM32(esi + 0x58);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034ACD3; /* jne: not equal / not zero */

loc_0034AC14: ;
    edx = MEM32(0x47AAE8);
    eax = MEM32(0x47AAEC);
    eax = eax + edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034AC4C; /* jge: greater or equal (signed >=) */

loc_0034AC25: ;
    eax = edx + edx * 2;
    eax = eax << 2;

loc_0034AC2B: ;
    edi = MEM32(esi + 0x54);
    MEM32(eax + edi + 8) = MEM32(eax + edi + 8) & 0;
    edi = MEM32(0x47AAE8);
    ebx = MEM32(0x47AAEC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + edi;
    eax = eax + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034AC2B; /* jl: less (signed <) */

loc_0034AC49: ;
    ebx = MEM32(ebp + 8);

loc_0034AC4C: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000008Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC000008Eu (32-bit) */
    edi = MEM32(esi + 0x5C);
    if (CMP_NE(_fa, _fb)) goto loc_0034AC62; /* jne: not equal / not zero */

loc_0034AC59: ;
    MEM32(esi + 0x5C) = 0x83;
    goto loc_0034ACC6;

loc_0034AC62: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000090u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0000090u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AC73; /* jne: not equal / not zero */

loc_0034AC6A: ;
    MEM32(esi + 0x5C) = 0x81;
    goto loc_0034ACC6;

loc_0034AC73: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000091u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0000091u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AC84; /* jne: not equal / not zero */

loc_0034AC7B: ;
    MEM32(esi + 0x5C) = 0x84;
    goto loc_0034ACC6;

loc_0034AC84: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000093u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0000093u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AC95; /* jne: not equal / not zero */

loc_0034AC8C: ;
    MEM32(esi + 0x5C) = 0x85;
    goto loc_0034ACC6;

loc_0034AC95: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000008Du) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC000008Du (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034ACA6; /* jne: not equal / not zero */

loc_0034AC9D: ;
    MEM32(esi + 0x5C) = 0x82;
    goto loc_0034ACC6;

loc_0034ACA6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC000008Fu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC000008Fu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034ACB7; /* jne: not equal / not zero */

loc_0034ACAE: ;
    MEM32(esi + 0x5C) = 0x86;
    goto loc_0034ACC6;

loc_0034ACB7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000092u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0000092u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034ACC6; /* jne: not equal / not zero */

loc_0034ACBF: ;
    MEM32(esi + 0x5C) = 0x8A;

loc_0034ACC6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x5C));
    PUSH32(esp, 8);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0034ACCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034ACCD: ;
    POP32(esp, ecx);
    MEM32(esi + 0x5C) = edi;
    goto loc_0034ACDA;

loc_0034ACD3: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0034ACDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034ACDA: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ecx);
    MEM32(esi + 0x58) = eax;

loc_0034ACE1: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0034ACEE;

loc_0034ACE6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034ACEEu); RECOMP_ABI_CALL(0x0019F15Au, sub_0019F15A); /* call 0x0019F15A */

loc_0034ACEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034ACF3
 * Original: 0x0034ACF3 - 0x0034ADC2 (207 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ACF3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ACF3: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x431808);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034ACFFu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034ACFF: ;
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034AD06u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034AD06: ;
    POP32(esp, ecx);
    esi = 0; /* xor self */
    MEM32(ebp + -4) = esi;
    eax = MEM32(0x5D9BF8);
    MEM32(ebp + -28) = eax;
    MEM32(0x5D9CCC) = esi;
    edi = edi | 0xFFFFFFFFu;
    MEM32(0x47AB9C) = edi;
    MEM32(0x47AB90) = edi;
    eax = MEM32(0x5D9CD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034AD3F; /* je: equal / zero */

loc_0034AD32: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034AD38u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0034AD38: ;
    POP32(esp, ecx);
    MEM32(0x5D9CD0) = esi;

loc_0034AD3F: ;
    PUSH32(esp, 0x5D9C20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034AD49u); RECOMP_ABI_CALL(0x0034DABDu, sub_0034DABD); /* call 0x0034DABD */

loc_0034AD49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034ADB0; /* je: equal / zero */

loc_0034AD4D: ;
    ecx = 0; /* xor self */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5D9CCC) = ecx;
    eax = MEM32(0x5D9C20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEM32(0x47AAF8) = eax;
    _fa = (uint32_t)(MEM16(0x5D9C66)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5D9C66), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034AD7C; /* je: equal / zero */

loc_0034AD6C: ;
    edx = MEM32(0x5D9C74);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    eax = eax + edx;
    MEM32(0x47AAF8) = eax;

loc_0034AD7C: ;
    _fa = (uint32_t)(MEM16(0x5D9CBA)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5D9CBA), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034ADA4; /* je: equal / zero */

loc_0034AD85: ;
    eax = MEM32(0x5D9CC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034ADA4; /* je: equal / zero */

loc_0034AD8E: ;
    MEM32(0x47AAFC) = ecx;
    eax = eax - MEM32(0x5D9C74);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEM32(0x47AB00) = eax;
    goto loc_0034ADB0;

loc_0034ADA4: ;
    MEM32(0x47AAFC) = esi;
    MEM32(0x47AB00) = esi;

loc_0034ADB0: ;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034ADBAu); RECOMP_ABI_CALL(0x0034139Au, sub_0034139A); /* call 0x0034139A */

loc_0034ADBA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034ADC1u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034ADC1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034ADC2
 * Original: 0x0034ADC2 - 0x0034ADCB (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ADC2(void)
{

loc_0034ADC2: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x0034ADC9u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034ADC9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034ADCB
 * Original: 0x0034ADCB - 0x0034AF83 (440 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034ADCB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034ADCB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = eax;
    eax = edi;
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AED3; /* jne: not equal / not zero */

loc_0034ADEA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ebp + -8) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0034ADFD; /* jne: not equal / not zero */

loc_0034ADF1: ;
    eax = edi;
    PUSH32(esp, 0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034AE1C; /* jne: not equal / not zero */

loc_0034ADFD: ;
    eax = edi + 0x76C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034AE1C; /* je: equal / zero */

loc_0034AE0F: ;
    eax = esi;
    eax = eax << 2;
    esi = MEM32(eax + 0x47A948);
    goto loc_0034AE27;

loc_0034AE1C: ;
    eax = esi;
    eax = eax << 2;
    esi = MEM32(eax + 0x47A914);

loc_0034AE27: ;
    MEM32(ebp + 0xC) = eax;
    eax = edi + 0x12B;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = edi + -1;
    edi = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    PUSH32(esp, 0x64);
    POP32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    MEM32(ebp + -4) = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edx = MEM32(ebp + -4);
    POP32(esp, edi);
    PUSH32(esp, 7);
    edx = edx - eax;
    eax = MEM32(ebp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MEM32(ebp + 0x10);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16D);
    eax = eax + esi;
    eax = eax + ebx;
    eax = edx + eax + -25563;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    eax = eax - edx;
    eax = eax + MEM32(ebp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034AE8A; /* jg: greater (signed >) */

loc_0034AE84: ;
    esi = esi + eax + -7;
    goto loc_0034AE8C;

loc_0034AE8A: ;
    esi = esi + eax;

loc_0034AE8C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AF08; /* jne: not equal / not zero */

loc_0034AE92: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AEA4; /* jne: not equal / not zero */

loc_0034AE98: ;
    eax = edi;
    PUSH32(esp, 0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034AEC1; /* jne: not equal / not zero */

loc_0034AEA4: ;
    eax = edi + 0x76C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034AEC1; /* je: equal / zero */

loc_0034AEB6: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x47A94C);
    goto loc_0034AECA;

loc_0034AEC1: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x47A918);

loc_0034AECA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034AF08; /* jle: less or equal (signed <=) */

loc_0034AECE: ;
    esi = esi - 7;
    goto loc_0034AF08;

loc_0034AED3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034AEE3; /* jne: not equal / not zero */

loc_0034AED7: ;
    eax = edi;
    PUSH32(esp, 0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034AEFE; /* jne: not equal / not zero */

loc_0034AEE3: ;
    eax = edi + 0x76C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034AEFE; /* je: equal / zero */

loc_0034AEF5: ;
    esi = MEM32(esi * 4 + 0x47A948);
    goto loc_0034AF05;

loc_0034AEFE: ;
    esi = MEM32(esi * 4 + 0x47A914);

loc_0034AF05: ;
    esi = esi + MEM32(ebp + 0x1C);

loc_0034AF08: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    ecx = ecx + MEM32(ebp + 0x20);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AF37; /* jne: not equal / not zero */

loc_0034AF17: ;
    ecx = ecx + MEM32(ebp + 0x24);
    MEM32(0x47AB94) = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3E8);
    ecx = ecx + MEM32(ebp + 0x28);
    MEM32(0x47AB90) = edi;
    MEM32(0x47AB98) = ecx;
    goto loc_0034AF7E;

loc_0034AF37: ;
    ecx = ecx + MEM32(0x47AB00);
    MEM32(0x47ABA0) = esi;
    ecx = ecx + MEM32(ebp + 0x24);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3E8);
    ecx = ecx + MEM32(ebp + 0x28);
    MEM32(0x47ABA4) = ecx;
    if (((int32_t)ecx >= 0)) goto loc_0034AF60; /* jns: not sign (positive) */

loc_0034AF57: ;
    ecx = ecx + 0x5265C00;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0034AF6C;

loc_0034AF60: ;
    eax = 0x5265C00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034AF78; /* jl: less (signed <) */

loc_0034AF69: ;
    ecx = ecx - eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034AF6C: ;
    MEM32(0x47ABA4) = ecx;
    MEM32(0x47ABA0) = esi;

loc_0034AF78: ;
    MEM32(0x47AB9C) = edi;

loc_0034AF7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034AF83
 * Original: 0x0034AF83 - 0x0034B10A (391 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034AF83(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034AF83: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0x47AAFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47AAFC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AF92; /* jne: not equal / not zero */

loc_0034AF8E: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034AF92: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x47AB90)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x47AB90) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034AFAE; /* jne: not equal / not zero */

loc_0034AFA2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x47AB9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x47AB9C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B09A; /* je: equal / zero */

loc_0034AFAE: ;
    _fa = (uint32_t)(MEM32(0x5D9CCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9CCC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B06E; /* je: equal / zero */

loc_0034AFBA: ;
    _fa = (uint32_t)(MEM16(0x5D9CB8)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5D9CB8), LO16(esi) (16-bit) */
    eax = ZX16(MEM16(0x5D9CC6));
    ecx = ZX16(MEM16(0x5D9CC0));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x5D9CC4));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x5D9CC2));
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0034AFF7; /* jne: not equal / not zero */

loc_0034AFE2: ;
    eax = ZX16(MEM16(0x5D9CBC));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x5D9CBE));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    goto loc_0034B003;

loc_0034AFF7: ;
    eax = ZX16(MEM16(0x5D9CBE));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);

loc_0034B003: ;
    eax = ZX16(MEM16(0x5D9CBA));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0034B010u); RECOMP_ABI_CALL(0x0034ADCBu, sub_0034ADCB); /* call 0x0034ADCB */

loc_0034B010: ;
    eax = ZX16(MEM16(0x5D9C72));
    ecx = ZX16(MEM16(0x5D9C6C));
    esp = esp + 0x24;
    _fa = (uint32_t)(MEM16(0x5D9C64)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x5D9C64), LO16(esi) (16-bit) */
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x5D9C70));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x5D9C6E));
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0034B060; /* jne: not equal / not zero */

loc_0034B03B: ;
    eax = ZX16(MEM16(0x5D9C68));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x5D9C6A));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);

loc_0034B04E: ;
    eax = ZX16(MEM16(0x5D9C66));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034B05Bu); RECOMP_ABI_CALL(0x0034ADCBu, sub_0034ADCB); /* call 0x0034ADCB */

loc_0034B05B: ;
    esp = esp + 0x24;
    goto loc_0034B09A;

loc_0034B060: ;
    eax = ZX16(MEM16(0x5D9C6A));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    goto loc_0034B04E;

loc_0034B06E: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    PUSH32(esp, 4);
    POP32(esp, eax);
    PUSH32(esp, 0x0034B082u); RECOMP_ABI_CALL(0x0034ADCBu, sub_0034ADCB); /* call 0x0034ADCB */

loc_0034B082: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    PUSH32(esp, 0x0034B097u); RECOMP_ABI_CALL(0x0034ADCBu, sub_0034ADCB); /* call 0x0034ADCB */

loc_0034B097: ;
    esp = esp + 0x48;

loc_0034B09A: ;
    edx = MEM32(0x47AB94);
    eax = MEM32(0x47ABA0);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(ebx + 0x1C);
    if (CMP_GE(_fas, _fbs)) goto loc_0034B0C6; /* jge: greater or equal (signed >=) */

loc_0034B0AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034B0C2; /* jl: less (signed <) */

loc_0034B0B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034B0C2; /* jg: greater (signed >) */

loc_0034B0B4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034B0D6; /* jle: less or equal (signed <=) */

loc_0034B0B8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034B0D6; /* jge: greater or equal (signed >=) */

loc_0034B0BC: ;
    eax = ebp;

loc_0034B0BE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034B0C2: ;
    eax = 0; /* xor self */
    goto loc_0034B0BE;

loc_0034B0C6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034B0BC; /* jl: less (signed <) */

loc_0034B0CA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034B0BC; /* jg: greater (signed >) */

loc_0034B0CE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034B0D6; /* jle: less or equal (signed <=) */

loc_0034B0D2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034B0C2; /* jl: less (signed <) */

loc_0034B0D6: ;
    eax = MEM32(ebx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + MEM32(ebx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    eax = eax + MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B0FD; /* jne: not equal / not zero */

loc_0034B0EE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x47AB98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x47AB98) (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */

loc_0034B0F9: ;
    eax = ecx;
    goto loc_0034B0BE;

loc_0034B0FD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x47ABA4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x47ABA4) (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_0034B0F9;

}

/**
 * sub_0034B10A
 * Original: 0x0034B10A - 0x0034B14D (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B10A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B10A: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x431818);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B116u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034B116: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(0x5D9CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9CD4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B147; /* jne: not equal / not zero */

loc_0034B120: ;
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B127u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034B127: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    _fa = (uint32_t)(MEM32(0x5D9CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9CD4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B13E; /* jne: not equal / not zero */

loc_0034B133: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B138u); RECOMP_ABI_CALL(0x0034ACF3u, sub_0034ACF3); /* call 0x0034ACF3 */

loc_0034B138: ;
    MEM32(0x5D9CD4) = MEM32(0x5D9CD4) + 1;
    _fa = (uint32_t)(MEM32(0x5D9CD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034B13E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B147u); RECOMP_ABI_CALL(0x0034B14Du, sub_0034B14D); /* call 0x0034B14D */

loc_0034B147: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B14Cu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034B14C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B14D
 * Original: 0x0034B14D - 0x0034B156 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B14D(void)
{

loc_0034B14D: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0034B154u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034B154: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B156
 * Original: 0x0034B156 - 0x0034B18B (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B156(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B156: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x431828);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B162u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034B162: ;
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B169u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034B169: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ebx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B176u); RECOMP_ABI_CALL(0x0034AF83u, sub_0034AF83); /* call 0x0034AF83 */

loc_0034B176: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B182u); RECOMP_ABI_CALL(0x0034B18Bu, sub_0034B18B); /* call 0x0034B18B */

loc_0034B182: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B18Au); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034B18A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B18B
 * Original: 0x0034B18B - 0x0034B194 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B18B(void)
{

loc_0034B18B: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x0034B192u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034B192: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B194
 * Original: 0x0034B194 - 0x0034B1A4 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B194(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B194: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = MEM32(0x3C6CC0); PUSH32(esp, 0x0034B19Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034B19E: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034B1A4
 * Original: 0x0034B1A4 - 0x0034B205 (97 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B1A4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B1A4: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x431838);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B1B0u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034B1B0: ;
    _fa = (uint32_t)(MEM32(0x5D9CD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9CD8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B1C3; /* jne: not equal / not zero */

loc_0034B1B9: ;
    MEM32(0x5D9CD8) = 0x34B194;

loc_0034B1C3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x5D9CD8); PUSH32(esp, 0x0034B1D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034B1D3: ;
    MEM32(ebp + -32) = eax;
    goto loc_0034B1FB;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B1F9u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0034B1F9: ;
    eax = 0; /* xor self */

loc_0034B1FB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B204u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034B204: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B1D8
 * Original: 0x0034B1D8 - 0x0034B205 (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B1D8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B1D8: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    PUSH32(esp, 8);
    PUSH32(esp, 0x0034B1F9u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0034B1F9: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034B204u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034B204: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B1E6
 * Original: 0x0034B1E6 - 0x0034B205 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B1E6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B1E6: ;
    esp = MEM32(ebp + -24);
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000017u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xC0000017u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B1F9; /* jne: not equal / not zero */

loc_0034B1F2: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x0034B1F9u); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0034B1F9: ;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034B204u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034B204: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B205
 * Original: 0x0034B205 - 0x0034B237 (50 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B205(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B205: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    ecx = ecx - edx;
    edx = edx | 0xFFFFFFFFu;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 4);
    edx = ~edx;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B22D; /* je: equal / zero */

loc_0034B224: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0034B227: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B224; /* jne: not equal / not zero */

loc_0034B22D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034B227; /* jl: less (signed <) */

loc_0034B233: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B237
 * Original: 0x0034B237 - 0x0034B284 (77 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B237(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B237: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esp + 0xC);
    esi = eax;
    eax = edi + esi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    ecx = ecx - edx;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0034B25Fu); RECOMP_ABI_CALL(0x0034C8ABu, sub_0034C8AB); /* call 0x0034C8AB */

loc_0034B25F: ;
    esp = esp + 0xC;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0034B281; /* js: sign (negative) */

loc_0034B265: ;
    edi = edi + esi * 4;

loc_0034B268: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B281; /* je: equal / zero */

loc_0034B26C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0x0034B276u); RECOMP_ABI_CALL(0x0034C8ABu, sub_0034C8AB); /* call 0x0034C8AB */

loc_0034B276: ;
    esp = esp + 0xC;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0034B268; /* jge: greater or equal (signed >=) */

loc_0034B281: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B284
 * Original: 0x0034B284 - 0x0034B2F6 (114 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B284(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B284: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x20);
    eax = edi + 1;
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x1F);
    POP32(esp, esi);
    esi = esi - edx;
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    edx = edx << LO8(ecx);
    ebx = eax;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + ebx * 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B2D3; /* je: equal / zero */

loc_0034B2B2: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B2BCu); RECOMP_ABI_CALL(0x0034B205u, sub_0034B205); /* call 0x0034B205 */

loc_0034B2BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0034B2D0; /* jne: not equal / not zero */

loc_0034B2C2: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B2CBu); RECOMP_ABI_CALL(0x0034B237u, sub_0034B237); /* call 0x0034B237 */

loc_0034B2CB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;

loc_0034B2D0: ;
    eax = MEM32(ebp + 8);

loc_0034B2D3: ;
    edx = edx | 0xFFFFFFFFu;
    ecx = esi;
    edx = edx << LO8(ecx);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    MEM32(eax + ebx * 4) = MEM32(eax + ebx * 4) & edx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034B2EE; /* jge: greater or equal (signed >=) */

loc_0034B2E5: ;
    edi = eax + ebx * 4;
    ecx = ecx - ebx;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0034B2EE: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B2F6
 * Original: 0x0034B2F6 - 0x0034B311 (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B2F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B2F6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 3);
    POP32(esp, edx);
    ecx = ecx - eax;
    PUSH32(esp, esi);

loc_0034B304: ;
    esi = MEM32(eax);
    MEM32(ecx + eax) = esi;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034B304; /* jne: not equal / not zero */

loc_0034B30F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B311
 * Original: 0x0034B311 - 0x0034B32A (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0034B311(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B311: ;
    eax = 0; /* xor self */

loc_0034B313: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B327; /* jne: not equal / not zero */

loc_0034B31D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034B313; /* jl: less (signed <) */

loc_0034B323: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0034B327: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B32A
 * Original: 0x0034B32A - 0x0034B3A5 (123 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B32A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B32A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = esi;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = MEM32(ebp + 8);
    edi = edi | 0xFFFFFFFFu;
    MEM32(ebp + 0xC) = esi;
    ecx = edx;
    edi = edi << LO8(ecx);
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edx;
    edi = ~edi;
    MEM32(ebp + -4) = eax;

loc_0034B358: ;
    esi = MEM32(ebx + eax * 4);
    ecx = esi;
    ecx = ecx & edi;
    MEM32(ebp + -12) = ecx;
    ecx = edx;
    esi = esi >> LO8(ecx);
    ecx = MEM32(ebp + 0xC);
    esi = esi | MEM32(ebp + -4);
    MEM32(ebx + eax * 4) = esi;
    esi = MEM32(ebp + -12);
    esi = esi << LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(ebp + -4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0034B358; /* jl: less (signed <) */

loc_0034B37D: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    ecx = eax;
    ecx = ecx - MEM32(ebp + -8);
    ecx = ebx + ecx * 4;

loc_0034B388: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034B394; /* jl: less (signed <) */

loc_0034B38D: ;
    edx = MEM32(ecx);
    MEM32(ebx + eax * 4) = edx;
    goto loc_0034B398;

loc_0034B394: ;
    MEM32(ebx + eax * 4) = MEM32(ebx + eax * 4) & 0;

loc_0034B398: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0034B388; /* jge: greater or equal (signed >=) */

loc_0034B3A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B3A5
 * Original: 0x0034B3A5 - 0x0034B4FD (344 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B3A5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034B3A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x8000;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 6);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 2);
    eax = ZX16(MEM16(eax));
    if (0x10) _cf = (int)(((eax) >> (32 - (0x10))) & 1);
    eax = eax << 0x10;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x7FFF;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x3FFF));
    edi = edi - 0x3FFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFC001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFC001u (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    eax = ebp + -12;
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_0034B40E; /* jne: not equal / not zero */

loc_0034B3F0: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B3F7u); RECOMP_ABI_CALL(0x0034B311u, sub_0034B311); /* call 0x0034B311 */

loc_0034B3F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0034B4BD; /* jne: not equal / not zero */

loc_0034B400: ;
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */

loc_0034B406: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_0034B4BF;

loc_0034B40E: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B417u); RECOMP_ABI_CALL(0x0034B2F6u, sub_0034B2F6); /* call 0x0034B2F6 */

loc_0034B417: ;
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B423u); RECOMP_ABI_CALL(0x0034B284u, sub_0034B284); /* call 0x0034B284 */

loc_0034B423: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034B42B; /* je: equal / zero */

loc_0034B42A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034B42B: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(esi + 8)));
    ecx = ecx - MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0034B441; /* jge: greater or equal (signed >=) */

loc_0034B437: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    goto loc_0034B47D;

loc_0034B441: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0034B481; /* jg: greater (signed >) */

loc_0034B445: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    edi = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B456u); RECOMP_ABI_CALL(0x0034B2F6u, sub_0034B2F6); /* call 0x0034B2F6 */

loc_0034B456: ;
    eax = ebp + -12;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B460u); RECOMP_ABI_CALL(0x0034B32Au, sub_0034B32A); /* call 0x0034B32A */

loc_0034B460: ;
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B46Cu); RECOMP_ABI_CALL(0x0034B284u, sub_0034B284); /* call 0x0034B284 */

loc_0034B46C: ;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B47Au); RECOMP_ABI_CALL(0x0034B32Au, sub_0034B32A); /* call 0x0034B32A */

loc_0034B47A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;

loc_0034B47D: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    goto loc_0034B406;

loc_0034B481: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, MEM32(esi + 0xC));
    if (CMP_L(_fas, _fbs)) goto loc_0034B4A9; /* jl: less (signed <) */

loc_0034B488: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = ebp + -12;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -9) = MEM8(ebp + -9) | 0x80;
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B49Du); RECOMP_ABI_CALL(0x0034B32Au, sub_0034B32A); /* call 0x0034B32A */

loc_0034B49D: ;
    ebx = MEM32(esi + 0x14);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(esi))) >> 32) & 1);
    ebx = ebx + MEM32(esi);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034B4BF;

loc_0034B4A9: ;
    ebx = MEM32(esi + 0x14);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -9) = MEM8(ebp + -9) & 0x7F;
    eax = ebp + -12;
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B4BBu); RECOMP_ABI_CALL(0x0034B32Au, sub_0034B32A); /* call 0x0034B32A */

loc_0034B4BB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034B4BD: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0034B4BF: ;
    PUSH32(esp, 0x1F);
    POP32(esp, ecx);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(esi + 0xC)));
    ecx = ecx - MEM32(esi + 0xC);
    esi = MEM32(esi + 0x10);
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    ecx = MEM32(ebp + 8);
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x80000000u;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ecx;
    _cf = 0; /* logical op clears CF */
    ebx = ebx | MEM32(ebp + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034B4EE; /* jne: not equal / not zero */

loc_0034B4E1: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + -8);
    MEM32(ecx + 4) = ebx;
    MEM32(ecx) = edx;
    goto loc_0034B4F8;

loc_0034B4EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034B4F8; /* jne: not equal / not zero */

loc_0034B4F3: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = ebx;

loc_0034B4F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B4FD
 * Original: 0x0034B4FD - 0x0034B513 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B4FD(void)
{

loc_0034B4FD: ;
    PUSH32(esp, 0x47ABA8);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0034B50Fu); RECOMP_ABI_CALL(0x0034B3A5u, sub_0034B3A5); /* call 0x0034B3A5 */

loc_0034B50F: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B513
 * Original: 0x0034B513 - 0x0034B529 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B513(void)
{

loc_0034B513: ;
    PUSH32(esp, 0x47ABC0);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x0034B525u); RECOMP_ABI_CALL(0x0034B3A5u, sub_0034B3A5); /* call 0x0034B3A5 */

loc_0034B525: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B529
 * Original: 0x0034B529 - 0x0034B556 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B529(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0034B529: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B545u); RECOMP_ABI_CALL(0x0034BBC3u, sub_0034BBC3); /* call 0x0034BBC3 */

loc_0034B545: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B551u); RECOMP_ABI_CALL(0x0034B4FDu, sub_0034B4FD); /* call 0x0034B4FD */

loc_0034B551: ;
    esp = esp + 0x24;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B556
 * Original: 0x0034B556 - 0x0034B583 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B556(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0034B556: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B572u); RECOMP_ABI_CALL(0x0034BBC3u, sub_0034BBC3); /* call 0x0034BBC3 */

loc_0034B572: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B57Eu); RECOMP_ABI_CALL(0x0034B513u, sub_0034B513); /* call 0x0034B513 */

loc_0034B57E: ;
    esp = esp + 0x24;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B583
 * Original: 0x0034B583 - 0x0034B602 (127 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B583(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B583: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = esi + 1;
    MEM8(esi) = 0x30;
    eax = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0034B5C0; /* jle: less or equal (signed <=) */

loc_0034B5A1: ;
    MEM32(ebp + 8) = ebx;
    ebx = 0; /* xor self */

loc_0034B5A6: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B5B2; /* je: equal / zero */

loc_0034B5AC: ;
    edx = SX8(LO8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034B5B5;

loc_0034B5B2: ;
    PUSH32(esp, 0x30);
    POP32(esp, edx);

loc_0034B5B5: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034B5A6; /* jne: not equal / not zero */

loc_0034B5BD: ;
    edx = MEM32(ebp + 0x10);

loc_0034B5C0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(eax) = 0;
    if (TEST_S(_fas, _fbs)) goto loc_0034B5D9; /* jl: less (signed <) */

loc_0034B5C7: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x35) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x35 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034B5D9; /* jl: less (signed <) */

loc_0034B5CC: ;
    goto loc_0034B5D1;

loc_0034B5CE: ;
    MEM8(eax) = 0x30;

loc_0034B5D1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x39 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B5CE; /* je: equal / zero */

loc_0034B5D7: ;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0034B5D9: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B5E3; /* jne: not equal / not zero */

loc_0034B5DE: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034B5FD;

loc_0034B5E3: ;
    eax = edi;
    edx = eax + 1;

loc_0034B5E8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034B5E8; /* jne: not equal / not zero */

loc_0034B5EF: ;
    eax = eax - edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B5FAu); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_0034B5FA: ;
    esp = esp + 0xC;

loc_0034B5FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B602
 * Original: 0x0034B602 - 0x0034B6BC (186 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B602(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B602: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx + 6));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7FF;
    esi = 0x80000000u;
    MEM32(ebp + -4) = esi;
    ecx = eax;
    ecx = ecx >> 4;
    eax = eax & 0x8000;
    ecx = ecx & edi;
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx);
    ebx = ZX16(LO16(ecx));
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B652; /* je: equal / zero */

loc_0034B63F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B64B; /* je: equal / zero */

loc_0034B643: ;
    edi = ecx + 0x3C00;
    goto loc_0034B673;

loc_0034B64B: ;
    edi = 0x7FFF;
    goto loc_0034B673;

loc_0034B652: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B66A; /* jne: not equal / not zero */

loc_0034B658: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B66A; /* jne: not equal / not zero */

loc_0034B65C: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = ebx;
    MEM32(eax) = ebx;
    MEM16(eax + 8) = LO16(ebx);
    goto loc_0034B6B7;

loc_0034B66A: ;
    edi = ecx + 0x3C01;
    MEM32(ebp + -4) = ebx;

loc_0034B673: ;
    ecx = edx;
    ecx = ecx >> 0x15;
    eax = eax << 0xB;
    ecx = ecx | eax;
    ecx = ecx | MEM32(ebp + -4);
    eax = MEM32(ebp + 8);
    edx = edx << 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0034B6AE; /* jne: not equal / not zero */

loc_0034B68F: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    ebx = ecx;
    edx = edx << 1;
    ebx = ebx >> 0x1F;
    edx = edx | ebx;
    ecx = ecx + ecx;
    edi = edi + 0xFFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, edx (32-bit) */
    MEM32(eax + 4) = edx;
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0034B68F; /* je: equal / zero */

loc_0034B6AE: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx | edi;
    MEM16(eax + 8) = LO16(ecx);

loc_0034B6B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B6BC
 * Original: 0x0034B6BC - 0x0034B721 (101 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B6BC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B6BC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B6D1u); RECOMP_ABI_CALL(0x0034B602u, sub_0034B602); /* call 0x0034B602 */

loc_0034B6D1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x11);
    esp = esp - 0xC;
    esi = ebp + -12;
    edi = esp;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B6ECu); RECOMP_ABI_CALL(0x0034CA53u, sub_0034CA53); /* call 0x0034CA53 */

loc_0034B6EC: ;
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x14);
    MEM32(ecx + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + -38);
    MEM32(ecx) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -40);
    MEM32(ecx + 4) = eax;
    eax = ebp + -36;
    esi = edi;
    edx = eax;
    esp = esp + 0x18;
    esi = esi - edx;

loc_0034B70E: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034B70E; /* jne: not equal / not zero */

loc_0034B718: ;
    MEM32(ecx + 0xC) = edi;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034B721
 * Original: 0x0034B721 - 0x0034B72A (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B721(void)
{

loc_0034B721: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0034B728u); RECOMP_ABI_CALL(0x00345AB0u, sub_00345AB0); /* call 0x00345AB0 */

loc_0034B728: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B72A
 * Original: 0x0034B72A - 0x0034B7BC (146 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B72A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034B72A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B734; /* je: equal / zero */

loc_0034B731: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_0034B734: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B73C; /* je: equal / zero */

loc_0034B739: ;
    eax = eax | 8;

loc_0034B73C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B744; /* je: equal / zero */

loc_0034B741: ;
    eax = eax | 4;

loc_0034B744: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B74C; /* je: equal / zero */

loc_0034B749: ;
    eax = eax | 2;

loc_0034B74C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B754; /* je: equal / zero */

loc_0034B751: ;
    eax = eax | 1;

loc_0034B754: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B75E; /* je: equal / zero */

loc_0034B759: ;
    eax = eax | 0x80000;

loc_0034B75E: ;
    PUSH32(esp, ebp);
    edx = ZX16(LO16(ebx));
    PUSH32(esp, esi);
    ecx = edx;
    esi = 0xC00;
    ecx = ecx & esi;
    PUSH32(esp, edi);
    edi = 0x300;
    ebp = 0x200;
    if ((ecx == 0)) goto loc_0034B79A; /* je: equal / zero */

loc_0034B779: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B795; /* je: equal / zero */

loc_0034B781: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B791; /* je: equal / zero */

loc_0034B789: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B79A; /* jne: not equal / not zero */

loc_0034B78D: ;
    eax = eax | edi;
    goto loc_0034B79A;

loc_0034B791: ;
    eax = eax | ebp;
    goto loc_0034B79A;

loc_0034B795: ;
    eax = eax | 0x100;

loc_0034B79A: ;
    edx = edx & edi;
    if ((edx == 0)) goto loc_0034B7A9; /* je: equal / zero */

loc_0034B79E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B7AE; /* jne: not equal / not zero */

loc_0034B7A2: ;
    eax = eax | 0x10000;
    goto loc_0034B7AE;

loc_0034B7A9: ;
    eax = eax | 0x20000;

loc_0034B7AE: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 0x10 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0034B7BB; /* je: equal / zero */

loc_0034B7B6: ;
    eax = eax | 0x40000;

loc_0034B7BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B7BC
 * Original: 0x0034B7BC - 0x0034B84A (142 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B7BC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B7BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B7C4; /* je: equal / zero */

loc_0034B7C3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034B7C4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B7CC; /* je: equal / zero */

loc_0034B7C9: ;
    eax = eax | 4;

loc_0034B7CC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B7D4; /* je: equal / zero */

loc_0034B7D1: ;
    eax = eax | 8;

loc_0034B7D4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B7DC; /* je: equal / zero */

loc_0034B7D9: ;
    eax = eax | 0x10;

loc_0034B7DC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B7E4; /* je: equal / zero */

loc_0034B7E1: ;
    eax = eax | 0x20;

loc_0034B7E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x80000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B7EF; /* je: equal / zero */

loc_0034B7EC: ;
    eax = eax | 2;

loc_0034B7EF: ;
    ecx = ebx;
    edx = 0x300;
    ecx = ecx & edx;
    PUSH32(esp, esi);
    esi = 0x200;
    if ((ecx == 0)) goto loc_0034B823; /* je: equal / zero */

loc_0034B800: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B81E; /* je: equal / zero */

loc_0034B808: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B817; /* je: equal / zero */

loc_0034B80C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B823; /* jne: not equal / not zero */

loc_0034B810: ;
    eax = eax | 0xC00;
    goto loc_0034B823;

loc_0034B817: ;
    eax = eax | 0x800;
    goto loc_0034B823;

loc_0034B81E: ;
    eax = eax | 0x400;

loc_0034B823: ;
    ecx = ebx;
    ecx = ecx & 0x30000;
    if ((ecx == 0)) goto loc_0034B839; /* je: equal / zero */

loc_0034B82D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034B83B; /* jne: not equal / not zero */

loc_0034B835: ;
    eax = eax | esi;
    goto loc_0034B83B;

loc_0034B839: ;
    eax = eax | edx;

loc_0034B83B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, 0x40000 (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0034B849; /* je: equal / zero */

loc_0034B844: ;
    eax = eax | 0x1000;

loc_0034B849: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034B84A
 * Original: 0x0034B84A - 0x0034B87C (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B84A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0034B84A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    MEM16(ebp + -4) = g_fp_control_word; /* fnstcw word ptr [ebp - 4] */
    ebx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B85Bu); RECOMP_ABI_CALL(0x0034B72Au, sub_0034B72A); /* call 0x0034B72A */

loc_0034B85B: ;
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    eax = ~eax;
    ebx = ebx & eax;
    eax = MEM32(ebp + 8);
    eax = eax & MEM32(ebp + 0xC);
    ebx = ebx | eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B871u); RECOMP_ABI_CALL(0x0034B7BCu, sub_0034B7BC); /* call 0x0034B7BC */

loc_0034B871: ;
    MEM32(ebp + 0xC) = eax;
    g_fp_control_word = MEM16(ebp + 0xC); /* fldcw word ptr [ebp + 0xc] */
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034B87C
 * Original: 0x0034B87C - 0x0034B892 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B87C(void)
{

loc_0034B87C: ;
    eax = MEM32(esp + 8);
    eax = eax & 0xFFF7FFFFu;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0034B88Fu); RECOMP_ABI_CALL(0x0034B84Au, sub_0034B84A); /* call 0x0034B84A */

loc_0034B88F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B892
 * Original: 0x0034B892 - 0x0034B8AD (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B892(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B892: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(esp + 0xC));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0034B8A3u); RECOMP_ABI_CALL(0x0034D5ECu, sub_0034D5EC); /* call 0x0034D5EC */

loc_0034B8A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B8A9; /* je: equal / zero */

loc_0034B8A7: ;
    esi = 0; /* xor self */

loc_0034B8A9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B8AD
 * Original: 0x0034B8AD - 0x0034B8C8 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B8AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B8AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(esp + 0xC));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0034B8BEu); RECOMP_ABI_CALL(0x0034D651u, sub_0034D651); /* call 0x0034D651 */

loc_0034B8BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B8C4; /* je: equal / zero */

loc_0034B8C2: ;
    esi = 0; /* xor self */

loc_0034B8C4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B8C8
 * Original: 0x0034B8C8 - 0x0034B8DF (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B8C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B8C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = 0; /* xor self */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0034B8D5u); RECOMP_ABI_CALL(0x0034D6BAu, sub_0034D6BA); /* call 0x0034D6BA */

loc_0034B8D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B8DB; /* je: equal / zero */

loc_0034B8D9: ;
    esi = 0; /* xor self */

loc_0034B8DB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B8DF
 * Original: 0x0034B8DF - 0x0034B90A (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034B8DF(void)
{

loc_0034B8DF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = 0x6F0F80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = 0x6F10A0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x6F1084) = eax;
    MEM32(0x6F0F78) = eax;
    MEM32(0x6F0F70) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034B90A
 * Original: 0x0034B90A - 0x0034BA19 (271 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034B90A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034B90A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B939; /* je: equal / zero */

loc_0034B915: ;
    edx = 0; /* xor self */
    eax = 0; /* xor self */

loc_0034B919: ;
    _fa = (uint32_t)(MEM32(eax + 0x47ABE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x47ABE0), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034B942; /* je: equal / zero */

loc_0034B921: ;
    eax = eax + 0x3C;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034B919; /* jb: below (unsigned <) */

loc_0034B92C: ;
    _fa = (uint32_t)(MEM32(0x5D9CDC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9CDC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BA14; /* je: equal / zero */

loc_0034B939: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034B93Eu); RECOMP_ABI_CALL(0x0034B8DFu, sub_0034B8DF); /* call 0x0034B8DF */

loc_0034B93E: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0034B942: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = 0x6F0F80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = ecx + 0x47ABFC;

loc_0034B961: ;
    SET_LO8(eax, MEM8(edi));
    ebx = edi;
    goto loc_0034B990;

loc_0034B967: ;
    SET_LO8(edx, MEM8(ebx + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034B994; /* je: equal / zero */

loc_0034B96E: ;
    eax = ZX8(LO8(eax));
    esi = ZX8(LO8(edx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0034B98C; /* ja: above (unsigned >) */

loc_0034B978: ;
    edx = MEM32(ebp + -4);
    SET_LO8(edx, MEM8(edx + 0x47ABD8));

loc_0034B981: ;
    MEM8(eax + 0x6F0F81) = MEM8(eax + 0x6F0F81) | LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0034B981; /* jbe: below or equal (unsigned <=) */

loc_0034B98C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(ebx));

loc_0034B990: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034B967; /* jne: not equal / not zero */

loc_0034B994: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034B961; /* jb: below (unsigned <) */

loc_0034B9A0: ;
    eax = MEM32(ebp + 8);
    MEM32(0x6F1084) = eax;
    eax = eax - 0x3A4;
    MEM32(0x6F0F78) = 1;
    if ((eax == 0)) goto loc_0034B9F3; /* je: equal / zero */

loc_0034B9B9: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0034B9E7; /* je: equal / zero */

loc_0034B9BE: ;
    eax = eax - 0xD;
    if ((eax == 0)) goto loc_0034B9DB; /* je: equal / zero */

loc_0034B9C3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034B9CF; /* je: equal / zero */

loc_0034B9C6: ;
    MEM32(0x6F0F70) = MEM32(0x6F0F70) & 0;
    goto loc_0034B9FD;

loc_0034B9CF: ;
    MEM32(0x6F0F70) = 0x404;
    goto loc_0034B9FD;

loc_0034B9DB: ;
    MEM32(0x6F0F70) = 0x412;
    goto loc_0034B9FD;

loc_0034B9E7: ;
    MEM32(0x6F0F70) = 0x804;
    goto loc_0034B9FD;

loc_0034B9F3: ;
    MEM32(0x6F0F70) = 0x411;

loc_0034B9FD: ;
    PUSH32(esp, 6);
    esi = ecx + 0x47ABE4;
    POP32(esp, ecx);
    edi = 0x6F10A0;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0034BA14: ;
    eax = eax | 0xFFFFFFFFu;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034BA19
 * Original: 0x0034BA19 - 0x0034BB31 (280 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034BA19(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034BA19: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x431848);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BA25u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034BA25: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) | 0xFFFFFFFFu;
    PUSH32(esp, 0xD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BA30u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034BA30: ;
    POP32(esp, ecx);
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(0x5D9CDC) = ebx;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFCu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BA54; /* jne: not equal / not zero */

loc_0034BA44: ;
    MEM32(0x5D9CDC) = 1;
    edi = MEM32(0x5D9BF8);

loc_0034BA54: ;
    MEM32(ebp + 8) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F1084)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x6F1084) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BB1C; /* je: equal / zero */

loc_0034BA63: ;
    esi = MEM32(0x6F0F74);
    MEM32(ebp + -36) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BA74; /* je: equal / zero */

loc_0034BA70: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BA84; /* je: equal / zero */

loc_0034BA74: ;
    PUSH32(esp, 0x220);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BA7Eu); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_0034BA7E: ;
    POP32(esp, ecx);
    esi = eax;
    MEM32(ebp + -36) = esi;

loc_0034BA84: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BB05; /* je: equal / zero */

loc_0034BA88: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BA8Eu); RECOMP_ABI_CALL(0x0034B90Au, sub_0034B90A); /* call 0x0034B90A */

loc_0034BA8E: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BB05; /* jne: not equal / not zero */

loc_0034BA96: ;
    MEM32(esi) = ebx;
    eax = MEM32(0x6F1084);
    MEM32(esi + 4) = eax;
    eax = MEM32(0x6F0F78);
    MEM32(esi + 8) = eax;
    eax = MEM32(0x6F0F70);
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */

loc_0034BAB2: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034BACA; /* jge: greater or equal (signed >=) */

loc_0034BABA: ;
    SET_LO16(ecx, MEM16(eax * 2 + 0x6F10A0));
    MEM16(esi + eax * 2 + 0x10) = LO16(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BAB2;

loc_0034BACA: ;
    eax = 0; /* xor self */

loc_0034BACC: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x101 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034BAE3; /* jge: greater or equal (signed >=) */

loc_0034BAD6: ;
    SET_LO8(ecx, MEM8(eax + 0x6F0F80));
    MEM8(eax + esi + 0x1C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BACC;

loc_0034BAE3: ;
    eax = 0; /* xor self */

loc_0034BAE5: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034BAFF; /* jge: greater or equal (signed >=) */

loc_0034BAEF: ;
    SET_LO8(ecx, MEM8(eax + 0x6F10C0));
    MEM8(eax + esi + 0x11D) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BAE5;

loc_0034BAFF: ;
    MEM32(0x6F0F74) = esi;

loc_0034BB05: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BB1F; /* jne: not equal / not zero */

loc_0034BB0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F0F74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x6F0F74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BB1F; /* je: equal / zero */

loc_0034BB13: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BB19u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0034BB19: ;
    POP32(esp, ecx);
    goto loc_0034BB1F;

loc_0034BB1C: ;
    MEM32(ebp + -32) = ebx;

loc_0034BB1F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BB28u); RECOMP_ABI_CALL(0x0034BB31u, sub_0034BB31); /* call 0x0034BB31 */

loc_0034BB28: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BB30u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034BB30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034BB31
 * Original: 0x0034BB31 - 0x0034BB3A (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034BB31(void)
{

loc_0034BB31: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x0034BB38u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034BB38: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034BB3A
 * Original: 0x0034BB3A - 0x0034BB62 (40 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0034BB3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034BB3A: ;
    _fa = (uint32_t)(MEM32(0x6F12F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6F12F8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BB5F; /* jne: not equal / not zero */

loc_0034BB43: ;
    PUSH32(esp, 0);
    MEM32(0x6F1084) = 0xFFFFFFFDu;
    PUSH32(esp, 0x0034BB54u); RECOMP_ABI_CALL(0x0034BA19u, sub_0034BA19); /* call 0x0034BA19 */

loc_0034BB54: ;
    POP32(esp, ecx);
    MEM32(0x6F12F8) = 1;

loc_0034BB5F: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0034BB62
 * Original: 0x0034BB62 - 0x0034BB8C (42 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034BB62(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034BB62: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BB76; /* je: equal / zero */

loc_0034BB69: ;
    eax = MEM32(0x47A048);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BB89; /* je: equal / zero */

loc_0034BB72: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0034BB74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034BB74: ;
    goto loc_0034BB89;

loc_0034BB76: ;
    eax = MEM32(0x47A04C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BB81; /* je: equal / zero */

loc_0034BB7F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0034BB81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034BB81: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0034BB88u); RECOMP_ABI_CALL(0x003466F1u, sub_003466F1); /* call 0x003466F1 */

loc_0034BB88: ;
    POP32(esp, ecx);

loc_0034BB89: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034BB8C
 * Original: 0x0034BB8C - 0x0034BBC3 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034BB8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034BB8C: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BBAD; /* je: equal / zero */

loc_0034BB94: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BBAD; /* je: equal / zero */

loc_0034BB9B: ;
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034BBB0; /* jne: not equal / not zero */

loc_0034BBA1: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BBAD; /* je: equal / zero */

loc_0034BBA9: ;
    MEM16(eax) = MEM16(eax) & 0;

loc_0034BBAD: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0034BBB0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BBBF; /* je: equal / zero */

loc_0034BBB8: ;
    SET_LO16(eax, ZX8(LO8(eax)));
    MEM16(ecx) = LO16(eax);

loc_0034BBBF: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0034BBC3
 * Original: 0x0034BBC3 - 0x0034C00A (1095 bytes, 388 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034BBC3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034BBC3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    eax = ebp + -84;
    PUSH32(esp, esi);
    MEM32(ebp + -12) = eax;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + 0x10) = edi;

loc_0034BBF8: ;
    SET_LO8(ecx, MEM8(edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BC0E; /* je: equal / zero */

loc_0034BBFF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 9 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BC0E; /* je: equal / zero */

loc_0034BC04: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BC0E; /* je: equal / zero */

loc_0034BC09: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xD (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BC11; /* jne: not equal / not zero */

loc_0034BC0E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BBF8;

loc_0034BC11: ;
    PUSH32(esp, 4);
    POP32(esp, esi);

loc_0034BC14: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0034BE88; /* ja: above (unsigned >) */

loc_0034BC20: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x34C00A); /* switch: 12 entries, 12 targets */
    if (_jt == 0x0034BC27u) goto loc_0034BC27;
    if (_jt == 0x0034BC77u) goto loc_0034BC77;
    if (_jt == 0x0034BCC2u) goto loc_0034BCC2;
    if (_jt == 0x0034BCECu) goto loc_0034BCEC;
    if (_jt == 0x0034BD45u) goto loc_0034BD45;
    if (_jt == 0x0034BDBAu) goto loc_0034BDBA;
    if (_jt == 0x0034BDEAu) goto loc_0034BDEA;
    if (_jt == 0x0034BE13u) goto loc_0034BE13;
    if (_jt == 0x0034BE34u) goto loc_0034BE34;
    if (_jt == 0x0034BE54u) goto loc_0034BE54;
    if (_jt == 0x0034BE88u) goto loc_0034BE88;
    if (_jt == 0x0034BE96u) goto loc_0034BE96;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0034BC27: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034BC38; /* jl: less (signed <) */

loc_0034BC2C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034BC38; /* jg: greater (signed >) */

loc_0034BC31: ;
    PUSH32(esp, 3);
    goto loc_0034BE40;

loc_0034BC38: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x47A7D4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x47A7D4) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BC47; /* jne: not equal / not zero */

loc_0034BC40: ;
    PUSH32(esp, 5);
    goto loc_0034BE7E;

loc_0034BC47: ;
    eax = SX8(LO8(ebx));
    eax = eax - 0x2B;
    if ((eax == 0)) goto loc_0034BC6E; /* je: equal / zero */

loc_0034BC4F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034BC62; /* je: equal / zero */

loc_0034BC53: ;
    eax = eax - 3;
    if ((eax == 0)) goto loc_0034BCE5; /* je: equal / zero */

loc_0034BC5C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0034BF1B;

loc_0034BC62: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    MEM32(ebp + -40) = 0x8000;
    goto loc_0034BC14;

loc_0034BC6E: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    PUSH32(esp, 2);
    POP32(esp, eax);
    goto loc_0034BC14;

loc_0034BC77: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    MEM32(ebp + -16) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0034BC84; /* jl: less (signed <) */

loc_0034BC7F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034BC31; /* jle: less or equal (signed <=) */

loc_0034BC84: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x47A7D4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x47A7D4) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BD3E; /* je: equal / zero */

loc_0034BC90: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BCBA; /* je: equal / zero */

loc_0034BC95: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BCBA; /* je: equal / zero */

loc_0034BC9A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BCE5; /* je: equal / zero */

loc_0034BC9F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x43 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034BC5C; /* jle: less or equal (signed <=) */

loc_0034BCA4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x45 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034BCB3; /* jle: less or equal (signed <=) */

loc_0034BCA9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x63 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034BC5C; /* jle: less or equal (signed <=) */

loc_0034BCAE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x65 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034BC5C; /* jg: greater (signed >) */

loc_0034BCB3: ;
    PUSH32(esp, 6);
    goto loc_0034BE7E;

loc_0034BCBA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0xB);
    goto loc_0034BE7E;

loc_0034BCC2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034BCD0; /* jl: less (signed <) */

loc_0034BCC7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034BC31; /* jle: less or equal (signed <=) */

loc_0034BCD0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x47A7D4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x47A7D4) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BC40; /* je: equal / zero */

loc_0034BCDC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BE4C; /* jne: not equal / not zero */

loc_0034BCE5: ;
    eax = edx;
    goto loc_0034BC14;

loc_0034BCEC: ;
    MEM32(ebp + -16) = edx;

loc_0034BCEF: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), edx (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0034BD08; /* jle: less or equal (signed <=) */

loc_0034BCFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BD01u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034BD01: ;
    POP32(esp, ecx);
    edx = 0; /* xor self */
    POP32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BD14;

loc_0034BD08: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & esi;

loc_0034BD14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BD36; /* je: equal / zero */

loc_0034BD18: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x19 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034BD2E; /* jae: above or equal (unsigned >=) */

loc_0034BD1E: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) - 0x30);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ebx);
    goto loc_0034BD31;

loc_0034BD2E: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034BD31: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BCEF;

loc_0034BD36: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(0x47A7D4)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(0x47A7D4) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BDA3; /* jne: not equal / not zero */

loc_0034BD3E: ;
    eax = esi;
    goto loc_0034BC14;

loc_0034BD45: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -36) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0034BD5E; /* jne: not equal / not zero */

loc_0034BD51: ;
    goto loc_0034BD59;

loc_0034BD53: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034BD59: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BD53; /* je: equal / zero */

loc_0034BD5E: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), edx (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0034BD77; /* jle: less or equal (signed <=) */

loc_0034BD69: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BD70u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034BD70: ;
    POP32(esp, ecx);
    edx = 0; /* xor self */
    POP32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BD83;

loc_0034BD77: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & esi;

loc_0034BD83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BDA3; /* je: equal / zero */

loc_0034BD87: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0x19 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034BD9E; /* jae: above or equal (unsigned >=) */

loc_0034BD8D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -12);
    SET_LO8(ebx, LO8(ebx) - 0x30);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ebx);

loc_0034BD9E: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BD5E;

loc_0034BDA3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BCBA; /* je: equal / zero */

loc_0034BDAC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BCBA; /* je: equal / zero */

loc_0034BDB5: ;
    goto loc_0034BC9F;

loc_0034BDBA: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), edx (32-bit) */
    MEM32(ebp + -36) = edx;
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0034BDD6; /* jle: less or equal (signed <=) */

loc_0034BDC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BDCFu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034BDCF: ;
    POP32(esp, ecx);
    edx = 0; /* xor self */
    POP32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BDE2;

loc_0034BDD6: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & esi;

loc_0034BDE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BE4C; /* je: equal / zero */

loc_0034BDE6: ;
    eax = esi;
    goto loc_0034BE41;

loc_0034BDEA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    ecx = edi + -2;
    MEM32(ebp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0034BDFA; /* jl: less (signed <) */

loc_0034BDF5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034BE3E; /* jle: less or equal (signed <=) */

loc_0034BDFA: ;
    eax = SX8(LO8(ebx));
    eax = eax - 0x2B;
    if ((eax == 0)) goto loc_0034BE7C; /* je: equal / zero */

loc_0034BE02: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034BE70; /* je: equal / zero */

loc_0034BE06: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_0034BF19; /* jne: not equal / not zero */

loc_0034BE0F: ;
    PUSH32(esp, 8);
    goto loc_0034BE7E;

loc_0034BE13: ;
    MEM32(ebp + -32) = edx;
    goto loc_0034BE1B;

loc_0034BE18: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034BE1B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BE18; /* je: equal / zero */

loc_0034BE20: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034BC5C; /* jl: less (signed <) */

loc_0034BE29: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034BC5C; /* jg: greater (signed >) */

loc_0034BE32: ;
    goto loc_0034BE3E;

loc_0034BE34: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x31 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034BE47; /* jl: less (signed <) */

loc_0034BE39: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034BE47; /* jg: greater (signed >) */

loc_0034BE3E: ;
    PUSH32(esp, 9);

loc_0034BE40: ;
    POP32(esp, eax);

loc_0034BE41: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0034BC14;

loc_0034BE47: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BE0F; /* je: equal / zero */

loc_0034BE4C: ;
    edi = MEM32(ebp + 0x10);
    goto loc_0034BF1B;

loc_0034BE54: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BE84; /* je: equal / zero */

loc_0034BE5A: ;
    eax = SX8(LO8(ebx));
    eax = eax - 0x2B;
    ecx = edi + -1;
    MEM32(ebp + 0x10) = ecx;
    if ((eax == 0)) goto loc_0034BE7C; /* je: equal / zero */

loc_0034BE68: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034BF19; /* jne: not equal / not zero */

loc_0034BE70: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) | 0xFFFFFFFFu;
    PUSH32(esp, 7);
    POP32(esp, eax);
    goto loc_0034BC14;

loc_0034BE7C: ;
    PUSH32(esp, 7);

loc_0034BE7E: ;
    POP32(esp, eax);
    goto loc_0034BC14;

loc_0034BE84: ;
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0034BE88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BC14; /* jne: not equal / not zero */

loc_0034BE91: ;
    goto loc_0034BF1B;

loc_0034BE96: ;
    MEM32(ebp + -32) = 1;
    esi = 0; /* xor self */

loc_0034BE9F: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0034BEB7; /* jle: less or equal (signed <=) */

loc_0034BEAB: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BEB3u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034BEB3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0034BEC4;

loc_0034BEB7: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_0034BEC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BEE4; /* je: equal / zero */

loc_0034BEC8: ;
    ecx = SX8(LO8(ebx));
    eax = esi + esi * 4;
    esi = ecx + eax * 2 + -48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1450 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034BEDF; /* jg: greater (signed >) */

loc_0034BEDA: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BE9F;

loc_0034BEDF: ;
    esi = 0x1451;

loc_0034BEE4: ;
    MEM32(ebp + -28) = esi;

loc_0034BEE7: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas, _fbs)) goto loc_0034BEFF; /* jle: less or equal (signed <=) */

loc_0034BEF3: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BEFBu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034BEFB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0034BF0C;

loc_0034BEFF: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_0034BF0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034BC5C; /* je: equal / zero */

loc_0034BF14: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BEE7;

loc_0034BF19: ;
    edi = ecx;

loc_0034BF1B: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0034BFC0; /* je: equal / zero */

loc_0034BF2A: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0034BF47; /* jbe: below or equal (unsigned <=) */

loc_0034BF32: ;
    _fa = (uint32_t)(MEM8(ebp + -61)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -61), 5 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034BF3B; /* jl: less (signed <) */

loc_0034BF38: ;
    MEM8(ebp + -61) = MEM8(ebp + -61) + 1;
    _fa = (uint32_t)(MEM8(ebp + -61)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0034BF3B: ;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -12);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034BF4A;

loc_0034BF47: ;
    eax = MEM32(ebp + -12);

loc_0034BF4A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0034BFE7; /* jbe: below or equal (unsigned <=) */

loc_0034BF54: ;
    goto loc_0034BF5C;

loc_0034BF56: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034BF5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034BF56; /* je: equal / zero */

loc_0034BF62: ;
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebp + -84;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BF72u); RECOMP_ABI_CALL(0x0034C985u, sub_0034C985); /* call 0x0034C985 */

loc_0034BF72: ;
    eax = MEM32(ebp + -28);
    ecx = 0; /* xor self */
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0034BF81; /* jge: greater or equal (signed >=) */

loc_0034BF7F: ;
    eax = (uint32_t)(-(int32_t)eax);

loc_0034BF81: ;
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BF8C; /* jne: not equal / not zero */

loc_0034BF89: ;
    eax = eax + MEM32(ebp + 0x18);

loc_0034BF8C: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034BF94; /* jne: not equal / not zero */

loc_0034BF91: ;
    eax = eax - MEM32(ebp + 0x1C);

loc_0034BF94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1450) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1450 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034BFC9; /* jg: greater (signed >) */

loc_0034BF9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEBB0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFEBB0u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034BFE0; /* jl: less (signed <) */

loc_0034BFA2: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034BFAFu); RECOMP_ABI_CALL(0x0034CEECu, sub_0034CEEC); /* call 0x0034CEEC */

loc_0034BFAF: ;
    edx = MEM32(ebp + -56);
    ebx = MEM32(ebp + -54);
    esi = MEM32(ebp + -50);
    eax = MEM32(ebp + -46);
    esp = esp + 0xC;
    goto loc_0034BFEF;

loc_0034BFC0: ;
    MEM32(ebp + -20) = 4;
    goto loc_0034BFE7;

loc_0034BFC9: ;
    ebx = 0; /* xor self */
    eax = 0x7FFF;
    esi = 0x80000000u;
    edx = 0; /* xor self */
    MEM32(ebp + -20) = 2;
    goto loc_0034BFEF;

loc_0034BFE0: ;
    MEM32(ebp + -20) = 1;

loc_0034BFE7: ;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    ebx = 0; /* xor self */

loc_0034BFEF: ;
    ecx = MEM32(ebp + 8);
    eax = eax | MEM32(ebp + -40);
    POP32(esp, edi);
    MEM32(ecx + 6) = esi;
    POP32(esp, esi);
    MEM32(ecx + 2) = ebx;
    MEM16(ecx + 0xA) = LO16(eax);
    eax = MEM32(ebp + -20);
    MEM16(ecx) = LO16(edx);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034C03A
 * Original: 0x0034C03A - 0x0034C064 (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C03A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C03A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6F11C0) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034C049; /* jb: below (unsigned <) */

loc_0034C046: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0034C049: ;
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    eax = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 4);
    eax = eax & 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C064
 * Original: 0x0034C064 - 0x0034C08F (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C064(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C064: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C06F; /* jne: not equal / not zero */

loc_0034C06C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0034C06F: ;
    SET_LO16(eax, MEM16(esp + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0034C089; /* jbe: below or equal (unsigned <=) */

loc_0034C07A: ;
    PUSH32(esp, 0x0034C07Fu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C07F: ;
    MEM32(eax) = 0x2A;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0034C089: ;
    MEM8(ecx) = LO8(eax);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0034C08F
 * Original: 0x0034C08F - 0x0034C16C (221 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034C08F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0034C08F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    eax = MEM32(ebp + 0x10);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    if ((_fa == 0)) goto loc_0034C0D8; /* je: equal / zero */

loc_0034C0AD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034C0D4; /* je: equal / zero */

loc_0034C0B0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034C0D0; /* je: equal / zero */

loc_0034C0B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034C0CC; /* je: equal / zero */

loc_0034C0B6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034C0D8; /* je: equal / zero */

loc_0034C0B9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034C0C4; /* je: equal / zero */

loc_0034C0BD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034C134; /* jne: not equal / not zero */

loc_0034C0C0: ;
    PUSH32(esp, 0x10);
    goto loc_0034C0DA;

loc_0034C0C4: ;
    MEM32(esi) = 1;
    goto loc_0034C134;

loc_0034C0CC: ;
    PUSH32(esp, 0x12);
    goto loc_0034C0DA;

loc_0034C0D0: ;
    PUSH32(esp, 0x11);
    goto loc_0034C0DA;

loc_0034C0D4: ;
    PUSH32(esp, 4);
    goto loc_0034C0DA;

loc_0034C0D8: ;
    PUSH32(esp, 8);

loc_0034C0DA: ;
    POP32(esp, ebx);
    PUSH32(esp, ecx);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C0E6u); RECOMP_ABI_CALL(0x00346C49u, sub_00346C49); /* call 0x00346C49 */

loc_0034C0E6: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C134; /* jne: not equal / not zero */

loc_0034C0ED: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C106; /* je: equal / zero */

loc_0034C0F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C106; /* je: equal / zero */

loc_0034C0FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C106; /* je: equal / zero */

loc_0034C0FF: ;
    MEM32(esp + 0x50) = MEM32(esp + 0x50) & 0xFFFFFFFEu;
    goto loc_0034C11B;

loc_0034C106: ;
    ecx = MEM32(esp + 0x50);
    fp_push(MEMD(esi + 0x10)); /* fld double */
    ecx = ecx & 0xFFFFFFE3u;
    MEMD(esp + 0x40) = fp_top(); fp_pop(); /* fstp */
    ecx = ecx | 3;
    MEM32(esp + 0x50) = ecx;

loc_0034C11B: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C131u); RECOMP_ABI_CALL(0x003469A5u, sub_003469A5); /* call 0x003469A5 */

loc_0034C131: ;
    esp = esp + 0x18;

loc_0034C134: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(esp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C142u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_0034C142: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 8 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0034C15D; /* je: equal / zero */

loc_0034C149: ;
    _fa = (uint32_t)(MEM32(0x47AD0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47AD0C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C15D; /* jne: not equal / not zero */

loc_0034C152: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C158u); RECOMP_ABI_CALL(0x002EE6A7u, sub_002EE6A7); /* call 0x002EE6A7 */

loc_0034C158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0034C165; /* jne: not equal / not zero */

loc_0034C15D: ;
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C164u); RECOMP_ABI_CALL(0x00346E36u, sub_00346E36); /* call 0x00346E36 */

loc_0034C164: ;
    POP32(esp, ecx);

loc_0034C165: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034C16C
 * Original: 0x0034C16C - 0x0034C1B2 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C16C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C16C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034C19B; /* jae: above or equal (unsigned >=) */

loc_0034C178: ;
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C19B; /* jne: not equal / not zero */

loc_0034C192: ;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0034C19B: ;
    PUSH32(esp, 0x0034C1A0u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C1A0: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0034C1ABu); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034C1AB: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C1B2
 * Original: 0x0034C1B2 - 0x0034C1FB (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C1B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C1B2: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034C1E4; /* jae: above or equal (unsigned >=) */

loc_0034C1BE: ;
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C1E4; /* je: equal / zero */

loc_0034C1D9: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C1E4; /* je: equal / zero */

loc_0034C1DE: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0034C1E4: ;
    PUSH32(esp, 0x0034C1E9u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C1E9: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0034C1F4u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034C1F4: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C1FB
 * Original: 0x0034C1FB - 0x0034C23C (65 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C1FB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C1FB: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034C225; /* jae: above or equal (unsigned >=) */

loc_0034C207: ;
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C225; /* je: equal / zero */

loc_0034C222: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0034C225: ;
    PUSH32(esp, 0x0034C22Au); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C22A: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0034C235u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034C235: ;
    MEM32(eax) = MEM32(eax) & 0;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C23C
 * Original: 0x0034C23C - 0x0034C2D0 (148 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C23C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C23C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x431858);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C248u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C248: ;
    edi = MEM32(ebp + 8);
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = edi;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    esi = ecx + eax * 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C2AA; /* jne: not equal / not zero */

loc_0034C269: ;
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C270u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034C270: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C2A1; /* jne: not equal / not zero */

loc_0034C279: ;
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C287u); RECOMP_ABI_CALL(0x0034B1A4u, sub_0034B1A4); /* call 0x0034B1A4 */

loc_0034C287: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C29E; /* jne: not equal / not zero */

loc_0034C28D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C298u); RECOMP_ABI_CALL(0x0034139Au, sub_0034139A); /* call 0x0034139A */

loc_0034C298: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    goto loc_0034C2CA;

loc_0034C29E: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034C2A1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C2AAu); RECOMP_ABI_CALL(0x0034C2D3u, sub_0034C2D3); /* call 0x0034C2D3 */

loc_0034C2AA: ;
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edi = edi & 0x1F;
    ecx = edi + edi * 4;
    eax = MEM32(eax * 4 + 0x6F11E0);
    eax = eax + ecx * 8 + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0034C2C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034C2C7: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034C2CA: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C2CFu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C2CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C2D0
 * Original: 0x0034C2D0 - 0x0034C2D3 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C2D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C2D0: ;
    edi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_0034C2D3(); return; /* fallthrough 0x0034C2D3 */

}

/**
 * sub_0034C2D3
 * Original: 0x0034C2D3 - 0x0034C2DC (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C2D3(void)
{

loc_0034C2D3: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0034C2DAu); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034C2DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034C2DC
 * Original: 0x0034C2DC - 0x0034C2FE (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C2DC(void)
{

loc_0034C2DC: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    eax = eax & 0x1F;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0034C2FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034C2FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C2FE
 * Original: 0x0034C2FE - 0x0034C3D1 (211 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C2FE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C2FE: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x431868);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C30Au); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C30A: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    PUSH32(esp, 0xB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C315u); RECOMP_ABI_CALL(0x003455D4u, sub_003455D4); /* call 0x003455D4 */

loc_0034C315: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C39F; /* je: equal / zero */

loc_0034C31E: ;
    PUSH32(esp, 0xB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C325u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034C325: ;
    POP32(esp, ecx);
    edi = 0; /* xor self */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -36) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0034C45F(); return; } /* jge: greater or equal (signed >=) */

loc_0034C337: ;
    esi = MEM32(edi * 4 + 0x6F11E0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034C408(); return; } /* je: equal / zero */

loc_0034C346: ;
    MEM32(ebp + -32) = esi;
    eax = MEM32(edi * 4 + 0x6F11E0);
    eax = eax + 0x500;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034C3FC(); return; } /* jae: above or equal (unsigned >=) */

loc_0034C35D: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C3C9; /* jne: not equal / not zero */

loc_0034C363: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C3B2; /* jne: not equal / not zero */

loc_0034C36A: ;
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C371u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034C371: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C3AA; /* jne: not equal / not zero */

loc_0034C37E: ;
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C38Cu); RECOMP_ABI_CALL(0x0034B1A4u, sub_0034B1A4); /* call 0x0034B1A4 */

loc_0034C38C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C3A7; /* jne: not equal / not zero */

loc_0034C392: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C39Du); RECOMP_ABI_CALL(0x0034139Au, sub_0034139A); /* call 0x0034139A */

loc_0034C39D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034C39F: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0034C46B(); return; /* tail jmp 0x0034C46B */

loc_0034C3A7: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034C3AA: ;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C3B2u); RECOMP_ABI_CALL(0x0034C3D7u, sub_0034C3D7); /* call 0x0034C3D7 */

loc_0034C3B2: ;
    ebx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0034C3BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034C3BC: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034C3E0(); return; } /* je: equal / zero */

loc_0034C3C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0034C3C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034C3C9: ;
    esi = esi + 0x28;
    goto loc_0034C346;

}

/**
 * sub_0034C32B
 * Original: 0x0034C32B - 0x0034C3D1 (166 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C32B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C32B: ;
    MEM32(ebp + -36) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0034C45F(); return; } /* jge: greater or equal (signed >=) */

loc_0034C337: ;
    esi = MEM32(edi * 4 + 0x6F11E0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034C408(); return; } /* je: equal / zero */

loc_0034C346: ;
    MEM32(ebp + -32) = esi;
    eax = MEM32(edi * 4 + 0x6F11E0);
    eax = eax + 0x500;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034C3FC(); return; } /* jae: above or equal (unsigned >=) */

loc_0034C35D: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C3C9; /* jne: not equal / not zero */

loc_0034C363: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C3B2; /* jne: not equal / not zero */

loc_0034C36A: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0034C371u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034C371: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C3AA; /* jne: not equal / not zero */

loc_0034C37E: ;
    PUSH32(esp, 0xFA0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034C38Cu); RECOMP_ABI_CALL(0x0034B1A4u, sub_0034B1A4); /* call 0x0034B1A4 */

loc_0034C38C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C3A7; /* jne: not equal / not zero */

loc_0034C392: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034C39Du); RECOMP_ABI_CALL(0x0034139Au, sub_0034139A); /* call 0x0034139A */

loc_0034C39D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0034C46B(); return; /* tail jmp 0x0034C46B */

loc_0034C3A7: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034C3AA: ;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0x0034C3B2u); RECOMP_ABI_CALL(0x0034C3D7u, sub_0034C3D7); /* call 0x0034C3D7 */

loc_0034C3B2: ;
    ebx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0034C3BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034C3BC: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034C3E0(); return; } /* je: equal / zero */

loc_0034C3C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0034C3C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034C3C9: ;
    esi = esi + 0x28;
    goto loc_0034C346;

}

/**
 * sub_0034C3D1
 * Original: 0x0034C3D1 - 0x0034C3D7 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C3D1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C3D1: ;
    edi = MEM32(ebp + -36);
    esi = MEM32(ebp + -32);

    g_seh_ebp = ebp; sub_0034C3D7(); return; /* fallthrough 0x0034C3D7 */

}

/**
 * sub_0034C3D7
 * Original: 0x0034C3D7 - 0x0034C3E0 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C3D7(void)
{

loc_0034C3D7: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0034C3DEu); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034C3DE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034C3E0
 * Original: 0x0034C3E0 - 0x0034C471 (145 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C3E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C3E0: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    eax = esi;
    eax = eax - MEM32(edi * 4 + 0x6F11E0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x28);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = edi;
    ecx = ecx << 5;
    eax = eax + ecx;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C45F; /* jne: not equal / not zero */

loc_0034C402: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0034C32B(); return; /* tail jmp 0x0034C32B */

    esi = 0x500;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034C413u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_0034C413: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C45F; /* je: equal / zero */

loc_0034C41B: ;
    ecx = edi * 4 + 0x6F11E0;
    MEM32(ecx) = eax;
    MEM32(0x6F11C0) = MEM32(0x6F11C0) + 0x20;

loc_0034C42B: ;
    edx = MEM32(ecx);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034C44A; /* jae: above or equal (unsigned >=) */

loc_0034C433: ;
    MEM8(eax + 4) = 0;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM8(eax + 5) = 0xA;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    eax = eax + 0x28;
    MEM32(ebp + -32) = eax;
    goto loc_0034C42B;

loc_0034C44A: ;
    edi = edi << 5;
    MEM32(ebp + -28) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034C456u); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_0034C456: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C45F; /* jne: not equal / not zero */

loc_0034C45B: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0034C45F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x0034C468u); RECOMP_ABI_CALL(0x0034C471u, sub_0034C471); /* call 0x0034C471 */

loc_0034C468: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034C470u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C3FC
 * Original: 0x0034C3FC - 0x0034C471 (117 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C3FC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C3FC: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C45F; /* jne: not equal / not zero */

loc_0034C402: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0034C32B(); return; /* tail jmp 0x0034C32B */

    esi = 0x500;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034C413u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_0034C413: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C45F; /* je: equal / zero */

loc_0034C41B: ;
    ecx = edi * 4 + 0x6F11E0;
    MEM32(ecx) = eax;
    MEM32(0x6F11C0) = MEM32(0x6F11C0) + 0x20;

loc_0034C42B: ;
    edx = MEM32(ecx);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034C44A; /* jae: above or equal (unsigned >=) */

loc_0034C433: ;
    MEM8(eax + 4) = 0;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM8(eax + 5) = 0xA;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    eax = eax + 0x28;
    MEM32(ebp + -32) = eax;
    goto loc_0034C42B;

loc_0034C44A: ;
    edi = edi << 5;
    MEM32(ebp + -28) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034C456u); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_0034C456: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C45F; /* jne: not equal / not zero */

loc_0034C45B: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0034C45F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x0034C468u); RECOMP_ABI_CALL(0x0034C471u, sub_0034C471); /* call 0x0034C471 */

loc_0034C468: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034C470u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C408
 * Original: 0x0034C408 - 0x0034C471 (105 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C408(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C408: ;
    esi = 0x500;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034C413u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_0034C413: ;
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C45F; /* je: equal / zero */

loc_0034C41B: ;
    ecx = edi * 4 + 0x6F11E0;
    MEM32(ecx) = eax;
    MEM32(0x6F11C0) = MEM32(0x6F11C0) + 0x20;

loc_0034C42B: ;
    edx = MEM32(ecx);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034C44A; /* jae: above or equal (unsigned >=) */

loc_0034C433: ;
    MEM8(eax + 4) = 0;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM8(eax + 5) = 0xA;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    eax = eax + 0x28;
    MEM32(ebp + -32) = eax;
    goto loc_0034C42B;

loc_0034C44A: ;
    edi = edi << 5;
    MEM32(ebp + -28) = edi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0034C456u); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_0034C456: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C45F; /* jne: not equal / not zero */

loc_0034C45B: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0034C45F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x0034C468u); RECOMP_ABI_CALL(0x0034C471u, sub_0034C471); /* call 0x0034C471 */

loc_0034C468: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034C470u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C45F
 * Original: 0x0034C45F - 0x0034C471 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C45F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C45F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x0034C468u); RECOMP_ABI_CALL(0x0034C471u, sub_0034C471); /* call 0x0034C471 */

loc_0034C468: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034C470u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C46B
 * Original: 0x0034C46B - 0x0034C471 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C46B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C46B: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034C470u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C470: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C471
 * Original: 0x0034C471 - 0x0034C47A (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C471(void)
{

loc_0034C471: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0034C478u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034C478: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034C47A
 * Original: 0x0034C47A - 0x0034C710 (662 bytes, 224 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034C47A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C47A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    edx = MEM32(ebp + 0x14);
    eax = 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    MEM8(ebp + -1) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0034C4A1; /* jne: not equal / not zero */

loc_0034C490: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C49D; /* jne: not equal / not zero */

loc_0034C495: ;
    _fa = (uint32_t)(MEM32(0x5D9CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9CE4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C4A1; /* je: equal / zero */

loc_0034C49D: ;
    MEM8(ebp + -1) = 0x80;

loc_0034C4A1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    eax = edx;
    POP32(esp, esi);
    eax = eax & esi;
    ebx = 0; /* xor self */
    eax = eax - ebx;
    if ((eax == 0)) goto loc_0034C4C8; /* je: equal / zero */

loc_0034C4B0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034C4BF; /* je: equal / zero */

loc_0034C4B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034C4E3; /* jne: not equal / not zero */

loc_0034C4B6: ;
    MEM32(ebp + -16) = 0xC0000000u;
    goto loc_0034C4CF;

loc_0034C4BF: ;
    MEM32(ebp + -16) = 0x40000000;
    goto loc_0034C4CF;

loc_0034C4C8: ;
    MEM32(ebp + -16) = 0x80000000u;

loc_0034C4CF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C514; /* je: equal / zero */

loc_0034C4D4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C50B; /* je: equal / zero */

loc_0034C4D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C502; /* je: equal / zero */

loc_0034C4DE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C4FD; /* je: equal / zero */

loc_0034C4E3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C4E8u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C4E8: ;
    MEM32(eax) = 0x16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C4F3u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034C4F3: ;
    MEM32(eax) = ebx;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0034C6C1;

loc_0034C4FD: ;
    MEM32(ebp + -8) = esi;
    goto loc_0034C517;

loc_0034C502: ;
    MEM32(ebp + -8) = 2;
    goto loc_0034C517;

loc_0034C50B: ;
    MEM32(ebp + -8) = 1;
    goto loc_0034C517;

loc_0034C514: ;
    MEM32(ebp + -8) = ebx;

loc_0034C517: ;
    eax = edx;
    PUSH32(esp, edi);
    edx = 0x700;
    eax = eax & edx;
    ecx = 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, 4);
    esi = 0x100;
    POP32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_0034C561; /* jg: greater (signed >) */

loc_0034C532: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0034C558; /* je: equal / zero */

loc_0034C534: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C558; /* je: equal / zero */

loc_0034C538: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C553; /* je: equal / zero */

loc_0034C53C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C58D; /* je: equal / zero */

loc_0034C543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C573; /* jne: not equal / not zero */

loc_0034C54A: ;
    MEM32(ebp + -12) = 2;
    goto loc_0034C59D;

loc_0034C553: ;
    MEM32(ebp + -12) = edi;
    goto loc_0034C59D;

loc_0034C558: ;
    MEM32(ebp + -12) = 3;
    goto loc_0034C59D;

loc_0034C561: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x500) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x500 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C596; /* je: equal / zero */

loc_0034C568: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x600) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x600 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C58D; /* je: equal / zero */

loc_0034C56F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C596; /* je: equal / zero */

loc_0034C573: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C578u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C578: ;
    MEM32(eax) = 0x16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C583u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034C583: ;
    MEM32(eax) = ebx;

loc_0034C585: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_0034C6C0;

loc_0034C58D: ;
    MEM32(ebp + -12) = 5;
    goto loc_0034C59D;

loc_0034C596: ;
    MEM32(ebp + -12) = 1;

loc_0034C59D: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    ebx = 0x80;
    if (TEST_Z(_fa, _fb)) goto loc_0034C5BB; /* je: equal / zero */

loc_0034C5A9: ;
    ecx = MEM32(0x5D99F0);
    ecx = ~ecx;
    ecx = ecx & MEM32(ebp + 0x18);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0034C5BB; /* js: sign (negative) */

loc_0034C5B8: ;
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034C5BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C5CC; /* je: equal / zero */

loc_0034C5BF: ;
    MEM8(ebp + -14) = MEM8(ebp + -14) | 1;
    ebx = ebx | 0x4000000;
    MEM32(ebp + -8) = MEM32(ebp + -8) | edi;

loc_0034C5CC: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C5D3; /* je: equal / zero */

loc_0034C5D1: ;
    ebx = ebx | esi;

loc_0034C5D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C5DF; /* je: equal / zero */

loc_0034C5D7: ;
    ebx = ebx | 0x8000000;
    goto loc_0034C5E9;

loc_0034C5DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C5E9; /* je: equal / zero */

loc_0034C5E3: ;
    ebx = ebx | 0x10000000;

loc_0034C5E9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C5EEu); RECOMP_ABI_CALL(0x0034C2FEu, sub_0034C2FE); /* call 0x0034C2FE */

loc_0034C5EE: ;
    edi = eax;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C611; /* jne: not equal / not zero */

loc_0034C5F7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C5FCu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C5FC: ;
    MEM32(eax) = 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C607u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034C607: ;
    MEM32(eax) = MEM32(eax) & 0;

loc_0034C60A: ;
    eax = esi;
    goto loc_0034C6C0;

loc_0034C611: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    MEM32(eax) = 1;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(eax) = edi;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C635u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_0034C635: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C647; /* jne: not equal / not zero */

loc_0034C639: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C63Eu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034C63E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C644u); RECOMP_ABI_CALL(0x003453D6u, sub_003453D6); /* call 0x003453D6 */

loc_0034C644: ;
    POP32(esp, ecx);
    goto loc_0034C60A;

loc_0034C647: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C64Eu); RECOMP_ABI_CALL(0x0034C16Cu, sub_0034C16C); /* call 0x0034C16C */

loc_0034C64E: ;
    MEM8(ebp + -1) = MEM8(ebp + -1) | 1;
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ebx = eax * 4 + 0x6F11E0;
    eax = edi;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    SET_LO8(eax, MEM8(ebp + -1));
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebx);
    esi = esi << 3;
    MEM8(ebp + -1) = LO8(eax);
    MEM8(ebp + -1) = MEM8(ebp + -1) & 0x48;
    MEM8(esi + ecx + 4) = LO8(eax);
    if ((MEM8(ebp + -1) != 0)) goto loc_0034C6A9; /* jne: not equal / not zero */

loc_0034C67D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_0034C6A9; /* jns: not sign (positive) */

loc_0034C681: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C6A9; /* je: equal / zero */

loc_0034C687: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C691u); RECOMP_ABI_CALL(0x0034A62Du, sub_0034A62D); /* call 0x0034A62D */

loc_0034C691: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0034C6C5; /* jne: not equal / not zero */

loc_0034C69C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C6A1u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034C6A1: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x83) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x83 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C704; /* jne: not equal / not zero */

loc_0034C6A9: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C6BE; /* jne: not equal / not zero */

loc_0034C6AF: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C6BE; /* je: equal / zero */

loc_0034C6B5: ;
    eax = MEM32(ebx);
    eax = esi + eax + 4;
    MEM8(eax) = MEM8(eax) | 0x20;

loc_0034C6BE: ;
    eax = edi;

loc_0034C6C0: ;
    POP32(esp, edi);

loc_0034C6C1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0034C6C5: ;
    PUSH32(esp, 1);
    eax = ebp + -2;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM8(ebp + -2) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C6D5u); RECOMP_ABI_CALL(0x0034A175u, sub_0034A175); /* call 0x0034A175 */

loc_0034C6D5: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034C6F2; /* jne: not equal / not zero */

loc_0034C6DC: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -2), 0x1A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C6F2; /* jne: not equal / not zero */

loc_0034C6E2: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C6EBu); RECOMP_ABI_CALL(0x0034CF62u, sub_0034CF62); /* call 0x0034CF62 */

loc_0034C6EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0034C704; /* je: equal / zero */

loc_0034C6F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C6FCu); RECOMP_ABI_CALL(0x0034A62Du, sub_0034A62D); /* call 0x0034A62D */

loc_0034C6FC: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034C6A9; /* jne: not equal / not zero */

loc_0034C704: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C70Au); RECOMP_ABI_CALL(0x00349105u, sub_00349105); /* call 0x00349105 */

loc_0034C70A: ;
    POP32(esp, ecx);
    goto loc_0034C585;

}

/**
 * sub_0034C710
 * Original: 0x0034C710 - 0x0034C755 (69 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C710: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x431880);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C71Cu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C71C: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C73Du); RECOMP_ABI_CALL(0x0034C47Au, sub_0034C47A); /* call 0x0034C47A */

loc_0034C73D: ;
    esp = esp + 0x14;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C74Cu); RECOMP_ABI_CALL(0x0034C755u, sub_0034C755); /* call 0x0034C755 */

loc_0034C74C: ;
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C754u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034C754: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C755
 * Original: 0x0034C755 - 0x0034C765 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C755(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034C755: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C764; /* je: equal / zero */

loc_0034C75B: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x0034C763u); RECOMP_ABI_CALL(0x0034C2DCu, sub_0034C2DC); /* call 0x0034C2DC */

loc_0034C763: ;
    POP32(esp, ecx);

loc_0034C764: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034C765
 * Original: 0x0034C765 - 0x0034C82A (197 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034C765(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C765: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x40 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0034C805; /* jne: not equal / not zero */

loc_0034C77A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C799; /* je: equal / zero */

loc_0034C782: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_0034C79E;

loc_0034C799: ;
    eax = 0x47A8F0;

loc_0034C79E: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C805; /* je: equal / zero */

loc_0034C7A4: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C7B0u); RECOMP_ABI_CALL(0x0034C064u, sub_0034C064); /* call 0x0034C064 */

loc_0034C7B0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0034C7CA; /* jne: not equal / not zero */

loc_0034C7B9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C7BEu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C7BE: ;
    MEM32(eax) = 0x2A;

loc_0034C7C4: ;
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    goto loc_0034C825;

loc_0034C7CA: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0034C7FF; /* jle: less or equal (signed <=) */

loc_0034C7D0: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0034C7E7; /* js: sign (negative) */

loc_0034C7D5: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(ebp + edi + -8));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esi);
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    goto loc_0034C7F5;

loc_0034C7E7: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + edi + -8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C7F3u); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_0034C7F3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034C7F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034C7C4; /* je: equal / zero */

loc_0034C7FA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034C7D0; /* jl: less (signed <) */

loc_0034C7FF: ;
    SET_LO16(eax, MEM16(ebp + 8));
    goto loc_0034C825;

loc_0034C805: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 0xFFFFFFFEu;
    if (((int32_t)MEM32(esi + 4) < 0)) goto loc_0034C818; /* js: sign (negative) */

loc_0034C80B: ;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    MEM16(ecx) = LO16(eax);
    MEM32(esi) = MEM32(esi) + 2;
    goto loc_0034C825;

loc_0034C818: ;
    eax = ZX16(MEM16(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C823u); RECOMP_ABI_CALL(0x0034D085u, sub_0034D085); /* call 0x0034D085 */

loc_0034C823: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034C825: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034C82A
 * Original: 0x0034C82A - 0x0034C8AB (129 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034C82A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C82A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C846u); RECOMP_ABI_CALL(0x0034C1FBu, sub_0034C1FB); /* call 0x0034C1FB */

loc_0034C846: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0034C85B; /* jne: not equal / not zero */

loc_0034C84E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C853u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034C853: ;
    MEM32(eax) = 9;
    goto loc_0034C882;

loc_0034C85B: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C86Bu); RECOMP_ABI_CALL(0x0019E010u, sub_0019E010); /* call 0x0019E010 */

loc_0034C86B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0034C888; /* jne: not equal / not zero */

loc_0034C872: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C877u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034C877: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C888; /* je: equal / zero */

loc_0034C87B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C881u); RECOMP_ABI_CALL(0x003453D6u, sub_003453D6); /* call 0x003453D6 */

loc_0034C881: ;
    POP32(esp, ecx);

loc_0034C882: ;
    eax = edi;
    edx = edi;
    goto loc_0034C8A7;

loc_0034C888: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(eax * 4 + 0x6F11E0);
    esi = esi & 0x1F;
    ecx = esi + esi * 4;
    eax = eax + ecx * 8 + 4;
    MEM8(eax) = MEM8(eax) & 0xFD;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);

loc_0034C8A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034C8AB
 * Original: 0x0034C8AB - 0x0034C8CC (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C8AB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C8AB: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = edx + esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034C8C1; /* jb: below (unsigned <) */

loc_0034C8BD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034C8C4; /* jae: above or equal (unsigned >=) */

loc_0034C8C1: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034C8C4: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034C8CC
 * Original: 0x0034C8CC - 0x0034C92A (94 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C8CC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C8CC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x0034C8E0u); RECOMP_ABI_CALL(0x0034C8ABu, sub_0034C8AB); /* call 0x0034C8AB */

loc_0034C8E0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C8FE; /* je: equal / zero */

loc_0034C8E7: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0034C8F4u); RECOMP_ABI_CALL(0x0034C8ABu, sub_0034C8AB); /* call 0x0034C8AB */

loc_0034C8F4: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C8FE; /* je: equal / zero */

loc_0034C8FB: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034C8FE: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0034C90Cu); RECOMP_ABI_CALL(0x0034C8ABu, sub_0034C8AB); /* call 0x0034C8AB */

loc_0034C90C: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034C916; /* je: equal / zero */

loc_0034C913: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034C916: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x0034C924u); RECOMP_ABI_CALL(0x0034C8ABu, sub_0034C8AB); /* call 0x0034C8AB */

loc_0034C924: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034C92A
 * Original: 0x0034C92A - 0x0034C958 (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C92A(void)
{

loc_0034C92A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = esi;
    esi = esi + esi;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    ecx = ecx >> 0x1F;
    MEM32(eax) = esi;
    esi = edi + edi;
    esi = esi | ecx;
    ecx = MEM32(eax + 8);
    edx = edi;
    edx = edx >> 0x1F;
    ecx = ecx << 1;
    ecx = ecx | edx;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034C958
 * Original: 0x0034C958 - 0x0034C985 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034C958(void)
{

loc_0034C958: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edx;
    ecx = ecx >> 1;
    esi = esi << 0x1F;
    ecx = ecx | esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(eax);
    edi = edi << 0x1F;
    ecx = ecx >> 1;
    ecx = ecx | edi;
    edx = edx >> 1;
    POP32(esp, edi);
    MEM32(eax + 8) = edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034C985
 * Original: 0x0034C985 - 0x0034CA53 (206 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034C985(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034C985: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0x404E;
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0034C9F8; /* jbe: below or equal (unsigned <=) */

loc_0034C9A9: ;
    MEM32(ebp + 0x10) = eax;

loc_0034C9AC: ;
    esi = ebx;
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, ebx);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C9BAu); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034C9BA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C9C0u); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034C9C0: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C9CAu); RECOMP_ABI_CALL(0x0034C8CCu, sub_0034C8CC); /* call 0x0034C8CC */

loc_0034C9CA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C9D0u); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034C9D0: ;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -16) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034C9EBu); RECOMP_ABI_CALL(0x0034C8CCu, sub_0034C8CC); /* call 0x0034C8CC */

loc_0034C9EB: ;
    esp = esp + 0x1C;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034C9AC; /* jne: not equal / not zero */

loc_0034C9F6: ;
    edx = 0; /* xor self */

loc_0034C9F8: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CA2C; /* jne: not equal / not zero */

loc_0034C9FD: ;
    edi = MEM32(ebx + 8);

loc_0034CA00: ;
    ecx = MEM32(ebx + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xFFF0;
    eax = ecx;
    eax = eax >> 0x10;
    edi = eax;
    eax = MEM32(ebx);
    esi = eax;
    esi = esi >> 0x10;
    ecx = ecx << 0x10;
    esi = esi | ecx;
    eax = eax << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0034CA00; /* je: equal / zero */

loc_0034CA29: ;
    MEM32(ebx + 8) = edi;

loc_0034CA2C: ;
    esi = 0x8000;
    goto loc_0034CA41;

loc_0034CA33: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CA39u); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034CA39: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xFFFF;
    POP32(esp, ecx);

loc_0034CA41: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034CA33; /* je: equal / zero */

loc_0034CA46: ;
    SET_LO16(eax, MEM16(ebp + -4));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(ebx + 0xA) = LO16(eax);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034CA53
 * Original: 0x0034CA53 - 0x0034CCCA (631 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034CA53(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034CA53: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    ecx = eax;
    esi = 0x7FFF;
    ecx = ecx & 0x8000;
    eax = eax & esi;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    PUSH32(esp, edi);
    MEM8(ebp + -32) = 0xCC;
    MEM8(ebp + -31) = 0xCC;
    MEM8(ebp + -30) = 0xCC;
    MEM8(ebp + -29) = 0xCC;
    MEM8(ebp + -28) = 0xCC;
    MEM8(ebp + -27) = 0xCC;
    MEM8(ebp + -26) = 0xCC;
    MEM8(ebp + -25) = 0xCC;
    MEM8(ebp + -24) = 0xCC;
    MEM8(ebp + -23) = 0xCC;
    MEM8(ebp + -22) = 0xFB;
    MEM8(ebp + -21) = 0x3F;
    MEM32(ebp + -4) = 1;
    edx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0034CAB5; /* je: equal / zero */

loc_0034CAAF: ;
    MEM8(ebx + 2) = 0x2D;
    goto loc_0034CAB9;

loc_0034CAB5: ;
    MEM8(ebx + 2) = 0x20;

loc_0034CAB9: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    edi = MEM32(ebp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_0034CACE; /* jne: not equal / not zero */

loc_0034CAC1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034CACE; /* jne: not equal / not zero */

loc_0034CAC5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034CBBA; /* je: equal / zero */

loc_0034CACE: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CB44; /* jne: not equal / not zero */

loc_0034CAD3: ;
    eax = 0x80000000u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM16(ebx) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0034CAE7; /* jne: not equal / not zero */

loc_0034CAE1: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034CAF6; /* je: equal / zero */

loc_0034CAE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x40000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034CAF6; /* jne: not equal / not zero */

loc_0034CAEF: ;
    esi = 0x4318A4;
    goto loc_0034CB37;

loc_0034CAF6: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034CB10; /* je: equal / zero */

loc_0034CAFB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC0000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CB10; /* jne: not equal / not zero */

loc_0034CB03: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CB32; /* jne: not equal / not zero */

loc_0034CB09: ;
    esi = 0x43189C;
    goto loc_0034CB1F;

loc_0034CB10: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CB32; /* jne: not equal / not zero */

loc_0034CB14: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CB32; /* jne: not equal / not zero */

loc_0034CB1A: ;
    esi = 0x431894;

loc_0034CB1F: ;
    edi = ebx + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(ebx + 3) = 5;

loc_0034CB29: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_0034CC9C;

loc_0034CB32: ;
    esi = 0x43188C;

loc_0034CB37: ;
    edi = ebx + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    MEM8(ebx + 3) = 6;
    goto loc_0034CB29;

loc_0034CB44: ;
    eax = ZX16(LO16(edx));
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4D10);
    MEM16(ebp + -20) = MEM16(ebp + -20) & 0;
    ecx = edi;
    ecx = ecx >> 0x18;
    esi = esi >> 8;
    ecx = esi + ecx * 2;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x4D);
    esi = ecx + eax + -323162868;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -18) = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    eax = SX16(LO16(esi));
    eax = (uint32_t)(-(int32_t)eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM16(ebp + -10) = LO16(edx);
    MEM32(ebp + -14) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CB8Au); RECOMP_ABI_CALL(0x0034CEECu, sub_0034CEEC); /* call 0x0034CEEC */

loc_0034CB8A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM16(ebp + -10)) & 0xFFFFu; _fb = (uint32_t)(0x3FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -10), 0x3FFF (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034CBA5; /* jb: below (unsigned <) */

loc_0034CB95: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CBA3u); RECOMP_ABI_CALL(0x0034CCCAu, sub_0034CCCA); /* call 0x0034CCCA */

loc_0034CBA3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034CBA5: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    edi = MEM32(ebp + 0x14);
    MEM16(ebx) = LO16(esi);
    if (TEST_Z(_fa, _fb)) goto loc_0034CBC3; /* je: equal / zero */

loc_0034CBB1: ;
    eax = SX16(LO16(esi));
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0034CBC3; /* jg: greater (signed >) */

loc_0034CBBA: ;
    MEM8(ebx + 4) = 0x30;
    goto loc_0034CCB5;

loc_0034CBC3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x15 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034CBCB; /* jle: less or equal (signed <=) */

loc_0034CBC8: ;
    PUSH32(esp, 0x15);
    POP32(esp, edi);

loc_0034CBCB: ;
    esi = ZX16(MEM16(ebp + -10));
    esi = esi - 0x3FFE;
    MEM16(ebp + -10) = MEM16(ebp + -10) & 0;
    MEM32(ebp + 0x10) = 8;

loc_0034CBE1: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CBEAu); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034CBEA: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0034CBE1; /* jne: not equal / not zero */

loc_0034CBF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0034CC0B; /* jge: greater or equal (signed >=) */

loc_0034CBF4: ;
    esi = (uint32_t)(-(int32_t)esi);
    esi = esi & 0xFF;
    if (((int32_t)esi <= 0)) goto loc_0034CC0B; /* jle: less or equal (signed <=) */

loc_0034CBFE: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CC07u); RECOMP_ABI_CALL(0x0034C958u, sub_0034C958); /* call 0x0034C958 */

loc_0034CC07: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0034CBFE; /* jne: not equal / not zero */

loc_0034CC0B: ;
    ecx = edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = ebx + 4;
    MEM32(ebp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0034CC68; /* jle: less or equal (signed <=) */

loc_0034CC18: ;
    MEM32(ebp + -8) = ecx;

loc_0034CC1B: ;
    esi = ebp + -20;
    edi = ebp + -44;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CC2Du); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034CC2D: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CC36u); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034CC36: ;
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CC43u); RECOMP_ABI_CALL(0x0034C8CCu, sub_0034C8CC); /* call 0x0034C8CC */

loc_0034CC43: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CC4Cu); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034CC4C: ;
    SET_LO8(eax, MEM8(ebp + -9));
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, LO8(eax) + 0x30);
    esp = esp + 0x14;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    MEM8(ebp + -9) = 0;
    if ((_fa != 0)) goto loc_0034CC1B; /* jne: not equal / not zero */

loc_0034CC65: ;
    eax = MEM32(ebp + 0x10);

loc_0034CC68: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x35) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x35 (8-bit) */
    ecx = ebx + 4;
    if (CMP_L(_fas, _fbs)) goto loc_0034CCAA; /* jl: less (signed <) */

loc_0034CC74: ;
    goto loc_0034CC7F;

loc_0034CC76: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x39 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CC83; /* jne: not equal / not zero */

loc_0034CC7B: ;
    MEM8(eax) = 0x30;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0034CC7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034CC76; /* jae: above or equal (unsigned >=) */

loc_0034CC83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034CC8B; /* jae: above or equal (unsigned >=) */

loc_0034CC87: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx) = MEM16(ebx) + 1;
    _fa = (uint32_t)(MEM16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0034CC8B: ;
    MEM8(eax) = MEM8(eax) + 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_0034CC8D: ;
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    SET_LO8(eax, LO8(eax) - 3);
    MEM8(ebx + 3) = LO8(eax);
    eax = SX8(LO8(eax));
    MEM8(eax + ebx + 4) = 0;

loc_0034CC9C: ;
    eax = MEM32(ebp + -4);

loc_0034CC9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0034CCA4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x30 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CCAE; /* jne: not equal / not zero */

loc_0034CCA9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0034CCAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034CCA4; /* jae: above or equal (unsigned >=) */

loc_0034CCAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034CC8D; /* jae: above or equal (unsigned >=) */

loc_0034CCB2: ;
    MEM8(ecx) = 0x30;

loc_0034CCB5: ;
    MEM16(ebx) = MEM16(ebx) & 0;
    eax = 0; /* xor self */
    MEM8(ebx + 2) = 0x20;
    MEM8(ebx + 3) = 1;
    MEM8(ebx + 5) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034CC9F;

}

/**
 * sub_0034CCCA
 * Original: 0x0034CCCA - 0x0034CEEC (546 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034CCCA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034CCCA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + 0xA));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    SET_LO16(eax, MEM16(esi + 0xA));
    PUSH32(esp, edi);
    edi = ecx;
    edx = 0x7FFF;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _cf = 0; /* logical op clears CF */
    edi = edi ^ eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x8000;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    edx = ecx + eax;
    MEM32(ebp + 8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_0034CECC; /* jae: above or equal (unsigned >=) */

loc_0034CD14: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0034CECC; /* jae: above or equal (unsigned >=) */

loc_0034CD1F: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xBFFD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xBFFD (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0034CECC; /* ja: above (unsigned >) */

loc_0034CD2A: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x3FBF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x3FBF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0034CD35; /* ja: above (unsigned >) */

loc_0034CD31: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_0034CD6F;

loc_0034CD35: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = 0x7FFFFFFF;
    if (TEST_NZ(_fa, _fb)) goto loc_0034CD57; /* jne: not equal / not zero */

loc_0034CD3F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034CD59; /* jne: not equal / not zero */

loc_0034CD49: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CD59; /* jne: not equal / not zero */

loc_0034CD4E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CD59; /* jne: not equal / not zero */

loc_0034CD52: ;
    goto loc_0034CEC6;

loc_0034CD57: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0034CD59: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CD7C; /* jne: not equal / not zero */

loc_0034CD5E: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 8), edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034CD7C; /* jne: not equal / not zero */

loc_0034CD66: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CD7C; /* jne: not equal / not zero */

loc_0034CD6B: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CD7C; /* jne: not equal / not zero */

loc_0034CD6F: ;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi) = eax;
    goto loc_0034CEE7;

loc_0034CD7C: ;
    MEM32(ebp + -16) = eax;
    eax = ebp + -32;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + 0xC) = 5;

loc_0034CD8C: ;
    eax = MEM32(ebp + -16);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(eax)) >> 32) & 1);
    eax = eax + eax;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0034CDE0; /* jle: less or equal (signed <=) */

loc_0034CD97: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = ebx + 8;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -24) = eax;

loc_0034CDA8: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    ecx = ZX16(MEM16(ecx));
    eax = ZX16(MEM16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFCu;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CDC6u); RECOMP_ABI_CALL(0x0034C8ABu, sub_0034C8AB); /* call 0x0034C8AB */

loc_0034CDC6: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034CDD3; /* je: equal / zero */

loc_0034CDCD: ;
    eax = MEM32(ebp + -4);
    MEM16(eax) = MEM16(eax) + 1;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_0034CDD3: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + -8)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 2;
    _cf = (int)((uint32_t)(MEM32(ebp + -12)) < (uint32_t)(2));
    MEM32(ebp + -12) = MEM32(ebp + -12) - 2;
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034CDA8; /* jne: not equal / not zero */

loc_0034CDE0: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + -4)) + (uint64_t)(2)) >> 32) & 1);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0034CD8C; /* jg: greater (signed >) */

loc_0034CDF0: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xC002)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xC002;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0034CE23; /* jle: less or equal (signed <=) */

loc_0034CDFE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -25), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034CE1C; /* jne: not equal / not zero */

loc_0034CE04: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CE0Du); RECOMP_ABI_CALL(0x0034C92Au, sub_0034C92A); /* call 0x0034C92A */

loc_0034CE0D: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xFFFF)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xFFFF;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_0034CDFE; /* jg: greater (signed >) */

loc_0034CE1C: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0034CE5C; /* jg: greater (signed >) */

loc_0034CE23: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(0xFFFF)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xFFFF;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0034CE5C; /* jge: greater or equal (signed >=) */

loc_0034CE31: ;
    eax = MEM32(ebp + 8);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    ebx = ZX16(LO16(eax));
    _cf = (int)((((uint64_t)(MEM32(ebp + 8)) + (uint64_t)(ebx)) >> 32) & 1);
    MEM32(ebp + 8) = MEM32(ebp + 8) + ebx;

loc_0034CE3C: ;
    _fa = (uint32_t)(MEM8(ebp + -36)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -36), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034CE45; /* je: equal / zero */

loc_0034CE42: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034CE45: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CE4Eu); RECOMP_ABI_CALL(0x0034C958u, sub_0034C958); /* call 0x0034C958 */

loc_0034CE4E: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa != 0)) goto loc_0034CE3C; /* jne: not equal / not zero */

loc_0034CE52: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034CE5C; /* je: equal / zero */

loc_0034CE58: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -36) = MEM8(ebp + -36) | 1;

loc_0034CE5C: ;
    _fa = (uint32_t)(MEM16(ebp + -36)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -36), 0x8000 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0034CE73; /* ja: above (unsigned >) */

loc_0034CE64: ;
    eax = MEM32(ebp + -36);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CEA8; /* jne: not equal / not zero */

loc_0034CE73: ;
    _fa = (uint32_t)(MEM32(ebp + -34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -34), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CEA5; /* jne: not equal / not zero */

loc_0034CE79: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -34) = MEM32(ebp + -34) & 0;
    _fa = (uint32_t)(MEM32(ebp + -30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -30), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CEA0; /* jne: not equal / not zero */

loc_0034CE83: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -30) = MEM32(ebp + -30) & 0;
    _fa = (uint32_t)(MEM16(ebp + -26)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -26), 0xFFFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034CE9A; /* jne: not equal / not zero */

loc_0034CE8F: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + -26) = 0x8000;
    goto loc_0034CEA8;

loc_0034CE9A: ;
    MEM16(ebp + -26) = MEM16(ebp + -26) + 1;
    _fa = (uint32_t)(MEM16(ebp + -26)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034CEA8;

loc_0034CEA0: ;
    MEM32(ebp + -30) = MEM32(ebp + -30) + 1;
    _fa = (uint32_t)(MEM32(ebp + -30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034CEA8;

loc_0034CEA5: ;
    MEM32(ebp + -34) = MEM32(ebp + -34) + 1;
    _fa = (uint32_t)(MEM32(ebp + -34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034CEA8: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FFF (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0034CECC; /* jae: above or equal (unsigned >=) */

loc_0034CEB1: ;
    SET_LO16(ecx, MEM16(ebp + -34));
    MEM16(esi) = LO16(ecx);
    ecx = MEM32(ebp + -32);
    MEM32(esi + 2) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(esi + 6) = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;

loc_0034CEC6: ;
    MEM16(esi + 0xA) = LO16(eax);
    goto loc_0034CEE7;

loc_0034CECC: ;
    _cf = (int)((LO16(edi)) != 0);
    SET_LO16(edi, (uint32_t)(-(int32_t)LO16(edi)));
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x80000000u;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x7FFF8000)) >> 32) & 1);
    edi = edi + 0x7FFF8000;
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & 0;
    MEM32(esi + 8) = edi;

loc_0034CEE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034CEEC
 * Original: 0x0034CEEC - 0x0034CF62 (118 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034CEEC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034CEEC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0x47AD10;
    ecx = 0; /* xor self */
    ebx = ebx - 0x60;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034CF5F; /* je: equal / zero */

loc_0034CF02: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0034CF0F; /* jge: greater or equal (signed >=) */

loc_0034CF04: ;
    MEM32(ebp + 0xC) = (uint32_t)(-(int32_t)MEM32(ebp + 0xC));
    ebx = 0x47AE70;
    ebx = ebx - 0x60;

loc_0034CF0F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CF1A; /* jne: not equal / not zero */

loc_0034CF14: ;
    eax = MEM32(ebp + 8);
    MEM16(eax) = LO16(ecx);

loc_0034CF1A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034CF5F; /* je: equal / zero */

loc_0034CF1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0034CF21: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = (uint32_t)(((int32_t)(int32_t)(MEM32(ebp + 0xC))) >> ((3) & 31u));
    eax = eax & 7;
    ebx = ebx + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034CF58; /* je: equal / zero */

loc_0034CF32: ;
    eax = eax + eax * 2;
    esi = ebx + eax * 4;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0x8000 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034CF4B; /* jb: below (unsigned <) */

loc_0034CF3F: ;
    edi = ebp + -12;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebp + -10) = MEM32(ebp + -10) - 1;
    _fa = (uint32_t)(MEM32(ebp + -10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ebp + -12;

loc_0034CF4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CF54u); RECOMP_ABI_CALL(0x0034CCCAu, sub_0034CCCA); /* call 0x0034CCCA */

loc_0034CF54: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = 0; /* xor self */

loc_0034CF58: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034CF21; /* jne: not equal / not zero */

loc_0034CF5D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0034CF5F: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034CF62
 * Original: 0x0034CF62 - 0x0034D085 (291 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034CF62(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034CF62: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0x1008;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CF6Fu); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_0034CF6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CF7Eu); RECOMP_ABI_CALL(0x0034A62Du, sub_0034A62D); /* call 0x0034A62D */

loc_0034CF7E: ;
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0034D07F; /* je: equal / zero */

loc_0034CF8F: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CF9Au); RECOMP_ABI_CALL(0x0034A62Du, sub_0034A62D); /* call 0x0034A62D */

loc_0034CF9A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034D07F; /* je: equal / zero */

loc_0034CFA5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0034D024; /* jle: less or equal (signed <=) */

loc_0034CFAF: ;
    PUSH32(esp, 0x8000);
    PUSH32(esp, MEM32(ebp + 8));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ecx = 0x400;
    edi = ebp + -4104;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CFCBu); RECOMP_ABI_CALL(0x0034D1ADu, sub_0034D1AD); /* call 0x0034D1AD */

loc_0034CFCB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -8) = eax;
    edi = 0x1000;

loc_0034CFD5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0034CFDD; /* jge: greater or equal (signed >=) */

loc_0034CFDB: ;
    eax = ebx;

loc_0034CFDD: ;
    PUSH32(esp, eax);
    eax = ebp + -4104;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034CFEDu); RECOMP_ABI_CALL(0x0034A3F7u, sub_0034A3F7); /* call 0x0034A3F7 */

loc_0034CFED: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034CFFD; /* je: equal / zero */

loc_0034CFF5: ;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0034CFD5; /* jg: greater (signed >) */

loc_0034CFFB: ;
    goto loc_0034D015;

loc_0034CFFD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D002u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034D002: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034D012; /* jne: not equal / not zero */

loc_0034D007: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D00Cu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034D00C: ;
    MEM32(eax) = 0xD;

loc_0034D012: ;
    _cf = 0; /* logical op clears CF */
    esi = esi | 0xFFFFFFFFu;

loc_0034D015: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D020u); RECOMP_ABI_CALL(0x0034D1ADu, sub_0034D1AD); /* call 0x0034D1AD */

loc_0034D020: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0034D06A;

loc_0034D024: ;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0034D06A; /* jge: greater or equal (signed >=) */

loc_0034D026: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D033u); RECOMP_ABI_CALL(0x0034A62Du, sub_0034A62D); /* call 0x0034A62D */

loc_0034D033: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D03Bu); RECOMP_ABI_CALL(0x0034C1FBu, sub_0034C1FB); /* call 0x0034C1FB */

loc_0034D03B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D044u); RECOMP_ABI_CALL(0x0019DF8Cu, sub_0019DF8C); /* call 0x0019DF8C */

loc_0034D044: ;
    esi = eax;
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034D06A; /* jne: not equal / not zero */

loc_0034D051: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D056u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034D056: ;
    MEM32(eax) = 0xD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D061u); RECOMP_ABI_CALL(0x003453CDu, sub_003453CD); /* call 0x003453CD */

loc_0034D061: ;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D068u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034D068: ;
    MEM32(edi) = eax;

loc_0034D06A: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D077u); RECOMP_ABI_CALL(0x0034A62Du, sub_0034A62D); /* call 0x0034A62D */

loc_0034D077: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    eax = esi;
    POP32(esp, ebx);
    goto loc_0034D081;

loc_0034D07F: ;
    eax = edi;

loc_0034D081: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034D085
 * Original: 0x0034D085 - 0x0034D1AD (296 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D085(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D085: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x82 (8-bit) */
    ecx = MEM32(esi + 0x10);
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0034D19E; /* je: equal / zero */

loc_0034D09F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034D19E; /* jne: not equal / not zero */

loc_0034D0A7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D0C3; /* je: equal / zero */

loc_0034D0AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    MEM32(esi + 4) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0034D19E; /* je: equal / zero */

loc_0034D0B8: ;
    edx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi) = edx;
    MEM32(esi + 0xC) = eax;

loc_0034D0C3: ;
    eax = MEM32(esi + 0xC);
    eax = eax & 0xFFFFFFEFu;
    eax = eax | 2;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(ebp + 0xC) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0034D100; /* jne: not equal / not zero */

loc_0034D0DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47A160 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D0EB; /* je: equal / zero */

loc_0034D0E3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47A180 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034D0F6; /* jne: not equal / not zero */

loc_0034D0EB: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D0F1u); RECOMP_ABI_CALL(0x0034C03Au, sub_0034C03A); /* call 0x0034C03A */

loc_0034D0F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0034D0FD; /* jne: not equal / not zero */

loc_0034D0F6: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D0FCu); RECOMP_ABI_CALL(0x0034A804u, sub_0034A804); /* call 0x0034A804 */

loc_0034D0FC: ;
    POP32(esp, ecx);

loc_0034D0FD: ;
    ecx = MEM32(ebp + -4);

loc_0034D100: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xC), 0x108 (16-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0034D16E; /* je: equal / zero */

loc_0034D109: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    edx = eax + 2;
    MEM32(esi) = edx;
    edx = MEM32(esi + 0x18);
    edi = edi - eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0034D12E; /* jle: less or equal (signed <=) */

loc_0034D121: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D129u); RECOMP_ABI_CALL(0x0034A582u, sub_0034A582); /* call 0x0034A582 */

loc_0034D129: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_0034D160;

loc_0034D12E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D14C; /* je: equal / zero */

loc_0034D133: ;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edx * 4 + 0x6F11E0);
    eax = ecx;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = edx + eax * 8;
    goto loc_0034D151;

loc_0034D14C: ;
    eax = 0x47A8F0;

loc_0034D151: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D163; /* je: equal / zero */

loc_0034D157: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D160u); RECOMP_ABI_CALL(0x0034A69Fu, sub_0034A69F); /* call 0x0034A69F */

loc_0034D160: ;
    esp = esp + 0xC;

loc_0034D163: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(ebp + 8);
    MEM16(eax) = LO16(ebx);
    goto loc_0034D189;

loc_0034D16E: ;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 2);
    POP32(esp, edi);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM16(ebp + 0xC) = LO16(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D183u); RECOMP_ABI_CALL(0x0034A582u, sub_0034A582); /* call 0x0034A582 */

loc_0034D183: ;
    esp = esp + 0xC;
    MEM32(ebp + 0xC) = eax;

loc_0034D189: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0034D195; /* je: equal / zero */

loc_0034D18F: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    goto loc_0034D1A4;

loc_0034D195: ;
    eax = ebx;
    eax = eax & 0xFFFF;
    goto loc_0034D1A9;

loc_0034D19E: ;
    eax = eax | 0x20;
    MEM32(esi + 0xC) = eax;

loc_0034D1A4: ;
    eax = 0xFFFF;

loc_0034D1A9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034D1AD
 * Original: 0x0034D1AD - 0x0034D219 (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D1AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034D1AD: ;
    eax = MEM32(esp + 4);
    ecx = eax;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((5) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    edx = ecx * 4 + 0x6F11E0;
    ecx = eax + eax * 4;
    eax = MEM32(edx);
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    eax = ZX8(MEM8(eax + ecx + 4));
    PUSH32(esp, esi);
    esi = 0x8000;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034D1E9; /* jne: not equal / not zero */

loc_0034D1DE: ;
    edx = MEM32(edx);
    ecx = edx + ecx + 4;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) & 0x7F;
    goto loc_0034D1FC;

loc_0034D1E9: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x4000 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034D209; /* jne: not equal / not zero */

loc_0034D1F3: ;
    edx = MEM32(edx);
    ecx = edx + ecx + 4;
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) | 0x80;

loc_0034D1FC: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFC000u;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034D209: ;
    PUSH32(esp, 0x0034D20Eu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034D20E: ;
    MEM32(eax) = 0x16;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D220
 * Original: 0x0034D220 - 0x0034D260 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D220: ;
    eax = 0x355005;
    PUSH32(esp, 0x0034D22Au); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_0034D22A: ;
    esp = esp - 0x44;
    PUSH32(esp, 0x4318AC);
    ecx = ebp + -40;
    PUSH32(esp, 0x0034D23Au); RECOMP_ABI_CALL(0x002B5840u, sub_002B5840); /* call 0x002B5840 */

loc_0034D23A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    PUSH32(esp, 0x0034D24Au); RECOMP_ABI_CALL(0x002B5780u, sub_002B5780); /* call 0x002B5780 */

loc_0034D24A: ;
    PUSH32(esp, 0x449190);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x40C02C;
    PUSH32(esp, 0x0034D25Fu); RECOMP_ABI_CALL(0x0034491Au, sub_0034491A); /* call 0x0034491A */

loc_0034D25F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034D260
 * Original: 0x0034D260 - 0x0034D2C7 (103 bytes, 32 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D260: ;
    eax = 0x355005;
    PUSH32(esp, 0x0034D26Au); RECOMP_ABI_CALL(0x0034DEC0u, sub_0034DEC0); /* call 0x0034DEC0 */

loc_0034D26A: ;
    esp = esp - 0x44;
    PUSH32(esp, 0x4318C4);
    ecx = ebp + -40;
    PUSH32(esp, 0x0034D27Au); RECOMP_ABI_CALL(0x002B5840u, sub_002B5840); /* call 0x002B5840 */

loc_0034D27A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    PUSH32(esp, 0x0034D28Au); RECOMP_ABI_CALL(0x002B5780u, sub_002B5780); /* call 0x002B5780 */

loc_0034D28A: ;
    PUSH32(esp, 0x449214);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x40C024;
    PUSH32(esp, 0x0034D29Fu); RECOMP_ABI_CALL(0x0034491Au, sub_0034491A); /* call 0x0034491A */

loc_0034D29F: ;
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi);
    goto loc_0034D2BE;

loc_0034D2AA: ;
    ecx = esi + -60;
    esi = MEM32(esi);
    SET_LO8(edx, 0); /* xor self */
    MEM32(ecx + 0x10) = 0xC0000120u;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6D78); PUSH32(esp, 0x0034D2BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D2BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034D2AA; /* jne: not equal / not zero */

loc_0034D2C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0034D2C7
 * Original: 0x0034D2C7 - 0x0034D390 (201 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D2C7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D2C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    eax = ebp + -8;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = eax;
    eax = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(0x3C6C0C));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x3C6C08); PUSH32(esp, 0x0034D2E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D2E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0034D2FA; /* jge: greater or equal (signed >=) */

loc_0034D2ED: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D2F3u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0034D2F3: ;
    eax = 0; /* xor self */
    goto loc_0034D38C;

loc_0034D2FA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x0034D300u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D300: ;
    edx = MEM32(0x3C6D04);
    edx = edx + 0x28;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D352; /* je: equal / zero */

loc_0034D30F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0034D312: ;
    esi = ecx + -60;
    edx = MEM32(esi + 0x60);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 8) (32-bit) */
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0034D342; /* jne: not equal / not zero */

loc_0034D31F: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 5), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034D342; /* jne: not equal / not zero */

loc_0034D325: ;
    ebx = MEM32(esi + 0x40);
    edx = esi + 0x3C;
    edi = MEM32(edx);
    MEM32(ebx) = edi;
    MEM32(edi + 4) = ebx;
    edi = MEM32(ebp + -4);
    ebx = ebp + -8;
    MEM32(edx) = ebx;
    MEM32(esi + 0x40) = edi;
    MEM32(edi) = edx;
    MEM32(ebp + -4) = edx;

loc_0034D342: ;
    edx = MEM32(0x3C6D04);
    edx = edx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034D312; /* jne: not equal / not zero */

loc_0034D34F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0034D352: ;
    SET_LO8(ecx, LO8(eax));
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x0034D35Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D35A: ;
    eax = ebp + -8;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D380; /* je: equal / zero */

loc_0034D362: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x34D2A0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CFC); PUSH32(esp, 0x0034D372u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D372: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebp + -36;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D20); PUSH32(esp, 0x0034D380u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D380: ;
    ecx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6C04); PUSH32(esp, 0x0034D389u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D389: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034D38C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034D390
 * Original: 0x0034D390 - 0x0034D3C2 (50 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = eax;
    ecx = eax + 1;

loc_0034D39E: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034D39E; /* jne: not equal / not zero */

loc_0034D3A5: ;
    eax = eax - ecx;
    MEM16(ebp + -8) = LO16(eax);
    eax = MEM32(ebp + -8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + -6) = LO16(eax);
    ecx = ebp + -8;
    eax = 1;
    recomp_debug_service(eax, ecx); /* int 0x2d */
    /* int3: debug-trap slide byte, stepped over */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034D3C2
 * Original: 0x0034D3C2 - 0x0034D3C8 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D3C2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D3C2: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6BD8)); return; /* indirect tail jmp */

}

/**
 * sub_0034D3C8
 * Original: 0x0034D3C8 - 0x0034D3D9 (17 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D3C8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D3C8: ;
    ecx = MEM32(esp + 4);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034D3D9
 * Original: 0x0034D3D9 - 0x0034D3ED (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D3D9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D3D9: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax) = 0x2BB5C755;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034D3ED
 * Original: 0x0034D3ED - 0x0034D41B (46 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D3ED(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D3ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB8); PUSH32(esp, 0x0034D406u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D406: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0034D40F; /* jl: less (signed <) */

loc_0034D40A: ;
    eax = MEM32(ebp + 8);
    goto loc_0034D417;

loc_0034D40F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D415u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0034D415: ;
    eax = 0; /* xor self */

loc_0034D417: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0034D41B
 * Original: 0x0034D41B - 0x0034D457 (60 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D41B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D41B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x11), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D431; /* je: equal / zero */

loc_0034D424: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D431; /* je: equal / zero */

loc_0034D42A: ;
    PUSH32(esp, 0xC000000Du);
    goto loc_0034D44C;

loc_0034D431: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6CB4); PUSH32(esp, 0x0034D442u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D442: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0034D44B; /* jl: less (signed <) */

loc_0034D446: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034D453;

loc_0034D44B: ;
    PUSH32(esp, eax);

loc_0034D44C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D451u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0034D451: ;
    eax = 0; /* xor self */

loc_0034D453: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0034D457
 * Original: 0x0034D457 - 0x0034D479 (34 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0034D457(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D457: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    { uint32_t _icall_target = MEM32(0x3C6CC4); PUSH32(esp, 0x0034D465u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D465: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0034D46E; /* jl: less (signed <) */

loc_0034D469: ;
    PUSH32(esp, 0x1C);
    POP32(esp, eax);
    goto loc_0034D476;

loc_0034D46E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034D474u); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0034D474: ;
    eax = 0; /* xor self */

loc_0034D476: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0034D479
 * Original: 0x0034D479 - 0x0034D4C8 (79 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D479(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0034D479: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    eax = ebp + -36;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -36) = 0x24;
    { uint32_t _icall_target = MEM32(0x3C6D7C); PUSH32(esp, 0x0034D490u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D490: ;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(ebp + -32);
    ecx = ecx << 0xC;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(ebp + -28);
    ecx = ecx << 0xC;
    MEM32(eax + 0xC) = ecx;
    ecx = 0x7FFE0000;
    MEM32(eax + 0x18) = ecx;
    ecx = ecx - MEM32(ebp + -20);
    MEM32(eax) = 0x20;
    MEM32(eax + 0x1C) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034D4C8
 * Original: 0x0034D4C8 - 0x0034D51C (84 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D4C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D4C8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0x4615C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0034D4D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D4D7: ;
    edi = edi | 0xFFFFFFFFu;
    esi = 0; /* xor self */

loc_0034D4DC: ;
    _fa = (uint32_t)(MEM32(esi * 4 + 0x47AFCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 4 + 0x47AFCC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034D4EE; /* jne: not equal / not zero */

loc_0034D4E6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034D4DC; /* jb: below (unsigned <) */

loc_0034D4EC: ;
    goto loc_0034D50F;

loc_0034D4EE: ;
    edi = esi * 4 + 0x47AFCC;
    ecx = MEM32(edi);
    PUSH32(esp, 0x0034D4FCu); RECOMP_ABI_CALL(0x001A3550u, sub_001A3550); /* call 0x001A3550 */

loc_0034D4FC: ;
    ecx = ZX8(LO8(eax));
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << LO8(ecx);
    esi = esi << 5;
    eax = ~eax;
    MEM32(edi) = MEM32(edi) & eax;
    esi = esi + ecx;
    edi = esi;

loc_0034D50F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0034D516u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D516: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D51C
 * Original: 0x0034D51C - 0x0034D539 (29 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D51C(void)
{

loc_0034D51C: ;
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(0x5BA794);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4 + 0x10);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034D539
 * Original: 0x0034D539 - 0x0034D55D (36 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D539(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D539: ;
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(0x5BA794);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + edx * 4 + 0x10) = ecx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034D55D
 * Original: 0x0034D55D - 0x0034D5EC (143 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D55D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D55D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x4615C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0034D56Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D56B: ;
    edx = MEM32(esp + 0xC);
    edi = 0; /* xor self */
    ecx = edx;
    ecx = ecx & 0x1F;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    edi = edi << LO8(ecx);
    eax = eax >> 5;
    eax = eax * 4 + 0x47AFCC;
    MEM32(eax) = MEM32(eax) | edi;
    eax = MEM32(XBOX_FS_BASE + 0x28);
    edi = MEM32(XBOX_FS_BASE + 4);
    ecx = MEM32(0x5BA794);
    ecx = MEM32(edi + ecx * 4);
    ecx = ecx - MEM32(eax + 0x28);
    edi = ecx + edx * 4 + 0x10;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CF0); PUSH32(esp, 0x0034D5ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D5AD: ;
    SET_LO8(ecx, LO8(eax));
    eax = MEM32(XBOX_FS_BASE + 0x28);
    eax = MEM32(eax + 0x44);
    eax = eax + 8;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D5D7; /* je: equal / zero */

loc_0034D5C1: ;
    PUSH32(esp, ebx);

loc_0034D5C2: ;
    ebx = MEM32(edx + -220);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D5D0; /* je: equal / zero */

loc_0034D5CC: ;
    MEM32(ebx + edi) = MEM32(ebx + edi) & 0;

loc_0034D5D0: ;
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034D5C2; /* jne: not equal / not zero */

loc_0034D5D6: ;
    POP32(esp, ebx);

loc_0034D5D7: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3C6CEC); PUSH32(esp, 0x0034D5DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D5DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0034D5E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D5E4: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034D5EC
 * Original: 0x0034D5EC - 0x0034D651 (101 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D5EC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D5EC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4318D8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D5F8u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034D5F8: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D637; /* je: equal / zero */

loc_0034D5FF: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D64C; /* je: equal / zero */

loc_0034D606: ;
    edx = eax + ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034D64C; /* jb: below (unsigned <) */

loc_0034D60E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    SET_LO8(ecx, MEM8(eax));
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    MEM32(ebp + -28) = eax;
    edx = edx & ecx;
    MEM32(ebp + -32) = edx;

loc_0034D623: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D633; /* je: equal / zero */

loc_0034D627: ;
    eax = eax + 0x1000;
    MEM32(ebp + -28) = eax;
    SET_LO8(ecx, MEM8(eax));
    goto loc_0034D623;

loc_0034D633: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_0034D637: ;
    eax = 0; /* xor self */

loc_0034D639: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D63Eu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034D63E: ;
    esp += 12; return; /* ret 8 */

loc_0034D64C: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034D639;

}

/**
 * sub_0034D641
 * Original: 0x0034D641 - 0x0034D651 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D641(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D641: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0034D645
 * Original: 0x0034D645 - 0x0034D651 (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D645(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D645: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0034D639(); return; /* tail jmp 0x0034D639 */

}

/**
 * sub_0034D651
 * Original: 0x0034D651 - 0x0034D6BA (105 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D651(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D651: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4318E8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D65Du); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034D65D: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D6A0; /* je: equal / zero */

loc_0034D664: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D6B5; /* je: equal / zero */

loc_0034D66B: ;
    edx = eax + ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034D6B5; /* jb: below (unsigned <) */

loc_0034D673: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax) = LO8(ecx);
    ecx = 0xFFFFF000u;
    eax = eax & ecx;
    MEM32(ebp + -28) = eax;
    edx = edx & ecx;
    MEM32(ebp + -32) = edx;

loc_0034D68A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D69C; /* je: equal / zero */

loc_0034D68E: ;
    eax = eax + 0x1000;
    MEM32(ebp + -28) = eax;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax) = LO8(ecx);
    goto loc_0034D68A;

loc_0034D69C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_0034D6A0: ;
    eax = 0; /* xor self */

loc_0034D6A2: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D6A7u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034D6A7: ;
    esp += 12; return; /* ret 8 */

loc_0034D6B5: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034D6A2;

}

/**
 * sub_0034D6AA
 * Original: 0x0034D6AA - 0x0034D6BA (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D6AA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D6AA: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0034D6AE
 * Original: 0x0034D6AE - 0x0034D6BA (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D6AE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034D6AE: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_0034D6A2(); return; /* tail jmp 0x0034D6A2 */

}

/**
 * sub_0034D6BA
 * Original: 0x0034D6BA - 0x0034D6C8 (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D6BA(void)
{

loc_0034D6BA: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x0034D6C5u); RECOMP_ABI_CALL(0x0034D5ECu, sub_0034D5EC); /* call 0x0034D5EC */

loc_0034D6C5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034D6C8
 * Original: 0x0034D6C8 - 0x0034D6E9 (33 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D6C8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D6C8: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 4);
    POP32(esp, edx);
    PUSH32(esp, esi);

loc_0034D6D4: ;
    SET_LO16(esi, ZX8(MEM8(ecx)));
    MEM16(eax) = LO16(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034D6D4; /* jne: not equal / not zero */

loc_0034D6E1: ;
    MEM16(eax) = MEM16(eax) & 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034D6E9
 * Original: 0x0034D6E9 - 0x0034D721 (56 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D6E9(void)
{

loc_0034D6E9: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ecx;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(esp + 8);
    SET_LO16(edx, ZX8(MEM8(eax)));
    MEM16(ecx + 2) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    MEM16(ecx + 6) = LO16(edx);
    SET_LO16(edx, ZX8(MEM8(eax + 2)));
    MEM16(ecx + 4) = LO16(edx);
    SET_LO16(eax, ZX8(MEM8(eax + 3)));
    MEM16(ecx + 8) = LO16(eax);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034D721
 * Original: 0x0034D721 - 0x0034D7CB (170 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D721(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D721: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x104;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    eax = ebp + -260;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D746u); RECOMP_ABI_CALL(0x001A2DE0u, sub_001A2DE0); /* call 0x001A2DE0 */

loc_0034D746: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034D7C7; /* jne: not equal / not zero */

loc_0034D74A: ;
    eax = MEM32(ebp + -256);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = ebp + -252;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D766u); RECOMP_ABI_CALL(0x0034D6C8u, sub_0034D6C8); /* call 0x0034D6C8 */

loc_0034D766: ;
    eax = esi + 0x58;
    PUSH32(esp, eax);
    eax = ebp + -248;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D776u); RECOMP_ABI_CALL(0x0034D6C8u, sub_0034D6C8); /* call 0x0034D6C8 */

loc_0034D776: ;
    eax = esi + 0x44;
    PUSH32(esp, eax);
    eax = ebp + -236;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D786u); RECOMP_ABI_CALL(0x0034D6E9u, sub_0034D6E9); /* call 0x0034D6E9 */

loc_0034D786: ;
    eax = esi + 0x98;
    PUSH32(esp, eax);
    eax = ebp + -232;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D799u); RECOMP_ABI_CALL(0x0034D6E9u, sub_0034D6E9); /* call 0x0034D6E9 */

loc_0034D799: ;
    eax = MEM32(ebp + -220);
    MEM32(esi + 0x54) = eax;
    eax = MEM32(ebp + -216);
    MEM32(esi + 0xA8) = eax;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0034D7C5; /* je: equal / zero */

loc_0034D7B6: ;
    ecx = MEM32(ebp + -172);
    ecx = ecx >> 1;
    ecx = ~ecx;
    ecx = ecx & 1;
    MEM32(eax) = ecx;

loc_0034D7C5: ;
    eax = 0; /* xor self */

loc_0034D7C7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034D7CB
 * Original: 0x0034D7CB - 0x0034D7D3 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034D7CB(void)
{

loc_0034D7CB: ;
    eax = MEM32(0x3C6D8C);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0034D7D3
 * Original: 0x0034D7D3 - 0x0034D83E (107 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D7D3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D7D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + -4) = eax;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    { uint32_t _icall_target = MEM32(0x3C6D88); PUSH32(esp, 0x0034D7F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D7F5: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(ebp + -24));
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -22));
    MEM16(eax + 2) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -10));
    MEM16(eax + 4) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -18));
    MEM16(eax + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -16));
    MEM16(eax + 0xA) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -14));
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + -12));
    MEM16(eax + 0xE) = LO16(ecx);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034D83E
 * Original: 0x0034D83E - 0x0034D8B3 (117 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D83E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D83E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax));
    MEM16(ebp + -24) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 2));
    MEM16(ebp + -22) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 6));
    MEM16(ebp + -20) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(ebp + -18) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0xA));
    MEM16(ebp + -16) = LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0xC));
    SET_LO16(eax, MEM16(eax + 0xE));
    MEM16(ebp + -12) = LO16(eax);
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    MEM16(ebp + -14) = LO16(ecx);
    { uint32_t _icall_target = MEM32(0x3C6D90); PUSH32(esp, 0x0034D88Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D88C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034D89E; /* jne: not equal / not zero */

loc_0034D890: ;
    PUSH32(esp, 0xC000000Du);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D89Au); RECOMP_ABI_CALL(0x001A1D5Fu, sub_001A1D5F); /* call 0x001A1D5F */

loc_0034D89A: ;
    eax = 0; /* xor self */
    goto loc_0034D8AF;

loc_0034D89E: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034D8AF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034D8B3
 * Original: 0x0034D8B3 - 0x0034DABD (522 bytes, 175 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034D8B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034D8B3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D8C9u); RECOMP_ABI_CALL(0x0034D7D3u, sub_0034D7D3); /* call 0x0034D7D3 */

loc_0034D8C9: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034D903; /* je: equal / zero */

loc_0034D8D2: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034D8DCu); RECOMP_ABI_CALL(0x0034D83Eu, sub_0034D83E); /* call 0x0034D83E */

loc_0034D8DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D9A8; /* je: equal / zero */

loc_0034D8E4: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034D8FC; /* jg: greater (signed >) */

loc_0034D8EC: ;
    if (CMP_L(_fas, _fbs)) goto loc_0034D9A8; /* jl: less (signed <) */

loc_0034D8F2: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034D9A8; /* jb: below (unsigned <) */

loc_0034D8FC: ;
    SET_LO8(eax, 1);
    goto loc_0034D9AA;

loc_0034D903: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 6));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 5 (16-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0034D9A8; /* jg: greater (signed >) */

loc_0034D916: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D9A8; /* je: equal / zero */

loc_0034D91F: ;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(esi + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    SET_LO16(eax, MEM16(esi + 2));
    MEM8(ebp + 0xB) = 0;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -16) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0034D957; /* jne: not equal / not zero */

loc_0034D93B: ;
    ecx = ZX16(MEM16(ebp + -54));
    edx = SX16(LO16(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    ecx = MEM32(ebp + -56);
    if (CMP_GE(_fas, _fbs)) goto loc_0034D94C; /* jge: greater or equal (signed >=) */

loc_0034D949: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034D95A;

loc_0034D94C: ;
    MEM32(ebp + 0x14) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0034D95D; /* jg: greater (signed >) */

loc_0034D951: ;
    MEM8(ebp + 0xB) = 1;
    goto loc_0034D95D;

loc_0034D957: ;
    ecx = MEM32(ebp + -56);

loc_0034D95A: ;
    MEM32(ebp + 0x14) = ecx;

loc_0034D95D: ;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    ebx = MEM32(0x3C6D90);
    MEM16(ebp + -26) = MEM16(ebp + -26) & 0;
    MEM16(ebp + -38) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(ebp + -34) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(ebp + -32) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xC));
    MEM16(ebp + -30) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(ebp + -28) = LO16(eax);
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM16(ebp + -40) = LO16(ecx);
    MEM16(ebp + -36) = 1;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0034D9A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D9A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034D9B4; /* jne: not equal / not zero */

loc_0034D9A8: ;
    SET_LO8(eax, 0); /* xor self */

loc_0034D9AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_0034D9B1: ;
    edi = MEM32(ebp + -12);

loc_0034D9B4: ;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D88); PUSH32(esp, 0x0034D9C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D9C2: ;
    eax = MEM32(ebp + -62);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034D9D1; /* jle: less or equal (signed <=) */

loc_0034D9CA: ;
    edi = edi - eax;
    edi = edi + 7;
    goto loc_0034D9D5;

loc_0034D9D1: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0034D9D9; /* jge: greater or equal (signed >=) */

loc_0034D9D3: ;
    edi = edi - eax;

loc_0034D9D5: ;
    MEM16(ebp + -36) = MEM16(ebp + -36) + LO16(edi);

loc_0034D9D9: ;
    edi = MEM32(ebp + -36);
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -8), LO16(eax) (16-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0034DA19; /* jle: less or equal (signed <=) */

loc_0034D9E8: ;
    MEM16(ebp + -36) = MEM16(ebp + -36) + 7;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0034D9F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034D9F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034DA19; /* je: equal / zero */

loc_0034D9FB: ;
    eax = ebp + -76;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6D88); PUSH32(esp, 0x0034DA09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034DA09: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + -4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + -8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + -8) (16-bit) */
    edi = MEM32(ebp + -72);
    if (CMP_L(_fas, _fbs)) goto loc_0034D9E8; /* jl: less (signed <) */

loc_0034DA19: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM16(ebp + -36) = LO16(edi);
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0034DA27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034DA27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034D9A8; /* je: equal / zero */

loc_0034DA2F: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    edx = MEM32(ebp + -20);
    edi = MEM32(ebp + -24);
    if (CMP_EQ(_fa, _fb)) goto loc_0034DAB0; /* je: equal / zero */

loc_0034DA3B: ;
    eax = ZX16(MEM16(ebp + -50));
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -36);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034DA57; /* jl: less (signed <) */

loc_0034DA47: ;
    if (CMP_NE(_fa, _fb)) goto loc_0034DAB0; /* jne: not equal / not zero */

loc_0034DA49: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034DAB0; /* jg: greater (signed >) */

loc_0034DA51: ;
    if (CMP_L(_fas, _fbs)) goto loc_0034DA57; /* jl: less (signed <) */

loc_0034DA53: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034DAB0; /* jae: above or equal (unsigned >=) */

loc_0034DA57: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + 0x14));
    MEM16(ebp + -26) = MEM16(ebp + -26) & 0;
    MEM16(ebp + -40) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + -16));
    MEM16(ebp + -38) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(ebp + -34) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xA));
    MEM16(ebp + -32) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xC));
    MEM16(ebp + -30) = LO16(eax);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(ebp + -28) = LO16(eax);
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    MEM8(ebp + 0xB) = 0;
    MEM16(ebp + -36) = 1;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x0034DAA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034DAA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034D9B1; /* jne: not equal / not zero */

loc_0034DAAB: ;
    goto loc_0034D9A8;

loc_0034DAB0: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = edi;
    MEM32(eax + 4) = edx;
    goto loc_0034D8FC;

}

/**
 * sub_0034DABD
 * Original: 0x0034DABD - 0x0034DC19 (348 bytes, 141 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034DABD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034DABD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DAD4u); RECOMP_ABI_CALL(0x0034D721u, sub_0034D721); /* call 0x0034D721 */

loc_0034DAD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034DAE6; /* je: equal / zero */

loc_0034DAD8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DADEu); RECOMP_ABI_CALL(0x001A1D31u, sub_001A1D31); /* call 0x001A1D31 */

loc_0034DADE: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    goto loc_0034DC13;

loc_0034DAE6: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0034DB14; /* jne: not equal / not zero */

loc_0034DAEC: ;
    MEM32(esi + 0x54) = ebx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = esi + 0x44;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(esi + 0xA8) = ebx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = esi + 0x98;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    edi = esi + 0x58;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0034DB14: ;
    eax = ebp + -8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6BD8); PUSH32(esp, 0x0034DB1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034DB1E: ;
    _fa = (uint32_t)(MEM16(esi + 0x46)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x46), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034DC10; /* je: equal / zero */

loc_0034DB28: ;
    _fa = (uint32_t)(MEM16(esi + 0x9A)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x9A), LO16(ebx) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034DC10; /* je: equal / zero */

loc_0034DB35: ;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = esi + 0x44;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DB48u); RECOMP_ABI_CALL(0x0034D8B3u, sub_0034D8B3); /* call 0x0034D8B3 */

loc_0034DB48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034DC10; /* je: equal / zero */

loc_0034DB50: ;
    PUSH32(esp, 1);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x98;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DB66u); RECOMP_ABI_CALL(0x0034D8B3u, sub_0034D8B3); /* call 0x0034D8B3 */

loc_0034DB66: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034DC10; /* je: equal / zero */

loc_0034DB6E: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x989680;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DB82u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0034DB82: ;
    MEM32(ebp + -16) = eax;
    eax = MEM32(esi + 0x54);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DB98u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0034DB98: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    eax = eax + MEM32(ebp + -16);
    ebx = edx;
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(MEM32(ebp + -12)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -32))) >> 32) & 1);
    eax = eax + MEM32(ebp + -32);
    PUSH32(esp, 0);
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(MEM32(ebp + -28)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    MEM32(ebp + -24) = eax;
    eax = MEM32(esi + 0xA8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DBBDu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0034DBBD: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -16))) >> 32) & 1);
    eax = eax + MEM32(ebp + -16);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + -12)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebp + -40))) >> 32) & 1);
    eax = eax + MEM32(ebp + -40);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ebp + -36)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0034DBF3; /* jg: greater (signed >) */

loc_0034DBCD: ;
    if (CMP_L(_fas, _fbs)) goto loc_0034DBD4; /* jl: less (signed <) */

loc_0034DBCF: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0034DBF3; /* jae: above or equal (unsigned >=) */

loc_0034DBD4: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0034DBEE; /* jl: less (signed <) */

loc_0034DBD9: ;
    ecx = MEM32(ebp + -8);
    if (CMP_G(_fas, _fbs)) goto loc_0034DBE3; /* jg: greater (signed >) */

loc_0034DBDE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0034DBEE; /* jb: below (unsigned <) */

loc_0034DBE3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0034DBEE; /* jg: greater (signed >) */

loc_0034DBE8: ;
    if (CMP_L(_fas, _fbs)) goto loc_0034DC0D; /* jl: less (signed <) */

loc_0034DBEA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0034DC0D; /* jb: below (unsigned <) */

loc_0034DBEE: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0034DC10;

loc_0034DBF3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0034DC0D; /* jl: less (signed <) */

loc_0034DBF8: ;
    ecx = MEM32(ebp + -8);
    if (CMP_G(_fas, _fbs)) goto loc_0034DC01; /* jg: greater (signed >) */

loc_0034DBFD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0034DC0D; /* jb: below (unsigned <) */

loc_0034DC01: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0034DC0D; /* jg: greater (signed >) */

loc_0034DC06: ;
    if (CMP_L(_fas, _fbs)) goto loc_0034DBEE; /* jl: less (signed <) */

loc_0034DC08: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + -24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0034DBEE; /* jb: below (unsigned <) */

loc_0034DC0D: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);

loc_0034DC10: ;
    eax = ebx;
    POP32(esp, edi);

loc_0034DC13: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034DC19
 * Original: 0x0034DC19 - 0x0034DC6F (86 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034DC19(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034DC19: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xAC;
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034DC2Du); RECOMP_ABI_CALL(0x0034DABDu, sub_0034DABD); /* call 0x0034DABD */

loc_0034DC2D: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_0034DC4B; /* je: equal / zero */

loc_0034DC32: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034DC46; /* je: equal / zero */

loc_0034DC35: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034DC3C; /* je: equal / zero */

loc_0034DC38: ;
    eax = 0; /* xor self */
    goto loc_0034DC4E;

loc_0034DC3C: ;
    ecx = MEM32(ebp + 0x70);

loc_0034DC3F: ;
    eax = MEM32(ebp + -56);
    eax = eax + ecx;
    goto loc_0034DC4E;

loc_0034DC46: ;
    ecx = MEM32(ebp + 0x1C);
    goto loc_0034DC3F;

loc_0034DC4B: ;
    eax = MEM32(ebp + -56);

loc_0034DC4E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x989680);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034DC60u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0034DC60: ;
    ecx = MEM32(ebp + 0x7C);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    ebp = ebp + 0x74;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0034DC6F
 * Original: 0x0034DC6F - 0x0034DC9A (43 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034DC6F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0034DC6F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DC7Du); RECOMP_ABI_CALL(0x0034DC19u, sub_0034DC19); /* call 0x0034DC19 */

loc_0034DC7D: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -8)));
    eax = eax - MEM32(ebp + -8);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 0xC);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(ebp + -4)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    MEM32(edx) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(edx + 4) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0034DC9A
 * Original: 0x0034DC9A - 0x0034DCA0 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DC9A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DC9A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6D38)); return; /* indirect tail jmp */

}

/**
 * sub_0034DCA0
 * Original: 0x0034DCA0 - 0x0034DCA6 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DCA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DCA0: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x3C6D70)); return; /* indirect tail jmp */

}

/**
 * sub_0034DCA6
 * Original: 0x0034DCA6 - 0x0034DEA2 (508 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DCA6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DCA6: ;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x431B38);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DCB2u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034DCB2: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F11C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x6F11C0) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034DEAC(); return; } /* jae: above or equal (unsigned >=) */

loc_0034DCC5: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ebx = eax * 4 + 0x6F11E0;
    eax = ecx;
    eax = eax & 0x1F;
    edi = eax + eax * 4;
    edi = edi << 3;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(eax + edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + edi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0034DEAC(); return; } /* je: equal / zero */

loc_0034DCE9: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DCEFu); RECOMP_ABI_CALL(0x0034C23Cu, sub_0034C23C); /* call 0x0034C23C */

loc_0034DCEF: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(eax + edi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + edi + 4), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034DD1D; /* jne: not equal / not zero */

loc_0034DCFD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DD02u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034DD02: ;
    MEM32(eax) = 9;

loc_0034DD08: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;

loc_0034DD0C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DD15u); RECOMP_ABI_CALL(0x0034DEA2u, sub_0034DEA2); /* call 0x0034DEA2 */

loc_0034DD15: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0034DEBA(); return; /* tail jmp 0x0034DEBA */

loc_0034DD1D: ;
    esi = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    MEM16(esi + 6) = LO16(eax);
    MEM16(esi + 0xC) = LO16(eax);
    MEM16(esi + 0xA) = LO16(eax);
    MEM16(esi + 4) = LO16(eax);
    MEM16(esi + 8) = 1;
    eax = ebp + -104;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, MEM32(eax + edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DD46u); RECOMP_ABI_CALL(0x0019E1D2u, sub_0019E1D2); /* call 0x0019E1D2 */

loc_0034DD46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034DD58; /* jne: not equal / not zero */

loc_0034DD4A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DD4Fu); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0034DD4F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DD55u); RECOMP_ABI_CALL(0x003453D6u, sub_003453D6); /* call 0x003453D6 */

loc_0034DD55: ;
    POP32(esp, ecx);
    goto loc_0034DD08;

loc_0034DD58: ;
    SET_LO16(eax, MEM16(esi + 6));
    _fa = (uint32_t)(MEM8(ebp + -104)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -104), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034DD68; /* je: equal / zero */

loc_0034DD62: ;
    SET_LO16(eax, LO16(eax) | 0x124);
    goto loc_0034DD6C;

loc_0034DD68: ;
    SET_LO16(eax, LO16(eax) | 0x1B6);

loc_0034DD6C: ;
    MEM16(esi + 6) = LO16(eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DD7Du); RECOMP_ABI_CALL(0x0034DC6Fu, sub_0034DC6F); /* call 0x0034DC6F */

loc_0034DD7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034DD08; /* je: equal / zero */

loc_0034DD81: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DD8Eu); RECOMP_ABI_CALL(0x0034D7D3u, sub_0034D7D3); /* call 0x0034D7D3 */

loc_0034DD8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034DD08; /* je: equal / zero */

loc_0034DD96: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX16(MEM16(ebp + -40));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -42));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -44));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -46));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -50));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -52));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DDBBu); RECOMP_ABI_CALL(0x0034DEDFu, sub_0034DEDF); /* call 0x0034DEDF */

loc_0034DDBB: ;
    esp = esp + 0x1C;
    MEM32(esi + 0x1C) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -92)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -92), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034DDCD; /* jne: not equal / not zero */

loc_0034DDC8: ;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -88), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034DE1F; /* je: equal / zero */

loc_0034DDCD: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DDDAu); RECOMP_ABI_CALL(0x0034DC6Fu, sub_0034DC6F); /* call 0x0034DC6F */

loc_0034DDDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034DD08; /* je: equal / zero */

loc_0034DDE2: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DDEFu); RECOMP_ABI_CALL(0x0034D7D3u, sub_0034D7D3); /* call 0x0034D7D3 */

loc_0034DDEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034DD08; /* je: equal / zero */

loc_0034DDF7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX16(MEM16(ebp + -40));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -42));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -44));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -46));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -50));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -52));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DE1Cu); RECOMP_ABI_CALL(0x0034DEDFu, sub_0034DEDF); /* call 0x0034DEDF */

loc_0034DE1C: ;
    esp = esp + 0x1C;

loc_0034DE1F: ;
    MEM32(esi + 0x18) = eax;
    _fa = (uint32_t)(MEM32(ebp + -100)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -100), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034DE31; /* jne: not equal / not zero */

loc_0034DE27: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034DE31; /* jne: not equal / not zero */

loc_0034DE2C: ;
    eax = MEM32(esi + 0x1C);
    goto loc_0034DE83;

loc_0034DE31: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -100;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DE3Eu); RECOMP_ABI_CALL(0x0034DC6Fu, sub_0034DC6F); /* call 0x0034DC6F */

loc_0034DE3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034DD08; /* je: equal / zero */

loc_0034DE46: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DE53u); RECOMP_ABI_CALL(0x0034D7D3u, sub_0034D7D3); /* call 0x0034D7D3 */

loc_0034DE53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034DD08; /* je: equal / zero */

loc_0034DE5B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX16(MEM16(ebp + -40));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -42));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -44));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -46));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -50));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -52));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DE80u); RECOMP_ABI_CALL(0x0034DEDFu, sub_0034DEDF); /* call 0x0034DEDF */

loc_0034DE80: ;
    esp = esp + 0x1C;

loc_0034DE83: ;
    MEM32(esi + 0x20) = eax;
    eax = MEM32(ebp + -68);
    MEM32(esi + 0x14) = eax;
    SET_LO16(eax, MEM16(esi + 6));
    SET_LO16(eax, LO16(eax) | 0x8000);
    MEM16(esi + 6) = LO16(eax);
    MEM32(esi) = edi;
    MEM32(esi + 0x10) = edi;
    goto loc_0034DD0C;

}

/**
 * sub_0034DEA2
 * Original: 0x0034DEA2 - 0x0034DEAC (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DEA2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DEA2: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0034DEAAu); RECOMP_ABI_CALL(0x0034C2DCu, sub_0034C2DC); /* call 0x0034C2DC */

loc_0034DEAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034DEAC
 * Original: 0x0034DEAC - 0x0034DEC0 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DEAC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DEAC: ;
    PUSH32(esp, 0x0034DEB1u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_0034DEB1: ;
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034DEBFu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034DEBF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034DEBA
 * Original: 0x0034DEBA - 0x0034DEC0 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DEBA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DEBA: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034DEBFu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034DEBF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034DEC0
 * Original: 0x0034DEC0 - 0x0034DEDF (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DEC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DEC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esp + 0xC) = ebp;
    ebp = esp + 0xC;
    PUSH32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0034DEDF
 * Original: 0x0034DEDF - 0x0034DFED (270 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034DEDF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034DEDF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    esi = esi - 0x76C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x46 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034DFE7; /* jl: less (signed <) */

loc_0034DEF8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034DFE7; /* jg: greater (signed >) */

loc_0034DF04: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ecx * 4 + 0x47A948);
    edi = edi + MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034DF2B; /* jne: not equal / not zero */

loc_0034DF1F: ;
    eax = esi;
    PUSH32(esp, 0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034DF3D; /* jne: not equal / not zero */

loc_0034DF2B: ;
    eax = esi + 0x76C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034DF43; /* jne: not equal / not zero */

loc_0034DF3D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0034DF43; /* jle: less or equal (signed <=) */

loc_0034DF42: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034DF43: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DF48u); RECOMP_ABI_CALL(0x0034B10Au, sub_0034B10A); /* call 0x0034B10A */

loc_0034DF48: ;
    eax = esi + 0x12B;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ecx = esi + -1;
    PUSH32(esp, 0x64);
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -8) = edi;
    ebx = eax;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 4);
    POP32(esp, ecx);
    ebx = ebx - eax;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(ebp + 0x18);
    MEM32(ebp + -32) = edx;
    ecx = eax;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16D);
    ecx = ecx + edi;
    ecx = ecx + ebx;
    eax = eax + ecx;
    esi = MEM32(ebp + 0xC);
    ecx = eax + eax * 2;
    eax = MEM32(ebp + 0x14);
    ebx = eax + ecx * 8;
    ecx = MEM32(ebp + 0x1C);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3C);
    ebx = ebx + edx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3C);
    ebx = ebx + MEM32(0x47AAF8);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 1 (32-bit) */
    ebx = ebx + ecx + 0x7C558180;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -36) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0034DFDB; /* je: equal / zero */

loc_0034DFBE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034DFE1; /* jne: not equal / not zero */

loc_0034DFC4: ;
    _fa = (uint32_t)(MEM32(0x47AAFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47AAFC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034DFE1; /* je: equal / zero */

loc_0034DFCD: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034DFD6u); RECOMP_ABI_CALL(0x0034B156u, sub_0034B156); /* call 0x0034B156 */

loc_0034DFD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0034DFE1; /* je: equal / zero */

loc_0034DFDB: ;
    ebx = ebx + MEM32(0x47AB00);

loc_0034DFE1: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    goto loc_0034DFEA;

loc_0034DFE7: ;
    eax = eax | 0xFFFFFFFFu;

loc_0034DFEA: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034DFF0
 * Original: 0x0034DFF0 - 0x0034E009 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034DFF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034DFF0: ;
    eax = MEM32(ebp + -24);
    eax = eax & 1;
    if ((eax == 0)) goto loc_0034E008; /* je: equal / zero */

loc_0034DFFC: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0xFFFFFFFEu;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_0034E008: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E009
 * Original: 0x0034E009 - 0x0034E060 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E009(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E009: ;
    eax = MEM32(ebp + -24);
    eax = eax & 2;
    if ((eax == 0)) goto loc_0034E021; /* je: equal / zero */

loc_0034E015: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0xFFFFFFFDu;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_0034E021: ;
    esp += 4; return; /* ret */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x43FDE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E022
 * Original: 0x0034E022 - 0x0034E060 (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E022(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E022: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x43FDE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E02A
 * Original: 0x0034E02A - 0x0034E060 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E02A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E02A: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x43FDE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E032
 * Original: 0x0034E032 - 0x0034E060 (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E032(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E032: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x43FDE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E03A
 * Original: 0x0034E03A - 0x0034E060 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E03A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E03A: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x43FDE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E042
 * Original: 0x0034E042 - 0x0034E060 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E042(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E042: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x43FDE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E04A
 * Original: 0x0034E04A - 0x0034E060 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E04A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E04A: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x43FDE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E060
 * Original: 0x0034E060 - 0x0034E068 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E060: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00011A10(); return; /* tail jmp 0x00011A10 */

}

/**
 * sub_0034E080
 * Original: 0x0034E080 - 0x0034E088 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E080: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00016170(); return; /* tail jmp 0x00016170 */

}

/**
 * sub_0034E0A0
 * Original: 0x0034E0A0 - 0x0034E0AE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E0A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E0A0: ;
    ecx = MEM32(ebp + -112);
    ecx = ecx + 0x3B10;
    g_seh_ebp = ebp; sub_00016640(); return; /* tail jmp 0x00016640 */

}

/**
 * sub_0034E0AE
 * Original: 0x0034E0AE - 0x0034E0E0 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E0AE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E0AE: ;
    ecx = MEM32(ebp + -112);
    ecx = ecx + 0xA088;
    g_seh_ebp = ebp; sub_00016910(); return; /* tail jmp 0x00016910 */

    ecx = MEM32(ebp + -112);
    ecx = ecx + 0x35440;
    g_seh_ebp = ebp; sub_000169F0(); return; /* tail jmp 0x000169F0 */

    eax = 0x43FFCC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E0BC
 * Original: 0x0034E0BC - 0x0034E0E0 (36 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E0BC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E0BC: ;
    ecx = MEM32(ebp + -112);
    ecx = ecx + 0x35440;
    g_seh_ebp = ebp; sub_000169F0(); return; /* tail jmp 0x000169F0 */

    eax = 0x43FFCC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E0E0
 * Original: 0x0034E0E0 - 0x0034E0F1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E0E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E0E0: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E0EDu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E0ED: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E100
 * Original: 0x0034E100 - 0x0034E10B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E100: ;
    ecx = ebp + -580;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E120
 * Original: 0x0034E120 - 0x0034E128 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E120: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E140
 * Original: 0x0034E140 - 0x0034E151 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E140: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E14Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E14D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E160
 * Original: 0x0034E160 - 0x0034E171 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E160: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E16Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E16D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E180
 * Original: 0x0034E180 - 0x0034E18B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E180: ;
    ecx = ebp + -1236;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

}

/**
 * sub_0034E18B
 * Original: 0x0034E18B - 0x0034E1B0 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E18B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E18B: ;
    ecx = ebp + -1252;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1252;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4400D8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E196
 * Original: 0x0034E196 - 0x0034E1B0 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E196(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E196: ;
    ecx = ebp + -1252;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4400D8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E1B0
 * Original: 0x0034E1B0 - 0x0034E1BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E1B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E1B0: ;
    ecx = ebp + -280;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E1BB
 * Original: 0x0034E1BB - 0x0034E200 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E1BB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E1BB: ;
    ecx = ebp + -276;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440138;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00066C70(); return; /* tail jmp 0x00066C70 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x78;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x7C;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    eax = 0x440198;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E1D0
 * Original: 0x0034E1D0 - 0x0034E200 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E1D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E1D0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00066C70(); return; /* tail jmp 0x00066C70 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x78;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x7C;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    eax = 0x440198;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E1D8
 * Original: 0x0034E1D8 - 0x0034E200 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E1D8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E1D8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x78;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x7C;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    eax = 0x440198;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E1E3
 * Original: 0x0034E1E3 - 0x0034E200 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E1E3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E1E3: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x7C;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    eax = 0x440198;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E200
 * Original: 0x0034E200 - 0x0034E20B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E200: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_000290C0(); return; /* tail jmp 0x000290C0 */

}

/**
 * sub_0034E220
 * Original: 0x0034E220 - 0x0034E231 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E220: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E22Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E22D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E240
 * Original: 0x0034E240 - 0x0034E248 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E240: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00029100(); return; /* tail jmp 0x00029100 */

}
