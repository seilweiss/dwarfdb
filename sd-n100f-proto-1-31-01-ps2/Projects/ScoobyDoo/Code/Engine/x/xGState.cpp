typedef struct tagXStreamMDSDirectory;
typedef struct tagxPad;
typedef struct tagxPadAction;
typedef struct XStreamHeader;
typedef struct _tagNativePadData;
typedef struct tagXStreamDirectoryEntry;
typedef struct _XBUTTON;

typedef void(*type_1)(tagxPad*, int32, tagxPadAction*);
typedef int32(*type_2)(tagxPad*, tagxPadAction*, int32);
typedef void(*type_3)(int32);
typedef void(*type_6)(tagxPad*, int32, tagxPadAction*);
typedef int32(*type_8)(tagxPad*, tagxPadAction*, int32);

typedef tagXStreamDirectoryEntry type_0[1000];
typedef _XBUTTON type_4[16];
typedef int8 type_5[2048];
typedef uint8 type_7[6];
typedef int8 type_9[128];
typedef uint8 type_10[4];
typedef uint8 type_11[12];
typedef uint8 type_12[12];

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
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

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

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

int32 doStateChange;
uint32 interpreterMethod;
uint32 gSavedTimeSec;
float32 gTimeSec;
int32 gGameState;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;
ulong32 gTimerValue;
int32 gPlayerType;
int32(*xPadMapperFunc_GuiMenu)(tagxPad*, tagxPadAction*, int32);
void(*xPadActionFunc_GuiMenu)(tagxPad*, int32, tagxPadAction*);
void(*xPadActionFunc_Player)(tagxPad*, int32, tagxPadAction*);
int32(*xPadMapperFunc_Player)(tagxPad*, tagxPadAction*, int32);
int32 gQuit;
void(*xScriptGStateChange)(int32);

void xScriptGStateChange(int32 toState);
void xGStateChange(int32 toState);
void xGStateSet(int32 toState);
void xGStateIdle();
void xGStateReInitializeInterpreter();
void xGStateInit();

// xScriptGStateChange__Fi
// Start address: 0x35cc80
void xScriptGStateChange(int32 toState)
{
	// Line 228, Address: 0x35cc80, Func Offset: 0
	// Line 229, Address: 0x35cc84, Func Offset: 0x4
	// Func End, Address: 0x35cc8c, Func Offset: 0xc
}

// xGStateChange__Fi
// Start address: 0x35cc90
void xGStateChange(int32 toState)
{
	int32 timeWhenWeEnteredInventory;
	// Line 160, Address: 0x35cc90, Func Offset: 0
	// Line 165, Address: 0x35cca4, Func Offset: 0x14
	// Line 170, Address: 0x35ccb0, Func Offset: 0x20
	// Line 171, Address: 0x35ccbc, Func Offset: 0x2c
	// Line 174, Address: 0x35ccc8, Func Offset: 0x38
	// Line 176, Address: 0x35cce0, Func Offset: 0x50
	// Line 179, Address: 0x35cd18, Func Offset: 0x88
	// Line 180, Address: 0x35cd20, Func Offset: 0x90
	// Line 182, Address: 0x35cd34, Func Offset: 0xa4
	// Line 192, Address: 0x35cd3c, Func Offset: 0xac
	// Line 193, Address: 0x35cd58, Func Offset: 0xc8
	// Line 198, Address: 0x35cd60, Func Offset: 0xd0
	// Line 199, Address: 0x35cd74, Func Offset: 0xe4
	// Line 204, Address: 0x35ce0c, Func Offset: 0x17c
	// Line 205, Address: 0x35ce24, Func Offset: 0x194
	// Line 207, Address: 0x35ce34, Func Offset: 0x1a4
	// Line 209, Address: 0x35ce50, Func Offset: 0x1c0
	// Line 212, Address: 0x35ce70, Func Offset: 0x1e0
	// Line 213, Address: 0x35ce7c, Func Offset: 0x1ec
	// Func End, Address: 0x35ce94, Func Offset: 0x204
}

// xGStateSet__Fi
// Start address: 0x35cea0
void xGStateSet(int32 toState)
{
	// Line 82, Address: 0x35cea0, Func Offset: 0
	// Line 86, Address: 0x35ceb0, Func Offset: 0x10
	// Line 89, Address: 0x35cef0, Func Offset: 0x50
	// Line 90, Address: 0x35cf00, Func Offset: 0x60
	// Line 91, Address: 0x35cf10, Func Offset: 0x70
	// Line 92, Address: 0x35cf18, Func Offset: 0x78
	// Line 95, Address: 0x35cf20, Func Offset: 0x80
	// Line 96, Address: 0x35cf34, Func Offset: 0x94
	// Line 97, Address: 0x35cf48, Func Offset: 0xa8
	// Line 100, Address: 0x35cf50, Func Offset: 0xb0
	// Line 101, Address: 0x35cf64, Func Offset: 0xc4
	// Line 102, Address: 0x35cf78, Func Offset: 0xd8
	// Line 105, Address: 0x35cf80, Func Offset: 0xe0
	// Line 106, Address: 0x35cf94, Func Offset: 0xf4
	// Line 109, Address: 0x35cfa8, Func Offset: 0x108
	// Line 110, Address: 0x35cfb0, Func Offset: 0x110
	// Line 113, Address: 0x35cfb8, Func Offset: 0x118
	// Line 114, Address: 0x35cfcc, Func Offset: 0x12c
	// Line 115, Address: 0x35cfe0, Func Offset: 0x140
	// Line 118, Address: 0x35cfe8, Func Offset: 0x148
	// Line 119, Address: 0x35cffc, Func Offset: 0x15c
	// Line 135, Address: 0x35d094, Func Offset: 0x1f4
	// Line 137, Address: 0x35d0a4, Func Offset: 0x204
	// Line 143, Address: 0x35d0ac, Func Offset: 0x20c
	// Line 144, Address: 0x35d0b0, Func Offset: 0x210
	// Func End, Address: 0x35d0c4, Func Offset: 0x224
}

// xGStateIdle__Fv
// Start address: 0x35d0d0
void xGStateIdle()
{
	// Line 58, Address: 0x35d0d0, Func Offset: 0
	// Line 59, Address: 0x35d0d8, Func Offset: 0x8
	// Line 61, Address: 0x35d0e8, Func Offset: 0x18
	// Line 62, Address: 0x35d0f4, Func Offset: 0x24
	// Line 64, Address: 0x35d0fc, Func Offset: 0x2c
	// Func End, Address: 0x35d10c, Func Offset: 0x3c
}

// xGStateReInitializeInterpreter__Fv
// Start address: 0x35d110
void xGStateReInitializeInterpreter()
{
	// Line 52, Address: 0x35d110, Func Offset: 0
	// Line 53, Address: 0x35d114, Func Offset: 0x4
	// Func End, Address: 0x35d11c, Func Offset: 0xc
}

// xGStateInit__Fv
// Start address: 0x35d120
void xGStateInit()
{
	// Line 34, Address: 0x35d120, Func Offset: 0
	// Line 35, Address: 0x35d128, Func Offset: 0x8
	// Line 36, Address: 0x35d144, Func Offset: 0x24
	// Func End, Address: 0x35d154, Func Offset: 0x34
}

