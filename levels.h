

static const uint8_t levels[][30] = {
    // Level 1,
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x12,0x30,0x01,0x11,
        0x11,0x11,0x10,0x01,0x11,
        0x11,0x10,0x00,0x01,0x11,
        0x11,0x13,0x00,0x21,0x11,
        0x11,0x11,0x32,0x11,0x11,
    },
    // Level 2
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x10,0x03,0x00,0x11,
        0x11,0x10,0x02,0x00,0x11,
        0x11,0x10,0x34,0x00,0x11,
        0x11,0x10,0x25,0x00,0x11,
        0x11,0x12,0x54,0x04,0x11,
    },
    // Level 3
    {
        0x11,0x11,0x00,0x11,0x11,
        0x11,0x10,0x00,0x01,0x11,
        0x11,0x60,0x78,0x06,0x11,
        0x11,0x80,0x11,0x07,0x11,
        0x11,0x18,0x00,0x71,0x11,
        0x11,0x11,0x00,0x11,0x11,
    },
    // Level 4
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x11,0x21,0x11,0x11,
        0x11,0x13,0x40,0x11,0x11,
        0x11,0x11,0x30,0x30,0x11,
        0x11,0x11,0x40,0x41,0x11,
        0x11,0x11,0x11,0x21,0x11,
    },
    // Level 5
    {
        0x11,0x11,0x30,0x41,0x11,
        0x11,0x11,0x50,0x51,0x11,
        0x11,0x11,0x10,0x61,0x11,
        0x11,0x11,0x00,0x51,0x11,
        0x11,0x11,0x00,0x61,0x11,
        0x11,0x11,0x41,0x31,0x11,
    },
    // Level 6
    {
        0x11,0x10,0x00,0x00,0x11,
        0x11,0x16,0x00,0x07,0x11,
        0x11,0x11,0x80,0x01,0x11,
        0x11,0x18,0x70,0x27,0x11,
        0x11,0x16,0x80,0x72,0x11,
        0x11,0x11,0x67,0x27,0x11,
    },
    // Level 7
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x10,0x03,0x41,0x11,
        0x11,0x10,0x04,0x51,0x11,
        0x11,0x10,0x05,0x31,0x11,
        0x11,0x10,0x03,0x41,0x11,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 8
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x00,0x00,0x05,0x11,
        0x11,0x00,0x00,0x06,0x11,
        0x11,0x20,0x03,0x02,0x11,
        0x11,0x36,0x06,0x01,0x11,
        0x11,0x62,0x51,0x21,0x11,
    },
    // Level 9
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x11,0x10,0x21,0x11,
        0x11,0x13,0x00,0x42,0x11,
        0x11,0x11,0x30,0x24,0x11,
        0x11,0x11,0x10,0x41,0x11,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 10
    {
        0x11,0x00,0x00,0x00,0x11,
        0x14,0x00,0x00,0x40,0x01,
        0x15,0x65,0x00,0x57,0x01,
        0x16,0x24,0x00,0x74,0x21,
        0x17,0x65,0x01,0x26,0x81,
        0x12,0x76,0x11,0x68,0x51,
    },
    // Level 11,
    {
        0x11,0x00,0x00,0x45,0x11,
        0x11,0x00,0x60,0x11,0x11,
        0x11,0x00,0x10,0x00,0x11,
        0x11,0x50,0x10,0x00,0x11,
        0x11,0x11,0x00,0x74,0x11,
        0x11,0x40,0x06,0x47,0x11,
    },
    // Level 12
    {
        0x11,0x23,0x40,0x43,0x21,
        0x11,0x11,0x10,0x11,0x11,
        0x11,0x13,0x00,0x03,0x11,
        0x11,0x11,0x00,0x01,0x11,
        0x11,0x11,0x00,0x01,0x11,
        0x11,0x11,0x23,0x41,0x11,
    },
    // Level 13
    {
        0x13,0x45,0x40,0x54,0x31,
        0x11,0x11,0x10,0x11,0x11,
        0x11,0x11,0x10,0x01,0x11,
        0x11,0x11,0x10,0x01,0x11,
        0x11,0x11,0x50,0x01,0x11,
        0x11,0x11,0x10,0x11,0x11,
    },
    // Level 14
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x11,0x60,0x01,0x11,
        0x11,0x11,0x70,0x01,0x11,
        0x11,0x10,0x80,0x86,0x11,
        0x11,0x11,0x71,0x61,0x11,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 15
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x11,0x13,0x01,0x11,
        0x11,0x13,0x04,0x03,0x11,
        0x11,0x11,0x03,0x04,0x11,
        0x11,0x14,0x01,0x43,0x11,
        0x11,0x11,0x41,0x11,0x11,
    },
    // Level 16
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x23,0x20,0x42,0x51,
        0x11,0x12,0x50,0x53,0x11,
        0x11,0x11,0x40,0x31,0x11,
        0x11,0x11,0x15,0x11,0x11,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 17
    {
        0x11,0x13,0x45,0x03,0x11,
        0x11,0x16,0x16,0x35,0x11,
        0x11,0x17,0x07,0x64,0x11,
        0x11,0x11,0x01,0x11,0x11,
        0x11,0x16,0x71,0x11,0x11,
        0x11,0x17,0x31,0x11,0x11,
    },
    // Level 18
    {
        0x11,0x11,0x16,0x01,0x11,
        0x11,0x11,0x17,0x00,0x11,
        0x11,0x18,0x08,0x01,0x11,
        0x11,0x17,0x06,0x01,0x11,
        0x11,0x11,0x07,0x00,0x11,
        0x11,0x11,0x16,0x11,0x11,
    },
    // Level 19
    {
        0x11,0x11,0x20,0x11,0x11,
        0x11,0x11,0x10,0x21,0x11,
        0x11,0x34,0x00,0x51,0x11,
        0x11,0x53,0x00,0x24,0x11,
        0x11,0x45,0x05,0x41,0x11,
        0x11,0x11,0x01,0x11,0x11,
    },
    // Level 20
    {
        0x11,0x11,0x10,0x11,0x11,
        0x11,0x11,0x10,0x31,0x11,
        0x11,0x11,0x00,0x40,0x11,
        0x11,0x15,0x00,0x60,0x11,
        0x11,0x11,0x34,0x16,0x11,
        0x11,0x11,0x11,0x15,0x11,
    },
    // Level 21,
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x11,0x02,0x11,0x11,
        0x11,0x11,0x13,0x41,0x11,
        0x11,0x14,0x02,0x31,0x11,
        0x11,0x15,0x04,0x50,0x11,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 22
    {
        0x11,0x80,0x00,0x01,0x11,
        0x11,0x11,0x10,0x01,0x11,
        0x11,0x90,0x00,0x89,0x11,
        0x11,0x11,0x00,0x11,0x11,
        0x11,0x11,0x90,0x01,0x11,
        0x11,0x11,0x80,0x01,0x11,
    },
    // Level 23
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x11,0x11,0x11,0x21,
        0x11,0x00,0x00,0x30,0x41,
        0x11,0x50,0x60,0x70,0x31,
        0x11,0x40,0x20,0x80,0x81,
        0x11,0x50,0x70,0x60,0x61,
    },
    // Level 24
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x15,0x05,0x00,0x11,
        0x11,0x11,0x06,0x06,0x11,
        0x11,0x16,0x07,0x07,0x11,
        0x11,0x15,0x01,0x11,0x11,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 25
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x02,0x34,0x50,0x11,
        0x11,0x01,0x11,0x60,0x11,
        0x11,0x00,0x10,0x20,0x11,
        0x11,0x50,0x00,0x16,0x11,
        0x11,0x43,0x16,0x25,0x11,
    },
    // Level 26
    {
        0x11,0x12,0x30,0x01,0x11,
        0x11,0x14,0x20,0x01,0x11,
        0x11,0x13,0x40,0x51,0x11,
        0x11,0x11,0x10,0x41,0x11,
        0x11,0x14,0x30,0x21,0x11,
        0x11,0x15,0x10,0x31,0x11,
    },
    // Level 27
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x11,0x10,0x41,0x11,
        0x11,0x11,0x00,0x54,0x11,
        0x11,0x15,0x06,0x71,0x11,
        0x11,0x11,0x47,0x40,0x11,
        0x11,0x11,0x16,0x51,0x11,
    },
    // Level 28
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x11,0x10,0x51,0x11,
        0x11,0x11,0x16,0x11,0x11,
        0x11,0x17,0x07,0x00,0x11,
        0x11,0x15,0x71,0x85,0x11,
        0x11,0x56,0x11,0x18,0x11,
    },
    // Level 29
    {
        0x11,0x11,0x20,0x11,0x11,
        0x11,0x11,0x10,0x03,0x11,
        0x11,0x13,0x00,0x04,0x11,
        0x11,0x14,0x00,0x32,0x11,
        0x11,0x15,0x05,0x41,0x11,
        0x11,0x14,0x01,0x11,0x11,
    },
    // Level 30
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x31,0x00,0x40,0x11,
        0x11,0x41,0x00,0x50,0x11,
        0x11,0x60,0x70,0x65,0x11,
        0x11,0x11,0x40,0x14,0x11,
        0x11,0x11,0x13,0x17,0x11,
    },
    // Level 31,
    {
        0x11,0x10,0x20,0x30,0x11,
        0x11,0x10,0x32,0x40,0x11,
        0x11,0x15,0x43,0x20,0x11,
        0x11,0x12,0x64,0x36,0x11,
        0x11,0x11,0x56,0x23,0x11,
        0x11,0x11,0x15,0x11,0x11,
    },
    // Level 32
    {
        0x11,0x10,0x00,0x11,0x11,
        0x12,0x00,0x34,0x00,0x11,
        0x11,0x00,0x41,0x00,0x01,
        0x15,0x00,0x50,0x00,0x21,
        0x11,0x30,0x10,0x01,0x11,
        0x11,0x51,0x11,0x41,0x11,
    },
    // Level 33
    {
        0x11,0x11,0x23,0x11,0x11,
        0x11,0x10,0x45,0x61,0x11,
        0x11,0x00,0x73,0x86,0x11,
        0x11,0x00,0x45,0x97,0x11,
        0x11,0x10,0x98,0x71,0x11,
        0x11,0x11,0x62,0x11,0x11,
    },
    // Level 34
    {
        0x11,0x40,0x00,0x05,0x11,
        0x11,0x11,0x00,0x11,0x11,
        0x11,0x14,0x64,0x11,0x11,
        0x11,0x11,0x51,0x11,0x11,
        0x11,0x11,0x60,0x11,0x11,
        0x11,0x10,0x51,0x11,0x11,
    },
    // Level 35
    {
        0x11,0x11,0x23,0x01,0x11,
        0x11,0x11,0x14,0x01,0x11,
        0x11,0x11,0x11,0x01,0x11,
        0x11,0x15,0x34,0x01,0x11,
        0x11,0x11,0x15,0x01,0x11,
        0x11,0x12,0x34,0x25,0x11,
    },
    // Level 36
    {
        0x11,0x13,0x41,0x11,0x11,
        0x11,0x11,0x51,0x11,0x11,
        0x11,0x10,0x60,0x11,0x11,
        0x11,0x00,0x40,0x06,0x11,
        0x11,0x40,0x10,0x05,0x11,
        0x11,0x34,0x35,0x61,0x11,
    },
    // Level 37
    {
        0x11,0x02,0x00,0x00,0x11,
        0x11,0x03,0x00,0x40,0x11,
        0x11,0x31,0x30,0x14,0x11,
        0x11,0x10,0x56,0x01,0x11,
        0x11,0x60,0x45,0x62,0x11,
        0x11,0x13,0x64,0x21,0x11,
    },
    // Level 38
    {
        0x11,0x11,0x10,0x02,0x31,
        0x11,0x11,0x10,0x03,0x21,
        0x11,0x10,0x00,0x24,0x31,
        0x11,0x53,0x11,0x11,0x11,
        0x11,0x42,0x11,0x11,0x11,
        0x11,0x54,0x11,0x11,0x11,
    },
    // Level 39
    {
        0x11,0x12,0x30,0x01,0x11,
        0x11,0x14,0x50,0x11,0x11,
        0x11,0x11,0x60,0x11,0x11,
        0x11,0x11,0x16,0x11,0x11,
        0x11,0x11,0x03,0x51,0x11,
        0x11,0x10,0x04,0x21,0x11,
    },
    // Level 40
    {
        0x11,0x11,0x10,0x02,0x31,
        0x11,0x11,0x10,0x04,0x21,
        0x11,0x11,0x10,0x25,0x31,
        0x11,0x43,0x00,0x11,0x11,
        0x11,0x52,0x11,0x11,0x11,
        0x11,0x35,0x11,0x11,0x11,
    },
    // Level 41,
    {
        0x11,0x10,0x02,0x31,0x11,
        0x11,0x14,0x03,0x11,0x11,
        0x11,0x53,0x04,0x03,0x11,
        0x11,0x32,0x05,0x31,0x11,
        0x11,0x53,0x03,0x51,0x11,
        0x11,0x11,0x31,0x11,0x11,
    },
    // Level 42
    {
        0x11,0x10,0x00,0x11,0x11,
        0x11,0x14,0x50,0x01,0x11,
        0x11,0x11,0x65,0x00,0x11,
        0x11,0x11,0x14,0x06,0x11,
        0x11,0x11,0x11,0x04,0x11,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 43
    {
        0x11,0x30,0x01,0x11,0x11,
        0x11,0x40,0x14,0x11,0x11,
        0x11,0x15,0x05,0x61,0x11,
        0x11,0x16,0x03,0x56,0x11,
        0x11,0x11,0x05,0x31,0x11,
        0x11,0x11,0x13,0x11,0x11,
    },
    // Level 44
    {
        0x11,0x23,0x00,0x04,0x11,
        0x11,0x54,0x50,0x05,0x11,
        0x11,0x12,0x43,0x04,0x11,
        0x11,0x11,0x11,0x01,0x11,
        0x11,0x11,0x11,0x01,0x11,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 45
    {
        0x11,0x12,0x10,0x03,0x11,
        0x11,0x13,0x10,0x24,0x11,
        0x11,0x15,0x04,0x62,0x11,
        0x11,0x11,0x05,0x26,0x11,
        0x11,0x11,0x02,0x61,0x11,
        0x11,0x11,0x03,0x11,0x11,
    },
    // Level 46
    // Level 47
    {
        0x11,0x12,0x01,0x11,0x11,
        0x11,0x13,0x00,0x00,0x11,
        0x11,0x11,0x00,0x02,0x11,
        0x11,0x10,0x03,0x13,0x11,
        0x11,0x10,0x02,0x12,0x11,
        0x11,0x10,0x03,0x23,0x11,
    },
    // Level 48
    {
        0x11,0x11,0x11,0x11,0x11,
        0x11,0x02,0x30,0x43,0x51,
        0x11,0x04,0x60,0x65,0x11,
        0x11,0x01,0x10,0x11,0x11,
        0x11,0x46,0x20,0x41,0x11,
        0x11,0x11,0x10,0x21,0x11,
    },
    // Level 49
    {
        0x11,0x10,0x02,0x00,0x11,
        0x11,0x13,0x04,0x00,0x11,
        0x11,0x11,0x01,0x00,0x11,
        0x11,0x10,0x04,0x00,0x11,
        0x11,0x13,0x03,0x14,0x11,
        0x11,0x12,0x02,0x11,0x11,
    },
    // Level 50
    {
        0x11,0x23,0x01,0x11,0x11,
        0x11,0x42,0x50,0x01,0x11,
        0x14,0x11,0x11,0x00,0x11,
        0x16,0x00,0x00,0x60,0x01,
        0x14,0x05,0x25,0x23,0x21,
        0x11,0x51,0x11,0x11,0x11,
    },
    // Level 51,
    {
        0x11,0x12,0x03,0x11,0x11,
        0x10,0x03,0x01,0x00,0x41,
        0x12,0x15,0x00,0x45,0x11,
        0x11,0x11,0x00,0x61,0x11,
        0x11,0x15,0x06,0x11,0x11,
        0x11,0x16,0x03,0x11,0x11,
    },
    // Level 52
    {
        0x11,0x20,0x00,0x03,0x11,
        0x14,0x50,0x23,0x06,0x41,
        0x17,0x60,0x11,0x04,0x51,
        0x11,0x10,0x00,0x01,0x11,
        0x11,0x10,0x00,0x71,0x11,
        0x11,0x11,0x76,0x11,0x11,
    },
    // Level 53
    {
        0x11,0x11,0x02,0x11,0x11,
        0x11,0x11,0x03,0x11,0x11,
        0x10,0x00,0x02,0x04,0x51,
        0x16,0x00,0x03,0x05,0x61,
        0x11,0x11,0x02,0x11,0x11,
        0x11,0x11,0x04,0x11,0x11,
    },
    // Level 54
    {
        0x11,0x11,0x23,0x41,0x11,
        0x11,0x11,0x52,0x31,0x11,
        0x11,0x10,0x41,0x50,0x11,
        0x11,0x00,0x11,0x10,0x31,
        0x11,0x00,0x52,0x50,0x41,
        0x11,0x54,0x11,0x14,0x21,
    },
    // Level 55
    {
        0x11,0x00,0x23,0x40,0x11,
        0x11,0x01,0x11,0x10,0x31,
        0x11,0x00,0x05,0x00,0x61,
        0x11,0x60,0x06,0x00,0x21,
        0x11,0x40,0x24,0x00,0x71,
        0x11,0x24,0x61,0x37,0x51,
    },
    // Level 56
    {
        0x11,0x11,0x11,0x11,0x11,
        0x12,0x30,0x00,0x04,0x51,
        0x15,0x64,0x00,0x73,0x61,
        0x16,0x25,0x00,0x65,0x71,
        0x17,0x52,0x00,0x17,0x51,
        0x11,0x11,0x11,0x11,0x11,
    },
    // Level 57
    {
        0x11,0x02,0x13,0x00,0x11,
        0x11,0x45,0x11,0x10,0x11,
        0x11,0x56,0x00,0x10,0x11,
        0x11,0x47,0x10,0x10,0x11,
        0x11,0x76,0x20,0x03,0x11,
        0x11,0x82,0x40,0x48,0x11,
    },
    // Level 58
    {
        0x11,0x11,0x11,0x11,0x11,
        0x10,0x00,0x00,0x20,0x01,
        0x13,0x00,0x40,0x50,0x01,
        0x16,0x00,0x54,0x32,0x01,
        0x17,0x00,0x45,0x28,0x01,
        0x16,0x00,0x79,0x82,0x91,
    },
    // Level 59
    {
        0x11,0x12,0x01,0x10,0x31,
        0x11,0x11,0x00,0x00,0x41,
        0x11,0x10,0x00,0x30,0x11,
        0x11,0x50,0x63,0x20,0x11,
        0x11,0x14,0x21,0x70,0x11,
        0x11,0x16,0x71,0x32,0x31,
    },
    // Level 60
    {
        0x20,0x11,0x11,0x30,0x31,
        0x10,0x12,0x00,0x40,0x51,
        0x10,0x11,0x00,0x60,0x61,
        0x12,0x06,0x50,0x40,0x47,
        0x11,0x11,0x60,0x10,0x76,
        0x11,0x11,0x40,0x10,0x11,
    }
};
