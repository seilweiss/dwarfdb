typedef struct RpCollisionData;
typedef struct RwStreamCustom;
typedef enum RwStreamType;
typedef struct RwStream;
typedef struct RwV3d;
typedef struct RwStreamUnion;
typedef enum RwStreamAccessType;
typedef struct RpCollBSPTriangle;
typedef struct RpCollBSPLeafNode;
typedef struct RwStreamMemory;
typedef struct RpCollBSPBranchNode;
typedef struct RwStreamFile;
typedef struct RpCollBSPTree;

typedef int32(*type_0)(void*, int32, int32);
typedef int32(*type_1)(void*, void*, uint32);
typedef int32(*type_3)(void*, uint32);
typedef void*(*type_4)(void*, int32, int32);
typedef int32(*type_5)(void*);
typedef uint32(*type_7)(void*, void*, uint32);
typedef void*(*type_8)(void*, int32, int32);
typedef RwStream*(*type_9)(RwStream*, int32, void*, int32, int32);
typedef RwStream*(*type_10)(RwStream*, int32, void*, int32, int32);
typedef void*(*type_12)(void*, int32, int32);
typedef void*(*type_13)(void*, int32, int32);
typedef void*(*type_14)(void*, int32, int32);

typedef int8 type_2[68];
typedef uint32 type_6[4096];
typedef uint16 type_11[3];
typedef uint8 type_15[4];

struct RpCollisionData
{
	int32 flags;
	RpCollBSPTree* tree;
	int32 numTriangles;
	uint16* triangleMap;
};

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
};

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwStreamUnion
{
	union
	{
		RwStreamMemory memory;
		RwStreamFile file;
		RwStreamCustom custom;
	};
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpCollBSPTriangle
{
	uint16 vertIndex[3];
	int16 index;
};

struct RpCollBSPLeafNode
{
	uint16 numPolygons;
	uint16 firstPolygon;
};

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct RpCollBSPBranchNode
{
	uint16 type;
	uint8 leftType;
	uint8 rightType;
	uint16 leftNode;
	uint16 rightNode;
	float32 leftValue;
	float32 rightValue;
};

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
};

struct RpCollBSPTree
{
	uint32 numLeafNodes;
	RpCollBSPBranchNode* branchNodes;
	RpCollBSPLeafNode* leafNodes;
	uint8 pad[4];
};

int8 rcsid[68];
int32 _rpCollisionNumInstances;
int32 _rpCollisionGlobalsOffset;
int32 _rpCollisionAtomicDataOffset;
int32 _rpCollisionGeometryDataOffset;
int32 _rpCollisionWorldSectorDataOffset;
int32(*CollisionDataStreamGetSize)(void*, int32, int32);
RwStream*(*CollisionDataStreamWrite)(RwStream*, int32, void*, int32, int32);
RwStream*(*CollisionDataStreamRead)(RwStream*, int32, void*, int32, int32);
void*(*CollisionDataDestroy)(void*, int32, int32);
void*(*CollisionDataCreate)(void*, int32, int32);
void*(*CollisionAtomicInit)(void*, int32, int32);
void*(*CollisionClose)(void*, int32, int32);
void*(*CollisionOpen)(void*, int32, int32);
uint32 ourGlobals[4096];

int32 RpCollisionPluginAttach();
int32 CollisionDataStreamGetSize(void* object, int32 offsetInObject);
RwStream* CollisionDataStreamRead(RwStream* stream, int32 binaryLength, void* object, int32 offset);
RwStream* CollisionDataStreamWrite(RwStream* stream, void* object, int32 offset);
void* CollisionAtomicInit(void* object);
void* CollisionDataCreate(void* object, int32 offset);
void* CollisionDataDestroy(void* object, int32 offset);
void* CollisionClose(void* instance);
void* CollisionOpen(void* instance);

