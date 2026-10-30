/**
 * X-Men Legends - Recompiled Game Entry Point
 *
 * This is the Windows executable that hosts the recompiled game code.
 * It performs the following initialization sequence:
 *
 * 1. Load the original XBE file from disk
 * 2. Initialize the Xbox memory layout (map data sections to original VAs)
 * 3. Initialize the Xbox kernel replacement layer
 * 4. Initialize the kernel bridge (thunk table in Xbox memory)
 * 5. Set up game file paths for I/O redirection
 * 6. Initialize the stack pointer
 * 7. Install VEH crash handler for diagnostics
 * 8. Call the game's original entry point (recompiled)
 *
 * Customize this file for your game:
 *   - Set YOUR_GAME_ENTRY_POINT to the XBE entry point address
 *   - Set YOUR_GAME_XBE_PATH to where the XBE file lives
 *   - Set YOUR_GAME_DIR to the game data directory
 *   - Add any CRT global pre-initialization your game needs
 *   - Customize the VEH handler for game-specific crash diagnosis
 *
 * XBE Details (fill in from xbe_parser output):
 *   Title:       X-Men Legends
 *   Title ID:    0x00000000
 *   Base addr:   0x00010000
 *   Entry point: 0x00000000
 *   Code size:   ~??? KB (.text)
 *   Sections:    ?? (list them)
 *   Kernel imports: ??
 */

#include <windows.h>
#include <dbghelp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "app/build_settings.h"
#include "app/loose_setup.h"
#include "engine/resources/asset_routes.h"
#include "audio/raven_pc_sound_cache.h"
#include "engine/powers/raven_shared_powerups_runtime.h"
static int xml1_game_asset_filter(const char *input,char *output,unsigned size) {
    char selected[4096];
    int routed=xml1_asset_path_filter(input,selected,sizeof(selected));
    if(routed<0)return -1;
    const char *path=routed?selected:input;
    int sound=raven_pc_sound_path(path,output,size);
    if(sound)return sound;
    if(!routed)return 0;
    size_t length=strlen(selected)+1;if(length>size)return -1;
    memcpy(output,selected,length);return 1;
}
#include "engine/progression/raven_imported_talents.h"
#include "ui/pc_menu.h"
#include "input/pc_input_channel.h"

#include "diagnostics/performance_log.h"
void xml1_pc_menu_command(const char *command) {
    xml1_performance_event(command);
    if (strcmp(command, "quitapp") != 0) return;
    fprintf(stderr, "[PC MENU] Quit selected; closing application and owned renderer jobs\n");
    fflush(stderr);
    /* Same process lifetime contract as window close: Windows tears down the
       in-process audio engine and closes KILL_ON_JOB_CLOSE renderer jobs.
       Avoid CRT teardown while guest/audio worker threads are still live. */
    ExitProcess(0);
}
static int s_headless;

static int s_memory_query_test;
static int s_irql_test;
static int s_swizzle_test;
static int s_progression_test;
static int s_powerup_definition_test;
static int s_filter_event_test;
int xml1_filter_event_test(void);
int xml1_powerup_definition_test(void);
int xml1_progression_test(void);
int xml1_swizzle_test(void);
void xml1_native_probe_start(void);

/* xboxrecomp runtime headers */
#include <xbox/xboxrecomp.h>
extern MCPXAPUState *g_apu_state;
extern bool apu_hook_handle_mmio(PCONTEXT context, uintptr_t fault_address,
                                uint32_t xbox_address, int is_write);

/*
 * If xboxrecomp.h is not an umbrella header in your setup, include
 * the individual headers directly:
 *
 * #include "kernel.h"
 * #include "xbox_memory_layout.h"
 * #include "d3d8_xbox.h"
 * #include "dsound_xbox.h"
 * #include "xinput_xbox.h"
 */

/* ── Global register state (defined in xbox_memory_layout.c) ── */

/* RECOMP_TLS is not optional here. The runtime defines these thread-local, and
 * a plain `extern` referencing a __declspec(thread) variable does not resolve
 * to the calling thread's copy -- it resolves to the image's TLS template. The
 * host side then writes g_esp somewhere the generated code never reads, so the
 * guest starts with every register at zero and faults immediately, having
 * apparently ignored the setup that visibly ran. */
extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp;
extern RECOMP_TLS uint32_t g_ebx, g_esi, g_edi;
extern RECOMP_TLS uint32_t g_seh_ebp;
/* x87 and SSE state. Global for the same reason the volatile GPRs are: one
 * guest routine can lift to several C functions, so a value written in one
 * body is read in the next. Defined in xbox_memory_layout.c like the rest of
 * the register file. */
