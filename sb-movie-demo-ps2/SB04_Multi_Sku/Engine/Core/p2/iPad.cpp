



void iPadDebugRender();
void iPadStartRumble(_tagxPad* pad, float32 intensity);
void iPadStopRumble(_tagxPad* pad);
int32 iPadUpdate(_tagxPad* pad, uint32* on);
void iPadTRCUpdate(_tagxPad* pad);
_tagxPad* iPadEnable(_tagxPad* pad, int16 port);
_tagxPad* iPadEnableGuts(_tagxPad* pad, _tagPadInit* pad_init);
int32 iPadInit();

// iPadDebugRender__Fv
// Start address: 0x4a9750
void iPadDebugRender()
{
	int32 i;
	int8 tmpstr[512];
	int8 padstatestr[32];
	int8 trcstatestr[32];
	xtextbox tb;
	int8 @11662;
	int8 trc_state_strings[33][11];
	int8 state_strings[16][4];
	// Line 981, Address: 0x4a9750, Func Offset: 0
	// Line 1015, Address: 0x4a976c, Func Offset: 0x1c
	// Line 981, Address: 0x4a9770, Func Offset: 0x20
	// Line 1015, Address: 0x4a9784, Func Offset: 0x34
	// Line 981, Address: 0x4a9788, Func Offset: 0x38
	// Line 1015, Address: 0x4a978c, Func Offset: 0x3c
	// Line 981, Address: 0x4a9798, Func Offset: 0x48
	// Line 1015, Address: 0x4a97ac, Func Offset: 0x5c
	// Line 981, Address: 0x4a97b4, Func Offset: 0x64
	// Line 1015, Address: 0x4a97c0, Func Offset: 0x70
	// Line 981, Address: 0x4a97c8, Func Offset: 0x78
	// Line 1015, Address: 0x4a97cc, Func Offset: 0x7c
	// Line 1019, Address: 0x4a9834, Func Offset: 0xe4
	// Line 1020, Address: 0x4a9848, Func Offset: 0xf8
	// Line 1024, Address: 0x4a9880, Func Offset: 0x130
	// Line 1025, Address: 0x4a9890, Func Offset: 0x140
	// Line 1045, Address: 0x4a98a8, Func Offset: 0x158
	// Line 1056, Address: 0x4a98f0, Func Offset: 0x1a0
	// Line 1058, Address: 0x4a9900, Func Offset: 0x1b0
	// Line 1059, Address: 0x4a9920, Func Offset: 0x1d0
	// Line 1058, Address: 0x4a9924, Func Offset: 0x1d4
	// Line 1059, Address: 0x4a994c, Func Offset: 0x1fc
	// Line 1060, Address: 0x4a9954, Func Offset: 0x204
	// Line 1061, Address: 0x4a9958, Func Offset: 0x208
	// Line 1062, Address: 0x4a9968, Func Offset: 0x218
	// Line 1063, Address: 0x4a9990, Func Offset: 0x240
	// Line 1064, Address: 0x4a99a0, Func Offset: 0x250
	// Line 1026, Address: 0x4a99bc, Func Offset: 0x26c
	// Line 1064, Address: 0x4a99c0, Func Offset: 0x270
	// Line 1056, Address: 0x4a99f0, Func Offset: 0x2a0
	// Line 1064, Address: 0x4a99f4, Func Offset: 0x2a4
	// Line 1056, Address: 0x4a9a74, Func Offset: 0x324
	// Line 1064, Address: 0x4a9a78, Func Offset: 0x328
	// Line 1056, Address: 0x4a9b58, Func Offset: 0x408
	// Line 1064, Address: 0x4a9b68, Func Offset: 0x418
	// Line 1056, Address: 0x4a9b9c, Func Offset: 0x44c
	// Line 1064, Address: 0x4a9ba0, Func Offset: 0x450
	// Line 1056, Address: 0x4a9d5c, Func Offset: 0x60c
	// Line 1064, Address: 0x4a9d60, Func Offset: 0x610
	// Line 1056, Address: 0x4a9d64, Func Offset: 0x614
	// Line 1064, Address: 0x4a9d6c, Func Offset: 0x61c
	// Line 1056, Address: 0x4a9d78, Func Offset: 0x628
	// Line 1064, Address: 0x4a9d7c, Func Offset: 0x62c
	// Line 1060, Address: 0x4a9d88, Func Offset: 0x638
	// Line 1064, Address: 0x4a9d98, Func Offset: 0x648
	// Func End, Address: 0x4a9df0, Func Offset: 0x6a0
}

