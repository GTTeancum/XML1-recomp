/**
 * X-Men Legends - Recompiled code chunk 83
 * Functions: 250 (0x003428D2 - 0x003489E3)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003428D2
 * Original: 0x003428D2 - 0x00342903 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003428D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003428D2: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_003428EC; /* jle: less or equal (signed <=) */

loc_003428E0: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003428E8u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_003428E8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003428F8;

loc_003428EC: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + esi * 2));
    eax = eax & 2;

loc_003428F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = esi + -32;
    if (TEST_NZ(_fa, _fb)) goto loc_00342901; /* jne: not equal / not zero */

loc_003428FF: ;
    eax = esi;

loc_00342901: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00342903
 * Original: 0x00342903 - 0x00342934 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342903(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342903: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_0034291D; /* jle: less or equal (signed <=) */

loc_00342911: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00342919u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00342919: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00342929;

loc_0034291D: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + esi * 2));
    eax = eax & 1;

loc_00342929: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = esi + 0x20;
    if (TEST_NZ(_fa, _fb)) goto loc_00342932; /* jne: not equal / not zero */

loc_00342930: ;
    eax = esi;

loc_00342932: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00342934
 * Original: 0x00342934 - 0x00342980 (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342934(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342934: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342977; /* je: equal / zero */

loc_00342943: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00342949u); RECOMP_ABI_CALL(0x003442E7u, sub_003442E7); /* call 0x003442E7 */

loc_00342949: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00342951u); RECOMP_ABI_CALL(0x00349221u, sub_00349221); /* call 0x00349221 */

loc_00342951: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x00342959u); RECOMP_ABI_CALL(0x00349186u, sub_00349186); /* call 0x00349186 */

loc_00342959: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00342965; /* jge: greater or equal (signed >=) */

loc_00342960: ;
    edi = edi | 0xFFFFFFFFu;
    goto loc_00342977;

loc_00342965: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342977; /* je: equal / zero */

loc_0034296C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00342972u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00342972: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    POP32(esp, ecx);

loc_00342977: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00342980
 * Original: 0x00342980 - 0x003429C6 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342980(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342980: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4308E0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034298Cu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034298C: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003429A6; /* je: equal / zero */

loc_00342999: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;

loc_0034299D: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003429A5u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003429A5: ;
    esp += 4; return; /* ret */

loc_003429A6: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003429ACu); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_003429AC: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003429B7u); RECOMP_ABI_CALL(0x00342934u, sub_00342934); /* call 0x00342934 */

loc_003429B7: ;
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003429C4u); RECOMP_ABI_CALL(0x003429C9u, sub_003429C9); /* call 0x003429C9 */

loc_003429C4: ;
    goto loc_0034299D;

}

/**
 * sub_003429C6
 * Original: 0x003429C6 - 0x003429C9 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003429C6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003429C6: ;
    esi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_003429C9(); return; /* fallthrough 0x003429C9 */

}

/**
 * sub_003429C9
 * Original: 0x003429C9 - 0x003429D1 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003429C9(void)
{

loc_003429C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003429CFu); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_003429CF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003429D1
 * Original: 0x003429D1 - 0x00342A23 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003429D1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003429D1: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4308F0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003429DDu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003429DD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003429E2u); RECOMP_ABI_CALL(0x003493B4u, sub_003493B4); /* call 0x003493B4 */

loc_003429E2: ;
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003429F8; /* jne: not equal / not zero */

loc_003429E9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003429EEu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_003429EE: ;
    MEM32(eax) = 0x18;
    eax = 0; /* xor self */
    goto loc_00342A1D;

loc_003429F8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342A0Bu); RECOMP_ABI_CALL(0x0034924Cu, sub_0034924C); /* call 0x0034924C */

loc_00342A0B: ;
    esp = esp + 0x10;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342A1Au); RECOMP_ABI_CALL(0x00342A23u, sub_00342A23); /* call 0x00342A23 */

loc_00342A1A: ;
    eax = MEM32(ebp + -32);

loc_00342A1D: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342A22u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00342A22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00342A23
 * Original: 0x00342A23 - 0x00342A2D (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342A23(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342A23: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x00342A2Bu); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00342A2B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00342A2D
 * Original: 0x00342A2D - 0x00342A40 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342A2D(void)
{

loc_00342A2D: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x00342A3Cu); RECOMP_ABI_CALL(0x003429D1u, sub_003429D1); /* call 0x003429D1 */

loc_00342A3C: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00342A40
 * Original: 0x00342A40 - 0x00342A97 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00342A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342A40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -28) = 0x7FFFFFFF;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342A6Eu); RECOMP_ABI_CALL(0x00347ED0u, sub_00347ED0); /* call 0x00347ED0 */

loc_00342A6E: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00342A91; /* je: equal / zero */

loc_00342A77: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00342A84; /* js: sign (negative) */

loc_00342A7C: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_00342A91;

loc_00342A84: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342A8Fu); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_00342A8F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00342A91: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00342DE0
 * Original: 0x00342DE0 - 0x00342E14 (52 bytes, 19 insns)
 * Category: crt
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342DE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00342DE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    ecx = ecx | eax;
    ecx = MEM32(esp + 0xC);
    if ((ecx != 0)) goto loc_00342DF9; /* jne: not equal / not zero */

loc_00342DF0: ;
    eax = MEM32(esp + 4);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esp += 20; return; /* ret 16 */

loc_00342DF9: ;
    PUSH32(esp, ebx);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = eax;
    eax = MEM32(esp + 8);
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = ebx + eax;
    eax = MEM32(esp + 8);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ebx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00342E20
 * Original: 0x00342E20 - 0x00342ECA (170 bytes, 70 insns)
 * Category: crt
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00342E20: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00342E41; /* jge: greater or equal (signed >=) */

loc_00342E2D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x10);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;

loc_00342E41: ;
    eax = MEM32(esp + 0x1C);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00342E5D; /* jge: greater or equal (signed >=) */

loc_00342E49: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x18);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;

loc_00342E5D: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if ((eax != 0)) goto loc_00342E79; /* jne: not equal / not zero */

loc_00342E61: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0x10);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ebx;
    goto loc_00342EBA;

loc_00342E79: ;
    ebx = eax;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_00342E87: ;
    if (1) _cf = (int)(((ebx) >> ((1) - 1)) & 1);
    ebx = ebx >> 1;
    { uint32_t carry_out = ecx & 1u; ecx = (ecx >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr ecx, 1 */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    { uint32_t carry_out = eax & 1u; eax = (eax >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr eax, 1 */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ebx;
    if ((ebx != 0)) goto loc_00342E87; /* jne: not equal / not zero */

loc_00342E93: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x1C);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x18);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    if (_cf) goto loc_00342EB5; /* jb: below (unsigned <) */

loc_00342EA7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00342EB5; /* ja: above (unsigned >) */

loc_00342EAD: ;
    if (CMP_B(_fa, _fb)) goto loc_00342EB6; /* jb: below (unsigned <) */

loc_00342EAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00342EB6; /* jbe: below or equal (unsigned <=) */

loc_00342EB5: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00342EB6: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = esi;

loc_00342EBA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00342EC4; /* jne: not equal / not zero */

loc_00342EBD: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_00342EC4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00342ED0
 * Original: 0x00342ED0 - 0x00342EF1 (33 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00342ED0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00342EEB; /* jae: above or equal (unsigned >=) */

loc_00342ED5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00342EE0; /* jae: above or equal (unsigned >=) */

loc_00342EDA: ;
    eax = (eax >> LO8(ecx)) | (edx << (32 - LO8(ecx))); /* shrd */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    esp += 4; return; /* ret */

loc_00342EE0: ;
    eax = edx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    esp += 4; return; /* ret */

loc_00342EEB: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00342EF1
 * Original: 0x00342EF1 - 0x00342F47 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342EF1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342EF1: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x430900);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342EFDu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00342EFD: ;
    esi = 0x47A160;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342F0Au); RECOMP_ABI_CALL(0x0034394Eu, sub_0034394E); /* call 0x0034394E */

loc_00342F0A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342F16u); RECOMP_ABI_CALL(0x003494D6u, sub_003494D6); /* call 0x003494D6 */

loc_00342F16: ;
    MEM32(ebp + -28) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342F26u); RECOMP_ABI_CALL(0x00347ED0u, sub_00347ED0); /* call 0x00347ED0 */

loc_00342F26: ;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342F32u); RECOMP_ABI_CALL(0x0034955Eu, sub_0034955E); /* call 0x0034955E */

loc_00342F32: ;
    esp = esp + 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342F3Eu); RECOMP_ABI_CALL(0x00342F4Cu, sub_00342F4C); /* call 0x00342F4C */

loc_00342F3E: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00342F46u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00342F46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00342F47
 * Original: 0x00342F47 - 0x00342F4C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342F47(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342F47: ;
    esi = 0x47A160;

    g_seh_ebp = ebp; sub_00342F4C(); return; /* fallthrough 0x00342F4C */

}

/**
 * sub_00342F4C
 * Original: 0x00342F4C - 0x00342F57 (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342F4C(void)
{

loc_00342F4C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00342F54u); RECOMP_ABI_CALL(0x003439A0u, sub_003439A0); /* call 0x003439A0 */

loc_00342F54: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00342F60
 * Original: 0x00342F60 - 0x00342FCD (109 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342F60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342F60: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00342FCA; /* jbe: below or equal (unsigned <=) */

loc_00342F70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_00342F72: ;
    esi = ecx + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ebx = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00342F99; /* ja: above (unsigned >) */

loc_00342F7B: ;
    goto loc_00342F80;

    /* nop */

loc_00342F80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x24); PUSH32(esp, 0x00342F86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00342F86: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00342F8F; /* jle: less or equal (signed <=) */

loc_00342F8D: ;
    ebx = esi;

loc_00342F8F: ;
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00342F80; /* jbe: below or equal (unsigned <=) */

loc_00342F95: ;
    ecx = MEM32(esp + 0x14);

loc_00342F99: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00342FC2; /* je: equal / zero */

loc_00342F9F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00342FC2; /* je: equal / zero */

loc_00342FA3: ;
    ecx = ebx;
    ecx = ecx - edi;
    esi = ebp;
    /* nop */

loc_00342FB0: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00342FB0; /* jne: not equal / not zero */

loc_00342FBE: ;
    ecx = MEM32(esp + 0x14);

loc_00342FC2: ;
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00342F72; /* ja: above (unsigned >) */

loc_00342FC8: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00342FCA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00342FD0
 * Original: 0x00342FD0 - 0x00343253 (643 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00342FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00342FD0: ;
    eax = MEM32(esp + 8);
    esp = esp - 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034324C; /* jb: below (unsigned <) */

loc_00342FE3: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034324B; /* je: equal / zero */

loc_00342FF3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10C);
    PUSH32(esp, esi);
    esi = eax + -1;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebp);
    esi = esi + ebx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, edi);

loc_00343015: ;
    eax = esi;
    eax = eax - ebx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0034305F; /* ja: above (unsigned >) */

loc_00343023: ;
    eax = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0x00343034u); RECOMP_ABI_CALL(0x00342F60u, sub_00342F60); /* call 0x00342F60 */

loc_00343034: ;
    esp = esp + 0xC;

loc_00343037: ;
    eax = MEM32(esp + 0x18);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    if ((_fas < 0)) goto loc_00343248; /* js: sign (negative) */

loc_00343046: ;
    edx = MEM32(esp + eax * 4 + 0x20);
    eax = MEM32(esp + eax * 4 + 0x98);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    ebx = edx;
    esi = eax;
    goto loc_00343015;

loc_0034305F: ;
    eax = eax >> 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    eax = eax + ebx;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x00343071u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00343071: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0034309A; /* jle: less or equal (signed <=) */

loc_00343078: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0034309A; /* je: equal / zero */

loc_0034307E: ;
    ecx = ebx;
    ecx = ecx - edi;
    esi = ebp;

loc_00343084: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00343084; /* jne: not equal / not zero */

loc_00343092: ;
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_0034309A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x003430A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003430A3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003430CC; /* jle: less or equal (signed <=) */

loc_003430AA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003430CC; /* je: equal / zero */

loc_003430B0: ;
    ecx = ebx;
    ecx = ecx - esi;
    esi = ebp;

loc_003430B6: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003430B6; /* jne: not equal / not zero */

loc_003430C4: ;
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_003430CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x003430D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003430D5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003430FA; /* jle: less or equal (signed <=) */

loc_003430DC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003430FA; /* je: equal / zero */

loc_003430E2: ;
    ecx = edi;
    ecx = ecx - esi;
    esi = ebp;

loc_003430E8: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003430E8; /* jne: not equal / not zero */

loc_003430F6: ;
    ebx = MEM32(esp + 0x10);

loc_003430FA: ;
    esi = MEM32(esp + 0x14);
    edi = edi;

loc_00343100: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00343120; /* jbe: below or equal (unsigned <=) */

loc_00343104: ;
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343120; /* jae: above or equal (unsigned >=) */

loc_0034310A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x00343113u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00343113: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00343104; /* jle: less or equal (signed <=) */

loc_0034311A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00343140; /* ja: above (unsigned >) */

loc_0034311E: ;
    edi = edi;

loc_00343120: ;
    eax = MEM32(esp + 0x14);
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00343140; /* ja: above (unsigned >) */

loc_0034312A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x00343133u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00343133: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00343120; /* jle: less or equal (signed <=) */

loc_0034313A: ;
    /* nop */

loc_00343140: ;
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00343156; /* jbe: below or equal (unsigned <=) */

loc_00343146: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x0034314Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034314F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00343140; /* jg: greater (signed >) */

loc_00343156: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0034319C; /* ja: above (unsigned >) */

loc_0034315A: ;
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0034318D; /* je: equal / zero */

loc_0034315E: ;
    ecx = MEM32(esp + 0x11C);
    ebp = ebx;
    ebp = ebp - esi;
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_00343170: ;
    SET_LO8(ecx, MEM8(eax + ebp));
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + ebp) = LO8(edx);
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_00343170; /* jne: not equal / not zero */

loc_00343186: ;
    ebp = MEM32(esp + 0x11C);

loc_0034318D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343100; /* jne: not equal / not zero */

loc_00343195: ;
    edi = ebx;
    goto loc_00343100;

loc_0034319C: ;
    esi = esi + ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003431C0; /* jae: above or equal (unsigned >=) */

loc_003431A2: ;
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003431C0; /* jbe: below or equal (unsigned <=) */

loc_003431A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x003431B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003431B1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003431A2; /* je: equal / zero */

loc_003431B8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003431DA; /* jb: below (unsigned <) */

loc_003431BC: ;
    /* nop */

loc_003431C0: ;
    eax = MEM32(esp + 0x10);
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003431DE; /* jbe: below or equal (unsigned <=) */

loc_003431CA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x128); PUSH32(esp, 0x003431D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003431D3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003431C0; /* je: equal / zero */

loc_003431DA: ;
    eax = MEM32(esp + 0x10);

loc_003431DE: ;
    edx = MEM32(esp + 0x14);
    ecx = edx;
    edi = esi;
    ecx = ecx - ebx;
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034321B; /* jl: less (signed <) */

loc_003431EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343206; /* jae: above or equal (unsigned >=) */

loc_003431F2: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + ecx * 4 + 0x20) = eax;
    MEM32(esp + ecx * 4 + 0x98) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;

loc_00343206: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343037; /* jae: above or equal (unsigned >=) */

loc_0034320E: ;
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = ebx;
    goto loc_00343015;

loc_0034321B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343233; /* jae: above or equal (unsigned >=) */

loc_0034321F: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + ecx * 4 + 0x20) = ebx;
    MEM32(esp + ecx * 4 + 0x98) = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;

loc_00343233: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343037; /* jae: above or equal (unsigned >=) */

loc_0034323B: ;
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = esi;
    goto loc_00343015;

loc_00343248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0034324B: ;
    POP32(esp, ebp);

loc_0034324C: ;
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_00343260
 * Original: 0x00343260 - 0x00343299 (57 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00343260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 0x10);
    if (ecx == 0) goto loc_00343292; /* jecxz */

loc_0034326B: ;
    ebx = ecx;
    edi = MEM32(ebp + 8);
    esi = edi;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (LO8(eax) == MEM8(edi));
        edi += _st; ecx--;
        if (_flags) break;
    } } /* repne scasb */
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx + ebx;
    edi = esi;
    esi = MEM32(ebp + 0xC);
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(eax, MEM8(esi + -1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + -1) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00343290; /* ja: above (unsigned >) */

loc_0034328B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00343292; /* je: equal / zero */

loc_0034328D: ;
    ecx = ecx - 2;

loc_00343290: ;
    ecx = ~ecx;

loc_00343292: ;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00343299
 * Original: 0x00343299 - 0x003432A7 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343299(void)
{

loc_00343299: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x003432A4u); RECOMP_ABI_CALL(0x003437C7u, sub_003437C7); /* call 0x003437C7 */

loc_003432A4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003432A8
 * Original: 0x003432A8 - 0x003432E3 (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003432A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003432A8: ;
    PUSH32(esp, 0x3432FC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x10) = ebp;
    ebp = esp + 0x10;
    esp = esp - eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    eax = ebp + -16;
    MEM32(XBOX_FS_BASE) = eax;
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003432E3
 * Original: 0x003432E3 - 0x003432F4 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003432E3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003432E3: ;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003432F4
 * Original: 0x003432F4 - 0x003432FC (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003432F4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003432F4: ;
    PUSH32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_HI8(edx, HI8(edx) ^ MEM8(eax));
    POP32(esp, eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = MEM8(eax) ^ HI8(edx);

    g_seh_ebp = ebp; sub_003432FC(); return; /* fallthrough 0x003432FC */

}

/**
 * sub_003432FC
 * Original: 0x003432FC - 0x003433CE (210 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003432FC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003432FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    g_df = 0; /* cld */
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 4), 6 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003433B1; /* jne: not equal / not zero */

loc_0034331A: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    MEM32(ebx + -4) = eax;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 8);

loc_0034332F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003433AA; /* je: equal / zero */

loc_00343334: ;
    ecx = esi + esi * 2;
    eax = MEM32(edi + ecx * 4 + 4);
    eax = eax | eax;
    if ((eax == 0)) goto loc_00343398; /* je: equal / zero */

loc_0034333F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ebp = ebx + 0x10;
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00343350u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00343350: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    ebx = MEM32(ebp + 0xC);
    eax = eax | eax;
    if ((eax == 0)) goto loc_00343398; /* je: equal / zero */

loc_00343359: ;
    if (((int32_t)eax < 0)) goto loc_003433A3; /* js: sign (negative) */

loc_0034335B: ;
    edi = MEM32(ebx + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343364u); RECOMP_ABI_CALL(0x00341358u, sub_00341358); /* call 0x00341358 */

loc_00343364: ;
    esp = esp + 4;
    ebp = ebx + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343371u); RECOMP_ABI_CALL(0x0034139Au, sub_0034139A); /* call 0x0034139A */

loc_00343371: ;
    esp = esp + 8;
    ecx = esi + esi * 2;
    PUSH32(esp, 1);
    eax = MEM32(edi + ecx * 4 + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343382u); RECOMP_ABI_CALL(0x0034142Eu, sub_0034142E); /* call 0x0034142E */

loc_00343382: ;
    eax = MEM32(edi + ecx * 4);
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(edi + ecx * 4 + 8);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00343398u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00343398: ;
    edi = MEM32(ebx + 8);
    ecx = esi + esi * 2;
    esi = MEM32(edi + ecx * 4);
    goto loc_0034332F;

loc_003433A3: ;
    eax = 0;
    goto loc_003433C6;

loc_003433AA: ;
    eax = 1;
    goto loc_003433C6;

loc_003433B1: ;
    PUSH32(esp, ebp);
    ebp = ebx + 0x10;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003433BDu); RECOMP_ABI_CALL(0x0034139Au, sub_0034139A); /* call 0x0034139A */

loc_003433BD: ;
    esp = esp + 8;
    POP32(esp, ebp);
    eax = 1;

loc_003433C6: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003433E9
 * Original: 0x003433E9 - 0x00343440 (87 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003433E9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003433E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343417u); RECOMP_ABI_CALL(0x00347ED0u, sub_00347ED0); /* call 0x00347ED0 */

loc_00343417: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0034343A; /* je: equal / zero */

loc_00343420: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0034342D; /* js: sign (negative) */

loc_00343425: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_0034343A;

loc_0034342D: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343438u); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_00343438: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034343A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00343440
 * Original: 0x00343440 - 0x0034345F (31 bytes, 15 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343440: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034345A; /* jae: above or equal (unsigned >=) */

loc_00343445: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343450; /* jae: above or equal (unsigned >=) */

loc_0034344A: ;
    eax = (eax >> LO8(ecx)) | (edx << (32 - LO8(ecx))); /* shrd */
    edx = edx >> LO8(ecx);
    esp += 4; return; /* ret */

loc_00343450: ;
    eax = edx;
    edx = 0; /* xor self */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    eax = eax >> LO8(ecx);
    esp += 4; return; /* ret */

loc_0034345A: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00343460
 * Original: 0x00343460 - 0x003434D5 (117 bytes, 44 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00343460: ;
    PUSH32(esp, ebx);
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if ((eax != 0)) goto loc_00343481; /* jne: not equal / not zero */

loc_00343469: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 8);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    goto loc_003434D1;

loc_00343481: ;
    ecx = eax;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);

loc_0034348F: ;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    { uint32_t carry_out = ebx & 1u; ebx = (ebx >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr ebx, 1 */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    { uint32_t carry_out = eax & 1u; eax = (eax >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr eax, 1 */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    if ((ecx != 0)) goto loc_0034348F; /* jne: not equal / not zero */

loc_0034349B: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ecx = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    if (_cf) goto loc_003434BA; /* jb: below (unsigned <) */

loc_003434AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003434BA; /* ja: above (unsigned >) */

loc_003434B2: ;
    if (CMP_B(_fa, _fb)) goto loc_003434C2; /* jb: below (unsigned <) */

loc_003434B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003434C2; /* jbe: below or equal (unsigned <=) */

loc_003434BA: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x10)));
    eax = eax - MEM32(esp + 0x10);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0x14)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_003434C2: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 8)));
    eax = eax - MEM32(esp + 8);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0xC)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_003434D1: ;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003434D5
 * Original: 0x003434D5 - 0x00343512 (61 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003434D5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003434D5: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0034350D; /* je: equal / zero */

loc_003434E5: ;
    edx = MEM32(esp + 0x10);

loc_003434E9: ;
    SET_LO16(eax, MEM16(edx));
    MEM16(edi) = LO16(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003434FB; /* je: equal / zero */

loc_003434F8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003434E9; /* jne: not equal / not zero */

loc_003434FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034350D; /* je: equal / zero */

loc_003434FF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034350D; /* je: equal / zero */

loc_00343502: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */

loc_0034350D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00343512
 * Original: 0x00343512 - 0x00343570 (94 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343512(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343512: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0034356A; /* je: equal / zero */

loc_00343523: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00343567; /* je: equal / zero */

loc_0034352E: ;
    eax = eax - ecx;

loc_00343530: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00343555; /* je: equal / zero */

loc_00343539: ;
    SET_LO16(edx, MEM16(ecx));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034356C; /* je: equal / zero */

loc_00343541: ;
    ebx = ZX16(MEM16(eax + ecx));
    edx = ZX16(LO16(edx));
    ebx = ebx - edx;
    if ((ebx != 0)) goto loc_00343555; /* jne: not equal / not zero */

loc_0034354C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax + ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343539; /* jne: not equal / not zero */

loc_00343555: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034356C; /* je: equal / zero */

loc_0034355B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(edi));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00343530; /* jne: not equal / not zero */

loc_00343567: ;
    eax = 0; /* xor self */

loc_00343569: ;
    POP32(esp, ebx);

loc_0034356A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0034356C: ;
    eax = edi;
    goto loc_00343569;

}

/**
 * sub_00343570
 * Original: 0x00343570 - 0x003435A2 (50 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343570: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    goto loc_00343585;

loc_0034357C: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343592; /* je: equal / zero */

loc_00343581: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00343585: ;
    SET_LO16(ecx, MEM16(esi));
    eax = ZX16(MEM16(edx));
    edi = ZX16(LO16(ecx));
    eax = eax - edi;
    if ((eax == 0)) goto loc_0034357C; /* je: equal / zero */

loc_00343592: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0034359C; /* jge: greater or equal (signed >=) */

loc_00343598: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0034359C: ;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003435A1; /* jle: less or equal (signed <=) */

loc_0034359E: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003435A1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003435A2
 * Original: 0x003435A2 - 0x00343612 (112 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003435A2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003435A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + eax;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, esi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003435D1u); RECOMP_ABI_CALL(0x0034960Fu, sub_0034960F); /* call 0x0034960F */

loc_003435D1: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax;
    if ((_fas < 0)) goto loc_003435E6; /* js: sign (negative) */

loc_003435DB: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003435F3;

loc_003435E6: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003435F1u); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_003435F1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003435F3: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00343600; /* js: sign (negative) */

loc_003435F8: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_0034360D;

loc_00343600: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034360Bu); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_0034360B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034360D: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00343612
 * Original: 0x00343612 - 0x00343655 (67 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343612(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343612: ;
    _fa = (uint32_t)(MEM32(0x5D9BE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9BE8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343620; /* jne: not equal / not zero */

loc_0034361B: ;
    g_seh_ebp = ebp; sub_00349DE0(); return; /* tail jmp 0x00349DE0 */

loc_00343620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_0034362B: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343634u); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_00343634: ;
    ebx = eax;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00343640u); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_00343640: ;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ecx);
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0034364D; /* je: equal / zero */

loc_00343649: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034362B; /* je: equal / zero */

loc_0034364D: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    eax = eax - ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343655
 * Original: 0x00343655 - 0x003436AA (85 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00343655(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343655: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003436A6; /* je: equal / zero */

loc_0034365E: ;
    _fa = (uint32_t)(MEM32(0x5D9BE8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9BE8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034366D; /* jne: not equal / not zero */

loc_00343667: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_00349E30(); return; /* tail jmp 0x00349E30 */

loc_0034366D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_00343676: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034367Fu); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_0034367F: ;
    ebx = eax;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034368Bu); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_0034368B: ;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    ecx = eax;
    if ((_fa == 0)) goto loc_0034369D; /* je: equal / zero */

loc_00343695: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034369D; /* je: equal / zero */

loc_00343699: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343676; /* je: equal / zero */

loc_0034369D: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    eax = eax - ecx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003436A6: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003436B0
 * Original: 0x003436B0 - 0x00343718 (104 bytes, 43 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003436B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003436B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if ((eax != 0)) goto loc_003436D2; /* jne: not equal / not zero */

loc_003436BA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0xC);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ebx;
    goto loc_00343713;

loc_003436D2: ;
    ecx = eax;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);

loc_003436E0: ;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    { uint32_t carry_out = ebx & 1u; ebx = (ebx >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr ebx, 1 */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    { uint32_t carry_out = eax & 1u; eax = (eax >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr eax, 1 */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    if ((ecx != 0)) goto loc_003436E0; /* jne: not equal / not zero */

loc_003436EC: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x18);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x14);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    if (_cf) goto loc_0034370E; /* jb: below (unsigned <) */

loc_00343700: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0034370E; /* ja: above (unsigned >) */

loc_00343706: ;
    if (CMP_B(_fa, _fb)) goto loc_0034370F; /* jb: below (unsigned <) */

loc_00343708: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0034370F; /* jbe: below or equal (unsigned <=) */

loc_0034370E: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0034370F: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = esi;

loc_00343713: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00343748
 * Original: 0x00343748 - 0x00343795 (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343748(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343748: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430910);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343754u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343754: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034378F; /* je: equal / zero */

loc_0034375B: ;
    _fa = (uint32_t)(MEM32(0x6F12E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6F12E0), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343780; /* jne: not equal / not zero */

loc_00343764: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034376Bu); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034376B: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034377Bu); RECOMP_ABI_CALL(0x00343797u, sub_00343797); /* call 0x00343797 */

loc_0034377B: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034378F; /* jne: not equal / not zero */

loc_00343780: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343789u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_00343789: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034378Fu); RECOMP_ABI_CALL(0x0019ED5Eu, sub_0019ED5E); /* call 0x0019ED5E */

loc_0034378F: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343794u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343794: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00343795
 * Original: 0x00343795 - 0x00343797 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343795(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343795: ;
    esi = 0; /* xor self */

    g_seh_ebp = ebp; sub_00343797(); return; /* fallthrough 0x00343797 */

}

/**
 * sub_00343797
 * Original: 0x00343797 - 0x003437A0 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343797(void)
{

loc_00343797: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0034379Eu); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_0034379E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003437A0
 * Original: 0x003437A0 - 0x003437C7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003437A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003437A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003437A9; /* jne: not equal / not zero */

loc_003437A8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003437A9: ;
    _fa = (uint32_t)(MEM32(0x6F12E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6F12E0), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003437B8; /* je: equal / zero */

loc_003437B2: ;
    eax = eax + 0xF;
    eax = eax & 0xFFFFFFF0u;

loc_003437B8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003437C0u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_003437C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003437C6u); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_003437C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003437C7
 * Original: 0x003437C7 - 0x003437F3 (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003437C7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003437C7: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0xFFFFFFE0u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003437F0; /* ja: above (unsigned >) */

loc_003437CE: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x003437D7u); RECOMP_ABI_CALL(0x003437A0u, sub_003437A0); /* call 0x003437A0 */

loc_003437D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_003437F2; /* jne: not equal / not zero */

loc_003437DC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003437F2; /* je: equal / zero */

loc_003437E2: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x003437EBu); RECOMP_ABI_CALL(0x00349F90u, sub_00349F90); /* call 0x00349F90 */

loc_003437EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_003437CE; /* jne: not equal / not zero */

loc_003437F0: ;
    eax = 0; /* xor self */

loc_003437F2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003437F3
 * Original: 0x003437F3 - 0x00343805 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003437F3(void)
{

loc_003437F3: ;
    PUSH32(esp, MEM32(0x5D9C04));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x00343802u); RECOMP_ABI_CALL(0x003437C7u, sub_003437C7); /* call 0x003437C7 */

loc_00343802: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343805
 * Original: 0x00343805 - 0x00343858 (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343805(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343805: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x430920);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343811u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343811: ;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -32) = esi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034381Du); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_0034381D: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343828u); RECOMP_ABI_CALL(0x003494D6u, sub_003494D6); /* call 0x003494D6 */

loc_00343828: ;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343837u); RECOMP_ABI_CALL(0x00347ED0u, sub_00347ED0); /* call 0x00347ED0 */

loc_00343837: ;
    MEM32(ebp + -36) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343843u); RECOMP_ABI_CALL(0x0034955Eu, sub_0034955E); /* call 0x0034955E */

loc_00343843: ;
    esp = esp + 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034384Fu); RECOMP_ABI_CALL(0x00343858u, sub_00343858); /* call 0x00343858 */