extern RECOMP_TLS double g_fp_stack[8];
extern RECOMP_TLS int g_fp_top;
extern RECOMP_TLS uint16_t g_fp_control_word;
extern RECOMP_TLS int g_fp_cmp;
extern RECOMP_TLS RecompXmm g_xmm0, g_xmm1, g_xmm2, g_xmm3;
extern RECOMP_TLS RecompXmm g_xmm4, g_xmm5, g_xmm6, g_xmm7;
extern ptrdiff_t g_xbox_mem_offset;

/* ── XBE Constants ─────────────────────────────────────────── */

/*
 * TODO: Set these from your xbe_parser output.
 * Run: py -3 -m tools.xbe_parser game/default.xbe
 */
#define YOUR_GAME_ENTRY_POINT   0x001A1C97  /* Retail World XBE entry, parsed from supplied image */
static const char *player_xbe_path="game\\default.xbe";
static char test_xbe_path[4096];
static const char *player_data_dir="game";
#define YOUR_GAME_XBE_PATH      player_xbe_path
#define YOUR_GAME_DIR           player_data_dir

/* ── Forward declarations ──────────────────────────────────── */

static BOOL load_xbe(const char *path, void **out_data, size_t *out_size);

/* Recompiled entry point (generated by recomp pipeline) */
extern void xbe_entry_point(void);

/* ── VEH crash handler ─────────────────────────────────────── */

/*
 * Vectored Exception Handler for crash diagnostics.
 *
 * When the recompiled game hits an access violation, this handler prints
 * the faulting address, all Xbox register values, and a native stack trace.
 * This is your primary debugging tool during bring-up.
 *
 * Customize this for your game:
 *   - Add game-specific address checks (GPU register probes, etc.)
 *   - Add dumps of game-specific globals (heap handles, state flags)
 *   - Add SEH simulation if your game uses __try/__except
 */
/* Name the guest function a fault happened in, and recover the call chain.
 *
 * Recompiled code faults as ordinary native code, so the exception record
 * carries a host RIP and nothing else -- there is no guest program counter to
 * report, and the host address changes every build. Two things recover the
 * guest view:
 *
 *   - every generated function is a real symbol in the image (sub_005A03C0
 *     and so on), so the linker's PDB already maps host address back to guest
 *     function. dbghelp turns an anonymous RIP into that name.
 *
 *   - every lifted call pushes its guest return address onto the guest stack
 *     before jumping, so the stack still holds the chain. Scanning up from esp
 *     for values inside the code sections recovers it.
 *
 * ponytail: the stack scan is a scan, not a frame walk -- these are FPO frames
 * with no reliable ebp chain, so there is nothing to walk. It over-reports,
 * since addresses from returned-from calls linger below esp, but naming the
 * guest function is the whole question at a fault.
 *
 * Requires linking dbghelp and keeping the .pdb beside the .exe.
 */
static void print_guest_context(void *rip)
{
    /* SYMBOL_INFO is variable-length: the name is written past the struct, so
     * it must be over-allocated with MaxNameLen set to the slack. */
    char buf[sizeof(SYMBOL_INFO) + 256];
    SYMBOL_INFO *sym = (SYMBOL_INFO *)buf;
    DWORD64 disp = 0;

    memset(buf, 0, sizeof(buf));
    sym->SizeOfStruct = sizeof(SYMBOL_INFO);
    sym->MaxNameLen = 255;
    if (SymFromAddr(GetCurrentProcess(), (DWORD64)(uintptr_t)rip, &disp, sym))
        fprintf(stderr, "  in %s+0x%llX\n",
                sym->Name, (unsigned long long)disp);

    if (g_xbox_mem_offset && g_esp) {
        const uint32_t *sp =
            (const uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp);
        int shown = 0, i;
        fprintf(stderr, "  guest stack (return addresses, innermost first):\n");
        for (i = 0; i < 256 && shown < 24; i++) {
            uint32_t v = sp[i];
            if (v > g_xbox_code_lo && v < g_xbox_code_hi) {
                fprintf(stderr, "    [esp+%-4d] 0x%08X\n", i * 4, v);
                shown++;
            }
        }
    }
}

