#include "vexed.h"
static const leveldefn confusionpack[] = {
  // Level 0: Board: 0/7d~1/1~g5~1/1~5d~1/1~3b2~1/1~~~~ghc~1/1~~h~c1b~1/10
  {
    .name = "Seclusion",
    .solution = "hBhDFfFfEfGfFfHfGfeFdFeFfFgFDgCgCcbFcGbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x15, 0x01, 
        0x10, 0x81, 0x11, 0x11, 0x01, 
        0x10, 0x11, 0x11, 0x15, 0x01, 
        0x10, 0x11, 0x13, 0x11, 0x01, 
        0x10, 0x00, 0x08, 0x94, 0x01, 
        0x10, 0x09, 0x04, 0x13, 0x01, 
    },
  },
  // Level 1: Board: 0/10/1e~4~b1/1b~4~2/1f~2~a~2/2c~~~c~2/1fa~f2e2/10
  {
    .name = "Illusion",
    .solution = "GeFfEfGfFfEfIcHfGfFfEfbGbCbDcFdFcFeFfFgFCgEgbE",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x16, 0x01, 0x11, 0x10, 0x31, 
        0x13, 0x01, 0x11, 0x10, 0x11, 
        0x17, 0x01, 0x10, 0x20, 0x11, 
        0x11, 0x40, 0x00, 0x40, 0x11, 
        0x17, 0x20, 0x71, 0x16, 0x11, 
    },
  },
  // Level 2: Board: 0/10/1b~7/2~7/1h~~2d3/2bc~~e~~1/1edghg1c2/10
  {
    .name = "Din",
    .solution = "bEcEdFeFdFgFhFgFfFdGcGdGcGeGGfHfdGFfGfbCIfHfGfeFcGfFgFbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x13, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x19, 0x00, 0x11, 0x51, 0x11, 
        0x11, 0x34, 0x00, 0x60, 0x01, 
        0x16, 0x58, 0x98, 0x14, 0x11, 
    },
  },
  // Level 3: Board: 0/3~e2b2/3~2~g2/3~2~f2/2~~~~~3/1b~1~e~~2/1g~b~1~f2/10
  {
    .name = "Chaos",
    .solution = "EbfFHcHdHdGfdGFfdEeEGegFFefFEeEgDgDebGcG",
    .board = {
        0x11, 0x10, 0x61, 0x13, 0x11, 
        0x11, 0x10, 0x11, 0x08, 0x11, 
        0x11, 0x10, 0x11, 0x07, 0x11, 
        0x11, 0x00, 0x00, 0x01, 0x11, 
        0x13, 0x01, 0x06, 0x00, 0x11, 
        0x18, 0x03, 0x01, 0x07, 0x11, 
    },
  },
  // Level 4: Board: 0/3a6/2~d2~e2/2~2~~3/1h~~~f~3/1b2d1h3/1af~eb4/10
  {
    .name = "Reperfusion",
    .solution = "DccEdEfEHcGdFebEcEGeFgFedEeEfEcGeGDccEdEbGcGbGcGdG",
    .board = {
        0x11, 0x12, 0x11, 0x11, 0x11, 
        0x11, 0x05, 0x11, 0x06, 0x11, 
        0x11, 0x01, 0x10, 0x01, 0x11, 
        0x19, 0x00, 0x07, 0x01, 0x11, 
        0x13, 0x11, 0x51, 0x91, 0x11, 
        0x12, 0x70, 0x63, 0x11, 0x11, 
    },
  },
  // Level 5: Board: 0/4g~1c~1/5~2~1/5~2~1/1c~1~f~d~1/2~~~g~f~1/2ad~a~1~1/10
  {
    .name = "Misorder",
    .solution = "fEHfbEcFFfdFfGHfGfeFeBFefFdGhBgFhFcGdGeG",
    .board = {
        0x11, 0x11, 0x80, 0x14, 0x01, 
        0x11, 0x11, 0x10, 0x11, 0x01, 
        0x11, 0x11, 0x10, 0x11, 0x01, 
        0x14, 0x01, 0x07, 0x05, 0x01, 
        0x11, 0x00, 0x08, 0x07, 0x01, 
        0x11, 0x25, 0x02, 0x01, 0x01, 
    },
  },
  // Level 6: Board: 0/10/4c~~3/2c1a~g~2/2g4~2/2f~~b~~2/3~g1baf1/10
  {
    .name = "Topsy-turviness",
    .solution = "fFGdeCfCEgcFHgIggDfDeDHfGfFfdFeFfFhGgGgDfDgDHfGfgGFfcFcF",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x40, 0x01, 0x11, 
        0x11, 0x41, 0x20, 0x80, 0x11, 
        0x11, 0x81, 0x11, 0x10, 0x11, 
        0x11, 0x70, 0x03, 0x00, 0x11, 
        0x11, 0x10, 0x81, 0x32, 0x71, 
    },
  },
  // Level 7: Board: 0/2c~6/3~6/3~2d~2/3~1c1g~1/1~~~~bhe~1/2b~g1ehd1/10
  {
    .name = "Abashment",
    .solution = "gDFfhFhEEgFfGfHfIfEfFfGfHfDfCfEfDfFfEfcBcFbFdFcFeFfFcG",
    .board = {
        0x11, 0x40, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x11, 0x50, 0x11, 
        0x11, 0x10, 0x14, 0x18, 0x01, 
        0x10, 0x00, 0x03, 0x96, 0x01, 
        0x11, 0x30, 0x81, 0x69, 0x51, 
    },
  },
  // Level 8: Board: 0/4a~g~~1/1~c2~1e~1/1~3~2~1/1~3~~~e1/1~~~~~~dc1/1~~ag1~1d1/10
  {
    .name = "Disturbance",
    .solution = "gBhBCchCIeHeIeHfIeHeGeFfEfGfFfHfGfbGDfEfFfIfHfGfFfdFeFfFgFhFcFdFeFfFeBFfEfcG",
    .board = {
        0x11, 0x11, 0x20, 0x80, 0x01, 
        0x10, 0x41, 0x10, 0x16, 0x01, 
        0x10, 0x11, 0x10, 0x11, 0x01, 
        0x10, 0x11, 0x10, 0x00, 0x61, 
        0x10, 0x00, 0x00, 0x05, 0x41, 
        0x10, 0x02, 0x81, 0x01, 0x51, 
    },
  },
  // Level 9: Board: 0/10/5c4/2h~~g~3/3~~1~3/2g~~1~~a1/1ba~bh~~c1/10
  {
    .name = "Mux",
    .solution = "FdcFEfEgcDdFdGcGeGdGfGeGgGIfHfHgfDgFbGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x14, 0x11, 0x11, 
        0x11, 0x90, 0x08, 0x01, 0x11, 
        0x11, 0x10, 0x01, 0x01, 0x11, 
        0x11, 0x80, 0x01, 0x00, 0x21, 
        0x13, 0x20, 0x39, 0x00, 0x41, 
    },
  },
  // Level 10: Board: 0/2e~6/3~~5/4~~g3/1e2~~1hg1/1ba~~~~dc1/1dh1~b~ca1/10
  {
    .name = "Diffusion",
    .solution = "cFbFdFcFdFeFGdfGHfeGGfHfIfbFcFdFFfGfIfEfDfCfFfEfDfcBdCfGgG",
    .board = {
        0x11, 0x60, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x00, 0x81, 0x11, 
        0x16, 0x11, 0x00, 0x19, 0x81, 
        0x13, 0x20, 0x00, 0x05, 0x41, 
        0x15, 0x91, 0x03, 0x04, 0x21, 
    },
  },
  // Level 11: Board: 0/3e~5/2d1~2~f1/2c1~2~2/2e~~2~2/3~fg~~2/1g~~1cd~2/10
  {
    .name = "Muddle",
    .solution = "cEEfcEdEfFeFdFdBEeeFGfFfgGIcHfEfcEdFbGeFfG",
    .board = {
        0x11, 0x16, 0x01, 0x11, 0x11, 
        0x11, 0x51, 0x01, 0x10, 0x71, 
        0x11, 0x41, 0x01, 0x10, 0x11, 
        0x11, 0x60, 0x01, 0x10, 0x11, 
        0x11, 0x10, 0x78, 0x00, 0x11, 
        0x18, 0x00, 0x14, 0x50, 0x11, 
    },
  },
  // Level 12: Board: 0/1~c7/1~3~cbh1/1~3~e3/1~3~1~b1/1a~1~a~~f1/1f~~~e1~h1/10
  {
    .name = "Disarray",
    .solution = "GdFfbFcGHcIeIfHfGfGcfFgFIcHcGcfFgFbGcGdGCbGdbGcGdG",
    .board = {
        0x10, 0x41, 0x11, 0x11, 0x11, 
        0x10, 0x11, 0x10, 0x43, 0x91, 
        0x10, 0x11, 0x10, 0x61, 0x11, 
        0x10, 0x11, 0x10, 0x10, 0x31, 
        0x12, 0x01, 0x02, 0x00, 0x71, 
        0x17, 0x00, 0x06, 0x10, 0x91, 
    },
  },
  // Level 13: Board: 0/8e1/7~g1/5~c~2/1~~a~~1~2/1~1h~~~~~1/1e1gcbhab1/10
  {
    .name = "Transfusion",
    .solution = "gDIcIcHddFHfGfGdFeEeDeCefFeFhFgFfFfGHfGfGgFgdFeFfGeGfGgGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x61, 
        0x11, 0x11, 0x11, 0x10, 0x81, 
        0x11, 0x11, 0x10, 0x40, 0x11, 
        0x10, 0x02, 0x00, 0x10, 0x11, 
        0x10, 0x19, 0x00, 0x00, 0x01, 
        0x16, 0x18, 0x43, 0x92, 0x31, 
    },
  },
  // Level 14: Board: 0/7~b1/2~b3~2/2~a3~2/1~~1~a1g2/1~c~~1~e2/1~ge~ac3/10
  {
    .name = "Disconcertment",
    .solution = "DcDdCeCfcFFgFebFcFdFeGHfdGeGHfcGdGeGIbHfbGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x10, 0x31, 
        0x11, 0x03, 0x11, 0x10, 0x11, 
        0x11, 0x02, 0x11, 0x10, 0x11, 
        0x10, 0x01, 0x02, 0x18, 0x11, 
        0x10, 0x40, 0x01, 0x06, 0x11, 
        0x10, 0x86, 0x02, 0x41, 0x11, 
    },
  },
  // Level 15: Board: 0/1g3~bc2/1b~2~c3/2~~1~4/2~~1~4/1a~~~~~~f1/2f~~2ga1/10
  {
    .name = "Profusion",
    .solution = "GbHbbFbCbCFfIfHfGfFfEgcDdFeFfFgFcFdFcFeFcGfFgF",
    .board = {
        0x18, 0x11, 0x10, 0x34, 0x11, 
        0x13, 0x01, 0x10, 0x41, 0x11, 
        0x11, 0x00, 0x10, 0x11, 0x11, 
        0x11, 0x00, 0x10, 0x11, 0x11, 
        0x12, 0x00, 0x00, 0x00, 0x71, 
        0x11, 0x70, 0x01, 0x18, 0x21, 
    },
  },
  // Level 16: Board: 0/2~gf5/2~7/1~~7/1h~4~e1/1a~f~a1e2/1f2~g~h2/10
  {
    .name = "Discombobulation",
    .solution = "IebFFfdFcFeFdFbFcFdFFfEfDfDbEbDbCdcFdFeFeGfG",
    .board = {
        0x11, 0x08, 0x71, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x10, 0x01, 0x11, 0x11, 0x11, 
        0x19, 0x01, 0x11, 0x10, 0x61, 
        0x12, 0x07, 0x02, 0x16, 0x11, 
        0x17, 0x11, 0x08, 0x09, 0x11, 
    },
  },
  // Level 17: Board: 0/2h~6/2g~~a4/4~5/2g~~5/2fa~~~~h1/3h1~~~f1/10
  {
    .name = "Preclusion",
    .solution = "cBcEdEdCEeDeeFdFcFeFdFfFeFfFgGIfHfGfFfcFcCdCeFFcGgeFfFfGgG",
    .board = {
        0x11, 0x90, 0x11, 0x11, 0x11, 
        0x11, 0x80, 0x02, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x80, 0x01, 0x11, 0x11, 
        0x11, 0x72, 0x00, 0x00, 0x91, 
        0x11, 0x19, 0x10, 0x00, 0x71, 
    },
  },
  // Level 18: Board: 0/1f~1~d4/2~1~f4/2~1~3h1/2~~~~~~b1/1~~d~~~~a1/1ha1~fb~2/10
  {
    .name = "Inclusion",
    .solution = "FgdFGgIeIeeFfFHfGfFfFbIfHfGfeEfEEfFffGDfbBEfcECfDfFc",
    .board = {
        0x17, 0x01, 0x05, 0x11, 0x11, 
        0x11, 0x01, 0x07, 0x11, 0x11, 
        0x11, 0x01, 0x01, 0x11, 0x91, 
        0x11, 0x00, 0x00, 0x00, 0x31, 
        0x10, 0x05, 0x00, 0x00, 0x21, 
        0x19, 0x21, 0x07, 0x30, 0x11, 
    },
  },
  // Level 19: Board: 0/4b~4/4g~~f2/1e~2~~3/2~~~~~3/2~~1gf~~1/3baceca1/10
  {
    .name = "Mess",
    .solution = "eBfEHcGdFeEeGeFeEeDebDcEdEeEfEgFhFfGfGeGdGgGIffGHfeGGfeCfEgFgGdGfGcFdGeG",
    .board = {
        0x11, 0x11, 0x30, 0x11, 0x11, 
        0x11, 0x11, 0x80, 0x07, 0x11, 
        0x16, 0x01, 0x10, 0x01, 0x11, 
        0x11, 0x00, 0x00, 0x01, 0x11, 
        0x11, 0x00, 0x18, 0x70, 0x01, 
        0x11, 0x13, 0x24, 0x64, 0x21, 
    },
  },
  // Level 20: Board: 0/1b~4e~1/1h~5~1/2~~2~e~1/2~~d~~3/2f~c~c~2/2d~1bhf2/10
  {
    .name = "Tumult",
    .solution = "bBbCHdGeeEEfcDcEdEFeEegFfFeFDedFcFeFdFeFHfGfFfEfhBIdHdfG",
    .board = {
        0x13, 0x01, 0x11, 0x16, 0x01, 
        0x19, 0x01, 0x11, 0x11, 0x01, 
        0x11, 0x00, 0x11, 0x06, 0x01, 
        0x11, 0x00, 0x50, 0x01, 0x11, 
        0x11, 0x70, 0x40, 0x40, 0x11, 
        0x11, 0x50, 0x13, 0x97, 0x11, 
    },
  },
  // Level 21: Board: 0/5~d3/5~4/5~4/1be~1~~~f1/1gd~~~~~d1/1f1g~e~~b1/10
  {
    .name = "Infusion",
    .solution = "cEdGcFbFdFcFbFfGeGdFcFgGfGeGdFeFfFgFIeHeGfFfEfDfCfHfGfGbIfHfFfEfeGdGeGfGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x10, 0x51, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x13, 0x60, 0x10, 0x00, 0x71, 
        0x18, 0x50, 0x00, 0x00, 0x51, 
        0x17, 0x18, 0x06, 0x00, 0x31, 
    },
  },
  // Level 22: Board: 0/1dg~3~f1/1beh~2~2/4~2~2/2b~~2~2/4~~~~~1/1d~hf~g1e1/10
  {
    .name = "Discomposure",
    .solution = "dCeGcBdCcCdCeFfFgFhFIbHfGfeGbBcCdCbGcGbCcCdCcEdE",
    .board = {
        0x15, 0x80, 0x11, 0x10, 0x71, 
        0x13, 0x69, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x01, 0x10, 0x11, 
        0x11, 0x30, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x00, 0x00, 0x01, 
        0x15, 0x09, 0x70, 0x81, 0x61, 
    },
  },
  // Level 23: Board: 0/10/2~e6/1~~d6/1h~h~~4/1d2~e~~c1/3f~hc~f1/10
  {
    .name = "Disillusion",
    .solution = "IfDcDdCddGdEcEbEdEcEfFgGfGEgdEeEeGfGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x06, 0x11, 0x11, 0x11, 
        0x10, 0x05, 0x11, 0x11, 0x11, 
        0x19, 0x09, 0x00, 0x11, 0x11, 
        0x15, 0x11, 0x06, 0x00, 0x41, 
        0x11, 0x17, 0x09, 0x40, 0x71, 
    },
  },
  // Level 24: Board: 0/6~d2/6~3/1f~3~~2/2~2~c~e1/1b~~~~b~d1/1c1~~ef~2/10
  {
    .name = "Occlusion",
    .solution = "HbgDIfbDGecFgFIfHfdGFfGfbFcFEfeGDfCfdGeGfG",
    .board = {
        0x11, 0x11, 0x11, 0x05, 0x11, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x17, 0x01, 0x11, 0x00, 0x11, 
        0x11, 0x01, 0x10, 0x40, 0x61, 
        0x13, 0x00, 0x00, 0x30, 0x51, 
        0x14, 0x10, 0x06, 0x70, 0x11, 
    },
  },
  // Level 25: Board: 0/4~h1c2/4~1~e2/4~~f3/1a~1~~1~e1/2~~~~~~2/2c~f~1ha1/10
  {
    .name = "Uneasiness",
    .solution = "FbIeHfGfeFfFgFGdbEEgcFFgdFeFfFgFHcGdFfdGHcGdcGdG",
    .board = {
        0x11, 0x11, 0x09, 0x14, 0x11, 
        0x11, 0x11, 0x01, 0x06, 0x11, 
        0x11, 0x11, 0x00, 0x71, 0x11, 
        0x12, 0x01, 0x00, 0x10, 0x61, 
        0x11, 0x00, 0x00, 0x00, 0x11, 
        0x11, 0x40, 0x70, 0x19, 0x21, 
    },
  },
  // Level 26: Board: 0/6~b2/3h~~~3/5~4/4~~d3/1fgf~~4/1dh1~~gb2/10
  {
    .name = "Exclusion",
    .solution = "HbGgGcFgdFcFeFdFdCeCbFcFdFFeEfDfGeFeEffGDf",
    .board = {
        0x11, 0x11, 0x11, 0x03, 0x11, 
        0x11, 0x19, 0x00, 0x01, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x00, 0x51, 0x11, 
        0x17, 0x87, 0x00, 0x11, 0x11, 
        0x15, 0x91, 0x00, 0x83, 0x11, 
    },
  },
  // Level 27: Board: 0/6a~2/7~f1/3c2~~g1/3h~~~~2/1~hf~~~da1/1gd1~~~1c1/10
  {
    .name = "Unease",
    .solution = "gBIcHdHeCfdFGfHfGfFfdEbFIdHfGfeEEfDfIfHffEgEhFFfGfEfDfeG",
    .board = {
        0x11, 0x11, 0x11, 0x20, 0x11, 
        0x11, 0x11, 0x11, 0x10, 0x71, 
        0x11, 0x14, 0x11, 0x00, 0x81, 
        0x11, 0x19, 0x00, 0x00, 0x11, 
        0x10, 0x97, 0x00, 0x05, 0x21, 
        0x18, 0x51, 0x00, 0x01, 0x41, 
    },
  },
  // Level 28: Board: 0/8b1/1c~4~c1/2~2~~~2/2h2~1~d1/2d~~~~~e1/2fbef1~h1/10
  {
    .name = "Stew",
    .solution = "cFdFeFfFgFIfIcIcHdHfGfFfHfIfcFGfFfdFeFfFgFbCcFdFGdFfcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x31, 
        0x14, 0x01, 0x11, 0x10, 0x41, 
        0x11, 0x01, 0x10, 0x00, 0x11, 
        0x11, 0x91, 0x10, 0x10, 0x51, 
        0x11, 0x50, 0x00, 0x00, 0x61, 
        0x11, 0x73, 0x67, 0x10, 0x91, 
    },
  },
  // Level 29: Board: 0/4~f1~d1/4~1e~2/1h~1~2~2/2~~~2~2/1f1~dbh~~1/1e~~3~b1/10
  {
    .name = "Flap",
    .solution = "gFfFgFhFIbeFfFgCHfGfFfEfbGFbbDEfcEdFbGeFfFgF",
    .board = {
        0x11, 0x11, 0x07, 0x10, 0x51, 
        0x11, 0x11, 0x01, 0x60, 0x11, 
        0x19, 0x01, 0x01, 0x10, 0x11, 
        0x11, 0x00, 0x01, 0x10, 0x11, 
        0x17, 0x10, 0x53, 0x90, 0x01, 
        0x16, 0x00, 0x11, 0x10, 0x31, 
    },
  },
  // Level 30: Board: 0/6~f2/6~3/2d~~1~3/2ag~~b3/2f1~~1gb1/3d~~eae1/10
  {
    .name = "Muck",
    .solution = "cDdDHbGgFgdEcEdEeEGeGeFefGEeDeeFEgFgfGIfeGfGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x07, 0x11, 
        0x11, 0x11, 0x11, 0x01, 0x11, 
        0x11, 0x50, 0x01, 0x01, 0x11, 
        0x11, 0x28, 0x00, 0x31, 0x11, 
        0x11, 0x71, 0x00, 0x18, 0x31, 
        0x11, 0x15, 0x00, 0x62, 0x61, 
    },
  },
  // Level 31: Board: 0/1b~7/2~1d~4/2~2~4/2~eh~~3/1~ea1~bh2/2a1~cdc2/10
  {
    .name = "Fusion",
    .solution = "bBeEdEcECfFgGfeEdEDfHffEeEeCGeFegFfFHfeGfGEebFDf",
    .board = {
        0x13, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x50, 0x11, 0x11, 
        0x11, 0x01, 0x10, 0x11, 0x11, 
        0x11, 0x06, 0x90, 0x01, 0x11, 
        0x10, 0x62, 0x10, 0x39, 0x11, 
        0x11, 0x21, 0x04, 0x54, 0x11, 
    },
  },
  // Level 32: Board: 0/2f~6/3~~be3/2~e~5/2~1~~4/2~c~b~3/1~~b1c~f2/10
  {
    .name = "Embarrassment",
    .solution = "dFdDFcEdHgfFeFGceFGfFfFceEDgCgEfDdcBdDeF",
    .board = {
        0x11, 0x70, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x03, 0x61, 0x11, 
        0x11, 0x06, 0x01, 0x11, 0x11, 
        0x11, 0x01, 0x00, 0x11, 0x11, 
        0x11, 0x04, 0x03, 0x01, 0x11, 
        0x10, 0x03, 0x14, 0x07, 0x11, 
    },
  },
  // Level 33: Board: 0/10/1h~7/1b~7/2~7/1c~~~~~af1/1fb1~~ahc1/10
  {
    .name = "Ataxia",
    .solution = "bFcFdFGgHgIfHfGfFfEfDfCfbCbDcFdFeFfFfGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x19, 0x01, 0x11, 0x11, 0x11, 
        0x13, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x14, 0x00, 0x00, 0x02, 0x71, 
        0x17, 0x31, 0x00, 0x29, 0x41, 
    },
  },
  // Level 34: Board: 0/10/1f~7/2~7/1e~~~5/2~cg~~b~1/1b~gc~f1e1/10
  {
    .name = "Collusion",
    .solution = "bGbCbEcEdECgDfEfGgeFcFHffFgFhFcGdGbGcGdGeG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x17, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x16, 0x00, 0x01, 0x11, 0x11, 
        0x11, 0x04, 0x80, 0x03, 0x01, 
        0x13, 0x08, 0x40, 0x71, 0x61, 
    },
  },
  // Level 35: Board: 0/1c~7/2~4~e1/2~3~e2/2~d~~~f2/1ahad~~c2/1f1h1~~3/10
  {
    .name = "Intrusion",
    .solution = "dEbBcEdEeFdFcFHdIceFfFHeGeHeFfGfbFcFEfDfCfFfEfHf",
    .board = {
        0x14, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x10, 0x61, 
        0x11, 0x01, 0x11, 0x06, 0x11, 
        0x11, 0x05, 0x00, 0x07, 0x11, 
        0x12, 0x92, 0x50, 0x04, 0x11, 
        0x17, 0x19, 0x10, 0x01, 0x11, 
    },
  },
  // Level 36: Board: 0/1~~c6/1~5~a1/1~5~2/1~5~2/1~~~~g~~h1/1g~dhc~ad1/10
  {
    .name = "Disconcertion",
    .solution = "IcFfEfDffGeGgGIfHfDbDgCgCbbFcGdGeGfGbGcGdGeGfGgG",
    .board = {
        0x10, 0x04, 0x11, 0x11, 0x11, 
        0x10, 0x11, 0x11, 0x10, 0x21, 
        0x10, 0x11, 0x11, 0x10, 0x11, 
        0x10, 0x11, 0x11, 0x10, 0x11, 
        0x10, 0x00, 0x08, 0x00, 0x91, 
        0x18, 0x05, 0x94, 0x02, 0x51, 
    },
  },
  // Level 37: Board: 0/10/10/4~h~da1/4~a~3/2c~~bhg2/1dg~~2bc1/10
  {
    .name = "Hullabaloo",
    .solution = "FdFeEfFfEfGfFfHfGfFfdFeFfFgFcFdFeFfFgFHdIdHdGeFfEfcGGfFfbGcG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x09, 0x05, 0x21, 
        0x11, 0x11, 0x02, 0x01, 0x11, 
        0x11, 0x40, 0x03, 0x98, 0x11, 
        0x15, 0x80, 0x01, 0x13, 0x41, 
    },
  },
  // Level 38: Board: 0/4~dc~2/4~2~2/4~1e~2/2~~~1a~2/2~beac~f1/2df1b1~2/10
  {
    .name = "Contusion",
    .solution = "DfEfFfgFIfgEeFdFFbcFEeDeeFdFfFeFgBGfHfGfHfFfEfGf",
    .board = {
        0x11, 0x11, 0x05, 0x40, 0x11, 
        0x11, 0x11, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x01, 0x60, 0x11, 
        0x11, 0x00, 0x01, 0x20, 0x11, 
        0x11, 0x03, 0x62, 0x40, 0x71, 
        0x11, 0x57, 0x13, 0x10, 0x11, 
    },
  },
  // Level 39: Board: 0/4~c4/4~5/4~3h1/2a~~2~e1/2g~~~~~2/1ea~~h1gc1/10
  {
    .name = "Confounding",
    .solution = "IeHfGfFgEgcEdFcFdFeFfFgFIgIeHfGfFfEfFbeFcGfFgFbGcGdG",
    .board = {
        0x11, 0x11, 0x04, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x91, 
        0x11, 0x20, 0x01, 0x10, 0x61, 
        0x11, 0x80, 0x00, 0x00, 0x11, 
        0x16, 0x20, 0x09, 0x18, 0x41, 
    },
  },
  // Level 40: Board: 0/2a~3~d1/3h~2~h1/4~2~2/4c~1~2/1d~~h~~a2/1h1~1c~3/10
  {
    .name = "Allusion",
    .solution = "eEbFcFEfDfCfIbdCeFHfHfGfFfEfIcHfGfcBdCeF",
    .board = {
        0x11, 0x20, 0x11, 0x10, 0x51, 
        0x11, 0x19, 0x01, 0x10, 0x91, 
        0x11, 0x11, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x40, 0x10, 0x11, 
        0x15, 0x00, 0x90, 0x02, 0x11, 
        0x19, 0x10, 0x14, 0x01, 0x11, 
    },
  },
  // Level 41: Board: 0/10/7~h1/1f~4~2/2~4g2/2~h~~~fe1/1e~1cf~cg1/10
  {
    .name = "Conclusion",
    .solution = "dFeFfFHfbGbDcFdFeFHfIfIceGGfFfHfGfHfFffGEfDfeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x10, 0x91, 
        0x17, 0x01, 0x11, 0x10, 0x11, 
        0x11, 0x01, 0x11, 0x18, 0x11, 
        0x11, 0x09, 0x00, 0x07, 0x61, 
        0x16, 0x01, 0x47, 0x04, 0x81, 
    },
  },
  // Level 42: Board: 0/10/3~gd~3/3~a1~3/3~1f~~2/2~~dh~~e1/1heg2~fa1/10
  {
    .name = "Disorganization",
    .solution = "fEEfEcDfFfEfEddFcFeFdFfFeFfFgFIfHffCgEGfgGFfEfDfbG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x85, 0x01, 0x11, 
        0x11, 0x10, 0x21, 0x01, 0x11, 
        0x11, 0x10, 0x17, 0x00, 0x11, 
        0x11, 0x00, 0x59, 0x00, 0x61, 
        0x19, 0x68, 0x11, 0x07, 0x21, 
    },
  },
  // Level 43: Board: 0/2a~~5/4~5/2fc~~~3/1~h3~~2/1~1~eb~~h1/1~ce1f~ab1/10
  {
    .name = "Delusion",
    .solution = "EfdDeDfFfDGfFfEfcBdBeDIfHffDgEGfgGcDdDeDFffDCeEfbG",
    .board = {
        0x11, 0x20, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x74, 0x00, 0x01, 0x11, 
        0x10, 0x91, 0x11, 0x00, 0x11, 
        0x10, 0x10, 0x63, 0x00, 0x91, 
        0x10, 0x46, 0x17, 0x02, 0x31, 
    },
  },
  // Level 44: Board: 0/4f5/3ga~4/5~4/2h~1~4/2g~~e~~c1/2fac1~eh1/10
  {
    .name = "Pother",
    .solution = "fFcEdFcFeFdFfFeFeCfFFfEfeCFfEfgFIfHfGfFfdCeCfFgFgG",
    .board = {
        0x11, 0x11, 0x71, 0x11, 0x11, 
        0x11, 0x18, 0x20, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x90, 0x10, 0x11, 0x11, 
        0x11, 0x80, 0x06, 0x00, 0x41, 
        0x11, 0x72, 0x41, 0x06, 0x91, 
    },
  },
  // Level 45: Board: 0/10/10/4ad~3/5e~~2/2~~~fc~2/2ace1df~1/10
  {
    .name = "Derangement",
    .solution = "fDgEfEgEFfEfDfGfFfEfeDFfEgcFdFeFfFHehGGfgGFfEfcG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x25, 0x01, 0x11, 
        0x11, 0x11, 0x16, 0x00, 0x11, 
        0x11, 0x00, 0x07, 0x40, 0x11, 
        0x11, 0x24, 0x61, 0x57, 0x01, 
    },
  },
  // Level 46: Board: 0/10/10/2eb~~h3/2c1~~4/1~b~~~g3/1g1heac~a1/10
  {
    .name = "Discomfiture",
    .solution = "GdFfEfEgcFFgdFcFeFdFcFdDGfeEEgFfEfeGDfCfdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x63, 0x00, 0x91, 0x11, 
        0x11, 0x41, 0x00, 0x11, 0x11, 
        0x10, 0x30, 0x00, 0x81, 0x11, 
        0x18, 0x19, 0x62, 0x40, 0x21, 
    },
  },
  // Level 47: Board: 0/4h~4/5~4/4~f~~f1/1d~~~1~~2/2~~~g~bg1/1ebe~h1fd1/10
  {
    .name = "Rediffusion",
    .solution = "HfdGFfGfcGEfFfbGDfEfIfHffDGfIdbEFfEfcEdFcFeFcGfFgFeBFd",
    .board = {
        0x11, 0x11, 0x90, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x11, 0x07, 0x00, 0x71, 
        0x15, 0x00, 0x01, 0x00, 0x11, 
        0x11, 0x00, 0x08, 0x03, 0x81, 
        0x16, 0x36, 0x09, 0x17, 0x51, 
    },
  },
  // Level 48: Board: 0/3~efc3/2~d6/2~7/2~~~g1c2/2g~~1~a2/1afe~d~3/10
  {
    .name = "Agitation",
    .solution = "DccEdFEbDccEFecFFbEbDcHfbGcGdGeGGbFbEbDcHfcGdGeG",
    .board = {
        0x11, 0x10, 0x67, 0x41, 0x11, 
        0x11, 0x05, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x00, 0x08, 0x14, 0x11, 
        0x11, 0x80, 0x01, 0x02, 0x11, 
        0x12, 0x76, 0x05, 0x01, 0x11, 
    },
  },
  // Level 49: Board: 0/3h~5/4~5/4~5/4~~~3/3d~e~~c1/1aeacd~1h1/10
  {
    .name = "Mullock",
    .solution = "dFdBeEIfHffEgFhFfFeFgFeGdGcGeGdGfGHfGfbGcGdGeG",
    .board = {
        0x11, 0x19, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x01, 0x11, 0x11, 
        0x11, 0x11, 0x00, 0x01, 0x11, 
        0x11, 0x15, 0x06, 0x00, 0x41, 
        0x12, 0x62, 0x45, 0x01, 0x91, 
    },
  },
  // Level 50: Board: 0/6c~~1/7h~1/5~de~1/2h~~~2~1/2eb~f~1~1/1fd1~b~1c1/10
  {
    .name = "Pell-mell",
    .solution = "gBhBGdcEdEdFFecFEeDeHdGdbGDfEfFffFeFdFfFeFHdcFdFeGGfGdFfEfDfeG",
    .board = {
        0x11, 0x11, 0x11, 0x40, 0x01, 
        0x11, 0x11, 0x11, 0x19, 0x01, 
        0x11, 0x11, 0x10, 0x56, 0x01, 
        0x11, 0x90, 0x00, 0x11, 0x01, 
        0x11, 0x63, 0x07, 0x01, 0x01, 
        0x17, 0x51, 0x03, 0x01, 0x41, 
    },
  },
  // Level 51: Board: 0/4~~f3/4~1a~2/4~2~2/4~1~a2/1g~~c~bc~1/1fb1e~ge~1/10
  {
    .name = "Lather",
    .solution = "bFcFeFdFeFhGhFgFfFGbgCHeHfGfIfHfFffGEfDfFbEfDfeGfGgG",
    .board = {
        0x11, 0x11, 0x00, 0x71, 0x11, 
        0x11, 0x11, 0x01, 0x20, 0x11, 
        0x11, 0x11, 0x01, 0x10, 0x11, 
        0x11, 0x11, 0x01, 0x02, 0x11, 
        0x18, 0x00, 0x40, 0x34, 0x01, 
        0x17, 0x31, 0x60, 0x86, 0x01, 
    },
  },
  // Level 52: Board: 0/2~d6/1~~f1fb3/1~4h~2/1~~~~~d~2/1~b~~2~2/1~1~d1h~2/10
  {
    .name = "Dither",
    .solution = "gDDbfCGeEgcFdFFeGeFeEeGeFeEeDeCfDfCfCcbEcFbFcFDcCc",
    .board = {
        0x11, 0x05, 0x11, 0x11, 0x11, 
        0x10, 0x07, 0x17, 0x31, 0x11, 
        0x10, 0x11, 0x11, 0x90, 0x11, 
        0x10, 0x00, 0x00, 0x50, 0x11, 
        0x10, 0x30, 0x01, 0x10, 0x11, 
        0x10, 0x10, 0x51, 0x90, 0x11, 
    },
  },
  // Level 53: Board: 0/10/4b~4/4g~4/1f~eb~4/2~ca~~3/1ega1~~fc1/10
  {
    .name = "Pandemonium",
    .solution = "HgGgeCfFeEeEdEDfEfEfcFdFFefFbEcFEeDeeFdFbGfFeFgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x30, 0x11, 0x11, 
        0x11, 0x11, 0x80, 0x11, 0x11, 
        0x17, 0x06, 0x30, 0x11, 0x11, 
        0x11, 0x04, 0x20, 0x01, 0x11, 
        0x16, 0x82, 0x10, 0x07, 0x41, 
    },
  },
  // Level 54: Board: 0/1~e7/1~f~d~4/1~1~1~4/1~1~1~1c2/1~f~h~ha~1/1cae1~2d1/10
  {
    .name = "Heat Of Fusion",
    .solution = "eFGfCbcFbFdFcFeFHfGfFfEfHfGfFfEfcCdFbGeCfFeFgFhF",
    .board = {
        0x10, 0x61, 0x11, 0x11, 0x11, 
        0x10, 0x70, 0x50, 0x11, 0x11, 
        0x10, 0x10, 0x10, 0x11, 0x11, 
        0x10, 0x10, 0x10, 0x14, 0x11, 
        0x10, 0x70, 0x90, 0x92, 0x01, 
        0x14, 0x26, 0x10, 0x11, 0x51, 
    },
  },
  // Level 55: Board: 0/10/1f5~g1/1h5~h1/1f~~~g~~2/3~~d~3/2g~~1d3/10
  {
    .name = "Huddle",
    .solution = "bEcGcEbEcEdGdFFefFIcEeeFfFHeGfdFIdHebEcE",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x17, 0x11, 0x11, 0x10, 0x81, 
        0x19, 0x11, 0x11, 0x10, 0x91, 
        0x17, 0x00, 0x08, 0x00, 0x11, 
        0x11, 0x10, 0x05, 0x01, 0x11, 
        0x11, 0x80, 0x01, 0x51, 0x11, 
    },
  },
  // Level 56: Board: 0/1g~7/1a~7/2~2h4/2~1~g1~b1/1c~b~1~~c1/2h1~~~a2/10
  {
    .name = "Optical Fusion",
    .solution = "bBdFFecFIeHfeGbCcFdFeGfGbFcFdFFeEfDfIfeGfG",
    .board = {
        0x18, 0x01, 0x11, 0x11, 0x11, 
        0x12, 0x01, 0x11, 0x11, 0x11, 
        0x11, 0x01, 0x19, 0x11, 0x11, 
        0x11, 0x01, 0x08, 0x10, 0x31, 
        0x14, 0x03, 0x01, 0x00, 0x41, 
        0x11, 0x91, 0x00, 0x02, 0x11, 
    },
  },
  // Level 57: Board: 0/10/10/10/4~~h~h1/1~ce~~g~2/1eaga~1~c1/10
  {
    .name = "Turmoil",
    .solution = "dFcFeFdFeFGeFeEfDfCfFfEfDfGfFfEfIgIeHfGfFfEfcFbFdFcFeFcGfFgFbGcGdG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x00, 0x90, 0x91, 
        0x10, 0x46, 0x00, 0x80, 0x11, 
        0x16, 0x28, 0x20, 0x10, 0x41, 
    },
  },
  // Level 58: Board: 0/5~g3/3b~~4/4~~4/4~~fe2/1~~b~~hg~1/2ge~~f1h1/10
  {
    .name = "Turbulence",
    .solution = "DfdGeGGfCfcGdGFfHedCeEeFHffFgFhFEgDgbFcFdGcGdGGb",
    .board = {
        0x11, 0x11, 0x10, 0x81, 0x11, 
        0x11, 0x13, 0x00, 0x11, 0x11, 
        0x11, 0x11, 0x00, 0x11, 0x11, 
        0x11, 0x11, 0x00, 0x76, 0x11, 
        0x10, 0x03, 0x00, 0x98, 0x01, 
        0x11, 0x86, 0x00, 0x71, 0x91, 
    },
  },
  // Level 59: Board: 0/4b5/2dfe~4/5~4/2c~~~4/1dhf~~2h1/1b1eg~~gc1/10
  {
    .name = "Mix-up",
    .solution = "eGfGeCdGcEdFeGeCdCeCFecFdGFffGgGbFcFEfDfCfeGfGgGcCdCeCdG",
    .board = {
        0x11, 0x11, 0x31, 0x11, 0x11, 
        0x11, 0x57, 0x60, 0x11, 0x11, 
        0x11, 0x11, 0x10, 0x11, 0x11, 
        0x11, 0x40, 0x00, 0x11, 0x11, 
        0x15, 0x97, 0x00, 0x11, 0x91, 
        0x13, 0x16, 0x80, 0x08, 0x41, 
    },
  },

};