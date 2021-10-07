



void zMenuAllowAtract(uint8 allowAttract);
void zMenuPause(uint8 bPause);
int32 zMenuIsFirstBoot();
uint32 zMenuGetBadCard();
int32 zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk, int32* neededFiles);
uint32 zMenuUpdateMode();
uint32 zMenuLoop();
void zMenuSetup();
void zMenuExit();
void zMenuInit(uint32 theSceneID);
int32 zMenuRunning();

// zMenuAllowAtract__Fb
// Start address: 0x2c4620
void zMenuAllowAtract(uint8 allowAttract)
{
	// Line 1275, Address: 0x2c4620, Func Offset: 0
	// Func End, Address: 0x2c4628, Func Offset: 0x8
}

// zMenuPause__Fb
// Start address: 0x2c4630
void zMenuPause(uint8 bPause)
{
	// Line 1256, Address: 0x2c4630, Func Offset: 0
	// Line 1257, Address: 0x2c4634, Func Offset: 0x4
	// Line 1270, Address: 0x2c463c, Func Offset: 0xc
	// Line 1264, Address: 0x2c4658, Func Offset: 0x28
	// Line 1270, Address: 0x2c465c, Func Offset: 0x2c
	// Func End, Address: 0x2c4674, Func Offset: 0x44
}

// zMenuIsFirstBoot__Fv
// Start address: 0x2c4680
int32 zMenuIsFirstBoot()
{
	// Line 1246, Address: 0x2c4680, Func Offset: 0
	// Func End, Address: 0x2c4688, Func Offset: 0x8
}

// zMenuGetBadCard__Fv
// Start address: 0x2c4690
uint32 zMenuGetBadCard()
{
	// Line 1219, Address: 0x2c4690, Func Offset: 0
	// Line 1220, Address: 0x2c4694, Func Offset: 0x4
	// Func End, Address: 0x2c469c, Func Offset: 0xc
}

