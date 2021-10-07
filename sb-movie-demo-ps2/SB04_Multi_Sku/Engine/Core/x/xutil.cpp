



void isort_float(void* base, uint32 num, uint32 width, uint32 key_offset);
void quicksort_istr(void* base, uint32 num, uint32 width, uint32 key_offset);
void quicksort_float(void* base, uint32 num, uint32 width, uint32 key_offset);
void quicksort_int(void* base, uint32 num, uint32 width, uint32 key_offset);
int32 xUtil_yesno(float32 wt_yes);
uint8 itoBCD(uint16 dec);
uint8 itoBCD(uint8 dec);
uint8 BCDtoi(uint8 hex);
void strtosjis(uint8* string, uint8* dest);
uint32 xUtil_crc_update(uint32 crc_accum, int8* data, int32 datasize);
uint32 xUtil_crc_init();
int8* xUtil_idtag2string(uint32 srctag, int32 bufidx);
int32 xUtilShutdown();
int32 xUtilStartup();

// isort_float__FPvUiUiUi
// Start address: 0x447090
void isort_float(void* base, uint32 num, uint32 width, uint32 key_offset)
{
	// Line 1088, Address: 0x447090, Func Offset: 0
	// Line 1090, Address: 0x447098, Func Offset: 0x8
	// Line 1091, Address: 0x4470a0, Func Offset: 0x10
	// Func End, Address: 0x4470ac, Func Offset: 0x1c
}

// quicksort_istr__FPvUiUiUi
// Start address: 0x4470b0
void quicksort_istr(void* base, uint32 num, uint32 width, uint32 key_offset)
{
	// Line 1077, Address: 0x4470b0, Func Offset: 0
	// Line 1079, Address: 0x4470b8, Func Offset: 0x8
	// Line 1080, Address: 0x4470c0, Func Offset: 0x10
	// Func End, Address: 0x4470cc, Func Offset: 0x1c
}

// quicksort_float__FPvUiUiUi
// Start address: 0x4470d0
void quicksort_float(void* base, uint32 num, uint32 width, uint32 key_offset)
{
	// Line 1067, Address: 0x4470d0, Func Offset: 0
	// Line 1069, Address: 0x4470d8, Func Offset: 0x8
	// Line 1070, Address: 0x4470e0, Func Offset: 0x10
	// Func End, Address: 0x4470ec, Func Offset: 0x1c
}

// quicksort_int__FPvUiUiUi
// Start address: 0x4470f0
void quicksort_int(void* base, uint32 num, uint32 width, uint32 key_offset)
{
	// Line 1055, Address: 0x4470f0, Func Offset: 0
	// Line 1057, Address: 0x4470f8, Func Offset: 0x8
	// Line 1058, Address: 0x447100, Func Offset: 0x10
	// Func End, Address: 0x44710c, Func Offset: 0x1c
}

// xUtil_yesno__Ff
// Start address: 0x447110
int32 xUtil_yesno(float32 wt_yes)
{
	// Line 720, Address: 0x447110, Func Offset: 0
	// Line 723, Address: 0x447118, Func Offset: 0x8
	// Line 720, Address: 0x44711c, Func Offset: 0xc
	// Line 723, Address: 0x447124, Func Offset: 0x14
	// Line 724, Address: 0x447130, Func Offset: 0x20
	// Line 723, Address: 0x447150, Func Offset: 0x40
	// Line 725, Address: 0x447158, Func Offset: 0x48
	// Line 727, Address: 0x4471ac, Func Offset: 0x9c
	// Func End, Address: 0x4471bc, Func Offset: 0xac
}

// itoBCD__FUs
// Start address: 0x4471c0
uint8 itoBCD(uint16 dec)
{
	int32 ones;
	// Line 706, Address: 0x4471c4, Func Offset: 0x4
	// Line 710, Address: 0x4471cc, Func Offset: 0xc
	// Line 706, Address: 0x4471d4, Func Offset: 0x14
	// Line 710, Address: 0x4471d8, Func Offset: 0x18
	// Line 711, Address: 0x447208, Func Offset: 0x48
	// Func End, Address: 0x447210, Func Offset: 0x50
}

// itoBCD__FUc
// Start address: 0x447210
uint8 itoBCD(uint8 dec)
{
	int32 ones;
	// Line 700, Address: 0x447214, Func Offset: 0x4
	// Line 702, Address: 0x44721c, Func Offset: 0xc
	// Line 700, Address: 0x447224, Func Offset: 0x14
	// Line 702, Address: 0x447228, Func Offset: 0x18
	// Line 703, Address: 0x447258, Func Offset: 0x48
	// Func End, Address: 0x447260, Func Offset: 0x50
}

