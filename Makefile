.PHONY: link unlink

NAME = robenkleene_macos
NAME2 = robenkleene_macos2
ERGODOX_SRC = $(shell pwd)/ergodox_ez/$(NAME)
ERGODOX2_SRC = $(shell pwd)/ergodox_ez/$(NAME2)
MOONLANDER_SRC = $(shell pwd)/ergodox_ez/$(NAME2)
PLANCK_SRC = $(shell pwd)/planck/$(NAME)
ERGODOX_DIR = ../qmk_firmware/keyboards/ergodox_ez/keymaps/
PLANCK_DIR = ../qmk_firmware/keyboards/planck/keymaps/
MOONLANDER_DIR = ../qmk_firmware/keyboards/moonlander/keymaps/
ERGODOX_DST = $(ERGODOX_DIR)$(NAME)
ERGODOX2_DST = $(ERGODOX_DIR)$(NAME2)
MOONLANDER_DST = $(MOONLANDER_DIR)$(NAME2)
PLANCK_DST = $(PLANCK_DIR)$(NAME)

link:
	[ -L "$(ERGODOX_DST)" ] || ln -s $(ERGODOX_SRC) $(ERGODOX_DIR)
	[ -L "$(ERGODOX2_DST)" ] || ln -s $(ERGODOX2_SRC) $(ERGODOX_DIR)
	[ -L "$(PLANCK_DST)" ] || ln -s $(PLANCK_SRC) $(PLANCK_DIR)
	[ -L "$(MOONLANDER_DST)" ] || ln -s $(MOONLANDER_SRC) $(MOONLANDER_DIR)

unlink:
	[ ! -L "$(ERGODOX_DST)" ] || rm -v "$(ERGODOX_DST)"
	[ ! -L "$(ERGODOX2_DST)" ] || rm -v "$(ERGODOX_DST)"
	[ ! -L "$(PLANCK_DST)" ] || rm -v "$(PLANCK_DST)"
	[ ! -L "$(MOONLANDER_DST)" ] || rm -v "$(MOONLANDER_DST)"
