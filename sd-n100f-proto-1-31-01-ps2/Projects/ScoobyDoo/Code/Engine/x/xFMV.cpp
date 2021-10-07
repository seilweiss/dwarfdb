typedef struct _XBUTTON;
typedef struct tagxPadAction;
typedef struct XStreamHeader;
typedef struct _tagNativePadData;
typedef struct tagxPad;
typedef struct tagXStreamDirectoryEntry;
typedef struct tagXStreamMDSDirectory;

typedef void(*type_1)(tagxPad*, int32, tagxPadAction*);
typedef int32(*type_2)(tagxPad*, tagxPadAction*, int32);
typedef int32(*type_3)(tagxPad*, tagxPadAction*, int32);
typedef void(*type_4)(tagxPad*, int32, tagxPadAction*);

typedef tagXStreamDirectoryEntry type_0[1000];
typedef _XBUTTON type_5[16];
typedef int8 type_6[32];
typedef uint8 type_7[6];
typedef int8 type_8[2048];
typedef int8 type_9[128];
typedef uint8 type_10[4];
typedef uint8 type_11[12];
typedef uint8 type_12[12];

struct _XBUTTON
{
	uint32 m_id;
	uint32 m_nativeID;
	uint32 m_nativeJoyID;
	struct
	{
		uint32 m_down : 13;
		uint32 m_last_down : 13;
		uint32 m_pressed : 1;
		uint32 m_last_pressed : 1;
		uint32 m_released : 1;
		uint32 m_last_released : 1;
		uint32 unused : 2;
	};
};

struct tagxPadAction
{
	uint32 m_action;
	uint16 m_button;
	uint16 m_status;
	uint8 pad;
	uint8 m_analogActive;
	int8 m_analogXValue;
	int8 m_analogYValue;
};

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct _tagNativePadData
{
	uint8 status;
	struct
	{
		uint32 id : 4;
		uint32 size : 4;
	};
	uint16 buttons;
	uint8 analog[4];
	uint8 pressure[12];
	uint8 reserved[12];
	uint16 last_buttons;
	uint16 pressed;
	uint16 released;
};

