# Ergodox

## Firmware

### `ergodox-firmware`

* [robenkleene/ergodox-firmware](https://github.com/robenkleene/ergodox-firmware).
* Just type `make` in the root directory.
* Lining up the keys in code is done by piping the comma-delimited list through `column -t`.

#### Resources

* [`src/lib/usb/usage-page/keyboard--short-names.h`](https://github.com/robenkleene/ergodox-firmware/blob/master/src/lib/usb/usage-page/keyboard--short-names.h)

### `qmk_firmware`

1. Go the folder for the appropriate keyboard `/keyboards/ergodox`
2. Run `make robenkleene_osx`
3. This builds the firmware in `/qmk_firmware/.build`
4. It looks like this can be installed with just the `.hex` file (without the `.eep` file) from below?

#### Resources

* [Available Key Codes](https://github.com/jackhumbert/qmk_firmware/blob/master/doc/keycode.txt)
* [Some keymap information, but this is for `tmk`](https://github.com/tmk/tmk_core/blob/master/doc/keymap.md#31-momentary-switching)
* [Better layer information for `qmk`](http://qmk.fm/keyboards/hhkb/#switching-and-toggling-layers)

## Installation

Using the Teensy app, the "Teensy reset button" is the paperclip button in the upper right of the keyboard.

1. Drag and drop `firmware.eep` onto Teensy.
2. Press the Teensy reset button, this will trigger a reset and displays and error message saying the reset was too fast.
3. Drag and drop `firmware.hex` onto Teensy.
4. Click the "Auto" button in Teensy.
6. Press the Teensy reset button again.