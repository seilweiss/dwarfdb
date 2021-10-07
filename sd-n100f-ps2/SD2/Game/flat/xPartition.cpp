typedef struct RwObjectHasFrame;
typedef struct RxClusterDefinition;
typedef struct RxPipelineNode;
typedef struct _tagPartLink;
typedef struct RwLLLink;
typedef enum RxClusterValidityReq;
typedef struct RpVertexNormal;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterialList;
typedef struct RwRGBAReal;
typedef struct RxPipeline;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct RxPipelineCluster;
typedef struct rxHeapBlockHeader;
typedef struct _zVolume;
typedef enum RxClusterValid;
typedef struct _tagPartSpace;
typedef struct _tagPartition;
typedef struct zVolumeAsset;
typedef struct rxHeapFreeBlock;
typedef struct _xEnv;
typedef struct RwRaster;
typedef struct RwObject;
typedef struct RpPolygon;
typedef struct _xVec3;
typedef struct RpLight;
typedef enum RwTextureFilterMode;
typedef struct RxNodeDefinition;
typedef struct RwV3d;
typedef struct RxPacket;
typedef struct RwRGBA;
typedef struct _xMat4x3;
typedef struct RwResEntry;
typedef struct RwLinkList;
typedef struct rxReq;
typedef struct RwTexDictionary;
typedef struct iEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpWorld;
typedef struct RxOutputSpec;
typedef struct _xBound;
typedef struct RpCollSector;
typedef struct _xBox;
typedef enum RxClusterForcePresent;
typedef struct RwBBox;
typedef struct RpMeshHeader;
typedef struct RwTexCoords;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct p2LinkAsset;
typedef struct RwTexture;
typedef struct p2BaseAsset;
typedef struct RwFrame;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RpWorldSector;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef enum rxEmbeddedPacketState;
typedef struct xBase;
typedef struct _xSphere;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineNodeParam;
typedef struct _xCylinder;
typedef enum RwTextureAddressMode;
typedef struct xQCData;
typedef struct _xBBox;

typedef void(*type_0)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef int32(*type_2)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_5)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_7)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_8)(RxNodeDefinition*);
typedef void(*type_10)(RxNodeDefinition*);
typedef RpWorldSector*(*type_11)(RpWorldSector*);
typedef int32(*type_12)(RxPipelineNode*);
typedef void(*type_13)(RwResEntry*);
typedef int32(*type_20)(xBase*, xBase*, uint32, float32*, xBase*);

