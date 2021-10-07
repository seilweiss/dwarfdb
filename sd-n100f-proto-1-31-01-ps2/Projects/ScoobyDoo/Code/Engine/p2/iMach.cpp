typedef struct xFontBox_t;


typedef int8 type[0];

struct xFontBox_t
{
	uint32 flags;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	uint32 font;
	uint32 color;
	uint32 saved_color;
	float32 x_spacing;
	float32 y_spacing;
	float32 depth;
	float32 inset_left;
	float32 inset_right;
	float32 inset_top;
	float32 inset_bottom;
	int8* text;
	uint32 backdrop_color;
};

int8 timestamp[0];

void iMachDisplayBuildInfo();
void InitHardware();

// iMachDisplayBuildInfo__Fv
// Start address: 0x384b90
void iMachDisplayBuildInfo()
{
	int32 delta;
	int32 B;
	int32 G;
	int32 R;
	xFontBox_t* box;
	uint32 ct;
	// Line 78, Address: 0x384b90, Func Offset: 0
	// Line 83, Address: 0x384bac, Func Offset: 0x1c
	// Line 84, Address: 0x384be4, Func Offset: 0x54
	// Line 85, Address: 0x384bf4, Func Offset: 0x64
	// Line 86, Address: 0x384c0c, Func Offset: 0x7c
	// Line 87, Address: 0x384c20, Func Offset: 0x90
	// Line 89, Address: 0x384c3c, Func Offset: 0xac
	// Line 90, Address: 0x384c40, Func Offset: 0xb0
	// Line 91, Address: 0x384c44, Func Offset: 0xb4
	// Line 94, Address: 0x384c48, Func Offset: 0xb8
	// Line 99, Address: 0x384c4c, Func Offset: 0xbc
	// Line 101, Address: 0x384c68, Func Offset: 0xd8
	// Line 105, Address: 0x384c78, Func Offset: 0xe8
	// Line 106, Address: 0x384c84, Func Offset: 0xf4
	// Func End, Address: 0x384ca8, Func Offset: 0x118
}

// InitHardware__Fv
// Start address: 0x384cb0
void InitHardware()
{
	// Line 27, Address: 0x384cb0, Func Offset: 0
	// Line 44, Address: 0x384cb8, Func Offset: 0x8
	// Line 48, Address: 0x384cc0, Func Offset: 0x10
	// Line 49, Address: 0x384ccc, Func Offset: 0x1c
	// Func End, Address: 0x384cdc, Func Offset: 0x2c
}

