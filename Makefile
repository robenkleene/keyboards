.PHONY: link unlink

NAME = robenkleene_macos
ERGODOX_SRC = $(shell pwd)/ergodox_ez/$(NAME)
PLANCK_SRC = $(shell pwd)/planck/$(NAME)
ERGODOX_DIR = ../qmk_firmware/keyboards/ergodox_ez/keymaps/
PLANCK_DIR = ../qmk_firmware/keyboards/planck/keymaps/
ERGODOX_DST = $(ERGODOX_DIR)$(NAME)
PLANCK_DST = $(PLANCK_DIR)$(NAME)

link:
	ln -s $(ERGODOX_SRC) $(ERGODOX_DIR)
	ln -s $(PLANCK_SRC) $(PLANCK_DIR)

unlink:
	[ ! -L "$(ERGODOX_DST)" ] || rm -v "$(ERGODOX_DST)"
	[ ! -L "$(PLANCK_DST)" ] || rm -v "$(PLANCK_DST)"
