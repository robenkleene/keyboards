.PHONY: link unlink setup

NAME = robenkleene_macos
NAME2 = robenkleene_macos2

ERGODOX_SRC = $(shell pwd)/ergodox_ez/$(NAME)
ERGODOX2_SRC = $(shell pwd)/ergodox_ez/$(NAME2)
MOONLANDER_SRC = $(shell pwd)/moonlander/$(NAME)
PLANCK_SRC = $(shell pwd)/planck/$(NAME)
VOYAGER_SRC = $(shell pwd)/voyager/$(NAME)
IRIS_SRC = $(shell pwd)/iris/$(NAME)

ERGODOX_DIR = ../qmk_firmware/keyboards/ergodox_ez/keymaps/
PLANCK_DIR = ../qmk_firmware/keyboards/planck/keymaps/
MOONLANDER_DIR = ../qmk_firmware/keyboards/zsa/moonlander/keymaps/
VOYAGER_DIR = ../qmk_firmware/keyboards/zsa/voyager/keymaps/
IRIS_DIR = ../qmk_firmware/keyboards/keebio/iris/keymaps/

ERGODOX_DST = $(ERGODOX_DIR)$(NAME)
ERGODOX2_DST = $(ERGODOX_DIR)$(NAME2)
MOONLANDER_DST = $(MOONLANDER_DIR)$(NAME)
PLANCK_DST = $(PLANCK_DIR)$(NAME)
VOYAGER_DST = $(VOYAGER_DIR)$(NAME)
IRIS_DST = $(IRIS_DIR)$(NAME)

compile: compile_ergodox compile_moonlander compile_voyager

compile_voyager:
	echo "To compile Voyager, make sure the `voyager` `qmk_firmware` branch is checked out"
	qmk compile -kb zsa/voyager -km robenkleene_macos

compile_ergodox:
	qmk compile -kb ergodox_ez -km robenkleene_macos2

compile_moonlander:
	qmk compile -kb moonlander -km robenkleene_macos

compile_iris:
	qmk compile -kb keebio/iris/rev8 -km robenkleene_macos

setup:
	qmk setup -H ../qmk_firmware/

link:
	[ -L "$(ERGODOX_DST)" ] || ln -s $(ERGODOX_SRC) $(ERGODOX_DIR)
	[ -L "$(ERGODOX2_DST)" ] || ln -s $(ERGODOX2_SRC) $(ERGODOX_DIR)
	[ -L "$(PLANCK_DST)" ] || ln -s $(PLANCK_SRC) $(PLANCK_DIR)
	[ -L "$(MOONLANDER_DST)" ] || ln -s $(MOONLANDER_SRC) $(MOONLANDER_DIR)
	[ -L "$(VOYAGER_DST)" ] || ln -s $(VOYAGER_SRC) $(VOYAGER_DIR)
	[ -L "$(IRIS_DST)" ] || ln -s $(IRIS_SRC) $(IRIS_DIR)

unlink:
	[ ! -L "$(ERGODOX_DST)" ] || rm -v "$(ERGODOX_DST)"
	[ ! -L "$(ERGODOX2_DST)" ] || rm -v "$(ERGODOX2_DST)"
	[ ! -L "$(PLANCK_DST)" ] || rm -v "$(PLANCK_DST)"
	[ ! -L "$(MOONLANDER_DST)" ] || rm -v "$(MOONLANDER_DST)"
	[ ! -L "$(VOYAGER_DST)" ] || rm -v "$(VOYAGER_DST)"
	[ ! -L "$(IRIS_DST)" ] || rm -v "$(IRIS_DST)"