loc_0034384F: ;
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343857u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343857: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00343858
 * Original: 0x00343858 - 0x00343862 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343858(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343858: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x00343860u); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00343860: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343862
 * Original: 0x00343862 - 0x0034391F (189 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343862(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343862: ;
    eax = MEM32(0x6F12EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00343876; /* jne: not equal / not zero */

loc_0034386F: ;
    eax = 0x200;
    goto loc_0034387C;

loc_00343876: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00343881; /* jge: greater or equal (signed >=) */

loc_0034387A: ;
    eax = esi;

loc_0034387C: ;
    MEM32(0x6F12EC) = eax;

loc_00343881: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343889u); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_00343889: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(0x6F12E8) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003438B2; /* jne: not equal / not zero */

loc_00343894: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(0x6F12EC) = esi;
    PUSH32(esp, 0x003438A2u); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_003438A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(0x6F12E8) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003438B2; /* jne: not equal / not zero */

loc_003438AD: ;
    PUSH32(esp, 0x1A);
    POP32(esp, eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003438B2: ;
    edx = 0; /* xor self */
    ecx = 0x47A140;
    goto loc_003438C0;

loc_003438BB: ;
    eax = MEM32(0x6F12E8);

loc_003438C0: ;
    MEM32(edx + eax) = ecx;
    ecx = ecx + 0x20;
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A3C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x47A3C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003438BB; /* jl: less (signed <) */

loc_003438D1: ;
    ecx = 0; /* xor self */
    edx = 0x47A150;

loc_003438D8: ;
    esi = ecx;
    eax = ecx;
    eax = eax & 0x1F;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    esi = MEM32(esi * 4 + 0x6F11E0);
    eax = eax + eax * 4;
    eax = MEM32(esi + eax * 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003438F8; /* je: equal / zero */

loc_003438F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003438FB; /* jne: not equal / not zero */

loc_003438F8: ;
    MEM32(edx) = MEM32(edx) | 0xFFFFFFFFu;

loc_003438FB: ;
    edx = edx + 0x20;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A1B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x47A1B0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003438D8; /* jl: less (signed <) */

loc_00343907: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    _fa = (uint32_t)(MEM8(0x5D99F4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5D99F4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034391E; /* je: equal / zero */

loc_00343919: ;
    g_seh_ebp = ebp; sub_0034A010(); return; /* tail jmp 0x0034A010 */

loc_0034391E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034390B
 * Original: 0x0034390B - 0x0034391F (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034390B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034390B: ;
    PUSH32(esp, 0x00343910u); RECOMP_ABI_CALL(0x00344497u, sub_00344497); /* call 0x00344497 */

loc_00343910: ;
    _fa = (uint32_t)(MEM8(0x5D99F4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5D99F4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034391E; /* je: equal / zero */

loc_00343919: ;
    g_seh_ebp = ebp; sub_0034A010(); return; /* tail jmp 0x0034A010 */

loc_0034391E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034391F
 * Original: 0x0034391F - 0x0034394E (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034391F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034391F: ;
    eax = MEM32(esp + 4);
    ecx = 0x47A140;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00343943; /* jb: below (unsigned <) */

loc_0034392C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A3A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47A3A0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00343943; /* ja: above (unsigned >) */

loc_00343933: ;
    eax = eax - ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343941u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_00343941: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00343943: ;
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0034394Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034394D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034394E
 * Original: 0x0034394E - 0x00343971 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034394E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034394E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00343962; /* jge: greater or equal (signed >=) */

loc_00343957: ;
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343960u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_00343960: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00343962: ;
    eax = MEM32(esp + 8);
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x00343970u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00343970: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00343971
 * Original: 0x00343971 - 0x003439A0 (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343971(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343971: ;
    eax = MEM32(esp + 4);
    ecx = 0x47A140;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00343995; /* jb: below (unsigned <) */

loc_0034397E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A3A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47A3A0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00343995; /* ja: above (unsigned >) */

loc_00343985: ;
    eax = eax - ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343993u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_00343993: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00343995: ;
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x0034399Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034399F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003439A0
 * Original: 0x003439A0 - 0x003439C3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003439A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003439A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003439B4; /* jge: greater or equal (signed >=) */

loc_003439A9: ;
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003439B2u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_003439B2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003439B4: ;
    eax = MEM32(esp + 8);
    eax = eax + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003439C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003439C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003439C4
 * Original: 0x003439C4 - 0x003439EB (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003439C4(void)
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

loc_003439C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp + 0xFFFFFFF4u;
    /* wait - FPU sync */
    MEM16(ebp + -2) = g_fp_control_word; /* fnstcw word ptr [ebp - 2] */
    /* wait - FPU sync */
    SET_LO16(eax, MEM16(ebp + -2));
    SET_HI8(eax, HI8(eax) | 0xC);
    MEM16(ebp + -4) = LO16(eax);
    g_fp_control_word = MEM16(ebp + -4); /* fldcw word ptr [ebp - 4] */
    SMEM64(ebp + -12) = (int64_t)recomp_fist(fp_top(), g_fp_control_word, 64); fp_pop(); /* fistp */
    g_fp_control_word = MEM16(ebp + -2); /* fldcw word ptr [ebp - 2] */
    eax = MEM32(ebp + -12);
    edx = MEM32(ebp + -8);
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
 * sub_003439EB
 * Original: 0x003439EB - 0x00343A8D (162 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003439EB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003439EB: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x430930);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003439F7u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003439F7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343A0C; /* jne: not equal / not zero */

loc_003439FE: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343A06u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00343A06: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00343AD2(); return; /* tail jmp 0x00343AD2 */

loc_00343A0C: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343A21; /* jne: not equal / not zero */

loc_00343A13: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343A1Bu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00343A1B: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00343AD0(); return; /* tail jmp 0x00343AD0 */

loc_00343A21: ;
    _fa = (uint32_t)(MEM32(0x6F12E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6F12E0), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00343A9B(); return; } /* jne: not equal / not zero */

loc_00343A2A: ;
    MEM32(ebp + -28) = edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFE0u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00343A71; /* ja: above (unsigned >) */

loc_00343A32: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343A39u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_00343A39: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -32) = edi;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343A49u); RECOMP_ABI_CALL(0x00343A92u, sub_00343A92); /* call 0x00343A92 */

loc_00343A49: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343A71; /* jne: not equal / not zero */

loc_00343A4E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343A55; /* jne: not equal / not zero */

loc_00343A52: ;
    esi = 0; /* xor self */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00343A55: ;
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;
    MEM32(ebp + 0xC) = esi;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343A68u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_00343A68: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343A6Eu); RECOMP_ABI_CALL(0x001A147Bu, sub_001A147B); /* call 0x001A147B */

loc_00343A6E: ;
    MEM32(ebp + -28) = eax;

loc_00343A71: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00343AD2(); return; } /* jne: not equal / not zero */

loc_00343A78: ;
    _fa = (uint32_t)(MEM32(0x5D9C04)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9C04), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00343AD2(); return; } /* je: equal / zero */

loc_00343A80: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343A86u); RECOMP_ABI_CALL(0x00349F90u, sub_00349F90); /* call 0x00349F90 */

loc_00343A86: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00343A2A; /* jne: not equal / not zero */

loc_00343A8B: ;
    g_seh_ebp = ebp; sub_00343AD0(); return; /* tail jmp 0x00343AD0 */

}

/**
 * sub_00343A8D
 * Original: 0x00343A8D - 0x00343A92 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343A8D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343A8D: ;
    edi = 0; /* xor self */
    esi = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_00343A92(); return; /* fallthrough 0x00343A92 */

}

/**
 * sub_00343A92
 * Original: 0x00343A92 - 0x00343A9B (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343A92(void)
{

loc_00343A92: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00343A99u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_00343A99: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343A9B
 * Original: 0x00343A9B - 0x00343AD8 (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343A9B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343A9B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFE0u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00343AB9; /* ja: above (unsigned >) */

loc_00343AA2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343AA9; /* jne: not equal / not zero */

loc_00343AA6: ;
    esi = 0; /* xor self */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00343AA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, 0x00343AB3u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_00343AB3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343AB9u); RECOMP_ABI_CALL(0x001A147Bu, sub_001A147B); /* call 0x001A147B */

loc_00343AB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343AD2; /* jne: not equal / not zero */

loc_00343ABD: ;
    _fa = (uint32_t)(MEM32(0x5D9C04)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9C04), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343AD2; /* je: equal / zero */

loc_00343AC5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00343ACBu); RECOMP_ABI_CALL(0x00349F90u, sub_00349F90); /* call 0x00349F90 */

loc_00343ACB: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00343A9B; /* jne: not equal / not zero */

loc_00343AD0: ;
    eax = 0; /* xor self */

loc_00343AD2: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00343AD7u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343AD7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00343AD0
 * Original: 0x00343AD0 - 0x00343AD2 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00343AD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343AD0: ;
    eax = 0; /* xor self */

    g_seh_ebp = ebp; sub_00343AD2(); return; /* fallthrough 0x00343AD2 */

}

/**
 * sub_00343AD2
 * Original: 0x00343AD2 - 0x00343AD8 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343AD2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343AD2: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00343AD7u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343AD7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00343AD8
 * Original: 0x00343AD8 - 0x00343B25 (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343AD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343AD8: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00343AE7; /* jne: not equal / not zero */

loc_00343AE6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00343AE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFE0u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00343B0F; /* ja: above (unsigned >) */

loc_00343AEE: ;
    _fa = (uint32_t)(MEM32(0x6F12E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6F12E0), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343AFD; /* jne: not equal / not zero */

loc_00343AF7: ;
    esi = esi + 0xF;
    esi = esi & 0xFFFFFFF0u;

loc_00343AFD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00343B05u); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_00343B05: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00343B0Bu); RECOMP_ABI_CALL(0x001A0B0Cu, sub_001A0B0C); /* call 0x001A0B0C */

loc_00343B0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00343B23; /* jne: not equal / not zero */

loc_00343B0F: ;
    _fa = (uint32_t)(MEM32(0x5D9C04)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D9C04), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343B23; /* je: equal / zero */

loc_00343B18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00343B1Eu); RECOMP_ABI_CALL(0x00349F90u, sub_00349F90); /* call 0x00349F90 */

loc_00343B1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00343AE7; /* jne: not equal / not zero */

loc_00343B23: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00343B30
 * Original: 0x00343B30 - 0x00343BE2 (178 bytes, 69 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00343B30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    eax = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00343B50; /* jge: greater or equal (signed >=) */

loc_00343B3C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0xC);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = edx;

loc_00343B50: ;
    eax = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00343B6B; /* jge: greater or equal (signed >=) */

loc_00343B58: ;
    edx = MEM32(esp + 0x14);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;

loc_00343B6B: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if ((eax != 0)) goto loc_00343B8A; /* jne: not equal / not zero */

loc_00343B6F: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 0xC);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00343BD6; /* jns: not sign (positive) */

loc_00343B88: ;
    goto loc_00343BDD;

loc_00343B8A: ;
    ebx = eax;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);

loc_00343B98: ;
    if (1) _cf = (int)(((ebx) >> ((1) - 1)) & 1);
    ebx = ebx >> 1;
    { uint32_t carry_out = ecx & 1u; ecx = (ecx >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr ecx, 1 */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    { uint32_t carry_out = eax & 1u; eax = (eax >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr eax, 1 */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ebx;
    if ((ebx != 0)) goto loc_00343B98; /* jne: not equal / not zero */

loc_00343BA4: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x18);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    if (_cf) goto loc_00343BC3; /* jb: below (unsigned <) */

loc_00343BB5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00343BC3; /* ja: above (unsigned >) */

loc_00343BBB: ;
    if (CMP_B(_fa, _fb)) goto loc_00343BCB; /* jb: below (unsigned <) */

loc_00343BBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00343BCB; /* jbe: below or equal (unsigned <=) */

loc_00343BC3: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x14)));
    eax = eax - MEM32(esp + 0x14);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0x18)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_00343BCB: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0xC)));
    eax = eax - MEM32(esp + 0xC);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0x10)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00343BDD; /* jns: not sign (positive) */

loc_00343BD6: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_00343BDD: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00343BF0
 * Original: 0x00343BF0 - 0x00343CCF (223 bytes, 91 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343BF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343BF0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00343C14; /* jge: greater or equal (signed >=) */

loc_00343BFF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x10);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;

loc_00343C14: ;
    eax = MEM32(esp + 0x1C);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00343C30; /* jge: greater or equal (signed >=) */

loc_00343C1C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x18);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;

loc_00343C30: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if ((eax != 0)) goto loc_00343C5C; /* jne: not equal / not zero */

loc_00343C34: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0x10);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    eax = ebx;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x18);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = esi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x18);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    goto loc_00343CA3;

loc_00343C5C: ;
    ebx = eax;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_00343C6A: ;
    if (1) _cf = (int)(((ebx) >> ((1) - 1)) & 1);
    ebx = ebx >> 1;
    { uint32_t carry_out = ecx & 1u; ecx = (ecx >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr ecx, 1 */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    { uint32_t carry_out = eax & 1u; eax = (eax >> 1) | ((uint32_t)_cf << 31); _cf = (int)carry_out; } /* rcr eax, 1 */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ebx;
    if ((ebx != 0)) goto loc_00343C6A; /* jne: not equal / not zero */

loc_00343C76: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x1C);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x18);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    if (_cf) goto loc_00343C98; /* jb: below (unsigned <) */

loc_00343C8A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00343C98; /* ja: above (unsigned >) */

loc_00343C90: ;
    if (CMP_B(_fa, _fb)) goto loc_00343CA1; /* jb: below (unsigned <) */

loc_00343C92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00343CA1; /* jbe: below or equal (unsigned <=) */

loc_00343C98: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x18)));
    eax = eax - MEM32(esp + 0x18);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0x1C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_00343CA1: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */

loc_00343CA3: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x10)));
    eax = eax - MEM32(esp + 0x10);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esp + 0x14)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00343CB5; /* jns: not sign (positive) */

loc_00343CAE: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_00343CB5: ;
    ecx = edx;
    edx = ebx;
    ebx = ecx;
    ecx = eax;
    eax = esi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00343CC9; /* jne: not equal / not zero */

loc_00343CC2: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */

loc_00343CC9: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00343CCF
 * Original: 0x00343CCF - 0x00343CD4 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343CCF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343CCF: ;
    g_seh_ebp = ebp; sub_00343299(); return; /* tail jmp 0x00343299 */

}

/**
 * sub_00343CD4
 * Original: 0x00343CD4 - 0x00343CD9 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343CD4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343CD4: ;
    g_seh_ebp = ebp; sub_003414F7(); return; /* tail jmp 0x003414F7 */

}

/**
 * sub_00343CD9
 * Original: 0x00343CD9 - 0x00343DD1 (248 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00343CD9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343CD9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x10));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -4) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00343D01; /* jne: not equal / not zero */

loc_00343CFA: ;
    eax = 0; /* xor self */
    goto loc_00343DB8;

loc_00343D01: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebx + 0xC), 0x10C (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343D15; /* je: equal / zero */

loc_00343D0D: ;
    eax = MEM32(ebx + 0x18);
    MEM32(ebp + -8) = eax;
    goto loc_00343D1C;

loc_00343D15: ;
    MEM32(ebp + -8) = 0x1000;

loc_00343D1C: ;
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebx + 0xC), 0x10C (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343D59; /* je: equal / zero */

loc_00343D24: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343D59; /* je: equal / zero */

loc_00343D2B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343D31; /* jae: above or equal (unsigned >=) */

loc_00343D2F: ;
    eax = edi;

loc_00343D31: ;
    esi = MEM32(ebx);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    MEM32(ebx + 4) = MEM32(ebx + 4) - eax;
    MEM32(ebx) = MEM32(ebx) + eax;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    edi = MEM32(ebp + -4);
    esi = MEM32(ebp + -12);
    goto loc_00343DAC;

loc_00343D59: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00343D8E; /* jb: below (unsigned <) */

loc_00343D5E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00343D6F; /* je: equal / zero */

loc_00343D66: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -8)); }
    eax = edi;
    eax = eax - edx;

loc_00343D6F: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebx + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343D7Bu); RECOMP_ABI_CALL(0x0034A34Cu, sub_0034A34C); /* call 0x0034A34C */

loc_00343D7B: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343DBC; /* je: equal / zero */

loc_00343D82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343DCB; /* je: equal / zero */

loc_00343D87: ;
    edi = edi - eax;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    goto loc_00343DA9;

loc_00343D8E: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343D94u); RECOMP_ABI_CALL(0x0034A094u, sub_0034A094); /* call 0x0034A094 */

loc_00343D94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00343DC0; /* je: equal / zero */

loc_00343D9A: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    eax = MEM32(ebx + 0x18);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;

loc_00343DA9: ;
    MEM32(ebp + -4) = edi;

loc_00343DAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00343D1C; /* jne: not equal / not zero */

loc_00343DB4: ;
    eax = MEM32(ebp + 0x10);

loc_00343DB7: ;
    POP32(esp, ebx);

loc_00343DB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00343DBC: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0x10;

loc_00343DC0: ;
    eax = esi;
    eax = eax - edi;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0xC)); }
    goto loc_00343DB7;

loc_00343DCB: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0x20;
    goto loc_00343DC0;

}

/**
 * sub_00343DD1
 * Original: 0x00343DD1 - 0x00343E13 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343DD1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343DD1: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430940);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343DDDu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343DDD: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343DE5u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_00343DE5: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343DFBu); RECOMP_ABI_CALL(0x00343CD9u, sub_00343CD9); /* call 0x00343CD9 */

loc_00343DFB: ;
    esp = esp + 0x10;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343E0Au); RECOMP_ABI_CALL(0x00343E13u, sub_00343E13); /* call 0x00343E13 */

loc_00343E0A: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343E12u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343E12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00343E13
 * Original: 0x00343E13 - 0x00343E1D (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343E13(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343E13: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00343E1Bu); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00343E1B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343E1D
 * Original: 0x00343E1D - 0x00343F34 (279 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00343E1D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343E1D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = edi;
    MEM32(ebp + 8) = edx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -4) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00343E45; /* jne: not equal / not zero */

loc_00343E3E: ;
    eax = 0; /* xor self */
    goto loc_00343F25;

loc_00343E45: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebx + 0xC), 0x10C (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343E59; /* je: equal / zero */

loc_00343E51: ;
    eax = MEM32(ebx + 0x18);
    MEM32(ebp + -8) = eax;
    goto loc_00343E65;

loc_00343E59: ;
    MEM32(ebp + -8) = 0x1000;
    goto loc_00343E65;

loc_00343E62: ;
    edx = MEM32(ebp + 8);

loc_00343E65: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx & 0x108;
    if ((ecx == 0)) goto loc_00343EA1; /* je: equal / zero */

loc_00343E70: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343EA1; /* je: equal / zero */

loc_00343E77: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343E7D; /* jae: above or equal (unsigned >=) */

loc_00343E7B: ;
    eax = esi;

loc_00343E7D: ;
    edi = MEM32(ebx);
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    ecx = eax;
    esi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    MEM32(ebx + 4) = MEM32(ebx + 4) - eax;
    MEM32(ebx) = MEM32(ebx) + eax;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    edi = MEM32(ebp + -12);
    goto loc_00343F16;

loc_00343EA1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00343EED; /* jb: below (unsigned <) */

loc_00343EA6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343EB5; /* je: equal / zero */

loc_00343EAA: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343EB0u); RECOMP_ABI_CALL(0x003442E7u, sub_003442E7); /* call 0x003442E7 */

loc_00343EB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00343F29; /* jne: not equal / not zero */

loc_00343EB5: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343EC4; /* je: equal / zero */

loc_00343EBB: ;
    eax = esi;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -8)); }
    esi = esi - edx;

loc_00343EC4: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebx + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343ED0u); RECOMP_ABI_CALL(0x0034A582u, sub_0034A582); /* call 0x0034A582 */

loc_00343ED0: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343EE2; /* je: equal / zero */

loc_00343ED8: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00343F16; /* jae: above or equal (unsigned >=) */

loc_00343EE2: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0x20;
    eax = edi;
    eax = eax - MEM32(ebp + -4);
    goto loc_00343F2D;

loc_00343EED: ;
    eax = (uint32_t)(int32_t)SMEM8(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343EF7u); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_00343EF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00343F29; /* je: equal / zero */

loc_00343EFE: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x18);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_00343F16; /* jg: greater (signed >) */

loc_00343F0F: ;
    MEM32(ebp + -8) = 1;

loc_00343F16: ;
    esi = MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00343E62; /* jne: not equal / not zero */

loc_00343F21: ;
    eax = MEM32(ebp + 0x10);

loc_00343F24: ;
    POP32(esp, ebx);

loc_00343F25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00343F29: ;
    eax = edi;
    eax = eax - esi;

loc_00343F2D: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0xC)); }
    goto loc_00343F24;

}

/**
 * sub_00343F34
 * Original: 0x00343F34 - 0x00343F76 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343F34(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343F34: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430950);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343F40u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343F40: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343F48u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_00343F48: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343F5Eu); RECOMP_ABI_CALL(0x00343E1Du, sub_00343E1D); /* call 0x00343E1D */

loc_00343F5E: ;
    esp = esp + 0x10;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343F6Du); RECOMP_ABI_CALL(0x00343F76u, sub_00343F76); /* call 0x00343F76 */

loc_00343F6D: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00343F75u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00343F75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00343F76
 * Original: 0x00343F76 - 0x00343F80 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343F76(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00343F76: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00343F7Eu); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00343F7E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00343F80
 * Original: 0x00343F80 - 0x0034400F (143 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00343F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00343F80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x83 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00343FFE; /* je: equal / zero */

loc_00343F8D: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343F9F; /* je: equal / zero */

loc_00343F95: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00343F9F; /* je: equal / zero */

loc_00343F9A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00343FFE; /* jne: not equal / not zero */

loc_00343F9F: ;
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00343FB7; /* jne: not equal / not zero */

loc_00343FAA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00343FB0u); RECOMP_ABI_CALL(0x00344058u, sub_00344058); /* call 0x00344058 */

loc_00343FB0: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + eax;
    POP32(esp, ecx);
    edi = 0; /* xor self */

loc_00343FB7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00343FBDu); RECOMP_ABI_CALL(0x003442E7u, sub_003442E7); /* call 0x003442E7 */

loc_00343FBD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, ecx);
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00343FCD; /* jns: not sign (positive) */

loc_00343FC5: ;
    eax = eax & 0xFFFFFFFCu;
    MEM32(esi + 0xC) = eax;
    goto loc_00343FE1;

loc_00343FCD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343FE1; /* je: equal / zero */

loc_00343FD1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00343FE1; /* je: equal / zero */

loc_00343FD5: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00343FE1; /* jne: not equal / not zero */

loc_00343FDA: ;
    MEM32(esi + 0x18) = 0x200;

loc_00343FE1: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x00343FEEu); RECOMP_ABI_CALL(0x0034A69Fu, sub_0034A69F); /* call 0x0034A69F */

loc_00343FEE: ;
    ecx = 0; /* xor self */
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    goto loc_0034400C;

loc_00343FFE: ;
    PUSH32(esp, 0x00344003u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00344003: ;
    MEM32(eax) = 0x16;
    eax = eax | 0xFFFFFFFFu;

loc_0034400C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034400F
 * Original: 0x0034400F - 0x0034404E (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034400F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034400F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430960);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034401Bu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034401B: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344023u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_00344023: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344036u); RECOMP_ABI_CALL(0x00343F80u, sub_00343F80); /* call 0x00343F80 */

loc_00344036: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344045u); RECOMP_ABI_CALL(0x0034404Eu, sub_0034404E); /* call 0x0034404E */

loc_00344045: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034404Du); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034404D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034404E
 * Original: 0x0034404E - 0x00344058 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034404E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034404E: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00344056u); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00344056: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344058
 * Original: 0x00344058 - 0x003441BA (354 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00344058(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344058: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), ebx (32-bit) */
    MEM32(ebp + -12) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00344074; /* jge: greater or equal (signed >=) */

loc_00344071: ;
    MEM32(edi + 4) = ebx;

loc_00344074: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034407Du); RECOMP_ABI_CALL(0x0034A69Fu, sub_0034A69F); /* call 0x0034A69F */

loc_0034407D: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003440F5; /* jl: less (signed <) */

loc_00344087: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), 0x108 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344099; /* jne: not equal / not zero */

loc_00344091: ;
    eax = eax - MEM32(edi + 4);
    goto loc_003441B5;

loc_00344099: ;
    eax = MEM32(edi);
    edx = MEM32(edi + 8);
    ebx = eax;
    ebx = ebx - edx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 3 (8-bit) */
    MEM32(ebp + -8) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003440E6; /* je: equal / zero */

loc_003440AA: ;
    ebx = esi;
    ecx = esi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    ebx = MEM32(ebx * 4 + 0x6F11E0);
    ecx = ecx & 0x1F;
    ecx = ecx + ecx * 4;
    _fa = (uint32_t)(MEM8(ebx + ecx * 8 + 4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + ecx * 8 + 4), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003440D8; /* je: equal / zero */

loc_003440C5: ;
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003440D8; /* jae: above or equal (unsigned >=) */

loc_003440CB: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003440D3; /* jne: not equal / not zero */

loc_003440D0: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003440D3: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003440CB; /* jb: below (unsigned <) */

loc_003440D8: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003440FD; /* jne: not equal / not zero */

loc_003440DE: ;
    eax = MEM32(ebp + -8);
    goto loc_003441B5;

loc_003440E6: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003440D8; /* js: sign (negative) */

loc_003440EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003440EFu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_003440EF: ;
    MEM32(eax) = 0x16;

loc_003440F5: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_003441B5;

loc_003440FD: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003441AD; /* je: equal / zero */

loc_00344107: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344116; /* jne: not equal / not zero */

loc_0034410E: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & ecx;
    goto loc_003441AD;

loc_00344116: ;
    eax = eax - edx;
    eax = eax + ecx;
    MEM32(ebp + 8) = eax;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ebx = eax * 4 + 0x6F11E0;
    eax = esi;
    eax = eax & 0x1F;
    esi = eax + eax * 4;
    eax = MEM32(ebx);
    esi = esi << 3;
    _fa = (uint32_t)(MEM8(esi + eax + 4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + eax + 4), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003441A7; /* je: equal / zero */

loc_0034413D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344149u); RECOMP_ABI_CALL(0x0034A69Fu, sub_0034A69F); /* call 0x0034A69F */

loc_00344149: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034416E; /* jne: not equal / not zero */

loc_00344151: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(ebp + 8);
    ecx = ecx + eax;
    goto loc_00344164;

loc_0034415B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00344163; /* jne: not equal / not zero */

loc_00344160: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00344163: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00344164: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034415B; /* jb: below (unsigned <) */

loc_00344168: ;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xD), 0x20 (8-bit) */
    goto loc_003441A2;

loc_0034416E: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034417Bu); RECOMP_ABI_CALL(0x0034A69Fu, sub_0034A69F); /* call 0x0034A69F */

loc_0034417B: ;
    eax = 0x200;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00344195; /* ja: above (unsigned >) */

loc_00344188: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344195; /* je: equal / zero */

loc_00344190: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344198; /* je: equal / zero */

loc_00344195: ;
    eax = MEM32(edi + 0x18);

loc_00344198: ;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(esi + eax + 4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + eax + 4), 4 (8-bit) */

loc_003441A2: ;
    if (TEST_Z(_fa, _fb)) goto loc_003441A7; /* je: equal / zero */

loc_003441A4: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003441A7: ;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;

loc_003441AD: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax = eax + ecx;

loc_003441B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003441BA
 * Original: 0x003441BA - 0x003441F1 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003441BA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003441BA: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430970);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003441C6u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003441C6: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003441CEu); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_003441CE: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003441DBu); RECOMP_ABI_CALL(0x00344058u, sub_00344058); /* call 0x00344058 */

loc_003441DB: ;
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003441E8u); RECOMP_ABI_CALL(0x003441F1u, sub_003441F1); /* call 0x003441F1 */

loc_003441E8: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003441F0u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003441F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003441F1
 * Original: 0x003441F1 - 0x003441FB (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003441F1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003441F1: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x003441F9u); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_003441F9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003441FB
 * Original: 0x003441FB - 0x00344208 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003441FB(void)
{

loc_003441FB: ;
    PUSH32(esp, 0x00344200u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00344200: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00344208
 * Original: 0x00344208 - 0x0034422A (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344208(void)
{

loc_00344208: ;
    PUSH32(esp, 0x0034420Du); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_0034420D: ;
    ecx = MEM32(eax + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    ecx = ecx + 0x269EC3;
    MEM32(eax + 0x14) = ecx;
    eax = ecx;
    eax = eax >> 0x10;
    eax = eax & 0x7FFF;
    esp += 4; return; /* ret */

}

/**
 * sub_0034422A
 * Original: 0x0034422A - 0x0034427F (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034422A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034422A: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x430980);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344236u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00344236: ;
    esi = 0x47A160;
    MEM32(ebp + -32) = esi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344244u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_00344244: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034424Fu); RECOMP_ABI_CALL(0x003494D6u, sub_003494D6); /* call 0x003494D6 */

loc_0034424F: ;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034425Eu); RECOMP_ABI_CALL(0x00347ED0u, sub_00347ED0); /* call 0x00347ED0 */

loc_0034425E: ;
    MEM32(ebp + -36) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034426Au); RECOMP_ABI_CALL(0x0034955Eu, sub_0034955E); /* call 0x0034955E */

loc_0034426A: ;
    esp = esp + 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344276u); RECOMP_ABI_CALL(0x0034427Fu, sub_0034427F); /* call 0x0034427F */

loc_00344276: ;
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034427Eu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034427E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034427F
 * Original: 0x0034427F - 0x00344289 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034427F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034427F: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x00344287u); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00344287: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344289
 * Original: 0x00344289 - 0x003442DD (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344289(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344289: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x430990);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344295u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00344295: ;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -32) = esi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003442A1u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_003442A1: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003442ACu); RECOMP_ABI_CALL(0x003494D6u, sub_003494D6); /* call 0x003494D6 */

loc_003442AC: ;
    MEM32(ebp + -28) = eax;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003442BCu); RECOMP_ABI_CALL(0x00347ED0u, sub_00347ED0); /* call 0x00347ED0 */

loc_003442BC: ;
    MEM32(ebp + -36) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003442C8u); RECOMP_ABI_CALL(0x0034955Eu, sub_0034955E); /* call 0x0034955E */

loc_003442C8: ;
    esp = esp + 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003442D4u); RECOMP_ABI_CALL(0x003442DDu, sub_003442DD); /* call 0x003442DD */

loc_003442D4: ;
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003442DCu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003442DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003442DD
 * Original: 0x003442DD - 0x003442E7 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003442DD(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003442DD: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x003442E5u); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_003442E5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003442E7
 * Original: 0x003442E7 - 0x00344344 (93 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003442E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003442E7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00344336; /* jne: not equal / not zero */

loc_003442FC: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x108 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344336; /* je: equal / zero */

loc_00344302: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00344335; /* jle: less or equal (signed <=) */

loc_0034430E: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x00344318u); RECOMP_ABI_CALL(0x0034A582u, sub_0034A582); /* call 0x0034A582 */

loc_00344318: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034432E; /* jne: not equal / not zero */

loc_0034431F: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_00344335; /* jns: not sign (positive) */

loc_00344326: ;
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 0xC) = eax;
    goto loc_00344335;

loc_0034432E: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    ebx = ebx | 0xFFFFFFFFu;

loc_00344335: ;
    POP32(esp, edi);

loc_00344336: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(esi) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344344
 * Original: 0x00344344 - 0x00344372 (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344344(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00344344: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034434Fu); RECOMP_ABI_CALL(0x003442E7u, sub_003442E7); /* call 0x003442E7 */

loc_0034434F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00344359; /* je: equal / zero */

loc_00344354: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00344359: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034436E; /* je: equal / zero */

loc_0034435F: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x00344367u); RECOMP_ABI_CALL(0x0034A74Au, sub_0034A74A); /* call 0x0034A74A */

loc_00344367: ;
    POP32(esp, ecx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034436E: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00344372
 * Original: 0x00344372 - 0x0034440D (155 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344372(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344372: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4309A0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034437Eu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034437E: ;
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -36) = edi;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034438Du); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_0034438D: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    esi = 0; /* xor self */

loc_00344393: ;
    MEM32(ebp + -32) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F12EC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x6F12EC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00344423(); return; } /* jge: greater or equal (signed >=) */

loc_003443A2: ;
    eax = MEM32(0x6F12E8);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034440A; /* je: equal / zero */

loc_003443AE: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034440A; /* je: equal / zero */

loc_003443B4: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003443BBu); RECOMP_ABI_CALL(0x0034394Eu, sub_0034394E); /* call 0x0034394E */

loc_003443BB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = edx;
    eax = MEM32(0x6F12E8);
    eax = MEM32(eax + esi * 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344402; /* je: equal / zero */

loc_003443D3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003443E9; /* jne: not equal / not zero */

loc_003443D8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003443DEu); RECOMP_ABI_CALL(0x00344344u, sub_00344344); /* call 0x00344344 */

loc_003443DE: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00344402; /* je: equal / zero */

loc_003443E4: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00344402;

loc_003443E9: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00344402; /* jne: not equal / not zero */

loc_003443EE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344402; /* je: equal / zero */

loc_003443F3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003443F9u); RECOMP_ABI_CALL(0x00344344u, sub_00344344); /* call 0x00344344 */

loc_003443F9: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00344402; /* jne: not equal / not zero */

loc_003443FF: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) | eax;

loc_00344402: ;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034440Au); RECOMP_ABI_CALL(0x00344412u, sub_00344412); /* call 0x00344412 */

loc_0034440A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00344393;

}

/**
 * sub_0034440D
 * Original: 0x0034440D - 0x00344412 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034440D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034440D: ;
    edi = 0; /* xor self */
    esi = MEM32(ebp + -32);

    g_seh_ebp = ebp; sub_00344412(); return; /* fallthrough 0x00344412 */

}

/**
 * sub_00344412
 * Original: 0x00344412 - 0x00344423 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344412(void)
{

loc_00344412: ;
    eax = MEM32(0x6F12E8);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00344420u); RECOMP_ABI_CALL(0x003439A0u, sub_003439A0); /* call 0x003439A0 */

loc_00344420: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344423
 * Original: 0x00344423 - 0x0034443E (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344423(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344423: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x0034442Cu); RECOMP_ABI_CALL(0x0034443Eu, sub_0034443E); /* call 0x0034443E */

loc_0034442C: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    eax = MEM32(ebp + -28);
    if (CMP_EQ(_fa, _fb)) goto loc_00344438; /* je: equal / zero */

loc_00344435: ;
    eax = MEM32(ebp + -36);

loc_00344438: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0034443Du); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034443D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034443E
 * Original: 0x0034443E - 0x00344447 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034443E(void)
{

loc_0034443E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00344445u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_00344445: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344447
 * Original: 0x00344447 - 0x0034448D (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344447(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344447: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4309B8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344453u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00344453: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00344463; /* jne: not equal / not zero */

loc_0034445A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344460u); RECOMP_ABI_CALL(0x00344372u, sub_00344372); /* call 0x00344372 */

loc_00344460: ;
    POP32(esp, ecx);
    goto loc_00344487;

loc_00344463: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034446Bu); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_0034446B: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344477u); RECOMP_ABI_CALL(0x00344344u, sub_00344344); /* call 0x00344344 */

loc_00344477: ;
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344484u); RECOMP_ABI_CALL(0x0034448Du, sub_0034448D); /* call 0x0034448D */

loc_00344484: ;
    eax = MEM32(ebp + -28);

loc_00344487: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034448Cu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034448C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034448D
 * Original: 0x0034448D - 0x00344497 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034448D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034448D: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00344495u); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00344495: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344497
 * Original: 0x00344497 - 0x003444A0 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344497(void)
{

loc_00344497: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0034449Eu); RECOMP_ABI_CALL(0x00344372u, sub_00344372); /* call 0x00344372 */

loc_0034449E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003444A0
 * Original: 0x003444A0 - 0x003444C3 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003444A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003444A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003444C2; /* je: equal / zero */

loc_003444AB: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003444BC; /* jl: less (signed <) */

loc_003444B2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003444BC; /* jg: greater (signed >) */

loc_003444B7: ;
    SET_LO8(ecx, LO8(ecx) - 0x20);
    MEM8(edx) = LO8(ecx);

loc_003444BC: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003444AB; /* jne: not equal / not zero */

loc_003444C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003444C3
 * Original: 0x003444C3 - 0x003444E6 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003444C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003444C3: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003444E5; /* je: equal / zero */

loc_003444CE: ;
    SET_LO8(ecx, MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003444DF; /* jl: less (signed <) */

loc_003444D5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003444DF; /* jg: greater (signed >) */

loc_003444DA: ;
    SET_LO8(ecx, LO8(ecx) + 0x20);
    MEM8(edx) = LO8(ecx);

loc_003444DF: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003444CE; /* jne: not equal / not zero */

loc_003444E5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003444E6
 * Original: 0x003444E6 - 0x00344526 (64 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003444E6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003444E6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4309C8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003444F2u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003444F2: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003444FAu); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_003444FA: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034450Eu); RECOMP_ABI_CALL(0x00347106u, sub_00347106); /* call 0x00347106 */

loc_0034450E: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034451Du); RECOMP_ABI_CALL(0x00344526u, sub_00344526); /* call 0x00344526 */

loc_0034451D: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344525u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00344525: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344526
 * Original: 0x00344526 - 0x00344530 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344526(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344526: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x0034452Eu); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_0034452E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344530
 * Original: 0x00344530 - 0x00344575 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344530: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4309D8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034453Cu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034453C: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344545u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_00344545: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00344559; /* js: sign (negative) */

loc_0034454F: ;
    ecx = MEM32(esi);
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    goto loc_00344560;

loc_00344559: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034455Fu); RECOMP_ABI_CALL(0x0034A094u, sub_0034A094); /* call 0x0034A094 */

loc_0034455F: ;
    POP32(esp, ecx);

loc_00344560: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034456Cu); RECOMP_ABI_CALL(0x00344578u, sub_00344578); /* call 0x00344578 */

loc_0034456C: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344574u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00344574: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344575
 * Original: 0x00344575 - 0x00344578 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344575(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344575: ;
    esi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_00344578(); return; /* fallthrough 0x00344578 */

}

/**
 * sub_00344578
 * Original: 0x00344578 - 0x00344580 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344578(void)
{

loc_00344578: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034457Eu); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_0034457E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344580
 * Original: 0x00344580 - 0x003445EC (108 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344580: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003445CC; /* je: equal / zero */

loc_0034458B: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034459E; /* jne: not equal / not zero */

loc_00344596: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_003445CC; /* jns: not sign (positive) */

loc_0034459A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003445CC; /* jne: not equal / not zero */

loc_0034459E: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003445AB; /* jne: not equal / not zero */

loc_003445A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003445AAu); RECOMP_ABI_CALL(0x0034A804u, sub_0034A804); /* call 0x0034A804 */

loc_003445AA: ;
    POP32(esp, ecx);

loc_003445AB: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003445BB; /* jne: not equal / not zero */

loc_003445B2: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003445CC; /* jne: not equal / not zero */

loc_003445B8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_003445BB: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x40 (8-bit) */
    eax = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_003445D2; /* je: equal / zero */

loc_003445C5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003445D4; /* je: equal / zero */

