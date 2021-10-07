



xSoundFX* xSoundFXGet(uint32 soundfxID);
void xSoundFXPlay(xSoundFX* t);
void xSoundFXEventCB(xBase* to, uint32 toEvent, float32* toParam);
void xSoundFXInit(xSoundFX* t, xSoundFXAsset* asset);
void xSoundFXInit(void* t, void* asset);
void xSoundFXUpdateEnvironmentalStreamSounds(xSoundFX* pSoundFXList, uint32 numSounds);

// xSoundFXGet__FUi
// Start address: 0x454240
xSoundFX* xSoundFXGet(uint32 soundfxID)
{
	zScene* s;
	int32 count;
	xSoundFX* sfx;
	int32 i;
	// Line 537, Address: 0x454240, Func Offset: 0
	// Line 540, Address: 0x454244, Func Offset: 0x4
	// Line 537, Address: 0x454248, Func Offset: 0x8
	// Line 538, Address: 0x45424c, Func Offset: 0xc
	// Line 541, Address: 0x454250, Func Offset: 0x10
	// Line 544, Address: 0x454260, Func Offset: 0x20
	// Line 546, Address: 0x45426c, Func Offset: 0x2c
	// Line 548, Address: 0x454280, Func Offset: 0x40
	// Func End, Address: 0x454288, Func Offset: 0x48
}

// xSoundFXPlay__FP8xSoundFX
// Start address: 0x454290
void xSoundFXPlay(xSoundFX* t)
{
	xEnt* ent;
	// Line 487, Address: 0x454290, Func Offset: 0
	// Line 490, Address: 0x454294, Func Offset: 0x4
	// Line 487, Address: 0x454298, Func Offset: 0x8
	// Line 490, Address: 0x4542a8, Func Offset: 0x18
	// Line 492, Address: 0x4542b0, Func Offset: 0x20
	// Line 497, Address: 0x45436c, Func Offset: 0xdc
	// Line 514, Address: 0x45437c, Func Offset: 0xec
	// Line 515, Address: 0x454390, Func Offset: 0x100
	// Line 518, Address: 0x4543b8, Func Offset: 0x128
	// Line 526, Address: 0x4543dc, Func Offset: 0x14c
	// Line 492, Address: 0x4543f0, Func Offset: 0x160
	// Line 526, Address: 0x4543f8, Func Offset: 0x168
	// Line 500, Address: 0x454400, Func Offset: 0x170
	// Line 526, Address: 0x454404, Func Offset: 0x174
	// Line 509, Address: 0x454410, Func Offset: 0x180
	// Line 526, Address: 0x454414, Func Offset: 0x184
	// Line 509, Address: 0x454418, Func Offset: 0x188
	// Line 526, Address: 0x454424, Func Offset: 0x194
	// Line 510, Address: 0x454434, Func Offset: 0x1a4
	// Line 526, Address: 0x45443c, Func Offset: 0x1ac
	// Func End, Address: 0x454450, Func Offset: 0x1c0
}

// xSoundFXEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x454450
void xSoundFXEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	xSoundFX* t;
	// Line 375, Address: 0x454450, Func Offset: 0
	// Line 381, Address: 0x454454, Func Offset: 0x4
	// Line 375, Address: 0x454458, Func Offset: 0x8
	// Line 376, Address: 0x454464, Func Offset: 0x14
	// Line 381, Address: 0x454468, Func Offset: 0x18
	// Line 385, Address: 0x4544a8, Func Offset: 0x58
	// Line 386, Address: 0x4544b4, Func Offset: 0x64
	// Line 396, Address: 0x4544bc, Func Offset: 0x6c
	// Line 399, Address: 0x4544c0, Func Offset: 0x70
	// Line 396, Address: 0x4544c4, Func Offset: 0x74
	// Line 399, Address: 0x4544d0, Func Offset: 0x80
	// Line 402, Address: 0x454500, Func Offset: 0xb0
	// Line 405, Address: 0x454524, Func Offset: 0xd4
	// Line 408, Address: 0x45452c, Func Offset: 0xdc
	// Line 415, Address: 0x454538, Func Offset: 0xe8
	// Line 419, Address: 0x454540, Func Offset: 0xf0
	// Line 422, Address: 0x4545a4, Func Offset: 0x154
	// Line 425, Address: 0x4545a8, Func Offset: 0x158
	// Line 422, Address: 0x4545ac, Func Offset: 0x15c
	// Line 425, Address: 0x4545b8, Func Offset: 0x168
	// Line 428, Address: 0x4545e8, Func Offset: 0x198
	// Line 431, Address: 0x45460c, Func Offset: 0x1bc
	// Line 434, Address: 0x454614, Func Offset: 0x1c4
	// Line 437, Address: 0x454620, Func Offset: 0x1d0
	// Line 444, Address: 0x454628, Func Offset: 0x1d8
	// Line 447, Address: 0x454638, Func Offset: 0x1e8
	// Line 450, Address: 0x45464c, Func Offset: 0x1fc
	// Line 452, Address: 0x454680, Func Offset: 0x230
	// Line 482, Address: 0x454748, Func Offset: 0x2f8
	// Line 470, Address: 0x454750, Func Offset: 0x300
	// Line 482, Address: 0x454770, Func Offset: 0x320
	// Line 452, Address: 0x45477c, Func Offset: 0x32c
	// Line 483, Address: 0x454784, Func Offset: 0x334
	// Func End, Address: 0x454798, Func Offset: 0x348
}

