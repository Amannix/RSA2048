/*****************************************************************************
Filename    : keys.h
Author      : Terrantsh (tanshanhe@foxmail.com)
Date        : 2018-8-28 10:30:47
Description : 保存公钥私钥
*****************************************************************************/

#include <stdint.h>

#define KEY_M_BITS      2048


// KEY_2048
uint8_t key_m[] = {
0xb7, 0xe9, 0x74, 0x4b, 0x45, 0xfa, 0xa6, 0x20, 0xd3, 0x1c, 0x30, 0xe9, 0x63, 0x86, 0xe9, 0xcd,
0x5f, 0xb9, 0x93, 0xde, 0xca, 0x45, 0xc9, 0xd6, 0x08, 0x94, 0xf7, 0x7d, 0xb9, 0xee, 0xa9, 0xd0,
0x78, 0x45, 0x76, 0x94, 0x80, 0x9d, 0xf7, 0x05, 0x24, 0xd7, 0x30, 0xe2, 0xc0, 0x0f, 0x04, 0x6e,
0x60, 0x53, 0x23, 0xbd, 0x50, 0x03, 0xbf, 0x2c, 0xa9, 0xbb, 0xb4, 0x5c, 0xc5, 0x11, 0x5a, 0x1d,
0xce, 0x25, 0x7d, 0x42, 0x03, 0x4f, 0x7e, 0x1c, 0x7a, 0x3e, 0x1a, 0x68, 0xe8, 0x9a, 0x00, 0x10,
0x8d, 0x18, 0x28, 0xac, 0x26, 0xbd, 0x71, 0xae, 0x4a, 0xc9, 0xb9, 0x23, 0x0b, 0x9b, 0xc1, 0x01,
0x67, 0x46, 0xa9, 0x01, 0x5e, 0x70, 0xf1, 0xd9, 0xbd, 0x7f, 0x56, 0x4b, 0x97, 0x61, 0x64, 0xff,
0xc1, 0xd9, 0x6e, 0x93, 0xab, 0x40, 0x66, 0xd5, 0xcb, 0xf4, 0x02, 0xf5, 0xfc, 0x53, 0x11, 0x51,
0xa9, 0x80, 0x5c, 0x07, 0x16, 0xab, 0xcb, 0x98, 0x25, 0xfe, 0x02, 0xf3, 0x89, 0x7e, 0x57, 0x91,
0x7a, 0x64, 0xcc, 0x2c, 0x7a, 0x71, 0xe8, 0x83, 0x33, 0x59, 0x0a, 0xa9, 0x59, 0x23, 0xcf, 0x4a,
0x6b, 0xe4, 0x24, 0x1a, 0xf7, 0x8c, 0xa9, 0x04, 0x5d, 0x65, 0xb6, 0x74, 0x87, 0x19, 0x42, 0x49,
0xe3, 0x69, 0x03, 0xdd, 0xa4, 0xc9, 0x75, 0xfe, 0xa7, 0x3c, 0x07, 0xc1, 0x91, 0x67, 0x54, 0x45,
0xfe, 0x5f, 0xcf, 0x45, 0x72, 0xf8, 0xbd, 0x47, 0x95, 0xba, 0x81, 0xa7, 0x54, 0x50, 0x55, 0x29,
0x92, 0x2f, 0x81, 0x82, 0x71, 0x9b, 0x43, 0x1c, 0xeb, 0x27, 0x16, 0xca, 0x87, 0xe2, 0xba, 0x83,
0xa0, 0x1e, 0x85, 0xef, 0x75, 0xe4, 0x63, 0x88, 0x2d, 0x0b, 0x53, 0x76, 0xb6, 0xb3, 0xd6, 0x68,
0x19, 0xe2, 0x6c, 0x2b, 0x67, 0x4f, 0x0a, 0x9d, 0xde, 0xfe, 0x93, 0x42, 0x43, 0xce, 0x87, 0xad};

uint8_t key_e[] = {0x01, 0x00, 0x01}; //65537


