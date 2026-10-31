/* See dsound_mixer.h. Routing and defaults follow the XDK driver in the XBE:
 * a stereo PCM voice is one native stereo voice whose mix-bin slot b takes
 * channel b % channels (CMcpxVoiceClient 00374B08/00374D3E), and volumes are
 * held per bin id. Stereo output renders the front pair. */
#include "audio/dsound_mixer.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

static const int16_t ima_step[89] = {
    7,8,9,10,11,12,13,14,16,17,19,21,23,25,28,31,34,37,41,45,50,55,60,66,73,80,88,97,107,118,
    130,143,157,173,190,209,230,253,279,307,337,371,408,449,494,544,598,658,724,796,876,963,1060,1166,
    1282,1411,1552,1707,1878,2066,2272,2499,2749,3024,3327,3660,4026,4428,4871,5358,5894,6484,7132,7845,
    8630,9493,10442,11487,12635,13899,15289,16818,18500,20350,22385,24623,27086,29794,32767};
static const int8_t ima_index[16] = {-1,-1,-1,-1,2,4,6,8,-1,-1,-1,-1,2,4,6,8};

/* 64 frames per block: the header sample plus 63 codes. Stereo code bytes
 * alternate in runs of four; verified bit-exact against ffmpeg adpcm_ima_xbox
 * (scripts/zsnd-reference.py). */
void dsm_decode_adpcm_block(const uint8_t *block, unsigned channels, int16_t *out)
{
    int predictor[2], index[2];
    unsigned produced[2] = {1, 1};
    for (unsigned c = 0; c < channels; ++c) {
        predictor[c] = (int16_t)(block[4 * c] | block[4 * c + 1] << 8);
        index[c] = block[4 * c + 2] > 88 ? 88 : block[4 * c + 2];
        out[c] = (int16_t)predictor[c];
    }
    const uint8_t *codes = block + 4 * channels;
    for (unsigned k = 0; k < 32 * channels; ++k) {
        unsigned c = channels == 1 ? 0 : (k / 4) % channels;
        for (unsigned half = 0; half < 2; ++half) {
            if (produced[c] == 64) break;
            unsigned n = half ? codes[k] >> 4 : codes[k] & 15;
            int diff = ((2 * (n & 7) + 1) * ima_step[index[c]]) >> 3;
            predictor[c] += n & 8 ? -diff : diff;
            if (predictor[c] < -32768) predictor[c] = -32768;
            if (predictor[c] > 32767) predictor[c] = 32767;
            index[c] += ima_index[n];
            if (index[c] < 0) index[c] = 0;
            if (index[c] > 88) index[c] = 88;
            out[produced[c]++ * channels + c] = (int16_t)predictor[c];
        }
    }
}

enum { EG_OFF, EG_DELAY, EG_ATTACK, EG_HOLD, EG_DECAY, EG_SUSTAIN, EG_RELEASE };

typedef struct {
    int used, stream;
    DsmFormat format;
    const uint8_t *data;
    uint32_t bytes, frames, loop_start, loop_length;
    uint32_t frequency;
    int32_t volume, headroom;
    unsigned bin_count;
    uint32_t bins[DSM_MAX_BINS];
    int32_t bin_volume[32];
    float matrix[2][2];
    int matrix_valid;
    DsmEnvelope envelope;
    int eg_stage;
    uint32_t eg_position;
    float eg_level, eg_release_from;
    int playing, looping, primed, ended, stop_after_release, flush_after_release;
    int64_t stop_time;
    int stop_envelope;
    uint32_t cursor;
    double fraction;
    float history[4][2];
    const uint8_t *cache_source;
    uint32_t cache_block;
    int16_t cache[128];
    DsmPacket packets[DSM_MAX_PACKETS];
    unsigned head, count, max_packets;
    uint32_t packet_frame;
    int paused, starved;
    int hw_pool, hw_deferred, hw_held;
} Voice;

