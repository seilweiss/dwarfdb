typedef struct RxClusterDefinition;
typedef struct BatchData;
typedef enum RxNodeDefEditable;
typedef enum RpMeshHeaderFlags;
typedef struct rwPS2AllResEntryHeader;
typedef struct RxPS2AllPipeData;
typedef struct RpMesh;
typedef struct rxHeapBlockHeader;
typedef struct RxIoSpec;
typedef struct RwRaster;
typedef struct rwPDS_HICloneDownloadInfo;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RxPacket;
typedef struct RpPDSSkyMatTemplate;
typedef struct RxOutputSpec;
typedef struct RwSurfaceProperties;
typedef struct RwTexture;
typedef enum RwCullMode;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpPDSSkyVU1CodeTemplate;
typedef enum RxClusterValid;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct RxClusterRef;
typedef struct RwV3d;
typedef struct RwV4dTag;
typedef struct RwMeshCache;
typedef struct rwPS2AllClusterQuickInfo;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct rxNodePS2AllPvtData;
typedef struct RxNodeMethods;
typedef struct RpMaterial;
typedef struct RwResEntry;
typedef struct rxNodePS2AllMatPvtData;
typedef enum rxEmbeddedPacketState;
typedef enum RxInstanceFlags;
typedef struct RxPipelineNode;
typedef struct rwPS2AllResEntryFormat;
typedef struct RwLLLink;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct rwPS2AllFieldRec;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct rxReq;
typedef struct RpPDSSkyMatCluster;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef enum RwPrimitiveType;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef struct rxHeapFreeBlock;
typedef struct RpPDSSkyMatPrimitive;
typedef struct RwObject;

typedef int32(*type_7)(RxPS2AllPipeData*);
typedef int32(*type_8)(RxPS2AllPipeData*);
typedef RwResEntry*(*type_9)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
typedef int32(*type_10)(RxPS2AllPipeData*);
typedef int32(*type_11)(RxPS2AllPipeData*, void**, uint32);
typedef uint32(*type_13)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_14)(RwResEntry*);
typedef int32(*type_15)(RxPipelineNode*, RxPipeline*);
typedef void(*type_16)(RxPipelineNode*);
typedef int32(*type_19)(RxPipelineNode*);
typedef void(*type_20)(RxNodeDefinition*);
typedef int32(*type_22)(RxNodeDefinition*);
typedef int32(*type_23)(RxPipelineNode*, RxPipelineNodeParam*);

typedef void* type_0[2];
typedef int32 type_1[4];
typedef uint32 type_2[12];
typedef rwPS2AllClusterInstanceInfo type_3[12];
typedef uint32 type_4[4];
typedef RpPDSSkyMatCluster type_5[10];
typedef RxCluster type_6[1];
typedef RwResEntry* type_12[1];
typedef int8 type_17[32];
typedef int8 type_18[32];
typedef rwPS2AllFieldRec type_21[12];
typedef rwPS2AllFieldRec type_24[12];
typedef rwPS2AllClusterQuickInfo type_25[12];
typedef uint8 type_26[1];
typedef uint8 type_27[2];

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct BatchData
{
	int32 size;
	uint16* indices;
	RwV4dTag* xyzw;
	RwV4dTag* uv2;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	uint32 objIdentifier;
	float32 spExtra;
	int32 numMorphTargets;
	uint32 fastMorphing;
	uint8 transType;
	uint8 primType;
	uint8 matModulate;
	uint8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	uint32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct rwPDS_HICloneDownloadInfo
{
	uint32 weightsControls;
	uint32 cloneCount;
	uint32 cloneStride;
	uint32 cloneArrayAddress;
};

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
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

struct RpPDSSkyMatTemplate
{
	uint32 pluginId;
	uint32 pluginData;
	RpPDSSkyMatCluster clusters[10];
	RpPDSSkyMatPrimitive primitive;
	RpPDSSkyVU1CodeTemplate* vu1code;
	int32(*meshInstanceTestCallBack)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCallBack)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCallBack)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCallBack)(RxPS2AllPipeData*);
	int32(*postMeshCallBack)(RxPS2AllPipeData*);
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpPDSSkyVU1CodeTemplate
{
	void** array;
	uint32 slots;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwV4dTag
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	RwResEntry* meshes[1];
};

