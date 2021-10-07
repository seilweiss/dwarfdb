typedef struct RpWorldSector;
typedef struct RwRGBAReal;
typedef struct iLight;
typedef struct RxPipelineNode;
typedef struct RwRaster;
typedef struct RwMatrixTag;
typedef struct RwLLLink;
typedef struct RxPipeline;
typedef struct RpPolygon;
typedef struct RpLight;
typedef struct RxPipelineCluster;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef enum RxClusterValid;
typedef struct RpVertexNormal;
typedef struct RwTexDictionary;
typedef struct RwTexCoords;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBA;
typedef struct RwObject;
typedef enum RwTextureFilterMode;
typedef struct RwResEntry;
typedef struct RwBBox;
typedef struct RxNodeDefinition;
typedef struct RxPacket;
typedef struct RxClusterDefinition;
typedef struct _xVec3;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineRequiresCluster;
typedef struct rxReq;
typedef struct RwLinkList;
typedef struct RwTexture;
typedef struct RpCollSector;
typedef struct RpMeshHeader;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct _xFColor;
typedef enum RxClusterForcePresent;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RpWorld;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RpMaterialList;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpSector;
typedef struct RpMaterial;
typedef struct RxHeap;
typedef struct _xSphere;
typedef struct RxCluster;
typedef struct RwSurfaceProperties;
typedef enum RxClusterValidityReq;
typedef enum rxEmbeddedPacketState;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNodeParam;
typedef enum RwTextureAddressMode;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_3)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_5)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef int32(*type_8)(RxPipelineNode*);
typedef void(*type_9)(RxPipelineNode*);
typedef void(*type_10)(RwResEntry*);
typedef RpWorldSector*(*type_13)(RpWorldSector*);
typedef RwObjectHasFrame*(*type_15)(RwObjectHasFrame*);

