#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#elif defined (ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#ifndef _TimesNewRoman16_H
#define _TimesNewRoman16_H

#define TimesNewRoman16_WIDTH 10
#define TimesNewRoman16_HEIGHT 16

static const uint8_t TimesNewRoman16[] PROGMEM = {
    0x29, 0x26, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x02, 0x01, 0x03, 0x08, 0x06, 0x0C, 0x0B, 0x01, 0x04, 0x04, 
    0x07, 0x09, 0x02, 0x04, 0x01, 0x04, 0x06, 0x04, 0x06, 0x06, 
    0x07, 0x06, 0x06, 0x07, 0x06, 0x06, 0x01, 0x02, 0x07, 0x09, 
    0x07, 0x05, 0x0E, 0x0B, 0x09, 0x09, 0x0A, 0x09, 0x08, 0x0A, 
    0x0B, 0x05, 0x06, 0x0B, 0x09, 0x0E, 0x0C, 0x0A, 0x08, 0x0A, 
    0x0A, 0x07, 0x09, 0x0B, 0x0B, 0x0F, 0x0B, 0x0A, 0x09, 0x03, 
    0x04, 0x03, 0x08, 0x08, 0x02, 0x06, 0x07, 0x05, 0x07, 0x05, 
    0x04, 0x07, 0x07, 0x03, 0x03, 0x08, 0x03, 0x0B, 0x07, 0x06, 
    0x07, 0x07, 0x05, 0x04, 0x04, 0x07, 0x07, 0x0B, 0x07, 0x07, 
    0x06, 0x04, 0x01, 0x04, 0x09, 0x08, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, // 0x20 <space>
    0xFE, 0x0B, // 33
    0x1E, 0x00, 0x1E, 0x00, 0x00, 0x00, // 34
    0x20, 0x20, 0xF0, 0x2E, 0x20, 0xF0, 0x2E, 0x20, 0x01, 0x0F, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x01, // 35
    0x1C, 0x22, 0xFF, 0x42, 0x82, 0x0C, 0x06, 0x08, 0x1F, 0x08, 0x08, 0x07, // 36
    0x3C, 0x42, 0x42, 0x3C, 0x00, 0xC0, 0x20, 0x10, 0x8C, 0x42, 0x40, 0x80, 0x00, 0x00, 0x0C, 0x02, 0x01, 0x00, 0x00, 0x00, 0x07, 0x08, 0x08, 0x07, // 37
    0x00, 0x80, 0x5C, 0x62, 0xE2, 0x12, 0x1C, 0xA0, 0x60, 0x20, 0x00, 0x07, 0x0C, 0x08, 0x08, 0x08, 0x07, 0x06, 0x09, 0x08, 0x08, 0x04, // 38
    0x1E, 0x00, // 39
    0xE0, 0x18, 0x04, 0x02, 0x07, 0x18, 0x20, 0x40, // 40
    0x02, 0x04, 0x18, 0xE0, 0x40, 0x20, 0x18, 0x07, // 41
    0x24, 0x24, 0x18, 0x7E, 0x18, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x40, 0x40, 0x40, 0x40, 0xFC, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x28, 0x18, // 44
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, // 45
    0x00, 0x08, // 46
    0x00, 0xC0, 0x38, 0x06, 0x0C, 0x03, 0x00, 0x00, // 47
    0xF8, 0x04, 0x02, 0x02, 0x04, 0xF8, 0x03, 0x04, 0x08, 0x08, 0x04, 0x03, // 48
    0x04, 0x04, 0xFE, 0x00, 0x00, 0x08, 0x0F, 0x08, // 49
    0x0C, 0x02, 0x02, 0x82, 0x44, 0x38, 0x0C, 0x0A, 0x09, 0x08, 0x08, 0x0C, // 50
    0x04, 0x02, 0x42, 0x62, 0x52, 0x8C, 0x08, 0x08, 0x08, 0x08, 0x04, 0x03, // 51
    0x80, 0x40, 0x20, 0x18, 0x04, 0xFE, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0F, 0x01, // 52
    0x10, 0x1C, 0x12, 0x12, 0x22, 0xC2, 0x08, 0x08, 0x08, 0x08, 0x04, 0x03, // 53
    0xE0, 0x58, 0x24, 0x22, 0x62, 0x82, 0x03, 0x04, 0x08, 0x08, 0x04, 0x03, // 54
    0x04, 0x02, 0x02, 0x02, 0x82, 0x72, 0x0E, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x00, // 55
    0x1C, 0xA2, 0x42, 0x42, 0xA2, 0x1C, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, // 56
    0x38, 0x44, 0x82, 0x82, 0x44, 0xF8, 0x08, 0x08, 0x04, 0x04, 0x03, 0x00, // 57
    0x20, 0x08, // 58
    0x20, 0x00, 0x28, 0x18, // 59
    0x40, 0xA0, 0xA0, 0x10, 0x10, 0x10, 0x08, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, // 60
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // 61
    0x08, 0x10, 0x10, 0x10, 0xA0, 0xA0, 0x40, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, // 62
    0x0C, 0x02, 0x82, 0x62, 0x1C, 0x00, 0x00, 0x0B, 0x00, 0x00, // 63
    0xC0, 0x30, 0x08, 0x04, 0xC4, 0x22, 0x12, 0x12, 0xE2, 0x32, 0x04, 0x08, 0xF0, 0x00, 0x0F, 0x10, 0x20, 0x4F, 0x88, 0x88, 0x84, 0x8F, 0x89, 0x88, 0x44, 0x26, 0x11, 0x08, // 64
    0x00, 0x00, 0x00, 0xC0, 0x38, 0x06, 0x38, 0xC0, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0E, 0x09, 0x01, 0x01, 0x01, 0x09, 0x0E, 0x08, 0x08, // 65
    0x02, 0x02, 0xFE, 0x42, 0x42, 0x42, 0x64, 0x98, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x04, 0x03, // 66
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x1E, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, // 67
    0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, 0x01, // 68
    0x02, 0x02, 0xFE, 0x42, 0x42, 0x42, 0xE2, 0x06, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x02, // 69
    0x02, 0x02, 0xFE, 0x42, 0x42, 0x42, 0xE2, 0x06, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x00, 0x00, // 70
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x42, 0x44, 0xCE, 0x40, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, // 71
    0x02, 0x02, 0xFE, 0x42, 0x42, 0x40, 0x42, 0x42, 0xFE, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, // 72
    0x02, 0x02, 0xFE, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x08, 0x08, // 73
    0x00, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x0C, 0x08, 0x08, 0x07, 0x00, 0x00, // 74
    0x02, 0x02, 0xFE, 0x42, 0x42, 0xA0, 0x12, 0x0A, 0x06, 0x02, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x01, 0x0A, 0x0C, 0x08, 0x08, // 75
    0x02, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x02, // 76
    0x02, 0x02, 0xFE, 0x0C, 0x30, 0xC0, 0x00, 0x00, 0x80, 0x70, 0x0C, 0xFE, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x01, 0x02, 0x0E, 0x01, 0x08, 0x08, 0x0F, 0x08, 0x08, // 77
    0x02, 0x02, 0xFE, 0x08, 0x10, 0x20, 0xC0, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x00, 0x01, 0x02, 0x0F, 0x00, 0x00, // 78
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, 0x01, // 79
    0x02, 0x02, 0xFE, 0x82, 0x82, 0x82, 0x44, 0x38, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x00, 0x00, // 80
    0xF0, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x01, 0x02, 0x04, 0x08, 0x08, 0x18, 0x28, 0x24, 0x42, 0x41, // 81
    0x02, 0x02, 0xFE, 0x42, 0x42, 0xC2, 0x24, 0x18, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x03, 0x04, 0x08, 0x08, // 82
    0x18, 0x24, 0x22, 0x42, 0x42, 0x84, 0x0E, 0x0E, 0x04, 0x08, 0x08, 0x08, 0x04, 0x03, // 83
    0x0E, 0x02, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x0E, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x00, // 84
    0x02, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 0x00, // 85
    0x02, 0x02, 0x1E, 0xE2, 0x00, 0x00, 0x00, 0xE2, 0x1E, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0x07, 0x00, 0x00, 0x00, 0x00, // 86
    0x02, 0x06, 0x0E, 0x72, 0x80, 0x02, 0x82, 0x5E, 0xE2, 0x00, 0x00, 0xE2, 0x1E, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0C, 0x03, 0x00, 0x00, 0x03, 0x0C, 0x03, 0x00, 0x00, 0x00, // 87
    0x02, 0x02, 0x06, 0x0A, 0xB2, 0x40, 0xB0, 0x0A, 0x06, 0x02, 0x02, 0x08, 0x08, 0x0C, 0x0A, 0x01, 0x00, 0x01, 0x0A, 0x0C, 0x08, 0x08, // 88
    0x02, 0x02, 0x0E, 0x32, 0xC0, 0x20, 0x1A, 0x06, 0x02, 0x02, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x00, 0x00, // 89
    0x00, 0x0E, 0x02, 0x82, 0x62, 0x12, 0x0E, 0x02, 0x00, 0x08, 0x0E, 0x09, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x02, // 90
    0xFE, 0x02, 0x02, 0x7F, 0x40, 0x40, // 91
    0x06, 0x78, 0x80, 0x00, 0x00, 0x00, 0x03, 0x0C, // 92
    0x02, 0x02, 0xFE, 0x40, 0x40, 0x7F, // 93
    0x40, 0x30, 0x0C, 0x02, 0x02, 0x0C, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x02, 0x0C, 0x00, 0x00, // 96
    0x40, 0x20, 0x20, 0xA0, 0xC0, 0x00, 0x06, 0x09, 0x09, 0x04, 0x0F, 0x08, // 97
    0x04, 0xFE, 0x40, 0x20, 0x20, 0x40, 0x80, 0x00, 0x07, 0x08, 0x08, 0x08, 0x04, 0x03, // 98
    0xC0, 0x20, 0x20, 0x20, 0x40, 0x07, 0x08, 0x08, 0x08, 0x04, // 99
    0x80, 0x40, 0x20, 0x20, 0x44, 0xFE, 0x00, 0x03, 0x04, 0x08, 0x08, 0x04, 0x0F, 0x04, // 100
    0xC0, 0xA0, 0xA0, 0xA0, 0xC0, 0x07, 0x08, 0x08, 0x08, 0x04, // 101
    0x20, 0xFC, 0x22, 0x22, 0x08, 0x0F, 0x08, 0x08, // 102
    0x00, 0xC0, 0x20, 0x20, 0x20, 0xE0, 0x20, 0x30, 0x4D, 0x4A, 0x4A, 0x4A, 0x49, 0x30, // 103
    0x04, 0xFE, 0x40, 0x20, 0x20, 0xC0, 0x00, 0x08, 0x0F, 0x08, 0x00, 0x08, 0x0F, 0x08, // 104
    0x40, 0xE2, 0x00, 0x08, 0x0F, 0x08, // 105
    0x00, 0x40, 0xE2, 0x40, 0x40, 0x3F, // 106
    0x04, 0xFE, 0x00, 0x80, 0x60, 0x20, 0x20, 0x00, 0x08, 0x0F, 0x09, 0x01, 0x02, 0x0C, 0x08, 0x08, // 107
    0x04, 0xFE, 0x00, 0x08, 0x0F, 0x08, // 108
    0x40, 0xE0, 0x40, 0x20, 0x20, 0xC0, 0x40, 0x20, 0x20, 0xC0, 0x00, 0x08, 0x0F, 0x08, 0x00, 0x08, 0x0F, 0x08, 0x00, 0x08, 0x0F, 0x08, // 109
    0x40, 0xE0, 0x40, 0x20, 0x20, 0xC0, 0x00, 0x08, 0x0F, 0x08, 0x00, 0x08, 0x0F, 0x08, // 110
    0x80, 0x40, 0x20, 0x20, 0x40, 0x80, 0x03, 0x04, 0x08, 0x08, 0x04, 0x03, // 111
    0x40, 0xE0, 0x40, 0x20, 0x20, 0x40, 0x80, 0x40, 0x7F, 0x44, 0x08, 0x08, 0x04, 0x03, // 112
    0x80, 0x40, 0x20, 0x20, 0x40, 0xE0, 0x00, 0x07, 0x0C, 0x08, 0x08, 0x44, 0x7F, 0x40, // 113
    0x40, 0xE0, 0x40, 0x20, 0x20, 0x08, 0x0F, 0x08, 0x00, 0x00, // 114
    0xC0, 0x20, 0x20, 0x60, 0x0C, 0x09, 0x09, 0x06, // 115
    0x20, 0xF8, 0x20, 0x20, 0x00, 0x0F, 0x08, 0x04, // 116
    0x20, 0xE0, 0x00, 0x00, 0x20, 0xE0, 0x00, 0x00, 0x07, 0x08, 0x08, 0x04, 0x0F, 0x04, // 117
    0x20, 0xE0, 0x20, 0x00, 0x20, 0xE0, 0x20, 0x00, 0x00, 0x07, 0x08, 0x07, 0x00, 0x00, // 118
    0x20, 0xE0, 0x20, 0x00, 0x20, 0xE0, 0x20, 0x00, 0x20, 0xE0, 0x20, 0x00, 0x00, 0x07, 0x0C, 0x03, 0x00, 0x07, 0x0C, 0x03, 0x00, 0x00, // 119
    0x20, 0x60, 0xA0, 0x00, 0xA0, 0x60, 0x20, 0x08, 0x0C, 0x0A, 0x01, 0x0A, 0x0C, 0x08, // 120
    0x20, 0xE0, 0x20, 0x00, 0x20, 0xE0, 0x20, 0x40, 0x40, 0x23, 0x1C, 0x07, 0x00, 0x00, // 121
    0x00, 0x60, 0x20, 0xA0, 0x60, 0x20, 0x08, 0x0C, 0x0B, 0x08, 0x08, 0x0C, // 122
    0x80, 0x78, 0x04, 0x02, 0x00, 0x1F, 0x20, 0x40, // 123
    0xFE, 0xFF, // 124
    0x02, 0x04, 0x78, 0x80, 0x40, 0x20, 0x1F, 0x00, // 125
    0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0F // 127
    
};

#endif
