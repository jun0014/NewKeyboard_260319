#include QMK_KEYBOARD_H
#include "midi.h"

extern MidiDevice midi_device;

enum layer_names {
    _BASE = 0,
    _L1,
    _L2,
    _L3
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
    MIDI_47,
    L01_TOG,
    L23_TOG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, L01_TOG, L23_TOG,
        MI_C,   MI_Cs,  MI_D,   MI_Ds,  MI_E,   MI_F,   MI_Fs,  MI_G,    MI_Gs,   MI_A,    MI_As,   MI_B,
        MIDI_36, MIDI_37, MIDI_38, MIDI_39, MIDI_40, MIDI_41, MIDI_42, MIDI_43, MIDI_44, MIDI_45, MIDI_46, MIDI_47,
        MIDI_24, MIDI_25, MIDI_26, MIDI_27, MIDI_28, MIDI_29, MIDI_30, MIDI_31, MIDI_32, MIDI_33, MIDI_34, MIDI_35,
        MIDI_12, MIDI_13, MIDI_14, MIDI_15, MIDI_16, MIDI_17, MIDI_18, MIDI_19, MIDI_20, MIDI_21, MIDI_22, MIDI_23,
        MIDI_0,  MIDI_1,  MIDI_2,  MIDI_3,  MIDI_4,  MIDI_5,  MIDI_6,  MIDI_7,  MIDI_8,  MIDI_9,  MIDI_10, MIDI_11
    ),

    [_L1] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, L01_TOG, L23_TOG,
        MI_C,   MI_Cs,  MI_D,   MI_Ds,  MI_E,   MI_F,   MI_Fs,  MI_G,    MI_Gs,   MI_A,    MI_As,   MI_B,
        MIDI_36, MIDI_37, MIDI_38, MIDI_39, MIDI_40, MIDI_41, MIDI_42, MIDI_43, MIDI_44, MIDI_45, MIDI_46, MIDI_47,
        MIDI_24, MIDI_25, MIDI_26, MIDI_27, MIDI_28, MIDI_29, MIDI_30, MIDI_31, MIDI_32, MIDI_33, MIDI_34, MIDI_35,
        MIDI_12, MIDI_13, MIDI_14, MIDI_15, MIDI_16, MIDI_17, MIDI_18, MIDI_19, MIDI_20, MIDI_21, MIDI_22, MIDI_23,
        MIDI_0,  MIDI_1,  MIDI_2,  MIDI_3,  MIDI_4,  MIDI_5,  MIDI_6,  MIDI_7,  MIDI_8,  MIDI_9,  MIDI_10, MIDI_11
    ),

    [_L2] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, L01_TOG, L23_TOG,
        MI_C5,  MI_Cs5, MI_D5,  MI_Ds5, MI_E5,  MI_F5,  MI_Fs5, MI_G5,   MI_Gs5,  MI_A5,   MI_As5,  MI_B5,
        MI_C4,  MI_Cs4, MI_D4,  MI_Ds4, MI_E4,  MI_F4,  MI_Fs4, MI_G4,   MI_Gs4,  MI_A4,   MI_As4,  MI_B4,
        MI_C3,  MI_Cs3, MI_D3,  MI_Ds3, MI_E3,  MI_F3,  MI_Fs3, MI_G3,   MI_Gs3,  MI_A3,   MI_As3,  MI_B3,
        MI_C2,  MI_Cs2, MI_D2,  MI_Ds2, MI_E2,  MI_F2,  MI_Fs2, MI_G2,   MI_Gs2,  MI_A2,   MI_As2,  MI_B2,
        MI_C1,  MI_Cs1, MI_D1,  MI_Ds1, MI_E1,  MI_F1,  MI_Fs1, MI_G1,   MI_Gs1,  MI_A1,   MI_As1,  MI_B1
    ),

    [_L3] = LAYOUT(
        MI_CH2, MI_CH3, MI_CH4, MI_CH5, MI_CH6, MI_CH7, MI_CH8, MI_CH11, MI_CH12, QK_BOOT, L01_TOG, L23_TOG,
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

        case L01_TOG:
            if (record->event.pressed) {
                if (get_highest_layer(layer_state) == _BASE) {
                    layer_move(_L1);
                } else {
                    layer_move(_BASE);
                }
            }
            return false;

        case L23_TOG:
            if (record->event.pressed) {
                if (get_highest_layer(layer_state) == _L2) {
                    layer_move(_L3);
                } else {
                    layer_move(_L2);
                }
            }
            return false;
