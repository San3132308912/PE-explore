#include"hookUtil.h"

BYTE code[] = {
    0x55,0x8B,0xEC,0x81,0xEC,0x84,0x03,0x00,0x00,0x53,0x56,0x57,0x8D,
    0xBD,0x7C,0xFC,0xFF,0xFF,0xB9,0xE1,0x00,0x00,0x00,0xB8,0xCC,0xCC,
    0xCC,0xCC,0xF3,0xAB,0xC7,0x45,0xF8,0x00,0x00,0x00,0x00,0xC7,0x45,
    0xEC,0x00,0x00,0x00,0x00,0xC7,0x45,0xE0,0x00,0x00,0x00,0x00,0xC7,
    0x45,0xD4,0x00,0x00,0x00,0x00,0xC7,0x45,0xC8,0x00,0x00,0x00,0x00,
    0x64,0xA1,0x30,0x00,0x00,0x00,0x89,0x45,0xC8,0x8B,0x45,0xC8,0x8B,
    0x48,0x0C,0x89,0x4D,0xD4,0x8B,0x45,0xD4,0x8B,0x48,0x14,0x89,0x4D,
    0xE0,0x8B,0x55,0xE0,0x89,0x55,0xEC,0xC7,0x45,0xBC,0x00,0x00,0x00,
    0x00,0xC7,0x45,0xB0,0x00,0x00,0x00,0x00,0xC6,0x45,0xA7,0x00,0x8B,
    0x45,0xEC,0x83,0xE8,0x08,0x89,0x45,0xF8,0xC7,0x45,0x98,0x00,0x00,
    0x00,0x00,0xC7,0x45,0x8C,0x00,0x00,0x00,0x00,0x8B,0x45,0xF8,0x8B,
    0x48,0x30,0x89,0x4D,0x80,0xC7,0x85,0x74,0xFF,0xFF,0xFF,0x00,0x00,
    0x00,0x00,0xEB,0x18,0x8B,0x85,0x74,0xFF,0xFF,0xFF,0x83,0xC0,0x01,
    0x89,0x85,0x74,0xFF,0xFF,0xFF,0x8B,0x4D,0x80,0x83,0xC1,0x01,0x89,
    0x4D,0x80,0x8B,0x45,0xF8,0x0F,0xB7,0x48,0x2C,0x39,0x8D,0x74,0xFF,
    0xFF,0xFF,0x7D,0x0E,0x8B,0x45,0x80,0x0F,0xBE,0x08,0x03,0x4D,0x98,
    0x89,0x4D,0x98,0xEB,0xCB,0x0F,0xB6,0x45,0xA7,0x85,0xC0,0x75,0x0D,
    0x8B,0x45,0xF8,0x8B,0x48,0x18,0x89,0x4D,0xB0,0xC6,0x45,0xA7,0x01,
    0x81,0x7D,0x98,0x30,0x03,0x00,0x00,0x75,0x0B,0x8B,0x45,0xF8,0x8B,
    0x48,0x18,0x89,0x4D,0xBC,0xEB,0x14,0x8B,0x45,0xEC,0x8B,0x08,0x89,
    0x4D,0xEC,0x8B,0x45,0xEC,0x3B,0x45,0xE0,0x0F,0x85,0x62,0xFF,0xFF,
    0xFF,0x83,0x7D,0xBC,0x00,0x75,0x05,0xE9,0x53,0x07,0x00,0x00,0x8B,
    0x45,0xBC,0x89,0x85,0x68,0xFF,0xFF,0xFF,0x8B,0x85,0x68,0xFF,0xFF,
    0xFF,0x8B,0x4D,0xBC,0x03,0x48,0x3C,0x89,0x8D,0x5C,0xFF,0xFF,0xFF,
    0xB8,0x08,0x00,0x00,0x00,0x6B,0xC8,0x00,0x8B,0x95,0x5C,0xFF,0xFF,
    0xFF,0x8B,0x45,0xBC,0x03,0x44,0x0A,0x78,0x89,0x85,0x50,0xFF,0xFF,
    0xFF,0x8B,0x85,0x50,0xFF,0xFF,0xFF,0x8B,0x4D,0xBC,0x03,0x48,0x20,
    0x89,0x8D,0x44,0xFF,0xFF,0xFF,0x8B,0x85,0x50,0xFF,0xFF,0xFF,0x8B,
    0x4D,0xBC,0x03,0x48,0x24,0x89,0x8D,0x38,0xFF,0xFF,0xFF,0x8B,0x85,
    0x50,0xFF,0xFF,0xFF,0x8B,0x4D,0xBC,0x03,0x48,0x1C,0x89,0x8D,0x2C,
    0xFF,0xFF,0xFF,0xC7,0x85,0x20,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
    0xC7,0x85,0x14,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xC7,0x85,0x08,
    0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xEB,0x2D,0x8B,0x85,0x08,0xFF,
    0xFF,0xFF,0x83,0xC0,0x01,0x89,0x85,0x08,0xFF,0xFF,0xFF,0x8B,0x8D,
    0x44,0xFF,0xFF,0xFF,0x83,0xC1,0x04,0x89,0x8D,0x44,0xFF,0xFF,0xFF,
    0x8B,0x95,0x38,0xFF,0xFF,0xFF,0x83,0xC2,0x02,0x89,0x95,0x38,0xFF,
    0xFF,0xFF,0x8B,0x85,0x50,0xFF,0xFF,0xFF,0x8B,0x8D,0x08,0xFF,0xFF,
    0xFF,0x3B,0x48,0x18,0x0F,0x83,0xEF,0x00,0x00,0x00,0x83,0xBD,0x20,
    0xFF,0xFF,0xFF,0x00,0x74,0x0D,0x83,0xBD,0x14,0xFF,0xFF,0xFF,0x00,
    0x0F,0x85,0xD9,0x00,0x00,0x00,0x8B,0x85,0x44,0xFF,0xFF,0xFF,0x8B,
    0x4D,0xBC,0x03,0x08,0x89,0x8D,0xFC,0xFE,0xFF,0xFF,0xC7,0x85,0xF0,
    0xFE,0xFF,0xFF,0x00,0x00,0x00,0x00,0x8B,0x85,0xFC,0xFE,0xFF,0xFF,
    0x0F,0xBE,0x08,0x85,0xC9,0x74,0x26,0x8B,0x85,0xFC,0xFE,0xFF,0xFF,
    0x0F,0xBE,0x08,0x03,0x8D,0xF0,0xFE,0xFF,0xFF,0x89,0x8D,0xF0,0xFE,
    0xFF,0xFF,0x8B,0x85,0xFC,0xFE,0xFF,0xFF,0x83,0xC0,0x01,0x89,0x85,
    0xFC,0xFE,0xFF,0xFF,0xEB,0xCD,0x8B,0x85,0xFC,0xFE,0xFF,0xFF,0x0F,
    0xBE,0x08,0x0B,0x8D,0xF0,0xFE,0xFF,0xFF,0x89,0x8D,0xF0,0xFE,0xFF,
    0xFF,0x8B,0x85,0xFC,0xFE,0xFF,0xFF,0x0F,0xBE,0x48,0xFE,0x0F,0xAF,
    0x8D,0xF0,0xFE,0xFF,0xFF,0x89,0x8D,0xF0,0xFE,0xFF,0xFF,0x81,0xBD,
    0xF0,0xFE,0xFF,0xFF,0xE6,0x2A,0x02,0x00,0x75,0x21,0x8B,0x85,0x50,
    0xFF,0xFF,0xFF,0x8B,0x4D,0xBC,0x03,0x48,0x1C,0x8B,0x95,0x38,0xFF,
    0xFF,0xFF,0x0F,0xB7,0x02,0x8B,0x55,0xBC,0x03,0x14,0x81,0x89,0x95,
    0x20,0xFF,0xFF,0xFF,0x81,0xBD,0xF0,0xFE,0xFF,0xFF,0xCE,0x75,0x02,
    0x00,0x75,0x21,0x8B,0x85,0x50,0xFF,0xFF,0xFF,0x8B,0x4D,0xBC,0x03,
    0x48,0x1C,0x8B,0x95,0x38,0xFF,0xFF,0xFF,0x0F,0xB7,0x02,0x8B,0x55,
    0xBC,0x03,0x14,0x81,0x89,0x95,0x14,0xFF,0xFF,0xFF,0xE9,0xCF,0xFE,
    0xFF,0xFF,0xC6,0x85,0xDC,0xFE,0xFF,0xFF,0x75,0xC6,0x85,0xDD,0xFE,
    0xFF,0xFF,0x73,0xC6,0x85,0xDE,0xFE,0xFF,0xFF,0x65,0xC6,0x85,0xDF,
    0xFE,0xFF,0xFF,0x72,0xC6,0x85,0xE0,0xFE,0xFF,0xFF,0x33,0xC6,0x85,
    0xE1,0xFE,0xFF,0xFF,0x32,0xC6,0x85,0xE2,0xFE,0xFF,0xFF,0x2E,0xC6,
    0x85,0xE3,0xFE,0xFF,0xFF,0x64,0xC6,0x85,0xE4,0xFE,0xFF,0xFF,0x6C,
    0xC6,0x85,0xE5,0xFE,0xFF,0xFF,0x6C,0xC6,0x85,0xE6,0xFE,0xFF,0xFF,
    0x00,0xC6,0x85,0xC8,0xFE,0xFF,0xFF,0x4D,0xC6,0x85,0xC9,0xFE,0xFF,
    0xFF,0x65,0xC6,0x85,0xCA,0xFE,0xFF,0xFF,0x73,0xC6,0x85,0xCB,0xFE,
    0xFF,0xFF,0x73,0xC6,0x85,0xCC,0xFE,0xFF,0xFF,0x61,0xC6,0x85,0xCD,
    0xFE,0xFF,0xFF,0x67,0xC6,0x85,0xCE,0xFE,0xFF,0xFF,0x65,0xC6,0x85,
    0xCF,0xFE,0xFF,0xFF,0x42,0xC6,0x85,0xD0,0xFE,0xFF,0xFF,0x6F,0xC6,
    0x85,0xD1,0xFE,0xFF,0xFF,0x78,0xC6,0x85,0xD2,0xFE,0xFF,0xFF,0x57,
    0xC6,0x85,0xD3,0xFE,0xFF,0xFF,0x00,0x8B,0xF4,0x8D,0x85,0xDC,0xFE,
    0xFF,0xFF,0x50,0xFF,0x95,0x20,0xFF,0xFF,0xFF,0x3B,0xF4,0x90,0x90,
    0x90,0x90,0x90,0x89,0x85,0xBC,0xFE,0xFF,0xFF,0x83,0xBD,0xBC,0xFE,
    0xFF,0xFF,0x00,0x75,0x05,0xE9,0xCB,0x04,0x00,0x00,0x8B,0xF4,0x8D,
    0x85,0xC8,0xFE,0xFF,0xFF,0x50,0x8B,0x8D,0xBC,0xFE,0xFF,0xFF,0x51,
    0xFF,0x95,0x14,0xFF,0xFF,0xFF,0x3B,0xF4,0x90,0x90,0x90,0x90,0x90,
    0x89,0x85,0xB0,0xFE,0xFF,0xFF,0x83,0xBD,0xB0,0xFE,0xFF,0xFF,0x00,
    0x75,0x05,0xE9,0x9A,0x04,0x00,0x00,0xC6,0x85,0x18,0xFE,0xFF,0xFF,
    0x34,0xC6,0x85,0x19,0xFE,0xFF,0xFF,0x54,0xC6,0x85,0x1A,0xFE,0xFF,
    0xFF,0x0A,0xC6,0x85,0x1B,0xFE,0xFF,0xFF,0x66,0xC6,0x85,0x1C,0xFE,
    0xFF,0xFF,0x97,0xC6,0x85,0x1D,0xFE,0xFF,0xFF,0x67,0xC6,0x85,0x1E,
    0xFE,0xFF,0xFF,0x3A,0xC6,0x85,0x1F,0xFE,0xFF,0xFF,0x00,0xC6,0x85,
    0x20,0xFE,0xFF,0xFF,0x32,0xC6,0x85,0x21,0xFE,0xFF,0xFF,0x00,0xC6,
    0x85,0x22,0xFE,0xFF,0xFF,0x30,0xC6,0x85,0x23,0xFE,0xFF,0xFF,0x00,
    0xC6,0x85,0x24,0xFE,0xFF,0xFF,0x31,0xC6,0x85,0x25,0xFE,0xFF,0xFF,
    0x00,0xC6,0x85,0x26,0xFE,0xFF,0xFF,0x37,0xC6,0x85,0x27,0xFE,0xFF,
    0xFF,0x00,0xC6,0x85,0x28,0xFE,0xFF,0xFF,0x33,0xC6,0x85,0x29,0xFE,
    0xFF,0xFF,0x00,0xC6,0x85,0x2A,0xFE,0xFF,0xFF,0x30,0xC6,0x85,0x2B,
    0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x2C,0xFE,0xFF,0xFF,0x31,0xC6,0x85,
    0x2D,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x2E,0xFE,0xFF,0xFF,0x35,0xC6,
    0x85,0x2F,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x30,0xFE,0xFF,0xFF,0x30,
    0xC6,0x85,0x31,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x32,0xFE,0xFF,0xFF,
    0x30,0xC6,0x85,0x33,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x34,0xFE,0xFF,
    0xFF,0x31,0xC6,0x85,0x35,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x36,0xFE,
    0xFF,0xFF,0x31,0xC6,0x85,0x37,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x38,
    0xFE,0xFF,0xFF,0x37,0xC6,0x85,0x39,0xFE,0xFF,0xFF,0x00,0xC6,0x85,
    0x3A,0xFE,0xFF,0xFF,0x38,0xC6,0x85,0x3B,0xFE,0xFF,0xFF,0x00,0xC6,
    0x85,0x3C,0xFE,0xFF,0xFF,0x0A,0xC6,0x85,0x3D,0xFE,0xFF,0xFF,0x00,
    0xC6,0x85,0x3E,0xFE,0xFF,0xFF,0x8B,0xC6,0x85,0x3F,0xFE,0xFF,0xFF,
    0x73,0xC6,0x85,0x40,0xFE,0xFF,0xFF,0xD4,0xC6,0x85,0x41,0xFE,0xFF,
    0xFF,0x7F,0xC6,0x85,0x42,0xFE,0xFF,0xFF,0x3A,0xC6,0x85,0x43,0xFE,
    0xFF,0xFF,0x00,0xC6,0x85,0x44,0xFE,0xFF,0xFF,0x32,0xC6,0x85,0x45,
    0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x46,0xFE,0xFF,0xFF,0x30,0xC6,0x85,
    0x47,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x48,0xFE,0xFF,0xFF,0x31,0xC6,
    0x85,0x49,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x4A,0xFE,0xFF,0xFF,0x37,
    0xC6,0x85,0x4B,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x4C,0xFE,0xFF,0xFF,
    0x33,0xC6,0x85,0x4D,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x4E,0xFE,0xFF,
    0xFF,0x30,0xC6,0x85,0x4F,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x50,0xFE,
    0xFF,0xFF,0x31,0xC6,0x85,0x51,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x52,
    0xFE,0xFF,0xFF,0x35,0xC6,0x85,0x53,0xFE,0xFF,0xFF,0x00,0xC6,0x85,
    0x54,0xFE,0xFF,0xFF,0x30,0xC6,0x85,0x55,0xFE,0xFF,0xFF,0x00,0xC6,
    0x85,0x56,0xFE,0xFF,0xFF,0x30,0xC6,0x85,0x57,0xFE,0xFF,0xFF,0x00,
    0xC6,0x85,0x58,0xFE,0xFF,0xFF,0x31,0xC6,0x85,0x59,0xFE,0xFF,0xFF,
    0x00,0xC6,0x85,0x5A,0xFE,0xFF,0xFF,0x38,0xC6,0x85,0x5B,0xFE,0xFF,
    0xFF,0x00,0xC6,0x85,0x5C,0xFE,0xFF,0xFF,0x36,0xC6,0x85,0x5D,0xFE,
    0xFF,0xFF,0x00,0xC6,0x85,0x5E,0xFE,0xFF,0xFF,0x0A,0xC6,0x85,0x5F,
    0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x60,0xFE,0xFF,0xFF,0x6D,0xC6,0x85,
    0x61,0xFE,0xFF,0xFF,0x5F,0xC6,0x85,0x62,0xFE,0xFF,0xFF,0x91,0xC6,
    0x85,0x63,0xFE,0xFF,0xFF,0x4E,0xC6,0x85,0x64,0xFE,0xFF,0xFF,0x90,
    0xC6,0x85,0x65,0xFE,0xFF,0xFF,0x74,0xC6,0x85,0x66,0xFE,0xFF,0xFF,
    0x3A,0xC6,0x85,0x67,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x68,0xFE,0xFF,
    0xFF,0x32,0xC6,0x85,0x69,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x6A,0xFE,
    0xFF,0xFF,0x30,0xC6,0x85,0x6B,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x6C,
    0xFE,0xFF,0xFF,0x31,0xC6,0x85,0x6D,0xFE,0xFF,0xFF,0x00,0xC6,0x85,
    0x6E,0xFE,0xFF,0xFF,0x37,0xC6,0x85,0x6F,0xFE,0xFF,0xFF,0x00,0xC6,
    0x85,0x70,0xFE,0xFF,0xFF,0x33,0xC6,0x85,0x71,0xFE,0xFF,0xFF,0x00,
    0xC6,0x85,0x72,0xFE,0xFF,0xFF,0x30,0xC6,0x85,0x73,0xFE,0xFF,0xFF,
    0x00,0xC6,0x85,0x74,0xFE,0xFF,0xFF,0x31,0xC6,0x85,0x75,0xFE,0xFF,
    0xFF,0x00,0xC6,0x85,0x76,0xFE,0xFF,0xFF,0x35,0xC6,0x85,0x77,0xFE,
    0xFF,0xFF,0x00,0xC6,0x85,0x78,0xFE,0xFF,0xFF,0x30,0xC6,0x85,0x79,
    0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x7A,0xFE,0xFF,0xFF,0x30,0xC6,0x85,
    0x7B,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x7C,0xFE,0xFF,0xFF,0x32,0xC6,
    0x85,0x7D,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x7E,0xFE,0xFF,0xFF,0x31,
    0xC6,0x85,0x7F,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x80,0xFE,0xFF,0xFF,
    0x30,0xC6,0x85,0x81,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x82,0xFE,0xFF,
    0xFF,0x0A,0xC6,0x85,0x83,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x84,0xFE,
    0xFF,0xFF,0x20,0xC6,0x85,0x85,0xFE,0xFF,0xFF,0x5F,0xC6,0x85,0x86,
    0xFE,0xFF,0xFF,0x68,0xC6,0x85,0x87,0xFE,0xFF,0xFF,0x66,0xC6,0x85,
    0x88,0xFE,0xFF,0xFF,0x3A,0xC6,0x85,0x89,0xFE,0xFF,0xFF,0x00,0xC6,
    0x85,0x8A,0xFE,0xFF,0xFF,0x32,0xC6,0x85,0x8B,0xFE,0xFF,0xFF,0x00,
    0xC6,0x85,0x8C,0xFE,0xFF,0xFF,0x30,0xC6,0x85,0x8D,0xFE,0xFF,0xFF,
    0x00,0xC6,0x85,0x8E,0xFE,0xFF,0xFF,0x31,0xC6,0x85,0x8F,0xFE,0xFF,
    0xFF,0x00,0xC6,0x85,0x90,0xFE,0xFF,0xFF,0x37,0xC6,0x85,0x91,0xFE,
    0xFF,0xFF,0x00,0xC6,0x85,0x92,0xFE,0xFF,0xFF,0x33,0xC6,0x85,0x93,
    0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x94,0xFE,0xFF,0xFF,0x30,0xC6,0x85,
    0x95,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x96,0xFE,0xFF,0xFF,0x31,0xC6,
    0x85,0x97,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x98,0xFE,0xFF,0xFF,0x35,
    0xC6,0x85,0x99,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x9A,0xFE,0xFF,0xFF,
    0x30,0xC6,0x85,0x9B,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x9C,0xFE,0xFF,
    0xFF,0x30,0xC6,0x85,0x9D,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0x9E,0xFE,
    0xFF,0xFF,0x31,0xC6,0x85,0x9F,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0xA0,
    0xFE,0xFF,0xFF,0x38,0xC6,0x85,0xA1,0xFE,0xFF,0xFF,0x00,0xC6,0x85,
    0xA2,0xFE,0xFF,0xFF,0x37,0xC6,0x85,0xA3,0xFE,0xFF,0xFF,0x00,0xC6,
    0x85,0xA4,0xFE,0xFF,0xFF,0x0A,0xC6,0x85,0xA5,0xFE,0xFF,0xFF,0x00,
    0xC6,0x85,0xA6,0xFE,0xFF,0xFF,0x00,0xC6,0x85,0xA7,0xFE,0xFF,0xFF,
    0x00,0xC6,0x85,0x00,0xFE,0xFF,0xFF,0x2C,0xC6,0x85,0x01,0xFE,0xFF,
    0xFF,0x7B,0xC6,0x85,0x02,0xFE,0xFF,0xFF,0x6D,0xC6,0x85,0x03,0xFE,
    0xFF,0xFF,0x51,0xC6,0x85,0x04,0xFE,0xFF,0xFF,0xC4,0xC6,0x85,0x05,
    0xFE,0xFF,0xFF,0x7E,0xC6,0x85,0x06,0xFE,0xFF,0xFF,0x85,0xC6,0x85,
    0x07,0xFE,0xFF,0xFF,0x51,0xC6,0x85,0x08,0xFE,0xFF,0xFF,0x58,0xC6,
    0x85,0x09,0xFE,0xFF,0xFF,0x5B,0xC6,0x85,0x0A,0xFE,0xFF,0xFF,0xE8,
    0xC6,0x85,0x0B,0xFE,0xFF,0xFF,0x6C,0xC6,0x85,0x0C,0xFE,0xFF,0xFF,
    0x65,0xC6,0x85,0x0D,0xFE,0xFF,0xFF,0x51,0xC6,0x85,0x0E,0xFE,0xFF,
    0xFF,0x00,0xC6,0x85,0x0F,0xFE,0xFF,0xFF,0x00,0x8B,0xF4,0x6A,0x00,
    0x8D,0x85,0x00,0xFE,0xFF,0xFF,0x50,0x8D,0x8D,0x18,0xFE,0xFF,0xFF,
    0x51,0x6A,0x00,0xFF,0x95,0xB0,0xFE,0xFF,0xFF,0x3B,0xF4,0x5F,0x5E,
    0x5B,0x81,0xC4,0x84,0x03,0x00,0x00,0x8B,0xEC,0x5D,0xB8,0x70,0x4F,
    0x61,0x77,0xFF,0xE0,0x90,0x90,0x83,0xC3,0x1B,0x89,0x58,0x17,0xFF,
    0x25,0x90,0x52,0x8B,0xCD,0x50,0x8D,0x15,0x98,0x62,0x41,0x00,0x90,
    0x90,0x90,0x90,0x90,0x58,0x5A,0x5F,0x5E,0x5B,0x81,0xC4,0x84,0x03,
    0x00,0x00,0x3B,0xEC,0x90,0x90,0x90,0x90,0x90,0x8B,0xE5,0x5D,0xC3,
    0x0F,0x1F,0x00,0x04,0x00,0x00,0x00,0xA0,0x62,0x41,0x00,0xDC,0xFE,
    0xFF,0xFF,0x0B,0x00,0x00,0x00,0xE4,0x62,0x41,0x00,0xC8,0xFE,0xFF,
    0xFF,0x0C,0x00,0x00,0x00,0xDB,0x62,0x41,0x00,0x18,0xFE,0xFF,0xFF,
    0x90,0x00,0x00,0x00,0xD6,0x62,0x41,0x00,0x00,0xFE,0xFF,0xFF,0x10,
    0x00,0x00,0x00,0xD0,0x62,0x41,0x00,0x74,0x69,0x74,0x6C,0x65,0x00,
    0x64,0x61,0x74,0x61,0x00,0x66,0x75,0x6E,0x63,0x4E,0x61,0x6D,0x65,
    0x00,0x64,0x6C,0x6C,0x4E,0x61,0x6D,0x65,0x00,0xCC,0xCC,0xCC,0xCC
};
BYTE DetourFun[]={
    0x60,                       //pushad
    0xB8,0x44,0x33,0x22,0x11, //mov eax,shellcode
    0xFF,0xD0,                 //call eax
};
BYTE TrampolineFun[]={
    //0x61,                    //popad
    0x90,
    0x90,
    0x90,
    0x90,
    0x90,
    0x90,
    0x90,
    0xE9,0x44,0x33,0x22,0x11, //jmp originalApi
};