// 
// Start address: 0x275440
int32 RpCollisionPluginAttach()
{
	int32 result;
	// Line 661, Address: 0x275440, Func Offset: 0
	// Line 656, Address: 0x275448, Func Offset: 0x8
	// Line 661, Address: 0x27544c, Func Offset: 0xc
	// Line 656, Address: 0x275450, Func Offset: 0x10
	// Line 661, Address: 0x275454, Func Offset: 0x14
	// Line 663, Address: 0x2754e4, Func Offset: 0xa4
	// Line 665, Address: 0x2754ec, Func Offset: 0xac
	// Line 669, Address: 0x275588, Func Offset: 0x148
	// Func End, Address: 0x275594, Func Offset: 0x154
}

// CollisionDataStreamGetSize__FPCvii
// Start address: 0x2755a0
int32 CollisionDataStreamGetSize(void* object, int32 offsetInObject)
{
	uint32 binarySize;
	RpCollisionData* data;
	// Line 504, Address: 0x2755a0, Func Offset: 0
	// Line 511, Address: 0x2755b0, Func Offset: 0x10
	// Line 514, Address: 0x2755b8, Func Offset: 0x18
	// Line 520, Address: 0x2755c0, Func Offset: 0x20
	// Line 523, Address: 0x2755d0, Func Offset: 0x30
	// Line 530, Address: 0x2755dc, Func Offset: 0x3c
	// Line 531, Address: 0x2755e0, Func Offset: 0x40
	// Func End, Address: 0x2755f4, Func Offset: 0x54
}

// CollisionDataStreamRead__FP8RwStreamiPvii
// Start address: 0x275600
RwStream* CollisionDataStreamRead(RwStream* stream, int32 binaryLength, void* object, int32 offset)
{
	int32 i;
	uint16* triIndex;
	int32 numTri;
	int32 treeSize;
	int32 numTris;
	int32 numLeaves;
	RpCollisionData* data;
	// Line 418, Address: 0x275600, Func Offset: 0
	// Line 423, Address: 0x27562c, Func Offset: 0x2c
	// Line 431, Address: 0x275634, Func Offset: 0x34
	// Line 436, Address: 0x275660, Func Offset: 0x60
	// Line 443, Address: 0x27566c, Func Offset: 0x6c
	// Line 447, Address: 0x275678, Func Offset: 0x78
	// Line 448, Address: 0x27569c, Func Offset: 0x9c
	// Line 451, Address: 0x2756a4, Func Offset: 0xa4
	// Line 455, Address: 0x2756ac, Func Offset: 0xac
	// Line 456, Address: 0x2756b0, Func Offset: 0xb0
	// Line 457, Address: 0x2756b8, Func Offset: 0xb8
	// Line 458, Address: 0x2756c0, Func Offset: 0xc0
	// Line 462, Address: 0x2756cc, Func Offset: 0xcc
	// Line 463, Address: 0x2756d8, Func Offset: 0xd8
	// Line 465, Address: 0x2756ec, Func Offset: 0xec
	// Line 466, Address: 0x2756f8, Func Offset: 0xf8
	// Line 471, Address: 0x275700, Func Offset: 0x100
	// Line 472, Address: 0x275704, Func Offset: 0x104
	// Line 474, Address: 0x275708, Func Offset: 0x108
	// Line 478, Address: 0x275714, Func Offset: 0x114
	// Line 480, Address: 0x27572c, Func Offset: 0x12c
	// Line 481, Address: 0x275738, Func Offset: 0x138
	// Line 483, Address: 0x275740, Func Offset: 0x140
	// Line 484, Address: 0x275744, Func Offset: 0x144
	// Line 483, Address: 0x27574c, Func Offset: 0x14c
	// Line 484, Address: 0x275750, Func Offset: 0x150
	// Line 488, Address: 0x275758, Func Offset: 0x158
	// Line 492, Address: 0x275760, Func Offset: 0x160
	// Line 493, Address: 0x275764, Func Offset: 0x164
	// Func End, Address: 0x27578c, Func Offset: 0x18c
}

