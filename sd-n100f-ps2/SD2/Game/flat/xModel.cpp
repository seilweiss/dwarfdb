typedef struct RwV2d;
typedef struct RwResEntry;
typedef struct xAnimPlay;
typedef struct RxNodeMethods;
typedef struct xModelPool;
typedef struct RwRaster;
typedef struct rxReq;
typedef struct xAnimFile;
typedef struct rxHeapFreeBlock;
typedef struct xModelInstance;
typedef struct xAnimSingle;
typedef struct RpWorld;
typedef struct xAnimEffect;
typedef struct RpWorldSector;
typedef struct RxNodeDefinition;
typedef struct RwFrame;
typedef struct xAnimTransitionList;
typedef struct RwVideoMode;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTable;
typedef struct RxCluster;
typedef struct RxHeap;
typedef struct RwSurfaceProperties;
typedef struct RpCollSector;
typedef struct RxClusterRef;
typedef struct RwMatrixTag;
typedef struct RpGeometry;
typedef struct RpMeshHeader;
typedef struct RwCamera;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineCluster;
typedef struct RxPipeline;
typedef struct xAnimActiveEffect;
typedef struct RpAtomic;
typedef struct RxClusterDefinition;
typedef struct RpMorphTarget;
typedef struct xMemPool;
typedef struct rxHeapBlockHeader;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct RpSector;
typedef struct RwSphere;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef enum RwTextureAddressMode;
typedef struct RpVertexNormal;
typedef struct RxPipelineNodeParam;
typedef struct RpClump;
typedef struct RpMaterialList;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimTransition;
typedef enum RwCameraProjection;
typedef struct RpMaterial;
typedef struct RwObjectHasFrame;
typedef struct RpTriangle;
typedef struct xAnimState;
typedef struct RpPolygon;
typedef struct _xRect;
typedef struct RxPipelineRequiresCluster;
typedef enum RxClusterValid;
typedef struct _xMat4x3;
typedef enum RwTextureFilterMode;
typedef struct _xVec3;
typedef struct RwObject;
typedef struct RwTexDictionary;
typedef struct RwRGBA;
typedef struct RpInterpolator;
typedef struct _xQuat;
typedef struct RwTexCoords;
typedef struct RwFrustumPlane;
typedef struct RwTexture;
typedef struct RwPlane;
typedef struct RwBBox;
typedef struct RwLinkList;
typedef enum RxClusterForcePresent;
typedef enum RwVideoModeFlag;
typedef enum RxNodeDefEditable;
typedef enum RpWorldRenderOrder;
typedef struct RxIoSpec;

typedef RpClump*(*type_0)(RpClump*, void*);
typedef RpWorldSector*(*type_2)(RpWorldSector*);
typedef RpAtomic*(*type_5)(RpAtomic*);
typedef uint32(*type_7)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_10)(xMemPool*, void*);
typedef int32(*type_11)(RxNodeDefinition*);
typedef uint32(*type_13)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_14)(RxNodeDefinition*);
typedef RwObjectHasFrame*(*type_16)(RwObjectHasFrame*);
typedef int32(*type_17)(RxPipelineNode*);
typedef void(*type_18)(RxPipelineNode*);
typedef int32(*type_20)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_23)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_24)(RwCamera*);
typedef RwCamera*(*type_25)(RwCamera*);
typedef void(*type_28)(RwResEntry*);