// BCDtoi__FUc
// Start address: 0x447260
uint8 BCDtoi(uint8 hex)
{
	int8 c[16];
	// Line 693, Address: 0x447260, Func Offset: 0
	// Line 695, Address: 0x447264, Func Offset: 0x4
	// Line 693, Address: 0x44726c, Func Offset: 0xc
	// Line 695, Address: 0x447270, Func Offset: 0x10
	// Line 696, Address: 0x44727c, Func Offset: 0x1c
	// Line 697, Address: 0x447284, Func Offset: 0x24
	// Line 696, Address: 0x447288, Func Offset: 0x28
	// Line 697, Address: 0x44728c, Func Offset: 0x2c
	// Func End, Address: 0x447294, Func Offset: 0x34
}

// strtosjis__FPUcPUc
// Start address: 0x4472a0
void strtosjis(uint8* string, uint8* dest)
{
	int32 i;
	int32 sjis_code;
	int32 ascii_code;
	uint8 stmp;
	uint8 stmp2;
	uint8* dest2;
	// Line 545, Address: 0x4472a0, Func Offset: 0
	// Line 558, Address: 0x4472c0, Func Offset: 0x20
	// Line 545, Address: 0x4472c4, Func Offset: 0x24
	// Line 551, Address: 0x4472c8, Func Offset: 0x28
	// Line 561, Address: 0x4472cc, Func Offset: 0x2c
	// Line 565, Address: 0x4472d0, Func Offset: 0x30
	// Line 566, Address: 0x4472d4, Func Offset: 0x34
	// Line 569, Address: 0x447324, Func Offset: 0x84
	// Line 571, Address: 0x44732c, Func Offset: 0x8c
	// Line 570, Address: 0x447330, Func Offset: 0x90
	// Line 572, Address: 0x447334, Func Offset: 0x94
	// Line 573, Address: 0x44734c, Func Offset: 0xac
	// Line 575, Address: 0x447358, Func Offset: 0xb8
	// Line 576, Address: 0x44736c, Func Offset: 0xcc
	// Line 578, Address: 0x447378, Func Offset: 0xd8
	// Line 579, Address: 0x44738c, Func Offset: 0xec
	// Line 581, Address: 0x447398, Func Offset: 0xf8
	// Line 582, Address: 0x4473ac, Func Offset: 0x10c
	// Line 584, Address: 0x4473b8, Func Offset: 0x118
	// Line 585, Address: 0x4473cc, Func Offset: 0x12c
	// Line 587, Address: 0x4473d8, Func Offset: 0x138
	// Line 588, Address: 0x4473ec, Func Offset: 0x14c
	// Line 590, Address: 0x4473f8, Func Offset: 0x158
	// Line 591, Address: 0x447410, Func Offset: 0x170
	// Line 595, Address: 0x447414, Func Offset: 0x174
	// Line 597, Address: 0x447418, Func Offset: 0x178
	// Line 598, Address: 0x447420, Func Offset: 0x180
	// Line 605, Address: 0x447440, Func Offset: 0x1a0
	// Line 606, Address: 0x44744c, Func Offset: 0x1ac
	// Line 607, Address: 0x447454, Func Offset: 0x1b4
	// Line 608, Address: 0x447460, Func Offset: 0x1c0
	// Line 593, Address: 0x447468, Func Offset: 0x1c8
	// Line 608, Address: 0x44746c, Func Offset: 0x1cc
	// Line 598, Address: 0x447484, Func Offset: 0x1e4
	// Line 608, Address: 0x447490, Func Offset: 0x1f0
	// Func End, Address: 0x4474d0, Func Offset: 0x230
}