// CollisionDataStreamWrite__FP8RwStreamiPCvii
// Start address: 0x275790
RwStream* CollisionDataStreamWrite(RwStream* stream, void* object, int32 offset)
{
	int32 i;
	uint16* triIndex;
	int32 numTri;
	RpCollisionData* data;
	// Line 355, Address: 0x275790, Func Offset: 0
	// Line 362, Address: 0x2757a4, Func Offset: 0x14
	// Line 365, Address: 0x2757ac, Func Offset: 0x1c
	// Line 367, Address: 0x2757b4, Func Offset: 0x24
	// Line 371, Address: 0x2757bc, Func Offset: 0x2c
	// Line 378, Address: 0x2757e8, Func Offset: 0x58
	// Line 382, Address: 0x2757f4, Func Offset: 0x64
	// Line 384, Address: 0x275808, Func Offset: 0x78
	// Line 389, Address: 0x275810, Func Offset: 0x80
	// Line 390, Address: 0x275814, Func Offset: 0x84
	// Line 392, Address: 0x275818, Func Offset: 0x88
	// Line 396, Address: 0x275824, Func Offset: 0x94
	// Line 397, Address: 0x275828, Func Offset: 0x98
	// Line 396, Address: 0x275834, Func Offset: 0xa4
	// Line 397, Address: 0x275838, Func Offset: 0xa8
	// Line 400, Address: 0x275848, Func Offset: 0xb8
	// Line 402, Address: 0x275850, Func Offset: 0xc0
	// Line 405, Address: 0x275858, Func Offset: 0xc8
	// Line 406, Address: 0x27585c, Func Offset: 0xcc
	// Func End, Address: 0x275874, Func Offset: 0xe4
}

// CollisionAtomicInit__FPvii
// Start address: 0x275880
void* CollisionAtomicInit(void* object)
{
	// Line 332, Address: 0x275880, Func Offset: 0
	// Line 334, Address: 0x275884, Func Offset: 0x4
	// Line 332, Address: 0x275888, Func Offset: 0x8
	// Line 335, Address: 0x27588c, Func Offset: 0xc
	// Func End, Address: 0x275894, Func Offset: 0x14
}

// CollisionDataCreate__FPvii
// Start address: 0x2758a0
void* CollisionDataCreate(void* object, int32 offset)
{
	// Line 306, Address: 0x2758a0, Func Offset: 0
	// Line 313, Address: 0x2758a8, Func Offset: 0x8
	// Func End, Address: 0x2758b0, Func Offset: 0x10
}

// CollisionDataDestroy__FPvii
// Start address: 0x2758b0
void* CollisionDataDestroy(void* object, int32 offset)
{
	RpCollisionData** extData;
	// Line 277, Address: 0x2758b0, Func Offset: 0
	// Line 283, Address: 0x2758c4, Func Offset: 0x14
	// Line 284, Address: 0x2758c8, Func Offset: 0x18
	// Line 286, Address: 0x2758d4, Func Offset: 0x24
	// Line 287, Address: 0x275908, Func Offset: 0x58
	// Line 290, Address: 0x27590c, Func Offset: 0x5c
	// Line 291, Address: 0x275910, Func Offset: 0x60
	// Func End, Address: 0x275928, Func Offset: 0x78
}

// CollisionClose__FPvii
// Start address: 0x275930
void* CollisionClose(void* instance)
{
	// Line 188, Address: 0x275930, Func Offset: 0
	// Line 190, Address: 0x275934, Func Offset: 0x4
	// Line 188, Address: 0x275938, Func Offset: 0x8
	// Line 191, Address: 0x27593c, Func Offset: 0xc
	// Func End, Address: 0x275944, Func Offset: 0x14
}

// CollisionOpen__FPvii
// Start address: 0x275950
void* CollisionOpen(void* instance)
{
	// Line 174, Address: 0x275950, Func Offset: 0
	// Line 172, Address: 0x275954, Func Offset: 0x4
	// Line 169, Address: 0x275958, Func Offset: 0x8
	// Line 172, Address: 0x27595c, Func Offset: 0xc
	// Line 169, Address: 0x275964, Func Offset: 0x14
	// Line 172, Address: 0x27596c, Func Offset: 0x1c
	// Line 175, Address: 0x275970, Func Offset: 0x20
	// Func End, Address: 0x275978, Func Offset: 0x28
}

