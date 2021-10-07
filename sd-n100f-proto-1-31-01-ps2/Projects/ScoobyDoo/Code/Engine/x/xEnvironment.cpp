typedef struct _RxClusterUnion;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _tagxEnv;
typedef struct _RxClusterDefinition;
typedef struct _RpMaterial;
typedef struct _RwTexDictionary;
typedef struct _RpVertexNormal;
typedef struct _rxHeapBlockHeader;
typedef struct _RwTexture;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct _RxPipeline;
typedef struct _RpSector;
typedef struct _RxPipelineCluster;
typedef struct _rxReq;
typedef struct _RwTexCoords;
typedef struct _rxHeapSuperBlockDescriptor;
typedef enum _rpWorldRenderOrder;
typedef struct _RxClusterRef;
typedef struct _RxPacket;
typedef struct _RpPolygon;
typedef enum _RxClusterValidityReq;
typedef struct _RwRaster;
typedef enum _RwTextureAddressMode;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rwResEntryTag;
typedef struct _RxHeap;
typedef struct _RpWorldSector;
typedef struct _rxHeapFreeBlock;
typedef struct _tagiEnvRuntime;
typedef struct _RpMeshHeader;
typedef struct tagXStreamMDSDirectory;
typedef struct _RxPipelineNodeParam;
typedef struct _RpWorld;
typedef enum _rxEmbeddedPacketState;
typedef struct _RpCollSector;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RwSurfaceProperties;
typedef struct _RwV3d;
typedef struct _RwLLLink;
typedef struct _RpMaterialList;
typedef struct _RxPipelineRequiresCluster;
typedef enum _RwTextureFilterMode;
typedef struct XStreamHeader;
typedef struct _RwObject;
typedef struct Vector3D;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwRGBA;
typedef struct _RxIoSpec;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RwBBox;
typedef enum _RxNodeDefEditable;

typedef _RpWorldSector*(*type_4)(_RpWorldSector*);
typedef void(*type_5)(_rwResEntryTag*);
typedef int32(*type_6)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_8)(_RxNodeDefinition*);
typedef void(*type_9)(_RxNodeDefinition*);
typedef int32(*type_11)(_RxPipelineNode*);
typedef void(*type_12)(_RxPipelineNode*);
typedef int32(*type_13)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_14)(_RxPipelineNode*, uint32, uint32, void*);