static SRWLOCK lock = SRWLOCK_INIT;
/* Buffer and stream state. XDK buffers are heap objects limited only by
 * memory, so this storage grows in chunks; chunk pointers never move. */
#define CHUNK_VOICES 256
#define MAX_CHUNKS 1024
static Voice *chunks[MAX_CHUNKS];
static int chunk_count;

static Voice *voice(int id)
{
    if (id < 0 || id >= chunk_count * CHUNK_VOICES) return NULL;
    Voice *v = &chunks[id / CHUNK_VOICES][id % CHUNK_VOICES];
    return v->used ? v : NULL;
}

/* MCPX hardware voices, as the XDK voice manager keeps them: 192 2D and 64 3D
 * free (00372B51), taken in AllocateVoices (00372BCD) and returned in
 * FreeVoices (00372C5E). A buffer takes its voice at creation, or at Play
 * when created with DSBCAPS_LOCDEFER, and a deferred buffer returns it when
 * playback stops (00376ED7). Every voice here is mono or stereo, which the
 * XDK counts as one hardware voice (00374B08). */
static uint32_t hw_free[2] = {192, 64};

static int hw_take(Voice *v)
{
    if (v->hw_held) return 1;
    if (!hw_free[v->hw_pool]) return 0;
    --hw_free[v->hw_pool];
    v->hw_held = 1;
    return 1;
}
static void hw_return(Voice *v)
{
    if (!v->hw_held) return;
    ++hw_free[v->hw_pool];
    v->hw_held = 0;
}

int64_t dsm_time(void)
{
    static LARGE_INTEGER frequency, start;
    LARGE_INTEGER now;
    if (!frequency.QuadPart) { QueryPerformanceFrequency(&frequency); QueryPerformanceCounter(&start); }
    QueryPerformanceCounter(&now);
    int64_t ticks = now.QuadPart - start.QuadPart;
    return ticks / frequency.QuadPart * 10000000 + ticks % frequency.QuadPart * 10000000 / frequency.QuadPart;
}

static uint32_t frame_bytes(const Voice *v) { return v->format.channels * (v->format.bits / 8u); }
static int adpcm(const Voice *v) { return v->format.tag == DSM_FORMAT_XBOX_ADPCM; }

static uint32_t frames_in(const Voice *v, uint32_t bytes)
{
    if (adpcm(v)) return v->format.block_align ? bytes / v->format.block_align * 64u : 0;
    return frame_bytes(v) ? bytes / frame_bytes(v) : 0;
}
static uint32_t bytes_of(const Voice *v, uint32_t frames)
{
    if (adpcm(v)) return frames / 64u * v->format.block_align;
    return frames * frame_bytes(v);
}

static void read_frame(Voice *v, const uint8_t *data, uint32_t frame, float out[2])
{
    unsigned channels = v->format.channels;
    if (adpcm(v)) {
        uint32_t block = frame / 64u;
        if (v->cache_source != data || v->cache_block != block) {
            dsm_decode_adpcm_block(data + (size_t)block * v->format.block_align, channels, v->cache);
            v->cache_source = data;
            v->cache_block = block;
        }
        const int16_t *s = v->cache + frame % 64u * channels;
        out[0] = s[0] / 32768.0f;
        out[1] = channels > 1 ? s[1] / 32768.0f : out[0];
    } else if (v->format.bits == 16) {
        int16_t s[2];
        memcpy(s, data + (size_t)frame * channels * 2, channels > 1 ? 4 : 2);
        out[0] = s[0] / 32768.0f;
        out[1] = channels > 1 ? s[1] / 32768.0f : out[0];
    } else {
        const uint8_t *s = data + (size_t)frame * channels;
        out[0] = (s[0] - 128) / 128.0f;
        out[1] = channels > 1 ? (s[1] - 128) / 128.0f : out[0];
    }
}

