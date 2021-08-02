# Ergodox

## New

    qmk compile -kb ergodox_ez -km robenkleene_macos

## Old

[robenkleene/qmk_firmware](https://github.com/robenkleene/qmk_firmware)

### Compiling

1. Compile

    `Source configure_path.fish` first

        make ergodox_ez:robenkleene_macos
        make ergodox_ez:robenkleene_macos2
        CFLAGS="-Wno-error=deprecated" make planck/ez:robenkleene_macos

2. This builds the firmware in `/qmk_firmware/.build`
3. It looks like this can be installed with just the `.hex` file (without the `.eep` file) from below?

### Notes

In source code, align key code columns with `column -t`.

### Installation

Using Teensy, the "Teensy reset button" is the paperclip button in the upper right of the keyboard.

1. Drag `ergodox_ez_robenkleene_macos.hex` onto Teensy.
2. Click the "Auto" button in Teensy.
3. Press the Teensy reset button.

#### Resources

* [Available Key Codes](https://github.com/jackhumbert/qmk_firmware/blob/master/doc/keycode.txt)
* [Some keymap information, but this is for `tmk`](https://github.com/tmk/tmk_core/blob/master/doc/keymap.md#31-momentary-switching)
* [Better layer information for `qmk`](http://qmk.fm/keyboards/hhkb/#switching-and-toggling-layers)
* [Gary Bernhardt's Layout](https://www.massdrop.com/configurator/ergodox?referer=FM779F&hash=7228f293c544f8457acada6e52aaa30d)
