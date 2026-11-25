#pragma once
#ifdef __cplusplus
extern "C" {
#endif
/* Rebuild from the active loose game data after extraction on each boot. */
int xml1_costumes_init(const char* root, const char* language, char* error, unsigned error_size);
int xml1_costumes_active(void);
/* Return 0 for untracked definitions; physical skin IDs are otherwise 01–99. */
unsigned xml1_costume_next(const char* name, unsigned family, unsigned current);
unsigned xml1_costume_fallback(const char* name, unsigned family, unsigned requested);
#ifdef __cplusplus
}
#endif