// zMenuCardCheckStartup__FPiPiPi
// Start address: 0x2c46a0
int32 zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk, int32* neededFiles)
{
	st_XSAVEGAME_DATA* ldinst;
	int32 tgtcnt;
	int32 tgtmax;
	int32 rc;
	int32 tgtslot;
	uint8 cardWithSpace;
	// Line 771, Address: 0x2c46a0, Func Offset: 0
	// Line 776, Address: 0x2c46cc, Func Offset: 0x2c
	// Line 785, Address: 0x2c46dc, Func Offset: 0x3c
	// Line 791, Address: 0x2c46ec, Func Offset: 0x4c
	// Line 795, Address: 0x2c4714, Func Offset: 0x74
	// Line 802, Address: 0x2c4718, Func Offset: 0x78
	// Line 795, Address: 0x2c471c, Func Offset: 0x7c
	// Line 802, Address: 0x2c4720, Func Offset: 0x80
	// Line 803, Address: 0x2c472c, Func Offset: 0x8c
	// Line 805, Address: 0x2c4738, Func Offset: 0x98
	// Line 809, Address: 0x2c4748, Func Offset: 0xa8
	// Line 828, Address: 0x2c4750, Func Offset: 0xb0
	// Line 833, Address: 0x2c4764, Func Offset: 0xc4
	// Line 835, Address: 0x2c476c, Func Offset: 0xcc
	// Line 838, Address: 0x2c4770, Func Offset: 0xd0
	// Line 840, Address: 0x2c4778, Func Offset: 0xd8
	// Line 843, Address: 0x2c477c, Func Offset: 0xdc
	// Line 847, Address: 0x2c4784, Func Offset: 0xe4
	// Line 892, Address: 0x2c478c, Func Offset: 0xec
	// Line 896, Address: 0x2c47a8, Func Offset: 0x108
	// Line 907, Address: 0x2c47b0, Func Offset: 0x110
	// Line 918, Address: 0x2c47b4, Func Offset: 0x114
	// Line 920, Address: 0x2c47c4, Func Offset: 0x124
	// Line 922, Address: 0x2c47d0, Func Offset: 0x130
	// Line 926, Address: 0x2c47e0, Func Offset: 0x140
	// Line 945, Address: 0x2c47e8, Func Offset: 0x148
	// Line 950, Address: 0x2c47fc, Func Offset: 0x15c
	// Line 952, Address: 0x2c4804, Func Offset: 0x164
	// Line 955, Address: 0x2c4808, Func Offset: 0x168
	// Line 957, Address: 0x2c4810, Func Offset: 0x170
	// Line 960, Address: 0x2c4814, Func Offset: 0x174
	// Line 964, Address: 0x2c481c, Func Offset: 0x17c
	// Line 1009, Address: 0x2c4824, Func Offset: 0x184
	// Line 1013, Address: 0x2c4844, Func Offset: 0x1a4
	// Line 1020, Address: 0x2c484c, Func Offset: 0x1ac
	// Line 1023, Address: 0x2c4854, Func Offset: 0x1b4
	// Line 1038, Address: 0x2c485c, Func Offset: 0x1bc
	// Line 1060, Address: 0x2c4868, Func Offset: 0x1c8
	// Line 1062, Address: 0x2c4874, Func Offset: 0x1d4
	// Line 1066, Address: 0x2c4884, Func Offset: 0x1e4
	// Line 1085, Address: 0x2c488c, Func Offset: 0x1ec
	// Line 1090, Address: 0x2c48a0, Func Offset: 0x200
	// Line 1092, Address: 0x2c48a8, Func Offset: 0x208
	// Line 1095, Address: 0x2c48ac, Func Offset: 0x20c
	// Line 1097, Address: 0x2c48b4, Func Offset: 0x214
	// Line 1100, Address: 0x2c48b8, Func Offset: 0x218
	// Line 1104, Address: 0x2c48c0, Func Offset: 0x220
	// Line 1149, Address: 0x2c48c8, Func Offset: 0x228
	// Line 1153, Address: 0x2c48e8, Func Offset: 0x248
	// Line 1156, Address: 0x2c48f0, Func Offset: 0x250
	// Line 1160, Address: 0x2c48f8, Func Offset: 0x258
	// Line 1179, Address: 0x2c4900, Func Offset: 0x260
	// Line 1164, Address: 0x2c4904, Func Offset: 0x264
	// Line 1179, Address: 0x2c4908, Func Offset: 0x268
	// Line 1180, Address: 0x2c490c, Func Offset: 0x26c
	// Line 1181, Address: 0x2c4910, Func Offset: 0x270
	// Line 1187, Address: 0x2c4914, Func Offset: 0x274
	// Line 1190, Address: 0x2c4920, Func Offset: 0x280
	// Line 851, Address: 0x2c4930, Func Offset: 0x290
	// Line 1190, Address: 0x2c4934, Func Offset: 0x294
	// Line 858, Address: 0x2c493c, Func Offset: 0x29c
	// Line 1190, Address: 0x2c4944, Func Offset: 0x2a4
	// Line 904, Address: 0x2c494c, Func Offset: 0x2ac
	// Line 968, Address: 0x2c4954, Func Offset: 0x2b4
	// Line 967, Address: 0x2c4958, Func Offset: 0x2b8
	// Line 1190, Address: 0x2c495c, Func Offset: 0x2bc
	// Line 974, Address: 0x2c4964, Func Offset: 0x2c4
	// Line 1190, Address: 0x2c496c, Func Offset: 0x2cc
	// Line 1029, Address: 0x2c4974, Func Offset: 0x2d4
	// Line 1108, Address: 0x2c497c, Func Offset: 0x2dc
	// Line 1190, Address: 0x2c4980, Func Offset: 0x2e0
	// Line 1114, Address: 0x2c4988, Func Offset: 0x2e8
	// Line 1193, Address: 0x2c4990, Func Offset: 0x2f0
	// Func End, Address: 0x2c49b8, Func Offset: 0x318
}

