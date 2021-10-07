typedef struct RxClusterRef;
typedef struct RpClump;
typedef enum RxNodeDefEditable;
typedef struct RpUserDataArray;
typedef struct RxIoSpec;
typedef struct RxClusterDefinition;
typedef struct rxHeapFreeBlock;
typedef struct RxNodeMethods;
typedef struct rxReq;
typedef struct DirtyMorph;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwSurfaceProperties;
typedef struct RxNodeDefinition;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct RpGeometry;
typedef struct RpAtomic;
typedef struct RxCluster;
typedef enum RpUserDataFormat;
typedef struct RpMaterialList;
typedef struct rxHeapBlockHeader;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineCluster;
typedef struct RpMaterial;
typedef struct RwResEntry;
typedef struct RwSphere;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct RwV3d;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNode;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpTriangle;
typedef struct RxPipeline;
typedef struct RwLLLink;
typedef struct RxPipelineRequiresCluster;
typedef struct RwRaster;
typedef struct RpMeshHeader;
typedef struct RwTexture;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct RwTexDictionary;
typedef struct RpInterpolator;
typedef struct RwRGBA;
typedef struct RwTexCoords;
typedef struct RwLinkList;
typedef enum RxClusterForcePresent;

typedef RpClump*(*type_1)(RpClump*, void*);
typedef RpAtomic*(*type_3)(RpAtomic*);
typedef int32(*type_5)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef int32(*type_7)(RxNodeDefinition*);
typedef void(*type_9)(RxNodeDefinition*);
typedef int32(*type_10)(RxPipelineNode*);
typedef void(*type_11)(RxPipelineNode*);
typedef int32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_16)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_19)(RwResEntry*);

