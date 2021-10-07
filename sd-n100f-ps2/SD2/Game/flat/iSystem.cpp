typedef struct RwRaster;
typedef enum RwTextureFilterMode;
typedef struct RwTexDictionary;
typedef enum RwVideoModeFlag;
typedef struct RwMemoryFunctions;
typedef struct sceCdCLOCK;
typedef struct RwTexture;
typedef struct RwVideoMode;
typedef struct RwEngineOpenParams;
typedef enum RwTextureAddressMode;
typedef struct RwLLLink;
typedef struct RwObject;
typedef struct RwLinkList;

typedef void*(*type_3)(uint32);
typedef void(*type_4)(void*);
typedef void*(*type_5)(void*, uint32);
typedef void*(*type_6)(uint32, uint32);
typedef RwTexture*(*type_7)(int8*, int8*);
typedef int32(*type_8)(int32);

typedef int8 type_0[32];
typedef int8 type_1[32];
typedef int8 type_2[256];

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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RwMemoryFunctions
{
	void*(*rwmalloc)(uint32);
	void(*rwfree)(void*);
	void*(*rwrealloc)(void*, uint32);
	void*(*rwcalloc)(uint32, uint32);
};

struct sceCdCLOCK
{
	uint8 stat;
	uint8 second;
	uint8 minute;
	uint8 hour;
	uint8 pad;
	uint8 day;
	uint8 month;
	uint8 year;
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

struct RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	RwVideoModeFlag flags;
};

