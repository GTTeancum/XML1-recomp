/* XDK DirectSound replaced at the entry points the game calls
 * (docs/AUDIO-HLE-PLAN.md). The game's sound system, Sofdec movie audio and
 * Alchemy audio keep running as recompiled code; these functions hand their
 * sample data to src/audio/dsound_mixer.c instead of programming the APU. Every
 * function is stdcall: arguments at g_esp+4, callee pops. Struct layouts are
 * the ones the game builds (e.g. 00190190, 00192B10, 00190770). */
#include "audio/dsound_mixer.h"
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

extern RECOMP_TLS uint32_t g_eax, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
void xml1_dsound_output_start(void);

#define STREAM_VTABLE 0x003E1F28u /* CDirectSoundStream XMediaObject vtable in .rdata */
#define OBJECT_MAGIC 0x4C484453u  /* "DSHL" */
#define DSERR_NOFREEVOICE 0x88780032u /* AllocateVoices 00372C41 */
#define DSBCAPS_LOCDEFER 0x00040000u
#define POOL_OBJECTS 256u /* objects per guest pool; pools are added as needed */
#define MAX_POOLS 1024u
#define OBJECT_BYTES 16u
enum { KIND_FREE, KIND_DEVICE, KIND_BUFFER, KIND_STREAM };

typedef struct {
    int kind, voice;
    LONG references;
    uint32_t data, bytes, owned;
    uint16_t block_align;
} Object;

/* XDK buffers and streams are heap objects limited only by memory, so the
 * guest-visible handles live in pools that are added as the game needs them.
 * Pool entries are written once and never move. */
typedef struct {
    uint32_t base;
    Object objects[POOL_OBJECTS];
} Pool;

static SRWLOCK pool_lock = SRWLOCK_INIT;
static Pool *pools[MAX_POOLS];
static volatile LONG pool_count;

static void fatal(const char *what, uint32_t value)
{
    fprintf(stderr, "[FATAL DSOUND HLE] %s (%08X)\n", what, value);
    fflush(stderr);
    _exit(4);
}

static void *guest(uint32_t va, size_t bytes)
{
    uint64_t end = (uint64_t)va + bytes;
    if (va && (end <= xbox_GetMappedSize() || (va >= 0x80000000u && end <= 0x84000000u)))
        return (void *)((uintptr_t)g_xbox_mem_offset + va);
    fatal("invalid guest address", va);
    return NULL;
}
static uint32_t read32(uint32_t va) { uint32_t v; memcpy(&v, guest(va, 4), 4); return v; }
static void write32(uint32_t va, uint32_t v) { if (va) memcpy(guest(va, 4), &v, 4); }
static uint32_t arg(unsigned n) { return read32(g_esp + 4 + 4 * n); }
static void finish(unsigned args, uint32_t result) { g_eax = result; g_esp += 4 + 4 * args; }

/* First use of each entry point, so boot logs show the surface actually hit. */
static void seen(const char *name)
{
    static struct { const char *name; } list[64];
    static SRWLOCK seen_lock = SRWLOCK_INIT;
    AcquireSRWLockExclusive(&seen_lock);
    for (unsigned i = 0; i < 64; ++i) {
        if (list[i].name == name) break;
        if (!list[i].name) { list[i].name = name; fprintf(stderr, "[DSOUND HLE] first %s\n", name); break; }
    }
    ReleaseSRWLockExclusive(&seen_lock);
}

