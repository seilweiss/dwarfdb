



void iBoxBoundVec(xBox* o, xBox* b, xVec3* v);
void iBoxInitBoundVec(xBox* b, xVec3* v);
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx);
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx);
uint32 ClipPlane(float32 denom, float32 numer, float32* t_in, float32* t_out);
void iBoxIsectVec(xBox* b, xVec3* v, xIsect* isx);
void iBoxVecDist(xBox* box, xVec3* v, xIsect* isx);
void iCylinderIsectVec(xCylinder* c, xVec3* v, xIsect* isx);
void iSphereBoundSphere(xSphere* o, xSphere* a, xSphere* b);
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v);
void iSphereInitBoundOBB(xSphere* s, xBox* b, xMat4x3* m);
void iSphereInitBoundBox(xSphere* s, xBox* b);
void iSphereInitBoundVec(xSphere* s, xVec3* v);
void iSphereIsectSphere(xSphere* s, xSphere* p, xIsect* isx);
void iSphereIsectRay(xSphere* s, xRay3* r, xIsect* isx);
void iSphereIsectVec(xSphere* s, xVec3* v, xIsect* isx);
void iMath3Init();

// iBoxBoundVec__FP4xBoxPC4xBoxPC5xVec3
// Start address: 0x4af8e0
void iBoxBoundVec(xBox* o, xBox* b, xVec3* v)
{
	// Line 1092, Address: 0x4af8e0, Func Offset: 0
	// Line 1097, Address: 0x4af8e8, Func Offset: 0x8
	// Line 1100, Address: 0x4af954, Func Offset: 0x74
	// Line 1103, Address: 0x4af9b4, Func Offset: 0xd4
	// Func End, Address: 0x4af9bc, Func Offset: 0xdc
}

// iBoxInitBoundVec__FP4xBoxPC5xVec3
// Start address: 0x4af9c0
void iBoxInitBoundVec(xBox* b, xVec3* v)
{
	// Line 1079, Address: 0x4af9c0, Func Offset: 0
	// Line 1080, Address: 0x4af9d8, Func Offset: 0x18
	// Line 1081, Address: 0x4af9e0, Func Offset: 0x20
	// Func End, Address: 0x4af9e8, Func Offset: 0x28
}

// iBoxIsectSphere__FPC4xBoxPC7xSphereP6xIsect
// Start address: 0x4af9f0
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx)
{
	uint32 xcode;
	uint32 ycode;
	uint32 zcode;
	// Line 982, Address: 0x4af9f0, Func Offset: 0
	// Line 996, Address: 0x4afa08, Func Offset: 0x18
	// Line 995, Address: 0x4afa14, Func Offset: 0x24
	// Line 997, Address: 0x4afa18, Func Offset: 0x28
	// Line 999, Address: 0x4afa88, Func Offset: 0x98
	// Line 1004, Address: 0x4afaa4, Func Offset: 0xb4
	// Line 1003, Address: 0x4afaa8, Func Offset: 0xb8
	// Line 1005, Address: 0x4afaac, Func Offset: 0xbc
	// Line 1007, Address: 0x4afb20, Func Offset: 0x130
	// Line 1012, Address: 0x4afb3c, Func Offset: 0x14c
	// Line 1011, Address: 0x4afb40, Func Offset: 0x150
	// Line 1013, Address: 0x4afb44, Func Offset: 0x154
	// Line 1015, Address: 0x4afbb8, Func Offset: 0x1c8
	// Line 1023, Address: 0x4afbd0, Func Offset: 0x1e0
	// Line 1024, Address: 0x4afc28, Func Offset: 0x238
	// Line 1026, Address: 0x4afc40, Func Offset: 0x250
	// Line 1027, Address: 0x4afc44, Func Offset: 0x254
	// Line 1026, Address: 0x4afc48, Func Offset: 0x258
	// Line 1027, Address: 0x4afc4c, Func Offset: 0x25c
	// Line 1026, Address: 0x4afc50, Func Offset: 0x260
	// Line 1030, Address: 0x4afc58, Func Offset: 0x268
	// Line 1026, Address: 0x4afc5c, Func Offset: 0x26c
	// Line 1028, Address: 0x4afc70, Func Offset: 0x280
	// Line 1027, Address: 0x4afc74, Func Offset: 0x284
	// Line 1028, Address: 0x4afc78, Func Offset: 0x288
	// Line 1027, Address: 0x4afc7c, Func Offset: 0x28c
	// Line 1028, Address: 0x4afc80, Func Offset: 0x290
	// Line 1027, Address: 0x4afc8c, Func Offset: 0x29c
	// Line 1028, Address: 0x4afc90, Func Offset: 0x2a0
	// Line 1029, Address: 0x4afcac, Func Offset: 0x2bc
	// Line 1031, Address: 0x4afccc, Func Offset: 0x2dc
	// Line 1001, Address: 0x4afcd4, Func Offset: 0x2e4
	// Line 1009, Address: 0x4afcdc, Func Offset: 0x2ec
	// Line 1017, Address: 0x4afce4, Func Offset: 0x2f4
	// Line 1023, Address: 0x4afcec, Func Offset: 0x2fc
	// Line 1034, Address: 0x4afcf8, Func Offset: 0x308
	// Line 1036, Address: 0x4afd04, Func Offset: 0x314
	// Line 1034, Address: 0x4afd08, Func Offset: 0x318
	// Line 1036, Address: 0x4afd0c, Func Offset: 0x31c
	// Line 1038, Address: 0x4afd18, Func Offset: 0x328
	// Line 1039, Address: 0x4afd1c, Func Offset: 0x32c
	// Line 1038, Address: 0x4afd20, Func Offset: 0x330
	// Line 1039, Address: 0x4afd2c, Func Offset: 0x33c
	// Line 1040, Address: 0x4afd30, Func Offset: 0x340
	// Func End, Address: 0x4afd44, Func Offset: 0x354
}

