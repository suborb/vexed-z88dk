
#ifndef TARGETS_H
#define TARGETS_H


// Jupiter Ace
#ifdef __ACE__
// +ace hasn't enough free UDGs to use double sized
#define WANT_GENCON1 1
#define WANT_GENCON2 0
#endif

#ifdef __PC6001__
#define WANT_GENCON1 0
#define WANT_GENCON2 1
#define SWITCH_MODE 2
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
#endif

#endif