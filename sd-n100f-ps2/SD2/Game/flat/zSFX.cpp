typedef struct RwFrame;
typedef struct RwMatrixTag;
typedef struct _xEnt;
typedef struct RpClump;
typedef struct _xVec3;
typedef struct RxCluster;
typedef struct RxHeap;
typedef struct _xSphere;
typedef struct xAnimPlay;
typedef struct RxClusterRef;
typedef struct rxHeapBlockHeader;
typedef struct zSFX;
typedef enum RpWorldRenderOrder;
typedef struct xSerial;
typedef struct _xScene;
typedef struct xAnimSingle;
typedef struct xAnimFile;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineCluster;
typedef struct xAnimEffect;
typedef struct xSurface;
typedef struct RxClusterDefinition;
typedef struct RpCollSector;
typedef struct RwSphere;
typedef struct xAnimTable;
typedef struct _xCylinder;
typedef struct RxOutputSpec;
typedef struct xAnimTransitionList;
typedef enum rxEmbeddedPacketState;
typedef struct RpMeshHeader;
typedef struct RxPacket;
typedef struct xQCData;
typedef struct RxPipeline;
typedef struct xFFX;
typedef struct RpWorldSector;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNode;
typedef struct _xBox;
typedef struct _xBBox;
typedef struct xMemPool;
typedef struct xAnimActiveEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xEnv;
typedef struct RxPipelineNodeParam;
typedef struct xModelInstance;
typedef struct xBase;
typedef struct RpWorld;
typedef struct RxPipelineNodeTopSortData;
typedef struct _xEntShadow;
typedef struct RpGeometry;
typedef struct RwObjectHasFrame;
typedef struct RxNodeDefinition;
typedef struct _xEntFrame;
typedef struct RpVertexNormal;
typedef struct RpAtomic;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct zSFXAsset;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct RwResEntry;
typedef struct RwLLLink;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTransition;
typedef struct RwRGBAReal;
typedef struct RwV3d;
typedef struct p2LinkAsset;
typedef struct iEnv;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimState;
typedef struct RpPolygon;
typedef struct RwRaster;
typedef struct RpLight;
typedef struct iShadowCache;
typedef struct RpTriangle;
typedef struct _xMat4x3;
typedef struct p2BaseAsset;
typedef enum RwTextureFilterMode;
typedef enum RxClusterValid;
typedef struct RwObject;
typedef struct xModelPool;
typedef struct p2EntAsset;
typedef struct RwTexDictionary;
typedef struct _xQuat;
typedef struct RwRGBA;
typedef struct _xBound;
typedef struct RwLinkList;
typedef struct RwBBox;
typedef struct rxReq;
typedef struct _iCollis;
typedef struct RwTexture;
typedef struct _xRot;
typedef struct RwTexCoords;
typedef struct _xEntCollis;
typedef enum RxClusterForcePresent;
typedef struct RpInterpolator;
typedef enum RxNodeDefEditable;
typedef struct RxIoSpec;
typedef struct _xCollis;
typedef struct RxNodeMethods;
typedef struct RwSurfaceProperties;

typedef void(*type_1)(_xEnt*);
typedef void(*type_2)(_xEnt*, _xVec3*);
typedef RpClump*(*type_4)(RpClump*, void*);
typedef void(*type_7)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_9)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RpWorldSector*(*type_11)(RpWorldSector*);
typedef int32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_15)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_17)(RxNodeDefinition*);
typedef int32(*type_18)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_19)(RpAtomic*);
typedef void(*type_20)(RxNodeDefinition*);
typedef RwObjectHasFrame*(*type_21)(RwObjectHasFrame*);
typedef xBase*(*type_23)(uint32);
typedef int32(*type_24)(RxPipelineNode*);
typedef int8*(*type_25)(xBase*);
typedef int8*(*type_26)(uint32);
typedef void(*type_27)(RxPipelineNode*);
typedef uint32(*type_28)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_29)(xMemPool*, void*);
typedef int32(*type_30)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_37)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_41)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_42)(RwResEntry*);
typedef void(*type_43)(_xEnt*, _xScene*, float32);
typedef int32(*type_44)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_45)(_xEnt*);
typedef void(*type_48)(_xEnt*, _xVec3*);

