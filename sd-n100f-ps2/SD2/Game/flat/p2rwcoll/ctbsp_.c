typedef struct RpCollBSPTree;
typedef struct RpCollBSPLeafNode;
typedef enum RwStreamType;
typedef struct RwV3d;
typedef struct RwStreamUnion;
typedef enum RwStreamAccessType;
typedef struct RpCollBSPBranchNode;
typedef struct RwBBox;
typedef struct RwStream;
typedef struct RwStreamMemory;
typedef struct nodeInfo;
typedef struct RwSplitBits;
typedef struct RwStreamFile;
typedef struct RwLine;
typedef struct RpV3dGradient;
typedef struct RwStreamCustom;

typedef int32(*type_0)(void*);
typedef uint32(*type_2)(void*, void*, uint32);
typedef int32(*type_3)(void*, void*, uint32);
typedef int32(*type_4)(void*, uint32);
typedef int32(*type_6)(int32, int32, void*);

typedef uint32 type_1[4096];
typedef int8 type_5[12];
typedef uint8 type_7[4];
typedef nodeInfo type_8[33];
typedef nodeInfo type_9[33];
typedef RwLine type_10[33];

struct RpCollBSPTree
{
	uint32 numLeafNodes;
	RpCollBSPBranchNode* branchNodes;
	RpCollBSPLeafNode* leafNodes;
	uint8 pad[4];
};

struct RpCollBSPLeafNode
{
	uint16 numPolygons;
	uint16 firstPolygon;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct nodeInfo
{
	uint32 type;
	uint32 index;
};

struct RwSplitBits
{
	union
	{
		float32 nReal;
		int32 nInt;
		uint32 nUInt;
	};
};

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RpV3dGradient
{
	float32 dydx;
	float32 dzdx;
	float32 dxdy;
	float32 dzdy;
	float32 dxdz;
	float32 dydz;
};

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
};

int8 rcsid[12];
uint32 ourGlobals[4096];

RpCollBSPTree* _rpCollBSPTreeForAllBoxLeafNodeIntersections(RpCollBSPTree* tree, RwBBox* box, int32(*callBack)(int32, int32, void*), void* data);
RpCollBSPTree* _rpCollBSPTreeForAllLineLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, RpV3dGradient* grad, int32(*callBack)(int32, int32, void*), void* data);
int32 _rpCollBSPTreeStreamGetSize(RpCollBSPTree* tree);
RpCollBSPTree* _rpCollBSPTreeStreamRead(RpCollBSPTree* tree, RwStream* stream);
RpCollBSPTree* _rpCollBSPTreeStreamWrite(RpCollBSPTree* tree, RwStream* stream);
void _rpCollBSPTreeDestroy(RpCollBSPTree* tree);
int32 _rpCollBSPTreeMemGetSize(int32 numLeafNodes);
RpCollBSPTree* _rpCollBSPTreeInit(RpCollBSPTree* tree, int32 numLeafNodes);

// 
// Start address: 0x270520
RpCollBSPTree* _rpCollBSPTreeForAllBoxLeafNodeIntersections(RpCollBSPTree* tree, RwBBox* box, int32(*callBack)(int32, int32, void*), void* data)
{
	RpCollBSPBranchNode* branch;
	RpCollBSPLeafNode* leaf;
	nodeInfo nodeStack[33];
	int32 nStack;
	// Line 610, Address: 0x270520, Func Offset: 0
	// Line 620, Address: 0x27053c, Func Offset: 0x1c
	// Line 622, Address: 0x270558, Func Offset: 0x38
	// Line 623, Address: 0x27055c, Func Offset: 0x3c
	// Line 620, Address: 0x270560, Func Offset: 0x40
	// Line 626, Address: 0x270564, Func Offset: 0x44
	// Line 630, Address: 0x270570, Func Offset: 0x50
	// Line 631, Address: 0x27057c, Func Offset: 0x5c
	// Line 633, Address: 0x270594, Func Offset: 0x74
	// Line 637, Address: 0x27059c, Func Offset: 0x7c
	// Line 639, Address: 0x2705ac, Func Offset: 0x8c
	// Line 645, Address: 0x2705b4, Func Offset: 0x94
	// Line 647, Address: 0x2705bc, Func Offset: 0x9c
	// Line 645, Address: 0x2705c0, Func Offset: 0xa0
	// Line 647, Address: 0x2705c4, Func Offset: 0xa4
	// Line 653, Address: 0x2705e4, Func Offset: 0xc4
	// Line 651, Address: 0x2705ec, Func Offset: 0xcc
	// Line 653, Address: 0x2705f0, Func Offset: 0xd0
	// Line 658, Address: 0x270600, Func Offset: 0xe0
	// Line 657, Address: 0x270604, Func Offset: 0xe4
	// Line 658, Address: 0x270608, Func Offset: 0xe8
	// Line 659, Address: 0x270618, Func Offset: 0xf8
	// Line 661, Address: 0x27061c, Func Offset: 0xfc
	// Line 665, Address: 0x270624, Func Offset: 0x104
	// Line 666, Address: 0x270628, Func Offset: 0x108
	// Line 669, Address: 0x270630, Func Offset: 0x110
	// Line 672, Address: 0x270638, Func Offset: 0x118
	// Line 673, Address: 0x27063c, Func Offset: 0x11c
	// Func End, Address: 0x27065c, Func Offset: 0x13c
}