HOOK_DATA hookdata;
BOOL getPrivilege(){
    HANDLE token;
    TOKEN_PRIVILEGES TokenPrivileges;
    //打开当前进程token
    if (OpenProcessToken(GetCurrentProcess(), TOKEN_ALL_ACCESS, &token)) {
        LUID destLuid;
        //获取系统权限的特权值
        if (LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &destLuid)) {
            TokenPrivileges.PrivilegeCount = 1;
            TokenPrivileges.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
            TokenPrivileges.Privileges[0].Luid = destLuid;
            if (AdjustTokenPrivileges(token, FALSE, &TokenPrivileges, 0, NULL, NULL)) {
                return true;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
    return false;
}

BOOL enumProcess(QStandardItemModel * theModel){
    HANDLE snapHandele = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,NULL);
    if( INVALID_HANDLE_VALUE == snapHandele)
    {
        qDebug() << "CreateToolhelp32Snapshot error" ;
        return false;
    }
    PROCESSENTRY32 entry = {0};
    entry.dwSize = sizeof(entry);// 长度必须赋值
    BOOL ret = Process32First(snapHandele,&entry);

    int i = 0;

    while (ret) {
        QStandardItem * item;
        theModel->insertRow(i);
        item = new QStandardItem(QString(QString::fromWCharArray(entry.szExeFile)));
        theModel->setItem(i, 0, item);

        item = new QStandardItem();
        item->setData(QVariant((unsigned int)(entry.th32ProcessID)), Qt::EditRole);
        theModel->setItem(i, 1, item);
        item = new QStandardItem();
        item->setData(QVariant((unsigned int)(entry.pcPriClassBase)), Qt::EditRole);
        theModel->setItem(i, 2, item);

        HANDLE handle = OpenProcess(PROCESS_QUERY_INFORMATION|PROCESS_VM_READ,
                                    FALSE,
                                    entry.th32ProcessID);
        if(handle == INVALID_HANDLE_VALUE){
            continue;
        }
        PROCESS_MEMORY_COUNTERS pmc;
        GetProcessMemoryInfo(handle, &pmc, sizeof(pmc));
        CloseHandle(handle);
        item = new QStandardItem();
        item->setData(QVariant((unsigned int)(pmc.WorkingSetSize / 1024)), Qt::EditRole);
        theModel->setItem(i, 4, item);
        i++;
        ret = Process32Next(snapHandele,&entry);
    }

    CloseHandle(snapHandele);
    return true;
}

BOOL hook(DWORD pid, QString proName,QString moduleName, QString targetFunc){
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if(handle == nullptr){
        return false;
    }

    //下面要获得IAT地址
    HMODULE hMods[1024];
    DWORD cbNeeded;
    unsigned int i;
    MODULEINFO RemoteModuleInfo = {0};
    UINT_PTR RemoteModuleBaseVA = 0;
    IMAGE_DOS_HEADER DosHeader = {0};

    if(!EnumProcessModules(handle, hMods, sizeof(hMods), &cbNeeded))
    {
        return false;
    }
    cbNeeded /= sizeof (HMODULE);
    for (i = 0; i < cbNeeded; i++)
    {
        char szModName[MAXPATH];
        if(GetModuleBaseNameA(handle, hMods[i], szModName, sizeof(szModName)))
        {
            if(proName == szModName){
                break;
            }
        }
    }
    HMODULE imageHandle = hMods[i];   //可执行程序image的handle

    if(!GetModuleInformation(handle, imageHandle, &RemoteModuleInfo, sizeof(RemoteModuleInfo)))
    {
        return false;
    }
    RemoteModuleBaseVA	= (UINT_PTR)RemoteModuleInfo.lpBaseOfDll;

    if(!ReadProcessMemory(handle, (LPCVOID)RemoteModuleBaseVA, &DosHeader, sizeof(DosHeader), NULL))
    {
        return false;
    }

    IMAGE_OPTIONAL_HEADER32 OptHeader32 = {0};
    if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + DosHeader.e_lfanew + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER)), &OptHeader32, sizeof(OptHeader32), NULL))
    {
        return false;
    }

    IMAGE_DATA_DIRECTORY ImportDirectory = {0};
    ImportDirectory.VirtualAddress = OptHeader32.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    ImportDirectory.Size = OptHeader32.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].Size;  //这个size把最后的空iid也算进去了

    //IMAGE_IMPORT_DESCRIPTOR iid = {0};
    IMAGE_IMPORT_DESCRIPTOR *piid = (IMAGE_IMPORT_DESCRIPTOR *)malloc(ImportDirectory.Size);
    if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + ImportDirectory.VirtualAddress), piid, ImportDirectory.Size, NULL))
    {
        return false;
    }

    char name[256];
    char funcName[256];
    DWORD OriginalFirstThunkRVA, FirstThunkRVA;
    DWORD itd = 1;
    DWORD functionAddr;

    while(piid -> Name)
    {
        ZeroMemory(name, sizeof(char) * 256);
        if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + piid -> Name), name, sizeof(char) * 256, NULL))
        {
            return false;
        }

        OriginalFirstThunkRVA = piid -> OriginalFirstThunk;
        FirstThunkRVA = piid -> FirstThunk;

        int count = 0;
        if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + OriginalFirstThunkRVA + count * sizeof(IMAGE_THUNK_DATA)), &itd, sizeof(itd), NULL))
        {
            return false;
        }
        while(itd)
        {
            if(IMAGE_ORDINAL_FLAG32 & itd) //最高位为1
            {
                //TODO:
                if(QString::number(itd ^ IMAGE_ORDINAL_FLAG32) == targetFunc){
                    if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + FirstThunkRVA + count * sizeof(IMAGE_THUNK_DATA)), &functionAddr, sizeof(DWORD), NULL)){
                        return false;
                    }

                }
            }
            else //最高位为0
            {
                ZeroMemory(funcName, sizeof(char) * 256);
                if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + itd + sizeof(WORD)), funcName, sizeof(char) * 256, NULL)){
                    return false;
                }
                //TODO:现在找到地址了，接下来怎么做呢？
                if(funcName == targetFunc){
                    if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + FirstThunkRVA + count * sizeof(IMAGE_THUNK_DATA)), &functionAddr, sizeof(DWORD), NULL))
                        return false;

                    LPVOID shellMemory = VirtualAllocEx(handle, NULL,
                                                               sizeof(char) * SHELL_SIZE,
                                                               MEM_COMMIT, PAGE_READWRITE);
                    if (shellMemory == NULL)
                    {
                        return false;
                    }
                    //修改赋给eax的值，改成原函数的地址
                    memcpy(code+2143, &functionAddr, sizeof(DWORD));
                    if (!WriteProcessMemory(handle, shellMemory, code, sizeof(char) * SHELL_SIZE, NULL))
                    {
                        return false;
                    }
                    //添加执行权限
                    MEMORY_BASIC_INFORMATION mbi;
                    if(!VirtualQueryEx(handle, shellMemory, &mbi, sizeof(mbi)))
                    {
                        return false;
                    }
                    DWORD oldProtect;
                    if(!VirtualProtectEx(handle, mbi.BaseAddress, mbi.RegionSize, PAGE_EXECUTE, &oldProtect))
                    {
                        return false;
                    }

                    //读出IDT所在的内存页的属性
                    LPCVOID addrToBeChanged = (LPCVOID)(RemoteModuleBaseVA + piid -> FirstThunk + count * sizeof(DWORD));
                    MEMORY_BASIC_INFORMATION mbi2;
                    if(!VirtualQueryEx(handle, addrToBeChanged, &mbi2, sizeof(mbi2)))
                    {
                        return false;
                    }
                    //加入写权限
                    DWORD oldProtect2;
                    if(!VirtualProtectEx(handle, mbi2.BaseAddress, mbi2.RegionSize, PAGE_READWRITE, &oldProtect2))
                    {
                        return false;
                    }

                    //修改IDT
                    if (WriteProcessMemory(handle, (LPVOID)addrToBeChanged, &shellMemory, sizeof(DWORD), NULL) == NULL)
                    {
                        return false;
                    }
                    return true;
                }

            }
            count++;
            if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + OriginalFirstThunkRVA + count * sizeof(IMAGE_THUNK_DATA)), &itd, sizeof(itd), NULL))
            {
                return false;
            }
        }
        piid++;
    }
}

