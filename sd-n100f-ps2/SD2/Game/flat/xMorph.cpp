typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwObjectHasFrame;
typedef struct RxNodeDefinition;
typedef struct RxPipelineCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxHeapBlockHeader;
typedef struct RpGeometry;
typedef struct RwLLLink;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xMorphFrame;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct RwRaster;
typedef struct RxClusterDefinition;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RwResEntry;
typedef struct RwV3d;
typedef enum RwTextureFilterMode;
typedef struct RwTexDictionary;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct RpClump;
typedef struct RwRGBA;
typedef struct RpTriangle;
typedef struct RwLinkList;
typedef struct _xVec3;
typedef struct RxPacket;
typedef struct xMorphTargetFile;
typedef struct RwTexture;
typedef struct rxReq;
typedef struct xMorphSeqFile;
typedef struct RwTexCoords;
typedef struct RxOutputSpec;
typedef struct RpMeshHeader;
typedef enum RxClusterForcePresent;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RxIoSpec;
typedef struct RpInterpolator;
typedef struct RxNodeMethods;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct RwMatrixTag;
typedef struct RxCluster;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef enum RwTextureAddressMode;

typedef int32(*type_0)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void*(*type_1)(uint32, int8*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef RpClump*(*type_4)(RpClump*, void*);
typedef int32(*type_5)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef int32(*type_7)(RxPipelineNode*);
typedef void(*type_8)(RxPipelineNode*);
typedef RpAtomic*(*type_9)(RpAtomic*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_15)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_18)(RwResEntry*);
typedef void*(*type_19)(uint32, int8*);