// xSoundFXInit__FP8xSoundFXP13xSoundFXAsset
// Start address: 0x4547a0
void xSoundFXInit(xSoundFX* t, xSoundFXAsset* asset)
{
	// Line 252, Address: 0x4547a0, Func Offset: 0
	// Line 257, Address: 0x4547b4, Func Offset: 0x14
	// Line 260, Address: 0x4547bc, Func Offset: 0x1c
	// Line 261, Address: 0x4547c8, Func Offset: 0x28
	// Line 263, Address: 0x4547cc, Func Offset: 0x2c
	// Line 271, Address: 0x4547dc, Func Offset: 0x3c
	// Line 272, Address: 0x4547e8, Func Offset: 0x48
	// Line 274, Address: 0x4547f8, Func Offset: 0x58
	// Line 276, Address: 0x454800, Func Offset: 0x60
	// Line 277, Address: 0x45484c, Func Offset: 0xac
	// Line 287, Address: 0x454858, Func Offset: 0xb8
	// Line 286, Address: 0x45485c, Func Offset: 0xbc
	// Line 287, Address: 0x454860, Func Offset: 0xc0
	// Line 288, Address: 0x454870, Func Offset: 0xd0
	// Line 289, Address: 0x4548bc, Func Offset: 0x11c
	// Line 290, Address: 0x4548c0, Func Offset: 0x120
	// Line 267, Address: 0x4548d8, Func Offset: 0x138
	// Line 290, Address: 0x4548dc, Func Offset: 0x13c
	// Line 268, Address: 0x4548f0, Func Offset: 0x150
	// Line 290, Address: 0x4548fc, Func Offset: 0x15c
	// Func End, Address: 0x454910, Func Offset: 0x170
}

// xSoundFXInit__FPvPv
// Start address: 0x454910
void xSoundFXInit(void* t, void* asset)
{
	// Line 248, Address: 0x454910, Func Offset: 0
	// Func End, Address: 0x454918, Func Offset: 0x8
}

