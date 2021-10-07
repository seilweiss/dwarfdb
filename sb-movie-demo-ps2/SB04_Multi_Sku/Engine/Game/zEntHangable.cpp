



void zEntHangable_Reset(zEntHangable* ent);
void zEntHangable_Load(zEntHangable* ent, xSerial* s);
void zEntHangable_Save(zEntHangable* ent, xSerial* s);
void zEntHangableEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEntHangable_Update();
void zEntHangable_Init(void* ent, void* asset);
void HangableSetup(zEntHangable* ent, xEntAsset* asset);
void zEntHangable_SetupFX();

// zEntHangable_Reset__FP12zEntHangable
// Start address: 0x357170
void zEntHangable_Reset(zEntHangable* ent)
{
	// Line 623, Address: 0x357170, Func Offset: 0
	// Line 624, Address: 0x35717c, Func Offset: 0xc
	// Line 627, Address: 0x357188, Func Offset: 0x18
	// Line 630, Address: 0x357190, Func Offset: 0x20
	// Line 631, Address: 0x35719c, Func Offset: 0x2c
	// Func End, Address: 0x3571b8, Func Offset: 0x48
}

// zEntHangable_Load__FP12zEntHangableP7xSerial
// Start address: 0x3571c0
void zEntHangable_Load(zEntHangable* ent, xSerial* s)
{
	// Line 615, Address: 0x3571c0, Func Offset: 0
	// Func End, Address: 0x3571c8, Func Offset: 0x8
}

// zEntHangable_Save__FP12zEntHangableP7xSerial
// Start address: 0x3571d0
void zEntHangable_Save(zEntHangable* ent, xSerial* s)
{
	// Line 596, Address: 0x3571d0, Func Offset: 0
	// Func End, Address: 0x3571d8, Func Offset: 0x8
}

// zEntHangableEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x3571e0
void zEntHangableEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	zEntHangable* ent;
	zEnt* follow;
	FloatAndVoid dist;
	// Line 327, Address: 0x3571e0, Func Offset: 0
	// Line 334, Address: 0x3571e4, Func Offset: 0x4
	// Line 327, Address: 0x3571e8, Func Offset: 0x8
	// Line 331, Address: 0x357200, Func Offset: 0x20
	// Line 327, Address: 0x357204, Func Offset: 0x24
	// Line 332, Address: 0x357214, Func Offset: 0x34
	// Line 334, Address: 0x357220, Func Offset: 0x40
	// Line 338, Address: 0x3572d8, Func Offset: 0xf8
	// Line 340, Address: 0x3572f8, Func Offset: 0x118
	// Line 345, Address: 0x357300, Func Offset: 0x120
	// Line 346, Address: 0x357320, Func Offset: 0x140
	// Line 351, Address: 0x357328, Func Offset: 0x148
	// Line 352, Address: 0x35732c, Func Offset: 0x14c
	// Line 358, Address: 0x357334, Func Offset: 0x154
	// Line 361, Address: 0x35733c, Func Offset: 0x15c
	// Line 362, Address: 0x357340, Func Offset: 0x160
	// Line 366, Address: 0x357348, Func Offset: 0x168
	// Line 367, Address: 0x357418, Func Offset: 0x238
	// Line 369, Address: 0x357438, Func Offset: 0x258
	// Line 371, Address: 0x35743c, Func Offset: 0x25c
	// Line 374, Address: 0x357444, Func Offset: 0x264
	// Line 375, Address: 0x357448, Func Offset: 0x268
	// Line 378, Address: 0x357450, Func Offset: 0x270
	// Line 382, Address: 0x357470, Func Offset: 0x290
	// Line 383, Address: 0x357474, Func Offset: 0x294
	// Line 386, Address: 0x35747c, Func Offset: 0x29c
	// Line 391, Address: 0x35749c, Func Offset: 0x2bc
	// Line 394, Address: 0x3574a4, Func Offset: 0x2c4
	// Line 395, Address: 0x3574c4, Func Offset: 0x2e4
	// Line 402, Address: 0x3574cc, Func Offset: 0x2ec
	// Line 407, Address: 0x3574e4, Func Offset: 0x304
	// Line 408, Address: 0x3574f0, Func Offset: 0x310
	// Line 412, Address: 0x357504, Func Offset: 0x324
	// Line 413, Address: 0x357508, Func Offset: 0x328
	// Line 412, Address: 0x35750c, Func Offset: 0x32c
	// Line 413, Address: 0x357510, Func Offset: 0x330
	// Line 416, Address: 0x35751c, Func Offset: 0x33c
	// Line 423, Address: 0x357524, Func Offset: 0x344
	// Line 429, Address: 0x357530, Func Offset: 0x350
	// Line 431, Address: 0x357550, Func Offset: 0x370
	// Line 435, Address: 0x35755c, Func Offset: 0x37c
	// Line 436, Address: 0x357564, Func Offset: 0x384
	// Line 437, Address: 0x357578, Func Offset: 0x398
	// Line 440, Address: 0x357580, Func Offset: 0x3a0
	// Line 404, Address: 0x35759c, Func Offset: 0x3bc
	// Line 440, Address: 0x3575a4, Func Offset: 0x3c4
	// Line 409, Address: 0x3575a8, Func Offset: 0x3c8
	// Line 440, Address: 0x3575ac, Func Offset: 0x3cc
	// Line 410, Address: 0x3575b4, Func Offset: 0x3d4
	// Line 441, Address: 0x3575bc, Func Offset: 0x3dc
	// Func End, Address: 0x3575e8, Func Offset: 0x408
}

