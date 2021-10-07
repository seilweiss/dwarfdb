typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct RxNodeDefinition;
typedef struct RwV3d;
typedef struct _xCollis;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpTriangle;
typedef struct xModelPool;
typedef struct RxPipeline;
typedef struct _xBox;
typedef struct rxHeapBlockHeader;
typedef struct RwLine;
typedef struct _xSphere;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct _iCollis;
typedef struct rxHeapFreeBlock;
typedef struct xModelInstance;
typedef struct xAnimPlay;
typedef struct RpAtomic;
typedef struct xAnimState;
typedef struct RxClusterDefinition;
typedef struct RpGeometry;
typedef struct RwObjectHasFrame;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RwLLLink;
typedef struct RpCollisionTriangle;
typedef struct RpMorphTarget;
typedef struct RwRGBAReal;
typedef struct RpIntersection;
typedef struct iEnv;
typedef struct _xRay3;
typedef struct RpCollSector;
typedef struct RpWorld;
typedef struct _xMat3x3;
typedef struct xAnimFile;
typedef struct RxPipelineCluster;
typedef struct RwMatrixTag;
typedef struct RpMeshHeader;
typedef struct xAnimEffect;
typedef enum RxClusterValid;
typedef struct RpMaterial;
typedef struct xAnimTransitionList;
typedef enum RpIntersectType;
typedef struct RwTexture;
typedef struct xAnimTable;
typedef enum RwTextureFilterMode;
typedef struct RpLight;
typedef struct RwObject;
typedef struct RpWorldSector;
typedef struct RwRaster;
typedef struct RwFrame;
typedef struct RwRGBA;
typedef struct _xMat4x3;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct xAnimActiveEffect;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct RwLinkList;
typedef struct rxReq;
typedef struct RpPolygon;
typedef struct RwTexDictionary;
typedef struct _xQuat;
typedef struct RpVertexNormal;
typedef struct RpIntersectData;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef enum RxClusterForcePresent;
typedef struct RwBBox;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct _xVec3;
typedef struct RpClump;
typedef struct RxIoSpec;
typedef enum RpWorldRenderOrder;
typedef struct _xEnv;
typedef struct RxNodeMethods;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct RwSurfaceProperties;
typedef enum rxEmbeddedPacketState;
typedef struct RpMaterialList;
typedef struct RpSector;
typedef struct RwSphere;
typedef enum Dimension;
typedef enum RwTextureAddressMode;

typedef RpWorldSector*(*type_0)(RpWorldSector*);
typedef void(*type_1)(RxNodeDefinition*);
typedef int32(*type_4)(RxPipelineNode*);
typedef void(*type_7)(RxPipelineNode*);
typedef int32(*type_9)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_10)(RwObjectHasFrame*);
typedef RpCollisionTriangle*(*type_11)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef uint32(*type_13)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpCollisionTriangle*(*type_19)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef int32(*type_20)(RxNodeDefinition*);
typedef RpCollisionTriangle*(*type_22)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef uint32(*type_24)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_25)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef void(*type_26)(RwResEntry*);
typedef void(*type_28)(xMemPool*, void*);
typedef uint32(*type_29)(xAnimTransition*, xAnimSingle*, void*);
typedef RpClump*(*type_30)(RpClump*, void*);
typedef RpCollisionTriangle*(*type_32)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef RpCollisionTriangle*(*type_34)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef RpCollisionTriangle*(*type_35)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef RpCollisionTriangle*(*type_37)(RpIntersection*, RpCollisionTriangle*, float32, void*);
typedef RpAtomic*(*type_38)(RpAtomic*);
typedef RpCollisionTriangle*(*type_40)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);