// 
// Start address: 0x270660
RpCollBSPTree* _rpCollBSPTreeForAllLineLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, RpV3dGradient* grad, int32(*callBack)(int32, int32, void*), void* data)
{
	float32 delta;
	float32 delta;
	float32 delta;
	float32 delta;
	RpCollBSPBranchNode* branch;
	RwSplitBits rEnd;
	RwSplitBits rStart;
	RwSplitBits lEnd;
	RwSplitBits lStart;
	RpCollBSPLeafNode* leaf;
	RwLine currLine;
	RwLine lineStack[33];
	nodeInfo nodeStack[33];
	int32 nStack;
	// Line 383, Address: 0x270660, Func Offset: 0
	// Line 396, Address: 0x2706c0, Func Offset: 0x60
	// Line 399, Address: 0x2706c4, Func Offset: 0x64
	// Line 396, Address: 0x2706e8, Func Offset: 0x88
	// Line 399, Address: 0x2706f0, Func Offset: 0x90
	// Line 398, Address: 0x270700, Func Offset: 0xa0
	// Line 396, Address: 0x270704, Func Offset: 0xa4
	// Line 400, Address: 0x270708, Func Offset: 0xa8
	// Line 399, Address: 0x27070c, Func Offset: 0xac
	// Line 404, Address: 0x270728, Func Offset: 0xc8
	// Line 408, Address: 0x270734, Func Offset: 0xd4
	// Line 409, Address: 0x270740, Func Offset: 0xe0
	// Line 411, Address: 0x270758, Func Offset: 0xf8
	// Line 415, Address: 0x270760, Func Offset: 0x100
	// Line 416, Address: 0x270770, Func Offset: 0x110
	// Line 417, Address: 0x270788, Func Offset: 0x128
	// Line 416, Address: 0x27078c, Func Offset: 0x12c
	// Line 418, Address: 0x2707b4, Func Offset: 0x154
	// Line 438, Address: 0x2707bc, Func Offset: 0x15c
	// Line 444, Address: 0x2707c4, Func Offset: 0x164
	// Line 438, Address: 0x2707c8, Func Offset: 0x168
	// Line 444, Address: 0x2707cc, Func Offset: 0x16c
	// Line 446, Address: 0x2707e0, Func Offset: 0x180
	// Line 444, Address: 0x2707e4, Func Offset: 0x184
	// Line 446, Address: 0x2707e8, Func Offset: 0x188
	// Line 448, Address: 0x2707f4, Func Offset: 0x194
	// Line 458, Address: 0x270800, Func Offset: 0x1a0
	// Line 450, Address: 0x270804, Func Offset: 0x1a4
	// Line 458, Address: 0x270808, Func Offset: 0x1a8
	// Line 462, Address: 0x27081c, Func Offset: 0x1bc
	// Line 463, Address: 0x270820, Func Offset: 0x1c0
	// Line 464, Address: 0x270828, Func Offset: 0x1c8
	// Line 468, Address: 0x270840, Func Offset: 0x1e0
	// Line 469, Address: 0x270844, Func Offset: 0x1e4
	// Line 470, Address: 0x27084c, Func Offset: 0x1ec
	// Line 474, Address: 0x270880, Func Offset: 0x220
	// Line 478, Address: 0x270894, Func Offset: 0x234
	// Line 480, Address: 0x2708f8, Func Offset: 0x298
	// Line 481, Address: 0x2708fc, Func Offset: 0x29c
	// Line 486, Address: 0x270904, Func Offset: 0x2a4
	// Line 488, Address: 0x270968, Func Offset: 0x308
	// Line 490, Address: 0x27096c, Func Offset: 0x30c
	// Line 493, Address: 0x270974, Func Offset: 0x314
	// Line 502, Address: 0x2709a8, Func Offset: 0x348
	// Line 504, Address: 0x270a58, Func Offset: 0x3f8
	// Line 509, Address: 0x270a64, Func Offset: 0x404
	// Line 510, Address: 0x270ac8, Func Offset: 0x468
	// Line 511, Address: 0x270acc, Func Offset: 0x46c
	// Line 512, Address: 0x270ad0, Func Offset: 0x470
	// Line 513, Address: 0x270ad8, Func Offset: 0x478
	// Line 519, Address: 0x270ae0, Func Offset: 0x480
	// Line 521, Address: 0x270b38, Func Offset: 0x4d8
	// Line 523, Address: 0x270b3c, Func Offset: 0x4dc
	// Line 524, Address: 0x270b44, Func Offset: 0x4e4
	// Line 533, Address: 0x270b78, Func Offset: 0x518
	// Line 535, Address: 0x270c28, Func Offset: 0x5c8
	// Line 540, Address: 0x270c34, Func Offset: 0x5d4
	// Line 542, Address: 0x270c8c, Func Offset: 0x62c
	// Line 543, Address: 0x270c90, Func Offset: 0x630
	// Line 549, Address: 0x270c98, Func Offset: 0x638
	// Line 550, Address: 0x270cfc, Func Offset: 0x69c
	// Line 551, Address: 0x270d00, Func Offset: 0x6a0
	// Line 552, Address: 0x270d04, Func Offset: 0x6a4
	// Line 554, Address: 0x270d0c, Func Offset: 0x6ac
	// Line 563, Address: 0x270d14, Func Offset: 0x6b4
	// Line 567, Address: 0x270dc8, Func Offset: 0x768
	// Line 569, Address: 0x270e78, Func Offset: 0x818
	// Line 574, Address: 0x270e84, Func Offset: 0x824
	// Line 575, Address: 0x270edc, Func Offset: 0x87c
	// Line 576, Address: 0x270ee0, Func Offset: 0x880
	// Line 577, Address: 0x270ee4, Func Offset: 0x884
	// Line 578, Address: 0x270eec, Func Offset: 0x88c
	// Line 585, Address: 0x270ef4, Func Offset: 0x894
	// Line 586, Address: 0x270f4c, Func Offset: 0x8ec
	// Line 587, Address: 0x270f50, Func Offset: 0x8f0
	// Line 588, Address: 0x270f54, Func Offset: 0x8f4
	// Line 593, Address: 0x270f60, Func Offset: 0x900
	// Line 596, Address: 0x270f68, Func Offset: 0x908
	// Line 597, Address: 0x270f6c, Func Offset: 0x90c
	// Func End, Address: 0x270fcc, Func Offset: 0x96c
}