static uint32_t object_new(int kind, int voice)
{
    AcquireSRWLockExclusive(&pool_lock);
    for (uint32_t i = 0;; ++i) {
        if (i == (uint32_t)pool_count * POOL_OBJECTS) {
            Pool *pool = pool_count < (LONG)MAX_POOLS ? calloc(1, sizeof(Pool)) : NULL;
            if (!pool || !(pool->base = xbox_HeapAlloc(POOL_OBJECTS * OBJECT_BYTES, 16)))
                fatal("object pool allocation failed", pool_count);
            pools[pool_count] = pool;
            InterlockedIncrement(&pool_count);
        }
        Pool *pool = pools[i / POOL_OBJECTS];
        Object *o = &pool->objects[i % POOL_OBJECTS];
        if (o->kind != KIND_FREE) continue;
        memset(o, 0, sizeof(*o));
        o->kind = kind;
        o->voice = voice;
        o->references = 1;
        uint32_t va = pool->base + i % POOL_OBJECTS * OBJECT_BYTES;
        uint32_t words[4] = {kind == KIND_STREAM ? STREAM_VTABLE : 0, OBJECT_MAGIC, (uint32_t)kind, i};
        memcpy(guest(va, sizeof(words)), words, sizeof(words));
        ReleaseSRWLockExclusive(&pool_lock);
        return va;
    }
}

static Object *object(uint32_t va, int kind)
{
    for (LONG p = 0, count = pool_count; p < count; ++p) {
        uint32_t base = pools[p]->base;
        if (va < base || va >= base + POOL_OBJECTS * OBJECT_BYTES || (va - base) % OBJECT_BYTES) continue;
        Object *o = &pools[p]->objects[(va - base) / OBJECT_BYTES];
        if (o->kind != kind || read32(va + 4) != OBJECT_MAGIC) fatal("DirectSound object kind mismatch", va);
        return o;
    }
    fatal("call on an object DirectSound did not create", va);
    return NULL;
}

static uint32_t release(uint32_t va, int kind)
{
    Object *o = object(va, kind);
    LONG left = InterlockedDecrement(&o->references);
    if (left == 0 && kind != KIND_DEVICE) {
        dsm_voice_free(o->voice);
        if (o->owned) xbox_HeapFree(o->owned);
        AcquireSRWLockExclusive(&pool_lock);
        memset(guest(va, OBJECT_BYTES), 0, OBJECT_BYTES);
        o->kind = KIND_FREE;
        ReleaseSRWLockExclusive(&pool_lock);
    }
    return (uint32_t)(left < 0 ? 0 : left);
}

static void read_format(uint32_t va, DsmFormat *format)
{
    const uint8_t *w = guest(va, 18);
    uint16_t v16[7];
    memcpy(v16, w, 2 * 2);
    memcpy(&format->rate, w + 4, 4);
    memcpy(v16 + 2, w + 12, 2 * 2);
    format->tag = v16[0];
    format->channels = v16[1];
    format->block_align = v16[2];
    format->bits = v16[3];
    if (format->tag != DSM_FORMAT_PCM && format->tag != DSM_FORMAT_XBOX_ADPCM) fatal("unsupported wave format tag", format->tag);
    if (format->channels < 1 || format->channels > 2) fatal("unsupported channel count", format->channels);
    if (format->tag == DSM_FORMAT_PCM && format->bits != 8 && format->bits != 16) fatal("unsupported PCM bit depth", format->bits);
    if (format->tag == DSM_FORMAT_XBOX_ADPCM && format->block_align != 36u * format->channels) fatal("unexpected ADPCM block size", format->block_align);
}

static void apply_format(Object *o, uint32_t va)
{
    DsmFormat format;
    read_format(va, &format);
    if (getenv("XML1_DSOUND_TRACE"))
        fprintf(stderr, "[DSOUND TRACE] SetFormat voice=%d caller=%08X tag=%04X channels=%u rate=%u block=%u\n",
            o->voice, read32(g_esp), format.tag, format.channels, format.rate, format.block_align);
    o->block_align = format.block_align;
    dsm_set_format(o->voice, &format);
}

/* DSMIXBINS: count, then a pointer to (bin, volume) pairs. */
static unsigned read_mixbins(uint32_t va, uint32_t *bins, int32_t *volumes)
{
    uint32_t count = read32(va), pairs = read32(va + 4);
    if (count > DSM_MAX_BINS) fatal("more mix bins than a voice supports", count);
    for (uint32_t i = 0; i < count; ++i) {
        bins[i] = read32(pairs + 8 * i);
        volumes[i] = (int32_t)read32(pairs + 8 * i + 4);
        if (bins[i] > 31) fatal("invalid mix bin", bins[i]);
    }
    return count;
}