// iBoxIsectRay__FPC4xBoxPC5xRay3P6xIsect
// Start address: 0x4afd50
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx)
{
	float32 t_in;
	float32 t_out;
	// Line 823, Address: 0x4afd50, Func Offset: 0
	// Line 837, Address: 0x4afd54, Func Offset: 0x4
	// Line 823, Address: 0x4afd58, Func Offset: 0x8
	// Line 837, Address: 0x4afd78, Func Offset: 0x28
	// Line 823, Address: 0x4afd7c, Func Offset: 0x2c
	// Line 837, Address: 0x4afd84, Func Offset: 0x34
	// Line 840, Address: 0x4afd8c, Func Offset: 0x3c
	// Line 845, Address: 0x4afd9c, Func Offset: 0x4c
	// Line 844, Address: 0x4afdb0, Func Offset: 0x60
	// Line 853, Address: 0x4afdb4, Func Offset: 0x64
	// Line 844, Address: 0x4afdb8, Func Offset: 0x68
	// Line 853, Address: 0x4afdbc, Func Offset: 0x6c
	// Line 844, Address: 0x4afdc0, Func Offset: 0x70
	// Line 852, Address: 0x4afdc4, Func Offset: 0x74
	// Line 858, Address: 0x4afdc8, Func Offset: 0x78
	// Line 855, Address: 0x4afdcc, Func Offset: 0x7c
	// Line 852, Address: 0x4afdd0, Func Offset: 0x80
	// Line 853, Address: 0x4afdd8, Func Offset: 0x88
	// Line 852, Address: 0x4afddc, Func Offset: 0x8c
	// Line 853, Address: 0x4afde0, Func Offset: 0x90
	// Line 852, Address: 0x4afde4, Func Offset: 0x94
	// Line 854, Address: 0x4afdec, Func Offset: 0x9c
	// Line 855, Address: 0x4afdf0, Func Offset: 0xa0
	// Line 852, Address: 0x4afdf4, Func Offset: 0xa4
	// Line 858, Address: 0x4afdf8, Func Offset: 0xa8
	// Line 855, Address: 0x4afdfc, Func Offset: 0xac
	// Line 854, Address: 0x4afe00, Func Offset: 0xb0
	// Line 853, Address: 0x4afe04, Func Offset: 0xb4
	// Line 855, Address: 0x4afe08, Func Offset: 0xb8
	// Line 854, Address: 0x4afe0c, Func Offset: 0xbc
	// Line 856, Address: 0x4afe10, Func Offset: 0xc0
	// Line 855, Address: 0x4afe1c, Func Offset: 0xcc
	// Line 856, Address: 0x4afe20, Func Offset: 0xd0
	// Line 858, Address: 0x4afe28, Func Offset: 0xd8
	// Line 856, Address: 0x4afe30, Func Offset: 0xe0
	// Line 858, Address: 0x4afe34, Func Offset: 0xe4
	// Line 859, Address: 0x4aff08, Func Offset: 0x1b8
	// Line 860, Address: 0x4aff18, Func Offset: 0x1c8
	// Line 861, Address: 0x4aff24, Func Offset: 0x1d4
	// Line 862, Address: 0x4aff28, Func Offset: 0x1d8
	// Line 864, Address: 0x4aff30, Func Offset: 0x1e0
	// Line 867, Address: 0x4aff38, Func Offset: 0x1e8
	// Line 868, Address: 0x4aff3c, Func Offset: 0x1ec
	// Line 871, Address: 0x4aff44, Func Offset: 0x1f4
	// Line 872, Address: 0x4aff4c, Func Offset: 0x1fc
	// Line 873, Address: 0x4aff5c, Func Offset: 0x20c
	// Line 874, Address: 0x4aff60, Func Offset: 0x210
	// Line 875, Address: 0x4aff68, Func Offset: 0x218
	// Line 876, Address: 0x4aff6c, Func Offset: 0x21c
	// Line 877, Address: 0x4aff74, Func Offset: 0x224
	// Line 878, Address: 0x4aff78, Func Offset: 0x228
	// Line 879, Address: 0x4aff80, Func Offset: 0x230
	// Line 886, Address: 0x4aff84, Func Offset: 0x234
	// Line 883, Address: 0x4aff9c, Func Offset: 0x24c
	// Line 886, Address: 0x4affa0, Func Offset: 0x250
	// Func End, Address: 0x4affd4, Func Offset: 0x284
}

// ClipPlane__FffPfPf
// Start address: 0x4affe0
uint32 ClipPlane(float32 denom, float32 numer, float32* t_in, float32* t_out)
{
	// Line 788, Address: 0x4affe0, Func Offset: 0
	// Line 789, Address: 0x4afff4, Func Offset: 0x14
	// Line 792, Address: 0x4b0008, Func Offset: 0x28
	// Line 795, Address: 0x4b001c, Func Offset: 0x3c
	// Line 797, Address: 0x4b0024, Func Offset: 0x44
	// Line 798, Address: 0x4b0030, Func Offset: 0x50
	// Line 801, Address: 0x4b0044, Func Offset: 0x64
	// Line 804, Address: 0x4b0058, Func Offset: 0x78
	// Line 790, Address: 0x4b0060, Func Offset: 0x80
	// Line 793, Address: 0x4b0068, Func Offset: 0x88
	// Line 799, Address: 0x4b0084, Func Offset: 0xa4
	// Line 802, Address: 0x4b008c, Func Offset: 0xac
	// Line 807, Address: 0x4b00a8, Func Offset: 0xc8
	// Line 809, Address: 0x4b00bc, Func Offset: 0xdc
	// Func End, Address: 0x4b00c4, Func Offset: 0xe4
}

// iBoxIsectVec__FPC4xBoxPC5xVec3P6xIsect
// Start address: 0x4b00d0
void iBoxIsectVec(xBox* b, xVec3* v, xIsect* isx)
{
	// Line 770, Address: 0x4b00d0, Func Offset: 0
	// Line 775, Address: 0x4b00d4, Func Offset: 0x4
	// Line 779, Address: 0x4b013c, Func Offset: 0x6c
	// Line 783, Address: 0x4b0140, Func Offset: 0x70
	// Line 781, Address: 0x4b0148, Func Offset: 0x78
	// Line 783, Address: 0x4b0154, Func Offset: 0x84
	// Func End, Address: 0x4b015c, Func Offset: 0x8c
}