// zMenuUpdateMode__Fv
// Start address: 0x2c49c0
uint32 zMenuUpdateMode()
{
	uint32 retVal;
	float32 elapsed1;
	// Line 698, Address: 0x2c49c0, Func Offset: 0
	// Line 702, Address: 0x2c49d0, Func Offset: 0x10
	// Line 706, Address: 0x2c49e8, Func Offset: 0x28
	// Line 729, Address: 0x2c49f4, Func Offset: 0x34
	// Line 731, Address: 0x2c4a00, Func Offset: 0x40
	// Line 732, Address: 0x2c4a08, Func Offset: 0x48
	// Line 733, Address: 0x2c4a10, Func Offset: 0x50
	// Line 744, Address: 0x2c4a48, Func Offset: 0x88
	// Line 746, Address: 0x2c4a5c, Func Offset: 0x9c
	// Line 709, Address: 0x2c4a78, Func Offset: 0xb8
	// Line 712, Address: 0x2c4a7c, Func Offset: 0xbc
	// Line 746, Address: 0x2c4a84, Func Offset: 0xc4
	// Line 720, Address: 0x2c4aa8, Func Offset: 0xe8
	// Line 746, Address: 0x2c4aac, Func Offset: 0xec
	// Line 720, Address: 0x2c4ab4, Func Offset: 0xf4
	// Line 746, Address: 0x2c4ab8, Func Offset: 0xf8
	// Line 720, Address: 0x2c4ac0, Func Offset: 0x100
	// Line 746, Address: 0x2c4ac4, Func Offset: 0x104
	// Line 726, Address: 0x2c4ac8, Func Offset: 0x108
	// Line 715, Address: 0x2c4ad0, Func Offset: 0x110
	// Line 747, Address: 0x2c4ad8, Func Offset: 0x118
	// Func End, Address: 0x2c4aec, Func Offset: 0x12c
}