// iPadStartRumble__FP8_tagxPadf
// Start address: 0x4a9df0
void iPadStartRumble(_tagxPad* pad, float32 intensity)
{
	// Line 862, Address: 0x4a9df0, Func Offset: 0
	// Line 863, Address: 0x4a9df8, Func Offset: 0x8
	// Line 867, Address: 0x4a9e08, Func Offset: 0x18
	// Line 869, Address: 0x4a9e24, Func Offset: 0x34
	// Line 868, Address: 0x4a9e28, Func Offset: 0x38
	// Line 869, Address: 0x4a9e2c, Func Offset: 0x3c
	// Line 870, Address: 0x4a9e84, Func Offset: 0x94
	// Line 873, Address: 0x4a9e8c, Func Offset: 0x9c
	// Line 871, Address: 0x4a9e90, Func Offset: 0xa0
	// Line 873, Address: 0x4a9e94, Func Offset: 0xa4
	// Line 875, Address: 0x4a9f08, Func Offset: 0x118
	// Line 876, Address: 0x4a9f44, Func Offset: 0x154
	// Line 875, Address: 0x4a9f48, Func Offset: 0x158
	// Line 876, Address: 0x4a9f54, Func Offset: 0x164
	// Line 878, Address: 0x4a9f64, Func Offset: 0x174
	// Func End, Address: 0x4a9f70, Func Offset: 0x180
}

// iPadStopRumble__FP8_tagxPad
// Start address: 0x4a9f70
void iPadStopRumble(_tagxPad* pad)
{
	// Line 853, Address: 0x4a9f70, Func Offset: 0
	// Line 855, Address: 0x4a9f74, Func Offset: 0x4
	// Line 854, Address: 0x4a9f78, Func Offset: 0x8
	// Line 855, Address: 0x4a9f7c, Func Offset: 0xc
	// Func End, Address: 0x4a9f8c, Func Offset: 0x1c
}

