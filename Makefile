_NAME = Gradebook
_DIR = ./bin
_FILES = ./src/*.cpp

_INCLUDES:= ./src/include/*.cpp
_LINKERS:= ./src/linker/*.cpp

build:
	clang $(_FILES) -o $(_DIR)/$(_NAME)