typedef uint8 type_0[2];
typedef float32 type_3[4];
typedef _xVec3 type_5[2];
typedef _xCollis type_6[18];
typedef _xQuat type_8[2];
typedef uint8 type_10[8];
typedef uint8 type_12[8];
typedef uint8 type_14[8];
typedef uint8 type_16[8];
typedef uint8 type_22[3];
typedef uint16 type_31[3];
typedef RpLight* type_32[2];
typedef uint16 type_33[3];
typedef RxCluster type_34[1];
typedef _xVec3 type_35[4];
typedef RwFrame* type_36[2];
typedef uint32 type_38[4];
typedef uint8 type_39[3];
typedef float32 type_40[2];
typedef RwTexCoords* type_46[8];
typedef int8 type_47[32];
typedef int8 type_49[32];
typedef RwTexCoords* type_50[8];
typedef float32 type_51[4];
typedef float32 type_52[4];

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

struct _xEnt : xBase
{
	p2EntAsset* asset;
	uint8 flags;
	uint8 subType;
	uint8 pflags;
	uint8 moreFlags;
	uint8 pad0[3];
	uint8 num_ffx;
	uint16 idx;
	uint16 num_updates;
	float32 material_alpha;
	float32 fade_tmr;
	uint8 collType;
	uint8 collLev;
	uint8 chkby;
	uint8 penby;
	xModelInstance* model;
	void(*update)(_xEnt*, _xScene*, float32);
	void(*bupdate)(_xEnt*, _xVec3*);
	void(*move)(_xEnt*, _xScene*, float32, _xEntFrame*);
	void(*render)(_xEnt*);
	_xEntFrame* frame;
	_xEntCollis* collis;
	_xBound bound;
	float32 updateTimer;
	float32 updateAcc;
	void(*updateTimerFunc)(_xEnt*);
	void(*transl)(_xEnt*, _xVec3*);
	iShadowCache ishadow;
	xSurface* surf;
	xFFX* ffx;
	_xEnt* driver;
	_xEntShadow* ent_shadow;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct zSFX : xBase
{
	zSFXAsset* asset;
	uint32 sndID;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xSerial
{
};

struct _xScene
{
	uint16 flags;
	uint16 num_ents;
	uint16 num_trigs;
	uint16 num_stats;
	uint16 num_dyns;
	uint16 num_npcs;
	uint16 num_act_ents;
	uint16 num_nact_ents;
	float32 gravity;
	float32 drag;
	float32 friction;
	uint16 num_ents_allocd;
	uint16 num_trigs_allocd;
	uint16 num_stats_allocd;
	uint16 num_dyns_allocd;
	uint16 num_npcs_allocd;
	_xEnt** trigs;
	_xEnt** stats;
	_xEnt** dyns;
	_xEnt** npcs;
	_xEnt** act_ents;
	_xEnt** nact_ents;
	_xEnv* env;
	xMemPool mempool;
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xSurface
{
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct xFFX
{
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct _xEntFrame
{
	_xMat4x3 mat;
	_xMat4x3 dmat;
	_xVec3 oldpos;
	_xVec3 oldvel;
	_xRot oldrot;
	_xRot drot;
	_xRot rot;
	_xVec3 dpos;
	_xVec3 dvel;
	_xVec3 vel;
	uint32 mode;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zSFXAsset : p2BaseAsset
{
	uint16 flagsSFX;
	uint16 freq;
	float32 freqm;
	uint32 soundAssetID;
	uint32 attachID;
	uint8 loopCount;
	uint8 priority;
	uint8 volume;
	uint8 pad;
	_xVec3 pos;
	float32 range;
	float32 range_falloff;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct p2EntAsset : p2BaseAsset
{
	uint8 flags;
	uint8 subtype;
	uint8 pflags;
	uint8 moreFlags;
	uint32 surfaceID;
	_xVec3 ang;
	_xVec3 pos;
	_xVec3 scale;
	float32 redMult;
	float32 greenMult;
	float32 blueMult;
	float32 seeThru;
	float32 seeThruSpeed;
	uint32 modelInfoID;
	uint32 animListID;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RwLinkList
{
	RwLLLink link;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct rxReq
{
};

struct _iCollis
{
	int32 unknown;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _xEntCollis
{
	uint8 chk;
	uint8 pen;
	uint8 env_sidx;
	uint8 env_eidx;
	uint8 npc_sidx;
	uint8 npc_eidx;
	uint8 dyn_sidx;
	uint8 dyn_eidx;
	uint8 stat_sidx;
	uint8 stat_eidx;
	uint8 trig_idx;
	uint8 idx;
	_xCollis colls[18];
	void(*post)(_xEnt*, _xScene*, float32, _xEntCollis*);
	uint32(*depenq)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
	uint8 trigs_cur[8];
	uint8 trigs_prev[8];
	uint8 trigs_entered[8];
	uint8 trigs_exited[8];
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

int32(*zSFXEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

int32 zSFXEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zSFXLoad(zSFX* ent, xSerial* s);
void zSFXSave(zSFX* ent, xSerial* s);
void zSFXInit(void* t, void* asset);

// zSFXEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a1070
int32 zSFXEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	_xEnt* ent;
	_xEnt* ent;
	uint32 sndFlags;
	zSFX* t;
	// Line 131, Address: 0x1a1070, Func Offset: 0
	// Line 139, Address: 0x1a1084, Func Offset: 0x14
	// Line 132, Address: 0x1a108c, Func Offset: 0x1c
	// Line 139, Address: 0x1a1090, Func Offset: 0x20
	// Line 143, Address: 0x1a10c4, Func Offset: 0x54
	// Line 144, Address: 0x1a10d0, Func Offset: 0x60
	// Line 148, Address: 0x1a10d8, Func Offset: 0x68
	// Line 156, Address: 0x1a10f4, Func Offset: 0x84
	// Line 157, Address: 0x1a1104, Func Offset: 0x94
	// Line 158, Address: 0x1a110c, Func Offset: 0x9c
	// Line 160, Address: 0x1a1114, Func Offset: 0xa4
	// Line 167, Address: 0x1a11b0, Func Offset: 0x140
	// Line 168, Address: 0x1a11b8, Func Offset: 0x148
	// Line 176, Address: 0x1a1250, Func Offset: 0x1e0
	// Line 177, Address: 0x1a1258, Func Offset: 0x1e8
	// Line 191, Address: 0x1a12f4, Func Offset: 0x284
	// Line 195, Address: 0x1a12fc, Func Offset: 0x28c
	// Line 197, Address: 0x1a1314, Func Offset: 0x2a4
	// Line 199, Address: 0x1a1370, Func Offset: 0x300
	// Line 200, Address: 0x1a1384, Func Offset: 0x314
	// Line 201, Address: 0x1a138c, Func Offset: 0x31c
	// Line 203, Address: 0x1a1394, Func Offset: 0x324
	// Line 210, Address: 0x1a1430, Func Offset: 0x3c0
	// Line 211, Address: 0x1a1438, Func Offset: 0x3c8
	// Line 219, Address: 0x1a14d0, Func Offset: 0x460
	// Line 220, Address: 0x1a14d8, Func Offset: 0x468
	// Line 228, Address: 0x1a1570, Func Offset: 0x500
	// Line 235, Address: 0x1a1578, Func Offset: 0x508
	// Line 237, Address: 0x1a1584, Func Offset: 0x514
	// Line 244, Address: 0x1a158c, Func Offset: 0x51c
	// Line 249, Address: 0x1a1594, Func Offset: 0x524
	// Line 251, Address: 0x1a15a0, Func Offset: 0x530
	// Line 258, Address: 0x1a15a8, Func Offset: 0x538
	// Line 257, Address: 0x1a15b8, Func Offset: 0x548
	// Line 258, Address: 0x1a15bc, Func Offset: 0x54c
	// Func End, Address: 0x1a15c4, Func Offset: 0x554
}

// zSFXLoad__FP4zSFXP7xSerial
// Start address: 0x1a15d0
void zSFXLoad(zSFX* ent, xSerial* s)
{
	// Line 82, Address: 0x1a15d0, Func Offset: 0
	// Func End, Address: 0x1a15d8, Func Offset: 0x8
}

// zSFXSave__FP4zSFXP7xSerial
// Start address: 0x1a15e0
void zSFXSave(zSFX* ent, xSerial* s)
{
	// Line 63, Address: 0x1a15e0, Func Offset: 0
	// Func End, Address: 0x1a15e8, Func Offset: 0x8
}

// zSFXInit__FPvPv
// Start address: 0x1a15f0
void zSFXInit(void* t, void* asset)
{
	// Line 27, Address: 0x1a15f0, Func Offset: 0
	// Line 28, Address: 0x1a1604, Func Offset: 0x14
	// Line 29, Address: 0x1a1640, Func Offset: 0x50
	// Func End, Address: 0x1a1654, Func Offset: 0x64
}

