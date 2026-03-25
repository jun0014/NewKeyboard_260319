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
    MIDI_11,
    MIDI_12,
    MIDI_13,
    MIDI_14,
    MIDI_15,
    MIDI_16,
    MIDI_17,
    MIDI_18,
    MIDI_19,
    MIDI_20,
    MIDI_21,
    MIDI_22,
    MIDI_23,
    MIDI_24,
    MIDI_25,
    MIDI_26,
    MIDI_27,
    MIDI_28,
    MIDI_29,
    MIDI_30,
    MIDI_31,
    MIDI_32,
    MIDI_33,
    MIDI_34,
    MIDI_35,
    MIDI_36,
    MIDI_37,
    MIDI_38,
    MIDI_39,
    MIDI_40,
    MIDI_41,
    MIDI_42,
    MIDI_43,
    MIDI_44,
    MIDI_45,
    MIDI_46,
    MIDI_47
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        MIDI_CH13_MIDI_0,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),

    [_L1] = LAYOUT(
        MI_CH2,  MI_CH3,  MI_CH4,  MI_CH5,  MI_CH6,  MI_CH7,  MI_CH8,  MI_CH11, MI_CH12, QK_BOOT, TG(_L1), TG(_L2),
        MI_C,    MI_Cs,   MI_D,    MI_Ds,   MI_E,    MI_F,    MI_Fs,   MI_G,    MI_Gs,   MI_A,    MI_As,   MI_B,
        MIDI_36, MIDI_37, MIDI_38, MIDI_39, MIDI_40, MIDI_41, MIDI_42, MIDI_43, MIDI_44, MIDI_45, MIDI_46, MIDI_47,
        MIDI_24, MIDI_25, MIDI_26, MIDI_27, MIDI_28, MIDI_29, MIDI_30, MIDI_31, MIDI_32, MIDI_33, MIDI_34, MIDI_35,
        MIDI_12, MIDI_13, MIDI_14, MIDI_15, MIDI_16, MIDI_17, MIDI_18, MIDI_19, MIDI_20, MIDI_21, MIDI_22, MIDI_23,
        MIDI_0,  MIDI_1,  MIDI_2,  MIDI_3,  MIDI_4,  MIDI_5,  MIDI_6,  MIDI_7,  MIDI_8,  MIDI_9,  MIDI_10, MIDI_11
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
        case MIDI_12:
            send_midi_note(12, record->event.pressed);
            return false;
        case MIDI_13:
            send_midi_note(13, record->event.pressed);
            return false;
        case MIDI_14:
            send_midi_note(14, record->event.pressed);
            return false;
        case MIDI_15:
            send_midi_note(15, record->event.pressed);
            return false;
        case MIDI_16:
            send_midi_note(16, record->event.pressed);
            return false;
        case MIDI_17:
            send_midi_note(17, record->event.pressed);
            return false;
        case MIDI_18:
            send_midi_note(18, record->event.pressed);
            return false;
        case MIDI_19:
            send_midi_note(19, record->event.pressed);
            return false;
        case MIDI_20:
            send_midi_note(20, record->event.pressed);
            return false;
        case MIDI_21:
            send_midi_note(21, record->event.pressed);
            return false;
        case MIDI_22:
            send_midi_note(22, record->event.pressed);
            return false;
        case MIDI_23:
            send_midi_note(23, record->event.pressed);
            return false;
        case MIDI_24:
            send_midi_note(24, record->event.pressed);
            return false;
        case MIDI_25:
            send_midi_note(25, record->event.pressed);
            return false;
        case MIDI_26:
            send_midi_note(26, record->event.pressed);
            return false;
        case MIDI_27:
            send_midi_note(27, record->event.pressed);
            return false;
        case MIDI_28:
            send_midi_note(28, record->event.pressed);
            return false;
        case MIDI_29:
            send_midi_note(29, record->event.pressed);
            return false;
        case MIDI_30:
            send_midi_note(30, record->event.pressed);
            return false;
        case MIDI_31:
            send_midi_note(31, record->event.pressed);
            return false;
        case MIDI_32:
            send_midi_note(32, record->event.pressed);
            return false;
        case MIDI_33:
            send_midi_note(33, record->event.pressed);
            return false;
        case MIDI_34:
            send_midi_note(34, record->event.pressed);
            return false;
        case MIDI_35:
            send_midi_note(35, record->event.pressed);
            return false;
        case MIDI_36:
            send_midi_note(36, record->event.pressed);
            return false;
        case MIDI_37:
            send_midi_note(37, record->event.pressed);
            return false;
        case MIDI_38:
            send_midi_note(38, record->event.pressed);
            return false;
        case MIDI_39:
            send_midi_note(39, record->event.pressed);
            return false;
        case MIDI_40:
            send_midi_note(40, record->event.pressed);
            return false;
        case MIDI_41:
            send_midi_note(41, record->event.pressed);
            return false;
        case MIDI_42:
            send_midi_note(42, record->event.pressed);
            return false;
        case MIDI_43:
            send_midi_note(43, record->event.pressed);
            return false;
        case MIDI_44:
            send_midi_note(44, record->event.pressed);
            return false;
        case MIDI_45:
            send_midi_note(45, record->event.pressed);
            return false;
        case MIDI_46:
            send_midi_note(46, record->event.pressed);
            return false;
        case MIDI_47:
            send_midi_note(47, record->event.pressed);
            return false;
    }

    return true;
}