uint8_t key_pe[] = {
        0x67, 0xbf, 0xc8, 0x3e, 0x2a, 0x95, 0x12, 0xa0, 0xd3, 0xd7, 0x44, 0x74, 0x75, 0x14, 0x07, 0xd3,
        0x36, 0xdc, 0x2e, 0xe1, 0xf1, 0x03, 0xdb, 0xaf, 0xe5, 0x99, 0x7b, 0xe0, 0xae, 0x42, 0x48, 0x03,
        0xf5, 0xc5, 0x61, 0xf6, 0xb6, 0x73, 0xe6, 0x85, 0x3d, 0x5a, 0x34, 0x16, 0xc6, 0xb7, 0xf2, 0x0c,
        0xfe, 0x44, 0x08, 0x96, 0x64, 0x8c, 0x28, 0x8d, 0xde, 0x96, 0xa8, 0x51, 0xe9, 0x4e, 0x37, 0xa3,
        0x36, 0xc7, 0x09, 0x59, 0x73, 0x1a, 0xa6, 0x0f, 0x14, 0x9a, 0xf2, 0x35, 0x1a, 0x7a, 0xbd, 0xec,
        0x98, 0x5b, 0xf7, 0x9d, 0xde, 0x20, 0xe2, 0xff, 0xaa, 0xeb, 0x0f, 0x89, 0x08, 0xa4, 0x6e, 0x06,
        0x07, 0xa7, 0xe1, 0xf1, 0x86, 0xc0, 0x7a, 0x7f, 0x16, 0x1a, 0xbe, 0xa8, 0xd8, 0x16, 0x36, 0x6e,
        0xdd, 0x81, 0x76, 0x92, 0xd1, 0x79, 0xfc, 0x49, 0x41, 0xcc, 0x3e, 0xdb, 0x5b, 0xe3, 0xd4, 0x91,
        0x62, 0xfa, 0x26, 0x04, 0x1b, 0x1f, 0x5e, 0x2b, 0xd4, 0x7c, 0xb2, 0x68, 0x5c, 0xec, 0x40, 0xf2,
        0xc6, 0xe2, 0x83, 0x7d, 0x71, 0xe0, 0xf9, 0xfa, 0x41, 0x24, 0x8d, 0x36, 0x1c, 0xe8, 0xc4, 0x05,
        0x38, 0xab, 0x23, 0x37, 0xd1, 0xc8, 0xc6, 0xad, 0xe5, 0xde, 0x98, 0xd5, 0x0a, 0x7e, 0xaa, 0xba,
        0x54, 0x5a, 0x63, 0xd5, 0xe1, 0x49, 0xbe, 0x84, 0x0d, 0xde, 0x66, 0x71, 0x78, 0xc8, 0xdf, 0x5c,
        0x53, 0x88, 0xea, 0x00, 0xc1, 0x8d, 0xaf, 0x81, 0x9f, 0x0a, 0xc4, 0xa0, 0x6e, 0xb0, 0xf7, 0xda,
        0xa1, 0x22, 0x72, 0x46, 0x65, 0x68, 0x3b, 0x24, 0xb7, 0x89, 0xd0, 0xce, 0xde, 0x3a, 0xf3, 0xd5,
        0x07, 0x94, 0xd7, 0x17, 0x9c, 0xc7, 0x90, 0x77, 0x7b, 0x6c, 0x7a, 0x21, 0x72, 0xe5, 0x17, 0x25,
        0x8a, 0x84, 0x20, 0x01, 0x1b, 0x9b, 0xe5, 0x96, 0x5c, 0x17, 0x0b, 0xde, 0x85, 0x38, 0xcf, 0x95};

