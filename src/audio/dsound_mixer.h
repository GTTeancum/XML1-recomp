/* Native mixer behind the XDK DirectSound replacement (docs/AUDIO-HLE-PLAN.md).
 * Host-only: it plays sample data the game already holds in guest memory,
 * decodes Xbox ADPCM itself and produces 48 kHz stereo. Nothing here touches
 * the APU. All functions are thread-safe; guest threads configure voices while
 * the output thread mixes. */
#pragma once
#include <stdint.h>

#define DSM_RATE 48000u
#define DSM_MAX_PACKETS 64
#define DSM_MAX_BINS 8

/* XDK status and flag values used by the game. */
#define DSM_BSTATUS_PLAYING 0x1u
#define DSM_BSTATUS_LOOPING 0x4u
#define DSM_SSTATUS_READY 0x1u
#define DSM_SSTATUS_PLAYING 0x10000u
#define DSM_SSTATUS_PAUSED 0x20000u
#define DSM_SSTATUS_STARVED 0x40000u
#define DSM_PACKET_SUCCESS 0u
#define DSM_PACKET_PENDING 0x8000000Au
#define DSM_PACKET_FLUSHED 0x80004004u

#define DSM_FORMAT_PCM 1u
#define DSM_FORMAT_XBOX_ADPCM 0x69u

typedef struct {
    uint16_t tag, channels, bits, block_align;
    uint32_t rate;
} DsmFormat;

/* DSENVELOPEDESC: stage times in 512-sample units at 48 kHz, sustain 0-255. */
typedef struct {
    uint32_t mode, delay, attack, hold, decay, release, sustain;
} DsmEnvelope;

/* Guest XMEDIAPACKET resolved to host pointers. Completion writes the two
 * status words the game polls and signals its event, from the mixer thread. */
typedef struct {
    const uint8_t *data;
    uint32_t size;
    uint32_t *completed_size;
    uint32_t *status;
    void *event;
} DsmPacket;

void dsm_reset(void);
int dsm_voice_alloc(int stream, uint32_t max_packets);
void dsm_voice_free(int id);
/* Hardware voice pool (2D or 3D) and DSBCAPS_LOCDEFER. A non-deferred voice
 * takes its hardware voice now; 0 means none was free. */
int dsm_hw_setup(int id, int pool_3d, int deferred);
void dsm_set_format(int id, const DsmFormat *format);
void dsm_set_data(int id, const uint8_t *data, uint32_t bytes);
void dsm_set_loop_region(int id, uint32_t start_bytes, uint32_t length_bytes);
void dsm_set_frequency(int id, uint32_t hz);
void dsm_set_volume(int id, int32_t millibels);
void dsm_set_headroom(int id, uint32_t millibels);
void dsm_set_mixbins(int id, unsigned count, const uint32_t *bins, const int32_t *volumes);
void dsm_set_mixbin_volumes(int id, unsigned count, const uint32_t *bins, const int32_t *volumes);
void dsm_set_envelope(int id, const DsmEnvelope *envelope);

/* 0 when a deferred voice finds no free hardware voice; nothing plays. */
int dsm_play(int id, int looping, int from_start);
void dsm_stop(int id);
/* StopEx: at a DirectSound reference time (100 ns), optionally via release. */
void dsm_stop_at(int id, int64_t time, int envelope);
uint32_t dsm_buffer_status(int id);
uint32_t dsm_position(int id);
void dsm_set_position(int id, uint32_t bytes);

int dsm_stream_submit(int id, const DsmPacket *packet);
void dsm_stream_flush(int id, int envelope);
void dsm_stream_pause(int id, int paused);
uint32_t dsm_stream_status(int id);

/* 100 ns DirectSound reference clock (IDirectSound::GetTime). */
int64_t dsm_time(void);
/* Produce frames of interleaved stereo at 48 kHz. Advances every voice. */
void dsm_mix(float *stereo, unsigned frames);
/* Decode one Xbox ADPCM block (36 bytes per channel) into 64 frames. */
void dsm_decode_adpcm_block(const uint8_t *block, unsigned channels, int16_t *out);