// zMenuLoop__Fv
// Start address: 0x2c4af0
uint32 zMenuLoop()
{
	int32 ostrich_delay;
	uint32 nextSceneID;
	int32 draw_black;
	int8* fname;
	uint32 i;
	int32 isPaused;
	// Line 262, Address: 0x2c4af0, Func Offset: 0
	// Line 263, Address: 0x2c4b14, Func Offset: 0x24
	// Line 264, Address: 0x2c4b1c, Func Offset: 0x2c
	// Line 265, Address: 0x2c4b58, Func Offset: 0x68
	// Line 271, Address: 0x2c4b8c, Func Offset: 0x9c
	// Line 277, Address: 0x2c4ba0, Func Offset: 0xb0
	// Line 274, Address: 0x2c4bb8, Func Offset: 0xc8
	// Line 271, Address: 0x2c4bbc, Func Offset: 0xcc
	// Line 277, Address: 0x2c4bc0, Func Offset: 0xd0
	// Line 279, Address: 0x2c4bc8, Func Offset: 0xd8
	// Line 294, Address: 0x2c4bd4, Func Offset: 0xe4
	// Line 297, Address: 0x2c4be4, Func Offset: 0xf4
	// Line 299, Address: 0x2c4c04, Func Offset: 0x114
	// Line 302, Address: 0x2c4c08, Func Offset: 0x118
	// Line 303, Address: 0x2c4c10, Func Offset: 0x120
	// Line 305, Address: 0x2c4c2c, Func Offset: 0x13c
	// Line 307, Address: 0x2c4c34, Func Offset: 0x144
	// Line 308, Address: 0x2c4c38, Func Offset: 0x148
	// Line 311, Address: 0x2c4c48, Func Offset: 0x158
	// Line 316, Address: 0x2c4c4c, Func Offset: 0x15c
	// Line 317, Address: 0x2c4c7c, Func Offset: 0x18c
	// Line 318, Address: 0x2c4cac, Func Offset: 0x1bc
	// Line 320, Address: 0x2c4cdc, Func Offset: 0x1ec
	// Line 321, Address: 0x2c4d0c, Func Offset: 0x21c
	// Line 322, Address: 0x2c4d44, Func Offset: 0x254
	// Line 323, Address: 0x2c4d80, Func Offset: 0x290
	// Line 347, Address: 0x2c4db4, Func Offset: 0x2c4
	// Line 349, Address: 0x2c4db8, Func Offset: 0x2c8
	// Line 350, Address: 0x2c4dc0, Func Offset: 0x2d0
	// Line 351, Address: 0x2c4dc8, Func Offset: 0x2d8
	// Line 352, Address: 0x2c4dd0, Func Offset: 0x2e0
	// Line 358, Address: 0x2c4df4, Func Offset: 0x304
	// Line 367, Address: 0x2c4df8, Func Offset: 0x308
	// Line 368, Address: 0x2c4e08, Func Offset: 0x318
	// Line 367, Address: 0x2c4e0c, Func Offset: 0x31c
	// Line 370, Address: 0x2c4e10, Func Offset: 0x320
	// Line 368, Address: 0x2c4e18, Func Offset: 0x328
	// Line 370, Address: 0x2c4e1c, Func Offset: 0x32c
	// Line 390, Address: 0x2c4e28, Func Offset: 0x338
	// Line 393, Address: 0x2c4e30, Func Offset: 0x340
	// Line 491, Address: 0x2c4e40, Func Offset: 0x350
	// Line 485, Address: 0x2c4e44, Func Offset: 0x354
	// Line 491, Address: 0x2c4e48, Func Offset: 0x358
	// Line 498, Address: 0x2c4e58, Func Offset: 0x368
	// Line 502, Address: 0x2c4e68, Func Offset: 0x378
	// Line 504, Address: 0x2c4e74, Func Offset: 0x384
	// Line 505, Address: 0x2c4e80, Func Offset: 0x390
	// Line 515, Address: 0x2c4e8c, Func Offset: 0x39c
	// Line 519, Address: 0x2c4e90, Func Offset: 0x3a0
	// Line 521, Address: 0x2c4e98, Func Offset: 0x3a8
	// Line 525, Address: 0x2c4ea4, Func Offset: 0x3b4
	// Line 526, Address: 0x2c4eb0, Func Offset: 0x3c0
	// Line 525, Address: 0x2c4eb8, Func Offset: 0x3c8
	// Line 526, Address: 0x2c4ebc, Func Offset: 0x3cc
	// Line 527, Address: 0x2c4ec8, Func Offset: 0x3d8
	// Line 531, Address: 0x2c4ed0, Func Offset: 0x3e0
	// Line 540, Address: 0x2c4ee8, Func Offset: 0x3f8
	// Line 541, Address: 0x2c4ef0, Func Offset: 0x400
	// Line 544, Address: 0x2c4ef8, Func Offset: 0x408
	// Line 549, Address: 0x2c4f00, Func Offset: 0x410
	// Line 556, Address: 0x2c4f08, Func Offset: 0x418
	// Line 586, Address: 0x2c4f18, Func Offset: 0x428
	// Line 588, Address: 0x2c4f2c, Func Offset: 0x43c
	// Line 589, Address: 0x2c4f5c, Func Offset: 0x46c
	// Line 590, Address: 0x2c4f68, Func Offset: 0x478
	// Line 591, Address: 0x2c4f70, Func Offset: 0x480
	// Line 594, Address: 0x2c4f7c, Func Offset: 0x48c
	// Line 618, Address: 0x2c4f90, Func Offset: 0x4a0
	// Line 619, Address: 0x2c4fa0, Func Offset: 0x4b0
	// Line 620, Address: 0x2c4fa8, Func Offset: 0x4b8
	// Line 621, Address: 0x2c4fb0, Func Offset: 0x4c0
	// Line 626, Address: 0x2c4fc4, Func Offset: 0x4d4
	// Line 628, Address: 0x2c4fc8, Func Offset: 0x4d8
	// Line 630, Address: 0x2c4fd0, Func Offset: 0x4e0
	// Line 631, Address: 0x2c4fd8, Func Offset: 0x4e8
	// Line 647, Address: 0x2c4fdc, Func Offset: 0x4ec
	// Line 649, Address: 0x2c4fe0, Func Offset: 0x4f0
	// Line 650, Address: 0x2c4ff0, Func Offset: 0x500
	// Line 661, Address: 0x2c5010, Func Offset: 0x520
	// Line 342, Address: 0x2c5024, Func Offset: 0x534
	// Line 661, Address: 0x2c5044, Func Offset: 0x554
	// Line 343, Address: 0x2c5054, Func Offset: 0x564
	// Line 661, Address: 0x2c5074, Func Offset: 0x584
	// Line 345, Address: 0x2c5084, Func Offset: 0x594
	// Line 661, Address: 0x2c50a4, Func Offset: 0x5b4
	// Line 346, Address: 0x2c50b4, Func Offset: 0x5c4
	// Line 661, Address: 0x2c50d4, Func Offset: 0x5e4
	// Line 395, Address: 0x2c5108, Func Offset: 0x618
	// Line 661, Address: 0x2c5110, Func Offset: 0x620
	// Line 396, Address: 0x2c512c, Func Offset: 0x63c
	// Line 661, Address: 0x2c5138, Func Offset: 0x648
	// Line 416, Address: 0x2c514c, Func Offset: 0x65c
	// Line 661, Address: 0x2c5158, Func Offset: 0x668
	// Line 422, Address: 0x2c5164, Func Offset: 0x674
	// Line 661, Address: 0x2c5168, Func Offset: 0x678
	// Line 449, Address: 0x2c51a0, Func Offset: 0x6b0
	// Line 661, Address: 0x2c51bc, Func Offset: 0x6cc
	// Line 449, Address: 0x2c51d4, Func Offset: 0x6e4
	// Line 661, Address: 0x2c51d8, Func Offset: 0x6e8
	// Line 451, Address: 0x2c51e4, Func Offset: 0x6f4
	// Line 661, Address: 0x2c51e8, Func Offset: 0x6f8
	// Line 455, Address: 0x2c51f0, Func Offset: 0x700
	// Line 661, Address: 0x2c51f4, Func Offset: 0x704
	// Line 477, Address: 0x2c5200, Func Offset: 0x710
	// Line 661, Address: 0x2c5204, Func Offset: 0x714
	// Line 477, Address: 0x2c5210, Func Offset: 0x720
	// Line 661, Address: 0x2c5214, Func Offset: 0x724
	// Line 477, Address: 0x2c5218, Func Offset: 0x728
	// Line 661, Address: 0x2c521c, Func Offset: 0x72c
	// Line 478, Address: 0x2c5234, Func Offset: 0x744
	// Line 661, Address: 0x2c5268, Func Offset: 0x778
	// Line 418, Address: 0x2c527c, Func Offset: 0x78c
	// Line 661, Address: 0x2c5294, Func Offset: 0x7a4
	// Line 419, Address: 0x2c529c, Func Offset: 0x7ac
	// Line 429, Address: 0x2c52a8, Func Offset: 0x7b8
	// Line 661, Address: 0x2c52b0, Func Offset: 0x7c0
	// Line 465, Address: 0x2c52bc, Func Offset: 0x7cc
	// Line 661, Address: 0x2c52c0, Func Offset: 0x7d0
	// Line 465, Address: 0x2c52c4, Func Offset: 0x7d4
	// Line 661, Address: 0x2c52c8, Func Offset: 0x7d8
	// Line 466, Address: 0x2c52dc, Func Offset: 0x7ec
	// Line 661, Address: 0x2c52e0, Func Offset: 0x7f0
	// Line 531, Address: 0x2c5304, Func Offset: 0x814
	// Line 661, Address: 0x2c5308, Func Offset: 0x818
	// Line 558, Address: 0x2c531c, Func Offset: 0x82c
	// Line 661, Address: 0x2c5320, Func Offset: 0x830
	// Line 559, Address: 0x2c532c, Func Offset: 0x83c
	// Line 661, Address: 0x2c5330, Func Offset: 0x840
	// Line 560, Address: 0x2c533c, Func Offset: 0x84c
	// Line 661, Address: 0x2c5340, Func Offset: 0x850
	// Line 561, Address: 0x2c534c, Func Offset: 0x85c
	// Line 661, Address: 0x2c5350, Func Offset: 0x860
	// Line 613, Address: 0x2c5398, Func Offset: 0x8a8
	// Line 661, Address: 0x2c539c, Func Offset: 0x8ac
	// Line 634, Address: 0x2c53c0, Func Offset: 0x8d0
	// Line 661, Address: 0x2c53c4, Func Offset: 0x8d4
	// Line 644, Address: 0x2c53cc, Func Offset: 0x8dc
	// Line 661, Address: 0x2c53d0, Func Offset: 0x8e0
	// Line 650, Address: 0x2c53ec, Func Offset: 0x8fc
	// Line 661, Address: 0x2c53f0, Func Offset: 0x900
	// Line 650, Address: 0x2c53f4, Func Offset: 0x904
	// Line 662, Address: 0x2c5400, Func Offset: 0x910
	// Func End, Address: 0x2c5420, Func Offset: 0x930
}