// xUtil_crc_update__FUiPci
// Start address: 0x4474d0
uint32 xUtil_crc_update(uint32 crc_accum, int8* data, int32 datasize)
{
	int32 i;
	int32 j;
	// Line 518, Address: 0x4474d0, Func Offset: 0
	// Line 524, Address: 0x4474ec, Func Offset: 0x1c
	// Line 532, Address: 0x4474f8, Func Offset: 0x28
	// Line 530, Address: 0x447548, Func Offset: 0x78
	// Line 532, Address: 0x44754c, Func Offset: 0x7c
	// Line 531, Address: 0x447554, Func Offset: 0x84
	// Line 532, Address: 0x447558, Func Offset: 0x88
	// Line 530, Address: 0x447570, Func Offset: 0xa0
	// Line 532, Address: 0x447574, Func Offset: 0xa4
	// Line 531, Address: 0x447578, Func Offset: 0xa8
	// Line 532, Address: 0x44757c, Func Offset: 0xac
	// Line 530, Address: 0x447590, Func Offset: 0xc0
	// Line 532, Address: 0x447594, Func Offset: 0xc4
	// Line 531, Address: 0x447598, Func Offset: 0xc8
	// Line 530, Address: 0x44759c, Func Offset: 0xcc
	// Line 531, Address: 0x4475a0, Func Offset: 0xd0
	// Line 532, Address: 0x4475a4, Func Offset: 0xd4
	// Line 530, Address: 0x4475b0, Func Offset: 0xe0
	// Line 532, Address: 0x4475b4, Func Offset: 0xe4
	// Line 531, Address: 0x4475b8, Func Offset: 0xe8
	// Line 530, Address: 0x4475bc, Func Offset: 0xec
	// Line 531, Address: 0x4475c0, Func Offset: 0xf0
	// Line 532, Address: 0x4475c4, Func Offset: 0xf4
	// Line 530, Address: 0x4475d0, Func Offset: 0x100
	// Line 532, Address: 0x4475d4, Func Offset: 0x104
	// Line 531, Address: 0x4475d8, Func Offset: 0x108
	// Line 530, Address: 0x4475dc, Func Offset: 0x10c
	// Line 531, Address: 0x4475e0, Func Offset: 0x110
	// Line 532, Address: 0x4475e4, Func Offset: 0x114
	// Line 530, Address: 0x4475f0, Func Offset: 0x120
	// Line 532, Address: 0x4475f4, Func Offset: 0x124
	// Line 531, Address: 0x4475f8, Func Offset: 0x128
	// Line 530, Address: 0x4475fc, Func Offset: 0x12c
	// Line 531, Address: 0x447600, Func Offset: 0x130
	// Line 532, Address: 0x447604, Func Offset: 0x134
	// Line 530, Address: 0x447610, Func Offset: 0x140
	// Line 532, Address: 0x447614, Func Offset: 0x144
	// Line 531, Address: 0x447618, Func Offset: 0x148
	// Line 530, Address: 0x44761c, Func Offset: 0x14c
	// Line 531, Address: 0x447620, Func Offset: 0x150
	// Line 532, Address: 0x447624, Func Offset: 0x154
	// Line 530, Address: 0x447630, Func Offset: 0x160
	// Line 532, Address: 0x447634, Func Offset: 0x164
	// Line 531, Address: 0x447638, Func Offset: 0x168
	// Line 530, Address: 0x44763c, Func Offset: 0x16c
	// Line 531, Address: 0x447640, Func Offset: 0x170
	// Line 532, Address: 0x447644, Func Offset: 0x174
	// Line 530, Address: 0x447650, Func Offset: 0x180
	// Line 532, Address: 0x447654, Func Offset: 0x184
	// Line 531, Address: 0x447658, Func Offset: 0x188
	// Line 530, Address: 0x44765c, Func Offset: 0x18c
	// Line 531, Address: 0x447660, Func Offset: 0x190
	// Line 532, Address: 0x447664, Func Offset: 0x194
	// Line 530, Address: 0x44768c, Func Offset: 0x1bc
	// Line 532, Address: 0x447690, Func Offset: 0x1c0
	// Line 531, Address: 0x447694, Func Offset: 0x1c4
	// Line 532, Address: 0x447698, Func Offset: 0x1c8
	// Line 530, Address: 0x4476a4, Func Offset: 0x1d4
	// Line 531, Address: 0x4476a8, Func Offset: 0x1d8
	// Line 532, Address: 0x4476ac, Func Offset: 0x1dc
	// Line 534, Address: 0x4476c0, Func Offset: 0x1f0
	// Line 535, Address: 0x4476d8, Func Offset: 0x208
	// Func End, Address: 0x4476f0, Func Offset: 0x220
}

// xUtil_crc_init__Fv
// Start address: 0x4476f0
uint32 xUtil_crc_init()
{
	int32 i;
	int32 j;
	uint32 crc_accum;
	// Line 489, Address: 0x4476f0, Func Offset: 0
	// Line 492, Address: 0x4476fc, Func Offset: 0xc
	// Line 498, Address: 0x447700, Func Offset: 0x10
	// Line 497, Address: 0x447704, Func Offset: 0x14
	// Line 492, Address: 0x447708, Func Offset: 0x18
	// Line 498, Address: 0x447710, Func Offset: 0x20
	// Line 497, Address: 0x447714, Func Offset: 0x24
	// Line 494, Address: 0x447718, Func Offset: 0x28
	// Line 496, Address: 0x44771c, Func Offset: 0x2c
	// Line 497, Address: 0x447720, Func Offset: 0x30
	// Line 499, Address: 0x447734, Func Offset: 0x44
	// Line 501, Address: 0x447740, Func Offset: 0x50
	// Line 503, Address: 0x447744, Func Offset: 0x54
	// Line 506, Address: 0x447758, Func Offset: 0x68
	// Line 505, Address: 0x44775c, Func Offset: 0x6c
	// Line 506, Address: 0x447760, Func Offset: 0x70
	// Line 508, Address: 0x44776c, Func Offset: 0x7c
	// Line 511, Address: 0x447770, Func Offset: 0x80
	// Line 512, Address: 0x447774, Func Offset: 0x84
	// Func End, Address: 0x44777c, Func Offset: 0x8c
}