static void complete_packet(Voice *v, uint32_t status, uint32_t completed)
{
    DsmPacket *p = &v->packets[v->head];
    if (p->completed_size) *p->completed_size = completed;
    if (p->status) *p->status = status;
    if (p->event) SetEvent((HANDLE)p->event);
    v->head = (v->head + 1) % DSM_MAX_PACKETS;
    --v->count;
    v->packet_frame = 0;
    v->cache_source = NULL;
}

static void flush_packets(Voice *v)
{
    while (v->count) {
        uint32_t consumed = bytes_of(v, v->packet_frame);
        complete_packet(v, DSM_PACKET_FLUSHED, consumed);
    }
    v->primed = 0;
    v->starved = 0;
    v->flush_after_release = 0;
    v->eg_stage = v->envelope.mode ? EG_DELAY : EG_OFF;
}

/* Next source frame in playback order; 0 at the end of the data. */
static int pull(Voice *v, float out[2])
{
    if (v->stream) {
        while (v->count) {
            DsmPacket *p = &v->packets[v->head];
            if (v->packet_frame < frames_in(v, p->size)) {
                read_frame(v, p->data, v->packet_frame++, out);
                if (v->packet_frame >= frames_in(v, p->size)) complete_packet(v, DSM_PACKET_SUCCESS, p->size);
                v->starved = 0;
                return 1;
            }
            complete_packet(v, DSM_PACKET_SUCCESS, p->size);
        }
        v->starved = 1;
        return 0;
    }
    if (!v->data) return 0;
    uint32_t end = v->frames;
    if (v->looping && v->loop_length && v->loop_start + v->loop_length < end) end = v->loop_start + v->loop_length;
    if (v->cursor >= end) {
        if (!v->looping || v->loop_start >= end) return 0;
        v->cursor = v->loop_start;
    }
    read_frame(v, v->data, v->cursor++, out);
    if (v->looping && v->cursor >= end) v->cursor = v->loop_start < end ? v->loop_start : 0;
    return 1;
}

static void stop_voice(Voice *v)
{
    if (v->hw_deferred) hw_return(v);
    v->playing = 0;
    v->primed = 0;
    v->stop_time = -1;
    v->eg_stage = v->envelope.mode ? EG_DELAY : EG_OFF;
}

static void start_release(Voice *v)
{
    if (!v->envelope.release) {
        if (v->stream) flush_packets(v); else stop_voice(v);
        return;
    }
    v->eg_release_from = v->eg_stage == EG_OFF || v->eg_stage == EG_SUSTAIN && !v->eg_position ? 1.0f : v->eg_level;
    v->eg_stage = EG_RELEASE;
    v->eg_position = 0;
    if (v->stream) v->flush_after_release = 1; else v->stop_after_release = 1;
}

/* Amplitude envelope, one output frame. Returns 0 when release completes. */
static int envelope_step(Voice *v)
{
    const DsmEnvelope *e = &v->envelope;
    for (;;) {
        uint32_t length;
        switch (v->eg_stage) {
        case EG_OFF: v->eg_level = 1.0f; return 1;
        case EG_DELAY: length = e->delay * 512u; v->eg_level = 0.0f; break;
        case EG_ATTACK: length = e->attack * 512u; v->eg_level = length ? (float)v->eg_position / length : 1.0f; break;
        case EG_HOLD: length = e->hold * 512u; v->eg_level = 1.0f; break;
        case EG_DECAY: {
            float sustain = e->sustain / 255.0f;
            length = e->decay * 512u;
            v->eg_level = length ? 1.0f - (1.0f - sustain) * v->eg_position / length : sustain;
            break;
        }
        case EG_SUSTAIN: v->eg_level = e->sustain / 255.0f; return 1;
        default:
            length = e->release * 512u;
            v->eg_level = length ? v->eg_release_from * (1.0f - (float)v->eg_position / length) : 0.0f;
            if (v->eg_position >= length) { v->eg_level = 0.0f; return 0; }
            ++v->eg_position;
            return 1;
        }
        if (v->eg_position < length) { ++v->eg_position; return 1; }
        ++v->eg_stage;
        v->eg_position = 0;
    }
}

