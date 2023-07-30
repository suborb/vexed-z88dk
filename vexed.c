/*
 * Vexed - a Puzznic clone
 */



#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
#include <sys/ioctl.h>

#include "levels.h"
#include "vexed.h"


#ifndef USE_JOYSTICK
#define K_UP 'Q'
#define K_DOWN 'A'
#define K_LEFT 'O'
#define K_RIGHT 'P'
#define K_SELECT ' '
#endif



static void handle_input(void);
static void check_select(void);
static void move_block(int16_t offset);
static void check_move(int16_t offset);
static void dropall(void);
static int check_dropall(void);
static void check_blah(void);
static int check_match(int16_t noffset, uint8_t seeking);
static void unpack_level(void);
static void cursor_erase(void);
static void cursor_draw(void);
static void draw_arena(void);

static uint8_t  selected;
       uint8_t  level;
       int16_t  cursor_offset;
       uint8_t  arena[ARENA_W * ARENA_H];
       uint8_t  last_arena[ARENA_W * ARENA_H];
       ddriver  display_driver;


static const uint8_t frame[] = {
    10,14,14,14,14,14,14,14,14,14,14,11,
    15,00,00,00,00,00,00,00,00,00,00,15,
    15,00,00,00,00,00,00,00,00,00,00,15,
    15,00,00,00,00,00,00,00,00,00,00,15,
    15,00,00,00,00,00,00,00,00,00,00,15,
    15,00,00,00,00,00,00,00,00,00,00,15,
    15,00,00,00,00,00,00,00,00,00,00,15,
    12,16,16,16,16,16,16,16,16,16,16,13,
};

static void handle_input(void)
{
    if ( selected ) {
        switch (toupper(getk())) {
        case K_RIGHT:
            move_block(1);
            break;
        case K_LEFT:
            move_block(-1);
            break;
        case 0:
            return;
        default:
            selected = 0;
            break;
        }
    } else {
	int c = getk();
        switch (toupper(c)) {
        case K_DOWN:
            check_move(ARENA_W);
            break;
        case K_UP:
            check_move(-ARENA_W);
            break;
        case K_RIGHT:
            check_move(1);
            break;
        case K_LEFT:
            check_move(-1);
            break;
        case K_SELECT:
            check_select();
        }
    }
}

static void check_select(void)
{
    uint8_t ncell;

    ncell = arena[cursor_offset] & 0x7f;

    if ( ncell < 2 || ncell >= 10 ) {
        return;
    }
    selected = 1;
}

static void move_block(int16_t offset)
{
    int16_t noffset = cursor_offset + offset;
    uint8_t ncell;

    // If it's out of bounds then we can't move
    if ( noffset < 0 || noffset > (ARENA_W * ARENA_H - 1) ) {
        return;
    }
    ncell = arena[noffset];

    if ( ncell != 0 ) return;

    cursor_erase();
    arena[noffset] = arena[cursor_offset];
    arena[cursor_offset] = 0;
    cursor_offset = noffset;
    dropall();
    check_blah();
    draw_arena();
    cursor_draw();
}


static void check_move(int16_t offset)
{
    int16_t noffset = cursor_offset + offset;
    uint8_t ncell;

    // If it's out of bounds then we can't move
    if ( noffset < 0 || noffset > (ARENA_W * ARENA_H - 1) ) {
        return;
    }
    ncell = arena[noffset] & 0x7f;

    if ( ncell == 1 || ncell >= 10 ) {
        return;
    }
    cursor_erase();
    cursor_offset = noffset;
    cursor_draw();
}

static void dropall(void)
{
    while ( check_dropall()) {
       selected = 0;
       draw_arena();
       msleep(100);
    }
}

static int check_dropall(void)
{
   int done = 0;
   int i;

   for ( i = sizeof(arena) - (ARENA_W * 2); i != 0; i-- ) {
      uint8_t bl = arena[i];

      if ( bl < 2 || bl > 9 ) continue;

      if ( arena[i + ARENA_W] == 0 ) {
          arena[i + ARENA_W] = arena[i];
          arena[i] = 0;
          ++done;
      }
   }
   return done;
}


static void check_blah(void)
{
    int c;

    do {
       int d = 0;
       c = 0;
       for ( int i = 0; i < sizeof(arena); i++) arena[i] &= 0x7f;

       for ( int offset = sizeof(arena) ; offset >= ARENA_W; offset-- ) {
          int tile = arena[offset];
          if ( tile < 2 || tile >= 10 ) continue;
          d = check_match(offset, tile);
          if ( d > 1 ) {
              for ( int i = 0; i < sizeof(arena); i++) {
                  if ( arena[i] & 0x80 ) arena[i] = 0;
              }
              draw_arena();
              dropall();
              c = 1;
              selected = 0;
          } else arena[offset] &= 0x7f;
       }
    } while ( c != 0 );
    for ( int i = 0; i < sizeof(arena); i++) {
	arena[i] &= 0x7f;
        if (arena[i] >= 2 && arena[i] < 10 ) c = 1;
    }
    if ( c == 0 ) {
        level++;
        unpack_level();
    }

    return;
}

static int check_match(int16_t noffset, uint8_t seeking)
{
__asm
	ld	a,r
	out	(254),a
__endasm;
    if ( noffset < 0 || noffset > (ARENA_W * ARENA_H - 1) ) {
        return 0;
    }

    if ( arena[noffset] != seeking ) {
        return 0;
    }
    arena[noffset] |= 0x80;
    return 1 + check_match(noffset -1, seeking) + check_match(noffset + 1, seeking) +
           check_match(noffset + ARENA_W, seeking) + check_match(noffset - ARENA_W, seeking);
}

static void unpack_level(void)
{
    const uint8_t *s;
    uint8_t  x, y;

    memset(last_arena,255,sizeof(last_arena));
    memcpy(arena, frame, sizeof(frame));
    s = levels[level];

    for ( y = 1; y < ARENA_H-1; y++ ) {
        for ( x = 1 ; x < ARENA_W-1; x+= 2 ) {
            int offs = y * ARENA_W + x;

            arena[offs] = *s >> 4;
            arena[offs+1] = *s & 0x0f;
            ++s;
        }
    }

    // Find the start position
    s = arena + ARENA_W;
    while ( *s )
        s++;
    cursor_offset = s - arena;

}



static void cursor_erase(void)
{
   display_driver.cursor_erase();
}

static void cursor_draw(void)
{
   display_driver.cursor_draw();
}

static void draw_arena(void)
{
    display_driver.display_arena();
}

int main(void)
{
  gencon1_init();
  memset(last_arena,255,sizeof(last_arena));

  level = 0;
  unpack_level();
  draw_arena(); 
  cursor_draw(); 
  while(1) {
    handle_input();
    msleep(50);
  }


}