BOOL enumModuleAndFunc(DWORD pid, QStringListModel * model,
                       QHash<QString, QStringList> *modAndFunc,
                       QString proName){
    QStringList list;
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if(handle == nullptr){
        return false;
    }
    HMODULE hMods[1024];
    DWORD modNum = 0;
    if(!EnumProcessModules(handle, hMods, sizeof(hMods), &modNum)){
        return false;
    }
    modNum /= sizeof(HMODULE);
    HMODULE imageHandle = NULL;
    for(DWORD i = 0; i < modNum; i++){
        char szModName[MAXPATH];
        if(GetModuleBaseNameA(handle, hMods[i], szModName, sizeof(szModName)))
        {
            //list.append(szModName);
            if(proName == szModName){
                imageHandle = hMods[i];
            }
        }
    }
    MODULEINFO RemoteModuleInfo = {0};
    UINT_PTR RemoteModuleBaseVA = 0;
    if(!GetModuleInformation(handle, imageHandle, &RemoteModuleInfo, sizeof(RemoteModuleInfo)))
    {
        return false;
    }

    IMAGE_DOS_HEADER DosHeader = {0};
    RemoteModuleBaseVA = (UINT_PTR)RemoteModuleInfo.lpBaseOfDll;
    //拿到基址了，可以读dos头了
    if(!ReadProcessMemory(handle, (LPCVOID)RemoteModuleBaseVA, &DosHeader, sizeof(DosHeader), NULL))
    {
        return false;
    }
    IMAGE_OPTIONAL_HEADER32 OptHeader32 = {0};
    if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + DosHeader.e_lfanew + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER)), &OptHeader32, sizeof(OptHeader32), NULL))
    {
        return false;
    }
    IMAGE_DATA_DIRECTORY ImportDirectory = {0};
    ImportDirectory.VirtualAddress = OptHeader32.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    ImportDirectory.Size = OptHeader32.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].Size;  //这个size把最后的空iid也算进去了
    //IMAGE_IMPORT_DESCRIPTOR iid = {0};
    IMAGE_IMPORT_DESCRIPTOR *piid = (IMAGE_IMPORT_DESCRIPTOR *)malloc(ImportDirectory.Size);
    if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + ImportDirectory.VirtualAddress), piid, ImportDirectory.Size, NULL))
    {
        return false;
    }
    //对IAT进行遍历
    char name[256];
    char funcName[256];
    DWORD OriginalFirstThunkRVA;
    while(piid->Name)
    {
        QStringList list1;
        ZeroMemory(name, sizeof(char) * 256);
        if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + piid -> Name), name, sizeof(char) * 256, NULL))
        {
            return false;
        }
        list.append(name);
        OriginalFirstThunkRVA = piid->OriginalFirstThunk;
        DWORD itd;
        int count = 0;
        if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + OriginalFirstThunkRVA), &itd, sizeof(itd), NULL))
        {
            return false;
        }
        while(itd){
            if(itd & IMAGE_ORDINAL_FLAG32){
                list1.append(QString::number(itd ^ IMAGE_ORDINAL_FLAG32));
            } else{
                if(!ReadProcessMemory(handle,
                                      (LPCVOID)(RemoteModuleBaseVA + itd + sizeof(WORD)),
                                      funcName, sizeof(char) * 256, NULL)){
                    return false;
                }
                list1.append(funcName);
            }
            count++;
            if(!ReadProcessMemory(handle,
                                  (LPCVOID)(RemoteModuleBaseVA + OriginalFirstThunkRVA +
                                            count * sizeof(IMAGE_THUNK_DATA)), &itd, sizeof(itd), NULL)){
                return false;
            }
        }
        modAndFunc->insert(name, list1);
        piid++;
    }
    model->setStringList(list);
    CloseHandle(handle);
    return true;
}



