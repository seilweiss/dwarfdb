typedef enum _tagTRCState;
typedef struct _tagxPad;
typedef enum _tagRumbleType;
typedef struct _tagTRCPadInfo;
typedef enum _tagPadInit;
typedef struct _tagxRumble;
typedef enum _tagPadState;
typedef struct _tagiPad;
typedef struct _tagPadAnalog;
typedef struct _tagiTRCPadInfo;


typedef <unknown fundamental type (0xa510)> type_0[16];
typedef <unknown fundamental type (0xa510)> type_1[16][4];
typedef uint8 type_2[22];
typedef uint8 type_3[22];
typedef float32 type_4[4];
typedef uint8 type_5[6];
typedef uint8 type_6[32];
typedef _tagTRCPadInfo type_7[4];
typedef int8 type_8[1];
typedef uint8 type_9[6];
typedef int8 type_10[256];
typedef int8 type_11[256][2];

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskInvalid,
	TRC_Total
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

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

uint8 mReadData[32];
<unknown fundamental type (0xa510)> mPadDmaBuffer[16][4];
uint8 mActDirect[6];
uint8 mActAlign[6];
float32 mLargeMotor[4];
_tagTRCPadInfo gTrcPad[4];

void iPadKill();
void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble);
void iPadStopRumble(_tagxPad* pad);
void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, float32 time_passed);
int32 iPadUpdate(_tagxPad* pad, uint32* on);
void iPadTRCUpdate(_tagxPad* pad);
_tagxPad* iPadEnable(_tagxPad* pad, int16 port);
_tagxPad* iPadEnableGuts(_tagxPad* pad, _tagPadInit* pad_init);
int32 iPadInit();

// iPadKill__Fv
// Start address: 0x111500
void iPadKill()
{
	// Line 839, Address: 0x111500, Func Offset: 0
	// Func End, Address: 0x111508, Func Offset: 0x8
}

// iPadStartRumble__FP8_tagxPadP11_tagxRumble
// Start address: 0x111510
void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble)
{
	// Line 730, Address: 0x111510, Func Offset: 0
	// Line 734, Address: 0x111514, Func Offset: 0x4
	// Line 737, Address: 0x11153c, Func Offset: 0x2c
	// Line 739, Address: 0x111540, Func Offset: 0x30
	// Line 742, Address: 0x111548, Func Offset: 0x38
	// Line 744, Address: 0x111550, Func Offset: 0x40
	// Line 745, Address: 0x111554, Func Offset: 0x44
	// Line 748, Address: 0x11155c, Func Offset: 0x4c
	// Line 750, Address: 0x111564, Func Offset: 0x54
	// Line 751, Address: 0x111568, Func Offset: 0x58
	// Line 754, Address: 0x111570, Func Offset: 0x60
	// Line 756, Address: 0x111578, Func Offset: 0x68
	// Line 757, Address: 0x11157c, Func Offset: 0x6c
	// Line 760, Address: 0x111584, Func Offset: 0x74
	// Line 762, Address: 0x11158c, Func Offset: 0x7c
	// Line 763, Address: 0x111590, Func Offset: 0x80
	// Line 766, Address: 0x111598, Func Offset: 0x88
	// Line 768, Address: 0x1115a0, Func Offset: 0x90
	// Line 822, Address: 0x1115a8, Func Offset: 0x98
	// Line 823, Address: 0x1115e4, Func Offset: 0xd4
	// Line 822, Address: 0x1115e8, Func Offset: 0xd8
	// Line 823, Address: 0x1115f4, Func Offset: 0xe4
	// Func End, Address: 0x111604, Func Offset: 0xf4
}

// iPadStopRumble__FP8_tagxPad
// Start address: 0x111610
void iPadStopRumble(_tagxPad* pad)
{
	// Line 721, Address: 0x111610, Func Offset: 0
	// Line 722, Address: 0x111614, Func Offset: 0x4
	// Line 723, Address: 0x111618, Func Offset: 0x8
	// Func End, Address: 0x11162c, Func Offset: 0x1c
}