typedef RwV2d type_1[2];
typedef _xVec3 type_3[2];
typedef _xQuat type_4[2];
typedef RwFrustumPlane type_6[6];
typedef RwV3d type_8[8];
typedef uint32 type_12[4096];
typedef uint16 type_15[3];
typedef uint16 type_19[3];
typedef float32 type_21[2];
typedef RxCluster type_22[1];
typedef RwTexCoords* type_26[8];
typedef uint32 type_27[4];
typedef float32 type_29[4];
typedef float32 type_30[4];
typedef int8 type_31[32];
typedef RwTexCoords* type_32[8];
typedef int8 type_33[32];
typedef uint8 type_34[2];

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xAnimPlay
{
	xAnimPlay* Next;
	uint16 NumSingle;
	uint16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	_xVec3 Translate[2];
	uint32 pad1;
	_xQuat Quat[2];
	float32 Yaw;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	uint32 pad2;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct rxReq
{
};

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	float32 PhysBase[4];
	float32 PhysDelta[4];
	uint16 BoneCount;
	uint8 NumAnims[2];
	void** RawData;
	void* Physics;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	void* Object;
	uint16 Flags;
	uint8 BoneCount;
	uint8 BoneIndex;
	uint8* BoneRemap;
	RwMatrixTag* Mat;
	_xVec3 Scale;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	float32 BilinearLerp[2];
	xAnimEffect* Effect;
	uint32 ActiveCount;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	float32 LastTime;
	_xVec3 LastTranslation;
	float32 LastYaw;
	uint32 pad;
	_xQuat LastQuat;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	RwVideoModeFlag flags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RpGeometry
{
	RwObject object;
	uint32 flags;
	uint16 lockedSinceLastInst;
	int16 refCount;
	int32 numTriangles;
	int32 numVertices;
	int32 numMorphTargets;
	int32 numTexCoordSets;
	RpMaterialList matList;
	RpTriangle* triangles;
	RwRGBA* preLitLum;
	RwTexCoords* texCoords[8];
	RwSurfaceProperties ignoredSurfaceProps;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	RpAtomic*(*renderCallBack)(RpAtomic*);
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	void(*InitCB)(xMemPool*, void*);
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RpSector
{
	int32 type;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	uint32(*Conditional)(xAnimTransition*, xAnimSingle*, void*);
	uint32(*Callback)(xAnimTransition*, xAnimSingle*, void*);
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct xAnimState
{
	xAnimState* Next;
	int8* Name;
	uint32 ID;
	uint32 Flags;
	uint32 UserFlags;
	float32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float32* BoneBlend;
	float32* TimeSnap;
	float32 FadeRecip;
	uint16* FadeOffset;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _xRect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODEFSAA0 = 0x8,
	rwVIDEOMODEFSAA1 = 0x10,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

xModelPool* sxModelPoolList;
RwCamera* subcamera;
RwRaster* ShadowRenderRaster;
uint32 ourGlobals[4096];
_xMat4x3 g_I3;
uint32 gActiveHeap;

void xModel_SceneExit(RpWorld* world);
void xModel_SceneEnter(RpWorld* world);
void xModelResetMaterial(xModelInstance* modelInst);
void xModelMaterialMul(xModelInstance* modelInst, float32 rm, float32 gm, float32 bm);
void xModelSetMaterialAlpha(xModelInstance* modelInst, int32 alpha);
void xModelSetMaterialTextureRestore(xModelInstance* modelInst);
void xModelSetMaterialTexture(xModelInstance* modelInst, void* texture);
void CameraDestroy(RwCamera* camera);
void xModelRender2D(xModelInstance* modelInst, _xRect* sr, _xVec3* from, _xVec3* to);
void xModelRender(xModelInstance* modelInst);
void xModelRenderSingle(xModelInstance* modelInst);
void xModelEval(xModelInstance* modelInst);
void xModelEvalSingle(xModelInstance* modelInst);
void xModelUpdate(xModelInstance* modelInst, float32 timeDelta);
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent);
void xModelInstanceFree(xModelInstance* modelInst);
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, uint16 flags, uint8 boneIndex, uint8* boneRemap);
void xModelPoolInit(uint32 count, uint32 numMatrices);
void xModelInit();

// xModel_SceneExit__FP7RpWorld
// Start address: 0x122440
void xModel_SceneExit(RpWorld* world)
{
	// Line 910, Address: 0x122440, Func Offset: 0
	// Func End, Address: 0x122448, Func Offset: 0x8
}

// xModel_SceneEnter__FP7RpWorld
// Start address: 0x122450
void xModel_SceneEnter(RpWorld* world)
{
	// Line 898, Address: 0x122450, Func Offset: 0
	// Func End, Address: 0x122458, Func Offset: 0x8
}

// xModelResetMaterial__FP14xModelInstance
// Start address: 0x122460
void xModelResetMaterial(xModelInstance* modelInst)
{
	// Line 887, Address: 0x122460, Func Offset: 0
	// Func End, Address: 0x122468, Func Offset: 0x8
}

// xModelMaterialMul__FP14xModelInstancefff
// Start address: 0x122470
void xModelMaterialMul(xModelInstance* modelInst, float32 rm, float32 gm, float32 bm)
{
	// Line 878, Address: 0x122470, Func Offset: 0
	// Func End, Address: 0x122478, Func Offset: 0x8
}

// xModelSetMaterialAlpha__FP14xModelInstancei
// Start address: 0x122480
void xModelSetMaterialAlpha(xModelInstance* modelInst, int32 alpha)
{
	// Line 869, Address: 0x122480, Func Offset: 0
	// Func End, Address: 0x122488, Func Offset: 0x8
}

// xModelSetMaterialTextureRestore__FP14xModelInstance
// Start address: 0x122490
void xModelSetMaterialTextureRestore(xModelInstance* modelInst)
{
	// Line 862, Address: 0x122490, Func Offset: 0
	// Func End, Address: 0x122498, Func Offset: 0x8
}

// xModelSetMaterialTexture__FP14xModelInstancePv
// Start address: 0x1224a0
void xModelSetMaterialTexture(xModelInstance* modelInst, void* texture)
{
	// Line 856, Address: 0x1224a0, Func Offset: 0
	// Func End, Address: 0x1224a8, Func Offset: 0x8
}

// CameraDestroy__FP8RwCamera
// Start address: 0x1224b0
void CameraDestroy(RwCamera* camera)
{
	RwFrame* frame;
	RwRaster* raster;
	// Line 781, Address: 0x1224b0, Func Offset: 0
	// Line 782, Address: 0x1224c0, Func Offset: 0x10
	// Line 789, Address: 0x1224c8, Func Offset: 0x18
	// Line 791, Address: 0x1224d0, Func Offset: 0x20
	// Line 792, Address: 0x1224d4, Func Offset: 0x24
	// Line 794, Address: 0x1224dc, Func Offset: 0x2c
	// Line 796, Address: 0x1224e4, Func Offset: 0x34
	// Line 799, Address: 0x1224ec, Func Offset: 0x3c
	// Line 800, Address: 0x1224f0, Func Offset: 0x40
	// Line 802, Address: 0x1224f8, Func Offset: 0x48
	// Line 804, Address: 0x122500, Func Offset: 0x50
	// Line 807, Address: 0x122504, Func Offset: 0x54
	// Line 808, Address: 0x122508, Func Offset: 0x58
	// Line 810, Address: 0x122510, Func Offset: 0x60
	// Line 812, Address: 0x122518, Func Offset: 0x68
	// Line 815, Address: 0x12251c, Func Offset: 0x6c
	// Line 819, Address: 0x122528, Func Offset: 0x78
	// Func End, Address: 0x12253c, Func Offset: 0x8c
}

// xModelRender2D__FP14xModelInstanceP6_xRectP6_xVec3P6_xVec3f
// Start address: 0x122540
void xModelRender2D(xModelInstance* modelInst, _xRect* sr, _xVec3* from, _xVec3* to)
{
	float32 shearY;
	float32 shearX;
	float32 viewscale;
	RwV2d* camvw;
	RwMatrixTag shearmat;
	RwMatrixTag objmat;
	RwMatrixTag* cammat;
	RwCamera* camera;
	// Line 593, Address: 0x122540, Func Offset: 0
	// Line 601, Address: 0x12259c, Func Offset: 0x5c
	// Line 602, Address: 0x122624, Func Offset: 0xe4
	// Line 604, Address: 0x12262c, Func Offset: 0xec
	// Line 605, Address: 0x12263c, Func Offset: 0xfc
	// Line 607, Address: 0x12264c, Func Offset: 0x10c
	// Line 609, Address: 0x122658, Func Offset: 0x118
	// Line 612, Address: 0x122660, Func Offset: 0x120
	// Line 609, Address: 0x122668, Func Offset: 0x128
	// Line 612, Address: 0x12266c, Func Offset: 0x12c
	// Line 613, Address: 0x1226a0, Func Offset: 0x160
	// Line 614, Address: 0x1226ac, Func Offset: 0x16c
	// Line 615, Address: 0x1226b4, Func Offset: 0x174
	// Line 616, Address: 0x1226bc, Func Offset: 0x17c
	// Line 617, Address: 0x1226fc, Func Offset: 0x1bc
	// Line 638, Address: 0x122704, Func Offset: 0x1c4
	// Line 639, Address: 0x122718, Func Offset: 0x1d8
	// Line 640, Address: 0x12271c, Func Offset: 0x1dc
	// Line 638, Address: 0x122720, Func Offset: 0x1e0
	// Line 639, Address: 0x122724, Func Offset: 0x1e4
	// Line 640, Address: 0x122728, Func Offset: 0x1e8
	// Line 639, Address: 0x12272c, Func Offset: 0x1ec
	// Line 640, Address: 0x122730, Func Offset: 0x1f0
	// Line 638, Address: 0x122734, Func Offset: 0x1f4
	// Line 645, Address: 0x122738, Func Offset: 0x1f8
	// Line 678, Address: 0x122740, Func Offset: 0x200
	// Line 640, Address: 0x122744, Func Offset: 0x204
	// Line 639, Address: 0x122748, Func Offset: 0x208
	// Line 640, Address: 0x12274c, Func Offset: 0x20c
	// Line 639, Address: 0x122750, Func Offset: 0x210
	// Line 678, Address: 0x122754, Func Offset: 0x214
	// Line 641, Address: 0x12275c, Func Offset: 0x21c
	// Line 642, Address: 0x122760, Func Offset: 0x220
	// Line 640, Address: 0x122764, Func Offset: 0x224
	// Line 643, Address: 0x122768, Func Offset: 0x228
	// Line 644, Address: 0x12276c, Func Offset: 0x22c
	// Line 640, Address: 0x122770, Func Offset: 0x230
	// Line 639, Address: 0x12277c, Func Offset: 0x23c
	// Line 649, Address: 0x122784, Func Offset: 0x244
	// Line 639, Address: 0x122788, Func Offset: 0x248
	// Line 640, Address: 0x12278c, Func Offset: 0x24c
	// Line 645, Address: 0x122794, Func Offset: 0x254
	// Line 639, Address: 0x122798, Func Offset: 0x258
	// Line 645, Address: 0x1227a0, Func Offset: 0x260
	// Line 639, Address: 0x1227a8, Func Offset: 0x268
	// Line 645, Address: 0x1227ac, Func Offset: 0x26c
	// Line 646, Address: 0x1227b4, Func Offset: 0x274
	// Line 647, Address: 0x1227b8, Func Offset: 0x278
	// Line 648, Address: 0x1227bc, Func Offset: 0x27c
	// Line 649, Address: 0x1227c0, Func Offset: 0x280
	// Line 650, Address: 0x1227c4, Func Offset: 0x284
	// Line 651, Address: 0x1227c8, Func Offset: 0x288
	// Line 652, Address: 0x1227cc, Func Offset: 0x28c
	// Line 678, Address: 0x1227d0, Func Offset: 0x290
	// Line 679, Address: 0x1227d8, Func Offset: 0x298
	// Line 680, Address: 0x1227e8, Func Offset: 0x2a8
	// Line 684, Address: 0x1227f8, Func Offset: 0x2b8
	// Line 685, Address: 0x1227fc, Func Offset: 0x2bc
	// Line 684, Address: 0x122800, Func Offset: 0x2c0
	// Line 685, Address: 0x122840, Func Offset: 0x300
	// Line 686, Address: 0x1228bc, Func Offset: 0x37c
	// Line 687, Address: 0x1228c8, Func Offset: 0x388
	// Line 688, Address: 0x12290c, Func Offset: 0x3cc
	// Func End, Address: 0x12296c, Func Offset: 0x42c
}

// xModelRender__FP14xModelInstance
// Start address: 0x122970
void xModelRender(xModelInstance* modelInst)
{
	// Line 402, Address: 0x122970, Func Offset: 0
	// Line 405, Address: 0x122980, Func Offset: 0x10
	// Line 406, Address: 0x122988, Func Offset: 0x18
	// Line 407, Address: 0x122990, Func Offset: 0x20
	// Line 408, Address: 0x122994, Func Offset: 0x24
	// Line 411, Address: 0x1229a8, Func Offset: 0x38
	// Func End, Address: 0x1229b8, Func Offset: 0x48
}

// xModelRenderSingle__FP14xModelInstance
// Start address: 0x1229c0
void xModelRenderSingle(xModelInstance* modelInst)
{
	uint16 i;
	xAnimPlay* a;
	// Line 339, Address: 0x1229c0, Func Offset: 0
	// Line 340, Address: 0x1229fc, Func Offset: 0x3c
	// Line 344, Address: 0x122a0c, Func Offset: 0x4c
	// Line 345, Address: 0x122a28, Func Offset: 0x68
	// Line 346, Address: 0x122a2c, Func Offset: 0x6c
	// Line 345, Address: 0x122a30, Func Offset: 0x70
	// Line 346, Address: 0x122a60, Func Offset: 0xa0
	// Line 361, Address: 0x122b08, Func Offset: 0x148
	// Line 364, Address: 0x122b1c, Func Offset: 0x15c
	// Line 367, Address: 0x122b2c, Func Offset: 0x16c
	// Line 369, Address: 0x122b30, Func Offset: 0x170
	// Line 370, Address: 0x122b40, Func Offset: 0x180
	// Line 372, Address: 0x122b58, Func Offset: 0x198
	// Line 373, Address: 0x122b78, Func Offset: 0x1b8
	// Line 377, Address: 0x122be8, Func Offset: 0x228
	// Line 378, Address: 0x122bf4, Func Offset: 0x234
	// Line 380, Address: 0x122c08, Func Offset: 0x248
	// Line 386, Address: 0x122c10, Func Offset: 0x250
	// Line 391, Address: 0x122c1c, Func Offset: 0x25c
	// Line 392, Address: 0x122c38, Func Offset: 0x278
	// Line 396, Address: 0x122c6c, Func Offset: 0x2ac
	// Func End, Address: 0x122cac, Func Offset: 0x2ec
}

// xModelEval__FP14xModelInstance
// Start address: 0x122cb0
void xModelEval(xModelInstance* modelInst)
{
	// Line 323, Address: 0x122cb0, Func Offset: 0
	// Line 326, Address: 0x122cc0, Func Offset: 0x10
	// Line 327, Address: 0x122cc8, Func Offset: 0x18
	// Line 328, Address: 0x122cd0, Func Offset: 0x20
	// Line 329, Address: 0x122cd4, Func Offset: 0x24
	// Line 332, Address: 0x122ce8, Func Offset: 0x38
	// Func End, Address: 0x122cf8, Func Offset: 0x48
}

// xModelEvalSingle__FP14xModelInstance
// Start address: 0x122d00
void xModelEvalSingle(xModelInstance* modelInst)
{
	uint8* remap;
	xModelInstance* dad;
	int32 i;
	// Line 271, Address: 0x122d00, Func Offset: 0
	// Line 274, Address: 0x122d18, Func Offset: 0x18
	// Line 276, Address: 0x122d28, Func Offset: 0x28
	// Line 278, Address: 0x122d3c, Func Offset: 0x3c
	// Line 282, Address: 0x122d48, Func Offset: 0x48
	// Line 286, Address: 0x122d50, Func Offset: 0x50
	// Line 288, Address: 0x122d68, Func Offset: 0x68
	// Line 293, Address: 0x122d78, Func Offset: 0x78
	// Line 291, Address: 0x122d80, Func Offset: 0x80
	// Line 293, Address: 0x122d84, Func Offset: 0x84
	// Line 295, Address: 0x122d8c, Func Offset: 0x8c
	// Line 297, Address: 0x122d94, Func Offset: 0x94
	// Line 298, Address: 0x122dc0, Func Offset: 0xc0
	// Line 300, Address: 0x122dd8, Func Offset: 0xd8
	// Line 303, Address: 0x122de8, Func Offset: 0xe8
	// Line 305, Address: 0x122e00, Func Offset: 0x100
	// Line 306, Address: 0x122e1c, Func Offset: 0x11c
	// Line 307, Address: 0x122e24, Func Offset: 0x124
	// Line 311, Address: 0x122e34, Func Offset: 0x134
	// Line 312, Address: 0x122e40, Func Offset: 0x140
	// Line 317, Address: 0x122e5c, Func Offset: 0x15c
	// Func End, Address: 0x122e78, Func Offset: 0x178
}

// xModelUpdate__FP14xModelInstancef
// Start address: 0x122e80
void xModelUpdate(xModelInstance* modelInst, float32 timeDelta)
{
	// Line 246, Address: 0x122e80, Func Offset: 0
	// Line 249, Address: 0x122e94, Func Offset: 0x14
	// Line 251, Address: 0x122e9c, Func Offset: 0x1c
	// Line 253, Address: 0x122eb8, Func Offset: 0x38
	// Line 254, Address: 0x122ec4, Func Offset: 0x44
	// Line 256, Address: 0x122ed0, Func Offset: 0x50
	// Line 257, Address: 0x122edc, Func Offset: 0x5c
	// Line 259, Address: 0x122ee0, Func Offset: 0x60
	// Line 260, Address: 0x122ee4, Func Offset: 0x64
	// Line 263, Address: 0x122ef0, Func Offset: 0x70
	// Func End, Address: 0x122f04, Func Offset: 0x84
}

// xModelInstanceAttach__FP14xModelInstanceP14xModelInstance
// Start address: 0x122f10
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent)
{
	xModelInstance* curr;
	// Line 234, Address: 0x122f10, Func Offset: 0
	// Line 235, Address: 0x122f18, Func Offset: 0x8
	// Line 236, Address: 0x122f1c, Func Offset: 0xc
	// Line 237, Address: 0x122f38, Func Offset: 0x28
	// Line 239, Address: 0x122f3c, Func Offset: 0x2c
	// Func End, Address: 0x122f44, Func Offset: 0x34
}

// xModelInstanceFree__FP14xModelInstance
// Start address: 0x122f50
void xModelInstanceFree(xModelInstance* modelInst)
{
	xModelInstance** prev;
	xModelInstance* curr;
	xModelInstance* child;
	// Line 174, Address: 0x122f50, Func Offset: 0
	// Line 177, Address: 0x122f5c, Func Offset: 0xc
	// Line 178, Address: 0x122f64, Func Offset: 0x14
	// Line 179, Address: 0x122f6c, Func Offset: 0x1c
	// Line 182, Address: 0x122fb0, Func Offset: 0x60
	// Line 187, Address: 0x122fbc, Func Offset: 0x6c
	// Line 189, Address: 0x122fc4, Func Offset: 0x74
	// Line 190, Address: 0x122fcc, Func Offset: 0x7c
	// Line 192, Address: 0x122fe0, Func Offset: 0x90
	// Line 196, Address: 0x122fe8, Func Offset: 0x98
	// Line 197, Address: 0x122ff4, Func Offset: 0xa4
	// Line 198, Address: 0x122ffc, Func Offset: 0xac
	// Line 202, Address: 0x123000, Func Offset: 0xb0
	// Line 203, Address: 0x12300c, Func Offset: 0xbc
	// Line 204, Address: 0x123014, Func Offset: 0xc4
	// Func End, Address: 0x123024, Func Offset: 0xd4
}

// xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
// Start address: 0x123030
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, uint16 flags, uint8 boneIndex, uint8* boneRemap)
{
	xModelInstance* dude;
	xModelPool* found;
	xModelPool* curr;
	uint32 matCount;
	uint32 boneCount;
	int32 i;
	// Line 116, Address: 0x123030, Func Offset: 0
	// Line 123, Address: 0x123070, Func Offset: 0x40
	// Line 124, Address: 0x123078, Func Offset: 0x48
	// Line 125, Address: 0x12308c, Func Offset: 0x5c
	// Line 126, Address: 0x123090, Func Offset: 0x60
	// Line 127, Address: 0x123098, Func Offset: 0x68
	// Line 128, Address: 0x1230b4, Func Offset: 0x84
	// Line 130, Address: 0x1230b8, Func Offset: 0x88
	// Line 131, Address: 0x1230bc, Func Offset: 0x8c
	// Line 133, Address: 0x1230c8, Func Offset: 0x98
	// Line 142, Address: 0x1230d4, Func Offset: 0xa4
	// Line 153, Address: 0x1230d8, Func Offset: 0xa8
	// Line 134, Address: 0x1230e0, Func Offset: 0xb0
	// Line 137, Address: 0x1230e8, Func Offset: 0xb8
	// Line 138, Address: 0x1230ec, Func Offset: 0xbc
	// Line 139, Address: 0x1230f0, Func Offset: 0xc0
	// Line 140, Address: 0x1230f4, Func Offset: 0xc4
	// Line 141, Address: 0x1230f8, Func Offset: 0xc8
	// Line 142, Address: 0x1230fc, Func Offset: 0xcc
	// Line 143, Address: 0x123100, Func Offset: 0xd0
	// Line 144, Address: 0x123104, Func Offset: 0xd4
	// Line 145, Address: 0x123108, Func Offset: 0xd8
	// Line 147, Address: 0x123110, Func Offset: 0xe0
	// Line 148, Address: 0x123114, Func Offset: 0xe4
	// Line 153, Address: 0x123118, Func Offset: 0xe8
	// Line 154, Address: 0x123120, Func Offset: 0xf0
	// Line 157, Address: 0x12314c, Func Offset: 0x11c
	// Func End, Address: 0x12317c, Func Offset: 0x14c
}

