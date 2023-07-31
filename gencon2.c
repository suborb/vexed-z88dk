// Display driver for 1x1 gencon


#include <conio.h>
#include <sys/ioctl.h>


#include "vexed.h"
#include "udgs16.h"


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

static int  bx;
static int  by;

static int tile_bg[] = {
    BLACK,	// Blank
    BLACK,       // Wall
    YELLOW,      // Bolt
    BLUE,       // Circle
    CYAN,         // Diamond
    BLACK,       // Chequerboard,
    BLACK,       // Diagonal cross,
    BLUE,     // Bow tie
    BLACK,         // Square cross
};

static int tile_fg[] = {
    WHITE,	// Blank
    CYAN,       // Wall
    RED ,      // Bolt
    WHITE,       // Circle
    RED,         // Diamond
    WHITE,       // Chequerboard,
    GREEN,       // Diagonal cross,
    MAGENTA,     // Bow tie
    RED,         // Square cross
};


void gencon2_init()
{
    unsigned int   w,h;
    void *param = (void *)&udg16;
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
    textbackground(BLACK);
    textcolour(WHITE);
    clrscr();
    screensize(&w,&h);
    bx = (w - ARENA_W * 2) / 2;
    by = (h - ARENA_H * 2) / 2;

    display_driver = driver;
}

static void display_ui(void)
{
    gotoxy(0,0);
    cprintf("Level: % 2d Moves: %d Par: %d",level,moves, level_par);
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
            int base = (t * 4) + 128;
            gotoxy(bx+x*2,by+y*2);
            if ( *ptr & 128 ) {
                textbackground(tile_bg[t] >> mode );
                textcolour(tile_fg[t] >> mode);
            } else {
                textbackground(tile_bg[t] );
                textcolour(tile_fg[t]);
            }
            fputc_cons(base);
            fputc_cons(base+1);
            gotoxy(bx+x*2,by+1+y*2);
            fputc_cons(base+2);
            fputc_cons(base+3);
            *lptr = *ptr;
        }
        ++ptr;
        ++lptr;
        }
    }
}

static void cursor_erase(void)
{
    int t = arena[cursor_offset];
    int base = (t * 4) + 128;
    gotoxy(bx + (cursor_offset % ARENA_W) *2, by + (cursor_offset / ARENA_W) * 2);
    textbackground(tile_bg[t]);
    textcolour(tile_fg[t]);
    fputc_cons(base);
    fputc_cons(base+1);
    gotoxy(bx + (cursor_offset % ARENA_W) *2, by + 1 + (cursor_offset / ARENA_W) * 2);
    fputc_cons(base+2);
    fputc_cons(base+3);
}

static void cursor_draw(void)
{
    int t = arena[cursor_offset];
    int base = (t * 4) + 128;
    gotoxy(bx + (cursor_offset % ARENA_W) *2, by + (cursor_offset / ARENA_W) * 2);
    fputc_cons(27); fputc_cons('p');
    textbackground(tile_bg[t]);
    textcolour(tile_fg[t]);
    fputc_cons(base);
    fputc_cons(base+1);
    gotoxy(bx + (cursor_offset % ARENA_W) *2, by + 1 + (cursor_offset / ARENA_W) * 2);
    fputc_cons(base+2);
    fputc_cons(base+3);
    fputc_cons(27); fputc_cons('q');
}
