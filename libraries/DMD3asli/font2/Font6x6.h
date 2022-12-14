

/*
 *
 * Font6x6
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Font6x6.h
 * Date                : 05.05.2018
 * Font size in bytes  : 3474
 * Font width          : 6
 * Font height         : -6
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef FONT6X6_H
#define FONT6X6_H

#define FONT6X6_WIDTH 6
#define FONT6X6_HEIGHT -6

const static uint8_t Font6x6[] PROGMEM = {
    0x0D, 0x92, // size
    0x06, // width
    0x07, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x06, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x04, 0x05, 0x05, 
    0x06, 0x05, 0x04, 0x06, 0x04, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x04, 0x04, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x06, 0x08, 0x06, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x07, 0x08, 0x07, 0x06, 0x06, 0x06, 
    0x06, 0x06, 0x05, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 
    0x05, 0x06, 0x06, 0x04, 0x06, 0x06, 0x04, 0x08, 0x05, 0x06, 
    0x06, 0x06, 0x05, 0x06, 0x05, 0x06, 0x06, 0x08, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 33
    0x00, 0x0C, 0x00, 0x0C, 0x00, // 34
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0x00, 0x14, 0x0C, 0x00, // 39
    0x78, 0xFC, 0x84, 0x84, 0x00, // 40
    0x00, 0x84, 0x84, 0xFC, 0x78, // 41
    0x00, 0x14, 0x08, 0x08, 0x14, 0x00, // 42
    0x10, 0x10, 0x7C, 0x10, 0x10, // 43
    0x00, 0xA0, 0x60, 0x00, // 44
    0x00, 0x20, 0x20, 0x20, 0x20, 0x00, // 45
    0x00, 0xC0, 0xC0, 0x00, // 46
    0x80, 0xC0, 0x60, 0x30, 0x18, 0x08, // 47
    0x78, 0xFC, 0x84, 0x84, 0xFC, 0x78, // 48
    0x84, 0x84, 0xFC, 0xFC, 0x80, 0x80, // 49
    0xC4, 0xE4, 0xA4, 0xA4, 0xBC, 0x98, // 50
    0x84, 0xA4, 0xA4, 0xA4, 0xFC, 0x58, // 51
    0x60, 0x70, 0x48, 0xFC, 0xFC, 0x40, // 52
    0x9C, 0x9C, 0x94, 0x94, 0xF4, 0x64, // 53
    0x78, 0xFC, 0x94, 0x94, 0xF4, 0x60, // 54
    0x04, 0x04, 0xE4, 0xF4, 0x1C, 0x0C, // 55
    0x58, 0xFC, 0xA4, 0xA4, 0xFC, 0x58, // 56
    0x18, 0xBC, 0xA4, 0xA4, 0xFC, 0x78, // 57
    0x00, 0xCC, 0xCC, 0x00, // 58
    0x00, 0xAC, 0x6C, 0x00, // 59
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 64
    0xF8, 0xFC, 0x24, 0x24, 0xFC, 0xF8, // 65
    0xFC, 0xFC, 0xA4, 0xA4, 0xFC, 0x58, // 66
    0x78, 0xFC, 0x84, 0x84, 0xCC, 0x48, // 67
    0xFC, 0xFC, 0x84, 0x84, 0xFC, 0x78, // 68
    0xFC, 0xFC, 0xA4, 0xA4, 0xA4, 0x84, // 69
    0xFC, 0xFC, 0x24, 0x24, 0x24, 0x04, // 70
    0x78, 0xFC, 0x84, 0xA4, 0xEC, 0x68, // 71
    0xFC, 0xFC, 0x20, 0x20, 0xFC, 0xFC, // 72
    0x00, 0x84, 0xFC, 0xFC, 0x84, 0x00, // 73
    0x40, 0xC0, 0x80, 0x84, 0xFC, 0x7C, // 74
    0xFC, 0xFC, 0x20, 0x70, 0xD8, 0x8C, // 75
    0xFC, 0xFC, 0x80, 0x80, 0x80, 0x80, // 76
    0xFC, 0xFC, 0x18, 0x60, 0x60, 0x18, 0xFC, 0xFC, // 77
    0xFC, 0xFC, 0x08, 0x10, 0xFC, 0xFC, // 78
    0x78, 0xFC, 0x84, 0x84, 0xFC, 0x78, // 79
    0xFC, 0xFC, 0x24, 0x24, 0x3C, 0x18, // 80
    0x78, 0xFC, 0x84, 0xA4, 0x5C, 0xB8, // 81
    0xFC, 0xFC, 0x24, 0x24, 0xFC, 0xD8, // 82
    0x98, 0xBC, 0xA4, 0xA4, 0xE4, 0x44, // 83
    0x04, 0x04, 0xFC, 0xFC, 0x04, 0x04, // 84
    0x7C, 0xFC, 0x80, 0x80, 0xFC, 0x7C, // 85
    0x3C, 0x7C, 0xC0, 0x80, 0xC0, 0x7C, 0x3C, // 86
    0x3C, 0x7C, 0x80, 0x60, 0x60, 0x80, 0x7C, 0x3C, // 87
    0x8C, 0x8C, 0x50, 0x20, 0x50, 0x8C, 0x8C, // 88
    0x0C, 0x1C, 0xE0, 0xE0, 0x1C, 0x0C, // 89
    0xC4, 0xE4, 0xB4, 0xB4, 0x9C, 0x8C, // 90
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 91
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 92
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 93
    0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x00, 0x04, 0x0C, 0x08, 0x00, // 96
    0x40, 0xE8, 0xA8, 0xA8, 0xF8, 0xF0, // 97
    0xFC, 0xFC, 0x48, 0x88, 0xF8, 0x70, // 98
    0x70, 0xF8, 0x88, 0x88, 0xD8, 0x50, // 99
    0x70, 0xF8, 0x88, 0x48, 0xFC, 0xFC, // 100
    0x70, 0xF8, 0xA8, 0xA8, 0xB8, 0x30, // 101
    0x10, 0xF8, 0xFC, 0x14, 0x14, // 102
    0x10, 0xB8, 0xA8, 0xA8, 0xF8, 0x78, // 103
    0xFC, 0xFC, 0x10, 0x08, 0xF8, 0xF0, // 104
    0x90, 0xF4, 0xF4, 0x80, // 105
    0x40, 0xC0, 0x80, 0x80, 0xF4, 0x74, // 106
    0xFC, 0xFC, 0x20, 0x70, 0xD8, 0x88, // 107
    0x84, 0xFC, 0xFC, 0x80, // 108
    0xF8, 0xF8, 0x08, 0xF8, 0xF8, 0x08, 0xF8, 0xF0, // 109
    0xF8, 0xF8, 0x08, 0xF8, 0xF0, // 110
    0x70, 0xF8, 0x88, 0x88, 0xF8, 0x70, // 111
    0xF8, 0xF8, 0x28, 0x28, 0x38, 0x10, // 112
    0x10, 0x38, 0x28, 0x28, 0xF8, 0xF8, // 113
    0xF8, 0xF8, 0x08, 0x18, 0x10, // 114
    0x90, 0xB8, 0xA8, 0xA8, 0xE8, 0x48, // 115
    0x08, 0x7C, 0xFC, 0x88, 0x88, // 116
    0x78, 0xF8, 0x80, 0x40, 0xF8, 0xF8, // 117
    0x38, 0x78, 0xC0, 0xC0, 0x78, 0x38, // 118
    0x38, 0x78, 0x80, 0x60, 0x60, 0x80, 0x78, 0x38, // 119
    0x88, 0xD8, 0x70, 0x70, 0xD8, 0x88, // 120
    0x18, 0xB8, 0xA0, 0xA0, 0xF8, 0x78, // 121
    0xC8, 0xE8, 0xA8, 0xA8, 0xB8, 0x98, // 122
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 123
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 124
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 127
    
};

#endif
