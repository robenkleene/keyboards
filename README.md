# Ergodox

## Firmware

The firmware is now stored at [robenkleene/ergodox-firmware](https://github.com/robenkleene/ergodox-firmware).

### Compiling

* Just type `make` in the Firmware directory, note that this generates a `build/` folder that should not be checked in.
* New layouts are created by copying `qwerty-kinesis-mod.h` and `qwerty-kinesis-mod.c` which are the default layouts.
* Which layout to compile is set in [src/makefile-options](https://github.com/robenkleene/ergodox-firmware/blob/master/src/makefile-options).
* [`src/lib/usb/usage-page/keyboard--short-names.h`](https://github.com/robenkleene/ergodox-firmware/blob/master/src/lib/usb/usage-page/keyboard--short-names.h)
* Lining up the keys in code is done by piping the comma-delimited list through `column -t`.

### Installing

1. Download and run the [Teensy Loader Application](https://www.pjrc.com/teensy/loader.html).
2. Press and release the "Teensy reset button" (paperclip button in the upper right on the right hand keyboard).
3. In Teensy, click the "Auto" button on the upper right hand.
4. Drag and drop the `.hex` file onto Teensy.
5. Press and release the Teensy reset button again.

## Resources

* [Nice use of ASCII here](https://github.com/grota/tmk_keyboard/blob/grota_layout/keyboard/ergodox/keymap_grota.h#L25)