typedef struct _tagActionLine;
typedef struct RwLLLink;
typedef struct _xMat3x3;
typedef struct RwRGBA;
typedef struct RwTexture;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef struct _xVec3;
typedef struct RwRaster;
typedef struct RwV3d;
typedef struct RxColorUnion;
typedef struct RwLinkList;
typedef struct RwTexDictionary;
typedef struct RxObjSpace3DVertex;
typedef enum RwTextureAddressMode;


typedef _xVec3 type_0[4];
typedef _tagActionLine* type_1[8];
typedef int8 type_2[32];
typedef int8 type_3[32];
typedef RxObjSpace3DVertex type_4[4];

struct _tagActionLine
{
	uint32 flags;
	_xVec3 pos[4];
	float32 time_left;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	int32 refCount;
	RwTextureFilterMode filtering;
	RwTextureAddressMode addressingU;
	RwTextureAddressMode addressingV;
};

enum RwTextureFilterMode
{
	rwFILTERNAFILTERMODE,
	rwFILTERNEAREST,
	rwFILTERLINEAR,
	rwFILTERMIPNEAREST,
	rwFILTERMIPLINEAR,
	rwFILTERLINEARMIPNEAREST,
	rwFILTERLINEARMIPLINEAR,
	rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwRaster
{
	RwRaster* parent;
	uint8* cpPixels;
	uint8* palette;
	int32 width;
	int32 height;
	int32 depth;
	int32 stride;
	int16 nOffsetX;
	int16 nOffsetY;
	uint8 cType;
	uint8 cFlags;
	uint8 privateFlags;
	uint8 cFormat;
	uint8* originalPixels;
	int32 originalWidth;
	int32 originalHeight;
	int32 originalStride;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

_tagActionLine* sActionLine[8];
RwRaster* sActionLineRaster;
uint32 gActiveHeap;

void zActionLineRender();
void RenderActionLine(_tagActionLine* l);
void zActionLineUpdate(float32 seconds);
void zActionLineInit();

// zActionLineRender__Fv
// Start address: 0x279ed0
void zActionLineRender()
{
	int32 i;
	// Line 217, Address: 0x279ed0, Func Offset: 0
	// Line 219, Address: 0x279ee0, Func Offset: 0x10
	// Line 223, Address: 0x279ef0, Func Offset: 0x20
	// Line 225, Address: 0x279ef8, Func Offset: 0x28
	// Line 227, Address: 0x279f14, Func Offset: 0x44
	// Line 228, Address: 0x279f1c, Func Offset: 0x4c
	// Line 229, Address: 0x279f20, Func Offset: 0x50
	// Line 230, Address: 0x279f30, Func Offset: 0x60
	// Func End, Address: 0x279f44, Func Offset: 0x74
}

// RenderActionLine__FP14_tagActionLine
// Start address: 0x279f50
void RenderActionLine(_tagActionLine* l)
{
	RwRGBA* _col;
	int32 i;
	RxObjSpace3DVertex* vert;
	RxObjSpace3DVertex sStripVert[4];
	// Line 190, Address: 0x279f50, Func Offset: 0
	// Line 182, Address: 0x279f54, Func Offset: 0x4
	// Line 190, Address: 0x279f58, Func Offset: 0x8
	// Line 182, Address: 0x279f5c, Func Offset: 0xc
	// Line 190, Address: 0x279f60, Func Offset: 0x10
	// Line 193, Address: 0x279f64, Func Offset: 0x14
	// Line 198, Address: 0x279f68, Func Offset: 0x18
	// Line 195, Address: 0x279f70, Func Offset: 0x20
	// Line 200, Address: 0x279f7c, Func Offset: 0x2c
	// Line 195, Address: 0x279f84, Func Offset: 0x34
	// Line 196, Address: 0x279f90, Func Offset: 0x40
	// Line 197, Address: 0x279f94, Func Offset: 0x44
	// Line 198, Address: 0x279f98, Func Offset: 0x48
	// Line 199, Address: 0x279fa8, Func Offset: 0x58
	// Line 200, Address: 0x279fac, Func Offset: 0x5c
	// Line 202, Address: 0x279fb4, Func Offset: 0x64
	// Line 203, Address: 0x279fbc, Func Offset: 0x6c
	// Line 204, Address: 0x279fc0, Func Offset: 0x70
	// Line 207, Address: 0x279fc4, Func Offset: 0x74
	// Line 209, Address: 0x279fe0, Func Offset: 0x90
	// Line 210, Address: 0x279fe8, Func Offset: 0x98
	// Line 212, Address: 0x279ff0, Func Offset: 0xa0
	// Func End, Address: 0x279ffc, Func Offset: 0xac
}

// zActionLineUpdate__Ff
// Start address: 0x27a000
void zActionLineUpdate(float32 seconds)
{
	_tagActionLine* l;
	int32 i;
	// Line 128, Address: 0x27a004, Func Offset: 0x4
	// Line 135, Address: 0x27a00c, Func Offset: 0xc
	// Line 137, Address: 0x27a010, Func Offset: 0x10
	// Line 130, Address: 0x27a014, Func Offset: 0x14
	// Line 131, Address: 0x27a018, Func Offset: 0x18
	// Line 134, Address: 0x27a030, Func Offset: 0x30
	// Line 135, Address: 0x27a038, Func Offset: 0x38
	// Line 137, Address: 0x27a048, Func Offset: 0x48
	// Line 139, Address: 0x27a054, Func Offset: 0x54
	// Line 141, Address: 0x27a058, Func Offset: 0x58
	// Line 142, Address: 0x27a068, Func Offset: 0x68
	// Func End, Address: 0x27a070, Func Offset: 0x70
}

// zActionLineInit__Fv
// Start address: 0x27a070
void zActionLineInit()
{
	RwTexture* tex;
	// Line 34, Address: 0x27a070, Func Offset: 0
	// Line 37, Address: 0x27a074, Func Offset: 0x4
	// Line 34, Address: 0x27a078, Func Offset: 0x8
	// Line 37, Address: 0x27a07c, Func Offset: 0xc
	// Line 34, Address: 0x27a080, Func Offset: 0x10
	// Line 37, Address: 0x27a084, Func Offset: 0x14
	// Line 43, Address: 0x27a0a4, Func Offset: 0x34
	// Line 37, Address: 0x27a0a8, Func Offset: 0x38
	// Line 42, Address: 0x27a0ac, Func Offset: 0x3c
	// Line 43, Address: 0x27a0b0, Func Offset: 0x40
	// Line 44, Address: 0x27a0c8, Func Offset: 0x58
	// Line 46, Address: 0x27a0d0, Func Offset: 0x60
	// Line 53, Address: 0x27a0d8, Func Offset: 0x68
	// Func End, Address: 0x27a0e8, Func Offset: 0x78
}

