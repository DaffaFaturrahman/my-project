#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#elif defined (ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif

#ifndef TimesNewRoman16_bold_H
#define TimesNewRoman16_bold_H

#define TimesNewRoman16_bold_WIDTH 10
#define TimesNewRoman16_bold_HEIGHT 16

static const uint8_t TimesNewRoman16_bold[] PROGMEM = {
    0x2C, 0x06, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x02, 0x02, 0x06, 0x08, 0x07, 0x0E, 0x0C, 0x02, 0x04, 0x04, 
    0x05, 0x09, 0x02, 0x04, 0x02, 0x04, 0x07, 0x06, 0x07, 0x07, 
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x02, 0x02, 0x08, 0x08, 
    0x08, 0x06, 0x0E, 0x0B, 0x0A, 0x09, 0x0B, 0x09, 0x09, 0x0A, 
    0x0C, 0x06, 0x08, 0x0C, 0x09, 0x10, 0x0C, 0x0A, 0x09, 0x0A, 
    0x0C, 0x07, 0x08, 0x0B, 0x0B, 0x0F, 0x0B, 0x0A, 0x09, 0x03, 
    0x04, 0x03, 0x07, 0x08, 0x02, 0x07, 0x07, 0x05, 0x07, 0x06, 
    0x05, 0x07, 0x08, 0x04, 0x03, 0x09, 0x04, 0x0C, 0x08, 0x06, 
    0x07, 0x07, 0x06, 0x05, 0x05, 0x08, 0x08, 0x0A, 0x08, 0x08, 
    0x06, 0x05, 0x01, 0x05, 0x07, 0x08, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, // 0x20 <space>
    0x3E, 0xFE, 0x0C, 0x0D, // 33
    0x1E, 0x1E, 0x00, 0x00, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x20, 0x20, 0xF0, 0x2E, 0x20, 0xF0, 0x2E, 0x20, 0x01, 0x0F, 0x01, 0x01, 0x0F, 0x01, 0x01, 0x01, // 35
    0x1C, 0x3E, 0x62, 0xFF, 0xC2, 0x86, 0x0C, 0x06, 0x0C, 0x08, 0x1F, 0x09, 0x0F, 0x07, // 36
    0x3C, 0x7E, 0x42, 0x7E, 0x3C, 0x00, 0xC0, 0x20, 0x18, 0x84, 0xC2, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x0F, 0x07, // 37
    0x00, 0x80, 0x40, 0x3C, 0xFE, 0xE2, 0x22, 0x1E, 0xAC, 0x60, 0x20, 0x00, 0x07, 0x0F, 0x0C, 0x08, 0x08, 0x0B, 0x07, 0x06, 0x0D, 0x0C, 0x04, 0x02, // 38
    0x1E, 0x1E, 0x00, 0x00, // 39
    0xE0, 0xF8, 0x0C, 0x02, 0x07, 0x1F, 0x30, 0x40, // 40
    0x02, 0x0C, 0xF8, 0xE0, 0x40, 0x30, 0x1F, 0x07, // 41
    0x28, 0x38, 0x1E, 0x38, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x40, 0x40, 0x40, 0x40, 0xFC, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x4C, 0x3C, // 44
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, // 45
    0x00, 0x00, 0x0C, 0x0C, // 46
    0x00, 0xC0, 0x38, 0x06, 0x0C, 0x03, 0x00, 0x00, // 47
    0xF8, 0xFC, 0x06, 0x02, 0x06, 0xFC, 0xF8, 0x03, 0x07, 0x0C, 0x08, 0x0C, 0x07, 0x03, // 48
    0x02, 0x02, 0xFE, 0xFE, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, // 49
    0x08, 0x0C, 0x06, 0x86, 0xFE, 0x3C, 0x00, 0x08, 0x0C, 0x0E, 0x0D, 0x0C, 0x0C, 0x02, // 50
    0x08, 0x04, 0x46, 0x66, 0xFE, 0xDC, 0x80, 0x0C, 0x0C, 0x08, 0x08, 0x08, 0x07, 0x03, // 51
    0x80, 0x40, 0x20, 0x18, 0xFC, 0xFE, 0x00, 0x03, 0x03, 0x03, 0x03, 0x0F, 0x0F, 0x03, // 52
    0x20, 0x3C, 0x36, 0x36, 0x66, 0xE6, 0xC2, 0x0C, 0x0C, 0x0C, 0x08, 0x08, 0x04, 0x03, // 53
    0xE0, 0xF8, 0x3C, 0x24, 0x66, 0xC2, 0x82, 0x03, 0x07, 0x0C, 0x08, 0x0C, 0x07, 0x03, // 54
    0x0C, 0x06, 0x06, 0x06, 0xE6, 0x1E, 0x02, 0x00, 0x00, 0x08, 0x07, 0x00, 0x00, 0x00, // 55
    0x1C, 0xBE, 0x72, 0x62, 0xE2, 0xFE, 0x9C, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, // 56
    0x38, 0x7C, 0xC6, 0x82, 0x86, 0xFC, 0xF8, 0x08, 0x08, 0x0C, 0x04, 0x07, 0x03, 0x00, // 57
    0x60, 0x60, 0x0C, 0x0C, // 58
    0x60, 0x60, 0x4C, 0x3C, // 59
    0x80, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x00, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x04, // 60
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // 61
    0x10, 0x20, 0x20, 0x20, 0x40, 0x40, 0x40, 0x80, 0x04, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x00, // 62
    0x1C, 0x1E, 0x02, 0xC2, 0x7E, 0x3C, 0x00, 0x00, 0x0C, 0x0D, 0x00, 0x00, // 63
    0xE0, 0x10, 0x08, 0x84, 0xC2, 0x62, 0x22, 0x22, 0xC2, 0xE2, 0x04, 0x08, 0xF0, 0x00, 0x0F, 0x10, 0x20, 0x47, 0x8F, 0x88, 0x84, 0x86, 0x8F, 0x88, 0x44, 0x22, 0x11, 0x08, // 64
    0x00, 0x00, 0x80, 0x70, 0x0C, 0x1E, 0x78, 0xE0, 0x80, 0x00, 0x00, 0x08, 0x0C, 0x0B, 0x09, 0x01, 0x01, 0x01, 0x0B, 0x0F, 0x0E, 0x08, // 65
    0x02, 0x02, 0xFE, 0xFE, 0x42, 0x42, 0x42, 0xE2, 0xBE, 0x1C, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0F, 0x07, // 66
    0xF0, 0xFC, 0x0C, 0x02, 0x02, 0x02, 0x04, 0x0C, 0x1E, 0x01, 0x07, 0x06, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, // 67
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x02, 0x06, 0x0C, 0xF8, 0xF0, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x0C, 0x06, 0x03, 0x01, // 68
    0x02, 0x02, 0xFE, 0xFE, 0x42, 0x42, 0xF2, 0x02, 0x0E, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x09, 0x08, 0x0E, // 69
    0x02, 0x02, 0xFE, 0xFE, 0x42, 0x42, 0xF2, 0x02, 0x0E, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x01, 0x00, 0x00, // 70
    0xF0, 0xFC, 0x0C, 0x02, 0x02, 0x02, 0x84, 0x8C, 0x9E, 0x80, 0x01, 0x07, 0x06, 0x08, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00, // 71
    0x02, 0x02, 0xFE, 0xFE, 0x42, 0x40, 0x40, 0x42, 0xFE, 0xFE, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x08, // 72
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, // 73
    0x00, 0x00, 0x00, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x0F, 0x07, 0x00, // 74
    0x02, 0x02, 0xFE, 0xFE, 0x42, 0xE2, 0x90, 0x10, 0x0A, 0x06, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x01, 0x0B, 0x0E, 0x0C, 0x08, 0x08, // 75
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x0E, // 76
    0x02, 0x02, 0xFE, 0x06, 0x3E, 0xF8, 0xC0, 0x00, 0x00, 0xC0, 0x38, 0x06, 0xFE, 0xFE, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x01, 0x07, 0x0E, 0x03, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, // 77
    0x02, 0x02, 0xFE, 0x06, 0x0E, 0x38, 0x70, 0xC2, 0x82, 0xFE, 0x02, 0x02, 0x08, 0x08, 0x0F, 0x08, 0x08, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x00, 0x00, // 78
    0xF0, 0xFC, 0x0C, 0x02, 0x02, 0x02, 0x02, 0x0C, 0xFC, 0xF0, 0x01, 0x07, 0x06, 0x08, 0x08, 0x08, 0x08, 0x06, 0x07, 0x01, // 79
    0x02, 0x02, 0xFE, 0xFE, 0x42, 0x42, 0x42, 0x7E, 0x3C, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x00, 0x00, 0x00, // 80
    0xF0, 0xFC, 0x0C, 0x02, 0x02, 0x02, 0x02, 0x0C, 0xFC, 0xF0, 0x01, 0x07, 0x06, 0x08, 0x18, 0x38, 0x68, 0x46, 0x47, 0x01, // 81
    0x02, 0x02, 0xFE, 0xFE, 0x42, 0x42, 0xC2, 0xC2, 0x7E, 0x3C, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x00, 0x03, 0x0F, 0x0C, 0x08, 0x08, // 82
    0x1C, 0x3E, 0x72, 0xE2, 0xC2, 0x84, 0x1E, 0x0F, 0x04, 0x08, 0x08, 0x09, 0x0F, 0x07, // 83
    0x0E, 0x02, 0x02, 0xFE, 0xFE, 0x02, 0x02, 0x0E, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x00, // 84
    0x02, 0x02, 0xFE, 0xFE, 0x02, 0x00, 0x00, 0x02, 0xFE, 0x02, 0x02, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, 0x00, // 85
    0x02, 0x02, 0x0E, 0x7E, 0xF2, 0x80, 0x00, 0xC0, 0x32, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x0E, 0x01, 0x00, 0x00, 0x00, // 86
    0x02, 0x0E, 0x7E, 0xF2, 0x80, 0x00, 0xE2, 0x1E, 0x7E, 0xF2, 0x80, 0x00, 0xE2, 0x1E, 0x02, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x0E, 0x01, 0x00, 0x00, // 87
    0x02, 0x02, 0x06, 0x1E, 0xFA, 0xE0, 0xA0, 0x1A, 0x06, 0x02, 0x02, 0x08, 0x0C, 0x0C, 0x0B, 0x00, 0x01, 0x0B, 0x0F, 0x0C, 0x08, 0x08, // 88
    0x02, 0x06, 0x1E, 0x7A, 0xE2, 0x80, 0x60, 0x1A, 0x06, 0x02, 0x00, 0x00, 0x08, 0x08, 0x0F, 0x0F, 0x08, 0x08, 0x00, 0x00, // 89
    0x00, 0x1E, 0x06, 0xC2, 0xE2, 0x7A, 0x1E, 0x06, 0x02, 0x08, 0x0C, 0x0F, 0x0B, 0x08, 0x08, 0x08, 0x0C, 0x0F, // 90
    0xFE, 0xFE, 0x02, 0x7F, 0x7F, 0x40, // 91
    0x06, 0x78, 0x80, 0x00, 0x00, 0x00, 0x03, 0x0C, // 92
    0x02, 0xFE, 0xFE, 0x40, 0x7F, 0x7F, // 93
    0x40, 0x30, 0x0C, 0x02, 0x0C, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x02, 0x04, 0x00, 0x00, // 96
    0x40, 0x60, 0x20, 0x20, 0xE0, 0xC0, 0x00, 0x06, 0x0F, 0x09, 0x09, 0x0F, 0x0F, 0x08, // 97
    0x02, 0xFE, 0xFE, 0x20, 0x20, 0xE0, 0xC0, 0x00, 0x0F, 0x07, 0x08, 0x08, 0x0F, 0x07, // 98
    0xC0, 0xE0, 0x20, 0x60, 0x60, 0x07, 0x0F, 0x08, 0x08, 0x04, // 99
    0xC0, 0xE0, 0x20, 0x22, 0xFE, 0xFE, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, // 100
    0xC0, 0xE0, 0x20, 0x20, 0xE0, 0xC0, 0x07, 0x0F, 0x09, 0x09, 0x09, 0x05, // 101
    0x20, 0xFC, 0xFE, 0x22, 0x06, 0x08, 0x0F, 0x0F, 0x08, 0x00, // 102
    0xC0, 0xE0, 0x20, 0x20, 0xE0, 0xE0, 0x20, 0x3D, 0x5B, 0x5A, 0x5A, 0x5B, 0x59, 0x30, // 103
    0x02, 0xFE, 0xFE, 0x40, 0x20, 0xE0, 0xC0, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x0F, 0x0F, 0x08, // 104
    0x20, 0xE6, 0xE6, 0x00, 0x08, 0x0F, 0x0F, 0x08, // 105
    0x20, 0xE6, 0xE6, 0x40, 0x7F, 0x3F, // 106
    0x02, 0xFE, 0xFE, 0x00, 0x80, 0x60, 0x20, 0x20, 0x00, 0x08, 0x0F, 0x0F, 0x09, 0x03, 0x0E, 0x0C, 0x08, 0x08, // 107
    0x02, 0xFE, 0xFE, 0x00, 0x08, 0x0F, 0x0F, 0x08, // 108
    0x20, 0xE0, 0xE0, 0x40, 0x20, 0xE0, 0xC0, 0x40, 0x20, 0xE0, 0xC0, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x0F, 0x0F, 0x08, 0x00, 0x0F, 0x0F, 0x08, // 109
    0x20, 0xE0, 0xE0, 0x40, 0x20, 0xE0, 0xC0, 0x00, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x0F, 0x0F, 0x08, // 110
    0xC0, 0xE0, 0x20, 0x20, 0xE0, 0xC0, 0x07, 0x0F, 0x08, 0x08, 0x0F, 0x07, // 111
    0x20, 0xE0, 0xE0, 0x20, 0x20, 0xE0, 0xC0, 0x40, 0x7F, 0x7F, 0x48, 0x08, 0x0F, 0x07, // 112
    0xC0, 0xE0, 0x20, 0x20, 0xC0, 0xE0, 0x00, 0x07, 0x0F, 0x08, 0x48, 0x7F, 0x7F, 0x40, // 113
    0x20, 0xE0, 0xE0, 0x40, 0x20, 0x60, 0x08, 0x0F, 0x0F, 0x08, 0x00, 0x00, // 114
    0xC0, 0xE0, 0xA0, 0x20, 0x60, 0x0C, 0x09, 0x0B, 0x0F, 0x06, // 115
    0x20, 0xF0, 0xFC, 0x20, 0x20, 0x00, 0x07, 0x0F, 0x08, 0x04, // 116
    0x20, 0xE0, 0xE0, 0x00, 0x20, 0xE0, 0xE0, 0x00, 0x00, 0x07, 0x0F, 0x08, 0x08, 0x0F, 0x0F, 0x08, // 117
    0x20, 0x60, 0xE0, 0xA0, 0x00, 0xA0, 0x60, 0x20, 0x00, 0x00, 0x03, 0x0F, 0x0C, 0x03, 0x00, 0x00, // 118
    0x60, 0xE0, 0xA0, 0x00, 0xA0, 0xE0, 0xA0, 0x00, 0xA0, 0x60, 0x00, 0x01, 0x0F, 0x0E, 0x01, 0x01, 0x0F, 0x0E, 0x01, 0x00, // 119
    0x20, 0x20, 0xE0, 0xE0, 0x80, 0x60, 0x20, 0x20, 0x08, 0x08, 0x0C, 0x03, 0x0F, 0x0E, 0x08, 0x08, // 120
    0x20, 0xE0, 0xE0, 0xA0, 0x00, 0xA0, 0x60, 0x20, 0x60, 0x60, 0x43, 0x3F, 0x0E, 0x01, 0x00, 0x00, // 121
    0x60, 0x20, 0xA0, 0xE0, 0xE0, 0x20, 0x08, 0x0E, 0x0F, 0x0B, 0x08, 0x0C, // 122
    0x80, 0x7C, 0x3E, 0x02, 0x02, 0x00, 0x3F, 0x7E, 0x40, 0x40, // 123
    0xFE, 0x7F, // 124
    0x02, 0x02, 0x3E, 0x7C, 0x80, 0x40, 0x40, 0x7E, 0x3F, 0x00, // 125
    0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0F // 127
    
};

#endif
