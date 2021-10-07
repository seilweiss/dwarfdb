typedef struct Vector3D;
typedef struct _RwV2d;


typedef int8 type[51];

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwV2d
{
	float32 x;
	float32 y;
};

int8 dbfont_chars[51];
int32 sDefaultLineColorR;
int32 sDefaultLineColorG;
int32 sDefaultLineColorB;

void iLineDrawScreenRGB(_RwV2d* p1, _RwV2d* p2);
void iCircleDrawRGB();
void iLineDrawXYZ(float32 x1, float32 y1, float32 z1, float32 x2, float32 y2, float32 z2);
void iLineDrawRGB(Vector3D* p1, Vector3D* p2);
void iLineDraw(Vector3D* p1, Vector3D* p2);
void iLineSetColor(int32 r, int32 g, int32 b);

// iLineDrawScreenRGB__FP6_RwV2dP6_RwV2diii
// Start address: 0x384ce0
void iLineDrawScreenRGB(_RwV2d* p1, _RwV2d* p2)
{
	// Line 83, Address: 0x384ce0, Func Offset: 0
	// Line 85, Address: 0x384ce8, Func Offset: 0x8
	// Line 86, Address: 0x384d10, Func Offset: 0x30
	// Func End, Address: 0x384d20, Func Offset: 0x40
}

// iCircleDrawRGB__FP8Vector3Dfiii
// Start address: 0x384d20
void iCircleDrawRGB()
{
	// Line 79, Address: 0x384d20, Func Offset: 0
	// Func End, Address: 0x384d28, Func Offset: 0x8
}

// iLineDrawXYZ__Fffffff
// Start address: 0x384d30
void iLineDrawXYZ(float32 x1, float32 y1, float32 z1, float32 x2, float32 y2, float32 z2)
{
	// Line 62, Address: 0x384d30, Func Offset: 0
	// Line 72, Address: 0x384d38, Func Offset: 0x8
	// Line 73, Address: 0x384d40, Func Offset: 0x10
	// Func End, Address: 0x384d50, Func Offset: 0x20
}

// iLineDrawRGB__FP8Vector3DP8Vector3Diii
// Start address: 0x384d50
void iLineDrawRGB(Vector3D* p1, Vector3D* p2)
{
	// Line 50, Address: 0x384d50, Func Offset: 0
	// Line 53, Address: 0x384d58, Func Offset: 0x8
	// Line 54, Address: 0x384d78, Func Offset: 0x28
	// Func End, Address: 0x384d88, Func Offset: 0x38
}

// iLineDraw__FP8Vector3DP8Vector3D
// Start address: 0x384d90
void iLineDraw(Vector3D* p1, Vector3D* p2)
{
	// Line 39, Address: 0x384d90, Func Offset: 0
	// Line 40, Address: 0x384d98, Func Offset: 0x8
	// Line 41, Address: 0x384db8, Func Offset: 0x28
	// Func End, Address: 0x384dc8, Func Offset: 0x38
}

// iLineSetColor__Fiii
// Start address: 0x384dd0
void iLineSetColor(int32 r, int32 g, int32 b)
{
	// Line 27, Address: 0x384dd0, Func Offset: 0
	// Line 28, Address: 0x384dd4, Func Offset: 0x4
	// Line 29, Address: 0x384dd8, Func Offset: 0x8
	// Line 30, Address: 0x384ddc, Func Offset: 0xc
	// Func End, Address: 0x384de4, Func Offset: 0x14
}