static void default_mixbins(int voice)
{
    static const uint32_t bins[2] = {0, 1};
    static const int32_t volumes[2] = {0, 0};
    dsm_set_mixbins(voice, 2, bins, volumes);
}

/* CDirectSoundVoiceSettings 0037146F: 6 dB headroom unless 3D, submix or FX input. */
static uint32_t default_headroom(uint32_t flags) { return flags & 0x182000u || flags & 0x200010u ? 0 : 600; }

/* XML1_DSOUND_TRACE=1: log mix-bin routing with the guest caller. */
static void trace_bins(const char *what, Object *o, unsigned count, const uint32_t *bins, const int32_t *volumes)
{
    static int enabled = -1;
    static LONG lines;
    if (enabled < 0) enabled = getenv("XML1_DSOUND_TRACE") != NULL;
    if (!enabled || InterlockedIncrement(&lines) > 4000) return;
    char text[256];
    int used = snprintf(text, sizeof(text), "[DSOUND TRACE] %s voice=%d caller=%08X", what, o->voice, read32(g_esp));
    for (unsigned i = 0; i < count && used < (int)sizeof(text) - 16; ++i)
        used += snprintf(text + used, sizeof(text) - used, " %u=%d", bins[i], volumes[i]);
    fprintf(stderr, "%s\n", text);
}

/* Opt-in playback diagnostics connect the bank's decoded byte count to the
 * actual voice lifecycle, including loop setup and release. No PCM is logged. */
static void trace_buffer(const char *what, Object *o, uint32_t a, uint32_t b)
{
    static int enabled = -1;
    static LONG lines;
    if (enabled < 0) enabled = getenv("XML1_DSOUND_BUFFER_TRACE") != NULL;
    if (!enabled || InterlockedIncrement(&lines) > 16000) return;
    fprintf(stderr, "[DSOUND BUFFER] %s ms=%llu voice=%d data=%08X bytes=%u a=%u b=%u\n",
        what, (unsigned long long)GetTickCount64(), o->voice, o->data, o->bytes, a, b);
}

static void set_mixbins(Object *o, uint32_t va)
{
    uint32_t bins[DSM_MAX_BINS];
    int32_t volumes[DSM_MAX_BINS];
    unsigned count = read_mixbins(va, bins, volumes);
    trace_bins("SetMixBins", o, count, bins, volumes);
    dsm_set_mixbins(o->voice, count, bins, volumes);
}
static void set_mixbin_volumes(Object *o, uint32_t va)
{
    uint32_t bins[DSM_MAX_BINS];
    int32_t volumes[DSM_MAX_BINS];
    unsigned count = read_mixbins(va, bins, volumes);
    trace_bins("SetMixBinVolumes", o, count, bins, volumes);
    dsm_set_mixbin_volumes(o->voice, count, bins, volumes);
}

static int64_t read_time(unsigned first) { return (int64_t)((uint64_t)arg(first + 1) << 32 | arg(first)); }

/* ---- device ---------------------------------------------------------- */

static uint32_t device;

void xml1_DirectSoundCreate(void)
{
    seen("DirectSoundCreate");
    static SRWLOCK create_lock = SRWLOCK_INIT;
    uint32_t out = arg(1);
    AcquireSRWLockExclusive(&create_lock);
    if (device) InterlockedIncrement(&object(device, KIND_DEVICE)->references);
    else {
        device = object_new(KIND_DEVICE, -1);
        xml1_dsound_output_start();
    }
    write32(out, device);
    ReleaseSRWLockExclusive(&create_lock);
    finish(3, 0);
}
void xml1_IDirectSound_Release(void) { seen("IDirectSound_Release"); finish(1, release(arg(0), KIND_DEVICE)); }