// iPadRumbleFx__FP8_tagxPadP11_tagxRumblef
// Start address: 0x111630
void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, float32 time_passed)
{
	float32 scale;
	float32 act;
	// Line 696, Address: 0x111630, Func Offset: 0
	// Line 698, Address: 0x11163c, Func Offset: 0xc
	// Line 701, Address: 0x111648, Func Offset: 0x18
	// Line 703, Address: 0x111654, Func Offset: 0x24
	// Line 704, Address: 0x111660, Func Offset: 0x30
	// Line 703, Address: 0x111664, Func Offset: 0x34
	// Line 704, Address: 0x111670, Func Offset: 0x40
	// Line 705, Address: 0x111674, Func Offset: 0x44
	// Line 706, Address: 0x111678, Func Offset: 0x48
	// Line 707, Address: 0x11167c, Func Offset: 0x4c
	// Line 708, Address: 0x111680, Func Offset: 0x50
	// Line 710, Address: 0x11168c, Func Offset: 0x5c
	// Line 712, Address: 0x11169c, Func Offset: 0x6c
	// Func End, Address: 0x1116ac, Func Offset: 0x7c
}

// iPadUpdate__FP8_tagxPadPUi
// Start address: 0x1116b0
int32 iPadUpdate(_tagxPad* pad, uint32* on)
{
	uint32 temp_on;
	int32 temp;
	// Line 519, Address: 0x1116b0, Func Offset: 0
	// Line 525, Address: 0x1116c0, Func Offset: 0x10
	// Line 527, Address: 0x1116f8, Func Offset: 0x48
	// Line 528, Address: 0x111700, Func Offset: 0x50
	// Line 534, Address: 0x111708, Func Offset: 0x58
	// Line 535, Address: 0x111718, Func Offset: 0x68
	// Line 539, Address: 0x111720, Func Offset: 0x70
	// Line 543, Address: 0x11172c, Func Offset: 0x7c
	// Line 548, Address: 0x111748, Func Offset: 0x98
	// Line 590, Address: 0x11174c, Func Offset: 0x9c
	// Line 548, Address: 0x111750, Func Offset: 0xa0
	// Line 549, Address: 0x111754, Func Offset: 0xa4
	// Line 550, Address: 0x111758, Func Offset: 0xa8
	// Line 551, Address: 0x111764, Func Offset: 0xb4
	// Line 553, Address: 0x111768, Func Offset: 0xb8
	// Line 555, Address: 0x111778, Func Offset: 0xc8
	// Line 559, Address: 0x111788, Func Offset: 0xd8
	// Line 560, Address: 0x11178c, Func Offset: 0xdc
	// Line 561, Address: 0x111790, Func Offset: 0xe0
	// Line 562, Address: 0x111794, Func Offset: 0xe4
	// Line 564, Address: 0x111798, Func Offset: 0xe8
	// Line 565, Address: 0x1117a4, Func Offset: 0xf4
	// Line 566, Address: 0x1117b0, Func Offset: 0x100
	// Line 567, Address: 0x1117bc, Func Offset: 0x10c
	// Line 570, Address: 0x1117c8, Func Offset: 0x118
	// Line 571, Address: 0x1117d4, Func Offset: 0x124
	// Line 572, Address: 0x1117e0, Func Offset: 0x130
	// Line 573, Address: 0x1117e4, Func Offset: 0x134
	// Line 575, Address: 0x1117e8, Func Offset: 0x138
	// Line 576, Address: 0x1117f4, Func Offset: 0x144
	// Line 577, Address: 0x111800, Func Offset: 0x150
	// Line 578, Address: 0x111804, Func Offset: 0x154
	// Line 581, Address: 0x111808, Func Offset: 0x158
	// Line 582, Address: 0x111814, Func Offset: 0x164
	// Line 583, Address: 0x111820, Func Offset: 0x170
	// Line 584, Address: 0x11182c, Func Offset: 0x17c
	// Line 585, Address: 0x111838, Func Offset: 0x188
	// Line 586, Address: 0x11183c, Func Offset: 0x18c
	// Line 598, Address: 0x111840, Func Offset: 0x190
	// Line 599, Address: 0x111854, Func Offset: 0x1a4
	// Line 602, Address: 0x111868, Func Offset: 0x1b8
	// Line 603, Address: 0x111880, Func Offset: 0x1d0
	// Line 604, Address: 0x111890, Func Offset: 0x1e0
	// Line 605, Address: 0x1118a0, Func Offset: 0x1f0
	// Line 606, Address: 0x1118b0, Func Offset: 0x200
	// Line 607, Address: 0x1118bc, Func Offset: 0x20c
	// Line 610, Address: 0x1118cc, Func Offset: 0x21c
	// Line 608, Address: 0x1118d0, Func Offset: 0x220
	// Line 609, Address: 0x1118e0, Func Offset: 0x230
	// Line 610, Address: 0x1118e8, Func Offset: 0x238
	// Line 609, Address: 0x1118ec, Func Offset: 0x23c
	// Line 610, Address: 0x1118f0, Func Offset: 0x240
	// Line 611, Address: 0x111900, Func Offset: 0x250
	// Line 612, Address: 0x111910, Func Offset: 0x260
	// Line 613, Address: 0x111920, Func Offset: 0x270
	// Line 614, Address: 0x111930, Func Offset: 0x280
	// Line 615, Address: 0x111940, Func Offset: 0x290
	// Line 616, Address: 0x111950, Func Offset: 0x2a0
	// Line 617, Address: 0x111960, Func Offset: 0x2b0
	// Line 643, Address: 0x11196c, Func Offset: 0x2bc
	// Line 646, Address: 0x111974, Func Offset: 0x2c4
	// Line 647, Address: 0x111978, Func Offset: 0x2c8
	// Line 648, Address: 0x11197c, Func Offset: 0x2cc
	// Line 649, Address: 0x111980, Func Offset: 0x2d0
	// Line 650, Address: 0x111984, Func Offset: 0x2d4
	// Line 651, Address: 0x111988, Func Offset: 0x2d8
	// Line 652, Address: 0x11198c, Func Offset: 0x2dc
	// Line 684, Address: 0x111990, Func Offset: 0x2e0
	// Line 685, Address: 0x1119b0, Func Offset: 0x300
	// Line 691, Address: 0x1119bc, Func Offset: 0x30c
	// Line 692, Address: 0x1119c0, Func Offset: 0x310
	// Func End, Address: 0x1119d4, Func Offset: 0x324
}