// iPadUpdate__FP8_tagxPadPUi
// Start address: 0x4a9f90
int32 iPadUpdate(_tagxPad* pad, uint32* on)
{
	int32 temp;
	uint32 temp_on;
	int32 result;
	// Line 625, Address: 0x4a9f90, Func Offset: 0
	// Line 630, Address: 0x4a9fb0, Func Offset: 0x20
	// Line 632, Address: 0x4a9fe0, Func Offset: 0x50
	// Line 633, Address: 0x4a9fe8, Func Offset: 0x58
	// Line 639, Address: 0x4a9ff0, Func Offset: 0x60
	// Line 640, Address: 0x4aa000, Func Offset: 0x70
	// Line 644, Address: 0x4aa008, Func Offset: 0x78
	// Line 647, Address: 0x4aa014, Func Offset: 0x84
	// Line 650, Address: 0x4aa028, Func Offset: 0x98
	// Line 651, Address: 0x4aa03c, Func Offset: 0xac
	// Line 655, Address: 0x4aa044, Func Offset: 0xb4
	// Line 660, Address: 0x4aa048, Func Offset: 0xb8
	// Line 656, Address: 0x4aa04c, Func Offset: 0xbc
	// Line 661, Address: 0x4aa050, Func Offset: 0xc0
	// Line 657, Address: 0x4aa054, Func Offset: 0xc4
	// Line 662, Address: 0x4aa058, Func Offset: 0xc8
	// Line 658, Address: 0x4aa05c, Func Offset: 0xcc
	// Line 663, Address: 0x4aa060, Func Offset: 0xd0
	// Line 660, Address: 0x4aa064, Func Offset: 0xd4
	// Line 666, Address: 0x4aa068, Func Offset: 0xd8
	// Line 667, Address: 0x4aa06c, Func Offset: 0xdc
	// Line 671, Address: 0x4aa070, Func Offset: 0xe0
	// Line 672, Address: 0x4aa074, Func Offset: 0xe4
	// Line 677, Address: 0x4aa078, Func Offset: 0xe8
	// Line 678, Address: 0x4aa07c, Func Offset: 0xec
	// Line 679, Address: 0x4aa080, Func Offset: 0xf0
	// Line 680, Address: 0x4aa084, Func Offset: 0xf4
	// Line 694, Address: 0x4aa088, Func Offset: 0xf8
	// Line 695, Address: 0x4aa08c, Func Offset: 0xfc
	// Line 694, Address: 0x4aa090, Func Offset: 0x100
	// Line 660, Address: 0x4aa094, Func Offset: 0x104
	// Line 695, Address: 0x4aa098, Func Offset: 0x108
	// Line 661, Address: 0x4aa09c, Func Offset: 0x10c
	// Line 695, Address: 0x4aa0a0, Func Offset: 0x110
	// Line 686, Address: 0x4aa0a4, Func Offset: 0x114
	// Line 661, Address: 0x4aa0a8, Func Offset: 0x118
	// Line 705, Address: 0x4aa0ac, Func Offset: 0x11c
	// Line 662, Address: 0x4aa0b0, Func Offset: 0x120
	// Line 663, Address: 0x4aa0b8, Func Offset: 0x128
	// Line 666, Address: 0x4aa0c0, Func Offset: 0x130
	// Line 667, Address: 0x4aa0c8, Func Offset: 0x138
	// Line 668, Address: 0x4aa0d0, Func Offset: 0x140
	// Line 669, Address: 0x4aa0d4, Func Offset: 0x144
	// Line 671, Address: 0x4aa0d8, Func Offset: 0x148
	// Line 672, Address: 0x4aa0e0, Func Offset: 0x150
	// Line 673, Address: 0x4aa0e8, Func Offset: 0x158
	// Line 674, Address: 0x4aa0ec, Func Offset: 0x15c
	// Line 677, Address: 0x4aa0f0, Func Offset: 0x160
	// Line 678, Address: 0x4aa0f8, Func Offset: 0x168
	// Line 679, Address: 0x4aa100, Func Offset: 0x170
	// Line 680, Address: 0x4aa108, Func Offset: 0x178
	// Line 681, Address: 0x4aa110, Func Offset: 0x180
	// Line 682, Address: 0x4aa114, Func Offset: 0x184
	// Line 694, Address: 0x4aa118, Func Offset: 0x188
	// Line 695, Address: 0x4aa11c, Func Offset: 0x18c
	// Line 694, Address: 0x4aa120, Func Offset: 0x190
	// Line 695, Address: 0x4aa128, Func Offset: 0x198
	// Line 705, Address: 0x4aa134, Func Offset: 0x1a4
	// Line 698, Address: 0x4aa138, Func Offset: 0x1a8
	// Line 699, Address: 0x4aa13c, Func Offset: 0x1ac
	// Line 698, Address: 0x4aa140, Func Offset: 0x1b0
	// Line 699, Address: 0x4aa144, Func Offset: 0x1b4
	// Line 698, Address: 0x4aa148, Func Offset: 0x1b8
	// Line 699, Address: 0x4aa14c, Func Offset: 0x1bc
	// Line 698, Address: 0x4aa150, Func Offset: 0x1c0
	// Line 700, Address: 0x4aa154, Func Offset: 0x1c4
	// Line 699, Address: 0x4aa158, Func Offset: 0x1c8
	// Line 700, Address: 0x4aa15c, Func Offset: 0x1cc
	// Line 701, Address: 0x4aa164, Func Offset: 0x1d4
	// Line 700, Address: 0x4aa168, Func Offset: 0x1d8
	// Line 701, Address: 0x4aa16c, Func Offset: 0x1dc
	// Line 702, Address: 0x4aa174, Func Offset: 0x1e4
	// Line 701, Address: 0x4aa178, Func Offset: 0x1e8
	// Line 702, Address: 0x4aa17c, Func Offset: 0x1ec
	// Line 703, Address: 0x4aa184, Func Offset: 0x1f4
	// Line 704, Address: 0x4aa18c, Func Offset: 0x1fc
	// Line 703, Address: 0x4aa190, Func Offset: 0x200
	// Line 704, Address: 0x4aa194, Func Offset: 0x204
	// Line 703, Address: 0x4aa198, Func Offset: 0x208
	// Line 704, Address: 0x4aa19c, Func Offset: 0x20c
	// Line 705, Address: 0x4aa1a0, Func Offset: 0x210
	// Line 704, Address: 0x4aa1a4, Func Offset: 0x214
	// Line 705, Address: 0x4aa1a8, Func Offset: 0x218
	// Line 706, Address: 0x4aa1ac, Func Offset: 0x21c
	// Line 705, Address: 0x4aa1b0, Func Offset: 0x220
	// Line 706, Address: 0x4aa1b4, Func Offset: 0x224
	// Line 707, Address: 0x4aa1bc, Func Offset: 0x22c
	// Line 706, Address: 0x4aa1c0, Func Offset: 0x230
	// Line 707, Address: 0x4aa1c4, Func Offset: 0x234
	// Line 708, Address: 0x4aa1cc, Func Offset: 0x23c
	// Line 707, Address: 0x4aa1d0, Func Offset: 0x240
	// Line 708, Address: 0x4aa1d4, Func Offset: 0x244
	// Line 709, Address: 0x4aa1dc, Func Offset: 0x24c
	// Line 708, Address: 0x4aa1e0, Func Offset: 0x250
	// Line 709, Address: 0x4aa1e4, Func Offset: 0x254
	// Line 710, Address: 0x4aa1ec, Func Offset: 0x25c
	// Line 709, Address: 0x4aa1f0, Func Offset: 0x260
	// Line 710, Address: 0x4aa1f4, Func Offset: 0x264
	// Line 711, Address: 0x4aa1fc, Func Offset: 0x26c
	// Line 710, Address: 0x4aa200, Func Offset: 0x270
	// Line 711, Address: 0x4aa204, Func Offset: 0x274
	// Line 712, Address: 0x4aa20c, Func Offset: 0x27c
	// Line 711, Address: 0x4aa210, Func Offset: 0x280
	// Line 712, Address: 0x4aa214, Func Offset: 0x284
	// Line 713, Address: 0x4aa218, Func Offset: 0x288
	// Line 712, Address: 0x4aa21c, Func Offset: 0x28c
	// Line 713, Address: 0x4aa220, Func Offset: 0x290
	// Line 712, Address: 0x4aa224, Func Offset: 0x294
	// Line 713, Address: 0x4aa228, Func Offset: 0x298
	// Line 715, Address: 0x4aa22c, Func Offset: 0x29c
	// Line 722, Address: 0x4aa230, Func Offset: 0x2a0
	// Line 726, Address: 0x4aa240, Func Offset: 0x2b0
	// Line 724, Address: 0x4aa244, Func Offset: 0x2b4
	// Line 725, Address: 0x4aa24c, Func Offset: 0x2bc
	// Line 726, Address: 0x4aa250, Func Offset: 0x2c0
	// Line 728, Address: 0x4aa258, Func Offset: 0x2c8
	// Line 731, Address: 0x4aa260, Func Offset: 0x2d0
	// Line 732, Address: 0x4aa264, Func Offset: 0x2d4
	// Line 738, Address: 0x4aa268, Func Offset: 0x2d8
	// Line 740, Address: 0x4aa274, Func Offset: 0x2e4
	// Line 741, Address: 0x4aa280, Func Offset: 0x2f0
	// Line 743, Address: 0x4aa288, Func Offset: 0x2f8
	// Line 745, Address: 0x4aa294, Func Offset: 0x304
	// Line 746, Address: 0x4aa2a0, Func Offset: 0x310
	// Line 751, Address: 0x4aa2a4, Func Offset: 0x314
	// Line 755, Address: 0x4aa2b4, Func Offset: 0x324
	// Line 753, Address: 0x4aa2b8, Func Offset: 0x328
	// Line 754, Address: 0x4aa2c0, Func Offset: 0x330
	// Line 755, Address: 0x4aa2c4, Func Offset: 0x334
	// Line 757, Address: 0x4aa2cc, Func Offset: 0x33c
	// Line 760, Address: 0x4aa2d4, Func Offset: 0x344
	// Line 761, Address: 0x4aa2d8, Func Offset: 0x348
	// Line 833, Address: 0x4aa2dc, Func Offset: 0x34c
	// Line 839, Address: 0x4aa310, Func Offset: 0x380
	// Line 840, Address: 0x4aa330, Func Offset: 0x3a0
	// Line 844, Address: 0x4aa33c, Func Offset: 0x3ac
	// Line 739, Address: 0x4aa348, Func Offset: 0x3b8
	// Line 744, Address: 0x4aa350, Func Offset: 0x3c0
	// Line 844, Address: 0x4aa358, Func Offset: 0x3c8
	// Line 825, Address: 0x4aa380, Func Offset: 0x3f0
	// Line 844, Address: 0x4aa384, Func Offset: 0x3f4
	// Line 825, Address: 0x4aa388, Func Offset: 0x3f8
	// Line 844, Address: 0x4aa38c, Func Offset: 0x3fc
	// Line 845, Address: 0x4aa3a8, Func Offset: 0x418
	// Func End, Address: 0x4aa3c4, Func Offset: 0x434
}

