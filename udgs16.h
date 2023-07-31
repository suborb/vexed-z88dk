

#include <stdint.h>

static uint8_t udg16[] = {
    // Empty space
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Wall
    0b11110110,
    0b11101101,
    0b11011011,
    0b10110111,
    0b01101111,
    0b11011111,
    0b10111111,
    0b01111111,
    0b11111110,
    0b11111110,
    0b11111110,
    0b11111110,
    0b11111110,
    0b11111100,
    0b11111010,
    0b11110110,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111110,
    0b11111101,
    0b11111011,
    0b00000000,
    0b11101100,
    0b11011010,
    0b10110110,
    0b01101110,
    0b11011110,
    0b10111110,
    0b01111110,
    0b00000000,

    // Lightning bolt
    0b01111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111101,
    0b11111000,
    0b11111000,
    0b11110000,
    0b11111110,
    0b11111111,
    0b11111111,
    0b11111101,
    0b11111001,
    0b11100011,
    0b11010111,
    0b00100111,
    0b11100100,
    0b11101011,
    0b11000111,
    0b10011111,
    0b10111111,
    0b11111111,
    0b11111111,
    0b01111111,
    0b00001111,
    0b00011111,
    0b10111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111110,

    // Circle
    0b01111111,
    0b11111111,
    0b11111111,
    0b11111000,
    0b11110000,
    0b11100000,
    0b11100000,
    0b11100000,
    0b11111110,
    0b11111111,
    0b11111111,
    0b00011111,
    0b00001111,
    0b00000111,
    0b00000111,
    0b00000111,
    0b11100000,
    0b11100100,
    0b11100010,
    0b11110000,
    0b11111000,
    0b11111111,
    0b11111111,
    0b01111111,
    0b00000111,
    0b00000111,
    0b00000111,
    0b00001111,
    0b00011111,
    0b11111111,
    0b11111111,
    0b11111110,

    // Diamond
    0b01111111,
    0b11111111,
    0b11111110,
    0b11111100,
    0b11111000,
    0b11110000,
    0b11100000,
    0b11000000,
    0b11111110,
    0b11111111,
    0b01111111,
    0b10111111,
    0b01011111,
    0b10101111,
    0b01010111,
    0b10101011,
    0b11000000,
    0b11100000,
    0b11110000,
    0b11111000,
    0b11111100,
    0b11111110,
    0b11111111,
    0b00000000,
    0b01010011,
    0b10100111,
    0b01001111,
    0b10011111,
    0b00111111,
    0b01111111,
    0b11111111,
    0b00000000,

    // Chequerboard
    0b01111111,
    0b10000000,
    0b10011111,
    0b10100011,
    0b10100011,
    0b10111100,
    0b10111100,
    0b10100011,
    0b11111110,
    0b00000001,
    0b11111001,
    0b11000101,
    0b11000101,
    0b00111101,
    0b00111101,
    0b11000101,
    0b10100011,
    0b10111100,
    0b10111100,
    0b10100011,
    0b10100011,
    0b10011111,
    0b10000000,
    0b01111111,
    0b11000101,
    0b00111101,
    0b00111101,
    0b11000101,
    0b11000101,
    0b11111001,
    0b00000001,
    0b11111110,

    // Diagonal Cross
    0b01111111,
    0b11111111,
    0b11011111,
    0b11101111,
    0b11110111,
    0b11111011,
    0b11111101,
    0b11111110,
    0b11111110,
    0b11111111,
    0b11111011,
    0b11110111,
    0b11101111,
    0b11011111,
    0b10111111,
    0b01111111,
    0b11111110,
    0b11111101,
    0b11111011,
    0b11110111,
    0b11101111,
    0b11011111,
    0b11111111,
    0b01111111,
    0b01111111,
    0b10111111,
    0b11011111,
    0b11101111,
    0b11110111,
    0b11111011,
    0b11111111,
    0b11111110,

    // Bow tie thing
    0b01111111,
    0b11111110,
    0b11111100,
    0b11111000,
    0b11110000,
    0b11100000,
    0b11000000,
    0b10000000,
    0b11111110,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b01111111,
    0b00000001,
    0b00000011,
    0b00000111,
    0b00001111,
    0b00011111,
    0b00111111,
    0b01111111,
    0b11111110,


    // Square cross
    0b01111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111100,
    0b11111100,
    0b11110000,
    0b11110000,
    0b11111110,
    0b11111111,
    0b11111111,
    0b11111111,
    0b00111111,
    0b00111111,
    0b00001111,
    0b00001111,
    0b11110000,
    0b11110000,
    0b11111100,
    0b11111100,
    0b11111111,
    0b11111111,
    0b11111111,
    0b01111111,
    0b00001111,
    0b00001111,
    0b00111111,
    0b00111111,
    0b11111111,
    0b11111111,
    0b11111111,
    0b11111110,
};
