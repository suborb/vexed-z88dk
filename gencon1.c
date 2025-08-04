// Display driver for 1x1 gencon


#include <conio.h>
#include <sys/ioctl.h>


#include "vexed.h"

#if WANT_GENCON1 == 1

#include "udgs8.h"


#pragma printf "%+2d"

static void display_arena(int mode);
static void display_ui(void);
static void cursor_erase(void);
static void cursor_draw(void);

static ddriver driver = {
  .display_ui = display_ui,
  .display_arena = display_arena,
  .cursor_erase = cursor_erase,
  .cursor_draw = cursor_draw,
};

static const char *asciz[] = {

    ' ',        // Blank
    '#',        // Wall
    '@',        // Bolt
    'o',        // Circle
    'S',        // Diamond
    'H',        // Chequerboard,
    'X',        // Diagonal cross,
    '8',        // Bow tie
    '+',       // Square cross
};

static int tile_bg[] = {
    BLACK,	    // Blank
    BLACK,      // Wall
    YELLOW,     // Bolt
    BLUE,       // Circle
    CYAN,       // Diamond
    BLACK,      // Chequerboard,
    BLACK,      // Diagonal cross,
    BLUE,       // Bow tie
    BLACK,      // Square cross
};

static int tile_fg[] = {
    WHITE,	    // Blank
    CYAN,       // Wall
    RED ,       // Bolt
    WHITE,      // Circle
    RED,        // Diamond
    WHITE,      // Chequerboard,
    GREEN,      // Diagonal cross,
    MAGENTA,    // Bow tie
    RED,        // Square cross
};

static int  bx;
static int  by;
static int  hasudg;


void gencon1_init()
{
    unsigned int   w,h, caps;


#ifdef SWITCH_MODE
    {
        int mode = SWITCH_MODE;
        console_ioctl(IOCTL_GENCON_SET_MODE, &mode);
    }
#endif

    console_ioctl(IOCTL_GENCON_GET_CAPS, &caps);

    hasudg = 0;
    if ( caps & CAP_GENCON_UDGS ) {
        void *param = (void *)&udgs;
        console_ioctl(IOCTL_GENCON_SET_UDGS, &param);
        hasudg = 1;
    }

#ifdef __SPECTRUM
    cputs("\x01 ");
#endif
    textbackground(BLACK);
    textcolour(WHITE);
    bordercolor(BLACK);
    clrscr();
    screensize(&w,&h);
    bx = (w - ARENA_W) / 2;
    by = (h - ARENA_H) / 2;

    display_driver = driver;
}

static void display_ui(void)
{
    gotoxy(0,0);
    cprintf("Level: % 2d Moves: %d Par: %d    ",level+1,moves, level_par);
    fputc_cons('\n');
}

static void display_arena(int mode)
{
    uint8_t *ptr = arena;
    uint8_t *lptr = last_arena;
    uint8_t  x,y;

    for ( y = 0; y < ARENA_H; y++ ) {
        for ( x = 0; x < ARENA_W; x++ ) {
            int t = *ptr & 127;
            if ( t != *lptr || *ptr & 128 ) {
                gotoxy(bx+x,by+y);
                if ( *ptr & 128 ) {
                    textbackground(tile_bg[t] >> mode );
                    textcolour(tile_fg[t] >> mode);
                } else {
                    textbackground(tile_bg[t] );
                    textcolour(tile_fg[t]);
                }
                if ( hasudg ) {
                    fputc_cons(t|128);
                } else {
                    fputc_cons(asciz[t]);
                }
                *lptr = *ptr;
            }
            ++ptr;
            ++lptr;
        }
    }
    textbackground(BLACK);
    textcolour(WHITE);
}

static void cursor_erase(void)
{
   int t = arena[cursor_offset];
   gotoxy(bx + cursor_offset % ARENA_W, by + cursor_offset / ARENA_W);
   fputc_cons(hasudg ? t|128 : asciz[t]);
}

static void cursor_draw(void)
{
   int t = arena[cursor_offset];
   gotoxy(bx + cursor_offset % ARENA_W, by + cursor_offset / ARENA_W);
   fputc_cons(27); fputc_cons('p');
   fputc_cons(hasudg ? t|128 : asciz[t]);
   fputc_cons(27); fputc_cons('q');
}

#endif