static float db(int32_t millibels) { return millibels <= -10000 ? 0.0f : powf(10.0f, millibels / 2000.0f); }

/* Stereo output renders the front pair only. A stereo voice feeds slot b from
 * channel b % 2, and the game's music list (FL, FR, C, BL, BR, LFE at 0 dB,
 * 00192D30) would put left into C and BR and right into BL: any centre or rear
 * fold makes the music lopsided. Sound effects are panned by the game through
 * the FL/FR levels, and Sofdec uses FL/FR. See docs/AUDIO-HLE-PLAN.md. */
static void speaker_weights(uint32_t bin, float *left, float *right)
{
    *left = bin == 0 ? 1.0f : 0.0f;
    *right = bin == 1 ? 1.0f : 0.0f;
}

static void target_matrix(const Voice *v, float matrix[2][2])
{
    memset(matrix, 0, sizeof(float) * 4);
    unsigned channels = v->format.channels > 1 ? 2 : 1;
    for (unsigned slot = 0; slot < v->bin_count; ++slot) {
        float left, right, g = db(v->volume + v->bin_volume[v->bins[slot] & 31] - v->headroom);
        speaker_weights(v->bins[slot], &left, &right);
        matrix[slot % channels][0] += g * left;
        matrix[slot % channels][1] += g * right;
    }
    if (channels == 1) { matrix[1][0] = 0; matrix[1][1] = 0; }
}

static int active(const Voice *v)
{
    if (!v->used) return 0;
    if (v->stream) return !v->paused && (v->count || v->eg_stage == EG_RELEASE);
    return v->playing;
}

static void mix_voice(Voice *v, float *out, unsigned frames, int64_t now)
{
    if (v->stop_time >= 0 && now >= v->stop_time) {
        v->stop_time = -1;
        if (v->stop_envelope) start_release(v);
        else if (v->stream) flush_packets(v);
        else { stop_voice(v); return; }
    }
    if (!active(v)) return;
    float target[2][2];
    target_matrix(v, target);
    if (!v->matrix_valid) { memcpy(v->matrix, target, sizeof(target)); v->matrix_valid = 1; }
    if (!v->primed) {
        memset(v->history, 0, sizeof(v->history));
        v->fraction = 0;
        v->ended = 0;
        for (int i = 1; i < 4; ++i)
            if (!pull(v, v->history[i])) { memset(v->history[i], 0, sizeof(v->history[i])); ++v->ended; }
        v->primed = 1;
    }
    double step = (double)(v->frequency ? v->frequency : v->format.rate) / DSM_RATE;
    for (unsigned i = 0; i < frames; ++i) {
        if (!envelope_step(v)) {
            if (v->flush_after_release) flush_packets(v); else stop_voice(v);
            v->stop_after_release = 0;
            break;
        }
        float t = (float)v->fraction, level = v->eg_level, blend = (float)(i + 1) / frames;
        float sample[2];
        for (int c = 0; c < 2; ++c) {
            float x0 = v->history[0][c], x1 = v->history[1][c], x2 = v->history[2][c], x3 = v->history[3][c];
            float c1 = 0.5f * (x2 - x0), c2 = x0 - 2.5f * x1 + 2.0f * x2 - 0.5f * x3;
            float c3 = 0.5f * (x3 - x0) + 1.5f * (x1 - x2);
            sample[c] = ((c3 * t + c2) * t + c1) * t + x1;
        }
        for (int o = 0; o < 2; ++o) {
            float g0 = v->matrix[0][o] + (target[0][o] - v->matrix[0][o]) * blend;
            float g1 = v->matrix[1][o] + (target[1][o] - v->matrix[1][o]) * blend;
            out[2 * i + o] += level * (g0 * sample[0] + g1 * sample[1]);
        }
        v->fraction += step;
        while (v->fraction >= 1.0) {
            v->fraction -= 1.0;
            memmove(v->history[0], v->history[1], sizeof(float) * 6);
            if (!pull(v, v->history[3])) { v->history[3][0] = v->history[3][1] = 0; ++v->ended; }
            else v->ended = 0;
        }
        if (v->stream) {
            if (!v->count && v->eg_stage != EG_RELEASE && v->ended >= 3) { v->primed = 0; break; }
        } else if (v->ended >= 3) { stop_voice(v); v->cursor = 0; break; }
    }
    memcpy(v->matrix, target, sizeof(target));
}

