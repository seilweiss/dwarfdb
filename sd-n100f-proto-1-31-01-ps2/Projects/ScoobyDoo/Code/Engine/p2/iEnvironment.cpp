typedef struct _RxClusterUnion;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RxClusterDefinition;
typedef struct _rxHeapBlockHeader;
typedef struct _RxCluster;
typedef struct _RwLinkList;
typedef struct _RwStreamMemory;
typedef struct _RwStream;
typedef struct _RpCollSector;
typedef struct _RpMeshHeader;
typedef struct _RxPipelineCluster;
typedef struct _RxPipeline;
typedef struct _rxReq;
typedef struct _tagiEnvRuntime;
typedef struct _RwTexCoords;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _RpWorld;
typedef struct _RwFrame;
typedef struct _RxClusterRef;
typedef struct _RxPacket;
typedef enum _RxClusterValidityReq;
typedef struct _RwRaster;
typedef struct _RwTexDictionary;
typedef enum _RwTextureAddressMode;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rwResEntryTag;
typedef struct _RwStreamFile;
typedef struct _RpVertexNormal;
typedef struct _RxHeap;
typedef struct _rxHeapFreeBlock;
typedef struct _RwMatrix;
typedef struct tagXStreamMDSDirectory;
typedef struct _RxPipelineNodeParam;
typedef struct _RwV3d;
typedef struct _RpSector;
typedef enum _rxEmbeddedPacketState;
typedef enum _rpWorldRenderOrder;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct _RwSurfaceProperties;
typedef struct _RpPolygon;
typedef struct _RpLight;
typedef struct _RwObjectHasFrame;
typedef struct _RxPipelineRequiresCluster;
typedef enum _RwTextureFilterMode;
typedef struct _RpWorldSector;
typedef struct XStreamHeader;
typedef struct Vector3D;
typedef struct _RwObject;
typedef struct _RwRGBAReal;
typedef struct _RwStreamCustom;
typedef struct tagXStreamDirectoryEntry;
typedef struct _RwLLLink;
typedef enum _RwStreamType;
typedef struct _RpMaterialList;
typedef struct _RpMaterial;
typedef struct _RxIoSpec;
typedef struct _RwRGBA;
typedef struct _RxNodeMethods;
typedef struct _RwStreamUnion;
typedef struct _RwTexture;
typedef enum _RxClusterForcePresent;
typedef enum _RwStreamAccessType;
typedef struct _RwBBox;
typedef enum _RxNodeDefEditable;

typedef void(*type_4)(_rwResEntryTag*);
typedef int32(*type_5)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_7)(_RxNodeDefinition*);
typedef int32(*type_8)(void*);
typedef void(*type_9)(_RxNodeDefinition*);
typedef uint32(*type_10)(void*, void*, uint32);
typedef int32(*type_13)(_RxPipelineNode*);
typedef void(*type_14)(_RxPipelineNode*);
typedef _RwObjectHasFrame*(*type_15)(_RwObjectHasFrame*);
typedef int32(*type_16)(void*, void*, uint32);
typedef _RpWorldSector*(*type_17)(_RpWorldSector*);
typedef int32(*type_18)(_RxPipelineNode*, _RxPipeline*);
typedef int32(*type_19)(void*, uint32);
typedef uint32(*type_20)(_RxPipelineNode*, uint32, uint32, void*);

typedef int8 type_0[128];
typedef int8 type_1[32];
typedef int8 type_2[32];
typedef int8 type_3[256];
typedef tagXStreamDirectoryEntry type_6[1000];
typedef uint16 type_11[3];
typedef uint32 type_12[4];
typedef int8 type_21[2048];
typedef _RxCluster type_22[1];

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

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
};

