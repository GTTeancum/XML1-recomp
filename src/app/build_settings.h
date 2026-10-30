#pragma once

typedef struct Xml1BuildSettings {
    int prefer_files_loose;
    char text_language[4], movie_language[4], audio_language[4];
    int modder_mode;
    int performance_logging;
    int graphics_adapter; /* -1: OS/driver preference; otherwise DX8 ordinal. */
    int danger_room_unlock_all; /* Main-menu Danger Room: every mode, character and arena. */
    int hd_textures; /* Load PNG replacements from hd_texture_pack when it exists. */
    char hd_texture_pack[260]; /* Relative paths resolve against the game data directory. */
} Xml1BuildSettings;
extern Xml1BuildSettings xml1_build_settings;
/* Missing file uses defaults. Invalid values fail with a useful error. */
int xml1_read_build_settings(const char *path, Xml1BuildSettings *out, char *error, unsigned error_size);
int xml1_prefer_files_loose(void);
