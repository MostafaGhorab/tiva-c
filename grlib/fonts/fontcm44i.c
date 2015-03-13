//*****************************************************************************
//
// fontcm44i.c - Font definition for the 44pt Cm italic font.
//
// Copyright (c) 2011-2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.0.12573 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 44 point
//     Bold: no
//     Italic: yes
//     Memory usage: 6292 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 44 point Cm italic font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm44iData[6090] =
{
      4,  18,   0,  99,  36,  15, 240, 130, 196, 165, 164, 180,
    180, 179, 195, 180, 179, 195, 195, 195, 194, 195, 195, 194,
    210, 210, 209, 210, 210, 209, 225,   0,   9,   3, 180, 180,
    179,   0,  22,  16,  30,  19,   0,   7,  67,  83, 117,  53,
    101,  53, 101,  53, 161, 113, 145, 113, 161, 113, 145, 113,
    145, 113, 161, 113, 130,  98, 129, 114,   0,  70, 122,  35,
      0,  11,  33, 129, 240, 146, 114, 240, 145, 130, 240, 130,
    114, 240, 146, 114, 240, 130, 114, 240, 146, 114, 240, 130,
    129, 240, 146, 114, 240, 130, 129, 240, 146, 114, 240, 145,
    130, 240, 130, 114, 240, 145, 130, 240, 130, 114, 240, 146,
    114, 223,  14, 242, 129, 240, 146, 114, 240, 130, 129, 240,
    146, 114, 240, 145, 130, 240, 130, 114, 240, 145, 130, 255,
     14, 210, 114, 240, 146, 114, 240, 130, 129, 240, 146, 114,
    240, 130, 129, 240, 146, 114, 240, 130, 129, 240, 146, 114,
    240, 130, 129, 240, 146, 114, 240, 130, 129, 240, 146, 114,
    240, 130, 130, 240, 130, 114, 240, 145, 130,   0,  11,  80,
     84,  30,   0,   9, 117, 240, 131,  50, 240,  98,  97, 240,
     82, 129, 240,  51, 129, 240,  50, 145, 240,  35, 145, 240,
     35, 115, 240,  34, 131, 240,  34, 130, 240,  35, 240, 195,
    240, 194, 240, 210, 240, 195, 240, 154, 240, 130, 240, 210,
    240, 195, 240, 195, 240, 194, 240, 210, 240, 195, 240, 195,
    240, 194, 240, 135, 177, 146,  52, 177, 130,  69, 145, 130,
     82,  19, 113, 146,  66,  52,  65, 181, 118,   0,  42,  80,
    127,  35, 163, 240,  18, 194,  49, 226, 194,  66, 195, 178,
     98, 163, 194, 100,  85, 194, 113,  38,  34, 195, 113, 146,
    210, 129, 130, 226, 129, 130, 211, 129, 114, 227, 113, 114,
    242, 129,  98, 240,  18, 129,  82, 240,  34, 113,  82, 240,
     50,  97,  83, 240,  50,  97,  82, 240,  81,  81,  82, 240,
    113,  49,  82, 240, 147,  82, 129, 240, 130, 114,  18, 240,
     82,  98,  65, 240,  82,  82,  97, 240,  50,  97, 113, 240,
     34,  98, 113, 240,  18,  99, 113, 242, 114, 129, 226, 130,
    129, 211, 115, 114, 210, 130, 129, 210, 146, 129, 194, 162,
    113, 194, 178, 113, 178, 194,  97, 179, 209,  81, 179, 226,
     49, 194, 240,  20,   0,  36,  80, 108,  33, 240, 240, 228,
    240, 194,  66, 162, 194,  98, 131, 178, 129, 131, 162, 145,
    131, 162, 146, 129, 163, 115, 145, 162, 116, 129, 163, 115,
    130, 163, 240,  34, 178, 240,  34, 194, 240,  18, 210,  36,
    132, 213,  49,  99,  18, 195,  81,  83,  49, 195,  81,  66,
     97, 164,  65,  81, 113, 147,  36,  82, 113, 146, 194,  18,
     65, 131, 212,  65, 131, 211,  81, 116, 240,  97, 115, 240,
     97, 131, 240,  97, 131, 240,  81, 147, 240,  81, 147, 240,
     65, 178, 240,  65, 179, 240,  33, 211, 226, 243, 194, 240,
     51, 115, 240, 120,   0,  43,  64,  19,  11, 240, 240,  99,
    117, 101, 101, 161, 145, 161, 145, 145, 161, 130, 129,   0,
     41,  16,  90,  20, 241, 240,  34, 240,  34, 240,  34, 240,
     34, 240,  34, 240,  49, 240,  50, 240,  34, 240,  34, 240,
     50, 240,  34, 240,  50, 240,  34, 240,  50, 240,  35, 240,
     34, 240,  50, 240,  34, 240,  50, 240,  50, 240,  35, 240,
     34, 240,  50, 240,  50, 240,  50, 240,  35, 240,  34, 240,
     50, 240,  50, 240,  50, 240,  50, 240,  50, 240,  50, 240,
     50, 240,  50, 240,  65, 240,  66, 240,  50, 240,  65, 240,
     65, 240,  81, 240,  65, 240,  81, 240,  91,  19, 161, 240,
     65, 240,  50, 240,  49, 240,  50, 240,  34, 240,  49, 240,
     50, 240,  34, 240,  34, 240,  34, 240,  34, 240,  34, 240,
     34, 240,  34, 240,  34, 240,  34, 240,  19, 240,  19, 240,
     18, 240,  34, 240,  34, 240,  19, 240,  18, 240,  34, 240,
     34, 240,  19, 240,  18, 240,  34, 240,  18, 240,  34, 240,
     18, 240,  34, 240,  18, 240,  34, 240,  18, 240,  33, 240,
     34, 240,  18, 240,  18, 240,  33, 240,  33, 240,  33, 240,
     33, 240,  48,  48,  21, 162, 240,  66, 240,  50, 240,  66,
    209,  82,  81,  99,  65,  67, 115,  49,  36, 147,  18,  19,
    213, 240,  49, 240,  53, 211,  17,  35, 147,  49,  51, 115,
     65,  67,  97,  82,  81, 210, 240,  66, 240,  50, 240,  66,
      0,  67,  48,  59,  30,   0,  35,  82, 240, 210, 240, 210,
    240, 209, 240, 210, 240, 210, 240, 210, 240, 209, 240, 210,
    240, 210, 240, 210, 240, 209, 240, 210, 240,  31,  11, 240,
     17, 240, 225, 240, 210, 240, 210, 240, 209, 240, 225, 240,
    210, 240, 210, 240, 209, 240, 225, 240, 210, 240, 210,   0,
     36,  16,  19,  10,   0,  36,  83, 100, 100, 100, 145, 129,
    145, 145, 129, 145, 129, 129, 129, 240, 224,   9,  15,   0,
     43,  27,  75,   0,  36,  16,  11,   8,   0,  29,  19,  68,
     68,  67,   0,  11,  80,  92,  30, 240, 146, 240, 210, 240,
    194, 240, 210, 240, 194, 240, 209, 240, 210, 240, 194, 240,
    210, 240, 194, 240, 210, 240, 194, 240, 209, 240, 210, 240,
    194, 240, 210, 240, 194, 240, 210, 240, 194, 240, 209, 240,
    210, 240, 194, 240, 210, 240, 194, 240, 209, 240, 210, 240,
    194, 240, 210, 240, 194, 240, 210, 240, 194, 240, 209, 240,
    210, 240, 194, 240, 210, 240, 194, 240, 210, 240, 194, 240,
    209, 240, 210, 240, 194, 240, 210, 240, 194, 240, 210, 240,
    208,  67,  23,   0,  12, 117, 240,  18,  51, 211,  83, 194,
    114, 178, 131, 147, 131, 131, 147, 131, 147, 115, 163, 115,
    148, 115, 148, 100, 148,  99, 163, 115, 163, 100, 148, 100,
    148,  99, 163, 115, 163, 115, 148, 100, 148, 100, 147, 115,
    163, 115, 147, 131, 147, 131, 131, 147, 130, 178, 115, 179,
     83, 211,  50, 240,  22,   0,  30,  64,  61,  19,   0,  11,
     33, 240,  34, 240,  18, 240,  19, 244, 214, 164,  34, 240,
     19, 240,  19, 240,  19, 240,  18, 240,  19, 240,  19, 240,
     19, 240,  18, 240,  19, 240,  19, 240,  19, 240,  18, 240,
     19, 240,  19, 240,  19, 240,  18, 240,  19, 240,  19, 240,
     19, 240,  18, 240,  20, 173,   0,  26, 112,  76,  25,   0,
     14,   5, 240,  50,  67, 241, 115, 209, 146, 193, 163, 161,
     65,  99, 161,  65,  99, 145,  81,  99, 145,  81,  99, 129,
     81, 115, 129,  81,  99, 145,  65, 115, 145,  49, 115, 179,
    131, 240,  99, 240,  98, 240,  99, 240,  99, 240,  83, 240,
     98, 240,  98, 240, 114, 240, 114, 193, 146, 194, 145, 209,
    146, 194, 151,  98, 146,  59, 145, 104, 146, 133,   0,  32,
     64,  71,  25,   0,  14,   5, 240,  50,  67, 226, 115, 193,
    163, 162, 163, 161, 179, 145,  65, 115, 145,  65, 115, 145,
     65, 114, 161,  49, 115, 179, 130, 240, 114, 240, 114, 240,
     99, 240,  38, 240, 146, 240, 146, 240, 131, 240, 115, 240,
    115, 240, 115, 147, 163, 132, 148, 131, 163, 145, 195, 145,
    179, 162, 147, 193, 131, 226,  67, 240,  38,   0,  33,  32,
     83,  22,   0,  13,   2, 240,  82, 240,  67, 240,  67, 240,
     67, 240,  66, 240,  67, 240,  66, 240,  82, 240,  67, 240,
     66, 240,  67, 240,  66, 240,  82, 240,  66, 240,  82, 240,
     66, 240,  81, 240,  82,  49, 242,  51, 225,  67, 209,  82,
    210,  82, 194,  83, 193,  99, 177, 115, 151,  50, 145, 102,
    129, 148,  34, 246, 240,  18, 240,  67, 240,  67, 240,  67,
    240,  66, 240,  67, 240,  67, 240,  66,   0,   6, 112,  66,
     24,   0,  13,   2, 130, 203, 202, 225,  22, 240,  17, 240,
    129, 240, 113, 240, 129, 240, 129, 240, 129, 240, 113,  53,
    241,  18,  66, 226,  99, 194, 130, 240, 115, 240,  99, 240,
     99, 240,  99, 240,  99, 240,  84, 131, 148, 116, 147, 131,
    163, 129, 179, 145, 179, 146, 147, 162, 131, 194,  99, 226,
     67, 240,  21,   0,  32,  67,  23,   0,  13,  21, 243,  66,
    210, 113, 194, 114, 178, 115, 163, 114, 163, 240,  67, 240,
     83, 240,  67, 240,  83,  52, 196,  18,  51, 163,  17,  98,
    164, 130, 133, 130, 132, 147, 116, 147, 115, 163, 100, 148,
    100, 147, 116, 147, 115, 163, 115, 147, 131, 147, 131, 146,
    147, 131, 162, 115, 179,  98, 211,  51, 246,   0,  30,  64,
     71,  25,   0,  13,  17,  36, 129, 129,  38,  97, 153,  82,
    133,  50,  66, 147,  97,  50, 147, 133, 146, 193, 146, 194,
    145, 194, 146, 194, 145, 194, 240, 130, 240, 114, 240, 115,
    240, 114, 240, 115, 240, 115, 240,  99, 240, 115, 240, 115,
    240,  99, 240, 115, 240, 100, 240,  99, 240, 115, 240, 100,
    240,  99, 240, 115, 240, 100, 240, 114,   0,  33,  48,  68,
     24,   0,  13,  69, 240,  34,  67, 210, 114, 194, 146, 163,
    146, 162, 162, 147, 162, 147, 162, 147, 146, 164, 114, 181,
     97, 213,  50, 245,  18, 240,  37, 240,  86, 240,  18,  22,
    210,  70, 178, 101, 162, 148, 130, 164, 114, 195, 114, 195,
     98, 211,  98, 210, 114, 195, 114, 194, 146, 162, 162, 146,
    195,  82, 240,  22,   0,  31,  96,  68,  24,   0,  13,  69,
    240,  19,  66, 226, 114, 194, 130, 179, 131, 147, 147, 147,
    147, 131, 163, 131, 163, 116, 148, 116, 148, 115, 164, 115,
    148, 131, 148, 131, 133, 146, 133, 147,  97,  19, 178,  66,
     35, 197,  52, 240,  83, 240,  99, 240,  83, 240,  99, 240,
     83, 163, 130, 179, 114, 179, 114, 194, 114, 226,  67, 240,
     22,   0,  32,  17,  12,   0,  21,  83, 132, 132, 131,   0,
     17,  35, 132, 132, 131,   0,  17,  80,  26,  13,   0,  23,
     67, 148, 148, 147,   0,  18,  99, 164, 133, 147, 193, 193,
    193, 177, 193, 177, 177, 178, 177, 240, 240, 128,  36,  15,
      0,  21,  83, 180, 180, 179,   0,   9,   1, 225, 210, 210,
    209, 210, 210, 210, 195, 195, 194, 195, 195, 195, 195, 180,
    179, 195, 180, 180, 180, 165, 164, 194, 240, 192,  13,  32,
      0,  72,  47,  11,   0,  28,  79,  11,   0,  68,  96,  55,
     19,   0,  27,  67, 244, 244, 240,  18,   0,  11,  51, 241,
     49, 209,  65, 193,  81, 193,  66, 240,  33, 240,  19, 243,
    243, 243, 227, 243, 114,  99, 115,  83, 131,  82, 162,  66,
    177,  81, 178,  81, 177,  97, 162,  97, 161, 113, 145, 145,
    113, 177,  66, 213, 240, 240,  54,  19, 240, 196, 210,  66,
    161, 113, 145, 145, 113, 161,  98, 161,  97, 177,  82, 177,
     81, 178,  66, 162,  83, 131,  83, 115,  98, 115, 243, 227,
    243, 243, 243, 240,  18, 240,  18,  65, 193,  81, 193,  65,
    209,  49, 243,   0,  11,  50, 240,  20, 244, 243,   0,  28,
    111,  31,   0,   9,  70, 240, 115,  99, 240,  50, 162, 242,
    210, 210, 241, 193, 240,  49, 161, 117, 113, 146,  83,  66,
     97, 129,  82, 113,  97, 113,  82, 130,  81,  98,  67, 147,
     49,  97,  67, 163,  49,  82,  67, 162,  65,  81,  67, 163,
     65,  81,  67, 163,  65,  81,  51, 179,  49,  81,  67, 178,
     65,  81,  67, 163,  65,  81,  67, 163,  65,  81,  67, 163,
     49,  97,  67, 147,  65,  97,  82, 132,  65,  97,  83,  97,
     19,  49, 114,  83,  65,  35,  33, 145, 117,  68, 161, 240,
    240,  17, 240, 242, 240,  35, 162, 227, 226, 132, 240,  72,
      0,  44,  80,  86,  31,   0,   6,  50, 240, 211, 240, 211,
    240, 196, 240, 196, 240, 181, 240, 177,  19, 240, 161,  35,
    240, 146,  35, 240, 145,  51, 240, 130,  51, 240, 129,  67,
    240, 114,  67, 240, 113,  83, 240,  98,  83, 240,  97, 100,
    240,  66, 100, 240,  50, 116, 240,  50, 116, 240,  34, 132,
    240,  33, 148, 240,  31, 240,  17, 179, 242, 179, 241, 195,
    225, 211, 210, 211, 209, 227, 194, 227, 178, 243, 164, 228,
    120, 154,   0,  43,  16,  73,  33,   0,  13,  47,   3, 240,
     51, 163, 240,  35, 179, 240,  19, 195, 243, 195, 227, 212,
    211, 212, 211, 211, 227, 196, 211, 211, 227, 196, 227, 180,
    243, 163, 240,  19, 147, 240,  61, 240,  83, 163, 240,  35,
    179, 243, 211, 227, 212, 211, 212, 211, 212, 195, 228, 195,
    228, 195, 212, 211, 212, 195, 212, 211, 196, 227, 180, 228,
    148, 223,   3,   0,  47,  32,  89,  32,   0,   9, 103,  97,
    240,  19,  82,  66, 227, 145,  35, 210, 196, 195, 212, 179,
    243, 163, 240,  19, 162, 240,  34, 163, 240,  34, 147, 240,
     50, 147, 240,  50, 131, 240,  65, 147, 240, 212, 240, 211,
    240, 227, 240, 212, 240, 212, 240, 211, 240, 227, 240, 227,
    240,  65, 147, 240,  65, 147, 240,  50, 147, 240,  49, 178,
    240,  34, 179, 240,  17, 195, 241, 226, 225, 240,  18, 193,
    240,  35, 161, 240,  83,  82, 240, 150,   0,  42,  48,  78,
     34,   0,  13,  95,   2, 240,  84, 147, 240,  52, 163, 240,
     35, 195, 240,  19, 211, 243, 211, 228, 226, 227, 243, 211,
    243, 211, 243, 196, 243, 195, 240,  19, 195, 240,  19, 195,
    244, 180, 244, 179, 240,  19, 195, 240,  19, 195, 244, 180,
    243, 195, 240,  19, 195, 243, 211, 243, 211, 227, 211, 242,
    227, 226, 243, 211, 243, 194, 240,  19, 179, 240,  35, 147,
    255,   2,   0,  48, 112,  78,  33,   0,  13,  47,   7, 228,
    180, 228, 195, 227, 226, 227, 226, 227, 225, 228, 225, 227,
    241, 227, 241, 227, 129,  97, 212, 129, 240,  84, 114, 240,
     83, 129, 240,  99, 114, 240,  93, 240,  84,  99, 240,  83,
    129, 240,  99, 129, 240,  99, 129, 240,  84, 114,  98, 195,
    240,  17, 211, 242, 211, 241, 212, 241, 211, 241, 227, 226,
    227, 226, 212, 195, 227, 181, 175,   7,   0,  46,  96,  75,
     33,   0,  13,  47,   7, 228, 164, 244, 194, 243, 210, 243,
    210, 243, 225, 228, 225, 228, 210, 227, 226, 227, 225, 228,
    114, 240,  84, 113, 240,  99, 129, 240,  99, 114, 240,  84,
     99, 240,  92, 240,  99, 114, 240,  99, 114, 240,  99, 114,
    240,  84, 113, 240,  99, 129, 240,  99, 240, 243, 240, 228,
    240, 227, 240, 243, 240, 243, 240, 228, 240, 228, 240, 172,
      0,  48,  89,  33,   0,  10,  23,  97, 240,  20,  82,  66,
    243, 145,  35, 211, 196, 211, 212, 195, 243, 179, 240,  19,
    163, 240,  34, 164, 240,  34, 148, 240,  50, 148, 240,  50,
    132, 240,  65, 148, 240, 212, 240, 228, 240, 228, 240, 213,
    240, 212, 240, 228, 240, 228, 203, 100, 240,  20, 148, 240,
     20, 148, 240,  19, 164, 240,  19, 179, 240,  19, 180, 243,
    180, 227, 212, 211, 227, 193,  18, 243, 161,  34, 240,  20,
     83,  65, 240,  55,   0,  43,  80,  94,  38,   0,  15,  27,
     91, 244, 180, 240,  67, 196, 240,  52, 195, 240,  67, 211,
    240,  67, 196, 240,  67, 196, 240,  52, 195, 240,  68, 195,
    240,  67, 211, 240,  67, 196, 240,  52, 195, 240,  68, 195,
    240,  67, 211, 240,  79,   4, 240,  52, 195, 240,  68, 195,
    240,  67, 211, 240,  67, 196, 240,  52, 195, 240,  68, 195,
    240,  67, 211, 240,  67, 196, 240,  52, 195, 240,  68, 195,
    240,  67, 211, 240,  67, 196, 240,  52, 195, 240,  68, 195,
    251,  91,   0,  53,  80,  63,  23,   0,   9,  76, 244, 240,
     67, 240,  83, 240,  68, 240,  68, 240,  67, 240,  83, 240,
     68, 240,  68, 240,  67, 240,  83, 240,  68, 240,  68, 240,
     67, 240,  83, 240,  68, 240,  68, 240,  67, 240,  83, 240,
     68, 240,  68, 240,  67, 240,  83, 240,  68, 240,  68, 240,
     67, 240,  83, 240,  68, 252,   0,  33,  69,  26,   0,  11,
     27, 240,  83, 240, 131, 240, 116, 240, 115, 240, 131, 240,
    131, 240, 116, 240, 115, 240, 131, 240, 131, 240, 116, 240,
    115, 240, 131, 240, 131, 240, 116, 240, 115, 240, 131, 240,
    131, 240, 116, 240, 115, 240, 131, 240, 131, 211, 100, 196,
     99, 212,  99, 211,  99, 225, 131, 226,  99, 240,  18,  51,
    240,  84,   0,  34, 112,  97,  38,   0,  15,  27, 136, 228,
    213, 240,  20, 211, 240,  51, 210, 240,  83, 194, 240,  99,
    178, 240, 100, 162, 240, 115, 161, 240, 147, 145, 240, 163,
    114, 240, 164,  98, 240, 180,  82, 240, 195,  83, 240, 195,
     68, 240, 195,  34,  20, 240, 164,  18,  36, 240, 163,  18,
     67, 240, 165,  84, 240, 148, 115, 240, 132, 131, 240, 131,
    148, 240, 115, 163, 240, 115, 164, 240,  84, 164, 240,  83,
    195, 240,  83, 196, 240,  67, 196, 240,  52, 211, 240,  52,
    197, 219, 121,   0,  53,  80,  67,  28,   0,  11,  60, 240,
     68, 240, 148, 240, 147, 240, 163, 240, 163, 240, 148, 240,
    147, 240, 163, 240, 163, 240, 148, 240, 148, 240, 147, 240,
    163, 240, 163, 240, 148, 240, 147, 240, 163, 240, 163, 240,
    148, 209, 163, 209, 179, 209, 179, 194, 164, 193, 179, 194,
    179, 194, 179, 178, 180, 163, 179, 149, 127,   5,   0,  39,
     64, 147,  44,   0,  17,  56, 240,  40, 244, 240,  36, 240,
     68, 240,  17,  19, 240,  53, 240,  20, 240,  65,  19, 241,
     19, 240,  65,  34, 225,  35, 240,  65,  34, 225,  35, 240,
     50,  35, 193,  35, 240,  65,  51, 193,  35, 240,  65,  51,
    177,  51, 240,  65,  51, 161,  67, 240,  50,  51, 161,  51,
    240,  66,  51, 145,  67, 240,  65,  67, 145,  67, 240,  65,
     67, 129,  83, 240,  50,  67, 129,  67, 240,  66,  82, 113,
     83, 240,  65,  99,  81,  99, 240,  65,  99,  81,  99, 240,
     65,  99,  65,  99, 240,  66,  99,  65,  99, 240,  65, 115,
     49, 115, 240,  65, 115,  33, 131, 240,  65, 115,  33, 115,
    240,  66, 115,  17, 131, 240,  65, 131,  17, 131, 240,  65,
    132, 147, 240,  50, 146, 147, 240,  52, 130, 147, 249,  97,
    107,   0,  61, 112, 114,  38,   0,  15,  23, 170, 244, 195,
    240,  53, 209, 240,  69, 209, 240,  65,  35, 178, 240,  65,
     35, 177, 240,  66,  35, 177, 240,  66,  51, 161, 240,  65,
     67, 146, 240,  65,  67, 145, 240,  81,  83, 129, 240,  66,
     83, 129, 240,  65,  99, 114, 240,  65, 115,  97, 240,  81,
    115,  97, 240,  66, 116,  81, 240,  65, 147,  66, 240,  65,
    147,  65, 240,  81, 148,  49, 240,  66, 163,  49, 240,  65,
    179,  34, 240,  65, 180,  17, 240,  81, 195,  17, 240,  66,
    195,  17, 240,  65, 213, 240,  65, 227, 240,  81, 227, 240,
     66, 227, 240,  51, 242, 249, 193,   0,  54,  32,  95,  32,
      0,   9, 119, 240, 116,  83, 240,  66, 147, 240,  19, 179,
    227, 210, 211, 227, 179, 240,  18, 163, 240,  35, 132, 240,
     35, 131, 240,  51, 116, 240,  51, 100, 240,  67, 100, 240,
     67, 100, 240,  67,  84, 240,  68,  84, 240,  68,  84, 240,
     67,  85, 240,  67,  84, 240,  68,  84, 240,  67, 100, 240,
     52, 100, 240,  51, 116, 240,  51, 116, 240,  35, 147, 240,
     19, 163, 240,  19, 164, 227, 195, 211, 227, 178, 240,  35,
    131, 240,  67,  83, 240, 135,   0,  42,  32,  70,  33,   0,
     13,  47,   2, 240,  83, 148, 240,  35, 164, 243, 195, 243,
    196, 227, 196, 227, 196, 212, 196, 211, 212, 211, 196, 227,
    196, 212, 180, 227, 195, 243, 164, 240,  19, 132, 240,  46,
    240,  67, 240, 243, 240, 243, 240, 228, 240, 227, 240, 243,
    240, 243, 240, 228, 240, 227, 240, 243, 240, 243, 240, 228,
    240, 228, 240, 171,   0,  48,  16, 125,  32,   0,   9, 119,
    240, 116,  83, 240,  66, 147, 240,  19, 179, 227, 210, 210,
    243, 179, 240,  18, 163, 240,  35, 131, 240,  51, 116, 240,
     51, 115, 240,  67, 100, 240,  67,  99, 240,  83,  84, 240,
     83,  83, 240,  99,  83, 240,  84,  68, 240,  83,  84, 240,
     83,  83, 240,  84,  83, 240,  83,  99, 240,  83,  99, 240,
     67, 115, 240,  67, 115, 240,  51, 146, 131, 115, 147,  97,
     49,  83, 163,  81,  81,  51, 194,  65,  97,  35, 226,  49,
     97,  19, 240,  18,  33, 100, 240,  52,  83, 240, 119,  17,
    113, 240, 114, 113, 240, 114, 113, 240, 114,  97, 240, 131,
     51, 240, 136, 240, 152, 240, 151, 240, 180,   0,   9,  80,
     82,  32,   0,  12, 127,   1, 240,  68, 116, 240,  35, 163,
    240,  19, 179, 228, 180, 211, 196, 211, 196, 211, 196, 211,
    180, 211, 196, 211, 180, 227, 179, 243, 163, 243, 132, 240,
     44, 240,  83, 115, 240,  67, 131, 240,  35, 163, 240,  19,
    163, 240,  19, 163, 240,  19, 163, 243, 179, 243, 164, 243,
    164, 243, 164, 228, 164, 227, 180,  81, 131, 180,  66, 116,
    180,  65,  90, 147,  49, 240, 181,   0,  40, 112,  74,  28,
      0,   8,  85,  81, 242,  82,  34, 226, 114,  18, 210, 147,
    210, 163, 195, 178, 194, 194, 179, 193, 195, 193, 195, 193,
    195, 193, 196, 240, 149, 240, 150, 240, 121, 240,  90, 240,
     89, 240, 118, 240, 164, 240, 148, 240, 163, 177, 211, 177,
    211, 162, 211, 162, 210, 178, 195, 178, 194, 179, 194, 180,
    162, 194,  18, 130, 209,  51,  67, 209, 102,   0,  36, 112,
     75,  31,   0,  12,  15,   9, 111,  10, 100, 115, 116,  98,
    147, 130,  98, 148, 145,  98, 147, 161,  97, 163, 161,  82,
    163, 161,  81, 164, 146,  81, 163, 161, 240,  35, 240, 211,
    240, 196, 240, 195, 240, 211, 240, 211, 240, 196, 240, 195,
    240, 211, 240, 196, 240, 195, 240, 211, 240, 211, 240, 196,
    240, 195, 240, 211, 240, 211, 240, 196, 240, 196, 240, 111,
      0,  44,  80,  73,  32,   0,  12,  27, 121, 148, 196, 195,
    226, 196, 225, 211, 241, 211, 226, 211, 225, 212, 225, 211,
    241, 211, 226, 211, 225, 212, 225, 211, 241, 211, 226, 211,
    225, 212, 225, 211, 241, 211, 226, 211, 225, 227, 225, 212,
    225, 211, 226, 211, 225, 227, 225, 227, 209, 243, 193, 240,
     34, 178, 240,  35, 146, 240,  66, 130, 240,  99,  66, 240,
    165,   0,  42,  96,  88,  33,   0,  12,  58, 184, 116, 244,
    164, 240,  18, 180, 242, 211, 241, 227, 226, 227, 225, 243,
    209, 240,  19, 194, 240,  19, 193, 240,  35, 178, 240,  36,
    161, 240,  52, 145, 240,  68, 130, 240,  68, 129, 240,  99,
    114, 240,  99, 113, 240, 115,  97, 240, 131,  97, 240, 131,
     81, 240, 147,  66, 240, 148,  49, 240, 164,  33, 240, 180,
     33, 240, 180,  17, 240, 213, 240, 212, 240, 227, 240, 243,
    240, 242, 240, 240,  18,   0,  44,  48, 131,  44,   0,  16,
     74,  90, 105, 116, 180, 180, 163, 195, 210, 179, 195, 209,
    195, 195, 194, 195, 195, 193, 211, 180, 177, 228, 164, 177,
    228, 145,  19, 161, 244, 145,  19, 146, 244, 129,  36, 129,
    240,  20, 129,  36, 114, 240,  20, 113,  52, 113, 240,  36,
     98,  52,  98, 240,  36,  97,  68,  97, 240,  52,  82,  68,
     82, 240,  67,  81,  84,  81, 240,  83,  66,  84,  66, 240,
     83,  65, 115,  65, 240,  99,  50, 115,  50, 240,  99,  49,
    131,  49, 240, 115,  33, 147,  33, 240, 131,  33, 147,  33,
    240, 131,  17, 163,  17, 240, 147,  17, 163,  17, 240, 148,
    180, 240, 164, 180, 240, 163, 195, 240, 179, 195, 240, 178,
    210, 240, 194, 210,   0,  57, 112,  97,  38,   0,  15,  42,
    121, 245, 164, 240,  83, 178, 240, 116, 161, 240, 132, 145,
    240, 163, 130, 240, 164,  98, 240, 180,  97, 240, 211,  81,
    240, 228,  49, 240, 240,  19,  33, 240, 240,  38, 240, 240,
     37, 240, 240,  67, 240, 240,  84, 240, 240,  68, 240, 240,
     49,  19, 240, 240,  33,  36, 240, 242,  36, 240, 226,  67,
    240, 225,  84, 240, 193, 115, 240, 177, 132, 240, 145, 148,
    240, 130, 163, 240, 114, 180, 240,  82, 196, 240,  66, 227,
    240,  52, 197, 217, 154,   0,  53,  64,  77,  33,   0,  12,
     58, 184, 116, 244, 179, 243, 195, 242, 212, 210, 228, 194,
    240,  19, 178, 240,  36, 161, 240,  52, 145, 240,  83, 130,
    240,  84,  98, 240, 100,  82, 240, 131,  81, 240, 148,  49,
    240, 164,  34, 240, 179,  18, 240, 197, 240, 212, 240, 227,
    240, 243, 240, 243, 240, 243, 240, 227, 240, 243, 240, 243,
    240, 243, 240, 228, 240, 227, 240, 243, 240, 187,   0,  47,
    112,  69,  31,   0,  12, 111,   3, 198, 148, 195, 180, 210,
    195, 210, 195, 226, 180, 225, 180, 241, 164, 242, 148, 240,
     17, 163, 240, 195, 240, 196, 240, 180, 240, 180, 240, 180,
    240, 195, 240, 196, 240, 180, 240, 180, 240, 180, 161, 240,
     19, 162, 243, 177, 244, 177, 228, 178, 212, 193, 212, 194,
    211, 195, 196, 179, 196, 165, 191,   5,   0,  44,  89,  20,
    240, 240,  21, 241, 240,  50, 240,  50, 240,  49, 240,  65,
    240,  50, 240,  50, 240,  49, 240,  65, 240,  50, 240,  50,
    240,  49, 240,  65, 240,  50, 240,  50, 240,  49, 240,  65,
    240,  50, 240,  50, 240,  49, 240,  65, 240,  50, 240,  50,
    240,  49, 240,  65, 240,  50, 240,  50, 240,  49, 240,  50,
    240,  50, 240,  50, 240,  49, 240,  50, 240,  50, 240,  50,
    240,  49, 240,  50, 240,  50, 240,  50, 240,  49, 240,  50,
    240,  54, 224,  33,  19, 240, 240, 225, 113, 145, 113, 145,
    113, 145, 113, 145, 113, 161, 113, 145, 113, 161, 113, 145,
    113, 165,  53, 101,  53, 101,  53, 115,  83,   0,  69,  96,
     89,  21, 240, 240,  38, 240,  50, 240,  66, 240,  66, 240,
     65, 240,  66, 240,  66, 240,  66, 240,  65, 240,  81, 240,
     66, 240,  66, 240,  65, 240,  81, 240,  66, 240,  66, 240,
     65, 240,  81, 240,  66, 240,  66, 240,  65, 240,  81, 240,
     66, 240,  66, 240,  65, 240,  81, 240,  66, 240,  66, 240,
     65, 240,  81, 240,  66, 240,  66, 240,  65, 240,  81, 240,
     66, 240,  66, 240,  65, 240,  81, 240,  66, 240,  66, 240,
     65, 240,  81, 246, 240,  17,  15,   0,   6,  50, 195, 178,
     18, 130,  66,  98,  97,  81, 145,   0,  66,  16,  11,   8,
    240, 240,  51,  68,  68,  67,   0,  36,  80,  19,  11, 240,
    209, 145, 145, 145, 145, 161, 145, 161, 145, 165, 101, 101,
    115,   0,  40,  96,  53,  22,   0,  39,  68, 240,  18,  50,
     18, 178,  84, 162, 115, 147, 115, 131, 131, 131, 130, 131,
    131, 131, 131, 116, 131, 116, 130, 131, 131, 131, 131,  49,
     67, 130,  65,  67, 115,  65,  82, 115,  50,  82,  97,  18,
     49, 114,  50,  34,  34, 132,  84,   0,  31,  66,  19,   0,
      7,  54, 240,  19, 240,  19, 240,  19, 240,  19, 240,  18,
    240,  19, 240,  19, 240,  19, 243, 240,  19, 240,  19,  36,
    163,  17,  50, 133,  82, 116,  99,  99, 115,  99, 115,  83,
    131,  83, 131,  83, 131,  68, 116,  68, 115,  83, 131,  83,
    116,  83, 115,  99, 114, 115,  99, 130,  83, 162,  50, 213,
      0,  27,  64,  40,  19,   0,  34,  37, 195,  65, 162, 113,
    130, 114, 115,  99,  99, 114, 115, 243, 240,  19, 244, 243,
    240,  19, 240,  19, 240,  19, 177,  67, 162,  82, 146,  99,
    114, 131,  67, 181,   0,  27,  48,  74,  24,   0,  10,  87,
    240,  83, 240,  99, 240,  99, 240,  98, 240, 114, 240,  99,
    240,  99, 240,  98, 240, 114, 240,  99, 244,  35, 210,  50,
     18, 210,  84, 194, 115, 179, 115, 163, 130, 179, 130, 163,
    131, 163, 131, 148, 130, 164, 130, 163, 131, 163, 131,  49,
     99, 130,  65,  99, 115,  65, 114, 100,  50, 114,  97,  18,
     49, 146,  50,  34,  34, 164,  84,   0,  34,  41,  19,   0,
     34,  37, 194,  66, 147,  98, 115, 114,  99, 130,  99, 115,
     83, 130,  99,  84, 106, 148, 243, 240,  19, 240,  19, 240,
     19, 240,  19, 162,  82, 146,  99, 114, 131,  66, 197,   0,
     27,  48,  94,  24,   0,   7, 116, 240,  66,  34, 240,  34,
     35, 240,  19,  35, 240,  19,  34, 240,  34, 240,  99, 240,
     99, 240,  99, 240,  99, 240,  98, 240,  99, 240,  43, 240,
     35, 240,  98, 240, 114, 240,  99, 240,  99, 240,  99, 240,
     98, 240, 114, 240,  99, 240,  99, 240,  99, 240,  99, 240,
     98, 240,  99, 240,  99, 240,  99, 240,  99, 240,  98, 240,
    114, 240,  99, 240,  98, 240, 114, 240,  34,  50, 240,  19,
     34, 240,  35,  34, 240,  34,  34, 240,  68,   0,   8,  48,
     64,  23,   0,  41,  84, 240,  34,  50,  18, 194,  84, 178,
    115, 163, 115, 147, 131, 147, 130, 147, 131, 147, 131, 132,
    131, 132, 130, 147, 131, 147, 131, 147, 131, 147, 115, 178,
    115, 178, 100, 194,  50,  19, 212,  35, 240,  83, 240,  83,
    240,  83, 240,  67, 240,  83, 163,  99, 164,  98, 194,  83,
    231,   0,   7,  64,  74,  25,   0,   9, 118, 240, 115, 240,
    114, 240, 115, 240, 115, 240, 115, 240, 114, 240, 115, 240,
    115, 240, 115, 240, 114, 240, 115,  54, 211,  18,  67, 197,
     99, 180, 115, 164, 131, 163, 147, 163, 147, 162, 147, 163,
    147, 163, 132, 163, 131, 163, 147, 163, 131,  81,  83, 131,
     66,  83, 116,  65,  83, 131,  66,  83, 131,  65,  99, 146,
     49, 114, 180,   0,  35,  48,  43,  15,   0,   8,  66, 196,
    179,   0,  14,  36, 161,  35, 129,  51, 113,  67, 113,  67,
     98,  52,  97,  67, 195, 180, 179, 180, 179, 195,  65, 100,
     50,  99,  65, 115,  65, 115,  49, 131,  34, 163,   0,  21,
     80,  69,  22,   0,  12, 114, 240,  68, 240,  51,   0,  21,
     20, 240,  18,  50, 226,  67, 209,  83, 193,  99, 193,  99,
    177, 100, 240,  51, 240,  67, 240,  67, 240,  52, 240,  51,
    240,  67, 240,  52, 240,  51, 240,  67, 240,  67, 240,  52,
    240,  51, 240,  67, 240,  67, 240,  52, 240,  51, 240,  67,
    194,  67, 195,  51, 210,  51, 245,   0,   7,  64,  75,  21,
      0,   8,  38, 240,  51, 240,  51, 240,  51, 240,  51, 240,
     50, 240,  51, 240,  51, 240,  51, 240,  50, 240,  51, 240,
     51,  99, 147,  66,  34, 130,  65,  51, 115,  49,  66, 131,
     34, 227,  33, 242,  18, 244, 240,  39, 226,  67, 194,  83,
    163,  83, 163,  83,  49,  98,  99,  49,  98,  99,  49,  83,
     98,  49,  99,  98,  49,  99, 114,  33,  98, 147,   0,  29,
     96,  43,  14, 240, 240, 247, 163, 179, 179, 179, 178, 179,
    179, 179, 163, 179, 179, 179, 163, 179, 179, 164, 163, 179,
    179, 163, 179, 179, 179,  49,  99,  65,  99,  65,  99,  50,
     99,  49, 130,  34, 148,   0,  20,  32,  80,  38,   0,  66,
    115, 101, 102, 177,  34,  50,  66,  50,  67, 146,  50,  18,
     83,  18,  99, 129,  68, 101, 115, 129,  52, 116, 131, 114,
     51, 131, 147, 113,  67, 131, 147, 194, 146, 147, 195, 131,
    147, 195, 131, 132, 195, 131, 131, 210, 146, 147, 195, 131,
    131,  81, 115, 131, 131,  66, 115, 131, 116,  65, 130, 131,
    131,  66, 115, 131, 131,  65, 131, 131, 146,  49, 146, 146,
    180,   0,  53,  32,  59,  27,   0,  47,  83, 102, 177,  34,
     50,  67, 146,  50,  18,  99, 129,  68, 115, 129,  52, 131,
    114,  51, 147, 113,  67, 147, 194, 147, 195, 147, 195, 132,
    195, 131, 210, 147, 195, 131,  81, 115, 131,  66, 115, 116,
     65, 130, 131,  66, 115, 131,  65, 131, 146,  49, 146, 180,
      0,  38,  16,  43,  21,   0,  37, 101, 227,  51, 178,  99,
    146, 130, 131, 131,  99, 147,  99, 147,  83, 163,  83, 163,
     68, 148,  67, 163,  83, 163,  83, 148,  83, 147,  99, 131,
    130, 130, 147,  98, 179,  51, 229,   0,  30,  48,  72,  26,
      0,  46,  36,  84, 194,  34,  34,  50, 177,  50,  17,  98,
    146,  51, 115, 129,  67, 115, 129,  66, 131, 114,  51, 131,
    195, 131, 194, 132, 194, 132, 179, 131, 195, 131, 194, 131,
    210, 131, 195, 115, 211, 114, 228,  82, 242,  18,  50, 243,
     36, 240,  35, 240, 130, 240, 146, 240, 131, 240, 131, 240,
    131, 240, 130, 240, 131, 240,  89,   0,   8,  80,  64,  21,
      0,  37, 100,  65, 162,  50,  34, 146,  84, 146, 115, 131,
    115, 115, 131, 115, 130, 115, 131, 115, 131, 100, 131, 100,
    130, 115, 131, 115, 131, 115, 131, 115, 115, 146, 100, 146,
    100, 162,  50,  19, 180,  50, 240,  51, 240,  51, 240,  51,
    240,  50, 240,  51, 240,  51, 240,  51, 240,  51, 234,   0,
      6,  16,  48,  21,   0,  37,  19,  85, 113,  34,  34,  66,
     81,  53,  67,  81,  52,  82,  82,  51, 209,  67, 240,  50,
    240,  51, 240,  51, 240,  51, 240,  50, 240,  51, 240,  51,
    240,  50, 240,  66, 240,  51, 240,  51, 240,  50, 240,  66,
      0,  31,  40,  20,   0,  36,   6, 194,  82, 162, 114, 130,
    130, 115, 100, 115,  99, 131, 240,  37, 240,  24, 217, 216,
    240,  20, 240,  35,  98, 147,  83, 147,  83, 131,  97, 162,
    130,  99, 167,   0,  28, 112,  41,  16,   0,  11,   2, 211,
    211, 210, 211, 211, 211, 210, 211, 140, 147, 210, 211, 211,
    211, 195, 211, 211, 195, 211, 211, 211,  82,  83,  97,  99,
     82,  99,  81, 115,  65, 146,  50, 164,   0,  23,  16,  58,
     25,   0,  44,  36, 146, 145,  35, 115, 129,  51, 115, 114,
     51, 114, 129,  67,  99, 114,  52,  99, 113,  67, 115, 195,
    114, 195, 115, 195, 115, 195, 115, 180, 114, 195, 115,  65,
    115, 115,  50, 115, 114,  65, 131,  99,  65, 131,  99,  49,
    163,  50,  18,  49, 181,  68,   0,  35,  32,  51,  22,   0,
     39,   4, 114, 129,  35,  84,  97,  51,  84,  81,  67,  99,
     81,  67, 114,  66,  52, 114,  65,  67, 129, 163, 129, 147,
    130, 147, 130, 147, 129, 148, 129, 147, 130, 147, 129, 163,
    114, 163, 113, 194,  97, 211,  65, 240,  21,   0,  31,  80,
     71,  30,   0,  53,   4, 130,  82, 129,  35,  99,  68,  97,
     51,  99,  68,  81,  67,  83,  99,  81,  67,  83, 114,  66,
     52,  83, 114,  65,  67,  99, 113, 163,  83, 129, 147,  99,
    129, 147,  99, 114, 147,  99, 113, 147,  99, 129, 147,  99,
    114, 147,  99, 113, 163,  99, 113, 163,  99,  97, 194,  81,
     18,  82, 195,  50,  19,  50, 245,  69,   0,  42,  64,  54,
     24,   0,  42, 100,  69, 146,  51,  18,  50, 114,  84,  51,
     98,  99,  66, 113, 115, 194, 115, 240,  83, 240,  99, 240,
     99, 240,  98, 240,  99, 240,  99, 240,  99, 240,  83, 114,
    195, 113, 114,  67,  98,  99,  52,  82, 114,  50,  19,  50,
    148,  84,   0,  34,  32,  69,  23,   0,  40, 100, 146, 113,
     35, 115,  97,  51, 115,  82,  51, 114,  97,  67,  99,  82,
     52,  99,  81,  67, 115, 163,  99, 163, 115, 163, 115, 163,
    115, 148,  99, 163, 115, 163, 115, 163, 115, 163,  99, 179,
     84, 195,  53, 213,  35, 240,  82, 240,  83, 240,  83, 163,
     99, 179,  98, 195,  83, 193,  99, 210,  66, 240,  36,   0,
      7,  96,  52,  21,   0,  35,   3,  97, 150,  66, 150,  65,
    146,  51,  33, 161,  99, 162, 129, 240,  65, 240,  65, 240,
     65, 240,  65, 240,  65, 240,  65, 240,  65, 240,  65, 145,
    145, 145, 145, 161, 132, 114, 129,  35,  51, 129,  71, 130,
     85, 145, 115,   0,  27,  64,   9,  24,   0,  63,  15,   5,
      0,  66,  64,  10,  44,   0, 115,  79,  15,  10,   0, 121,
     64,  25,  17, 240, 240, 130,  82, 130,  67, 115,  66, 130,
     67, 114,  82, 115,  66, 130,  66, 130,  81, 145,  97,   0,
     71,  32,  16,  18,   0,   9,  67,  97,  98,  34,  65,  97,
     66,  34,  97,  99,   0,  82,
};

//*****************************************************************************
//
// The font definition for the 44 point Cm italic font.
//
//*****************************************************************************
const tFont g_sFontCm44i =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    39,

    //
    // The height of the font.
    //
    44,

    //
    // The baseline of the font.
    //
    33,

    //
    // The offset to each character in the font.
    //
    {
           0,    4,   40,   70,  192,  276,  403,  511,
         530,  620,  711,  759,  818,  837,  846,  857,
         949, 1016, 1077, 1153, 1224, 1307, 1373, 1440,
        1511, 1579, 1647, 1664, 1690, 1726, 1739, 1794,
        1848, 1959, 2045, 2118, 2207, 2285, 2363, 2438,
        2527, 2621, 2684, 2753, 2850, 2917, 3064, 3178,
        3273, 3343, 3468, 3550, 3624, 3699, 3772, 3860,
        3991, 4088, 4165, 4234, 4323, 4356, 4445, 4462,
        4473, 4492, 4545, 4611, 4651, 4725, 4766, 4860,
        4924, 4998, 5041, 5110, 5185, 5228, 5308, 5367,
        5410, 5482, 5546, 5594, 5634, 5675, 5733, 5784,
        5855, 5909, 5978, 6030, 6039, 6049, 6074,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm44iData
};
