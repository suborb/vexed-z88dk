#include "vexed.h"
static const leveldefn variety10pack[] = {
  // Level 0: Board: 0/4h~4/5~1e2/5~1g2/1e~2~~b2/2~~~~ag2/1b~1a~h3/10
  {
    .name = "Dr. Fitzpatrick",
    .solution = "HeGgGfFfEfDfHfGfeBFfEfeGbEDf",
    .board = {
        0x11, 0x11, 0x90, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x16, 0x11, 
        0x11, 0x11, 0x10, 0x18, 0x11, 
        0x16, 0x01, 0x10, 0x03, 0x11, 
        0x11, 0x00, 0x00, 0x28, 0x11, 
        0x13, 0x01, 0x20, 0x91, 0x11, 
    },
  },
  // Level 1: Board: 0/10/1~f7/1~8/1~c5e1/1fh~1e~~b1/1c1~~b~h2/10
  {
    .name = "Farmer",
    .solution = "CcCeIfHfIfHfcFdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x10, 0x71, 0x11, 0x11, 0x11, 
        0x10, 0x11, 0x11, 0x11, 0x11, 
        0x10, 0x41, 0x11, 0x11, 0x61, 
        0x17, 0x90, 0x16, 0x00, 0x31, 
        0x14, 0x10, 0x03, 0x09, 0x11, 
    },
  },
  // Level 2: Board: 0/3~f~d3/3~1h4/3~df4/2~~2e~2/2~c~2~2/2~h~~~ce1/10
  {
    .name = "Alice Klopfer",
    .solution = "gEHgdFeGEdEbFdEdFdEdDeGbFdEd",
    .board = {
        0x11, 0x10, 0x70, 0x51, 0x11, 
        0x11, 0x10, 0x19, 0x11, 0x11, 
        0x11, 0x10, 0x57, 0x11, 0x11, 
        0x11, 0x00, 0x11, 0x60, 0x11, 
        0x11, 0x04, 0x01, 0x10, 0x11, 
        0x11, 0x09, 0x00, 0x04, 0x61, 
    },
  },
  // Level 3: Board: 0/10/1e~7/1b~3h~2/1a~~3~2/2~~~~f~~1/1ahfe~2b1/10
  {
    .name = "Warren Wiggins",
    .solution = "bCbDcEdFcFGfeFdFfFdGbEcGgFhFgDHfGfdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x16, 0x01, 0x11, 0x11, 0x11, 
        0x13, 0x01, 0x11, 0x90, 0x11, 
        0x12, 0x00, 0x11, 0x10, 0x11, 
        0x11, 0x00, 0x00, 0x70, 0x01, 
        0x12, 0x97, 0x60, 0x11, 0x31, 
    },
  },
  // Level 4: Board: 0/1bh~6/3~1b~3/3~1f~3/3~f1~~~1/2~~hd~g~1/2g3~d~1/10
  {
    .name = "Nazzim Of Bazzim",
    .solution = "cBfCfFfDgEhEhFgFeFfFgGIfHfGfFfEfDfbBcBdFeFfFgFgG",
    .board = {
        0x13, 0x90, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x13, 0x01, 0x11, 
        0x11, 0x10, 0x17, 0x01, 0x11, 
        0x11, 0x10, 0x71, 0x00, 0x01, 
        0x11, 0x00, 0x95, 0x08, 0x01, 
        0x11, 0x81, 0x11, 0x05, 0x01, 
    },
  },
  // Level 5: Board: 0/1h~3f3/2~3d~2/2~4~2/1a~~3~2/3~c~~~d1/1a~~f~h1c1/10
  {
    .name = "Dellar",
    .solution = "gCbEcEbGgCHfGgeFfFgFhFbBEgcEdFdGeG",
    .board = {
        0x19, 0x01, 0x11, 0x71, 0x11, 
        0x11, 0x01, 0x11, 0x50, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x11, 
        0x12, 0x00, 0x11, 0x10, 0x11, 
        0x11, 0x10, 0x40, 0x00, 0x51, 
        0x12, 0x00, 0x70, 0x91, 0x41, 
    },
  },
  // Level 6: Board: 0/10/2c7/2g~1gc~2/3~~e1~~1/3~~1~e~1/3~g~bgb1/10
  {
    .name = "Stuart",
    .solution = "cDgDfDgDhEHfgGFeeGcDdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x41, 0x11, 0x11, 0x11, 
        0x11, 0x80, 0x18, 0x40, 0x11, 
        0x11, 0x10, 0x06, 0x10, 0x01, 
        0x11, 0x10, 0x01, 0x06, 0x01, 
        0x11, 0x10, 0x80, 0x38, 0x31, 
    },
  },
  // Level 7: Board: 0/10/3~h2~a1/3~3~b1/3~~2~e1/3~~bf~2/3f1he~a1/10
  {
    .name = "Glikker",
    .solution = "IcFfEfEcdEeFdFeFGfIeFfEfIefG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x91, 0x10, 0x21, 
        0x11, 0x10, 0x11, 0x10, 0x31, 
        0x11, 0x10, 0x01, 0x10, 0x61, 
        0x11, 0x10, 0x03, 0x70, 0x11, 
        0x11, 0x17, 0x19, 0x60, 0x21, 
    },
  },
  // Level 8: Board: 0/10/1ah~2~f2/3~2~3/3~2~3/3~~~~gb1/1afb~1~hg1/10
  {
    .name = "Sir Jeers",
    .solution = "HfIfHfGfFfcGbGdGcGcCbCcCdFeFfFgFHcGfFfgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x12, 0x90, 0x11, 0x07, 0x11, 
        0x11, 0x10, 0x11, 0x01, 0x11, 
        0x11, 0x10, 0x11, 0x01, 0x11, 
        0x11, 0x10, 0x00, 0x08, 0x31, 
        0x12, 0x73, 0x01, 0x09, 0x81, 
    },
  },
  // Level 9: Board: 0/10/6~c2/3g~1~3/2~a~~~~b1/2~1~~eg2/1b~1~eac~1/10
  {
    .name = "Ziff",
    .solution = "HcdDdEIeeFGeFeHeGeFeEeDehGgFfFHfeGfGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x04, 0x11, 
        0x11, 0x18, 0x01, 0x01, 0x11, 
        0x11, 0x02, 0x00, 0x00, 0x31, 
        0x11, 0x01, 0x00, 0x68, 0x11, 
        0x13, 0x01, 0x06, 0x24, 0x01, 
    },
  },
  // Level 10: Board: 0/5a~g~1/6cd~1/8~1/1b~3~a~1/1d~3~1~1/2b~~~g1c1/10
  {
    .name = "Aaron Alligator",
    .solution = "bEhEhBIeHefBgBhChCIegChCbFcGHedGeG",
    .board = {
        0x11, 0x11, 0x12, 0x08, 0x01, 
        0x11, 0x11, 0x11, 0x45, 0x01, 
        0x11, 0x11, 0x11, 0x11, 0x01, 
        0x13, 0x01, 0x11, 0x02, 0x01, 
        0x15, 0x01, 0x11, 0x01, 0x01, 
        0x11, 0x30, 0x00, 0x81, 0x41, 
    },
  },
  // Level 11: Board: 0/3c3~h1/2ha~2~2/4~2~e1/4~2~g1/4~~c~2/2e~a~1g2/10
  {
    .name = "Wocket",
    .solution = "dCdCGfIbcCdCHfGfIdIeHfGfcGdG",
    .board = {
        0x11, 0x14, 0x11, 0x10, 0x91, 
        0x11, 0x92, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x01, 0x10, 0x61, 
        0x11, 0x11, 0x01, 0x10, 0x81, 
        0x11, 0x11, 0x00, 0x40, 0x11, 
        0x11, 0x60, 0x20, 0x18, 0x11, 
    },
  },
  // Level 12: Board: 0/4h5/3~f~4/2~~1~4/2~h1~4/1bfd~~e3/1d1eb5/10
  {
    .name = "Right-Side-Up",
    .solution = "EcDdbFDedFcFeFdFeCcFdFFfEfFfDfCfGfFf",
    .board = {
        0x11, 0x11, 0x91, 0x11, 0x11, 
        0x11, 0x10, 0x70, 0x11, 0x11, 
        0x11, 0x00, 0x10, 0x11, 0x11, 
        0x11, 0x09, 0x10, 0x11, 0x11, 
        0x13, 0x75, 0x00, 0x61, 0x11, 
        0x15, 0x16, 0x31, 0x11, 0x11, 
    },
  },
  // Level 13: Board: 0/2d~~c4/3~~1e3/3~~~h3/2~ec~1d2/2~c1~~h2/2~2~4/10
  {
    .name = "Flustard",
    .solution = "cBdDFbEcDeeEGdGdFefFEeDfHfGf",
    .board = {
        0x11, 0x50, 0x04, 0x11, 0x11, 
        0x11, 0x10, 0x01, 0x61, 0x11, 
        0x11, 0x10, 0x00, 0x91, 0x11, 
        0x11, 0x06, 0x40, 0x15, 0x11, 
        0x11, 0x04, 0x10, 0x09, 0x11, 
        0x11, 0x01, 0x10, 0x11, 0x11, 
    },
  },
  // Level 14: Board: 0/10/10/10/10/1e~c~ac~d1/1ged~g1a2/10
  {
    .name = "Munch Hunch",
    .solution = "DfIfdGFfGfHfcGEfDfFfEfGfFfdFcFbFdFcFeFcGfFgFbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x16, 0x04, 0x02, 0x40, 0x51, 
        0x18, 0x65, 0x08, 0x12, 0x11, 
    },
  },
  // Level 15: Board: 0/10/5a~3/6~3/2e~2~g2/2ge~~~h2/1ach~c~3/10
  {
    .name = "Yeoman Bowmen",
    .solution = "cEfCHfGfFfcGdGHfGfcGdGbGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x12, 0x01, 0x11, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x11, 0x60, 0x11, 0x08, 0x11, 
        0x11, 0x86, 0x00, 0x09, 0x11, 
        0x12, 0x49, 0x04, 0x01, 0x11, 
    },
  },
  // Level 16: Board: 0/3g~1~f2/4f~~3/3cg~~~a1/2~b1~1a2/2~2~~c2/2~~~b~3/10
  {
    .name = "Tizzy",
    .solution = "IddBeCHbGddDeDfFHfDecGdG",
    .board = {
        0x11, 0x18, 0x01, 0x07, 0x11, 
        0x11, 0x11, 0x70, 0x01, 0x11, 
        0x11, 0x14, 0x80, 0x00, 0x21, 
        0x11, 0x03, 0x10, 0x12, 0x11, 
        0x11, 0x01, 0x10, 0x04, 0x11, 
        0x11, 0x00, 0x03, 0x01, 0x11, 
    },
  },
  // Level 17: Board: 0/10/2~h3~h1/2~c~2~d1/2~1~~a~2/1b~~~~d~2/1a~1~~c~b1/10
  {
    .name = "Truffle",
    .solution = "DcbFcFdFGgGfFfEfDfCfIgIcIdHfGfHfFfdDeEEfDfeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x09, 0x11, 0x10, 0x91, 
        0x11, 0x04, 0x01, 0x10, 0x51, 
        0x11, 0x01, 0x00, 0x20, 0x11, 
        0x13, 0x00, 0x00, 0x50, 0x11, 
        0x12, 0x01, 0x00, 0x40, 0x31, 
    },
  },
  // Level 18: Board: 0/10/2~c6/2~1~~bd2/2~1~~4/2~~~b~3/1b~~ad~ac1/10
  {
    .name = "Von Schwinn",
    .solution = "EgDgDcHgfFFgEgcFGgFgdFGgeFGdHdGdFdEfcGbGcGFefGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x04, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x00, 0x35, 0x11, 
        0x11, 0x01, 0x00, 0x11, 0x11, 
        0x11, 0x00, 0x03, 0x01, 0x11, 
        0x13, 0x00, 0x25, 0x02, 0x41, 
    },
  },
  // Level 19: Board: 0/3c~2b2/4~~~f2/5~~3/5~~3/1~~e~~~1d1/1ebf1d~~c1/10
  {
    .name = "Dr. Timpkins",
    .solution = "DfCfIgHgHcGfFfEfHcGfFfEfdBeCfFfGgG",
    .board = {
        0x11, 0x14, 0x01, 0x13, 0x11, 
        0x11, 0x11, 0x00, 0x07, 0x11, 
        0x11, 0x11, 0x10, 0x01, 0x11, 
        0x11, 0x11, 0x10, 0x01, 0x11, 
        0x10, 0x06, 0x00, 0x01, 0x51, 
        0x16, 0x37, 0x15, 0x00, 0x41, 
    },
  },
  // Level 20: Board: 0/10/1h~7/2~~~~e3/2dc~ac~2/4~1d~~1/1he~~2~a1/10
  {
    .name = "Woset",
    .solution = "GdgFfEgEhFbCcDFedDdEeEfEcEdEeEcGfEgFbGcG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x19, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x00, 0x00, 0x61, 0x11, 
        0x11, 0x54, 0x02, 0x40, 0x11, 
        0x11, 0x11, 0x01, 0x50, 0x01, 
        0x19, 0x60, 0x01, 0x10, 0x21, 
    },
  },
  // Level 21: Board: 0/6a~g1/6d~e1/7~d1/7~2/3~~~c~2/1e~~1ag~c1/10
  {
    .name = "David Donald Doo",
    .solution = "IbgCIcIdHfGfgGgCFffGEfbG",
    .board = {
        0x11, 0x11, 0x11, 0x20, 0x81, 
        0x11, 0x11, 0x11, 0x50, 0x61, 
        0x11, 0x11, 0x11, 0x10, 0x51, 
        0x11, 0x11, 0x11, 0x10, 0x11, 
        0x11, 0x10, 0x00, 0x40, 0x11, 
        0x16, 0x00, 0x12, 0x80, 0x41, 
    },
  },
  // Level 22: Board: 0/10/2f7/1~d~~2~h1/1~2~c1~2/1d1c~1~~2/2~hbfb3/10
  {
    .name = "Single-File ",
    .solution = "CdFecDdDDgEgdGeGIdHfcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x71, 0x11, 0x11, 0x11, 
        0x10, 0x50, 0x01, 0x10, 0x91, 
        0x10, 0x11, 0x04, 0x10, 0x11, 
        0x15, 0x14, 0x01, 0x00, 0x11, 
        0x11, 0x09, 0x37, 0x31, 0x11, 
    },
  },
  // Level 23: Board: 0/3a~5/2df~~4/5~4/5~~c2/3g1~~a2/3dgc~f2/10
  {
    .name = "Mo Red-Zoff",
    .solution = "HedBeCHfdCeCfGcCdCeGeCdGfGdGeG",
    .board = {
        0x11, 0x12, 0x01, 0x11, 0x11, 
        0x11, 0x57, 0x00, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x04, 0x11, 
        0x11, 0x18, 0x10, 0x02, 0x11, 
        0x11, 0x15, 0x84, 0x07, 0x11, 
    },
  },
  // Level 24: Board: 0/10/1hd~1~f3/3~1~4/1h~~1~4/2~~~~~d2/1~a~hd~fa1/10
  {
    .name = "Goo-Goose",
    .solution = "GccGcCdFfGeFfFfGbCDgbECgcCbGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x19, 0x50, 0x10, 0x71, 0x11, 
        0x11, 0x10, 0x10, 0x11, 0x11, 
        0x19, 0x00, 0x10, 0x11, 0x11, 
        0x11, 0x00, 0x00, 0x05, 0x11, 
        0x10, 0x20, 0x95, 0x07, 0x21, 
    },
  },
  // Level 25: Board: 0/1b3~~e2/1c~2~4/1d~2~4/2~~~~1e2/2~~~d~b2/2dc~c~3/10
  {
    .name = "Marco",
    .solution = "HbGbFeFfEfbDHfHfGfFfDgbCbDFgcEcGdGeG",
    .board = {
        0x13, 0x11, 0x10, 0x06, 0x11, 
        0x14, 0x01, 0x10, 0x11, 0x11, 
        0x15, 0x01, 0x10, 0x11, 0x11, 
        0x11, 0x00, 0x00, 0x16, 0x11, 
        0x11, 0x00, 0x05, 0x03, 0x11, 
        0x11, 0x54, 0x04, 0x01, 0x11, 
    },
  },
  // Level 26: Board: 0/4e~1h2/5~~b2/4d~~3/4g~~3/5~gd2/1h~~b~1e2/10
  {
    .name = "Swomee-Swans",
    .solution = "HcGeeDeEHfGfHcGfeBfFgFbGcGdG",
    .board = {
        0x11, 0x11, 0x60, 0x19, 0x11, 
        0x11, 0x11, 0x10, 0x03, 0x11, 
        0x11, 0x11, 0x50, 0x01, 0x11, 
        0x11, 0x11, 0x80, 0x01, 0x11, 
        0x11, 0x11, 0x10, 0x85, 0x11, 
        0x19, 0x00, 0x30, 0x16, 0x11, 
    },
  },
  // Level 27: Board: 0/10/3a~5/1~b1c~4/1~3~4/1~d~~h~a~1/1c1~~b~dh1/10
  {
    .name = "Aldermen",
    .solution = "HffFgFhFCdcFbFcFdFGgFgHgGgeDFfEfDfCfdCeDFfdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x12, 0x01, 0x11, 0x11, 
        0x10, 0x31, 0x40, 0x11, 0x11, 
        0x10, 0x11, 0x10, 0x11, 0x11, 
        0x10, 0x50, 0x09, 0x02, 0x01, 
        0x14, 0x10, 0x03, 0x05, 0x91, 
    },
  },
  // Level 28: Board: 0/10/10/10/1h~1~f4/1g~~~ehc2/2~gfc1e2/10
  {
    .name = "Mrs. Umbroso",
    .solution = "FebEdGFfGfHfcGEfFfGfeFdFeFfFgFDgbFcFcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x19, 0x01, 0x07, 0x11, 0x11, 
        0x18, 0x00, 0x06, 0x94, 0x11, 
        0x11, 0x08, 0x74, 0x16, 0x11, 
    },
  },
  // Level 29: Board: 0/5ad~2/6f~2/1a~4~2/2~3~~2/2g~~~~~2/2a1~fgd2/10
  {
    .name = "Zelf",
    .solution = "gCfBgBgCHeGfHfcFdFFfGfEfbDeG",
    .board = {
        0x11, 0x11, 0x12, 0x50, 0x11, 
        0x11, 0x11, 0x11, 0x70, 0x11, 
        0x12, 0x01, 0x11, 0x10, 0x11, 
        0x11, 0x01, 0x11, 0x00, 0x11, 
        0x11, 0x80, 0x00, 0x00, 0x11, 
        0x11, 0x21, 0x07, 0x85, 0x11, 
    },
  },
  // Level 30: Board: 0/1~c2c4/1~2~a~~2/1~g~~1e~2/1~1~~~a~2/1~1e~2~2/1c1c~g4/10
  {
    .name = "Lurch",
    .solution = "CbfCFcgCgEcDdFGeFe",
    .board = {
        0x10, 0x41, 0x14, 0x11, 0x11, 
        0x10, 0x11, 0x02, 0x00, 0x11, 
        0x10, 0x80, 0x01, 0x60, 0x11, 
        0x10, 0x10, 0x00, 0x20, 0x11, 
        0x10, 0x16, 0x01, 0x10, 0x11, 
        0x14, 0x14, 0x08, 0x11, 0x11, 
    },
  },
  // Level 31: Board: 0/7h~1/6~e~1/6~f~1/5~~1~1/2~a~~~~e1/1f~1a~fhf1/10
  {
    .name = "Zower",
    .solution = "hBIfHfIfeGGfgGfGHcHdGedFFfGfEfDfeG",
    .board = {
        0x11, 0x11, 0x11, 0x19, 0x01, 
        0x11, 0x11, 0x11, 0x06, 0x01, 
        0x11, 0x11, 0x11, 0x07, 0x01, 
        0x11, 0x11, 0x10, 0x01, 0x01, 
        0x11, 0x02, 0x00, 0x00, 0x61, 
        0x17, 0x01, 0x20, 0x79, 0x71, 
    },
  },
  // Level 32: Board: 0/10/7h~1/4b~2h1/5~~3/3~~cf~g1/2c~fg2b1/10
  {
    .name = "Dr. Von Eiffel",
    .solution = "hCFfEfGfeDIfHffEFfGfgFhF",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x19, 0x01, 
        0x11, 0x11, 0x30, 0x11, 0x91, 
        0x11, 0x11, 0x10, 0x01, 0x11, 
        0x11, 0x10, 0x04, 0x70, 0x81, 
        0x11, 0x40, 0x78, 0x11, 0x31, 
    },
  },
  // Level 33: Board: 0/8g1/4~b~~b1/3~~1~3/3~2~~e1/2c~~e~~2/2g~gcb~2/10
  {
    .name = "Lord Droon",
    .solution = "FcIcFfEfEddFeFHccFdFeFeGdGfGeGgGIeHfIccGdGeGHc",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x81, 
        0x11, 0x11, 0x03, 0x00, 0x31, 
        0x11, 0x10, 0x01, 0x01, 0x11, 
        0x11, 0x10, 0x11, 0x00, 0x61, 
        0x11, 0x40, 0x06, 0x00, 0x11, 
        0x11, 0x80, 0x84, 0x30, 0x11, 
    },
  },
  // Level 34: Board: 0/10/4d~4/5~1~b1/2d~1~1~2/3~~~h~a1/2cbac1h2/10
  {
    .name = "Blooie Katz",
    .solution = "gFcEdFeFfFgFIfHfGfFfIdHfGfFfeCfFgFcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x50, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x10, 0x31, 
        0x11, 0x50, 0x10, 0x10, 0x11, 
        0x11, 0x10, 0x00, 0x90, 0x21, 
        0x11, 0x43, 0x24, 0x19, 0x11, 
    },
  },
  // Level 35: Board: 0/8g1/4b~1~f1/5~1~2/5~~~~1/2~b~~h~d1/1h~1~~dgf1/10
  {
    .name = "Zummers",
    .solution = "IfIchEIcHeGeGfHfdFFffGEfeCDf",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x81, 
        0x11, 0x11, 0x30, 0x10, 0x71, 
        0x11, 0x11, 0x10, 0x10, 0x11, 
        0x11, 0x11, 0x10, 0x00, 0x01, 
        0x11, 0x03, 0x00, 0x90, 0x51, 
        0x19, 0x01, 0x00, 0x58, 0x71, 
    },
  },
  // Level 36: Board: 0/10/6~h2/3d2~3/2~f~~~c2/2c1b~~3/3bh~~fd1/10
  {
    .name = "Jogg-oons",
    .solution = "eGFgdEdEHgGgeEIgHgHcHeGeFeEeEgDedGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x09, 0x11, 
        0x11, 0x15, 0x11, 0x01, 0x11, 
        0x11, 0x07, 0x00, 0x04, 0x11, 
        0x11, 0x41, 0x30, 0x01, 0x11, 
        0x11, 0x13, 0x90, 0x07, 0x51, 
    },
  },
  // Level 37: Board: 0/10/2~g6/1eb7/2h~~5/2g1~~h3/3b~ae~a1/10
  {
    .name = "Dr. McGuire",
    .solution = "cEdEGfFfcEdEbDDccEFgdEeFeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x08, 0x11, 0x11, 0x11, 
        0x16, 0x31, 0x11, 0x11, 0x11, 
        0x11, 0x90, 0x01, 0x11, 0x11, 
        0x11, 0x81, 0x00, 0x91, 0x11, 
        0x11, 0x13, 0x02, 0x60, 0x21, 
    },
  },
  // Level 38: Board: 0/4e5/2~~d5/2b1e5/1~f~6/1~1~6/1~d~~~dfb1/10
  {
    .name = "Quandary",
    .solution = "EcDcCeCeGgFgcEbGcGdGeGfGbGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x61, 0x11, 0x11, 
        0x11, 0x00, 0x51, 0x11, 0x11, 
        0x11, 0x31, 0x61, 0x11, 0x11, 
        0x10, 0x70, 0x11, 0x11, 0x11, 
        0x10, 0x10, 0x11, 0x11, 0x11, 
        0x10, 0x50, 0x00, 0x57, 0x31, 
    },
  },
  // Level 39: Board: 0/10/6~b2/2a~2~3/1b1~1~~3/1g~~~~a3/1be~~eg3/10
  {
    .name = "Fred",
    .solution = "HccDGedGFfGfcGEfFfbGbFdGbGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x03, 0x11, 
        0x11, 0x20, 0x11, 0x01, 0x11, 
        0x13, 0x10, 0x10, 0x01, 0x11, 
        0x18, 0x00, 0x00, 0x21, 0x11, 
        0x13, 0x60, 0x06, 0x81, 0x11, 
    },
  },
  // Level 40: Board: 0/2g~6/2e~6/3~c5/3~f~4/4d~~ed1/1f~~g~~1c1/10
  {
    .name = "Seersucker",
    .solution = "eEeFHffFgFcBdEeFfFgFhFbGcGdGcCdEeG",
    .board = {
        0x11, 0x80, 0x11, 0x11, 0x11, 
        0x11, 0x60, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x41, 0x11, 0x11, 
        0x11, 0x10, 0x70, 0x11, 0x11, 
        0x11, 0x11, 0x50, 0x06, 0x51, 
        0x17, 0x00, 0x80, 0x01, 0x41, 
    },
  },
  // Level 41: Board: 0/4~g4/3~~5/1a~~3~f1/2~~3a2/2d~~~~f2/3ga~~d2/10
  {
    .name = "Hud Fuddnudler",
    .solution = "IdHgHfbDcFdFcFeGdFeFeGFbEc",
    .board = {
        0x11, 0x11, 0x08, 0x11, 0x11, 
        0x11, 0x10, 0x01, 0x11, 0x11, 
        0x12, 0x00, 0x11, 0x10, 0x71, 
        0x11, 0x00, 0x11, 0x12, 0x11, 
        0x11, 0x50, 0x00, 0x07, 0x11, 
        0x11, 0x18, 0x20, 0x05, 0x11, 
    },
  },
  // Level 42: Board: 0/10/10/10/1g5~d1/1chd~~d~2/1h1cd~g~2/10
  {
    .name = "George",
    .solution = "GfdFcFbFdFcFbFcFEfDfCfeGgGIeHfdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x18, 0x11, 0x11, 0x10, 0x51, 
        0x14, 0x95, 0x00, 0x50, 0x11, 
        0x19, 0x14, 0x50, 0x80, 0x11, 
    },
  },
  // Level 43: Board: 0/1e~7/1d~7/2~4~f1/2~e2~~g1/2~g~~~g2/2~1~~fd~1/10
  {
    .name = "Roosting Quail",
    .solution = "IdHebBbCDedFcFdFeFfGeGhGfGIe",
    .board = {
        0x16, 0x01, 0x11, 0x11, 0x11, 
        0x15, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x71, 
        0x11, 0x06, 0x11, 0x00, 0x81, 
        0x11, 0x08, 0x00, 0x08, 0x11, 
        0x11, 0x01, 0x00, 0x75, 0x01, 
    },
  },
  // Level 44: Board: 0/1~f1e~4/1~2b~4/1~2e~~g2/1~~2~~b2/1g~2e~3/1b~~~f~3/10
  {
    .name = "Bell Ringer",
    .solution = "HdfFFgeBeDCbbEcGbFcGdGeGHebGcGdGeD",
    .board = {
        0x10, 0x71, 0x60, 0x11, 0x11, 
        0x10, 0x11, 0x30, 0x11, 0x11, 
        0x10, 0x11, 0x60, 0x08, 0x11, 
        0x10, 0x01, 0x10, 0x03, 0x11, 
        0x18, 0x01, 0x16, 0x01, 0x11, 
        0x13, 0x00, 0x07, 0x01, 0x11, 
    },
  },
  // Level 45: Board: 0/1g~1c~~3/2~3~3/2~d~~~3/1~~b1~~3/1~h2~~~2/1~d~hb1gc1/10
  {
    .name = "Plain Sneetches",
    .solution = "DdbBcDCecGdDeDfFgFeBfBgFDecGdG",
    .board = {
        0x18, 0x01, 0x40, 0x01, 0x11, 
        0x11, 0x01, 0x11, 0x01, 0x11, 
        0x11, 0x05, 0x00, 0x01, 0x11, 
        0x10, 0x03, 0x10, 0x01, 0x11, 
        0x10, 0x91, 0x10, 0x00, 0x11, 
        0x10, 0x50, 0x93, 0x18, 0x41, 
    },
  },
  // Level 46: Board: 0/1h5~a1/1g~4~f1/2~1~b1~2/2~1~2~2/2~~~gf~2/3~abh~2/10
  {
    .name = "Blogg",
    .solution = "IbIcFdEgbCcFdFbCcFdFeGdGeGfG",
    .board = {
        0x19, 0x11, 0x11, 0x10, 0x21, 
        0x18, 0x01, 0x11, 0x10, 0x71, 
        0x11, 0x01, 0x03, 0x10, 0x11, 
        0x11, 0x01, 0x01, 0x10, 0x11, 
        0x11, 0x00, 0x08, 0x70, 0x11, 
        0x11, 0x10, 0x23, 0x90, 0x11, 
    },
  },
  // Level 47: Board: 0/2b~6/3~3~d1/3~3~2/1c~~~2b2/2~1~1~g~1/1g~ac~~da1/10
  {
    .name = "ZoopaZoop Troupe",
    .solution = "cBbGDebEcEdEIchFdGeGfGHfgGCgcGdGeGbGcGdGeGfGgG",
    .board = {
        0x11, 0x30, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x10, 0x51, 
        0x11, 0x10, 0x11, 0x10, 0x11, 
        0x14, 0x00, 0x01, 0x13, 0x11, 
        0x11, 0x01, 0x01, 0x08, 0x01, 
        0x18, 0x02, 0x40, 0x05, 0x21, 
    },
  },
  // Level 48: Board: 0/1f~7/2~4f2/2~ec~~h2/2~a1~~3/2~2c~3/1a~1~eh3/10
  {
    .name = "Long Legger Kwong",
    .solution = "fFHdGeeDdDDeeDfDHdGdFdFgeGbBEdDe",
    .board = {
        0x17, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x17, 0x11, 
        0x11, 0x06, 0x40, 0x09, 0x11, 
        0x11, 0x02, 0x10, 0x01, 0x11, 
        0x11, 0x01, 0x14, 0x01, 0x11, 
        0x12, 0x01, 0x06, 0x91, 0x11, 
    },
  },
  // Level 49: Board: 0/2h~~d4/4~5/4~h~3/3dh1~1h1/6~~b1/5hb3/10
  {
    .name = "Quincy Queek",
    .solution = "FdIfHfcBdEdBFbeDIffGfD",
    .board = {
        0x11, 0x90, 0x05, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x09, 0x01, 0x11, 
        0x11, 0x15, 0x91, 0x01, 0x91, 
        0x11, 0x11, 0x11, 0x00, 0x31, 
        0x11, 0x11, 0x19, 0x31, 0x11, 
    },
  },
  // Level 50: Board: 0/10/2d~6/3~g~~3/3~fh~3/2~~h1~3/1f~~1d~gd1/10
  {
    .name = "Kwigger",
    .solution = "eDfDEfFeEfcCdEDfeEEfIgfE",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x50, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x80, 0x01, 0x11, 
        0x11, 0x10, 0x79, 0x01, 0x11, 
        0x11, 0x00, 0x91, 0x01, 0x11, 
        0x17, 0x00, 0x15, 0x08, 0x51, 
    },
  },
  // Level 51: Board: 0/10/1h~7/2~4~c1/1g~2d~~d1/1b~1~gb~2/2~h~c1~2/10
  {
    .name = "Russian Palooski",
    .solution = "bCbEfEFfcGbFGfFfcGgFIdIeHfGf",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x19, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x41, 
        0x18, 0x01, 0x15, 0x00, 0x51, 
        0x13, 0x01, 0x08, 0x30, 0x11, 
        0x11, 0x09, 0x04, 0x10, 0x11, 
    },
  },
  // Level 52: Board: 0/10/5e4/5c4/5d1f2/3~~edb~1/2c~f3b1/10
  {
    .name = "East Beast",
    .solution = "FffFhFGfFfEfHfGfFf",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x16, 0x11, 0x11, 
        0x11, 0x11, 0x14, 0x11, 0x11, 
        0x11, 0x11, 0x15, 0x17, 0x11, 
        0x11, 0x10, 0x06, 0x53, 0x01, 
        0x11, 0x40, 0x71, 0x11, 0x31, 
    },
  },
  // Level 53: Board: 0/4~c2c1/4~2~g1/4~1h~2/4~~ba2/2~~~ghb2/1a~1~5/10
  {
    .name = "Mulligatawny",
    .solution = "GefEIcHeFbHfGfFfEfDfIcHfGfFf",
    .board = {
        0x11, 0x11, 0x04, 0x11, 0x41, 
        0x11, 0x11, 0x01, 0x10, 0x81, 
        0x11, 0x11, 0x01, 0x90, 0x11, 
        0x11, 0x11, 0x00, 0x32, 0x11, 
        0x11, 0x00, 0x08, 0x93, 0x11, 
        0x12, 0x01, 0x01, 0x11, 0x11, 
    },
  },
  // Level 54: Board: 0/2b~1a~3/3~2~3/3~2~3/1d1~1~~e2/1h~~~eha2/1d~~~1b3/10
  {
    .name = "Nink",
    .solution = "HeGefBGfFfbGcGcBdFbFeFfFbGcG",
    .board = {
        0x11, 0x30, 0x12, 0x01, 0x11, 
        0x11, 0x10, 0x11, 0x01, 0x11, 
        0x11, 0x10, 0x11, 0x01, 0x11, 
        0x15, 0x10, 0x10, 0x06, 0x11, 
        0x19, 0x00, 0x06, 0x92, 0x11, 
        0x15, 0x00, 0x01, 0x31, 0x11, 
    },
  },
  // Level 55: Board: 0/5~c3/3f1~4/3h~~4/4f~1~f1/1~~~e~1~e1/1c1~1hf~2/10
  {
    .name = "Bingle Bug",
    .solution = "IedDeDeFGbEfFfIffGEfDfCfdDEf",
    .board = {
        0x11, 0x11, 0x10, 0x41, 0x11, 
        0x11, 0x17, 0x10, 0x11, 0x11, 
        0x11, 0x19, 0x00, 0x11, 0x11, 
        0x11, 0x11, 0x70, 0x10, 0x71, 
        0x10, 0x00, 0x60, 0x10, 0x61, 
        0x14, 0x10, 0x19, 0x70, 0x11, 
    },
  },
  // Level 56: Board: 0/10/1d~~~h4/2c~~5/3~~2~f1/1~~f~~~~h1/1c1d~hd~2/10
  {
    .name = "Sam I Am",
    .solution = "IeDfIfHfdGFceFbCEgcFcCGgdEcDDfCfdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x15, 0x00, 0x09, 0x11, 0x11, 
        0x11, 0x40, 0x01, 0x11, 0x11, 
        0x11, 0x10, 0x01, 0x10, 0x71, 
        0x10, 0x07, 0x00, 0x00, 0x91, 
        0x14, 0x15, 0x09, 0x50, 0x11, 
    },
  },
  // Level 57: Board: 0/3e~5/3d~h4/4~e4/4~1b3/1a~1~~d3/2~ba~h3/10
  {
    .name = "Zable",
    .solution = "dBFdFdeFeGGfFfbFcGdGdCeG",
    .board = {
        0x11, 0x16, 0x01, 0x11, 0x11, 
        0x11, 0x15, 0x09, 0x11, 0x11, 
        0x11, 0x11, 0x06, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x31, 0x11, 
        0x12, 0x01, 0x00, 0x51, 0x11, 
        0x11, 0x03, 0x20, 0x91, 0x11, 
    },
  },
  // Level 58: Board: 0/4~~d3/3~~b4/2~db5/2~7/2f~~f4/1db~~c~c2/10
  {
    .name = "Lord Godiva",
    .solution = "cGdGFffGDdcFEfDfGbFbEcDdEdDdFcEdCgEgDd",
    .board = {
        0x11, 0x11, 0x00, 0x51, 0x11, 
        0x11, 0x10, 0x03, 0x11, 0x11, 
        0x11, 0x05, 0x31, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x70, 0x07, 0x11, 0x11, 
        0x15, 0x30, 0x04, 0x04, 0x11, 
    },
  },
  // Level 59: Board: 0/7h~1/1h6~1/1d~~3d~1/2~~4~1/2~~h3~1/3fa~a~f1/10
  {
    .name = "Jibboo",
    .solution = "EfeGDfdGeGfGgGhBbDbDIgHgGgFgEgcDhDcFdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x19, 0x01, 
        0x19, 0x11, 0x11, 0x11, 0x01, 
        0x15, 0x00, 0x11, 0x15, 0x01, 
        0x11, 0x00, 0x11, 0x11, 0x01, 
        0x11, 0x00, 0x91, 0x11, 0x01, 
        0x11, 0x17, 0x20, 0x20, 0x71, 
    },
  },

};