// iPadTRCUpdate__FP8_tagxPad
// Start address: 0x1119e0
void iPadTRCUpdate(_tagxPad* pad)
{
	// Line 463, Address: 0x1119e0, Func Offset: 0
	// Line 464, Address: 0x1119ec, Func Offset: 0xc
	// Line 471, Address: 0x111a38, Func Offset: 0x58
	// Line 472, Address: 0x111a44, Func Offset: 0x64
	// Line 476, Address: 0x111a70, Func Offset: 0x90
	// Line 479, Address: 0x111a78, Func Offset: 0x98
	// Line 480, Address: 0x111a84, Func Offset: 0xa4
	// Line 484, Address: 0x111ab0, Func Offset: 0xd0
	// Line 487, Address: 0x111ab8, Func Offset: 0xd8
	// Line 495, Address: 0x111ac8, Func Offset: 0xe8
	// Line 496, Address: 0x111acc, Func Offset: 0xec
	// Line 497, Address: 0x111ad0, Func Offset: 0xf0
	// Line 498, Address: 0x111ad4, Func Offset: 0xf4
	// Line 499, Address: 0x111ad8, Func Offset: 0xf8
	// Line 500, Address: 0x111adc, Func Offset: 0xfc
	// Line 501, Address: 0x111ae0, Func Offset: 0x100
	// Line 502, Address: 0x111ae4, Func Offset: 0x104
	// Func End, Address: 0x111af4, Func Offset: 0x114
}