typedef uint16 type_2[3];
typedef uint16 type_3[3];
typedef float32 type_5[4];
typedef float32 type_6[4];
typedef uint8 type_8[2];
typedef RxCluster type_12[1];
typedef RpLight* type_14[2];
typedef uint32 type_15[4];
typedef _xVec3 type_17[2];
typedef RwFrame* type_18[2];
typedef _xQuat type_21[2];
typedef RwTexCoords* type_23[8];
typedef RwTexCoords* type_27[8];
typedef int8 type_31[32];
typedef int8 type_33[32];
typedef float32 type_36[2];
typedef RwV3d* type_39[3];

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct _xCollis
{
	uint32 flags;
	uint32 oid;
	void* optr;
	float32 dist;
	_xVec3 norm;
	_xVec3 tohit;
	_xVec3 depen;
	_xVec3 hdng;
	_iCollis ixtra;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _iCollis
{
	int32 unknown;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum Dimension
{
	XDIM,
	YDIM,
	ZDIM
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

float32 cbath;
_xRay3 cbray;
_xMat3x3* cbmat;
RpIntersection cbisx_local;
uint8 cbnumcs;
uint8 cbmaxcs;
uint8 FLOOR;
uint8 NEXT2;
uint8 OTHER;
RpCollisionTriangle*(*rayHitsModelBackwardCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*rayHitsModelCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*rayHitsEnvBackwardCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*rayHitsEnvCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsModel3CB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsModelCB)(RpIntersection*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsEnv4CB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsEnv3CB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
RpCollisionTriangle*(*sphereHitsEnvCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);

void iBoxForModelLocal(_xBox* o, xModelInstance* m);
void iBoxForModel(_xBox* o, xModelInstance* m);
uint32 iRayHitsModel(_xRay3* r, xModelInstance* m, _xCollis* coll);
uint32 iRayHitsCamEnv(_xRay3* r, _xEnv* env, _xCollis* coll);
uint32 iRayHitsEnv(_xRay3* r, _xEnv* env, _xCollis* coll);
int32 iSphereHitsModel3(_xSphere* b, xModelInstance* m, _xCollis* colls, uint8 ncolls, float32 sth);
int32 iSphereHitsEnv4(_xSphere* b, _xEnv* env, _xMat3x3* mat, _xCollis* colls);
int32 iSphereHitsEnv3(_xSphere* b, _xEnv* env, _xCollis* colls, uint8 ncolls, float32 sth);
RpCollisionTriangle* rayHitsModelBackwardCB(RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsModelCB(RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data);
void properSphereIsectTri(_xVec3* center, float32 radius, _xVec3* tohit, float32* dist_ptr, RpCollisionTriangle* tri);
void FindNearestPointOnLine(RwV3d* result, RwV3d* point, RwV3d* start, RwV3d* end);
int32 PointWithinTriangle(RwV3d* pt, RwV3d** tri, RwV3d* normal);
void iCollideInit();

// iBoxForModelLocal__FP5_xBoxPC14xModelInstance
// Start address: 0x12d150
void iBoxForModelLocal(_xBox* o, xModelInstance* m)
{
	uint16 idx;
	RpMorphTarget* mtgt;
	RpGeometry* geom;
	// Line 1478, Address: 0x12d150, Func Offset: 0
	// Line 1491, Address: 0x12d16c, Func Offset: 0x1c
	// Line 1494, Address: 0x12d174, Func Offset: 0x24
	// Line 1497, Address: 0x12d184, Func Offset: 0x34
	// Line 1502, Address: 0x12d18c, Func Offset: 0x3c
	// Line 1504, Address: 0x12d190, Func Offset: 0x40
	// Line 1505, Address: 0x12d19c, Func Offset: 0x4c
	// Line 1506, Address: 0x12d1a8, Func Offset: 0x58
	// Line 1507, Address: 0x12d1bc, Func Offset: 0x6c
	// Line 1506, Address: 0x12d1c0, Func Offset: 0x70
	// Line 1507, Address: 0x12d1c4, Func Offset: 0x74
	// Line 1508, Address: 0x12d1dc, Func Offset: 0x8c
	// Func End, Address: 0x12d1fc, Func Offset: 0xac
}

// iBoxForModel__FP5_xBoxPC14xModelInstance
// Start address: 0x12d200
void iBoxForModel(_xBox* o, xModelInstance* m)
{
	// Line 1470, Address: 0x12d200, Func Offset: 0
	// Line 1471, Address: 0x12d220, Func Offset: 0x20
	// Line 1474, Address: 0x12d298, Func Offset: 0x98
	// Line 1475, Address: 0x12d2cc, Func Offset: 0xcc
	// Line 1476, Address: 0x12d300, Func Offset: 0x100
	// Func End, Address: 0x12d324, Func Offset: 0x124
}

// iRayHitsModel__FPC6_xRay3PC14xModelInstanceP8_xCollis
// Start address: 0x12d330
uint32 iRayHitsModel(_xRay3* r, xModelInstance* m, _xCollis* coll)
{
	RwV3d temp;
	_xMat4x3* mat;
	float32 len;
	RpIntersection isx;
	// Line 1380, Address: 0x12d330, Func Offset: 0
	// Line 1387, Address: 0x12d34c, Func Offset: 0x1c
	// Line 1388, Address: 0x12d354, Func Offset: 0x24
	// Line 1391, Address: 0x12d454, Func Offset: 0x124
	// Line 1388, Address: 0x12d45c, Func Offset: 0x12c
	// Line 1391, Address: 0x12d484, Func Offset: 0x154
	// Line 1392, Address: 0x12d4cc, Func Offset: 0x19c
	// Line 1393, Address: 0x12d4dc, Func Offset: 0x1ac
	// Line 1396, Address: 0x12d4e0, Func Offset: 0x1b0
	// Line 1397, Address: 0x12d4f0, Func Offset: 0x1c0
	// Line 1405, Address: 0x12d500, Func Offset: 0x1d0
	// Line 1401, Address: 0x12d504, Func Offset: 0x1d4
	// Line 1405, Address: 0x12d508, Func Offset: 0x1d8
	// Line 1409, Address: 0x12d518, Func Offset: 0x1e8
	// Line 1415, Address: 0x12d538, Func Offset: 0x208
	// Line 1418, Address: 0x12d53c, Func Offset: 0x20c
	// Line 1420, Address: 0x12d544, Func Offset: 0x214
	// Line 1417, Address: 0x12d54c, Func Offset: 0x21c
	// Line 1415, Address: 0x12d550, Func Offset: 0x220
	// Line 1420, Address: 0x12d554, Func Offset: 0x224
	// Line 1415, Address: 0x12d558, Func Offset: 0x228
	// Line 1417, Address: 0x12d55c, Func Offset: 0x22c
	// Line 1418, Address: 0x12d568, Func Offset: 0x238
	// Line 1420, Address: 0x12d56c, Func Offset: 0x23c
	// Line 1425, Address: 0x12d578, Func Offset: 0x248
	// Line 1429, Address: 0x12d588, Func Offset: 0x258
	// Line 1426, Address: 0x12d58c, Func Offset: 0x25c
	// Line 1425, Address: 0x12d598, Func Offset: 0x268
	// Line 1426, Address: 0x12d5a0, Func Offset: 0x270
	// Line 1427, Address: 0x12d5a4, Func Offset: 0x274
	// Line 1429, Address: 0x12d5a8, Func Offset: 0x278
	// Line 1426, Address: 0x12d5ac, Func Offset: 0x27c
	// Line 1427, Address: 0x12d5c0, Func Offset: 0x290
	// Line 1429, Address: 0x12d5d4, Func Offset: 0x2a4
	// Line 1432, Address: 0x12d5e0, Func Offset: 0x2b0
	// Line 1433, Address: 0x12d5f0, Func Offset: 0x2c0
	// Line 1436, Address: 0x12d600, Func Offset: 0x2d0
	// Line 1437, Address: 0x12d604, Func Offset: 0x2d4
	// Line 1436, Address: 0x12d61c, Func Offset: 0x2ec
	// Line 1437, Address: 0x12d620, Func Offset: 0x2f0
	// Func End, Address: 0x12d628, Func Offset: 0x2f8
}

// iRayHitsCamEnv__FPC6_xRay3PC5_xEnvP8_xCollis
// Start address: 0x12d630
uint32 iRayHitsCamEnv(_xRay3* r, _xEnv* env, _xCollis* coll)
{
	RwV3d temp;
	float32 len;
	RpIntersection isx;
	// Line 1322, Address: 0x12d630, Func Offset: 0
	// Line 1329, Address: 0x12d648, Func Offset: 0x18
	// Line 1330, Address: 0x12d650, Func Offset: 0x20
	// Line 1333, Address: 0x12d750, Func Offset: 0x120
	// Line 1336, Address: 0x12d758, Func Offset: 0x128
	// Line 1332, Address: 0x12d760, Func Offset: 0x130
	// Line 1330, Address: 0x12d764, Func Offset: 0x134
	// Line 1332, Address: 0x12d78c, Func Offset: 0x15c
	// Line 1333, Address: 0x12d798, Func Offset: 0x168
	// Line 1336, Address: 0x12d79c, Func Offset: 0x16c
	// Line 1337, Address: 0x12d7e4, Func Offset: 0x1b4
	// Line 1338, Address: 0x12d7f4, Func Offset: 0x1c4
	// Line 1341, Address: 0x12d7f8, Func Offset: 0x1c8
	// Line 1342, Address: 0x12d808, Func Offset: 0x1d8
	// Line 1346, Address: 0x12d818, Func Offset: 0x1e8
	// Line 1348, Address: 0x12d828, Func Offset: 0x1f8
	// Line 1349, Address: 0x12d83c, Func Offset: 0x20c
	// Line 1352, Address: 0x12d844, Func Offset: 0x214
	// Line 1358, Address: 0x12d85c, Func Offset: 0x22c
	// Line 1359, Address: 0x12d86c, Func Offset: 0x23c
	// Line 1358, Address: 0x12d878, Func Offset: 0x248
	// Line 1359, Address: 0x12d880, Func Offset: 0x250
	// Line 1360, Address: 0x12d884, Func Offset: 0x254
	// Line 1359, Address: 0x12d888, Func Offset: 0x258
	// Line 1360, Address: 0x12d89c, Func Offset: 0x26c
	// Line 1362, Address: 0x12d8b0, Func Offset: 0x280
	// Line 1364, Address: 0x12d8c0, Func Offset: 0x290
	// Line 1365, Address: 0x12d8d0, Func Offset: 0x2a0
	// Line 1368, Address: 0x12d8d8, Func Offset: 0x2a8
	// Line 1372, Address: 0x12d8ec, Func Offset: 0x2bc
	// Line 1373, Address: 0x12d8fc, Func Offset: 0x2cc
	// Line 1376, Address: 0x12d90c, Func Offset: 0x2dc
	// Line 1377, Address: 0x12d910, Func Offset: 0x2e0
	// Line 1376, Address: 0x12d924, Func Offset: 0x2f4
	// Line 1377, Address: 0x12d928, Func Offset: 0x2f8
	// Func End, Address: 0x12d930, Func Offset: 0x300
}

// iRayHitsEnv__FPC6_xRay3PC5_xEnvP8_xCollis
// Start address: 0x12d930
uint32 iRayHitsEnv(_xRay3* r, _xEnv* env, _xCollis* coll)
{
	float32 len;
	RpIntersection isx;
	// Line 1269, Address: 0x12d930, Func Offset: 0
	// Line 1276, Address: 0x12d948, Func Offset: 0x18
	// Line 1277, Address: 0x12d950, Func Offset: 0x20
	// Line 1280, Address: 0x12da50, Func Offset: 0x120
	// Line 1283, Address: 0x12da58, Func Offset: 0x128
	// Line 1279, Address: 0x12da60, Func Offset: 0x130
	// Line 1277, Address: 0x12da64, Func Offset: 0x134
	// Line 1279, Address: 0x12da8c, Func Offset: 0x15c
	// Line 1280, Address: 0x12da98, Func Offset: 0x168
	// Line 1283, Address: 0x12da9c, Func Offset: 0x16c
	// Line 1284, Address: 0x12dae4, Func Offset: 0x1b4
	// Line 1285, Address: 0x12daf4, Func Offset: 0x1c4
	// Line 1288, Address: 0x12daf8, Func Offset: 0x1c8
	// Line 1289, Address: 0x12db08, Func Offset: 0x1d8
	// Line 1292, Address: 0x12db18, Func Offset: 0x1e8
	// Line 1293, Address: 0x12db34, Func Offset: 0x204
	// Line 1294, Address: 0x12db44, Func Offset: 0x214
	// Line 1313, Address: 0x12db54, Func Offset: 0x224
	// Line 1314, Address: 0x12db64, Func Offset: 0x234
	// Line 1317, Address: 0x12db74, Func Offset: 0x244
	// Line 1318, Address: 0x12db78, Func Offset: 0x248
	// Line 1317, Address: 0x12db8c, Func Offset: 0x25c
	// Line 1318, Address: 0x12db90, Func Offset: 0x260
	// Func End, Address: 0x12db98, Func Offset: 0x268
}

// iSphereHitsModel3__FPC8_xSpherePC14xModelInstanceP8_xCollisUcf
// Start address: 0x12dba0
int32 iSphereHitsModel3(_xSphere* b, xModelInstance* m, _xCollis* colls, uint8 ncolls, float32 sth)
{
	_xMat3x3 mnormal;
	_xMat4x3* mat;
	uint8 idx;
	RpIntersection isx;
	// Line 1185, Address: 0x12dba0, Func Offset: 0
	// Line 1194, Address: 0x12dbd4, Func Offset: 0x34
	// Line 1195, Address: 0x12dbe4, Func Offset: 0x44
	// Line 1202, Address: 0x12dbf4, Func Offset: 0x54
	// Line 1198, Address: 0x12dbf8, Func Offset: 0x58
	// Line 1202, Address: 0x12dbfc, Func Offset: 0x5c
	// Line 1206, Address: 0x12dc0c, Func Offset: 0x6c
	// Line 1211, Address: 0x12dc30, Func Offset: 0x90
	// Line 1213, Address: 0x12dc3c, Func Offset: 0x9c
	// Line 1214, Address: 0x12dc84, Func Offset: 0xe4
	// Line 1216, Address: 0x12dc8c, Func Offset: 0xec
	// Line 1214, Address: 0x12dc90, Func Offset: 0xf0
	// Line 1216, Address: 0x12dc98, Func Offset: 0xf8
	// Line 1218, Address: 0x12dcb4, Func Offset: 0x114
	// Line 1217, Address: 0x12dcb8, Func Offset: 0x118
	// Line 1218, Address: 0x12dcbc, Func Offset: 0x11c
	// Line 1217, Address: 0x12dcc0, Func Offset: 0x120
	// Line 1218, Address: 0x12dcc4, Func Offset: 0x124
	// Line 1217, Address: 0x12dcd0, Func Offset: 0x130
	// Line 1218, Address: 0x12dcd8, Func Offset: 0x138
	// Line 1217, Address: 0x12dce0, Func Offset: 0x140
	// Line 1218, Address: 0x12dce4, Func Offset: 0x144
	// Line 1217, Address: 0x12dcf0, Func Offset: 0x150
	// Line 1218, Address: 0x12dcf4, Func Offset: 0x154
	// Line 1217, Address: 0x12dd00, Func Offset: 0x160
	// Line 1218, Address: 0x12dd04, Func Offset: 0x164
	// Line 1217, Address: 0x12dd10, Func Offset: 0x170
	// Line 1218, Address: 0x12dd14, Func Offset: 0x174
	// Line 1217, Address: 0x12dd20, Func Offset: 0x180
	// Line 1218, Address: 0x12dd24, Func Offset: 0x184
	// Line 1217, Address: 0x12dd30, Func Offset: 0x190
	// Line 1218, Address: 0x12dd34, Func Offset: 0x194
	// Line 1217, Address: 0x12dd40, Func Offset: 0x1a0
	// Line 1218, Address: 0x12dd44, Func Offset: 0x1a4
	// Line 1216, Address: 0x12dd6c, Func Offset: 0x1cc
	// Line 1218, Address: 0x12dd7c, Func Offset: 0x1dc
	// Line 1219, Address: 0x12dd80, Func Offset: 0x1e0
	// Line 1217, Address: 0x12dd88, Func Offset: 0x1e8
	// Line 1218, Address: 0x12dd8c, Func Offset: 0x1ec
	// Line 1219, Address: 0x12dd98, Func Offset: 0x1f8
	// Line 1222, Address: 0x12dda8, Func Offset: 0x208
	// Line 1223, Address: 0x12ddac, Func Offset: 0x20c
	// Line 1226, Address: 0x12ddb4, Func Offset: 0x214
	// Line 1224, Address: 0x12ddb8, Func Offset: 0x218
	// Line 1226, Address: 0x12ddbc, Func Offset: 0x21c
	// Line 1233, Address: 0x12ddc8, Func Offset: 0x228
	// Line 1254, Address: 0x12dde0, Func Offset: 0x240
	// Line 1255, Address: 0x12ddf0, Func Offset: 0x250
	// Line 1256, Address: 0x12ddf8, Func Offset: 0x258
	// Line 1257, Address: 0x12de08, Func Offset: 0x268
	// Line 1258, Address: 0x12de18, Func Offset: 0x278
	// Line 1259, Address: 0x12de28, Func Offset: 0x288
	// Line 1260, Address: 0x12de38, Func Offset: 0x298
	// Line 1261, Address: 0x12de48, Func Offset: 0x2a8
	// Line 1262, Address: 0x12de54, Func Offset: 0x2b4
	// Line 1263, Address: 0x12de58, Func Offset: 0x2b8
	// Line 1261, Address: 0x12de5c, Func Offset: 0x2bc
	// Line 1263, Address: 0x12de60, Func Offset: 0x2c0
	// Line 1264, Address: 0x12de7c, Func Offset: 0x2dc
	// Line 1266, Address: 0x12de80, Func Offset: 0x2e0
	// Line 1267, Address: 0x12de84, Func Offset: 0x2e4
	// Func End, Address: 0x12deb0, Func Offset: 0x310
}

// iSphereHitsEnv4__FPC8_xSpherePC5_xEnvPC8_xMat3x3P8_xCollis
// Start address: 0x12deb0
int32 iSphereHitsEnv4(_xSphere* b, _xEnv* env, _xMat3x3* mat, _xCollis* colls)
{
	float32 s;
	int32 numcs;
	_xCollis* cend;
	_xCollis* c;
	RpIntersection isx;
	// Line 1077, Address: 0x12deb0, Func Offset: 0
	// Line 1085, Address: 0x12ded4, Func Offset: 0x24
	// Line 1086, Address: 0x12dee0, Func Offset: 0x30
	// Line 1092, Address: 0x12def0, Func Offset: 0x40
	// Line 1097, Address: 0x12def4, Func Offset: 0x44
	// Line 1107, Address: 0x12df14, Func Offset: 0x64
	// Line 1109, Address: 0x12df20, Func Offset: 0x70
	// Line 1108, Address: 0x12df24, Func Offset: 0x74
	// Line 1109, Address: 0x12df34, Func Offset: 0x84
	// Line 1111, Address: 0x12df40, Func Offset: 0x90
	// Line 1112, Address: 0x12df50, Func Offset: 0xa0
	// Line 1113, Address: 0x12df60, Func Offset: 0xb0
	// Line 1114, Address: 0x12df74, Func Offset: 0xc4
	// Line 1115, Address: 0x12df80, Func Offset: 0xd0
	// Line 1116, Address: 0x12df90, Func Offset: 0xe0
	// Line 1117, Address: 0x12dfa4, Func Offset: 0xf4
	// Line 1118, Address: 0x12dfa8, Func Offset: 0xf8
	// Line 1119, Address: 0x12dfb0, Func Offset: 0x100
	// Line 1122, Address: 0x12dfc0, Func Offset: 0x110
	// Line 1146, Address: 0x12dfd0, Func Offset: 0x120
	// Line 1150, Address: 0x12dfdc, Func Offset: 0x12c
	// Line 1155, Address: 0x12dfe4, Func Offset: 0x134
	// Line 1147, Address: 0x12dfe8, Func Offset: 0x138
	// Line 1150, Address: 0x12dff8, Func Offset: 0x148
	// Line 1151, Address: 0x12dffc, Func Offset: 0x14c
	// Line 1150, Address: 0x12e000, Func Offset: 0x150
	// Line 1151, Address: 0x12e004, Func Offset: 0x154
	// Line 1152, Address: 0x12e00c, Func Offset: 0x15c
	// Line 1153, Address: 0x12e018, Func Offset: 0x168
	// Line 1155, Address: 0x12e024, Func Offset: 0x174
	// Line 1156, Address: 0x12e044, Func Offset: 0x194
	// Line 1157, Address: 0x12e050, Func Offset: 0x1a0
	// Line 1158, Address: 0x12e05c, Func Offset: 0x1ac
	// Line 1159, Address: 0x12e068, Func Offset: 0x1b8
	// Line 1161, Address: 0x12e0a0, Func Offset: 0x1f0
	// Line 1162, Address: 0x12e0a4, Func Offset: 0x1f4
	// Line 1163, Address: 0x12e0b0, Func Offset: 0x200
	// Line 1165, Address: 0x12e0bc, Func Offset: 0x20c
	// Line 1166, Address: 0x12e0c0, Func Offset: 0x210
	// Line 1169, Address: 0x12e0d0, Func Offset: 0x220
	// Func End, Address: 0x12e0ec, Func Offset: 0x23c
}

// iSphereHitsEnv3__FPC8_xSpherePC5_xEnvP8_xCollisUcf
// Start address: 0x12e0f0
int32 iSphereHitsEnv3(_xSphere* b, _xEnv* env, _xCollis* colls, uint8 ncolls, float32 sth)
{
	uint8 idx;
	RpIntersection isx;
	// Line 1017, Address: 0x12e0f0, Func Offset: 0
	// Line 1027, Address: 0x12e110, Func Offset: 0x20
	// Line 1026, Address: 0x12e118, Func Offset: 0x28
	// Line 1027, Address: 0x12e128, Func Offset: 0x38
	// Line 1029, Address: 0x12e138, Func Offset: 0x48
	// Line 1031, Address: 0x12e154, Func Offset: 0x64
	// Line 1030, Address: 0x12e158, Func Offset: 0x68
	// Line 1031, Address: 0x12e15c, Func Offset: 0x6c
	// Line 1030, Address: 0x12e160, Func Offset: 0x70
	// Line 1031, Address: 0x12e164, Func Offset: 0x74
	// Line 1030, Address: 0x12e170, Func Offset: 0x80
	// Line 1031, Address: 0x12e178, Func Offset: 0x88
	// Line 1030, Address: 0x12e180, Func Offset: 0x90
	// Line 1031, Address: 0x12e184, Func Offset: 0x94
	// Line 1030, Address: 0x12e190, Func Offset: 0xa0
	// Line 1031, Address: 0x12e194, Func Offset: 0xa4
	// Line 1030, Address: 0x12e1a0, Func Offset: 0xb0
	// Line 1031, Address: 0x12e1a4, Func Offset: 0xb4
	// Line 1030, Address: 0x12e1b0, Func Offset: 0xc0
	// Line 1031, Address: 0x12e1b4, Func Offset: 0xc4
	// Line 1030, Address: 0x12e1c0, Func Offset: 0xd0
	// Line 1031, Address: 0x12e1c4, Func Offset: 0xd4
	// Line 1030, Address: 0x12e1d0, Func Offset: 0xe0
	// Line 1031, Address: 0x12e1d4, Func Offset: 0xe4
	// Line 1030, Address: 0x12e1e0, Func Offset: 0xf0
	// Line 1031, Address: 0x12e1e4, Func Offset: 0xf4
	// Line 1029, Address: 0x12e20c, Func Offset: 0x11c
	// Line 1031, Address: 0x12e21c, Func Offset: 0x12c
	// Line 1032, Address: 0x12e220, Func Offset: 0x130
	// Line 1030, Address: 0x12e228, Func Offset: 0x138
	// Line 1031, Address: 0x12e22c, Func Offset: 0x13c
	// Line 1032, Address: 0x12e238, Func Offset: 0x148
	// Line 1035, Address: 0x12e248, Func Offset: 0x158
	// Line 1036, Address: 0x12e24c, Func Offset: 0x15c
	// Line 1039, Address: 0x12e254, Func Offset: 0x164
	// Line 1037, Address: 0x12e258, Func Offset: 0x168
	// Line 1039, Address: 0x12e25c, Func Offset: 0x16c
	// Line 1046, Address: 0x12e268, Func Offset: 0x178
	// Line 1047, Address: 0x12e284, Func Offset: 0x194
	// Line 1048, Address: 0x12e294, Func Offset: 0x1a4
	// Line 1074, Address: 0x12e2a4, Func Offset: 0x1b4
	// Line 1075, Address: 0x12e2a8, Func Offset: 0x1b8
	// Func End, Address: 0x12e2c8, Func Offset: 0x1d8
}

// rayHitsModelBackwardCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x12e2d0
RpCollisionTriangle* rayHitsModelBackwardCB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 991, Address: 0x12e2d0, Func Offset: 0
	// Line 992, Address: 0x12e320, Func Offset: 0x50
	// Func End, Address: 0x12e328, Func Offset: 0x58
}

// rayHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x12e330
RpCollisionTriangle* rayHitsModelCB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 976, Address: 0x12e330, Func Offset: 0
	// Line 977, Address: 0x12e39c, Func Offset: 0x6c
	// Func End, Address: 0x12e3a4, Func Offset: 0x74
}

// rayHitsEnvBackwardCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x12e3b0
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	_xCollis* coll;
	// Line 942, Address: 0x12e3b0, Func Offset: 0
	// Line 944, Address: 0x12e3b8, Func Offset: 0x8
	// Line 942, Address: 0x12e3bc, Func Offset: 0xc
	// Line 944, Address: 0x12e3c0, Func Offset: 0x10
	// Line 947, Address: 0x12e3c4, Func Offset: 0x14
	// Line 944, Address: 0x12e3c8, Func Offset: 0x18
	// Line 947, Address: 0x12e3cc, Func Offset: 0x1c
	// Line 948, Address: 0x12e3dc, Func Offset: 0x2c
	// Line 952, Address: 0x12e3e4, Func Offset: 0x34
	// Line 953, Address: 0x12e3ec, Func Offset: 0x3c
	// Line 954, Address: 0x12e400, Func Offset: 0x50
	// Line 955, Address: 0x12e408, Func Offset: 0x58
	// Line 959, Address: 0x12e410, Func Offset: 0x60
	// Line 960, Address: 0x12e414, Func Offset: 0x64
	// Line 961, Address: 0x12e418, Func Offset: 0x68
	// Line 960, Address: 0x12e41c, Func Offset: 0x6c
	// Line 962, Address: 0x12e424, Func Offset: 0x74
	// Func End, Address: 0x12e42c, Func Offset: 0x7c
}

// rayHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x12e430
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	_xCollis* coll;
	// Line 902, Address: 0x12e430, Func Offset: 0
	// Line 905, Address: 0x12e438, Func Offset: 0x8
	// Line 902, Address: 0x12e43c, Func Offset: 0xc
	// Line 905, Address: 0x12e440, Func Offset: 0x10
	// Line 906, Address: 0x12e450, Func Offset: 0x20
	// Line 910, Address: 0x12e458, Func Offset: 0x28
	// Line 911, Address: 0x12e460, Func Offset: 0x30
	// Line 912, Address: 0x12e474, Func Offset: 0x44
	// Line 913, Address: 0x12e47c, Func Offset: 0x4c
	// Line 917, Address: 0x12e484, Func Offset: 0x54
	// Line 918, Address: 0x12e488, Func Offset: 0x58
	// Line 921, Address: 0x12e494, Func Offset: 0x64
	// Line 922, Address: 0x12e4a4, Func Offset: 0x74
	// Line 925, Address: 0x12e4bc, Func Offset: 0x8c
	// Func End, Address: 0x12e4c4, Func Offset: 0x94
}

// sphereHitsModel3CB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x12e4d0
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float32 dist, void* data)
{
	// Line 888, Address: 0x12e4d4, Func Offset: 0x4
	// Func End, Address: 0x12e4e8, Func Offset: 0x18
}