// xModelPoolInit__FUiUi
// Start address: 0x123180
void xModelPoolInit(uint32 count, uint32 numMatrices)
{
	xModelInstance* inst;
	xModelPool** prev;
	xModelPool* curr;
	xModelPool* pool;
	RwMatrixTag* mat;
	uint8* buffer;
	int32 i;
	// Line 66, Address: 0x123180, Func Offset: 0
	// Line 74, Address: 0x12319c, Func Offset: 0x1c
	// Line 75, Address: 0x1231a4, Func Offset: 0x24
	// Line 80, Address: 0x1231a8, Func Offset: 0x28
	// Line 85, Address: 0x1231d8, Func Offset: 0x58
	// Line 90, Address: 0x1231e0, Func Offset: 0x60
	// Line 87, Address: 0x1231e4, Func Offset: 0x64
	// Line 90, Address: 0x1231e8, Func Offset: 0x68
	// Line 91, Address: 0x123204, Func Offset: 0x84
	// Line 94, Address: 0x12321c, Func Offset: 0x9c
	// Line 91, Address: 0x123220, Func Offset: 0xa0
	// Line 94, Address: 0x123224, Func Offset: 0xa4
	// Line 92, Address: 0x123228, Func Offset: 0xa8
	// Line 91, Address: 0x12322c, Func Offset: 0xac
	// Line 93, Address: 0x123230, Func Offset: 0xb0
	// Line 94, Address: 0x123234, Func Offset: 0xb4
	// Line 91, Address: 0x123240, Func Offset: 0xc0
	// Line 94, Address: 0x123244, Func Offset: 0xc4
	// Line 91, Address: 0x123248, Func Offset: 0xc8
	// Line 94, Address: 0x12324c, Func Offset: 0xcc
	// Line 91, Address: 0x123264, Func Offset: 0xe4
	// Line 94, Address: 0x123268, Func Offset: 0xe8
	// Line 91, Address: 0x12326c, Func Offset: 0xec
	// Line 94, Address: 0x123270, Func Offset: 0xf0
	// Line 91, Address: 0x123288, Func Offset: 0x108
	// Line 94, Address: 0x12328c, Func Offset: 0x10c
	// Line 91, Address: 0x123290, Func Offset: 0x110
	// Line 94, Address: 0x123294, Func Offset: 0x114
	// Line 91, Address: 0x1232ac, Func Offset: 0x12c
	// Line 94, Address: 0x1232b0, Func Offset: 0x130
	// Line 91, Address: 0x1232b4, Func Offset: 0x134
	// Line 94, Address: 0x1232b8, Func Offset: 0x138
	// Line 91, Address: 0x1232d0, Func Offset: 0x150
	// Line 94, Address: 0x1232d4, Func Offset: 0x154
	// Line 91, Address: 0x1232d8, Func Offset: 0x158
	// Line 94, Address: 0x1232dc, Func Offset: 0x15c
	// Line 91, Address: 0x1232f4, Func Offset: 0x174
	// Line 94, Address: 0x1232f8, Func Offset: 0x178
	// Line 91, Address: 0x1232fc, Func Offset: 0x17c
	// Line 94, Address: 0x123300, Func Offset: 0x180
	// Line 90, Address: 0x123348, Func Offset: 0x1c8
	// Line 91, Address: 0x123350, Func Offset: 0x1d0
	// Line 94, Address: 0x123354, Func Offset: 0x1d4
	// Line 91, Address: 0x123358, Func Offset: 0x1d8
	// Line 94, Address: 0x12335c, Func Offset: 0x1dc
	// Line 95, Address: 0x123374, Func Offset: 0x1f4
	// Line 96, Address: 0x123388, Func Offset: 0x208
	// Line 99, Address: 0x123390, Func Offset: 0x210
	// Line 100, Address: 0x123394, Func Offset: 0x214
	// Line 104, Address: 0x123398, Func Offset: 0x218
	// Line 106, Address: 0x12339c, Func Offset: 0x21c
	// Line 108, Address: 0x1233a4, Func Offset: 0x224
	// Line 109, Address: 0x1233ac, Func Offset: 0x22c
	// Line 110, Address: 0x1233c8, Func Offset: 0x248
	// Line 111, Address: 0x1233cc, Func Offset: 0x24c
	// Line 112, Address: 0x1233d0, Func Offset: 0x250
	// Func End, Address: 0x1233ec, Func Offset: 0x26c
}

// xModelInit__Fv
// Start address: 0x1233f0
void xModelInit()
{
	// Line 42, Address: 0x1233f0, Func Offset: 0
	// Line 44, Address: 0x1233fc, Func Offset: 0xc
	// Line 47, Address: 0x123404, Func Offset: 0x14
	// Line 50, Address: 0x123408, Func Offset: 0x18
	// Line 52, Address: 0x123418, Func Offset: 0x28
	// Line 55, Address: 0x1234b0, Func Offset: 0xc0
	// Func End, Address: 0x1234c4, Func Offset: 0xd4
}