// iPadTRCUpdate__FP8_tagxPad
// Start address: 0x4aa3d0
void iPadTRCUpdate(_tagxPad* pad)
{
	// Line 568, Address: 0x4aa3d0, Func Offset: 0
	// Line 569, Address: 0x4aa3d4, Func Offset: 0x4
	// Line 568, Address: 0x4aa3d8, Func Offset: 0x8
	// Line 569, Address: 0x4aa3dc, Func Offset: 0xc
	// Line 568, Address: 0x4aa3e0, Func Offset: 0x10
	// Line 569, Address: 0x4aa3e4, Func Offset: 0x14
	// Line 568, Address: 0x4aa3e8, Func Offset: 0x18
	// Line 569, Address: 0x4aa3f8, Func Offset: 0x28
	// Line 576, Address: 0x4aa430, Func Offset: 0x60
	// Line 577, Address: 0x4aa44c, Func Offset: 0x7c
	// Line 576, Address: 0x4aa454, Func Offset: 0x84
	// Line 577, Address: 0x4aa460, Func Offset: 0x90
	// Line 581, Address: 0x4aa46c, Func Offset: 0x9c
	// Line 584, Address: 0x4aa474, Func Offset: 0xa4
	// Line 585, Address: 0x4aa490, Func Offset: 0xc0
	// Line 584, Address: 0x4aa498, Func Offset: 0xc8
	// Line 585, Address: 0x4aa4a4, Func Offset: 0xd4
	// Line 589, Address: 0x4aa4b0, Func Offset: 0xe0
	// Line 592, Address: 0x4aa4b8, Func Offset: 0xe8
	// Line 601, Address: 0x4aa4c8, Func Offset: 0xf8
	// Line 602, Address: 0x4aa4cc, Func Offset: 0xfc
	// Line 603, Address: 0x4aa4d0, Func Offset: 0x100
	// Line 604, Address: 0x4aa4d4, Func Offset: 0x104
	// Line 605, Address: 0x4aa4d8, Func Offset: 0x108
	// Line 606, Address: 0x4aa4dc, Func Offset: 0x10c
	// Line 607, Address: 0x4aa4e0, Func Offset: 0x110
	// Line 608, Address: 0x4aa4e4, Func Offset: 0x114
	// Func End, Address: 0x4aa4f4, Func Offset: 0x124
}

