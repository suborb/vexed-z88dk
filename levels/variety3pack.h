#include "vexed.h"
static const leveldefn variety3pack[] = {
  // Level 0: Board: 0/10/10/10/4df~3/1~b~ah~~2/1fad2bh2/10
  {
    .name = "Two Of Spades",
    .solution = "CffFeEEfDffEFfEfDgbFcFdFeFGegFfFFfEfDfbG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x57, 0x01, 0x11, 
        0x10, 0x30, 0x29, 0x00, 0x11, 
        0x17, 0x25, 0x11, 0x39, 0x11, 
    },
  },
  // Level 1: Board: 0/1e~e~2~d1/2f1~2~2/1~c1~2~2/1~1~~~1~2/1~efc~1~2/1~2de~~2/10
  {
    .name = "Two Pair",
    .solution = "dBeEIbeGfGbBcBdFdBEeEfDfCfCdCdbFcFdF",
    .board = {
        0x16, 0x06, 0x01, 0x10, 0x51, 
        0x11, 0x71, 0x01, 0x10, 0x11, 
        0x10, 0x41, 0x01, 0x10, 0x11, 
        0x10, 0x10, 0x00, 0x10, 0x11, 
        0x10, 0x67, 0x40, 0x10, 0x11, 
        0x10, 0x11, 0x56, 0x00, 0x11, 
    },
  },
  // Level 2: Board: 0/1~ae6/1~8/1~4a3/1~3~g3/1~~~h~h3/1e1~f~g~f1/10
  {
    .name = "Royal Flush",
    .solution = "GeeFCbDbCbbFEgcFdFeGdGeGfGgG",
    .board = {
        0x10, 0x26, 0x11, 0x11, 0x11, 
        0x10, 0x11, 0x11, 0x11, 0x11, 
        0x10, 0x11, 0x11, 0x21, 0x11, 
        0x10, 0x11, 0x10, 0x81, 0x11, 
        0x10, 0x00, 0x90, 0x91, 0x11, 
        0x16, 0x10, 0x70, 0x80, 0x71, 
    },
  },
  // Level 3: Board: 0/3ba5/2~d6/2~7/1~g~6/1a1~6/1fbdf~g3/10
  {
    .name = "Jack Of Hearts",
    .solution = "DcCecEDccEbGcGEbDccEbGbGcGdGeG",
    .board = {
        0x11, 0x13, 0x21, 0x11, 0x11, 
        0x11, 0x05, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x10, 0x80, 0x11, 0x11, 0x11, 
        0x12, 0x10, 0x11, 0x11, 0x11, 
        0x17, 0x35, 0x70, 0x81, 0x11, 
    },
  },
  // Level 4: Board: 0/7~e1/4c~~~h1/6~~2/5g~~2/3~fc~h2/1f~~e1~g2/10
  {
    .name = "King Of Hearts",
    .solution = "fEEfbGIbIcfFHfGfFfeCfC",
    .board = {
        0x11, 0x11, 0x11, 0x10, 0x61, 
        0x11, 0x11, 0x40, 0x00, 0x91, 
        0x11, 0x11, 0x11, 0x00, 0x11, 
        0x11, 0x11, 0x18, 0x00, 0x11, 
        0x11, 0x10, 0x74, 0x09, 0x11, 
        0x17, 0x00, 0x61, 0x08, 0x11, 
    },
  },
  // Level 5: Board: 0/10/5e4/4~g~3/4~1~3/1~ca~1~g2/1e1c~~hah1/10
  {
    .name = "Queen Of Clubs",
    .solution = "fDGgFgdFcFFdEgEfDfCfeGfGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x16, 0x11, 0x11, 
        0x11, 0x11, 0x08, 0x01, 0x11, 
        0x11, 0x11, 0x01, 0x01, 0x11, 
        0x10, 0x42, 0x01, 0x08, 0x11, 
        0x16, 0x14, 0x00, 0x92, 0x91, 
    },
  },
  // Level 6: Board: 0/7b2/7e~1/8~1/2f5~1/2c~1~e~~1/2d~bcf~d1/10
  {
    .name = "Ten Of Diamonds",
    .solution = "hCgFIfhCgGIffGHfGfcFdGeGcFdGeGfGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x13, 0x11, 
        0x11, 0x11, 0x11, 0x16, 0x01, 
        0x11, 0x11, 0x11, 0x11, 0x01, 
        0x11, 0x71, 0x11, 0x11, 0x01, 
        0x11, 0x40, 0x10, 0x60, 0x01, 
        0x11, 0x50, 0x34, 0x70, 0x51, 
    },
  },
  // Level 7: Board: 0/5~b3/5~4/5~1g2/5~~b2/1eh~~~~3/1b1e~g~bh1/10
  {
    .name = "Nine Of Spades",
    .solution = "HecFbFdFcFEgFgIgHgGgGbFfEfDfCffGHeGfdGeG",
    .board = {
        0x11, 0x11, 0x10, 0x31, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x18, 0x11, 
        0x11, 0x11, 0x10, 0x03, 0x11, 
        0x16, 0x90, 0x00, 0x01, 0x11, 
        0x13, 0x16, 0x08, 0x03, 0x91, 
    },
  },
  // Level 8: Board: 0/6f~2/3g~~e~2/4~~1~h1/4~~1~2/1~c~~~~~g1/1h1~~~ecf1/10
  {
    .name = "Ten Of Spades",
    .solution = "IfgBHfhFdCIdGgHfGfGcFfcFEfeGDfCfdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x70, 0x11, 
        0x11, 0x18, 0x00, 0x60, 0x11, 
        0x11, 0x11, 0x00, 0x10, 0x91, 
        0x11, 0x11, 0x00, 0x10, 0x11, 
        0x10, 0x40, 0x00, 0x00, 0x81, 
        0x19, 0x10, 0x00, 0x64, 0x71, 
    },
  },
  // Level 9: Board: 0/4e~~bf1/5~~e2/4~c~3/4~1~3/3a~f~~2/4~1abc1/10
  {
    .name = "Three Of Spades",
    .solution = "HbgFIbHbfDgFHcGfFfdFeFfFeBFd",
    .board = {
        0x11, 0x11, 0x60, 0x03, 0x71, 
        0x11, 0x11, 0x10, 0x06, 0x11, 
        0x11, 0x11, 0x04, 0x01, 0x11, 
        0x11, 0x11, 0x01, 0x01, 0x11, 
        0x11, 0x12, 0x07, 0x00, 0x11, 
        0x11, 0x11, 0x01, 0x23, 0x41, 
    },
  },
  // Level 10: Board: 0/10/2b~6/3~3h2/3~2~c2/1c~~~~cf2/1fhc~~1b2/10
  {
    .name = "Queen Of Diamonds",
    .solution = "HecCHebFGfFgdFcFHfGfeFcGfFgFbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x30, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x19, 0x11, 
        0x11, 0x10, 0x11, 0x04, 0x11, 
        0x14, 0x00, 0x00, 0x47, 0x11, 
        0x17, 0x94, 0x00, 0x13, 0x11, 
    },
  },
  // Level 11: Board: 0/4d~a~2/5~1~2/5e~~2/3f~1~dc1/4~~af2/4~c1e2/10
  {
    .name = "Ten Of Clubs",
    .solution = "gBHddEHfGfFfIeHeGfHffDgEeBfD",
    .board = {
        0x11, 0x11, 0x50, 0x20, 0x11, 
        0x11, 0x11, 0x10, 0x10, 0x11, 
        0x11, 0x11, 0x16, 0x00, 0x11, 
        0x11, 0x17, 0x01, 0x05, 0x41, 
        0x11, 0x11, 0x00, 0x27, 0x11, 
        0x11, 0x11, 0x04, 0x16, 0x11, 
    },
  },
  // Level 12: Board: 0/10/10/2af~5/2c1~5/1~b~~~~~~1/1cfea~e1b1/10
  {
    .name = "Eight Of Hearts",
    .solution = "cFCfdDGgeFdFcFfFeFdFfFdGgFhFcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x27, 0x01, 0x11, 0x11, 
        0x11, 0x41, 0x01, 0x11, 0x11, 
        0x10, 0x30, 0x00, 0x00, 0x01, 
        0x14, 0x76, 0x20, 0x61, 0x31, 
    },
  },
  // Level 13: Board: 0/5f4/4eb~~h1/5gf~2/7~2/5~~~2/1heb~~1g2/10
  {
    .name = "Four Of Diamonds",
    .solution = "fCgCfCHfGfdGeCfCgDHfGfcGdGIcfDgDHfGfbGcGdG",
    .board = {
        0x11, 0x11, 0x17, 0x11, 0x11, 
        0x11, 0x11, 0x63, 0x00, 0x91, 
        0x11, 0x11, 0x18, 0x70, 0x11, 
        0x11, 0x11, 0x11, 0x10, 0x11, 
        0x11, 0x11, 0x10, 0x00, 0x11, 
        0x19, 0x63, 0x00, 0x18, 0x11, 
    },
  },
  // Level 14: Board: 0/3f~5/4~5/4~1~c2/4~1~3/2~~af~3/2agdcdg2/10
  {
    .name = "Eight Of Clubs",
    .solution = "dBEfDfHdGfeGdGeGfG",
    .board = {
        0x11, 0x17, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x04, 0x11, 
        0x11, 0x11, 0x01, 0x01, 0x11, 
        0x11, 0x00, 0x27, 0x01, 0x11, 
        0x11, 0x28, 0x54, 0x58, 0x11, 
    },
  },
  // Level 15: Board: 0/7~a1/3h~2~g1/4~2~h1/4~f1~2/1a~1~e~~2/1gfe~1~3/10
  {
    .name = "Four Of Hearts",
    .solution = "FfFfdCeFcGIbbFfFHfGfFfcGIcIdHfGfHfFfbGcG",
    .board = {
        0x11, 0x11, 0x11, 0x10, 0x21, 
        0x11, 0x19, 0x01, 0x10, 0x81, 
        0x11, 0x11, 0x01, 0x10, 0x91, 
        0x11, 0x11, 0x07, 0x10, 0x11, 
        0x12, 0x01, 0x06, 0x00, 0x11, 
        0x18, 0x76, 0x01, 0x01, 0x11, 
    },
  },
  // Level 16: Board: 0/4~d1~d1/4~e1~2/4~d1~2/2g~~1f~2/3~g2~2/3fe~~~f1/10
  {
    .name = "Four Of Clubs",
    .solution = "cEFbFcEfdGeGfGgEIbHgGgFd",
    .board = {
        0x11, 0x11, 0x05, 0x10, 0x51, 
        0x11, 0x11, 0x06, 0x10, 0x11, 
        0x11, 0x11, 0x05, 0x10, 0x11, 
        0x11, 0x80, 0x01, 0x70, 0x11, 
        0x11, 0x10, 0x81, 0x10, 0x11, 
        0x11, 0x17, 0x60, 0x00, 0x71, 
    },
  },
  // Level 17: Board: 0/2a7/1~h4b2/1~4~f2/1~~3~3/1c~~~~~b2/1f~h~~1ac1/10
  {
    .name = "Queen Of Spades",
    .solution = "CcCcHdGfHfGfdGbEbEFfEfcFdFeFfFgFbFcFdFeFfFgFHdGfFfEfcGbGcGdG",
    .board = {
        0x11, 0x21, 0x11, 0x11, 0x11, 
        0x10, 0x91, 0x11, 0x13, 0x11, 
        0x10, 0x11, 0x11, 0x07, 0x11, 
        0x10, 0x01, 0x11, 0x01, 0x11, 
        0x14, 0x00, 0x00, 0x03, 0x11, 
        0x17, 0x09, 0x00, 0x12, 0x41, 
    },
  },
  // Level 18: Board: 0/7~g1/7~2/1f~4~2/1c~2~d~2/2~~~~1f~1/2~bdc~gb1/10
  {
    .name = "Wild Card",
    .solution = "IbhFGeFfbDbEcFdFdGeGfGgGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x10, 0x81, 
        0x11, 0x11, 0x11, 0x10, 0x11, 
        0x17, 0x01, 0x11, 0x10, 0x11, 
        0x14, 0x01, 0x10, 0x50, 0x11, 
        0x11, 0x00, 0x00, 0x17, 0x01, 
        0x11, 0x03, 0x54, 0x08, 0x31, 
    },
  },
  // Level 19: Board: 0/1b~7/1g~4~b1/2~1~d1~2/2~~~1~~2/2a~g~~3/2g~d1~a~1/10
  {
    .name = "Six Of Clubs",
    .solution = "EgcFdFFdEebBbCeFcEIchGfFHeGfgGFfcG",
    .board = {
        0x13, 0x01, 0x11, 0x11, 0x11, 
        0x18, 0x01, 0x11, 0x10, 0x31, 
        0x11, 0x01, 0x05, 0x10, 0x11, 
        0x11, 0x00, 0x01, 0x00, 0x11, 
        0x11, 0x20, 0x80, 0x01, 0x11, 
        0x11, 0x80, 0x51, 0x02, 0x01, 
    },
  },
  // Level 20: Board: 0/6~e2/6~3/6~3/3e~~~3/1a1hc~~3/1gcga~h3/10
  {
    .name = "Nine Of Hearts",
    .solution = "dEGgeEfFeFdFfFeFHbeGGfdGFfEfbGcGbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x06, 0x11, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x11, 0x16, 0x00, 0x01, 0x11, 
        0x12, 0x19, 0x40, 0x01, 0x11, 
        0x18, 0x48, 0x20, 0x91, 0x11, 
    },
  },
  // Level 21: Board: 0/5b1~h1/5d~~2/1g~3~~2/2h3~~2/2b~~~d~2/2g~~1g~g1/10
  {
    .name = "Six Of Spades",
    .solution = "fCfCGfgGbDFfcGcFdFcFeFcGIbfF",
    .board = {
        0x11, 0x11, 0x13, 0x10, 0x91, 
        0x11, 0x11, 0x15, 0x00, 0x11, 
        0x18, 0x01, 0x11, 0x00, 0x11, 
        0x11, 0x91, 0x11, 0x00, 0x11, 
        0x11, 0x30, 0x00, 0x50, 0x11, 
        0x11, 0x80, 0x01, 0x80, 0x81, 
    },
  },
  // Level 22: Board: 0/6~~b1/6~3/2c~2~3/3~2~3/2~g1b~f~1/2dcdg~1f1/10
  {
    .name = "Ace Of Spades",
    .solution = "hFcDDfcGcGdGIbHb",
    .board = {
        0x11, 0x11, 0x11, 0x00, 0x31, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x11, 0x40, 0x11, 0x01, 0x11, 
        0x11, 0x10, 0x11, 0x01, 0x11, 
        0x11, 0x08, 0x13, 0x07, 0x01, 
        0x11, 0x54, 0x58, 0x01, 0x71, 
    },
  },
  // Level 23: Board: 0/4~c~e2/4~e~3/2f~~1~3/3~~1~3/3a~~~b2/1b~c1f~a2/10
  {
    .name = "Six Of Diamonds",
    .solution = "cDdEeFdFFbEeHbeFHffCGfFffGEfbG",
    .board = {
        0x11, 0x11, 0x04, 0x06, 0x11, 
        0x11, 0x11, 0x06, 0x01, 0x11, 
        0x11, 0x70, 0x01, 0x01, 0x11, 
        0x11, 0x10, 0x01, 0x01, 0x11, 
        0x11, 0x12, 0x00, 0x03, 0x11, 
        0x13, 0x04, 0x17, 0x02, 0x11, 
    },
  },
  // Level 24: Board: 0/2f7/2c~6/3~b5/3~e5/1b~~g~~~2/2cge~1f2/10
  {
    .name = "Seven Of Spades",
    .solution = "eFcCDfcCdFeFfFgFDgbFcFcGdG",
    .board = {
        0x11, 0x71, 0x11, 0x11, 0x11, 
        0x11, 0x40, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x31, 0x11, 0x11, 
        0x11, 0x10, 0x61, 0x11, 0x11, 
        0x13, 0x00, 0x80, 0x00, 0x11, 
        0x11, 0x48, 0x60, 0x17, 0x11, 
    },
  },
  // Level 25: Board: 0/10/10/10/3d2~c2/1gbe~1~3/1ecd~~~gb1/10
  {
    .name = "Five Of Spades",
    .solution = "HgGgFgdFEgcFbFdFcFEgeGfGgGdGcGeGdGfGHeeGgGbGcGdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x15, 0x11, 0x04, 0x11, 
        0x18, 0x36, 0x01, 0x01, 0x11, 
        0x16, 0x45, 0x00, 0x08, 0x31, 
    },
  },
  // Level 26: Board: 0/10/10/10/3gh~~3/2dece~~2/4gdh~c1/10
  {
    .name = "Six Of Hearts",
    .solution = "eEfEdEfFeFfFgFFgdFeFcFdF",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x18, 0x90, 0x01, 0x11, 
        0x11, 0x56, 0x46, 0x00, 0x11, 
        0x11, 0x11, 0x85, 0x90, 0x41, 
    },
  },
  // Level 27: Board: 0/1b~f~1~a2/2~1~~f3/2~1~~4/2~1~~4/1~da~~4/1~bg~gd3/10
  {
    .name = "King Of Spades",
    .solution = "dGbBCfdBGcHbGcdGbGcGdGeG",
    .board = {
        0x13, 0x07, 0x01, 0x02, 0x11, 
        0x11, 0x01, 0x00, 0x71, 0x11, 
        0x11, 0x01, 0x00, 0x11, 0x11, 
        0x11, 0x01, 0x00, 0x11, 0x11, 
        0x10, 0x52, 0x00, 0x11, 0x11, 
        0x10, 0x38, 0x08, 0x51, 0x11, 
    },
  },
  // Level 28: Board: 0/10/10/10/10/1ba~~g~g~1/2cebec1a1/10
  {
    .name = "Nine Of Diamonds",
    .solution = "fFcFbFdFcFeFdFfFdGgFhFcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x13, 0x20, 0x08, 0x08, 0x01, 
        0x11, 0x46, 0x36, 0x41, 0x21, 
    },
  },
  // Level 29: Board: 0/3h6/2~e~~4/2~2~~~2/2~f~gc~2/2~1h1g~~1/2~~c~1fe1/10
  {
    .name = "Jack Of Diamonds",
    .solution = "dCeCfDgDgEfEDcdEeEcGeGfEHehFGeFegF",
    .board = {
        0x11, 0x19, 0x11, 0x11, 0x11, 
        0x11, 0x06, 0x00, 0x11, 0x11, 
        0x11, 0x01, 0x10, 0x00, 0x11, 
        0x11, 0x07, 0x08, 0x40, 0x11, 
        0x11, 0x01, 0x91, 0x80, 0x01, 
        0x11, 0x00, 0x40, 0x17, 0x61, 
    },
  },
  // Level 30: Board: 0/8d1/7~e1/1a5~2/1b3~h~2/1e~1~~d~2/1bh~a~1~2/10
  {
    .name = "Jack Of Clubs",
    .solution = "bFcGeGGeFfgFIcIcHfGfFfcGbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x51, 
        0x11, 0x11, 0x11, 0x10, 0x61, 
        0x12, 0x11, 0x11, 0x10, 0x11, 
        0x13, 0x11, 0x10, 0x90, 0x11, 
        0x16, 0x01, 0x00, 0x50, 0x11, 
        0x13, 0x90, 0x20, 0x10, 0x11, 
    },
  },
  // Level 31: Board: 0/3d~5/1~e1~f4/1c1~d5/1a~~6/2f~3~c1/2a~e~~~2/10
  {
    .name = "Three Of Clubs",
    .solution = "dBbEcEFcEdCcbEbEcFIfcGdGeGfG",
    .board = {
        0x11, 0x15, 0x01, 0x11, 0x11, 
        0x10, 0x61, 0x07, 0x11, 0x11, 
        0x14, 0x10, 0x51, 0x11, 0x11, 
        0x12, 0x00, 0x11, 0x11, 0x11, 
        0x11, 0x70, 0x11, 0x10, 0x41, 
        0x11, 0x20, 0x60, 0x00, 0x11, 
    },
  },
  // Level 32: Board: 0/10/10/6d~2/7d2/2~~fa~cf1/2h~ch~a2/10
  {
    .name = "Ace Of Clubs",
    .solution = "gDEfFfEffGHfGfDfIfHfGfdGcGdGeGcGdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x50, 0x11, 
        0x11, 0x11, 0x11, 0x15, 0x11, 
        0x11, 0x00, 0x72, 0x04, 0x71, 
        0x11, 0x90, 0x49, 0x02, 0x11, 
    },
  },
  // Level 33: Board: 0/7f~1/8~1/2g~3~a1/2b~1f~~2/3~~b~~2/3eae1~g1/10
  {
    .name = "King Of Clubs",
    .solution = "hBfEgFIdIdHfFfEfGfFfcDdFcEdFeFdFfFgFdG",
    .board = {
        0x11, 0x11, 0x11, 0x17, 0x01, 
        0x11, 0x11, 0x11, 0x11, 0x01, 
        0x11, 0x80, 0x11, 0x10, 0x21, 
        0x11, 0x30, 0x17, 0x00, 0x11, 
        0x11, 0x10, 0x03, 0x00, 0x11, 
        0x11, 0x16, 0x26, 0x10, 0x81, 
    },
  },
  // Level 34: Board: 0/2~b6/1d~2~h3/1g~2~b3/2~2~4/2~g~~4/2~hd~h3/10
  {
    .name = "Seven Of Diamonds",
    .solution = "DbbDbDcFdFdGGcGdcGdG",
    .board = {
        0x11, 0x03, 0x11, 0x11, 0x11, 
        0x15, 0x01, 0x10, 0x91, 0x11, 
        0x18, 0x01, 0x10, 0x31, 0x11, 
        0x11, 0x01, 0x10, 0x11, 0x11, 
        0x11, 0x08, 0x00, 0x11, 0x11, 
        0x11, 0x09, 0x50, 0x91, 0x11, 
    },
  },
  // Level 35: Board: 0/2e~6/3e6/2~af2~c1/2~g3~2/2~a~~~~g1/1c~2~~~f1/10
  {
    .name = "Pair",
    .solution = "cBDdDfdFeFIgHgIgIdHfGfFfEfDfEddFeFfFfG",
    .board = {
        0x11, 0x60, 0x11, 0x11, 0x11, 
        0x11, 0x16, 0x11, 0x11, 0x11, 
        0x11, 0x02, 0x71, 0x10, 0x41, 
        0x11, 0x08, 0x11, 0x10, 0x11, 
        0x11, 0x02, 0x00, 0x00, 0x81, 
        0x14, 0x01, 0x10, 0x00, 0x71, 
    },
  },
  // Level 36: Board: 0/2g~~b4/3g~g4/4~2~b1/1b~1~1~h2/2~~f~~1h1/2~3~~f1/10
  {
    .name = "Eight Of Spades",
    .solution = "FbdCcBdCeFfFgGIdHeHeEfGfgGDfFfEfbE",
    .board = {
        0x11, 0x80, 0x03, 0x11, 0x11, 
        0x11, 0x18, 0x08, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x10, 0x31, 
        0x13, 0x01, 0x01, 0x09, 0x11, 
        0x11, 0x00, 0x70, 0x01, 0x91, 
        0x11, 0x01, 0x11, 0x00, 0x71, 
    },
  },
  // Level 37: Board: 0/1b~7/1h~7/2~~a5/2~~6/1h~~b~4/2~chahc2/10
  {
    .name = "Ace Of Diamonds",
    .solution = "bBbCEfDfEddFeFeGdGeGfG",
    .board = {
        0x13, 0x01, 0x11, 0x11, 0x11, 
        0x19, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x00, 0x21, 0x11, 0x11, 
        0x11, 0x00, 0x11, 0x11, 0x11, 
        0x19, 0x00, 0x30, 0x11, 0x11, 
        0x11, 0x04, 0x92, 0x94, 0x11, 
    },
  },
  // Level 38: Board: 0/1c8/1b~7/2~1~b4/2~~~5/1fd~~5/1defec4/10
  {
    .name = "Three Of A Kind",
    .solution = "bCFdcEcFbFdFcFcGbGcGbCcGdG",
    .board = {
        0x14, 0x11, 0x11, 0x11, 0x11, 
        0x13, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x03, 0x11, 0x11, 
        0x11, 0x00, 0x01, 0x11, 0x11, 
        0x17, 0x50, 0x01, 0x11, 0x11, 
        0x15, 0x67, 0x64, 0x11, 0x11, 
    },
  },
  // Level 39: Board: 0/10/6c~2/1e~4~2/1h~4~g1/2~~~~~~h1/1g~1ceg~g1/10
  {
    .name = "Two Of Hearts",
    .solution = "gGbGbDcFdFfGeGgGIfgCfGHfeGGfHfbEcFdFFffGEfDfeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x40, 0x11, 
        0x16, 0x01, 0x11, 0x10, 0x11, 
        0x19, 0x01, 0x11, 0x10, 0x81, 
        0x11, 0x00, 0x00, 0x00, 0x91, 
        0x18, 0x01, 0x46, 0x80, 0x81, 
    },
  },
  // Level 40: Board: 0/10/10/2a7/2f~1~e3/3~~f4/3ega~g2/10
  {
    .name = "Two Of Diamonds",
    .solution = "cEdFcEdFeFeGfGGedG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x21, 0x11, 0x11, 0x11, 
        0x11, 0x70, 0x10, 0x61, 0x11, 
        0x11, 0x10, 0x07, 0x11, 0x11, 
        0x11, 0x16, 0x82, 0x08, 0x11, 
    },
  },
  // Level 41: Board: 0/10/8c1/1~gc2~~d1/1g1e~1~b2/4~~~d2/1be~~1~3/10
  {
    .name = "Two Of Clubs",
    .solution = "CddEcGIdHdHeGfHfFfdEeFbGcGIdfFHf",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x41, 
        0x10, 0x84, 0x11, 0x00, 0x51, 
        0x18, 0x16, 0x01, 0x03, 0x11, 
        0x11, 0x11, 0x00, 0x05, 0x11, 
        0x13, 0x60, 0x01, 0x01, 0x11, 
    },
  },
  // Level 42: Board: 0/2g~2~b2/3~2~3/3~~1~3/4~1~b2/2~~~~~fc1/1fce~~~ge1/10
  {
    .name = "Nine Of Clubs",
    .solution = "cBHbdDHfeGGfHfdGFffGcGEfDfeGfGgGdGeGfGgG",
    .board = {
        0x11, 0x80, 0x11, 0x03, 0x11, 
        0x11, 0x10, 0x11, 0x01, 0x11, 
        0x11, 0x10, 0x01, 0x01, 0x11, 
        0x11, 0x11, 0x01, 0x03, 0x11, 
        0x11, 0x00, 0x00, 0x07, 0x41, 
        0x17, 0x46, 0x00, 0x08, 0x61, 
    },
  },
  // Level 43: Board: 0/1b8/1f~7/2~h~~f3/2~e~~4/2~d~~~he1/1b~1~~~1d1/10
  {
    .name = "Three Of Hearts",
    .solution = "dDHfeGdEdFbGbCbCcFGdeFdFIfHffFeFgFhFeG",
    .board = {
        0x13, 0x11, 0x11, 0x11, 0x11, 
        0x17, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x09, 0x00, 0x71, 0x11, 
        0x11, 0x06, 0x00, 0x11, 0x11, 
        0x11, 0x05, 0x00, 0x09, 0x61, 
        0x13, 0x01, 0x00, 0x01, 0x51, 
    },
  },
  // Level 44: Board: 0/5~h3/5~1~d1/5~1~2/4g~d~2/5~h~~1/4b~bhg1/10
  {
    .name = "Straight Flush",
    .solution = "GeGfeEfEgFIcfFHeGehFhGeGGgFgIgHgGb",
    .board = {
        0x11, 0x11, 0x10, 0x91, 0x11, 
        0x11, 0x11, 0x10, 0x10, 0x51, 
        0x11, 0x11, 0x10, 0x10, 0x11, 
        0x11, 0x11, 0x80, 0x50, 0x11, 
        0x11, 0x11, 0x10, 0x90, 0x01, 
        0x11, 0x11, 0x30, 0x39, 0x81, 
    },
  },
  // Level 45: Board: 0/8h1/1a5~d1/1f~4~2/1h~~3~2/2~a1~~~2/2~fd~a3/10
  {
    .name = "Five Of A Kind",
    .solution = "bDIcHfGfDgbEbEGgFgcEIcHfcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x91, 
        0x12, 0x11, 0x11, 0x10, 0x51, 
        0x17, 0x01, 0x11, 0x10, 0x11, 
        0x19, 0x00, 0x11, 0x10, 0x11, 
        0x11, 0x02, 0x10, 0x00, 0x11, 
        0x11, 0x07, 0x50, 0x21, 0x11, 
    },
  },
  // Level 46: Board: 0/4d5/2~gf5/2~7/2~7/2~fe~g3/1e~hd~h3/10
  {
    .name = "Seven Of Clubs",
    .solution = "DcEcDcEcDccFGgeFdFfFdGcGdGeGbGcGdGeG",
    .board = {
        0x11, 0x11, 0x51, 0x11, 0x11, 
        0x11, 0x08, 0x71, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x07, 0x60, 0x81, 0x11, 
        0x16, 0x09, 0x50, 0x91, 0x11, 
    },
  },
  // Level 47: Board: 0/7hg1/6~c2/6~3/1~c~e1~3/1c1~2~~~1/1e~h~c~1g1/10
  {
    .name = "Five Of Diamonds",
    .solution = "HcCeEebGdGIbHcHcgFhFeG",
    .board = {
        0x11, 0x11, 0x11, 0x19, 0x81, 
        0x11, 0x11, 0x11, 0x04, 0x11, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x10, 0x40, 0x61, 0x01, 0x11, 
        0x14, 0x10, 0x11, 0x00, 0x01, 
        0x16, 0x09, 0x04, 0x01, 0x81, 
    },
  },
  // Level 48: Board: 0/6c~c1/7~2/5~a~2/3~f~1~2/2~d1d~3/1h~fha~3/10
  {
    .name = "Ten Of Hearts",
    .solution = "gBIbGdfFEebGDfcGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x40, 0x41, 
        0x11, 0x11, 0x11, 0x10, 0x11, 
        0x11, 0x11, 0x10, 0x20, 0x11, 
        0x11, 0x10, 0x70, 0x10, 0x11, 
        0x11, 0x05, 0x15, 0x01, 0x11, 
        0x19, 0x07, 0x92, 0x01, 0x11, 
    },
  },
  // Level 49: Board: 0/2~f6/2~7/2~4~b1/2~~2~~2/2b~~~f3/1gab~~a~g1/10
  {
    .name = "King Of Diamonds",
    .solution = "DbIdcEHeGfGfdGcFdFdGcGdGeGbGcGdGeGfGgG",
    .board = {
        0x11, 0x07, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x31, 
        0x11, 0x00, 0x11, 0x00, 0x11, 
        0x11, 0x30, 0x00, 0x71, 0x11, 
        0x18, 0x23, 0x00, 0x20, 0x81, 
    },
  },
  // Level 50: Board: 0/1hd~6/3~~2~e1/3~~2~2/2a~~~1~2/3d~~1~h1/3e~a~~a1/10
  {
    .name = "Five Of Hearts",
    .solution = "cEcBbBcBFgdCdEIgHgeEeGfGgGIcdGeGfG",
    .board = {
        0x19, 0x50, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x01, 0x10, 0x61, 
        0x11, 0x10, 0x01, 0x10, 0x11, 
        0x11, 0x20, 0x00, 0x10, 0x11, 
        0x11, 0x15, 0x00, 0x10, 0x91, 
        0x11, 0x16, 0x02, 0x00, 0x21, 
    },
  },
  // Level 51: Board: 0/6hb~1/2f~f~2~1/3~1~2~1/3~~~2~1/3~~h~db1/2f~~1~hd1/10
  {
    .name = "Eight Of Diamonds",
    .solution = "hBeCFecCgBhBHffFgFgG",
    .board = {
        0x11, 0x11, 0x11, 0x93, 0x01, 
        0x11, 0x70, 0x70, 0x11, 0x01, 
        0x11, 0x10, 0x10, 0x11, 0x01, 
        0x11, 0x10, 0x00, 0x11, 0x01, 
        0x11, 0x10, 0x09, 0x05, 0x31, 
        0x11, 0x70, 0x01, 0x09, 0x51, 
    },
  },
  // Level 52: Board: 0/2f~~3e1/3a~2~h1/4~1~~2/4~b~~2/2~~b1~~2/2h1fa~e2/10
  {
    .name = "Straight",
    .solution = "cBdBEffGfEgFIcIcHdHeGeGgdCdFFeEfDfeGfG",
    .board = {
        0x11, 0x70, 0x01, 0x11, 0x61, 
        0x11, 0x12, 0x01, 0x10, 0x91, 
        0x11, 0x11, 0x01, 0x00, 0x11, 
        0x11, 0x11, 0x03, 0x00, 0x11, 
        0x11, 0x00, 0x31, 0x00, 0x11, 
        0x11, 0x91, 0x72, 0x06, 0x11, 
    },
  },
  // Level 53: Board: 0/1g~7/2~7/1h~7/2~~6/1~~ad~af2/1df2~hg2/10
  {
    .name = "Five Of Clubs",
    .solution = "GfeFdFfFeFbBcFdFeFGfFfEfDfbDHfGfFfEfcECfDfdFeFfFfG",
    .board = {
        0x18, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x19, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x00, 0x11, 0x11, 0x11, 
        0x10, 0x02, 0x50, 0x27, 0x11, 
        0x15, 0x71, 0x10, 0x98, 0x11, 
    },
  },
  // Level 54: Board: 0/2h~6/3~6/3~6/3~1~a3/2d~~cf~~1/1~cda2hf1/10
  {
    .name = "Queen Of Hearts",
    .solution = "CgFfEfcBdFbGeFGegFhFfFFfgF",
    .board = {
        0x11, 0x90, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x10, 0x21, 0x11, 
        0x11, 0x50, 0x04, 0x70, 0x01, 
        0x10, 0x45, 0x21, 0x19, 0x71, 
    },
  },
  // Level 55: Board: 0/2~~f2c2/2~d2~d2/2fa~1~3/4~1~3/4~~~3/2hc~h~a2/10
  {
    .name = "Four Of A Kind",
    .solution = "EbDbHcHcGfFfcGdGDddDeGcDdDeGfG",
    .board = {
        0x11, 0x00, 0x71, 0x14, 0x11, 
        0x11, 0x05, 0x11, 0x05, 0x11, 
        0x11, 0x72, 0x01, 0x01, 0x11, 
        0x11, 0x11, 0x01, 0x01, 0x11, 
        0x11, 0x11, 0x00, 0x01, 0x11, 
        0x11, 0x94, 0x09, 0x02, 0x11, 
    },
  },
  // Level 56: Board: 0/2g~f~4/3~1~4/1e1~1~~3/1b~~2~3/2~~~d~b2/1e~g~1df2/10
  {
    .name = "Three Of Diamonds",
    .solution = "fFeBfDbGbEbEcEdFcFcBdFeFfFcG",
    .board = {
        0x11, 0x80, 0x70, 0x11, 0x11, 
        0x11, 0x10, 0x10, 0x11, 0x11, 
        0x16, 0x10, 0x10, 0x01, 0x11, 
        0x13, 0x00, 0x11, 0x01, 0x11, 
        0x11, 0x00, 0x05, 0x03, 0x11, 
        0x16, 0x08, 0x01, 0x57, 0x11, 
    },
  },
  // Level 57: Board: 0/6a~2/7h~1/6~e~1/4f~~1~1/1a~~a~~e~1/2~h2fa~1/10
  {
    .name = "Four Of Spades",
    .solution = "HdgBhCHdGfeEfEbFEfDfFfEf",
    .board = {
        0x11, 0x11, 0x11, 0x20, 0x11, 
        0x11, 0x11, 0x11, 0x19, 0x01, 
        0x11, 0x11, 0x11, 0x06, 0x01, 
        0x11, 0x11, 0x70, 0x01, 0x01, 
        0x12, 0x00, 0x20, 0x06, 0x01, 
        0x11, 0x09, 0x11, 0x72, 0x01, 
    },
  },
  // Level 58: Board: 0/6h3/5~d3/5~4/3~ed1~c1/2~~c2~2/1e~bh~~b2/10
  {
    .name = "Jack Of Spades",
    .solution = "GcEeDfGcFeEfdGeGfGIedGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x91, 0x11, 
        0x11, 0x11, 0x10, 0x51, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x10, 0x65, 0x10, 0x41, 
        0x11, 0x00, 0x41, 0x10, 0x11, 
        0x16, 0x03, 0x90, 0x03, 0x11, 
    },
  },
  // Level 59: Board: 0/10/10/10/1f~~d5/1b~~a~g~2/1f~bgd1a2/10
  {
    .name = "Joker",
    .solution = "EeDfEfGfFfDfbEcEFgdFcFbFeFdFcFeFcGfFgFbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x17, 0x00, 0x51, 0x11, 0x11, 
        0x13, 0x00, 0x20, 0x80, 0x11, 
        0x17, 0x03, 0x85, 0x12, 0x11, 
    },
  },

};
