typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxHeapBlockHeader;
typedef struct RpPolygon;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct _xEnv;
typedef struct rxHeapFreeBlock;
typedef struct RpVertexNormal;
typedef struct iEnv;
typedef struct RxClusterDefinition;
typedef struct RwLLLink;
typedef struct RwTexCoords;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RwRGBAReal;
typedef struct RxPipeline;
typedef struct RwRGBA;
typedef struct RwRaster;
typedef struct RwResEntry;
typedef struct RxPipelineCluster;
typedef enum RpWorldRenderOrder;
typedef enum RxClusterValid;
typedef struct RwTexDictionary;
typedef struct RwObject;
typedef enum RwTextureFilterMode;
typedef struct RpCollSector;
typedef struct RpMeshHeader;
typedef struct RxNodeDefinition;
typedef struct RpWorldSector;
typedef struct RxPacket;
typedef struct RwBBox;
typedef struct RwLinkList;
typedef struct rxReq;
typedef struct RpWorld;
typedef struct RwTexture;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct RpSector;
typedef struct RpMaterial;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RwFrame;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RpLight;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef enum rxEmbeddedPacketState;
typedef struct RxPipelineNodeParam;
typedef enum RwTextureAddressMode;
typedef struct RwObjectHasFrame;

typedef void(*type_0)(RxNodeDefinition*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef int32(*type_2)(RxPipelineNode*);
typedef void(*type_4)(RxPipelineNode*);
typedef int32(*type_5)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_7)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_10)(RxNodeDefinition*);
typedef RpWorldSector*(*type_11)(RpWorldSector*);
typedef void(*type_12)(RwResEntry*);

typedef RwTexCoords* type_3[8];
typedef RxCluster type_6[1];
typedef uint32 type_8[4];
typedef int8 type_13[32];
typedef int8 type_14[32];
typedef uint16 type_15[3];
typedef RpLight* type_16[2];
typedef RwFrame* type_17[2];

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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	RpLight* light[2];
	RwFrame* light_frame[2];
	int32 memlvl;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	RwTexCoords* texCoords[8];
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpCollSector* colSectorRoot;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwLinkList
{
	RwLLLink link;
};

struct rxReq
{
};

struct RpWorld
{
	RwObject object;
	uint32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	int32 numTexCoordSets;
	int32 numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	RwSurfaceProperties surfaceProps;
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpSector
{
	int32 type;
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

struct RwFrame
{
	RwObject object;
	RwLLLink inDirtyListLink;
	RwMatrixTag modelling;
	RwMatrixTag ltm;
	RwLinkList objectList;
	RwFrame* child;
	RwFrame* next;
	RwFrame* root;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RpLight
{
	RwObjectHasFrame object;
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

_xEnv* gCurXEnv;

void xEnvRender(_xEnv* env);
void xEnvFree(_xEnv* env);
void xEnvSetup(_xEnv* env);
void xEnvLoadBsp(_xEnv* env, void* data, uint32 datasize, int32 dataType);

// xEnvRender__FP5_xEnv
// Start address: 0x13cad0
void xEnvRender(_xEnv* env)
{
	// Line 121, Address: 0x13cad0, Func Offset: 0
	// Line 126, Address: 0x13cad8, Func Offset: 0x8
	// Line 127, Address: 0x13cae4, Func Offset: 0x14
	// Line 128, Address: 0x13caec, Func Offset: 0x1c
	// Func End, Address: 0x13caf8, Func Offset: 0x28
}

// xEnvFree__FP5_xEnv
// Start address: 0x13cb00
void xEnvFree(_xEnv* env)
{
	// Line 101, Address: 0x13cb00, Func Offset: 0
	// Line 105, Address: 0x13cb10, Func Offset: 0x10
	// Line 108, Address: 0x13cb1c, Func Offset: 0x1c
	// Line 110, Address: 0x13cb24, Func Offset: 0x24
	// Line 114, Address: 0x13cb28, Func Offset: 0x28
	// Func End, Address: 0x13cb38, Func Offset: 0x38
}

// xEnvSetup__FP5_xEnv
// Start address: 0x13cb40
void xEnvSetup(_xEnv* env)
{
	// Line 75, Address: 0x13cb40, Func Offset: 0
	// Line 78, Address: 0x13cb50, Func Offset: 0x10
	// Line 80, Address: 0x13cb58, Func Offset: 0x18
	// Line 81, Address: 0x13cb5c, Func Offset: 0x1c
	// Func End, Address: 0x13cb6c, Func Offset: 0x2c
}

// xEnvLoadBsp__FP5_xEnvPCvUii
// Start address: 0x13cb70
void xEnvLoadBsp(_xEnv* env, void* data, uint32 datasize, int32 dataType)
{
	// Line 42, Address: 0x13cb70, Func Offset: 0
	// Line 45, Address: 0x13cb7c, Func Offset: 0xc
	// Line 48, Address: 0x13cb84, Func Offset: 0x14
	// Line 51, Address: 0x13cb8c, Func Offset: 0x1c
	// Line 55, Address: 0x13cb94, Func Offset: 0x24
	// Line 56, Address: 0x13cb98, Func Offset: 0x28
	// Func End, Address: 0x13cba8, Func Offset: 0x38
}