void xml1_IDirectSound_CreateSoundBuffer(void)
{
    seen("IDirectSound_CreateSoundBuffer");
    object(arg(0), KIND_DEVICE);
    uint32_t desc = arg(1), out = arg(2);
    uint32_t flags = read32(desc + 4), bytes = read32(desc + 8), format = read32(desc + 12), mixbins = read32(desc + 16);
    if (flags & ~0x000400F0u) fprintf(stderr, "[DSOUND HLE] buffer flags %08X beyond 2D control/defer are ignored\n", flags);
    int voice = dsm_voice_alloc(0, 0);
    if (voice < 0) fatal("out of memory for a sound buffer", 0);
    uint32_t va = object_new(KIND_BUFFER, voice);
    /* 003715FB: the hardware voice is taken now unless deferred to Play; when
     * none is free the buffer is destroyed and the error returned (003717E6). */
    if (!dsm_hw_setup(voice, (flags & 0x200010u) != 0, (flags & DSBCAPS_LOCDEFER) != 0)) {
        release(va, KIND_BUFFER);
        finish(4, DSERR_NOFREEVOICE);
        return;
    }
    Object *o = object(va, KIND_BUFFER);
    if (format) apply_format(o, format);
    if (getenv("XML1_DSOUND_TRACE") && format)
        fprintf(stderr, "[DSOUND TRACE] CreateSoundBuffer voice=%d caller=%08X flags=%08X bytes=%u tag=%04X channels=%u rate=%u\n",
            voice, read32(g_esp), flags, bytes, *(uint16_t *)guest(format, 2), *(uint16_t *)guest(format + 2, 2), read32(format + 4));
    dsm_set_headroom(voice, default_headroom(flags));
    if (mixbins) set_mixbins(o, mixbins); else default_mixbins(voice);
    if (bytes) {
        o->owned = xbox_HeapAlloc(bytes, 32);
        if (!o->owned) fatal("buffer memory allocation failed", bytes);
        o->data = o->owned;
        o->bytes = bytes;
        dsm_set_data(voice, guest(o->data, bytes), bytes);
    }
    write32(out, va);
    finish(4, 0);
}

void xml1_DirectSoundCreateStream(void)
{
    seen("DirectSoundCreateStream");
    uint32_t desc = arg(0), out = arg(1);
    uint32_t flags = read32(desc), packets = read32(desc + 4), format = read32(desc + 8);
    if (read32(desc + 12)) fatal("stream completion callbacks are not implemented", read32(desc + 12));
    if (!packets || packets > DSM_MAX_PACKETS) fatal("unsupported stream packet count", packets);
    if (flags & DSBCAPS_LOCDEFER) fatal("deferred stream voices are not implemented", flags);
    int voice = dsm_voice_alloc(1, packets);
    if (voice < 0) fatal("out of memory for a sound stream", 0);
    uint32_t va = object_new(KIND_STREAM, voice);
    if (!dsm_hw_setup(voice, (flags & 0x200010u) != 0, 0)) {
        release(va, KIND_STREAM);
        finish(2, DSERR_NOFREEVOICE);
        return;
    }
    Object *o = object(va, KIND_STREAM);
    if (format) apply_format(o, format);
    dsm_set_headroom(voice, default_headroom(flags));
    if (read32(desc + 20)) set_mixbins(o, read32(desc + 20)); else default_mixbins(voice);
    write32(out, va);
    finish(2, 0);
}

void xml1_IDirectSound_GetTime(void)
{
    seen("IDirectSound_GetTime");
    int64_t now = dsm_time();
    memcpy(guest(arg(1), 8), &now, 8);
    finish(2, 0);
}

/* The GP effects image (reverb and crosstalk) has no native equivalent yet;
 * the game passes the descriptor pointer on to nothing (00190060). */
void xml1_IDirectSound_DownloadEffectsImage(void)
{
    seen("IDirectSound_DownloadEffectsImage");
    write32(arg(4), 0);
    finish(5, 0);
}
void xml1_DirectSoundUseLightHRTF(void) { seen("DirectSoundUseLightHRTF"); finish(0, 0); }
/* Mixing runs on its own thread; there is no deferred work to service. */
void xml1_DirectSoundDoWork(void) { finish(0, 0); }

