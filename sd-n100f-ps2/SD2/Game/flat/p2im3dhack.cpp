typedef struct RxCluster;
typedef struct RxHeap;
typedef struct _rwPS2AllTriFanLUTs;
typedef struct RxClusterRef;
typedef struct rxHeapBlockHeader;
typedef struct RxPS2AllPipeData;
typedef struct rwPS2AllFieldRec;
typedef enum RxClusterValidityReq;
typedef struct RwRaster;
typedef struct RxPipelineCluster;
typedef struct RwSky2DVertexFields;
typedef struct RwResEntry;
typedef struct RxClusterDefinition;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct RpMesh;
typedef enum RwTextureAddressMode;
typedef struct RpMeshHeader;
typedef struct RpMaterial;
typedef struct RxPipelineNode;
typedef struct rwPS2AllResEntryHeader;
typedef struct RwTexture;
typedef enum RpMeshHeaderFlags;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwSurfaceProperties;
typedef struct RxPipelineNodeParam;
typedef struct rwPS2AllIndexLUTs;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxObjSpace3DVertex;
typedef struct RxNodeDefinition;
typedef enum RxInstanceFlags;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct rwPS2AllResEntryFormat;
typedef struct RwLLLink;
typedef struct rwPS2AllPrimTypeLUT;
typedef struct rxHeapFreeBlock;
typedef enum RwShadeMode;
typedef struct RwRGBAReal;
typedef struct _rwIm3DPoolStash;
typedef struct RxPipelineRequiresCluster;
typedef struct RwMatrixTag;
typedef struct RxMeshStateVector;
typedef struct rxNodePS2AllMatPvtData;
typedef struct RwSky2DVertex;
typedef enum RwTextureFilterMode;
typedef struct RxCamSpace3DVertex;
typedef enum RxClusterValid;
typedef struct RwObject;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct RwV3d;
typedef struct RxRenderStateVector;
typedef struct RwRGBA;
typedef struct RwLinkList;
typedef struct RxColorUnion;
typedef struct rxReq;
typedef enum RwFogType;
typedef struct RwTexDictionary;
typedef enum RxClusterForcePresent;
typedef struct _rwPS2AllNormalLUTs;
typedef enum RxNodeDefEditable;
typedef struct RwMeshCache;
typedef enum RwBlendFunction;
typedef struct RxIoSpec;
typedef struct rxNodePS2AllPvtData;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RxNodeMethods;
typedef enum RwPrimitiveType;

typedef int32(*type_0)(RxPS2AllPipeData*);
typedef int32(*type_5)(RxPS2AllPipeData*, void**, uint32);
typedef void(*type_6)(RwResEntry*);
typedef RwResEntry*(*type_7)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
typedef int32(*type_8)(RxPS2AllPipeData*, void**, uint32);
typedef int32(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_12)(RxNodeDefinition*);
typedef int32(*type_13)(RxPS2AllPipeData*);
typedef void(*type_14)(RxNodeDefinition*);
typedef int32(*type_15)(RxPS2AllPipeData*);
typedef int32(*type_16)(RxPipelineNode*);
typedef int32(*type_18)(RxPS2AllPipeData*);
typedef void(*type_20)(RxPipelineNode*);
typedef int32(*type_25)(RxPS2AllPipeData*);
typedef int32(*type_26)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_27)(RxPS2AllPipeData*);
typedef uint32(*type_30)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_34)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int32(*type_35)(RxPS2AllPipeData*);

typedef float32 type_1[12];
typedef uint8 type_2[3];
typedef uint8 type_3[3];
typedef uint8 type_4[3];
typedef uint8 type_10[1];
typedef uint16 type_11[1];
typedef <unknown fundamental type (0xa510)> type_17[4];
typedef uint8 type_19[7];
typedef rwPS2AllClusterQuickInfo type_21[11];
typedef uint8 type_22[7];
typedef uint8 type_23[2];
typedef rwPS2AllFieldRec type_24[11];
typedef RxCluster type_28[1];
typedef rwPS2AllFieldRec type_29[11];
typedef uint32 type_31[4];
typedef rwPS2AllClusterInstanceInfo type_32[11];
typedef uint32 type_33[11];
typedef uint8 type_36[3];
typedef uint8 type_37[1];
typedef RwResEntry* type_38[1];
typedef uint8 type_39[1];
typedef uint8 type_40[2];
typedef uint8 type_41[1];
typedef int8 type_42[32];
typedef int8 type_43[32];

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

