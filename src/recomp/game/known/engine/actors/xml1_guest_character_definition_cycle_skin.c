#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/progression/talent_registry_guest.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_character_race.h"
#include "engine/combat/raven_filter_event.h"
#include "recomp_funcs.h"
#include "game/xml1/costume_catalog.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>
#include "game/xml1/character_limits.h"

/* xml1_guest_character_definition_cycle_skin; original guest entry 0x000B0D30.
 * Evidence: docs/ROSTER-COSTUME-EXPANSION.md
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B0D30
 * Original: 0x000B0D30 - 0x000B0E33 (259 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_definition_cycle_skin(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0D30: ;
    { unsigned pc_current = MEM8(ecx+0x1E);
      if (pc_current == 255) pc_current = MEM8(ecx+0x371);
      unsigned pc_next = xml1_costume_next((const char*)XBOX_PTR(ecx+0x20C),
                                           MEM8(ecx+0x370),pc_current);
      if (pc_next) { MEM8(ecx+0x1E) = (uint8_t)pc_next; esp+=4; return; }
    }
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(edx, MEM8(esi + 0x379));
    SET_LO8(ecx, MEM8(esi + 0x378));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    SET_LO8(eax, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x377));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x375));
    SET_LO8(edx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x374));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x373));
    SET_LO8(edx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(ecx, MEM8(esi + 0x372));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, MEM8(esi + 0x376));
    SET_LO8(edx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    SET_LO8(eax, LO8(eax) | MEM8(esi + 0x484) | MEM8(esi + 0x485) | MEM8(esi + 0x486));
    MEM8(esp + 7) = LO8(eax);
    if ((LO8(eax) == 0)) goto loc_000B0DF9; /* je: equal / zero */

loc_000B0DA0: ;
    PUSH32(esp, 0x000B0DA5u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000B0DA5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x000B0DAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B0DAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B0DFC; /* je: equal / zero */

loc_000B0DB3: ;
    /* Retail unlock checks above remain authoritative. Cycle distinct physical
     * skins across all eleven categories; mission-default flags stay intact.
     * Keep tracing in this same hook so regeneration is idempotent. */
    { unsigned pc_previous_skin = MEM8(esi + 0x1E);
      MEM8(esi + 0x1E) = (uint8_t)xml1_next_character_skin(esi);
      if (getenv("XML1_CHARACTER_TRACE"))
          fprintf(stderr, "[COSTUME CYCLE] name=%.20s old=%u new=%u\n",
              (const char *)((uintptr_t)g_xbox_mem_offset + esi + 0x20C),
              pc_previous_skin, MEM8(esi + 0x1E));
    }
    goto loc_000B0DF9;
    _fa = (uint32_t)(MEM8(esi + 0x1E)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1E), 0xFF (8-bit) */
    SET_LO8(edx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000B0DBE; /* jne: not equal / not zero */

loc_000B0DBB: ;
    MEM8(esi + 0x1E) = LO8(edx);

loc_000B0DBE: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x1E) = LO8(eax);
    SET_LO8(ecx, LO8(eax));
    PUSH32(esp, edi);
    /* nop */

loc_000B0DD0: ;
    eax = 0; /* xor self */
    ecx = ZX8(LO8(ecx));

loc_000B0DD5: ;
    edi = ZX8(MEM8(esi + eax + 0x372));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0DF8; /* je: equal / zero */

loc_000B0DE2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B0DD5; /* jl: less (signed <) */

loc_000B0DE8: ;
    SET_LO8(ecx, MEM8(esi + 0x1E));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 8 (8-bit) */
    MEM8(esi + 0x1E) = LO8(ecx);
    if (CMP_B(_fa, _fb)) goto loc_000B0DD0; /* jb: below (unsigned <) */

loc_000B0DF5: ;
    MEM8(esi + 0x1E) = LO8(edx);

loc_000B0DF8: ;
    POP32(esp, edi);

loc_000B0DF9: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000B0DFC: ;
    PUSH32(esp, 0x000B0E01u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000B0E01: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x000B0E0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B0E0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B0DF9; /* je: equal / zero */

loc_000B0E0F: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0E21; /* je: equal / zero */

loc_000B0E16: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0E21; /* je: equal / zero */

loc_000B0E1A: ;
    MEM8(esi + 0x1E) = 0xFF;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000B0E21: ;
    SET_LO8(eax, MEM8(esi + 0x376));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_000B0DF9; /* jbe: below or equal (unsigned <=) */

loc_000B0E2B: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x1E) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