struct _RwStream
{
	_RwStreamType type;
	_RwStreamAccessType accessType;
	int32 position;
	_RwStreamUnion Type;
	int32 rwOwned;
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _RxPipelineCluster
{
	_RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct _rxReq
{
};

struct _tagiEnvRuntime
{
	_RpWorld* world;
	Vector3D world_origin;
	_RwTexDictionary* tex_dict;
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

struct _RwFrame
{
	_RwObject object;
	_RwMatrix modelling;
	_RwMatrix ltm;
	_RwLLLink inDirtyListLink;
	_RwLinkList objectList;
	_RwFrame* child;
	_RwFrame* next;
	_RwFrame* root;
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct _RwStreamFile
{
	void* fpFile;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _rxHeapFreeBlock
{
	uint32 size;
	_rxHeapBlockHeader* ptr;
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

struct _RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RpSector
{
	int32 type;
};

enum _rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _RpLight
{
	_RwObjectHasFrame object;
	float32 radius;
	_RwRGBAReal color;
	float32 minusCosAngle;
	_RwLinkList WorldSectorsInLight;
	_RwLLLink inWorld;
	uint16 lightFrame;
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
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

struct Vector3D
{
	float32 x;
	float32 y;
	float32 z;
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
};

struct tagXStreamDirectoryEntry
{
	uint32 id;
	uint32 type;
	uint32 offset;
	uint32 length;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

enum _RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _RwStreamUnion
{
	union
	{
		_RwStreamMemory memory;
		_RwStreamFile file;
		_RwStreamCustom custom;
	};
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum _RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
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

_RpLight* mDefaultLight;
_RwFrame* mDefaultLightFrame;
Vector3D* gBSPOffset;
int8 vAssertBuf2[128];
XStreamHeader currentHeader;

void iEnvDraw(_tagiEnvRuntime* env);
int32 iEnvLoad(_tagiEnvRuntime* env, int8* filename);
int32 EnvRWLoadBSP(_tagiEnvRuntime* env, int8* filename);
int32 EnvRwLoadTextureDictionary(_tagiEnvRuntime* env, int8* env_filename);

// iEnvDraw__FP15_tagiEnvRuntime
// Start address: 0x39c6a0
void iEnvDraw(_tagiEnvRuntime* env)
{
	// Line 285, Address: 0x39c6a0, Func Offset: 0
	// Line 286, Address: 0x39c6b0, Func Offset: 0x10
	// Line 290, Address: 0x39c750, Func Offset: 0xb0
	// Line 291, Address: 0x39c760, Func Offset: 0xc0
	// Line 295, Address: 0x39c770, Func Offset: 0xd0
	// Line 297, Address: 0x39c77c, Func Offset: 0xdc
	// Func End, Address: 0x39c790, Func Offset: 0xf0
}

// iEnvLoad__FP15_tagiEnvRuntimePc
// Start address: 0x39c790
int32 iEnvLoad(_tagiEnvRuntime* env, int8* filename)
{
	// Line 274, Address: 0x39c790, Func Offset: 0
	// Line 275, Address: 0x39c7a8, Func Offset: 0x18
	// Line 278, Address: 0x39c848, Func Offset: 0xb8
	// Line 279, Address: 0x39c858, Func Offset: 0xc8
	// Func End, Address: 0x39c870, Func Offset: 0xe0
}

// EnvRWLoadBSP__FP15_tagiEnvRuntimePc
// Start address: 0x39c870
int32 EnvRWLoadBSP(_tagiEnvRuntime* env, int8* filename)
{
	uint32 f;
	_RwV3d* dir_z;
	_RwMatrix* m;
	_RwSurfaceProperties surf_props;
	_RwStream* stream;
	_RwV3d* offset;
	_RwRGBAReal rgb2;
	_RwRGBAReal rgb;
	// Line 88, Address: 0x39c870, Func Offset: 0
	// Line 89, Address: 0x39c88c, Func Offset: 0x1c
	// Line 90, Address: 0x39c8a0, Func Offset: 0x30
	// Line 97, Address: 0x39c8b4, Func Offset: 0x44
	// Line 101, Address: 0x39c8c4, Func Offset: 0x54
	// Line 102, Address: 0x39c8dc, Func Offset: 0x6c
	// Line 104, Address: 0x39c8e4, Func Offset: 0x74
	// Line 105, Address: 0x39c8f8, Func Offset: 0x88
	// Line 106, Address: 0x39c908, Func Offset: 0x98
	// Line 109, Address: 0x39c914, Func Offset: 0xa4
	// Line 111, Address: 0x39c934, Func Offset: 0xc4
	// Line 112, Address: 0x39c948, Func Offset: 0xd8
	// Line 113, Address: 0x39c958, Func Offset: 0xe8
	// Line 117, Address: 0x39c964, Func Offset: 0xf4
	// Line 118, Address: 0x39c974, Func Offset: 0x104
	// Line 120, Address: 0x39c980, Func Offset: 0x110
	// Line 121, Address: 0x39c994, Func Offset: 0x124
	// Line 122, Address: 0x39c9a4, Func Offset: 0x134
	// Line 127, Address: 0x39c9b0, Func Offset: 0x140
	// Line 131, Address: 0x39c9c0, Func Offset: 0x150
	// Line 132, Address: 0x39c9cc, Func Offset: 0x15c
	// Line 133, Address: 0x39c9d4, Func Offset: 0x164
	// Line 134, Address: 0x39c9dc, Func Offset: 0x16c
	// Line 138, Address: 0x39c9e4, Func Offset: 0x174
	// Line 142, Address: 0x39c9ec, Func Offset: 0x17c
	// Line 143, Address: 0x39c9f4, Func Offset: 0x184
	// Line 144, Address: 0x39c9fc, Func Offset: 0x18c
	// Line 145, Address: 0x39ca00, Func Offset: 0x190
	// Line 150, Address: 0x39ca10, Func Offset: 0x1a0
	// Line 151, Address: 0x39ca20, Func Offset: 0x1b0
	// Line 152, Address: 0x39ca2c, Func Offset: 0x1bc
	// Line 155, Address: 0x39ca38, Func Offset: 0x1c8
	// Line 156, Address: 0x39ca44, Func Offset: 0x1d4
	// Line 157, Address: 0x39ca50, Func Offset: 0x1e0
	// Line 161, Address: 0x39ca5c, Func Offset: 0x1ec
	// Line 162, Address: 0x39ca6c, Func Offset: 0x1fc
	// Line 165, Address: 0x39ca7c, Func Offset: 0x20c
	// Line 166, Address: 0x39ca8c, Func Offset: 0x21c
	// Line 167, Address: 0x39ca98, Func Offset: 0x228
	// Line 168, Address: 0x39ca9c, Func Offset: 0x22c
	// Line 169, Address: 0x39caa4, Func Offset: 0x234
	// Line 170, Address: 0x39caa8, Func Offset: 0x238
	// Line 171, Address: 0x39cab4, Func Offset: 0x244
	// Line 173, Address: 0x39cac0, Func Offset: 0x250
	// Line 174, Address: 0x39cad0, Func Offset: 0x260
	// Line 179, Address: 0x39cae0, Func Offset: 0x270
	// Line 180, Address: 0x39caf0, Func Offset: 0x280
	// Line 181, Address: 0x39cafc, Func Offset: 0x28c
	// Line 184, Address: 0x39cb08, Func Offset: 0x298
	// Line 185, Address: 0x39cb14, Func Offset: 0x2a4
	// Line 186, Address: 0x39cb20, Func Offset: 0x2b0
	// Line 190, Address: 0x39cb2c, Func Offset: 0x2bc
	// Line 191, Address: 0x39cb3c, Func Offset: 0x2cc
	// Line 192, Address: 0x39cb4c, Func Offset: 0x2dc
	// Line 193, Address: 0x39cb5c, Func Offset: 0x2ec
	// Line 231, Address: 0x39cb6c, Func Offset: 0x2fc
	// Line 232, Address: 0x39cb7c, Func Offset: 0x30c
	// Line 233, Address: 0x39cb88, Func Offset: 0x318
	// Line 235, Address: 0x39cba0, Func Offset: 0x330
	// Line 237, Address: 0x39cbb0, Func Offset: 0x340
	// Line 238, Address: 0x39cbbc, Func Offset: 0x34c
	// Line 240, Address: 0x39cbd4, Func Offset: 0x364
	// Line 242, Address: 0x39cbe4, Func Offset: 0x374
	// Line 243, Address: 0x39cbf0, Func Offset: 0x380
	// Line 245, Address: 0x39cc08, Func Offset: 0x398
	// Line 247, Address: 0x39cc18, Func Offset: 0x3a8
	// Line 248, Address: 0x39cc24, Func Offset: 0x3b4
	// Line 250, Address: 0x39cc3c, Func Offset: 0x3cc
	// Line 252, Address: 0x39cc4c, Func Offset: 0x3dc
	// Line 253, Address: 0x39cc58, Func Offset: 0x3e8
	// Line 255, Address: 0x39cc70, Func Offset: 0x400
	// Line 257, Address: 0x39cc80, Func Offset: 0x410
	// Line 258, Address: 0x39cc8c, Func Offset: 0x41c
	// Line 260, Address: 0x39cca4, Func Offset: 0x434
	// Line 266, Address: 0x39ccb4, Func Offset: 0x444
	// Line 267, Address: 0x39ccb8, Func Offset: 0x448
	// Func End, Address: 0x39ccd4, Func Offset: 0x464
}

// EnvRwLoadTextureDictionary__FP15_tagiEnvRuntimePc
// Start address: 0x39cce0
int32 EnvRwLoadTextureDictionary(_tagiEnvRuntime* env, int8* env_filename)
{
	_RwTexDictionary* oldTexDict;
	int32 len;
	int8 filename[256];
	_RwStream* stream;
	// Line 34, Address: 0x39cce0, Func Offset: 0
	// Line 42, Address: 0x39ccf4, Func Offset: 0x14
	// Line 43, Address: 0x39cd00, Func Offset: 0x20
	// Line 44, Address: 0x39cd0c, Func Offset: 0x2c
	// Line 47, Address: 0x39cd28, Func Offset: 0x48
	// Line 48, Address: 0x39cd40, Func Offset: 0x60
	// Line 50, Address: 0x39cd48, Func Offset: 0x68
	// Line 51, Address: 0x39cd5c, Func Offset: 0x7c
	// Line 55, Address: 0x39cd68, Func Offset: 0x88
	// Line 57, Address: 0x39cd88, Func Offset: 0xa8
	// Line 58, Address: 0x39cd9c, Func Offset: 0xbc
	// Line 61, Address: 0x39cda8, Func Offset: 0xc8
	// Line 62, Address: 0x39cdb8, Func Offset: 0xd8
	// Line 63, Address: 0x39cdc8, Func Offset: 0xe8
	// Line 65, Address: 0x39cdd4, Func Offset: 0xf4
	// Line 66, Address: 0x39cde8, Func Offset: 0x108
	// Line 71, Address: 0x39cdf4, Func Offset: 0x114
	// Line 72, Address: 0x39ce00, Func Offset: 0x120
	// Line 74, Address: 0x39ce14, Func Offset: 0x134
	// Line 75, Address: 0x39ce20, Func Offset: 0x140
	// Line 76, Address: 0x39ce34, Func Offset: 0x154
	// Line 79, Address: 0x39ce40, Func Offset: 0x160
	// Line 81, Address: 0x39ce4c, Func Offset: 0x16c
	// Line 82, Address: 0x39ce50, Func Offset: 0x170
	// Func End, Address: 0x39ce68, Func Offset: 0x188
}

