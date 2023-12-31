#include "vexed.h"
static const leveldefn impossiblepack[] = {
  // Level 0: Board: 0/1~g1c~g3/1~2d~d3/1h1hg~4/1deah~c3/1gh1fd1ca1/1bebdhcfd1/10
  {
    .name = "Kvass",
    .solution = "eBeCeEGbeEGgeFGcFeFgfGeGfGdEIfeGfGCbdGdEcEbEcGbEdEeGfGeGcECfcGdEbGcGdGeGbGcGdGeGfGgG",
    .board = {
        0x10, 0x81, 0x40, 0x81, 0x11, 
        0x10, 0x11, 0x50, 0x51, 0x11, 
        0x19, 0x19, 0x80, 0x11, 0x11, 
        0x15, 0x62, 0x90, 0x41, 0x11, 
        0x18, 0x91, 0x75, 0x14, 0x21, 
        0x13, 0x63, 0x59, 0x47, 0x51, 
    },
  },
  // Level 1: Board: 0/4a5/2~~e5/1a~db~fh2/1d~a1cea2/2~gh1cd~1/1cfcbgdac1/10
  {
    .name = "Spaek",
    .solution = "bDDdEdEcDcGdHdhFEdFdGdIffEgEDfEdDeCeDegGfGeGdFcFbGDgEgfEdGeGhGgGcGdGeGfGbEcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x21, 0x11, 0x11, 
        0x11, 0x00, 0x61, 0x11, 0x11, 
        0x12, 0x05, 0x30, 0x79, 0x11, 
        0x15, 0x02, 0x14, 0x62, 0x11, 
        0x11, 0x08, 0x91, 0x45, 0x01, 
        0x14, 0x74, 0x38, 0x52, 0x41, 
    },
  },
  // Level 2: Board: 0/1hg~~ecge1/1eh~~fbdg1/2a~~b1bd1/1hf~e1ah2/2d~b~hgc1/1ceg1ec1d1/10
  {
    .name = "Clay",
    .solution = "cBbBFbFdFdcEEfGbHbGfHegCFfEfcEdFeFbEGfFfcEbCFdEfcFdFbGHfGfIfHffFeFfFgFhFGcFdIdeFfFIdHf",
    .board = {
        0x19, 0x80, 0x06, 0x48, 0x61, 
        0x16, 0x90, 0x07, 0x35, 0x81, 
        0x11, 0x20, 0x03, 0x13, 0x51, 
        0x19, 0x70, 0x61, 0x29, 0x11, 
        0x11, 0x50, 0x30, 0x98, 0x41, 
        0x14, 0x68, 0x16, 0x41, 0x51, 
    },
  },
  // Level 3: Board: 0/3e2~hf1/1g~b1~a3/1dhe1ghc2/1edbcag3/1a1agc1h~1/1ehdbhefe1/10
  {
    .name = "Sugar Pie",
    .solution = "DcHbGcfDHdeEdEcEbCcCeEdEeEdEcDdEbDcDdGdFcEdGbEcEbGbGcGIbHbhFFgEgGgGeFgfGeGfGgGdGeGfGgG",
    .board = {
        0x11, 0x16, 0x11, 0x09, 0x71, 
        0x18, 0x03, 0x10, 0x21, 0x11, 
        0x15, 0x96, 0x18, 0x94, 0x11, 
        0x16, 0x53, 0x42, 0x81, 0x11, 
        0x12, 0x12, 0x84, 0x19, 0x01, 
        0x16, 0x95, 0x39, 0x67, 0x61, 
    },
  },
  // Level 4: Board: 0/3c3~a1/3d~g1~2/1e~eca~~2/1gfbgf~~h1/1heahbad2/2gh1cfac1/10
  {
    .name = "Chitoum",
    .solution = "fDHffEdCdCeDgEfEdEeEIeHeeFdEcEdEeEfFeFdFHgfFeFIggFIbHecFdFbDbEeFcFfFdFbFeFfFfG",
    .board = {
        0x11, 0x14, 0x11, 0x10, 0x21, 
        0x11, 0x15, 0x08, 0x10, 0x11, 
        0x16, 0x06, 0x42, 0x00, 0x11, 
        0x18, 0x73, 0x87, 0x00, 0x91, 
        0x19, 0x62, 0x93, 0x25, 0x11, 
        0x11, 0x89, 0x14, 0x72, 0x41, 
    },
  },
  // Level 5: Board: 0/1gc1g5/2g1e5/2fhf~1~c1/1h1agfhed1/1d~1begdh1/1bdfefda2/10
  {
    .name = "Gammel Dansk",
    .solution = "eDeDbFdDeEGeHeeFGeFecDdDbGcGdGGfFgdEGgeFfFIdIeHecDcDdDeFfGbBEgDgdEcDeGcGdEIfbGcGdGeGfG",
    .board = {
        0x18, 0x41, 0x81, 0x11, 0x11, 
        0x11, 0x81, 0x61, 0x11, 0x11, 
        0x11, 0x79, 0x70, 0x10, 0x41, 
        0x19, 0x12, 0x87, 0x96, 0x51, 
        0x15, 0x01, 0x36, 0x85, 0x91, 
        0x13, 0x57, 0x67, 0x52, 0x11, 
    },
  },
  // Level 6: Board: 0/3c2h~2/3ea2~2/1~fdh~1h~1/1~d2cea~1/1gc1ad1dh1/1dh~dgahf1/10
  {
    .name = "Schweinsmagen",
    .solution = "hDCdDdgBEgFfGeHehFgEfEfGgGfGeGeDeDFfcGdDeDGedDcGdGeDbFcGdGeGfGbFcGdGeGfGgGbGcGdGeGfGgG",
    .board = {
        0x11, 0x14, 0x11, 0x90, 0x11, 
        0x11, 0x16, 0x21, 0x10, 0x11, 
        0x10, 0x75, 0x90, 0x19, 0x01, 
        0x10, 0x51, 0x14, 0x62, 0x01, 
        0x18, 0x41, 0x25, 0x15, 0x91, 
        0x15, 0x90, 0x58, 0x29, 0x71, 
    },
  },
  // Level 7: Board: 0/6f3/4h~bc~1/1e~ef~gfh1/1afdbhcgc1/1fgbhd1ag1/1hdcbad1a1/10
  {
    .name = "Powsowdie",
    .solution = "eCGcGcbDdEeEeFdFhCGdHdIdhEcEdFFecFGdbFcFFeGeHehFdGFfcGEfFfFgdFDgbFGgeFcFcGdGbGcGfGdGGe",
    .board = {
        0x11, 0x11, 0x11, 0x71, 0x11, 
        0x11, 0x11, 0x90, 0x34, 0x01, 
        0x16, 0x06, 0x70, 0x87, 0x91, 
        0x12, 0x75, 0x39, 0x48, 0x41, 
        0x17, 0x83, 0x95, 0x12, 0x81, 
        0x19, 0x54, 0x32, 0x51, 0x21, 
    },
  },
  // Level 8: Board: 0/1dba~2b2/1he1~a1h2/1agc~c~f~1/1c1afg~1~1/1ha1bfef~1/1dcbdghad1/10
  {
    .name = "Ochsenmaul-Salat",
    .solution = "dDdBhDHdgFHdfEeEcBdBcDdDeFdEGgeFfFbBcDcDdDdGdEeGfGbDcGdGcGbGbFcDdEeGCgcGdGbGcGdGeGfGgG",
    .board = {
        0x15, 0x32, 0x01, 0x13, 0x11, 
        0x19, 0x61, 0x02, 0x19, 0x11, 
        0x12, 0x84, 0x04, 0x07, 0x01, 
        0x14, 0x12, 0x78, 0x01, 0x01, 
        0x19, 0x21, 0x37, 0x67, 0x01, 
        0x15, 0x43, 0x58, 0x92, 0x51, 
    },
  },
  // Level 9: Board: 0/2b~~gb3/1f1~~ch3/1eca~ef~2/1hd1~2~2/1bagfca~c1/1fhf1hfhd1/10
  {
    .name = "Fugu",
    .solution = "FbgFfFeFFfEfFceFgDHfGfHfFffGEfdDcDcFbDFdEfcFdFcFbFcGbFeFfGgGGdFdcFdDeFfGgGcBGdFdCgEfDd",
    .board = {
        0x11, 0x30, 0x08, 0x31, 0x11, 
        0x17, 0x10, 0x04, 0x91, 0x11, 
        0x16, 0x42, 0x06, 0x70, 0x11, 
        0x19, 0x51, 0x01, 0x10, 0x11, 
        0x13, 0x28, 0x74, 0x20, 0x41, 
        0x17, 0x97, 0x19, 0x79, 0x51, 
    },
  },
  // Level 10: Board: 0/1ad~3fe1/2e~3eh1/2hc1b~gb1/3ged~eh1/1fgegahfc1/1cbdfceh2/10
  {
    .name = "Tequila Worms",
    .solution = "HdIcIcfDfEeEdEcCdFdEbBcBdEdFeFGgGfFfcCcFbFcFdFcDDfdGgGIeIecGdGeGHecGdGeGfGIfbGcGdGeGfG",
    .board = {
        0x12, 0x50, 0x11, 0x17, 0x61, 
        0x11, 0x60, 0x11, 0x16, 0x91, 
        0x11, 0x94, 0x13, 0x08, 0x31, 
        0x11, 0x18, 0x65, 0x06, 0x91, 
        0x17, 0x86, 0x82, 0x97, 0x41, 
        0x14, 0x35, 0x74, 0x69, 0x11, 
    },
  },
  // Level 11: Board: 0/2d1d1a~2/1~edh~1b2/1h1af~fd~1/1c3~ga~1/1fagfe1gd1/2ebgcda2/10
  {
    .name = "Blachan",
    .solution = "CchDeCeDHdhFGdgEIffEeDfDgDfGgGfGeFdFdGbCcGbFcFdFcCdCdGeDbFcFdGeGfGgBdDcGdGHgeDGebFcGdG",
    .board = {
        0x11, 0x51, 0x51, 0x20, 0x11, 
        0x10, 0x65, 0x90, 0x13, 0x11, 
        0x19, 0x12, 0x70, 0x75, 0x01, 
        0x14, 0x11, 0x10, 0x82, 0x01, 
        0x17, 0x28, 0x76, 0x18, 0x51, 
        0x11, 0x63, 0x84, 0x52, 0x11, 
    },
  },
  // Level 12: Board: 0/1d~d4a1/1g~1~bheb1/1ch~~dfdc1/2bg~aeaf1/1egcecd1c1/3agac3/10
  {
    .name = "Pemmican",
    .solution = "bBDbbCcDdDcDbDcDFcGcFcEdHcFdGdFdfEeEfEfFeFfGeFdFcFfFeFdFIcHecFFfGedFIcHeIebFcFdFdGGeHe",
    .board = {
        0x15, 0x05, 0x11, 0x11, 0x21, 
        0x18, 0x01, 0x03, 0x96, 0x31, 
        0x14, 0x90, 0x05, 0x75, 0x41, 
        0x11, 0x38, 0x02, 0x62, 0x71, 
        0x16, 0x84, 0x64, 0x51, 0x41, 
        0x11, 0x12, 0x82, 0x41, 0x11, 
    },
  },
  // Level 13: Board: 0/4g~4/3eh~1a2/1~efb~~hg1/1daed~ech1/1e3~be2/1fdbfcfhd1/10
  {
    .name = "Geoduck Clams",
    .solution = "GfCdDdeBfEHeGeIeHeeCHffDgEgGcEEdeEHgfEgFDddEeEcEdEcEbEeEgGfGdEdGeEcEdEeEcGdGbGcGdGeGfG",
    .board = {
        0x11, 0x11, 0x80, 0x11, 0x11, 
        0x11, 0x16, 0x90, 0x12, 0x11, 
        0x10, 0x67, 0x30, 0x09, 0x81, 
        0x15, 0x26, 0x50, 0x64, 0x91, 
        0x16, 0x11, 0x10, 0x36, 0x11, 
        0x17, 0x53, 0x74, 0x79, 0x51, 
    },
  },
  // Level 14: Board: 0/1a~g~3f1/1b~d~d~~c1/1dcf~h~eb1/1cgc~1~ha1/2adb~dge1/1afgfhgfh1/10
  {
    .name = "Limburger",
    .solution = "fCHfHfIcfDgGdBdCeFdDcDbBcEeDDfcFbDcFfGeGcGFdGgIfFgEgDgbEbEHgGgFgcEIfcGdGeGfGbGcGdGeGfGgG",
    .board = {
        0x12, 0x08, 0x01, 0x11, 0x71, 
        0x13, 0x05, 0x05, 0x00, 0x41, 
        0x15, 0x47, 0x09, 0x06, 0x31, 
        0x14, 0x84, 0x01, 0x09, 0x21, 
        0x11, 0x25, 0x30, 0x58, 0x61, 
        0x12, 0x78, 0x79, 0x87, 0x91, 
    },
  },
  // Level 15: Board: 0/1ha4d2/1dh~1~dch1/3h~hefb1/3acgba2/1e~hgd2g1/2bg1efba1/10
  {
    .name = "Crickets",
    .solution = "cCcCbBcCEfGcFdEeFeHcbFcFEeGcdFGdHdGdGefGHeGefGgGIcHddFeFGeFfEfIdHdGeFfEfHeGeFffGgGbCcCEf",
    .board = {
        0x19, 0x21, 0x11, 0x15, 0x11, 
        0x15, 0x90, 0x10, 0x54, 0x91, 
        0x11, 0x19, 0x09, 0x67, 0x31, 
        0x11, 0x12, 0x48, 0x32, 0x11, 
        0x16, 0x09, 0x85, 0x11, 0x81, 
        0x11, 0x38, 0x16, 0x73, 0x21, 
    },
  },
  // Level 16: Board: 0/1d8/1ec~2g~h1/1dg~~edga1/2ef~agcb1/1b1abfa1f1/1hfghgdeg1/10
  {
    .name = "Takosu",
    .solution = "gCcCbCCdFedDDeEebDcDcEgDIcHcGdFdbGEdEgFfGeFeHeIdHdGeHefFeEIeIgfEeGfGgGdGbGeGcGfGdGgGeGHe",
    .board = {
        0x15, 0x11, 0x11, 0x11, 0x11, 
        0x16, 0x40, 0x11, 0x80, 0x91, 
        0x15, 0x80, 0x06, 0x58, 0x21, 
        0x11, 0x67, 0x02, 0x84, 0x31, 
        0x13, 0x12, 0x37, 0x21, 0x71, 
        0x19, 0x78, 0x98, 0x56, 0x81, 
    },
  },
  // Level 17: Board: 0/1~ed~hg1c1/1~gh~1e~b1/1~1c~1d~2/1aehf1f~b1/1eagdhehd1/1be1efhbg1/10
  {
    .name = "Roquefort",
    .solution = "CbDbdDcCcFcCDfbFFbEeDfEfGbGfFfFbdFeFGgGfHfIcbFcFdFgFIcHfGfFfEfDfIeHfGfIfHfFffGEfDfeGfGgG",
    .board = {
        0x10, 0x65, 0x09, 0x81, 0x41, 
        0x10, 0x89, 0x01, 0x60, 0x31, 
        0x10, 0x14, 0x01, 0x50, 0x11, 
        0x12, 0x69, 0x71, 0x70, 0x31, 
        0x16, 0x28, 0x59, 0x69, 0x51, 
        0x13, 0x61, 0x67, 0x93, 0x81, 
    },
  },
  // Level 18: Board: 0/1a~4h2/1ca~~b~ad1/3~~fa1a1/2hbf1eae1/1cfdchb1c1/2eagfhag1/10
  {
    .name = "Warm Beer",
    .solution = "bBHcFdbCcCdDHcIcHcGcFccEdEGfFdcFdFeFeGGfHeIedGFffGgGbFIgHgGgeFEgcFIgHgfFdFdGeGcGdGgGeGHe",
    .board = {
        0x12, 0x01, 0x11, 0x19, 0x11, 
        0x14, 0x20, 0x03, 0x02, 0x51, 
        0x11, 0x10, 0x07, 0x21, 0x21, 
        0x11, 0x93, 0x71, 0x62, 0x61, 
        0x14, 0x75, 0x49, 0x31, 0x41, 
        0x11, 0x62, 0x87, 0x92, 0x81, 
    },
  },
  // Level 19: Board: 0/5~ea2/3~~ea3/3~fgb1g1/3~e3b1/1ha~dbhfd1/1bg~bhdha1/10
  {
    .name = "Rat",
    .solution = "FcGcHbGbcFEcGcFcEcEfDfEfFfGfdFcFdFHfIfGgHfeFeGbFcFdFeGfGdGeGfGgGIfcGHgGgFdGdbGcGIgHgGgFd",
    .board = {
        0x11, 0x11, 0x10, 0x62, 0x11, 
        0x11, 0x10, 0x06, 0x21, 0x11, 
        0x11, 0x10, 0x78, 0x31, 0x81, 
        0x11, 0x10, 0x61, 0x11, 0x31, 
        0x19, 0x20, 0x53, 0x97, 0x51, 
        0x13, 0x80, 0x39, 0x59, 0x21, 
    },
  },
  // Level 20: Board: 0/4b~1~a1/5d1he1/1df~~b~ac1/3e~chfb1/1gab~dce2/1ebh~gfac1/10
  {
    .name = "Snake",
    .solution = "FfdFIbHeHdIccDbDcDdDdGdFcFeFGddFFegFfGHfeGeFIdGgHgbFcFdFeFeGdGcGeGdGfGgGIeHfeBbGcGdGeGfG",
    .board = {
        0x11, 0x11, 0x30, 0x10, 0x21, 
        0x11, 0x11, 0x15, 0x19, 0x61, 
        0x15, 0x70, 0x03, 0x02, 0x41, 
        0x11, 0x16, 0x04, 0x97, 0x31, 
        0x18, 0x23, 0x05, 0x46, 0x11, 
        0x16, 0x39, 0x08, 0x72, 0x41, 
    },
  },
  // Level 21: Board: 0/2b2a~a2/1~gb1c~e~1/1g1h~g~cg1/1fc1he~fe1/1da~fb~db1/1ghbgadbc1/10
  {
    .name = "Seal Flipper Pie",
    .solution = "CcfBHbfChCHdFdfEeEEffEFfcFdFbEdGcGcFGgHeGedFGfHfIfFgGfgGIdbFcFdFdDcGdGeGfGgGbGcGdGeGfGgG",
    .board = {
        0x11, 0x31, 0x12, 0x02, 0x11, 
        0x10, 0x83, 0x14, 0x06, 0x01, 
        0x18, 0x19, 0x08, 0x04, 0x81, 
        0x17, 0x41, 0x96, 0x07, 0x61, 
        0x15, 0x20, 0x73, 0x05, 0x31, 
        0x18, 0x93, 0x82, 0x53, 0x41, 
    },
  },
  // Level 22: Board: 0/6egf1/1a1h~fh3/1d~f~c4/1cdb~e1ab1/1fce~hdhg1/3fg1hfd1/10
  {
    .name = "Souse",
    .solution = "bDDedFFdcEEebEGcFcGcFcEeFfDfFfGfHfcFbFcFHbGcbFcFdFFeEefFeFfFIfHfGfdFIfHfGfFfIbHbGcfFgFgG",
    .board = {
        0x11, 0x11, 0x11, 0x68, 0x71, 
        0x12, 0x19, 0x07, 0x91, 0x11, 
        0x15, 0x07, 0x04, 0x11, 0x11, 
        0x14, 0x53, 0x06, 0x12, 0x31, 
        0x17, 0x46, 0x09, 0x59, 0x81, 
        0x11, 0x17, 0x81, 0x97, 0x51, 
    },
  },
  // Level 23: Board: 0/1a~4~e1/2~4e2/1gbfae~g2/1chchd~e2/1fcdaheag1/1h1cbedce1/10
  {
    .name = "Chitterlings",
    .solution = "fDIbHefEeEdFEfcEdEFgdFGgeFbDcEdFHfGfeFIffFcFbFdFcFbFeFEgcFdFFfEfDfCfbBcFdFeFeGfGdGeGfGgG",
    .board = {
        0x12, 0x01, 0x11, 0x10, 0x61, 
        0x11, 0x01, 0x11, 0x16, 0x11, 
        0x18, 0x37, 0x26, 0x08, 0x11, 
        0x14, 0x94, 0x95, 0x06, 0x11, 
        0x17, 0x45, 0x29, 0x62, 0x81, 
        0x19, 0x14, 0x36, 0x54, 0x61, 
    },
  },
  // Level 24: Board: 0/2a2~g3/1~ha1~4/1cah~edb2/1aegfc1ge1/1fdhahbhd1/3afdgea1/10
  {
    .name = "Blubber",
    .solution = "CcbCFdEdDdGdFdEdDdGbFdDfEeDeEeEfHdGdFfEfFfHfGfHfIeEfFfIffGbDcEdEcEIgHgGgeEcFbEcFbFcFdFdG",
    .board = {
        0x11, 0x21, 0x10, 0x81, 0x11, 
        0x10, 0x92, 0x10, 0x11, 0x11, 
        0x14, 0x29, 0x06, 0x53, 0x11, 
        0x12, 0x68, 0x74, 0x18, 0x61, 
        0x17, 0x59, 0x29, 0x39, 0x51, 
        0x11, 0x12, 0x75, 0x86, 0x21, 
    },
  },
  // Level 25: Board: 0/1c1gcfh~2/1h~bfe1ga1/1ea3~d2/1b1g2~hb1/1f~hca~bh1/1hdcdfdga1/10
  {
    .name = "Sea Cucumber",
    .solution = "HdHdIfIcDcEbFbfFgGfGeGgBDfHfGfFfcGdGbFcFdGeGbFcGbFCccFbFDcCcbFDcCcFcEcDcCcbGCdbGcGdGeGfG",
    .board = {
        0x14, 0x18, 0x47, 0x90, 0x11, 
        0x19, 0x03, 0x76, 0x18, 0x21, 
        0x16, 0x21, 0x11, 0x05, 0x11, 
        0x13, 0x18, 0x11, 0x09, 0x31, 
        0x17, 0x09, 0x42, 0x03, 0x91, 
        0x19, 0x54, 0x57, 0x58, 0x21, 
    },
  },
  // Level 26: Board: 0/10/4a2~h1/4gd~~2/1~~geb~~2/1a~bh1hdc1/2chafgef1/10
  {
    .name = "Chichirrones",
    .solution = "IcHefDeDbFDeCeIfHffDeDEeDeFeEeEfCeEgFgFecFGebFgFEgcFGgFgFebFcFdFhFeGfGdGeGfGgGcGdGeGfGgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x21, 0x10, 0x91, 
        0x11, 0x11, 0x85, 0x00, 0x11, 
        0x10, 0x08, 0x63, 0x00, 0x11, 
        0x12, 0x03, 0x91, 0x95, 0x41, 
        0x11, 0x49, 0x27, 0x86, 0x71, 
    },
  },
  // Level 27: Board: 0/1dfagd4/3gcfb~b1/3ce1d~2/1~ha1eh~e1/1fdchg1~g1/1ehfdfghf1/10
  {
    .name = "Lutefisk",
    .solution = "gEIffCgCfCgDIcfEgEeBfCeCdCCefGeFdFDecBbBEgcBbEFfcGcFgGfGeGcGEdDfFcDgFgEcEddGGebGcGdGeGfG",
    .board = {
        0x15, 0x72, 0x85, 0x11, 0x11, 
        0x11, 0x18, 0x47, 0x30, 0x31, 
        0x11, 0x14, 0x61, 0x50, 0x11, 
        0x10, 0x92, 0x16, 0x90, 0x61, 
        0x17, 0x54, 0x98, 0x10, 0x81, 
        0x16, 0x97, 0x57, 0x89, 0x71, 
    },
  },
  // Level 28: Board: 0/1ha2~b1f1/2g~bge~a1/1gd~fhb~2/1dfbed1~2/1acf1b~~2/1efcghefa1/10
  {
    .name = "Mountain Potato",
    .solution = "EccDGbgCHfIcHgIcCdEdDdgDfBhGfFgDfGgGfGhGgGfGeEdEdGcGbGcGdGGgFgEgDgbFcFdGHgeECgIgHgGgFgEgb",
    .board = {
        0x19, 0x21, 0x10, 0x31, 0x71, 
        0x11, 0x80, 0x38, 0x60, 0x21, 
        0x18, 0x50, 0x79, 0x30, 0x11, 
        0x15, 0x73, 0x65, 0x10, 0x11, 
        0x12, 0x47, 0x13, 0x00, 0x11, 
        0x16, 0x74, 0x89, 0x67, 0x21, 
    },
  },
  // Level 29: Board: 0/2e~e~1~c1/1a1~c~1~2/1c~h1~~c2/2bdhe~g2/1gcfcdcec1/1cahbeafa1/10
  {
    .name = "Oxtail",
    .solution = "eBHdeCfFDddEeEcEdEeFbDcEdGdFHfdGcGcBdFeFDgbFbDEgcEdFeGdGeGfGcFdGeGfGcGdGeGfGgGbGcGdGeGfGI",
    .board = {
        0x11, 0x60, 0x60, 0x10, 0x41, 
        0x12, 0x10, 0x40, 0x10, 0x11, 
        0x14, 0x09, 0x10, 0x04, 0x11, 
        0x11, 0x35, 0x96, 0x08, 0x11, 
        0x18, 0x47, 0x45, 0x46, 0x41, 
        0x14, 0x29, 0x36, 0x27, 0x21, 
    },
  },
  // Level 30: Board: 0/1g~h~1bch1/1e~1~~hgf1/2~1dhc3/1cbgha1a2/1dgc1gfgb1/1hchebaf2/10
  {
    .name = "Fufu",
    .solution = "GcdBeDHbGcbBdEcEbEfCHcGcFcIbHcGcFcEeDeFdEeDfDgbCcFFecGdGGfFgEgFgGgHgHfeEIcHcGcGdIfHfdGeGf",
    .board = {
        0x18, 0x09, 0x01, 0x34, 0x91, 
        0x16, 0x01, 0x00, 0x98, 0x71, 
        0x11, 0x01, 0x59, 0x41, 0x11, 
        0x14, 0x38, 0x92, 0x12, 0x11, 
        0x15, 0x84, 0x18, 0x78, 0x31, 
        0x19, 0x49, 0x63, 0x27, 0x11, 
    },
  },
  // Level 31: Board: 0/1a~1dg~gh1/1gf~1f~3/2befe~~a1/1beac1a~2/1hgbgfdec1/1g1afcef2/10
  {
    .name = "Hete Bliksem",
    .solution = "fDgDHbIdgEeBfDfFgFdDeDeFfFgFIfHfeFcCdEdEeFbBcCdEdGeGcDcEbEcEdEGgFdcFbFbCCedGeGfGIbHbcFdGe",
    .board = {
        0x12, 0x01, 0x58, 0x08, 0x91, 
        0x18, 0x70, 0x17, 0x01, 0x11, 
        0x11, 0x36, 0x76, 0x00, 0x21, 
        0x13, 0x62, 0x41, 0x20, 0x11, 
        0x19, 0x83, 0x87, 0x56, 0x41, 
        0x18, 0x12, 0x74, 0x67, 0x11, 
    },
  },
  // Level 32: Board: 0/1a~h~f1c~1/1gcd~1ehc1/1hef~~fbh1/2d1a~hdb1/2hbf~ghc1/1~ecgac3/10
  {
    .name = "Natto",
    .solution = "FbhBhCGddCeEGebBcBdDdDeDcCdDeEbCcCdDeEHdHeIedFGfHeGecDeGdGcGcFdFeFHfIfGgHfGfFfdDCgGgFgEgb",
    .board = {
        0x12, 0x09, 0x07, 0x14, 0x01, 
        0x18, 0x45, 0x01, 0x69, 0x41, 
        0x19, 0x67, 0x00, 0x73, 0x91, 
        0x11, 0x51, 0x20, 0x95, 0x31, 
        0x11, 0x93, 0x70, 0x89, 0x41, 
        0x10, 0x64, 0x82, 0x41, 0x11, 
    },
  },
  // Level 33: Board: 0/5~c1d1/4~~bce1/1chd~g1e2/1adfhedcf1/1bcbebcba1/1d1gbef1d1/10
  {
    .name = "Bats",
    .solution = "GbFcGcHcIcgCIcfCgCgFfFGfeEfEdDcDdDeEbDdEcEIfHffEdEbFIfgEhEbFcFEeDeCfDfEfFfGfFfdFeFfFcFdFd",
    .board = {
        0x11, 0x11, 0x10, 0x41, 0x51, 
        0x11, 0x11, 0x00, 0x34, 0x61, 
        0x14, 0x95, 0x08, 0x16, 0x11, 
        0x12, 0x57, 0x96, 0x54, 0x71, 
        0x13, 0x43, 0x63, 0x43, 0x21, 
        0x15, 0x18, 0x36, 0x71, 0x51, 
    },
  },
  // Level 34: Board: 0/3a~e1h~1/4~3~1/1c~f~~~1h1/1ghgab~be1/1bd1bc~cf1/1efefad3/10
  {
    .name = "Shiokara",
    .solution = "fEHebDdDcDeDdDeDfDfFgFFbdBeFeDfFeGFgdEcEGgeFcGcGdGbEFgdEGgeFcGIehBHfIefFbFcGdGIfHfbGcGdGe",
    .board = {
        0x11, 0x12, 0x06, 0x19, 0x01, 
        0x11, 0x11, 0x01, 0x11, 0x01, 
        0x14, 0x07, 0x00, 0x01, 0x91, 
        0x18, 0x98, 0x23, 0x03, 0x61, 
        0x13, 0x51, 0x34, 0x04, 0x71, 
        0x16, 0x76, 0x72, 0x51, 0x11, 
    },
  },
  // Level 35: Board: 0/2h7/1df~g3b1/2h~hagfd1/1fg~2eac1/2d~edhgf1/1bfh1efca1/10
  {
    .name = "Sild",
    .solution = "cDcEbCCeEfEcDfbEFfEfGfFfEfEdFdHdGdcFdFeFIdHfGfHfGfFfEfIdHfGfIfHfFfcGEfDfHgfDGfIfFfEfeDIgf",
    .board = {
        0x11, 0x91, 0x11, 0x11, 0x11, 
        0x15, 0x70, 0x81, 0x11, 0x31, 
        0x11, 0x90, 0x92, 0x87, 0x51, 
        0x17, 0x80, 0x11, 0x62, 0x41, 
        0x11, 0x50, 0x65, 0x98, 0x71, 
        0x13, 0x79, 0x16, 0x74, 0x21, 
    },
  },
  // Level 36: Board: 0/1b2~hf~d1/1gh~~1c~e1/3~~~g~b1/1g1e~e1~h1/1bhghbdcg1/2faehgac1/10
  {
    .name = "Cho Do Fu",
    .solution = "FbdEcCdEbCcCbCcCdFGdFgIbHfeGGfHfIcdGFfHfeGfGeGfGgDGdcGdGIfcGdGeGfGbFIfcGdGeGfGbFcGdGeGfGg",
    .board = {
        0x13, 0x11, 0x09, 0x70, 0x51, 
        0x18, 0x90, 0x01, 0x40, 0x61, 
        0x11, 0x10, 0x00, 0x80, 0x31, 
        0x18, 0x16, 0x06, 0x10, 0x91, 
        0x13, 0x98, 0x93, 0x54, 0x81, 
        0x11, 0x72, 0x69, 0x82, 0x41, 
    },
  },
  // Level 37: Board: 0/2g~fh~gc1/3~ce~3/2c~1b~3/1hg~a1~1g1/2dcehagd1/1ecbgfhe2/10
  {
    .name = "Bubble And Squeak",
    .solution = "cBEcEfEcFcEcDeHbEfFfGffCfGeFdFfFeFcEdFeFfDeGGfFfcFIfHfGfFfIfHfGfbEcFdGeGIbHbcGdGeGbGcGdGe",
    .board = {
        0x11, 0x80, 0x79, 0x08, 0x41, 
        0x11, 0x10, 0x46, 0x01, 0x11, 
        0x11, 0x40, 0x13, 0x01, 0x11, 
        0x19, 0x80, 0x21, 0x01, 0x81, 
        0x11, 0x54, 0x69, 0x28, 0x51, 
        0x16, 0x43, 0x87, 0x96, 0x11, 
    },
  },
  // Level 38: Board: 0/10/4ac4/1~h~bfe~c1/1hgea1gae1/1cd1febfc1/1eaeadfag1/10
  {
    .name = "Potted Hough",
    .solution = "CdEdFddEdEFdGdeFGfHfIdIeHgfFeFgFfFFdfGeGcEcGdGcGdGeGbFcGbGdGcGeGdGfGHfIfeGGfHffGFgEgIgHgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x24, 0x11, 0x11, 
        0x10, 0x90, 0x37, 0x60, 0x41, 
        0x19, 0x86, 0x21, 0x82, 0x61, 
        0x14, 0x51, 0x76, 0x37, 0x41, 
        0x16, 0x26, 0x25, 0x72, 0x81, 
    },
  },
  // Level 39: Board: 0/1~da3a2/1~aehc~ch1/1~1bde~1a1/1gdc2~he1/1ahaebhd2/1cecdcg3/10
  {
    .name = "Diniguan",
    .solution = "HeCbDbfCHcfDIeHeDcEceDfDdDeDfDeFdFfFeFgFIeHeIeHeGfFfcFHfGfFfcGcCbFbEcEHcGfFfcGbGcGdGbGcGd",
    .board = {
        0x10, 0x52, 0x11, 0x12, 0x11, 
        0x10, 0x26, 0x94, 0x04, 0x91, 
        0x10, 0x13, 0x56, 0x01, 0x21, 
        0x18, 0x54, 0x11, 0x09, 0x61, 
        0x12, 0x92, 0x63, 0x95, 0x11, 
        0x14, 0x64, 0x54, 0x81, 0x11, 
    },
  },
  // Level 40: Board: 0/1f2hb~dh1/1b~cgh~3/1g~bec~fa1/2~gb1~be1/1dedhga1c1/2cbfbede1/10
  {
    .name = "Spam Musubi",
    .solution = "bDfCIdHdDeEeFdEdDdDebFfFHeHbGdFdEfEeeFDebCcEGfdEbDcEdEcFGgFgdFeFfGIeeGIgHeIbHbdGeGcGdGeGf",
    .board = {
        0x17, 0x11, 0x93, 0x05, 0x91, 
        0x13, 0x04, 0x89, 0x01, 0x11, 
        0x18, 0x03, 0x64, 0x07, 0x21, 
        0x11, 0x08, 0x31, 0x03, 0x61, 
        0x15, 0x65, 0x98, 0x21, 0x41, 
        0x11, 0x43, 0x73, 0x65, 0x61, 
    },
  },
  // Level 41: Board: 0/1gde3a2/1be1d~1c2/2fbc~~e2/3hfadad1/1cbc1dedh1/1adegfbfe1/10
  {
    .name = "Poutine",
    .solution = "eCfDHdHdIeeDfDdDeDfDfGcDdDdEeEfEIfcDdEeEfEgGbBcDcDdDeEfFgGfGbCcDdEdGbFcFDbcDcGdGeEbGcGdGe",
    .board = {
        0x18, 0x56, 0x11, 0x12, 0x11, 
        0x13, 0x61, 0x50, 0x14, 0x11, 
        0x11, 0x73, 0x40, 0x06, 0x11, 
        0x11, 0x19, 0x72, 0x52, 0x51, 
        0x14, 0x34, 0x15, 0x65, 0x91, 
        0x12, 0x56, 0x87, 0x37, 0x61, 
    },
  },
  // Level 42: Board: 0/1fa~1d~3/3~~h~~a1/1c~~g1h~e1/1ebabcdgc1/1fdcf1ecd1/1ecbahcf2/10
  {
    .name = "Durian",
    .solution = "cBfBgDbDcDbBcBcEFeEebFFcIcHcEeGeFeEfHdGeFeIdHdcFCgGgFgdFDgEgeGfGIedGeGHecGdGeGfGIfbGcGdGe",
    .board = {
        0x17, 0x20, 0x15, 0x01, 0x11, 
        0x11, 0x10, 0x09, 0x00, 0x21, 
        0x14, 0x00, 0x81, 0x90, 0x61, 
        0x16, 0x32, 0x34, 0x58, 0x41, 
        0x17, 0x54, 0x71, 0x64, 0x51, 
        0x16, 0x43, 0x29, 0x47, 0x11, 
    },
  },
  // Level 43: Board: 0/1cfb1c~a~1/1e2gf~g~1/1d2ab~1~1/1e~hb2f~1/1dgehg~hd1/1hcgafbda1/10
  {
    .name = "Beetroot",
    .solution = "bEhEHfIfhBIehCgGfFgFfBfCgChCeCeFfFeFFfdFFdeFcEdEdFFdEebFEfcFdFGdFgFdEfbFbGCbbGcGDbCbbGcGd",
    .board = {
        0x14, 0x73, 0x14, 0x02, 0x01, 
        0x16, 0x11, 0x87, 0x08, 0x01, 
        0x15, 0x11, 0x23, 0x01, 0x01, 
        0x16, 0x09, 0x31, 0x17, 0x01, 
        0x15, 0x86, 0x98, 0x09, 0x51, 
        0x19, 0x48, 0x27, 0x35, 0x21, 
    },
  },
  // Level 44: Board: 0/2d2~b3/1ba~e~1~f1/1a1ca~~hd1/1g~b1~cae1/1defeb1ba1/1hgbdgagd1/10
  {
    .name = "Witchety Grub",
    .solution = "GbeCdFcCEdbEcFcCDfeFdFGeFgFfEfIcHdHdGdGgHgbEEgcFdFdGeGbEcFdGeGfGbFcFdGeGfGIecGdGeGfGgGGeb",
    .board = {
        0x11, 0x51, 0x10, 0x31, 0x11, 
        0x13, 0x20, 0x60, 0x10, 0x71, 
        0x12, 0x14, 0x20, 0x09, 0x51, 
        0x18, 0x03, 0x10, 0x42, 0x61, 
        0x15, 0x67, 0x63, 0x13, 0x21, 
        0x19, 0x83, 0x58, 0x28, 0x51, 
    },
  },
  // Level 45: Board: 0/10/1gb~6/2c~6/3~h~2h1/1~fcb~a~e1/1adegfgdc1/10
  {
    .name = "Fiddlehead Ferns",
    .solution = "cCGfeEdEdFFecFEefFeFdFgFfFeFdFeFGfFfEfDfHfGfFfEfIfHfGfFfIfHfGfbCcCdECfDfeEcGdGeGfGbGIgHgG",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x18, 0x30, 0x11, 0x11, 0x11, 
        0x11, 0x40, 0x11, 0x11, 0x11, 
        0x11, 0x10, 0x90, 0x11, 0x91, 
        0x10, 0x74, 0x30, 0x20, 0x61, 
        0x12, 0x56, 0x87, 0x85, 0x41, 
    },
  },
  // Level 46: Board: 0/2af~a4/2dg~5/1~hce1e~c1/1c1dca1~g1/1gbegbada1/1hgfedhch1/10
  {
    .name = "Vegemite",
    .solution = "FbdBcBeBdBdCcCCdDdEdFbEccGEdbFcGbFcDFeEfDfFfEfGfFfHfGfIeHfGfIfHfIfEfGfgGFfcFfGeGgGgDHfcGd",
    .board = {
        0x11, 0x27, 0x02, 0x11, 0x11, 
        0x11, 0x58, 0x01, 0x11, 0x11, 
        0x10, 0x94, 0x61, 0x60, 0x41, 
        0x14, 0x15, 0x42, 0x10, 0x81, 
        0x18, 0x36, 0x83, 0x25, 0x21, 
        0x19, 0x87, 0x65, 0x94, 0x91, 
    },
  },
  // Level 47: Board: 0/1bfc2~bd1/1eah~f~f2/4~dhea1/1fd1~abcd1/1hef~cgeh1/2dbgbed2/10
  {
    .name = "Blutwurst",
    .solution = "FccFHbFdGdHeIbdCFdFedCeDcCeEdCIeHeeEDfEfGfFfbBcBDfdCcCbEHfGfcGcFFgdCbCcCGgdCcGdGeGfGbFIfc",
    .board = {
        0x13, 0x74, 0x11, 0x03, 0x51, 
        0x16, 0x29, 0x07, 0x07, 0x11, 
        0x11, 0x11, 0x05, 0x96, 0x21, 
        0x17, 0x51, 0x02, 0x34, 0x51, 
        0x19, 0x67, 0x04, 0x86, 0x91, 
        0x11, 0x53, 0x83, 0x65, 0x11, 
    },
  },
  // Level 48: Board: 0/10/10/1h~7/1db~~~~~2/1ae~~b~fa1/1e1f1d~h2/10
  {
    .name = "Sylta",
    .solution = "bDcFcEbEfGHfGfFfdEcEIfHfGfeEdEfEeEfEgEhFgFfFeFdFcFgFfFeFdFgFfFeFbFcFdFeFGfFfEfDfCfHfGfFfE",
    .board = {
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x11, 
        0x19, 0x01, 0x11, 0x11, 0x11, 
        0x15, 0x30, 0x00, 0x00, 0x11, 
        0x12, 0x60, 0x03, 0x07, 0x21, 
        0x16, 0x17, 0x15, 0x09, 0x11, 
    },
  },
  // Level 49: Board: 0/5~ecg1/5~g3/5~e3/1ce~h~hdf1/1bcgbcfcb1/2faedhaf1/10
  {
    .name = "Chicken Feet",
    .solution = "GbHbGbEeFeeFIbGcHbFeGcFeGddFFfGeFeHeGeIeHefFeEcFbEdFeFcEdFHfeFcFbFdFcFIfHfeGdFeFeGdGeGfGc",
    .board = {
        0x11, 0x11, 0x10, 0x64, 0x81, 
        0x11, 0x11, 0x10, 0x81, 0x11, 
        0x11, 0x11, 0x10, 0x61, 0x11, 
        0x14, 0x60, 0x90, 0x95, 0x71, 
        0x13, 0x48, 0x34, 0x74, 0x31, 
        0x11, 0x72, 0x65, 0x92, 0x71, 
    },
  },
  // Level 50: Board: 0/6~hb1/4g~~c2/1d1ca~~bg1/1edh1g~1h1/1fedgefdg1/1dbhd1dba1/10
  {
    .name = "Gravlax",
    .solution = "eCeDdDeDfDHbGdFdEdcEHdGdHdFdcFEdDefEDgEfDfbEFfcEGfFfGfHfIdfFIfEgcFdFeFHdIbhDIfHfIfGfgGFfE",
    .board = {
        0x11, 0x11, 0x11, 0x09, 0x31, 
        0x11, 0x11, 0x80, 0x04, 0x11, 
        0x15, 0x14, 0x20, 0x03, 0x81, 
        0x16, 0x59, 0x18, 0x01, 0x91, 
        0x17, 0x65, 0x86, 0x75, 0x81, 
        0x15, 0x39, 0x51, 0x53, 0x21, 
    },
  },
  // Level 51: Board: 0/1h~1~a4/1eh~he4/1a1da2g~1/1h1ghecab1/1bab1hbhc1/1hgedceca1/10
  {
    .name = "Kangaroo",
    .solution = "cCFbbBcCdCFchDGeFeHeGeIeHefFIfeEfFdDeEbCdEdGcFbFEecCdDIfgFeEdEdGeGdGfGHfGfcFdGeGcGdGHgeEb",
    .board = {
        0x19, 0x01, 0x02, 0x11, 0x11, 
        0x16, 0x90, 0x96, 0x11, 0x11, 
        0x12, 0x15, 0x21, 0x18, 0x01, 
        0x19, 0x18, 0x96, 0x42, 0x31, 
        0x13, 0x23, 0x19, 0x39, 0x41, 
        0x19, 0x86, 0x54, 0x64, 0x21, 
    },
  },
  // Level 52: Board: 0/2b~1f~3/1~dh2~a2/1dfgcg~3/2gcedbh~1/1f1gfah1b1/1aghcegda1/10
  {
    .name = "Uni",
    .solution = "cBCcCdDdHcDeDdEdFdGdhEgEfEeEeEGgdDeEdEeEfFcEdEeEfBeGdGbDbGcGcDbGeGdGfGHeIeHeeGGffGgGFgEgD",
    .board = {
        0x11, 0x30, 0x17, 0x01, 0x11, 
        0x10, 0x59, 0x11, 0x02, 0x11, 
        0x15, 0x78, 0x48, 0x01, 0x11, 
        0x11, 0x84, 0x65, 0x39, 0x01, 
        0x17, 0x18, 0x72, 0x91, 0x31, 
        0x12, 0x89, 0x46, 0x85, 0x21, 
    },
  },
  // Level 53: Board: 0/1~e1e~hdg1/1~a1f~4/1~b1c~fb2/1~ahge1ga1/1abghfgc2/1cgf1dcad1/10
  {
    .name = "Pork Loaf",
    .solution = "eCCbCdHdGdeCDeEeGbFbEfcEEfFffDFeEebDDfEfFfGfHfHbGdGbfDEffFHfbEFfcEcFbFcFdFeFHgIgIefFIbHbG",
    .board = {
        0x10, 0x61, 0x60, 0x95, 0x81, 
        0x10, 0x21, 0x70, 0x11, 0x11, 
        0x10, 0x31, 0x40, 0x73, 0x11, 
        0x10, 0x29, 0x86, 0x18, 0x21, 
        0x12, 0x38, 0x97, 0x84, 0x11, 
        0x14, 0x87, 0x15, 0x42, 0x51, 
    },
  },
  // Level 54: Board: 0/2dfd~ed2/1~cba~g1e1/1age1~c~h1/1gfhc~1gf1/5~fba1/2gahbged1/10
  {
    .name = "Jellied Eels",
    .solution = "eBgDHbGbdBeBGdfFeCdCeCfGfFgDHfHfcCdCGfeCgGIfHfdEIeHfeECcdEcEeEIeHfdEeEIfHfbEcEdEeEdGcGdGe",
    .board = {
        0x11, 0x57, 0x50, 0x65, 0x11, 
        0x10, 0x43, 0x20, 0x81, 0x61, 
        0x12, 0x86, 0x10, 0x40, 0x91, 
        0x18, 0x79, 0x40, 0x18, 0x71, 
        0x11, 0x11, 0x10, 0x73, 0x21, 
        0x11, 0x82, 0x93, 0x86, 0x51, 
    },
  },
  // Level 55: Board: 0/2~gc~h3/2~becb~2/1~hdhb1h~1/1~feah1gh1/1dagbcaea1/1abf2gbe1/10
  {
    .name = "Owl Soup",
    .solution = "hDDbEbGbFbgCfCeCdCFddCcCeCdCCdDdEdEdcEcFFdbFcFEdDeEeDeFeEehEEfFfGfHfIecEdECfDffFgFeEfFgFg",
    .board = {
        0x11, 0x08, 0x40, 0x91, 0x11, 
        0x11, 0x03, 0x64, 0x30, 0x11, 
        0x10, 0x95, 0x93, 0x19, 0x01, 
        0x10, 0x76, 0x29, 0x18, 0x91, 
        0x15, 0x28, 0x34, 0x26, 0x21, 
        0x12, 0x37, 0x11, 0x83, 0x61, 
    },
  },
  // Level 56: Board: 0/1~f3cd~1/1dg1~d2~1/1bh~de1db1/1dcehcagd1/1c1db1gag1/1bdahfad2/10
  {
    .name = "Chewing Gum",
    .solution = "FcFdEdEeFeGeHeHfhBIdCbfGeGdEcEcDbDfEeEdEcDdDdGDgEgcEFgFebEcEdFeGdGeGIfcGdGeGfGIfbGcGdGeGf",
    .board = {
        0x10, 0x71, 0x11, 0x45, 0x01, 
        0x15, 0x81, 0x05, 0x11, 0x01, 
        0x13, 0x90, 0x56, 0x15, 0x31, 
        0x15, 0x46, 0x94, 0x28, 0x51, 
        0x14, 0x15, 0x31, 0x82, 0x81, 
        0x13, 0x52, 0x97, 0x25, 0x11, 
    },
  },
  // Level 57: Board: 0/3~ae1ef1/1~e~dbc1c1/1~ahg2cf1/1gcb1cda2/1a1defefa1/1fcafdhe2/10
  {
    .name = "Cod Tongues",
    .solution = "EbCcDcFbEbDcEcDcFcEcCdDdGcFcEcbDcDEfFfGeFfGgIdhFcEEdDddFeFdFfFeFeGgGIfHfIddGcGeGdGfGHfGfh",
    .board = {
        0x11, 0x10, 0x26, 0x16, 0x71, 
        0x10, 0x60, 0x53, 0x41, 0x41, 
        0x10, 0x29, 0x81, 0x14, 0x71, 
        0x18, 0x43, 0x14, 0x52, 0x11, 
        0x12, 0x15, 0x67, 0x67, 0x21, 
        0x17, 0x42, 0x75, 0x96, 0x11, 
    },
  },
  // Level 58: Board: 0/4bg~f2/1~dgc1ae~1/1dec1bfb~1/1ebfaed1f1/1dca3he1/1fefehda2/10
  {
    .name = "Scrapple",
    .solution = "CcCdHbhCgCfDDcCdDdCdEcEcDcFbEcDcDdDfEecFFeEeGeFeFgEgDgbFGgFgEgEeHdGeFeEedGeGfGcGdGeGfGIdH",
    .board = {
        0x11, 0x11, 0x38, 0x07, 0x11, 
        0x10, 0x58, 0x41, 0x26, 0x01, 
        0x15, 0x64, 0x13, 0x73, 0x01, 
        0x16, 0x37, 0x26, 0x51, 0x71, 
        0x15, 0x42, 0x11, 0x19, 0x61, 
        0x17, 0x67, 0x69, 0x52, 0x11, 
    },
  },
  // Level 59: Board: 0/1h2g2d2/1g~ca~ce2/1h~2dagc1/1ebgdfh3/1achece1b1/1e1dfeacg1/10
  {
    .name = "Blazing Curry",
    .solution = "DcbCcCeCFcEcDcGcFcEcHcGcFcHcGcGdeCdCcCHdfCeCdCIdgCfCeCGcHcGcFcEcDcCcCebFDeEeFehDgDCeDeeEG",
    .board = {
        0x19, 0x11, 0x81, 0x15, 0x11, 
        0x18, 0x04, 0x20, 0x46, 0x11, 
        0x19, 0x01, 0x15, 0x28, 0x41, 
        0x16, 0x38, 0x57, 0x91, 0x11, 
        0x12, 0x49, 0x64, 0x61, 0x31, 
        0x16, 0x15, 0x76, 0x24, 0x81, 
    },
  },

};