// 
// Start address: 0x270fd0
int32 _rpCollBSPTreeStreamGetSize(RpCollBSPTree* tree)
{
	int32 size;
	// Line 315, Address: 0x270fd0, Func Offset: 0
	// Line 320, Address: 0x270fdc, Func Offset: 0xc
	// Line 323, Address: 0x270fe0, Func Offset: 0x10
	// Func End, Address: 0x270fe8, Func Offset: 0x18
}

// 
// Start address: 0x270ff0
RpCollBSPTree* _rpCollBSPTreeStreamRead(RpCollBSPTree* tree, RwStream* stream)
{
	uint32 data;
	uint32 indices;
	uint32 types;
	RpCollBSPLeafNode* leaf;
	RpCollBSPBranchNode* branch;
	uint32 numBranches;
	uint32 numLeaves;
	// Line 233, Address: 0x270ff0, Func Offset: 0
	// Line 246, Address: 0x271008, Func Offset: 0x18
	// Line 245, Address: 0x27100c, Func Offset: 0x1c
	// Line 246, Address: 0x271018, Func Offset: 0x28
	// Line 247, Address: 0x27101c, Func Offset: 0x2c
	// Line 252, Address: 0x271028, Func Offset: 0x38
	// Line 262, Address: 0x271080, Func Offset: 0x90
	// Line 266, Address: 0x27108c, Func Offset: 0x9c
	// Line 275, Address: 0x271090, Func Offset: 0xa0
	// Line 266, Address: 0x271094, Func Offset: 0xa4
	// Line 275, Address: 0x271098, Func Offset: 0xa8
	// Line 266, Address: 0x27109c, Func Offset: 0xac
	// Line 267, Address: 0x2710a8, Func Offset: 0xb8
	// Line 268, Address: 0x2710b4, Func Offset: 0xc4
	// Line 271, Address: 0x2710bc, Func Offset: 0xcc
	// Line 272, Address: 0x2710c8, Func Offset: 0xd8
	// Line 275, Address: 0x2710d0, Func Offset: 0xe0
	// Line 278, Address: 0x2710d8, Func Offset: 0xe8
	// Line 279, Address: 0x2710dc, Func Offset: 0xec
	// Line 280, Address: 0x2710e0, Func Offset: 0xf0
	// Line 285, Address: 0x2710ec, Func Offset: 0xfc
	// Line 287, Address: 0x271104, Func Offset: 0x114
	// Line 288, Address: 0x271120, Func Offset: 0x130
	// Line 292, Address: 0x27112c, Func Offset: 0x13c
	// Line 296, Address: 0x271130, Func Offset: 0x140
	// Line 292, Address: 0x271134, Func Offset: 0x144
	// Line 296, Address: 0x271138, Func Offset: 0x148
	// Line 292, Address: 0x27113c, Func Offset: 0x14c
	// Line 293, Address: 0x271148, Func Offset: 0x158
	// Line 296, Address: 0x271150, Func Offset: 0x160
	// Line 299, Address: 0x271158, Func Offset: 0x168
	// Line 300, Address: 0x27115c, Func Offset: 0x16c
	// Func End, Address: 0x271178, Func Offset: 0x188
}

