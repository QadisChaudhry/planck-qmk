#pragma once

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

#define TAPPING_TERM 190
#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT

#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_DELAY 10
#define MOUSEKEY_INTERVAL 16

#define AUTO_SHIFT_TIMEOUT 130
#define NO_AUTO_SHIFT_ALPHA
#define NO_AUTO_SHIFT_SPECIAL

#define ONESHOT_TAP_TOGGLE 3
#define ONESHOT_TIMEOUT 1500

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