// zMenuSetup__Fv
// Start address: 0x2c5420
void zMenuSetup()
{
	// Line 207, Address: 0x2c5420, Func Offset: 0
	// Line 211, Address: 0x2c5424, Func Offset: 0x4
	// Line 207, Address: 0x2c5428, Func Offset: 0x8
	// Line 211, Address: 0x2c542c, Func Offset: 0xc
	// Line 212, Address: 0x2c5438, Func Offset: 0x18
	// Line 211, Address: 0x2c543c, Func Offset: 0x1c
	// Line 215, Address: 0x2c5464, Func Offset: 0x44
	// Line 216, Address: 0x2c546c, Func Offset: 0x4c
	// Line 217, Address: 0x2c5474, Func Offset: 0x54
	// Line 222, Address: 0x2c547c, Func Offset: 0x5c
	// Line 223, Address: 0x2c54bc, Func Offset: 0x9c
	// Line 227, Address: 0x2c54f4, Func Offset: 0xd4
	// Line 232, Address: 0x2c54fc, Func Offset: 0xdc
	// Line 235, Address: 0x2c5504, Func Offset: 0xe4
	// Line 238, Address: 0x2c5518, Func Offset: 0xf8
	// Line 242, Address: 0x2c5534, Func Offset: 0x114
	// Line 243, Address: 0x2c553c, Func Offset: 0x11c
	// Line 247, Address: 0x2c5544, Func Offset: 0x124
	// Line 256, Address: 0x2c556c, Func Offset: 0x14c
	// Func End, Address: 0x2c5578, Func Offset: 0x158
}