//inlinehook
BOOL inlinehook(DWORD pid, QString proName,QString moduleName, QString targetFunc)
{
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
        if(handle == nullptr){
            return false;
        }
        hookdata.handle=handle;
        hookdata.szApiName=targetFunc;
        hookdata.szModuleName=moduleName;

        //下面要获得IAT地址
        HMODULE hMods[1024];
        DWORD cbNeeded;
        unsigned int i;
        MODULEINFO RemoteModuleInfo = {0};
        UINT_PTR RemoteModuleBaseVA = 0;
        IMAGE_DOS_HEADER DosHeader = {0};

        if(!EnumProcessModules(handle, hMods, sizeof(hMods), &cbNeeded))
        {
            return false;
        }
        cbNeeded /= sizeof (HMODULE);
        for (i = 0; i < cbNeeded; i++)
        {
            char szModName[MAXPATH];
            if(GetModuleBaseNameA(handle, hMods[i], szModName, sizeof(szModName)))
            {
                if(proName == szModName){
                    break;
                }
            }
        }
        HMODULE imageHandle = hMods[i];   //可执行程序image的handle

        if(!GetModuleInformation(handle, imageHandle, &RemoteModuleInfo, sizeof(RemoteModuleInfo)))
        {
            return false;
        }
        RemoteModuleBaseVA	= (UINT_PTR)RemoteModuleInfo.lpBaseOfDll;

        if(!ReadProcessMemory(handle, (LPCVOID)RemoteModuleBaseVA, &DosHeader, sizeof(DosHeader), NULL))
        {
            return false;
        }

        IMAGE_OPTIONAL_HEADER32 OptHeader32 = {0};
        if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + DosHeader.e_lfanew + sizeof(DWORD) + sizeof(IMAGE_FILE_HEADER)), &OptHeader32, sizeof(OptHeader32), NULL))
        {
            return false;
        }

        IMAGE_DATA_DIRECTORY ImportDirectory = {0};
        ImportDirectory.VirtualAddress = OptHeader32.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
        ImportDirectory.Size = OptHeader32.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].Size;  //这个size把最后的空iid也算进去了

        //IMAGE_IMPORT_DESCRIPTOR iid = {0};
        IMAGE_IMPORT_DESCRIPTOR *piid = (IMAGE_IMPORT_DESCRIPTOR *)malloc(ImportDirectory.Size);
        if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + ImportDirectory.VirtualAddress), piid, ImportDirectory.Size, NULL))
        {
            return false;
        }

        char name[256];
        char funcName[256];
        DWORD OriginalFirstThunkRVA, FirstThunkRVA;
        DWORD itd = 1;
        DWORD functionAddr;

        while(piid -> Name)
        {
            ZeroMemory(name, sizeof(char) * 256);
            if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + piid -> Name), name, sizeof(char) * 256, NULL))
            {
                return false;
            }

            OriginalFirstThunkRVA = piid -> OriginalFirstThunk;
            FirstThunkRVA = piid -> FirstThunk;

            int count = 0;
            if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + OriginalFirstThunkRVA + count * sizeof(IMAGE_THUNK_DATA)), &itd, sizeof(itd), NULL))
            {
                return false;
            }
            while(itd)
            {
                if(IMAGE_ORDINAL_FLAG32 & itd) //最高位为1
                {
                    //TODO:
                    if(QString::number(itd ^ IMAGE_ORDINAL_FLAG32) == targetFunc){
                        if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + FirstThunkRVA + count * sizeof(IMAGE_THUNK_DATA)), &functionAddr, sizeof(DWORD), NULL)){
                            return false;
                        }

                    }
                }
                else //最高位为0
                {
                    ZeroMemory(funcName, sizeof(char) * 256);
                    if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + itd + sizeof(WORD)), funcName, sizeof(char) * 256, NULL)){
                        return false;
                    }
                    //TODO:现在找到地址了，接下来怎么做呢？
                    if(funcName == targetFunc){
                        if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + FirstThunkRVA + count * sizeof(IMAGE_THUNK_DATA)), &functionAddr, sizeof(DWORD), NULL))
                            return false;
                    hookdata.HookPoint=functionAddr;
                    if(!InstallCodeHook(&hookdata))
                    {
                        return false;
                    }
                    return true;
                    }

                }
                count++;
                if(!ReadProcessMemory(handle, (LPCVOID)(RemoteModuleBaseVA + OriginalFirstThunkRVA + count * sizeof(IMAGE_THUNK_DATA)), &itd, sizeof(itd), NULL))
                {
                    return false;
                }
            }
            piid++;
        }

}



