

TARGETS = zx sam ace multi8

LDFLAGS_vexed = -lndos 

APPNAME = vexed.bin
COMMON_SRCS = $(wildcard *.c) $(wildcard *.asm)


include ${ZCCCFG}/../../support/multitarget_build/Makefile
