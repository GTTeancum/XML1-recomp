#pragma once
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

enum Xml1PcAction {
    XML1_PC_FORWARD, XML1_PC_BACKWARD, XML1_PC_LEFT, XML1_PC_RIGHT,
    XML1_PC_ATTACK, XML1_PC_SMASH, XML1_PC_JUMP, XML1_PC_USE,
    XML1_PC_POWERS, XML1_PC_HEALTH, XML1_PC_ENERGY, XML1_PC_ALLIES,
    XML1_PC_HERO_UP, XML1_PC_HERO_DOWN, XML1_PC_HERO_LEFT, XML1_PC_HERO_RIGHT,
    XML1_PC_MAP, XML1_PC_PAUSE, XML1_PC_STATS,
    XML1_PC_CAMERA_UP, XML1_PC_CAMERA_DOWN, XML1_PC_CAMERA_LEFT, XML1_PC_CAMERA_RIGHT,
    XML1_PC_WALK, XML1_PC_POWER1, XML1_PC_POWER2, XML1_PC_POWER3, XML1_PC_POWER4,
    XML1_PC_CAMERA_DRAG,
    XML1_PC_ACTION_COUNT
};

/* Physical Xbox pad inputs, independent of Windows key codes. Axis directions
   are distinct bindings so they can share the action table with buttons. */
enum Xml1PcPadSource {
    XML1_PAD_NONE, XML1_PAD_A, XML1_PAD_B, XML1_PAD_X, XML1_PAD_Y,
    XML1_PAD_BLACK, XML1_PAD_WHITE, XML1_PAD_LT, XML1_PAD_RT,
    XML1_PAD_UP, XML1_PAD_DOWN, XML1_PAD_LEFT, XML1_PAD_RIGHT,
    XML1_PAD_START, XML1_PAD_BACK, XML1_PAD_LTHUMB, XML1_PAD_RTHUMB,
    XML1_PAD_LX_NEG, XML1_PAD_LX_POS, XML1_PAD_LY_NEG, XML1_PAD_LY_POS,
    XML1_PAD_RX_NEG, XML1_PAD_RX_POS, XML1_PAD_RY_NEG, XML1_PAD_RY_POS,
    XML1_PAD_SOURCE_COUNT
};

/* Fixed-width values only: shared settings are valid in both host processes.
   Bindings use Windows virtual-key values, including mouse buttons 1, 2 and 4. */
typedef struct Xml1PcSettings {
    uint32_t width, height, fullscreen, fsaa;
    uint32_t keyboard_enabled, keyboard_player, separate_controllers;
    uint32_t mouse_sensitivity, invert_camera_y;
    uint32_t keys[4][XML1_PC_ACTION_COUNT];
    uint32_t alternate_keys[4][XML1_PC_ACTION_COUNT];
    uint32_t pad_bindings[4][XML1_PC_ACTION_COUNT];
    uint32_t alternate_pad_bindings[4][XML1_PC_ACTION_COUNT];
    uint32_t view_shake;
} Xml1PcSettings;

typedef struct Xml1PcControlState {
    uint8_t held[256];
    uint32_t focused;
    int32_t mouse_x, mouse_y, wheel;
    int32_t mouse_dx, mouse_dy;
} Xml1PcControlState;

const char *xml1_pc_action_name(unsigned action);
int xml1_pc_resolution_supported(uint32_t width, uint32_t height);
void xml1_pc_resolution_next(Xml1PcSettings *settings);
void xml1_pc_settings_defaults(Xml1PcSettings *settings);
/* XML2-derived layouts 1..3; replace only the selected player bindings. */
int xml1_pc_settings_preset(Xml1PcSettings *settings, unsigned player, unsigned preset);
int xml1_pc_settings_validate(const Xml1PcSettings *settings, char *error, unsigned error_size);
int xml1_pc_settings_load(const char *path, Xml1PcSettings *settings, char *error, unsigned error_size);
int xml1_pc_settings_save(const char *path, const Xml1PcSettings *settings, char *error, unsigned error_size);
/* Returns conflicting action, or -1. Keys can be unbound with zero. */
int xml1_pc_binding_conflict(const Xml1PcSettings *settings, unsigned action, unsigned key);
int xml1_pc_player_binding_conflict(const Xml1PcSettings *settings, unsigned player, unsigned action, unsigned key);
int xml1_pc_pad_binding_conflict(const Xml1PcSettings *settings, unsigned player, unsigned action, unsigned source);
void xml1_pc_control_focus(Xml1PcControlState *state, int focused);
void xml1_pc_control_key(Xml1PcControlState *state, unsigned key, int down);
int xml1_pc_action_down(const Xml1PcSettings *settings, const Xml1PcControlState *state, unsigned action);

#ifdef __cplusplus
}
#endif
