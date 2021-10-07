



uint32 xrand_RandomChoice(uint32& chosenMask, uint8& setBits, uint32 maxCount, xRandomChoiceRule rule);
float32 xrand_GenRandFloat();
uint32 xrand_GenRandInt32();
void xrand_SetRandomSeed(uint32 nNewSeed);
void xrand_RandomInit();
void init_by_array(uint32* init_key, uint32 key_length);

// xrand_RandomChoice__FRUiRUcUi17xRandomChoiceRule
// Start address: 0x3a2730
uint32 xrand_RandomChoice(uint32& chosenMask, uint8& setBits, uint32 maxCount, xRandomChoiceRule rule)
{
	uint32 choice;
	uint32 ithUnplayed;
	uint32 testMask;
	// Line 282, Address: 0x3a2730, Func Offset: 0
	// Line 286, Address: 0x3a2770, Func Offset: 0x40
	// Line 287, Address: 0x3a28a0, Func Offset: 0x170
	// Line 286, Address: 0x3a28a4, Func Offset: 0x174
	// Line 287, Address: 0x3a28e4, Func Offset: 0x1b4
	// Line 288, Address: 0x3a2904, Func Offset: 0x1d4
	// Line 289, Address: 0x3a290c, Func Offset: 0x1dc
	// Line 292, Address: 0x3a2914, Func Offset: 0x1e4
	// Line 293, Address: 0x3a2a84, Func Offset: 0x354
	// Line 297, Address: 0x3a2a8c, Func Offset: 0x35c
	// Line 298, Address: 0x3a2bc8, Func Offset: 0x498
	// Line 297, Address: 0x3a2bcc, Func Offset: 0x49c
	// Line 298, Address: 0x3a2be4, Func Offset: 0x4b4
	// Line 297, Address: 0x3a2be8, Func Offset: 0x4b8
	// Line 301, Address: 0x3a2c14, Func Offset: 0x4e4
	// Line 309, Address: 0x3a2c20, Func Offset: 0x4f0
	// Line 311, Address: 0x3a2c24, Func Offset: 0x4f4
	// Line 329, Address: 0x3a2c2c, Func Offset: 0x4fc
	// Line 330, Address: 0x3a2c30, Func Offset: 0x500
	// Line 331, Address: 0x3a2c34, Func Offset: 0x504
	// Line 332, Address: 0x3a2c48, Func Offset: 0x518
	// Line 333, Address: 0x3a2c54, Func Offset: 0x524
	// Line 335, Address: 0x3a2c60, Func Offset: 0x530
	// Line 338, Address: 0x3a2c64, Func Offset: 0x534
	// Line 340, Address: 0x3a2c6c, Func Offset: 0x53c
	// Line 342, Address: 0x3a2c78, Func Offset: 0x548
	// Line 344, Address: 0x3a2df0, Func Offset: 0x6c0
	// Line 345, Address: 0x3a2df4, Func Offset: 0x6c4
	// Line 346, Address: 0x3a2dfc, Func Offset: 0x6cc
	// Line 348, Address: 0x3a2e08, Func Offset: 0x6d8
	// Line 352, Address: 0x3a2e0c, Func Offset: 0x6dc
	// Line 320, Address: 0x3a2e5c, Func Offset: 0x72c
	// Line 352, Address: 0x3a2e64, Func Offset: 0x734
	// Line 327, Address: 0x3a2e68, Func Offset: 0x738
	// Line 353, Address: 0x3a2e70, Func Offset: 0x740
	// Func End, Address: 0x3a2e78, Func Offset: 0x748
}

// xrand_GenRandFloat__Fv
// Start address: 0x3a2e80
float32 xrand_GenRandFloat()
{
	uint32 y;
	// Line 166, Address: 0x3a2e80, Func Offset: 0
	// Line 167, Address: 0x3a2fa4, Func Offset: 0x124
	// Line 171, Address: 0x3a2fa8, Func Offset: 0x128
	// Line 172, Address: 0x3a2fb0, Func Offset: 0x130
	// Line 180, Address: 0x3a2fb4, Func Offset: 0x134
	// Line 167, Address: 0x3a2fbc, Func Offset: 0x13c
	// Line 170, Address: 0x3a2fc8, Func Offset: 0x148
	// Line 171, Address: 0x3a2fd0, Func Offset: 0x150
	// Line 172, Address: 0x3a2fdc, Func Offset: 0x15c
	// Line 173, Address: 0x3a2fe8, Func Offset: 0x168
	// Line 180, Address: 0x3a2ff0, Func Offset: 0x170
	// Line 181, Address: 0x3a301c, Func Offset: 0x19c
	// Func End, Address: 0x3a3024, Func Offset: 0x1a4
}