void InitHookEntry(PHOOK_DATA pHookData)
{
    if (pHookData == NULL
        || pHookData->pfnDetourFun == NULL
        || pHookData->HookPoint == NULL
        || pHookData->HookCodeLen == 0)
    {
        return;
    }

    switch (pHookData->HookCodeLen)
    {
    case 2://Hot Patch
    {
        pHookData->newEntry[0] = 0xEB; //Jmp -5
        pHookData->newEntry[1] = 0xF9;
        pHookData->HotPatchCode[0] = 0xE9; //Jmp
        *(ULONG*)(pHookData->HotPatchCode + 1) = (ULONG)pHookData->pfnDetourFun - ((ULONG)pHookData->HookPoint - 5) - 5;//0xE9 式jmp的计算
    }
    break;
    case 5:
    {
        pHookData->newEntry[0] = 0xE9; //Jmp
        //计算跳转偏移并写入
        *(ULONG*)(pHookData->newEntry + 1) = (ULONG)pHookData->shellcode - (ULONG)pHookData->HookPoint - 5;//0xE9 式jmp的计算
    }
    break;
    case 6:
    {
        /*
        0040E9D1 >    68 44332211      push 11223344
        0040E9D6      C3               retn
        */
        memcpy(pHookData->newEntry, "\x68\x44\x33\x22\x11\xC3", 6);
        *(ULONG*)(pHookData->newEntry + 1) = (ULONG)pHookData->shellcode;
    }
    break;
    case 7:
        /*
        7C809B12 >  B8 44332211        mov eax,11223344
        7C809B17    FFE0               jmp eax
        */
    {
        memcpy(pHookData->newEntry, "\xB8\x44\x33\x22\x11\xFF\xE0", 7);
        *(ULONG*)(pHookData->newEntry + 1) = (ULONG)pHookData->shellcode;
    }
    break;
    default:
        break;
    }
}