loc_003445C9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_003445CC: ;
    eax = eax | 0xFFFFFFFFu;

loc_003445CF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003445D2: ;
    MEM8(eax) = LO8(ebx);

loc_003445D4: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFEFu;
    eax = eax | 1;
    MEM32(esi + 0xC) = eax;
    eax = ebx;
    eax = eax & 0xFF;
    goto loc_003445CF;

}

/**
 * sub_003445EC
 * Original: 0x003445EC - 0x00344627 (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003445EC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003445EC: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4309E8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003445F8u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003445F8: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344600u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_00344600: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344610u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00344610: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034461Eu); RECOMP_ABI_CALL(0x00344627u, sub_00344627); /* call 0x00344627 */

loc_0034461E: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344626u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00344626: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344627
 * Original: 0x00344627 - 0x00344631 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344627(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344627: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x0034462Fu); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_0034462F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344631
 * Original: 0x00344631 - 0x0034467E (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344631(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344631: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x4309F8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034463Du); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034463D: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344646u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_00344646: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0034465E; /* js: sign (negative) */

loc_00344650: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(ecx) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00344669;

loc_0034465E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344667u); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_00344667: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00344669: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344675u); RECOMP_ABI_CALL(0x00344681u, sub_00344681); /* call 0x00344681 */

loc_00344675: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034467Du); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034467D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034467E
 * Original: 0x0034467E - 0x00344681 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034467E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034467E: ;
    esi = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_00344681(); return; /* fallthrough 0x00344681 */

}

/**
 * sub_00344681
 * Original: 0x00344681 - 0x00344689 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344681(void)
{

loc_00344681: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00344687u); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00344687: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344689
 * Original: 0x00344689 - 0x00344704 (123 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344689(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344689: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x430A08);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344695u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00344695: ;
    ebx = MEM32(ebp + 8);
    edi = ebx;
    MEM32(ebp + -28) = ebx;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003446A7; /* jg: greater (signed >) */

loc_003446A3: ;
    eax = 0; /* xor self */
    goto loc_003446FE;

loc_003446A7: ;
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -32) = esi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003446B3u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_003446B3: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_003446B8: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003446EF; /* je: equal / zero */

loc_003446BD: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003446CC; /* js: sign (negative) */

loc_003446C2: ;
    ecx = MEM32(esi);
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    goto loc_003446D3;

loc_003446CC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003446D2u); RECOMP_ABI_CALL(0x0034A094u, sub_0034A094); /* call 0x0034A094 */

loc_003446D2: ;
    POP32(esp, ecx);

loc_003446D3: ;
    MEM32(ebp + -36) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003446E5; /* jne: not equal / not zero */

loc_003446DB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003446EF; /* jne: not equal / not zero */

loc_003446DF: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    goto loc_003446F2;

loc_003446E5: ;
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -40) = edi;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003446B8; /* jne: not equal / not zero */

loc_003446EF: ;
    MEM8(edi) = 0;

loc_003446F2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003446FBu); RECOMP_ABI_CALL(0x00344707u, sub_00344707); /* call 0x00344707 */

loc_003446FB: ;
    eax = MEM32(ebp + -28);

loc_003446FE: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344703u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00344703: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344704
 * Original: 0x00344704 - 0x00344707 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344704(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344704: ;
    esi = MEM32(ebp + -32);

    g_seh_ebp = ebp; sub_00344707(); return; /* fallthrough 0x00344707 */

}

/**
 * sub_00344707
 * Original: 0x00344707 - 0x0034470F (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344707(void)
{

loc_00344707: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034470Du); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_0034470D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034470F
 * Original: 0x0034470F - 0x0034477C (109 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034470F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034470F: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x430A18);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034471Bu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034471B: ;
    eax = MEM32(ebp + 8);
    edx = eax + 1;

loc_00344721: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344721; /* jne: not equal / not zero */

loc_00344728: ;
    eax = eax - edx;
    MEM32(ebp + -28) = eax;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344736u); RECOMP_ABI_CALL(0x0034391Fu, sub_0034391F); /* call 0x0034391F */

loc_00344736: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344741u); RECOMP_ABI_CALL(0x003494D6u, sub_003494D6); /* call 0x003494D6 */

loc_00344741: ;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00344752u); RECOMP_ABI_CALL(0x00343E1Du, sub_00343E1D); /* call 0x00343E1D */

loc_00344752: ;
    MEM32(ebp + -36) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -32));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034475Eu); RECOMP_ABI_CALL(0x0034955Eu, sub_0034955E); /* call 0x0034955E */

loc_0034475E: ;
    esp = esp + 0x1C;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034476Au); RECOMP_ABI_CALL(0x0034477Cu, sub_0034477C); /* call 0x0034477C */

loc_0034476A: ;
    eax = 0; /* xor self */
    ecx = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034477Bu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034477B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034477C
 * Original: 0x0034477C - 0x00344786 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034477C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034477C: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x00344784u); RECOMP_ABI_CALL(0x00343971u, sub_00343971); /* call 0x00343971 */

loc_00344784: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00344788
 * Original: 0x00344788 - 0x0034479C (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344788(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00344788: ;
    esp = esp - 0xC;
    MEMD(esp) = fp_top(); /* fst */
    PUSH32(esp, 0x00344793u); RECOMP_ABI_CALL(0x00348DA8u, sub_00348DA8); /* call 0x00348DA8 */

loc_00344793: ;
    PUSH32(esp, 0x00344798u); RECOMP_ABI_CALL(0x003447A5u, sub_003447A5); /* call 0x003447A5 */

loc_00344798: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003447A5
 * Original: 0x003447A5 - 0x00344853 (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003447A5(void)
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

loc_003447A5: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    if (_flags /* je: equal / zero */) goto loc_00344819;

loc_003447AC: ;
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003447B9; /* je: equal / zero */

loc_003447B4: ;
    PUSH32(esp, 0x003447B9u); RECOMP_ABI_CALL(0x00348D35u, sub_00348D35); /* call 0x00348D35 */

loc_003447B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF00000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003447EB; /* jae: above or equal (unsigned >=) */

loc_003447C0: ;
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */

loc_003447CE: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_003447DB: ;
    edx = 0xE;
    ecx = 0x47A3C0;
    g_seh_ebp = ebp; sub_00348DCB(); return; /* tail jmp 0x00348DCB */

loc_003447EB: ;
    if (CMP_A(_fa, _fb)) goto loc_00344827; /* ja: above (unsigned >) */

loc_003447ED: ;
    eax = MEM32(esp + 0xC);
    ecx = eax;
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 8);
    if ((eax != 0)) goto loc_00344827; /* jne: not equal / not zero */

loc_003447FE: ;
    ecx = ecx & 0x80000000u;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A7E6)); /* fld */
    if ((ecx == 0)) goto loc_003447CE; /* je: equal / zero */

loc_0034480E: ;
    fp_top() = -fp_top(); /* fchs */
    goto loc_003447CE;

loc_00344812: ;
    PUSH32(esp, 0x00344817u); RECOMP_ABI_CALL(0x00348D4Cu, sub_00348D4C); /* call 0x00348D4C */

loc_00344817: ;
    goto loc_00344834;

loc_00344819: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344812; /* jne: not equal / not zero */

loc_00344820: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00344812; /* jne: not equal / not zero */

loc_00344827: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A7DC)); /* fld */
    eax = 1;

loc_00344834: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_00344841: ;
    edx = 0xE;
    ecx = 0x47A3C0;
    PUSH32(esp, 0x00344851u); RECOMP_ABI_CALL(0x00348CE3u, sub_00348CE3); /* call 0x00348CE3 */

loc_00344851: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00344853
 * Original: 0x00344853 - 0x0034486B (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344853(void)
{

loc_00344853: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0034485Au); RECOMP_ABI_CALL(0x0034A9EFu, sub_0034A9EF); /* call 0x0034A9EF */

loc_0034485A: ;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0x00344861u); RECOMP_ABI_CALL(0x0034A876u, sub_0034A876); /* call 0x0034A876 */

loc_00344861: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0034486Au); RECOMP_ABI_CALL(0x003428C6u, sub_003428C6); /* call 0x003428C6 */

loc_0034486A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034486B
 * Original: 0x0034486B - 0x0034491A (175 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034486B(void)
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

loc_0034486B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = edi;

loc_00344878: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    eax = ZX8(MEM8(esi));
    if (CMP_LE(_fas, _fbs)) goto loc_00344890; /* jle: less or equal (signed <=) */

loc_00344884: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034488Cu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034488C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0034489D;

loc_00344890: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;

loc_0034489D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003448A4; /* je: equal / zero */

loc_003448A1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00344878;

loc_003448A4: ;
    eax = esi;
    ecx = eax + 1;

loc_003448A9: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003448A9; /* jne: not equal / not zero */

loc_003448B0: ;
    PUSH32(esp, 0);
    eax = eax - ecx;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003448C1u); RECOMP_ABI_CALL(0x00347C83u, sub_00347C83); /* call 0x00347C83 */

loc_003448C1: ;
    ecx = MEM32(ebp + 0xC);
    esp = esp + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003448D2; /* je: equal / zero */

loc_003448CB: ;
    edx = MEM32(eax + 4);
    edx = edx + esi;
    MEM32(ecx) = edx;

loc_003448D2: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x240) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), 0x240 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003448E5; /* je: equal / zero */

loc_003448DB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    fp_push(0.0); /* fldz */
    if (TEST_Z(_fa, _fb)) goto loc_00344916; /* je: equal / zero */

loc_003448E1: ;
    MEM32(ecx) = edi;
    goto loc_00344916;

loc_003448E5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x81) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x81 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034490A; /* je: equal / zero */

loc_003448EA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x2D (8-bit) */
    fp_push(MEMD(0x47AA18)); /* fld double */
    if (CMP_NE(_fa, _fb)) goto loc_003448F7; /* jne: not equal / not zero */

loc_003448F5: ;
    fp_top() = -fp_top(); /* fchs */

loc_003448F7: ;
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003448FFu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_003448FF: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    MEM32(eax) = 0x22;
    goto loc_00344916;

loc_0034490A: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344913; /* je: equal / zero */

loc_0034490F: ;
    fp_push(0.0); /* fldz */
    goto loc_003448F7;

loc_00344913: ;
    fp_push(MEMD(eax + 0x10)); /* fld double */

loc_00344916: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0034491A
 * Original: 0x0034491A - 0x00344953 (57 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034491A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0034491A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    esi = 0x430A24;
    edi = ebp + -32;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -32));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034494Du); RECOMP_ABI_CALL(0x0019F038u, sub_0019F038); /* call 0x0019F038 */

loc_0034494D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00344953
 * Original: 0x00344953 - 0x00344964 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344953(void)
{

loc_00344953: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax) = 0x430A44;
    esp += 4; return; /* ret */

}

/**
 * sub_00344964
 * Original: 0x00344964 - 0x003449A9 (69 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344964(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344964: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x430A44;
    eax = MEM32(edi);
    ecx = eax + 1;

loc_00344977: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344977; /* jne: not equal / not zero */

loc_0034497E: ;
    eax = eax - ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00344987u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00344987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0034499B; /* je: equal / zero */

loc_0034498F: ;
    edx = MEM32(edi);

loc_00344991: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344991; /* jne: not equal / not zero */

loc_0034499B: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003449A9
 * Original: 0x003449A9 - 0x003449F8 (79 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003449A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003449A9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x430A44;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(edi + 4);
    if (TEST_Z(_fa, _fb)) goto loc_003449EE; /* je: equal / zero */

loc_003449C4: ;
    ecx = eax + 1;

loc_003449C7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003449C7; /* jne: not equal / not zero */

loc_003449CE: ;
    eax = eax - ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003449D7u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_003449D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003449F1; /* je: equal / zero */

loc_003449DF: ;
    edi = MEM32(edi + 4);

loc_003449E2: ;
    SET_LO8(ecx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003449E2; /* jne: not equal / not zero */

loc_003449EC: ;
    goto loc_003449F1;

loc_003449EE: ;
    MEM32(esi + 4) = eax;

loc_003449F1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003449F8
 * Original: 0x003449F8 - 0x00344A0E (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003449F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003449F8: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    MEM32(ecx) = 0x430A44;
    if (CMP_EQ(_fa, _fb)) goto loc_00344A0D; /* je: equal / zero */

loc_00344A04: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0x00344A0Cu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00344A0C: ;
    POP32(esp, ecx);

loc_00344A0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344A0E
 * Original: 0x00344A0E - 0x00344A1B (13 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A0E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344A0E: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344A1A; /* jne: not equal / not zero */

loc_00344A15: ;
    eax = 0x430A4C;

loc_00344A1A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00344A1B
 * Original: 0x00344A1B - 0x00344A34 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A1B(void)
{

loc_00344A1B: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00344A28u); RECOMP_ABI_CALL(0x00344964u, sub_00344964); /* call 0x00344964 */

loc_00344A28: ;
    MEM32(esi) = 0x430A60;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344A34
 * Original: 0x00344A34 - 0x00344A4C (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A34(void)
{

loc_00344A34: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00344A40u); RECOMP_ABI_CALL(0x003449A9u, sub_003449A9); /* call 0x003449A9 */

loc_00344A40: ;
    MEM32(esi) = 0x430A60;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344A4C
 * Original: 0x00344A4C - 0x00344A57 (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A4C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344A4C: ;
    MEM32(ecx) = 0x430A60;
    g_seh_ebp = ebp; sub_003449F8(); return; /* tail jmp 0x003449F8 */

}

/**
 * sub_00344A57
 * Original: 0x00344A57 - 0x00344A70 (25 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A57(void)
{

loc_00344A57: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00344A64u); RECOMP_ABI_CALL(0x00344964u, sub_00344964); /* call 0x00344964 */

loc_00344A64: ;
    MEM32(esi) = 0x430A68;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344A70
 * Original: 0x00344A70 - 0x00344A88 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A70(void)
{

loc_00344A70: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00344A7Cu); RECOMP_ABI_CALL(0x003449A9u, sub_003449A9); /* call 0x003449A9 */

loc_00344A7C: ;
    MEM32(esi) = 0x430A68;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344A88
 * Original: 0x00344A88 - 0x00344A93 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A88(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344A88: ;
    MEM32(ecx) = 0x430A68;
    g_seh_ebp = ebp; sub_003449F8(); return; /* tail jmp 0x003449F8 */

}

/**
 * sub_00344A93
 * Original: 0x00344A93 - 0x00344AAB (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344A93(void)
{

loc_00344A93: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00344A9Fu); RECOMP_ABI_CALL(0x00344A57u, sub_00344A57); /* call 0x00344A57 */

loc_00344A9F: ;
    MEM32(esi) = 0x430A70;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344AAB
 * Original: 0x00344AAB - 0x00344AC3 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344AAB(void)
{

loc_00344AAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00344AB7u); RECOMP_ABI_CALL(0x00344A70u, sub_00344A70); /* call 0x00344A70 */

loc_00344AB7: ;
    MEM32(esi) = 0x430A70;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344AC3
 * Original: 0x00344AC3 - 0x00344ADF (28 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344AC3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344AC3: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00344ACBu); RECOMP_ABI_CALL(0x003449F8u, sub_003449F8); /* call 0x003449F8 */

loc_00344ACB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344AD9; /* je: equal / zero */

loc_00344AD2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00344AD8u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00344AD8: ;
    POP32(esp, ecx);

loc_00344AD9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344ADF
 * Original: 0x00344ADF - 0x00344AFB (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344ADF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344ADF: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00344AE7u); RECOMP_ABI_CALL(0x00344A4Cu, sub_00344A4C); /* call 0x00344A4C */

loc_00344AE7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344AF5; /* je: equal / zero */

loc_00344AEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00344AF4u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00344AF4: ;
    POP32(esp, ecx);

loc_00344AF5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344AFB
 * Original: 0x00344AFB - 0x00344B17 (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344AFB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344AFB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00344B03u); RECOMP_ABI_CALL(0x00344A88u, sub_00344A88); /* call 0x00344A88 */

loc_00344B03: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344B11; /* je: equal / zero */

loc_00344B0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00344B10u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00344B10: ;
    POP32(esp, ecx);

loc_00344B11: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00344B18
 * Original: 0x00344B18 - 0x00344B93 (123 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344B18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00344B18: ;
    edx = MEM32(esp + 4);
    MEM32(edx) = ebp;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = esp;
    eax = MEM32(esp);
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x20) = 0x56433230;
    MEM32(edx + 0x24) = 0;
    eax = MEM32(XBOX_FS_BASE);
    MEM32(edx + 0x18) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00344B55; /* jne: not equal / not zero */

loc_00344B4C: ;
    MEM32(edx + 0x1C) = 0xFFFFFFFFu;
    goto loc_00344B90;

loc_00344B55: ;
    ecx = MEM32(esp + 8);
    ecx = ecx | ecx;
    if ((ecx == 0)) goto loc_00344B67; /* je: equal / zero */

loc_00344B5D: ;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 0x24) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00344B6F; /* jne: not equal / not zero */

loc_00344B67: ;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0x1C) = eax;
    goto loc_00344B90;

loc_00344B6F: ;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 0x1C) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00344B90; /* je: equal / zero */

loc_00344B79: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x1C;
    edi = edx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00344B8C; /* jbe: below or equal (unsigned <=) */

loc_00344B87: ;
    ecx = 6;

loc_00344B8C: ;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00344B90: ;
    eax = eax - eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00344BA0
 * Original: 0x00344BA0 - 0x00344C98 (248 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344BA0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    goto loc_00344C15;

    /* nop */
    edi = edi;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 3 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344BD0; /* je: equal / zero */

loc_00344BBD: ;
    SET_LO8(eax, MEM8(ecx));
    ecx = ecx + 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C03; /* je: equal / zero */

loc_00344BC6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344BBD; /* jne: not equal / not zero */

loc_00344BCE: ;
    edi = edi;

loc_00344BD0: ;
    eax = MEM32(ecx);
    edx = 0x7EFEFEFF;
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81010100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x81010100u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344BD0; /* je: equal / zero */

loc_00344BE8: ;
    eax = MEM32(ecx + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C12; /* je: equal / zero */

loc_00344BEF: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C0D; /* je: equal / zero */

loc_00344BF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFF0000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C08; /* je: equal / zero */

loc_00344BFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFF000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C03; /* je: equal / zero */

loc_00344C01: ;
    goto loc_00344BD0;

loc_00344C03: ;
    edi = ecx + -1;
    goto loc_00344C15;

loc_00344C08: ;
    edi = ecx + -2;
    goto loc_00344C15;

loc_00344C0D: ;
    edi = ecx + -3;
    goto loc_00344C15;

loc_00344C12: ;
    edi = ecx + -4;

loc_00344C15: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 3 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C3E; /* je: equal / zero */

loc_00344C21: ;
    SET_LO8(edx, MEM8(ecx));
    ecx = ecx + 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C90; /* je: equal / zero */

loc_00344C2A: ;
    MEM8(edi) = LO8(edx);
    edi = edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344C21; /* jne: not equal / not zero */

loc_00344C37: ;
    goto loc_00344C3E;

loc_00344C39: ;
    MEM32(edi) = edx;
    edi = edi + 4;

loc_00344C3E: ;
    edx = 0x7EFEFEFF;
    eax = MEM32(ecx);
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edx = MEM32(ecx);
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81010100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x81010100u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C39; /* je: equal / zero */

loc_00344C58: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C90; /* je: equal / zero */

loc_00344C5C: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), HI8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C87; /* je: equal / zero */

loc_00344C60: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF0000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C7A; /* je: equal / zero */

loc_00344C68: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344C72; /* je: equal / zero */

loc_00344C70: ;
    goto loc_00344C39;

loc_00344C72: ;
    MEM32(edi) = edx;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00344C7A: ;
    MEM16(edi) = LO16(edx);
    eax = MEM32(esp + 8);
    MEM8(edi + 2) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00344C87: ;
    MEM16(edi) = LO16(edx);
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00344C90: ;
    MEM8(edi) = LO8(edx);
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00344CA0
 * Original: 0x00344CA0 - 0x00344D2B (139 bytes, 46 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344CA0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 3 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344CD0; /* je: equal / zero */

loc_00344CAC: ;
    SET_LO8(eax, MEM8(ecx));
    ecx = ecx + 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344D03; /* je: equal / zero */

loc_00344CB5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00344CAC; /* jne: not equal / not zero */

loc_00344CBD: ;
    eax = eax + 0;
    /* nop */
    /* nop */

loc_00344CD0: ;
    eax = MEM32(ecx);
    edx = 0x7EFEFEFF;
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81010100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x81010100u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344CD0; /* je: equal / zero */

loc_00344CE8: ;
    eax = MEM32(ecx + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344D21; /* je: equal / zero */

loc_00344CEF: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), HI8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344D17; /* je: equal / zero */

loc_00344CF3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFF0000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344D0D; /* je: equal / zero */

loc_00344CFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFF000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344D03; /* je: equal / zero */

loc_00344D01: ;
    goto loc_00344CD0;

loc_00344D03: ;
    eax = ecx + -1;
    ecx = MEM32(esp + 4);
    eax = eax - ecx;
    esp += 4; return; /* ret */

loc_00344D0D: ;
    eax = ecx + -2;
    ecx = MEM32(esp + 4);
    eax = eax - ecx;
    esp += 4; return; /* ret */

loc_00344D17: ;
    eax = ecx + -3;
    ecx = MEM32(esp + 4);
    eax = eax - ecx;
    esp += 4; return; /* ret */

loc_00344D21: ;
    eax = ecx + -4;
    ecx = MEM32(esp + 4);
    eax = eax - ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00344D30
 * Original: 0x00344D30 - 0x00344D90 (96 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00344D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00344D30: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344D8B; /* je: equal / zero */

loc_00344D3C: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00344D7B; /* jb: below (unsigned <) */

loc_00344D4A: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx & 3;
    if ((ecx == 0)) goto loc_00344D5D; /* je: equal / zero */

loc_00344D51: ;
    edx = edx - ecx;

loc_00344D53: ;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_00344D53; /* jne: not equal / not zero */

loc_00344D5D: ;
    ecx = eax;
    eax = eax << 8;
    eax = eax + ecx;
    ecx = eax;
    eax = eax << 0x10;
    eax = eax + ecx;
    ecx = edx;
    edx = edx & 3;
    ecx = ecx >> 2;
    if ((ecx == 0)) goto loc_00344D7B; /* je: equal / zero */

loc_00344D75: ;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00344D85; /* je: equal / zero */

loc_00344D7B: ;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    edx = edx - 1;
    if ((edx != 0)) goto loc_00344D7B; /* jne: not equal / not zero */

loc_00344D85: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00344D8B: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00344D90
 * Original: 0x00344D90 - 0x003450CD (829 bytes, 312 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00344D90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00344D90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    eax = ecx;
    edx = ecx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00344DB0; /* jbe: below or equal (unsigned <=) */

loc_00344DA8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344F2C; /* jb: below (unsigned <) */

loc_00344DB0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00344DCC; /* jne: not equal / not zero */

loc_00344DB8: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344DEC; /* jb: below (unsigned <) */

loc_00344DC3: ;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x344EDC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00344EECu) goto loc_00344EEC;
    if (_jt == 0x00344EF4u) goto loc_00344EF4;
    if (_jt == 0x00344F00u) goto loc_00344F00;
    if (_jt == 0x00344F14u) goto loc_00344F14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00344DCC: ;
    eax = edi;
    edx = 3;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    if (_cf) goto loc_00344DE4; /* jb: below (unsigned <) */

loc_00344DD8: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x344DF0)); return; /* indirect tail jmp */

loc_00344DE4: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x344EEC)); return; /* indirect tail jmp */

    /* nop */

loc_00344DEC: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x344E70); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00344E90u) goto loc_00344E90;
    if (_jt == 0x00344E98u) goto loc_00344E98;
    if (_jt == 0x00344EA0u) goto loc_00344EA0;
    if (_jt == 0x00344EA8u) goto loc_00344EA8;
    if (_jt == 0x00344EB0u) goto loc_00344EB0;
    if (_jt == 0x00344EB8u) goto loc_00344EB8;
    if (_jt == 0x00344EC0u) goto loc_00344EC0;
    if (_jt == 0x00344ED3u) goto loc_00344ED3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    _cf = (int)((((uint64_t)(MEM8(esi + 0x34)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi + 0x34) = MEM8(esi + 0x34) + LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(esi + ecx * 2)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(esi + ecx * 2) = MEM8(esi + ecx * 2) + HI8(ecx);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    PUSH32(esp, eax);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    MEM8(edi + 2) = LO8(eax);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344DEC; /* jb: below (unsigned <) */

loc_00344E20: ;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x344EDC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00344EECu) goto loc_00344EEC;
    if (_jt == 0x00344EF4u) goto loc_00344EF4;
    if (_jt == 0x00344F00u) goto loc_00344F00;
    if (_jt == 0x00344F14u) goto loc_00344F14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    MEM8(edi + 1) = LO8(eax);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344DEC; /* jb: below (unsigned <) */

loc_00344E46: ;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x344EDC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00344EECu) goto loc_00344EEC;
    if (_jt == 0x00344EF4u) goto loc_00344EF4;
    if (_jt == 0x00344F00u) goto loc_00344F00;
    if (_jt == 0x00344F14u) goto loc_00344F14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(1)) >> 32) & 1);
    esi = esi + 1;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(1)) >> 32) & 1);
    edi = edi + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344DEC; /* jb: below (unsigned <) */

loc_00344E64: ;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x344EDC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00344EECu) goto loc_00344EEC;
    if (_jt == 0x00344EF4u) goto loc_00344EF4;
    if (_jt == 0x00344F00u) goto loc_00344F00;
    if (_jt == 0x00344F14u) goto loc_00344F14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    MEM32(esi + 0x34) = ROR32(MEM32(esi + 0x34), LO8(ecx));
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(eax));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    eax = 0xB000344Eu;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x4E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x4E (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    SET_LO8(eax, MEM8(0x9800344Eu));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    /* nop */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);

loc_00344E90: ;
    eax = MEM32(esi + ecx * 4 + -28);
    MEM32(edi + ecx * 4 + -28) = eax;

loc_00344E98: ;
    eax = MEM32(esi + ecx * 4 + -24);
    MEM32(edi + ecx * 4 + -24) = eax;

loc_00344EA0: ;
    eax = MEM32(esi + ecx * 4 + -20);
    MEM32(edi + ecx * 4 + -20) = eax;

loc_00344EA8: ;
    eax = MEM32(esi + ecx * 4 + -16);
    MEM32(edi + ecx * 4 + -16) = eax;

loc_00344EB0: ;
    eax = MEM32(esi + ecx * 4 + -12);
    MEM32(edi + ecx * 4 + -12) = eax;

loc_00344EB8: ;
    eax = MEM32(esi + ecx * 4 + -8);
    MEM32(edi + ecx * 4 + -8) = eax;

loc_00344EC0: ;
    eax = MEM32(esi + ecx * 4 + -4);
    MEM32(edi + ecx * 4 + -4) = eax;
    eax = ecx * 4;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;

loc_00344ED3: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x344EDC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00344EECu) goto loc_00344EEC;
    if (_jt == 0x00344EF4u) goto loc_00344EF4;
    if (_jt == 0x00344F00u) goto loc_00344F00;
    if (_jt == 0x00344F14u) goto loc_00344F14;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;
    /* TODO: in al, dx */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    /* TODO: hlt  */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _cf = (int)((((uint64_t)(MEM8(edi + 0x34)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edi + 0x34) = MEM8(edi + 0x34) + LO8(ecx);
    _cf = (int)((((uint64_t)(MEM8(edi + ecx * 2)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edi + ecx * 2) = MEM8(edi + ecx * 2) + LO8(edx);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);

loc_00344EEC: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00344EF4: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00344F00: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00344F14: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00344F2C: ;
    esi = ecx + esi + -4;
    edi = ecx + edi + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00344F60; /* jne: not equal / not zero */

loc_00344F3C: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344F54; /* jb: below (unsigned <) */

loc_00344F47: ;
    g_df = 1; /* std */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x345078); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00345088u) goto loc_00345088;
    if (_jt == 0x00345090u) goto loc_00345090;
    if (_jt == 0x003450A0u) goto loc_003450A0;
    if (_jt == 0x003450B4u) goto loc_003450B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;

loc_00344F54: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x345028)); return; /* indirect tail jmp */

    /* nop */

loc_00344F60: ;
    eax = edi;
    edx = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344F78; /* jb: below (unsigned <) */

loc_00344F6C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x344F7C)); return; /* indirect tail jmp */

loc_00344F78: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x345078); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00345088u) goto loc_00345088;
    if (_jt == 0x00345090u) goto loc_00345090;
    if (_jt == 0x003450A0u) goto loc_003450A0;
    if (_jt == 0x003450B4u) goto loc_003450B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    MEM16(edi + 0x34) = 0 /* seg:cs */;
    _cf = (int)((((uint64_t)(MEM8(eax + -671075249)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + -671075249) = MEM8(eax + -671075249) + HI8(edx);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    MEM8(edi + 3) = LO8(eax);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(1));
    esi = esi - 1;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(1));
    edi = edi - 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344F54; /* jb: below (unsigned <) */

loc_00344FA2: ;
    g_df = 1; /* std */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x345078); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00345088u) goto loc_00345088;
    if (_jt == 0x00345090u) goto loc_00345090;
    if (_jt == 0x003450A0u) goto loc_003450A0;
    if (_jt == 0x003450B4u) goto loc_003450B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    MEM8(edi + 2) = LO8(eax);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(2));
    esi = esi - 2;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(2));
    edi = edi - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344F54; /* jb: below (unsigned <) */

loc_00344FCC: ;
    g_df = 1; /* std */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x345078); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00345088u) goto loc_00345088;
    if (_jt == 0x00345090u) goto loc_00345090;
    if (_jt == 0x003450A0u) goto loc_003450A0;
    if (_jt == 0x003450B4u) goto loc_003450B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    MEM8(edi + 1) = LO8(eax);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(3));
    esi = esi - 3;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(3));
    edi = edi - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00344F54; /* jb: below (unsigned <) */

loc_00344FFE: ;
    g_df = 1; /* std */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x345078); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00345088u) goto loc_00345088;
    if (_jt == 0x00345090u) goto loc_00345090;
    if (_jt == 0x003450A0u) goto loc_003450A0;
    if (_jt == 0x003450B4u) goto loc_003450B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x50));
    SET_LO8(eax, LO8(eax) - 0x50);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0x50);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x50) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x50 (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    PUSH32(esp, esp);
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    POP32(esp, esp);
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    /* TODO: outsd dx, dword ptr [esi] */
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    eax = MEM32(esi + ecx * 4 + 0x1C);
    MEM32(edi + ecx * 4 + 0x1C) = eax;
    eax = MEM32(esi + ecx * 4 + 0x18);
    MEM32(edi + ecx * 4 + 0x18) = eax;
    eax = MEM32(esi + ecx * 4 + 0x14);
    MEM32(edi + ecx * 4 + 0x14) = eax;
    eax = MEM32(esi + ecx * 4 + 0x10);
    MEM32(edi + ecx * 4 + 0x10) = eax;
    eax = MEM32(esi + ecx * 4 + 0xC);
    MEM32(edi + ecx * 4 + 0xC) = eax;
    eax = MEM32(esi + ecx * 4 + 8);
    MEM32(edi + ecx * 4 + 8) = eax;
    eax = MEM32(esi + ecx * 4 + 4);
    MEM32(edi + ecx * 4 + 4) = eax;
    eax = ecx * 4;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    { uint32_t _jt = MEM32(edx * 4 + 0x345078); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00345088u) goto loc_00345088;
    if (_jt == 0x00345090u) goto loc_00345090;
    if (_jt == 0x003450A0u) goto loc_003450A0;
    if (_jt == 0x003450B4u) goto loc_003450B4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;
    MEM8(eax + 0x34) = LO8(edx);
    _cf = (int)((((uint64_t)(MEM8(eax + -1610599344)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(eax + -1610599344) = MEM8(eax + -1610599344) + LO8(edx);
    PUSH32(esp, eax);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    SET_HI8(eax, 0x50);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);

loc_00345088: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00345090: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003450A0: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003450B4: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003450D0
 * Original: 0x003450D0 - 0x00345148 (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003450D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003450D0: ;
    ebx = MEM32(esp + 4);
    ebp = MEM32(ebx);
    esi = MEM32(ebx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(XBOX_FS_BASE)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(XBOX_FS_BASE) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003450EB; /* je: equal / zero */

loc_003450E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003450E8u); RECOMP_ABI_CALL(0x00341358u, sub_00341358); /* call 0x00341358 */

loc_003450E8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_003450EB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00345120; /* je: equal / zero */

loc_003450F0: ;
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003450F9u); RECOMP_ABI_CALL(0x0034AAA4u, sub_0034AAA4); /* call 0x0034AAA4 */

loc_003450F9: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if ((eax == 0)) goto loc_00345113; /* je: equal / zero */

loc_003450FD: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56433230) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x56433230 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00345113; /* jne: not equal / not zero */

loc_00345107: ;
    eax = MEM32(ebx + 0x24);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    if ((eax == 0)) goto loc_00345120; /* je: equal / zero */

loc_0034510E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00345111u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00345111: ;
    goto loc_00345120;

loc_00345113: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034511Du); RECOMP_ABI_CALL(0x0034139Au, sub_0034139A); /* call 0x0034139A */

loc_0034511D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_00345120: ;
    PUSH32(esp, 0);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, 0x0034512Au); RECOMP_ABI_CALL(0x0034142Eu, sub_0034142E); /* call 0x0034142E */

loc_0034512A: ;
    edx = ebx;
    ebx = MEM32(edx + 4);
    edi = MEM32(edx + 8);
    esi = MEM32(edx + 0xC);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    esp = MEM32(edx + 0x10);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_0034514C
 * Original: 0x0034514C - 0x00345166 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034514C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034514C: ;
    goto loc_00345152;

    edi = edi;
    goto loc_0034515C;

loc_00345152: ;
    edx = 0x47A842;
    g_seh_ebp = ebp; sub_00348869(); return; /* tail jmp 0x00348869 */

loc_0034515C: ;
    edx = 0x47A842;
    g_seh_ebp = ebp; sub_00348696(); return; /* tail jmp 0x00348696 */

}

/**
 * sub_00345168
 * Original: 0x00345168 - 0x0034518B (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345168(void)
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

loc_00345168: ;
    goto loc_00345182;

    edi = edi;
    goto loc_0034516E;

loc_0034516E: ;
    esp = esp - 0xC;
    MEMD(esp) = fp_top(); /* fst */
    PUSH32(esp, 0x00345179u); RECOMP_ABI_CALL(0x00348DA8u, sub_00348DA8); /* call 0x00348DA8 */

loc_00345179: ;
    PUSH32(esp, 0x0034517Eu); RECOMP_ABI_CALL(0x0034518Bu, sub_0034518B); /* call 0x0034518B */