// iBoxVecDist__FPC4xBoxPC5xVec3P6xIsect
// Start address: 0x4b0160
void iBoxVecDist(xBox* box, xVec3* v, xIsect* isx)
{
	// Line 551, Address: 0x4b0160, Func Offset: 0
	// Line 552, Address: 0x4b0168, Func Offset: 0x8
	// Line 623, Address: 0x4b0178, Func Offset: 0x18
	// Line 624, Address: 0x4b0188, Func Offset: 0x28
	// Line 625, Address: 0x4b019c, Func Offset: 0x3c
	// Line 632, Address: 0x4b01ac, Func Offset: 0x4c
	// Line 634, Address: 0x4b01bc, Func Offset: 0x5c
	// Line 633, Address: 0x4b01c0, Func Offset: 0x60
	// Line 636, Address: 0x4b01c4, Func Offset: 0x64
	// Line 637, Address: 0x4b01d0, Func Offset: 0x70
	// Line 634, Address: 0x4b01d4, Func Offset: 0x74
	// Line 635, Address: 0x4b01d8, Func Offset: 0x78
	// Line 636, Address: 0x4b01dc, Func Offset: 0x7c
	// Line 637, Address: 0x4b01ec, Func Offset: 0x8c
	// Line 639, Address: 0x4b01f4, Func Offset: 0x94
	// Line 641, Address: 0x4b01fc, Func Offset: 0x9c
	// Line 640, Address: 0x4b0200, Func Offset: 0xa0
	// Line 643, Address: 0x4b0204, Func Offset: 0xa4
	// Line 644, Address: 0x4b0210, Func Offset: 0xb0
	// Line 642, Address: 0x4b0214, Func Offset: 0xb4
	// Line 641, Address: 0x4b0218, Func Offset: 0xb8
	// Line 642, Address: 0x4b021c, Func Offset: 0xbc
	// Line 643, Address: 0x4b0220, Func Offset: 0xc0
	// Line 644, Address: 0x4b0230, Func Offset: 0xd0
	// Line 647, Address: 0x4b0238, Func Offset: 0xd8
	// Line 648, Address: 0x4b0254, Func Offset: 0xf4
	// Line 655, Address: 0x4b0264, Func Offset: 0x104
	// Line 665, Address: 0x4b0274, Func Offset: 0x114
	// Line 663, Address: 0x4b0278, Func Offset: 0x118
	// Line 664, Address: 0x4b027c, Func Offset: 0x11c
	// Line 666, Address: 0x4b0280, Func Offset: 0x120
	// Line 667, Address: 0x4b028c, Func Offset: 0x12c
	// Line 665, Address: 0x4b0290, Func Offset: 0x130
	// Line 666, Address: 0x4b0294, Func Offset: 0x134
	// Line 667, Address: 0x4b02a4, Func Offset: 0x144
	// Line 670, Address: 0x4b02ac, Func Offset: 0x14c
	// Line 671, Address: 0x4b02b8, Func Offset: 0x158
	// Line 678, Address: 0x4b02c8, Func Offset: 0x168
	// Line 680, Address: 0x4b02d8, Func Offset: 0x178
	// Line 679, Address: 0x4b02dc, Func Offset: 0x17c
	// Line 682, Address: 0x4b02e0, Func Offset: 0x180
	// Line 683, Address: 0x4b02ec, Func Offset: 0x18c
	// Line 680, Address: 0x4b02f0, Func Offset: 0x190
	// Line 681, Address: 0x4b02f4, Func Offset: 0x194
	// Line 682, Address: 0x4b02f8, Func Offset: 0x198
	// Line 683, Address: 0x4b0308, Func Offset: 0x1a8
	// Line 685, Address: 0x4b0310, Func Offset: 0x1b0
	// Line 687, Address: 0x4b0318, Func Offset: 0x1b8
	// Line 686, Address: 0x4b031c, Func Offset: 0x1bc
	// Line 689, Address: 0x4b0320, Func Offset: 0x1c0
	// Line 690, Address: 0x4b032c, Func Offset: 0x1cc
	// Line 688, Address: 0x4b0330, Func Offset: 0x1d0
	// Line 687, Address: 0x4b0334, Func Offset: 0x1d4
	// Line 688, Address: 0x4b0338, Func Offset: 0x1d8
	// Line 689, Address: 0x4b033c, Func Offset: 0x1dc
	// Line 690, Address: 0x4b034c, Func Offset: 0x1ec
	// Line 694, Address: 0x4b0354, Func Offset: 0x1f4
	// Line 695, Address: 0x4b0360, Func Offset: 0x200
	// Line 696, Address: 0x4b0374, Func Offset: 0x214
	// Line 703, Address: 0x4b0384, Func Offset: 0x224
	// Line 704, Address: 0x4b0394, Func Offset: 0x234
	// Line 707, Address: 0x4b0398, Func Offset: 0x238
	// Line 708, Address: 0x4b03a4, Func Offset: 0x244
	// Line 705, Address: 0x4b03a8, Func Offset: 0x248
	// Line 704, Address: 0x4b03ac, Func Offset: 0x24c
	// Line 705, Address: 0x4b03b0, Func Offset: 0x250
	// Line 706, Address: 0x4b03b4, Func Offset: 0x254
	// Line 707, Address: 0x4b03b8, Func Offset: 0x258
	// Line 708, Address: 0x4b03c8, Func Offset: 0x268
	// Line 710, Address: 0x4b03d0, Func Offset: 0x270
	// Line 714, Address: 0x4b03d8, Func Offset: 0x278
	// Line 715, Address: 0x4b03e4, Func Offset: 0x284
	// Line 712, Address: 0x4b03e8, Func Offset: 0x288
	// Line 711, Address: 0x4b03ec, Func Offset: 0x28c
	// Line 713, Address: 0x4b03f0, Func Offset: 0x290
	// Line 712, Address: 0x4b03f4, Func Offset: 0x294
	// Line 713, Address: 0x4b03f8, Func Offset: 0x298
	// Line 714, Address: 0x4b03fc, Func Offset: 0x29c
	// Line 715, Address: 0x4b040c, Func Offset: 0x2ac
	// Line 718, Address: 0x4b0414, Func Offset: 0x2b4
	// Line 719, Address: 0x4b0430, Func Offset: 0x2d0
	// Line 726, Address: 0x4b0440, Func Offset: 0x2e0
	// Line 734, Address: 0x4b0450, Func Offset: 0x2f0
	// Line 737, Address: 0x4b0454, Func Offset: 0x2f4
	// Line 738, Address: 0x4b0460, Func Offset: 0x300
	// Line 734, Address: 0x4b0464, Func Offset: 0x304
	// Line 736, Address: 0x4b0468, Func Offset: 0x308
	// Line 735, Address: 0x4b046c, Func Offset: 0x30c
	// Line 736, Address: 0x4b0470, Func Offset: 0x310
	// Line 737, Address: 0x4b0474, Func Offset: 0x314
	// Line 738, Address: 0x4b0484, Func Offset: 0x324
	// Line 741, Address: 0x4b048c, Func Offset: 0x32c
	// Line 742, Address: 0x4b0498, Func Offset: 0x338
	// Line 749, Address: 0x4b04a8, Func Offset: 0x348
	// Line 750, Address: 0x4b04b8, Func Offset: 0x358
	// Line 753, Address: 0x4b04bc, Func Offset: 0x35c
	// Line 754, Address: 0x4b04c8, Func Offset: 0x368
	// Line 751, Address: 0x4b04cc, Func Offset: 0x36c
	// Line 750, Address: 0x4b04d0, Func Offset: 0x370
	// Line 751, Address: 0x4b04d4, Func Offset: 0x374
	// Line 752, Address: 0x4b04d8, Func Offset: 0x378
	// Line 753, Address: 0x4b04dc, Func Offset: 0x37c
	// Line 754, Address: 0x4b04ec, Func Offset: 0x38c
	// Line 756, Address: 0x4b04f4, Func Offset: 0x394
	// Line 760, Address: 0x4b04fc, Func Offset: 0x39c
	// Line 761, Address: 0x4b0508, Func Offset: 0x3a8
	// Line 758, Address: 0x4b050c, Func Offset: 0x3ac
	// Line 757, Address: 0x4b0510, Func Offset: 0x3b0
	// Line 759, Address: 0x4b0514, Func Offset: 0x3b4
	// Line 758, Address: 0x4b0518, Func Offset: 0x3b8
	// Line 759, Address: 0x4b051c, Func Offset: 0x3bc
	// Line 760, Address: 0x4b0520, Func Offset: 0x3c0
	// Line 761, Address: 0x4b0530, Func Offset: 0x3d0
	// Line 766, Address: 0x4b0548, Func Offset: 0x3e8
	// Line 767, Address: 0x4b0560, Func Offset: 0x400
	// Line 553, Address: 0x4b0570, Func Offset: 0x410
	// Line 767, Address: 0x4b0574, Func Offset: 0x414
	// Line 554, Address: 0x4b0584, Func Offset: 0x424
	// Line 767, Address: 0x4b0588, Func Offset: 0x428
	// Line 561, Address: 0x4b0594, Func Offset: 0x434
	// Line 767, Address: 0x4b0598, Func Offset: 0x438
	// Line 562, Address: 0x4b05a0, Func Offset: 0x440
	// Line 565, Address: 0x4b05a4, Func Offset: 0x444
	// Line 566, Address: 0x4b05b0, Func Offset: 0x450
	// Line 563, Address: 0x4b05b4, Func Offset: 0x454
	// Line 767, Address: 0x4b05b8, Func Offset: 0x458
	// Line 565, Address: 0x4b05c8, Func Offset: 0x468
	// Line 767, Address: 0x4b05d0, Func Offset: 0x470
	// Line 566, Address: 0x4b05d8, Func Offset: 0x478
	// Line 568, Address: 0x4b05dc, Func Offset: 0x47c
	// Line 572, Address: 0x4b05e4, Func Offset: 0x484
	// Line 573, Address: 0x4b05f0, Func Offset: 0x490
	// Line 570, Address: 0x4b05f4, Func Offset: 0x494
	// Line 767, Address: 0x4b05f8, Func Offset: 0x498
	// Line 571, Address: 0x4b05fc, Func Offset: 0x49c
	// Line 767, Address: 0x4b0600, Func Offset: 0x4a0
	// Line 572, Address: 0x4b060c, Func Offset: 0x4ac
	// Line 767, Address: 0x4b0614, Func Offset: 0x4b4
	// Line 573, Address: 0x4b061c, Func Offset: 0x4bc
	// Line 576, Address: 0x4b0620, Func Offset: 0x4c0
	// Line 767, Address: 0x4b0628, Func Offset: 0x4c8
	// Line 576, Address: 0x4b062c, Func Offset: 0x4cc
	// Line 767, Address: 0x4b0630, Func Offset: 0x4d0
	// Line 577, Address: 0x4b0640, Func Offset: 0x4e0
	// Line 767, Address: 0x4b0644, Func Offset: 0x4e4
	// Line 584, Address: 0x4b0650, Func Offset: 0x4f0
	// Line 767, Address: 0x4b0654, Func Offset: 0x4f4
	// Line 592, Address: 0x4b065c, Func Offset: 0x4fc
	// Line 595, Address: 0x4b0660, Func Offset: 0x500
	// Line 596, Address: 0x4b066c, Func Offset: 0x50c
	// Line 767, Address: 0x4b0670, Func Offset: 0x510
	// Line 594, Address: 0x4b0674, Func Offset: 0x514
	// Line 767, Address: 0x4b0678, Func Offset: 0x518
	// Line 595, Address: 0x4b0684, Func Offset: 0x524
	// Line 767, Address: 0x4b068c, Func Offset: 0x52c
	// Line 596, Address: 0x4b0694, Func Offset: 0x534
	// Line 599, Address: 0x4b0698, Func Offset: 0x538
	// Line 767, Address: 0x4b06a0, Func Offset: 0x540
	// Line 600, Address: 0x4b06a8, Func Offset: 0x548
	// Line 767, Address: 0x4b06ac, Func Offset: 0x54c
	// Line 607, Address: 0x4b06b8, Func Offset: 0x558
	// Line 767, Address: 0x4b06bc, Func Offset: 0x55c
	// Line 608, Address: 0x4b06c4, Func Offset: 0x564
	// Line 611, Address: 0x4b06c8, Func Offset: 0x568
	// Line 612, Address: 0x4b06d4, Func Offset: 0x574
	// Line 609, Address: 0x4b06d8, Func Offset: 0x578
	// Line 767, Address: 0x4b06dc, Func Offset: 0x57c
	// Line 611, Address: 0x4b06ec, Func Offset: 0x58c
	// Line 767, Address: 0x4b06f4, Func Offset: 0x594
	// Line 612, Address: 0x4b06fc, Func Offset: 0x59c
	// Line 614, Address: 0x4b0700, Func Offset: 0x5a0
	// Line 618, Address: 0x4b0708, Func Offset: 0x5a8
	// Line 619, Address: 0x4b0714, Func Offset: 0x5b4
	// Line 616, Address: 0x4b0718, Func Offset: 0x5b8
	// Line 767, Address: 0x4b071c, Func Offset: 0x5bc
	// Line 617, Address: 0x4b0720, Func Offset: 0x5c0
	// Line 767, Address: 0x4b0724, Func Offset: 0x5c4
	// Line 618, Address: 0x4b0730, Func Offset: 0x5d0
	// Line 767, Address: 0x4b0738, Func Offset: 0x5d8
	// Line 619, Address: 0x4b0740, Func Offset: 0x5e0
	// Line 623, Address: 0x4b0744, Func Offset: 0x5e4
	// Line 558, Address: 0x4b074c, Func Offset: 0x5ec
	// Line 559, Address: 0x4b0754, Func Offset: 0x5f4
	// Line 556, Address: 0x4b0758, Func Offset: 0x5f8
	// Line 767, Address: 0x4b075c, Func Offset: 0x5fc
	// Line 557, Address: 0x4b0760, Func Offset: 0x600
	// Line 767, Address: 0x4b0764, Func Offset: 0x604
	// Line 558, Address: 0x4b0770, Func Offset: 0x610
	// Line 767, Address: 0x4b0774, Func Offset: 0x614
	// Line 559, Address: 0x4b077c, Func Offset: 0x61c
	// Line 561, Address: 0x4b0780, Func Offset: 0x620
	// Line 578, Address: 0x4b0788, Func Offset: 0x628
	// Line 581, Address: 0x4b078c, Func Offset: 0x62c
	// Line 582, Address: 0x4b0798, Func Offset: 0x638
	// Line 767, Address: 0x4b079c, Func Offset: 0x63c
	// Line 580, Address: 0x4b07a0, Func Offset: 0x640
	// Line 767, Address: 0x4b07a4, Func Offset: 0x644
	// Line 581, Address: 0x4b07b0, Func Offset: 0x650
	// Line 767, Address: 0x4b07b8, Func Offset: 0x658
	// Line 582, Address: 0x4b07c0, Func Offset: 0x660
	// Line 584, Address: 0x4b07c4, Func Offset: 0x664
	// Line 585, Address: 0x4b07cc, Func Offset: 0x66c
	// Line 588, Address: 0x4b07d0, Func Offset: 0x670
	// Line 589, Address: 0x4b07dc, Func Offset: 0x67c
	// Line 767, Address: 0x4b07e0, Func Offset: 0x680
	// Line 588, Address: 0x4b07f0, Func Offset: 0x690
	// Line 767, Address: 0x4b07f8, Func Offset: 0x698
	// Line 589, Address: 0x4b0800, Func Offset: 0x6a0
	// Line 591, Address: 0x4b0804, Func Offset: 0x6a4
	// Line 604, Address: 0x4b080c, Func Offset: 0x6ac
	// Line 605, Address: 0x4b0818, Func Offset: 0x6b8
	// Line 602, Address: 0x4b081c, Func Offset: 0x6bc
	// Line 767, Address: 0x4b0820, Func Offset: 0x6c0
	// Line 603, Address: 0x4b0824, Func Offset: 0x6c4
	// Line 767, Address: 0x4b0828, Func Offset: 0x6c8
	// Line 604, Address: 0x4b0834, Func Offset: 0x6d4
	// Line 767, Address: 0x4b083c, Func Offset: 0x6dc
	// Line 605, Address: 0x4b0844, Func Offset: 0x6e4
	// Line 607, Address: 0x4b0848, Func Offset: 0x6e8
	// Line 627, Address: 0x4b0850, Func Offset: 0x6f0
	// Line 767, Address: 0x4b0854, Func Offset: 0x6f4
	// Line 629, Address: 0x4b0858, Func Offset: 0x6f8
	// Line 630, Address: 0x4b0864, Func Offset: 0x704
	// Line 628, Address: 0x4b0868, Func Offset: 0x708
	// Line 767, Address: 0x4b086c, Func Offset: 0x70c
	// Line 629, Address: 0x4b0878, Func Offset: 0x718
	// Line 767, Address: 0x4b0880, Func Offset: 0x720
	// Line 630, Address: 0x4b0888, Func Offset: 0x728
	// Line 632, Address: 0x4b088c, Func Offset: 0x72c
	// Line 651, Address: 0x4b0894, Func Offset: 0x734
	// Line 767, Address: 0x4b0898, Func Offset: 0x738
	// Line 652, Address: 0x4b08a0, Func Offset: 0x740
	// Line 653, Address: 0x4b08ac, Func Offset: 0x74c
	// Line 767, Address: 0x4b08b0, Func Offset: 0x750
	// Line 652, Address: 0x4b08b8, Func Offset: 0x758
	// Line 767, Address: 0x4b08c0, Func Offset: 0x760
	// Line 653, Address: 0x4b08c8, Func Offset: 0x768
	// Line 655, Address: 0x4b08cc, Func Offset: 0x76c
	// Line 767, Address: 0x4b08d4, Func Offset: 0x774
	// Line 659, Address: 0x4b08d8, Func Offset: 0x778
	// Line 767, Address: 0x4b08dc, Func Offset: 0x77c
	// Line 659, Address: 0x4b08e0, Func Offset: 0x780
	// Line 767, Address: 0x4b08e4, Func Offset: 0x784
	// Line 659, Address: 0x4b08e8, Func Offset: 0x788
	// Line 767, Address: 0x4b08ec, Func Offset: 0x78c
	// Line 659, Address: 0x4b08f0, Func Offset: 0x790
	// Line 662, Address: 0x4b08f8, Func Offset: 0x798
	// Line 673, Address: 0x4b0900, Func Offset: 0x7a0
	// Line 767, Address: 0x4b0904, Func Offset: 0x7a4
	// Line 675, Address: 0x4b0908, Func Offset: 0x7a8
	// Line 676, Address: 0x4b0914, Func Offset: 0x7b4
	// Line 674, Address: 0x4b0918, Func Offset: 0x7b8
	// Line 767, Address: 0x4b091c, Func Offset: 0x7bc
	// Line 675, Address: 0x4b0928, Func Offset: 0x7c8
	// Line 767, Address: 0x4b0930, Func Offset: 0x7d0
	// Line 676, Address: 0x4b0938, Func Offset: 0x7d8
	// Line 678, Address: 0x4b093c, Func Offset: 0x7dc
	// Line 700, Address: 0x4b0944, Func Offset: 0x7e4
	// Line 701, Address: 0x4b0950, Func Offset: 0x7f0
	// Line 698, Address: 0x4b0954, Func Offset: 0x7f4
	// Line 767, Address: 0x4b0958, Func Offset: 0x7f8
	// Line 699, Address: 0x4b095c, Func Offset: 0x7fc
	// Line 767, Address: 0x4b0960, Func Offset: 0x800
	// Line 700, Address: 0x4b096c, Func Offset: 0x80c
	// Line 767, Address: 0x4b0974, Func Offset: 0x814
	// Line 701, Address: 0x4b097c, Func Offset: 0x81c
	// Line 703, Address: 0x4b0980, Func Offset: 0x820
	// Line 720, Address: 0x4b0988, Func Offset: 0x828
	// Line 723, Address: 0x4b098c, Func Offset: 0x82c
	// Line 724, Address: 0x4b0998, Func Offset: 0x838
	// Line 767, Address: 0x4b099c, Func Offset: 0x83c
	// Line 722, Address: 0x4b09a0, Func Offset: 0x840
	// Line 767, Address: 0x4b09a4, Func Offset: 0x844
	// Line 723, Address: 0x4b09b0, Func Offset: 0x850
	// Line 767, Address: 0x4b09b8, Func Offset: 0x858
	// Line 724, Address: 0x4b09c0, Func Offset: 0x860
	// Line 726, Address: 0x4b09c4, Func Offset: 0x864
	// Line 727, Address: 0x4b09cc, Func Offset: 0x86c
	// Line 730, Address: 0x4b09d0, Func Offset: 0x870
	// Line 731, Address: 0x4b09dc, Func Offset: 0x87c
	// Line 767, Address: 0x4b09e0, Func Offset: 0x880
	// Line 730, Address: 0x4b09f0, Func Offset: 0x890
	// Line 767, Address: 0x4b09f8, Func Offset: 0x898
	// Line 731, Address: 0x4b0a00, Func Offset: 0x8a0
	// Line 733, Address: 0x4b0a04, Func Offset: 0x8a4
	// Line 746, Address: 0x4b0a0c, Func Offset: 0x8ac
	// Line 747, Address: 0x4b0a18, Func Offset: 0x8b8
	// Line 744, Address: 0x4b0a1c, Func Offset: 0x8bc
	// Line 767, Address: 0x4b0a20, Func Offset: 0x8c0
	// Line 745, Address: 0x4b0a24, Func Offset: 0x8c4
	// Line 767, Address: 0x4b0a28, Func Offset: 0x8c8
	// Line 746, Address: 0x4b0a34, Func Offset: 0x8d4
	// Line 767, Address: 0x4b0a3c, Func Offset: 0x8dc
	// Line 747, Address: 0x4b0a44, Func Offset: 0x8e4
	// Line 749, Address: 0x4b0a48, Func Offset: 0x8e8
	// Line 767, Address: 0x4b0a50, Func Offset: 0x8f0
	// Func End, Address: 0x4b0a58, Func Offset: 0x8f8
}