uint8_t key_p1[] = {
        0xdf, 0xd1, 0x18, 0x63, 0x6f, 0x2c, 0x1b, 0x14, 0x3b, 0x95, 0x3d, 0x56, 0xdd, 0x5b, 0x6f, 0x01,
        0x6e, 0xf9, 0x4c, 0x2b, 0xcb, 0xeb, 0xdd, 0x89, 0xb0, 0x8e, 0xdd, 0xf3, 0xf0, 0x0f, 0xf7, 0x71,
        0x75, 0xd0, 0x7e, 0xb0, 0xbe, 0x6b, 0x51, 0x3a, 0x8c, 0xcf, 0x9b, 0x81, 0xfa, 0x34, 0x4f, 0xfc,
        0x98, 0xd6, 0x65, 0xb1, 0x2f, 0x82, 0x55, 0xa8, 0xd1, 0xb5, 0x1a, 0xaf, 0x7b, 0xda, 0x6f, 0x02,
        0x43, 0x14, 0x7e, 0x69, 0x52, 0x11, 0x9e, 0xa9, 0x95, 0x44, 0xb1, 0x19, 0x7f, 0x7b, 0x7c, 0x67,
        0x30, 0x11, 0x67, 0x88, 0x9d, 0xb1, 0xb5, 0x6e, 0x6a, 0x69, 0x17, 0x64, 0x57, 0xdc, 0x5e, 0xfd,
        0x33, 0xae, 0x84, 0xdc, 0x2a, 0x73, 0x54, 0x8d, 0xbe, 0x04, 0xc7, 0x6f, 0x6e, 0x7f, 0x31, 0xf1,
        0x04, 0xb3, 0x6b, 0xf7, 0x9f, 0x62, 0x15, 0xb0, 0x75, 0x12, 0xa8, 0x4f, 0x02, 0x4a, 0xcb, 0xd7};

uint8_t key_p2[] = {
        0xd2, 0x5b, 0x6c, 0x9d, 0xa4, 0x9b, 0xa9, 0x6e, 0x29, 0x67, 0x3f, 0xd1, 0xc2, 0x53, 0x1a, 0x50,
        0x5b, 0x0a, 0x7c, 0xc1, 0x64, 0x01, 0xff, 0x20, 0x20, 0x8c, 0x68, 0x32, 0xb1, 0x1a, 0xfb, 0x8e,
        0x73, 0x54, 0x29, 0x3b, 0xe7, 0xfc, 0x94, 0x0f, 0x63, 0x06, 0xa2, 0x87, 0x56, 0xa4, 0xe3, 0x48,
        0x75, 0x21, 0xb7, 0x10, 0x97, 0xfc, 0x3a, 0x1d, 0xb3, 0xe2, 0xab, 0xe6, 0x4b, 0x04, 0x8d, 0xde,
        0xfb, 0xac, 0xd3, 0xe4, 0x3d, 0x71, 0x20, 0xda, 0x04, 0xaa, 0xe2, 0x98, 0xf4, 0xe3, 0x6c, 0xf4,
        0xfa, 0xc3, 0xa7, 0x1f, 0x73, 0x30, 0x4f, 0x3c, 0xfe, 0x8a, 0x3e, 0x21, 0x06, 0xe7, 0x02, 0xb4,
        0xe5, 0x9d, 0x4e, 0x37, 0x64, 0x67, 0x15, 0xf3, 0x64, 0x73, 0xcf, 0x30, 0x2d, 0x54, 0x19, 0x76,
        0x22, 0xee, 0x44, 0xb5, 0xcb, 0x8f, 0x94, 0xa0, 0xf5, 0x15, 0x91, 0x68, 0x56, 0xcc, 0x38, 0x1b};

uint8_t key_e1[] = {
        0x7e, 0x33, 0xcf, 0x06, 0xb2, 0x77, 0x32, 0x45, 0xb4, 0x5b, 0x30, 0x9d, 0x3c, 0x70, 0x04, 0x25,
        0xd0, 0xc7, 0x6d, 0xb5, 0xfc, 0x64, 0x61, 0x24, 0xf4, 0x93, 0x7a, 0x7f, 0xc4, 0x4b, 0x9c, 0x81,
        0x33, 0xa7, 0x7e, 0xe8, 0x76, 0x56, 0xd9, 0x14, 0xa4, 0xb5, 0xa3, 0xc0, 0x24, 0xaf, 0x3e, 0xb2,
        0xf6, 0x13, 0x5e, 0x80, 0x0c, 0x83, 0xf7, 0x7d, 0x1b, 0xd2, 0x7c, 0xdb, 0x9a, 0x80, 0xce, 0xbb,
        0x7d, 0xcb, 0x9e, 0x84, 0x10, 0xac, 0xb2, 0xc4, 0x78, 0xd0, 0xa4, 0xf3, 0xf5, 0xb8, 0x51, 0xab,
        0x75, 0xa5, 0x3a, 0xb6, 0x04, 0x05, 0x62, 0x82, 0x82, 0x2a, 0x03, 0xf0, 0xa6, 0xc2, 0x32, 0x25,
        0x9f, 0xf0, 0xb6, 0x25, 0xd7, 0x21, 0xf4, 0xf9, 0x7f, 0xbd, 0xfe, 0x1e, 0xcd, 0x35, 0x97, 0x99,
        0x89, 0xc7, 0x0a, 0x08, 0x34, 0xad, 0x00, 0x01, 0xe1, 0xe1, 0xc5, 0x59, 0xd7, 0xb7, 0x09, 0x3d};

