typedef struct RwVideoMode;
typedef struct iColor_tag;
typedef struct RwSky2DVertexFields;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct RwRGBAReal;
typedef struct RwSky2DVertex;
typedef struct RwV3d;
typedef enum RwVideoModeFlag;


typedef RwSky2DVertex type_0[4];
typedef RwSky2DVertex type_1[4];
typedef uint16 type_2[4];
typedef uint16 type_3[4];
typedef <unknown fundamental type (0xa510)> type_4[4];

struct RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	RwVideoModeFlag flags;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODEFSAA0 = 0x8,
	rwVIDEOMODEFSAA1 = 0x10,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};


void iScrFxDrawLetterbox(int32 y_offset);
void iScrFxDrawFade(iColor_tag* col);
void iScrFxEnd();
void iScrFxBegin();

// iScrFxDrawLetterbox__FP8RwCamerai
// Start address: 0x19d430
void iScrFxDrawLetterbox(int32 y_offset)
{
	RwVideoMode video_mode;
	uint16 indices[4];
	RwSky2DVertex v[4];
	// Line 104, Address: 0x19d430, Func Offset: 0
	// Line 111, Address: 0x19d444, Func Offset: 0x14
	// Line 114, Address: 0x19d458, Func Offset: 0x28
	// Line 115, Address: 0x19d464, Func Offset: 0x34
	// Line 117, Address: 0x19d468, Func Offset: 0x38
	// Line 132, Address: 0x19d46c, Func Offset: 0x3c
	// Line 121, Address: 0x19d470, Func Offset: 0x40
	// Line 132, Address: 0x19d474, Func Offset: 0x44
	// Line 121, Address: 0x19d478, Func Offset: 0x48
	// Line 126, Address: 0x19d47c, Func Offset: 0x4c
	// Line 132, Address: 0x19d480, Func Offset: 0x50
	// Line 117, Address: 0x19d490, Func Offset: 0x60
	// Line 118, Address: 0x19d498, Func Offset: 0x68
	// Line 120, Address: 0x19d49c, Func Offset: 0x6c
	// Line 121, Address: 0x19d4a0, Func Offset: 0x70
	// Line 123, Address: 0x19d4a4, Func Offset: 0x74
	// Line 124, Address: 0x19d4a8, Func Offset: 0x78
	// Line 126, Address: 0x19d4ac, Func Offset: 0x7c
	// Line 127, Address: 0x19d4bc, Func Offset: 0x8c
	// Line 128, Address: 0x19d4cc, Func Offset: 0x9c
	// Line 129, Address: 0x19d4dc, Func Offset: 0xac
	// Line 132, Address: 0x19d4e8, Func Offset: 0xb8
	// Line 136, Address: 0x19d4f0, Func Offset: 0xc0
	// Line 137, Address: 0x19d4f4, Func Offset: 0xc4
	// Line 154, Address: 0x19d4f8, Func Offset: 0xc8
	// Line 137, Address: 0x19d4fc, Func Offset: 0xcc
	// Line 148, Address: 0x19d500, Func Offset: 0xd0
	// Line 137, Address: 0x19d504, Func Offset: 0xd4
	// Line 154, Address: 0x19d508, Func Offset: 0xd8
	// Line 137, Address: 0x19d518, Func Offset: 0xe8
	// Line 139, Address: 0x19d524, Func Offset: 0xf4
	// Line 140, Address: 0x19d530, Func Offset: 0x100
	// Line 142, Address: 0x19d534, Func Offset: 0x104
	// Line 143, Address: 0x19d538, Func Offset: 0x108
	// Line 145, Address: 0x19d53c, Func Offset: 0x10c
	// Line 146, Address: 0x19d540, Func Offset: 0x110
	// Line 148, Address: 0x19d544, Func Offset: 0x114
	// Line 149, Address: 0x19d554, Func Offset: 0x124
	// Line 150, Address: 0x19d564, Func Offset: 0x134
	// Line 151, Address: 0x19d574, Func Offset: 0x144
	// Line 154, Address: 0x19d580, Func Offset: 0x150
	// Line 156, Address: 0x19d588, Func Offset: 0x158
	// Func End, Address: 0x19d5a0, Func Offset: 0x170
}

// iScrFxDrawFade__FP8RwCameraP10iColor_tag
// Start address: 0x19d5a0
void iScrFxDrawFade(iColor_tag* col)
{
	RwVideoMode video_mode;
	uint16 indices[4];
	RwSky2DVertex v[4];
	// Line 61, Address: 0x19d5a0, Func Offset: 0
	// Line 68, Address: 0x19d5ac, Func Offset: 0xc
	// Line 71, Address: 0x19d5c0, Func Offset: 0x20
	// Line 72, Address: 0x19d5cc, Func Offset: 0x2c
	// Line 74, Address: 0x19d5d0, Func Offset: 0x30
	// Line 75, Address: 0x19d5dc, Func Offset: 0x3c
	// Line 77, Address: 0x19d5e0, Func Offset: 0x40
	// Line 78, Address: 0x19d5e4, Func Offset: 0x44
	// Line 80, Address: 0x19d5f0, Func Offset: 0x50
	// Line 81, Address: 0x19d5f4, Func Offset: 0x54
	// Line 83, Address: 0x19d5f8, Func Offset: 0x58
	// Line 84, Address: 0x19d6c8, Func Offset: 0x128
	// Line 85, Address: 0x19d798, Func Offset: 0x1f8
	// Line 86, Address: 0x19d868, Func Offset: 0x2c8
	// Line 90, Address: 0x19d934, Func Offset: 0x394
	// Line 86, Address: 0x19d938, Func Offset: 0x398
	// Line 90, Address: 0x19d93c, Func Offset: 0x39c
	// Line 92, Address: 0x19d94c, Func Offset: 0x3ac
	// Func End, Address: 0x19d95c, Func Offset: 0x3bc
}

// iScrFxEnd__Fv
// Start address: 0x19d960
void iScrFxEnd()
{
	// Line 40, Address: 0x19d960, Func Offset: 0
	// Line 41, Address: 0x19d968, Func Offset: 0x8
	// Line 42, Address: 0x19d974, Func Offset: 0x14
	// Line 43, Address: 0x19d980, Func Offset: 0x20
	// Line 44, Address: 0x19d98c, Func Offset: 0x2c
	// Line 45, Address: 0x19d998, Func Offset: 0x38
	// Line 46, Address: 0x19d9a4, Func Offset: 0x44
	// Line 47, Address: 0x19d9b0, Func Offset: 0x50
	// Line 48, Address: 0x19d9bc, Func Offset: 0x5c
	// Func End, Address: 0x19d9c8, Func Offset: 0x68
}

// iScrFxBegin__Fv
// Start address: 0x19d9d0
void iScrFxBegin()
{
	// Line 25, Address: 0x19d9d0, Func Offset: 0
	// Line 26, Address: 0x19d9d8, Func Offset: 0x8
	// Line 27, Address: 0x19d9e4, Func Offset: 0x14
	// Line 28, Address: 0x19d9f0, Func Offset: 0x20
	// Line 29, Address: 0x19d9fc, Func Offset: 0x2c
	// Line 30, Address: 0x19da08, Func Offset: 0x38
	// Line 31, Address: 0x19da14, Func Offset: 0x44
	// Line 32, Address: 0x19da20, Func Offset: 0x50
	// Line 33, Address: 0x19da2c, Func Offset: 0x5c
	// Line 34, Address: 0x19da38, Func Offset: 0x68
	// Func End, Address: 0x19da44, Func Offset: 0x74
}