// iCylinderIsectVec__FPC9xCylinderPC5xVec3P6xIsect
// Start address: 0x4b0a60
void iCylinderIsectVec(xCylinder* c, xVec3* v, xIsect* isx)
{
	float32 b;
	// Line 445, Address: 0x4b0a60, Func Offset: 0
	// Line 453, Address: 0x4b0a68, Func Offset: 0x8
	// Line 454, Address: 0x4b0a70, Func Offset: 0x10
	// Line 457, Address: 0x4b0ac8, Func Offset: 0x68
	// Line 461, Address: 0x4b0acc, Func Offset: 0x6c
	// Line 459, Address: 0x4b0ad4, Func Offset: 0x74
	// Line 461, Address: 0x4b0ae0, Func Offset: 0x80
	// Func End, Address: 0x4b0ae8, Func Offset: 0x88
}

// iSphereBoundSphere__FP7xSpherePC7xSpherePC7xSphere
// Start address: 0x4b0af0
void iSphereBoundSphere(xSphere* o, xSphere* a, xSphere* b)
{
	float32 scale;
	xSphere temp;
	xSphere* tp;
	uint32 usetemp;
	// Line 397, Address: 0x4b0af0, Func Offset: 0
	// Line 405, Address: 0x4b0af4, Func Offset: 0x4
	// Line 407, Address: 0x4b0af8, Func Offset: 0x8
	// Line 397, Address: 0x4b0afc, Func Offset: 0xc
	// Line 407, Address: 0x4b0b00, Func Offset: 0x10
	// Line 408, Address: 0x4b0b3c, Func Offset: 0x4c
	// Line 414, Address: 0x4b0b4c, Func Offset: 0x5c
	// Line 421, Address: 0x4b0b60, Func Offset: 0x70
	// Line 424, Address: 0x4b0b6c, Func Offset: 0x7c
	// Line 427, Address: 0x4b0b7c, Func Offset: 0x8c
	// Line 424, Address: 0x4b0b80, Func Offset: 0x90
	// Line 427, Address: 0x4b0b84, Func Offset: 0x94
	// Line 426, Address: 0x4b0b88, Func Offset: 0x98
	// Line 424, Address: 0x4b0b94, Func Offset: 0xa4
	// Line 427, Address: 0x4b0ba0, Func Offset: 0xb0
	// Line 425, Address: 0x4b0bac, Func Offset: 0xbc
	// Line 426, Address: 0x4b0bb0, Func Offset: 0xc0
	// Line 425, Address: 0x4b0bb8, Func Offset: 0xc8
	// Line 426, Address: 0x4b0bc0, Func Offset: 0xd0
	// Line 428, Address: 0x4b0bd0, Func Offset: 0xe0
	// Line 431, Address: 0x4b0bd8, Func Offset: 0xe8
	// Line 412, Address: 0x4b0be8, Func Offset: 0xf8
	// Line 431, Address: 0x4b0bf0, Func Offset: 0x100
	// Line 415, Address: 0x4b0c00, Func Offset: 0x110
	// Line 431, Address: 0x4b0c04, Func Offset: 0x114
	// Line 416, Address: 0x4b0c0c, Func Offset: 0x11c
	// Line 429, Address: 0x4b0c14, Func Offset: 0x124
	// Line 431, Address: 0x4b0c18, Func Offset: 0x128
	// Func End, Address: 0x4b0c34, Func Offset: 0x144
}