// xrand_GenRandInt32__Fv
// Start address: 0x3a3030
uint32 xrand_GenRandInt32()
{
	uint32 y;
	// Line 148, Address: 0x3a3030, Func Offset: 0
	// Line 149, Address: 0x3a3154, Func Offset: 0x124
	// Line 153, Address: 0x3a3158, Func Offset: 0x128
	// Line 154, Address: 0x3a3160, Func Offset: 0x130
	// Line 149, Address: 0x3a3164, Func Offset: 0x134
	// Line 152, Address: 0x3a3170, Func Offset: 0x140
	// Line 153, Address: 0x3a3178, Func Offset: 0x148
	// Line 154, Address: 0x3a3184, Func Offset: 0x154
	// Line 155, Address: 0x3a3190, Func Offset: 0x160
	// Line 158, Address: 0x3a3194, Func Offset: 0x164
	// Func End, Address: 0x3a319c, Func Offset: 0x16c
}

// xrand_SetRandomSeed__FUi
// Start address: 0x3a31a0
void xrand_SetRandomSeed(uint32 nNewSeed)
{
	// Line 123, Address: 0x3a31a0, Func Offset: 0
	// Line 124, Address: 0x3a338c, Func Offset: 0x1ec
	// Func End, Address: 0x3a3394, Func Offset: 0x1f4
}

// xrand_RandomInit__Fv
// Start address: 0x3a33a0
void xrand_RandomInit()
{
	uint32 init[4];
	// Line 116, Address: 0x3a33a0, Func Offset: 0
	// Line 117, Address: 0x3a33a4, Func Offset: 0x4
	// Line 116, Address: 0x3a33a8, Func Offset: 0x8
	// Line 117, Address: 0x3a33ac, Func Offset: 0xc
	// Line 118, Address: 0x3a33bc, Func Offset: 0x1c
	// Line 117, Address: 0x3a33c0, Func Offset: 0x20
	// Line 118, Address: 0x3a33dc, Func Offset: 0x3c
	// Line 119, Address: 0x3a33e4, Func Offset: 0x44
	// Func End, Address: 0x3a33f0, Func Offset: 0x50
}

// init_by_array__FPUiUi
// Start address: 0x3a33f0
void init_by_array(uint32* init_key, uint32 key_length)
{
	int32 i;
	int32 k;
	uint32 j;
	// Line 90, Address: 0x3a33f0, Func Offset: 0
	// Line 93, Address: 0x3a33f4, Func Offset: 0x4
	// Line 90, Address: 0x3a33fc, Func Offset: 0xc
	// Line 93, Address: 0x3a3400, Func Offset: 0x10
	// Line 95, Address: 0x3a3544, Func Offset: 0x154
	// Line 94, Address: 0x3a3548, Func Offset: 0x158
	// Line 93, Address: 0x3a354c, Func Offset: 0x15c
	// Line 95, Address: 0x3a35f4, Func Offset: 0x204
	// Line 96, Address: 0x3a3608, Func Offset: 0x218
	// Line 97, Address: 0x3a3610, Func Offset: 0x220
	// Line 114, Address: 0x3a3614, Func Offset: 0x224
	// Line 101, Address: 0x3a361c, Func Offset: 0x22c
	// Line 96, Address: 0x3a3620, Func Offset: 0x230
	// Line 97, Address: 0x3a3624, Func Offset: 0x234
	// Line 96, Address: 0x3a3630, Func Offset: 0x240
	// Line 97, Address: 0x3a3634, Func Offset: 0x244
	// Line 96, Address: 0x3a3638, Func Offset: 0x248
	// Line 100, Address: 0x3a363c, Func Offset: 0x24c
	// Line 97, Address: 0x3a3640, Func Offset: 0x250
	// Line 101, Address: 0x3a3644, Func Offset: 0x254
	// Line 97, Address: 0x3a3648, Func Offset: 0x258
	// Line 101, Address: 0x3a3668, Func Offset: 0x278
	// Line 102, Address: 0x3a3670, Func Offset: 0x280
	// Line 103, Address: 0x3a3680, Func Offset: 0x290
	// Line 104, Address: 0x3a3690, Func Offset: 0x2a0
	// Line 105, Address: 0x3a3698, Func Offset: 0x2a8
	// Line 114, Address: 0x3a369c, Func Offset: 0x2ac
	// Line 109, Address: 0x3a36a4, Func Offset: 0x2b4
	// Line 104, Address: 0x3a36a8, Func Offset: 0x2b8
	// Line 105, Address: 0x3a36ac, Func Offset: 0x2bc
	// Line 104, Address: 0x3a36b4, Func Offset: 0x2c4
	// Line 105, Address: 0x3a36bc, Func Offset: 0x2cc
	// Line 108, Address: 0x3a36d4, Func Offset: 0x2e4
	// Line 109, Address: 0x3a36d8, Func Offset: 0x2e8
	// Line 110, Address: 0x3a36e4, Func Offset: 0x2f4
	// Line 112, Address: 0x3a36f4, Func Offset: 0x304
	// Line 113, Address: 0x3a3700, Func Offset: 0x310
	// Line 114, Address: 0x3a3708, Func Offset: 0x318
	// Line 101, Address: 0x3a3714, Func Offset: 0x324
	// Line 114, Address: 0x3a3720, Func Offset: 0x330
	// Line 109, Address: 0x3a3724, Func Offset: 0x334
	// Line 114, Address: 0x3a3730, Func Offset: 0x340
	// Func End, Address: 0x3a373c, Func Offset: 0x34c
}

