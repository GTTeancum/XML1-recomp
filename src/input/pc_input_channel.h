#pragma once
#include "input/pc_controls.h"
#ifdef __cplusplus
extern "C" {
#endif

/* The HWND lives in the DX8 worker. This channel carries only this game's
   window events to its owner; it never polls or injects desktop input. */
typedef struct Xml1PcInputSnapshot {
    Xml1PcControlState controls;
    uint32_t sequence;
    uint32_t last_device; /* 0 controller, 1 keyboard/mouse */
    uint32_t menu_requested;
    uint32_t menu_active;
    Xml1PcSettings settings;
    uint32_t fsaa_modes; /* bit N: N samples supported by the native device */
    uint32_t native_menu; /* bit 0: native navigation; bit 1: pause-menu Esc/Back */
    uint32_t connected_players; /* physical controller present at each routed game port */
    char output_display[32]; /* Display containing this game's own window. */
    char shader_selection[64];
    uint32_t shader_result; /* 0 off, 1 active, 2 failed */
} Xml1PcInputSnapshot;

int xml1_pc_channel_create(const Xml1PcSettings *settings);
int xml1_pc_channel_connect(void);
void xml1_pc_channel_close(void);
/* peek=1 does not consume short key presses (device enumeration). */
int xml1_pc_channel_read(Xml1PcInputSnapshot *snapshot, int peek);
void xml1_pc_channel_focus(int focused);
void xml1_pc_channel_key(unsigned key, int down);
void xml1_pc_channel_mouse(int x, int y, int wheel);
void xml1_pc_channel_controller_active(void);
void xml1_pc_channel_request_menu(void);
int xml1_pc_channel_set_menu(int active);
int xml1_pc_channel_set_settings(const Xml1PcSettings *settings);
int xml1_pc_channel_set_fsaa_modes(uint32_t modes);
int xml1_pc_channel_set_display(const char *display);
int xml1_pc_channel_shader_result(const char *selection,unsigned result);
int xml1_pc_channel_get_display(char *display,unsigned capacity);
/* Capture one window key/button for native rebinding without guest actions. */
int xml1_pc_channel_capture(int active);
unsigned xml1_pc_channel_capture_key(void);
int xml1_pc_channel_capture_controller(unsigned player);
unsigned xml1_pc_channel_capture_source(void);
/* Enumeration reports availability without consuming input or arming capture. */
void xml1_pc_channel_controller_connection(unsigned player, int connected);
/* Raw physical input before remapping/merging. Only consumed polls feed capture. */
void xml1_pc_channel_controller_state(unsigned player, int connected,
                                      uint32_t active_sources, uint32_t held_sources);

/* Native-menu pointer events use client pixels plus their originating viewport.
   They are consumed separately from gameplay buttons and binding capture. */
typedef struct Xml1PcMenuPointer {
    int32_t x, y, wheel;
    uint32_t button, width, height;
    uint32_t buttons; /* held mask after this event: left=1, right=2, middle=4 */
} Xml1PcMenuPointer;
int xml1_pc_channel_native_pointer(int active);
void xml1_pc_channel_menu_back(int active);
int xml1_pc_channel_pointer_event(int x,int y,unsigned button,int down,int wheel,
                                 unsigned width,unsigned height);
int xml1_pc_channel_pointer_read(Xml1PcMenuPointer *event);
void xml1_pc_channel_pointer_cancel(void);

#ifdef __cplusplus
}
#endif
