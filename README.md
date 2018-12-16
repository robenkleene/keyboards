# Ergodox

## Firmware

### `qmk_firmware`

[robenkleene/qmk_firmware](https://github.com/robenkleene/qmk_firmware)

#### Compiling

1. Compile

	make ergodox_ez:robenkleene_macos 

2. This builds the firmware in `/qmk_firmware/.build`
3. It looks like this can be installed with just the `.hex` file (without the `.eep` file) from below?

### Installation

Using Teensy, the "Teensy reset button" is the paperclip button in the upper right of the keyboard.

1. Drag `ergodox_ez_robenkleene_osx.hex` onto Teensy.
2. Click the "Auto" button in Teensy.
3. Press the Teensy reset button.

#### Resources

* [Available Key Codes](https://github.com/jackhumbert/qmk_firmware/blob/master/doc/keycode.txt)
* [Some keymap information, but this is for `tmk`](https://github.com/tmk/tmk_core/blob/master/doc/keymap.md#31-momentary-switching)
* [Better layer information for `qmk`](http://qmk.fm/keyboards/hhkb/#switching-and-toggling-layers)
* [Gary Bernhardt's Layout](https://www.massdrop.com/configurator/ergodox?referer=FM779F&hash=7228f293c544f8457acada6e52aaa30d)
