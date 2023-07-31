#include "vexed.h"
static const leveldefn twisterlevels[] = {
  // Level 0: Board: 0/4~~f3/4~2g2/1~e1~1~e2/1~2~1~3/1~2~~~3/1~~~e~~gf1/10
  {
    .name = "Tornado",
    .solution = "GbFbHgGgeFfFgGCdbGfGeGcGgGfGdGhGgGeGHdHdgG",
    .board = {
        0x11, 0x11, 0x00, 0x71, 0x11, 
        0x11, 0x11, 0x01, 0x18, 0x11, 
        0x10, 0x61, 0x01, 0x06, 0x11, 
        0x10, 0x11, 0x01, 0x01, 0x11, 
        0x10, 0x11, 0x00, 0x01, 0x11, 
        0x10, 0x00, 0x60, 0x08, 0x71, 
    },
  },
  // Level 1: Board: 0/1~b2b~1g1/1~3g~~a1/1~4~~2/1~g~2~~2/1~1~~~~~2/1~~~~a1~2/10
  {
    .name = "Helm Wind",
    .solution = "CbfBGfbGcGcEFgdFeFfFgFIcHfGfFfdGfCIc",
    .board = {
        0x10, 0x31, 0x13, 0x01, 0x81, 
        0x10, 0x11, 0x18, 0x00, 0x21, 
        0x10, 0x11, 0x11, 0x00, 0x11, 
        0x10, 0x80, 0x11, 0x00, 0x11, 
        0x10, 0x10, 0x00, 0x00, 0x11, 
        0x10, 0x00, 0x02, 0x10, 0x11, 
    },
  },
  // Level 2: Board: 0/10/10/6~b2/1b~c~~~3/2c2~~3/1~h~c~~h2/10
  {
    .name = "Solar Wind",
    .solution = "dECgeGcGfGdGeEHdbEcGdGeGbGcGdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x03, 0x11, 
        0x13, 0x04, 0x00, 0x01, 0x11, 
        0x11, 0x41, 0x10, 0x01, 0x11, 
        0x10, 0x90, 0x40, 0x09, 0x11, 
    },
  },
  // Level 3: Board: 0/10/10/1e~c~5/1f~1~5/2~1~c4/1~~~~e~ef1/10
  {
    .name = "Puelche",
    .solution = "dDFfFgEgDgCgHgGgFgEgbDbEcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x16, 0x04, 0x01, 0x11, 0x11, 
        0x17, 0x01, 0x01, 0x11, 0x11, 
        0x11, 0x01, 0x04, 0x11, 0x11, 
        0x10, 0x00, 0x06, 0x06, 0x71, 
    },
  },
  // Level 4: Board: 0/5~a3/1g~~~~4/4~~4/4~~4/1e2~~1e2/1a~~g~~g2/10
  {
    .name = "Thermal",
    .solution = "bCcCEgHgGgdCGbbGcGdGbGcGdGeGfG",
    .board = {
        0x11, 0x11, 0x10, 0x21, 0x11, 
        0x18, 0x00, 0x00, 0x11, 0x11, 
        0x11, 0x11, 0x00, 0x11, 0x11, 
        0x11, 0x11, 0x00, 0x11, 0x11, 
        0x16, 0x11, 0x00, 0x16, 0x11, 
        0x12, 0x00, 0x80, 0x08, 0x11, 
    },
  },
  // Level 5: Board: 0/1c~2h4/1h~1~b~3/2~1~1~3/2~1~1~3/2~~~~h3/2~1b~c3/10
  {
    .name = "Chinook",
    .solution = "fCFcEfDfbBcFdFeGGfFfGfEfbCeG",
    .board = {
        0x14, 0x01, 0x19, 0x11, 0x11, 
        0x19, 0x01, 0x03, 0x01, 0x11, 
        0x11, 0x01, 0x01, 0x01, 0x11, 
        0x11, 0x01, 0x01, 0x01, 0x11, 
        0x11, 0x00, 0x00, 0x91, 0x11, 
        0x11, 0x01, 0x30, 0x41, 0x11, 
    },
  },
  // Level 6: Board: 0/10/10/5~g3/4h~4/1a~eg~e~~1/2~3h~a1/10
  {
    .name = "Storm",
    .solution = "eFIggFfFeFhFgFfFdFeFfFHfGfFfEfDfbFcFdFeFfFgFgGGdFfEfDf",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x81, 0x11, 
        0x11, 0x11, 0x90, 0x11, 0x11, 
        0x12, 0x06, 0x80, 0x60, 0x01, 
        0x11, 0x01, 0x11, 0x90, 0x21, 
    },
  },
  // Level 7: Board: 0/10/10/10/4ca~3/1e~3~~2/1baec~~b~1/10
  {
    .name = "Breath",
    .solution = "eGfGfEeEfEgFdGcGeGdGfGHfeGhGgGbFcGdGeGfGbGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x42, 0x01, 0x11, 
        0x16, 0x01, 0x11, 0x00, 0x11, 
        0x13, 0x26, 0x40, 0x03, 0x01, 
    },
  },
  // Level 8: Board: 0/8e1/7~a1/2h~3~2/3~2~~2/2~~g~~h2/1ge1a~~3/10
  {
    .name = "Eurus",
    .solution = "IcHeHfGfeFfFgFIcHeGfFfEfDfHfGfFfEfDfcDdFeFeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x61, 
        0x11, 0x11, 0x11, 0x10, 0x21, 
        0x11, 0x90, 0x11, 0x10, 0x11, 
        0x11, 0x10, 0x11, 0x00, 0x11, 
        0x11, 0x00, 0x80, 0x09, 0x11, 
        0x18, 0x61, 0x20, 0x01, 0x11, 
    },
  },
  // Level 9: Board: 0/1b~7/2~7/1d~7/2~7/2~~2~~a1/1ea~~de~b1/10
  {
    .name = "Samiel",
    .solution = "bDcFdGcGdGeGgGIfHfbGcGdGeGfGbBcGdGeGfGgG",
    .board = {
        0x13, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x15, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x00, 0x11, 0x00, 0x21, 
        0x16, 0x20, 0x05, 0x60, 0x31, 
    },
  },
  // Level 10: Board: 0/10/1a~3~g2/2~3~3/2~3~3/2~d1~~3/1h~g~h~ad1/10
  {
    .name = "Gale",
    .solution = "bGDfdGfGHcGfcGdGeGbCcFdGeGfGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x12, 0x01, 0x11, 0x08, 0x11, 
        0x11, 0x01, 0x11, 0x01, 0x11, 
        0x11, 0x01, 0x11, 0x01, 0x11, 
        0x11, 0x05, 0x10, 0x01, 0x11, 
        0x19, 0x08, 0x09, 0x02, 0x51, 
    },
  },
  // Level 11: Board: 0/10/10/10/1be~~2~g1/1g2~2~2/1a~~~e~ba1/10
  {
    .name = "Gust",
    .solution = "cEdEbEcEdEeGfGbGcGdGeGfGgGIebGcGdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x13, 0x60, 0x01, 0x10, 0x81, 
        0x18, 0x11, 0x01, 0x10, 0x11, 
        0x12, 0x00, 0x06, 0x03, 0x21, 
    },
  },
  // Level 12: Board: 0/10/10/2e7/2f~6/3~1~f~a1/1ha~~~h~e1/10
  {
    .name = "Calm",
    .solution = "cEGfdGcGdGeGgGIfHfbGcGdGeGfGcEdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x61, 0x11, 0x11, 0x11, 
        0x11, 0x70, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x10, 0x70, 0x21, 
        0x19, 0x20, 0x00, 0x90, 0x61, 
    },
  },
  // Level 13: Board: 0/10/10/7f2/6~e~1/2h~~~~1e1/1gf~g~~~h1/10
  {
    .name = "Candelia",
    .solution = "hEEgcFdFeGfGgGdGcGeGdGfGHeGfbGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x17, 0x11, 
        0x11, 0x11, 0x11, 0x06, 0x01, 
        0x11, 0x90, 0x00, 0x01, 0x61, 
        0x18, 0x70, 0x80, 0x00, 0x91, 
    },
  },
  // Level 14: Board: 0/1b8/1ga~~g~3/5bg~2/7~2/7~a1/7~g1/10
  {
    .name = "Updraft",
    .solution = "fCcCdCeCfCgDIfbCcCdCeCfCgDbCcCdCeC",
    .board = {
        0x13, 0x11, 0x11, 0x11, 0x11, 
        0x18, 0x20, 0x08, 0x01, 0x11, 
        0x11, 0x11, 0x13, 0x80, 0x11, 
        0x11, 0x11, 0x11, 0x10, 0x11, 
        0x11, 0x11, 0x11, 0x10, 0x21, 
        0x11, 0x11, 0x11, 0x10, 0x81, 
    },
  },
  // Level 15: Board: 0/3c6/3e~~e3/5~4/5~4/5~~~g1/1bg~~~~bc1/10
  {
    .name = "Auster",
    .solution = "dCeCGcIfHfcGdGeGbGcGdGeGfGdCeCfGgG",
    .board = {
        0x11, 0x14, 0x11, 0x11, 0x11, 
        0x11, 0x16, 0x00, 0x61, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x00, 0x81, 
        0x13, 0x80, 0x00, 0x03, 0x41, 
    },
  },
  // Level 16: Board: 0/3~c5/3~3f~1/2f~4~1/1dc~2b~~1/3~~2~~1/2b~~~d~~1/10
  {
    .name = "Haboob",
    .solution = "EbcEcEbEcEdFeGhCdGeGfGgGgEcGdGeGfG",
    .board = {
        0x11, 0x10, 0x41, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x17, 0x01, 
        0x11, 0x70, 0x11, 0x11, 0x01, 
        0x15, 0x40, 0x11, 0x30, 0x01, 
        0x11, 0x10, 0x01, 0x10, 0x01, 
        0x11, 0x30, 0x00, 0x50, 0x01, 
    },
  },
  // Level 17: Board: 0/3g~3f1/4~2~g1/4~2~2/4~2~2/4~2~2/1bfe~e~~b1/10
  {
    .name = "Tropical Cyclone",
    .solution = "dGdBIceGfGIccGdGeGfGbGcGdGeGfGgG",
    .board = {
        0x11, 0x18, 0x01, 0x11, 0x71, 
        0x11, 0x11, 0x01, 0x10, 0x81, 
        0x11, 0x11, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x01, 0x10, 0x11, 
        0x13, 0x76, 0x06, 0x00, 0x31, 
    },
  },
  // Level 18: Board: 0/10/10/10/1a~3g3/1g~3a~e1/1e~h~~h~2/10
  {
    .name = "Downdraft",
    .solution = "dGeGbEcGdGeGbFcGdGeGIfbGcGdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x12, 0x01, 0x11, 0x81, 0x11, 
        0x18, 0x01, 0x11, 0x20, 0x61, 
        0x16, 0x09, 0x00, 0x90, 0x11, 
    },
  },
  // Level 19: Board: 0/10/7~g1/7~2/2e~~f1~2/2g~~2~2/1fb~~~e~b1/10
  {
    .name = "Cyclone",
    .solution = "cEdGeGcFdGFecGEfDfIceGfGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x10, 0x81, 
        0x11, 0x11, 0x11, 0x10, 0x11, 
        0x11, 0x60, 0x07, 0x10, 0x11, 
        0x11, 0x80, 0x01, 0x10, 0x11, 
        0x17, 0x30, 0x00, 0x60, 0x31, 
    },
  },
  // Level 20: Board: 0/10/4g~4/1a~a1~4/2~b~~~~c1/1~~2~1~a1/1c2~~gb2/10
  {
    .name = "Wuther",
    .solution = "dEGgeEeCfEgEIeHeFgfGdEeGeEGeFefGEeDebDcECfdEIfFgHgeE",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x80, 0x11, 0x11, 
        0x12, 0x02, 0x10, 0x11, 0x11, 
        0x11, 0x03, 0x00, 0x00, 0x41, 
        0x10, 0x01, 0x10, 0x10, 0x21, 
        0x14, 0x11, 0x00, 0x83, 0x11, 
    },
  },
  // Level 21: Board: 0/10/10/10/1ba~3h2/3~~~~bg1/1g~~~~hab1/10
  {
    .name = "Tebbad",
    .solution = "HfGfHfFgEgcEdFeGfGbEDgIgHgGgFgcEbGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x13, 0x20, 0x11, 0x19, 0x11, 
        0x11, 0x10, 0x00, 0x03, 0x81, 
        0x18, 0x00, 0x00, 0x92, 0x31, 
    },
  },
  // Level 22: Board: 0/10/1c~7/1d~7/2~7/2~~~1~cg1/1dgdb~~b2/10
  {
    .name = "Lake Breeze",
    .solution = "eGfGbCcFdFeGfGdGcGeGdGfGeGgGIfHfHgGgFgEgbD",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x14, 0x01, 0x11, 0x11, 0x11, 
        0x15, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x00, 0x01, 0x04, 0x81, 
        0x15, 0x85, 0x30, 0x03, 0x11, 
    },
  },
  // Level 23: Board: 0/2f7/1~a~6/1~1~1~a~e1/1b~~~~1~2/1f~~3~2/2~~be~~b1/10
  {
    .name = "Capful Of Wind",
    .solution = "EgDgFgEgcCCcDfbEIddGeGfGIgHgGgFgcEGdFeEe",
    .board = {
        0x11, 0x71, 0x11, 0x11, 0x11, 
        0x10, 0x20, 0x11, 0x11, 0x11, 
        0x10, 0x10, 0x10, 0x20, 0x61, 
        0x13, 0x00, 0x00, 0x10, 0x11, 
        0x17, 0x00, 0x11, 0x10, 0x11, 
        0x11, 0x00, 0x36, 0x00, 0x31, 
    },
  },
  // Level 24: Board: 0/4~a4/4~5/4~5/4~2a2/2g~~~~gh1/2e~~~hea1/10
  {
    .name = "Notus",
    .solution = "HfGfHfGfIfHfcFHgfFdGcGdGeGGgFgEgIgHgGgFb",
    .board = {
        0x11, 0x11, 0x02, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x12, 0x11, 
        0x11, 0x80, 0x00, 0x08, 0x91, 
        0x11, 0x60, 0x00, 0x96, 0x21, 
    },
  },
  // Level 25: Board: 0/10/10/1g~4~d1/1a~c3~c1/2~a~2~a1/2~d~g~~2/10
  {
    .name = "Blustery",
    .solution = "DfDfbDcEdFIddGeGfGbEIfHgGgFgcEIfcGdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x18, 0x01, 0x11, 0x10, 0x51, 
        0x12, 0x04, 0x11, 0x10, 0x41, 
        0x11, 0x02, 0x01, 0x10, 0x21, 
        0x11, 0x05, 0x08, 0x00, 0x11, 
    },
  },
  // Level 26: Board: 0/10/7~e1/7~g1/2g3~~2/2f~2~3/2ge~d~df1/10
  {
    .name = "Zephyr",
    .solution = "fGIcHedGeGIdcGdGeGcFfGdGgGeGHecGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x10, 0x61, 
        0x11, 0x11, 0x11, 0x10, 0x81, 
        0x11, 0x81, 0x11, 0x00, 0x11, 
        0x11, 0x70, 0x11, 0x01, 0x11, 
        0x11, 0x86, 0x05, 0x05, 0x71, 
    },
  },
  // Level 27: Board: 0/4e~4/1~b1f~4/1~3~4/1~2f~4/1~~h1~4/1~~f~e~bh1/10
  {
    .name = "Breeze",
    .solution = "eBeCfGdGeEDgCgCcbFcGdGeGfGbGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x60, 0x11, 0x11, 
        0x10, 0x31, 0x70, 0x11, 0x11, 
        0x10, 0x11, 0x10, 0x11, 0x11, 
        0x10, 0x11, 0x70, 0x11, 0x11, 
        0x10, 0x09, 0x10, 0x11, 0x11, 
        0x10, 0x07, 0x06, 0x03, 0x91, 
    },
  },
  // Level 28: Board: 0/4~g1~e1/1a~e~2~2/1c~4~2/2~4~2/1a~4~2/1e~~c~~~g1/10
  {
    .name = "Hurricane",
    .solution = "bCbFbDcGIbHgGgFgEgDcFbEcDccGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x08, 0x10, 0x61, 
        0x12, 0x06, 0x01, 0x10, 0x11, 
        0x14, 0x01, 0x11, 0x10, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x11, 
        0x12, 0x01, 0x11, 0x10, 0x11, 
        0x16, 0x00, 0x40, 0x00, 0x81, 
    },
  },
  // Level 29: Board: 0/2c~6/3~6/2c~6/3h~~4/3fe~~~c1/4hf~~e1/10
  {
    .name = "Wind Chill",
    .solution = "dEeFcBdEcDFfdEfGgGIfHfeEdFeFfGeGfGgG",
    .board = {
        0x11, 0x40, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x11, 0x11, 
        0x11, 0x40, 0x11, 0x11, 0x11, 
        0x11, 0x19, 0x00, 0x11, 0x11, 
        0x11, 0x17, 0x60, 0x00, 0x41, 
        0x11, 0x11, 0x97, 0x00, 0x61, 
    },
  },
  // Level 30: Board: 0/7~d1/2c4~2/2d4~2/2a~~~1~2/3~b~c~2/1b~~ad1~~1/10
  {
    .name = "Levanter",
    .solution = "gFIbHfbGcGcEcEdEeEcEdEeFeFdFfFgFdG",
    .board = {
        0x11, 0x11, 0x11, 0x10, 0x51, 
        0x11, 0x41, 0x11, 0x10, 0x11, 
        0x11, 0x51, 0x11, 0x10, 0x11, 
        0x11, 0x20, 0x00, 0x10, 0x11, 
        0x11, 0x10, 0x30, 0x40, 0x11, 
        0x13, 0x00, 0x25, 0x10, 0x01, 
    },
  },
  // Level 31: Board: 0/1e~1~be3/2~~~2h~1/2~~4~1/2~~4~1/2~~3~~1/1~b~geh~g1/10
  {
    .name = "Boreas",
    .solution = "FbEchCIfGbFbEgDgbBCgFgEcbGcGdGeGfGgG",
    .board = {
        0x16, 0x01, 0x03, 0x61, 0x11, 
        0x11, 0x00, 0x01, 0x19, 0x01, 
        0x11, 0x00, 0x11, 0x11, 0x01, 
        0x11, 0x00, 0x11, 0x11, 0x01, 
        0x11, 0x00, 0x11, 0x10, 0x01, 
        0x10, 0x30, 0x86, 0x90, 0x81, 
    },
  },
  // Level 32: Board: 0/4h~4/5~4/5~1e2/1a2~~~a2/1h~~~1~f2/1ef~~h~3/10
  {
    .name = "Roaring Forties",
    .solution = "eBbFcFFeHfcGdGeGHebGcGdGeGHfbGcGdGeG",
    .board = {
        0x11, 0x11, 0x90, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x16, 0x11, 
        0x12, 0x11, 0x00, 0x02, 0x11, 
        0x19, 0x00, 0x01, 0x07, 0x11, 
        0x16, 0x70, 0x09, 0x01, 0x11, 
    },
  },
  // Level 33: Board: 0/7~h1/6~~f1/4~~~3/3~e~4/3~2b~f1/1~c~bhec2/10
  {
    .name = "Squall",
    .solution = "IbHceEGdFdCgEgEeDgdGFeEedGeGcGdGeGbGcGdGeGfGIcHcGdFeEeIfdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x10, 0x91, 
        0x11, 0x11, 0x11, 0x00, 0x71, 
        0x11, 0x11, 0x00, 0x01, 0x11, 
        0x11, 0x10, 0x60, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x30, 0x71, 
        0x10, 0x40, 0x39, 0x64, 0x11, 
    },
  },
  // Level 34: Board: 0/4b~4/5~4/5~4/1c~a~~4/2~gch~hg1/1~~a2~1b1/10
  {
    .name = "Twister",
    .solution = "dEeEDfEfDfFfEfFfCgDfEfbEHfIfHfGfFfEfcFdFbGeBfFgFhFeFfF",
    .board = {
        0x11, 0x11, 0x30, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x14, 0x02, 0x00, 0x11, 0x11, 
        0x11, 0x08, 0x49, 0x09, 0x81, 
        0x10, 0x02, 0x11, 0x01, 0x31, 
    },
  },
  // Level 35: Board: 0/10/7a2/6~b2/1bf~~~~f2/3~~ad3/1d~~2fb2/10
  {
    .name = "Typhoon",
    .solution = "FfGfbGcGEfcEFfdEeEHeeFdFHgfFHdGebEGfFfDgCgEfcEdFbGeFHe",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x12, 0x11, 
        0x11, 0x11, 0x11, 0x03, 0x11, 
        0x13, 0x70, 0x00, 0x07, 0x11, 
        0x11, 0x10, 0x02, 0x51, 0x11, 
        0x15, 0x00, 0x11, 0x73, 0x11, 
    },
  },
  // Level 36: Board: 0/4~a4/2~gc5/2~7/1~~~b~4/1~~~1~~bd1/1cd~~g~1a1/10
  {
    .name = "Friagem",
    .solution = "DcEcDcCeFbEcDcFgEgEecEdECgHfIfHfGgeEfFdGgFhFbGcGdGeG",
    .board = {
        0x11, 0x11, 0x02, 0x11, 0x11, 
        0x11, 0x08, 0x41, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x10, 0x00, 0x30, 0x11, 0x11, 
        0x10, 0x00, 0x10, 0x03, 0x51, 
        0x14, 0x50, 0x08, 0x01, 0x21, 
    },
  },
  // Level 37: Board: 0/8a1/1h~2e~~e1/2~3~~2/2~3~3/1b~~~~~~f1/1f~~ah1~b1/10
  {
    .name = "Simoom",
    .solution = "fCIcgFIfHfHdGfgFbCbFEgcFFgdFeFfFgFIcHdGfFfEfcGbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x21, 
        0x19, 0x01, 0x16, 0x00, 0x61, 
        0x11, 0x01, 0x11, 0x00, 0x11, 
        0x11, 0x01, 0x11, 0x01, 0x11, 
        0x13, 0x00, 0x00, 0x00, 0x71, 
        0x17, 0x00, 0x29, 0x10, 0x31, 
    },
  },
  // Level 38: Board: 0/10/10/2~g6/1c~3h~e1/1g~~~~f~c1/1e~~~~1hf1/10
  {
    .name = "Dust Devil",
    .solution = "DdbEcFIfgEhEdGcGeGGfHfdGFfGfIfHfIfbFGfeFcGfFgFbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x08, 0x11, 0x11, 0x11, 
        0x14, 0x01, 0x11, 0x90, 0x61, 
        0x18, 0x00, 0x00, 0x70, 0x41, 
        0x16, 0x00, 0x00, 0x19, 0x71, 
    },
  },
  // Level 39: Board: 0/10/10/1c~g~~4/2~2~f~2/2d~~fa~~1/2a~d1c~g1/10
  {
    .name = "Half A Gale",
    .solution = "gEgFfFhFgFDdbDcDcGcFdFeFfFgGIfHfGfFfEfcGdDeDfFgFgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x14, 0x08, 0x00, 0x11, 0x11, 
        0x11, 0x01, 0x10, 0x70, 0x11, 
        0x11, 0x50, 0x07, 0x20, 0x01, 
        0x11, 0x20, 0x51, 0x40, 0x81, 
    },
  },
  // Level 40: Board: 0/1~f7/1~2~df~2/1h~1~2~h1/2~1~1~~2/2~1~~~~d1/2h~cd~c2/10
  {
    .name = "Sea Breeze",
    .solution = "IfcGfGeGdGFceFfFfGbDeGcGfGdGgGgCIdeGHeCbbDcGdGeGfG",
    .board = {
        0x10, 0x71, 0x11, 0x11, 0x11, 
        0x10, 0x11, 0x05, 0x70, 0x11, 
        0x19, 0x01, 0x01, 0x10, 0x91, 
        0x11, 0x01, 0x01, 0x00, 0x11, 
        0x11, 0x01, 0x00, 0x00, 0x51, 
        0x11, 0x90, 0x45, 0x04, 0x11, 
    },
  },
  // Level 41: Board: 0/10/3~e5/3e1af~2/3c~2~2/4~~1b~1/2fb~~~ac1/10
  {
    .name = "Williwaw",
    .solution = "EchFHgGgFgdEeFIggDhFfGfDgDeGfGdGeGfGgGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x61, 0x11, 0x11, 
        0x11, 0x16, 0x12, 0x70, 0x11, 
        0x11, 0x14, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x00, 0x13, 0x01, 
        0x11, 0x73, 0x00, 0x02, 0x41, 
    },
  },
  // Level 42: Board: 0/1d4d~2/1b~3g~2/2~4~2/2~4~2/1f~~3f2/1g~eb~~e2/10
  {
    .name = "Trade Winds",
    .solution = "DgbCcFcGdGeGfGbFcGdGeGfGgBbCcGdGeGfGgCbGcGdGeGfG",
    .board = {
        0x15, 0x11, 0x11, 0x50, 0x11, 
        0x13, 0x01, 0x11, 0x80, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x11, 
        0x17, 0x00, 0x11, 0x17, 0x11, 
        0x18, 0x06, 0x30, 0x06, 0x11, 
    },
  },
  // Level 43: Board: 0/10/7~b1/6f~2/4~b1~2/2e~~1~a~1/1~acfe~c~1/10
  {
    .name = "Aquilo",
    .solution = "cFdFCgDgEgIcFehFHfeGgDHfdGeGcGdGeGfGbGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x10, 0x31, 
        0x11, 0x11, 0x11, 0x70, 0x11, 
        0x11, 0x11, 0x03, 0x10, 0x11, 
        0x11, 0x60, 0x01, 0x02, 0x01, 
        0x10, 0x24, 0x76, 0x04, 0x01, 
    },
  },
  // Level 44: Board: 0/10/2d~6/1g1~6/1cf~6/1h1~~~~~~1/1cfhg~~1d1/10
  {
    .name = "Keen Blast",
    .solution = "cEeGdGbEbGcGbGfGeGdGcGcCcEdFeFdFfFdGgFhFbGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x50, 0x11, 0x11, 0x11, 
        0x18, 0x10, 0x11, 0x11, 0x11, 
        0x14, 0x70, 0x11, 0x11, 0x11, 
        0x19, 0x10, 0x00, 0x00, 0x01, 
        0x14, 0x79, 0x80, 0x01, 0x51, 
    },
  },
  // Level 45: Board: 0/2a~6/3~6/1~e~6/1~1~h~4/1~~f1~~~2/1~~ecfcha1/10
  {
    .name = "Mariah",
    .solution = "eEfFgFcDcBDdCdbGDfEgcFCgDgdGcGdGeGbGcGdGeGfGgG",
    .board = {
        0x11, 0x20, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x11, 0x11, 
        0x10, 0x60, 0x11, 0x11, 0x11, 
        0x10, 0x10, 0x90, 0x11, 0x11, 
        0x10, 0x07, 0x10, 0x00, 0x11, 
        0x10, 0x06, 0x47, 0x49, 0x21, 
    },
  },
  // Level 46: Board: 0/3~d2~h1/3~3~2/3~~2~2/3e~2~2/2~b~~~d2/1eah~~~ab1/10
  {
    .name = "Bise",
    .solution = "EbdDHfeGHgGgFgdFeFfGgGDfeGdGcGfGeGgGIbHfdGeGfG",
    .board = {
        0x11, 0x10, 0x51, 0x10, 0x91, 
        0x11, 0x10, 0x11, 0x10, 0x11, 
        0x11, 0x10, 0x01, 0x10, 0x11, 
        0x11, 0x16, 0x01, 0x10, 0x11, 
        0x11, 0x03, 0x00, 0x05, 0x11, 
        0x16, 0x29, 0x00, 0x02, 0x31, 
    },
  },
  // Level 47: Board: 0/3b~5/1b~1~5/1d~~~5/1e~g~~4/2g2~1~d1/1~eg~~e~2/10
  {
    .name = "Stiff Breeze",
    .solution = "bCdEdBEddGCgeGcGgGfGdGeEHgGgFgEgbEbEIfcGdGeGfG",
    .board = {
        0x11, 0x13, 0x01, 0x11, 0x11, 
        0x13, 0x01, 0x01, 0x11, 0x11, 
        0x15, 0x00, 0x01, 0x11, 0x11, 
        0x16, 0x08, 0x00, 0x11, 0x11, 
        0x11, 0x81, 0x10, 0x10, 0x51, 
        0x10, 0x68, 0x00, 0x60, 0x11, 
    },
  },
  // Level 48: Board: 0/2~b6/2~4~h1/2~2~~~c1/2~2~1~2/1e~f~f~~2/1c~b~1~eh1/10
  {
    .name = "CAT",
    .solution = "HgfFIggFIcIdHdHfDfbFDbcFGfFfdFcFeFfFcGGdFfbGcG",
    .board = {
        0x11, 0x03, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x91, 
        0x11, 0x01, 0x10, 0x00, 0x41, 
        0x11, 0x01, 0x10, 0x10, 0x11, 
        0x16, 0x07, 0x07, 0x00, 0x11, 
        0x14, 0x03, 0x01, 0x06, 0x91, 
    },
  },
  // Level 49: Board: 0/1b~7/2~7/2~7/2~2~h1g1/1g~~~~1~a1/2ch~ab~c1/10
  {
    .name = "Polar Night Jets",
    .solution = "GeFfbBFgEgcFdFeGIfdGeGfGcGdGeGfGgGbFcGdGeGfGgG",
    .board = {
        0x13, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x10, 0x91, 0x81, 
        0x18, 0x00, 0x00, 0x10, 0x21, 
        0x11, 0x49, 0x02, 0x30, 0x41, 
    },
  },
  // Level 50: Board: 0/10/6~~f1/1a~3~h2/2~h~~~eg1/2~a~~~1e1/4~fg3/10
  {
    .name = "Fresh Breeze",
    .solution = "IcHcFgdEGgeFdFfFHeeFGeHeIeHefEgEhEFfGfeGbDcFdF",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x00, 0x71, 
        0x12, 0x01, 0x11, 0x09, 0x11, 
        0x11, 0x09, 0x00, 0x06, 0x81, 
        0x11, 0x02, 0x00, 0x01, 0x61, 
        0x11, 0x11, 0x07, 0x81, 0x11, 
    },
  },
  // Level 51: Board: 0/3~~d4/1h~~2d~2/2~~3~2/3a~2~2/1~f1f~1~2/1chca~~~2/10
  {
    .name = "Horse Latitudes",
    .solution = "dEeFbCcDCfdGdEcGfGeGbGcGdGbGcGdGeGFbEbgCdEeGfG",
    .board = {
        0x11, 0x10, 0x05, 0x11, 0x11, 
        0x19, 0x00, 0x11, 0x50, 0x11, 
        0x11, 0x00, 0x11, 0x10, 0x11, 
        0x11, 0x12, 0x01, 0x10, 0x11, 
        0x10, 0x71, 0x70, 0x10, 0x11, 
        0x14, 0x94, 0x20, 0x00, 0x11, 
    },
  },
  // Level 52: Board: 0/1c~7/2~7/2~4~c1/2~1g~h~2/1a~~a~g~b1/1b~h1~1~2/10
  {
    .name = "Second Wind",
    .solution = "gFIfIdHeGeGfeEHffEgEEfDfFfEfbBGfFfEfcFbFdFeFbG",
    .board = {
        0x14, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x41, 
        0x11, 0x01, 0x80, 0x90, 0x11, 
        0x12, 0x00, 0x20, 0x80, 0x31, 
        0x13, 0x09, 0x10, 0x10, 0x11, 
    },
  },
  // Level 53: Board: 0/4h~~b2/5~~3/5~~3/5~~d2/1~a~~~~eb1/1e1~h~~ad1/10
  {
    .name = "Foehn",
    .solution = "HbHeeGGfFfHfGfIfHfeBEgcFdFFfEfDfCfeGfGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x90, 0x03, 0x11, 
        0x11, 0x11, 0x10, 0x01, 0x11, 
        0x11, 0x11, 0x10, 0x01, 0x11, 
        0x11, 0x11, 0x10, 0x05, 0x11, 
        0x10, 0x20, 0x00, 0x06, 0x31, 
        0x16, 0x10, 0x90, 0x02, 0x51, 
    },
  },
  // Level 54: Board: 0/10/10/10/1b3~f3/1f~1~~c~d1/1h~~d~bhc1/10
  {
    .name = "Anticyclone",
    .solution = "IfeGGeFfGfFfHfGfbFGgeFcGHgfFgFbFcGdGbGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x13, 0x11, 0x10, 0x71, 0x11, 
        0x17, 0x01, 0x00, 0x40, 0x51, 
        0x19, 0x00, 0x50, 0x39, 0x41, 
    },
  },
  // Level 55: Board: 0/10/10/6~e2/2~~e1~3/2fhb~~3/1dhd1~fb~1/10
  {
    .name = "Simoon",
    .solution = "EeDeGgeFdFcFhGfFeFdFfFeFcFdFeFGfgGFfHdEfDfbG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x06, 0x11, 
        0x11, 0x00, 0x61, 0x01, 0x11, 
        0x11, 0x79, 0x30, 0x01, 0x11, 
        0x15, 0x95, 0x10, 0x73, 0x01, 
    },
  },
  // Level 56: Board: 0/6~a2/6~3/6~3/2c~2~3/1ha~2~d2/1fd~~~chf1/10
  {
    .name = "Elephanta",
    .solution = "cEdGeGHbcFdGeGHfcGdGeGbFcGdGeGfGbGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x02, 0x11, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x11, 0x40, 0x11, 0x01, 0x11, 
        0x19, 0x20, 0x11, 0x05, 0x11, 
        0x17, 0x50, 0x00, 0x49, 0x71, 
    },
  },
  // Level 57: Board: 0/10/1c1g6/1g~b~5/2~1~5/1d~1~~~a2/1a~~~d1bc1/10
  {
    .name = "Hadley Cell",
    .solution = "HfGfFfdDeFfFgFbDbFDdbDcDCfdDeFfFgFbGcGbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x14, 0x18, 0x11, 0x11, 0x11, 
        0x18, 0x03, 0x01, 0x11, 0x11, 
        0x11, 0x01, 0x01, 0x11, 0x11, 
        0x15, 0x01, 0x00, 0x02, 0x11, 
        0x12, 0x00, 0x05, 0x13, 0x41, 
    },
  },
  // Level 58: Board: 0/1f~~3c2/3~2~a2/3~2~hf1/3~1~~3/3~~~~~e1/1e~~ha1~c1/10
  {
    .name = "Favonius",
    .solution = "bBbGcGcBdFeFfFHcGeHdGegFIfHfGfdGHdgFhFIdHdgF",
    .board = {
        0x17, 0x00, 0x11, 0x14, 0x11, 
        0x11, 0x10, 0x11, 0x02, 0x11, 
        0x11, 0x10, 0x11, 0x09, 0x71, 
        0x11, 0x10, 0x10, 0x01, 0x11, 
        0x11, 0x10, 0x00, 0x00, 0x61, 
        0x16, 0x00, 0x92, 0x10, 0x41, 
    },
  },
  // Level 59: Board: 0/10/5~~h2/5~1g~1/4~~2~1/2b~~ghf~1/2fa~ba1~1/10
  {
    .name = "Willy-willy",
    .solution = "HcGcFeFfEfGfFfFgdFcFGgeFdFHffFdGhDgFhFcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x09, 0x11, 
        0x11, 0x11, 0x10, 0x18, 0x01, 
        0x11, 0x11, 0x00, 0x11, 0x01, 
        0x11, 0x30, 0x08, 0x97, 0x01, 
        0x11, 0x72, 0x03, 0x21, 0x01, 
    },
  },

};