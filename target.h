
#ifndef TARGETS_H
#define TARGETS_H


// Jupiter Ace
#ifdef __ACE__
#define WANT_GENCON1 0
#define WANT_GENCON2 1
#endif


// ZX Spectrum
#ifdef __SPECTRUM
#define WANT_GENCON1 0
#define WANT_GENCON2 1
#endif

// Sam Coupe
#ifdef __SAM__
#define WANT_GENCON1 0
#define WANT_GENCON2 1
#define SWITCH_MODE  4
#endif

// Mitsubishi Multi8
#ifdef __MULTI8__
#define WANT_GENCON1 0
#define WANT_GENCON2 1
#define SWITCH_MODE  2
#pragma redirect CRT_FONT=_font_8x8_bbc_system
#endif

#endif