typedef int16 type_2[4];
typedef int16* type_11[4];
typedef int16 type_12[4];
typedef RxCluster type_13[1];
typedef int16 type_14[4];
typedef uint32 type_16[4];
typedef uint16 type_17[3];
typedef int8 type_20[32];
typedef int8 type_21[32];
typedef RwTexCoords* type_22[8];

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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xMorphFrame
{
	RpAtomic* Model;
	float32 RecipTime;
	float32 Scale;
	uint16 Flags;
	uint16 NumVerts;
	int16* Targets[4];
	int16 WeightStart[4];
	int16 WeightEnd[4];
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xMorphTargetFile
{
	uint32 Magic;
	uint16 NumTargets;
	uint16 NumVerts;
	uint32 Flags;
	float32 Scale;
	_xVec3 Center;
	float32 Radius;
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

struct rxReq
{
};

struct xMorphSeqFile
{
	uint32 Magic;
	uint32 Flags;
	uint32 TimeCount;
	uint32 ModelCount;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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


float32 xMorphSeqDuration(xMorphSeqFile* seq);
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float32 time);
xMorphSeqFile* xMorphSeqSetup(void* data, void*(*FindAssetCB)(uint32, int8*));

// xMorphSeqDuration__FP13xMorphSeqFile
// Start address: 0x127230
float32 xMorphSeqDuration(xMorphSeqFile* seq)
{
	// Line 179, Address: 0x127230, Func Offset: 0
	// Line 180, Address: 0x127240, Func Offset: 0x10
	// Func End, Address: 0x127248, Func Offset: 0x18
}

// xMorphRender__FP13xMorphSeqFileP11RwMatrixTagf
// Start address: 0x127250
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float32 time)
{
	xMorphFrame* frame;
	float32* times;
	int16* wptr;
	int16 weight[4];
	uint32 tcount;
	uint32 tidx;
	float32 lerp;
	// Line 125, Address: 0x127250, Func Offset: 0
	// Line 127, Address: 0x127258, Func Offset: 0x8
	// Line 136, Address: 0x12725c, Func Offset: 0xc
	// Line 131, Address: 0x127260, Func Offset: 0x10
	// Line 136, Address: 0x127264, Func Offset: 0x14
	// Line 132, Address: 0x127268, Func Offset: 0x18
	// Line 136, Address: 0x12726c, Func Offset: 0x1c
	// Line 137, Address: 0x127278, Func Offset: 0x28
	// Line 146, Address: 0x127298, Func Offset: 0x48
	// Line 147, Address: 0x1272a0, Func Offset: 0x50
	// Line 148, Address: 0x1272ac, Func Offset: 0x5c
	// Line 150, Address: 0x1272c8, Func Offset: 0x78
	// Line 151, Address: 0x1272d0, Func Offset: 0x80
	// Line 153, Address: 0x1272f8, Func Offset: 0xa8
	// Line 156, Address: 0x127308, Func Offset: 0xb8
	// Line 157, Address: 0x127314, Func Offset: 0xc4
	// Line 158, Address: 0x12731c, Func Offset: 0xcc
	// Line 162, Address: 0x127324, Func Offset: 0xd4
	// Line 164, Address: 0x127330, Func Offset: 0xe0
	// Line 162, Address: 0x127334, Func Offset: 0xe4
	// Line 164, Address: 0x12733c, Func Offset: 0xec
	// Line 166, Address: 0x12734c, Func Offset: 0xfc
	// Line 168, Address: 0x127354, Func Offset: 0x104
	// Line 167, Address: 0x12735c, Func Offset: 0x10c
	// Line 168, Address: 0x127360, Func Offset: 0x110
	// Line 174, Address: 0x127418, Func Offset: 0x1c8
	// Line 175, Address: 0x127430, Func Offset: 0x1e0
	// Func End, Address: 0x12743c, Func Offset: 0x1ec
}

// xMorphSeqSetup__FPvPFUiPc_Pv
// Start address: 0x127440
xMorphSeqFile* xMorphSeqSetup(void* data, void*(*FindAssetCB)(uint32, int8*))
{
	uint32 skipsize;
	void* assetPtr;
	int8* namelist;
	uint32* assetlist;
	xMorphFrame* framelist;
	xMorphSeqFile* header;
	xMorphTargetFile* mphtgt;
	RpAtomic* model;
	int32 j;
	int32 i;
	// Line 45, Address: 0x127440, Func Offset: 0
	// Line 57, Address: 0x127464, Func Offset: 0x24
	// Line 55, Address: 0x127468, Func Offset: 0x28
	// Line 60, Address: 0x12746c, Func Offset: 0x2c
	// Line 53, Address: 0x127470, Func Offset: 0x30
	// Line 55, Address: 0x127478, Func Offset: 0x38
	// Line 57, Address: 0x12747c, Func Offset: 0x3c
	// Line 60, Address: 0x127480, Func Offset: 0x40
	// Line 55, Address: 0x127484, Func Offset: 0x44
	// Line 56, Address: 0x12748c, Func Offset: 0x4c
	// Line 57, Address: 0x12749c, Func Offset: 0x5c
	// Line 60, Address: 0x1274a0, Func Offset: 0x60
	// Line 61, Address: 0x1274ac, Func Offset: 0x6c
	// Line 63, Address: 0x1274b4, Func Offset: 0x74
	// Line 66, Address: 0x1274b8, Func Offset: 0x78
	// Line 67, Address: 0x1274c8, Func Offset: 0x88
	// Line 71, Address: 0x1274cc, Func Offset: 0x8c
	// Line 73, Address: 0x1274d4, Func Offset: 0x94
	// Line 74, Address: 0x1274e0, Func Offset: 0xa0
	// Line 76, Address: 0x1274e8, Func Offset: 0xa8
	// Line 77, Address: 0x1274ec, Func Offset: 0xac
	// Line 78, Address: 0x1274f0, Func Offset: 0xb0
	// Line 79, Address: 0x12750c, Func Offset: 0xcc
	// Line 83, Address: 0x127524, Func Offset: 0xe4
	// Line 84, Address: 0x127530, Func Offset: 0xf0
	// Line 87, Address: 0x12753c, Func Offset: 0xfc
	// Line 88, Address: 0x12754c, Func Offset: 0x10c
	// Line 87, Address: 0x127550, Func Offset: 0x110
	// Line 89, Address: 0x127554, Func Offset: 0x114
	// Line 93, Address: 0x127568, Func Offset: 0x128
	// Line 95, Address: 0x127570, Func Offset: 0x130
	// Line 100, Address: 0x127574, Func Offset: 0x134
	// Line 95, Address: 0x12757c, Func Offset: 0x13c
	// Line 96, Address: 0x127588, Func Offset: 0x148
	// Line 98, Address: 0x12758c, Func Offset: 0x14c
	// Line 101, Address: 0x127590, Func Offset: 0x150
	// Line 103, Address: 0x1275a0, Func Offset: 0x160
	// Line 106, Address: 0x1275a8, Func Offset: 0x168
	// Line 107, Address: 0x1275ac, Func Offset: 0x16c
	// Line 106, Address: 0x1275b0, Func Offset: 0x170
	// Line 107, Address: 0x1275c4, Func Offset: 0x184
	// Line 108, Address: 0x1275d0, Func Offset: 0x190
	// Line 110, Address: 0x1275d8, Func Offset: 0x198
	// Line 111, Address: 0x1275e0, Func Offset: 0x1a0
	// Line 112, Address: 0x1275e4, Func Offset: 0x1a4
	// Line 113, Address: 0x1275ec, Func Offset: 0x1ac
	// Line 114, Address: 0x1275fc, Func Offset: 0x1bc
	// Line 116, Address: 0x127600, Func Offset: 0x1c0
	// Line 118, Address: 0x127618, Func Offset: 0x1d8
	// Line 119, Address: 0x12762c, Func Offset: 0x1ec
	// Line 122, Address: 0x127640, Func Offset: 0x200
	// Func End, Address: 0x127668, Func Offset: 0x228
}