// iSphereBoundVec__FP7xSpherePC7xSpherePC5xVec3
// Start address: 0x4b0c40
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v)
{
	float32 scale;
	xSphere temp;
	xSphere* tp;
	uint32 usetemp;
	// Line 309, Address: 0x4b0c40, Func Offset: 0
	// Line 317, Address: 0x4b0c44, Func Offset: 0x4
	// Line 319, Address: 0x4b0c48, Func Offset: 0x8
	// Line 309, Address: 0x4b0c4c, Func Offset: 0xc
	// Line 319, Address: 0x4b0c50, Func Offset: 0x10
	// Line 320, Address: 0x4b0c84, Func Offset: 0x44
	// Line 321, Address: 0x4b0c98, Func Offset: 0x58
	// Line 324, Address: 0x4b0ca0, Func Offset: 0x60
	// Line 329, Address: 0x4b0ca8, Func Offset: 0x68
	// Line 332, Address: 0x4b0cb4, Func Offset: 0x74
	// Line 335, Address: 0x4b0cc0, Func Offset: 0x80
	// Line 332, Address: 0x4b0cc4, Func Offset: 0x84
	// Line 335, Address: 0x4b0cd0, Func Offset: 0x90
	// Line 333, Address: 0x4b0cd4, Func Offset: 0x94
	// Line 335, Address: 0x4b0cdc, Func Offset: 0x9c
	// Line 333, Address: 0x4b0ce0, Func Offset: 0xa0
	// Line 335, Address: 0x4b0ce4, Func Offset: 0xa4
	// Line 334, Address: 0x4b0ce8, Func Offset: 0xa8
	// Line 336, Address: 0x4b0d0c, Func Offset: 0xcc
	// Line 339, Address: 0x4b0d14, Func Offset: 0xd4
	// Line 337, Address: 0x4b0d2c, Func Offset: 0xec
	// Line 339, Address: 0x4b0d30, Func Offset: 0xf0
	// Func End, Address: 0x4b0d4c, Func Offset: 0x10c
}

