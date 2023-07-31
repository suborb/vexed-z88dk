
#ifndef VEXED_H
#define VEXED_H

#include <stdint.h>

#define ARENA_W 12
#define ARENA_H 8

extern uint8_t  arena[];
extern uint8_t  level;
extern uint8_t  level_par;
extern uint16_t moves;
extern uint8_t  cursor_offset;

typedef struct {
   void (*display_ui)();
   void (*display_arena)();
   void (*cursor_erase)();
   void (*cursor_draw)();
} ddriver;

extern ddriver  display_driver;

typedef struct {
   const char *name;
   const char *solution;
   const uint8_t board[30];
} leveldefn;

extern void gencon1_init();


#endif
