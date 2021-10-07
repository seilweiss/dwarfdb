typedef struct _tagxRumble;
typedef struct _tagxPad;
typedef enum _tagRumbleType;
typedef enum _tagPadState;
typedef struct _tagiPad;
typedef struct _tagPadAnalog;


typedef uint8 type_0[22];
typedef uint8 type_1[22];
typedef _tagxRumble type_2[32];
typedef _tagxPad type_3[4];

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct _tagxPad
{
	uint8 value[22];
	uint8 last_value[22];
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagiPad
{
	int32 port;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

_tagxRumble mRumbleList[32];
_tagxPad mPad[4];
_tagxPad* gDebugPad;
_tagxPad* gPlayerPad;

int32 xPadAddRumble(int32 idx, _tagRumbleType type, float32 time, int32 replace, uint32 fxflags);
void xPadDestroyRumbleChain(int32 idx);
void xPadDestroyRumbleChain(_tagxPad* pad);
void xPadKill();
int32 xPadUpdate(int32 idx, float32 time_passed);
void xPadRumbleEnable(int32 idx, int32 enable);
_tagxPad* xPadEnable(int32 idx);
int32 xPadInit();

// xPadAddRumble__Fi14_tagRumbleTypefiUi
// Start address: 0x1127e0
int32 xPadAddRumble(int32 idx, _tagRumbleType type, float32 time, int32 replace, uint32 fxflags)
{
	_tagxRumble* last_r;
	_tagxRumble* r;
	_tagxPad* pad;
	int32 appended;
	// Line 560, Address: 0x1127e0, Func Offset: 0
	// Line 567, Address: 0x1127f0, Func Offset: 0x10
	// Line 560, Address: 0x1127fc, Func Offset: 0x1c
	// Line 567, Address: 0x112800, Func Offset: 0x20
	// Line 560, Address: 0x112804, Func Offset: 0x24
	// Line 567, Address: 0x112808, Func Offset: 0x28
	// Line 560, Address: 0x11280c, Func Offset: 0x2c
	// Line 567, Address: 0x112810, Func Offset: 0x30
	// Line 560, Address: 0x112814, Func Offset: 0x34
	// Line 567, Address: 0x112818, Func Offset: 0x38
	// Line 560, Address: 0x11281c, Func Offset: 0x3c
	// Line 567, Address: 0x112820, Func Offset: 0x40
	// Line 572, Address: 0x112824, Func Offset: 0x44
	// Line 573, Address: 0x11283c, Func Offset: 0x5c
	// Line 577, Address: 0x112844, Func Offset: 0x64
	// Line 578, Address: 0x112850, Func Offset: 0x70
	// Line 582, Address: 0x112858, Func Offset: 0x78
	// Line 584, Address: 0x112860, Func Offset: 0x80
	// Line 585, Address: 0x112894, Func Offset: 0xb4
	// Line 592, Address: 0x112898, Func Offset: 0xb8
	// Line 590, Address: 0x11289c, Func Offset: 0xbc
	// Line 592, Address: 0x1128a0, Func Offset: 0xc0
	// Line 593, Address: 0x1128a8, Func Offset: 0xc8
	// Line 594, Address: 0x1128ac, Func Offset: 0xcc
	// Line 596, Address: 0x1128b4, Func Offset: 0xd4
	// Line 597, Address: 0x1128b8, Func Offset: 0xd8
	// Line 598, Address: 0x1128bc, Func Offset: 0xdc
	// Line 601, Address: 0x1128d4, Func Offset: 0xf4
	// Line 602, Address: 0x112920, Func Offset: 0x140
	// Line 605, Address: 0x112928, Func Offset: 0x148
	// Line 607, Address: 0x112930, Func Offset: 0x150
	// Line 608, Address: 0x112934, Func Offset: 0x154
	// Line 609, Address: 0x112938, Func Offset: 0x158
	// Line 610, Address: 0x112940, Func Offset: 0x160
	// Line 613, Address: 0x112944, Func Offset: 0x164
	// Line 614, Address: 0x112948, Func Offset: 0x168
	// Line 619, Address: 0x11294c, Func Offset: 0x16c
	// Line 621, Address: 0x112954, Func Offset: 0x174
	// Line 624, Address: 0x112960, Func Offset: 0x180
	// Line 625, Address: 0x112964, Func Offset: 0x184
	// Func End, Address: 0x11298c, Func Offset: 0x1ac
}

// xPadDestroyRumbleChain__Fi
// Start address: 0x112990
void xPadDestroyRumbleChain(int32 idx)
{
	// Line 545, Address: 0x112990, Func Offset: 0
	// Line 546, Address: 0x112994, Func Offset: 0x4
	// Line 545, Address: 0x112998, Func Offset: 0x8
	// Line 546, Address: 0x11299c, Func Offset: 0xc
	// Line 545, Address: 0x1129a0, Func Offset: 0x10
	// Line 546, Address: 0x1129a4, Func Offset: 0x14
	// Line 545, Address: 0x1129a8, Func Offset: 0x18
	// Line 546, Address: 0x1129ac, Func Offset: 0x1c
	// Line 547, Address: 0x1129fc, Func Offset: 0x6c
	// Func End, Address: 0x112a10, Func Offset: 0x80
}

// xPadDestroyRumbleChain__FP8_tagxPad
// Start address: 0x112a10
void xPadDestroyRumbleChain(_tagxPad* pad)
{
	_tagxRumble* r;
	// Line 524, Address: 0x112a10, Func Offset: 0
	// Line 528, Address: 0x112a20, Func Offset: 0x10
	// Line 531, Address: 0x112a28, Func Offset: 0x18
	// Line 532, Address: 0x112a2c, Func Offset: 0x1c
	// Line 534, Address: 0x112a34, Func Offset: 0x24
	// Line 535, Address: 0x112a44, Func Offset: 0x34
	// Line 536, Address: 0x112a48, Func Offset: 0x38
	// Line 539, Address: 0x112a50, Func Offset: 0x40
	// Line 540, Address: 0x112a54, Func Offset: 0x44
	// Func End, Address: 0x112a68, Func Offset: 0x58
}

// xPadKill__Fv
// Start address: 0x112a70
void xPadKill()
{
	// Line 485, Address: 0x112a70, Func Offset: 0
	// Func End, Address: 0x112a78, Func Offset: 0x8
}

// xPadUpdate__Fif
// Start address: 0x112a80
int32 xPadUpdate(int32 idx, float32 time_passed)
{
	uint32 fake_dpad;
	_tagxRumble* r;
	_tagxPad* p;
	uint32 new_on;
	// Line 199, Address: 0x112a80, Func Offset: 0
	// Line 206, Address: 0x112a98, Func Offset: 0x18
	// Line 208, Address: 0x112aa0, Func Offset: 0x20
	// Line 218, Address: 0x112aa8, Func Offset: 0x28
	// Line 221, Address: 0x112ac8, Func Offset: 0x48
	// Line 222, Address: 0x112b6c, Func Offset: 0xec
	// Line 225, Address: 0x112b74, Func Offset: 0xf4
	// Line 228, Address: 0x112c1c, Func Offset: 0x19c
	// Line 231, Address: 0x112c3c, Func Offset: 0x1bc
	// Line 233, Address: 0x112c58, Func Offset: 0x1d8
	// Line 234, Address: 0x112c5c, Func Offset: 0x1dc
	// Line 236, Address: 0x112c64, Func Offset: 0x1e4
	// Line 237, Address: 0x112c68, Func Offset: 0x1e8
	// Line 236, Address: 0x112c70, Func Offset: 0x1f0
	// Line 237, Address: 0x112c74, Func Offset: 0x1f4
	// Line 239, Address: 0x112c84, Func Offset: 0x204
	// Line 241, Address: 0x112c88, Func Offset: 0x208
	// Line 244, Address: 0x112c94, Func Offset: 0x214
	// Line 248, Address: 0x112c98, Func Offset: 0x218
	// Line 249, Address: 0x112ca0, Func Offset: 0x220
	// Line 253, Address: 0x112ca8, Func Offset: 0x228
	// Line 256, Address: 0x112cac, Func Offset: 0x22c
	// Line 259, Address: 0x112cb0, Func Offset: 0x230
	// Line 261, Address: 0x112cbc, Func Offset: 0x23c
	// Line 265, Address: 0x112cc4, Func Offset: 0x244
	// Line 268, Address: 0x112cd4, Func Offset: 0x254
	// Line 270, Address: 0x112cdc, Func Offset: 0x25c
	// Line 324, Address: 0x112ce4, Func Offset: 0x264
	// Line 328, Address: 0x112ce8, Func Offset: 0x268
	// Line 332, Address: 0x112cf4, Func Offset: 0x274
	// Line 335, Address: 0x112d04, Func Offset: 0x284
	// Line 345, Address: 0x112d0c, Func Offset: 0x28c
	// Line 348, Address: 0x112d1c, Func Offset: 0x29c
	// Line 349, Address: 0x112d24, Func Offset: 0x2a4
	// Line 351, Address: 0x112d30, Func Offset: 0x2b0
	// Line 354, Address: 0x112d34, Func Offset: 0x2b4
	// Line 357, Address: 0x112d44, Func Offset: 0x2c4
	// Line 358, Address: 0x112d4c, Func Offset: 0x2cc
	// Line 360, Address: 0x112d54, Func Offset: 0x2d4
	// Line 363, Address: 0x112d58, Func Offset: 0x2d8
	// Line 366, Address: 0x112d60, Func Offset: 0x2e0
	// Line 369, Address: 0x112d68, Func Offset: 0x2e8
	// Line 370, Address: 0x112d6c, Func Offset: 0x2ec
	// Line 369, Address: 0x112d74, Func Offset: 0x2f4
	// Line 370, Address: 0x112d78, Func Offset: 0x2f8
	// Line 372, Address: 0x112d88, Func Offset: 0x308
	// Line 373, Address: 0x112d8c, Func Offset: 0x30c
	// Line 372, Address: 0x112d94, Func Offset: 0x314
	// Line 373, Address: 0x112d9c, Func Offset: 0x31c
	// Line 381, Address: 0x112da0, Func Offset: 0x320
	// Line 390, Address: 0x112db0, Func Offset: 0x330
	// Line 394, Address: 0x112de0, Func Offset: 0x360
	// Line 399, Address: 0x112de8, Func Offset: 0x368
	// Line 400, Address: 0x112dec, Func Offset: 0x36c
	// Line 399, Address: 0x112df4, Func Offset: 0x374
	// Line 400, Address: 0x112df8, Func Offset: 0x378
	// Line 402, Address: 0x112e08, Func Offset: 0x388
	// Line 403, Address: 0x112e14, Func Offset: 0x394
	// Line 405, Address: 0x112e24, Func Offset: 0x3a4
	// Line 406, Address: 0x112e2c, Func Offset: 0x3ac
	// Line 407, Address: 0x112e34, Func Offset: 0x3b4
	// Line 409, Address: 0x112e3c, Func Offset: 0x3bc
	// Line 412, Address: 0x112e48, Func Offset: 0x3c8
	// Line 414, Address: 0x112e58, Func Offset: 0x3d8
	// Line 415, Address: 0x112e60, Func Offset: 0x3e0
	// Line 416, Address: 0x112e68, Func Offset: 0x3e8
	// Line 418, Address: 0x112e70, Func Offset: 0x3f0
	// Line 427, Address: 0x112e7c, Func Offset: 0x3fc
	// Line 428, Address: 0x112e90, Func Offset: 0x410
	// Line 429, Address: 0x112ea4, Func Offset: 0x424
	// Line 433, Address: 0x112eac, Func Offset: 0x42c
	// Line 436, Address: 0x112ebc, Func Offset: 0x43c
	// Line 440, Address: 0x112ee4, Func Offset: 0x464
	// Line 444, Address: 0x112eec, Func Offset: 0x46c
	// Line 445, Address: 0x112ef0, Func Offset: 0x470
	// Line 444, Address: 0x112ef8, Func Offset: 0x478
	// Line 445, Address: 0x112efc, Func Offset: 0x47c
	// Line 447, Address: 0x112f0c, Func Offset: 0x48c
	// Line 449, Address: 0x112f18, Func Offset: 0x498
	// Line 451, Address: 0x112f28, Func Offset: 0x4a8
	// Line 452, Address: 0x112f30, Func Offset: 0x4b0
	// Line 453, Address: 0x112f38, Func Offset: 0x4b8
	// Line 455, Address: 0x112f40, Func Offset: 0x4c0
	// Line 458, Address: 0x112f4c, Func Offset: 0x4cc
	// Line 460, Address: 0x112f5c, Func Offset: 0x4dc
	// Line 461, Address: 0x112f64, Func Offset: 0x4e4
	// Line 462, Address: 0x112f6c, Func Offset: 0x4ec
	// Line 464, Address: 0x112f74, Func Offset: 0x4f4
	// Line 472, Address: 0x112f80, Func Offset: 0x500
	// Line 473, Address: 0x112f84, Func Offset: 0x504
	// Func End, Address: 0x112f9c, Func Offset: 0x51c
}

// xPadRumbleEnable__Fii
// Start address: 0x112fa0
void xPadRumbleEnable(int32 idx, int32 enable)
{
	_tagxPad* p;
	// Line 126, Address: 0x112fa0, Func Offset: 0
	// Line 125, Address: 0x112fac, Func Offset: 0xc
	// Line 126, Address: 0x112fb0, Func Offset: 0x10
	// Line 125, Address: 0x112fb4, Func Offset: 0x14
	// Line 126, Address: 0x112fb8, Func Offset: 0x18
	// Line 125, Address: 0x112fbc, Func Offset: 0x1c
	// Line 126, Address: 0x112fc0, Func Offset: 0x20
	// Line 125, Address: 0x112fc4, Func Offset: 0x24
	// Line 126, Address: 0x112fc8, Func Offset: 0x28
	// Line 129, Address: 0x112fd0, Func Offset: 0x30
	// Line 130, Address: 0x112fe0, Func Offset: 0x40
	// Line 132, Address: 0x112fe4, Func Offset: 0x44
	// Line 135, Address: 0x112fec, Func Offset: 0x4c
	// Line 137, Address: 0x112ffc, Func Offset: 0x5c
	// Line 141, Address: 0x113004, Func Offset: 0x64
	// Line 143, Address: 0x113014, Func Offset: 0x74
	// Line 146, Address: 0x11301c, Func Offset: 0x7c
	// Line 149, Address: 0x113054, Func Offset: 0xb4
	// Func End, Address: 0x113068, Func Offset: 0xc8
}

// xPadEnable__Fi
// Start address: 0x113070
_tagxPad* xPadEnable(int32 idx)
{
	_tagxPad* p;
	// Line 88, Address: 0x113070, Func Offset: 0
	// Line 87, Address: 0x11307c, Func Offset: 0xc
	// Line 88, Address: 0x113080, Func Offset: 0x10
	// Line 87, Address: 0x113084, Func Offset: 0x14
	// Line 88, Address: 0x113088, Func Offset: 0x18
	// Line 87, Address: 0x11308c, Func Offset: 0x1c
	// Line 88, Address: 0x113090, Func Offset: 0x20
	// Line 87, Address: 0x113094, Func Offset: 0x24
	// Line 88, Address: 0x113098, Func Offset: 0x28
	// Line 90, Address: 0x1130a0, Func Offset: 0x30
	// Line 93, Address: 0x1130ac, Func Offset: 0x3c
	// Line 100, Address: 0x1130b4, Func Offset: 0x44
	// Line 102, Address: 0x1130bc, Func Offset: 0x4c
	// Line 107, Address: 0x1130c4, Func Offset: 0x54
	// Line 110, Address: 0x1130d0, Func Offset: 0x60
	// Line 107, Address: 0x1130d4, Func Offset: 0x64
	// Line 110, Address: 0x1130d8, Func Offset: 0x68
	// Line 112, Address: 0x113128, Func Offset: 0xb8
	// Line 113, Address: 0x11312c, Func Offset: 0xbc
	// Func End, Address: 0x113140, Func Offset: 0xd0
}

// xPadInit__Fv
// Start address: 0x113140
int32 xPadInit()
{
	// Line 60, Address: 0x113140, Func Offset: 0
	// Line 62, Address: 0x113144, Func Offset: 0x4
	// Line 60, Address: 0x113148, Func Offset: 0x8
	// Line 62, Address: 0x11314c, Func Offset: 0xc
	// Line 65, Address: 0x11315c, Func Offset: 0x1c
	// Line 69, Address: 0x113170, Func Offset: 0x30
	// Line 70, Address: 0x113180, Func Offset: 0x40
	// Line 72, Address: 0x113188, Func Offset: 0x48
	// Line 74, Address: 0x113190, Func Offset: 0x50
	// Line 75, Address: 0x113194, Func Offset: 0x54
	// Func End, Address: 0x1131a0, Func Offset: 0x60
}