loc_0034517E: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00345182: ;
    edx = esp + 4;
    PUSH32(esp, 0x0034518Bu); RECOMP_ABI_CALL(0x00348D65u, sub_00348D65); /* call 0x00348D65 */

    g_seh_ebp = ebp; sub_0034518B(); return; /* fallthrough 0x0034518B */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034518B
 * Original: 0x0034518B - 0x00345243 (184 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034518B(void)
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

loc_0034518B: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    if (_flags /* je: equal / zero */) goto loc_003451DE;

loc_00345192: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003451A4; /* je: equal / zero */

loc_0034519E: ;
    g_fp_control_word = MEM16(0x43138C); /* fldcw word ptr [0x43138c] */

loc_003451A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FF00000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00345209; /* je: equal / zero */

loc_003451AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003451F3; /* jne: not equal / not zero */

loc_003451B2: ;
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */

loc_003451B8: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_003451C5: ;
    ecx = 0x47A3D0;
    edx = 0x1A;
    g_seh_ebp = ebp; sub_00348DCB(); return; /* tail jmp 0x00348DCB */

loc_003451D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003451F3; /* jne: not equal / not zero */

loc_003451DC: ;
    goto loc_003451B2;

loc_003451DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345202; /* jne: not equal / not zero */

loc_003451E5: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345202; /* jne: not equal / not zero */

loc_003451EC: ;
    eax = eax & 0x80000000u;
    if ((eax == 0)) goto loc_003451B8; /* je: equal / zero */

loc_003451F3: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A7DC)); /* fld */
    eax = 1;
    goto loc_00345224;

loc_00345202: ;
    PUSH32(esp, 0x00345207u); RECOMP_ABI_CALL(0x00348D4Cu, sub_00348D4C); /* call 0x00348D4C */

loc_00345207: ;
    goto loc_00345224;

loc_00345209: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003451D5; /* jne: not equal / not zero */

loc_00345210: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003451D5; /* jne: not equal / not zero */

loc_00345217: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A812)); /* fld */
    eax = 2;

loc_00345224: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_00345231: ;
    ecx = 0x47A3D0;
    edx = 0x1A;
    PUSH32(esp, 0x00345241u); RECOMP_ABI_CALL(0x00348CE3u, sub_00348CE3); /* call 0x00348CE3 */

loc_00345241: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00345244
 * Original: 0x00345244 - 0x00345258 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345244(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00345244: ;
    esp = esp - 0xC;
    MEMD(esp) = fp_top(); /* fst */
    PUSH32(esp, 0x0034524Fu); RECOMP_ABI_CALL(0x00348DA8u, sub_00348DA8); /* call 0x00348DA8 */

loc_0034524F: ;
    PUSH32(esp, 0x00345254u); RECOMP_ABI_CALL(0x00345261u, sub_00345261); /* call 0x00345261 */

loc_00345254: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00345258
 * Original: 0x00345258 - 0x00345261 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345258(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345258: ;
    edx = esp + 4;
    PUSH32(esp, 0x00345261u); RECOMP_ABI_CALL(0x00348D65u, sub_00348D65); /* call 0x00348D65 */

    g_seh_ebp = ebp; sub_00345261(); return; /* fallthrough 0x00345261 */

}

/**
 * sub_00345261
 * Original: 0x00345261 - 0x003452FE (157 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345261(void)
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

loc_00345261: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    eax = MEM32(esp + 0xC);
    if (_flags /* je: equal / zero */) goto loc_003452BD;

loc_0034526C: ;
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345279; /* je: equal / zero */

loc_00345274: ;
    PUSH32(esp, 0x00345279u); RECOMP_ABI_CALL(0x00348D35u, sub_00348D35); /* call 0x00348D35 */

loc_00345279: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034529F; /* jne: not equal / not zero */

loc_00345280: ;
    fp_top() = sqrt(fp_top()); /* fsqrt */

loc_00345282: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_0034528F: ;
    edx = 5;
    ecx = 0x47A3D4;
    g_seh_ebp = ebp; sub_00348DCB(); return; /* tail jmp 0x00348DCB */

loc_0034529F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FF00000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003452D2; /* jne: not equal / not zero */

loc_003452A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003452D2; /* jne: not equal / not zero */

loc_003452AD: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003452D2; /* jne: not equal / not zero */

loc_003452B4: ;
    goto loc_00345282;

loc_003452B6: ;
    PUSH32(esp, 0x003452BBu); RECOMP_ABI_CALL(0x00348D4Cu, sub_00348D4C); /* call 0x00348D4C */

loc_003452BB: ;
    goto loc_003452DF;

loc_003452BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003452B6; /* jne: not equal / not zero */

loc_003452C4: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003452B6; /* jne: not equal / not zero */

loc_003452CB: ;
    eax = eax & 0x80000000u;
    if ((eax == 0)) goto loc_00345282; /* je: equal / zero */

loc_003452D2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x47A7DC)); /* fld */
    eax = 1;

loc_003452DF: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00348DBE(); return; } /* jne: not equal / not zero */

loc_003452EC: ;
    edx = 5;
    ecx = 0x47A3D4;
    PUSH32(esp, 0x003452FCu); RECOMP_ABI_CALL(0x00348CE3u, sub_00348CE3); /* call 0x00348CE3 */

loc_003452FC: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003452FE
 * Original: 0x003452FE - 0x003453AF (177 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003452FE(void)
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

loc_003452FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, 0x133F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345315u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00345315: ;
    edi = eax;
    eax = MEM32(ebp + 0xE);
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0034538E; /* jne: not equal / not zero */

loc_00345326: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345333u); RECOMP_ABI_CALL(0x00346896u, sub_00346896); /* call 0x00346896 */

loc_00345333: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_00345382; /* je: equal / zero */

loc_00345338: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00345374; /* je: equal / zero */

loc_0034533B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_00345363; /* je: equal / zero */

loc_00345342: ;
    fp_top() = fp_top() + MEMD(0x3D45C8); /* fadd qword ptr [0x3d45c8] */
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x15);
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034535Eu); RECOMP_ABI_CALL(0x00346F7Cu, sub_00346F7C); /* call 0x00346F7C */

loc_0034535E: ;
    esp = esp + 0x1C;
    goto loc_003453AB;

loc_00345363: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x15);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034536Fu); RECOMP_ABI_CALL(0x00346F29u, sub_00346F29); /* call 0x00346F29 */

loc_0034536F: ;
    esp = esp + 0x10;
    goto loc_003453AB;

loc_00345374: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034537Bu); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_0034537B: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    fp_top() = -fp_top(); /* fchs */
    goto loc_003453A9;

loc_00345382: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345389u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00345389: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    goto loc_003453A9;

loc_0034538E: ;
    eax = MEM32(ebp + 0xC);
    eax = eax & 0x7FFFFFFF;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003453A6u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_003453A6: ;
    fp_push(MEMD(ebp + -8)); /* fld double */

loc_003453A9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003453AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_003453B0
 * Original: 0x003453B0 - 0x003453BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003453B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003453B0: ;
    edx = 0x47AA20;
    g_seh_ebp = ebp; sub_003486D3(); return; /* tail jmp 0x003486D3 */

}

/**
 * sub_003453C4
 * Original: 0x003453C4 - 0x003453CD (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003453C4(void)
{

loc_003453C4: ;
    PUSH32(esp, 0x003453C9u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_003453C9: ;
    eax = eax + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003453CD
 * Original: 0x003453CD - 0x003453D6 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003453CD(void)
{

loc_003453CD: ;
    PUSH32(esp, 0x003453D2u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_003453D2: ;
    eax = eax + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003453D6
 * Original: 0x003453D6 - 0x00345449 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003453D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003453D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003453DCu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_003453DC: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esi = 0; /* xor self */

loc_003453E5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi * 8 + 0x47A3E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi * 8 + 0x47A3E0) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034540C; /* je: equal / zero */

loc_003453EE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2D (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003453E5; /* jb: below (unsigned <) */

loc_003453F4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034541D; /* jb: below (unsigned <) */

loc_003453F9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0034541D; /* ja: above (unsigned >) */

loc_003453FE: ;
    PUSH32(esp, 0x00345403u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345403: ;
    MEM32(eax + 8) = 0xD;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034540C: ;
    PUSH32(esp, 0x00345411u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345411: ;
    ecx = MEM32(esi * 8 + 0x47A3E4);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034541D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xBC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0034543B; /* jb: below (unsigned <) */

loc_00345425: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xCA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0034543B; /* ja: above (unsigned >) */

loc_0034542D: ;
    PUSH32(esp, 0x00345432u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345432: ;
    MEM32(eax + 8) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034543B: ;
    PUSH32(esp, 0x00345440u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345440: ;
    MEM32(eax + 8) = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00345449
 * Original: 0x00345449 - 0x00345453 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345449(void)
{

loc_00345449: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x00345452u); RECOMP_ABI_CALL(0x0019F0A1u, sub_0019F0A1); /* call 0x0019F0A1 */

loc_00345452: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00345453
 * Original: 0x00345453 - 0x003454BB (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345453(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345453: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430A78);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034545Fu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034545F: ;
    eax = MEM32(0x5BA794);
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(ecx + eax * 4);
    eax = eax + 0xC;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345481; /* jne: not equal / not zero */

loc_0034547A: ;
    esi = MEM32(ebp + 8);
    MEM32(eax) = esi;
    goto loc_00345497;

loc_00345481: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x4C);
    MEM32(esi + 0x4C) = ecx;
    ecx = MEM32(eax + 0x50);
    MEM32(esi + 0x50) = ecx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345496u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00345496: ;
    POP32(esp, ecx);

loc_00345497: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x50));
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003454A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003454A1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003454A7u); RECOMP_ABI_CALL(0x00345449u, sub_00345449); /* call 0x00345449 */

loc_003454A7: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    MEM32(ebp + -28) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003454B8u); RECOMP_ABI_CALL(0x0034AB90u, sub_0034AB90); /* call 0x0034AB90 */

loc_003454B8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003454A7
 * Original: 0x003454A7 - 0x003454BB (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003454A7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003454A7: ;
    eax = MEM32(ebp + -20);
    ecx = MEM32(eax);
    ecx = MEM32(ecx);
    MEM32(ebp + -28) = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003454B8u); RECOMP_ABI_CALL(0x0034AB90u, sub_0034AB90); /* call 0x0034AB90 */

loc_003454B8: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003454BB
 * Original: 0x003454BB - 0x003454C7 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003454BB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003454BB: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x003454C6u); RECOMP_ABI_CALL(0x003428C6u, sub_003428C6); /* call 0x003428C6 */

loc_003454C6: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003454C7
 * Original: 0x003454C7 - 0x00345550 (137 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003454C7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003454C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003454E4; /* jne: not equal / not zero */

loc_003454D5: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003454DAu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_003454DA: ;
    MEM32(eax) = 0x16;
    eax = 0; /* xor self */
    goto loc_0034554C;

loc_003454E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003454F1u); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_003454F1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00345537; /* je: equal / zero */

loc_003454F9: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003454FFu); RECOMP_ABI_CALL(0x00346593u, sub_00346593); /* call 0x00346593 */

loc_003454FF: ;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    MEM32(esi + 0x50) = eax;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 0x4C) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00345517; /* jne: not equal / not zero */

loc_00345514: ;
    eax = ebp + 0x10;

loc_00345517: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, esi);
    PUSH32(esp, 0x345453);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034552Cu); RECOMP_ABI_CALL(0x0019F22Eu, sub_0019F22E); /* call 0x0019F22E */

loc_0034552C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034554B; /* jne: not equal / not zero */

loc_00345530: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345535u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00345535: ;
    ebx = eax;

loc_00345537: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034553Du); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0034553D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00345549; /* je: equal / zero */

loc_00345542: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345548u); RECOMP_ABI_CALL(0x003453D6u, sub_003453D6); /* call 0x003453D6 */

loc_00345548: ;
    POP32(esp, ecx);

loc_00345549: ;
    eax = 0; /* xor self */

loc_0034554B: ;
    POP32(esp, esi);

loc_0034554C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00345550
 * Original: 0x00345550 - 0x00345599 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00345550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = 0x5D9A30;

loc_00345559: ;
    _fa = (uint32_t)(MEM32(esi * 8 + 0x47A554)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 8 + 0x47A554), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345581; /* jne: not equal / not zero */

loc_00345563: ;
    eax = esi * 8 + 0x47A550;
    MEM32(eax) = edi;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, MEM32(eax));
    edi = edi + 0x1C;
    PUSH32(esp, 0x0034557Bu); RECOMP_ABI_CALL(0x0034B1A4u, sub_0034B1A4); /* call 0x0034B1A4 */

loc_0034557B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0034558D; /* je: equal / zero */

loc_00345581: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00345559; /* jl: less (signed <) */

loc_00345587: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034558A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0034558D: ;
    MEM32(esi * 8 + 0x47A550) = MEM32(esi * 8 + 0x47A550) & 0;
    eax = 0; /* xor self */
    goto loc_0034558A;

}

/**
 * sub_00345599
 * Original: 0x00345599 - 0x003455C2 (41 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345599(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00345599: ;
    PUSH32(esp, esi);
    esi = 0x47A550;

loc_0034559F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003455B5; /* je: equal / zero */

loc_003455A5: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003455B5; /* je: equal / zero */

loc_003455AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003455B1u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_003455B1: ;
    MEM32(esi) = MEM32(esi) & 0;
    POP32(esp, ecx);

loc_003455B5: ;
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A670) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47A670 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034559F; /* jl: less (signed <) */

loc_003455C0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003455C2
 * Original: 0x003455C2 - 0x003455D4 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003455C2(void)
{

loc_003455C2: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax * 8 + 0x47A550));
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003455D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003455D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003455D4
 * Original: 0x003455D4 - 0x0034566B (151 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003455D4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003455D4: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x430A88);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003455E0u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003455E0: ;
    esi = MEM32(ebp + 8);
    esi = esi * 8 + 0x47A550;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345662; /* jne: not equal / not zero */

loc_003455F0: ;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003455F7u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_003455F7: ;
    POP32(esp, ecx);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034560B; /* jne: not equal / not zero */

loc_003455FE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345603u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00345603: ;
    MEM32(eax) = 0xC;
    goto loc_0034564A;

loc_0034560B: ;
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345612u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_00345612: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345652; /* jne: not equal / not zero */

loc_0034561A: ;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345625u); RECOMP_ABI_CALL(0x0034B1A4u, sub_0034B1A4); /* call 0x0034B1A4 */

loc_00345625: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034564E; /* jne: not equal / not zero */

loc_0034562B: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345631u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00345631: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345636u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00345636: ;
    MEM32(eax) = 0xC;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345647u); RECOMP_ABI_CALL(0x0034139Au, sub_0034139A); /* call 0x0034139A */

loc_00345647: ;
    esp = esp + 0xC;

loc_0034564A: ;
    eax = 0; /* xor self */
    goto loc_00345665;

loc_0034564E: ;
    MEM32(esi) = edi;
    goto loc_00345659;

loc_00345652: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345658u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00345658: ;
    POP32(esp, ecx);

loc_00345659: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345662u); RECOMP_ABI_CALL(0x0034566Bu, sub_0034566B); /* call 0x0034566B */

loc_00345662: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00345665: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034566Au); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034566A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034566B
 * Original: 0x0034566B - 0x00345674 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034566B(void)
{

loc_0034566B: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00345672u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_00345672: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00345674
 * Original: 0x00345674 - 0x003456A2 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345674(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00345674: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax * 8 + 0x47A550;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345698; /* jne: not equal / not zero */

loc_00345685: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034568Bu); RECOMP_ABI_CALL(0x003455D4u, sub_003455D4); /* call 0x003455D4 */

loc_0034568B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00345698; /* jne: not equal / not zero */

loc_00345690: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x00345697u); RECOMP_ABI_CALL(0x00345AB0u, sub_00345AB0); /* call 0x00345AB0 */

loc_00345697: ;
    POP32(esp, ecx);

loc_00345698: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x003456A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003456A0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003456A2
 * Original: 0x003456A2 - 0x003456FA (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003456A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003456A2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003456B0u); RECOMP_ABI_CALL(0x00342903u, sub_00342903); /* call 0x00342903 */

loc_003456B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003456E0; /* je: equal / zero */

loc_003456B6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi);
    if (CMP_LE(_fas, _fbs)) goto loc_003456CF; /* jle: less or equal (signed <=) */

loc_003456C3: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003456CBu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_003456CB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003456DC;

loc_003456CF: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;

loc_003456DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003456B6; /* jne: not equal / not zero */

loc_003456E0: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(ecx, MEM8(0x47A7D4));
    MEM8(esi) = LO8(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003456EB: ;
    SET_LO8(ecx, MEM8(esi));
    MEM8(esi) = LO8(eax);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(ecx, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003456EB; /* jne: not equal / not zero */

loc_003456F8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003456FA
 * Original: 0x003456FA - 0x00345745 (75 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003456FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003456FA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x47A7D4));
    goto loc_0034570C;

loc_00345707: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345712; /* je: equal / zero */

loc_0034570B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034570C: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345707; /* jne: not equal / not zero */

loc_00345712: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00345743; /* je: equal / zero */

loc_00345719: ;
    goto loc_00345726;

loc_0034571B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x65 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034572C; /* je: equal / zero */

loc_00345720: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x45) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x45 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034572C; /* je: equal / zero */

loc_00345725: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00345726: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034571B; /* jne: not equal / not zero */

loc_0034572C: ;
    edx = eax;

loc_0034572E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034572E; /* je: equal / zero */

loc_00345734: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345739; /* jne: not equal / not zero */

loc_00345738: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345739: ;
    SET_LO8(ecx, MEM8(edx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM8(eax) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00345739; /* jne: not equal / not zero */

loc_00345743: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00345745
 * Original: 0x00345745 - 0x0034575F (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00345745(void)
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

loc_00345745: ;
    eax = MEM32(esp + 4);
    fp_push(MEMD(eax)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034575C; /* jne: not equal / not zero */

loc_00345758: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_0034575C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034575F
 * Original: 0x0034575F - 0x0034579D (62 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034575F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034575F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_00345788; /* je: equal / zero */

loc_0034576D: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345776u); RECOMP_ABI_CALL(0x0034B529u, sub_0034B529); /* call 0x0034B529 */

loc_00345776: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00345788: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345791u); RECOMP_ABI_CALL(0x0034B556u, sub_0034B556); /* call 0x0034B556 */

loc_00345791: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0034579D
 * Original: 0x0034579D - 0x003457C0 (35 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034579D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034579D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003457BF; /* je: equal / zero */

loc_003457A1: ;
    eax = ecx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_003457A7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003457A7; /* jne: not equal / not zero */

loc_003457AE: ;
    eax = eax - edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003457BBu); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_003457BB: ;
    esp = esp + 0xC;
    POP32(esp, edi);

loc_003457BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003457C0
 * Original: 0x003457C0 - 0x00345869 (169 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003457C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003457C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_003457E7; /* je: equal / zero */

loc_003457CE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0x2D (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = eax;
    ecx = ecx + edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003457E7u); RECOMP_ABI_CALL(0x0034579Du, sub_0034579D); /* call 0x0034579D */

loc_003457E7: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0x2D (32-bit) */
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003457F4; /* jne: not equal / not zero */

loc_003457EE: ;
    MEM8(edi) = 0x2D;
    eax = edi + 1;

loc_003457F4: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0034580C; /* jle: less or equal (signed <=) */

loc_003457FB: ;
    esi = eax + 1;
    SET_LO8(ecx, MEM8(esi));
    MEM8(eax) = LO8(ecx);
    SET_LO8(ecx, MEM8(0x47A7D4));
    eax = esi;
    MEM8(eax) = LO8(ecx);

loc_0034580C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ecx) (8-bit) */
    esi = 0x430A94;
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx + eax;
    ecx = ecx + edi;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    if (CMP_EQ(_fa, _fb)) goto loc_0034582B; /* je: equal / zero */

loc_00345828: ;
    MEM8(ecx) = 0x45;

loc_0034582B: ;
    eax = MEM32(ebx + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x30 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345862; /* je: equal / zero */

loc_00345834: ;
    eax = MEM32(ebx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0034583F; /* jns: not sign (positive) */

loc_0034583A: ;
    eax = (uint32_t)(-(int32_t)eax);
    MEM8(ecx) = 0x2D;

loc_0034583F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034584F; /* jl: less (signed <) */

loc_00345845: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x64);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    eax = edx;

loc_0034584F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0034585F; /* jl: less (signed <) */

loc_00345855: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xA);
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM8(ecx) = MEM8(ecx) + LO8(eax);
    eax = edx;

loc_0034585F: ;
    MEM8(ecx + 1) = MEM8(ecx + 1) + LO8(eax);

loc_00345862: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00345869
 * Original: 0x00345869 - 0x003458C7 (94 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00345869(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00345869: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345886u); RECOMP_ABI_CALL(0x0034B6BCu, sub_0034B6BC); /* call 0x0034B6BC */

loc_00345886: ;
    esi = MEM32(ebp + 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = esi + 1;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x2D (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    eax = eax + MEM32(ebp + 0xC);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003458ACu); RECOMP_ABI_CALL(0x0034B583u, sub_0034B583); /* call 0x0034B583 */

loc_003458AC: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = ebp + -16;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003458BDu); RECOMP_ABI_CALL(0x003457C0u, sub_003457C0); /* call 0x003457C0 */

loc_003458BD: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x2C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003458C7
 * Original: 0x003458C7 - 0x0034596E (167 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003458C7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003458C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003458F4; /* je: equal / zero */

loc_003458D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003458F4; /* jne: not equal / not zero */

loc_003458DE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x2D (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx + eax;
    ecx = ecx + MEM32(ebp + 8);
    eax = ecx;
    MEM8(eax) = 0x30;
    MEM8(eax + 1) = 0;

loc_003458F4: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x2D (32-bit) */
    ebx = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00345900; /* jne: not equal / not zero */

loc_003458FC: ;
    MEM8(ebx) = 0x2D;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00345900: ;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00345917; /* jg: greater (signed >) */

loc_0034590A: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345911u); RECOMP_ABI_CALL(0x0034579Du, sub_0034579D); /* call 0x0034579D */

loc_00345911: ;
    MEM8(ebx) = 0x30;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00345919;

loc_00345917: ;
    ebx = ebx + eax;

loc_00345919: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00345966; /* jle: less or equal (signed <=) */

loc_0034591F: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345926u); RECOMP_ABI_CALL(0x0034579Du, sub_0034579D); /* call 0x0034579D */

loc_00345926: ;
    SET_LO8(eax, MEM8(0x47A7D4));
    MEM8(ebx) = LO8(eax);
    edi = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00345966; /* jge: greater or equal (signed >=) */

loc_00345935: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345942; /* jne: not equal / not zero */

loc_0034593D: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00345945; /* jl: less (signed <) */

loc_00345942: ;
    MEM32(ebp + 0xC) = edi;

loc_00345945: ;
    esi = MEM32(ebp + 0xC);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034594Fu); RECOMP_ABI_CALL(0x0034579Du, sub_0034579D); /* call 0x0034579D */

loc_0034594F: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0x30303030;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00345966: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0034596E
 * Original: 0x0034596E - 0x003459C0 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034596E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034596E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034598Au); RECOMP_ABI_CALL(0x0034B6BCu, sub_0034B6BC); /* call 0x0034B6BC */

loc_0034598A: ;
    esi = MEM32(ebp + 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    eax = eax + esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x2D (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003459A9u); RECOMP_ABI_CALL(0x0034B583u, sub_0034B583); /* call 0x0034B583 */

loc_003459A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003459B7u); RECOMP_ABI_CALL(0x003458C7u, sub_003458C7); /* call 0x003458C7 */

loc_003459B7: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x28;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003459C0
 * Original: 0x003459C0 - 0x00345A4D (141 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003459C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003459C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003459DEu); RECOMP_ABI_CALL(0x0034B6BCu, sub_0034B6BC); /* call 0x0034B6BC */

loc_003459DE: ;
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x2D (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = eax + MEM32(ebp + 0xC);
    edi = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003459FEu); RECOMP_ABI_CALL(0x0034B583u, sub_0034B583); /* call 0x0034B583 */

loc_003459FE: ;
    eax = MEM32(ebp + -12);
    esp = esp + 0x1C;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFCu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00345A34; /* jl: less (signed <) */

loc_00345A0F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00345A34; /* jge: greater or equal (signed >=) */

loc_00345A13: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00345A21; /* je: equal / zero */

loc_00345A17: ;
    SET_LO8(eax, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345A17; /* jne: not equal / not zero */

loc_00345A1E: ;
    MEM8(edi + -2) = LO8(eax);

loc_00345A21: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345A2Fu); RECOMP_ABI_CALL(0x003458C7u, sub_003458C7); /* call 0x003458C7 */

loc_00345A2F: ;
    esp = esp + 0xC;
    goto loc_00345A48;

loc_00345A34: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345A45u); RECOMP_ABI_CALL(0x003457C0u, sub_003457C0); /* call 0x003457C0 */

loc_00345A45: ;
    esp = esp + 0x10;

loc_00345A48: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00345A4D
 * Original: 0x00345A4D - 0x00345A9E (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00345A4D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00345A4D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x65 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345A88; /* je: equal / zero */

loc_00345A56: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x45 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345A88; /* je: equal / zero */

loc_00345A5C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x66 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345A75; /* jne: not equal / not zero */

loc_00345A62: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345A70u); RECOMP_ABI_CALL(0x0034596Eu, sub_0034596E); /* call 0x0034596E */

loc_00345A70: ;
    esp = esp + 0xC;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00345A75: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345A86u); RECOMP_ABI_CALL(0x003459C0u, sub_003459C0); /* call 0x003459C0 */

loc_00345A86: ;
    goto loc_00345A99;

loc_00345A88: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345A99u); RECOMP_ABI_CALL(0x00345869u, sub_00345869); /* call 0x00345869 */

loc_00345A99: ;
    esp = esp + 0x10;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00345A9E
 * Original: 0x00345A9E - 0x00345AB0 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345A9E(void)
{

loc_00345A9E: ;
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0x00345AADu); RECOMP_ABI_CALL(0x0034B87Cu, sub_0034B87C); /* call 0x0034B87C */

loc_00345AAD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00345AB0
 * Original: 0x00345AB0 - 0x00345ACC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345AB0(void)
{

loc_00345AB0: ;
    PUSH32(esp, 0x00345AB5u); RECOMP_ABI_CALL(0x0034AA1Bu, sub_0034AA1B); /* call 0x0034AA1B */

loc_00345AB5: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x00345ABEu); RECOMP_ABI_CALL(0x0034A9EFu, sub_0034A9EF); /* call 0x0034A9EF */

loc_00345ABE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    { uint32_t _icall_target = MEM32(0x47A688); PUSH32(esp, 0x00345AC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00345AC9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00345ACC
 * Original: 0x00345ACC - 0x00345B1C (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345ACC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345ACC: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x430AA0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345AD8u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345AD8: ;
    _fa = (uint32_t)(MEM32(0x6F12E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6F12E0), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345B00; /* jne: not equal / not zero */

loc_00345AE1: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345AE8u); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_00345AE8: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345AFAu); RECOMP_ABI_CALL(0x00345B1Cu, sub_00345B1C); /* call 0x00345B1C */

loc_00345AFA: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345B13; /* jne: not equal / not zero */

loc_00345B00: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345B0Au); RECOMP_ABI_CALL(0x0019ED75u, sub_0019ED75); /* call 0x0019ED75 */

loc_00345B0A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345B10u); RECOMP_ABI_CALL(0x001A016Au, sub_001A016A); /* call 0x001A016A */

loc_00345B10: ;
    MEM32(ebp + -28) = eax;

loc_00345B13: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345B1Bu); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345B1B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00345B1C
 * Original: 0x00345B1C - 0x00345B25 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345B1C(void)
{

loc_00345B1C: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00345B23u); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_00345B23: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00345B25
 * Original: 0x00345B25 - 0x00345B7F (90 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00345B25(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00345B25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(0x47A050);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00345B3B; /* je: equal / zero */

loc_00345B34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB40E64Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB40E64Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345B7D; /* jne: not equal / not zero */

loc_00345B3B: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345B45u); RECOMP_ABI_CALL(0x0034D3C2u, sub_0034D3C2); /* call 0x0034D3C2 */

loc_00345B45: ;
    esi = MEM32(ebp + -4);
    esi = esi ^ MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345B50u); RECOMP_ABI_CALL(0x0019F29Cu, sub_0019F29C); /* call 0x0019F29C */

loc_00345B50: ;
    esi = esi ^ eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345B57u); RECOMP_ABI_CALL(0x0034D7CBu, sub_0034D7CB); /* call 0x0034D7CB */

loc_00345B57: ;
    esi = esi ^ eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345B62u); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_00345B62: ;
    eax = MEM32(ebp + -12);
    eax = eax ^ MEM32(ebp + -16);
    esi = esi ^ eax;
    MEM32(0x47A050) = esi;
    if ((esi != 0)) goto loc_00345B7C; /* jne: not equal / not zero */

loc_00345B72: ;
    MEM32(0x47A050) = 0xBB40E64Eu;

loc_00345B7C: ;
    POP32(esp, esi);

loc_00345B7D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00345B7F
 * Original: 0x00345B7F - 0x00345D08 (393 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345B7F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345B7F: ;
    PUSH32(esp, 0x11C);
    PUSH32(esp, 0x430C70);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345B8Eu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345B8E: ;
    eax = MEM32(0x5D9BB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00345BB7; /* je: equal / zero */

loc_00345B97: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00345BA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00345BA3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00345BA5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_00345D00;

    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00345BB7: ;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00345BD2; /* je: equal / zero */

loc_00345BBD: ;
    MEM32(ebp + -32) = 0x430C4C;
    MEM32(ebp + -36) = 0x430B98;
    ebx = 0xD4;
    goto loc_00345BE5;

loc_00345BD2: ;
    MEM32(ebp + -32) = 0x430B78;
    MEM32(ebp + -36) = 0x430AD8;
    ebx = 0xB9;

loc_00345BE5: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x430AC0;
    edi = ebp + -300;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = ebp + -300;
    MEM32(ebp + -28) = eax;
    edx = eax + 1;

loc_00345C08: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C08; /* jne: not equal / not zero */

loc_00345C0F: ;
    eax = eax - edx;
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00345C45; /* jbe: below or equal (unsigned <=) */

loc_00345C19: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00345C22: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C22; /* jne: not equal / not zero */

loc_00345C29: ;
    eax = eax - edx;
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x430ABC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345C42u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00345C42: ;
    esp = esp + 0xC;

loc_00345C45: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00345C4B: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C4B; /* jne: not equal / not zero */

loc_00345C52: ;
    eax = eax - ecx;
    eax = eax + ebx + 0xC;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345C63u); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_00345C63: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    esi = esi - eax;

loc_00345C6F: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C6F; /* jne: not equal / not zero */

loc_00345C79: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345C7C: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C7C; /* jne: not equal / not zero */

loc_00345C84: ;
    ebx = 0x430AB8;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345C91: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C91; /* jne: not equal / not zero */

loc_00345C99: ;
    esi = 0x430AAC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_00345CA7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CA7; /* jne: not equal / not zero */

loc_00345CAE: ;
    eax = eax - esi;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CB3: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CB3; /* jne: not equal / not zero */

loc_00345CBB: ;
    ecx = eax;
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
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CCC: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CCC; /* jne: not equal / not zero */

loc_00345CD4: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_00345CDE: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CDE; /* jne: not equal / not zero */

loc_00345CE5: ;
    eax = eax - esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CE8: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CE8; /* jne: not equal / not zero */

loc_00345CF0: ;
    edi = edx;
    ecx = eax;
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

loc_00345D00: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345D07u); RECOMP_ABI_CALL(0x003428C6u, sub_003428C6); /* call 0x003428C6 */

