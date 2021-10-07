typedef struct HIFastIMLockStruct;
typedef struct RwRaster;
typedef enum RwCullMode;
typedef struct RwResEntry;
typedef struct rwPS2AllResEntryHeader;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct RwRGBA;
typedef struct RwMatrixTag;
typedef struct xVec3;
typedef struct xColor_tag;
typedef struct xVec2;
typedef struct RwLLLink;
typedef struct rwPS2AllFieldRec;

typedef void(*type_1)(RwResEntry*);
typedef void(*type_3)(RwResEntry*);

typedef uint32 type_0[4096];
typedef float32 type_2[3];
typedef rwPS2AllFieldRec type_4[12];
typedef rwPS2AllClusterQuickInfo type_5[12];
typedef uint8 type_6[1];
typedef void* type_7[2];

struct HIFastIMLockStruct
{
	<unknown fundamental type (0xa510)>* dmaPacket;
	int32 qwCount;
	int32 format;
	xVec3* pos;
	xVec2* uv;
	xColor_tag* color;
	int32 vertCount;
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

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct rwPS2AllResEntryHeader
{
	int32 refCnt;
	int32 clrCnt;
	<unknown fundamental type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	rwPS2AllClusterQuickInfo clquickinfo[12];
	rwPS2AllFieldRec fieldRec[12];
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown fundamental type (0xa510)>* data;
	uint32 stride;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwMatrixTag
{
	RwV3d right;
	uint32 flags;
	RwV3d up;
	uint32 pad1;
	RwV3d at;
	uint32 pad2;
	RwV3d pos;
	uint32 pad3;
};

struct xVec3
{
	union
	{
		RwV3d m_RwV3d;
		float32 x;
	};
	float32 y;
	float32 z;
	float32 a[3];
};

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
};

struct xVec2
{
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct rwPS2AllFieldRec
{
	int32 numVerts;
	int32 morphNumVerts;
	int32 dataoffset;
	int32 morphDataoffset;
	int16 skip;
	int16 morphSkip;
	int16 reverse;
	uint8 vuoffset;
	uint8 pad[1];
};

void* rwPDS_VCL_HIFastIM_VU1Transforms[2];
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
RwCullMode gSkyCullState;
<unknown fundamental type (0xa510)> skyCClipVect1;
<unknown fundamental type (0xa510)> skyClipVect2;
<unknown fundamental type (0xa510)> skyCClipVect2;
<unknown fundamental type (0xa510)> skyClipVect1;
<unknown fundamental type (0xa510)> gifTag128;
long32 skyPrim_State;
int32 skyAlphaTex;
int32 skyVertexAlpha;
<unknown fundamental type (0xa510)> vu1DataOffset3D;
<unknown fundamental type (0xa510)> vu1DataXYZShift;
<unknown fundamental type (0xa510)> vu1DataXYZScale;
<unknown fundamental type (0xa510)> xMaxYMax128;
uint32 ourGlobals[4096];
void* skyUploadedCode;
RwRaster* skyTextureRaster;
void(*FastIM_DestroyCallBack)(RwResEntry*);

void HIFastIM_Render(HIFastIMLockStruct* lock, RwMatrixTag* ltm);
void HIFastIM_Create(HIFastIMLockStruct* lock, int32 format, int32 vertCount);
void HIFastIM_DMAPacketSetup(HIFastIMLockStruct* lock);
<unknown fundamental type (0xa510)>* HIFastIM_DMAAllocator(uint32 size);
void FastIM_DestroyCallBack(RwResEntry* resEntry);

// HIFastIM_Render__FP18HIFastIMLockStructPC11RwMatrixTag
// Start address: 0x4bb170
void HIFastIM_Render(HIFastIMLockStruct* lock, RwMatrixTag* ltm)
{
	ulong32 tmp;
	ulong32 tmp1;
	ulong32 clipPrimTmp;
	<unknown fundamental type (0xa510)> ltmp;
	uint32 vifPacketSize;
	RwMatrixTag* transform;
	RwMatrixTag tmpTransform;
	RwMatrixTag* viewMatrix;
	void* kohd;
	RwRaster* raster;
	int32 format;
	<unknown fundamental type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	uint32 prmTmp;
	// Line 451, Address: 0x4bb170, Func Offset: 0
	// Line 494, Address: 0x4bb174, Func Offset: 0x4
	// Line 451, Address: 0x4bb178, Func Offset: 0x8
	// Line 467, Address: 0x4bb198, Func Offset: 0x28
	// Line 495, Address: 0x4bb19c, Func Offset: 0x2c
	// Line 466, Address: 0x4bb1a0, Func Offset: 0x30
	// Line 494, Address: 0x4bb1a4, Func Offset: 0x34
	// Line 495, Address: 0x4bb1bc, Func Offset: 0x4c
	// Line 499, Address: 0x4bb1c4, Func Offset: 0x54
	// Line 500, Address: 0x4bb1c8, Func Offset: 0x58
	// Line 504, Address: 0x4bb1cc, Func Offset: 0x5c
	// Line 509, Address: 0x4bb1d8, Func Offset: 0x68
	// Line 508, Address: 0x4bb1e0, Func Offset: 0x70
	// Line 509, Address: 0x4bb1e4, Func Offset: 0x74
	// Line 510, Address: 0x4bb1e8, Func Offset: 0x78
	// Line 511, Address: 0x4bb1ec, Func Offset: 0x7c
	// Line 514, Address: 0x4bb1f0, Func Offset: 0x80
	// Line 515, Address: 0x4bb1f8, Func Offset: 0x88
	// Line 516, Address: 0x4bb204, Func Offset: 0x94
	// Line 515, Address: 0x4bb208, Func Offset: 0x98
	// Line 516, Address: 0x4bb210, Func Offset: 0xa0
	// Line 517, Address: 0x4bb214, Func Offset: 0xa4
	// Line 532, Address: 0x4bb21c, Func Offset: 0xac
	// Line 531, Address: 0x4bb220, Func Offset: 0xb0
	// Line 532, Address: 0x4bb224, Func Offset: 0xb4
	// Line 531, Address: 0x4bb228, Func Offset: 0xb8
	// Line 532, Address: 0x4bb22c, Func Offset: 0xbc
	// Line 540, Address: 0x4bb23c, Func Offset: 0xcc
	// Line 536, Address: 0x4bb240, Func Offset: 0xd0
	// Line 537, Address: 0x4bb244, Func Offset: 0xd4
	// Line 540, Address: 0x4bb248, Func Offset: 0xd8
	// Line 541, Address: 0x4bb24c, Func Offset: 0xdc
	// Line 542, Address: 0x4bb254, Func Offset: 0xe4
	// Line 543, Address: 0x4bb260, Func Offset: 0xf0
	// Line 547, Address: 0x4bb264, Func Offset: 0xf4
	// Line 557, Address: 0x4bb268, Func Offset: 0xf8
	// Line 558, Address: 0x4bb26c, Func Offset: 0xfc
	// Line 559, Address: 0x4bb270, Func Offset: 0x100
	// Line 560, Address: 0x4bb274, Func Offset: 0x104
	// Line 547, Address: 0x4bb278, Func Offset: 0x108
	// Line 548, Address: 0x4bb27c, Func Offset: 0x10c
	// Line 549, Address: 0x4bb284, Func Offset: 0x114
	// Line 550, Address: 0x4bb28c, Func Offset: 0x11c
	// Line 553, Address: 0x4bb294, Func Offset: 0x124
	// Line 554, Address: 0x4bb298, Func Offset: 0x128
	// Line 557, Address: 0x4bb29c, Func Offset: 0x12c
	// Line 558, Address: 0x4bb2a4, Func Offset: 0x134
	// Line 559, Address: 0x4bb2ac, Func Offset: 0x13c
	// Line 560, Address: 0x4bb2b4, Func Offset: 0x144
	// Line 569, Address: 0x4bb2bc, Func Offset: 0x14c
	// Line 570, Address: 0x4bb2d0, Func Offset: 0x160
	// Line 571, Address: 0x4bb2d8, Func Offset: 0x168
	// Line 572, Address: 0x4bb2e0, Func Offset: 0x170
	// Line 575, Address: 0x4bb2f0, Func Offset: 0x180
	// Line 574, Address: 0x4bb300, Func Offset: 0x190
	// Line 578, Address: 0x4bb314, Func Offset: 0x1a4
	// Line 575, Address: 0x4bb320, Func Offset: 0x1b0
	// Line 578, Address: 0x4bb324, Func Offset: 0x1b4
	// Line 575, Address: 0x4bb32c, Func Offset: 0x1bc
	// Line 578, Address: 0x4bb330, Func Offset: 0x1c0
	// Line 577, Address: 0x4bb334, Func Offset: 0x1c4
	// Line 578, Address: 0x4bb338, Func Offset: 0x1c8
	// Line 577, Address: 0x4bb33c, Func Offset: 0x1cc
	// Line 578, Address: 0x4bb340, Func Offset: 0x1d0
	// Line 577, Address: 0x4bb344, Func Offset: 0x1d4
	// Line 579, Address: 0x4bb348, Func Offset: 0x1d8
	// Line 577, Address: 0x4bb34c, Func Offset: 0x1dc
	// Line 584, Address: 0x4bb350, Func Offset: 0x1e0
	// Line 585, Address: 0x4bb358, Func Offset: 0x1e8
	// Line 589, Address: 0x4bb368, Func Offset: 0x1f8
	// Line 590, Address: 0x4bb36c, Func Offset: 0x1fc
	// Line 603, Address: 0x4bb370, Func Offset: 0x200
	// Line 593, Address: 0x4bb374, Func Offset: 0x204
	// Line 594, Address: 0x4bb37c, Func Offset: 0x20c
	// Line 600, Address: 0x4bb380, Func Offset: 0x210
	// Line 601, Address: 0x4bb388, Func Offset: 0x218
	// Line 600, Address: 0x4bb38c, Func Offset: 0x21c
	// Line 601, Address: 0x4bb390, Func Offset: 0x220
	// Line 604, Address: 0x4bb398, Func Offset: 0x228
	// Line 602, Address: 0x4bb39c, Func Offset: 0x22c
	// Line 603, Address: 0x4bb3a4, Func Offset: 0x234
	// Line 604, Address: 0x4bb3a8, Func Offset: 0x238
	// Line 603, Address: 0x4bb3ac, Func Offset: 0x23c
	// Line 604, Address: 0x4bb3b0, Func Offset: 0x240
	// Line 605, Address: 0x4bb3b4, Func Offset: 0x244
	// Line 613, Address: 0x4bb3b8, Func Offset: 0x248
	// Line 614, Address: 0x4bb3c0, Func Offset: 0x250
	// Line 617, Address: 0x4bb3d0, Func Offset: 0x260
	// Line 618, Address: 0x4bb3d8, Func Offset: 0x268
	// Line 620, Address: 0x4bb3dc, Func Offset: 0x26c
	// Line 621, Address: 0x4bb3e4, Func Offset: 0x274
	// Line 623, Address: 0x4bb3f4, Func Offset: 0x284
	// Line 624, Address: 0x4bb3fc, Func Offset: 0x28c
	// Line 625, Address: 0x4bb404, Func Offset: 0x294
	// Line 630, Address: 0x4bb408, Func Offset: 0x298
	// Line 635, Address: 0x4bb40c, Func Offset: 0x29c
	// Line 630, Address: 0x4bb410, Func Offset: 0x2a0
	// Line 631, Address: 0x4bb418, Func Offset: 0x2a8
	// Line 635, Address: 0x4bb41c, Func Offset: 0x2ac
	// Line 637, Address: 0x4bb420, Func Offset: 0x2b0
	// Line 643, Address: 0x4bb434, Func Offset: 0x2c4
	// Line 635, Address: 0x4bb438, Func Offset: 0x2c8
	// Line 639, Address: 0x4bb440, Func Offset: 0x2d0
	// Line 640, Address: 0x4bb444, Func Offset: 0x2d4
	// Line 639, Address: 0x4bb448, Func Offset: 0x2d8
	// Line 644, Address: 0x4bb44c, Func Offset: 0x2dc
	// Line 496, Address: 0x4bb454, Func Offset: 0x2e4
	// Line 498, Address: 0x4bb458, Func Offset: 0x2e8
	// Line 587, Address: 0x4bb460, Func Offset: 0x2f0
	// Line 644, Address: 0x4bb470, Func Offset: 0x300
	// Func End, Address: 0x4bb494, Func Offset: 0x324
}

// HIFastIM_Create__FP18HIFastIMLockStructii
// Start address: 0x4bb4a0
void HIFastIM_Create(HIFastIMLockStruct* lock, int32 format, int32 vertCount)
{
	int32 dmaQW;
	int32 posQW;
	int32 uvQW;
	int32 totalQW;
	<unknown fundamental type (0xa510)>* currDma;
	<unknown fundamental type (0xa510)>* dmaPacket;
	// Line 370, Address: 0x4bb4a0, Func Offset: 0
	// Line 408, Address: 0x4bb4cc, Func Offset: 0x2c
	// Line 409, Address: 0x4bb524, Func Offset: 0x84
	// Line 408, Address: 0x4bb528, Func Offset: 0x88
	// Line 409, Address: 0x4bb52c, Func Offset: 0x8c
	// Line 410, Address: 0x4bb534, Func Offset: 0x94
	// Line 409, Address: 0x4bb538, Func Offset: 0x98
	// Line 410, Address: 0x4bb53c, Func Offset: 0x9c
	// Line 409, Address: 0x4bb540, Func Offset: 0xa0
	// Line 410, Address: 0x4bb544, Func Offset: 0xa4
	// Line 412, Address: 0x4bb548, Func Offset: 0xa8
	// Line 415, Address: 0x4bb560, Func Offset: 0xc0
	// Line 419, Address: 0x4bb568, Func Offset: 0xc8
	// Line 427, Address: 0x4bb574, Func Offset: 0xd4
	// Line 424, Address: 0x4bb578, Func Offset: 0xd8
	// Line 428, Address: 0x4bb57c, Func Offset: 0xdc
	// Line 424, Address: 0x4bb580, Func Offset: 0xe0
	// Line 427, Address: 0x4bb584, Func Offset: 0xe4
	// Line 428, Address: 0x4bb58c, Func Offset: 0xec
	// Line 429, Address: 0x4bb594, Func Offset: 0xf4
	// Line 435, Address: 0x4bb598, Func Offset: 0xf8
	// Line 430, Address: 0x4bb59c, Func Offset: 0xfc
	// Line 431, Address: 0x4bb5a0, Func Offset: 0x100
	// Line 435, Address: 0x4bb5a4, Func Offset: 0x104
	// Line 436, Address: 0x4bb5ac, Func Offset: 0x10c
	// Func End, Address: 0x4bb5d4, Func Offset: 0x134
}

// HIFastIM_DMAPacketSetup__FP18HIFastIMLockStruct
// Start address: 0x4bb5e0
void HIFastIM_DMAPacketSetup(HIFastIMLockStruct* lock)
{
	int32 i;
	int32 vertRemain;
	<unknown fundamental type (0xa510)>* currDma;
	RwV3d* currPos;
	RwTexCoords* currUV;
	RwRGBA* currColor;
	int32 format;
	int32 numBatches;
	uint32 batchPosQW;
	uint32 batchUvQW;
	uint32 batchColorQW;
	uint32 batchVert;
	uint32 downloadVert;
	int32 roundupVertRemain;
	// Line 232, Address: 0x4bb5e0, Func Offset: 0
	// Line 245, Address: 0x4bb5e4, Func Offset: 0x4
	// Line 232, Address: 0x4bb5e8, Func Offset: 0x8
	// Line 235, Address: 0x4bb60c, Func Offset: 0x2c
	// Line 239, Address: 0x4bb610, Func Offset: 0x30
	// Line 234, Address: 0x4bb614, Func Offset: 0x34
	// Line 236, Address: 0x4bb618, Func Offset: 0x38
	// Line 237, Address: 0x4bb61c, Func Offset: 0x3c
	// Line 238, Address: 0x4bb620, Func Offset: 0x40
	// Line 249, Address: 0x4bb624, Func Offset: 0x44
	// Line 254, Address: 0x4bb678, Func Offset: 0x98
	// Line 253, Address: 0x4bb67c, Func Offset: 0x9c
	// Line 258, Address: 0x4bb680, Func Offset: 0xa0
	// Line 255, Address: 0x4bb684, Func Offset: 0xa4
	// Line 258, Address: 0x4bb688, Func Offset: 0xa8
	// Line 265, Address: 0x4bb694, Func Offset: 0xb4
	// Line 258, Address: 0x4bb698, Func Offset: 0xb8
	// Line 253, Address: 0x4bb69c, Func Offset: 0xbc
	// Line 254, Address: 0x4bb6a0, Func Offset: 0xc0
	// Line 255, Address: 0x4bb6a4, Func Offset: 0xc4
	// Line 262, Address: 0x4bb6a8, Func Offset: 0xc8
	// Line 265, Address: 0x4bb6ac, Func Offset: 0xcc
	// Line 305, Address: 0x4bb6b8, Func Offset: 0xd8
	// Line 304, Address: 0x4bb6bc, Func Offset: 0xdc
	// Line 305, Address: 0x4bb6c0, Func Offset: 0xe0
	// Line 304, Address: 0x4bb6c4, Func Offset: 0xe4
	// Line 315, Address: 0x4bb6c8, Func Offset: 0xe8
	// Line 310, Address: 0x4bb6cc, Func Offset: 0xec
	// Line 315, Address: 0x4bb6d0, Func Offset: 0xf0
	// Line 310, Address: 0x4bb6d4, Func Offset: 0xf4
	// Line 318, Address: 0x4bb6d8, Func Offset: 0xf8
	// Line 274, Address: 0x4bb6dc, Func Offset: 0xfc
	// Line 275, Address: 0x4bb6e0, Func Offset: 0x100
	// Line 276, Address: 0x4bb6e4, Func Offset: 0x104
	// Line 302, Address: 0x4bb6e8, Func Offset: 0x108
	// Line 317, Address: 0x4bb6ec, Func Offset: 0x10c
	// Line 318, Address: 0x4bb6f0, Func Offset: 0x110
	// Line 270, Address: 0x4bb6f4, Func Offset: 0x114
	// Line 273, Address: 0x4bb700, Func Offset: 0x120
	// Line 275, Address: 0x4bb708, Func Offset: 0x128
	// Line 276, Address: 0x4bb70c, Func Offset: 0x12c
	// Line 277, Address: 0x4bb710, Func Offset: 0x130
	// Line 278, Address: 0x4bb714, Func Offset: 0x134
	// Line 280, Address: 0x4bb718, Func Offset: 0x138
	// Line 281, Address: 0x4bb720, Func Offset: 0x140
	// Line 282, Address: 0x4bb724, Func Offset: 0x144
	// Line 283, Address: 0x4bb728, Func Offset: 0x148
	// Line 284, Address: 0x4bb72c, Func Offset: 0x14c
	// Line 285, Address: 0x4bb730, Func Offset: 0x150
	// Line 289, Address: 0x4bb734, Func Offset: 0x154
	// Line 293, Address: 0x4bb740, Func Offset: 0x160
	// Line 294, Address: 0x4bb74c, Func Offset: 0x16c
	// Line 296, Address: 0x4bb750, Func Offset: 0x170
	// Line 294, Address: 0x4bb754, Func Offset: 0x174
	// Line 296, Address: 0x4bb758, Func Offset: 0x178
	// Line 294, Address: 0x4bb75c, Func Offset: 0x17c
	// Line 295, Address: 0x4bb760, Func Offset: 0x180
	// Line 294, Address: 0x4bb764, Func Offset: 0x184
	// Line 295, Address: 0x4bb768, Func Offset: 0x188
	// Line 298, Address: 0x4bb76c, Func Offset: 0x18c
	// Line 294, Address: 0x4bb770, Func Offset: 0x190
	// Line 295, Address: 0x4bb774, Func Offset: 0x194
	// Line 296, Address: 0x4bb778, Func Offset: 0x198
	// Line 297, Address: 0x4bb77c, Func Offset: 0x19c
	// Line 302, Address: 0x4bb780, Func Offset: 0x1a0
	// Line 307, Address: 0x4bb788, Func Offset: 0x1a8
	// Line 303, Address: 0x4bb78c, Func Offset: 0x1ac
	// Line 305, Address: 0x4bb790, Func Offset: 0x1b0
	// Line 304, Address: 0x4bb794, Func Offset: 0x1b4
	// Line 312, Address: 0x4bb798, Func Offset: 0x1b8
	// Line 305, Address: 0x4bb79c, Func Offset: 0x1bc
	// Line 307, Address: 0x4bb7a0, Func Offset: 0x1c0
	// Line 310, Address: 0x4bb7a4, Func Offset: 0x1c4
	// Line 308, Address: 0x4bb7a8, Func Offset: 0x1c8
	// Line 315, Address: 0x4bb7ac, Func Offset: 0x1cc
	// Line 309, Address: 0x4bb7b0, Func Offset: 0x1d0
	// Line 310, Address: 0x4bb7b4, Func Offset: 0x1d4
	// Line 312, Address: 0x4bb7b8, Func Offset: 0x1d8
	// Line 313, Address: 0x4bb7bc, Func Offset: 0x1dc
	// Line 314, Address: 0x4bb7c0, Func Offset: 0x1e0
	// Line 317, Address: 0x4bb7c4, Func Offset: 0x1e4
	// Line 319, Address: 0x4bb7cc, Func Offset: 0x1ec
	// Line 320, Address: 0x4bb7d8, Func Offset: 0x1f8
	// Line 321, Address: 0x4bb7dc, Func Offset: 0x1fc
	// Line 323, Address: 0x4bb7e0, Func Offset: 0x200
	// Line 322, Address: 0x4bb7e8, Func Offset: 0x208
	// Line 324, Address: 0x4bb7ec, Func Offset: 0x20c
	// Line 325, Address: 0x4bb7f4, Func Offset: 0x214
	// Line 326, Address: 0x4bb7f8, Func Offset: 0x218
	// Line 327, Address: 0x4bb800, Func Offset: 0x220
	// Line 359, Address: 0x4bb808, Func Offset: 0x228
	// Line 331, Address: 0x4bb810, Func Offset: 0x230
	// Line 345, Address: 0x4bb814, Func Offset: 0x234
	// Line 346, Address: 0x4bb818, Func Offset: 0x238
	// Line 359, Address: 0x4bb81c, Func Offset: 0x23c
	// Line 362, Address: 0x4bb828, Func Offset: 0x248
	// Line 363, Address: 0x4bb82c, Func Offset: 0x24c
	// Line 364, Address: 0x4bb830, Func Offset: 0x250
	// Line 365, Address: 0x4bb838, Func Offset: 0x258
	// Line 366, Address: 0x4bb83c, Func Offset: 0x25c
	// Func End, Address: 0x4bb868, Func Offset: 0x288
}

// HIFastIM_DMAAllocator__FUi
// Start address: 0x4bb870
<unknown fundamental type (0xa510)>* HIFastIM_DMAAllocator(uint32 size)
{
	RwResEntry* result;
	rwPS2AllResEntryHeader* ps2ResHeader;
	// Line 180, Address: 0x4bb870, Func Offset: 0
	// Line 188, Address: 0x4bb874, Func Offset: 0x4
	// Line 180, Address: 0x4bb878, Func Offset: 0x8
	// Line 188, Address: 0x4bb884, Func Offset: 0x14
	// Line 189, Address: 0x4bb88c, Func Offset: 0x1c
	// Line 194, Address: 0x4bb898, Func Offset: 0x28
	// Line 199, Address: 0x4bb89c, Func Offset: 0x2c
	// Line 195, Address: 0x4bb8a0, Func Offset: 0x30
	// Line 197, Address: 0x4bb8a4, Func Offset: 0x34
	// Line 196, Address: 0x4bb8a8, Func Offset: 0x38
	// Line 202, Address: 0x4bb8ac, Func Offset: 0x3c
	// Line 197, Address: 0x4bb8b0, Func Offset: 0x40
	// Line 199, Address: 0x4bb8b4, Func Offset: 0x44
	// Line 205, Address: 0x4bb8b8, Func Offset: 0x48
	// Line 198, Address: 0x4bb8bc, Func Offset: 0x4c
	// Line 205, Address: 0x4bb8c0, Func Offset: 0x50
	// Line 199, Address: 0x4bb8c4, Func Offset: 0x54
	// Line 205, Address: 0x4bb8c8, Func Offset: 0x58
	// Line 203, Address: 0x4bb8cc, Func Offset: 0x5c
	// Line 205, Address: 0x4bb8d0, Func Offset: 0x60
	// Line 204, Address: 0x4bb8d4, Func Offset: 0x64
	// Line 205, Address: 0x4bb8d8, Func Offset: 0x68
	// Line 209, Address: 0x4bb8dc, Func Offset: 0x6c
	// Line 210, Address: 0x4bb8e0, Func Offset: 0x70
	// Line 209, Address: 0x4bb8e4, Func Offset: 0x74
	// Line 210, Address: 0x4bb8e8, Func Offset: 0x78
	// Line 211, Address: 0x4bb908, Func Offset: 0x98
	// Line 212, Address: 0x4bb914, Func Offset: 0xa4
	// Line 213, Address: 0x4bb918, Func Offset: 0xa8
	// Line 217, Address: 0x4bb924, Func Offset: 0xb4
	// Line 216, Address: 0x4bb92c, Func Offset: 0xbc
	// Line 217, Address: 0x4bb930, Func Offset: 0xc0
	// Func End, Address: 0x4bb938, Func Offset: 0xc8
}

// FastIM_DestroyCallBack__FP10RwResEntry
// Start address: 0x4bb940
void FastIM_DestroyCallBack(RwResEntry* resEntry)
{
	// Line 138, Address: 0x4bb940, Func Offset: 0
	// Line 142, Address: 0x4bb948, Func Offset: 0x8
	// Line 146, Address: 0x4bb954, Func Offset: 0x14
	// Func End, Address: 0x4bb97c, Func Offset: 0x3c
}

