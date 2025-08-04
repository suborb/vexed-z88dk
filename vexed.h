
#ifndef VEXED_H
#define VEXED_H

#include <stdint.h>
#include "target.h"

#define ARENA_W 12
#define ARENA_H 8

extern uint8_t  arena[];
extern uint8_t  last_arena[];
extern uint8_t  level;
extern uint8_t  level_par;
extern uint16_t moves;
extern uint8_t  cursor_offset;

#define DISPLAY_NORMAL 0
#define DISPLAY_ZAP1 1
#define DISPLAY_ZAP2 2
#define DISPLAY_ZAP3 3
#define DISPLAY_ZAP4 4

typedef struct {
   void (*display_ui)(void);
   void (*display_arena)(int display_mode);
   void (*cursor_erase)(void);
   void (*cursor_draw)(void);
} ddriver;

extern ddriver  display_driver;

typedef struct {
   const char *name;
   const char *solution;
   const uint8_t board[30];
} leveldefn;

extern void gencon1_init(void);
extern void gencon2_init(void);


#endif