loc_00345D07: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00345BAE
 * Original: 0x00345BAE - 0x00345D08 (346 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345BAE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345BAE: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00345BD2; /* je: equal / zero */

loc_00345BBD: ;
    MEM32(ebp + -32) = 0x430C4C;
    MEM32(ebp + -36) = 0x430B98;
    ebx = 0xD4;
    goto loc_00345BE5;

loc_00345BD2: ;
    MEM32(ebp + -32) = 0x430B78;
    MEM32(ebp + -36) = 0x430AD8;
    ebx = 0xB9;

loc_00345BE5: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x430AC0;
    edi = ebp + -300;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = ebp + -300;
    MEM32(ebp + -28) = eax;
    edx = eax + 1;

loc_00345C08: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C08; /* jne: not equal / not zero */

loc_00345C0F: ;
    eax = eax - edx;
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00345C45; /* jbe: below or equal (unsigned <=) */

loc_00345C19: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00345C22: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C22; /* jne: not equal / not zero */

loc_00345C29: ;
    eax = eax - edx;
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x430ABC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00345C42u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00345C42: ;
    esp = esp + 0xC;

loc_00345C45: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00345C4B: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C4B; /* jne: not equal / not zero */

loc_00345C52: ;
    eax = eax - ecx;
    eax = eax + ebx + 0xC;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    PUSH32(esp, 0x00345C63u); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_00345C63: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    esi = esi - eax;

loc_00345C6F: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C6F; /* jne: not equal / not zero */

loc_00345C79: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345C7C: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C7C; /* jne: not equal / not zero */

loc_00345C84: ;
    ebx = 0x430AB8;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345C91: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C91; /* jne: not equal / not zero */

loc_00345C99: ;
    esi = 0x430AAC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_00345CA7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CA7; /* jne: not equal / not zero */

loc_00345CAE: ;
    eax = eax - esi;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CB3: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CB3; /* jne: not equal / not zero */

loc_00345CBB: ;
    ecx = eax;
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
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CCC: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CCC; /* jne: not equal / not zero */

loc_00345CD4: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_00345CDE: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CDE; /* jne: not equal / not zero */

loc_00345CE5: ;
    eax = eax - esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CE8: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CE8; /* jne: not equal / not zero */

loc_00345CF0: ;
    edi = edx;
    ecx = eax;
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
    PUSH32(esp, 3);
    PUSH32(esp, 0x00345D07u); RECOMP_ABI_CALL(0x003428C6u, sub_003428C6); /* call 0x003428C6 */

loc_00345D07: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00345BB2
 * Original: 0x00345BB2 - 0x00345D08 (342 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345BB2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345BB2: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_00345BA5(); return; /* tail jmp 0x00345BA5 */

    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00345BD2; /* je: equal / zero */

loc_00345BBD: ;
    MEM32(ebp + -32) = 0x430C4C;
    MEM32(ebp + -36) = 0x430B98;
    ebx = 0xD4;
    goto loc_00345BE5;

loc_00345BD2: ;
    MEM32(ebp + -32) = 0x430B78;
    MEM32(ebp + -36) = 0x430AD8;
    ebx = 0xB9;

loc_00345BE5: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x430AC0;
    edi = ebp + -300;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = ebp + -300;
    MEM32(ebp + -28) = eax;
    edx = eax + 1;

loc_00345C08: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C08; /* jne: not equal / not zero */

loc_00345C0F: ;
    eax = eax - edx;
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00345C45; /* jbe: below or equal (unsigned <=) */

loc_00345C19: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00345C22: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C22; /* jne: not equal / not zero */

loc_00345C29: ;
    eax = eax - edx;
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x430ABC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00345C42u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00345C42: ;
    esp = esp + 0xC;

loc_00345C45: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00345C4B: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C4B; /* jne: not equal / not zero */

loc_00345C52: ;
    eax = eax - ecx;
    eax = eax + ebx + 0xC;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    PUSH32(esp, 0x00345C63u); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_00345C63: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    esi = esi - eax;

loc_00345C6F: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C6F; /* jne: not equal / not zero */

loc_00345C79: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345C7C: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C7C; /* jne: not equal / not zero */

loc_00345C84: ;
    ebx = 0x430AB8;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345C91: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345C91; /* jne: not equal / not zero */

loc_00345C99: ;
    esi = 0x430AAC;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_00345CA7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CA7; /* jne: not equal / not zero */

loc_00345CAE: ;
    eax = eax - esi;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CB3: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CB3; /* jne: not equal / not zero */

loc_00345CBB: ;
    ecx = eax;
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
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CCC: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CCC; /* jne: not equal / not zero */

loc_00345CD4: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_00345CDE: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CDE; /* jne: not equal / not zero */

loc_00345CE5: ;
    eax = eax - esi;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345CE8: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00345CE8; /* jne: not equal / not zero */

loc_00345CF0: ;
    edi = edx;
    ecx = eax;
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
    PUSH32(esp, 3);
    PUSH32(esp, 0x00345D07u); RECOMP_ABI_CALL(0x003428C6u, sub_003428C6); /* call 0x003428C6 */

loc_00345D07: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00345D08
 * Original: 0x00345D08 - 0x00345D7A (114 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345D08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00345D08: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00345D75; /* je: equal / zero */

loc_00345D10: ;
    esi = eax + 8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00345D75; /* je: equal / zero */

loc_00345D18: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00345D4F; /* je: equal / zero */

loc_00345D1F: ;
    eax = ecx + 8;
    PUSH32(esp, ebx);

loc_00345D23: ;
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00345D45; /* jne: not equal / not zero */

loc_00345D2B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00345D41; /* je: equal / zero */

loc_00345D2F: ;
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00345D45; /* jne: not equal / not zero */

loc_00345D39: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00345D23; /* jne: not equal / not zero */

loc_00345D41: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00345D4A;

loc_00345D45: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00345D4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00345D71; /* jne: not equal / not zero */

loc_00345D4F: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00345D59; /* je: equal / zero */

loc_00345D54: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00345D71; /* je: equal / zero */

loc_00345D59: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00345D68; /* je: equal / zero */

loc_00345D63: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00345D71; /* je: equal / zero */

loc_00345D68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00345D75; /* je: equal / zero */

loc_00345D6C: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00345D75; /* jne: not equal / not zero */

loc_00345D71: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00345D75: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00345D7A
 * Original: 0x00345D7A - 0x00345D98 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345D7A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345D7A: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345D87; /* je: equal / zero */

loc_00345D84: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00345D87: ;
    PUSH32(esp, 0x00345D8Cu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345D8C: ;
    MEM32(eax + 0x80) = MEM32(eax + 0x80) & 0;
    g_seh_ebp = ebp; sub_003467B6(); return; /* tail jmp 0x003467B6 */

}

/**
 * sub_00345D98
 * Original: 0x00345D98 - 0x00345E45 (173 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345D98(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345D98: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x430C80);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345DA4u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345DA4: ;
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebx + 8);
    MEM32(ebp + -28) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345DB2u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345DB2: ;
    eax = eax + 0x80;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = MEM32(ebp + 0x10);

loc_00345DC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345E29; /* je: equal / zero */

loc_00345DC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00345DCF; /* jle: less or equal (signed <=) */

loc_00345DCA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00345DD4; /* jl: less (signed <) */

loc_00345DCF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345DD4u); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_00345DD4: ;
    eax = esi;
    eax = eax << 3;
    ecx = MEM32(edi + 8);
    ecx = ecx + eax;
    esi = MEM32(ecx);
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345E05; /* je: equal / zero */

loc_00345DF0: ;
    MEM32(ebx + 8) = esi;
    PUSH32(esp, 0x103);
    PUSH32(esp, ebx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, MEM32(ecx + eax + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345E05u); RECOMP_ABI_CALL(0x00346820u, sub_00346820); /* call 0x00346820 */

loc_00345E05: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_00345E24;

    eax = MEM32(ebp + -20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345E13u); RECOMP_ABI_CALL(0x00345D7Au, sub_00345D7A); /* call 0x00345D7A */

loc_00345E13: ;
    esp += 4; return; /* ret */

loc_00345E24: ;
    MEM32(ebp + -28) = esi;
    goto loc_00345DC0;

loc_00345E29: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345E32u); RECOMP_ABI_CALL(0x00345E4Bu, sub_00345E4B); /* call 0x00345E4B */

loc_00345E32: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345E3C; /* je: equal / zero */

loc_00345E37: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345E3Cu); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_00345E3C: ;
    MEM32(ebx + 8) = esi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345E44u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345E44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00345E0B
 * Original: 0x00345E0B - 0x00345E45 (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345E0B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345E0B: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, 0x00345E13u); RECOMP_ABI_CALL(0x00345D7Au, sub_00345D7A); /* call 0x00345D7A */

loc_00345E13: ;
    esp += 4; return; /* ret */

    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x00345E32u); RECOMP_ABI_CALL(0x00345E4Bu, sub_00345E4B); /* call 0x00345E4B */

loc_00345E32: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345E3C; /* je: equal / zero */

loc_00345E37: ;
    PUSH32(esp, 0x00345E3Cu); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_00345E3C: ;
    MEM32(ebx + 8) = esi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00345E44u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345E44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00345E14
 * Original: 0x00345E14 - 0x00345E45 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345E14(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345E14: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + -32);
    MEM32(ebp + -28) = esi;
    g_seh_ebp = ebp; sub_00345DC0(); return; /* tail jmp 0x00345DC0 */

    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x00345E32u); RECOMP_ABI_CALL(0x00345E4Bu, sub_00345E4B); /* call 0x00345E4B */

loc_00345E32: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00345E3C; /* je: equal / zero */

loc_00345E37: ;
    PUSH32(esp, 0x00345E3Cu); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_00345E3C: ;
    MEM32(ebx + 8) = esi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00345E44u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345E44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00345E45
 * Original: 0x00345E45 - 0x00345E4B (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345E45(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345E45: ;
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + -28);

    g_seh_ebp = ebp; sub_00345E4B(); return; /* fallthrough 0x00345E4B */

}

/**
 * sub_00345E4B
 * Original: 0x00345E4B - 0x00345E66 (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345E4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00345E4B: ;
    PUSH32(esp, 0x00345E50u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345E50: ;
    _fa = (uint32_t)(MEM32(eax + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x80), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00345E65; /* jle: less or equal (signed <=) */

loc_00345E59: ;
    PUSH32(esp, 0x00345E5Eu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345E5E: ;
    eax = eax + 0x80;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00345E65: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00345E66
 * Original: 0x00345E66 - 0x00345E9A (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345E66(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345E66: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x430C98);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345E72u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345E72: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00345E94; /* je: equal / zero */

loc_00345E79: ;
    ecx = MEM32(eax + 0x1C);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00345E94; /* je: equal / zero */

loc_00345E83: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345E90u); RECOMP_ABI_CALL(0x00340F92u, sub_00340F92); /* call 0x00340F92 */

loc_00345E90: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_00345E94: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345E99u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345E99: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00345E9A
 * Original: 0x00345E9A - 0x00345EAB (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345E9A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345E9A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00345EA3
 * Original: 0x00345EA3 - 0x00345EAB (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345EA3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345EA3: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_003467B6(); return; /* tail jmp 0x003467B6 */

}

/**
 * sub_00345EAB
 * Original: 0x00345EAB - 0x00345ECA (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345EAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00345EAB: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx);
    eax = eax + esi;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00345EC8; /* jl: less (signed <) */

loc_00345EB8: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    esi = MEM32(edx + esi);
    ecx = MEM32(esi + ecx);
    ecx = ecx + edx;
    eax = eax + ecx;

loc_00345EC8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00345ECA
 * Original: 0x00345ECA - 0x00346007 (317 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345ECA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345ECA: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x430CA8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345ED6u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00345ED6: ;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    eax = MEM32(edi + -4);
    MEM32(ebp + -56) = eax;
    PUSH32(esp, MEM32(esi + 0x18));
    eax = ebp + -80;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345EF7u); RECOMP_ABI_CALL(0x00341269u, sub_00341269); /* call 0x00341269 */

loc_00345EF7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -60) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345F01u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345F01: ;
    eax = MEM32(eax + 0x78);
    MEM32(ebp + -64) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345F0Cu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345F0C: ;
    eax = MEM32(eax + 0x7C);
    MEM32(ebp + -68) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345F17u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345F17: ;
    MEM32(eax + 0x78) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345F1Fu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00345F1F: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x7C) = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + -4) = 1;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345F40u); RECOMP_ABI_CALL(0x003412FEu, sub_003412FE); /* call 0x003412FE */

loc_00345F40: ;
    esp = esp + 0x14;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    goto loc_00345FF2;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345F87; /* jne: not equal / not zero */

loc_00345F62: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345F87; /* jne: not equal / not zero */

loc_00345F6B: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345F87; /* jne: not equal / not zero */

loc_00345F77: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0 (32-bit) */
    MEM32(ebp + -36) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00345F8E; /* je: equal / zero */

loc_00345F87: ;
    MEM32(ebp + -36) = 0;

loc_00345F8E: ;
    eax = MEM32(ebp + -36);
    esp += 4; return; /* ret */

loc_00345FAF: ;
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00345FDB; /* jae: above or equal (unsigned >=) */

loc_00345FB7: ;
    esi = edx + edx * 4;
    ebx = MEM32(ebp + -44);
    esi = ebx + esi * 4;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00346004; /* jle: less or equal (signed <=) */

loc_00345FC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00346004; /* jg: greater (signed >) */

loc_00345FCC: ;
    eax = ebx + 1;
    MEM32(ebp + -40) = eax;
    edx = MEM32(ebp + -48);
    eax = MEM32(edx + eax * 8);
    MEM32(ebp + -40) = eax;

loc_00345FDB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345FE6u); RECOMP_ABI_CALL(0x00345D98u, sub_00345D98); /* call 0x00345D98 */

loc_00345FE6: ;
    esp = esp + 0x10;
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 8);

loc_00345FF2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00345FFBu); RECOMP_ABI_CALL(0x0034600Du, sub_0034600D); /* call 0x0034600D */

loc_00345FFB: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346003u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00346003: ;
    esp += 4; return; /* ret */

loc_00346004: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00345FAF;

}

/**
 * sub_00345F4F
 * Original: 0x00345F4F - 0x00346007 (184 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345F4F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345F4F: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345F87; /* jne: not equal / not zero */

loc_00345F62: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345F87; /* jne: not equal / not zero */

loc_00345F6B: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00345F87; /* jne: not equal / not zero */

loc_00345F77: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0 (32-bit) */
    MEM32(ebp + -36) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00345F8E; /* je: equal / zero */

loc_00345F87: ;
    MEM32(ebp + -36) = 0;

loc_00345F8E: ;
    eax = MEM32(ebp + -36);
    esp += 4; return; /* ret */

loc_00345FAF: ;
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00345FDB; /* jae: above or equal (unsigned >=) */

loc_00345FB7: ;
    esi = edx + edx * 4;
    ebx = MEM32(ebp + -44);
    esi = ebx + esi * 4;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00346004; /* jle: less or equal (signed <=) */

loc_00345FC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00346004; /* jg: greater (signed >) */

loc_00345FCC: ;
    eax = ebx + 1;
    MEM32(ebp + -40) = eax;
    edx = MEM32(ebp + -48);
    eax = MEM32(edx + eax * 8);
    MEM32(ebp + -40) = eax;

loc_00345FDB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00345FE6u); RECOMP_ABI_CALL(0x00345D98u, sub_00345D98); /* call 0x00345D98 */

loc_00345FE6: ;
    esp = esp + 0x10;
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x00345FFBu); RECOMP_ABI_CALL(0x0034600Du, sub_0034600D); /* call 0x0034600D */

loc_00345FFB: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00346003u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00346003: ;
    esp += 4; return; /* ret */

loc_00346004: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00345FAF;

}

/**
 * sub_00345F92
 * Original: 0x00345F92 - 0x00346007 (117 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00345F92(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00345F92: ;
    esp = MEM32(ebp + -24);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx + 8);
    MEM32(ebp + -48) = eax;
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 8);
    MEM32(ebp + -40) = eax;
    edx = MEM32(ecx + 0x10);
    MEM32(ebp + -44) = edx;
    edx = 0; /* xor self */

loc_00345FAF: ;
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00345FDB; /* jae: above or equal (unsigned >=) */

loc_00345FB7: ;
    esi = edx + edx * 4;
    ebx = MEM32(ebp + -44);
    esi = ebx + esi * 4;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00346004; /* jle: less or equal (signed <=) */

loc_00345FC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00346004; /* jg: greater (signed >) */

loc_00345FCC: ;
    eax = ebx + 1;
    MEM32(ebp + -40) = eax;
    edx = MEM32(ebp + -48);
    eax = MEM32(edx + eax * 8);
    MEM32(ebp + -40) = eax;

loc_00345FDB: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00345FE6u); RECOMP_ABI_CALL(0x00345D98u, sub_00345D98); /* call 0x00345D98 */

loc_00345FE6: ;
    esp = esp + 0x10;
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0x00345FFBu); RECOMP_ABI_CALL(0x0034600Du, sub_0034600D); /* call 0x0034600D */

loc_00345FFB: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00346003u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00346003: ;
    esp += 4; return; /* ret */

loc_00346004: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00345FAF;

}

/**
 * sub_00346007
 * Original: 0x00346007 - 0x0034600D (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346007(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346007: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_0034600D(); return; /* fallthrough 0x0034600D */

}

/**
 * sub_0034600D
 * Original: 0x0034600D - 0x00346071 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034600D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034600D: ;
    eax = MEM32(ebp + -56);
    MEM32(edi + -4) = eax;
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, 0x0034601Bu); RECOMP_ABI_CALL(0x003412B2u, sub_003412B2); /* call 0x003412B2 */

loc_0034601B: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x00346021u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00346021: ;
    ecx = MEM32(ebp + -64);
    MEM32(eax + 0x78) = ecx;
    PUSH32(esp, 0x0034602Cu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_0034602C: ;
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0x7C) = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346070; /* jne: not equal / not zero */

loc_0034603A: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346070; /* jne: not equal / not zero */

loc_00346040: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346070; /* jne: not equal / not zero */

loc_00346049: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346070; /* jne: not equal / not zero */

loc_0034604F: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346070; /* je: equal / zero */

loc_00346055: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x0034605Du); RECOMP_ABI_CALL(0x00341291u, sub_00341291); /* call 0x00341291 */

loc_0034605D: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346070; /* je: equal / zero */

loc_00346062: ;
    PUSH32(esp, 0x00346067u); RECOMP_ABI_CALL(0x00341402u, sub_00341402); /* call 0x00341402 */

loc_00346067: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034606Eu); RECOMP_ABI_CALL(0x00345E66u, sub_00345E66); /* call 0x00345E66 */

loc_0034606E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00346070: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00346071
 * Original: 0x00346071 - 0x003461E1 (368 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346071(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346071: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x430CC0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034607Du); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0034607D: ;
    esi = ecx;
    eax = MEM32(ebp + 0xC);
    edi = edx;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461DB; /* je: equal / zero */

loc_00346092: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003461DB; /* je: equal / zero */

loc_0034609C: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003460AD; /* jne: not equal / not zero */

loc_003460A3: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 3), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461DB; /* je: equal / zero */

loc_003460AD: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_003460B7; /* js: sign (negative) */

loc_003460B3: ;
    edi = ecx + edi + 0xC;

loc_003460B7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003460F9; /* je: equal / zero */

loc_003460C4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003460C9u); RECOMP_ABI_CALL(0x0034B892u, sub_0034B892); /* call 0x0034B892 */

loc_003460C9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_003460D3: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003460DBu); RECOMP_ABI_CALL(0x0034B8ADu, sub_0034B8AD); /* call 0x0034B8AD */

loc_003460DB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_003460E5: ;
    eax = MEM32(ebx + 0x18);
    MEM32(edi) = eax;

loc_003460EA: ;
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003460F2u); RECOMP_ABI_CALL(0x00345EABu, sub_00345EAB); /* call 0x00345EAB */

loc_003460F2: ;
    MEM32(edi) = eax;
    goto loc_003461D7;

loc_003460F9: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346144; /* je: equal / zero */

loc_003460FE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346103u); RECOMP_ABI_CALL(0x0034B892u, sub_0034B892); /* call 0x0034B892 */

loc_00346103: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_0034610D: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346115u); RECOMP_ABI_CALL(0x0034B8ADu, sub_0034B8AD); /* call 0x0034B8AD */

loc_00346115: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_0034611F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(ebx + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034612Bu); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_0034612B: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003461D7; /* jne: not equal / not zero */

loc_00346138: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D7; /* je: equal / zero */

loc_00346142: ;
    goto loc_003460EA;

loc_00346144: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034617D; /* jne: not equal / not zero */

loc_0034614A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034614Fu); RECOMP_ABI_CALL(0x0034B892u, sub_0034B892); /* call 0x0034B892 */

loc_0034614F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_00346155: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034615Du); RECOMP_ABI_CALL(0x0034B8ADu, sub_0034B8AD); /* call 0x0034B8AD */

loc_0034615D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_00346163: ;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = esi + 8;
    eax = MEM32(ebx + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346171u); RECOMP_ABI_CALL(0x00345EABu, sub_00345EAB); /* call 0x00345EAB */

loc_00346171: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346178u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_00346178: ;
    esp = esp + 0xC;
    goto loc_003461D7;

loc_0034617D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346182u); RECOMP_ABI_CALL(0x0034B892u, sub_0034B892); /* call 0x0034B892 */

loc_00346182: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_00346188: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346190u); RECOMP_ABI_CALL(0x0034B8ADu, sub_0034B8AD); /* call 0x0034B8AD */

loc_00346190: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_00346196: ;
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034619Eu); RECOMP_ABI_CALL(0x0034B8C8u, sub_0034B8C8); /* call 0x0034B8C8 */

loc_0034619E: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461D2; /* je: equal / zero */

loc_003461A3: ;
    eax = MEM32(ebx + 0x18);
    ecx = esi + 8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003461C1; /* je: equal / zero */

loc_003461AE: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003461B5u); RECOMP_ABI_CALL(0x00345EABu, sub_00345EAB); /* call 0x00345EAB */

loc_003461B5: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003461BFu); RECOMP_ABI_CALL(0x00340F92u, sub_00340F92); /* call 0x00340F92 */

loc_003461BF: ;
    goto loc_003461D7;

loc_003461C1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003461C6u); RECOMP_ABI_CALL(0x00345EABu, sub_00345EAB); /* call 0x00345EAB */

loc_003461C6: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003461D0u); RECOMP_ABI_CALL(0x00340F92u, sub_00340F92); /* call 0x00340F92 */

loc_003461D0: ;
    goto loc_003461D7;

loc_003461D2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003461D7u); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_003461D7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_003461DB: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003461E0u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003461E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003461E1
 * Original: 0x003461E1 - 0x003461ED (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003461E1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003461E1: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003461E5
 * Original: 0x003461E5 - 0x003461ED (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003461E5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003461E5: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_003467B6(); return; /* tail jmp 0x003467B6 */

}

/**
 * sub_003461ED
 * Original: 0x003461ED - 0x00346254 (103 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003461ED(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003461ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346201; /* je: equal / zero */

loc_003461F4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003461FFu); RECOMP_ABI_CALL(0x00346071u, sub_00346071); /* call 0x00346071 */

loc_003461FF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00346201: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 8));
    if (CMP_NE(_fa, _fb)) goto loc_0034620D; /* jne: not equal / not zero */

loc_0034620A: ;
    PUSH32(esp, esi);
    goto loc_00346210;

loc_0034620D: ;
    PUSH32(esp, MEM32(ebp + 0x1C));

loc_00346210: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346215u); RECOMP_ABI_CALL(0x00340F99u, sub_00340F99); /* call 0x00340F99 */

loc_00346215: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346223u); RECOMP_ABI_CALL(0x00345D98u, sub_00345D98); /* call 0x00345D98 */

loc_00346223: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi + 8) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346244u); RECOMP_ABI_CALL(0x00345ECAu, sub_00345ECA); /* call 0x00345ECA */

loc_00346244: ;
    esp = esp + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346252; /* je: equal / zero */

loc_0034624B: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346252u); RECOMP_ABI_CALL(0x00340F62u, sub_00340F62); /* call 0x00340F62 */

loc_00346252: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00346254
 * Original: 0x00346254 - 0x00346312 (190 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346254(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346254: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000003u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x80000003u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034630F; /* je: equal / zero */

loc_00346269: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034626Eu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_0034626E: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346293; /* je: equal / zero */

loc_00346274: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034628Cu); RECOMP_ABI_CALL(0x00341076u, sub_00341076); /* call 0x00341076 */

loc_0034628C: ;
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034630F; /* jne: not equal / not zero */

loc_00346293: ;
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003462ABu); RECOMP_ABI_CALL(0x003411EFu, sub_003411EF); /* call 0x003411EF */

loc_003462AB: ;
    edi = eax;
    eax = MEM32(ebp + -4);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034630E; /* jae: above or equal (unsigned >=) */

loc_003462B8: ;
    PUSH32(esp, ebx);

loc_003462B9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003462FF; /* jl: less (signed <) */

loc_003462BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003462FF; /* jg: greater (signed >) */

loc_003462C2: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x10);
    eax = eax << 4;
    eax = eax + ecx;
    ecx = MEM32(eax + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003462DA; /* je: equal / zero */

loc_003462D4: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003462FF; /* jne: not equal / not zero */

loc_003462DA: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = eax + -16;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = 0; /* xor self */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003462F9u); RECOMP_ABI_CALL(0x003461EDu, sub_003461ED); /* call 0x003461ED */

loc_003462F9: ;
    esi = MEM32(ebp + 0x1C);
    esp = esp + 0x18;

loc_003462FF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    edi = edi + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003462B9; /* jb: below (unsigned <) */

loc_0034630D: ;
    POP32(esp, ebx);

loc_0034630E: ;
    POP32(esp, edi);

loc_0034630F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00346312
 * Original: 0x00346312 - 0x003464F1 (479 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346312(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346312: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM8(ebp + -1) = 0;
    MEM32(ebp + -28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00346332; /* jl: less (signed <) */

loc_0034632A: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00346337; /* jl: less (signed <) */

loc_00346332: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346337u); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_00346337: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0xE06D7363u;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003464C6; /* jne: not equal / not zero */

loc_0034634A: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    ebx = 0x19930520;
    if (CMP_NE(_fa, _fb)) goto loc_003463C0; /* jne: not equal / not zero */

loc_00346355: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003463C0; /* jne: not equal / not zero */

loc_0034635A: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003463C0; /* jne: not equal / not zero */

loc_00346360: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346365u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00346365: ;
    _fa = (uint32_t)(MEM32(eax + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003464BE; /* je: equal / zero */

loc_0034636F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346374u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_00346374: ;
    esi = MEM32(eax + 0x78);
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034637Fu); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_0034637F: ;
    eax = MEM32(eax + 0x7C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(ebp + 0x10) = eax;
    MEM8(ebp + -1) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346391u); RECOMP_ABI_CALL(0x0034B892u, sub_0034B892); /* call 0x0034B892 */

loc_00346391: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0034639C; /* jne: not equal / not zero */

loc_00346397: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034639Cu); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_0034639C: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003464C3; /* jne: not equal / not zero */

loc_003463A4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003463BD; /* jne: not equal / not zero */

loc_003463AD: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003463BD; /* jne: not equal / not zero */

loc_003463B2: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003463BD; /* jne: not equal / not zero */

loc_003463B8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003463BDu); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_003463BD: ;
    esi = MEM32(ebp + 8);

loc_003463C0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003464C6; /* jne: not equal / not zero */

loc_003463C8: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003464C6; /* jne: not equal / not zero */

loc_003463D2: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003464C6; /* jne: not equal / not zero */

loc_003463DB: ;
    edi = MEM32(ebp + -28);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003463F2u); RECOMP_ABI_CALL(0x003411EFu, sub_003411EF); /* call 0x003411EF */

loc_003463F2: ;
    esp = esp + 0x14;
    ebx = eax;
    goto loc_0034649F;

loc_003463FC: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00346499; /* jg: greater (signed >) */

loc_00346404: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00346499; /* jg: greater (signed >) */

loc_0034640D: ;
    eax = MEM32(ebx + 0x10);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00346496; /* jle: less or equal (signed <=) */

loc_0034641D: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0xC);
    ecx = eax + 4;
    eax = MEM32(eax);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = eax;

loc_0034642E: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0034645F; /* jle: less or equal (signed <=) */

loc_0034643E: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, MEM32(esi + 0x1C));
    edx = MEM32(eax);
    edi = MEM32(ebp + -8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034644Eu); RECOMP_ABI_CALL(0x00345D08u, sub_00345D08); /* call 0x00345D08 */

loc_0034644E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0034646E; /* jne: not equal / not zero */

loc_00346453: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 4;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034643E; /* jg: greater (signed >) */

loc_0034645F: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0034642E; /* jg: greater (signed >) */

loc_0034646C: ;
    goto loc_00346496;

loc_0034646E: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    edi = ebx;
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = edx;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034648Du); RECOMP_ABI_CALL(0x003461EDu, sub_003461ED); /* call 0x003461ED */

loc_0034648D: ;
    esi = MEM32(ebp + 8);
    ebx = MEM32(ebp + -32);
    esp = esp + 0x18;

loc_00346496: ;
    edi = MEM32(ebp + -28);

loc_00346499: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x14;

loc_0034649F: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    MEM32(ebp + -32) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_003463FC; /* jb: below (unsigned <) */

loc_003464AE: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003464BE; /* je: equal / zero */

loc_003464B4: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003464BCu); RECOMP_ABI_CALL(0x00345E66u, sub_00345E66); /* call 0x00345E66 */

loc_003464BC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003464BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003464C3: ;
    esi = MEM32(ebp + 8);

loc_003464C6: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003464EC; /* jne: not equal / not zero */

loc_003464CC: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003464E7u); RECOMP_ABI_CALL(0x00346254u, sub_00346254); /* call 0x00346254 */

loc_003464E7: ;
    esp = esp + 0x20;
    goto loc_003464BE;

loc_003464EC: ;
    g_seh_ebp = ebp; sub_003467B6(); return; /* tail jmp 0x003467B6 */

}

/**
 * sub_003464F1
 * Original: 0x003464F1 - 0x00346593 (162 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003464F1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003464F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    eax = eax & 0x1FFFFFFF;
    edi = 0x19930520;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034650E; /* je: equal / zero */

loc_00346509: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034650Eu); RECOMP_ABI_CALL(0x003467F2u, sub_003467F2); /* call 0x003467F2 */

loc_0034650E: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x66 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346536; /* je: equal / zero */

loc_00346517: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034658C; /* je: equal / zero */

loc_0034651D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034658C; /* jne: not equal / not zero */

loc_00346523: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346531u); RECOMP_ABI_CALL(0x00345D98u, sub_00345D98); /* call 0x00345D98 */

loc_00346531: ;
    esp = esp + 0x10;
    goto loc_0034658C;

loc_00346536: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034658C; /* je: equal / zero */

loc_0034653C: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346570; /* jne: not equal / not zero */

loc_00346544: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00346570; /* jbe: below or equal (unsigned <=) */

loc_00346549: ;
    ecx = MEM32(eax + 0x1C);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346570; /* je: equal / zero */

loc_00346553: ;
    edx = ZX8(MEM8(ebp + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0034656Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034656B: ;
    esp = esp + 0x20;
    goto loc_0034658F;

loc_00346570: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346589u); RECOMP_ABI_CALL(0x00346312u, sub_00346312); /* call 0x00346312 */

loc_00346589: ;
    esp = esp + 0x20;

loc_0034658C: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034658F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00346593
 * Original: 0x00346593 - 0x003465A6 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346593(void)
{

loc_00346593: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x54) = 0x47AA70;
    MEM32(eax + 0x14) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003465A6
 * Original: 0x003465A6 - 0x00346628 (130 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003465A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003465A6: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003465BA; /* jb: below (unsigned <) */

loc_003465B2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(0x3C6D74); PUSH32(esp, 0x003465BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003465BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(XBOX_FS_BASE + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003465DF; /* je: equal / zero */

loc_003465C8: ;
    eax = MEM32(0x5BA794);
    ecx = MEM32(XBOX_FS_BASE + 4);
    edi = MEM32(ecx + eax * 4);
    edi = edi + 0xC;
    goto loc_003465E4;

loc_003465DF: ;
    edi = 0x6F12E4;

loc_003465E4: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346623; /* jne: not equal / not zero */

loc_003465EA: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003465F6u); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_003465F6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0034661B; /* je: equal / zero */

loc_003465FE: ;
    MEM32(edi) = esi;
    MEM32(esi + 0x54) = 0x47AA70;
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0x00346613u); RECOMP_ABI_CALL(0x0019F29Cu, sub_0019F29C); /* call 0x0019F29C */

loc_00346613: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    MEM32(esi) = eax;
    goto loc_00346623;

loc_0034661B: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00346622u); RECOMP_ABI_CALL(0x00345AB0u, sub_00345AB0); /* call 0x00345AB0 */

loc_00346622: ;
    POP32(esp, ecx);

loc_00346623: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00346628
 * Original: 0x00346628 - 0x003466E5 (189 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346628(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346628: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x430CD0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346634u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00346634: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003466DD; /* je: equal / zero */

loc_0034663F: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034664D; /* je: equal / zero */

loc_00346646: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034664Cu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0034664C: ;
    POP32(esp, ecx);

loc_0034664D: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034665B; /* je: equal / zero */

loc_00346654: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034665Au); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0034665A: ;
    POP32(esp, ecx);

loc_0034665B: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346669; /* je: equal / zero */

loc_00346662: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346668u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00346668: ;
    POP32(esp, ecx);

loc_00346669: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346677; /* je: equal / zero */

loc_00346670: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346676u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00346676: ;
    POP32(esp, ecx);

loc_00346677: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346685; /* je: equal / zero */

loc_0034667E: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346684u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00346684: ;
    POP32(esp, ecx);

loc_00346685: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346693; /* je: equal / zero */

loc_0034668C: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346692u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00346692: ;
    POP32(esp, ecx);

loc_00346693: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47AA70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x47AA70 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003466A4; /* je: equal / zero */

loc_0034669D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003466A3u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_003466A3: ;
    POP32(esp, ecx);

loc_003466A4: ;
    PUSH32(esp, 0xD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003466ABu); RECOMP_ABI_CALL(0x00345674u, sub_00345674); /* call 0x00345674 */

loc_003466AB: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = MEM32(esi + 0x60);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003466CD; /* je: equal / zero */

loc_003466BA: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003466CD; /* jne: not equal / not zero */

loc_003466BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x6F0F74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x6F0F74) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003466CD; /* je: equal / zero */

loc_003466C6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003466CCu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_003466CC: ;
    POP32(esp, ecx);

loc_003466CD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003466D6u); RECOMP_ABI_CALL(0x003466E8u, sub_003466E8); /* call 0x003466E8 */

loc_003466D6: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003466DCu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_003466DC: ;
    POP32(esp, ecx);

loc_003466DD: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003466E2u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003466E2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003466E5
 * Original: 0x003466E5 - 0x003466E8 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003466E5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003466E5: ;
    esi = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_003466E8(); return; /* fallthrough 0x003466E8 */

}

/**
 * sub_003466E8
 * Original: 0x003466E8 - 0x003466F1 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003466E8(void)
{

loc_003466E8: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003466EFu); RECOMP_ABI_CALL(0x003455C2u, sub_003455C2); /* call 0x003455C2 */

loc_003466EF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003466F1
 * Original: 0x003466F1 - 0x00346743 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003466F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003466F1: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00346705; /* jb: below (unsigned <) */

loc_003466FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(0x3C6D74); PUSH32(esp, 0x00346705u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00346705: ;
    PUSH32(esp, esi);
    eax = MEM32(XBOX_FS_BASE + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346729; /* je: equal / zero */

loc_00346712: ;
    eax = MEM32(0x5BA794);
    ecx = MEM32(XBOX_FS_BASE + 4);
    esi = MEM32(ecx + eax * 4);
    esi = esi + 0xC;
    goto loc_0034672E;

loc_00346729: ;
    esi = 0x6F12E4;

loc_0034672E: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346738; /* jne: not equal / not zero */

loc_00346736: ;
    eax = MEM32(esi);

loc_00346738: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034673Eu); RECOMP_ABI_CALL(0x00346628u, sub_00346628); /* call 0x00346628 */

loc_0034673E: ;
    MEM32(esi) = MEM32(esi) & 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00346743
 * Original: 0x00346743 - 0x003467B6 (115 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00346743(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346743: ;
    PUSH32(esp, 0x00346748u); RECOMP_ABI_CALL(0x00345550u, sub_00345550); /* call 0x00345550 */

loc_00346748: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346753; /* jne: not equal / not zero */

loc_0034674C: ;
    PUSH32(esp, 0x00346751u); RECOMP_ABI_CALL(0x00345599u, sub_00345599); /* call 0x00345599 */

loc_00346751: ;
    goto loc_003467B3;

loc_00346753: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00346760u); RECOMP_ABI_CALL(0x00343AD8u, sub_00343AD8); /* call 0x00343AD8 */

loc_00346760: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(0x5BA794);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(ecx + eax * 4);
    MEM32(eax + 0xC) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00346791; /* jne: not equal / not zero */

loc_0034677D: ;
    MEM32(0x54) = 0x47AA70;
    MEM32(0x14) = 1;

loc_00346791: ;
    PUSH32(esp, 0x00346796u); RECOMP_ABI_CALL(0x0019F29Cu, sub_0019F29C); /* call 0x0019F29C */

loc_00346796: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    PUSH32(esp, 1);
    MEM32(esi) = eax;
    PUSH32(esp, 0x5D9BBC);
    MEM32(0x5D9BC4) = 0x34BB62;
    PUSH32(esp, 0x003467B2u); RECOMP_ABI_CALL(0x0019F111u, sub_0019F111); /* call 0x0019F111 */

loc_003467B2: ;
    POP32(esp, esi);

loc_003467B3: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_003467B6
 * Original: 0x003467B6 - 0x003467F2 (60 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003467B6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003467B6: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x430CE0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003467C2u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003467C2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003467C7u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_003467C7: ;
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x68), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003467E6; /* je: equal / zero */

loc_003467CD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003467D6u); RECOMP_ABI_CALL(0x003465A6u, sub_003465A6); /* call 0x003465A6 */

loc_003467D6: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x003467D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003467D9: ;
    goto loc_003467E2;

    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003467E2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_003467E6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC0000144u);
    { uint32_t _icall_target = MEM32(0x3C6D74); PUSH32(esp, 0x003467F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003467F1: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003467DB
 * Original: 0x003467DB - 0x003467F2 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003467DB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003467DB: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003467DF
 * Original: 0x003467DF - 0x003467F2 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003467DF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003467DF: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC0000144u);
    { uint32_t _icall_target = MEM32(0x3C6D74); PUSH32(esp, 0x003467F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003467F1: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003467F2
 * Original: 0x003467F2 - 0x0034681F (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003467F2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003467F2: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x430CF0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003467FEu); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003467FE: ;
    eax = MEM32(0x47A690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034681A; /* je: equal / zero */

loc_00346807: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0034680Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034680D: ;
    goto loc_00346816;

    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00346816: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_0034681A: ;
    g_seh_ebp = ebp; sub_003467B6(); return; /* tail jmp 0x003467B6 */

}

/**
 * sub_0034680F
 * Original: 0x0034680F - 0x0034681F (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034680F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034680F: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00346813
 * Original: 0x00346813 - 0x0034681F (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346813(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346813: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_003467B6(); return; /* tail jmp 0x003467B6 */

}

/**
 * sub_00346820
 * Original: 0x00346820 - 0x0034686C (76 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346820: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 4;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    eax = eax + 0xC;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 0x10);
    ebp = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346843u); RECOMP_ABI_CALL(0x00341425u, sub_00341425); /* call 0x00341425 */

loc_00346843: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00346847u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00346847: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ebx = ebp;
    POP32(esp, ebp);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebp);
    ebp = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034685F; /* jne: not equal / not zero */

loc_0034685A: ;
    ecx = 2;

loc_0034685F: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346865u); RECOMP_ABI_CALL(0x00341425u, sub_00341425); /* call 0x00341425 */

