/* Native DirectSound mixer checks. No audio device is opened.
 * Optional argument: build/adpcm-fixture.bin from scripts/make-adpcm-fixture.py,
 * which compares block decoding against the ffmpeg-verified reference. */
#include "audio/dsound_mixer.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

static int failures;
#define CHECK(cond, ...) do { if (!(cond)) { ++failures; printf("FAIL %s:%d: ", __FILE__, __LINE__); printf(__VA_ARGS__); putchar('\n'); } } while (0)

static const uint32_t front[2] = {0, 1};
static const int32_t zero[2] = {0, 0};

static int mono_voice(const int16_t *pcm, uint32_t frames, uint32_t rate)
{
    int id = dsm_voice_alloc(0, 0);
    DsmFormat f = {DSM_FORMAT_PCM, 1, 16, 2, rate};
    dsm_set_format(id, &f);
    dsm_set_data(id, (const uint8_t *)pcm, frames * 2);
    dsm_set_mixbins(id, 2, front, zero);
    return id;
}

static void test_unity_and_end(void)
{
    dsm_reset();
    static int16_t pcm[1000];
    for (int i = 0; i < 1000; ++i) pcm[i] = (int16_t)(i * 30 - 15000);
    int id = mono_voice(pcm, 1000, DSM_RATE);
    dsm_play(id, 0, 1);
    static float out[2048 * 2];
    dsm_mix(out, 990);
    CHECK(dsm_buffer_status(id) & DSM_BSTATUS_PLAYING, "stopped before the tail");
    dsm_mix(out + 2 * 990, 10);
    float worst = 0;
    for (int i = 0; i < 1000; ++i) {
        float e = fabsf(out[2 * i] - pcm[i] / 32768.0f) + fabsf(out[2 * i + 1] - pcm[i] / 32768.0f);
        if (e > worst) worst = e;
    }
    CHECK(worst < 1e-5f, "unity playback error %g", worst);
    dsm_mix(out, 16);
    CHECK(!(dsm_buffer_status(id) & DSM_BSTATUS_PLAYING), "one-shot did not stop at its end");
}

static void test_headroom_volume_and_bins(void)
{
    dsm_reset();
    static int16_t pcm[64];
    for (int i = 0; i < 64; ++i) pcm[i] = 16384;
    int id = mono_voice(pcm, 64, DSM_RATE);
    dsm_set_headroom(id, 600);
    dsm_set_volume(id, -400);
    static const uint32_t bins[3] = {0, 1, 2};
    static const int32_t volumes[3] = {0, -10000, -10000};
    dsm_set_mixbins(id, 3, bins, volumes);
    dsm_play(id, 1, 1);
    float out[32 * 2];
    dsm_mix(out, 32);
    CHECK(fabsf(out[20] - 0.5f * 0.31622777f) < 1e-4f, "left gain %g, expected -10 dB of 0.5", out[20]);
    CHECK(fabsf(out[21]) < 1e-6f, "right muted bin leaked %g", out[21]);
    /* Only the front pair is rendered in stereo; a live centre bin adds nothing. */
    static const uint32_t centre[1] = {2};
    static const int32_t on[1] = {0};
    dsm_set_mixbin_volumes(id, 1, centre, on);
    dsm_mix(out, 32);
    CHECK(fabsf(out[62] - 0.15811388f) < 1e-4f && fabsf(out[63]) < 1e-6f, "centre bin rendered %g/%g", out[62], out[63]);
}

static void test_loop_region(void)
{
    dsm_reset();
    static int16_t pcm[100];
    for (int i = 0; i < 100; ++i) pcm[i] = (int16_t)(i * 100);
    int id = mono_voice(pcm, 100, DSM_RATE);
    dsm_set_loop_region(id, 40 * 2, 20 * 2);
    dsm_play(id, 1, 1);
    static float out[200 * 2];
    dsm_mix(out, 200);
    CHECK(fabsf(out[2 * 60] - pcm[40] / 32768.0f) < 1e-5f, "first loop wrap %g", out[2 * 60] * 32768);
    CHECK(fabsf(out[2 * 199] - pcm[40 + (199 - 40) % 20] / 32768.0f) < 1e-5f, "later wrap %g", out[2 * 199] * 32768);
    CHECK(dsm_buffer_status(id) == (DSM_BSTATUS_PLAYING | DSM_BSTATUS_LOOPING), "looping status");
}

