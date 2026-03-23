#include QMK_KEYBOARD_H
#include "midi.h"

extern MidiDevice midi_device;

enum layer_names {
    _BASE = 0,
    _L1,
    _L2
};

enum custom_keycodes {
    MIDI_0 = SAFE_RANGE,
    MIDI_1,
    MIDI_2,
    MIDI_3,
    MIDI_4,
    MIDI_5,
    MIDI_6,
    MIDI_7,
    MIDI_8,
    MIDI_9,
    MIDI_10,
    MIDI_11
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),

    [_L1] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        MIDI_0, MIDI_1, MIDI_2, MIDI_3, MIDI_4, MIDI_5, MIDI_6, MIDI_7,  MIDI_8,  MIDI_9,  MIDI_10, MIDI_11
    ),

    [_L2] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, TG(_L1), TG(_L2),
        MI_C5,  MI_Cs5, MI_D5,  MI_Ds5, MI_E5,  MI_F5,  MI_Fs5, MI_G5,   MI_Gs5,  MI_A5,   MI_As5,  MI_B5,
        MI_C4,  MI_Cs4, MI_D4,  MI_Ds4, MI_E4,  MI_F4,  MI_Fs4, MI_G4,   MI_Gs4,  MI_A4,   MI_As4,  MI_B4,
        MI_C3,  MI_Cs3, MI_D3,  MI_Ds3, MI_E3,  MI_F3,  MI_Fs3, MI_G3,   MI_Gs3,  MI_A3,   MI_As3,  MI_B3,
        MI_C2,  MI_Cs2, MI_D2,  MI_Ds2, MI_E2,  MI_F2,  MI_Fs2, MI_G2,   MI_Gs2,  MI_A2,   MI_As2,  MI_B2,
        MI_C1,  MI_Cs1, MI_D1,  MI_Ds1, MI_E1,  MI_F1,  MI_Fs1, MI_G1,   MI_Gs1,  MI_A1,   MI_As1,  MI_B1
    )
};

static void send_midi_note(uint8_t note, bool pressed) {
    if (pressed) {
        midi_send_noteon(&midi_device, midi_config.channel, note, midi_config.velocity);
    } else {
        midi_send_noteoff(&midi_device, midi_config.channel, note, midi_config.velocity);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MIDI_0:
            send_midi_note(0, record->event.pressed);
            return false;
        case MIDI_1:
            send_midi_note(1, record->event.pressed);
            return false;
        case MIDI_2:
            send_midi_note(2, record->event.pressed);
            return false;
        case MIDI_3:
            send_midi_note(3, record->event.pressed);
            return false;
        case MIDI_4:
            send_midi_note(4, record->event.pressed);
            return false;
        case MIDI_5:
            send_midi_note(5, record->event.pressed);
            return false;
        case MIDI_6:
            send_midi_note(6, record->event.pressed);
            return false;
        case MIDI_7:
            send_midi_note(7, record->event.pressed);
            return false;
        case MIDI_8:
            send_midi_note(8, record->event.pressed);
            return false;
        case MIDI_9:
            send_midi_note(9, record->event.pressed);
            return false;
        case MIDI_10:
            send_midi_note(10, record->event.pressed);
            return false;
        case MIDI_11:
            send_midi_note(11, record->event.pressed);
            return false;
    }

    return true;
}
