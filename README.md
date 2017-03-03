# Ergodox

## Firmware

### `qmk_firmware`

[robenkleene/qmk_firmware](https://github.com/robenkleene/qmk_firmware)

#### Compiling

1. Go the folder for the appropriate keyboard `/keyboards/ergodox`
2. Run `make robenkleene_osx`
3. This builds the firmware in `/qmk_firmware/.build`
4. It looks like this can be installed with just the `.hex` file (without the `.eep` file) from below?

#### Resources

* [Available Key Codes](https://github.com/jackhumbert/qmk_firmware/blob/master/doc/keycode.txt)
* [Some keymap information, but this is for `tmk`](https://github.com/tmk/tmk_core/blob/master/doc/keymap.md#31-momentary-switching)
* [Better layer information for `qmk`](http://qmk.fm/keyboards/hhkb/#switching-and-toggling-layers)

## Installation

Using Teensy, the "Teensy reset button" is the paperclip button in the upper right of the keyboard.

1. Drag `ergodox_ez_robenkleene_osx.hex` onto Teensy.
2. Click the "Auto" button in Teensy.
3. Press the Teensy reset button.
