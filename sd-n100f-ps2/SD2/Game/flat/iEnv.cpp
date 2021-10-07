typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwRGBA;
typedef enum RwStreamAccessType;
typedef struct RwBBox;
typedef struct RxPacket;
typedef struct RpCollSector;
typedef struct RxClusterDefinition;
typedef struct RpWorldSector;
typedef struct RwV3d;
typedef struct RpMeshHeader;
typedef enum RxClusterValid;
typedef struct RxPipelineCluster;
typedef struct RxPipelineRequiresCluster;
typedef struct RxPipeline;
typedef struct RwResEntry;
typedef struct RpWorld;
typedef struct RwPlane;
typedef struct rxReq;
typedef struct RwLinkList;
typedef struct RwTexture;
typedef struct RwRaster;
typedef struct RwStream;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RxClusterForcePresent;
typedef struct RwStreamMemory;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct RpVertexNormal;
typedef enum RxNodeDefEditable;
typedef struct RpMaterialList;
typedef struct RpMaterial;
typedef struct RxIoSpec;
typedef struct RwLLLink;
typedef struct rxHeapFreeBlock;
typedef struct RxNodeMethods;
typedef struct iEnv;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwStreamFile;
typedef struct RpPolygon;
typedef struct RxHeap;
typedef struct RpLight;
typedef struct RxCluster;
typedef struct RwMatrixTag;
typedef struct rxHeapBlockHeader;
typedef struct RwSurfaceProperties;
typedef struct RwChunkHeaderInfo;
typedef enum RxClusterValidityReq;
typedef enum rxEmbeddedPacketState;
typedef struct RxPipelineNode;
typedef enum RwCameraProjection;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNodeParam;
typedef struct RwObjectHasFrame;
typedef struct RwStreamCustom;
typedef struct RwRGBAReal;
typedef struct RwCamera;
typedef enum RwStreamType;
typedef struct RwV2d;
typedef enum RpWorldRenderOrder;
typedef enum RwTextureFilterMode;
typedef struct RwStreamUnion;
typedef struct RwObject;

typedef int32(*type_0)(RxNodeDefinition*);
typedef void(*type_1)(RxNodeDefinition*);
typedef int32(*type_2)(RxPipelineNode*);
typedef void(*type_3)(RxPipelineNode*);
typedef RpWorldSector*(*type_4)(RpWorldSector*);
typedef int32(*type_5)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_6)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_7)(RwResEntry*);
typedef RwCamera*(*type_10)(RwCamera*);
typedef RwCamera*(*type_11)(RwCamera*);
typedef int32(*type_15)(void*);
typedef uint32(*type_16)(void*, void*, uint32);
typedef int32(*type_17)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_18)(void*, void*, uint32);
typedef RwObjectHasFrame*(*type_19)(RwObjectHasFrame*);
typedef int32(*type_20)(void*, uint32);

typedef int8 type_8[32];
typedef int8 type_9[32];
typedef uint16 type_12[3];
typedef RwFrustumPlane type_13[6];
typedef RwV3d type_14[8];
typedef RwTexCoords* type_21[8];
typedef int8 type_22[64];
typedef RpLight* type_23[2];
typedef RxCluster type_24[1];
typedef RwFrame* type_25[2];
typedef uint32 type_26[4];

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
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