// zMenuExit__Fv
// Start address: 0x2c5580
void zMenuExit()
{
	// Line 183, Address: 0x2c5580, Func Offset: 0
	// Line 186, Address: 0x2c5584, Func Offset: 0x4
	// Line 183, Address: 0x2c5588, Func Offset: 0x8
	// Line 186, Address: 0x2c558c, Func Offset: 0xc
	// Line 183, Address: 0x2c5590, Func Offset: 0x10
	// Line 186, Address: 0x2c5594, Func Offset: 0x14
	// Line 183, Address: 0x2c5598, Func Offset: 0x18
	// Line 186, Address: 0x2c559c, Func Offset: 0x1c
	// Line 188, Address: 0x2c55c8, Func Offset: 0x48
	// Line 189, Address: 0x2c55fc, Func Offset: 0x7c
	// Line 191, Address: 0x2c5608, Func Offset: 0x88
	// Line 193, Address: 0x2c5610, Func Offset: 0x90
	// Line 198, Address: 0x2c5618, Func Offset: 0x98
	// Func End, Address: 0x2c5644, Func Offset: 0xc4
}

// zMenuInit__FUi
// Start address: 0x2c5650
void zMenuInit(uint32 theSceneID)
{
	// Line 143, Address: 0x2c5650, Func Offset: 0
	// Line 145, Address: 0x2c5654, Func Offset: 0x4
	// Line 143, Address: 0x2c5658, Func Offset: 0x8
	// Line 146, Address: 0x2c5664, Func Offset: 0x14
	// Line 147, Address: 0x2c566c, Func Offset: 0x1c
	// Line 150, Address: 0x2c5674, Func Offset: 0x24
	// Line 153, Address: 0x2c567c, Func Offset: 0x2c
	// Line 155, Address: 0x2c5688, Func Offset: 0x38
	// Line 157, Address: 0x2c569c, Func Offset: 0x4c
	// Line 159, Address: 0x2c56a4, Func Offset: 0x54
	// Line 161, Address: 0x2c56ac, Func Offset: 0x5c
	// Line 163, Address: 0x2c56b8, Func Offset: 0x68
	// Line 164, Address: 0x2c56c0, Func Offset: 0x70
	// Line 165, Address: 0x2c56c8, Func Offset: 0x78
	// Line 168, Address: 0x2c56d0, Func Offset: 0x80
	// Line 169, Address: 0x2c56d8, Func Offset: 0x88
	// Line 171, Address: 0x2c56e0, Func Offset: 0x90
	// Func End, Address: 0x2c56f0, Func Offset: 0xa0
}

// zMenuRunning__Fv
// Start address: 0x2c56f0
int32 zMenuRunning()
{
	// Line 129, Address: 0x2c56f0, Func Offset: 0
	// Func End, Address: 0x2c56f8, Func Offset: 0x8
}