// iPadEnable__FP8_tagxPads
// Start address: 0x111b00
_tagxPad* iPadEnable(_tagxPad* pad, int16 port)
{
	_tagPadInit pad_init;
	// Line 426, Address: 0x111b00, Func Offset: 0
	// Line 427, Address: 0x111b0c, Func Offset: 0xc
	// Line 430, Address: 0x111b10, Func Offset: 0x10
	// Line 434, Address: 0x111b14, Func Offset: 0x14
	// Line 435, Address: 0x111b18, Func Offset: 0x18
	// Line 436, Address: 0x111b1c, Func Offset: 0x1c
	// Line 447, Address: 0x111b24, Func Offset: 0x24
	// Line 450, Address: 0x111b30, Func Offset: 0x30
	// Line 454, Address: 0x111b40, Func Offset: 0x40
	// Line 458, Address: 0x111b50, Func Offset: 0x50
	// Line 459, Address: 0x111b54, Func Offset: 0x54
	// Func End, Address: 0x111b64, Func Offset: 0x64
}

// iPadEnableGuts__FP8_tagxPadP11_tagPadInit
// Start address: 0x111b70
_tagxPad* iPadEnableGuts(_tagxPad* pad, _tagPadInit* pad_init)
{
	int32 state5;
	int32 state3;
	int32 exid;
	int32 id;
	int32 state;
	// Line 135, Address: 0x111b70, Func Offset: 0
	// Line 140, Address: 0x111b84, Func Offset: 0x14
	// Line 144, Address: 0x111bb4, Func Offset: 0x44
	// Line 147, Address: 0x111bc4, Func Offset: 0x54
	// Line 155, Address: 0x111bdc, Func Offset: 0x6c
	// Line 156, Address: 0x111be0, Func Offset: 0x70
	// Line 160, Address: 0x111be8, Func Offset: 0x78
	// Line 161, Address: 0x111bf4, Func Offset: 0x84
	// Line 166, Address: 0x111bfc, Func Offset: 0x8c
	// Line 167, Address: 0x111c04, Func Offset: 0x94
	// Line 169, Address: 0x111c10, Func Offset: 0xa0
	// Line 171, Address: 0x111c18, Func Offset: 0xa8
	// Line 173, Address: 0x111c2c, Func Offset: 0xbc
	// Line 176, Address: 0x111c30, Func Offset: 0xc0
	// Line 180, Address: 0x111c38, Func Offset: 0xc8
	// Line 181, Address: 0x111c4c, Func Offset: 0xdc
	// Line 180, Address: 0x111c54, Func Offset: 0xe4
	// Line 181, Address: 0x111c58, Func Offset: 0xe8
	// Line 182, Address: 0x111c64, Func Offset: 0xf4
	// Line 183, Address: 0x111c6c, Func Offset: 0xfc
	// Line 186, Address: 0x111c70, Func Offset: 0x100
	// Line 190, Address: 0x111c78, Func Offset: 0x108
	// Line 195, Address: 0x111c94, Func Offset: 0x124
	// Line 199, Address: 0x111c9c, Func Offset: 0x12c
	// Line 204, Address: 0x111cb0, Func Offset: 0x140
	// Line 229, Address: 0x111cb4, Func Offset: 0x144
	// Line 230, Address: 0x111cbc, Func Offset: 0x14c
	// Line 233, Address: 0x111cc4, Func Offset: 0x154
	// Line 236, Address: 0x111cc8, Func Offset: 0x158
	// Line 239, Address: 0x111cd0, Func Offset: 0x160
	// Line 252, Address: 0x111cd8, Func Offset: 0x168
	// Line 255, Address: 0x111ce0, Func Offset: 0x170
	// Line 256, Address: 0x111cec, Func Offset: 0x17c
	// Line 258, Address: 0x111cf8, Func Offset: 0x188
	// Line 261, Address: 0x111d00, Func Offset: 0x190
	// Line 264, Address: 0x111d04, Func Offset: 0x194
	// Line 265, Address: 0x111d0c, Func Offset: 0x19c
	// Line 272, Address: 0x111d14, Func Offset: 0x1a4
	// Line 278, Address: 0x111d1c, Func Offset: 0x1ac
	// Line 282, Address: 0x111d38, Func Offset: 0x1c8
	// Line 286, Address: 0x111d50, Func Offset: 0x1e0
	// Line 289, Address: 0x111d58, Func Offset: 0x1e8
	// Line 295, Address: 0x111d5c, Func Offset: 0x1ec
	// Line 299, Address: 0x111d64, Func Offset: 0x1f4
	// Line 300, Address: 0x111d68, Func Offset: 0x1f8
	// Line 304, Address: 0x111d70, Func Offset: 0x200
	// Line 307, Address: 0x111d84, Func Offset: 0x214
	// Line 311, Address: 0x111d9c, Func Offset: 0x22c
	// Line 316, Address: 0x111da4, Func Offset: 0x234
	// Line 320, Address: 0x111dbc, Func Offset: 0x24c
	// Line 323, Address: 0x111dc4, Func Offset: 0x254
	// Line 330, Address: 0x111dc8, Func Offset: 0x258
	// Line 334, Address: 0x111dd0, Func Offset: 0x260
	// Line 336, Address: 0x111ddc, Func Offset: 0x26c
	// Line 340, Address: 0x111de8, Func Offset: 0x278
	// Line 344, Address: 0x111dec, Func Offset: 0x27c
	// Line 345, Address: 0x111df4, Func Offset: 0x284
	// Line 349, Address: 0x111dfc, Func Offset: 0x28c
	// Line 351, Address: 0x111e00, Func Offset: 0x290
	// Line 349, Address: 0x111e04, Func Offset: 0x294
	// Line 356, Address: 0x111e0c, Func Offset: 0x29c
	// Line 399, Address: 0x111e14, Func Offset: 0x2a4
	// Line 400, Address: 0x111e1c, Func Offset: 0x2ac
	// Line 401, Address: 0x111e24, Func Offset: 0x2b4
	// Line 413, Address: 0x111e2c, Func Offset: 0x2bc
	// Line 414, Address: 0x111e30, Func Offset: 0x2c0
	// Func End, Address: 0x111e48, Func Offset: 0x2d8
}

// iPadInit__Fv
// Start address: 0x111e50
int32 iPadInit()
{
	int32 errorCode;
	int8 module[256][2];
	int8 empty[1];
	// Line 84, Address: 0x111e50, Func Offset: 0
	// Line 78, Address: 0x111e68, Func Offset: 0x18
	// Line 84, Address: 0x111e6c, Func Offset: 0x1c
	// Line 78, Address: 0x111e70, Func Offset: 0x20
	// Line 84, Address: 0x111e74, Func Offset: 0x24
	// Line 85, Address: 0x111e84, Func Offset: 0x34
	// Line 101, Address: 0x111eb0, Func Offset: 0x60
	// Line 106, Address: 0x111ec0, Func Offset: 0x70
	// Line 111, Address: 0x111ecc, Func Offset: 0x7c
	// Line 116, Address: 0x111edc, Func Offset: 0x8c
	// Line 119, Address: 0x111ee8, Func Offset: 0x98
	// Line 129, Address: 0x111ef0, Func Offset: 0xa0
	// Line 128, Address: 0x111ef8, Func Offset: 0xa8
	// Line 129, Address: 0x111efc, Func Offset: 0xac
	// Func End, Address: 0x111f04, Func Offset: 0xb4
}