// iSphereInitBoundOBB__FP7xSpherePC4xBoxPC7xMat4x3
// Start address: 0x4b0d50
void iSphereInitBoundOBB(xSphere* s, xBox* b, xMat4x3* m)
{
	xVec3 r;
	// Line 277, Address: 0x4b0d50, Func Offset: 0
	// Line 287, Address: 0x4b0d58, Func Offset: 0x8
	// Line 291, Address: 0x4b0d5c, Func Offset: 0xc
	// Line 287, Address: 0x4b0d60, Func Offset: 0x10
	// Line 291, Address: 0x4b0d7c, Func Offset: 0x2c
	// Line 287, Address: 0x4b0d80, Func Offset: 0x30
	// Line 288, Address: 0x4b0d94, Func Offset: 0x44
	// Line 291, Address: 0x4b0db8, Func Offset: 0x68
	// Line 293, Address: 0x4b0ddc, Func Offset: 0x8c
	// Line 303, Address: 0x4b0e44, Func Offset: 0xf4
	// Line 293, Address: 0x4b0e50, Func Offset: 0x100
	// Line 303, Address: 0x4b0e54, Func Offset: 0x104
	// Line 293, Address: 0x4b0e58, Func Offset: 0x108
	// Line 303, Address: 0x4b0e68, Func Offset: 0x118
	// Line 293, Address: 0x4b0e6c, Func Offset: 0x11c
	// Line 303, Address: 0x4b0e70, Func Offset: 0x120
	// Line 307, Address: 0x4b0ea4, Func Offset: 0x154
	// Func End, Address: 0x4b0eac, Func Offset: 0x15c
}

