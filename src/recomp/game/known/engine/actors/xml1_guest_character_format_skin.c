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

/* xml1_guest_character_format_skin; original guest entry 0x000B0EA0.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B0EA0
 * Original: 0x000B0EA0 - 0x000B0F06 (102 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_format_skin(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0EA0: ;
    if(getenv("XML1_RESOURCE_TRACE")) fprintf(stderr,"[SKIN INPUT] caller=%08X def=%08X family=%u variant=%u requested=%u\n",MEM32(esp),ecx,MEM8(ecx+0x370),MEM8(ecx+0x1E),MEM32(esp+4));
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x4D4048));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0EBF; /* jne: not equal / not zero */

loc_000B0EB2: ;
    MEM32(0x4D4048) = MEM32(0x4D4048) | eax;
    MEM8(0x4D4040) = 0;

loc_000B0EBF: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B0EE2; /* jne: not equal / not zero */

loc_000B0EC8: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B0ED4u); RECOMP_ABI_CALL(0x000B0E40u, sub_000B0E40); /* call 0x000B0E40 */

loc_000B0ED4: ;
    /* Preserve native mission outfits when available. A missing saved
     * explicit choice resolves to the default without changing the save byte. */
    { const char *pc_name = (const char*)XBOX_PTR(esi+0x20C);
      unsigned pc_family = MEM8(esi+0x370), pc_saved = MEM8(esi+0x1E);
      unsigned pc_variant = LO8(eax);
      if (!MEM8(esp+0xC) && pc_saved != 255) {
          unsigned pc_restore = xml1_costume_fallback(pc_name,pc_family,pc_saved);
          if (pc_restore && pc_restore != pc_saved) pc_variant = pc_restore;
      }
      unsigned pc_safe = xml1_costume_fallback(pc_name,pc_family,pc_variant);
      if (pc_safe) SET_LO8(eax,pc_safe);
    }
    edx = ZX8(MEM8(esi + 0x370));
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_000B0EEB;

loc_000B0EE2: ;
    { unsigned pc_safe = xml1_costume_fallback((const char*)XBOX_PTR(esi+0x20C),
                                                MEM8(esi+0x370),eax);
      if (pc_safe) eax = pc_safe;
    }
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x370));
    PUSH32(esp, eax);

loc_000B0EEB: ;
    PUSH32(esp, 0x3D3DC4);
    PUSH32(esp, 0x4D4040);
    PUSH32(esp, 0x000B0EFAu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000B0EFA: ;
    if(getenv("XML1_RESOURCE_TRACE")) fprintf(stderr,"[SKIN OUTPUT] value=%s\n",(char*)XBOX_PTR(0x4D4040));
    esp = esp + 0x10;
    eax = 0x4D4040;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