static LONG CALLBACK veh_handler(PEXCEPTION_POINTERS ep)
{
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) {
        uintptr_t fault_addr = ep->ExceptionRecord->ExceptionInformation[1];
        uint64_t guest_fault = fault_addr - (uintptr_t)g_xbox_mem_offset;
        if (g_apu_state && ((guest_fault >= 0xFE800000 && guest_fault < 0xFE880000) ||
                           (guest_fault >= 0xFEC00000 && guest_fault < 0xFEC01000)) &&
            apu_hook_handle_mmio(ep->ContextRecord, fault_addr, (uint32_t)guest_fault,
                                (int)ep->ExceptionRecord->ExceptionInformation[0]))
            return EXCEPTION_CONTINUE_EXECUTION;

        /*
         * GPU register probe at 0xFD000000 range.
         * Some games probe NV2A registers directly. On real hardware this
         * returns GPU state; here we just skip the instruction.
         * TODO: Implement mini x86-64 decoder for instruction skipping,
         * or connect to the xbox_nv2a library for proper handling.
         */
        if (fault_addr >= 0xFD000000 && fault_addr < 0xFE000000) {
            return EXCEPTION_CONTINUE_SEARCH;
        }

        fprintf(stderr, "[CRASH] Access violation at RIP=0x%llX, fault addr=0x%llX (%s)\n",
            (unsigned long long)ep->ContextRecord->Rip,
            (unsigned long long)fault_addr,
            ep->ExceptionRecord->ExceptionInformation[0] ? "write" : "read");
        fprintf(stderr, "  Xbox regs: eax=0x%08X ecx=0x%08X edx=0x%08X esp=0x%08X\n",
            g_eax, g_ecx, g_edx, g_esp);
        fprintf(stderr, "  Xbox regs: ebx=0x%08X esi=0x%08X edi=0x%08X\n",
            g_ebx, g_esi, g_edi);
        fprintf(stderr, "  Xbox VA of fault: 0x%08X\n",
            (uint32_t)(fault_addr - (uintptr_t)g_xbox_mem_offset));
        print_guest_context((void *)ep->ContextRecord->Rip);

        /*
         * TODO: Add game-specific diagnostics here. Examples:
         *
         * Dump CRT heap handle:
         *   uint32_t heap = *(uint32_t *)((uint8_t *)g_xbox_mem_offset + HEAP_HANDLE_VA);
         *   fprintf(stderr, "  CRT heap handle: 0x%08X\n", heap);
         *
         * Dump game state:
         *   uint32_t state = *(uint32_t *)((uint8_t *)g_xbox_mem_offset + GAME_STATE_VA);
         *   fprintf(stderr, "  Game state: %u\n", state);
         */

        /* Print native stack return addresses for debugging */
        {
            uintptr_t *sp = (uintptr_t *)ep->ContextRecord->Rsp;
            fprintf(stderr, "  Native stack (first 8 return addrs):\n");
            for (int i = 0; i < 64 && sp[i]; i++) {
                if (sp[i] >= 0x140000000ULL && sp[i] < 0x150000000ULL) {
                    fprintf(stderr, "    [%d] 0x%llX\n", i, (unsigned long long)sp[i]);
                }
            }
        }
        fflush(stderr);
    }

    return EXCEPTION_CONTINUE_SEARCH;
}

/* ── WinMain ───────────────────────────────────────────────── */

static int memory_query_bridge_test(void)
{
    extern int xml1_contiguous_reuse_test(void);
    int contiguous_result=xml1_contiguous_reuse_test();
    if(contiguous_result)return contiguous_result;
    typedef void (*guest_fn)(void);
    extern guest_fn recomp_lookup_kernel(uint32_t);
    uint8_t *memory = (uint8_t *)g_xbox_mem_offset;
    /* Verified ordinal-217 slot in this retail XBE. */
    uint32_t thunk = *(uint32_t *)(memory + 0x003C6CC4);
    const uint32_t info = XBOX_STACK_TOP - 256;
    const uint32_t initial_sp = XBOX_STACK_TOP - 32;
    uint32_t cursor = 0, calls = 0;
    for (;;) {
        guest_fn query = recomp_lookup_kernel(thunk);
        if (!query) return 10;
        g_esp = initial_sp;
        *(uint32_t *)(memory + g_esp) = 0xBEEF0001;
        *(uint32_t *)(memory + g_esp + 4) = cursor;
        *(uint32_t *)(memory + g_esp + 8) = info;
        memset(memory + info, 0xCD, 28);
        query();
        if (g_esp != initial_sp + 12) return 11;
        ++calls;
        if ((int32_t)g_eax < 0) {
            if (cursor != 0x7FFE0000 || g_eax != 0xC000000D ||
                *(uint32_t *)(memory + info) != 0xCDCDCDCD) return 12;
            break;
        }
        uint32_t base = *(uint32_t *)(memory + info);
        uint32_t size = *(uint32_t *)(memory + info + 12);
        uint32_t state = *(uint32_t *)(memory + info + 16);
        if (!size || base != cursor || (uint64_t)base + size > 0x7FFE0000 || calls > 8) return 13;
        if (state != (cursor >= g_xbox_code_lo && cursor < XBOX_TOTAL_RAM ? 0x1000u : 0x10000u)) return 14;
        cursor = base + size;
    }
    printf("[TEST] NtQueryVirtualMemory: finite guest scan, region progress, 28-byte ABI, stack cleanup and failure output preservation passed (%u calls).\n", calls);
    return 0;
}

