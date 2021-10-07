typedef struct iColor_tag;
typedef struct xSB;
typedef struct xFontBox;

typedef void(*type_1)();

typedef int8* type_0[45];
typedef int8 type_2[16];
typedef int8 type_3[16][13];
typedef void(*type_4)()[45];

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct xSB
{
	int8* buf;
	uint32 max;
	int8* cur;
	int8* disp;
};

struct xFontBox
{
	int32 flags;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	uint32 font;
	iColor_tag color;
	iColor_tag saved_color;
	float32 draw_width;
	float32 draw_height;
	float32 x_spacing;
	float32 y_spacing;
	float32 depth;
	float32 inset_left;
	float32 inset_right;
	float32 inset_top;
	float32 inset_bottom;
	int8* text;
	iColor_tag backdrop_color;
};

int8 dm_names[16][13];
uint32 gFrameCount;
void(*sDebugModeCallbackFunc)()[45];
int8* sDebugModeName[45];
uint32 gDBfont;

void xDebugTimestampScreen();
void xDebugExit();
void xDebugUpdate();
void xDebugInit();
void xDebugModeRegisterCallback(int32 mode, void(*func)());
int32 xDebugModeAdd(int8* debugModeName, void(*func)());
int32 xDebugModeAdd(int8* debugModeName);
void xprintf();

// xDebugTimestampScreen__Fv
// Start address: 0x120030
void xDebugTimestampScreen()
{
	// Line 1524, Address: 0x120030, Func Offset: 0
	// Func End, Address: 0x120038, Func Offset: 0x8
}

// xDebugExit__Fv
// Start address: 0x120040
void xDebugExit()
{
	// Line 1447, Address: 0x120040, Func Offset: 0
	// Func End, Address: 0x120048, Func Offset: 0x8
}

// xDebugUpdate__Fv
// Start address: 0x120050
void xDebugUpdate()
{
	// Line 1443, Address: 0x120050, Func Offset: 0
	// Func End, Address: 0x120058, Func Offset: 0x8
}

// xDebugInit__Fv
// Start address: 0x120060
void xDebugInit()
{
	int32 i;
	// Line 1412, Address: 0x120074, Func Offset: 0x14
	// Line 1415, Address: 0x12007c, Func Offset: 0x1c
	// Line 1416, Address: 0x120088, Func Offset: 0x28
	// Line 1418, Address: 0x120090, Func Offset: 0x30
	// Line 1419, Address: 0x120098, Func Offset: 0x38
	// Line 1418, Address: 0x1200a0, Func Offset: 0x40
	// Line 1419, Address: 0x1200a8, Func Offset: 0x48
	// Line 1428, Address: 0x1200b0, Func Offset: 0x50
	// Func End, Address: 0x1200b8, Func Offset: 0x58
}

// xDebugModeRegisterCallback__FiPFv_v
// Start address: 0x1200c0
void xDebugModeRegisterCallback(int32 mode, void(*func)())
{
	// Line 654, Address: 0x1200c0, Func Offset: 0
	// Line 655, Address: 0x1200d0, Func Offset: 0x10
	// Func End, Address: 0x1200d8, Func Offset: 0x18
}

// xDebugModeAdd__FPCcPFv_v
// Start address: 0x1200e0
int32 xDebugModeAdd(int8* debugModeName, void(*func)())
{
	int32 modeid;
	// Line 631, Address: 0x1200e0, Func Offset: 0
	// Line 632, Address: 0x1200ec, Func Offset: 0xc
	// Line 633, Address: 0x1200f4, Func Offset: 0x14
	// Line 635, Address: 0x1200fc, Func Offset: 0x1c
	// Line 639, Address: 0x12010c, Func Offset: 0x2c
	// Func End, Address: 0x12011c, Func Offset: 0x3c
}

// xDebugModeAdd__FPCc
// Start address: 0x120120
int32 xDebugModeAdd(int8* debugModeName)
{
	int32 i;
	// Line 585, Address: 0x120120, Func Offset: 0
	// Line 589, Address: 0x120144, Func Offset: 0x24
	// Line 591, Address: 0x12014c, Func Offset: 0x2c
	// Line 593, Address: 0x120158, Func Offset: 0x38
	// Line 600, Address: 0x120168, Func Offset: 0x48
	// Line 602, Address: 0x120170, Func Offset: 0x50
	// Line 605, Address: 0x120180, Func Offset: 0x60
	// Line 606, Address: 0x120188, Func Offset: 0x68
	// Line 608, Address: 0x120194, Func Offset: 0x74
	// Line 609, Address: 0x12019c, Func Offset: 0x7c
	// Line 611, Address: 0x1201a4, Func Offset: 0x84
	// Line 615, Address: 0x1201b0, Func Offset: 0x90
	// Line 616, Address: 0x1201b4, Func Offset: 0x94
	// Func End, Address: 0x1201d0, Func Offset: 0xb0
}

// xprintf__FPCce
// Start address: 0x1201d0
void xprintf()
{
	// Line 490, Address: 0x1201d0, Func Offset: 0
	// Line 518, Address: 0x1201f0, Func Offset: 0x20
	// Func End, Address: 0x1201f8, Func Offset: 0x28
}