// sphereHitsEnv4CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x12e4f0
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	float32 ddist;
	_xCollis* c;
	uint8 idx;
	_xVec3 tohit;
	float32 radius;
	_xCollis* colls;
	// Line 725, Address: 0x12e4f0, Func Offset: 0
	// Line 727, Address: 0x12e50c, Func Offset: 0x1c
	// Line 739, Address: 0x12e510, Func Offset: 0x20
	// Line 726, Address: 0x12e51c, Func Offset: 0x2c
	// Line 739, Address: 0x12e520, Func Offset: 0x30
	// Line 744, Address: 0x12e524, Func Offset: 0x34
	// Line 739, Address: 0x12e530, Func Offset: 0x40
	// Line 744, Address: 0x12e534, Func Offset: 0x44
	// Line 756, Address: 0x12e53c, Func Offset: 0x4c
	// Line 760, Address: 0x12e558, Func Offset: 0x68
	// Line 763, Address: 0x12e560, Func Offset: 0x70
	// Line 766, Address: 0x12e570, Func Offset: 0x80
	// Line 772, Address: 0x12e578, Func Offset: 0x88
	// Line 774, Address: 0x12e588, Func Offset: 0x98
	// Line 780, Address: 0x12e598, Func Offset: 0xa8
	// Line 781, Address: 0x12e5a0, Func Offset: 0xb0
	// Line 780, Address: 0x12e5a8, Func Offset: 0xb8
	// Line 781, Address: 0x12e5ac, Func Offset: 0xbc
	// Line 782, Address: 0x12e5f0, Func Offset: 0x100
	// Line 788, Address: 0x12e5f8, Func Offset: 0x108
	// Line 789, Address: 0x12e5fc, Func Offset: 0x10c
	// Line 790, Address: 0x12e614, Func Offset: 0x124
	// Line 791, Address: 0x12e61c, Func Offset: 0x12c
	// Line 792, Address: 0x12e624, Func Offset: 0x134
	// Line 794, Address: 0x12e62c, Func Offset: 0x13c
	// Line 798, Address: 0x12e634, Func Offset: 0x144
	// Line 799, Address: 0x12e63c, Func Offset: 0x14c
	// Line 800, Address: 0x12e650, Func Offset: 0x160
	// Line 801, Address: 0x12e658, Func Offset: 0x168
	// Line 830, Address: 0x12e660, Func Offset: 0x170
	// Line 831, Address: 0x12e664, Func Offset: 0x174
	// Func End, Address: 0x12e680, Func Offset: 0x190
}