typedef RxCluster type_1[1];
typedef RwTexCoords* type_2[8];
typedef uint32 type_4[4];
typedef int8 type_11[32];
typedef int8 type_12[32];
typedef uint16 type_14[3];

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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct iLight
{
	uint32 type;
	RpLight* hw;
	_xSphere sph;
	float32 radius_sq;
	_xFColor color;
	_xVec3 dir;
	float32 coneangle;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct rxReq
{
};

struct RwLinkList
{
	RwLLLink link;
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

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

RpWorld* gLightWorld;
_xVec3 g_O3;

void iLightEnv(iLight* light, int32 env);
void iLightRemove(iLight* light);
void iLightAdd(iLight* light);
void iLightDestroy(iLight* light);
void iLightSetPos(iLight* light, _xVec3* pos);
void iLightSetColor(iLight* light, _xFColor* col);
void iLightModify(iLight* light, uint32 flags);
iLight* iLightCreate(iLight* light, uint32 type);
void iLightInit(RpWorld* world);

// iLightEnv__FP6iLighti
// Start address: 0x1a53c0
void iLightEnv(iLight* light, int32 env)
{
	uint32 flags;
	// Line 205, Address: 0x1a53c0, Func Offset: 0
	// Line 212, Address: 0x1a53f4, Func Offset: 0x34
	// Line 213, Address: 0x1a53f8, Func Offset: 0x38
	// Line 216, Address: 0x1a5400, Func Offset: 0x40
	// Line 217, Address: 0x1a5404, Func Offset: 0x44
	// Line 220, Address: 0x1a540c, Func Offset: 0x4c
	// Line 228, Address: 0x1a5410, Func Offset: 0x50
	// Line 229, Address: 0x1a5414, Func Offset: 0x54
	// Func End, Address: 0x1a541c, Func Offset: 0x5c
}

// iLightRemove__FP6iLight
// Start address: 0x1a5420
void iLightRemove(iLight* light)
{
	// Line 196, Address: 0x1a5420, Func Offset: 0
	// Func End, Address: 0x1a542c, Func Offset: 0xc
}

// iLightAdd__FP6iLight
// Start address: 0x1a5430
void iLightAdd(iLight* light)
{
	// Line 188, Address: 0x1a5430, Func Offset: 0
	// Func End, Address: 0x1a543c, Func Offset: 0xc
}

// iLightDestroy__FP6iLight
// Start address: 0x1a5440
void iLightDestroy(iLight* light)
{
	RwFrame* frame;
	// Line 165, Address: 0x1a5440, Func Offset: 0
	// Line 169, Address: 0x1a544c, Func Offset: 0xc
	// Line 173, Address: 0x1a5450, Func Offset: 0x10
	// Line 175, Address: 0x1a5458, Func Offset: 0x18
	// Line 176, Address: 0x1a5460, Func Offset: 0x20
	// Line 177, Address: 0x1a5468, Func Offset: 0x28
	// Line 180, Address: 0x1a5470, Func Offset: 0x30
	// Line 181, Address: 0x1a5478, Func Offset: 0x38
	// Func End, Address: 0x1a5488, Func Offset: 0x48
}

// iLightSetPos__FP6iLightP6_xVec3
// Start address: 0x1a5490
void iLightSetPos(iLight* light, _xVec3* pos)
{
	RwMatrixTag* m;
	RwFrame* f;
	// Line 132, Address: 0x1a5490, Func Offset: 0
	// Line 134, Address: 0x1a549c, Func Offset: 0xc
	// Line 137, Address: 0x1a54a0, Func Offset: 0x10
	// Line 134, Address: 0x1a54a4, Func Offset: 0x14
	// Line 137, Address: 0x1a54a8, Func Offset: 0x18
	// Line 138, Address: 0x1a54ac, Func Offset: 0x1c
	// Line 135, Address: 0x1a54b0, Func Offset: 0x20
	// Line 138, Address: 0x1a54b4, Func Offset: 0x24
	// Line 139, Address: 0x1a54b8, Func Offset: 0x28
	// Line 142, Address: 0x1a54bc, Func Offset: 0x2c
	// Line 145, Address: 0x1a54c4, Func Offset: 0x34
	// Line 146, Address: 0x1a54cc, Func Offset: 0x3c
	// Func End, Address: 0x1a54dc, Func Offset: 0x4c
}

// iLightSetColor__FP6iLightP8_xFColor
// Start address: 0x1a54e0
void iLightSetColor(iLight* light, _xFColor* col)
{
	// Line 127, Address: 0x1a54e0, Func Offset: 0
	// Func End, Address: 0x1a54e8, Func Offset: 0x8
}

// iLightModify__FP6iLightUi
// Start address: 0x1a54f0
void iLightModify(iLight* light, uint32 flags)
{
	RwMatrixTag temp;
	RwFrame* frame;
	// Line 98, Address: 0x1a54f0, Func Offset: 0
	// Line 99, Address: 0x1a5500, Func Offset: 0x10
	// Line 102, Address: 0x1a5510, Func Offset: 0x20
	// Line 104, Address: 0x1a5514, Func Offset: 0x24
	// Line 105, Address: 0x1a5524, Func Offset: 0x34
	// Line 102, Address: 0x1a5528, Func Offset: 0x38
	// Line 107, Address: 0x1a552c, Func Offset: 0x3c
	// Line 108, Address: 0x1a5530, Func Offset: 0x40
	// Line 104, Address: 0x1a5534, Func Offset: 0x44
	// Line 106, Address: 0x1a553c, Func Offset: 0x4c
	// Line 104, Address: 0x1a5540, Func Offset: 0x50
	// Line 105, Address: 0x1a554c, Func Offset: 0x5c
	// Line 106, Address: 0x1a5564, Func Offset: 0x74
	// Line 107, Address: 0x1a557c, Func Offset: 0x8c
	// Line 108, Address: 0x1a5590, Func Offset: 0xa0
	// Line 110, Address: 0x1a5598, Func Offset: 0xa8
	// Line 111, Address: 0x1a55a4, Func Offset: 0xb4
	// Line 113, Address: 0x1a55b0, Func Offset: 0xc0
	// Line 114, Address: 0x1a55bc, Func Offset: 0xcc
	// Line 116, Address: 0x1a55c8, Func Offset: 0xd8
	// Line 120, Address: 0x1a55ec, Func Offset: 0xfc
	// Line 122, Address: 0x1a55f8, Func Offset: 0x108
	// Func End, Address: 0x1a560c, Func Offset: 0x11c
}

// iLightCreate__FP6iLightUi
// Start address: 0x1a5610
iLight* iLightCreate(iLight* light, uint32 type)
{
	RwFrame* frame;
	// Line 37, Address: 0x1a5610, Func Offset: 0
	// Line 39, Address: 0x1a5628, Func Offset: 0x18
	// Line 42, Address: 0x1a5654, Func Offset: 0x44
	// Line 43, Address: 0x1a565c, Func Offset: 0x4c
	// Line 45, Address: 0x1a5664, Func Offset: 0x54
	// Line 46, Address: 0x1a566c, Func Offset: 0x5c
	// Line 48, Address: 0x1a5674, Func Offset: 0x64
	// Line 49, Address: 0x1a567c, Func Offset: 0x6c
	// Line 52, Address: 0x1a5684, Func Offset: 0x74
	// Line 55, Address: 0x1a568c, Func Offset: 0x7c
	// Line 58, Address: 0x1a5698, Func Offset: 0x88
	// Line 62, Address: 0x1a56a0, Func Offset: 0x90
	// Line 63, Address: 0x1a56ac, Func Offset: 0x9c
	// Line 65, Address: 0x1a56b4, Func Offset: 0xa4
	// Line 67, Address: 0x1a56bc, Func Offset: 0xac
	// Line 71, Address: 0x1a56c4, Func Offset: 0xb4
	// Line 72, Address: 0x1a56d0, Func Offset: 0xc0
	// Line 74, Address: 0x1a56dc, Func Offset: 0xcc
	// Line 77, Address: 0x1a56e4, Func Offset: 0xd4
	// Line 78, Address: 0x1a56e8, Func Offset: 0xd8
	// Line 79, Address: 0x1a56ec, Func Offset: 0xdc
	// Line 80, Address: 0x1a56f0, Func Offset: 0xe0
	// Line 81, Address: 0x1a56f4, Func Offset: 0xe4
	// Line 82, Address: 0x1a56f8, Func Offset: 0xe8
	// Line 83, Address: 0x1a5700, Func Offset: 0xf0
	// Line 84, Address: 0x1a5704, Func Offset: 0xf4
	// Line 85, Address: 0x1a5708, Func Offset: 0xf8
	// Line 86, Address: 0x1a570c, Func Offset: 0xfc
	// Line 87, Address: 0x1a5710, Func Offset: 0x100
	// Line 88, Address: 0x1a5714, Func Offset: 0x104
	// Line 89, Address: 0x1a5718, Func Offset: 0x108
	// Line 92, Address: 0x1a571c, Func Offset: 0x10c
	// Line 93, Address: 0x1a5720, Func Offset: 0x110
	// Func End, Address: 0x1a5738, Func Offset: 0x128
}

// iLightInit__FP7RpWorld
// Start address: 0x1a5740
void iLightInit(RpWorld* world)
{
	// Line 29, Address: 0x1a5740, Func Offset: 0
	// Func End, Address: 0x1a5748, Func Offset: 0x8
}