loc_00346865: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0034686C
 * Original: 0x0034686C - 0x00346896 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034686C(void)
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

loc_0034686C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    fp_push(MEMD(ebp + 8)); /* fld double */
    ecx = MEM32(ebp + 0xE);
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    eax = eax + 0x3FE;
    eax = eax << 4;
    ecx = ecx & 0xFFFF800Fu;
    eax = eax | ecx;
    MEM16(ebp + -2) = LO16(eax);
    fp_push(MEMD(ebp + -8)); /* fld double */
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
 * sub_00346896
 * Original: 0x00346896 - 0x003468F1 (91 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346896(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346896: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x7FF00000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003468AE; /* jne: not equal / not zero */

loc_003468A4: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003468C0; /* jne: not equal / not zero */

loc_003468A9: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003468AE: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFF00000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003468C0; /* jne: not equal / not zero */

loc_003468B7: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003468C0; /* jne: not equal / not zero */

loc_003468BC: ;
    PUSH32(esp, 2);
    goto loc_003468EA;

loc_003468C0: ;
    ecx = MEM32(ebp + 0xE);
    eax = 0x7FF8;
    ecx = ecx & eax;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003468D3; /* jne: not equal / not zero */

loc_003468CF: ;
    PUSH32(esp, 3);
    goto loc_003468EA;

loc_003468D3: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7FF0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003468ED; /* jne: not equal / not zero */

loc_003468DA: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), 0x7FFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003468E8; /* jne: not equal / not zero */

loc_003468E3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003468ED; /* je: equal / zero */

loc_003468E8: ;
    PUSH32(esp, 4);

loc_003468EA: ;
    POP32(esp, eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003468ED: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003468F1
 * Original: 0x003468F1 - 0x003469A5 (180 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003468F1(void)
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

loc_003468F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0034690F; /* jp: parity */

loc_00346906: ;
    fp_push(0.0); /* fldz */
    edx = 0; /* xor self */
    goto loc_0034699E;

loc_0034690F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(MEM16(ebp + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0xE), 0x7FF0 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034697B; /* jne: not equal / not zero */

loc_00346919: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346927; /* jne: not equal / not zero */

loc_00346922: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034697B; /* je: equal / zero */

loc_00346927: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    edx = 0xFFFFFC03u;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00346941; /* jp: parity */

loc_0034693C: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00346956;

loc_00346941: ;
    eax = 0; /* xor self */
    goto loc_00346956;

loc_00346945: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) << 1;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346952; /* je: equal / zero */

loc_0034694E: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | 1;

loc_00346952: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) << 1;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00346956: ;
    _fa = (uint32_t)(MEM8(ebp + 0xE)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xE), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346945; /* je: equal / zero */

loc_0034695C: ;
    MEM8(ebp + 0xE) = MEM8(ebp + 0xE) & 0xEF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346968; /* je: equal / zero */

loc_00346964: ;
    MEM8(ebp + 0xF) = MEM8(ebp + 0xF) | 0x80;

loc_00346968: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346976u); RECOMP_ABI_CALL(0x0034686Cu, sub_0034686C); /* call 0x0034686C */

loc_00346976: ;
    esp = esp + 0xC;
    goto loc_0034699E;

loc_0034697B: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346989u); RECOMP_ABI_CALL(0x0034686Cu, sub_0034686C); /* call 0x0034686C */

loc_00346989: ;
    edx = MEM32(ebp + 0xE);
    edx = edx >> 4;
    edx = edx & 0x7FF;
    esp = esp + 0xC;
    edx = edx - 0x3FE;

loc_0034699E: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003469A5
 * Original: 0x003469A5 - 0x00346C49 (676 bytes, 246 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003469A5(void)
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

loc_003469A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(ecx + 0xC) = eax;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    PUSH32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003469D7; /* je: equal / zero */

loc_003469CA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | ebx;
    MEM32(ebp + 0x10) = 0xC000008Fu;

loc_003469D7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003469EA; /* je: equal / zero */

loc_003469DC: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 2;
    MEM32(ebp + 0x10) = 0xC0000093u;

loc_003469EA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003469FC; /* je: equal / zero */

loc_003469EE: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 4;
    MEM32(ebp + 0x10) = 0xC0000091u;

loc_003469FC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346A0F; /* je: equal / zero */

loc_00346A01: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 8;
    MEM32(ebp + 0x10) = 0xC000008Eu;

loc_00346A0F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346A22; /* je: equal / zero */

loc_00346A14: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x10;
    MEM32(ebp + 0x10) = 0xC0000090u;

loc_00346A22: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx << 4;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    PUSH32(esp, 2);
    ecx = ecx & 0x10;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx << 1;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    POP32(esp, edi);
    ecx = ecx & 8;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 1;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & 4;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 3;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & edi;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 5;
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    ecx = ecx & ebx;
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346A88u); RECOMP_ABI_CALL(0x0034701Cu, sub_0034701C); /* call 0x0034701C */

loc_00346A88: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346A93; /* je: equal / zero */

loc_00346A8C: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x10;

loc_00346A93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346A9E; /* je: equal / zero */

loc_00346A97: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8;

loc_00346A9E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346AA9; /* je: equal / zero */

loc_00346AA2: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 4;

loc_00346AA9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346AB3; /* je: equal / zero */

loc_00346AAD: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | edi;

loc_00346AB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346ABD; /* je: equal / zero */

loc_00346AB7: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | ebx;

loc_00346ABD: ;
    eax = MEM32(esi);
    ecx = 0xC00;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_00346AFC; /* je: equal / zero */

loc_00346AC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346AEE; /* je: equal / zero */

loc_00346ACF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346AE2; /* je: equal / zero */

loc_00346AD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346B02; /* jne: not equal / not zero */

loc_00346ADA: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) | 3;
    goto loc_00346B02;

loc_00346AE2: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFEu;
    ecx = ecx | edi;
    goto loc_00346AF8;

loc_00346AEE: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFDu;
    ecx = ecx | ebx;

loc_00346AF8: ;
    MEM32(eax) = ecx;
    goto loc_00346B02;

loc_00346AFC: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFCu;

loc_00346B02: ;
    eax = MEM32(esi);
    ecx = 0x300;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_00346B2D; /* je: equal / zero */

loc_00346B0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346B20; /* je: equal / zero */

loc_00346B14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346B3A; /* jne: not equal / not zero */

loc_00346B18: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFE3u;
    goto loc_00346B3A;

loc_00346B20: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFE7u;
    ecx = ecx | 4;
    goto loc_00346B38;

loc_00346B2D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFEBu;
    ecx = ecx | 8;

loc_00346B38: ;
    MEM32(eax) = ecx;

loc_00346B3A: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    ecx = ecx << 5;
    ecx = ecx ^ MEM32(eax);
    ecx = ecx & 0x1FFE0;
    MEM32(eax) = MEM32(eax) ^ ecx;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) | ebx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x20);
    ecx = ecx & 0xFFFFFFE3u;
    ecx = ecx | edi;
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + 0x18);
    fp_push(MEMD(eax)); /* fld double */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x10) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) | ebx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x60);
    ecx = ecx & 0xFFFFFFE3u;
    ecx = ecx | edi;
    edi = MEM32(ebp + 0x1C);
    MEM32(eax + 0x60) = ecx;
    fp_push(MEMD(edi)); /* fld double */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x50) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346B90u); RECOMP_ABI_CALL(0x00347027u, sub_00347027); /* call 0x00347027 */

loc_00346B90: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346B9Fu); RECOMP_ABI_CALL(0x0019F038u, sub_0019F038); /* call 0x0019F038 */

loc_00346B9F: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346BAB; /* je: equal / zero */

loc_00346BA8: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFEu;

loc_00346BAB: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346BB4; /* je: equal / zero */

loc_00346BB1: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFBu;

loc_00346BB4: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346BBD; /* je: equal / zero */

loc_00346BBA: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFF7u;

loc_00346BBD: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346BC6; /* je: equal / zero */

loc_00346BC3: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFEFu;

loc_00346BC6: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346BCE; /* je: equal / zero */

loc_00346BCB: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFDFu;

loc_00346BCE: ;
    ecx = MEM32(eax);
    ecx = ecx & 3;
    ecx = ecx - 0;
    edx = 0xFFFFF3FFu;
    if ((ecx == 0)) goto loc_00346C0E; /* je: equal / zero */

loc_00346BDD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00346BFC; /* je: equal / zero */

loc_00346BE0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00346BEC; /* je: equal / zero */

loc_00346BE3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00346C10; /* jne: not equal / not zero */

loc_00346BE6: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0xC;
    goto loc_00346C10;

loc_00346BEC: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFFBFFu;
    ecx = ecx | 0x800;
    goto loc_00346C0A;

loc_00346BFC: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFF7FFu;
    ecx = ecx | 0x400;

loc_00346C0A: ;
    MEM32(esi) = ecx;
    goto loc_00346C10;

loc_00346C0E: ;
    MEM32(esi) = MEM32(esi) & edx;

loc_00346C10: ;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    ecx = ecx & 7;
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_00346C33; /* je: equal / zero */

loc_00346C1D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00346C27; /* je: equal / zero */

loc_00346C20: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00346C3F; /* jne: not equal / not zero */

loc_00346C23: ;
    MEM32(esi) = MEM32(esi) & edx;
    goto loc_00346C3F;

loc_00346C27: ;
    ecx = MEM32(esi);
    ecx = ecx & edx;
    ecx = ecx | 0x200;
    goto loc_00346C3D;

loc_00346C33: ;
    ecx = MEM32(esi);
    ecx = ecx & edx;
    ecx = ecx | 0x300;

loc_00346C3D: ;
    MEM32(esi) = ecx;

loc_00346C3F: ;
    fp_push(MEMD(eax + 0x50)); /* fld double */
    MEMD(edi) = fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00346C49
 * Original: 0x00346C49 - 0x00346E36 (493 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346C49(void)
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

loc_00346C49: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = eax;
    esi = esi & 0x1F;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEM32(ebp + -4) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00346C77; /* je: equal / zero */

loc_00346C63: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346C77; /* je: equal / zero */

loc_00346C68: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346C6Eu); RECOMP_ABI_CALL(0x00347057u, sub_00347057); /* call 0x00347057 */

loc_00346C6E: ;
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFF7u;
    goto loc_00346E14;

loc_00346C77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346C91; /* je: equal / zero */

loc_00346C7B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346C91; /* je: equal / zero */

loc_00346C81: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346C88u); RECOMP_ABI_CALL(0x00347057u, sub_00347057); /* call 0x00347057 */

loc_00346C88: ;
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFFBu;
    goto loc_00346E14;

loc_00346C91: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346D43; /* je: equal / zero */

loc_00346C99: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346D43; /* je: equal / zero */

loc_00346CA3: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346CAAu); RECOMP_ABI_CALL(0x00347057u, sub_00347057); /* call 0x00347057 */

loc_00346CAA: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, ecx);
    ecx = 0xC00;
    eax = eax & ecx;
    if ((eax == 0)) goto loc_00346D1F; /* je: equal / zero */

loc_00346CB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346D05; /* je: equal / zero */

loc_00346CBE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346CE3; /* je: equal / zero */

loc_00346CC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346D3B; /* jne: not equal / not zero */

loc_00346CC9: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    fp_push(MEMD(0x47A6B0)); /* fld double */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346D39; /* je: equal / zero */

loc_00346CE1: ;
    goto loc_00346D37;

loc_00346CE3: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346CFD; /* jne: not equal / not zero */

loc_00346CF5: ;
    fp_push(MEMD(0x47A6A0)); /* fld double */
    goto loc_00346D39;

loc_00346CFD: ;
    fp_push(MEMD(0x47A6B0)); /* fld double */
    goto loc_00346D37;

loc_00346D05: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346D31; /* jne: not equal / not zero */

loc_00346D17: ;
    fp_push(MEMD(0x47A6B0)); /* fld double */
    goto loc_00346D39;

loc_00346D1F: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346CF5; /* je: equal / zero */

loc_00346D31: ;
    fp_push(MEMD(0x47A6A0)); /* fld double */

loc_00346D37: ;
    fp_top() = -fp_top(); /* fchs */

loc_00346D39: ;
    MEMD(ecx) = fp_top(); fp_pop(); /* fstp */

loc_00346D3B: ;
    esi = esi & 0xFFFFFFFEu;
    goto loc_00346E14;

loc_00346D43: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E14; /* je: equal / zero */

loc_00346D4B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E14; /* je: equal / zero */

loc_00346D55: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346D5D; /* je: equal / zero */

loc_00346D5B: ;
    esi = ebx;

loc_00346D5D: ;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    fp_push(MEMD(edi)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00346DFE; /* jnp: not parity */

loc_00346D76: ;
    fp_push(MEMD(edi)); /* fld double */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346D86u); RECOMP_ABI_CALL(0x003468F1u, sub_003468F1); /* call 0x003468F1 */

loc_00346D86: ;
    ecx = MEM32(ebp + -8);
    MEMD(ebp + -16) = fp_top(); /* fst */
    ecx = ecx + 0xFFFFFA00u;
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFBCEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFBCEu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00346DA7; /* jge: greater or equal (signed >=) */

loc_00346D9D: ;
    fp_top() = fp_top() * MEMD(0x3DCF30); /* fmul qword ptr [0x3dcf30] */
    esi = ebx;
    goto loc_00346DFA;

loc_00346DA7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00346DB8; /* jp: parity */

loc_00346DB4: ;
    edx = ebx;
    goto loc_00346DBA;

loc_00346DB8: ;
    edx = 0; /* xor self */

loc_00346DBA: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + -10));
    eax = eax & 0xF;
    eax = eax | 0x10;
    MEM16(ebp + -10) = LO16(eax);
    eax = 0xFFFFFC03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00346DF1; /* jge: greater or equal (signed >=) */

loc_00346DD2: ;
    eax = eax - ecx;

loc_00346DD4: ;
    _fa = (uint32_t)(MEM8(ebp + -16)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -16), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346DDF; /* je: equal / zero */

loc_00346DD9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346DDF; /* jne: not equal / not zero */

loc_00346DDD: ;
    esi = ebx;

loc_00346DDF: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) >> 1;
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -12), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346DEB; /* je: equal / zero */

loc_00346DE7: ;
    MEM8(ebp + -13) = MEM8(ebp + -13) | 0x80;

loc_00346DEB: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) >> 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00346DD4; /* jne: not equal / not zero */

loc_00346DF1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    fp_push(MEMD(ebp + -16)); /* fld double */
    if (TEST_Z(_fa, _fb)) goto loc_00346DFA; /* je: equal / zero */

loc_00346DF8: ;
    fp_top() = -fp_top(); /* fchs */

loc_00346DFA: ;
    MEMD(edi) = fp_top(); fp_pop(); /* fstp */
    goto loc_00346E00;

loc_00346DFE: ;
    esi = ebx;

loc_00346E00: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00346E0D; /* je: equal / zero */

loc_00346E05: ;
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346E0Cu); RECOMP_ABI_CALL(0x00347057u, sub_00347057); /* call 0x00347057 */

loc_00346E0C: ;
    POP32(esp, ecx);

loc_00346E0D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFDu;
    esi = MEM32(ebp + -4);

loc_00346E14: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E2B; /* je: equal / zero */

loc_00346E1A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E2B; /* je: equal / zero */

loc_00346E20: ;
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346E27u); RECOMP_ABI_CALL(0x00347057u, sub_00347057); /* call 0x00347057 */

loc_00346E27: ;
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFEFu;

loc_00346E2B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
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
 * sub_00346E36
 * Original: 0x00346E36 - 0x00346E5E (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346E36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346E36: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346E52; /* je: equal / zero */

loc_00346E3F: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00346E5D; /* jle: less or equal (signed <=) */

loc_00346E41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00346E5D; /* jg: greater (signed >) */

loc_00346E46: ;
    PUSH32(esp, 0x00346E4Bu); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00346E4B: ;
    MEM32(eax) = 0x22;
    esp += 4; return; /* ret */

loc_00346E52: ;
    PUSH32(esp, 0x00346E57u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00346E57: ;
    MEM32(eax) = 0x21;

loc_00346E5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00346E5E
 * Original: 0x00346E5E - 0x00346E8B (45 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346E5E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346E5E: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E6A; /* je: equal / zero */

loc_00346E66: ;
    PUSH32(esp, 5);
    goto loc_00346E80;

loc_00346E6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E72; /* je: equal / zero */

loc_00346E6E: ;
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00346E72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E7A; /* je: equal / zero */

loc_00346E76: ;
    PUSH32(esp, 2);
    goto loc_00346E80;

loc_00346E7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E82; /* je: equal / zero */

loc_00346E7E: ;
    PUSH32(esp, 3);

loc_00346E80: ;
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00346E82: ;
    eax = ZX8(LO8(eax));
    eax = eax & 2;
    eax = eax << 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00346E8B
 * Original: 0x00346E8B - 0x00346F29 (158 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346E8B(void)
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

loc_00346E8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x20;
    eax = 0; /* xor self */

loc_00346E93: ;
    ecx = MEM32(eax * 8 + 0x47A6C8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00346F03; /* je: equal / zero */

loc_00346E9F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00346E93; /* jl: less (signed <) */

loc_00346EA5: ;
    eax = 0; /* xor self */

loc_00346EA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + -28) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00346F0C; /* je: equal / zero */

loc_00346EAE: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x28));
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346EE6u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00346EE6: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346EEFu); RECOMP_ABI_CALL(0x002EE6A7u, sub_002EE6A7); /* call 0x002EE6A7 */

loc_00346EEF: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346EFD; /* jne: not equal / not zero */

loc_00346EF6: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346EFCu); RECOMP_ABI_CALL(0x00346E36u, sub_00346E36); /* call 0x00346E36 */

loc_00346EFC: ;
    POP32(esp, ecx);

loc_00346EFD: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00346F03: ;
    eax = MEM32(eax * 8 + 0x47A6CC);
    goto loc_00346EA7;

loc_00346F0C: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346F19u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00346F19: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346F21u); RECOMP_ABI_CALL(0x00346E36u, sub_00346E36); /* call 0x00346E36 */

loc_00346F21: ;
    fp_push(MEMD(ebp + 0x20)); /* fld double */
    esp = esp + 0xC;
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
 * sub_00346F29
 * Original: 0x00346F29 - 0x00346F7C (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346F29(void)
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

loc_00346F29: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(0x47AD0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47AD0C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346F5D; /* jne: not equal / not zero */

loc_00346F35: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346F58u); RECOMP_ABI_CALL(0x00346E8Bu, sub_00346E8B); /* call 0x00346E8B */

loc_00346F58: ;
    esp = esp + 0x24;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00346F5D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346F62u); RECOMP_ABI_CALL(0x003453C4u, sub_003453C4); /* call 0x003453C4 */

loc_00346F62: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(eax) = 0x21;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346F75u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00346F75: ;
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00346F7C
 * Original: 0x00346F7C - 0x0034701C (160 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346F7C(void)
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

loc_00346F7C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x70;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346F94u); RECOMP_ABI_CALL(0x00346C49u, sub_00346C49); /* call 0x00346C49 */

loc_00346F94: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00346FBF; /* jne: not equal / not zero */

loc_00346F9B: ;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) & 0xFFFFFFFEu;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x20;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346FBCu); RECOMP_ABI_CALL(0x003469A5u, sub_003469A5); /* call 0x003469A5 */

loc_00346FBC: ;
    esp = esp + 0x18;

loc_00346FBF: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346FC7u); RECOMP_ABI_CALL(0x00346E5Eu, sub_00346E5E); /* call 0x00346E5E */

loc_00346FC7: ;
    esp = esp + 4;
    _fa = (uint32_t)(MEM32(0x47AD0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47AD0C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00346FFE; /* jne: not equal / not zero */

loc_00346FD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346FFE; /* je: equal / zero */

loc_00346FD7: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    esp = esp - 0x18;
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346FF9u); RECOMP_ABI_CALL(0x00346E8Bu, sub_00346E8B); /* call 0x00346E8B */

loc_00346FF9: ;
    esp = esp + 0x24;
    goto loc_00347018;

loc_00346FFE: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347004u); RECOMP_ABI_CALL(0x00346E36u, sub_00346E36); /* call 0x00346E36 */

loc_00347004: ;
    MEM32(esp) = 0xFFFF;
    PUSH32(esp, MEM32(ebp + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347013u); RECOMP_ABI_CALL(0x00347033u, sub_00347033); /* call 0x00347033 */

loc_00347013: ;
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347018: ;
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
 * sub_0034701C
 * Original: 0x0034701C - 0x00347027 (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034701C(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0034701C: ;
    PUSH32(esp, ecx);
    /* wait - FPU sync */
    MEM16(esp) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [esp] */
    eax = (uint32_t)(int32_t)SMEM16(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00347027
 * Original: 0x00347027 - 0x00347033 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347027(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00347027: ;
    PUSH32(esp, ecx);
    MEM16(esp) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [esp] */
    /* FPU: fnclex  */
    eax = (uint32_t)(int32_t)SMEM16(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00347033
 * Original: 0x00347033 - 0x00347057 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347033(void)
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

loc_00347033: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    /* wait - FPU sync */
    MEM16(ebp + -4) = g_fp_control_word; /* fnstcw word ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    ecx = ecx & MEM32(ebp + 0xC);
    eax = ~eax;
    eax = eax & MEM32(ebp + -4);
    eax = eax | ecx;
    MEM32(ebp + 0xC) = eax;
    g_fp_control_word = MEM16(ebp + 0xC); /* fldcw word ptr [ebp + 0xc] */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
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
 * sub_00347057
 * Original: 0x00347057 - 0x003470AD (86 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347057(void)
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

loc_00347057: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034706D; /* je: equal / zero */

loc_00347062: ;
    fp_push(MEMF(0x47A7B0)); /* fld */
    SMEM32(esp + 0xC) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    /* wait - FPU sync */

loc_0034706D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347082; /* je: equal / zero */

loc_00347072: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_push(MEMF(0x47A7B0)); /* fld */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */

loc_00347082: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347091; /* je: equal / zero */

loc_00347087: ;
    fp_push(MEMF(0x47A7BC)); /* fld */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */

loc_00347091: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034709F; /* je: equal / zero */

loc_00347096: ;
    fp_push(0.0); /* fldz */
    fp_push(1.0); /* fld1 */
    fp_st1() = fp_top() / fp_st1(); fp_pop(); /* fdivrp st(1) */
    fp_pop(); /* fstp st(0) */
    /* wait - FPU sync */

loc_0034709F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003470AA; /* je: equal / zero */

loc_003470A4: ;
    fp_push(3.14159265358979323846); /* fldpi */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */

loc_003470AA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003470AD
 * Original: 0x003470AD - 0x003470BE (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003470AD(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003470AD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMD(esp + 0xC)); /* fld double */
    fp_top() = rint(fp_top()); /* frndint */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(esp)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003470BE
 * Original: 0x003470BE - 0x003470F0 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003470BE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003470BE: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003470D6; /* jle: less or equal (signed <=) */

loc_003470CA: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003470D2u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_003470D2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003470E2;

loc_003470D6: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + esi * 2));
    eax = eax & 4;

loc_003470E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003470EC; /* jne: not equal / not zero */

loc_003470E6: ;
    esi = esi & 0xFFFFFFDFu;
    esi = esi - 7;

loc_003470EC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003470F0
 * Original: 0x003470F0 - 0x00347106 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003470F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003470F0: ;
    MEM32(edx + 4) = MEM32(edx + 4) - 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003470FE; /* js: sign (negative) */

loc_003470F5: ;
    ecx = MEM32(edx);
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

loc_003470FE: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00347104u); RECOMP_ABI_CALL(0x0034A094u, sub_0034A094); /* call 0x0034A094 */

loc_00347104: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00347106
 * Original: 0x00347106 - 0x00347C83 (2941 bytes, 987 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347106(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00347106: ;
    PUSH32(esp, 0x1CC);
    PUSH32(esp, 0x430DC8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347115u); RECOMP_ABI_CALL(0x003432A8u, sub_003432A8); /* call 0x003432A8 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00347115: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + -96) = eax;
    MEM32(ebp + -112) = eax;
    MEM32(ebp + -84) = eax;
    MEM32(ebp + -48) = eax;
    MEM8(ebp + -49) = LO8(eax);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -88) = eax;

loc_0034712C: ;
    edi = MEM32(ebp + 0xC);

loc_0034712F: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347139: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347151; /* jle: less or equal (signed <=) */

loc_00347145: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034714Du); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034714D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0034715E;

loc_00347151: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 8;

loc_0034715E: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003471A6; /* je: equal / zero */

loc_00347164: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00347167: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347172u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347172: ;
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034717Au); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_0034717A: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347167; /* jne: not equal / not zero */

loc_0034717F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034718F; /* je: equal / zero */

loc_00347184: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034718Du); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_0034718D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0034718F: ;
    edi = MEM32(ebp + 0xC);

loc_00347192: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034719Cu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_0034719C: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347192; /* jne: not equal / not zero */

loc_003471A1: ;
    MEM32(ebp + 0xC) = edi;
    goto loc_0034712F;

loc_003471A6: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BCF; /* jne: not equal / not zero */

loc_003471B2: ;
    MEM32(ebp + -64) = esi;
    MEM8(ebp + -89) = 0;
    MEM32(ebp + -60) = esi;
    MEM32(ebp + -80) = esi;
    MEM32(ebp + -40) = esi;
    MEM8(ebp + -73) = 0;
    MEM8(ebp + -51) = 0;
    MEM8(ebp + -41) = 0;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -50) = 0;
    MEM8(ebp + -33) = 0;
    MEM8(ebp + -42) = 1;
    MEM32(ebp + -104) = esi;

loc_003471E1: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ZX8(MEM8(edi));
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003471FD; /* jle: less or equal (signed <=) */

loc_003471F1: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003471F9u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_003471F9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0034720A;

loc_003471FD: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX8(MEM8(ecx + eax * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_0034720A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034721D; /* je: equal / zero */

loc_0034720E: ;
    MEM32(ebp + -80) = MEM32(ebp + -80) + 1;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + esi * 4;
    esi = ebx + eax * 2 + -48;
    goto loc_003472B7;

loc_0034721D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00347295; /* jg: greater (signed >) */

loc_00347222: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003472B7; /* je: equal / zero */

loc_00347228: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347290; /* je: equal / zero */

loc_0034722D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472B7; /* je: equal / zero */

loc_00347236: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x49 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347245; /* je: equal / zero */

loc_0034723B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003472A4; /* jne: not equal / not zero */

loc_00347240: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_003472B7;

loc_00347245: ;
    SET_LO8(ecx, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x36) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x36 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347264; /* jne: not equal / not zero */

loc_0034724D: ;
    eax = edi + 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x34 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347264; /* jne: not equal / not zero */

loc_00347255: ;
    edi = eax;
    MEM32(ebp + -104) = MEM32(ebp + -104) + 1;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -68) = MEM32(ebp + -68) & 0;
    goto loc_003472B7;

loc_00347264: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x33) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x33 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347275; /* jne: not equal / not zero */

loc_00347269: ;
    eax = edi + 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x32 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347275; /* jne: not equal / not zero */

loc_00347271: ;
    edi = eax;
    goto loc_003472B7;

loc_00347275: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x64 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472B7; /* je: equal / zero */

loc_0034727A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x69 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472B7; /* je: equal / zero */

loc_0034727F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x6F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472B7; /* je: equal / zero */

loc_00347284: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472B7; /* je: equal / zero */

loc_00347289: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003472A4; /* jne: not equal / not zero */

loc_0034728E: ;
    goto loc_003472B7;

loc_00347290: ;
    MEM8(ebp + -41) = MEM8(ebp + -41) + 1;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_003472B7;

loc_00347295: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x68 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472B1; /* je: equal / zero */

loc_0034729A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x6C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472A9; /* je: equal / zero */

loc_0034729F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x77 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472AC; /* je: equal / zero */

loc_003472A4: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_003472B7;

loc_003472A9: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_003472AC: ;
    MEM8(ebp + -33) = MEM8(ebp + -33) + 1;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_003472B7;

loc_003472B1: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) - 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebp + -33) = MEM8(ebp + -33) - 1;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_003472B7: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003471E1; /* je: equal / zero */

loc_003472C1: ;
    MEM32(ebp + -40) = esi;
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003472E1; /* jne: not equal / not zero */

loc_003472CD: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -124) = eax;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    MEM32(ebp + 0x10) = eax;
    ebx = MEM32(eax + -4);
    MEM32(ebp + -84) = ebx;
    goto loc_003472E4;

loc_003472E1: ;
    ebx = MEM32(ebp + -84);

loc_003472E4: ;
    MEM8(ebp + -25) = 0;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347300; /* jne: not equal / not zero */

loc_003472EE: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x53 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003472FC; /* je: equal / zero */

loc_003472F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x43 (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -33) = 0xFF;
    if (CMP_NE(_fa, _fb)) goto loc_00347300; /* jne: not equal / not zero */

loc_003472FC: ;
    MEM8(ebp + -33) = 1;

loc_00347300: ;
    eax = ZX8(MEM8(edi));
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20;
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034733B; /* je: equal / zero */

loc_0034730E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003473A0; /* je: equal / zero */

loc_00347317: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003473A0; /* je: equal / zero */

loc_00347320: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034732Bu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_0034732B: ;
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347333u); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_00347333: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347320; /* jne: not equal / not zero */

loc_00347338: ;
    MEM32(ebp + -48) = esi;

loc_0034733B: ;
    esi = MEM32(ebp + 8);

loc_0034733E: ;
    edx = MEM32(ebp + -80);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034734F; /* je: equal / zero */

loc_00347345: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003476E1; /* je: equal / zero */

loc_0034734F: ;
    ecx = MEM32(ebp + -56);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003476AF; /* jg: greater (signed >) */

loc_0034735B: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0034792C; /* je: equal / zero */

loc_00347361: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003475AF; /* je: equal / zero */

loc_0034736A: ;
    PUSH32(esp, 0x64);
    POP32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034792C; /* je: equal / zero */

loc_00347375: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003476D9; /* jle: less or equal (signed <=) */

loc_0034737B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x67 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003473CA; /* jle: less or equal (signed <=) */

loc_00347380: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x69 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003473B2; /* je: equal / zero */

loc_00347385: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003476D9; /* jne: not equal / not zero */

loc_0034738E: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BA3; /* je: equal / zero */

loc_0034739B: ;
    goto loc_00347BC3;

loc_003473A0: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(ebp + 8);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003473ADu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_003473AD: ;
    MEM32(ebp + -48) = eax;
    goto loc_0034733E;

loc_003473B2: ;
    MEM32(ebp + -56) = eax;

loc_003473B5: ;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347818; /* jne: not equal / not zero */

loc_003473C1: ;
    MEM8(ebp + -51) = 1;
    goto loc_0034781D;

loc_003473CA: ;
    esi = ebp + -476;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003473E6; /* jne: not equal / not zero */

loc_003473D8: ;
    MEM8(ebp + -476) = LO8(ebx);
    esi = ebp + -475;
    goto loc_003473EB;

loc_003473E6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347402; /* jne: not equal / not zero */

loc_003473EB: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003473FBu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_003473FB: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    goto loc_00347405;

loc_00347402: ;
    edi = MEM32(ebp + 8);

loc_00347405: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347414; /* je: equal / zero */

loc_0034740B: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x15D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0034741B; /* jle: less or equal (signed <=) */

loc_00347414: ;
    MEM32(ebp + -40) = 0x15D;

loc_0034741B: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347430; /* jle: less or equal (signed <=) */

loc_00347424: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034742Cu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034742C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0034743C;

loc_00347430: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_0034743C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347461; /* je: equal / zero */

loc_00347440: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347461; /* je: equal / zero */

loc_0034744A: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034745Au); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_0034745A: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    goto loc_0034741B;

loc_00347461: ;
    _fa = (uint32_t)(MEM8(0x47A7D4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x47A7D4), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003474CD; /* jne: not equal / not zero */

loc_00347469: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003474CD; /* je: equal / zero */

loc_00347473: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034747Du); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_0034747D: ;
    ebx = eax;
    SET_LO8(eax, MEM8(0x47A7D4));
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00347487: ;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0034749F; /* jle: less or equal (signed <=) */

loc_00347493: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034749Bu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_0034749B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003474AB;

loc_0034749F: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_003474AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003474CD; /* je: equal / zero */

loc_003474AF: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003474CD; /* je: equal / zero */

loc_003474B9: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003474C9u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_003474C9: ;
    ebx = eax;
    goto loc_00347487;

loc_003474CD: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347566; /* je: equal / zero */

loc_003474D7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x65 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003474E5; /* je: equal / zero */

loc_003474DC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x45 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347566; /* jne: not equal / not zero */

loc_003474E5: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347566; /* je: equal / zero */

loc_003474EF: ;
    MEM8(esi) = 0x65;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003474FDu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_003474FD: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034750C; /* jne: not equal / not zero */

loc_00347507: ;
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00347511;

loc_0034750C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034752F; /* jne: not equal / not zero */

loc_00347511: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347520; /* jne: not equal / not zero */

loc_0034751B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -40) = MEM32(ebp + -40) & eax;
    goto loc_0034752F;

loc_00347520: ;
    edx = edi;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034752Au); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_0034752A: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0034752F: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347544; /* jle: less or equal (signed <=) */

loc_00347538: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347540u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347540: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347550;

loc_00347544: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_00347550: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347566; /* je: equal / zero */

loc_00347554: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347566; /* je: equal / zero */

loc_0034755E: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00347520;

loc_00347566: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347577; /* je: equal / zero */

loc_0034756E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347575u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347575: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347577: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347581: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BC3; /* jne: not equal / not zero */

