#include "fontResource.h"
/*************************************************************************************/
//
//                      字模文件
//     软件提供：哈迪斯2001（Hades2001）  @2018/09/10
//     Mail: 1521377294@qq.com
//     编码： ASCII
//     字体： (ASC16)8x16 Ascii
//     字模水平像素 ： 8
//     字模垂直像素 ： 16
//     字模扫描模式 ： 逐行式
//     字模储存模式 ： 高位在先
//     定位方式 ：( Ascii码 - 0x20 ) x 16
//
/************************************************************************************/
const unsigned char FontLib8x16[] = {

    /* 0x00 [   ] [ 0 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x01 [ ! ] [ 1 ] */
    0x00,
    0x00,
    0x18,
    0x3C,
    0x3C,
    0x3C,
    0x18,
    0x18,
    0x18,
    0x00,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x02 [ " ] [ 2 ] */
    0x00,
    0x66,
    0x66,
    0x66,
    0x24,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x03 [ # ] [ 3 ] */
    0x00,
    0x00,
    0x00,
    0x6C,
    0x6C,
    0xFE,
    0x6C,
    0x6C,
    0x6C,
    0xFE,
    0x6C,
    0x6C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x04 [ $ ] [ 4 ] */
    0x18,
    0x18,
    0x7C,
    0xC6,
    0xC2,
    0xC0,
    0x7C,
    0x06,
    0x06,
    0x86,
    0xC6,
    0x7C,
    0x18,
    0x18,
    0x00,
    0x00,

    /* 0x05 [ % ] [ 5 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0xC2,
    0xC6,
    0x0C,
    0x18,
    0x30,
    0x60,
    0xC6,
    0x86,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x06 [ & ] [ 6 ] */
    0x00,
    0x00,
    0x38,
    0x6C,
    0x6C,
    0x38,
    0x76,
    0xDC,
    0xCC,
    0xCC,
    0xCC,
    0x76,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x07 [ ' ] [ 7 ] */
    0x00,
    0x30,
    0x30,
    0x30,
    0x60,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x08 [ ( ] [ 8 ] */
    0x00,
    0x00,
    0x0C,
    0x18,
    0x30,
    0x30,
    0x30,
    0x30,
    0x30,
    0x30,
    0x18,
    0x0C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x09 [ ) ] [ 9 ] */
    0x00,
    0x00,
    0x30,
    0x18,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x18,
    0x30,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x0A [ * ] [ 10 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x66,
    0x3C,
    0xFF,
    0x3C,
    0x66,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x0B [ + ] [ 11 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x18,
    0x18,
    0x7E,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x0C [ , ] [ 12 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x18,
    0x18,
    0x18,
    0x30,
    0x00,
    0x00,
    0x00,

    /* 0x0D [ - ] [ 13 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xFE,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x0E [ . ] [ 14 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x0F [ / ] [ 15 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x06,
    0x0C,
    0x18,
    0x30,
    0x60,
    0xC0,
    0x80,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x10 [ 0 ] [ 16 ] */
    0x00,
    0x00,
    0x38,
    0x6C,
    0xC6,
    0xC6,
    0xD6,
    0xD6,
    0xC6,
    0xC6,
    0x6C,
    0x38,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x11 [ 1 ] [ 17 ] */
    0x00,
    0x00,
    0x18,
    0x38,
    0x78,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x7E,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x12 [ 2 ] [ 18 ] */
    0x00,
    0x00,
    0x7C,
    0xC6,
    0x06,
    0x0C,
    0x18,
    0x30,
    0x60,
    0xC0,
    0xC6,
    0xFE,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x13 [ 3 ] [ 19 ] */
    0x00,
    0x00,
    0x7C,
    0xC6,
    0x06,
    0x06,
    0x3C,
    0x06,
    0x06,
    0x06,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x14 [ 4 ] [ 20 ] */
    0x00,
    0x00,
    0x0C,
    0x1C,
    0x3C,
    0x6C,
    0xCC,
    0xFE,
    0x0C,
    0x0C,
    0x0C,
    0x1E,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x15 [ 5 ] [ 21 ] */
    0x00,
    0x00,
    0xFE,
    0xC0,
    0xC0,
    0xC0,
    0xFC,
    0x06,
    0x06,
    0x06,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x16 [ 6 ] [ 22 ] */
    0x00,
    0x00,
    0x38,
    0x60,
    0xC0,
    0xC0,
    0xFC,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x17 [ 7 ] [ 23 ] */
    0x00,
    0x00,
    0xFE,
    0xC6,
    0x06,
    0x06,
    0x0C,
    0x18,
    0x30,
    0x30,
    0x30,
    0x30,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x18 [ 8 ] [ 24 ] */
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC6,
    0xC6,
    0x7C,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x19 [ 9 ] [ 25 ] */
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC6,
    0xC6,
    0x7E,
    0x06,
    0x06,
    0x06,
    0x0C,
    0x78,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x1A [ : ] [ 26 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x1B [ ; ] [ 27 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00,
    0x18,
    0x18,
    0x30,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x1C [ < ] [ 28 ] */
    0x00,
    0x00,
    0x00,
    0x06,
    0x0C,
    0x18,
    0x30,
    0x60,
    0x30,
    0x18,
    0x0C,
    0x06,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x1D [ = ] [ 29 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x7E,
    0x00,
    0x00,
    0x7E,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x1E [ > ] [ 30 ] */
    0x00,
    0x00,
    0x00,
    0x60,
    0x30,
    0x18,
    0x0C,
    0x06,
    0x0C,
    0x18,
    0x30,
    0x60,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x1F [ ? ] [ 31 ] */
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC6,
    0x0C,
    0x18,
    0x18,
    0x18,
    0x00,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x20 [ @ ] [ 32 ] */
    0x00,
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC6,
    0xDE,
    0xDE,
    0xDE,
    0xDC,
    0xC0,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x21 [ A ] [ 33 ] */
    0x00,
    0x00,
    0x10,
    0x38,
    0x6C,
    0xC6,
    0xC6,
    0xFE,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x22 [ B ] [ 34 ] */
    0x00,
    0x00,
    0xFC,
    0x66,
    0x66,
    0x66,
    0x7C,
    0x66,
    0x66,
    0x66,
    0x66,
    0xFC,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x23 [ C ] [ 35 ] */
    0x00,
    0x00,
    0x3C,
    0x66,
    0xC2,
    0xC0,
    0xC0,
    0xC0,
    0xC0,
    0xC2,
    0x66,
    0x3C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x24 [ D ] [ 36 ] */
    0x00,
    0x00,
    0xF8,
    0x6C,
    0x66,
    0x66,
    0x66,
    0x66,
    0x66,
    0x66,
    0x6C,
    0xF8,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x25 [ E ] [ 37 ] */
    0x00,
    0x00,
    0xFE,
    0x66,
    0x62,
    0x68,
    0x78,
    0x68,
    0x60,
    0x62,
    0x66,
    0xFE,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x26 [ F ] [ 38 ] */
    0x00,
    0x00,
    0xFE,
    0x66,
    0x62,
    0x68,
    0x78,
    0x68,
    0x60,
    0x60,
    0x60,
    0xF0,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x27 [ G ] [ 39 ] */
    0x00,
    0x00,
    0x3C,
    0x66,
    0xC2,
    0xC0,
    0xC0,
    0xDE,
    0xC6,
    0xC6,
    0x66,
    0x3A,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x28 [ H ] [ 40 ] */
    0x00,
    0x00,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xFE,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x29 [ I ] [ 41 ] */
    0x00,
    0x00,
    0x3C,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x3C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x2A [ J ] [ 42 ] */
    0x00,
    0x00,
    0x1E,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0xCC,
    0xCC,
    0xCC,
    0x78,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x2B [ K ] [ 43 ] */
    0x00,
    0x00,
    0xE6,
    0x66,
    0x66,
    0x6C,
    0x78,
    0x78,
    0x6C,
    0x66,
    0x66,
    0xE6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x2C [ L ] [ 44 ] */
    0x00,
    0x00,
    0xF0,
    0x60,
    0x60,
    0x60,
    0x60,
    0x60,
    0x60,
    0x62,
    0x66,
    0xFE,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x2D [ M ] [ 45 ] */
    0x00,
    0x00,
    0xC6,
    0xEE,
    0xFE,
    0xFE,
    0xD6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x2E [ N ] [ 46 ] */
    0x00,
    0x00,
    0xC6,
    0xE6,
    0xF6,
    0xFE,
    0xDE,
    0xCE,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x2F [ O ] [ 47 ] */
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x30 [ P ] [ 48 ] */
    0x00,
    0x00,
    0xFC,
    0x66,
    0x66,
    0x66,
    0x7C,
    0x60,
    0x60,
    0x60,
    0x60,
    0xF0,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x31 [ Q ] [ 49 ] */
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xD6,
    0xDE,
    0x7C,
    0x0C,
    0x0E,
    0x00,
    0x00,

    /* 0x32 [ R ] [ 50 ] */
    0x00,
    0x00,
    0xFC,
    0x66,
    0x66,
    0x66,
    0x7C,
    0x6C,
    0x66,
    0x66,
    0x66,
    0xE6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x33 [ S ] [ 51 ] */
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC6,
    0x60,
    0x38,
    0x0C,
    0x06,
    0xC6,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x34 [ T ] [ 52 ] */
    0x00,
    0x00,
    0x7E,
    0x7E,
    0x5A,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x3C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x35 [ U ] [ 53 ] */
    0x00,
    0x00,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x36 [ V ] [ 54 ] */
    0x00,
    0x00,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x6C,
    0x38,
    0x10,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x37 [ W ] [ 55 ] */
    0x00,
    0x00,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xD6,
    0xD6,
    0xD6,
    0xFE,
    0xEE,
    0x6C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x38 [ X ] [ 56 ] */
    0x00,
    0x00,
    0xC6,
    0xC6,
    0x6C,
    0x7C,
    0x38,
    0x38,
    0x7C,
    0x6C,
    0xC6,
    0xC6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x39 [ Y ] [ 57 ] */
    0x00,
    0x00,
    0x66,
    0x66,
    0x66,
    0x66,
    0x3C,
    0x18,
    0x18,
    0x18,
    0x18,
    0x3C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x3A [ Z ] [ 58 ] */
    0x00,
    0x00,
    0xFE,
    0xC6,
    0x86,
    0x0C,
    0x18,
    0x30,
    0x60,
    0xC2,
    0xC6,
    0xFE,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x3B [ [ ] [ 59 ] */
    0x00,
    0x00,
    0x3C,
    0x30,
    0x30,
    0x30,
    0x30,
    0x30,
    0x30,
    0x30,
    0x30,
    0x3C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x3C [ \ ] [ 60 ] */
    0x00,
    0x00,
    0x00,
    0x80,
    0xC0,
    0xE0,
    0x70,
    0x38,
    0x1C,
    0x0E,
    0x06,
    0x02,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x3D [ ] ] [ 61 ] */
    0x00,
    0x00,
    0x3C,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x0C,
    0x3C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x3E [ ^ ] [ 62 ] */
    0x10,
    0x38,
    0x6C,
    0xC6,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x3F [ _ ] [ 63 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xFF,
    0x00,
    0x00,

    /* 0x40 [ ` ] [ 64 ] */
    0x30,
    0x30,
    0x18,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x41 [ a ] [ 65 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x78,
    0x0C,
    0x7C,
    0xCC,
    0xCC,
    0xCC,
    0x76,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x42 [ b ] [ 66 ] */
    0x00,
    0x00,
    0xE0,
    0x60,
    0x60,
    0x78,
    0x6C,
    0x66,
    0x66,
    0x66,
    0x66,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x43 [ c ] [ 67 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC0,
    0xC0,
    0xC0,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x44 [ d ] [ 68 ] */
    0x00,
    0x00,
    0x1C,
    0x0C,
    0x0C,
    0x3C,
    0x6C,
    0xCC,
    0xCC,
    0xCC,
    0xCC,
    0x76,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x45 [ e ] [ 69 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xFE,
    0xC0,
    0xC0,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x46 [ f ] [ 70 ] */
    0x00,
    0x00,
    0x38,
    0x6C,
    0x64,
    0x60,
    0xF0,
    0x60,
    0x60,
    0x60,
    0x60,
    0xF0,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x47 [ g ] [ 71 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x76,
    0xCC,
    0xCC,
    0xCC,
    0xCC,
    0xCC,
    0x7C,
    0x0C,
    0xCC,
    0x78,
    0x00,

    /* 0x48 [ h ] [ 72 ] */
    0x00,
    0x00,
    0xE0,
    0x60,
    0x60,
    0x6C,
    0x76,
    0x66,
    0x66,
    0x66,
    0x66,
    0xE6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x49 [ i ] [ 73 ] */
    0x00,
    0x00,
    0x18,
    0x18,
    0x00,
    0x38,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x3C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x4A [ j ] [ 74 ] */
    0x00,
    0x00,
    0x06,
    0x06,
    0x00,
    0x0E,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x06,
    0x66,
    0x66,
    0x3C,
    0x00,

    /* 0x4B [ k ] [ 75 ] */
    0x00,
    0x00,
    0xE0,
    0x60,
    0x60,
    0x66,
    0x6C,
    0x78,
    0x78,
    0x6C,
    0x66,
    0xE6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x4C [ l ] [ 76 ] */
    0x00,
    0x00,
    0x38,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x3C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x4D [ m ] [ 77 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xEC,
    0xFE,
    0xD6,
    0xD6,
    0xD6,
    0xD6,
    0xC6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x4E [ n ] [ 78 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xDC,
    0x66,
    0x66,
    0x66,
    0x66,
    0x66,
    0x66,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x4F [ o ] [ 79 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x7C,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x50 [ p ] [ 80 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xDC,
    0x66,
    0x66,
    0x66,
    0x66,
    0x66,
    0x7C,
    0x60,
    0x60,
    0xF0,
    0x00,

    /* 0x51 [ q ] [ 81 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x76,
    0xCC,
    0xCC,
    0xCC,
    0xCC,
    0xCC,
    0x7C,
    0x0C,
    0x0C,
    0x1E,
    0x00,

    /* 0x52 [ r ] [ 82 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xDC,
    0x76,
    0x66,
    0x60,
    0x60,
    0x60,
    0xF0,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x53 [ s ] [ 83 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x7C,
    0xC6,
    0x60,
    0x38,
    0x0C,
    0xC6,
    0x7C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x54 [ t ] [ 84 ] */
    0x00,
    0x00,
    0x10,
    0x30,
    0x30,
    0xFC,
    0x30,
    0x30,
    0x30,
    0x30,
    0x36,
    0x1C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x55 [ u ] [ 85 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xCC,
    0xCC,
    0xCC,
    0xCC,
    0xCC,
    0xCC,
    0x76,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x56 [ v ] [ 86 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x66,
    0x66,
    0x66,
    0x66,
    0x66,
    0x3C,
    0x18,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x57 [ w ] [ 87 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xC6,
    0xC6,
    0xD6,
    0xD6,
    0xD6,
    0xFE,
    0x6C,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x58 [ x ] [ 88 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xC6,
    0x6C,
    0x38,
    0x38,
    0x38,
    0x6C,
    0xC6,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x59 [ y ] [ 89 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0xC6,
    0x7E,
    0x06,
    0x0C,
    0xF8,
    0x00,

    /* 0x5A [ z ] [ 90 ] */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0xFE,
    0xCC,
    0x18,
    0x30,
    0x60,
    0xC6,
    0xFE,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x5B [ { ] [ 91 ] */
    0x00,
    0x00,
    0x0E,
    0x18,
    0x18,
    0x18,
    0x70,
    0x18,
    0x18,
    0x18,
    0x18,
    0x0E,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x5C [ | ] [ 92 ] */
    0x00,
    0x00,
    0x18,
    0x18,
    0x18,
    0x18,
    0x00,
    0x18,
    0x18,
    0x18,
    0x18,
    0x18,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x5D [ } ] [ 93 ] */
    0x00,
    0x00,
    0x70,
    0x18,
    0x18,
    0x18,
    0x0E,
    0x18,
    0x18,
    0x18,
    0x18,
    0x70,
    0x00,
    0x00,
    0x00,
    0x00,

    /* 0x5E [ ~ ] [ 94 ] */
    0x00,
    0x00,
    0x76,
    0xDC,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,

};

Ink_eSPI_font_t AsciiFont8x16(8, 16, FontLib8x16);