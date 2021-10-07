typedef struct xAnimFile;
typedef struct _xRay3;
typedef struct rxHeapBlockHeader;
typedef enum RwTextureFilterMode;
typedef struct _xEnv;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNode;
typedef struct RpMeshHeader;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct xModelInstance;
typedef struct xAnimTransitionList;
typedef struct RxPipeline;
typedef struct RpWorldSector;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTransition;
typedef struct RwV3d;
typedef struct RwRGBA;
typedef struct RpCollisionTriangle;
typedef struct xModelPool;
typedef struct RpIntersection;
typedef struct RpWorld;
typedef struct RwResEntry;
typedef struct xAnimSingle;
typedef struct RpGeometry;
typedef struct RxNodeDefinition;
typedef struct RwRaster;
typedef struct RwLinkList;
typedef struct RxPacket;
typedef struct xAnimPlay;
typedef struct RxClusterDefinition;
typedef struct RpAtomic;
typedef struct RpMorphTarget;
typedef struct xAnimState;
typedef struct RxPipelineRequiresCluster;
typedef struct RpVertexNormal;
typedef struct RpMaterialList;
typedef struct rxReq;
typedef struct RpSector;
typedef struct _xQuat;
typedef struct RpMaterial;
typedef struct RwTexDictionary;
typedef struct RwTexCoords;
typedef struct RwLLLink;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct RwMatrixTag;
typedef enum RxClusterForcePresent;
typedef struct RpClump;
typedef struct xAnimEffect;
typedef struct RxClusterRef;
typedef struct xAnimTable;
typedef enum RxNodeDefEditable;
typedef struct RpLight;
typedef struct RwBBox;
typedef struct RpPolygon;
typedef struct _xVec3;
typedef struct RpTriangle;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct xAnimActiveEffect;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct RwFrame;
typedef struct RxCluster;
typedef struct iEnv;
typedef struct RpCollSector;
typedef enum RxClusterValidityReq;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef enum RwTextureAddressMode;
typedef struct RpInterpolator;
typedef enum RpIntersectType;
typedef struct RxPipelineNodeParam;
typedef struct RwLine;
typedef struct RwRGBAReal;
typedef struct RpIntersectData;
typedef enum RpWorldRenderOrder;
typedef struct RwObjectHasFrame;

typedef RpClump*(*type_1)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef uint32(*type_3)(RxPipelineNode*, uint32, uint32, void*);
typedef RpWorldSector*(*type_4)(RpWorldSector*);
typedef int32(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_7)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef RpCollisionTriangle*(*type_9)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef int32(*type_11)(RxPipelineNode*);
typedef void(*type_12)(RwResEntry*);
typedef void(*type_14)(RxPipelineNode*);
typedef RpAtomic*(*type_15)(RpAtomic*);
typedef int32(*type_16)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_23)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_25)(xMemPool*, void*);
typedef uint32(*type_28)(xAnimTransition*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_31)(RpIntersection*, RpCollisionTriangle*, float32, void*);