loc_0034758B: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = 0;
    eax = ebp + -476;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -84));
    eax = (uint32_t)(int32_t)SMEM8(ebp + -42);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x47A678); PUSH32(esp, 0x003475A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003475A7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    goto loc_00347BC3;

loc_003475AF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003475BD; /* jne: not equal / not zero */

loc_003475B3: ;
    MEM32(ebp + -80) = 1;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003475BD: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003475C7; /* jle: less or equal (signed <=) */

loc_003475C3: ;
    MEM8(ebp + -50) = 1;

loc_003475C7: ;
    edi = MEM32(ebp + -84);
    ebx = edi;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003475E2; /* je: equal / zero */

loc_003475D5: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003475E0u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_003475E0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003475E2: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003475F6; /* je: equal / zero */

loc_003475E8: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003478EF; /* je: equal / zero */

loc_003475F6: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347601u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347601: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003478DC; /* je: equal / zero */

loc_0034760D: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347656; /* je: equal / zero */

loc_00347613: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x73 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347628; /* jne: not equal / not zero */

loc_00347619: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00347623; /* jl: less (signed <) */

loc_0034761E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347628; /* jle: less or equal (signed <=) */

loc_00347623: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347656; /* jne: not equal / not zero */

loc_00347628: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003478DC; /* jne: not equal / not zero */

loc_00347632: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    ecx = eax;
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((3) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    esi = MEM32(ebp + -96);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    esi = (uint32_t)(int32_t)SMEM8(ebp + -73);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003478DC; /* je: equal / zero */

loc_00347656: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003478D6; /* jne: not equal / not zero */

loc_00347660: ;
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003478CB; /* je: equal / zero */

loc_0034766A: ;
    MEM8(ebp + -100) = LO8(eax);
    eax = ZX8(LO8(eax));
    ecx = MEM32(0x47A7C8);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034768B; /* je: equal / zero */

loc_0034767D: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347688u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347688: ;
    MEM8(ebp + -99) = LO8(eax);

loc_0034768B: ;
    PUSH32(esp, MEM32(0x47A7D0));
    eax = ebp + -100;
    PUSH32(esp, eax);
    eax = ebp + -108;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034769Eu); RECOMP_ABI_CALL(0x0034BB8Cu, sub_0034BB8C); /* call 0x0034BB8C */

loc_0034769E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    SET_LO16(eax, MEM16(ebp + -108));
    MEM16(edi) = LO16(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003478CE;

loc_003476AF: ;
    eax = ecx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x70));
    eax = eax - 0x70;
    if ((eax == 0)) goto loc_00347928; /* je: equal / zero */

loc_003476BA: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax == 0)) goto loc_003475BD; /* je: equal / zero */

loc_003476C3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0034792C; /* je: equal / zero */

loc_003476CB: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax == 0)) goto loc_003473B5; /* je: equal / zero */

loc_003476D4: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax == 0)) goto loc_00347702; /* je: equal / zero */

loc_003476D9: ;
    eax = ZX8(MEM8(edi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003476EA; /* je: equal / zero */

loc_003476E1: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_00347C23;

loc_003476EA: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) - 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BC3; /* jne: not equal / not zero */

loc_003476F7: ;
    eax = MEM32(ebp + -124);
    MEM32(ebp + 0x10) = eax;
    goto loc_00347BC3;

loc_00347702: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0034770C; /* jle: less or equal (signed <=) */

loc_00347708: ;
    MEM8(ebp + -50) = 1;

loc_0034770C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    esi = edi;
    MEM32(ebp + -120) = esi;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x5E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347724; /* jne: not equal / not zero */

loc_0034771A: ;
    esi = edi + 1;
    MEM32(ebp + -120) = esi;
    MEM8(ebp + -73) = 0xFF;

loc_00347724: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347771; /* jne: not equal / not zero */

loc_0034772A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0x20);
    POP32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347736u); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_00347736: ;
    MEM32(ebp + -24) = esp;
    eax = esp;
    MEM32(ebp + -96) = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_00347771;

    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347763; /* jne: not equal / not zero */

loc_0034775A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_00347C53;

loc_00347763: ;
    MEM32(ebp + -112) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    esi = MEM32(ebp + -120);

loc_00347771: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347791; /* jne: not equal / not zero */

loc_00347783: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347791; /* jne: not equal / not zero */

loc_00347788: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_003477F8;

loc_00347791: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_003477F8;

loc_00347796: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003477E0; /* jne: not equal / not zero */

loc_0034779B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003477E0; /* je: equal / zero */

loc_0034779F: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003477E0; /* je: equal / zero */

loc_003477A6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003477AF; /* jae: above or equal (unsigned >=) */

loc_003477AB: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_003477B3;

loc_003477AF: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_003477B3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003477DC; /* ja: above (unsigned >) */

loc_003477B7: ;
    edi = ZX8(LO8(edx));
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(edx)));
    SET_LO8(eax, LO8(eax) - LO8(edx));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_003477C4: ;
    eax = edi;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(edx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003477C4; /* jne: not equal / not zero */

loc_003477DC: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    goto loc_003477F8;

loc_003477E0: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    ebx = MEM32(ebp + -96);

loc_003477F8: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347796; /* jne: not equal / not zero */

loc_003477FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347806: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003475C7; /* jne: not equal / not zero */

loc_00347810: ;
    MEM32(ebp + 0xC) = esi;
    goto loc_003475C7;

loc_00347818: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034783B; /* jne: not equal / not zero */

loc_0034781D: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034782C; /* jne: not equal / not zero */

loc_00347822: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034782C; /* je: equal / zero */

loc_00347826: ;
    MEM8(ebp + -25) = 1;
    goto loc_0034783B;

loc_0034782C: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347836u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347836: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0034783B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034795D; /* jne: not equal / not zero */

loc_00347844: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034784Eu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_0034784E: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034789D; /* je: equal / zero */

loc_00347858: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034789D; /* je: equal / zero */

loc_0034785D: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347884; /* je: equal / zero */

loc_0034786A: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347878; /* je: equal / zero */

loc_00347870: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347878; /* jne: not equal / not zero */

loc_00347875: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347878: ;
    MEM32(ebp + -56) = 0x6F;
    goto loc_0034795D;

loc_00347884: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347895; /* je: equal / zero */

loc_0034788C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347893u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347893: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347895: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    goto loc_0034795A;

loc_0034789D: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003478A7u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_003478A7: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003478BF; /* je: equal / zero */

loc_003478B2: ;
    _cf = (int)((uint32_t)(MEM32(ebp + -40)) < (uint32_t)(2));
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003478BF; /* jge: greater or equal (signed >=) */

loc_003478BC: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_003478BF: ;
    MEM32(ebp + -56) = 0x78;
    goto loc_0034795D;

loc_003478CB: ;
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003478CE: ;
    MEM32(ebp + -84) = edi;
    goto loc_003475E2;

loc_003478D6: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003475E2;

loc_003478DC: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003478EF; /* je: equal / zero */

loc_003478E4: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003478EDu); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_003478ED: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003478EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_003478F7: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BC3; /* jne: not equal / not zero */

loc_00347901: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BC3; /* je: equal / zero */

loc_0034790E: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347920; /* je: equal / zero */

loc_00347917: ;
    _cf = 0; /* logical op clears CF */
    MEM16(eax) = MEM16(eax) & 0;
    goto loc_00347BC3;

loc_00347920: ;
    MEM8(eax) = 0;
    goto loc_00347BC3;

loc_00347928: ;
    MEM8(ebp + -42) = 1;

loc_0034792C: ;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034793A; /* jne: not equal / not zero */

loc_00347934: ;
    MEM8(ebp + -51) = 1;
    goto loc_0034793F;

loc_0034793A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034795D; /* jne: not equal / not zero */

loc_0034793F: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034794E; /* jne: not equal / not zero */

loc_00347944: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034794E; /* je: equal / zero */

loc_00347948: ;
    MEM8(ebp + -25) = 1;
    goto loc_0034795D;

loc_0034794E: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347958u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347958: ;
    ebx = eax;

loc_0034795A: ;
    MEM32(ebp + -48) = ebx;

loc_0034795D: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A94; /* je: equal / zero */

loc_00347967: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347A72; /* jne: not equal / not zero */

loc_00347971: ;
    edi = 0x80;

loc_00347976: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003479DE; /* je: equal / zero */

loc_0034797C: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003479DE; /* je: equal / zero */

loc_00347982: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347997; /* jle: less or equal (signed <=) */

loc_0034798B: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347993u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347993: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003479A3;

loc_00347997: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_003479A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347A1F; /* je: equal / zero */

loc_003479A7: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003479C7; /* jne: not equal / not zero */

loc_003479AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00347A1F; /* jge: greater or equal (signed >=) */

loc_003479B2: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    ecx = (ecx << 3) | (eax >> (32 - 3)); /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00347A22;

loc_003479C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003479D6u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_003479D6: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_00347A22;

loc_003479DE: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003479F2; /* jle: less or equal (signed <=) */

loc_003479E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003479EEu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_003479EE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003479FD;

loc_003479F2: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;

loc_003479FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347A1F; /* je: equal / zero */

loc_00347A01: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    ecx = (ecx << 4) | (eax >> (32 - 4)); /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347A1Bu); RECOMP_ABI_CALL(0x003470BEu, sub_003470BE); /* call 0x003470BE */

loc_00347A1B: ;
    ebx = eax;
    goto loc_00347A22;

loc_00347A1F: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347A22: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347A54; /* jne: not equal / not zero */

loc_00347A28: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A46; /* je: equal / zero */

loc_00347A3B: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347A46; /* jne: not equal / not zero */

loc_00347A40: ;
    MEM8(ebp + -25) = 1;
    goto loc_00347A65;

loc_00347A46: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347A50u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347A50: ;
    ebx = eax;
    goto loc_00347A65;

loc_00347A54: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A65; /* je: equal / zero */

loc_00347A5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347A63u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347A63: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347A65: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347976; /* je: equal / zero */

loc_00347A6F: ;
    MEM32(ebp + -48) = ebx;

loc_00347A72: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B80; /* je: equal / zero */

loc_00347A7C: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00347B80;

loc_00347A94: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B77; /* jne: not equal / not zero */

loc_00347A9E: ;
    edi = 0x80;

loc_00347AA3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AF2; /* je: equal / zero */

loc_00347AA9: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AF2; /* je: equal / zero */

loc_00347AAF: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347AC4; /* jle: less or equal (signed <=) */

loc_00347AB8: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347AC0u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347AC0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347AD0;

loc_00347AC4: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_00347AD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347B24; /* je: equal / zero */

loc_00347AD4: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347AE5; /* jne: not equal / not zero */

loc_00347ADA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00347B24; /* jge: greater or equal (signed >=) */

loc_00347ADF: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    goto loc_00347B27;

loc_00347AE5: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    MEM32(ebp + -64) = eax;
    goto loc_00347B27;

loc_00347AF2: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347B06; /* jle: less or equal (signed <=) */

loc_00347AFB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347B02u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347B02: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347B11;

loc_00347B06: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;

loc_00347B11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347B24; /* je: equal / zero */

loc_00347B15: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347B20u); RECOMP_ABI_CALL(0x003470BEu, sub_003470BE); /* call 0x003470BE */

loc_00347B20: ;
    ebx = eax;
    goto loc_00347B27;

loc_00347B24: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347B27: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B59; /* jne: not equal / not zero */

loc_00347B2D: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B4B; /* je: equal / zero */

loc_00347B40: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347B4B; /* jne: not equal / not zero */

loc_00347B45: ;
    MEM8(ebp + -25) = 1;
    goto loc_00347B6A;

loc_00347B4B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347B55u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347B55: ;
    ebx = eax;
    goto loc_00347B6A;

loc_00347B59: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B6A; /* je: equal / zero */

loc_00347B61: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347B68u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347B68: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347B6A: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AA3; /* je: equal / zero */

loc_00347B74: ;
    MEM32(ebp + -48) = ebx;

loc_00347B77: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B80; /* je: equal / zero */

loc_00347B7D: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(-(int32_t)MEM32(ebp + -64));

loc_00347B80: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B8A; /* jne: not equal / not zero */

loc_00347B86: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;

loc_00347B8A: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347B94: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BC3; /* jne: not equal / not zero */

loc_00347B9A: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);

loc_00347BA3: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BB6; /* je: equal / zero */

loc_00347BA9: ;
    eax = MEM32(ebp + -72);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebx + 4) = eax;
    goto loc_00347BC3;

loc_00347BB6: ;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -42), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BC0; /* je: equal / zero */

loc_00347BBC: ;
    MEM32(ebx) = eax;
    goto loc_00347BC3;

loc_00347BC0: ;
    MEM16(ebx) = LO16(eax);

loc_00347BC3: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_00347C37;

loc_00347BCF: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347BDAu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347BDA: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C20; /* jne: not equal / not zero */

loc_00347BEA: ;
    eax = ZX8(LO8(ebx));
    ecx = MEM32(0x47A7C8);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347C37; /* je: equal / zero */

loc_00347BFA: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347C05u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347C05: ;
    ecx = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C34; /* je: equal / zero */

loc_00347C10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C20; /* je: equal / zero */

loc_00347C15: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347C1Eu); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347C1E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347C20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);

loc_00347C23: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347C25: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347C30u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347C30: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347C53;

loc_00347C34: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00347C37: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034712F; /* jne: not equal / not zero */

loc_00347C41: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C53; /* jne: not equal / not zero */

loc_00347C46: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034712C; /* je: equal / zero */

loc_00347C53: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C62; /* jne: not equal / not zero */

loc_00347C59: ;
    PUSH32(esp, MEM32(ebp + -96));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347C61u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00347C61: ;
    POP32(esp, ecx);

loc_00347C62: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C6F: ;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -49), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C74: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;

loc_00347C77: ;
    esp = ebp + -488;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347C82u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00347C82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00347744
 * Original: 0x00347744 - 0x00347C83 (1343 bytes, 463 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347744(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00347744: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347763; /* jne: not equal / not zero */

loc_0034775A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_00347C53;

loc_00347763: ;
    MEM32(ebp + -112) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    esi = MEM32(ebp + -120);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347791; /* jne: not equal / not zero */

loc_00347783: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347791; /* jne: not equal / not zero */

loc_00347788: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_003477F8;

loc_00347791: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_003477F8;

loc_00347796: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003477E0; /* jne: not equal / not zero */

loc_0034779B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003477E0; /* je: equal / zero */

loc_0034779F: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003477E0; /* je: equal / zero */

loc_003477A6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003477AF; /* jae: above or equal (unsigned >=) */

loc_003477AB: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_003477B3;

loc_003477AF: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_003477B3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003477DC; /* ja: above (unsigned >) */

loc_003477B7: ;
    edi = ZX8(LO8(edx));
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(edx)));
    SET_LO8(eax, LO8(eax) - LO8(edx));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_003477C4: ;
    eax = edi;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(edx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003477C4; /* jne: not equal / not zero */

loc_003477DC: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    goto loc_003477F8;

loc_003477E0: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    ebx = MEM32(ebp + -96);

loc_003477F8: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347796; /* jne: not equal / not zero */

loc_003477FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347806: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_003475C7(); return; } /* jne: not equal / not zero */

loc_00347810: ;
    MEM32(ebp + 0xC) = esi;
    g_seh_ebp = ebp; sub_003475C7(); return; /* tail jmp 0x003475C7 */

    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034783B; /* jne: not equal / not zero */

loc_0034781D: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034782C; /* jne: not equal / not zero */

loc_00347822: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034782C; /* je: equal / zero */

loc_00347826: ;
    MEM8(ebp + -25) = 1;
    goto loc_0034783B;

loc_0034782C: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00347836u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347836: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0034783B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034795D; /* jne: not equal / not zero */

loc_00347844: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0034784Eu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_0034784E: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034789D; /* je: equal / zero */

loc_00347858: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034789D; /* je: equal / zero */

loc_0034785D: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347884; /* je: equal / zero */

loc_0034786A: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347878; /* je: equal / zero */

loc_00347870: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347878; /* jne: not equal / not zero */

loc_00347875: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347878: ;
    MEM32(ebp + -56) = 0x6F;
    goto loc_0034795D;

loc_00347884: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347895; /* je: equal / zero */

loc_0034788C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347893u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347893: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347895: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    goto loc_0034795A;

loc_0034789D: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x003478A7u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_003478A7: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003478BF; /* je: equal / zero */

loc_003478B2: ;
    _cf = (int)((uint32_t)(MEM32(ebp + -40)) < (uint32_t)(2));
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003478BF; /* jge: greater or equal (signed >=) */

loc_003478BC: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_003478BF: ;
    MEM32(ebp + -56) = 0x78;
    goto loc_0034795D;

    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -84) = edi;
    g_seh_ebp = ebp; sub_003475E2(); return; /* tail jmp 0x003475E2 */

    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_003475E2(); return; /* tail jmp 0x003475E2 */

    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003478EF; /* je: equal / zero */

loc_003478E4: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003478EDu); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_003478ED: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003478EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_003478F7: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BC3; /* jne: not equal / not zero */

loc_00347901: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BC3; /* je: equal / zero */

loc_0034790E: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347920; /* je: equal / zero */

loc_00347917: ;
    _cf = 0; /* logical op clears CF */
    MEM16(eax) = MEM16(eax) & 0;
    goto loc_00347BC3;

loc_00347920: ;
    MEM8(eax) = 0;
    goto loc_00347BC3;

    MEM8(ebp + -42) = 1;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034793A; /* jne: not equal / not zero */

loc_00347934: ;
    MEM8(ebp + -51) = 1;
    goto loc_0034793F;

loc_0034793A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034795D; /* jne: not equal / not zero */

loc_0034793F: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034794E; /* jne: not equal / not zero */

loc_00347944: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034794E; /* je: equal / zero */

loc_00347948: ;
    MEM8(ebp + -25) = 1;
    goto loc_0034795D;

loc_0034794E: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00347958u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347958: ;
    ebx = eax;

loc_0034795A: ;
    MEM32(ebp + -48) = ebx;

loc_0034795D: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A94; /* je: equal / zero */

loc_00347967: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347A72; /* jne: not equal / not zero */

loc_00347971: ;
    edi = 0x80;

loc_00347976: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003479DE; /* je: equal / zero */

loc_0034797C: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003479DE; /* je: equal / zero */

loc_00347982: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347997; /* jle: less or equal (signed <=) */

loc_0034798B: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347993u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347993: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003479A3;

loc_00347997: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_003479A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347A1F; /* je: equal / zero */

loc_003479A7: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003479C7; /* jne: not equal / not zero */

loc_003479AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00347A1F; /* jge: greater or equal (signed >=) */

loc_003479B2: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    ecx = (ecx << 3) | (eax >> (32 - 3)); /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00347A22;

loc_003479C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x003479D6u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_003479D6: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_00347A22;

loc_003479DE: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003479F2; /* jle: less or equal (signed <=) */

loc_003479E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003479EEu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_003479EE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003479FD;

loc_003479F2: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;

loc_003479FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347A1F; /* je: equal / zero */

loc_00347A01: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    ecx = (ecx << 4) | (eax >> (32 - 4)); /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x00347A1Bu); RECOMP_ABI_CALL(0x003470BEu, sub_003470BE); /* call 0x003470BE */

loc_00347A1B: ;
    ebx = eax;
    goto loc_00347A22;

loc_00347A1F: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347A22: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347A54; /* jne: not equal / not zero */

loc_00347A28: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A46; /* je: equal / zero */

loc_00347A3B: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347A46; /* jne: not equal / not zero */

loc_00347A40: ;
    MEM8(ebp + -25) = 1;
    goto loc_00347A65;

loc_00347A46: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00347A50u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347A50: ;
    ebx = eax;
    goto loc_00347A65;

loc_00347A54: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A65; /* je: equal / zero */

loc_00347A5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347A63u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347A63: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347A65: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347976; /* je: equal / zero */

loc_00347A6F: ;
    MEM32(ebp + -48) = ebx;

loc_00347A72: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B80; /* je: equal / zero */

loc_00347A7C: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00347B80;

loc_00347A94: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B77; /* jne: not equal / not zero */

loc_00347A9E: ;
    edi = 0x80;

loc_00347AA3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AF2; /* je: equal / zero */

loc_00347AA9: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AF2; /* je: equal / zero */

loc_00347AAF: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347AC4; /* jle: less or equal (signed <=) */

loc_00347AB8: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347AC0u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347AC0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347AD0;

loc_00347AC4: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_00347AD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347B24; /* je: equal / zero */

loc_00347AD4: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347AE5; /* jne: not equal / not zero */

loc_00347ADA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00347B24; /* jge: greater or equal (signed >=) */

loc_00347ADF: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    goto loc_00347B27;

loc_00347AE5: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    MEM32(ebp + -64) = eax;
    goto loc_00347B27;

loc_00347AF2: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347B06; /* jle: less or equal (signed <=) */

loc_00347AFB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347B02u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347B02: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347B11;

loc_00347B06: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;

loc_00347B11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347B24; /* je: equal / zero */

loc_00347B15: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    eax = ebx;
    PUSH32(esp, 0x00347B20u); RECOMP_ABI_CALL(0x003470BEu, sub_003470BE); /* call 0x003470BE */

loc_00347B20: ;
    ebx = eax;
    goto loc_00347B27;

loc_00347B24: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347B27: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B59; /* jne: not equal / not zero */

loc_00347B2D: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B4B; /* je: equal / zero */

loc_00347B40: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347B4B; /* jne: not equal / not zero */

loc_00347B45: ;
    MEM8(ebp + -25) = 1;
    goto loc_00347B6A;

loc_00347B4B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00347B55u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347B55: ;
    ebx = eax;
    goto loc_00347B6A;

loc_00347B59: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B6A; /* je: equal / zero */

loc_00347B61: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347B68u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347B68: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347B6A: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AA3; /* je: equal / zero */

loc_00347B74: ;
    MEM32(ebp + -48) = ebx;

loc_00347B77: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B80; /* je: equal / zero */

loc_00347B7D: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(-(int32_t)MEM32(ebp + -64));

loc_00347B80: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B8A; /* jne: not equal / not zero */

loc_00347B86: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;

loc_00347B8A: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347B94: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BC3; /* jne: not equal / not zero */

loc_00347B9A: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BB6; /* je: equal / zero */

loc_00347BA9: ;
    eax = MEM32(ebp + -72);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebx + 4) = eax;
    goto loc_00347BC3;

loc_00347BB6: ;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -42), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BC0; /* je: equal / zero */

loc_00347BBC: ;
    MEM32(ebx) = eax;
    goto loc_00347BC3;

loc_00347BC0: ;
    MEM16(ebx) = LO16(eax);

loc_00347BC3: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_00347C37;

    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00347BDAu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347BDA: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C20; /* jne: not equal / not zero */

loc_00347BEA: ;
    eax = ZX8(LO8(ebx));
    ecx = MEM32(0x47A7C8);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347C37; /* je: equal / zero */

loc_00347BFA: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00347C05u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347C05: ;
    ecx = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C34; /* je: equal / zero */

loc_00347C10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C20; /* je: equal / zero */

loc_00347C15: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00347C1Eu); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347C1E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347C20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347C25: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x00347C30u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347C30: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347C53;

loc_00347C34: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00347C37: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034712F(); return; } /* jne: not equal / not zero */

loc_00347C41: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C53; /* jne: not equal / not zero */

loc_00347C46: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0034712C(); return; } /* je: equal / zero */

loc_00347C53: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C62; /* jne: not equal / not zero */

loc_00347C59: ;
    PUSH32(esp, MEM32(ebp + -96));
    PUSH32(esp, 0x00347C61u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00347C61: ;
    POP32(esp, ecx);

loc_00347C62: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C6F: ;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -49), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C74: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;

loc_00347C77: ;
    esp = ebp + -488;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00347C82u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00347C82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00347748
 * Original: 0x00347748 - 0x00347C83 (1339 bytes, 460 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347748(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00347748: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00347752u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_00347752: ;
    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347763; /* jne: not equal / not zero */

loc_0034775A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    goto loc_00347C53;

loc_00347763: ;
    MEM32(ebp + -112) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    esi = MEM32(ebp + -120);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347791; /* jne: not equal / not zero */

loc_00347783: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347791; /* jne: not equal / not zero */

loc_00347788: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_003477F8;

loc_00347791: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_003477F8;

loc_00347796: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003477E0; /* jne: not equal / not zero */

loc_0034779B: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003477E0; /* je: equal / zero */

loc_0034779F: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003477E0; /* je: equal / zero */

loc_003477A6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_003477AF; /* jae: above or equal (unsigned >=) */

loc_003477AB: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_003477B3;

loc_003477AF: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_003477B3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003477DC; /* ja: above (unsigned >) */

loc_003477B7: ;
    edi = ZX8(LO8(edx));
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(edx)));
    SET_LO8(eax, LO8(eax) - LO8(edx));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_003477C4: ;
    eax = edi;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    SET_LO8(edx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(edx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003477C4; /* jne: not equal / not zero */

loc_003477DC: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    goto loc_003477F8;

loc_003477E0: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    ebx = MEM32(ebp + -96);

loc_003477F8: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347796; /* jne: not equal / not zero */

loc_003477FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347806: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_003475C7(); return; } /* jne: not equal / not zero */

loc_00347810: ;
    MEM32(ebp + 0xC) = esi;
    g_seh_ebp = ebp; sub_003475C7(); return; /* tail jmp 0x003475C7 */

    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034783B; /* jne: not equal / not zero */

loc_0034781D: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034782C; /* jne: not equal / not zero */

loc_00347822: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034782C; /* je: equal / zero */

loc_00347826: ;
    MEM8(ebp + -25) = 1;
    goto loc_0034783B;

loc_0034782C: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00347836u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347836: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_0034783B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034795D; /* jne: not equal / not zero */

loc_00347844: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0034784Eu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_0034784E: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034789D; /* je: equal / zero */

loc_00347858: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034789D; /* je: equal / zero */

loc_0034785D: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347884; /* je: equal / zero */

loc_0034786A: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347878; /* je: equal / zero */

loc_00347870: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347878; /* jne: not equal / not zero */

loc_00347875: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347878: ;
    MEM32(ebp + -56) = 0x6F;
    goto loc_0034795D;

loc_00347884: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347895; /* je: equal / zero */

loc_0034788C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347893u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347893: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347895: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    goto loc_0034795A;

loc_0034789D: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x003478A7u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_003478A7: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003478BF; /* je: equal / zero */

loc_003478B2: ;
    _cf = (int)((uint32_t)(MEM32(ebp + -40)) < (uint32_t)(2));
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003478BF; /* jge: greater or equal (signed >=) */

loc_003478BC: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_003478BF: ;
    MEM32(ebp + -56) = 0x78;
    goto loc_0034795D;

    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -84) = edi;
    g_seh_ebp = ebp; sub_003475E2(); return; /* tail jmp 0x003475E2 */

    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_003475E2(); return; /* tail jmp 0x003475E2 */

    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003478EF; /* je: equal / zero */

loc_003478E4: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003478EDu); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_003478ED: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003478EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_003478F7: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BC3; /* jne: not equal / not zero */

loc_00347901: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BC3; /* je: equal / zero */

loc_0034790E: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347920; /* je: equal / zero */

loc_00347917: ;
    _cf = 0; /* logical op clears CF */
    MEM16(eax) = MEM16(eax) & 0;
    goto loc_00347BC3;

loc_00347920: ;
    MEM8(eax) = 0;
    goto loc_00347BC3;

    MEM8(ebp + -42) = 1;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034793A; /* jne: not equal / not zero */

loc_00347934: ;
    MEM8(ebp + -51) = 1;
    goto loc_0034793F;

loc_0034793A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034795D; /* jne: not equal / not zero */

loc_0034793F: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0034794E; /* jne: not equal / not zero */

loc_00347944: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034794E; /* je: equal / zero */

loc_00347948: ;
    MEM8(ebp + -25) = 1;
    goto loc_0034795D;

loc_0034794E: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00347958u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347958: ;
    ebx = eax;

loc_0034795A: ;
    MEM32(ebp + -48) = ebx;

loc_0034795D: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A94; /* je: equal / zero */

loc_00347967: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347A72; /* jne: not equal / not zero */

loc_00347971: ;
    edi = 0x80;

loc_00347976: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003479DE; /* je: equal / zero */

loc_0034797C: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003479DE; /* je: equal / zero */

loc_00347982: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347997; /* jle: less or equal (signed <=) */

loc_0034798B: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347993u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347993: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003479A3;

loc_00347997: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_003479A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347A1F; /* je: equal / zero */

loc_003479A7: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003479C7; /* jne: not equal / not zero */

loc_003479AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00347A1F; /* jge: greater or equal (signed >=) */

loc_003479B2: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    ecx = (ecx << 3) | (eax >> (32 - 3)); /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00347A22;

loc_003479C7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x003479D6u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_003479D6: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_00347A22;

loc_003479DE: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003479F2; /* jle: less or equal (signed <=) */

loc_003479E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003479EEu); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_003479EE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_003479FD;

loc_003479F2: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;

loc_003479FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347A1F; /* je: equal / zero */

loc_00347A01: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    ecx = (ecx << 4) | (eax >> (32 - 4)); /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x00347A1Bu); RECOMP_ABI_CALL(0x003470BEu, sub_003470BE); /* call 0x003470BE */

loc_00347A1B: ;
    ebx = eax;
    goto loc_00347A22;

loc_00347A1F: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347A22: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347A54; /* jne: not equal / not zero */

loc_00347A28: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A46; /* je: equal / zero */

loc_00347A3B: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347A46; /* jne: not equal / not zero */

loc_00347A40: ;
    MEM8(ebp + -25) = 1;
    goto loc_00347A65;

loc_00347A46: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00347A50u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347A50: ;
    ebx = eax;
    goto loc_00347A65;

loc_00347A54: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347A65; /* je: equal / zero */

loc_00347A5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347A63u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347A63: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347A65: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347976; /* je: equal / zero */

loc_00347A6F: ;
    MEM32(ebp + -48) = ebx;

loc_00347A72: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B80; /* je: equal / zero */

loc_00347A7C: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00347B80;

loc_00347A94: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B77; /* jne: not equal / not zero */

loc_00347A9E: ;
    edi = 0x80;

loc_00347AA3: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AF2; /* je: equal / zero */

loc_00347AA9: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AF2; /* je: equal / zero */

loc_00347AAF: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347AC4; /* jle: less or equal (signed <=) */

loc_00347AB8: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347AC0u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347AC0: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347AD0;

loc_00347AC4: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;

loc_00347AD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347B24; /* je: equal / zero */

loc_00347AD4: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347AE5; /* jne: not equal / not zero */

loc_00347ADA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00347B24; /* jge: greater or equal (signed >=) */

loc_00347ADF: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    goto loc_00347B27;

loc_00347AE5: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    MEM32(ebp + -64) = eax;
    goto loc_00347B27;

loc_00347AF2: ;
    _fa = (uint32_t)(MEM32(0x47A7D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47A7D0), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00347B06; /* jle: less or equal (signed <=) */

loc_00347AFB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347B02u); RECOMP_ABI_CALL(0x00347D08u, sub_00347D08); /* call 0x00347D08 */

loc_00347B02: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347B11;

loc_00347B06: ;
    eax = MEM32(0x47A7C8);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;

loc_00347B11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347B24; /* je: equal / zero */

loc_00347B15: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    eax = ebx;
    PUSH32(esp, 0x00347B20u); RECOMP_ABI_CALL(0x003470BEu, sub_003470BE); /* call 0x003470BE */

loc_00347B20: ;
    ebx = eax;
    goto loc_00347B27;

loc_00347B24: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00347B27: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B59; /* jne: not equal / not zero */

loc_00347B2D: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B4B; /* je: equal / zero */

loc_00347B40: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347B4B; /* jne: not equal / not zero */

loc_00347B45: ;
    MEM8(ebp + -25) = 1;
    goto loc_00347B6A;

loc_00347B4B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00347B55u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347B55: ;
    ebx = eax;
    goto loc_00347B6A;

loc_00347B59: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B6A; /* je: equal / zero */

loc_00347B61: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00347B68u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347B68: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347B6A: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347AA3; /* je: equal / zero */

loc_00347B74: ;
    MEM32(ebp + -48) = ebx;

loc_00347B77: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347B80; /* je: equal / zero */

loc_00347B7D: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(-(int32_t)MEM32(ebp + -64));

loc_00347B80: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347B8A; /* jne: not equal / not zero */

loc_00347B86: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;

loc_00347B8A: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347B94: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347BC3; /* jne: not equal / not zero */

loc_00347B9A: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BB6; /* je: equal / zero */

loc_00347BA9: ;
    eax = MEM32(ebp + -72);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebx + 4) = eax;
    goto loc_00347BC3;

loc_00347BB6: ;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -42), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347BC0; /* je: equal / zero */

loc_00347BBC: ;
    MEM32(ebx) = eax;
    goto loc_00347BC3;

loc_00347BC0: ;
    MEM16(ebx) = LO16(eax);

loc_00347BC3: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_00347C37;

    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00347BDAu); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347BDA: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C20; /* jne: not equal / not zero */

loc_00347BEA: ;
    eax = ZX8(LO8(ebx));
    ecx = MEM32(0x47A7C8);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00347C37; /* je: equal / zero */

loc_00347BFA: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00347C05u); RECOMP_ABI_CALL(0x003470F0u, sub_003470F0); /* call 0x003470F0 */

loc_00347C05: ;
    ecx = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C34; /* je: equal / zero */

loc_00347C10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C20; /* je: equal / zero */

loc_00347C15: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00347C1Eu); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347C1E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347C20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00347C53; /* je: equal / zero */

loc_00347C25: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x00347C30u); RECOMP_ABI_CALL(0x00344580u, sub_00344580); /* call 0x00344580 */

loc_00347C30: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00347C53;

loc_00347C34: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00347C37: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034712F(); return; } /* jne: not equal / not zero */

loc_00347C41: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C53; /* jne: not equal / not zero */

loc_00347C46: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0034712C(); return; } /* je: equal / zero */

loc_00347C53: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C62; /* jne: not equal / not zero */

loc_00347C59: ;
    PUSH32(esp, MEM32(ebp + -96));
    PUSH32(esp, 0x00347C61u); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00347C61: ;
    POP32(esp, ecx);

loc_00347C62: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C6F: ;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -49), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347C77; /* jne: not equal / not zero */

loc_00347C74: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;

loc_00347C77: ;
    esp = ebp + -488;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00347C82u); RECOMP_ABI_CALL(0x003432E3u, sub_003432E3); /* call 0x003432E3 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00347C82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00347C83
 * Original: 0x00347C83 - 0x00347D08 (133 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347C83(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347C83: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347CA4u); RECOMP_ABI_CALL(0x0034BBC3u, sub_0034BBC3); /* call 0x0034BBC3 */

loc_00347CA4: ;
    ebx = eax;
    esp = esp + 0x1C;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347CBB; /* je: equal / zero */

loc_00347CAE: ;
    edi = 0x200;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    goto loc_00347CE9;

loc_00347CBB: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347CC8u); RECOMP_ABI_CALL(0x0034B4FDu, sub_0034B4FD); /* call 0x0034B4FD */

loc_00347CC8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00347CD4; /* jne: not equal / not zero */

loc_00347CCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347CD9; /* jne: not equal / not zero */

loc_00347CD4: ;
    edi = 0x80;

loc_00347CD9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00347CE3; /* jne: not equal / not zero */