// xUtil_idtag2string__FUii
// Start address: 0x447780
int8* xUtil_idtag2string(uint32 srctag, int32 bufidx)
{
	uint32 tag;
	int8* strptr;
	int8* uc;
	int32 l;
	int8 t;
	int8 buf[10][6];
	// Line 208, Address: 0x447780, Func Offset: 0
	// Line 209, Address: 0x447784, Func Offset: 0x4
	// Line 215, Address: 0x447788, Func Offset: 0x8
	// Line 216, Address: 0x44779c, Func Offset: 0x1c
	// Line 222, Address: 0x4477b4, Func Offset: 0x34
	// Line 228, Address: 0x4477bc, Func Offset: 0x3c
	// Line 236, Address: 0x4477c8, Func Offset: 0x48
	// Line 240, Address: 0x4477f4, Func Offset: 0x74
	// Line 241, Address: 0x447820, Func Offset: 0xa0
	// Line 240, Address: 0x447824, Func Offset: 0xa4
	// Line 241, Address: 0x447828, Func Offset: 0xa8
	// Line 242, Address: 0x447850, Func Offset: 0xd0
	// Line 241, Address: 0x447854, Func Offset: 0xd4
	// Line 242, Address: 0x447858, Func Offset: 0xd8
	// Line 243, Address: 0x447880, Func Offset: 0x100
	// Line 242, Address: 0x447884, Func Offset: 0x104
	// Line 243, Address: 0x447888, Func Offset: 0x108
	// Line 244, Address: 0x4478b0, Func Offset: 0x130
	// Line 252, Address: 0x4478bc, Func Offset: 0x13c
	// Line 253, Address: 0x4478e8, Func Offset: 0x168
	// Line 252, Address: 0x4478ec, Func Offset: 0x16c
	// Line 253, Address: 0x4478f0, Func Offset: 0x170
	// Line 254, Address: 0x447918, Func Offset: 0x198
	// Line 253, Address: 0x44791c, Func Offset: 0x19c
	// Line 254, Address: 0x447920, Func Offset: 0x1a0
	// Line 255, Address: 0x447948, Func Offset: 0x1c8
	// Line 254, Address: 0x44794c, Func Offset: 0x1cc
	// Line 255, Address: 0x447950, Func Offset: 0x1d0
	// Line 262, Address: 0x447978, Func Offset: 0x1f8
	// Line 263, Address: 0x447984, Func Offset: 0x204
	// Line 266, Address: 0x447990, Func Offset: 0x210
	// Line 267, Address: 0x4479bc, Func Offset: 0x23c
	// Line 266, Address: 0x4479c0, Func Offset: 0x240
	// Line 267, Address: 0x4479c4, Func Offset: 0x244
	// Line 268, Address: 0x4479ec, Func Offset: 0x26c
	// Line 267, Address: 0x4479f0, Func Offset: 0x270
	// Line 268, Address: 0x4479f4, Func Offset: 0x274
	// Line 269, Address: 0x447a1c, Func Offset: 0x29c
	// Line 268, Address: 0x447a20, Func Offset: 0x2a0
	// Line 269, Address: 0x447a24, Func Offset: 0x2a4
	// Line 271, Address: 0x447a4c, Func Offset: 0x2cc
	// Line 274, Address: 0x447a50, Func Offset: 0x2d0
	// Line 215, Address: 0x447a5c, Func Offset: 0x2dc
	// Line 274, Address: 0x447a64, Func Offset: 0x2e4
	// Line 275, Address: 0x447a88, Func Offset: 0x308
	// Func End, Address: 0x447a94, Func Offset: 0x314
}

// xUtilShutdown__Fv
// Start address: 0x447aa0
int32 xUtilShutdown()
{
	// Line 190, Address: 0x447aa0, Func Offset: 0
	// Line 200, Address: 0x447aa8, Func Offset: 0x8
	// Func End, Address: 0x447ab0, Func Offset: 0x10
}

// xUtilStartup__Fv
// Start address: 0x447ab0
int32 xUtilStartup()
{
	// Line 169, Address: 0x447ab0, Func Offset: 0
	// Line 171, Address: 0x447ab8, Func Offset: 0x8
	// Line 184, Address: 0x447ac8, Func Offset: 0x18
	// Line 185, Address: 0x447ae0, Func Offset: 0x30
	// Func End, Address: 0x447aec, Func Offset: 0x3c
}