static DWORD WINAPI interleave_kernel_lookup(LPVOID unused)
{
    typedef void (*guest_fn)(void);
    extern guest_fn recomp_lookup_kernel(uint32_t);
    uint8_t *memory=(uint8_t *)g_xbox_mem_offset;
    (void)unused;
    return recomp_lookup_kernel(*(uint32_t *)(memory+0x003C6D6C)) ? 0 : 1;
}

static int irql_bridge_test(void)
{
    typedef void (*guest_fn)(void);
    extern guest_fn recomp_lookup_kernel(uint32_t);
    uint8_t *memory=(uint8_t *)g_xbox_mem_offset;
    const uint32_t sp=XBOX_STACK_TOP-32;
    const uint32_t slots[2]={0x003C6D44,0x003C6CEC}; /* verified ordinals 160/161 */
    const unsigned levels[]={0,1,2,3,15};
    for (unsigned i=0;i<sizeof(levels)/sizeof(levels[0]);++i) {
        xbox_KfLowerIrql(0);
        for (unsigned lowering=0;lowering<2;++lowering) {
            guest_fn fn=recomp_lookup_kernel(*(uint32_t *)(memory+slots[lowering]));
            if (!fn) return 20;
            g_esp=sp; *(uint32_t *)(memory+sp)=0xBEEF0001;
            *(uint32_t *)(memory+sp+4)=0x55; /* deliberately differs from CL */
            g_ecx=0x12340000u|(lowering?0:levels[i]);
            fn();
            if (g_esp!=sp+4) return 21;
            if (!lowering&&g_eax!=0) return 22;
            unsigned actual=xbox_KfRaiseIrql((KIRQL)(lowering?0:levels[i]));
            if (actual!=(lowering?0:levels[i])) {
                fprintf(stderr,"[TEST] IRQL %s: expected %u, got %u\n",lowering?"lower":"raise",lowering?0:levels[i],actual);
                return 23;
            }
        }
    }
    puts("[TEST] IRQL bridges: CL argument, previous-level return and zero-argument stack cleanup passed.");
    const uint32_t addresses[]={0x80000000,0x808A4000,0x83FFFFFF};
    guest_fn physical=recomp_lookup_kernel(*(uint32_t *)(memory+0x003C6D6C));
    if (!physical) return 24;
    for (unsigned i=0;i<sizeof(addresses)/sizeof(addresses[0]);++i) {
        g_esp=sp; *(uint32_t *)(memory+sp)=0xBEEF0001;
        *(uint32_t *)(memory+sp+4)=addresses[i];
        physical();
        uint32_t expected=addresses[i]&0x7FFFFFFF;
        if (g_esp!=sp+8||g_eax!=expected) {
            fprintf(stderr,"[TEST] Physical address %08X expected %08X, got %08X\n",addresses[i],expected,g_eax);
            return 25;
        }
    }
    /* Pageable buffers now receive stable physical page identities instead
     * of low-VA identity mapping. Verify the bridge through real DMA reads;
     * guest-physical-test separately covers page collisions and boundaries. */
    extern void xml1_physical_read(void *,uint32_t,void *,size_t);
    const uint32_t low_addresses[]={0x01080025,0x00010025};
    uint32_t mapped_pages[2];
    for(unsigned i=0;i<2;++i) {
        uint32_t address=low_addresses[i];
        g_esp=sp;*(uint32_t *)(memory+sp)=0xBEEF0001;
        *(uint32_t *)(memory+sp+4)=address;physical();
        mapped_pages[i]=g_eax;
        if(g_esp!=sp+8 || (g_eax&4095)!=(address&4095))return 25;
        uint32_t value=0;
        xml1_physical_read(memory+0x80000000u,g_eax,&value,sizeof(value));
        if(value!=*(uint32_t *)(memory+address))return 25;
        g_esp=sp;physical();
        if(g_esp!=sp+8 || g_eax!=mapped_pages[i])return 25;
    }
    if(mapped_pages[0]==mapped_pages[1])return 25;
    puts("[TEST] Physical-address bridge: contiguous translation, stable pageable identities, DMA aliases and stack cleanup passed.");
    /* Force another thread's lookup between this lookup and invocation. */
    xbox_KfLowerIrql(0);
    guest_fn raise=recomp_lookup_kernel(*(uint32_t *)(memory+slots[0]));
    HANDLE thread=CreateThread(NULL,0,interleave_kernel_lookup,NULL,0,NULL);
    if (!raise || !thread) return 26;
    if (WaitForSingleObject(thread,5000)!=WAIT_OBJECT_0) return 27;
    DWORD result=1;
    GetExitCodeThread(thread,&result);
    CloseHandle(thread);
    if (result) return 28;
    g_esp=sp; *(uint32_t *)(memory+sp)=0xBEEF0001;
    *(uint32_t *)(memory+sp+4)=0x80001000;
    g_ecx=2;
    raise();
    unsigned actual=xbox_KfRaiseIrql(2);
    xbox_KfLowerIrql(0);
    if (g_esp!=sp+4 || g_eax!=0 || actual!=2) {
        fprintf(stderr,"[TEST] Interleaved kernel lookup failed: ESP=%08X expected=%08X EAX=%08X IRQL=%u\n",g_esp,sp+4,g_eax,actual);
        return 29;
    }
    puts("[TEST] Cross-thread kernel lookup preserves selected service and stack cleanup.");
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, int nCmdShow)
{
    void *xbe_data = NULL;
    size_t xbe_size = 0;

    (void)hInstance;
    (void)hPrevInstance;
    (void)lpCmdLine;
    (void)nCmdShow;

    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);

    /* Unbuffered output for immediate visibility during debugging */
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    printf("=== X-Men Legends - Static Recompilation ===\n");
    printf("Loading XBE...\n");

    /* Install VEH handler (first handler in chain) */
    /* Load symbols up front rather than from inside the handler: at fault
     * time the process is already in a bad way, and SymInitialize
     * allocates. Failure is not fatal -- the handler prints no name. */
    SymSetOptions(SYMOPT_DEFERRED_LOADS | SYMOPT_UNDNAME);
    SymInitialize(GetCurrentProcess(), NULL, TRUE);
    AddVectoredExceptionHandler(1, veh_handler);

    /* Step 1: Load XBE */
    if (!load_xbe(YOUR_GAME_XBE_PATH, &xbe_data, &xbe_size)) {
        fprintf(stderr, "Failed to load %s.\n", YOUR_GAME_XBE_PATH);
        return 1;
    }
    printf("XBE loaded: %zu bytes\n", xbe_size);

    /* Step 2: Initialize Xbox memory layout */
    /* DirectSound is replaced natively (src/audio/dsound_hle.c), so nothing programs
     * the APU any more. Older scripts still request its emulation. */
    if (getenv("XML1_APU")) {
        fprintf(stderr, "[AUDIO] XML1_APU ignored: DirectSound runs natively; the APU is not emulated\n");
        _putenv_s("XML1_APU", "");
    }
    printf("Initializing Xbox memory layout...\n");
    /* Distinct virtual backing for Alchemy reservations; physical RAM remains 64 MiB. */
    xbox_SetMapSize(256u * 1024u * 1024u);
    if (!xbox_MemoryLayoutInit(xbe_data, xbe_size)) {
        fprintf(stderr, "Failed to initialize Xbox memory layout.\n");
        free(xbe_data);
        return 1;
    }

    g_xbox_mem_offset = xbox_GetMemoryOffset();
    printf("Xbox memory mapped. Offset: 0x%llX\n", (unsigned long long)g_xbox_mem_offset);
    if (getenv("XML1_APU") && !s_memory_query_test && !s_irql_test && !s_swizzle_test && !s_progression_test && !s_powerup_definition_test) {
        /* DSP scratch buffers and scatter/gather tables currently observed in
         * XML1 use physical allocations backed by the contiguous window. */
        g_apu_state = mcpx_apu_init_standalone((uint8_t *)((uintptr_t)g_xbox_mem_offset + 0x80000000u));
        if (!g_apu_state) { fprintf(stderr,"APU initialization failed\n"); return 1; }
        DWORD previous_protection;
        if (!VirtualProtect((void *)((uintptr_t)g_xbox_mem_offset+0xFEC00000u),4096,PAGE_NOACCESS,&previous_protection)) {
            fprintf(stderr,"Cannot route AC97 register accesses\n"); return 1;
        }
    }

    /* Step 3: Initialize Xbox kernel */
    printf("Initializing Xbox kernel replacement...\n");
    xbox_kernel_init();

    /* Step 4: Set game directory for file I/O path translation */
    {
        extern void xbox_path_init(const char *game_dir, const char *save_dir);
        const char *test_game_dir=getenv("XML1_TEST_GAME_DIR");
        if(test_game_dir) {
            const char *test_pad=getenv("XML1_TEST_PAD");
            if(!*test_game_dir || !test_pad || strcmp(test_pad,"1")) {
                fprintf(stderr,"XML1_TEST_GAME_DIR requires process-local test mode\n");
                return 4;
            }
            fprintf(stderr,"[DIAGNOSTIC DATA ROOT] %s\n",test_game_dir);
        }
        char settings_path[MAX_PATH], settings_error[256];
        /* The host config is beside the project launcher. The original Xbox
           game/build.ini remains untouched and must not shadow host options. */
        if(test_game_dir) snprintf(settings_path,sizeof(settings_path),"%s/build.ini",test_game_dir);
        else strcpy(settings_path,"build.ini");
        if(test_game_dir && GetFileAttributesA(settings_path)==INVALID_FILE_ATTRIBUTES)
            strcpy(settings_path,"build.ini");
        if(!xml1_read_build_settings(settings_path,&xml1_build_settings,settings_error,sizeof(settings_error))) {
            fprintf(stderr,"[BUILD SETTINGS ERROR] %s: %s\n",settings_path,settings_error);
            if(!s_headless) MessageBoxA(NULL,settings_error,"X-Men Legends configuration",MB_OK|MB_ICONERROR);
            return 4;
        }
        { char adapter[16];snprintf(adapter,sizeof(adapter),"%d",xml1_build_settings.graphics_adapter);
          _putenv_s("XML1_DX8_ADAPTER",adapter); }
        xml1_performance_start(xml1_build_settings.performance_logging);
        if(xml1_build_settings.hd_textures) {
            /* The renderer receives an absolute folder; a missing pack is not an error. */
            const char *pack=xml1_build_settings.hd_texture_pack;
            char joined[MAX_PATH*2],full[MAX_PATH];
            int absolute=pack[0]=='\\' || pack[0]=='/' || (pack[0] && pack[1]==':');
            snprintf(joined,sizeof(joined),"%s%s%s",absolute?"":(test_game_dir?test_game_dir:YOUR_GAME_DIR),absolute?"":"/",pack);
            DWORD length=GetFullPathNameA(joined,sizeof(full),full,NULL);
            DWORD attributes=length && length<sizeof(full)?GetFileAttributesA(full):INVALID_FILE_ATTRIBUTES;
            if(attributes!=INVALID_FILE_ATTRIBUTES && (attributes&FILE_ATTRIBUTE_DIRECTORY)) {
                _putenv_s("XML1_DX8_TEXTURE_PACK",full);
                fprintf(stderr,"[HD TEXTURES] %s\n",full);
            } else fprintf(stderr,"[HD TEXTURES] pack not found: %s\n",joined);
        }
        fprintf(stderr,"[BUILD SETTINGS] loose=%d text=%s movie=%s audio=%s\n",
            xml1_build_settings.prefer_files_loose,xml1_build_settings.text_language,
            xml1_build_settings.movie_language,xml1_build_settings.audio_language);
        if(xml1_build_settings.prefer_files_loose) {
            char setup_error[1024];
            if(!xml1_prepare_loose_assets(test_game_dir ? test_game_dir : YOUR_GAME_DIR,
                                         s_headless,setup_error,sizeof(setup_error))) {
                fprintf(stderr,"[LOOSE SETUP ERROR] %s\n",setup_error);
                return 4;
            }

            /* Retail XBE .pkg string has four bytes of zero padding before
               the next pointer. Verify it before selecting native PKGB input. */
            unsigned char *extension=(unsigned char *)((uintptr_t)g_xbox_mem_offset+0x003DAF00u);
            static const unsigned char expected[8]={'.','p','k','g',0,0,0,0};
            if(memcmp(extension,expected,sizeof(expected))) {
                fprintf(stderr,"[BUILD SETTINGS ERROR] Package extension boundary differs from verified XBE\n");
                return 4;
            }
            memcpy(extension,".pkgb",6);
        }
        if(!xml1_install_pc_menu(test_game_dir ? test_game_dir : YOUR_GAME_DIR,settings_error,sizeof(settings_error))) {
            fprintf(stderr,"[PC MENU ERROR] %s\n",settings_error);
            return 4;
        }
        if(!xml1_asset_routes_init(test_game_dir ? test_game_dir : YOUR_GAME_DIR,
                                  &xml1_build_settings,settings_error,sizeof(settings_error))) {
            fprintf(stderr,"[BUILD SETTINGS ERROR] %s\n",settings_error);
            if(!s_headless) MessageBoxA(NULL,settings_error,"X-Men Legends configuration",MB_OK|MB_ICONERROR);
            return 4;
        }
        extern void xbox_set_asset_path_filter(int (*filter)(const char*,char*,unsigned));
        if(!raven_pc_sound_cache_init(test_game_dir ? test_game_dir : YOUR_GAME_DIR))return 4;
        if(!raven_shared_powerups_init(test_game_dir ? test_game_dir : YOUR_GAME_DIR))return 4;
        xbox_set_asset_path_filter(xml1_game_asset_filter);
        xbox_path_init(test_game_dir ? test_game_dir : YOUR_GAME_DIR, NULL);
        if(!raven_imported_talents_init(test_game_dir ? test_game_dir : YOUR_GAME_DIR,
                xml1_build_settings.text_language,settings_error,sizeof(settings_error))) {
            fprintf(stderr,"[IMPORTED TALENTS ERROR] %s\n",settings_error);
            return 4;
        }
    }

    /* Step 5: Initialize kernel bridge (thunk table in Xbox memory) */
    printf("Initializing kernel bridge...\n");
    xbox_kernel_bridge_init();

    /* Step 6: Initialize stack */
    g_esp = XBOX_STACK_TOP;

    if (s_memory_query_test || s_irql_test || s_swizzle_test || s_progression_test || s_powerup_definition_test || s_filter_event_test) {
        int result = s_filter_event_test ? xml1_filter_event_test() : s_powerup_definition_test ? xml1_powerup_definition_test() : s_progression_test ? xml1_progression_test() : s_swizzle_test ? xml1_swizzle_test() : s_irql_test ? irql_bridge_test() : memory_query_bridge_test();
        xbox_kernel_shutdown();
        xbox_MemoryLayoutShutdown();
        free(xbe_data);
        return result;
    }

    /*
     * TODO: Pre-initialize CRT globals if needed.
     *
     * Many Xbox games use the MSVC CRT. The CRT's __heap_init sets up a
     * heap descriptor at a game-specific address. You may need to
     * pre-initialize __active_heap to avoid small-block heap issues:
     *
     *   uint32_t *active_heap = (uint32_t *)((uint8_t *)g_xbox_mem_offset + ACTIVE_HEAP_VA);
     *   *active_heap = 1;  // 1 = system heap (HeapAlloc), avoids SBH init
     *
     * Find ACTIVE_HEAP_VA by searching the disassembly for __heap_init
     * or by looking for the CRT's __active_heap global in the data section.
     */

    printf("\n=== Initialization complete ===\n");
    printf("Entry point: 0x%08X\n", YOUR_GAME_ENTRY_POINT);
    printf("ESP: 0x%08X\n", g_esp);

    /* Build the flat dispatch table before the guest runs.
     *
     * Without this recomp_lookup falls back to a binary search over the
     * whole function table -- roughly log2(n) branches on *every*
     * indirect call, which for a 45,000-function C++ title is about 16
     * every time the game goes through a vtable. Half-Life 2 spent most
     * of its static initialisation inside recomp_lookup for exactly this
     * reason, and it read as a hang.
     *
     * Optional by design: if the allocation fails the search still works,
     * so a failure is worth one line and not a fatal error. */
    if (!recomp_dispatch_init())
        fprintf(stderr, "[BOOT] flat dispatch unavailable; "
                        "indirect calls will use the binary search\n");

    /* Arm the hang watchdog. Does nothing unless RECOMP_WATCHDOG_SECS is set,
     * and must be called from this thread -- the guest registers it samples are
     * thread-local, so it has to be handed the copies belonging to the thread
     * that runs guest code.
     *
     * Not optional boilerplate: without this call RECOMP_WATCHDOG_SECS is
     * silently inert, and the one diagnostic that tells a hang from slowness
     * does nothing while appearing to be set. */
    xbox_WatchdogStart();

    /* Step 7: Call the recompiled entry point */
    printf("\nStarting game...\n");
    fflush(stdout);

    xml1_native_probe_start();
    xbe_entry_point();

    printf("\nGame returned. Cleaning up...\n");

    /* Cleanup */
    if (g_apu_state) { mcpx_apu_shutdown(g_apu_state); g_apu_state = NULL; }
    xbox_kernel_shutdown();
    xbox_MemoryLayoutShutdown();
    free(xbe_data);

    return 0;
}