static void test_stereo_routing_and_rate(void)
{
    dsm_reset();
    static int16_t pcm[400 * 2];
    for (int i = 0; i < 400; ++i) { pcm[2 * i] = 8000; pcm[2 * i + 1] = -4000; }
    int id = dsm_voice_alloc(0, 0);
    DsmFormat f = {DSM_FORMAT_PCM, 2, 16, 4, 24000};
    dsm_set_format(id, &f);
    dsm_set_data(id, (const uint8_t *)pcm, sizeof(pcm));
    dsm_set_mixbins(id, 2, front, zero);
    dsm_play(id, 0, 1);
    static float out[400 * 2];
    dsm_mix(out, 400);
    CHECK(fabsf(out[200] - 8000 / 32768.0f) < 1e-5f && fabsf(out[201] + 4000 / 32768.0f) < 1e-5f,
        "stereo slots: left %g right %g", out[200] * 32768, out[201] * 32768);
    uint32_t position = dsm_position(id);
    CHECK(position >= 199 * 4 && position <= 204 * 4, "half-rate consumption, position %u bytes", position);
}

static void test_stream_packets(void)
{
    dsm_reset();
    static int16_t a[128 * 2], b[128 * 2];
    for (int i = 0; i < 256; ++i) { a[i] = 1000; b[i] = 2000; }
    int id = dsm_voice_alloc(1, 8);
    DsmFormat f = {DSM_FORMAT_PCM, 2, 16, 4, DSM_RATE};
    dsm_set_format(id, &f);
    dsm_set_mixbins(id, 2, front, zero);
    uint32_t status[2] = {0, 0}, done[2] = {7, 7};
    HANDLE event = CreateEventA(NULL, TRUE, FALSE, NULL);
    DsmPacket pa = {(const uint8_t *)a, sizeof(a), &done[0], &status[0], event};
    DsmPacket pb = {(const uint8_t *)b, sizeof(b), &done[1], &status[1], NULL};
    CHECK(!dsm_stream_submit(id, &pa) && !dsm_stream_submit(id, &pb), "submit");
    CHECK(status[0] == DSM_PACKET_PENDING && done[0] == 0, "pending not published");
    CHECK(dsm_stream_status(id) & DSM_SSTATUS_PLAYING, "stream not playing with packets");
    static float out[300 * 2];
    dsm_mix(out, 150);
    CHECK(status[0] == DSM_PACKET_SUCCESS && done[0] == sizeof(a), "first packet completion %08X/%u", status[0], done[0]);
    CHECK(WaitForSingleObject(event, 0) == WAIT_OBJECT_0, "completion event not signalled");
    CHECK(status[1] == DSM_PACKET_PENDING, "second packet completed early");
    CHECK(fabsf(out[2 * 10] - 1000 / 32768.0f) < 1e-5f && fabsf(out[2 * 140] - 2000 / 32768.0f) < 1e-5f, "stream samples");
    dsm_mix(out, 300);
    CHECK(status[1] == DSM_PACKET_SUCCESS, "second packet completion");
    CHECK(!(dsm_stream_status(id) & DSM_SSTATUS_PLAYING), "drained stream still playing");
    /* Flush reports the unplayed packet as flushed. */
    status[0] = 0;
    dsm_stream_submit(id, &pa);
    dsm_stream_flush(id, 0);
    CHECK(status[0] == DSM_PACKET_FLUSHED, "flush status %08X", status[0]);
    CloseHandle(event);
}

static void test_scheduled_release(void)
{
    dsm_reset();
    static int16_t pcm[64];
    for (int i = 0; i < 64; ++i) pcm[i] = 16384;
    int id = mono_voice(pcm, 64, DSM_RATE);
    DsmEnvelope e = {0, 0, 0, 0, 0, 1, 255};
    dsm_set_envelope(id, &e);
    dsm_play(id, 1, 1);
    dsm_stop_at(id, dsm_time() - 1, 1);
    static float out[1024 * 2];
    dsm_mix(out, 1024);
    CHECK(out[0] > 0.49f && fabsf(out[2 * 256] - 0.25f) < 0.01f, "release ramp %g -> %g", out[0], out[2 * 256]);
    CHECK(!(dsm_buffer_status(id) & DSM_BSTATUS_PLAYING), "voice survived its release");
}

