.PHONY: link unlink setup

NAME = robenkleene_macos
NAME2 = robenkleene_macos2
ERGODOX_SRC = $(shell pwd)/ergodox_ez/$(NAME)
ERGODOX2_SRC = $(shell pwd)/ergodox_ez/$(NAME2)
MOONLANDER_SRC = $(shell pwd)/moonlander/$(NAME)
PLANCK_SRC = $(shell pwd)/planck/$(NAME)
VOYAGER_SRC = $(shell pwd)/voyager/$(NAME)
ERGODOX_DIR = ../qmk_firmware/keyboards/ergodox_ez/keymaps/
PLANCK_DIR = ../qmk_firmware/keyboards/planck/keymaps/
MOONLANDER_DIR = ../qmk_firmware/keyboards/moonlander/keymaps/
VOYAGER_DIR = ../qmk_firmware/keyboards/zsa/voyager/keymaps/
ERGODOX_DST = $(ERGODOX_DIR)$(NAME)
ERGODOX2_DST = $(ERGODOX_DIR)$(NAME2)
MOONLANDER_DST = $(MOONLANDER_DIR)$(NAME)
PLANCK_DST = $(PLANCK_DIR)$(NAME)
VOYAGER_DST = $(VOYAGER_DIR)$(NAME)

compile:
	qmk compile -kb ergodox_ez -km robenkleene_macos2
	qmk compile -kb moonlander -km robenkleene_macos
	qmk compile -kb zsa/voyager -km robenkleene_macos

setup:
	qmk setup -H ../qmk_firmware/

link:
	[ -L "$(ERGODOX_DST)" ] || ln -s $(ERGODOX_SRC) $(ERGODOX_DIR)
	[ -L "$(ERGODOX2_DST)" ] || ln -s $(ERGODOX2_SRC) $(ERGODOX_DIR)
	[ -L "$(PLANCK_DST)" ] || ln -s $(PLANCK_SRC) $(PLANCK_DIR)
	[ -L "$(MOONLANDER_DST)" ] || ln -s $(MOONLANDER_SRC) $(MOONLANDER_DIR)
	[ -L "$(VOYAGER_DST)" ] || ln -s $(VOYAGER_SRC) $(VOYAGER_DIR)

unlink:
	[ ! -L "$(ERGODOX_DST)" ] || rm -v "$(ERGODOX_DST)"
	[ ! -L "$(ERGODOX2_DST)" ] || rm -v "$(ERGODOX2_DST)"
	[ ! -L "$(PLANCK_DST)" ] || rm -v "$(PLANCK_DST)"
	[ ! -L "$(MOONLANDER_DST)" ] || rm -v "$(MOONLANDER_DST)"
	[ ! -L "$(VOYAGER_DST)" ] || rm -v "$(VOYAGER_DST)"