/* ── XBE Loading ───────────────────────────────────────────── */

static BOOL load_xbe(const char *path, void **out_data, size_t *out_size)
{
    FILE *f = fopen(path, "rb");
    if (!f) {
        fprintf(stderr, "Cannot open XBE: %s\n", path);
        return FALSE;
    }

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (size <= 0) {
        fclose(f);
        return FALSE;
    }

    void *data = malloc((size_t)size);
    if (!data) {
        fclose(f);
        return FALSE;
    }

    if (fread(data, 1, (size_t)size, f) != (size_t)size) {
        free(data);
        fclose(f);
        return FALSE;
    }

    fclose(f);
    *out_data = data;
    *out_size = (size_t)size;
    return TRUE;
}

/* Console entry point (for debugging -- lets you see printf output) */
int main(int argc, char **argv)
{
    /* Player builds resolve data beside the executable, regardless of shortcut cwd. */
    int player_layout=0;
    wchar_t executable[MAX_PATH],marker[MAX_PATH];
    if(GetModuleFileNameW(NULL,executable,MAX_PATH)) {
        wchar_t *slash=wcsrchr(executable,L'\\');
        if(slash) {
            *slash=0;
            if(swprintf(marker,MAX_PATH,L"%ls\\default.xbe",executable)>0 &&
               GetFileAttributesW(marker)!=INVALID_FILE_ATTRIBUTES) {
                if(!SetCurrentDirectoryW(executable))return 4;
                player_layout=1;
                if(GetFileAttributesW(L"default.xbe")!=INVALID_FILE_ATTRIBUTES) {
                    player_xbe_path="default.xbe";
                    player_data_dir=".";
                }
                CreateDirectoryW(L"build",NULL);
                _putenv_s("XML1_LIVE_DX8","1");
                _putenv_s("XML1_DX8_VISIBLE","1");
                _putenv_s("XML1_DX8_NO_CAPTURE","1");
            }
        }
    }
    if(!player_layout) {
        const char *test_data=getenv("XML1_TEST_GAME_DIR"),*test_pad=getenv("XML1_TEST_PAD");
        if(test_data && test_pad && !strcmp(test_pad,"1")) {
            int length=snprintf(test_xbe_path,sizeof(test_xbe_path),"%s/default.xbe",test_data);
            if(length<0 || length>=sizeof(test_xbe_path))return 4;
            player_xbe_path=test_xbe_path;
        } else if(GetFileAttributesA(player_xbe_path)==INVALID_FILE_ATTRIBUTES &&
                  GetFileAttributesA("XBOXgame/default.xbe")!=INVALID_FILE_ATTRIBUTES) {
            player_xbe_path="XBOXgame/default.xbe";
            player_data_dir="XBOXgame";
        }
    }
    for (int i=1; i<argc; ++i) {
        if (!strcmp(argv[i], "--headless")) {
            s_headless=1;
            _putenv_s("XML1_LIVE_DX8", "1");
            _putenv_s("XML1_DX8_VISIBLE", "0");
            _putenv_s("XML1_DX8_NO_CAPTURE", "1");
        } else if (!strcmp(argv[i], "--muted")) {
            _putenv_s("XML1_MUTED", "1");
        } else if (!strcmp(argv[i], "--help")) {
            puts("Usage: xml1-boot-probe [--headless] [--muted]\n"
                 "  --headless  Hidden native DX8 rendering (1080p default) with native DirectSound audio.\n"
                 "  --muted     Silence this game's output; preserve audio pacing.");
            return 0;
        } else if (strcmp(argv[i], "--memory-query-test") &&
                   strcmp(argv[i], "--irql-test") && strcmp(argv[i], "--swizzle-test") && strcmp(argv[i], "--progression-test") && strcmp(argv[i], "--powerup-definition-test") && strcmp(argv[i], "--filter-event-test")) {
            fprintf(stderr, "Unknown argument: %s\n", argv[i]);
            return 2;
        }
    }
    if(player_layout && !s_headless) {
        FreeConsole();
        freopen("build/game.log","wb",stdout);
        freopen("build/game-errors.log","wb",stderr);
    }
    s_memory_query_test = argc == 2 && strcmp(argv[1], "--memory-query-test") == 0;
    s_irql_test = argc == 2 && strcmp(argv[1], "--irql-test") == 0;
    s_swizzle_test = argc == 2 && strcmp(argv[1], "--swizzle-test") == 0;
    s_progression_test = argc == 2 && strcmp(argv[1], "--progression-test") == 0;
    s_filter_event_test = argc == 2 && strcmp(argv[1], "--filter-event-test") == 0;
    s_powerup_definition_test = argc == 2 && strcmp(argv[1], "--powerup-definition-test") == 0;
    if(!s_memory_query_test && !s_irql_test && !s_swizzle_test && !s_progression_test && !s_powerup_definition_test && !s_filter_event_test && getenv("XML1_LIVE_DX8")) {
        Xml1PcSettings settings;char error[256],resolution[32];
        if(!xml1_pc_settings_load("pc-settings.ini",&settings,error,sizeof(error))) {
            fprintf(stderr,"[PC SETTINGS] %s\n",error);return 4;
        }
        if(!xml1_pc_channel_create(&settings)) {fprintf(stderr,"[PC INPUT] Cannot create input channel\n");return 4;}
        snprintf(resolution,sizeof(resolution),"%ux%u",settings.width,settings.height);
        if(!getenv("XML1_DX8_RESOLUTION"))_putenv_s("XML1_DX8_RESOLUTION",resolution);
        /* Guest mode selection must agree with the output aspect ratio. */
        if(!strcmp(getenv("XML1_DX8_RESOLUTION"),"640x480"))
            xbox_kernel_set_video_flags(XC_VIDEO_FLAGS_HDTV_480p);
        else
            xbox_kernel_set_video_flags(XC_VIDEO_FLAGS_WIDESCREEN | XC_VIDEO_FLAGS_HDTV);
        fprintf(stderr,"[PC INPUT] Loaded settings and created window input channel\n");
    }
    return WinMain(GetModuleHandle(NULL), NULL, GetCommandLineA(), SW_SHOW);
}