/* ---- buffers ---------------------------------------------------------- */

#define BUFFER() Object *o = object(arg(0), KIND_BUFFER); (void)o

void xml1_IDirectSoundBuffer_Release(void) { seen("IDirectSoundBuffer_Release"); finish(1, release(arg(0), KIND_BUFFER)); }
void xml1_IDirectSoundBuffer_Play(void)
{
    seen("IDirectSoundBuffer_Play");
    BUFFER();
    uint32_t flags = arg(3);
    trace_buffer("Play", o, flags, 0);
    /* 00376B0F: a deferred buffer takes its hardware voice here (00376AC1). */
    int played = dsm_play(o->voice, flags & 1, (flags & 2) != 0);
    if (!played && getenv("XML1_DSOUND_TRACE")) fprintf(stderr, "[DSOUND TRACE] Play: no free hardware voice caller=%08X\n", read32(g_esp));
    finish(4, played ? 0 : DSERR_NOFREEVOICE);
}
void xml1_IDirectSoundBuffer_Stop(void) { seen("IDirectSoundBuffer_Stop"); BUFFER(); trace_buffer("Stop", o, 0, 0); dsm_stop(o->voice); finish(1, 0); }
void xml1_IDirectSoundBuffer_StopEx(void)
{
    seen("IDirectSoundBuffer_StopEx");
    BUFFER();
    int64_t when = read_time(1);
    uint32_t flags = arg(3);
    trace_buffer("StopEx", o, flags, 0);
    if (flags & 2) {
        /* DSBSTOPEX_RELEASEWAVEFORM: leave the loop and play out the data. */
        uint32_t status = dsm_buffer_status(o->voice);
        if (status & DSM_BSTATUS_PLAYING) dsm_play(o->voice, 0, 0);
    } else dsm_stop_at(o->voice, when, flags & 1);
    finish(4, 0);
}
void xml1_IDirectSoundBuffer_GetStatus(void)
{
    seen("IDirectSoundBuffer_GetStatus");
    BUFFER();
    write32(arg(1), dsm_buffer_status(o->voice));
    finish(2, 0);
}
void xml1_IDirectSoundBuffer_SetBufferData(void)
{
    seen("IDirectSoundBuffer_SetBufferData");
    BUFFER();
    uint32_t data = arg(1), bytes = arg(2);
    o->data = data;
    o->bytes = data ? bytes : 0;
    trace_buffer("SetData", o, 0, 0);
    dsm_set_data(o->voice, data ? guest(data, bytes) : NULL, o->bytes);
    finish(3, 0);
}
void xml1_IDirectSoundBuffer_SetFormat(void) { seen("IDirectSoundBuffer_SetFormat"); BUFFER(); apply_format(o, arg(1)); finish(2, 0); }
void xml1_IDirectSoundBuffer_SetLoopRegion(void)
{
    seen("IDirectSoundBuffer_SetLoopRegion");
    BUFFER();
    trace_buffer("LoopRegion", o, arg(1), arg(2));
    dsm_set_loop_region(o->voice, arg(1), arg(2));
    finish(3, 0);
}
void xml1_IDirectSoundBuffer_SetFrequency(void) { seen("IDirectSoundBuffer_SetFrequency"); BUFFER(); trace_buffer("Frequency", o, arg(1), 0); dsm_set_frequency(o->voice, arg(1)); finish(2, 0); }
void xml1_IDirectSoundBuffer_SetVolume(void) { seen("IDirectSoundBuffer_SetVolume"); BUFFER(); dsm_set_volume(o->voice, (int32_t)arg(1)); finish(2, 0); }
void xml1_IDirectSoundBuffer_SetHeadroom(void) { seen("IDirectSoundBuffer_SetHeadroom"); BUFFER(); dsm_set_headroom(o->voice, arg(1)); finish(2, 0); }
void xml1_IDirectSoundBuffer_SetMixBins(void) { seen("IDirectSoundBuffer_SetMixBins"); BUFFER(); set_mixbins(o, arg(1)); finish(2, 0); }
void xml1_IDirectSoundBuffer_SetMixBinVolumes(void) { seen("IDirectSoundBuffer_SetMixBinVolumes"); BUFFER(); set_mixbin_volumes(o, arg(1)); finish(2, 0); }