// iSphereInitBoundBox__FP7xSpherePC4xBox
// Start address: 0x4b0eb0
void iSphereInitBoundBox(xSphere* s, xBox* b)
{
	// Line 270, Address: 0x4b0eb0, Func Offset: 0
	// Line 271, Address: 0x4b0eb4, Func Offset: 0x4
	// Line 270, Address: 0x4b0eb8, Func Offset: 0x8
	// Line 271, Address: 0x4b0ecc, Func Offset: 0x1c
	// Line 270, Address: 0x4b0ed0, Func Offset: 0x20
	// Line 271, Address: 0x4b0ee8, Func Offset: 0x38
	// Line 273, Address: 0x4b0f0c, Func Offset: 0x5c
	// Line 274, Address: 0x4b0f20, Func Offset: 0x70
	// Line 273, Address: 0x4b0f24, Func Offset: 0x74
	// Line 274, Address: 0x4b0f28, Func Offset: 0x78
	// Line 275, Address: 0x4b0f3c, Func Offset: 0x8c
	// Func End, Address: 0x4b0f44, Func Offset: 0x94
}

// iSphereInitBoundVec__FP7xSpherePC5xVec3
// Start address: 0x4b0f50
void iSphereInitBoundVec(xSphere* s, xVec3* v)
{
	// Line 250, Address: 0x4b0f50, Func Offset: 0
	// Line 251, Address: 0x4b0f54, Func Offset: 0x4
	// Line 250, Address: 0x4b0f58, Func Offset: 0x8
	// Line 251, Address: 0x4b0f5c, Func Offset: 0xc
	// Line 250, Address: 0x4b0f60, Func Offset: 0x10
	// Line 252, Address: 0x4b0f70, Func Offset: 0x20
	// Func End, Address: 0x4b0f78, Func Offset: 0x28
}