typedef RxCluster type_0[1];
typedef uint32 type_5[4];
typedef float32 type_10[4];
typedef float32 type_13[4];
typedef uint8 type_17[2];
typedef RwV3d* type_18[3];
typedef _xVec3 type_19[2];
typedef _xQuat type_20[2];
typedef uint16 type_21[3];
typedef uint16 type_22[3];
typedef int8 type_24[32];
typedef int8 type_26[32];
typedef RpLight* type_27[2];
typedef RwFrame* type_29[2];
typedef RwTexCoords* type_30[8];
typedef RwTexCoords* type_32[8];
typedef float32 type_33[2];

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

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct RwLinkList
{
	RwLLLink link;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct rxReq
{
};

struct RpSector
{
	int32 type;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RpIntersectData
{
	union
	{
		RwLine line;
		RwV3d point;
		RwSphere sphere;
		RwBBox box;
		void* object;
	};
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

uint32 hitzhit;
RpCollisionTriangle*(*rayHitsEnvFastCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*rayHitsModelFastCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);

uint32 iRayHitsEnvSpecialFast(_xRay3* r, _xEnv* env);
uint32 iRayHitsEnvFast(_xRay3* r, _xEnv* env);
uint32 iRayHitsModelFast(_xRay3* r, xModelInstance* m);
RpCollisionTriangle* rayHitsEnvFastCB();
RpCollisionTriangle* rayHitsModelFastCB();
void iCollideFastInit();

// iRayHitsEnvSpecialFast__FPC6_xRay3PC5_xEnv
// Start address: 0x24bb30
uint32 iRayHitsEnvSpecialFast(_xRay3* r, _xEnv* env)
{
	RwV3d temp;
	float32 len;
	RpIntersection isx;
	// Line 153, Address: 0x24bb30, Func Offset: 0
	// Line 158, Address: 0x24bb40, Func Offset: 0x10
	// Line 159, Address: 0x24bb48, Func Offset: 0x18
	// Line 162, Address: 0x24bc40, Func Offset: 0x110
	// Line 161, Address: 0x24bc44, Func Offset: 0x114
	// Line 162, Address: 0x24bc48, Func Offset: 0x118
	// Line 159, Address: 0x24bc4c, Func Offset: 0x11c
	// Line 161, Address: 0x24bc74, Func Offset: 0x144
	// Line 162, Address: 0x24bc78, Func Offset: 0x148
	// Line 169, Address: 0x24bc88, Func Offset: 0x158
	// Line 170, Address: 0x24bc94, Func Offset: 0x164
	// Line 173, Address: 0x24bc9c, Func Offset: 0x16c
	// Line 174, Address: 0x24bcac, Func Offset: 0x17c
	// Line 182, Address: 0x24bcbc, Func Offset: 0x18c
	// Line 183, Address: 0x24bcc8, Func Offset: 0x198
	// Line 188, Address: 0x24bcd0, Func Offset: 0x1a0
	// Line 192, Address: 0x24bcdc, Func Offset: 0x1ac
	// Line 189, Address: 0x24bce0, Func Offset: 0x1b0
	// Line 188, Address: 0x24bcec, Func Offset: 0x1bc
	// Line 189, Address: 0x24bcf4, Func Offset: 0x1c4
	// Line 190, Address: 0x24bcf8, Func Offset: 0x1c8
	// Line 192, Address: 0x24bcfc, Func Offset: 0x1cc
	// Line 189, Address: 0x24bd00, Func Offset: 0x1d0
	// Line 190, Address: 0x24bd14, Func Offset: 0x1e4
	// Line 192, Address: 0x24bd28, Func Offset: 0x1f8
	// Line 199, Address: 0x24bd38, Func Offset: 0x208
	// Line 200, Address: 0x24bd44, Func Offset: 0x214
	// Line 203, Address: 0x24bd4c, Func Offset: 0x21c
	// Line 204, Address: 0x24bd5c, Func Offset: 0x22c
	// Line 212, Address: 0x24bd6c, Func Offset: 0x23c
	// Line 213, Address: 0x24bd74, Func Offset: 0x244
	// Func End, Address: 0x24bd88, Func Offset: 0x258
}

// iRayHitsEnvFast__FPC6_xRay3PC5_xEnv
// Start address: 0x24bd90
uint32 iRayHitsEnvFast(_xRay3* r, _xEnv* env)
{
	RwV3d temp;
	float32 len;
	RpIntersection isx;
	// Line 116, Address: 0x24bd90, Func Offset: 0
	// Line 121, Address: 0x24bda0, Func Offset: 0x10
	// Line 122, Address: 0x24bda8, Func Offset: 0x18
	// Line 125, Address: 0x24bea0, Func Offset: 0x110
	// Line 124, Address: 0x24bea4, Func Offset: 0x114
	// Line 125, Address: 0x24bea8, Func Offset: 0x118
	// Line 122, Address: 0x24beac, Func Offset: 0x11c
	// Line 124, Address: 0x24bed4, Func Offset: 0x144
	// Line 125, Address: 0x24bed8, Func Offset: 0x148
	// Line 132, Address: 0x24bee8, Func Offset: 0x158
	// Line 133, Address: 0x24bef4, Func Offset: 0x164
	// Line 138, Address: 0x24befc, Func Offset: 0x16c
	// Line 142, Address: 0x24bf08, Func Offset: 0x178
	// Line 139, Address: 0x24bf0c, Func Offset: 0x17c
	// Line 138, Address: 0x24bf18, Func Offset: 0x188
	// Line 139, Address: 0x24bf20, Func Offset: 0x190
	// Line 140, Address: 0x24bf24, Func Offset: 0x194
	// Line 142, Address: 0x24bf28, Func Offset: 0x198
	// Line 139, Address: 0x24bf2c, Func Offset: 0x19c
	// Line 140, Address: 0x24bf40, Func Offset: 0x1b0
	// Line 142, Address: 0x24bf54, Func Offset: 0x1c4
	// Line 149, Address: 0x24bf64, Func Offset: 0x1d4
	// Line 150, Address: 0x24bf6c, Func Offset: 0x1dc
	// Func End, Address: 0x24bf80, Func Offset: 0x1f0
}

// iRayHitsModelFast__FPC6_xRay3PC14xModelInstance
// Start address: 0x24bf80
uint32 iRayHitsModelFast(_xRay3* r, xModelInstance* m)
{
	RwV3d temp;
	float32 len;
	RpIntersection isx;
	// Line 88, Address: 0x24bf80, Func Offset: 0
	// Line 93, Address: 0x24bf90, Func Offset: 0x10
	// Line 94, Address: 0x24bf98, Func Offset: 0x18
	// Line 97, Address: 0x24c090, Func Offset: 0x110
	// Line 96, Address: 0x24c094, Func Offset: 0x114
	// Line 97, Address: 0x24c098, Func Offset: 0x118
	// Line 94, Address: 0x24c09c, Func Offset: 0x11c
	// Line 96, Address: 0x24c0c4, Func Offset: 0x144
	// Line 97, Address: 0x24c0c8, Func Offset: 0x148
	// Line 99, Address: 0x24c0d4, Func Offset: 0x154
	// Line 100, Address: 0x24c0e0, Func Offset: 0x160
	// Line 105, Address: 0x24c0e8, Func Offset: 0x168
	// Line 109, Address: 0x24c0f4, Func Offset: 0x174
	// Line 106, Address: 0x24c0f8, Func Offset: 0x178
	// Line 105, Address: 0x24c104, Func Offset: 0x184
	// Line 106, Address: 0x24c10c, Func Offset: 0x18c
	// Line 107, Address: 0x24c110, Func Offset: 0x190
	// Line 109, Address: 0x24c114, Func Offset: 0x194
	// Line 106, Address: 0x24c118, Func Offset: 0x198
	// Line 107, Address: 0x24c12c, Func Offset: 0x1ac
	// Line 109, Address: 0x24c140, Func Offset: 0x1c0
	// Line 111, Address: 0x24c14c, Func Offset: 0x1cc
	// Line 112, Address: 0x24c154, Func Offset: 0x1d4
	// Func End, Address: 0x24c168, Func Offset: 0x1e8
}

// rayHitsEnvFastCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x24c170
RpCollisionTriangle* rayHitsEnvFastCB()
{
	// Line 70, Address: 0x24c170, Func Offset: 0
	// Line 84, Address: 0x24c178, Func Offset: 0x8
	// Func End, Address: 0x24c180, Func Offset: 0x10
}

// rayHitsModelFastCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x24c180
RpCollisionTriangle* rayHitsModelFastCB()
{
	// Line 47, Address: 0x24c180, Func Offset: 0
	// Line 61, Address: 0x24c188, Func Offset: 0x8
	// Func End, Address: 0x24c190, Func Offset: 0x10
}

// iCollideFastInit__FP7_xScene
// Start address: 0x24c190
void iCollideFastInit()
{
	// Line 30, Address: 0x24c190, Func Offset: 0
	// Func End, Address: 0x24c198, Func Offset: 0x8
}