// 
// Start address: 0x271180
RpCollBSPTree* _rpCollBSPTreeStreamWrite(RpCollBSPTree* tree, RwStream* stream)
{
	uint32 data;
	uint32 indices;
	uint32 types;
	RpCollBSPLeafNode* leaf;
	RpCollBSPBranchNode* branch;
	uint32 numBranches;
	uint32 numLeaves;
	// Line 160, Address: 0x271180, Func Offset: 0
	// Line 172, Address: 0x271198, Func Offset: 0x18
	// Line 171, Address: 0x27119c, Func Offset: 0x1c
	// Line 172, Address: 0x2711a8, Func Offset: 0x28
	// Line 173, Address: 0x2711ac, Func Offset: 0x2c
	// Line 178, Address: 0x2711b8, Func Offset: 0x38
	// Line 185, Address: 0x2711c4, Func Offset: 0x44
	// Line 178, Address: 0x2711d0, Func Offset: 0x50
	// Line 182, Address: 0x2711e4, Func Offset: 0x64
	// Line 185, Address: 0x2711f4, Func Offset: 0x74
	// Line 198, Address: 0x271248, Func Offset: 0xc8
	// Line 201, Address: 0x271254, Func Offset: 0xd4
	// Line 202, Address: 0x271258, Func Offset: 0xd8
	// Line 205, Address: 0x271260, Func Offset: 0xe0
	// Line 206, Address: 0x271264, Func Offset: 0xe4
	// Line 207, Address: 0x271268, Func Offset: 0xe8
	// Line 212, Address: 0x271274, Func Offset: 0xf4
	// Line 214, Address: 0x27127c, Func Offset: 0xfc
	// Line 212, Address: 0x271288, Func Offset: 0x108
	// Line 214, Address: 0x271290, Func Offset: 0x110
	// Line 217, Address: 0x2712a0, Func Offset: 0x120
	// Line 220, Address: 0x2712a8, Func Offset: 0x128
	// Line 221, Address: 0x2712ac, Func Offset: 0x12c
	// Line 224, Address: 0x2712b8, Func Offset: 0x138
	// Line 225, Address: 0x2712bc, Func Offset: 0x13c
	// Func End, Address: 0x2712d8, Func Offset: 0x158
}

// 
// Start address: 0x2712e0
void _rpCollBSPTreeDestroy(RpCollBSPTree* tree)
{
	// Line 106, Address: 0x2712e0, Func Offset: 0
	// Line 109, Address: 0x2712e4, Func Offset: 0x4
	// Line 112, Address: 0x2712ec, Func Offset: 0xc
	// Line 116, Address: 0x271300, Func Offset: 0x20
	// Func End, Address: 0x27130c, Func Offset: 0x2c
}

// 
// Start address: 0x271310
int32 _rpCollBSPTreeMemGetSize(int32 numLeafNodes)
{
	// Line 97, Address: 0x271310, Func Offset: 0
	// Line 98, Address: 0x271320, Func Offset: 0x10
	// Func End, Address: 0x271328, Func Offset: 0x18
}

// 
// Start address: 0x271330
RpCollBSPTree* _rpCollBSPTreeInit(RpCollBSPTree* tree, int32 numLeafNodes)
{
	int32 numBranchNodes;
	// Line 57, Address: 0x271330, Func Offset: 0
	// Line 62, Address: 0x271334, Func Offset: 0x4
	// Line 65, Address: 0x27133c, Func Offset: 0xc
	// Line 64, Address: 0x271340, Func Offset: 0x10
	// Line 65, Address: 0x271348, Func Offset: 0x18
	// Line 67, Address: 0x271350, Func Offset: 0x20
	// Line 70, Address: 0x271358, Func Offset: 0x28
	// Line 71, Address: 0x27135c, Func Offset: 0x2c
	// Line 75, Address: 0x271364, Func Offset: 0x34
	// Func End, Address: 0x27136c, Func Offset: 0x3c
}