// sphereHitsEnv3CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x12e680
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float32 dist, void* data)
{
	float32 scale;
	uint8 idx;
	_xVec3 tohit;
	float32 radius;
	_xCollis* colls;
	// Line 426, Address: 0x12e680, Func Offset: 0
	// Line 428, Address: 0x12e6b8, Func Offset: 0x38
	// Line 443, Address: 0x12e6bc, Func Offset: 0x3c
	// Line 427, Address: 0x12e6c8, Func Offset: 0x48
	// Line 443, Address: 0x12e6cc, Func Offset: 0x4c
	// Line 448, Address: 0x12e6d0, Func Offset: 0x50
	// Line 443, Address: 0x12e6dc, Func Offset: 0x5c
	// Line 448, Address: 0x12e6e0, Func Offset: 0x60
	// Line 460, Address: 0x12e6e8, Func Offset: 0x68
	// Line 464, Address: 0x12e704, Func Offset: 0x84
	// Line 467, Address: 0x12e70c, Func Offset: 0x8c
	// Line 470, Address: 0x12e71c, Func Offset: 0x9c
	// Line 486, Address: 0x12e724, Func Offset: 0xa4
	// Line 490, Address: 0x12e750, Func Offset: 0xd0
	// Line 492, Address: 0x12e764, Func Offset: 0xe4
	// Line 493, Address: 0x12e774, Func Offset: 0xf4
	// Line 494, Address: 0x12e77c, Func Offset: 0xfc
	// Line 496, Address: 0x12e78c, Func Offset: 0x10c
	// Line 502, Address: 0x12e81c, Func Offset: 0x19c
	// Line 503, Address: 0x12e824, Func Offset: 0x1a4
	// Line 507, Address: 0x12e830, Func Offset: 0x1b0
	// Line 513, Address: 0x12e8bc, Func Offset: 0x23c
	// Line 514, Address: 0x12e8c4, Func Offset: 0x244
	// Line 518, Address: 0x12e8d0, Func Offset: 0x250
	// Line 520, Address: 0x12e8f4, Func Offset: 0x274
	// Line 522, Address: 0x12e8fc, Func Offset: 0x27c
	// Line 524, Address: 0x12e90c, Func Offset: 0x28c
	// Line 527, Address: 0x12e91c, Func Offset: 0x29c
	// Line 526, Address: 0x12e924, Func Offset: 0x2a4
	// Line 527, Address: 0x12e928, Func Offset: 0x2a8
	// Line 526, Address: 0x12e92c, Func Offset: 0x2ac
	// Line 527, Address: 0x12e940, Func Offset: 0x2c0
	// Line 528, Address: 0x12e948, Func Offset: 0x2c8
	// Line 530, Address: 0x12e950, Func Offset: 0x2d0
	// Line 536, Address: 0x12e960, Func Offset: 0x2e0
	// Line 537, Address: 0x12e970, Func Offset: 0x2f0
	// Line 530, Address: 0x12e978, Func Offset: 0x2f8
	// Line 537, Address: 0x12e97c, Func Offset: 0x2fc
	// Line 530, Address: 0x12e980, Func Offset: 0x300
	// Line 537, Address: 0x12e984, Func Offset: 0x304
	// Line 530, Address: 0x12e98c, Func Offset: 0x30c
	// Line 537, Address: 0x12e990, Func Offset: 0x310
	// Line 538, Address: 0x12e9bc, Func Offset: 0x33c
	// Line 541, Address: 0x12e9e8, Func Offset: 0x368
	// Line 542, Address: 0x12e9f0, Func Offset: 0x370
	// Line 546, Address: 0x12e9f8, Func Offset: 0x378
	// Line 548, Address: 0x12ea0c, Func Offset: 0x38c
	// Line 552, Address: 0x12ea38, Func Offset: 0x3b8
	// Line 553, Address: 0x12ea40, Func Offset: 0x3c0
	// Line 560, Address: 0x12ea44, Func Offset: 0x3c4
	// Line 563, Address: 0x12ea4c, Func Offset: 0x3cc
	// Line 564, Address: 0x12ea70, Func Offset: 0x3f0
	// Line 566, Address: 0x12ea78, Func Offset: 0x3f8
	// Line 567, Address: 0x12ea7c, Func Offset: 0x3fc
	// Line 566, Address: 0x12ea80, Func Offset: 0x400
	// Line 567, Address: 0x12ea84, Func Offset: 0x404
	// Line 568, Address: 0x12eaa4, Func Offset: 0x424
	// Line 566, Address: 0x12eaa8, Func Offset: 0x428
	// Line 568, Address: 0x12eab0, Func Offset: 0x430
	// Line 567, Address: 0x12eab4, Func Offset: 0x434
	// Line 566, Address: 0x12eabc, Func Offset: 0x43c
	// Line 567, Address: 0x12eac0, Func Offset: 0x440
	// Line 568, Address: 0x12eac4, Func Offset: 0x444
	// Line 570, Address: 0x12eacc, Func Offset: 0x44c
	// Line 571, Address: 0x12eaf4, Func Offset: 0x474
	// Line 572, Address: 0x12eb08, Func Offset: 0x488
	// Line 574, Address: 0x12eb48, Func Offset: 0x4c8
	// Line 575, Address: 0x12eb5c, Func Offset: 0x4dc
	// Line 577, Address: 0x12eb60, Func Offset: 0x4e0
	// Line 579, Address: 0x12eb64, Func Offset: 0x4e4
	// Line 584, Address: 0x12eb68, Func Offset: 0x4e8
	// Line 581, Address: 0x12eb6c, Func Offset: 0x4ec
	// Line 584, Address: 0x12eb70, Func Offset: 0x4f0
	// Line 583, Address: 0x12eb74, Func Offset: 0x4f4
	// Line 579, Address: 0x12eb78, Func Offset: 0x4f8
	// Line 581, Address: 0x12eb7c, Func Offset: 0x4fc
	// Line 583, Address: 0x12eb88, Func Offset: 0x508
	// Line 584, Address: 0x12eba8, Func Offset: 0x528
	// Line 586, Address: 0x12ebbc, Func Offset: 0x53c
	// Line 590, Address: 0x12ebc4, Func Offset: 0x544
	// Line 594, Address: 0x12ebcc, Func Offset: 0x54c
	// Line 596, Address: 0x12ebd4, Func Offset: 0x554
	// Line 597, Address: 0x12ebfc, Func Offset: 0x57c
	// Line 599, Address: 0x12ec04, Func Offset: 0x584
	// Line 642, Address: 0x12ec0c, Func Offset: 0x58c
	// Line 646, Address: 0x12ec28, Func Offset: 0x5a8
	// Line 648, Address: 0x12ec34, Func Offset: 0x5b4
	// Line 649, Address: 0x12ec44, Func Offset: 0x5c4
	// Line 651, Address: 0x12ec5c, Func Offset: 0x5dc
	// Line 652, Address: 0x12ec6c, Func Offset: 0x5ec
	// Line 654, Address: 0x12ec88, Func Offset: 0x608
	// Line 655, Address: 0x12ec98, Func Offset: 0x618
	// Line 656, Address: 0x12ec9c, Func Offset: 0x61c
	// Line 655, Address: 0x12eca0, Func Offset: 0x620
	// Line 656, Address: 0x12eca4, Func Offset: 0x624
	// Line 657, Address: 0x12ecb0, Func Offset: 0x630
	// Line 661, Address: 0x12ecd4, Func Offset: 0x654
	// Line 672, Address: 0x12ece0, Func Offset: 0x660
	// Line 673, Address: 0x12ece8, Func Offset: 0x668
	// Line 674, Address: 0x12ecfc, Func Offset: 0x67c
	// Line 675, Address: 0x12ed04, Func Offset: 0x684
	// Line 704, Address: 0x12ed0c, Func Offset: 0x68c
	// Line 706, Address: 0x12ed1c, Func Offset: 0x69c
	// Line 710, Address: 0x12ed20, Func Offset: 0x6a0
	// Func End, Address: 0x12ed58, Func Offset: 0x6d8
}

