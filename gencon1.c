// Display driver for 1x1 gencon


#include <conio.h>
#include <sys/ioctl.h>


#include "vexed.h"
#include "udgs.h"


#pragma printf "%+2d"

static void display_arena(void);
static void display_ui(void);
static void cursor_erase(void);
static void cursor_draw(void);

static ddriver driver = {
  .display_ui = display_ui,
  .display_arena = display_arena,
  .cursor_erase = cursor_erase,
  .cursor_draw = cursor_draw,
};

static int  bx;
static int  by;


void gencon1_init()
{
    unsigned int   w,h;
    void *param = (void *)&udgs;
    console_ioctl(IOCTL_GENCON_SET_UDGS, &param);

#ifdef SWITCH_MODE
    {
        int mode = SWITCH_MODE;
        console_ioctl(IOCTL_GENCON_SET_MODE, &mode);
    }
#endif

#ifdef __SPECTRUM
    cputs("\x01 ");
#endif
    clrscr();
    screensize(&w,&h);
    bx = (w - ARENA_W) / 2;
    by = (h - ARENA_H) / 2;

    display_driver = driver;
}

static void display_ui()
{
    gotoxy(0,0);
    cprintf("Level: % 2d Moves: %d Par: %d",level,moves, level_par);
}

static void display_arena()
{
    uint8_t *ptr = arena;
    uint8_t  x,y;

    for ( y = 0; y < ARENA_H; y++ ) {
       gotoxy(bx,by+y);
       for ( x = 0; x < ARENA_W; x++ ) {
          fputc_cons(*ptr + 128);
           ++ptr;
       }
    }
}

static void cursor_erase(void)
{
   gotoxy(bx + cursor_offset % ARENA_W, by + cursor_offset / ARENA_W);
   fputc_cons(arena[cursor_offset] + 128);
}

static void cursor_draw(void)
{
   gotoxy(bx + cursor_offset % ARENA_W, by + cursor_offset / ARENA_W);
   fputc_cons(27); fputc_cons('p');
   fputc_cons(arena[cursor_offset] + 128);
   fputc_cons(27); fputc_cons('q');
}