typedef int8 type_0[32];
typedef int16 type_2[4];
typedef int16* type_4[4];
typedef uint16 type_8[3];
typedef int16 type_12[4];
typedef int16* type_14[4];
typedef RxCluster type_15[1];
typedef uint32 type_17[4];
typedef RwTexCoords* type_18[8];
typedef int8 type_20[32];

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpUserDataArray
{
	int8* name;
	RpUserDataFormat format;
	int32 numElements;
	void* data;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RxNodeMethods
{
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
};

struct rxReq
{
};

struct DirtyMorph
{
	uint32 count;
	float32 scale;
	int16 weight[4];
	int16* v_array[4];
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct RxHeap
{
	uint32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
	int32 dirty;
};

struct RpGeometry
{
	RwObject object;
	uint32 flags;
	uint16 lockedSinceLastInst;
	int16 refCount;
	int32 numTriangles;
	int32 numVertices;
	int32 numMorphTargets;
	int32 numTexCoordSets;
	RpMaterialList matList;
	RpTriangle* triangles;
	RwRGBA* preLitLum;
	RwTexCoords* texCoords[8];
	RwSurfaceProperties ignoredSurfaceProps;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RxCluster
{
	uint16 flags;
	uint16 stride;
	void* data;
	void* currentData;
	uint32 numAlloced;
	uint32 numUsed;
	RxPipelineCluster* clusterRef;
	uint32 attributes;
};

enum RpUserDataFormat
{
	rpNAUSERDATAFORMAT,
	rpINTUSERDATA,
	rpREALUSERDATA,
	rpSTRINGUSERDATA
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	RxCluster clusters[1];
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxPipelineNode
{
	RxNodeDefinition* nodeDef;
	uint32 numOutputs;
	uint32* outputs;
	RxPipelineCluster** slotClusterRefs;
	uint32* slotsContinue;
	void* privateData;
	uint32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	uint32 initializationDataSize;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RxPipeline
{
	int32 locked;
	uint32 numNodes;
	RxPipelineNode* nodes;
	uint32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	uint32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	uint32 superBlockSize;
	uint32 entryPoint;
	uint32 pluginId;
	uint32 pluginData;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

RpGeometry* s_geom;
RpMorphTarget* s_tgt;
float32* s_alloc;
float32* s_vTemp;
float32* s_nTemp;
int32 s_numV;

void FastS16weight4(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale);
void FastS16weight2(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale);
void FastS16unpack(float32* dest, int16* v, int32 count, float32 scale);
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale);
void iMorphOptimize(RpAtomic* model, int32 normals);
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale, int32 dorender);

// FastS16weight4__FPfPPsPsif
// Start address: 0x1265f0
void FastS16weight4(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale)
{
	// Line 547, Address: 0x1265f0, Func Offset: 0
	// Line 548, Address: 0x1265f4, Func Offset: 0x4
	// Line 549, Address: 0x1265f8, Func Offset: 0x8
	// Line 550, Address: 0x1265fc, Func Offset: 0xc
	// Line 551, Address: 0x126600, Func Offset: 0x10
	// Line 552, Address: 0x126604, Func Offset: 0x14
	// Line 553, Address: 0x126608, Func Offset: 0x18
	// Line 554, Address: 0x12660c, Func Offset: 0x1c
	// Line 555, Address: 0x126610, Func Offset: 0x20
	// Line 556, Address: 0x126614, Func Offset: 0x24
	// Line 558, Address: 0x126618, Func Offset: 0x28
	// Line 559, Address: 0x12661c, Func Offset: 0x2c
	// Line 560, Address: 0x126620, Func Offset: 0x30
	// Line 561, Address: 0x126624, Func Offset: 0x34
	// Line 563, Address: 0x126628, Func Offset: 0x38
	// Line 564, Address: 0x126634, Func Offset: 0x44
	// Line 565, Address: 0x126638, Func Offset: 0x48
	// Line 566, Address: 0x12663c, Func Offset: 0x4c
	// Line 568, Address: 0x126640, Func Offset: 0x50
	// Line 572, Address: 0x126648, Func Offset: 0x58
	// Line 573, Address: 0x12664c, Func Offset: 0x5c
	// Line 574, Address: 0x126650, Func Offset: 0x60
	// Line 577, Address: 0x126654, Func Offset: 0x64
	// Line 578, Address: 0x126658, Func Offset: 0x68
	// Line 579, Address: 0x12665c, Func Offset: 0x6c
	// Line 580, Address: 0x126660, Func Offset: 0x70
	// Line 581, Address: 0x126664, Func Offset: 0x74
	// Line 582, Address: 0x126668, Func Offset: 0x78
	// Line 583, Address: 0x12666c, Func Offset: 0x7c
	// Line 584, Address: 0x126670, Func Offset: 0x80
	// Line 585, Address: 0x126674, Func Offset: 0x84
	// Line 586, Address: 0x126678, Func Offset: 0x88
	// Line 587, Address: 0x12667c, Func Offset: 0x8c
	// Line 588, Address: 0x126680, Func Offset: 0x90
	// Line 589, Address: 0x126684, Func Offset: 0x94
	// Line 590, Address: 0x126688, Func Offset: 0x98
	// Line 591, Address: 0x12668c, Func Offset: 0x9c
	// Line 592, Address: 0x126690, Func Offset: 0xa0
	// Line 593, Address: 0x126694, Func Offset: 0xa4
	// Line 594, Address: 0x126698, Func Offset: 0xa8
	// Line 595, Address: 0x12669c, Func Offset: 0xac
	// Line 596, Address: 0x1266a0, Func Offset: 0xb0
	// Line 597, Address: 0x1266a4, Func Offset: 0xb4
	// Line 598, Address: 0x1266a8, Func Offset: 0xb8
	// Line 599, Address: 0x1266ac, Func Offset: 0xbc
	// Line 601, Address: 0x1266b0, Func Offset: 0xc0
	// Line 602, Address: 0x1266b8, Func Offset: 0xc8
	// Line 604, Address: 0x1266bc, Func Offset: 0xcc
	// Line 605, Address: 0x1266c0, Func Offset: 0xd0
	// Line 606, Address: 0x1266c8, Func Offset: 0xd8
	// Line 607, Address: 0x1266cc, Func Offset: 0xdc
	// Line 608, Address: 0x1266d4, Func Offset: 0xe4
	// Line 610, Address: 0x1266d8, Func Offset: 0xe8
	// Line 611, Address: 0x1266dc, Func Offset: 0xec
	// Line 613, Address: 0x1266e0, Func Offset: 0xf0
	// Line 617, Address: 0x1266e8, Func Offset: 0xf8
	// Line 619, Address: 0x1266ec, Func Offset: 0xfc
	// Line 620, Address: 0x1266f0, Func Offset: 0x100
	// Line 621, Address: 0x1266f8, Func Offset: 0x108
	// Line 622, Address: 0x1266fc, Func Offset: 0x10c
	// Line 623, Address: 0x126700, Func Offset: 0x110
	// Line 624, Address: 0x126704, Func Offset: 0x114
	// Line 626, Address: 0x126708, Func Offset: 0x118
	// Line 627, Address: 0x12670c, Func Offset: 0x11c
	// Line 628, Address: 0x126714, Func Offset: 0x124
	// Line 630, Address: 0x126718, Func Offset: 0x128
	// Line 634, Address: 0x126720, Func Offset: 0x130
	// Line 635, Address: 0x126724, Func Offset: 0x134
	// Line 641, Address: 0x126728, Func Offset: 0x138
	// Func End, Address: 0x126730, Func Offset: 0x140
}

// FastS16weight2__FPfPPsPsif
// Start address: 0x126730
void FastS16weight2(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale)
{
	// Line 418, Address: 0x126730, Func Offset: 0
	// Line 419, Address: 0x126734, Func Offset: 0x4
	// Line 420, Address: 0x126738, Func Offset: 0x8
	// Line 421, Address: 0x12673c, Func Offset: 0xc
	// Line 422, Address: 0x126740, Func Offset: 0x10
	// Line 424, Address: 0x126744, Func Offset: 0x14
	// Line 425, Address: 0x126748, Func Offset: 0x18
	// Line 426, Address: 0x12674c, Func Offset: 0x1c
	// Line 427, Address: 0x126750, Func Offset: 0x20
	// Line 429, Address: 0x126754, Func Offset: 0x24
	// Line 430, Address: 0x126760, Func Offset: 0x30
	// Line 432, Address: 0x126764, Func Offset: 0x34
	// Line 436, Address: 0x12676c, Func Offset: 0x3c
	// Line 437, Address: 0x126770, Func Offset: 0x40
	// Line 438, Address: 0x126774, Func Offset: 0x44
	// Line 441, Address: 0x126778, Func Offset: 0x48
	// Line 442, Address: 0x12677c, Func Offset: 0x4c
	// Line 443, Address: 0x126780, Func Offset: 0x50
	// Line 444, Address: 0x126784, Func Offset: 0x54
	// Line 445, Address: 0x126788, Func Offset: 0x58
	// Line 446, Address: 0x12678c, Func Offset: 0x5c
	// Line 447, Address: 0x126790, Func Offset: 0x60
	// Line 448, Address: 0x126794, Func Offset: 0x64
	// Line 449, Address: 0x126798, Func Offset: 0x68
	// Line 450, Address: 0x12679c, Func Offset: 0x6c
	// Line 451, Address: 0x1267a0, Func Offset: 0x70
	// Line 452, Address: 0x1267a4, Func Offset: 0x74
	// Line 453, Address: 0x1267a8, Func Offset: 0x78
	// Line 455, Address: 0x1267ac, Func Offset: 0x7c
	// Line 456, Address: 0x1267b4, Func Offset: 0x84
	// Line 458, Address: 0x1267b8, Func Offset: 0x88
	// Line 459, Address: 0x1267bc, Func Offset: 0x8c
	// Line 460, Address: 0x1267c4, Func Offset: 0x94
	// Line 461, Address: 0x1267c8, Func Offset: 0x98
	// Line 462, Address: 0x1267d0, Func Offset: 0xa0
	// Line 464, Address: 0x1267d4, Func Offset: 0xa4
	// Line 465, Address: 0x1267d8, Func Offset: 0xa8
	// Line 467, Address: 0x1267dc, Func Offset: 0xac
	// Line 471, Address: 0x1267e4, Func Offset: 0xb4
	// Line 473, Address: 0x1267e8, Func Offset: 0xb8
	// Line 474, Address: 0x1267ec, Func Offset: 0xbc
	// Line 475, Address: 0x1267f4, Func Offset: 0xc4
	// Line 476, Address: 0x1267f8, Func Offset: 0xc8
	// Line 477, Address: 0x1267fc, Func Offset: 0xcc
	// Line 478, Address: 0x126800, Func Offset: 0xd0
	// Line 480, Address: 0x126804, Func Offset: 0xd4
	// Line 481, Address: 0x126808, Func Offset: 0xd8
	// Line 482, Address: 0x126810, Func Offset: 0xe0
	// Line 484, Address: 0x126814, Func Offset: 0xe4
	// Line 488, Address: 0x12681c, Func Offset: 0xec
	// Line 489, Address: 0x126820, Func Offset: 0xf0
	// Line 495, Address: 0x126824, Func Offset: 0xf4
	// Func End, Address: 0x12682c, Func Offset: 0xfc
}

// FastS16unpack__FPfPsif
// Start address: 0x126830
void FastS16unpack(float32* dest, int16* v, int32 count, float32 scale)
{
	// Line 290, Address: 0x126830, Func Offset: 0
	// Line 292, Address: 0x126840, Func Offset: 0x10
	// Line 293, Address: 0x126844, Func Offset: 0x14
	// Line 294, Address: 0x126848, Func Offset: 0x18
	// Line 295, Address: 0x12684c, Func Offset: 0x1c
	// Line 296, Address: 0x126850, Func Offset: 0x20
	// Line 297, Address: 0x126854, Func Offset: 0x24
	// Line 301, Address: 0x12685c, Func Offset: 0x2c
	// Line 302, Address: 0x126860, Func Offset: 0x30
	// Line 303, Address: 0x126864, Func Offset: 0x34
	// Line 306, Address: 0x126868, Func Offset: 0x38
	// Line 307, Address: 0x12686c, Func Offset: 0x3c
	// Line 308, Address: 0x126870, Func Offset: 0x40
	// Line 309, Address: 0x126874, Func Offset: 0x44
	// Line 310, Address: 0x126878, Func Offset: 0x48
	// Line 311, Address: 0x12687c, Func Offset: 0x4c
	// Line 312, Address: 0x126880, Func Offset: 0x50
	// Line 313, Address: 0x126884, Func Offset: 0x54
	// Line 314, Address: 0x126888, Func Offset: 0x58
	// Line 316, Address: 0x12688c, Func Offset: 0x5c
	// Line 317, Address: 0x126894, Func Offset: 0x64
	// Line 319, Address: 0x126898, Func Offset: 0x68
	// Line 320, Address: 0x12689c, Func Offset: 0x6c
	// Line 321, Address: 0x1268a4, Func Offset: 0x74
	// Line 322, Address: 0x1268a8, Func Offset: 0x78
	// Line 323, Address: 0x1268b0, Func Offset: 0x80
	// Line 325, Address: 0x1268b4, Func Offset: 0x84
	// Line 326, Address: 0x1268b8, Func Offset: 0x88
	// Line 328, Address: 0x1268bc, Func Offset: 0x8c
	// Line 332, Address: 0x1268c4, Func Offset: 0x94
	// Line 334, Address: 0x1268c8, Func Offset: 0x98
	// Line 335, Address: 0x1268cc, Func Offset: 0x9c
	// Line 336, Address: 0x1268d4, Func Offset: 0xa4
	// Line 337, Address: 0x1268d8, Func Offset: 0xa8
	// Line 338, Address: 0x1268dc, Func Offset: 0xac
	// Line 339, Address: 0x1268e0, Func Offset: 0xb0
	// Line 341, Address: 0x1268e4, Func Offset: 0xb4
	// Line 342, Address: 0x1268e8, Func Offset: 0xb8
	// Line 343, Address: 0x1268f0, Func Offset: 0xc0
	// Line 345, Address: 0x1268f4, Func Offset: 0xc4
	// Line 349, Address: 0x1268fc, Func Offset: 0xcc
	// Line 350, Address: 0x126900, Func Offset: 0xd0
	// Line 356, Address: 0x126904, Func Offset: 0xd4
	// Func End, Address: 0x12690c, Func Offset: 0xdc
}

// iMorphRender__FP8RpAtomicP11RwMatrixTagPPsPsUif
// Start address: 0x126910
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale)
{
	// Line 243, Address: 0x126910, Func Offset: 0
	// Line 246, Address: 0x126918, Func Offset: 0x8
	// Line 249, Address: 0x126924, Func Offset: 0x14
	// Line 250, Address: 0x126934, Func Offset: 0x24
	// Line 251, Address: 0x12693c, Func Offset: 0x2c
	// Line 253, Address: 0x126940, Func Offset: 0x30
	// Func End, Address: 0x126950, Func Offset: 0x40
}

// iMorphOptimize__FP8RpAtomici
// Start address: 0x126950
void iMorphOptimize(RpAtomic* model, int32 normals)
{
	RpUserDataArray* usr;
	int32 usridx;
	RpGeometry* geom;
	// Line 209, Address: 0x126950, Func Offset: 0
	// Line 218, Address: 0x126960, Func Offset: 0x10
	// Line 211, Address: 0x126968, Func Offset: 0x18
	// Line 219, Address: 0x12696c, Func Offset: 0x1c
	// Line 223, Address: 0x12697c, Func Offset: 0x2c
	// Line 226, Address: 0x1269ac, Func Offset: 0x5c
	// Line 227, Address: 0x1269b8, Func Offset: 0x68
	// Line 228, Address: 0x1269c8, Func Offset: 0x78
	// Func End, Address: 0x1269dc, Func Offset: 0x8c
}

// MorphCommon__FP8RpAtomicP11RwMatrixTagPPsPsUifi
// Start address: 0x1269e0
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale, int32 dorender)
{
	DirtyMorph* dm;
	RpUserDataArray* usr;
	int32 lockMode;
	RwV3d* nold;
	RwV3d* vold;
	int32 wsum;
	int16* va[4];
	int16 wa[4];
	uint32 a;
	uint32 i;
	// Line 40, Address: 0x1269e0, Func Offset: 0
	// Line 48, Address: 0x126a20, Func Offset: 0x40
	// Line 51, Address: 0x126a24, Func Offset: 0x44
	// Line 48, Address: 0x126a2c, Func Offset: 0x4c
	// Line 49, Address: 0x126a30, Func Offset: 0x50
	// Line 50, Address: 0x126a34, Func Offset: 0x54
	// Line 44, Address: 0x126a38, Func Offset: 0x58
	// Line 51, Address: 0x126a3c, Func Offset: 0x5c
	// Line 48, Address: 0x126a40, Func Offset: 0x60
	// Line 49, Address: 0x126a44, Func Offset: 0x64
	// Line 53, Address: 0x126a48, Func Offset: 0x68
	// Line 52, Address: 0x126a4c, Func Offset: 0x6c
	// Line 49, Address: 0x126a54, Func Offset: 0x74
	// Line 50, Address: 0x126a5c, Func Offset: 0x7c
	// Line 51, Address: 0x126a64, Func Offset: 0x84
	// Line 53, Address: 0x126a6c, Func Offset: 0x8c
	// Line 54, Address: 0x126a84, Func Offset: 0xa4
	// Line 55, Address: 0x126a94, Func Offset: 0xb4
	// Line 56, Address: 0x126a9c, Func Offset: 0xbc
	// Line 61, Address: 0x126ab0, Func Offset: 0xd0
	// Line 59, Address: 0x126ab8, Func Offset: 0xd8
	// Line 60, Address: 0x126abc, Func Offset: 0xdc
	// Line 61, Address: 0x126ac0, Func Offset: 0xe0
	// Line 62, Address: 0x126acc, Func Offset: 0xec
	// Line 63, Address: 0x126ae4, Func Offset: 0x104
	// Line 66, Address: 0x126af0, Func Offset: 0x110
	// Line 63, Address: 0x126af4, Func Offset: 0x114
	// Line 67, Address: 0x126b04, Func Offset: 0x124
	// Line 68, Address: 0x126b08, Func Offset: 0x128
	// Line 66, Address: 0x126b10, Func Offset: 0x130
	// Line 68, Address: 0x126b14, Func Offset: 0x134
	// Line 72, Address: 0x126b1c, Func Offset: 0x13c
	// Line 73, Address: 0x126b2c, Func Offset: 0x14c
	// Line 74, Address: 0x126b38, Func Offset: 0x158
	// Line 77, Address: 0x126b3c, Func Offset: 0x15c
	// Line 78, Address: 0x126b48, Func Offset: 0x168
	// Line 79, Address: 0x126b50, Func Offset: 0x170
	// Line 80, Address: 0x126b74, Func Offset: 0x194
	// Line 82, Address: 0x126b78, Func Offset: 0x198
	// Line 83, Address: 0x126b80, Func Offset: 0x1a0
	// Line 84, Address: 0x126b9c, Func Offset: 0x1bc
	// Line 85, Address: 0x126ba4, Func Offset: 0x1c4
	// Line 86, Address: 0x126bc4, Func Offset: 0x1e4
	// Line 90, Address: 0x126bcc, Func Offset: 0x1ec
	// Line 94, Address: 0x126c0c, Func Offset: 0x22c
	// Line 95, Address: 0x126c28, Func Offset: 0x248
	// Line 97, Address: 0x126c48, Func Offset: 0x268
	// Line 95, Address: 0x126c50, Func Offset: 0x270
	// Line 97, Address: 0x126c5c, Func Offset: 0x27c
	// Line 99, Address: 0x126c68, Func Offset: 0x288
	// Line 101, Address: 0x126c70, Func Offset: 0x290
	// Line 102, Address: 0x126c7c, Func Offset: 0x29c
	// Line 104, Address: 0x126c88, Func Offset: 0x2a8
	// Line 105, Address: 0x126c94, Func Offset: 0x2b4
	// Line 106, Address: 0x126ca8, Func Offset: 0x2c8
	// Line 111, Address: 0x126cb0, Func Offset: 0x2d0
	// Line 113, Address: 0x126cb4, Func Offset: 0x2d4
	// Line 112, Address: 0x126cb8, Func Offset: 0x2d8
	// Line 113, Address: 0x126cbc, Func Offset: 0x2dc
	// Line 114, Address: 0x126cdc, Func Offset: 0x2fc
	// Line 115, Address: 0x126ce0, Func Offset: 0x300
	// Line 114, Address: 0x126ce8, Func Offset: 0x308
	// Line 115, Address: 0x126cec, Func Offset: 0x30c
	// Line 116, Address: 0x126da8, Func Offset: 0x3c8
	// Line 115, Address: 0x126db0, Func Offset: 0x3d0
	// Line 116, Address: 0x126dc8, Func Offset: 0x3e8
	// Line 119, Address: 0x126dd0, Func Offset: 0x3f0
	// Line 123, Address: 0x126ddc, Func Offset: 0x3fc
	// Line 124, Address: 0x126de8, Func Offset: 0x408
	// Line 125, Address: 0x126dec, Func Offset: 0x40c
	// Line 124, Address: 0x126df0, Func Offset: 0x410
	// Line 129, Address: 0x126df4, Func Offset: 0x414
	// Line 131, Address: 0x126e00, Func Offset: 0x420
	// Line 133, Address: 0x126e0c, Func Offset: 0x42c
	// Line 134, Address: 0x126e10, Func Offset: 0x430
	// Line 136, Address: 0x126e18, Func Offset: 0x438
	// Line 137, Address: 0x126e34, Func Offset: 0x454
	// Line 138, Address: 0x126e3c, Func Offset: 0x45c
	// Line 142, Address: 0x126e64, Func Offset: 0x484
	// Line 145, Address: 0x126e80, Func Offset: 0x4a0
	// Line 147, Address: 0x126e8c, Func Offset: 0x4ac
	// Line 148, Address: 0x126e90, Func Offset: 0x4b0
	// Line 150, Address: 0x126e98, Func Offset: 0x4b8
	// Line 151, Address: 0x126eb0, Func Offset: 0x4d0
	// Line 152, Address: 0x126ecc, Func Offset: 0x4ec
	// Line 158, Address: 0x126ef4, Func Offset: 0x514
	// Line 159, Address: 0x126f2c, Func Offset: 0x54c
	// Line 160, Address: 0x126f60, Func Offset: 0x580
	// Line 162, Address: 0x126f80, Func Offset: 0x5a0
	// Line 163, Address: 0x126f8c, Func Offset: 0x5ac
	// Line 164, Address: 0x126f98, Func Offset: 0x5b8
	// Line 163, Address: 0x126f9c, Func Offset: 0x5bc
	// Line 164, Address: 0x126fc0, Func Offset: 0x5e0
	// Line 166, Address: 0x1270b8, Func Offset: 0x6d8
	// Line 167, Address: 0x1270f0, Func Offset: 0x710
	// Line 168, Address: 0x127124, Func Offset: 0x744
	// Line 172, Address: 0x127144, Func Offset: 0x764
	// Line 173, Address: 0x127150, Func Offset: 0x770
	// Line 174, Address: 0x127158, Func Offset: 0x778
	// Line 175, Address: 0x127164, Func Offset: 0x784
	// Line 177, Address: 0x127170, Func Offset: 0x790
	// Line 178, Address: 0x127178, Func Offset: 0x798
	// Line 179, Address: 0x127188, Func Offset: 0x7a8
	// Line 181, Address: 0x127190, Func Offset: 0x7b0
	// Line 182, Address: 0x12719c, Func Offset: 0x7bc
	// Line 183, Address: 0x1271a8, Func Offset: 0x7c8
	// Line 184, Address: 0x1271ac, Func Offset: 0x7cc
	// Line 183, Address: 0x1271b0, Func Offset: 0x7d0
	// Line 185, Address: 0x1271b4, Func Offset: 0x7d4
	// Line 186, Address: 0x1271bc, Func Offset: 0x7dc
	// Line 187, Address: 0x1271c0, Func Offset: 0x7e0
	// Line 186, Address: 0x1271c4, Func Offset: 0x7e4
	// Line 187, Address: 0x1271cc, Func Offset: 0x7ec
	// Line 189, Address: 0x1271d0, Func Offset: 0x7f0
	// Line 192, Address: 0x1271d8, Func Offset: 0x7f8
	// Line 195, Address: 0x1271e4, Func Offset: 0x804
	// Line 196, Address: 0x1271e8, Func Offset: 0x808
	// Line 199, Address: 0x1271fc, Func Offset: 0x81c
	// Func End, Address: 0x127230, Func Offset: 0x850
}

