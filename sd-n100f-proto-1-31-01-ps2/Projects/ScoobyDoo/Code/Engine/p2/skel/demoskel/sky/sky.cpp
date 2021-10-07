typedef struct _RpMeshHeader;
typedef struct _RxClusterRef;
typedef struct _RxPacket;
typedef struct _RxPipeline;
typedef struct _RwRaster;
typedef struct _RsPadButtonStatus;
typedef enum _RxClusterValidityReq;
typedef struct Platform;
typedef struct _anon0;
typedef struct _RxClusterDefinition;
typedef struct RWInfo;
typedef struct _RxOutputSpec;
typedef struct _RxPipelineNode;
typedef struct _rxHeapSuperBlockDescriptor;
typedef struct _rwResEntryTag;
typedef struct _RxHeap;
typedef struct AppCamera;
typedef struct _rxHeapBlockHeader;
typedef struct RwSkel;
typedef struct _rxHeapFreeBlock;
typedef struct _RxPipelineNodeTopSortData;
typedef struct _RpMaterial;
typedef struct RsMouse;
typedef struct _RpVertexNormal;
typedef struct _RwV2d;
typedef struct _RwTexture;
typedef enum _RwTextureFilterMode;
typedef struct _RxPipelineNodeParam;
typedef struct _RxPipelineCluster;
typedef enum _rxEmbeddedPacketState;
typedef struct PsMouse;
typedef struct _RxNodeDefinition;
typedef enum _RxClusterValid;
typedef struct Ps;
typedef struct _RpSector;
typedef struct _RwSurfaceProperties;
typedef enum _RwCameraProjection;
typedef enum _rpWorldRenderOrder;
typedef struct _RwObjectHasFrame;
typedef struct _anon1;
typedef struct _RwV3d;
typedef struct _RpPolygon;
typedef struct _RxPipelineRequiresCluster;
typedef struct _RwTexDictionary;
typedef struct _RpWorldSector;
typedef struct _rxReq;
typedef struct _RwObject;
typedef struct _RpWorld;
typedef struct _RwMemoryFunctions;
typedef struct _RpCollSector;
typedef struct _RwCamera;
typedef struct Camera;
typedef struct _RwBBox;
typedef struct _RwLLLink;
typedef struct _RxIoSpec;
typedef struct _RpMaterialList;
typedef enum _RwVideoModeFlag;
typedef struct _RwRGBA;
typedef struct _RxNodeMethods;
typedef enum _RxClusterForcePresent;
typedef struct _RwFrustumPlane;
typedef struct _RwMatrix;
typedef enum _RxNodeDefEditable;
typedef struct _RwTexCoords;
typedef struct _RxClusterUnion;
typedef enum _RwDebugType;
typedef enum _RwTextureAddressMode;
typedef struct _RwVideoMode;
typedef struct _RxCluster;
typedef struct _RwPlane;
typedef struct _RwLinkList;

typedef void(*type_0)(_RwDebugType, int8*);
typedef void(*type_1)(_rwResEntryTag*);
typedef int32(*type_2)(_RxPipelineNode*, _RxPipelineNodeParam*);
typedef int32(*type_3)(_RxNodeDefinition*);
typedef void(*type_5)(_RxNodeDefinition*);
typedef void*(*type_8)(void*, uint32);
typedef int32(*type_10)(_RxPipelineNode*);
typedef void(*type_11)(_RxPipelineNode*);
typedef _RwObjectHasFrame*(*type_12)(_RwObjectHasFrame*);
typedef void*(*type_14)(uint32, uint32);
typedef int32(*type_15)(_RxPipelineNode*, _RxPipeline*);
typedef _RpWorldSector*(*type_16)(_RpWorldSector*);
typedef uint32(*type_18)(_RxPipelineNode*, uint32, uint32, void*);
typedef void*(*type_19)(uint32);
typedef int32(*type_20)(int32);
typedef void(*type_21)(void*);
typedef void*(*type_23)(void*, uint32);
typedef _RwCamera*(*type_24)(_RwCamera*);
typedef void*(*type_27)(uint32, uint32);
typedef _RwCamera*(*type_28)(_RwCamera*);
typedef void(*type_29)(_RwDebugType, int8*);
typedef void(*type_34)(void*);
typedef void*(*type_35)(uint32);