// properSphereIsectTri__FPC6_xVec3fP6_xVec3PfP19RpCollisionTriangle
// Start address: 0x12ed60
void properSphereIsectTri(_xVec3* center, float32 radius, _xVec3* tohit, float32* dist_ptr, RpCollisionTriangle* tri)
{
	_xVec3 vertClosestPoint;
	uint32 i;
	float32 radius2;
	float32 dist2;
	float32 dist;
	float32 dist2plane;
	_xVec3 projPoint;
	// Line 205, Address: 0x12ed60, Func Offset: 0
	// Line 212, Address: 0x12ed8c, Func Offset: 0x2c
	// Line 208, Address: 0x12edb4, Func Offset: 0x54
	// Line 215, Address: 0x12edb8, Func Offset: 0x58
	// Line 212, Address: 0x12edc0, Func Offset: 0x60
	// Line 223, Address: 0x12eddc, Func Offset: 0x7c
	// Line 212, Address: 0x12ede0, Func Offset: 0x80
	// Line 215, Address: 0x12edf4, Func Offset: 0x94
	// Line 218, Address: 0x12ee18, Func Offset: 0xb8
	// Line 220, Address: 0x12ee30, Func Offset: 0xd0
	// Line 223, Address: 0x12ee38, Func Offset: 0xd8
	// Line 220, Address: 0x12ee3c, Func Offset: 0xdc
	// Line 223, Address: 0x12ee5c, Func Offset: 0xfc
	// Line 220, Address: 0x12ee60, Func Offset: 0x100
	// Line 223, Address: 0x12ee64, Func Offset: 0x104
	// Line 225, Address: 0x12ee74, Func Offset: 0x114
	// Line 227, Address: 0x12ee7c, Func Offset: 0x11c
	// Line 234, Address: 0x12ee84, Func Offset: 0x124
	// Line 229, Address: 0x12ee8c, Func Offset: 0x12c
	// Line 242, Address: 0x12ee90, Func Offset: 0x130
	// Line 245, Address: 0x12eebc, Func Offset: 0x15c
	// Line 246, Address: 0x12eee0, Func Offset: 0x180
	// Line 248, Address: 0x12eef0, Func Offset: 0x190
	// Line 251, Address: 0x12ef10, Func Offset: 0x1b0
	// Line 249, Address: 0x12ef1c, Func Offset: 0x1bc
	// Line 253, Address: 0x12ef20, Func Offset: 0x1c0
	// Line 254, Address: 0x12ef30, Func Offset: 0x1d0
	// Line 256, Address: 0x12ef38, Func Offset: 0x1d8
	// Line 257, Address: 0x12ef3c, Func Offset: 0x1dc
	// Func End, Address: 0x12ef6c, Func Offset: 0x20c
}