typedef int8 type_0[128];
typedef int8 type_1[32];
typedef int8 type_2[32];
typedef uint16 type_3[3];
typedef tagXStreamDirectoryEntry type_7[1000];
typedef uint32 type_10[4];
typedef int8 type_15[2048];
typedef _RxCluster type_16[1];

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _tagxEnv
{
	_tagiEnvRuntime* m_runtime;
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _RwTexture
{
	_RwRaster* raster;
	_RwTexDictionary* dict;
	_RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	int32 refCount;
	_RwTextureFilterMode filtering;
	_RwTextureAddressMode addressingU;
	_RwTextureAddressMode addressingV;
};

struct _RxCluster
{
	uint16 flags;
	uint16 stride;
	void* data;
	void* currentData;
	uint32 numAlloced;
	uint32 numUsed;
	_RxClusterUnion clusterUnion;
	uint32 attributes;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct _RxPipeline
{
	int32 locked;
	uint32 numNodes;
	_RxPipelineNode* nodes;
	void* nodesBlock;
	uint32 packetNumClusterSlots;
	_rxEmbeddedPacketState embeddedPacketState;
	_RxPacket* embeddedPacket;
	uint32 numInputRequirements;
	_RxPipelineRequiresCluster* inputRequirements;
	uint32* superBlock;
	uint32 entryPoint;
};

struct _RpSector
{
	int32 type;
};

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _rxReq
{
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _RxPacket
{
	uint16 flags;
	uint16 numClusters;
	_RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	_RxPipelineCluster** slotClusterRefs;
	_RxCluster clusters[1];
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwRaster
{
	_RwRaster* parent;
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

enum _RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RxOutputSpec
{
	int8* name;
	_RxClusterValid* outputClusters;
	_RxClusterValid allOtherClusters;
};

struct _RxPipelineNode
{
	_RxNodeDefinition* nodeDef;
	uint32 numOutputs;
	uint32* outputs;
	_RxPipelineCluster** slotClusterRefs;
	uint32* slotsContinue;
	void* privateData;
	uint32* inputToClusterSlot;
	_RxPipelineNodeTopSortData* topSortData;
};

struct _rwResEntryTag
{
	_RwLLLink link;
	int32 size;
	void* owner;
	_rwResEntryTag** ownerRef;
	void(*destroyNotify)(_rwResEntryTag*);
};

struct _RxHeap
{
	uint32 superBlockSize;
	_rxHeapSuperBlockDescriptor* head;
	_rxHeapBlockHeader* headBlock;
	_rxHeapFreeBlock* freeBlocks;
	uint32 entriesAlloced;
	uint32 entriesUsed;
};

struct _RpWorldSector
{
	int32 type;
	_RpPolygon* polygons;
	_RwV3d* vertices;
	_RpVertexNormal* normals;
	_RwTexCoords* vertexTexCoords;
	_RwRGBA* preLitLum;
	_rwResEntryTag* repEntry;
	_RwLinkList collAtomicsInWorldSector;
	_RwLinkList noCollAtomicsInWorldSector;
	_RwLinkList lightsInWorldSector;
	_RwBBox boundingBox;
	_RpCollSector* colSectorRoot;
	_RpMeshHeader* mesh;
	_RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct tagXStreamMDSDirectory
{
	uint32 count;
	tagXStreamDirectoryEntry directory[1000];
};

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

struct _RpWorld
{
	_RwObject object;
	_rpWorldRenderOrder renderOrder;
	_RpMaterialList matList;
	_RpSector* rootSector;
	int32 numClumpsInWorld;
	_RwLLLink* currentClumpLink;
	_RwLinkList clumpList;
	_RwLinkList lightList;
	_RwLinkList directionalLightList;
	_RwV3d worldOrigin;
	_RwBBox boundingBox;
	_RwSurfaceProperties surfaceProps;
	_RpWorldSector*(*renderCallBack)(_RpWorldSector*);
	_RxPipeline* pipeline;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RxNodeDefinition
{
	int8* name;
	_RxNodeMethods nodeMethods;
	_RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	_RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

enum _RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

enum _RwTextureFilterMode
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

struct XStreamHeader
{
	uint32 id;
	uint32 versionID;
	uint8 month;
	uint8 day;
	uint8 hour;
	uint8 minute;
	uint32 mdsOffset;
	uint32 mdsLength;
	tagXStreamMDSDirectory directory;
	int8 safety[2048];
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _RxNodeMethods
{
	int32(*nodeBody)(_RxPipelineNode*, _RxPipelineNodeParam*);
	int32(*nodeInit)(_RxNodeDefinition*);
	void(*nodeTerm)(_RxNodeDefinition*);
	int32(*pipelineNodeInit)(_RxPipelineNode*);
	void(*pipelineNodeTerm)(_RxPipelineNode*);
	int32(*pipelineNodeConfig)(_RxPipelineNode*, _RxPipeline*);
	uint32(*configMsgHandler)(_RxPipelineNode*, uint32, uint32, void*);
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void xEnvDraw(_tagxEnv* env);
int32 xEnvLoad(_tagxEnv* env, int8* filename);

// xEnvDraw__FP8_tagxEnv
// Start address: 0x39ce70
void xEnvDraw(_tagxEnv* env)
{
	// Line 39, Address: 0x39ce70, Func Offset: 0
	// Line 40, Address: 0x39ce80, Func Offset: 0x10
	// Line 41, Address: 0x39cf20, Func Offset: 0xb0
	// Line 43, Address: 0x39cfc4, Func Offset: 0x154
	// Line 44, Address: 0x39cfd0, Func Offset: 0x160
	// Func End, Address: 0x39cfe4, Func Offset: 0x174
}

// xEnvLoad__FP8_tagxEnvPc
// Start address: 0x39cff0
int32 xEnvLoad(_tagxEnv* env, int8* filename)
{
	// Line 22, Address: 0x39cff0, Func Offset: 0
	// Line 23, Address: 0x39d008, Func Offset: 0x18
	// Line 26, Address: 0x39d0a8, Func Offset: 0xb8
	// Line 27, Address: 0x39d0cc, Func Offset: 0xdc
	// Line 28, Address: 0x39d0d8, Func Offset: 0xe8
	// Line 32, Address: 0x39d0e4, Func Offset: 0xf4
	// Line 33, Address: 0x39d0f4, Func Offset: 0x104
	// Func End, Address: 0x39d10c, Func Offset: 0x11c
}