/* DSENVELOPEDESC: dwEG, dwMode, delay, attack, hold, decay, release, sustain,
 * pitch scale, filter cutoff. Only the amplitude envelope is rendered. */
void xml1_IDirectSoundBuffer_SetEG(void)
{
    seen("IDirectSoundBuffer_SetEG");
    BUFFER();
    uint32_t d = arg(1);
    if (read32(d) == 0) {
        DsmEnvelope e = {read32(d + 4), read32(d + 8), read32(d + 12), read32(d + 16),
                         read32(d + 20), read32(d + 24), read32(d + 28)};
        static int logged;
        if (logged++ < 4)
            fprintf(stderr, "[DSOUND HLE] amplitude EG mode=%u delay=%u attack=%u hold=%u decay=%u release=%u sustain=%u\n",
                e.mode, e.delay, e.attack, e.hold, e.decay, e.release, e.sustain);
        dsm_set_envelope(o->voice, &e);
    }
    finish(2, 0);
}

/* The data is guest memory the game writes directly; Unlock (0036F5D7) is a
 * no-op in the XDK itself and stays recompiled. */
void xml1_IDirectSoundBuffer_Lock(void)
{
    seen("IDirectSoundBuffer_Lock");
    BUFFER();
    uint32_t offset = arg(1), bytes = arg(2), flags = arg(7);
    if (!o->data || !o->bytes) fatal("Lock on a buffer without data", arg(0));
    if (flags & 1) offset = dsm_position(o->voice);
    if (flags & 2 || bytes > o->bytes) bytes = o->bytes;
    offset %= o->bytes;
    uint32_t first = o->bytes - offset < bytes ? o->bytes - offset : bytes;
    write32(arg(3), o->data + offset);
    write32(arg(4), first);
    if (arg(5)) write32(arg(5), bytes > first ? o->data : 0);
    if (arg(6)) write32(arg(6), bytes - first);
    finish(8, 0);
}
void xml1_IDirectSoundBuffer_GetCurrentPosition(void)
{
    seen("IDirectSoundBuffer_GetCurrentPosition");
    BUFFER();
    uint32_t position = dsm_position(o->voice);
    if (arg(1)) write32(arg(1), position);
    if (arg(2)) write32(arg(2), position);
    finish(3, 0);
}
void xml1_IDirectSoundBuffer_SetCurrentPosition(void)
{
    seen("IDirectSoundBuffer_SetCurrentPosition");
    BUFFER();
    dsm_set_position(o->voice, arg(1));
    finish(2, 0);
}

/* ---- streams ---------------------------------------------------------- */

#define STREAM() Object *o = object(arg(0), KIND_STREAM); (void)o