BOOL SkipJmpAddress(PHOOK_DATA pHookData)
{
    ULONG_PTR TrueAddress = pHookData->HookPoint;
    BYTE pFn[8] = {0};

    if(!ReadProcessMemory(pHookData->handle,(LPCVOID)pHookData->HookPoint,pFn,sizeof(BYTE)*8,NULL)){
            return false;
     }

    if (pFn[0]==0xFF && pFn[1]==0x25)
    {
        TrueAddress = pHookData->HookPoint+2;
        return true;
    }

    if (pFn[0] == 0xE9)
    {
        TrueAddress = pHookData->HookPoint + *(ULONG_PTR*)(pFn+1) + 5;
        return true;
    }

    if (pFn[0] == 0xEB)
    {
        TrueAddress = pHookData->HookPoint + pFn[1] + 2;
        return true;
    }
    pHookData->HookPoint = TrueAddress;
    return true;
}

BOOL InstallCodeHook(PHOOK_DATA pHookData){
    PBYTE AddrToWrite=NULL;

    if(!SkipJmpAddress(pHookData))
    {
        return false;
    }
    BOOL hooked = IfHooked(pHookData);
    if(hooked){
        return false;
    }

    if(!GetCodeLength(pHookData)){
        return false;
    }


    //下面开始hook
    //在目标程序中为TrampolineFun申请空间
    LPVOID  TrampolineFunAddr= VirtualAllocEx(pHookData->handle, NULL,sizeof(TrampolineFun),MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (TrampolineFunAddr == NULL)
    {
    return false;
    }
    pHookData->pfnTrampolineFun = (DWORD)TrampolineFunAddr;
    pHookData->JmpBackAddr=pHookData->HookPoint+pHookData->HookCodeLen;
    *(ULONG*)(TrampolineFun+8)=(ULONG)pHookData->JmpBackAddr-(ULONG)(pHookData->pfnTrampolineFun+8)-4;



    //修改shellcode中的回跳地址为TrampolineFun的地址
    *(ULONG*)(code+2143)=(ULONG)(pHookData->pfnTrampolineFun);

    //在目标程序中为shellcode申请空间
    LPVOID shellMemory = VirtualAllocEx(pHookData->handle, NULL,sizeof(char) * SHELL_SIZE,MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (shellMemory == NULL)
    {
        return false;
    }
    pHookData->shellcode = (DWORD)shellMemory;
    if (!WriteProcessMemory(pHookData->handle, shellMemory, code, sizeof(char) * SHELL_SIZE, NULL))
    {
        return false;
    }

    //将DetourFun中的跳转地址修改为shellcode的地址
    *(ULONG*)(DetourFun+2)=pHookData->shellcode;

    //在目标程序中为DetourFun申请空间
    LPVOID DetourFunAddr = VirtualAllocEx(pHookData->handle, NULL,sizeof(DetourFun),MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    if (DetourFunAddr == NULL)
    {
        return false;
    }
    pHookData->pfnDetourFun = (DWORD)DetourFunAddr;
    if (!WriteProcessMemory(pHookData->handle, TrampolineFunAddr, DetourFun, sizeof(DetourFun), NULL))
    {
        return false;
    }

    InitHookEntry(pHookData);
    //读取原函数入口点代码
    if(!ReadProcessMemory(pHookData->handle,(LPCVOID)pHookData->HookPoint,pHookData->oldEntry,sizeof(BYTE)*8,NULL)){
            return false;
     }

    //如果不是HotPatch Hook，需要把原函数的指令替换掉Trampoline中的nop
    if(pHookData->HookCodeLen != 2)
    {
        int offset = 7-pHookData->HookCodeLen;
        memcpy((void*)(TrampolineFun+offset),pHookData->oldEntry,pHookData->HookCodeLen);
    }

    //将TrampolineFun写入内存
    if (!WriteProcessMemory(pHookData->handle, TrampolineFunAddr, TrampolineFun, sizeof(BYTE)*12, NULL))
    {
        return false;
    }

    if(pHookData->HookCodeLen==2)
    {
        AddrToWrite = (PBYTE)pHookData->HookPoint-5;
    }
    else
    {
        AddrToWrite = (PBYTE)pHookData->HookPoint;
    }

    //读出待修改函数所在的内存页的属性
    MEMORY_BASIC_INFORMATION mbi;
    if(!VirtualQueryEx(pHookData->handle, AddrToWrite, &mbi, sizeof(mbi)))
    {
        return false;
    }
    //加入写权限
    DWORD oldProtect;
    if(!VirtualProtectEx(pHookData->handle, mbi.BaseAddress, mbi.RegionSize, PAGE_READWRITE, &oldProtect))
    {
        return false;
    }

    BYTE pFn[8] = {0};

    if(!ReadProcessMemory(pHookData->handle,(LPCVOID)pHookData->HookPoint,pFn,sizeof(BYTE)*8,NULL)){
            return false;
     }
    qDebug()<<"pFn:"<<*pFn<<*(pFn+1)<<*(pFn+2)<<*(pFn+3)<<*(pFn+4)<<*(pFn+5)<<*(pFn+6)<<*(pFn+7)<<endl;

    //修改内存页
    if(pHookData->HookCodeLen==2)
    {
        //先填充jmp指令
        memcpy(AddrToWrite,pHookData->HotPatchCode, 5);
        AddrToWrite += 5;
    }
    if(!WriteProcessMemory(pHookData->handle,AddrToWrite,pHookData->newEntry,pHookData->HookCodeLen,NULL))
    {
        return false;
    }

    if(!ReadProcessMemory(pHookData->handle,(LPCVOID)pHookData->HookPoint,pFn,sizeof(BYTE)*8,NULL)){
            return false;
     }

    BYTE Fn[12]={0};
    if(!ReadProcessMemory(pHookData->handle,(LPCVOID)pHookData->pfnTrampolineFun,Fn,sizeof(BYTE)*12,NULL)){
            return false;
     }

    VirtualProtectEx(pHookData->handle,mbi.BaseAddress,mbi.RegionSize,oldProtect,&oldProtect);
    return true;

}

BOOL GetCodeLength(PHOOK_DATA pHookData){
    BYTE pFn[9] ={0};
    if(!ReadProcessMemory(pHookData->handle,(LPCVOID)pHookData->HookPoint,pFn,sizeof(BYTE)*9,NULL)){
        return false;
    }
    int length=0;
    for(int i=0;i<8;i++)
    {
        if(pFn[i]==0xE8||(pFn[i]==0xFF&&pFn[i+1]==0x25)){
            length = i;
            break;
        }
    }
    pHookData->HookCodeLen=length;
    return true;
}

BOOL IfHooked(PHOOK_DATA pHookData){
    BYTE pFn[8] ={0} ;
    if(!ReadProcessMemory(pHookData->handle,(LPCVOID)pHookData->HookPoint,pFn,sizeof(BYTE)*8,NULL)){
        return true;
    }
    if (pFn[0]==0xEB && pFn[1]==0xF9)
        {
            return true;
        }
       if (pFn[0] == 0xE9)
        {
            return true;
        }

        if (pFn[0] == 0x68 )
        {
            return true;
        }
        if (pFn[0] == 0xB8 )
        {
            return true;
        }
        return false;
}


