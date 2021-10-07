typedef enum _SDRenderState;
typedef struct RwLLLink;
typedef enum RwTextureFilterMode;
typedef struct RwRaster;
typedef struct RwObject;
typedef struct RwLinkList;
typedef struct RwTexDictionary;
typedef struct RwTexture;
typedef enum RwTextureAddressMode;


typedef int8 type_0[32];
typedef int8 type_1[32];
typedef int32 type_2[11];

enum _SDRenderState
{
	SDRS_Unknown,
	SDRS_Default,
	SDRS_OpaqueModels,
	SDRS_AlphaModels,
	SDRS_Bubble,
	SDRS_Projectile,
	SDRS_Font,
	SDRS_HUD,
	SDRS_Particles,
	SDRS_Lightning,
	SDRS_SkidMark,
	SDRS_Tide,
	SDRS_SkyBack,
	SDRS_Total = 0xffffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

_SDRenderState sRS;
int32 sBlendTable[11];

void zRenderStateSetDstBlendMode(int32 xmode);
void zRenderStateSetSrcBlendMode(int32 xmode);
void zRenderStateSetTexture(uint32 assetID);
void zRenderState(_SDRenderState next);
void zRenderStateInit();

// zRenderStateSetDstBlendMode__Fi
// Start address: 0x1d1da0
void zRenderStateSetDstBlendMode(int32 xmode)
{
	// Line 340, Address: 0x1d1da0, Func Offset: 0
	// Func End, Address: 0x1d1dbc, Func Offset: 0x1c
}

// zRenderStateSetSrcBlendMode__Fi
// Start address: 0x1d1dc0
void zRenderStateSetSrcBlendMode(int32 xmode)
{
	// Line 335, Address: 0x1d1dc0, Func Offset: 0
	// Func End, Address: 0x1d1ddc, Func Offset: 0x1c
}

// zRenderStateSetTexture__FUi
// Start address: 0x1d1de0
void zRenderStateSetTexture(uint32 assetID)
{
	RwRaster* raster;
	RwTexture* texture;
	// Line 316, Address: 0x1d1de0, Func Offset: 0
	// Line 317, Address: 0x1d1de4, Func Offset: 0x4
	// Line 319, Address: 0x1d1dec, Func Offset: 0xc
	// Line 320, Address: 0x1d1df8, Func Offset: 0x18
	// Line 323, Address: 0x1d1e00, Func Offset: 0x20
	// Line 324, Address: 0x1d1e08, Func Offset: 0x28
	// Line 326, Address: 0x1d1e10, Func Offset: 0x30
	// Line 327, Address: 0x1d1e14, Func Offset: 0x34
	// Line 328, Address: 0x1d1e1c, Func Offset: 0x3c
	// Line 331, Address: 0x1d1e24, Func Offset: 0x44
	// Func End, Address: 0x1d1e30, Func Offset: 0x50
}

// zRenderState__F14_SDRenderState
// Start address: 0x1d1e30
void zRenderState(_SDRenderState next)
{
	// Line 54, Address: 0x1d1e30, Func Offset: 0
	// Line 55, Address: 0x1d1e40, Func Offset: 0x10
	// Line 63, Address: 0x1d1e54, Func Offset: 0x24
	// Line 64, Address: 0x1d1e5c, Func Offset: 0x2c
	// Line 66, Address: 0x1d1e64, Func Offset: 0x34
	// Line 67, Address: 0x1d1e68, Func Offset: 0x38
	// Line 71, Address: 0x1d1e90, Func Offset: 0x60
	// Line 74, Address: 0x1d1e9c, Func Offset: 0x6c
	// Line 77, Address: 0x1d1ea8, Func Offset: 0x78
	// Line 80, Address: 0x1d1eb4, Func Offset: 0x84
	// Line 83, Address: 0x1d1ec0, Func Offset: 0x90
	// Line 84, Address: 0x1d1ecc, Func Offset: 0x9c
	// Line 87, Address: 0x1d1ed8, Func Offset: 0xa8
	// Line 88, Address: 0x1d1ee4, Func Offset: 0xb4
	// Line 91, Address: 0x1d1ef0, Func Offset: 0xc0
	// Line 94, Address: 0x1d1efc, Func Offset: 0xcc
	// Line 95, Address: 0x1d1f08, Func Offset: 0xd8
	// Line 96, Address: 0x1d1f14, Func Offset: 0xe4
	// Line 101, Address: 0x1d1f1c, Func Offset: 0xec
	// Line 102, Address: 0x1d1f28, Func Offset: 0xf8
	// Line 105, Address: 0x1d1f34, Func Offset: 0x104
	// Line 108, Address: 0x1d1f40, Func Offset: 0x110
	// Line 111, Address: 0x1d1f4c, Func Offset: 0x11c
	// Line 114, Address: 0x1d1f58, Func Offset: 0x128
	// Line 117, Address: 0x1d1f64, Func Offset: 0x134
	// Line 118, Address: 0x1d1f70, Func Offset: 0x140
	// Line 123, Address: 0x1d1f7c, Func Offset: 0x14c
	// Line 124, Address: 0x1d1f88, Func Offset: 0x158
	// Line 128, Address: 0x1d1f90, Func Offset: 0x160
	// Line 129, Address: 0x1d1f9c, Func Offset: 0x16c
	// Line 132, Address: 0x1d1fa8, Func Offset: 0x178
	// Line 135, Address: 0x1d1fb4, Func Offset: 0x184
	// Line 138, Address: 0x1d1fc0, Func Offset: 0x190
	// Line 139, Address: 0x1d1fcc, Func Offset: 0x19c
	// Line 142, Address: 0x1d1fd8, Func Offset: 0x1a8
	// Line 143, Address: 0x1d1fe4, Func Offset: 0x1b4
	// Line 148, Address: 0x1d1fec, Func Offset: 0x1bc
	// Line 149, Address: 0x1d1ff8, Func Offset: 0x1c8
	// Line 152, Address: 0x1d2004, Func Offset: 0x1d4
	// Line 155, Address: 0x1d2010, Func Offset: 0x1e0
	// Line 158, Address: 0x1d201c, Func Offset: 0x1ec
	// Line 161, Address: 0x1d2028, Func Offset: 0x1f8
	// Line 164, Address: 0x1d2034, Func Offset: 0x204
	// Line 165, Address: 0x1d2040, Func Offset: 0x210
	// Line 166, Address: 0x1d204c, Func Offset: 0x21c
	// Line 170, Address: 0x1d2054, Func Offset: 0x224
	// Line 171, Address: 0x1d2060, Func Offset: 0x230
	// Line 174, Address: 0x1d206c, Func Offset: 0x23c
	// Line 177, Address: 0x1d2078, Func Offset: 0x248
	// Line 180, Address: 0x1d2084, Func Offset: 0x254
	// Line 183, Address: 0x1d2090, Func Offset: 0x260
	// Line 186, Address: 0x1d209c, Func Offset: 0x26c
	// Line 187, Address: 0x1d20a8, Func Offset: 0x278
	// Line 188, Address: 0x1d20b4, Func Offset: 0x284
	// Line 192, Address: 0x1d20bc, Func Offset: 0x28c
	// Line 193, Address: 0x1d20c8, Func Offset: 0x298
	// Line 196, Address: 0x1d20d4, Func Offset: 0x2a4
	// Line 199, Address: 0x1d20e0, Func Offset: 0x2b0
	// Line 202, Address: 0x1d20ec, Func Offset: 0x2bc
	// Line 203, Address: 0x1d20f8, Func Offset: 0x2c8
	// Line 204, Address: 0x1d2104, Func Offset: 0x2d4
	// Line 208, Address: 0x1d210c, Func Offset: 0x2dc
	// Line 209, Address: 0x1d2118, Func Offset: 0x2e8
	// Line 212, Address: 0x1d2124, Func Offset: 0x2f4
	// Line 215, Address: 0x1d2130, Func Offset: 0x300
	// Line 218, Address: 0x1d213c, Func Offset: 0x30c
	// Line 219, Address: 0x1d2148, Func Offset: 0x318
	// Line 220, Address: 0x1d2154, Func Offset: 0x324
	// Line 224, Address: 0x1d215c, Func Offset: 0x32c
	// Line 225, Address: 0x1d2168, Func Offset: 0x338
	// Line 228, Address: 0x1d2174, Func Offset: 0x344
	// Line 231, Address: 0x1d2180, Func Offset: 0x350
	// Line 234, Address: 0x1d218c, Func Offset: 0x35c
	// Line 237, Address: 0x1d2198, Func Offset: 0x368
	// Line 238, Address: 0x1d21a4, Func Offset: 0x374
	// Line 239, Address: 0x1d21b0, Func Offset: 0x380
	// Line 243, Address: 0x1d21b8, Func Offset: 0x388
	// Line 244, Address: 0x1d21c4, Func Offset: 0x394
	// Line 247, Address: 0x1d21d0, Func Offset: 0x3a0
	// Line 250, Address: 0x1d21dc, Func Offset: 0x3ac
	// Line 253, Address: 0x1d21e8, Func Offset: 0x3b8
	// Line 256, Address: 0x1d21f4, Func Offset: 0x3c4
	// Line 257, Address: 0x1d2200, Func Offset: 0x3d0
	// Line 258, Address: 0x1d220c, Func Offset: 0x3dc
	// Line 262, Address: 0x1d2214, Func Offset: 0x3e4
	// Line 263, Address: 0x1d2220, Func Offset: 0x3f0
	// Line 266, Address: 0x1d222c, Func Offset: 0x3fc
	// Line 269, Address: 0x1d2238, Func Offset: 0x408
	// Line 272, Address: 0x1d2244, Func Offset: 0x414
	// Line 273, Address: 0x1d2250, Func Offset: 0x420
	// Line 277, Address: 0x1d225c, Func Offset: 0x42c
	// Line 278, Address: 0x1d2268, Func Offset: 0x438
	// Line 285, Address: 0x1d2270, Func Offset: 0x440
	// Line 288, Address: 0x1d227c, Func Offset: 0x44c
	// Line 291, Address: 0x1d2288, Func Offset: 0x458
	// Line 294, Address: 0x1d2294, Func Offset: 0x464
	// Line 297, Address: 0x1d22a0, Func Offset: 0x470
	// Line 300, Address: 0x1d22ac, Func Offset: 0x47c
	// Line 303, Address: 0x1d22b8, Func Offset: 0x488
	// Line 304, Address: 0x1d22c4, Func Offset: 0x494
	// Line 312, Address: 0x1d22d0, Func Offset: 0x4a0
	// Func End, Address: 0x1d22e4, Func Offset: 0x4b4
}

// zRenderStateInit__Fv
// Start address: 0x1d22f0
void zRenderStateInit()
{
	// Line 47, Address: 0x1d22f0, Func Offset: 0
	// Func End, Address: 0x1d22f8, Func Offset: 0x8
}