typedef uint8 type_3[3];
typedef RxCluster type_4[1];
typedef uint32 type_6[4];
typedef uint16 type_9[3];
typedef RpLight* type_14[2];
typedef RwFrame* type_15[2];
typedef int8 type_16[32];
typedef int8 type_17[32];
typedef float32 type_18[4];
typedef RwTexCoords* type_19[8];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct _tagPartLink
{
	void* data;
	_tagPartLink* next;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RpSector
{
	int32 type;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _zVolume : xBase
{
	zVolumeAsset* asset;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPartSpace
{
	int32 total;
	_tagPartLink head;
};

struct _tagPartition
{
	_xVec3 min;
	_xVec3 max;
	_xVec3 space_dim;
	int32 total_x;
	int32 total_y;
	int32 total_z;
	_tagPartSpace* space;
	_tagPartSpace global;
};

struct zVolumeAsset : p2BaseAsset
{
	uint32 flags;
	_xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwV3d
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _xMat4x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
	_xVec3 pos;
	uint32 pad3;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwLinkList
{
	RwLLLink link;
};

struct rxReq
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _xBound
{
	uint8 type;
	uint8 pad[3];
	union
	{
		_xSphere sph;
		_xBBox box;
		_xCylinder cyl;
	};
	_xMat4x3* mat;
	xQCData qcd;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

uint32 gActiveHeap;

void xPartitionGetLoop(_tagPartition* p, int32 step, int32* xi, int32* yi, int32* zi, int32 xmid, int32 ymid, int32 zmid, int32* xend, int32* yend, int32* zend);
void xPartitionDump();
void xPartitionGetVirtualIdx(_tagPartition* part, _xVec3* insert_pos, int32* x, int32* y, int32* z);
_tagPartSpace* xPartitionGetSpace(_tagPartition* p, int32 true_idx);
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, uint32 data);
int32 xPartitionUpdate(_tagPartition* part, void* data, int32 old_idx, _xVec3* current_pos);
int32 xPartitionInsert(_tagPartition* part, void* insert_data, _xVec3* insert_pos);
void xPartitionWorld(_tagPartition* part, _xEnv* env, int32 x_spaces, int32 y_spaces, int32 z_spaces);
void xPartitionVolume(_tagPartition* part, _zVolume* volume, int32 x_spaces, int32 y_spaces, int32 z_spaces);
int32 xPartitionGetTrueIdx(_tagPartition* part, int32 x, int32 y, int32 z);
void xPartitionReset();

// xPartitionGetLoop__FP13_tagPartitioniPiPiPiiiiPiPiPi
// Start address: 0x1d80e0
void xPartitionGetLoop(_tagPartition* p, int32 step, int32* xi, int32* yi, int32* zi, int32 xmid, int32 ymid, int32 zmid, int32* xend, int32* yend, int32* zend)
{
	// Line 403, Address: 0x1d80e0, Func Offset: 0
	// Line 404, Address: 0x1d80e8, Func Offset: 0x8
	// Line 408, Address: 0x1d80f0, Func Offset: 0x10
	// Line 409, Address: 0x1d80f8, Func Offset: 0x18
	// Line 410, Address: 0x1d8104, Func Offset: 0x24
	// Line 412, Address: 0x1d8108, Func Offset: 0x28
	// Line 413, Address: 0x1d8110, Func Offset: 0x30
	// Line 414, Address: 0x1d8124, Func Offset: 0x44
	// Line 416, Address: 0x1d8128, Func Offset: 0x48
	// Line 420, Address: 0x1d8130, Func Offset: 0x50
	// Line 421, Address: 0x1d8134, Func Offset: 0x54
	// Line 422, Address: 0x1d8140, Func Offset: 0x60
	// Line 424, Address: 0x1d8144, Func Offset: 0x64
	// Line 425, Address: 0x1d8148, Func Offset: 0x68
	// Line 426, Address: 0x1d815c, Func Offset: 0x7c
	// Line 428, Address: 0x1d8160, Func Offset: 0x80
	// Line 432, Address: 0x1d8168, Func Offset: 0x88
	// Line 433, Address: 0x1d816c, Func Offset: 0x8c
	// Line 434, Address: 0x1d8178, Func Offset: 0x98
	// Line 436, Address: 0x1d817c, Func Offset: 0x9c
	// Line 437, Address: 0x1d8184, Func Offset: 0xa4
	// Line 438, Address: 0x1d8198, Func Offset: 0xb8
	// Line 440, Address: 0x1d819c, Func Offset: 0xbc
	// Func End, Address: 0x1d81a4, Func Offset: 0xc4
}

// xPartitionDump__FP13_tagPartitionPc
// Start address: 0x1d81b0
void xPartitionDump()
{
	// Line 395, Address: 0x1d81b0, Func Offset: 0
	// Func End, Address: 0x1d81b8, Func Offset: 0x8
}

// xPartitionGetVirtualIdx__FP13_tagPartitionP6_xVec3PiPiPi
// Start address: 0x1d81c0
void xPartitionGetVirtualIdx(_tagPartition* part, _xVec3* insert_pos, int32* x, int32* y, int32* z)
{
	// Line 367, Address: 0x1d81c0, Func Offset: 0
	// Line 370, Address: 0x1d81c8, Func Offset: 0x8
	// Line 372, Address: 0x1d81ec, Func Offset: 0x2c
	// Line 375, Address: 0x1d81f4, Func Offset: 0x34
	// Line 377, Address: 0x1d8218, Func Offset: 0x58
	// Line 380, Address: 0x1d8220, Func Offset: 0x60
	// Line 382, Address: 0x1d8244, Func Offset: 0x84
	// Func End, Address: 0x1d824c, Func Offset: 0x8c
}

// xPartitionGetSpace__FP13_tagPartitioni
// Start address: 0x1d8250
_tagPartSpace* xPartitionGetSpace(_tagPartition* p, int32 true_idx)
{
	// Line 359, Address: 0x1d8250, Func Offset: 0
	// Line 360, Address: 0x1d8260, Func Offset: 0x10
	// Func End, Address: 0x1d8268, Func Offset: 0x18
}

// xPartitionSpaceMove__FP13_tagPartSpaceP13_tagPartSpaceUi
// Start address: 0x1d8270
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, uint32 data)
{
	_tagPartLink* src_pre;
	_tagPartLink* src_lnk;
	_tagPartLink* dest_lnk;
	// Line 325, Address: 0x1d8270, Func Offset: 0
	// Line 327, Address: 0x1d8278, Func Offset: 0x8
	// Line 328, Address: 0x1d827c, Func Offset: 0xc
	// Line 332, Address: 0x1d8298, Func Offset: 0x28
	// Line 336, Address: 0x1d829c, Func Offset: 0x2c
	// Line 338, Address: 0x1d82a4, Func Offset: 0x34
	// Line 339, Address: 0x1d82a8, Func Offset: 0x38
	// Line 340, Address: 0x1d82b0, Func Offset: 0x40
	// Line 343, Address: 0x1d82c4, Func Offset: 0x54
	// Line 346, Address: 0x1d82cc, Func Offset: 0x5c
	// Line 347, Address: 0x1d82d0, Func Offset: 0x60
	// Line 350, Address: 0x1d82d8, Func Offset: 0x68
	// Line 351, Address: 0x1d82e4, Func Offset: 0x74
	// Line 352, Address: 0x1d82ec, Func Offset: 0x7c
	// Func End, Address: 0x1d82f4, Func Offset: 0x84
}

// xPartitionUpdate__FP13_tagPartitionPviP6_xVec3
// Start address: 0x1d8300
int32 xPartitionUpdate(_tagPartition* part, void* data, int32 old_idx, _xVec3* current_pos)
{
	_tagPartSpace* dest;
	_tagPartSpace* src;
	int32 cur_idx;
	// Line 263, Address: 0x1d8300, Func Offset: 0
	// Line 265, Address: 0x1d830c, Func Offset: 0xc
	// Line 270, Address: 0x1d8390, Func Offset: 0x90
	// Line 271, Address: 0x1d8394, Func Offset: 0x94
	// Line 285, Address: 0x1d839c, Func Offset: 0x9c
	// Line 291, Address: 0x1d83f8, Func Offset: 0xf8
	// Line 294, Address: 0x1d8400, Func Offset: 0x100
	// Line 298, Address: 0x1d8408, Func Offset: 0x108
	// Line 299, Address: 0x1d8410, Func Offset: 0x110
	// Line 301, Address: 0x1d8418, Func Offset: 0x118
	// Line 303, Address: 0x1d8428, Func Offset: 0x128
	// Line 304, Address: 0x1d8434, Func Offset: 0x134
	// Line 306, Address: 0x1d843c, Func Offset: 0x13c
	// Line 310, Address: 0x1d8450, Func Offset: 0x150
	// Line 312, Address: 0x1d845c, Func Offset: 0x15c
	// Line 313, Address: 0x1d8460, Func Offset: 0x160
	// Func End, Address: 0x1d8470, Func Offset: 0x170
}

// xPartitionInsert__FP13_tagPartitionPvP6_xVec3
// Start address: 0x1d8470
int32 xPartitionInsert(_tagPartition* part, void* insert_data, _xVec3* insert_pos)
{
	// Line 229, Address: 0x1d8470, Func Offset: 0
	// Line 231, Address: 0x1d8484, Func Offset: 0x14
	// Line 236, Address: 0x1d8508, Func Offset: 0x98
	// Line 237, Address: 0x1d854c, Func Offset: 0xdc
	// Line 236, Address: 0x1d8550, Func Offset: 0xe0
	// Line 237, Address: 0x1d8558, Func Offset: 0xe8
	// Line 253, Address: 0x1d8560, Func Offset: 0xf0
	// Line 255, Address: 0x1d8578, Func Offset: 0x108
	// Line 253, Address: 0x1d857c, Func Offset: 0x10c
	// Line 255, Address: 0x1d85c0, Func Offset: 0x150
	// Line 257, Address: 0x1d8614, Func Offset: 0x1a4
	// Line 255, Address: 0x1d8618, Func Offset: 0x1a8
	// Line 258, Address: 0x1d8624, Func Offset: 0x1b4
	// Func End, Address: 0x1d863c, Func Offset: 0x1cc
}

// xPartitionWorld__FP13_tagPartitionP5_xEnviii
// Start address: 0x1d8640
void xPartitionWorld(_tagPartition* part, _xEnv* env, int32 x_spaces, int32 y_spaces, int32 z_spaces)
{
	int32 x;
	int32 y;
	int32 z;
	float32 dz;
	float32 dy;
	float32 dx;
	_xBox* bb;
	// Line 181, Address: 0x1d8640, Func Offset: 0
	// Line 186, Address: 0x1d8678, Func Offset: 0x38
	// Line 189, Address: 0x1d8684, Func Offset: 0x44
	// Line 190, Address: 0x1d868c, Func Offset: 0x4c
	// Line 191, Address: 0x1d86a4, Func Offset: 0x64
	// Line 196, Address: 0x1d86bc, Func Offset: 0x7c
	// Line 194, Address: 0x1d86c4, Func Offset: 0x84
	// Line 195, Address: 0x1d86cc, Func Offset: 0x8c
	// Line 196, Address: 0x1d86d4, Func Offset: 0x94
	// Line 199, Address: 0x1d86d8, Func Offset: 0x98
	// Line 200, Address: 0x1d86dc, Func Offset: 0x9c
	// Line 201, Address: 0x1d86e0, Func Offset: 0xa0
	// Line 202, Address: 0x1d86e4, Func Offset: 0xa4
	// Line 194, Address: 0x1d86e8, Func Offset: 0xa8
	// Line 195, Address: 0x1d86ec, Func Offset: 0xac
	// Line 202, Address: 0x1d86f0, Func Offset: 0xb0
	// Line 203, Address: 0x1d86fc, Func Offset: 0xbc
	// Line 204, Address: 0x1d870c, Func Offset: 0xcc
	// Line 208, Address: 0x1d871c, Func Offset: 0xdc
	// Line 210, Address: 0x1d8744, Func Offset: 0x104
	// Line 208, Address: 0x1d8748, Func Offset: 0x108
	// Line 210, Address: 0x1d874c, Func Offset: 0x10c
	// Line 212, Address: 0x1d8754, Func Offset: 0x114
	// Line 214, Address: 0x1d8760, Func Offset: 0x120
	// Line 216, Address: 0x1d8770, Func Offset: 0x130
	// Line 217, Address: 0x1d8778, Func Offset: 0x138
	// Line 216, Address: 0x1d8784, Func Offset: 0x144
	// Line 217, Address: 0x1d8798, Func Offset: 0x158
	// Line 218, Address: 0x1d87ac, Func Offset: 0x16c
	// Line 219, Address: 0x1d87c0, Func Offset: 0x180
	// Line 220, Address: 0x1d87d0, Func Offset: 0x190
	// Line 223, Address: 0x1d87e0, Func Offset: 0x1a0
	// Line 224, Address: 0x1d87f0, Func Offset: 0x1b0
	// Func End, Address: 0x1d8818, Func Offset: 0x1d8
}

// xPartitionVolume__FP13_tagPartitionP8_zVolumeiii
// Start address: 0x1d8820
void xPartitionVolume(_tagPartition* part, _zVolume* volume, int32 x_spaces, int32 y_spaces, int32 z_spaces)
{
	int32 x;
	int32 y;
	int32 z;
	float32 dz;
	float32 dy;
	float32 dx;
	_xBox* bb;
	_xBound* xb;
	// Line 130, Address: 0x1d8820, Func Offset: 0
	// Line 137, Address: 0x1d8858, Func Offset: 0x38
	// Line 140, Address: 0x1d8864, Func Offset: 0x44
	// Line 142, Address: 0x1d886c, Func Offset: 0x4c
	// Line 143, Address: 0x1d8884, Func Offset: 0x64
	// Line 148, Address: 0x1d889c, Func Offset: 0x7c
	// Line 146, Address: 0x1d88a4, Func Offset: 0x84
	// Line 147, Address: 0x1d88ac, Func Offset: 0x8c
	// Line 148, Address: 0x1d88b4, Func Offset: 0x94
	// Line 151, Address: 0x1d88b8, Func Offset: 0x98
	// Line 152, Address: 0x1d88bc, Func Offset: 0x9c
	// Line 153, Address: 0x1d88c0, Func Offset: 0xa0
	// Line 154, Address: 0x1d88c4, Func Offset: 0xa4
	// Line 146, Address: 0x1d88c8, Func Offset: 0xa8
	// Line 147, Address: 0x1d88cc, Func Offset: 0xac
	// Line 154, Address: 0x1d88d0, Func Offset: 0xb0
	// Line 155, Address: 0x1d88dc, Func Offset: 0xbc
	// Line 156, Address: 0x1d88ec, Func Offset: 0xcc
	// Line 160, Address: 0x1d88fc, Func Offset: 0xdc
	// Line 162, Address: 0x1d8924, Func Offset: 0x104
	// Line 160, Address: 0x1d8928, Func Offset: 0x108
	// Line 162, Address: 0x1d892c, Func Offset: 0x10c
	// Line 164, Address: 0x1d8934, Func Offset: 0x114
	// Line 166, Address: 0x1d8940, Func Offset: 0x120
	// Line 168, Address: 0x1d8950, Func Offset: 0x130
	// Line 169, Address: 0x1d8958, Func Offset: 0x138
	// Line 168, Address: 0x1d8964, Func Offset: 0x144
	// Line 169, Address: 0x1d8978, Func Offset: 0x158
	// Line 170, Address: 0x1d898c, Func Offset: 0x16c
	// Line 171, Address: 0x1d89a0, Func Offset: 0x180
	// Line 172, Address: 0x1d89b0, Func Offset: 0x190
	// Line 175, Address: 0x1d89c0, Func Offset: 0x1a0
	// Line 176, Address: 0x1d89d0, Func Offset: 0x1b0
	// Func End, Address: 0x1d89f8, Func Offset: 0x1d8
}

// xPartitionGetTrueIdx__FP13_tagPartitioniii
// Start address: 0x1d8a00
int32 xPartitionGetTrueIdx(_tagPartition* part, int32 x, int32 y, int32 z)
{
	int32 idx;
	// Line 120, Address: 0x1d8a00, Func Offset: 0
	// Line 121, Address: 0x1d8a08, Func Offset: 0x8
	// Line 120, Address: 0x1d8a0c, Func Offset: 0xc
	// Line 121, Address: 0x1d8a14, Func Offset: 0x14
	// Line 125, Address: 0x1d8a18, Func Offset: 0x18
	// Func End, Address: 0x1d8a20, Func Offset: 0x20
}

// xPartitionReset__Fv
// Start address: 0x1d8a20
void xPartitionReset()
{
	// Line 59, Address: 0x1d8a20, Func Offset: 0
	// Func End, Address: 0x1d8a28, Func Offset: 0x8
}

