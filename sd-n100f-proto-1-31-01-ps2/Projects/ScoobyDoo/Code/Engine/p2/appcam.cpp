typedef struct AppCamera;
typedef struct _RpWorldSector;
typedef struct _RwRaster;
typedef struct _RpMeshHeader;
typedef struct _RxClusterDefinition;
typedef struct _RpWorld;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct _RxHeap;
typedef struct _rxHeapBlockHeader;
typedef enum _RxClusterValidityReq;
typedef struct _RpCollSector;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RwV2d;
typedef enum _RwTextureFilterMode;
typedef struct _RpSector;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct _RwLLLink;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RpMaterialList;
typedef struct _RwSurfaceProperties;
typedef enum _RwCameraProjection;
typedef struct _RpMaterial;
typedef struct _RwObjectHasFrame;
typedef struct _RwV3d;
typedef struct _RpPolygon;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RxPipeline;
typedef struct _RwTexDictionary;
typedef struct _RpVertexNormal;
typedef struct _RwTexCoords;
typedef struct _rxReq;
typedef struct _RwRGBA;
typedef struct _RwObject;
typedef struct _RwCamera;
typedef struct _RwTexture;
typedef struct _RxClusterRef;
typedef struct _RwBBox;
typedef struct _RxIoSpec;
typedef struct _RxNodeMethods;
typedef struct _RwFrustumPlane;
typedef enum _RxClusterForcePresent;
typedef struct _RwMatrix;
typedef struct _RxPacket;
typedef enum _RxNodeDefEditable;
typedef struct _RxClusterUnion;
typedef enum _RwTextureAddressMode;
typedef struct _RxCluster;
typedef enum _rpWorldRenderOrder;
typedef struct _RwPlane;
typedef struct _RwLinkList;
typedef struct Camera;

typedef _RpWorldSector*(*type_0)(_RpWorldSector*);
typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_2)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_4)(_RxNodeDefinition*);
typedef void(*type_5)(_RxNodeDefinition*);
typedef int32(*type_8)(_RxPipelineNode*);
typedef void(*type_9)(_RxPipelineNode*);
typedef _RwObjectHasFrame*(*type_10)(_RwObjectHasFrame*);
typedef int32(*type_11)(_RxPipelineNode*, _RxPipeline*);
typedef uint32(*type_12)(_RxPipelineNode*, uint32, uint32, void*);
typedef _RwCamera*(*type_14)(_RwCamera*);
typedef _RwCamera*(*type_17)(_RwCamera*);

typedef _RwFrustumPlane type_3[6];
typedef _RwV3d type_6[8];
typedef uint32 type_7[4];
typedef _RxCluster type_13[1];
typedef int8 type_15[32];
typedef int8 type_16[32];
typedef uint16 type_18[3];

struct AppCamera : Camera
{
	_RwRaster* backdrop;
	float32 cameraDistance;
	_RwV2d offset;
	_RpWorld* world;

	void* __ct(int32 width, int32 height, int32 zBuffer);
	void* __dt();
	void CameraReset(_RwV3d* origin);
	void CameraClear();
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

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct _rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	_rxHeapSuperBlockDescriptor* next;
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

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
};

struct _RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	_rxReq* req;
	void* initialisationData;
	uint32 initialisationDataSize;
};

struct _RwV2d
{
	float32 x;
	float32 y;
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

struct _RpSector
{
	int32 type;
};

struct _RxPipelineNodeParam
{
	void* dataParam;
	_RxHeap* heap;
};

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
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

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

enum _RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
};

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _RxPipelineRequiresCluster
{
	_RxClusterDefinition* clusterDef;
	_RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct _rxReq
{
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RwCamera
{
	_RwObjectHasFrame object;
	_RwCameraProjection projectionType;
	_RwCamera*(*beginUpdate)(_RwCamera*);
	_RwCamera*(*endUpdate)(_RwCamera*);
	_RwMatrix viewMatrix;
	_RwRaster* frameBuffer;
	_RwRaster* zBuffer;
	_RwV2d viewWindow;
	_RwV2d recipViewWindow;
	_RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	uint16 renderFrame;
	_RwFrustumPlane frustumPlanes[6];
	_RwBBox frustumBoundBox;
	_RwV3d frustumCorners[8];
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

struct _RxClusterRef
{
	_RxClusterDefinition* clusterDef;
	_RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
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

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwMatrix
{
	_RwV3d right;
	uint32 flags;
	_RwV3d up;
	uint32 pad1;
	_RwV3d at;
	uint32 pad2;
	_RwV3d pos;
	uint32 pad3;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwPlane
{
	_RwV3d normal;
	float32 distance;
};

struct _RwLinkList
{
	_RwLLLink link;
};

struct Camera
{
	_RwCamera* camera;
	int32 m_Preset;
	float32 m_TetherLength;
	float32 m_TetherHeightPerc;
};

_RwRGBA BGNDColor;

void* __ct(int32 width, int32 height, int32 zBuffer);
void* __dt();
void CameraReset(_RwV3d* origin);
void CameraClear();

// __ct__9AppCameraFiii
// Start address: 0x2020a0
void* AppCamera::__ct(int32 width, int32 height, int32 zBuffer)
{
	// Line 107, Address: 0x2020a0, Func Offset: 0
	// Line 110, Address: 0x2020bc, Func Offset: 0x1c
	// Line 112, Address: 0x2020c0, Func Offset: 0x20
	// Line 114, Address: 0x2020c8, Func Offset: 0x28
	// Line 116, Address: 0x2020cc, Func Offset: 0x2c
	// Func End, Address: 0x2020e4, Func Offset: 0x44
}

// __dt__9AppCameraFv
// Start address: 0x2020f0
void* AppCamera::__dt()
{
	// Line 97, Address: 0x2020f0, Func Offset: 0
	// Line 98, Address: 0x202110, Func Offset: 0x20
	// Line 100, Address: 0x20211c, Func Offset: 0x2c
	// Line 102, Address: 0x202128, Func Offset: 0x38
	// Line 104, Address: 0x20212c, Func Offset: 0x3c
	// Line 105, Address: 0x20215c, Func Offset: 0x6c
	// Func End, Address: 0x202174, Func Offset: 0x84
}

// CameraReset__9AppCameraFP6_RwV3d
// Start address: 0x202180
void AppCamera::CameraReset(_RwV3d* origin)
{
	_RwV3d v;
	// Line 52, Address: 0x202180, Func Offset: 0
	// Line 54, Address: 0x202188, Func Offset: 0x8
	// Line 56, Address: 0x202194, Func Offset: 0x14
	// Line 58, Address: 0x2021b0, Func Offset: 0x30
	// Line 60, Address: 0x2021bc, Func Offset: 0x3c
	// Line 62, Address: 0x2021c8, Func Offset: 0x48
	// Line 65, Address: 0x2021e8, Func Offset: 0x68
	// Func End, Address: 0x2021f8, Func Offset: 0x78
}

// CameraClear__9AppCameraFv
// Start address: 0x202200
void AppCamera::CameraClear()
{
	// Line 38, Address: 0x202200, Func Offset: 0
	// Line 39, Address: 0x202218, Func Offset: 0x18
	// Line 41, Address: 0x202224, Func Offset: 0x24
	// Line 42, Address: 0x2023a0, Func Offset: 0x1a0
	// Line 45, Address: 0x2023a8, Func Offset: 0x1a8
	// Line 48, Address: 0x2023bc, Func Offset: 0x1bc
	// Func End, Address: 0x2023d8, Func Offset: 0x1d8
}