void xml1_IDirectSoundStream_SetFormat(void) { seen("IDirectSoundStream_SetFormat"); STREAM(); apply_format(o, arg(1)); finish(2, 0); }
void xml1_IDirectSoundStream_SetMixBins(void) { seen("IDirectSoundStream_SetMixBins"); STREAM(); set_mixbins(o, arg(1)); finish(2, 0); }
void xml1_IDirectSoundStream_SetMixBinVolumes(void)
{
    seen("IDirectSoundStream_SetMixBinVolumes");
    STREAM();
    static int logged;
    if (logged < 6) {
        uint32_t bins[DSM_MAX_BINS];
        int32_t volumes[DSM_MAX_BINS];
        unsigned count = read_mixbins(arg(1), bins, volumes);
        if (count) {
            ++logged;
            fprintf(stderr, "[DSOUND HLE] stream bin volumes:");
            for (unsigned i = 0; i < count; ++i) fprintf(stderr, " %u=%d", bins[i], volumes[i]);
            fputc('\n', stderr);
        }
    }
    set_mixbin_volumes(o, arg(1));
    finish(2, 0);
}
void xml1_IDirectSoundStream_SetVolume(void)
{
    seen("IDirectSoundStream_SetVolume");
    STREAM();
    if (getenv("XML1_DSOUND_TRACE"))
        fprintf(stderr, "[DSOUND TRACE] StreamVolume voice=%d ms=%llu volume=%d caller=%08X\n",
            o->voice, (unsigned long long)GetTickCount64(), (int32_t)arg(1), read32(g_esp));
    dsm_set_volume(o->voice, (int32_t)arg(1));
    finish(2, 0);
}
void xml1_IDirectSoundStream_SetHeadroom(void) { seen("IDirectSoundStream_SetHeadroom"); STREAM(); dsm_set_headroom(o->voice, arg(1)); finish(2, 0); }
void xml1_IDirectSoundStream_Pause(void) { seen("IDirectSoundStream_Pause"); STREAM(); dsm_stream_pause(o->voice, arg(1) & 1); finish(2, 0); }
void xml1_IDirectSoundStream_FlushEx(void)
{
    seen("IDirectSoundStream_FlushEx");
    STREAM();
    int64_t when = read_time(1);
    int envelope = (arg(3) & 2) != 0;
    if (when > dsm_time()) dsm_stop_at(o->voice, when, envelope);
    else dsm_stream_flush(o->voice, envelope);
    finish(4, 0);
}

/* XMediaObject vtable methods (0x003E1F28). */
void xml1_CDirectSoundStream_AddRef(void)
{
    seen("CDirectSoundStream_AddRef");
    STREAM();
    finish(1, (uint32_t)InterlockedIncrement(&o->references));
}
void xml1_CDirectSoundStream_Release(void) { seen("CDirectSoundStream_Release"); finish(1, release(arg(0), KIND_STREAM)); }
/* XMEDIAINFO: flags, input size, output size, max lookahead. */
void xml1_CDirectSoundStream_GetInfo(void)
{
    seen("CDirectSoundStream_GetInfo");
    STREAM();
    uint32_t info = arg(1);
    write32(info, 1);
    write32(info + 4, o->block_align ? o->block_align : 4);
    write32(info + 8, 0);
    write32(info + 12, 0x4000);
    finish(2, 0);
}
void xml1_CDirectSoundStream_GetStatus(void)
{
    seen("CDirectSoundStream_GetStatus");
    STREAM();
    write32(arg(1), dsm_stream_status(o->voice));
    finish(2, 0);
}
/* XMEDIAPACKET: buffer, max size, completed-size pointer, status pointer,
 * completion event, timestamp. */
void xml1_CDirectSoundStream_Process(void)
{
    seen("CDirectSoundStream_Process");
    STREAM();
    uint32_t in = arg(1);
    if (arg(2)) fatal("stream Process with an output packet", arg(2));
    if (!in) fatal("stream Process without an input packet", 0);
    uint32_t buffer = read32(in), size = read32(in + 4), completed = read32(in + 8), status = read32(in + 12), event = read32(in + 16);
    DsmPacket packet = {size ? guest(buffer, size) : NULL, size,
                        completed ? guest(completed, 4) : NULL, status ? guest(status, 4) : NULL,
                        (void *)(uintptr_t)event};
    if (getenv("XML1_DSOUND_TRACE") && size >= 8) {
        const uint8_t *b = guest(buffer, 8);
        fprintf(stderr, "[DSOUND TRACE] Process voice=%d buffer=%08X size=%u head=%02X%02X%02X%02X%02X%02X%02X%02X\n",
            o->voice, buffer, size, b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);
    }
    finish(3, dsm_stream_submit(o->voice, &packet) ? 0x80004005u : 0);
}
void xml1_CDirectSoundStream_Discontinuity(void) { seen("CDirectSoundStream_Discontinuity"); STREAM(); finish(1, 0); }
void xml1_CDirectSoundStream_Flush(void) { seen("CDirectSoundStream_Flush"); STREAM(); dsm_stream_flush(o->voice, 0); finish(1, 0); }