/* XDK voice manager rules: 192 2D and 64 3D hardware voices; a deferred
 * buffer holds one only while playing; buffers themselves are unlimited. */
static void test_hardware_voices(void)
{
    dsm_reset();
    static int16_t pcm[64];
    for (int i = 0; i < 64; ++i) pcm[i] = 1000;
    static int ids[3000];
    for (int i = 0; i < 3000; ++i) {
        ids[i] = mono_voice(pcm, 64, DSM_RATE);
        CHECK(ids[i] >= 0 && dsm_hw_setup(ids[i], 0, 1), "deferred buffer %d not created", i);
    }
    int played = 0;
    for (int i = 0; i < 193; ++i) played += dsm_play(ids[i], 1, 1);
    CHECK(played == 192, "2D pool allowed %d playing voices, expected 192", played);
    CHECK(!(dsm_buffer_status(ids[192]) & DSM_BSTATUS_PLAYING), "voice played without a hardware voice");
    dsm_stop(ids[0]);
    CHECK(dsm_play(ids[192], 1, 1), "stopped deferred buffer did not return its voice");
    /* A one-shot that ends returns its voice too. */
    dsm_stop(ids[1]);
    CHECK(dsm_play(ids[1], 0, 1), "replay after stop");
    static float out[256 * 2];
    dsm_mix(out, 256);
    CHECK(dsm_play(ids[193], 1, 1), "ended one-shot kept its voice");
    /* Freeing a buffer returns a held voice; the 3D pool is separate. */
    dsm_voice_free(ids[2]);
    CHECK(dsm_play(ids[194], 1, 1), "freed buffer kept its voice");
    int stream = dsm_voice_alloc(1, 4);
    CHECK(dsm_hw_setup(stream, 1, 0), "3D pool shared the full 2D pool");
    int taken = 1;
    for (int i = 0; i < 64; ++i) taken += dsm_hw_setup(dsm_voice_alloc(0, 0), 1, 0);
    CHECK(taken == 64, "3D pool held %d voices, expected 64", taken);
}

static void test_adpcm_fixture(const char *path)
{
    /* u32 channels, u32 blocks, then ADPCM bytes, then int16 reference frames. */
    FILE *f = fopen(path, "rb");
    if (!f) { printf("FAIL cannot open %s\n", path); ++failures; return; }
    for (;;) {
        uint32_t header[2];
        if (fread(header, 4, 2, f) != 2) break;
        uint32_t channels = header[0], blocks = header[1];
        size_t in_bytes = (size_t)36 * channels * blocks, frames = (size_t)64 * blocks;
        uint8_t *in = malloc(in_bytes);
        int16_t *expected = malloc(frames * channels * 2), *got = malloc(frames * channels * 2);
        if (fread(in, 1, in_bytes, f) != in_bytes || fread(expected, 2, frames * channels, f) != frames * channels) {
            printf("FAIL truncated fixture\n"); ++failures; break;
        }
        for (uint32_t b = 0; b < blocks; ++b)
            dsm_decode_adpcm_block(in + (size_t)36 * channels * b, channels, got + (size_t)64 * channels * b);
        size_t mismatches = 0;
        for (size_t i = 0; i < frames * channels; ++i) mismatches += got[i] != expected[i];
        CHECK(!mismatches, "%zu of %zu ADPCM samples differ (%u channels)", mismatches, frames * channels, channels);
        printf("ADPCM fixture: %u channel(s), %u blocks, %zu mismatches\n", channels, blocks, mismatches);
        free(in); free(expected); free(got);
    }
    fclose(f);
}

int main(int argc, char **argv)
{
    test_unity_and_end();
    test_headroom_volume_and_bins();
    test_loop_region();
    test_stereo_routing_and_rate();
    test_stream_packets();
    test_scheduled_release();
    test_hardware_voices();
    if (argc > 1) test_adpcm_fixture(argv[1]);
    printf(failures ? "dsound mixer test: %d failure(s)\n" : "dsound mixer test: all checks passed\n", failures);
    return failures != 0;
}