// iSphereIsectSphere__FPC7xSpherePC7xSphereP6xIsect
// Start address: 0x4b0f80
void iSphereIsectSphere(xSphere* s, xSphere* p, xIsect* isx)
{
	// Line 241, Address: 0x4b0f80, Func Offset: 0
	// Line 243, Address: 0x4b0f98, Func Offset: 0x18
	// Line 241, Address: 0x4b0f9c, Func Offset: 0x1c
	// Line 243, Address: 0x4b0fc0, Func Offset: 0x40
	// Line 242, Address: 0x4b0fc4, Func Offset: 0x44
	// Line 243, Address: 0x4b0fd4, Func Offset: 0x54
	// Line 242, Address: 0x4b0fdc, Func Offset: 0x5c
	// Line 243, Address: 0x4b0fe0, Func Offset: 0x60
	// Line 244, Address: 0x4b0fe4, Func Offset: 0x64
	// Line 245, Address: 0x4b0fec, Func Offset: 0x6c
	// Func End, Address: 0x4b0ff4, Func Offset: 0x74
}

// iSphereIsectRay__FPC7xSpherePC5xRay3P6xIsect
// Start address: 0x4b1000
void iSphereIsectRay(xSphere* s, xRay3* r, xIsect* isx)
{
	float32 t_in;
	float32 t_out;
	uint32 num;
	// Line 101, Address: 0x4b1000, Func Offset: 0
	// Line 114, Address: 0x4b1004, Func Offset: 0x4
	// Line 101, Address: 0x4b1008, Func Offset: 0x8
	// Line 114, Address: 0x4b1018, Func Offset: 0x18
	// Line 117, Address: 0x4b1024, Func Offset: 0x24
	// Line 121, Address: 0x4b1034, Func Offset: 0x34
	// Line 122, Address: 0x4b1038, Func Offset: 0x38
	// Line 121, Address: 0x4b103c, Func Offset: 0x3c
	// Line 122, Address: 0x4b1040, Func Offset: 0x40
	// Line 121, Address: 0x4b1044, Func Offset: 0x44
	// Line 122, Address: 0x4b1060, Func Offset: 0x60
	// Line 121, Address: 0x4b1064, Func Offset: 0x64
	// Line 122, Address: 0x4b108c, Func Offset: 0x8c
	// Line 129, Address: 0x4b10c0, Func Offset: 0xc0
	// Line 133, Address: 0x4b10c8, Func Offset: 0xc8
	// Line 134, Address: 0x4b10d8, Func Offset: 0xd8
	// Line 139, Address: 0x4b10f8, Func Offset: 0xf8
	// Line 140, Address: 0x4b10fc, Func Offset: 0xfc
	// Line 141, Address: 0x4b1104, Func Offset: 0x104
	// Line 144, Address: 0x4b1108, Func Offset: 0x108
	// Line 145, Address: 0x4b1118, Func Offset: 0x118
	// Line 146, Address: 0x4b1128, Func Offset: 0x128
	// Line 147, Address: 0x4b1134, Func Offset: 0x134
	// Line 148, Address: 0x4b1138, Func Offset: 0x138
	// Line 150, Address: 0x4b1140, Func Offset: 0x140
	// Line 153, Address: 0x4b1148, Func Offset: 0x148
	// Line 154, Address: 0x4b114c, Func Offset: 0x14c
	// Line 157, Address: 0x4b1154, Func Offset: 0x154
	// Line 158, Address: 0x4b115c, Func Offset: 0x15c
	// Line 159, Address: 0x4b116c, Func Offset: 0x16c
	// Line 160, Address: 0x4b1170, Func Offset: 0x170
	// Line 161, Address: 0x4b1178, Func Offset: 0x178
	// Line 162, Address: 0x4b117c, Func Offset: 0x17c
	// Line 163, Address: 0x4b1184, Func Offset: 0x184
	// Line 164, Address: 0x4b1188, Func Offset: 0x188
	// Line 165, Address: 0x4b1190, Func Offset: 0x190
	// Line 183, Address: 0x4b1194, Func Offset: 0x194
	// Line 133, Address: 0x4b11b0, Func Offset: 0x1b0
	// Line 183, Address: 0x4b11b8, Func Offset: 0x1b8
	// Line 136, Address: 0x4b11bc, Func Offset: 0x1bc
	// Line 183, Address: 0x4b11c0, Func Offset: 0x1c0
	// Line 138, Address: 0x4b11c4, Func Offset: 0x1c4
	// Line 183, Address: 0x4b11cc, Func Offset: 0x1cc
	// Func End, Address: 0x4b11dc, Func Offset: 0x1dc
}

// iSphereIsectVec__FPC7xSpherePC5xVec3P6xIsect
// Start address: 0x4b11e0
void iSphereIsectVec(xSphere* s, xVec3* v, xIsect* isx)
{
	// Line 96, Address: 0x4b11e0, Func Offset: 0
	// Line 98, Address: 0x4b11f8, Func Offset: 0x18
	// Line 96, Address: 0x4b11fc, Func Offset: 0x1c
	// Line 97, Address: 0x4b1220, Func Offset: 0x40
	// Line 98, Address: 0x4b1230, Func Offset: 0x50
	// Line 97, Address: 0x4b1234, Func Offset: 0x54
	// Line 99, Address: 0x4b1238, Func Offset: 0x58
	// Func End, Address: 0x4b1240, Func Offset: 0x60
}

// iMath3Init__Fv
// Start address: 0x4b1240
void iMath3Init()
{
	// Line 31, Address: 0x4b1240, Func Offset: 0
	// Func End, Address: 0x4b1248, Func Offset: 0x8
}