loc_00347CDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347CE9; /* jne: not equal / not zero */

loc_00347CE3: ;
    edi = edi | 0x100;

loc_00347CE9: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ecx = ecx - MEM32(ebp + 0xC);
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(ebp + -8);
    POP32(esp, esi);
    MEM32(eax + 0x14) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00347D08
 * Original: 0x00347D08 - 0x00347D29 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00347D08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347D08: ;
    eax = MEM32(esp + 4);
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00347D26; /* ja: above (unsigned >) */

loc_00347D17: ;
    ecx = MEM32(0x47A7C8);
    eax = ZX16(MEM16(ecx + eax * 2));
    eax = eax & MEM32(esp + 8);
    esp += 4; return; /* ret */

loc_00347D26: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00347D29
 * Original: 0x00347D29 - 0x00347E42 (281 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347D29(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347D29: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x82 (8-bit) */
    ebx = MEM32(esi + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00347E35; /* je: equal / zero */

loc_00347D3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00347E35; /* jne: not equal / not zero */

loc_00347D47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347D62; /* je: equal / zero */

loc_00347D4B: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347E35; /* je: equal / zero */

loc_00347D57: ;
    ecx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;

loc_00347D62: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    eax = eax & 0xFFFFFFEFu;
    eax = eax | 2;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00347D9E; /* jne: not equal / not zero */

loc_00347D7C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A160) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47A160 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347D8C; /* je: equal / zero */

loc_00347D84: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x47A180) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x47A180 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347D97; /* jne: not equal / not zero */

loc_00347D8C: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347D92u); RECOMP_ABI_CALL(0x0034C03Au, sub_0034C03A); /* call 0x0034C03A */

loc_00347D92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00347D9E; /* jne: not equal / not zero */

loc_00347D97: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347D9Du); RECOMP_ABI_CALL(0x0034A804u, sub_0034A804); /* call 0x0034A804 */

loc_00347D9D: ;
    POP32(esp, ecx);

loc_00347D9E: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xC), 0x108 (16-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00347E0B; /* je: equal / zero */

loc_00347DA7: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    ecx = eax + 1;
    MEM32(esi) = ecx;
    ecx = MEM32(esi + 0x18);
    edi = edi - eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 4) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00347DCB; /* jle: less or equal (signed <=) */

loc_00347DBE: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347DC6u); RECOMP_ABI_CALL(0x0034A582u, sub_0034A582); /* call 0x0034A582 */

loc_00347DC6: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_00347DFE;

loc_00347DCB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347DE9; /* je: equal / zero */

loc_00347DD0: ;
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ecx * 4 + 0x6F11E0);
    eax = ebx;
    eax = eax & 0x1F;
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_00347DEE;

loc_00347DE9: ;
    eax = 0x47A8F0;

loc_00347DEE: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347E01; /* je: equal / zero */

loc_00347DF4: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347DFEu); RECOMP_ABI_CALL(0x0034A69Fu, sub_0034A69F); /* call 0x0034A69F */

loc_00347DFE: ;
    esp = esp + 0xC;

loc_00347E01: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(ebp + 8));
    MEM8(eax) = LO8(ecx);
    goto loc_00347E1F;

loc_00347E0B: ;
    edi = 0; /* xor self */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347E19u); RECOMP_ABI_CALL(0x0034A582u, sub_0034A582); /* call 0x0034A582 */

loc_00347E19: ;
    esp = esp + 0xC;
    MEM32(ebp + 0xC) = eax;

loc_00347E1F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00347E2B; /* je: equal / zero */

loc_00347E25: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    goto loc_00347E3B;

loc_00347E2B: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFF;
    goto loc_00347E3E;

loc_00347E35: ;
    eax = eax | 0x20;
    MEM32(esi + 0xC) = eax;

loc_00347E3B: ;
    eax = eax | 0xFFFFFFFFu;

loc_00347E3E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00347E42
 * Original: 0x00347E42 - 0x00347E75 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347E42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347E42: ;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xC), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347E4E; /* je: equal / zero */

loc_00347E48: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347E72; /* je: equal / zero */

loc_00347E4E: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00347E5E; /* js: sign (negative) */

loc_00347E53: ;
    edx = MEM32(ecx);
    MEM8(edx) = LO8(eax);
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    goto loc_00347E6A;

loc_00347E5E: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00347E68u); RECOMP_ABI_CALL(0x00347D29u, sub_00347D29); /* call 0x00347D29 */

loc_00347E68: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347E6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347E72; /* jne: not equal / not zero */

loc_00347E6F: ;
    MEM32(esi) = MEM32(esi) | eax;
    esp += 4; return; /* ret */

loc_00347E72: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00347E75
 * Original: 0x00347E75 - 0x00347E99 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347E75(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347E75: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = eax;
    goto loc_00347E90;

loc_00347E7D: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347E8Bu); RECOMP_ABI_CALL(0x00347E42u, sub_00347E42); /* call 0x00347E42 */

loc_00347E8B: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347E96; /* je: equal / zero */

loc_00347E90: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00347E7D; /* jg: greater (signed >) */

loc_00347E96: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00347E99
 * Original: 0x00347E99 - 0x00347ED0 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347E99(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347E99: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00347EC6; /* je: equal / zero */

loc_00347EA5: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347EC6; /* jne: not equal / not zero */

loc_00347EAB: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = MEM32(esi) + eax;
    goto loc_00347ECD;

loc_00347EB3: ;
    SET_LO8(eax, MEM8(ebx));
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    PUSH32(esp, 0x00347EC0u); RECOMP_ABI_CALL(0x00347E42u, sub_00347E42); /* call 0x00347E42 */

loc_00347EC0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347ECD; /* je: equal / zero */

loc_00347EC6: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00347EB3; /* jg: greater (signed >) */

loc_00347ECD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00347ED0
 * Original: 0x00347ED0 - 0x00348637 (1895 bytes, 607 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00347ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x250));
    esp = esp - 0x250;
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -40) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00348631; /* je: equal / zero */

loc_00347EF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    goto loc_00347EFB;

loc_00347EF8: ;
    ecx = MEM32(ebp + -52);

loc_00347EFB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + 0xC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0034862F; /* jl: less (signed <) */

loc_00347F09: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00347F22; /* jl: less (signed <) */

loc_00347F0E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00347F22; /* jg: greater (signed >) */

loc_00347F13: ;
    eax = SX8(LO8(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x4312C0);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    goto loc_00347F24;

loc_00347F22: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_00347F24: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x4312E0);
    PUSH32(esp, 7);
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((4) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -52) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00348622; /* ja: above (unsigned >) */

loc_00347F3D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x348637); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00347F44u) goto loc_00347F44;
    if (_jt == 0x00347F61u) goto loc_00347F61;
    if (_jt == 0x00347FADu) goto loc_00347FAD;
    if (_jt == 0x00347FE8u) goto loc_00347FE8;
    if (_jt == 0x00347FF1u) goto loc_00347FF1;
    if (_jt == 0x00348029u) goto loc_00348029;
    if (_jt == 0x003480C2u) goto loc_003480C2;
    if (_jt == 0x003480FBu) goto loc_003480FB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00347F44: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -36) = eax;
    goto loc_00348622;

loc_00347F61: ;
    eax = SX8(LO8(ebx));
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x20));
    eax = eax - 0x20;
    if ((eax == 0)) goto loc_00347FA4; /* je: equal / zero */

loc_00347F69: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax == 0)) goto loc_00347F9B; /* je: equal / zero */

loc_00347F6E: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    if ((eax == 0)) goto loc_00347F92; /* je: equal / zero */

loc_00347F73: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00347F89; /* je: equal / zero */

loc_00347F77: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax != 0)) goto loc_00348622; /* jne: not equal / not zero */

loc_00347F80: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    goto loc_00348622;

loc_00347F89: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    goto loc_00348622;

loc_00347F92: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    goto loc_00348622;

loc_00347F9B: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    goto loc_00348622;

loc_00347FA4: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    goto loc_00348622;

loc_00347FAD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00347FD3; /* jne: not equal / not zero */

loc_00347FB2: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00348622; /* jge: greater or equal (signed >=) */

loc_00347FC7: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    _cf = (int)((MEM32(ebp + -32)) != 0);
    MEM32(ebp + -32) = (uint32_t)(-(int32_t)MEM32(ebp + -32));
    goto loc_00348622;

loc_00347FD3: ;
    eax = MEM32(ebp + -32);
    ecx = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    goto loc_00348622;

loc_00347FE8: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    goto loc_00348622;

loc_00347FF1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00348014; /* jne: not equal / not zero */

loc_00347FF6: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00348622; /* jge: greater or equal (signed >=) */

loc_0034800B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    goto loc_00348622;

loc_00348014: ;
    eax = MEM32(ebp + -8);
    ecx = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    goto loc_00348622;

loc_00348029: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x49) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x49 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034805C; /* je: equal / zero */

loc_0034802E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x68) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x68 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00348053; /* je: equal / zero */

loc_00348033: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x6C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x6C (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0034804A; /* je: equal / zero */

loc_00348038: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x77) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x77 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00348622; /* jne: not equal / not zero */

loc_00348041: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    goto loc_00348622;

loc_0034804A: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    goto loc_00348622;

loc_00348053: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x20;
    goto loc_00348622;

loc_0034805C: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x36) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x36 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00348076; /* jne: not equal / not zero */

loc_00348062: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x34 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00348076; /* jne: not equal / not zero */

loc_00348068: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    MEM32(ebp + 0xC) = edi;
    goto loc_00348622;

loc_00348076: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x33) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x33 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034808E; /* jne: not equal / not zero */

loc_0034807A: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x32 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034808E; /* jne: not equal / not zero */

loc_00348080: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    MEM32(ebp + 0xC) = edi;
    goto loc_00348622;

loc_0034808E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00348622; /* je: equal / zero */

loc_00348096: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00348622; /* je: equal / zero */

loc_0034809E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00348622; /* je: equal / zero */

loc_003480A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x75 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00348622; /* je: equal / zero */

loc_003480AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00348622; /* je: equal / zero */

loc_003480B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00348622; /* je: equal / zero */

loc_003480BE: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -52) = MEM32(ebp + -52) & 0;

loc_003480C2: ;
    ecx = MEM32(0x47A7C8);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003480E9; /* je: equal / zero */

loc_003480D6: ;
    ecx = MEM32(ebp + 8);
    esi = ebp + -20;
    SET_LO8(eax, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003480E3u); RECOMP_ABI_CALL(0x00347E42u, sub_00347E42); /* call 0x00347E42 */

loc_003480E3: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;

loc_003480E9: ;
    ecx = MEM32(ebp + 8);
    esi = ebp + -20;
    SET_LO8(eax, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003480F6u); RECOMP_ABI_CALL(0x00347E42u, sub_00347E42); /* call 0x00347E42 */

loc_003480F6: ;
    goto loc_00348622;

loc_003480FB: ;
    eax = SX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00348358; /* jg: greater (signed >) */

loc_00348107: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0034818B; /* jge: greater or equal (signed >=) */

loc_0034810C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_003481EC; /* jg: greater (signed >) */

loc_00348115: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003483D8; /* je: equal / zero */

loc_0034811B: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x43));
    eax = eax - 0x43;
    if ((eax == 0)) goto loc_003481AE; /* je: equal / zero */

loc_00348124: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00348181; /* je: equal / zero */

loc_00348128: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00348181; /* je: equal / zero */

loc_0034812C: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC));
    eax = eax - 0xC;
    if ((eax != 0)) goto loc_00348520; /* jne: not equal / not zero */

loc_00348135: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00348141; /* jne: not equal / not zero */

loc_0034813D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;

loc_00348141: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034814E; /* jne: not equal / not zero */

loc_00348149: ;
    ecx = 0x7FFFFFFF;

loc_0034814E: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x810) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x810 (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003483AE; /* je: equal / zero */

loc_00348167: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00348172; /* jne: not equal / not zero */

loc_0034816B: ;
    MEM32(ebp + -12) = 0x431344;

loc_00348172: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -36) = 1;
    goto loc_003483A0;

loc_00348181: ;
    MEM32(ebp + -56) = 1;
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(0x20)) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + 0x20);

loc_0034818B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = ebp + -592;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0034829B; /* jge: greater or equal (signed >=) */

loc_003481A2: ;
    MEM32(ebp + -8) = 6;
    goto loc_003482E2;

loc_003481AE: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003481BA; /* jne: not equal / not zero */

loc_003481B6: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;

loc_003481BA: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x810) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x810 (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0034822B; /* je: equal / zero */

loc_003481C9: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);
    PUSH32(esp, eax);
    eax = ebp + -592;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003481DAu); RECOMP_ABI_CALL(0x0034C064u, sub_0034C064); /* call 0x0034C064 */

loc_003481DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -16) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0034823B; /* jge: greater or equal (signed >=) */

loc_003481E3: ;
    MEM32(ebp + -48) = 1;
    goto loc_0034823B;

loc_003481EC: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x5A));
    eax = eax - 0x5A;
    if ((eax == 0)) goto loc_00348249; /* je: equal / zero */

loc_003481F1: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(9));
    eax = eax - 9;
    if ((eax == 0)) goto loc_003481BA; /* je: equal / zero */

loc_003481F6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00348520; /* jne: not equal / not zero */

loc_003481FD: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;

loc_00348201: ;
    MEM32(ebp + -16) = 0xA;

loc_00348208: ;
    ebx = MEM32(ebp + -4);
    esi = 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00348448; /* je: equal / zero */

loc_00348218: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    MEM32(ebp + 0x10) = ecx;
    goto loc_00348470;

loc_0034822B: ;
    SET_LO8(eax, MEM8(eax + -4));
    MEM8(ebp + -592) = LO8(eax);
    MEM32(ebp + -16) = 1;

loc_0034823B: ;
    eax = ebp + -592;
    MEM32(ebp + -12) = eax;
    goto loc_00348520;

loc_00348249: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00348284; /* je: equal / zero */

loc_00348257: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00348284; /* je: equal / zero */

loc_0034825E: ;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0034827B; /* je: equal / zero */

loc_0034826A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(ebp + -36) = 1;
    goto loc_0034851D;

loc_0034827B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    goto loc_0034851D;

loc_00348284: ;
    eax = 0x43133C;
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_0034828F: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034828F; /* jne: not equal / not zero */

loc_00348296: ;
    goto loc_00348351;

loc_0034829B: ;
    if (CMP_NE(_fa, _fb)) goto loc_003482AB; /* jne: not equal / not zero */

loc_0034829D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x67) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x67 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003482E2; /* jne: not equal / not zero */

loc_003482A2: ;
    MEM32(ebp + -8) = 1;
    goto loc_003482E2;

loc_003482AB: ;
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003482B8; /* jle: less or equal (signed <=) */

loc_003482B5: ;
    MEM32(ebp + -8) = eax;

loc_003482B8: ;
    esi = 0xA3;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003482E2; /* jle: less or equal (signed <=) */

loc_003482C2: ;
    eax = MEM32(ebp + -8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x15D)) >> 32) & 1);
    eax = eax + 0x15D;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003482D0u); RECOMP_ABI_CALL(0x003437F3u, sub_003437F3); /* call 0x003437F3 */

loc_003482D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    MEM32(ebp + -40) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003482DF; /* je: equal / zero */

loc_003482D8: ;
    MEM32(ebp + -12) = eax;
    edi = eax;
    goto loc_003482E2;

loc_003482DF: ;
    MEM32(ebp + -8) = esi;

loc_003482E2: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -56));
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -68) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -72) = ecx;
    { uint32_t _icall_target = MEM32(0x47A670); PUSH32(esp, 0x0034830Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0034830B: ;
    esi = MEM32(ebp + -4);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x80;
    if ((esi == 0)) goto loc_00348327; /* je: equal / zero */

loc_00348319: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00348327; /* jne: not equal / not zero */

loc_0034831F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x47A67C); PUSH32(esp, 0x00348326u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00348326: ;
    POP32(esp, ecx);

loc_00348327: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x67) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x67 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00348338; /* jne: not equal / not zero */

loc_0034832C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00348338; /* jne: not equal / not zero */

loc_00348330: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x47A674); PUSH32(esp, 0x00348337u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00348337: ;
    POP32(esp, ecx);

loc_00348338: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00348345; /* jne: not equal / not zero */

loc_0034833D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = edi;

loc_00348345: ;
    eax = edi;
    edx = eax + 1;

loc_0034834A: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0034834A; /* jne: not equal / not zero */

loc_00348351: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    goto loc_0034851D;

loc_00348358: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x69));
    eax = eax - 0x69;
    if ((eax == 0)) goto loc_003481FD; /* je: equal / zero */

loc_00348361: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(5));
    eax = eax - 5;
    if ((eax == 0)) goto loc_0034841E; /* je: equal / zero */

loc_0034836A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00348404; /* je: equal / zero */

loc_00348371: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003483D1; /* je: equal / zero */

loc_00348374: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax == 0)) goto loc_00348141; /* je: equal / zero */

loc_0034837D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00348201; /* je: equal / zero */

loc_00348385: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    if ((eax != 0)) goto loc_00348520; /* jne: not equal / not zero */

loc_0034838E: ;
    MEM32(ebp + -44) = 0x27;
    goto loc_003483DB;

loc_00348397: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003483A4; /* je: equal / zero */

loc_0034839E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003483A0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00348397; /* jne: not equal / not zero */

loc_003483A4: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -12)));
    eax = eax - MEM32(ebp + -12);
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    goto loc_0034851D;

loc_003483AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003483B9; /* jne: not equal / not zero */

loc_003483B2: ;
    MEM32(ebp + -12) = 0x43133C;

loc_003483B9: ;
    eax = MEM32(ebp + -12);
    goto loc_003483C5;

loc_003483BE: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003483C9; /* je: equal / zero */

loc_003483C4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003483C5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003483BE; /* jne: not equal / not zero */

loc_003483C9: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -12)));
    eax = eax - MEM32(ebp + -12);
    goto loc_0034851D;

loc_003483D1: ;
    MEM32(ebp + -8) = 8;

loc_003483D8: ;
    MEM32(ebp + -44) = ecx;

loc_003483DB: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_00348208; /* je: equal / zero */

loc_003483EC: ;
    SET_LO8(eax, MEM8(ebp + -44));
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x51)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x51);
    MEM8(ebp + -24) = 0x30;
    MEM8(ebp + -23) = LO8(eax);
    MEM32(ebp + -28) = 2;
    goto loc_00348208;

loc_00348404: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp + -16) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_00348208; /* je: equal / zero */

loc_00348415: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 2;
    goto loc_00348208;

loc_0034841E: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(_fa, _fb)) goto loc_00348437; /* je: equal / zero */

loc_0034842E: ;
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax) = LO16(ecx);
    goto loc_0034843C;

loc_00348437: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_0034843C: ;
    MEM32(ebp + -48) = 1;
    goto loc_0034860F;

loc_00348448: ;
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00348466; /* je: equal / zero */

loc_00348454: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00348460; /* je: equal / zero */

loc_00348459: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_0034845D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00348470;

loc_00348460: ;
    eax = ZX16(MEM16(eax + -4));
    goto loc_0034845D;

loc_00348466: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(eax + -4);
    if (TEST_NZ(_fa, _fb)) goto loc_0034845D; /* jne: not equal / not zero */

loc_0034846E: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_00348470: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034848A; /* je: equal / zero */

loc_00348475: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0034848A; /* jg: greater (signed >) */

loc_00348479: ;
    if (TEST_S(_fas, _fbs)) goto loc_0034847F; /* jl: less (signed <) */

loc_0034847B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_0034848A; /* jae: above or equal (unsigned >=) */

loc_0034847F: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;

loc_0034848A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -4), esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00348495; /* jne: not equal / not zero */

loc_00348493: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */

loc_00348495: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003484A4; /* jge: greater or equal (signed >=) */

loc_0034849B: ;
    MEM32(ebp + -8) = 1;
    goto loc_003484B5;

loc_003484A4: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003484B5; /* jle: less or equal (signed <=) */

loc_003484B2: ;
    MEM32(ebp + -8) = eax;

loc_003484B5: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    if ((eax != 0)) goto loc_003484BF; /* jne: not equal / not zero */

loc_003484BB: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;

loc_003484BF: ;
    esi = ebp + -81;

loc_003484C2: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_003484D2; /* jg: greater (signed >) */

loc_003484CC: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    if ((eax == 0)) goto loc_003484F6; /* je: equal / zero */

loc_003484D2: ;
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003484DFu); RECOMP_ABI_CALL(0x00349070u, sub_00349070); /* call 0x00349070 */

loc_003484DF: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -60) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003484F1; /* jle: less or equal (signed <=) */

loc_003484EE: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -44))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + -44);

loc_003484F1: ;
    MEM8(esi) = LO8(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003484C2;

loc_003484F6: ;
    eax = ebp + -81;
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
    if (TEST_Z(_fa, _fb)) goto loc_00348520; /* je: equal / zero */

loc_00348508: ;
    ecx = esi;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00348513; /* jne: not equal / not zero */

loc_0034850F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00348520; /* jne: not equal / not zero */

loc_00348513: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034851D: ;
    MEM32(ebp + -16) = eax;

loc_00348520: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0034860F; /* jne: not equal / not zero */

loc_0034852A: ;
    ebx = MEM32(ebp + -4);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00348558; /* je: equal / zero */

loc_00348532: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034853D; /* je: equal / zero */

loc_00348537: ;
    MEM8(ebp + -24) = 0x2D;
    goto loc_00348551;

loc_0034853D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00348548; /* je: equal / zero */

loc_00348542: ;
    MEM8(ebp + -24) = 0x2B;
    goto loc_00348551;

loc_00348548: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00348558; /* je: equal / zero */

loc_0034854D: ;
    MEM8(ebp + -24) = 0x20;

loc_00348551: ;
    MEM32(ebp + -28) = 1;

loc_00348558: ;
    esi = MEM32(ebp + -32);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(MEM32(ebp + -28)));
    esi = esi - MEM32(ebp + -28);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(MEM32(ebp + -16)));
    esi = esi - MEM32(ebp + -16);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xC (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00348577; /* jne: not equal / not zero */

loc_00348566: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348574u); RECOMP_ABI_CALL(0x00347E75u, sub_00347E75); /* call 0x00347E75 */

loc_00348574: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_00348577: ;
    PUSH32(esp, MEM32(ebp + -28));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348588u); RECOMP_ABI_CALL(0x00347E99u, sub_00347E99); /* call 0x00347E99 */

loc_00348588: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_003485A2; /* je: equal / zero */

loc_0034858E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_003485A2; /* jne: not equal / not zero */

loc_00348593: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034859Fu); RECOMP_ABI_CALL(0x00347E75u, sub_00347E75); /* call 0x00347E75 */

loc_0034859F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_003485A2: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003485E9; /* je: equal / zero */

loc_003485A8: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003485E9; /* jle: less or equal (signed <=) */

loc_003485AE: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -60) = eax;

loc_003485B7: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) - 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003485C9u); RECOMP_ABI_CALL(0x0034C064u, sub_0034C064); /* call 0x0034C064 */

loc_003485C9: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ecx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003485F8; /* jle: less or equal (signed <=) */

loc_003485D1: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = ebp + -20;
    ecx = ebp + -80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003485E0u); RECOMP_ABI_CALL(0x00347E99u, sub_00347E99); /* call 0x00347E99 */

loc_003485E0: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003485B7; /* jne: not equal / not zero */

loc_003485E7: ;
    goto loc_003485F8;

loc_003485E9: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003485F7u); RECOMP_ABI_CALL(0x00347E99u, sub_00347E99); /* call 0x00347E99 */

loc_003485F7: ;
    POP32(esp, ecx);

loc_003485F8: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0034860F; /* je: equal / zero */

loc_003485FE: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034860Cu); RECOMP_ABI_CALL(0x00347E75u, sub_00347E75); /* call 0x00347E75 */

loc_0034860C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_0034860F: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00348622; /* je: equal / zero */

loc_00348615: ;
    PUSH32(esp, MEM32(ebp + -40));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034861Du); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_0034861D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    POP32(esp, ecx);

loc_00348622: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(ebx, MEM8(edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00347EF8; /* jne: not equal / not zero */

loc_0034862F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00348631: ;
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00348658
 * Original: 0x00348658 - 0x00348696 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00348658(void)
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

loc_00348658: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp + 0xFFFFFD30u;
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM32(0x47AD0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47AD0C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348687; /* je: equal / zero */

loc_00348673: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348678u); RECOMP_ABI_CALL(0x0034893Fu, sub_0034893F); /* call 0x0034893F */

loc_00348678: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348684u); RECOMP_ABI_CALL(0x00348722u, sub_00348722); /* call 0x00348722 */

loc_00348684: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00348687: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(ebp + -134) = fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(ebp + -126) = fp_top(); /* fst */
    goto loc_00348673;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348696
 * Original: 0x00348696 - 0x003486D3 (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00348696(void)
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

loc_00348696: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp + 0xFFFFFD30u;
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    _fa = (uint32_t)(MEM32(0x47AD0C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x47AD0C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003486CB; /* je: equal / zero */

loc_003486B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003486B5u); RECOMP_ABI_CALL(0x003488D8u, sub_003488D8); /* call 0x003488D8 */

loc_003486B5: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 1;
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003486C8u); RECOMP_ABI_CALL(0x00348722u, sub_00348722); /* call 0x00348722 */

loc_003486C8: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003486CB: ;
    MEMD(ebp + -134) = fp_top(); /* fst */
    goto loc_003486B0;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003486D3
 * Original: 0x003486D3 - 0x0034871B (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003486D3(void)
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

loc_003486D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp + 0xFFFFFD30u;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003486E8u); RECOMP_ABI_CALL(0x0034889Cu, sub_0034889C); /* call 0x0034889C */

loc_003486E8: ;
    esp = esp + 8;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003486F6u); RECOMP_ABI_CALL(0x0034889Cu, sub_0034889C); /* call 0x0034889C */

loc_003486F6: ;
    esp = esp + 8;
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    MEM8(ebp + -712) = MEM8(ebp + -712) | 2;
    MEM8(ebp + -143) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348713u); RECOMP_ABI_CALL(0x0034893Fu, sub_0034893F); /* call 0x0034893F */

loc_00348713: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348718u); RECOMP_ABI_CALL(0x0034871Bu, sub_0034871B); /* call 0x0034871B */

loc_00348718: ;
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
 * sub_0034871B
 * Original: 0x0034871B - 0x00348722 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034871B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034871B: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFE;

    g_seh_ebp = ebp; sub_00348722(); return; /* fallthrough 0x00348722 */

}

/**
 * sub_00348722
 * Original: 0x00348722 - 0x00348869 (327 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348722(void)
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

loc_00348722: ;
    _fa = (uint32_t)(MEM32(0x5D99E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5D99E4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034877A; /* jne: not equal / not zero */

loc_0034872B: ;
    MEMD(ebp + -720) = fp_top(); /* fst */
    SET_LO8(eax, MEM8(ebp + -144));
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_00348755; /* je: equal / zero */

loc_0034873B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0034879A; /* je: equal / zero */

loc_0034873F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348782; /* je: equal / zero */

loc_00348743: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    if ((LO8(eax) == 0)) goto loc_0034877A; /* je: equal / zero */

loc_00348747: ;
    eax = SX8(LO8(eax));
    MEM32(ebp + -142) = eax;
    goto loc_00348807;

loc_00348755: ;
    SET_LO16(eax, MEM16(ebp + -164));
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) != 0)) goto loc_0034877A; /* jne: not equal / not zero */

loc_00348762: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO16(eax, LO16(eax) & 0x20);
    if ((LO16(eax) == 0)) goto loc_0034877A; /* je: equal / zero */

loc_0034876B: ;
    MEM32(ebp + -142) = 8;
    goto loc_00348807;

loc_0034877A: ;
    g_fp_control_word = MEM16(ebp + -164); /* fldcw word ptr [ebp - 0xa4] */
    /* wait - FPU sync */
    esp += 4; return; /* ret */

loc_00348782: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    SET_LO16(eax, LO16(eax) | LO16(eax));
    if ((LO16(eax) == 0)) goto loc_003487AD; /* je: equal / zero */

loc_00348792: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003487DB; /* je: equal / zero */

loc_00348798: ;
    goto loc_00348755;

loc_0034879A: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003487DB; /* je: equal / zero */

loc_003487AB: ;
    goto loc_00348755;

loc_003487AD: ;
    MEM32(ebp + -142) = 4;
    fp_push(MEMD(0x43136C)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x43135C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x43135c] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp >= 0) /* sahf */) goto loc_00348807; /* jae: above or equal (unsigned >=) */

loc_003487D3: ;
    fp_top() = fp_top() * MEMD(0x43137C); /* fmul qword ptr [0x43137c] */
    goto loc_00348807;

loc_003487DB: ;
    MEM32(ebp + -142) = 3;
    fp_push(MEMD(0x431364)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x431354)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x431354] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp <= 0) /* sahf */) goto loc_00348807; /* jbe: below or equal (unsigned <=) */

loc_00348801: ;
    fp_top() = fp_top() * MEMD(0x431374); /* fmul qword ptr [0x431374] */

loc_00348807: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + -148);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -138) = ebx;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -712), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00348839; /* jne: not equal / not zero */

loc_0034881F: ;
    g_df = 0; /* cld */
    esi = ebp + 8;
    edi = ebp + -134;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348839; /* je: equal / zero */

loc_00348831: ;
    esi = ebp + 0x10;
    edi = ebp + -126;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_00348839: ;
    MEMD(ebp + -118) = fp_top(); fp_pop(); /* fstp */
    eax = ebp + -142;
    ebx = ebp + -164;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebx = MEM32(ebp + -148);
    SET_LO8(eax, MEM8(ebx + 0xE));
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034885Cu); RECOMP_ABI_CALL(0x0034C08Fu, sub_0034C08F); /* call 0x0034C08F */

loc_0034885C: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    fp_push(MEMD(ebp + -118)); /* fld double */
    goto loc_0034877A;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348869
 * Original: 0x00348869 - 0x0034889C (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00348869(void)
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

loc_00348869: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp + 0xFFFFFD30u;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034887Eu); RECOMP_ABI_CALL(0x0034889Cu, sub_0034889C); /* call 0x0034889C */

loc_0034887E: ;
    esp = esp + 8;
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348894u); RECOMP_ABI_CALL(0x003488D8u, sub_003488D8); /* call 0x003488D8 */

loc_00348894: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348899u); RECOMP_ABI_CALL(0x0034871Bu, sub_0034871B); /* call 0x0034871B */

loc_00348899: ;
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
 * sub_0034889C
 * Original: 0x0034889C - 0x003488D8 (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034889C(void)
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

loc_0034889C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp + 0xFFFFFFF4u;
    PUSH32(esp, ebx);
    SET_LO16(eax, MEM16(ebp + 0xE));
    SET_LO16(ebx, LO16(eax));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003488D2; /* jne: not equal / not zero */

loc_003488B4: ;
    SET_LO16(ebx, LO16(ebx) | 0x7FFF);
    MEM16(ebp + -2) = LO16(ebx);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    eax = (eax << 0xB) | (ebx >> (32 - 0xB)); /* shld */
    MEM32(ebp + -6) = eax;
    MEM32(ebp + -10) = ebx;
    fp_push(MEMF(ebp + -10)); /* fld */
    goto loc_003488D5;

loc_003488D2: ;
    fp_push(MEMD(ebp + 8)); /* fld double */

loc_003488D5: ;
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
 * sub_003488D8
 * Original: 0x003488D8 - 0x0034893F (103 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003488D8(void)
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

loc_003488D8: ;
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xE), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003488EF; /* jne: not equal / not zero */

loc_003488DE: ;
    SET_LO16(ebx, MEM16(ebp + -164));
    SET_HI8(ebx, HI8(ebx) | 2);
    SET_HI8(ebx, HI8(ebx) & 0xFE);
    SET_LO8(ebx, 0x3F);
    goto loc_003488F3;

loc_003488EF: ;
    SET_LO16(ebx, 0x133F);

loc_003488F3: ;
    MEM16(ebp + -162) = LO16(ebx);
    g_fp_control_word = MEM16(ebp + -162); /* fldcw word ptr [ebp - 0xa2] */
    ebx = 0x47A7F8;
    g_fp_cc = recomp_fxam(fp_top()); /* fxam */
    MEM32(ebp + -148) = edx;
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    MEM8(ebp + -144) = 0;
    /* wait - FPU sync */
    SET_LO8(ecx, MEM8(ebp + -159));
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, (uint32_t)(((int32_t)(int8_t)(LO8(ecx))) >> ((1) & 31u)));
    SET_LO8(ecx, ROL32(LO8(ecx), 1));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    eax = SX8(LO8(eax));
    ecx = ecx & 0x404;
    ebx = edx;
    ebx = ebx + eax;
    ebx = ebx + 0x10;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ebx)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0034893F
 * Original: 0x0034893F - 0x003489CB (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034893F(void)
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

loc_0034893F: ;
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xE), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00348956; /* jne: not equal / not zero */

loc_00348945: ;
    SET_LO16(ebx, MEM16(ebp + -164));
    SET_HI8(ebx, HI8(ebx) | 2);
    SET_HI8(ebx, HI8(ebx) & 0xFE);
    SET_LO8(ebx, 0x3F);
    goto loc_0034895A;

loc_00348956: ;
    SET_LO16(ebx, 0x133F);

loc_0034895A: ;
    MEM16(ebp + -162) = LO16(ebx);
    g_fp_control_word = MEM16(ebp + -162); /* fldcw word ptr [ebp - 0xa2] */
    ebx = 0x47A7F8;
    g_fp_cc = recomp_fxam(fp_top()); /* fxam */
    MEM32(ebp + -148) = edx;
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    MEM8(ebp + -144) = 0;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    SET_LO8(ecx, MEM8(ebp + -159));
    g_fp_cc = recomp_fxam(fp_top()); /* fxam */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    SET_HI8(ecx, MEM8(ebp + -159));
    SET_HI8(ecx, HI8(ecx) << 1);
    SET_HI8(ecx, (uint32_t)(((int32_t)(int8_t)(HI8(ecx))) >> ((1) & 31u)));
    SET_HI8(ecx, ROL32(HI8(ecx), 1));
    SET_LO8(eax, HI8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    SET_HI8(eax, LO8(eax));
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, (uint32_t)(((int32_t)(int8_t)(LO8(ecx))) >> ((1) & 31u)));
    SET_LO8(ecx, ROL32(LO8(ecx), 1));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    SET_HI8(eax, HI8(eax) << 1);
    SET_HI8(eax, HI8(eax) << 1);
    SET_LO8(eax, LO8(eax) | HI8(eax));
    eax = SX8(LO8(eax));
    ecx = ecx & 0x404;
    ebx = edx;
    ebx = ebx + eax;
    ebx = ebx + 0x10;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ebx)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003489D0
 * Original: 0x003489D0 - 0x003489D5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003489D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003489D0: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003489DC
 * Original: 0x003489DC - 0x003489E3 (7 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003489DC(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003489DC: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003489E3
 * Original: 0x003489E3 - 0x003489E5 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003489E3(void)
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

loc_003489E3: ;
    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_003489E5(); return; /* fallthrough 0x003489E5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
