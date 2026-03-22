#include QMK_KEYBOARD_H

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
    MIDI_60,
    MIDI_61,
    MIDI_62,
    MIDI_63,
    MIDI_64,
    MIDI_65,
    MIDI_66,
    MIDI_67,
    MIDI_68,
    MIDI_69,
    MIDI_70,
    MIDI_71
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO
    ),

    [_L1] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        MIDI_0, MIDI_1, MIDI_2, MIDI_3, MIDI_4, MIDI_5, MIDI_6, MIDI_7, MIDI_8, MIDI_9, MIDI_10, MIDI_11
    ),

    [_L2] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, TG(_L1), TG(_L2),
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,
        MIDI_60, MIDI_61, MIDI_62, MIDI_63, MIDI_64, MIDI_65, MIDI_66, MIDI_67, MIDI_68, MIDI_69, MIDI_70, MIDI_71
    )
};

static void send_midi_note(uint8_t note, bool pressed) {
    if (pressed) {
        midi_send_noteon(&_midi_device, midi_config.channel, note, midi_config.velocity);
    } else {
        midi_send_noteoff(&_midi_device, midi_config.channel, note, midi_config.velocity);
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
        case MIDI_60:
            send_midi_note(60, record->event.pressed);
            return false;
        case MIDI_61:
            send_midi_note(61, record->event.pressed);
            return false;
        case MIDI_62:
            send_midi_note(62, record->event.pressed);
            return false;
        case MIDI_63:
            send_midi_note(63, record->event.pressed);
            return false;
        case MIDI_64:
            send_midi_note(64, record->event.pressed);
            return false;
        case MIDI_65:
            send_midi_note(65, record->event.pressed);
            return false;
        case MIDI_66:
            send_midi_note(66, record->event.pressed);
            return false;
        case MIDI_67:
            send_midi_note(67, record->event.pressed);
            return false;
        case MIDI_68:
            send_midi_note(68, record->event.pressed);
            return false;
        case MIDI_69:
            send_midi_note(69, record->event.pressed);
            return false;
        case MIDI_70:
            send_midi_note(70, record->event.pressed);
            return false;
        case MIDI_71:
            send_midi_note(71, record->event.pressed);
            return false;
    }

    return true;
}
