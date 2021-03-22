.PHONY: link unlink

NAME = robenkleene_macos
ERGODOX_DIR = ../qmk_firmware/keyboards/ergodox_ez/keymaps/
PLANCK_DIR = ../qmk_firmware/keyboards/planck/keymaps/
ERGODOX = $(ERGODOX_DIR)$(NAME)
PLANCK = $(PLANCK_DIR)$(NAME)

link:
	ln -s ergodox_ez/$(NAME) $(ERGODOX_DIR)
	ln -s planck/$(NAME) $(PLANCK_DIR)

unlink:
	[ ! -L "$(ERGODOX)" ] || rm -v "$(ERGODOX)"
	[ ! -L "$(PLANCK)" ] || rm -v "$(PLANCK)"