typedef _RwFrustumPlane type_4[6];
typedef _RwV3d type_6[8];
typedef uint32 type_7[4096];
typedef uint32 type_9[4];
typedef uint16 type_13[3];
typedef uint8 type_17[32];
typedef _RxCluster type_22[1];
typedef int8 type_25[32];
typedef int8 type_26[32];
typedef int8 type_30[256];
typedef <unknown fundamental type (0xa510)> type_31[16];
typedef int8 type_32[256];
typedef int8 type_33[256];
typedef int8 type_36[1];

struct _RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _RsPadButtonStatus
{
	int32 padID;
	uint32 padButtons;
};

enum _RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct Platform
{
	int32 quit;

	void* __dt();
};

struct _anon0
{
};

struct _RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RWInfo
{
	AppCamera* m_camera;
	RwSkel* m_skel;
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

struct AppCamera : Camera
{
	_RwRaster* backdrop;
	float32 cameraDistance;
	_RwV2d offset;
	_RpWorld* world;
};

struct _rxHeapBlockHeader
{
	_rxHeapBlockHeader* prev;
	_rxHeapBlockHeader* next;
	uint32 size;
	_rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RwSkel
{
	int8* appName;
	int32 maximumWidth;
	int32 maximumHeight;
	RsMouse* mouse;
	Platform* ps;
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

struct _RpMaterial
{
	_RwTexture* texture;
	_RwRGBA color;
	_RxPipeline* pipeline;
	_RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RsMouse
{
	_RwV2d pos;
	_RwRaster* raster;
	PsMouse* psmouse;
	int32 draw;
};

struct _RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _RwV2d
{
	float32 x;
	float32 y;
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

struct PsMouse
{
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

struct Ps : Platform
{
	int32 fullScreen;
	_RwV2d lastMousePos;
	int32 validDelta;

	int32 NativeTextureSupport();
	int32 InstallFileSystem();
	_RwMemoryFunctions* GetMemoryFunctions();
	int32 SelectDevice();
	int8 PathGetSeparator();
	void PathnameDestroy(int8* pathname);
	int8* PathnameCreate(int8* pathname);
	uint32 Timer();
	void(*)(_RwDebugType, int8*) GetDebugMessageHandler();
	void WarningMessage(int8* message);
	void ErrorMessage(int8* message);
	void WindowSetText();
	void* __dt();
};

struct _RpSector
{
	int32 type;
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

enum _rpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwObjectHasFrame
{
	_RwObject object;
	_RwLLLink lFrame;
	_RwObjectHasFrame*(*sync)(_RwObjectHasFrame*);
};

struct _anon1
{
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

struct _RwTexDictionary
{
	_RwObject object;
	_RwLinkList texturesInDict;
	_RwLLLink lInInstance;
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

struct _rxReq
{
};

struct _RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _RwMemoryFunctions
{
	void*(*rwmalloc)(uint32);
	void(*rwfree)(void*);
	void*(*rwrealloc)(void*, uint32);
	void*(*rwcalloc)(uint32, uint32);
};

struct _RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct Camera
{
	_RwCamera* camera;
	int32 m_Preset;
	float32 m_TetherLength;
	float32 m_TetherHeightPerc;
};

struct _RwBBox
{
	_RwV3d sup;
	_RwV3d inf;
};

struct _RwLLLink
{
	_RwLLLink* next;
	_RwLLLink* prev;
};

struct _RxIoSpec
{
	uint32 numClustersOfInterest;
	_RxClusterRef* clustersOfInterest;
	_RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	_RxOutputSpec* outputs;
};

struct _RpMaterialList
{
	_RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

enum _RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODEFSAA0 = 0x8,
	rwVIDEOMODEFSAA1 = 0x10,
	rwVIDEOMODEforceEnumSize = 0x7fffffff,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
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

enum _RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwFrustumPlane
{
	_RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

enum _RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _RwTexCoords
{
	float32 u;
	float32 v;
};

struct _RxClusterUnion
{
	union
	{
		_RxClusterDefinition* clusterDef;
		_RxPipelineCluster* clusterRef;
	};
};

enum _RwDebugType
{
	rwNADEBUGTYPE,
	rwDEBUGASSERT,
	rwDEBUGERROR,
	rwDEBUGMESSAGE,
	rwDEBUGTRACE,
	rwDEBUGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct _RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	_RwVideoModeFlag flags;
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

struct _RwPlane
{
	_RwV3d normal;
	float32 distance;
};

struct _RwLinkList
{
	_RwLLLink link;
};

uint32 paddata;
uint8 rdata[32];
<unknown fundamental type (0xa510)> pad_dma_buf[16];
Ps* PsSky;
RwSkel* Skel;
ulong32 gTimerValue;
ulong32 sweHighCount;
int32 skyTimerHandlerHid;
int32 keybHandle;
_RwMemoryFunctions bugWorkAround;
_anon0 __vt__2Ps;
RWInfo gRWInfo;
_anon1 __vt__8Platform;
int32(*TimerHandler)(int32);
void*(*private_calloc)(uint32, uint32);
void*(*private_realloc)(void*, uint32);
void(*private_free)(void*);
void*(*private_malloc)(uint32);
uint32 ourGlobals[4096];
void(*DebugMessageHandler)(_RwDebugType, int8*);

int32 p2RenderWareInit();
int32 NativeTextureSupport();
int32 InstallFileSystem();
_RwMemoryFunctions* GetMemoryFunctions();
void* private_calloc(uint32 a, uint32 b);
void* private_realloc(void* oldMem, uint32 newSize);
void private_free(void* alignedMem);
void* private_malloc(uint32 s);
int32 SelectDevice();
void _handlePad();
uint32 remapButtons(int32 sceButtons);
int32 SkyPadOpen();
int8 PathGetSeparator();
void PathnameDestroy(int8* pathname);
int8* PathnameCreate(int8* pathname);
uint32 Timer();
int32 TimerHandler(int32 ca);
void(*)(_RwDebugType, int8*) GetDebugMessageHandler();
void DebugMessageHandler(int8* str);
void CameraShowRaster(_RwCamera* camera);
void WarningMessage(int8* message);
void ErrorMessage(int8* message);
void WindowSetText();
void* __dt();

// p2RenderWareInit__Fv
// Start address: 0x203d40
int32 p2RenderWareInit()
{
	// Line 738, Address: 0x203d40, Func Offset: 0
	// Line 743, Address: 0x203d48, Func Offset: 0x8
	// Line 746, Address: 0x203d64, Func Offset: 0x24
	// Line 747, Address: 0x203d6c, Func Offset: 0x2c
	// Line 748, Address: 0x203d74, Func Offset: 0x34
	// Line 749, Address: 0x203d7c, Func Offset: 0x3c
	// Line 750, Address: 0x203d84, Func Offset: 0x44
	// Line 751, Address: 0x203d90, Func Offset: 0x50
	// Line 753, Address: 0x203d9c, Func Offset: 0x5c
	// Line 754, Address: 0x203da8, Func Offset: 0x68
	// Line 755, Address: 0x203db4, Func Offset: 0x74
	// Line 757, Address: 0x203dc0, Func Offset: 0x80
	// Line 758, Address: 0x203df4, Func Offset: 0xb4
	// Line 759, Address: 0x203e00, Func Offset: 0xc0
	// Line 761, Address: 0x203e0c, Func Offset: 0xcc
	// Line 764, Address: 0x203e18, Func Offset: 0xd8
	// Line 765, Address: 0x203e38, Func Offset: 0xf8
	// Line 768, Address: 0x203e44, Func Offset: 0x104
	// Line 772, Address: 0x203e50, Func Offset: 0x110
	// Line 777, Address: 0x203e68, Func Offset: 0x128
	// Line 778, Address: 0x203e74, Func Offset: 0x134
	// Line 784, Address: 0x203e88, Func Offset: 0x148
	// Line 789, Address: 0x203e94, Func Offset: 0x154
	// Func End, Address: 0x203ea4, Func Offset: 0x164
}

// NativeTextureSupport__2PsFv
// Start address: 0x203f10
int32 Ps::NativeTextureSupport()
{
	// Line 730, Address: 0x203f10, Func Offset: 0
	// Line 731, Address: 0x203f14, Func Offset: 0x4
	// Func End, Address: 0x203f1c, Func Offset: 0xc
}

// InstallFileSystem__2PsFv
// Start address: 0x203f20
int32 Ps::InstallFileSystem()
{
	// Line 715, Address: 0x203f20, Func Offset: 0
	// Line 716, Address: 0x203f28, Func Offset: 0x8
	// Line 719, Address: 0x203f38, Func Offset: 0x18
	// Line 720, Address: 0x203f60, Func Offset: 0x40
	// Line 723, Address: 0x203f6c, Func Offset: 0x4c
	// Line 724, Address: 0x203f70, Func Offset: 0x50
	// Func End, Address: 0x203f80, Func Offset: 0x60
}

// GetMemoryFunctions__2PsFv
// Start address: 0x203f80
_RwMemoryFunctions* Ps::GetMemoryFunctions()
{
	// Line 702, Address: 0x203f80, Func Offset: 0
	// Line 703, Address: 0x203f90, Func Offset: 0x10
	// Line 704, Address: 0x203fa0, Func Offset: 0x20
	// Line 705, Address: 0x203fb0, Func Offset: 0x30
	// Line 709, Address: 0x203fc0, Func Offset: 0x40
	// Line 710, Address: 0x203fc4, Func Offset: 0x44
	// Func End, Address: 0x203fcc, Func Offset: 0x4c
}

// private_calloc__FUiUi
// Start address: 0x203fd0
void* private_calloc(uint32 a, uint32 b)
{
	void* newMem;
	uint32 realSize;
	// Line 681, Address: 0x203fd0, Func Offset: 0
	// Line 683, Address: 0x203fe0, Func Offset: 0x10
	// Line 686, Address: 0x203fe4, Func Offset: 0x14
	// Line 687, Address: 0x204018, Func Offset: 0x48
	// Line 689, Address: 0x204020, Func Offset: 0x50
	// Line 692, Address: 0x204034, Func Offset: 0x64
	// Line 693, Address: 0x204038, Func Offset: 0x68
	// Func End, Address: 0x204050, Func Offset: 0x80
}

// private_realloc__FPvUi
// Start address: 0x204050
void* private_realloc(void* oldMem, uint32 newSize)
{
	uint32 oldSize;
	void* newMem;
	// Line 655, Address: 0x204050, Func Offset: 0
	// Line 659, Address: 0x20406c, Func Offset: 0x1c
	// Line 660, Address: 0x2040a0, Func Offset: 0x50
	// Line 662, Address: 0x2040a8, Func Offset: 0x58
	// Line 664, Address: 0x2040ac, Func Offset: 0x5c
	// Line 666, Address: 0x2040b8, Func Offset: 0x68
	// Line 667, Address: 0x2040c8, Func Offset: 0x78
	// Line 670, Address: 0x2040d0, Func Offset: 0x80
	// Line 673, Address: 0x2040e4, Func Offset: 0x94
	// Line 676, Address: 0x2040f0, Func Offset: 0xa0
	// Line 677, Address: 0x2040f4, Func Offset: 0xa4
	// Func End, Address: 0x204110, Func Offset: 0xc0
}

// private_free__FPv
// Start address: 0x204110
void private_free(void* alignedMem)
{
	// Line 648, Address: 0x204110, Func Offset: 0
	// Line 650, Address: 0x204118, Func Offset: 0x8
	// Line 651, Address: 0x204124, Func Offset: 0x14
	// Func End, Address: 0x204134, Func Offset: 0x24
}

// private_malloc__FUi
// Start address: 0x204140
void* private_malloc(uint32 s)
{
	void* alignedMem;
	void* newMem;
	// Line 625, Address: 0x204140, Func Offset: 0
	// Line 629, Address: 0x204150, Func Offset: 0x10
	// Line 630, Address: 0x20415c, Func Offset: 0x1c
	// Line 632, Address: 0x204164, Func Offset: 0x24
	// Line 635, Address: 0x204170, Func Offset: 0x30
	// Line 636, Address: 0x204174, Func Offset: 0x34
	// Line 637, Address: 0x204178, Func Offset: 0x38
	// Line 640, Address: 0x204180, Func Offset: 0x40
	// Line 643, Address: 0x204184, Func Offset: 0x44
	// Line 644, Address: 0x204188, Func Offset: 0x48
	// Func End, Address: 0x20419c, Func Offset: 0x5c
}

// SelectDevice__2PsFv
// Start address: 0x2041a0
int32 Ps::SelectDevice()
{
	_RwVideoMode videoMode;
	// Line 610, Address: 0x2041a0, Func Offset: 0
	// Line 615, Address: 0x2041a8, Func Offset: 0x8
	// Line 617, Address: 0x2041c0, Func Offset: 0x20
	// Line 618, Address: 0x2041cc, Func Offset: 0x2c
	// Line 620, Address: 0x2041d8, Func Offset: 0x38
	// Line 621, Address: 0x2041dc, Func Offset: 0x3c
	// Func End, Address: 0x2041ec, Func Offset: 0x4c
}

// _handlePad__Fv
// Start address: 0x2041f0
void _handlePad()
{
	_RwV2d delta;
	_RwV2d delta;
	int32 dRighty;
	int32 dRightx;
	int32 dLefty;
	int32 dLeftx;
	uint32 buttons;
	_RsPadButtonStatus padButtonsUp;
	_RsPadButtonStatus padButtonsDown;
	uint32 oldButtons;
	uint8 rightV;
	uint8 rightH;
	uint8 leftV;
	uint8 leftH;
	int8 init;
	int8 init;
	int8 init;
	int8 init;
	int8 init;
	// Line 468, Address: 0x2041f0, Func Offset: 0
	// Line 473, Address: 0x2041fc, Func Offset: 0xc
	// Line 477, Address: 0x204214, Func Offset: 0x24
	// Line 478, Address: 0x204234, Func Offset: 0x44
	// Line 480, Address: 0x20425c, Func Offset: 0x6c
	// Line 483, Address: 0x204260, Func Offset: 0x70
	// Line 486, Address: 0x204268, Func Offset: 0x78
	// Line 489, Address: 0x204278, Func Offset: 0x88
	// Line 490, Address: 0x204288, Func Offset: 0x98
	// Line 494, Address: 0x204298, Func Offset: 0xa8
	// Line 495, Address: 0x2042b0, Func Offset: 0xc0
	// Line 498, Address: 0x2042c8, Func Offset: 0xd8
	// Line 499, Address: 0x2042e0, Func Offset: 0xf0
	// Line 504, Address: 0x2042f8, Func Offset: 0x108
	// Line 507, Address: 0x204304, Func Offset: 0x114
	// Line 508, Address: 0x204310, Func Offset: 0x120
	// Line 511, Address: 0x20431c, Func Offset: 0x12c
	// Line 512, Address: 0x20432c, Func Offset: 0x13c
	// Line 522, Address: 0x20433c, Func Offset: 0x14c
	// Line 524, Address: 0x20435c, Func Offset: 0x16c
	// Line 527, Address: 0x20437c, Func Offset: 0x18c
	// Line 531, Address: 0x204394, Func Offset: 0x1a4
	// Line 534, Address: 0x2043a0, Func Offset: 0x1b0
	// Line 535, Address: 0x2043ac, Func Offset: 0x1bc
	// Line 539, Address: 0x2043b8, Func Offset: 0x1c8
	// Line 540, Address: 0x2043c8, Func Offset: 0x1d8
	// Line 550, Address: 0x2043d8, Func Offset: 0x1e8
	// Line 552, Address: 0x2043f8, Func Offset: 0x208
	// Line 555, Address: 0x204418, Func Offset: 0x228
	// Line 560, Address: 0x204430, Func Offset: 0x240
	// Line 562, Address: 0x20443c, Func Offset: 0x24c
	// Line 565, Address: 0x204458, Func Offset: 0x268
	// Line 568, Address: 0x204470, Func Offset: 0x280
	// Line 570, Address: 0x20447c, Func Offset: 0x28c
	// Line 573, Address: 0x204498, Func Offset: 0x2a8
	// Line 578, Address: 0x2044b0, Func Offset: 0x2c0
	// Line 582, Address: 0x2044c0, Func Offset: 0x2d0
	// Line 586, Address: 0x2044cc, Func Offset: 0x2dc
	// Line 588, Address: 0x2044d0, Func Offset: 0x2e0
	// Func End, Address: 0x2044e4, Func Offset: 0x2f4
}

// remapButtons__Fi
// Start address: 0x2044f0
uint32 remapButtons(int32 sceButtons)
{
	uint32 rsButtons;
	// Line 441, Address: 0x2044f0, Func Offset: 0
	// Line 443, Address: 0x2044f4, Func Offset: 0x4
	// Line 444, Address: 0x204504, Func Offset: 0x14
	// Line 445, Address: 0x204514, Func Offset: 0x24
	// Line 446, Address: 0x204524, Func Offset: 0x34
	// Line 447, Address: 0x204534, Func Offset: 0x44
	// Line 448, Address: 0x204544, Func Offset: 0x54
	// Line 449, Address: 0x204554, Func Offset: 0x64
	// Line 450, Address: 0x204564, Func Offset: 0x74
	// Line 451, Address: 0x204574, Func Offset: 0x84
	// Line 452, Address: 0x204584, Func Offset: 0x94
	// Line 453, Address: 0x204594, Func Offset: 0xa4
	// Line 454, Address: 0x2045a4, Func Offset: 0xb4
	// Line 455, Address: 0x2045b4, Func Offset: 0xc4
	// Line 456, Address: 0x2045c4, Func Offset: 0xd4
	// Line 457, Address: 0x2045d4, Func Offset: 0xe4
	// Line 458, Address: 0x2045e4, Func Offset: 0xf4
	// Line 461, Address: 0x2045f4, Func Offset: 0x104
	// Func End, Address: 0x2045fc, Func Offset: 0x10c
}

// SkyPadOpen__Fv
// Start address: 0x204600
int32 SkyPadOpen()
{
	int8 _PADMAN[256];
	int8 _SIO2MAN[256];
	int8 buf[256];
	int8 _empty[1];
	// Line 345, Address: 0x204600, Func Offset: 0
	// Line 361, Address: 0x204608, Func Offset: 0x8
	// Line 363, Address: 0x204624, Func Offset: 0x24
	// Line 365, Address: 0x204640, Func Offset: 0x40
	// Line 367, Address: 0x20465c, Func Offset: 0x5c
	// Line 394, Address: 0x204678, Func Offset: 0x78
	// Line 396, Address: 0x204684, Func Offset: 0x84
	// Line 398, Address: 0x2046a0, Func Offset: 0xa0
	// Line 399, Address: 0x2046b8, Func Offset: 0xb8
	// Line 400, Address: 0x2046dc, Func Offset: 0xdc
	// Line 402, Address: 0x2046e8, Func Offset: 0xe8
	// Line 404, Address: 0x204704, Func Offset: 0x104
	// Line 405, Address: 0x20471c, Func Offset: 0x11c
	// Line 406, Address: 0x204740, Func Offset: 0x140
	// Line 409, Address: 0x20474c, Func Offset: 0x14c
	// Line 410, Address: 0x204758, Func Offset: 0x158
	// Line 415, Address: 0x204770, Func Offset: 0x170
	// Line 432, Address: 0x204788, Func Offset: 0x188
	// Line 436, Address: 0x20478c, Func Offset: 0x18c
	// Func End, Address: 0x20479c, Func Offset: 0x19c
}

// PathGetSeparator__2PsFv
// Start address: 0x2047a0
int8 Ps::PathGetSeparator()
{
	// Line 339, Address: 0x2047a0, Func Offset: 0
	// Line 340, Address: 0x2047a4, Func Offset: 0x4
	// Func End, Address: 0x2047ac, Func Offset: 0xc
}

// PathnameDestroy__2PsFPc
// Start address: 0x2047b0
void Ps::PathnameDestroy(int8* pathname)
{
	// Line 330, Address: 0x2047b0, Func Offset: 0
	// Line 331, Address: 0x2047c0, Func Offset: 0x10
	// Line 333, Address: 0x2047c8, Func Offset: 0x18
	// Line 335, Address: 0x2047e0, Func Offset: 0x30
	// Func End, Address: 0x2047f4, Func Offset: 0x44
}

// PathnameCreate__2PsFPCc
// Start address: 0x204800
int8* Ps::PathnameCreate(int8* pathname)
{
	int8* charToConvert;
	int8* dstBuffer;
	// Line 291, Address: 0x204800, Func Offset: 0
	// Line 292, Address: 0x204814, Func Offset: 0x14
	// Line 297, Address: 0x20481c, Func Offset: 0x1c
	// Line 304, Address: 0x204854, Func Offset: 0x54
	// Line 309, Address: 0x20485c, Func Offset: 0x5c
	// Line 312, Address: 0x204878, Func Offset: 0x78
	// Line 314, Address: 0x204880, Func Offset: 0x80
	// Line 315, Address: 0x204888, Func Offset: 0x88
	// Line 316, Address: 0x2048ac, Func Offset: 0xac
	// Line 318, Address: 0x2048b4, Func Offset: 0xb4
	// Line 319, Address: 0x2048bc, Func Offset: 0xbc
	// Line 320, Address: 0x2048e4, Func Offset: 0xe4
	// Line 322, Address: 0x2048e8, Func Offset: 0xe8
	// Line 325, Address: 0x2048f4, Func Offset: 0xf4
	// Line 326, Address: 0x2048f8, Func Offset: 0xf8
	// Func End, Address: 0x204910, Func Offset: 0x110
}

// Timer__2PsFv
// Start address: 0x204910
uint32 Ps::Timer()
{
	// Line 254, Address: 0x204910, Func Offset: 0
	// Line 255, Address: 0x204918, Func Offset: 0x8
	// Func End, Address: 0x204920, Func Offset: 0x10
}

// TimerHandler__Fi
// Start address: 0x204920
int32 TimerHandler(int32 ca)
{
	// Line 216, Address: 0x204920, Func Offset: 0
	// Line 217, Address: 0x204928, Func Offset: 0x8
	// Line 226, Address: 0x204960, Func Offset: 0x40
	// Line 228, Address: 0x204974, Func Offset: 0x54
	// Line 229, Address: 0x204988, Func Offset: 0x68
	// Line 233, Address: 0x2049a0, Func Offset: 0x80
	// Line 241, Address: 0x2049c8, Func Offset: 0xa8
	// Line 242, Address: 0x2049cc, Func Offset: 0xac
	// Func End, Address: 0x2049dc, Func Offset: 0xbc
}

// GetDebugMessageHandler__2PsFv
// Start address: 0x2049e0
void(*)(_RwDebugType, int8*) Ps::GetDebugMessageHandler()
{
	// Line 212, Address: 0x2049e0, Func Offset: 0
	// Line 213, Address: 0x2049e8, Func Offset: 0x8
	// Func End, Address: 0x2049f0, Func Offset: 0x10
}

// DebugMessageHandler__2PsF12_RwDebugTypePCc
// Start address: 0x2049f0
void DebugMessageHandler(int8* str)
{
	// Line 203, Address: 0x2049f0, Func Offset: 0
	// Line 207, Address: 0x2049f8, Func Offset: 0x8
	// Line 208, Address: 0x204a08, Func Offset: 0x18
	// Func End, Address: 0x204a18, Func Offset: 0x28
}

// CameraShowRaster__2PsFP9_RwCamera
// Start address: 0x204a20
void CameraShowRaster(_RwCamera* camera)
{
	// Line 194, Address: 0x204a20, Func Offset: 0
	// Line 198, Address: 0x204a28, Func Offset: 0x8
	// Line 199, Address: 0x204a3c, Func Offset: 0x1c
	// Func End, Address: 0x204a4c, Func Offset: 0x2c
}

// WarningMessage__2PsFPCc
// Start address: 0x204a50
void Ps::WarningMessage(int8* message)
{
	// Line 188, Address: 0x204a50, Func Offset: 0
	// Line 189, Address: 0x204a5c, Func Offset: 0xc
	// Line 190, Address: 0x204a7c, Func Offset: 0x2c
	// Func End, Address: 0x204a8c, Func Offset: 0x3c
}

// ErrorMessage__2PsFPCc
// Start address: 0x204a90
void Ps::ErrorMessage(int8* message)
{
	// Line 182, Address: 0x204a90, Func Offset: 0
	// Line 183, Address: 0x204a9c, Func Offset: 0xc
	// Line 184, Address: 0x204abc, Func Offset: 0x2c
	// Func End, Address: 0x204acc, Func Offset: 0x3c
}

// WindowSetText__2PsFPCc
// Start address: 0x204ad0
void Ps::WindowSetText()
{
	// Line 178, Address: 0x204ad0, Func Offset: 0
	// Func End, Address: 0x204ad8, Func Offset: 0x8
}

// __dt__2PsFv
// Start address: 0x204ae0
void* Ps::__dt()
{
	// Line 154, Address: 0x204ae0, Func Offset: 0
	// Line 155, Address: 0x204b38, Func Offset: 0x58
	// Func End, Address: 0x204b4c, Func Offset: 0x6c
}

