.PHONY: link unlink setup

NAME = robenkleene_macos
NAME2 = robenkleene_macos2

ERGODOX_SRC = $(shell pwd)/ergodox_ez/$(NAME)
ERGODOX2_SRC = $(shell pwd)/ergodox_ez/$(NAME2)
MOONLANDER_SRC = $(shell pwd)/moonlander/$(NAME)
PLANCK_SRC = $(shell pwd)/planck/$(NAME)
VOYAGER_SRC = $(shell pwd)/voyager/$(NAME)
LILY_SRC = $(shell pwd)/lily/$(NAME)

ERGODOX_DIR = ../qmk_firmware/keyboards/ergodox_ez/keymaps/
PLANCK_DIR = ../qmk_firmware/keyboards/planck/keymaps/
MOONLANDER_DIR = ../qmk_firmware/keyboards/moonlander/keymaps/
VOYAGER_DIR = ../qmk_firmware/keyboards/zsa/voyager/keymaps/
LILY_DIR = ../qmk_firmware/keyboards/lily58/keymaps/

ERGODOX_DST = $(ERGODOX_DIR)$(NAME)
ERGODOX2_DST = $(ERGODOX_DIR)$(NAME2)
MOONLANDER_DST = $(MOONLANDER_DIR)$(NAME)
PLANCK_DST = $(PLANCK_DIR)$(NAME)
VOYAGER_DST = $(VOYAGER_DIR)$(NAME)
LILY_DST = $(LILY_DIR)$(NAME)

compile: compile_ergodox compile_moonlander compile_voyager

compile_voyager:
	qmk compile -kb zsa/voyager -km robenkleene_macos

compile_ergodox:
	qmk compile -kb ergodox_ez -km robenkleene_macos2

compile_moonlander:
	qmk compile -kb moonlander -km robenkleene_macos

compile_lily:
	qmk compile -kb lily58 -km robenkleene_macos

setup:
	qmk setup -H ../qmk_firmware/

link:
	[ -L "$(ERGODOX_DST)" ] || ln -s $(ERGODOX_SRC) $(ERGODOX_DIR)
	[ -L "$(ERGODOX2_DST)" ] || ln -s $(ERGODOX2_SRC) $(ERGODOX_DIR)
	[ -L "$(PLANCK_DST)" ] || ln -s $(PLANCK_SRC) $(PLANCK_DIR)
	[ -L "$(MOONLANDER_DST)" ] || ln -s $(MOONLANDER_SRC) $(MOONLANDER_DIR)
	[ -L "$(VOYAGER_DST)" ] || ln -s $(VOYAGER_SRC) $(VOYAGER_DIR)
	[ -L "$(LILY_DST)" ] || ln -s $(LILY_SRC) $(LILY_DIR)

unlink:
	[ ! -L "$(ERGODOX_DST)" ] || rm -v "$(ERGODOX_DST)"
	[ ! -L "$(ERGODOX2_DST)" ] || rm -v "$(ERGODOX2_DST)"
	[ ! -L "$(PLANCK_DST)" ] || rm -v "$(PLANCK_DST)"
	[ ! -L "$(MOONLANDER_DST)" ] || rm -v "$(MOONLANDER_DST)"
	[ ! -L "$(VOYAGER_DST)" ] || rm -v "$(VOYAGER_DST)"
	[ ! -L "$(LILY_DST)" ] || rm -v "$(LILY_DST)"