// zEntHangable_Update__FP12zEntHangableP6xScenef
// Start address: 0x3575f0
void zEntHangable_Update()
{
	// Line 300, Address: 0x3575f0, Func Offset: 0
	// Func End, Address: 0x3575f8, Func Offset: 0x8
}

// zEntHangable_Init__FPvPv
// Start address: 0x357600
void zEntHangable_Init(void* ent, void* asset)
{
	// Line 127, Address: 0x357600, Func Offset: 0
	// Line 128, Address: 0x357604, Func Offset: 0x4
	// Line 127, Address: 0x357608, Func Offset: 0x8
	// Line 128, Address: 0x35760c, Func Offset: 0xc
	// Line 127, Address: 0x357610, Func Offset: 0x10
	// Line 128, Address: 0x35761c, Func Offset: 0x1c
	// Line 129, Address: 0x357650, Func Offset: 0x50
	// Func End, Address: 0x357664, Func Offset: 0x64
}

// HangableSetup__FP12zEntHangableP9xEntAsset
// Start address: 0x357670
void HangableSetup(zEntHangable* ent, xEntAsset* asset)
{
	xEntHangableAsset* hangAsset;
	xVec3* center;
	xMat3x3 hackMat;
	// Line 67, Address: 0x357670, Func Offset: 0
	// Line 75, Address: 0x357674, Func Offset: 0x4
	// Line 67, Address: 0x357678, Func Offset: 0x8
	// Line 77, Address: 0x35767c, Func Offset: 0xc
	// Line 67, Address: 0x357680, Func Offset: 0x10
	// Line 75, Address: 0x357684, Func Offset: 0x14
	// Line 72, Address: 0x357688, Func Offset: 0x18
	// Line 77, Address: 0x35768c, Func Offset: 0x1c
	// Line 73, Address: 0x357690, Func Offset: 0x20
	// Line 71, Address: 0x357694, Func Offset: 0x24
	// Line 74, Address: 0x357698, Func Offset: 0x28
	// Line 99, Address: 0x35769c, Func Offset: 0x2c
	// Line 75, Address: 0x3576a0, Func Offset: 0x30
	// Line 76, Address: 0x3576a8, Func Offset: 0x38
	// Line 101, Address: 0x3576ac, Func Offset: 0x3c
	// Line 77, Address: 0x3576b0, Func Offset: 0x40
	// Line 80, Address: 0x3576b4, Func Offset: 0x44
	// Line 82, Address: 0x3576b8, Func Offset: 0x48
	// Line 83, Address: 0x3576bc, Func Offset: 0x4c
	// Line 84, Address: 0x3576c4, Func Offset: 0x54
	// Line 85, Address: 0x3576d4, Func Offset: 0x64
	// Line 87, Address: 0x3576dc, Func Offset: 0x6c
	// Line 88, Address: 0x3576e4, Func Offset: 0x74
	// Line 89, Address: 0x3576f4, Func Offset: 0x84
	// Line 91, Address: 0x3576fc, Func Offset: 0x8c
	// Line 95, Address: 0x357708, Func Offset: 0x98
	// Line 96, Address: 0x35770c, Func Offset: 0x9c
	// Line 97, Address: 0x357710, Func Offset: 0xa0
	// Line 98, Address: 0x357714, Func Offset: 0xa4
	// Line 99, Address: 0x357718, Func Offset: 0xa8
	// Line 100, Address: 0x35771c, Func Offset: 0xac
	// Line 101, Address: 0x357720, Func Offset: 0xb0
	// Line 102, Address: 0x357724, Func Offset: 0xb4
	// Line 110, Address: 0x35772c, Func Offset: 0xbc
	// Line 111, Address: 0x357740, Func Offset: 0xd0
	// Line 124, Address: 0x357758, Func Offset: 0xe8
	// Func End, Address: 0x357768, Func Offset: 0xf8
}

// zEntHangable_SetupFX__Fv
// Start address: 0x357770
void zEntHangable_SetupFX()
{
	// Line 56, Address: 0x357770, Func Offset: 0
	// Line 58, Address: 0x357774, Func Offset: 0x4
	// Line 56, Address: 0x357778, Func Offset: 0x8
	// Line 58, Address: 0x35777c, Func Offset: 0xc
	// Line 59, Address: 0x357784, Func Offset: 0x14
	// Line 58, Address: 0x357788, Func Offset: 0x18
	// Line 59, Address: 0x35778c, Func Offset: 0x1c
	// Line 60, Address: 0x357794, Func Offset: 0x24
	// Line 59, Address: 0x357798, Func Offset: 0x28
	// Line 60, Address: 0x35779c, Func Offset: 0x2c
	// Line 62, Address: 0x3577a4, Func Offset: 0x34
	// Line 60, Address: 0x3577a8, Func Offset: 0x38
	// Line 62, Address: 0x3577ac, Func Offset: 0x3c
	// Line 63, Address: 0x3577b4, Func Offset: 0x44
	// Func End, Address: 0x3577c0, Func Offset: 0x50
}