struct RpSector
{
	int32 type;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwChunkHeaderInfo
{
	uint32 type;
	uint32 length;
	uint32 version;
	uint32 buildNum;
	int32 isComplex;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float32 nearPlane;
	float32 farPlane;
	float32 fogPlane;
	float32 zScale;
	float32 zShift;
	uint16 renderFrame;
	uint16 pad;
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
};

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV2d
{
	float32 x;
	float32 y;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwStreamUnion
{
	union
	{
		RwStreamMemory memory;
		RwStreamFile file;
		RwStreamCustom custom;
	};
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

int32 sBeginDrawFX;
iEnv* lastEnv;
RwCamera* globalCamera;

void iEnvEndRenderFX(iEnv* env);
void iEnvRenderFX(iEnv* env);
int32 iEnvBeginRenderFX(iEnv* env);
void iEnvRender(iEnv* env);
void iEnvLightingBasics();
void iEnvDefaultLighting();
void iEnvFree(iEnv* env);
void iEnvLoad(iEnv* env, void* data, int32 dataType);
void iEnvSetBSP(iEnv* env, int32 envDataType, RpWorld* bsp);

// iEnvEndRenderFX__FP4iEnv
// Start address: 0x13c7c0
void iEnvEndRenderFX(iEnv* env)
{
	// Line 499, Address: 0x13c7c0, Func Offset: 0
	// Line 500, Address: 0x13c7d4, Func Offset: 0x14
	// Line 502, Address: 0x13c7d8, Func Offset: 0x18
	// Line 504, Address: 0x13c7fc, Func Offset: 0x3c
	// Line 505, Address: 0x13c804, Func Offset: 0x44
	// Line 506, Address: 0x13c810, Func Offset: 0x50
	// Line 509, Address: 0x13c814, Func Offset: 0x54
	// Func End, Address: 0x13c82c, Func Offset: 0x6c
}

// iEnvRenderFX__FP4iEnv
// Start address: 0x13c830
void iEnvRenderFX(iEnv* env)
{
	int32 varRENDERSTATEALPHAPRIMITIVEBUFFER;
	// Line 478, Address: 0x13c830, Func Offset: 0
	// Line 479, Address: 0x13c83c, Func Offset: 0xc
	// Line 482, Address: 0x13c840, Func Offset: 0x10
	// Line 484, Address: 0x13c858, Func Offset: 0x28
	// Line 485, Address: 0x13c860, Func Offset: 0x30
	// Line 486, Address: 0x13c86c, Func Offset: 0x3c
	// Line 488, Address: 0x13c878, Func Offset: 0x48
	// Line 492, Address: 0x13c884, Func Offset: 0x54
	// Line 494, Address: 0x13c88c, Func Offset: 0x5c
	// Line 496, Address: 0x13c894, Func Offset: 0x64
	// Func End, Address: 0x13c8a4, Func Offset: 0x74
}

// iEnvBeginRenderFX__FP4iEnv
// Start address: 0x13c8b0
int32 iEnvBeginRenderFX(iEnv* env)
{
	// Line 459, Address: 0x13c8b0, Func Offset: 0
	// Line 461, Address: 0x13c8c4, Func Offset: 0x14
	// Line 463, Address: 0x13c8c8, Func Offset: 0x18
	// Line 467, Address: 0x13c8ec, Func Offset: 0x3c
	// Line 468, Address: 0x13c8f4, Func Offset: 0x44
	// Line 469, Address: 0x13c900, Func Offset: 0x50
	// Line 473, Address: 0x13c908, Func Offset: 0x58
	// Line 472, Address: 0x13c918, Func Offset: 0x68
	// Line 473, Address: 0x13c91c, Func Offset: 0x6c
	// Func End, Address: 0x13c924, Func Offset: 0x74
}

// iEnvRender__FP4iEnv
// Start address: 0x13c930
void iEnvRender(iEnv* env)
{
	int32 varRENDERSTATEALPHAPRIMITIVEBUFFER;
	// Line 418, Address: 0x13c930, Func Offset: 0
	// Line 419, Address: 0x13c940, Func Offset: 0x10
	// Line 439, Address: 0x13c948, Func Offset: 0x18
	// Line 440, Address: 0x13c954, Func Offset: 0x24
	// Line 442, Address: 0x13c960, Func Offset: 0x30
	// Line 447, Address: 0x13c96c, Func Offset: 0x3c
	// Line 452, Address: 0x13c974, Func Offset: 0x44
	// Line 454, Address: 0x13c97c, Func Offset: 0x4c
	// Line 456, Address: 0x13c980, Func Offset: 0x50
	// Func End, Address: 0x13c990, Func Offset: 0x60
}

// iEnvLightingBasics__FP4iEnvP10p2EnvAsset
// Start address: 0x13c990
void iEnvLightingBasics()
{
	// Line 413, Address: 0x13c990, Func Offset: 0
	// Func End, Address: 0x13c998, Func Offset: 0x8
}

// iEnvDefaultLighting__FP4iEnv
// Start address: 0x13c9a0
void iEnvDefaultLighting()
{
	// Line 383, Address: 0x13c9a0, Func Offset: 0
	// Func End, Address: 0x13c9a8, Func Offset: 0x8
}

// iEnvFree__FP4iEnv
// Start address: 0x13c9b0
void iEnvFree(iEnv* env)
{
	// Line 260, Address: 0x13c9b0, Func Offset: 0
	// Line 289, Address: 0x13c9bc, Func Offset: 0xc
	// Line 291, Address: 0x13c9c4, Func Offset: 0x14
	// Line 296, Address: 0x13c9cc, Func Offset: 0x1c
	// Line 298, Address: 0x13c9d0, Func Offset: 0x20
	// Line 302, Address: 0x13c9dc, Func Offset: 0x2c
	// Line 307, Address: 0x13c9e4, Func Offset: 0x34
	// Line 310, Address: 0x13c9e8, Func Offset: 0x38
	// Line 314, Address: 0x13c9f4, Func Offset: 0x44
	// Line 319, Address: 0x13c9fc, Func Offset: 0x4c
	// Line 321, Address: 0x13ca00, Func Offset: 0x50
	// Func End, Address: 0x13ca10, Func Offset: 0x60
}

// iEnvLoad__FP4iEnvPCvUii
// Start address: 0x13ca10
void iEnvLoad(iEnv* env, void* data, int32 dataType)
{
	// Line 230, Address: 0x13ca10, Func Offset: 0
	// Line 244, Address: 0x13ca2c, Func Offset: 0x1c
	// Line 245, Address: 0x13ca34, Func Offset: 0x24
	// Line 247, Address: 0x13ca3c, Func Offset: 0x2c
	// Line 253, Address: 0x13ca48, Func Offset: 0x38
	// Func End, Address: 0x13ca5c, Func Offset: 0x4c
}

// iEnvSetBSP__FP4iEnviP7RpWorld
// Start address: 0x13ca60
void iEnvSetBSP(iEnv* env, int32 envDataType, RpWorld* bsp)
{
	RwSurfaceProperties surf_props;
	// Line 99, Address: 0x13ca60, Func Offset: 0
	// Line 101, Address: 0x13ca64, Func Offset: 0x4
	// Line 107, Address: 0x13ca6c, Func Offset: 0xc
	// Line 108, Address: 0x13ca74, Func Offset: 0x14
	// Line 112, Address: 0x13ca80, Func Offset: 0x20
	// Line 113, Address: 0x13ca88, Func Offset: 0x28
	// Line 117, Address: 0x13ca90, Func Offset: 0x30
	// Line 118, Address: 0x13ca98, Func Offset: 0x38
	// Line 121, Address: 0x13caa0, Func Offset: 0x40
	// Line 128, Address: 0x13caa4, Func Offset: 0x44
	// Line 129, Address: 0x13caac, Func Offset: 0x4c
	// Line 131, Address: 0x13cab0, Func Offset: 0x50
	// Line 176, Address: 0x13cac0, Func Offset: 0x60
	// Func End, Address: 0x13cacc, Func Offset: 0x6c
}