void dsm_mix(float *stereo, unsigned frames)
{
    memset(stereo, 0, sizeof(float) * 2 * frames);
    int64_t now = dsm_time();
    AcquireSRWLockExclusive(&lock);
    for (int c = 0; c < chunk_count; ++c)
        for (int i = 0; i < CHUNK_VOICES; ++i)
            if (chunks[c][i].used) mix_voice(&chunks[c][i], stereo, frames, now);
    ReleaseSRWLockExclusive(&lock);
}

void dsm_reset(void)
{
    AcquireSRWLockExclusive(&lock);
    for (int c = 0; c < chunk_count; ++c) memset(chunks[c], 0, sizeof(Voice) * CHUNK_VOICES);
    hw_free[0] = 192;
    hw_free[1] = 64;
    ReleaseSRWLockExclusive(&lock);
}

int dsm_voice_alloc(int stream, uint32_t max_packets)
{
    int id = -1;
    AcquireSRWLockExclusive(&lock);
    for (int i = 0; id < 0; ++i) {
        if (i == chunk_count * CHUNK_VOICES) {
            if (chunk_count == MAX_CHUNKS || !(chunks[chunk_count] = calloc(CHUNK_VOICES, sizeof(Voice)))) break;
            ++chunk_count;
        }
        Voice *v = &chunks[i / CHUNK_VOICES][i % CHUNK_VOICES];
        if (v->used) continue;
        memset(v, 0, sizeof(*v));
        v->used = 1;
        v->stream = stream;
        v->max_packets = max_packets ? (max_packets < DSM_MAX_PACKETS ? max_packets : DSM_MAX_PACKETS) : 1;
        v->stop_time = -1;
        v->format.channels = 1;
        v->format.bits = 16;
        v->format.tag = DSM_FORMAT_PCM;
        v->format.rate = DSM_RATE;
        id = i;
    }
    ReleaseSRWLockExclusive(&lock);
    return id;
}

#define LOCKED(id, body) do { AcquireSRWLockExclusive(&lock); Voice *v = voice(id); if (v) { body; } ReleaseSRWLockExclusive(&lock); } while (0)

void dsm_voice_free(int id) { LOCKED(id, if (v->stream) flush_packets(v); hw_return(v); v->used = 0); }

int dsm_hw_setup(int id, int pool_3d, int deferred)
{
    int ok = 1;
    LOCKED(id, v->hw_pool = pool_3d ? 1 : 0; v->hw_deferred = deferred; if (!deferred) ok = hw_take(v));
    return ok;
}

static void refresh_frames(Voice *v)
{
    v->frames = frames_in(v, v->bytes);
    v->cache_source = NULL;
}