struct tagxPad
{
	ulong32 m_lastTime;
	ulong32 m_currentTime;
	uint8 m_active;
	uint8 m_playerNumber;
	uint8 m_controllerNumber;
	uint8 m_deviceType;
	int32 m_padHandle;
	void* m_funcInit;
	void* m_funcMapper;
	void* m_funcAction;
	_tagNativePadData* m_pad;
	_XBUTTON m_xbutton[16];
	uint8 m_analogActive;
	int8 m_analogXValue;
	int8 m_analogYValue;
	int32 m_shock : 3;
	uint8 m_vib[6];
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

uint8 gAudioStatus;
uint8 gAudioLoop;
uint8 gFMVPlaying;
int32 sAudioAssetID;
int32 sAudioFlags;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
int32 g_sceneSwapPending;
void(*xPadActionFunc_FmvMenu)(tagxPad*, int32, tagxPadAction*);
int32(*xPadMapperFunc_FmvMenu)(tagxPad*, tagxPadAction*, int32);

int32 xPadMapperFunc_FmvMenu(tagxPad* pad, tagxPadAction* actions, int32 maxActions);
void xPadActionFunc_FmvMenu();
void xFMVAudioName(int8* s);
void xFMVResumeAudio();
void xFMVPauseAudio();
void xFMVStopAudio();
uint32 xFMVIdle();
uint32 xFMVGetAudioStatus();
void xFMVStartAudio(uint32 audioID, uint32 flags);
void xFMVPlayMovie(uint32 movieID, uint32 flags);
void xFMVFullLevelReset();
void xFMVLevelReset();
void xFMVInit();

// xPadMapperFunc_FmvMenu__FP7tagxPadP13tagxPadActioni
// Start address: 0x35f0a0
int32 xPadMapperFunc_FmvMenu(tagxPad* pad, tagxPadAction* actions, int32 maxActions)
{
	tagxPadAction* a;
	_XBUTTON* b;
	int32 i;
	int32 actionCount;
	// Line 305, Address: 0x35f0a0, Func Offset: 0
	// Line 308, Address: 0x35f0c0, Func Offset: 0x20
	// Line 309, Address: 0x35f160, Func Offset: 0xc0
	// Line 311, Address: 0x35f200, Func Offset: 0x160
	// Line 313, Address: 0x35f204, Func Offset: 0x164
	// Line 315, Address: 0x35f210, Func Offset: 0x170
	// Line 316, Address: 0x35f21c, Func Offset: 0x17c
	// Line 321, Address: 0x35f22c, Func Offset: 0x18c
	// Line 322, Address: 0x35f234, Func Offset: 0x194
	// Line 323, Address: 0x35f244, Func Offset: 0x1a4
	// Line 325, Address: 0x35f248, Func Offset: 0x1a8
	// Line 328, Address: 0x35f2e4, Func Offset: 0x244
	// Line 329, Address: 0x35f2f8, Func Offset: 0x258
	// Line 330, Address: 0x35f300, Func Offset: 0x260
	// Line 333, Address: 0x35f308, Func Offset: 0x268
	// Line 334, Address: 0x35f31c, Func Offset: 0x27c
	// Line 335, Address: 0x35f324, Func Offset: 0x284
	// Line 338, Address: 0x35f32c, Func Offset: 0x28c
	// Line 339, Address: 0x35f340, Func Offset: 0x2a0
	// Line 340, Address: 0x35f348, Func Offset: 0x2a8
	// Line 343, Address: 0x35f350, Func Offset: 0x2b0
	// Line 344, Address: 0x35f364, Func Offset: 0x2c4
	// Line 345, Address: 0x35f36c, Func Offset: 0x2cc
	// Line 349, Address: 0x35f374, Func Offset: 0x2d4
	// Line 350, Address: 0x35f388, Func Offset: 0x2e8
	// Line 351, Address: 0x35f390, Func Offset: 0x2f0
	// Line 354, Address: 0x35f398, Func Offset: 0x2f8
	// Line 355, Address: 0x35f3ac, Func Offset: 0x30c
	// Line 356, Address: 0x35f3b4, Func Offset: 0x314
	// Line 359, Address: 0x35f3bc, Func Offset: 0x31c
	// Line 360, Address: 0x35f3d0, Func Offset: 0x330
	// Line 361, Address: 0x35f3d8, Func Offset: 0x338
	// Line 364, Address: 0x35f3e0, Func Offset: 0x340
	// Line 365, Address: 0x35f3f4, Func Offset: 0x354
	// Line 366, Address: 0x35f3fc, Func Offset: 0x35c
	// Line 369, Address: 0x35f404, Func Offset: 0x364
	// Line 370, Address: 0x35f418, Func Offset: 0x378
	// Line 371, Address: 0x35f420, Func Offset: 0x380
	// Line 373, Address: 0x35f428, Func Offset: 0x388
	// Line 374, Address: 0x35f43c, Func Offset: 0x39c
	// Line 375, Address: 0x35f444, Func Offset: 0x3a4
	// Line 376, Address: 0x35f448, Func Offset: 0x3a8
	// Line 377, Address: 0x35f45c, Func Offset: 0x3bc
	// Line 378, Address: 0x35f464, Func Offset: 0x3c4
	// Line 379, Address: 0x35f468, Func Offset: 0x3c8
	// Line 380, Address: 0x35f47c, Func Offset: 0x3dc
	// Line 383, Address: 0x35f484, Func Offset: 0x3e4
	// Line 385, Address: 0x35f488, Func Offset: 0x3e8
	// Line 386, Address: 0x35f494, Func Offset: 0x3f4
	// Line 387, Address: 0x35f498, Func Offset: 0x3f8
	// Line 389, Address: 0x35f4a4, Func Offset: 0x404
	// Line 390, Address: 0x35f4a8, Func Offset: 0x408
	// Line 393, Address: 0x35f4c0, Func Offset: 0x420
	// Func End, Address: 0x35f4dc, Func Offset: 0x43c
}

// xPadActionFunc_FmvMenu__FP7tagxPadiP13tagxPadAction
// Start address: 0x35f4e0
void xPadActionFunc_FmvMenu()
{
	// Line 290, Address: 0x35f4e0, Func Offset: 0
	// Func End, Address: 0x35f4e8, Func Offset: 0x8
}

// xFMVAudioName__FUiPc
// Start address: 0x35f4f0
void xFMVAudioName(int8* s)
{
	// Line 228, Address: 0x35f4f0, Func Offset: 0
	// Line 229, Address: 0x35f4f8, Func Offset: 0x8
	// Line 235, Address: 0x35f598, Func Offset: 0xa8
	// Func End, Address: 0x35f5a8, Func Offset: 0xb8
}

// xFMVResumeAudio__Fv
// Start address: 0x35f5b0
void xFMVResumeAudio()
{
	// Line 215, Address: 0x35f5b0, Func Offset: 0
	// Line 221, Address: 0x35f5b8, Func Offset: 0x8
	// Func End, Address: 0x35f5c0, Func Offset: 0x10
}

// xFMVPauseAudio__Fv
// Start address: 0x35f5c0
void xFMVPauseAudio()
{
	// Line 203, Address: 0x35f5c0, Func Offset: 0
	// Line 210, Address: 0x35f5c8, Func Offset: 0x8
	// Func End, Address: 0x35f5d0, Func Offset: 0x10
}

// xFMVStopAudio__Fv
// Start address: 0x35f5d0
void xFMVStopAudio()
{
	// Line 189, Address: 0x35f5d0, Func Offset: 0
	// Line 191, Address: 0x35f5d8, Func Offset: 0x8
	// Line 196, Address: 0x35f5e0, Func Offset: 0x10
	// Line 199, Address: 0x35f5e8, Func Offset: 0x18
	// Func End, Address: 0x35f5f8, Func Offset: 0x28
}

// xFMVIdle__Fv
// Start address: 0x35f600
uint32 xFMVIdle()
{
	// Line 163, Address: 0x35f600, Func Offset: 0
	// Line 185, Address: 0x35f614, Func Offset: 0x14
	// Line 186, Address: 0x35f618, Func Offset: 0x18
	// Func End, Address: 0x35f620, Func Offset: 0x20
}

// xFMVGetAudioStatus__Fv
// Start address: 0x35f620
uint32 xFMVGetAudioStatus()
{
	// Line 138, Address: 0x35f620, Func Offset: 0
	// Line 139, Address: 0x35f624, Func Offset: 0x4
	// Func End, Address: 0x35f62c, Func Offset: 0xc
}

// xFMVStartAudio__FUiUi
// Start address: 0x35f630
void xFMVStartAudio(uint32 audioID, uint32 flags)
{
	// Line 111, Address: 0x35f630, Func Offset: 0
	// Line 112, Address: 0x35f638, Func Offset: 0x8
	// Line 115, Address: 0x35f644, Func Offset: 0x14
	// Line 116, Address: 0x35f650, Func Offset: 0x20
	// Line 118, Address: 0x35f660, Func Offset: 0x30
	// Line 120, Address: 0x35f664, Func Offset: 0x34
	// Line 121, Address: 0x35f668, Func Offset: 0x38
	// Line 132, Address: 0x35f66c, Func Offset: 0x3c
	// Line 134, Address: 0x35f674, Func Offset: 0x44
	// Func End, Address: 0x35f684, Func Offset: 0x54
}

// xFMVPlayMovie__FUiUi
// Start address: 0x35f690
void xFMVPlayMovie(uint32 movieID, uint32 flags)
{
	int32 controller;
	int8 movieName[32];
	int32 returnVal;
	void(*savedAction)(tagxPad*, int32, tagxPadAction*);
	int32(*savedMapper)(tagxPad*, tagxPadAction*, int32);
	// Line 65, Address: 0x35f690, Func Offset: 0
	// Line 71, Address: 0x35f6b4, Func Offset: 0x24
	// Line 73, Address: 0x35f6b8, Func Offset: 0x28
	// Line 79, Address: 0x35f6c0, Func Offset: 0x30
	// Line 80, Address: 0x35f6d0, Func Offset: 0x40
	// Line 86, Address: 0x35f6e0, Func Offset: 0x50
	// Line 87, Address: 0x35f6f4, Func Offset: 0x64
	// Line 89, Address: 0x35f708, Func Offset: 0x78
	// Line 90, Address: 0x35f7a0, Func Offset: 0x110
	// Line 91, Address: 0x35f7b0, Func Offset: 0x120
	// Line 92, Address: 0x35f7c0, Func Offset: 0x130
	// Line 93, Address: 0x35f7d4, Func Offset: 0x144
	// Line 94, Address: 0x35f7e4, Func Offset: 0x154
	// Line 95, Address: 0x35f7f4, Func Offset: 0x164
	// Line 101, Address: 0x35f804, Func Offset: 0x174
	// Line 102, Address: 0x35f814, Func Offset: 0x184
	// Line 106, Address: 0x35f824, Func Offset: 0x194
	// Func End, Address: 0x35f848, Func Offset: 0x1b8
}

// xFMVFullLevelReset__Fv
// Start address: 0x35f850
void xFMVFullLevelReset()
{
	// Line 56, Address: 0x35f850, Func Offset: 0
	// Line 58, Address: 0x35f858, Func Offset: 0x8
	// Line 60, Address: 0x35f868, Func Offset: 0x18
	// Func End, Address: 0x35f878, Func Offset: 0x28
}

// xFMVLevelReset__Fv
// Start address: 0x35f880
void xFMVLevelReset()
{
	// Line 46, Address: 0x35f880, Func Offset: 0
	// Line 47, Address: 0x35f888, Func Offset: 0x8
	// Line 49, Address: 0x35f898, Func Offset: 0x18
	// Func End, Address: 0x35f8a8, Func Offset: 0x28
}

// xFMVInit__Fv
// Start address: 0x35f8b0
void xFMVInit()
{
	// Line 36, Address: 0x35f8b0, Func Offset: 0
	// Line 38, Address: 0x35f8b8, Func Offset: 0x8
	// Line 40, Address: 0x35f8c0, Func Offset: 0x10
	// Func End, Address: 0x35f8d0, Func Offset: 0x20
}