struct _rwPS2AllTriFanLUTs
{
	uint8 counterGen;
	uint8 startIndOffset;
	uint8 shiftMask[3];
	uint8 shiftMask2[3];
	uint8 vertInc[3];
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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
	rwPS2AllClusterQuickInfo clquickinfo[11];
	rwPS2AllFieldRec fieldRec[11];
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct rwPS2AllIndexLUTs
{
	uint16 fakeIndices[1];
	_rwPS2AllNormalLUTs normal;
	_rwPS2AllTriFanLUTs triFan;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
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

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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
	rwPS2AllFieldRec fieldRec[11];
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct rwPS2AllPrimTypeLUT
{
	uint8 vertToIndRatio[7];
	uint8 vertToIndOffset[7];
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

enum RwShadeMode
{
	rwSHADEMODENASHADEMODE,
	rwSHADEMODEFLAT,
	rwSHADEMODEGOURAUD,
	rwSHADEMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _rwIm3DPoolStash
{
	uint32 flags;
	RwMatrixTag* ltm;
	uint32 numVerts;
	RxObjSpace3DVertex* objVerts;
	RxCamSpace3DVertex* camVerts;
	RwSky2DVertex* devVerts;
	RxMeshStateVector* meshState;
	RxRenderStateVector* renderState;
	RxPipeline* pipeline;
	RwPrimitiveType primType;
	uint16* indices;
	uint32 numIndices;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RxMeshStateVector
{
	int32 Flags;
	void* SourceObject;
	RwMatrixTag Obj2World;
	RwMatrixTag Obj2Cam;
	RwSurfaceProperties SurfaceProperties;
	RwTexture* Texture;
	RwRGBA MatCol;
	RxPipeline* Pipeline;
	RwPrimitiveType PrimType;
	uint32 NumElements;
	uint32 NumVertices;
	int32 ClipFlagsOr;
	int32 ClipFlagsAnd;
	void* SourceMesh;
	void* DataObject;
};

struct rxNodePS2AllMatPvtData
{
	int32(*im3DPreMeshCB)(RxPS2AllPipeData*);
	int32(*meshInstanceTestCB)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCB)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCB)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCB)(RxPS2AllPipeData*);
	int32(*im3DPostMeshCB)(RxPS2AllPipeData*);
	int32(*im3DMeshSplitCB)(RxPS2AllPipeData*);
	int32(*postMeshCB)(RxPS2AllPipeData*);
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	rwPS2AllClusterInstanceInfo clinfo[11];
	uint32 cliIndex[11];
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct RxCamSpace3DVertex
{
	RwV3d cameraVertex;
	uint8 clipFlags;
	uint8 pad[3];
	RwRGBAReal col;
	float32 u;
	float32 v;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown fundamental type (0xa510)>* data;
	uint32 stride;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxRenderStateVector
{
	uint32 Flags;
	RwShadeMode ShadeMode;
	RwBlendFunction SrcBlend;
	RwBlendFunction DestBlend;
	RwRaster* TextureRaster;
	RwTextureAddressMode AddressModeU;
	RwTextureAddressMode AddressModeV;
	RwTextureFilterMode FilterMode;
	RwRGBA BorderColor;
	RwFogType FogType;
	RwRGBA FogColor;
	uint8* FogTable;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct rxReq
{
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _rwPS2AllNormalLUTs
{
	uint8 counterGen;
	uint8 startIndOffset;
	uint8 shiftMask[1];
	uint8 shiftMask2[1];
	uint8 vertInc[1];
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	RwResEntry* meshes[1];
};

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct rxNodePS2AllPvtData
{
	rwPS2AllPrimTypeLUT primLUT;
	uint8 pad[2];
	int32(*objectSetupCB)(RxPS2AllPipeData*, RwMatrixTag**);
	int32(*objectFinalizeCB)(RxPS2AllPipeData*);
	RxPipeline* groupPipe;
	uint32 lightOffset;
	uint32 lightBufferSize;
	<unknown fundamental type (0xa510)>* nullLightBlock;
	float32 nullLightBuffer[12];
};

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
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

int32 gRWPS2FastPath;
int32(*oldTriInstanceCB)(RxPS2AllPipeData*, void**, uint32);
int32(*NewIm3DPS2AllInstance)(RxPS2AllPipeData*, void**, uint32);

int32 NewIm3DPS2AllInstance(RxPS2AllPipeData* ps2AllPipeData);
void p2EnableFastIm3D();

// NewIm3DPS2AllInstance__FP16RxPS2AllPipeDataPPvUi
// Start address: 0x27e2f0
int32 NewIm3DPS2AllInstance(RxPS2AllPipeData* ps2AllPipeData)
{
	RxObjSpace3DVertex* verts;
	uint32* dataTmp;
	<unknown fundamental type (0xa510)>* data;
	RxObjSpace3DVertex* vert;
	RxObjSpace3DVertex* verts;
	float32* dataTmp;
	<unknown fundamental type (0xa510)>* data;
	RxObjSpace3DVertex* verts;
	float32* dataTmp;
	<unknown fundamental type (0xa510)>* data;
	int32* dataUV;
	int32* dataRGBA;
	int32* dataXYZ;
	RxObjSpace3DVertex* verts;
	int32 batch;
	int32 uvskip;
	int32 rgbaskip;
	int32 xyzskip;
	<unknown fundamental type (0xa510)>* data;
	uint16* indexArray;
	uint8* swap;
	uint8* vertInc;
	uint8* shiftMask2;
	uint8* shiftMask;
	uint32 stripReverse;
	uint32 modCnt;
	uint32 startIndOffset;
	uint32 indOffset;
	uint32 cntGen;
	int32 j;
	int32 vertCounter;
	uint32 numVerts;
	rwPS2AllResEntryHeader* ps2ResHeader;
	_rwIm3DPoolStash* stash;
	rwPS2AllIndexLUTs IndexLUT;
	// Line 107, Address: 0x27e2f0, Func Offset: 0
	// Line 121, Address: 0x27e30c, Func Offset: 0x1c
	// Line 138, Address: 0x27e310, Func Offset: 0x20
	// Line 119, Address: 0x27e314, Func Offset: 0x24
	// Line 138, Address: 0x27e318, Func Offset: 0x28
	// Line 121, Address: 0x27e31c, Func Offset: 0x2c
	// Line 138, Address: 0x27e320, Func Offset: 0x30
	// Line 125, Address: 0x27e324, Func Offset: 0x34
	// Line 138, Address: 0x27e328, Func Offset: 0x38
	// Line 140, Address: 0x27e330, Func Offset: 0x40
	// Line 143, Address: 0x27e3c0, Func Offset: 0xd0
	// Line 144, Address: 0x27e3c4, Func Offset: 0xd4
	// Line 145, Address: 0x27e3c8, Func Offset: 0xd8
	// Line 146, Address: 0x27e3cc, Func Offset: 0xdc
	// Line 147, Address: 0x27e3d0, Func Offset: 0xe0
	// Line 148, Address: 0x27e3d4, Func Offset: 0xe4
	// Line 149, Address: 0x27e3d8, Func Offset: 0xe8
	// Line 150, Address: 0x27e3dc, Func Offset: 0xec
	// Line 151, Address: 0x27e3e0, Func Offset: 0xf0
	// Line 152, Address: 0x27e3e4, Func Offset: 0xf4
	// Line 153, Address: 0x27e3e8, Func Offset: 0xf8
	// Line 154, Address: 0x27e3ec, Func Offset: 0xfc
	// Line 155, Address: 0x27e3f0, Func Offset: 0x100
	// Line 161, Address: 0x27e3f8, Func Offset: 0x108
	// Line 162, Address: 0x27e3fc, Func Offset: 0x10c
	// Line 163, Address: 0x27e400, Func Offset: 0x110
	// Line 164, Address: 0x27e404, Func Offset: 0x114
	// Line 165, Address: 0x27e408, Func Offset: 0x118
	// Line 166, Address: 0x27e40c, Func Offset: 0x11c
	// Line 167, Address: 0x27e410, Func Offset: 0x120
	// Line 168, Address: 0x27e414, Func Offset: 0x124
	// Line 169, Address: 0x27e418, Func Offset: 0x128
	// Line 170, Address: 0x27e41c, Func Offset: 0x12c
	// Line 171, Address: 0x27e420, Func Offset: 0x130
	// Line 177, Address: 0x27e428, Func Offset: 0x138
	// Line 178, Address: 0x27e42c, Func Offset: 0x13c
	// Line 179, Address: 0x27e430, Func Offset: 0x140
	// Line 180, Address: 0x27e434, Func Offset: 0x144
	// Line 181, Address: 0x27e438, Func Offset: 0x148
	// Line 182, Address: 0x27e43c, Func Offset: 0x14c
	// Line 183, Address: 0x27e440, Func Offset: 0x150
	// Line 184, Address: 0x27e444, Func Offset: 0x154
	// Line 185, Address: 0x27e448, Func Offset: 0x158
	// Line 186, Address: 0x27e44c, Func Offset: 0x15c
	// Line 187, Address: 0x27e450, Func Offset: 0x160
	// Line 188, Address: 0x27e454, Func Offset: 0x164
	// Line 189, Address: 0x27e458, Func Offset: 0x168
	// Line 191, Address: 0x27e460, Func Offset: 0x170
	// Line 195, Address: 0x27e464, Func Offset: 0x174
	// Line 196, Address: 0x27e474, Func Offset: 0x184
	// Line 203, Address: 0x27e47c, Func Offset: 0x18c
	// Line 207, Address: 0x27e508, Func Offset: 0x218
	// Line 210, Address: 0x27e528, Func Offset: 0x238
	// Line 213, Address: 0x27e530, Func Offset: 0x240
	// Line 215, Address: 0x27e534, Func Offset: 0x244
	// Line 222, Address: 0x27e53c, Func Offset: 0x24c
	// Line 210, Address: 0x27e540, Func Offset: 0x250
	// Line 223, Address: 0x27e548, Func Offset: 0x258
	// Line 225, Address: 0x27e550, Func Offset: 0x260
	// Line 229, Address: 0x27e560, Func Offset: 0x270
	// Line 231, Address: 0x27e564, Func Offset: 0x274
	// Line 232, Address: 0x27e568, Func Offset: 0x278
	// Line 229, Address: 0x27e56c, Func Offset: 0x27c
	// Line 233, Address: 0x27e574, Func Offset: 0x284
	// Line 240, Address: 0x27e57c, Func Offset: 0x28c
	// Line 243, Address: 0x27e580, Func Offset: 0x290
	// Line 246, Address: 0x27e588, Func Offset: 0x298
	// Line 251, Address: 0x27e598, Func Offset: 0x2a8
	// Line 256, Address: 0x27e5a0, Func Offset: 0x2b0
	// Line 251, Address: 0x27e5a4, Func Offset: 0x2b4
	// Line 256, Address: 0x27e5bc, Func Offset: 0x2cc
	// Line 251, Address: 0x27e5c8, Func Offset: 0x2d8
	// Line 252, Address: 0x27e5ec, Func Offset: 0x2fc
	// Line 257, Address: 0x27e5f0, Func Offset: 0x300
	// Line 252, Address: 0x27e5f8, Func Offset: 0x308
	// Line 253, Address: 0x27e5fc, Func Offset: 0x30c
	// Line 254, Address: 0x27e600, Func Offset: 0x310
	// Line 256, Address: 0x27e604, Func Offset: 0x314
	// Line 254, Address: 0x27e608, Func Offset: 0x318
	// Line 257, Address: 0x27e60c, Func Offset: 0x31c
	// Line 263, Address: 0x27e618, Func Offset: 0x328
	// Line 260, Address: 0x27e61c, Func Offset: 0x32c
	// Line 263, Address: 0x27e620, Func Offset: 0x330
	// Line 265, Address: 0x27e628, Func Offset: 0x338
	// Line 269, Address: 0x27e630, Func Offset: 0x340
	// Line 272, Address: 0x27e650, Func Offset: 0x360
	// Line 275, Address: 0x27e658, Func Offset: 0x368
	// Line 277, Address: 0x27e65c, Func Offset: 0x36c
	// Line 279, Address: 0x27e664, Func Offset: 0x374
	// Line 272, Address: 0x27e668, Func Offset: 0x378
	// Line 280, Address: 0x27e670, Func Offset: 0x380
	// Line 282, Address: 0x27e678, Func Offset: 0x388
	// Line 284, Address: 0x27e688, Func Offset: 0x398
	// Line 286, Address: 0x27e68c, Func Offset: 0x39c
	// Line 287, Address: 0x27e690, Func Offset: 0x3a0
	// Line 284, Address: 0x27e694, Func Offset: 0x3a4
	// Line 288, Address: 0x27e69c, Func Offset: 0x3ac
	// Line 291, Address: 0x27e6a4, Func Offset: 0x3b4
	// Line 292, Address: 0x27e6a8, Func Offset: 0x3b8
	// Line 295, Address: 0x27e6b0, Func Offset: 0x3c0
	// Line 298, Address: 0x27e6c0, Func Offset: 0x3d0
	// Line 303, Address: 0x27e6c8, Func Offset: 0x3d8
	// Line 298, Address: 0x27e6cc, Func Offset: 0x3dc
	// Line 303, Address: 0x27e6e8, Func Offset: 0x3f8
	// Line 298, Address: 0x27e6f0, Func Offset: 0x400
	// Line 300, Address: 0x27e708, Func Offset: 0x418
	// Line 303, Address: 0x27e70c, Func Offset: 0x41c
	// Line 304, Address: 0x27e710, Func Offset: 0x420
	// Line 300, Address: 0x27e718, Func Offset: 0x428
	// Line 301, Address: 0x27e71c, Func Offset: 0x42c
	// Line 303, Address: 0x27e724, Func Offset: 0x434
	// Line 301, Address: 0x27e728, Func Offset: 0x438
	// Line 304, Address: 0x27e72c, Func Offset: 0x43c
	// Line 308, Address: 0x27e738, Func Offset: 0x448
	// Line 306, Address: 0x27e73c, Func Offset: 0x44c
	// Line 308, Address: 0x27e740, Func Offset: 0x450
	// Line 310, Address: 0x27e748, Func Offset: 0x458
	// Line 314, Address: 0x27e750, Func Offset: 0x460
	// Line 317, Address: 0x27e770, Func Offset: 0x480
	// Line 320, Address: 0x27e778, Func Offset: 0x488
	// Line 322, Address: 0x27e77c, Func Offset: 0x48c
	// Line 317, Address: 0x27e780, Func Offset: 0x490
	// Line 325, Address: 0x27e788, Func Offset: 0x498
	// Line 327, Address: 0x27e790, Func Offset: 0x4a0
	// Line 329, Address: 0x27e7a0, Func Offset: 0x4b0
	// Line 331, Address: 0x27e7a4, Func Offset: 0x4b4
	// Line 332, Address: 0x27e7a8, Func Offset: 0x4b8
	// Line 329, Address: 0x27e7ac, Func Offset: 0x4bc
	// Line 333, Address: 0x27e7b4, Func Offset: 0x4c4
	// Line 336, Address: 0x27e7bc, Func Offset: 0x4cc
	// Line 337, Address: 0x27e7c0, Func Offset: 0x4d0
	// Line 340, Address: 0x27e7c8, Func Offset: 0x4d8
	// Line 348, Address: 0x27e7d8, Func Offset: 0x4e8
	// Line 353, Address: 0x27e7e0, Func Offset: 0x4f0
	// Line 348, Address: 0x27e7e4, Func Offset: 0x4f4
	// Line 353, Address: 0x27e7fc, Func Offset: 0x50c
	// Line 348, Address: 0x27e808, Func Offset: 0x518
	// Line 358, Address: 0x27e834, Func Offset: 0x544
	// Line 348, Address: 0x27e83c, Func Offset: 0x54c
	// Line 353, Address: 0x27e858, Func Offset: 0x568
	// Line 348, Address: 0x27e85c, Func Offset: 0x56c
	// Line 358, Address: 0x27e860, Func Offset: 0x570
	// Line 362, Address: 0x27e868, Func Offset: 0x578
	// Line 360, Address: 0x27e86c, Func Offset: 0x57c
	// Line 362, Address: 0x27e870, Func Offset: 0x580
	// Line 364, Address: 0x27e878, Func Offset: 0x588
	// Line 373, Address: 0x27e880, Func Offset: 0x590
	// Line 372, Address: 0x27e898, Func Offset: 0x5a8
	// Line 373, Address: 0x27e89c, Func Offset: 0x5ac
	// Func End, Address: 0x27e8a4, Func Offset: 0x5b4
}

// p2EnableFastIm3D__Fv
// Start address: 0x27e8b0
void p2EnableFastIm3D()
{
	rxNodePS2AllMatPvtData* matPvtData;
	RxPipeline* objPipe;
	// Line 73, Address: 0x27e8b0, Func Offset: 0
	// Line 75, Address: 0x27e8b8, Func Offset: 0x8
	// Line 78, Address: 0x27e8c0, Func Offset: 0x10
	// Line 79, Address: 0x27e8c4, Func Offset: 0x14
	// Line 78, Address: 0x27e8cc, Func Offset: 0x1c
	// Line 79, Address: 0x27e8d8, Func Offset: 0x28
	// Line 80, Address: 0x27e8e0, Func Offset: 0x30
	// Line 81, Address: 0x27e8e4, Func Offset: 0x34
	// Line 80, Address: 0x27e8ec, Func Offset: 0x3c
	// Line 81, Address: 0x27e8f0, Func Offset: 0x40
	// Line 84, Address: 0x27e8f4, Func Offset: 0x44
	// Func End, Address: 0x27e900, Func Offset: 0x50
}