void dsm_set_format(int id, const DsmFormat *format)
{
    LOCKED(id, v->format = *format; if (v->format.channels < 1) v->format.channels = 1;
           if (v->format.channels > 2) v->format.channels = 2; refresh_frames(v));
}
void dsm_set_data(int id, const uint8_t *data, uint32_t bytes)
{
    LOCKED(id, v->data = data; v->bytes = bytes; refresh_frames(v); if (v->cursor >= v->frames) v->cursor = 0; v->primed = 0);
}
void dsm_set_loop_region(int id, uint32_t start, uint32_t length)
{
    LOCKED(id, v->loop_start = frames_in(v, start); v->loop_length = frames_in(v, length));
}
void dsm_set_frequency(int id, uint32_t hz) { LOCKED(id, v->frequency = hz); }
void dsm_set_volume(int id, int32_t millibels) { LOCKED(id, v->volume = millibels); }
void dsm_set_headroom(int id, uint32_t millibels) { LOCKED(id, v->headroom = (int32_t)millibels); }
void dsm_set_mixbins(int id, unsigned count, const uint32_t *bins, const int32_t *volumes)
{
    LOCKED(id,
        v->bin_count = count > DSM_MAX_BINS ? DSM_MAX_BINS : count;
        for (unsigned i = 0; i < v->bin_count; ++i) { v->bins[i] = bins[i]; v->bin_volume[bins[i] & 31] = volumes[i]; });
}
void dsm_set_mixbin_volumes(int id, unsigned count, const uint32_t *bins, const int32_t *volumes)
{
    LOCKED(id, for (unsigned i = 0; i < count; ++i) v->bin_volume[bins[i] & 31] = volumes[i]);
}
void dsm_set_envelope(int id, const DsmEnvelope *envelope)
{
    LOCKED(id, v->envelope = *envelope;
           if (v->eg_stage != EG_RELEASE) { v->eg_stage = envelope->mode ? EG_DELAY : EG_OFF; v->eg_position = 0; });
}

int dsm_play(int id, int looping, int from_start)
{
    int ok = 1;
    AcquireSRWLockExclusive(&lock);
    Voice *v = voice(id);
    if (v && !(ok = hw_take(v))) v = NULL;
    if (v) {
        v->looping = looping;
        if (from_start) { v->cursor = 0; v->primed = 0; }
        if (!v->playing) {
            v->playing = 1;
            v->primed = 0;
            v->matrix_valid = 0;
            v->stop_after_release = 0;
            v->eg_stage = v->envelope.mode ? EG_DELAY : EG_OFF;
            v->eg_position = 0;
        }
    }
    ReleaseSRWLockExclusive(&lock);
    return ok;
}
void dsm_stop(int id) { LOCKED(id, stop_voice(v)); }
void dsm_stop_at(int id, int64_t time, int envelope)
{
    LOCKED(id, v->stop_time = time < 0 ? 0 : time; v->stop_envelope = envelope);
}
uint32_t dsm_buffer_status(int id)
{
    uint32_t status = 0;
    LOCKED(id, if (v->playing) status = DSM_BSTATUS_PLAYING | (v->looping ? DSM_BSTATUS_LOOPING : 0));
    return status;
}
uint32_t dsm_position(int id)
{
    uint32_t bytes = 0;
    LOCKED(id, bytes = bytes_of(v, v->cursor));
    return bytes;
}
void dsm_set_position(int id, uint32_t bytes)
{
    LOCKED(id, v->cursor = frames_in(v, bytes); if (v->cursor >= v->frames) v->cursor = 0; v->primed = 0);
}

int dsm_stream_submit(int id, const DsmPacket *packet)
{
    int result = -1;
    LOCKED(id,
        if (v->count < v->max_packets) {
            v->packets[(v->head + v->count) % DSM_MAX_PACKETS] = *packet;
            if (packet->status) *packet->status = DSM_PACKET_PENDING;
            if (packet->completed_size) *packet->completed_size = 0;
            ++v->count;
            result = 0;
        });
    return result;
}
void dsm_stream_flush(int id, int envelope)
{
    LOCKED(id, if (envelope && v->count && !v->paused && v->envelope.release) start_release(v); else flush_packets(v));
}
void dsm_stream_pause(int id, int paused) { LOCKED(id, v->paused = paused); }
uint32_t dsm_stream_status(int id)
{
    uint32_t status = 0;
    LOCKED(id,
        if (v->count < v->max_packets) status |= DSM_SSTATUS_READY;
        if (v->count || v->eg_stage == EG_RELEASE) status |= DSM_SSTATUS_PLAYING;
        if (v->paused) status |= DSM_SSTATUS_PAUSED;
        if (v->starved && !v->count) status |= DSM_SSTATUS_STARVED);
    return status;
}
