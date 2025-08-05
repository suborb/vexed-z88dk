

TARGETS = zx sam ace multi8 pc6001_rom

LDFLAGS_vexed = -lndos 
CFLAGS_vexed = --generic-console

APPNAME = vexed.bin
COMMON_SRCS = $(wildcard *.c) $(wildcard *.asm)


DEPS_C_vexed.c = target.h vexed.h

include ${ZCCCFG}/../../support/multitarget_build/Makefile
