#pragma once
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Return nonzero to continue, zero to cancel. Runs on the caller's thread. */
typedef int (*Xml1ExtractProgress)(void *context, unsigned done, unsigned total, const char *resource);
int xml1_extract_loose(const wchar_t *archive, const wchar_t *destination,
    Xml1ExtractProgress progress, void *context, char *error, unsigned error_size);
/* Installer variant: preserve editable and compiled overlays in game_root. */
int xml1_extract_loose_for_install(const wchar_t *archive, const wchar_t *destination,
    const wchar_t *game_root, Xml1ExtractProgress progress, void *context,
    char *error, unsigned error_size);
#ifdef __cplusplus
}
#endif