// FindNearestPointOnLine__FP5RwV3dP5RwV3dP5RwV3dP5RwV3d
// Start address: 0x12ef70
void FindNearestPointOnLine(RwV3d* result, RwV3d* point, RwV3d* start, RwV3d* end)
{
	float32 lineLength2;
	float32 mu;
	// Line 153, Address: 0x12ef70, Func Offset: 0
	// Line 160, Address: 0x12ef80, Func Offset: 0x10
	// Line 153, Address: 0x12ef88, Func Offset: 0x18
	// Line 160, Address: 0x12ef94, Func Offset: 0x24
	// Line 153, Address: 0x12ef98, Func Offset: 0x28
	// Line 160, Address: 0x12ef9c, Func Offset: 0x2c
	// Line 153, Address: 0x12efa8, Func Offset: 0x38
	// Line 160, Address: 0x12efac, Func Offset: 0x3c
	// Line 162, Address: 0x12efc4, Func Offset: 0x54
	// Line 167, Address: 0x12efdc, Func Offset: 0x6c
	// Line 168, Address: 0x12efe4, Func Offset: 0x74
	// Line 173, Address: 0x12efec, Func Offset: 0x7c
	// Line 175, Address: 0x12eff8, Func Offset: 0x88
	// Line 181, Address: 0x12f008, Func Offset: 0x98
	// Line 183, Address: 0x12f014, Func Offset: 0xa4
	// Line 184, Address: 0x12f020, Func Offset: 0xb0
	// Line 195, Address: 0x12f02c, Func Offset: 0xbc
	// Line 196, Address: 0x12f034, Func Offset: 0xc4
	// Func End, Address: 0x12f03c, Func Offset: 0xcc
}