uint8_t key_e2[] = {
        0x87, 0xf8, 0xa4, 0x9a, 0xb9, 0x9e, 0x0c, 0xc4, 0xb2, 0x6a, 0x94, 0xec, 0x07, 0x4a, 0x24, 0x46,
        0x30, 0xb2, 0xf4, 0xb5, 0x24, 0xe9, 0xcd, 0x79, 0x7c, 0xd0, 0x85, 0x41, 0xcf, 0x0c, 0xfb, 0xf1,
        0xb6, 0x46, 0x7e, 0x68, 0xc4, 0xa9, 0x95, 0x22, 0xe5, 0x05, 0x92, 0xe5, 0x1c, 0x72, 0x74, 0x9f,
        0x8f, 0x66, 0xfd, 0xa7, 0xf2, 0x36, 0x0d, 0x72, 0xc9, 0xa6, 0x09, 0x2b, 0x50, 0xee, 0x5e, 0xad,
        0xf5, 0xcc, 0x5f, 0x22, 0xb7, 0x3c, 0x7a, 0xd9, 0xb2, 0x0e, 0xab, 0x6d, 0xe7, 0x4d, 0x62, 0x4e,
        0x70, 0x11, 0x2b, 0xe3, 0xbe, 0x57, 0x49, 0xc0, 0xc9, 0x5f, 0x9e, 0x8d, 0x46, 0xa2, 0xe8, 0x32,
        0xfa, 0x00, 0xd6, 0x60, 0x23, 0xbc, 0x26, 0x8a, 0x2f, 0x32, 0x54, 0x88, 0x75, 0xa4, 0x58, 0xd8,
        0xed, 0xf7, 0x49, 0xde, 0xa0, 0xf7, 0xec, 0x40, 0xa6, 0x6b, 0x0c, 0x94, 0x7f, 0x16, 0x7e, 0x65};

uint8_t key_c[] = {
        0x46, 0x53, 0x1a, 0x19, 0x21, 0x2d, 0xfe, 0x36, 0x73, 0x85, 0x3a, 0x71, 0xa2, 0x84, 0xfa, 0x5c,
        0x35, 0x76, 0xdb, 0x10, 0xf0, 0x34, 0x86, 0x14, 0xa9, 0x70, 0x1c, 0xd8, 0x73, 0xdf, 0x2b, 0xd0,
        0x43, 0xd9, 0x73, 0xd2, 0x26, 0x1f, 0xb2, 0xba, 0x9d, 0x82, 0x57, 0x9b, 0x4c, 0xcd, 0x4a, 0xbc,
        0xf2, 0x1f, 0xfa, 0xf5, 0x5b, 0x2a, 0x8d, 0x6c, 0x20, 0x39, 0xdb, 0xf8, 0x55, 0x19, 0x11, 0x15,
        0xb4, 0xa9, 0xa1, 0x00, 0xdc, 0x93, 0x31, 0x53, 0xc5, 0xc6, 0x17, 0xcb, 0x36, 0xe9, 0x00, 0xd8,
        0x6e, 0xc8, 0x75, 0x69, 0x6a, 0x85, 0x4d, 0x42, 0x01, 0x2a, 0x86, 0x36, 0x59, 0xfc, 0xd7, 0x0b,
        0x57, 0x8a, 0x76, 0x7d, 0xc0, 0xbc, 0x43, 0x8a, 0x4d, 0xb1, 0x14, 0x07, 0x4d, 0x28, 0x5a, 0xec,
        0x30, 0x28, 0x93, 0x6e, 0x68, 0x14, 0x1a, 0xc0, 0x17, 0x6c, 0xe1, 0x7c, 0x39, 0x19, 0xe6, 0xd8};

// END