// iPadEnable__FP8_tagxPads
// Start address: 0x4aa500
_tagxPad* iPadEnable(_tagxPad* pad, int16 port)
{
	_tagPadInit pad_init;
	// Line 517, Address: 0x4aa500, Func Offset: 0
	// Line 518, Address: 0x4aa50c, Func Offset: 0xc
	// Line 521, Address: 0x4aa514, Func Offset: 0x14
	// Line 525, Address: 0x4aa518, Func Offset: 0x18
	// Line 526, Address: 0x4aa51c, Func Offset: 0x1c
	// Line 527, Address: 0x4aa520, Func Offset: 0x20
	// Line 550, Address: 0x4aa524, Func Offset: 0x24
	// Line 553, Address: 0x4aa530, Func Offset: 0x30
	// Line 557, Address: 0x4aa540, Func Offset: 0x40
	// Line 560, Address: 0x4aa550, Func Offset: 0x50
	// Line 561, Address: 0x4aa558, Func Offset: 0x58
	// Line 563, Address: 0x4aa560, Func Offset: 0x60
	// Line 564, Address: 0x4aa564, Func Offset: 0x64
	// Func End, Address: 0x4aa574, Func Offset: 0x74
}

// iPadEnableGuts__FP8_tagxPadP11_tagPadInit
// Start address: 0x4aa580
_tagxPad* iPadEnableGuts(_tagxPad* pad, _tagPadInit* pad_init)
{
	int32 i;
	int32 id;
	int32 exid;
	uint8 tryOpen;
	int32 state2;
	int32 state3;
	int32 state4;
	int32 state5;
	// Line 109, Address: 0x4aa580, Func Offset: 0
	// Line 119, Address: 0x4aa594, Func Offset: 0x14
	// Line 127, Address: 0x4aa5c0, Func Offset: 0x40
	// Line 131, Address: 0x4aa5d0, Func Offset: 0x50
	// Line 141, Address: 0x4aa5e8, Func Offset: 0x68
	// Line 142, Address: 0x4aa5ec, Func Offset: 0x6c
	// Line 149, Address: 0x4aa5f4, Func Offset: 0x74
	// Line 150, Address: 0x4aa604, Func Offset: 0x84
	// Line 152, Address: 0x4aa608, Func Offset: 0x88
	// Line 171, Address: 0x4aa630, Func Offset: 0xb0
	// Line 172, Address: 0x4aa634, Func Offset: 0xb4
	// Line 200, Address: 0x4aa640, Func Offset: 0xc0
	// Line 210, Address: 0x4aa648, Func Offset: 0xc8
	// Line 212, Address: 0x4aa654, Func Offset: 0xd4
	// Line 214, Address: 0x4aa664, Func Offset: 0xe4
	// Line 215, Address: 0x4aa668, Func Offset: 0xe8
	// Line 218, Address: 0x4aa66c, Func Offset: 0xec
	// Line 233, Address: 0x4aa674, Func Offset: 0xf4
	// Line 234, Address: 0x4aa688, Func Offset: 0x108
	// Line 235, Address: 0x4aa6a4, Func Offset: 0x124
	// Line 236, Address: 0x4aa6b0, Func Offset: 0x130
	// Line 238, Address: 0x4aa6b8, Func Offset: 0x138
	// Line 240, Address: 0x4aa6bc, Func Offset: 0x13c
	// Line 238, Address: 0x4aa6c0, Func Offset: 0x140
	// Line 240, Address: 0x4aa6c4, Func Offset: 0x144
	// Line 313, Address: 0x4aa6d0, Func Offset: 0x150
	// Line 327, Address: 0x4aa6e0, Func Offset: 0x160
	// Line 336, Address: 0x4aa6e4, Func Offset: 0x164
	// Line 340, Address: 0x4aa6ec, Func Offset: 0x16c
	// Line 341, Address: 0x4aa6fc, Func Offset: 0x17c
	// Line 345, Address: 0x4aa708, Func Offset: 0x188
	// Line 348, Address: 0x4aa710, Func Offset: 0x190
	// Line 349, Address: 0x4aa718, Func Offset: 0x198
	// Line 357, Address: 0x4aa720, Func Offset: 0x1a0
	// Line 366, Address: 0x4aa728, Func Offset: 0x1a8
	// Line 371, Address: 0x4aa744, Func Offset: 0x1c4
	// Line 375, Address: 0x4aa75c, Func Offset: 0x1dc
	// Line 425, Address: 0x4aa764, Func Offset: 0x1e4
	// Line 427, Address: 0x4aa774, Func Offset: 0x1f4
	// Line 436, Address: 0x4aa784, Func Offset: 0x204
	// Line 440, Address: 0x4aa790, Func Offset: 0x210
	// Line 442, Address: 0x4aa794, Func Offset: 0x214
	// Line 440, Address: 0x4aa798, Func Offset: 0x218
	// Line 447, Address: 0x4aa7a0, Func Offset: 0x220
	// Line 490, Address: 0x4aa7a8, Func Offset: 0x228
	// Line 491, Address: 0x4aa7ac, Func Offset: 0x22c
	// Line 490, Address: 0x4aa7b0, Func Offset: 0x230
	// Line 491, Address: 0x4aa7b4, Func Offset: 0x234
	// Line 492, Address: 0x4aa7b8, Func Offset: 0x238
	// Line 505, Address: 0x4aa7c0, Func Offset: 0x240
	// Line 228, Address: 0x4aa7cc, Func Offset: 0x24c
	// Line 505, Address: 0x4aa7d4, Func Offset: 0x254
	// Line 245, Address: 0x4aa7d8, Func Offset: 0x258
	// Line 505, Address: 0x4aa7dc, Func Offset: 0x25c
	// Line 251, Address: 0x4aa7f0, Func Offset: 0x270
	// Line 505, Address: 0x4aa7f4, Func Offset: 0x274
	// Line 251, Address: 0x4aa7fc, Func Offset: 0x27c
	// Line 252, Address: 0x4aa800, Func Offset: 0x280
	// Line 505, Address: 0x4aa808, Func Offset: 0x288
	// Line 258, Address: 0x4aa80c, Func Offset: 0x28c
	// Line 505, Address: 0x4aa810, Func Offset: 0x290
	// Line 265, Address: 0x4aa830, Func Offset: 0x2b0
	// Line 505, Address: 0x4aa834, Func Offset: 0x2b4
	// Line 272, Address: 0x4aa85c, Func Offset: 0x2dc
	// Line 505, Address: 0x4aa860, Func Offset: 0x2e0
	// Line 274, Address: 0x4aa870, Func Offset: 0x2f0
	// Line 505, Address: 0x4aa874, Func Offset: 0x2f4
	// Line 287, Address: 0x4aa87c, Func Offset: 0x2fc
	// Line 312, Address: 0x4aa880, Func Offset: 0x300
	// Line 505, Address: 0x4aa888, Func Offset: 0x308
	// Line 319, Address: 0x4aa890, Func Offset: 0x310
	// Line 322, Address: 0x4aa894, Func Offset: 0x314
	// Line 378, Address: 0x4aa89c, Func Offset: 0x31c
	// Line 384, Address: 0x4aa8a0, Func Offset: 0x320
	// Line 389, Address: 0x4aa8a8, Func Offset: 0x328
	// Line 505, Address: 0x4aa8ac, Func Offset: 0x32c
	// Line 392, Address: 0x4aa8b0, Func Offset: 0x330
	// Line 505, Address: 0x4aa8b4, Func Offset: 0x334
	// Line 393, Address: 0x4aa8c8, Func Offset: 0x348
	// Line 505, Address: 0x4aa8cc, Func Offset: 0x34c
	// Line 411, Address: 0x4aa928, Func Offset: 0x3a8
	// Line 398, Address: 0x4aa930, Func Offset: 0x3b0
	// Line 401, Address: 0x4aa934, Func Offset: 0x3b4
	// Line 414, Address: 0x4aa93c, Func Offset: 0x3bc
	// Line 421, Address: 0x4aa940, Func Offset: 0x3c0
	// Line 431, Address: 0x4aa948, Func Offset: 0x3c8
	// Line 435, Address: 0x4aa94c, Func Offset: 0x3cc
	// Line 506, Address: 0x4aa954, Func Offset: 0x3d4
	// Func End, Address: 0x4aa968, Func Offset: 0x3e8
}

// iPadInit__Fv
// Start address: 0x4aa970
int32 iPadInit()
{
	// Line 86, Address: 0x4aa970, Func Offset: 0
	// Line 91, Address: 0x4aa974, Func Offset: 0x4
	// Line 86, Address: 0x4aa978, Func Offset: 0x8
	// Line 91, Address: 0x4aa97c, Func Offset: 0xc
	// Line 92, Address: 0x4aa988, Func Offset: 0x18
	// Line 95, Address: 0x4aa99c, Func Offset: 0x2c
	// Line 106, Address: 0x4aa9a4, Func Offset: 0x34
	// Line 105, Address: 0x4aa9a8, Func Offset: 0x38
	// Line 106, Address: 0x4aa9ac, Func Offset: 0x3c
	// Func End, Address: 0x4aa9b4, Func Offset: 0x44
}