// PointWithinTriangle__FP5RwV3dPP5RwV3dP5RwV3d
// Start address: 0x12f040
int32 PointWithinTriangle(RwV3d* pt, RwV3d** tri, RwV3d* normal)
{
	int32 j;
	int32 i;
	int32 inside;
	float32 absZ;
	float32 absY;
	float32 absX;
	Dimension dimension;
	// Line 62, Address: 0x12f040, Func Offset: 0
	// Line 79, Address: 0x12f060, Func Offset: 0x20
	// Line 80, Address: 0x12f078, Func Offset: 0x38
	// Line 81, Address: 0x12f084, Func Offset: 0x44
	// Line 83, Address: 0x12f090, Func Offset: 0x50
	// Line 86, Address: 0x12f0d4, Func Offset: 0x94
	// Line 95, Address: 0x12f100, Func Offset: 0xc0
	// Line 100, Address: 0x12f1b8, Func Offset: 0x178
	// Line 102, Address: 0x12f1c0, Func Offset: 0x180
	// Line 104, Address: 0x12f1d4, Func Offset: 0x194
	// Line 111, Address: 0x12f1e0, Func Offset: 0x1a0
	// Line 116, Address: 0x12f298, Func Offset: 0x258
	// Line 118, Address: 0x12f2a0, Func Offset: 0x260
	// Line 120, Address: 0x12f2b4, Func Offset: 0x274
	// Line 127, Address: 0x12f2c0, Func Offset: 0x280
	// Line 132, Address: 0x12f378, Func Offset: 0x338
	// Line 134, Address: 0x12f380, Func Offset: 0x340
	// Line 138, Address: 0x12f394, Func Offset: 0x354
	// Line 140, Address: 0x12f398, Func Offset: 0x358
	// Line 141, Address: 0x12f39c, Func Offset: 0x35c
	// Func End, Address: 0x12f3c0, Func Offset: 0x380
}

// iCollideInit__FP7_xScene
// Start address: 0x12f3c0
void iCollideInit()
{
	// Line 39, Address: 0x12f3c0, Func Offset: 0
	// Func End, Address: 0x12f3c8, Func Offset: 0x8
}