struct rwPS2AllClusterQuickInfo
{
	<unknown fundamental type (0xa510)>* data;
	uint32 stride;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct rxNodePS2AllPvtData
{
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

struct rxNodePS2AllMatPvtData
{
	int32(*meshInstanceTestCB)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCB)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCB)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCB)(RxPS2AllPipeData*);
	int32(*postMeshCB)(RxPS2AllPipeData*);
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	rwPS2AllClusterInstanceInfo clinfo[12];
	uint32 cliIndex[12];
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
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

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	uint8 pad[2];
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	rwPS2AllFieldRec fieldRec[12];
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct rxReq
{
};

struct RpPDSSkyMatCluster
{
	RxClusterDefinition* definition;
	uint32 type;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

enum RwPrimitiveType
{
	rwPRIMTYPENAPRIMTYPE,
	rwPRIMTYPELINELIST,
	rwPRIMTYPEPOLYLINE,
	rwPRIMTYPETRILIST,
	rwPRIMTYPETRISTRIP,
	rwPRIMTYPETRIFAN,
	rwPRIMTYPEPOINTLIST,
	rwPRIMITIVETYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLinkList
{
	RwLLLink link;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RpPDSSkyMatPrimitive
{
	RwPrimitiveType type;
	int32 clusterStride;
	int32 vertexCount;
	int32 primCount;
	int32 vifOffset;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

void* rwPDS_VCL_HICloneGeneric_VU1Transforms[2];
RpPDSSkyVU1CodeTemplate rwPDS_VCL_HICloneGeneric_VU1Code;
RpPDSSkyMatTemplate rwPDS_VCL_HICloneGeneric_MatPipe;
rwPDS_HICloneDownloadInfo rwPDS_VCL_HICloneGenericDownload;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
long32 skyTest_1;
uint32 skyUserSwitch1;
long32 skyClamp_1;
long32 skyPrim_State;
void* skyUploadedCode;
long32 skyTex1_1;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown fundamental type (0xa510)> skyCClipVect1;
<unknown fundamental type (0xa510)> skyClipVect2;
<unknown fundamental type (0xa510)> skyCClipVect2;
<unknown fundamental type (0xa510)> skyClipVect1;
RwRaster* skyTextureRaster;
int32 skyAlphaTex;

int32 CloneBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
int32 InterleaveNormalInstanceCallBack(RxPS2AllPipeData* ps2AllPipeData, void** clusterData, uint32 numClusters);
void InterleaveNormalReprocessData(RxPS2AllPipeData* ps2AllPipeData);

// CloneBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x1d0e40
int32 CloneBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 skyAlphaTex'278;
	<unknown fundamental type (0xa510)>* _rwDMAPktPtr'277;
	uint32 skyUserSwitch1'276;
	long32 old_sky_test;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	uint32 cFormat;
	<unknown fundamental type (0xa510)> ltmp;
	uint32 skySwitchFlag;
	ulong32 __tmp;
	void* _kohd;
	rwPS2AllResEntryHeader* _p2rh;
	// Line 257, Address: 0x1d0e40, Func Offset: 0
	// Line 279, Address: 0x1d0e58, Func Offset: 0x18
	// Line 282, Address: 0x1d0e60, Func Offset: 0x20
	// Line 284, Address: 0x1d0e70, Func Offset: 0x30
	// Line 296, Address: 0x1d0f34, Func Offset: 0xf4
	// Line 311, Address: 0x1d0f58, Func Offset: 0x118
	// Line 296, Address: 0x1d0f5c, Func Offset: 0x11c
	// Line 311, Address: 0x1d0f68, Func Offset: 0x128
	// Line 336, Address: 0x1d0f70, Func Offset: 0x130
	// Line 337, Address: 0x1d0f90, Func Offset: 0x150
	// Line 340, Address: 0x1d0f94, Func Offset: 0x154
	// Line 337, Address: 0x1d0fa0, Func Offset: 0x160
	// Line 340, Address: 0x1d0fb4, Func Offset: 0x174
	// Line 342, Address: 0x1d0fbc, Func Offset: 0x17c
	// Line 343, Address: 0x1d0fc0, Func Offset: 0x180
	// Line 344, Address: 0x1d0fc4, Func Offset: 0x184
	// Line 345, Address: 0x1d0fc8, Func Offset: 0x188
	// Line 346, Address: 0x1d0fcc, Func Offset: 0x18c
	// Line 353, Address: 0x1d0fd0, Func Offset: 0x190
	// Line 375, Address: 0x1d0fd4, Func Offset: 0x194
	// Line 353, Address: 0x1d0fd8, Func Offset: 0x198
	// Line 375, Address: 0x1d0fdc, Func Offset: 0x19c
	// Line 353, Address: 0x1d0fe0, Func Offset: 0x1a0
	// Line 375, Address: 0x1d0fe4, Func Offset: 0x1a4
	// Line 353, Address: 0x1d0fe8, Func Offset: 0x1a8
	// Line 375, Address: 0x1d0fec, Func Offset: 0x1ac
	// Line 381, Address: 0x1d0ff4, Func Offset: 0x1b4
	// Line 375, Address: 0x1d0ff8, Func Offset: 0x1b8
	// Line 382, Address: 0x1d0ffc, Func Offset: 0x1bc
	// Line 384, Address: 0x1d1000, Func Offset: 0x1c0
	// Line 385, Address: 0x1d1004, Func Offset: 0x1c4
	// Line 390, Address: 0x1d1008, Func Offset: 0x1c8
	// Line 389, Address: 0x1d100c, Func Offset: 0x1cc
	// Line 353, Address: 0x1d1010, Func Offset: 0x1d0
	// Line 366, Address: 0x1d1018, Func Offset: 0x1d8
	// Line 376, Address: 0x1d101c, Func Offset: 0x1dc
	// Line 366, Address: 0x1d1020, Func Offset: 0x1e0
	// Line 376, Address: 0x1d1024, Func Offset: 0x1e4
	// Line 381, Address: 0x1d1028, Func Offset: 0x1e8
	// Line 382, Address: 0x1d102c, Func Offset: 0x1ec
	// Line 366, Address: 0x1d1030, Func Offset: 0x1f0
	// Line 376, Address: 0x1d1034, Func Offset: 0x1f4
	// Line 381, Address: 0x1d1038, Func Offset: 0x1f8
	// Line 382, Address: 0x1d103c, Func Offset: 0x1fc
	// Line 383, Address: 0x1d1040, Func Offset: 0x200
	// Line 376, Address: 0x1d1044, Func Offset: 0x204
	// Line 383, Address: 0x1d104c, Func Offset: 0x20c
	// Line 384, Address: 0x1d1050, Func Offset: 0x210
	// Line 385, Address: 0x1d1054, Func Offset: 0x214
	// Line 383, Address: 0x1d1058, Func Offset: 0x218
	// Line 384, Address: 0x1d105c, Func Offset: 0x21c
	// Line 385, Address: 0x1d1060, Func Offset: 0x220
	// Line 383, Address: 0x1d1064, Func Offset: 0x224
	// Line 386, Address: 0x1d1068, Func Offset: 0x228
	// Line 383, Address: 0x1d106c, Func Offset: 0x22c
	// Line 386, Address: 0x1d1070, Func Offset: 0x230
	// Line 390, Address: 0x1d1074, Func Offset: 0x234
	// Line 398, Address: 0x1d1080, Func Offset: 0x240
	// Line 399, Address: 0x1d10a0, Func Offset: 0x260
	// Line 398, Address: 0x1d10a4, Func Offset: 0x264
	// Line 399, Address: 0x1d10a8, Func Offset: 0x268
	// Line 405, Address: 0x1d10b4, Func Offset: 0x274
	// Line 408, Address: 0x1d1138, Func Offset: 0x2f8
	// Line 410, Address: 0x1d1150, Func Offset: 0x310
	// Line 413, Address: 0x1d11a4, Func Offset: 0x364
	// Line 416, Address: 0x1d1244, Func Offset: 0x404
	// Line 284, Address: 0x1d1250, Func Offset: 0x410
	// Line 416, Address: 0x1d1260, Func Offset: 0x420
	// Line 284, Address: 0x1d1264, Func Offset: 0x424
	// Line 392, Address: 0x1d1270, Func Offset: 0x430
	// Line 416, Address: 0x1d127c, Func Offset: 0x43c
	// Line 405, Address: 0x1d1280, Func Offset: 0x440
	// Line 416, Address: 0x1d1284, Func Offset: 0x444
	// Line 405, Address: 0x1d1288, Func Offset: 0x448
	// Line 416, Address: 0x1d128c, Func Offset: 0x44c
	// Line 405, Address: 0x1d1290, Func Offset: 0x450
	// Line 416, Address: 0x1d1298, Func Offset: 0x458
	// Line 405, Address: 0x1d12a4, Func Offset: 0x464
	// Line 416, Address: 0x1d12b4, Func Offset: 0x474
	// Line 405, Address: 0x1d12c0, Func Offset: 0x480
	// Line 416, Address: 0x1d12c4, Func Offset: 0x484
	// Line 417, Address: 0x1d12f0, Func Offset: 0x4b0
	// Func End, Address: 0x1d130c, Func Offset: 0x4cc
}

// InterleaveNormalInstanceCallBack__FP16RxPS2AllPipeDataPPvUi
// Start address: 0x1d1310
int32 InterleaveNormalInstanceCallBack(RxPS2AllPipeData* ps2AllPipeData, void** clusterData, uint32 numClusters)
{
	int32 retval;
	// Line 239, Address: 0x1d1310, Func Offset: 0
	// Line 241, Address: 0x1d1320, Func Offset: 0x10
	// Line 244, Address: 0x1d132c, Func Offset: 0x1c
	// Line 246, Address: 0x1d1334, Func Offset: 0x24
	// Line 247, Address: 0x1d1338, Func Offset: 0x28
	// Func End, Address: 0x1d134c, Func Offset: 0x3c
}

// InterleaveNormalReprocessData__FP16RxPS2AllPipeData
// Start address: 0x1d1350
void InterleaveNormalReprocessData(RxPS2AllPipeData* ps2AllPipeData)
{
	int32 i;
	int32 j;
	int32 totwtct[4];
	RpMesh* mesh;
	rwPS2AllResEntryHeader* hdr;
	uint8* data;
	int32 numbatches;
	RwV3d* normals;
	RwV3d* curnorm;
	// Line 197, Address: 0x1d1350, Func Offset: 0
	// Line 198, Address: 0x1d1354, Func Offset: 0x4
	// Line 197, Address: 0x1d1358, Func Offset: 0x8
	// Line 198, Address: 0x1d135c, Func Offset: 0xc
	// Line 197, Address: 0x1d1360, Func Offset: 0x10
	// Line 198, Address: 0x1d1374, Func Offset: 0x24
	// Line 203, Address: 0x1d1398, Func Offset: 0x48
	// Line 211, Address: 0x1d139c, Func Offset: 0x4c
	// Line 201, Address: 0x1d13a0, Func Offset: 0x50
	// Line 203, Address: 0x1d13a4, Func Offset: 0x54
	// Line 205, Address: 0x1d13a8, Func Offset: 0x58
	// Line 207, Address: 0x1d13ac, Func Offset: 0x5c
	// Line 204, Address: 0x1d13b0, Func Offset: 0x60
	// Line 203, Address: 0x1d13b4, Func Offset: 0x64
	// Line 205, Address: 0x1d13b8, Func Offset: 0x68
	// Line 207, Address: 0x1d13bc, Func Offset: 0x6c
	// Line 204, Address: 0x1d13c0, Func Offset: 0x70
	// Line 207, Address: 0x1d13c4, Func Offset: 0x74
	// Line 205, Address: 0x1d13c8, Func Offset: 0x78
	// Line 207, Address: 0x1d13d0, Func Offset: 0x80
	// Line 205, Address: 0x1d13d8, Func Offset: 0x88
	// Line 211, Address: 0x1d13dc, Func Offset: 0x8c
	// Line 212, Address: 0x1d13e4, Func Offset: 0x94
	// Line 215, Address: 0x1d13f0, Func Offset: 0xa0
	// Line 226, Address: 0x1d13fc, Func Offset: 0xac
	// Line 215, Address: 0x1d1404, Func Offset: 0xb4
	// Line 218, Address: 0x1d1408, Func Offset: 0xb8
	// Line 230, Address: 0x1d14a8, Func Offset: 0x158
	// Line 225, Address: 0x1d1508, Func Offset: 0x1b8
	// Line 230, Address: 0x1d150c, Func Offset: 0x1bc
	// Line 225, Address: 0x1d1510, Func Offset: 0x1c0
	// Line 230, Address: 0x1d1514, Func Offset: 0x1c4
	// Line 226, Address: 0x1d151c, Func Offset: 0x1cc
	// Line 230, Address: 0x1d1520, Func Offset: 0x1d0
	// Line 225, Address: 0x1d1540, Func Offset: 0x1f0
	// Line 230, Address: 0x1d1544, Func Offset: 0x1f4
	// Line 225, Address: 0x1d1548, Func Offset: 0x1f8
	// Line 230, Address: 0x1d154c, Func Offset: 0x1fc
	// Line 226, Address: 0x1d1554, Func Offset: 0x204
	// Line 230, Address: 0x1d1558, Func Offset: 0x208
	// Line 225, Address: 0x1d1578, Func Offset: 0x228
	// Line 230, Address: 0x1d157c, Func Offset: 0x22c
	// Line 225, Address: 0x1d1580, Func Offset: 0x230
	// Line 230, Address: 0x1d1584, Func Offset: 0x234
	// Line 226, Address: 0x1d158c, Func Offset: 0x23c
	// Line 230, Address: 0x1d1590, Func Offset: 0x240
	// Line 225, Address: 0x1d15b0, Func Offset: 0x260
	// Line 230, Address: 0x1d15b4, Func Offset: 0x264
	// Line 225, Address: 0x1d15b8, Func Offset: 0x268
	// Line 230, Address: 0x1d15bc, Func Offset: 0x26c
	// Line 226, Address: 0x1d15c4, Func Offset: 0x274
	// Line 230, Address: 0x1d15c8, Func Offset: 0x278
	// Line 225, Address: 0x1d15e8, Func Offset: 0x298
	// Line 230, Address: 0x1d15ec, Func Offset: 0x29c
	// Line 225, Address: 0x1d15f0, Func Offset: 0x2a0
	// Line 230, Address: 0x1d15f4, Func Offset: 0x2a4
	// Line 226, Address: 0x1d15fc, Func Offset: 0x2ac
	// Line 230, Address: 0x1d1600, Func Offset: 0x2b0
	// Line 225, Address: 0x1d1620, Func Offset: 0x2d0
	// Line 230, Address: 0x1d1624, Func Offset: 0x2d4
	// Line 225, Address: 0x1d1628, Func Offset: 0x2d8
	// Line 230, Address: 0x1d162c, Func Offset: 0x2dc
	// Line 226, Address: 0x1d1634, Func Offset: 0x2e4
	// Line 230, Address: 0x1d1638, Func Offset: 0x2e8
	// Line 225, Address: 0x1d1658, Func Offset: 0x308
	// Line 230, Address: 0x1d165c, Func Offset: 0x30c
	// Line 225, Address: 0x1d1660, Func Offset: 0x310
	// Line 230, Address: 0x1d1664, Func Offset: 0x314
	// Line 226, Address: 0x1d166c, Func Offset: 0x31c
	// Line 230, Address: 0x1d1670, Func Offset: 0x320
	// Line 225, Address: 0x1d1690, Func Offset: 0x340
	// Line 230, Address: 0x1d1694, Func Offset: 0x344
	// Line 225, Address: 0x1d169c, Func Offset: 0x34c
	// Line 230, Address: 0x1d16a0, Func Offset: 0x350
	// Line 226, Address: 0x1d16a8, Func Offset: 0x358
	// Line 230, Address: 0x1d16ac, Func Offset: 0x35c
	// Line 222, Address: 0x1d16ec, Func Offset: 0x39c
	// Line 230, Address: 0x1d16f0, Func Offset: 0x3a0
	// Line 225, Address: 0x1d1700, Func Offset: 0x3b0
	// Line 230, Address: 0x1d1704, Func Offset: 0x3b4
	// Line 225, Address: 0x1d170c, Func Offset: 0x3bc
	// Line 230, Address: 0x1d1710, Func Offset: 0x3c0
	// Line 226, Address: 0x1d1718, Func Offset: 0x3c8
	// Line 230, Address: 0x1d171c, Func Offset: 0x3cc
	// Line 231, Address: 0x1d1740, Func Offset: 0x3f0
	// Line 232, Address: 0x1d1750, Func Offset: 0x400
	// Line 211, Address: 0x1d1764, Func Offset: 0x414
	// Line 232, Address: 0x1d1768, Func Offset: 0x418
	// Line 212, Address: 0x1d1780, Func Offset: 0x430
	// Line 232, Address: 0x1d1784, Func Offset: 0x434
	// Func End, Address: 0x1d17b4, Func Offset: 0x464
}

