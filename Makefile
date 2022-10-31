.ONESHELL:
.RECIPEPREFIX = >

export VBCC := vbcc
export PATH := $(PATH):bin

SRC=$(wildcard src/*.c)
OBJECTS=$(SRC:.c=.o)
TARGET=amiga/hd/fart

CC=vc +kick13
CFLAGS=-c99 -O2 -v -speed -DAMIGA -DCPU=68000 -static
LDFLAGS=-lamiga -lauto

all: clean $(TARGET) crunch run

clean:
> rm -f $(TARGET) $(OBJECTS)

crunch:
> shrinkler $(TARGET) $(TARGET)

$(TARGET): $(OBJECTS)
> $(CC) $(CFLAGS) $^ -c -o $@
> $(CC) $^ $(LDFLAGS) -o $@

run:
> fs-uae --kickstart_file=amiga/rom/a500.rom --amiga_model=a500 --hard_drive_0=amiga/hd --window_width=640 --window_height=512 --floppy_drive_0_sounds=off --floppy_drive_1_sounds=off --initial_input_grab=off --console_debugger=1 --end_config=1
