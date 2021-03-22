.PHONY: link unlink

ERGODOX = ../qmk_firmware/keyboards/ergodox_ez/keymaps/
PLANCK = ../qmk_firmware/keyboards/planck/keymaps/


link:
	ln -s ergodox_ez/robenkleene_macos $(ERGODOX)
	ln -s planck/robenkleene_macos $(PLANCK)

unlink:
	# [ ! -L "$ERGODOX" ] || rm -v "$ERGODOX"; 
	# [ ! -L "$PLANCK" ] || rm -v "$PLANCK"; 
	[ ! -L "$ERGODOX" ] || echo "DELETE"
	[ ! -L "$PLANCK" ] || echo "DELETE"