struct RwEngineOpenParams
{
	void* displayID;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

void* hackResourceArenaPointer;
int32 DVD;
RwVideoMode sVideoMode;
int32 gFB_Flags;
uint32 gVsyncCount;
int32(*vsyncCounterHandler)(int32);
RwTexture*(*TextureRead)(int8*, int8*);
int32 sweMaxFlips;

uint32 iGetCurrFormattedTime(int8* str);
uint32 iGetCurrFormattedDate(int8* str);
uint8 iGetMonth();
uint8 iGetDay();
void iVSync();
RwTexture* TextureRead(int8* name, int8* maskName);
uint32 RenderWareInit();
int32 vsyncCounterHandler();
void iSystemExit();
void iSystemInit();
uint32 psSelectDevice();

// iGetCurrFormattedTime__FPc
// Start address: 0x1234d0
uint32 iGetCurrFormattedTime(int8* str)
{
	sceCdCLOCK clock;
	// Line 1223, Address: 0x1234d0, Func Offset: 0
	// Line 1225, Address: 0x1234e0, Func Offset: 0x10
	// Line 1228, Address: 0x1234f0, Func Offset: 0x20
	// Line 1229, Address: 0x123500, Func Offset: 0x30
	// Line 1231, Address: 0x123510, Func Offset: 0x40
	// Line 1232, Address: 0x123518, Func Offset: 0x48
	// Line 1233, Address: 0x12360c, Func Offset: 0x13c
	// Line 1235, Address: 0x123618, Func Offset: 0x148
	// Func End, Address: 0x123628, Func Offset: 0x158
}

// iGetCurrFormattedDate__FPc
// Start address: 0x123630
uint32 iGetCurrFormattedDate(int8* str)
{
	sceCdCLOCK clock;
	// Line 1209, Address: 0x123630, Func Offset: 0
	// Line 1211, Address: 0x123640, Func Offset: 0x10
	// Line 1214, Address: 0x123650, Func Offset: 0x20
	// Line 1215, Address: 0x123660, Func Offset: 0x30
	// Line 1217, Address: 0x123670, Func Offset: 0x40
	// Line 1218, Address: 0x123678, Func Offset: 0x48
	// Line 1219, Address: 0x123708, Func Offset: 0xd8
	// Line 1220, Address: 0x123714, Func Offset: 0xe4
	// Func End, Address: 0x123724, Func Offset: 0xf4
}

// iGetMonth__Fv
// Start address: 0x123730
uint8 iGetMonth()
{
	sceCdCLOCK clock;
	// Line 1156, Address: 0x123730, Func Offset: 0
	// Line 1158, Address: 0x123738, Func Offset: 0x8
	// Line 1159, Address: 0x123740, Func Offset: 0x10
	// Line 1160, Address: 0x123748, Func Offset: 0x18
	// Line 1161, Address: 0x123750, Func Offset: 0x20
	// Func End, Address: 0x12375c, Func Offset: 0x2c
}

// iGetDay__Fv
// Start address: 0x123760
uint8 iGetDay()
{
	sceCdCLOCK clock;
	// Line 1149, Address: 0x123760, Func Offset: 0
	// Line 1151, Address: 0x123768, Func Offset: 0x8
	// Line 1152, Address: 0x123770, Func Offset: 0x10
	// Line 1153, Address: 0x123778, Func Offset: 0x18
	// Line 1154, Address: 0x123780, Func Offset: 0x20
	// Func End, Address: 0x12378c, Func Offset: 0x2c
}

// iVSync__Fv
// Start address: 0x123790
void iVSync()
{
	// Line 1124, Address: 0x123790, Func Offset: 0
	// Func End, Address: 0x123798, Func Offset: 0x8
}

// TextureRead__FPCcPCc
// Start address: 0x1237a0
RwTexture* TextureRead(int8* name, int8* maskName)
{
	uint32 tmpsize;
	uint32 assetid;
	RwTexture* result;
	int8 tmpname[256];
	// Line 861, Address: 0x1237a0, Func Offset: 0
	// Line 870, Address: 0x1237b8, Func Offset: 0x18
	// Line 871, Address: 0x1237d0, Func Offset: 0x30
	// Line 872, Address: 0x1237d8, Func Offset: 0x38
	// Line 875, Address: 0x1237e8, Func Offset: 0x48
	// Line 877, Address: 0x12380c, Func Offset: 0x6c
	// Line 953, Address: 0x123814, Func Offset: 0x74
	// Line 956, Address: 0x12381c, Func Offset: 0x7c
	// Line 957, Address: 0x123828, Func Offset: 0x88
	// Line 958, Address: 0x123834, Func Offset: 0x94
	// Line 1007, Address: 0x123838, Func Offset: 0x98
	// Func End, Address: 0x123850, Func Offset: 0xb0
}

// RenderWareInit__Fv
// Start address: 0x123850
uint32 RenderWareInit()
{
	RwEngineOpenParams openParams;
	// Line 697, Address: 0x123850, Func Offset: 0
	// Line 718, Address: 0x123858, Func Offset: 0x8
	// Line 733, Address: 0x123868, Func Offset: 0x18
	// Line 743, Address: 0x123870, Func Offset: 0x20
	// Line 746, Address: 0x123884, Func Offset: 0x34
	// Line 769, Address: 0x12388c, Func Offset: 0x3c
	// Line 774, Address: 0x123894, Func Offset: 0x44
	// Line 776, Address: 0x1238a4, Func Offset: 0x54
	// Line 787, Address: 0x1238ac, Func Offset: 0x5c
	// Line 788, Address: 0x123940, Func Offset: 0xf0
	// Line 792, Address: 0x123948, Func Offset: 0xf8
	// Line 794, Address: 0x123958, Func Offset: 0x108
	// Line 795, Address: 0x123960, Func Offset: 0x110
	// Line 799, Address: 0x123968, Func Offset: 0x118
	// Line 804, Address: 0x123970, Func Offset: 0x120
	// Line 806, Address: 0x123980, Func Offset: 0x130
	// Line 807, Address: 0x123988, Func Offset: 0x138
	// Line 808, Address: 0x123990, Func Offset: 0x140
	// Line 815, Address: 0x123998, Func Offset: 0x148
	// Line 819, Address: 0x1239a0, Func Offset: 0x150
	// Line 822, Address: 0x1239ac, Func Offset: 0x15c
	// Line 825, Address: 0x1239b4, Func Offset: 0x164
	// Line 829, Address: 0x1239bc, Func Offset: 0x16c
	// Line 833, Address: 0x1239c4, Func Offset: 0x174
	// Line 835, Address: 0x1239d8, Func Offset: 0x188
	// Line 836, Address: 0x1239dc, Func Offset: 0x18c
	// Func End, Address: 0x1239e8, Func Offset: 0x198
}

// vsyncCounterHandler__Fi
// Start address: 0x1239f0
int32 vsyncCounterHandler()
{
	// Line 691, Address: 0x1239f0, Func Offset: 0
	// Line 692, Address: 0x1239f4, Func Offset: 0x4
	// Line 691, Address: 0x1239f8, Func Offset: 0x8
	// Line 693, Address: 0x1239fc, Func Offset: 0xc
	// Func End, Address: 0x123a04, Func Offset: 0x14
}

// iSystemExit__Fv
// Start address: 0x123a10
void iSystemExit()
{
	// Line 333, Address: 0x123a10, Func Offset: 0
	// Line 335, Address: 0x123a18, Func Offset: 0x8
	// Line 338, Address: 0x123a20, Func Offset: 0x10
	// Line 342, Address: 0x123a28, Func Offset: 0x18
	// Line 345, Address: 0x123a50, Func Offset: 0x40
	// Line 348, Address: 0x123a58, Func Offset: 0x48
	// Line 351, Address: 0x123a60, Func Offset: 0x50
	// Line 354, Address: 0x123a68, Func Offset: 0x58
	// Line 357, Address: 0x123a70, Func Offset: 0x60
	// Line 361, Address: 0x123a78, Func Offset: 0x68
	// Func End, Address: 0x123a84, Func Offset: 0x74
}

// iSystemInit__Fv
// Start address: 0x123a90
void iSystemInit()
{
	int32 disk_type;
	int8* iopImageFile;
	// Line 248, Address: 0x123a90, Func Offset: 0
	// Line 250, Address: 0x123a94, Func Offset: 0x4
	// Line 248, Address: 0x123a98, Func Offset: 0x8
	// Line 250, Address: 0x123a9c, Func Offset: 0xc
	// Line 258, Address: 0x123aa8, Func Offset: 0x18
	// Line 261, Address: 0x123ab0, Func Offset: 0x20
	// Line 266, Address: 0x123ab8, Func Offset: 0x28
	// Line 269, Address: 0x123ac8, Func Offset: 0x38
	// Line 271, Address: 0x123ae8, Func Offset: 0x58
	// Line 274, Address: 0x123af8, Func Offset: 0x68
	// Line 277, Address: 0x123b18, Func Offset: 0x88
	// Line 281, Address: 0x123b24, Func Offset: 0x94
	// Line 282, Address: 0x123b34, Func Offset: 0xa4
	// Line 283, Address: 0x123b40, Func Offset: 0xb0
	// Line 286, Address: 0x123b58, Func Offset: 0xc8
	// Line 287, Address: 0x123b64, Func Offset: 0xd4
	// Line 288, Address: 0x123b6c, Func Offset: 0xdc
	// Line 290, Address: 0x123b7c, Func Offset: 0xec
	// Line 288, Address: 0x123b84, Func Offset: 0xf4
	// Line 290, Address: 0x123b88, Func Offset: 0xf8
	// Line 296, Address: 0x123b90, Func Offset: 0x100
	// Line 300, Address: 0x123b98, Func Offset: 0x108
	// Line 303, Address: 0x123ba0, Func Offset: 0x110
	// Line 306, Address: 0x123ba8, Func Offset: 0x118
	// Line 309, Address: 0x123bb0, Func Offset: 0x120
	// Line 312, Address: 0x123bb8, Func Offset: 0x128
	// Line 315, Address: 0x123bc0, Func Offset: 0x130
	// Line 319, Address: 0x123bc8, Func Offset: 0x138
	// Line 322, Address: 0x123bd0, Func Offset: 0x140
	// Line 328, Address: 0x123bd8, Func Offset: 0x148
	// Func End, Address: 0x123be8, Func Offset: 0x158
}

// psSelectDevice__Fv
// Start address: 0x123bf0
uint32 psSelectDevice()
{
	int32 num;
	int32 i;
	RwVideoMode videoMode;
	// Line 139, Address: 0x123bf0, Func Offset: 0
	// Line 145, Address: 0x123c00, Func Offset: 0x10
	// Line 148, Address: 0x123c0c, Func Offset: 0x1c
	// Line 149, Address: 0x123c18, Func Offset: 0x28
	// Line 150, Address: 0x123c28, Func Offset: 0x38
	// Line 156, Address: 0x123c34, Func Offset: 0x44
	// Line 158, Address: 0x123c44, Func Offset: 0x54
	// Line 161, Address: 0x123c54, Func Offset: 0x64
	// Line 164, Address: 0x123c64, Func Offset: 0x74
	// Line 168, Address: 0x123c80, Func Offset: 0x90
	// Line 169, Address: 0x123c88, Func Offset: 0x98
	// Line 170, Address: 0x123c90, Func Offset: 0xa0
	// Line 171, Address: 0x123ca0, Func Offset: 0xb0
	// Line 173, Address: 0x123ca8, Func Offset: 0xb8
	// Line 176, Address: 0x123cb0, Func Offset: 0xc0
	// Line 179, Address: 0x123cc0, Func Offset: 0xd0
	// Line 180, Address: 0x123cc4, Func Offset: 0xd4
	// Func End, Address: 0x123cdc, Func Offset: 0xec
}