// xSoundFXUpdateEnvironmentalStreamSounds__FP8xSoundFXUi
// Start address: 0x454920
void xSoundFXUpdateEnvironmentalStreamSounds(xSoundFX* pSoundFXList, uint32 numSounds)
{
	uint32 i;
	xVec3 playPos;
	xVec3 delta;
	int32 j;
	int32 j;
	int32 j;
	uint8 found;
	int32 j;
	int32 j;
	float32 bestDist2[1];
	xSoundFX* bestSoundFX[1];
	// Line 67, Address: 0x454920, Func Offset: 0
	// Line 70, Address: 0x454950, Func Offset: 0x30
	// Line 67, Address: 0x454954, Func Offset: 0x34
	// Line 70, Address: 0x454958, Func Offset: 0x38
	// Line 72, Address: 0x454964, Func Offset: 0x44
	// Line 73, Address: 0x454a2c, Func Offset: 0x10c
	// Line 81, Address: 0x454a40, Func Offset: 0x120
	// Line 82, Address: 0x454a50, Func Offset: 0x130
	// Line 87, Address: 0x454a78, Func Offset: 0x158
	// Line 91, Address: 0x454aa8, Func Offset: 0x188
	// Line 96, Address: 0x454abc, Func Offset: 0x19c
	// Line 97, Address: 0x454ac8, Func Offset: 0x1a8
	// Line 99, Address: 0x454b20, Func Offset: 0x200
	// Line 97, Address: 0x454b24, Func Offset: 0x204
	// Line 98, Address: 0x454b68, Func Offset: 0x248
	// Line 97, Address: 0x454b6c, Func Offset: 0x24c
	// Line 98, Address: 0x454b70, Func Offset: 0x250
	// Line 99, Address: 0x454b78, Func Offset: 0x258
	// Line 103, Address: 0x454b84, Func Offset: 0x264
	// Line 106, Address: 0x454b8c, Func Offset: 0x26c
	// Line 108, Address: 0x454b9c, Func Offset: 0x27c
	// Line 109, Address: 0x454ba4, Func Offset: 0x284
	// Line 108, Address: 0x454ba8, Func Offset: 0x288
	// Line 109, Address: 0x454bac, Func Offset: 0x28c
	// Line 110, Address: 0x454bb0, Func Offset: 0x290
	// Line 112, Address: 0x454bb8, Func Offset: 0x298
	// Line 115, Address: 0x454bc4, Func Offset: 0x2a4
	// Line 118, Address: 0x454bd0, Func Offset: 0x2b0
	// Line 115, Address: 0x454bd8, Func Offset: 0x2b8
	// Line 118, Address: 0x454bdc, Func Offset: 0x2bc
	// Line 124, Address: 0x454c5c, Func Offset: 0x33c
	// Line 128, Address: 0x454c68, Func Offset: 0x348
	// Line 131, Address: 0x454c74, Func Offset: 0x354
	// Line 134, Address: 0x454d0c, Func Offset: 0x3ec
	// Line 135, Address: 0x454d14, Func Offset: 0x3f4
	// Line 134, Address: 0x454d18, Func Offset: 0x3f8
	// Line 135, Address: 0x454d1c, Func Offset: 0x3fc
	// Line 136, Address: 0x454d20, Func Offset: 0x400
	// Line 138, Address: 0x454d28, Func Offset: 0x408
	// Line 136, Address: 0x454d2c, Func Offset: 0x40c
	// Line 138, Address: 0x454d30, Func Offset: 0x410
	// Line 141, Address: 0x454d38, Func Offset: 0x418
	// Line 146, Address: 0x454d4c, Func Offset: 0x42c
	// Line 147, Address: 0x454d50, Func Offset: 0x430
	// Line 149, Address: 0x454d5c, Func Offset: 0x43c
	// Line 151, Address: 0x454d68, Func Offset: 0x448
	// Line 152, Address: 0x454d74, Func Offset: 0x454
	// Line 153, Address: 0x454d78, Func Offset: 0x458
	// Line 155, Address: 0x454d80, Func Offset: 0x460
	// Line 158, Address: 0x454d90, Func Offset: 0x470
	// Line 163, Address: 0x454da8, Func Offset: 0x488
	// Line 165, Address: 0x454e70, Func Offset: 0x550
	// Line 174, Address: 0x454e7c, Func Offset: 0x55c
	// Line 177, Address: 0x454e84, Func Offset: 0x564
	// Line 179, Address: 0x454e8c, Func Offset: 0x56c
	// Line 181, Address: 0x454e98, Func Offset: 0x578
	// Line 182, Address: 0x454ea4, Func Offset: 0x584
	// Line 184, Address: 0x454eac, Func Offset: 0x58c
	// Line 189, Address: 0x454eb8, Func Offset: 0x598
	// Line 220, Address: 0x454ec0, Func Offset: 0x5a0
	// Line 72, Address: 0x454ec8, Func Offset: 0x5a8
	// Line 118, Address: 0x454ed0, Func Offset: 0x5b0
	// Line 220, Address: 0x454ee4, Func Offset: 0x5c4
	// Line 122, Address: 0x454ef8, Func Offset: 0x5d8
	// Line 131, Address: 0x454f00, Func Offset: 0x5e0
	// Line 220, Address: 0x454f18, Func Offset: 0x5f8
	// Line 163, Address: 0x454f24, Func Offset: 0x604
	// Line 220, Address: 0x454f2c, Func Offset: 0x60c
	// Func End, Address: 0x454f5c, Func Offset: 0x63c
}

