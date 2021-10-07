typedef struct xAnimActiveEffect;
typedef struct RpWorld;
typedef struct rxHeapFreeBlock;
typedef struct xSurface;
typedef struct RwTexDictionary;
typedef struct xModelPool;
typedef struct iEnv;
typedef struct xAnimPlay;
typedef struct RwLLLink;
typedef struct RxNodeMethods;
typedef struct _zCounter;
typedef struct rxReq;
typedef struct xQCData;
typedef struct RpGeometry;
typedef struct RwRGBAReal;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwFrame;
typedef struct RpVertexNormal;
typedef struct xFFX;
typedef struct RpAtomic;
typedef struct RxNodeDefinition;
typedef struct xAnimFile;
typedef struct RpSector;
typedef struct RpMaterialList;
typedef struct xBase;
typedef struct _iCollis;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct _xBBox;
typedef struct xAnimTransitionList;
typedef struct _zEnt;
typedef struct RpLight;
typedef struct RpMaterial;
typedef struct _xEnt;
typedef struct RxCluster;
typedef struct _xEntShadow;
typedef struct RxClusterRef;
typedef struct RwResEntry;
typedef struct rxHeapBlockHeader;
typedef struct xAnimTransition;
typedef struct RwV3d;
typedef enum RxClusterValidityReq;
typedef struct RwMatrixTag;
typedef struct RxPipelineCluster;
typedef struct xSerial;
typedef enum RwTextureFilterMode;
typedef struct _xEntFrame;
typedef struct RwObject;
typedef struct RxClusterDefinition;
typedef struct xAnimSingle;
typedef struct RxOutputSpec;
typedef struct RpClump;
typedef enum rxEmbeddedPacketState;
typedef struct zCounterAsset;
typedef struct RpPolygon;
typedef struct RxPacket;
typedef struct _xEnv;
typedef struct xAnimState;
typedef struct _xSphere;
typedef struct RwRGBA;
typedef struct xModelInstance;
typedef struct RxPipeline;
typedef struct RxPipelineNode;
typedef struct RpTriangle;
typedef struct RwLinkList;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct zPortalAsset;
typedef struct _xCylinder;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimEffect;
typedef struct iShadowCache;
typedef struct _xScene;
typedef struct _xBox;
typedef struct xAnimTable;
typedef struct RwTexCoords;
typedef struct xMemPool;
typedef struct RpCollSector;
typedef struct RpMeshHeader;
typedef struct p2EntAsset;
typedef struct p2LinkAsset;
typedef struct _xMat4x3;
typedef struct RwObjectHasFrame;
typedef struct RwTexture;
typedef struct RxPipelineRequiresCluster;
typedef struct _xBound;
typedef struct RpWorldSector;
typedef struct _zPortal;
typedef struct zScene;
typedef struct RpInterpolator;
typedef enum RxClusterValid;
typedef struct RwSurfaceProperties;
typedef struct _xEntCollis;
typedef struct RwRaster;
typedef struct _xVec3;
typedef struct RwSphere;
typedef struct _xCollis;
typedef struct _xQuat;
typedef enum RpWorldRenderOrder;
typedef struct p2BaseAsset;
typedef enum RwTextureAddressMode;
typedef struct RwBBox;
typedef enum RxClusterForcePresent;
typedef enum RxNodeDefEditable;
typedef struct _xRot;
typedef struct RxIoSpec;

typedef xBase*(*type_0)(uint32);
typedef int8*(*type_1)(xBase*);
typedef int8*(*type_4)(uint32);
typedef void(*type_5)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_7)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RpAtomic*(*type_9)(RpAtomic*);
typedef RpWorldSector*(*type_19)(RpWorldSector*);
typedef int32(*type_24)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_25)(RwResEntry*);
typedef int32(*type_26)(RxNodeDefinition*);
typedef void(*type_27)(RxNodeDefinition*);
typedef xBase*(*type_29)(xBase*, zScene*, void*);
typedef int32(*type_32)(RxPipelineNode*);
typedef void(*type_33)(xMemPool*, void*);
typedef void(*type_34)(RxPipelineNode*);
typedef uint32(*type_36)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_37)(RwObjectHasFrame*);
typedef void(*type_38)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_39)(RxPipelineNode*, RxPipeline*);
typedef void(*type_42)(_xEnt*, _xScene*, float32);
typedef void(*type_44)(_xEnt*);
typedef uint32(*type_45)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_48)(_xEnt*);
typedef uint32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_50)(_xEnt*, _xVec3*);
typedef int32(*type_51)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_52)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpClump*(*type_53)(RpClump*, void*);
typedef void(*type_55)(_xEnt*, _xVec3*);

typedef _xCollis type_2[18];
typedef int8 type_3[32];
typedef int8 type_6[32];
typedef uint8 type_8[8];
typedef RpLight* type_10[2];
typedef uint8 type_11[8];
typedef RwFrame* type_12[2];
typedef uint8 type_13[8];
typedef uint8 type_14[8];
typedef float32 type_15[4];
typedef uint32 type_16[43];
typedef uint8 type_17[3];
typedef float32 type_18[4];
typedef xBase* type_20[43];
typedef uint16 type_21[3];
typedef uint8 type_22[2];
typedef uint16 type_23[3];
typedef _xVec3 type_28[2];
typedef _xVec3 type_30[4];
typedef _xQuat type_31[2];
typedef uint8 type_35[3];
typedef RwTexCoords* type_40[8];
typedef float32 type_41[4];
typedef RxCluster type_43[1];
typedef uint32 type_46[4];
typedef RwTexCoords* type_47[8];
typedef float32 type_54[2];

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xSurface
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct _zCounter : xBase
{
	zCounterAsset* asset;
	int16 count;
	uint8 state;
	uint8 pad;
};

struct rxReq
{
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xFFX
{
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct RpSector
{
	int32 type;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _iCollis
{
	int32 unknown;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct zCounterAsset : p2BaseAsset
{
	int16 count;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwLinkList
{
	RwLLLink link;
};

struct st_SERIAL_CLIENTINFO
{
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct zScene : _xScene
{
	uint32 sceneID;
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		_zEnt** ents;
	};
	uint32 baseCount[43];
	xBase* baseList[43];
	uint32 num_bubbles;
	_zEnt** bubbles;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

xBase*(*zCounterDebugModeIteratorCB)(xBase*, zScene*, void*);
int32(*zCounterEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

int32 zCounterEventCB(xBase* to, uint32 toEvent);
void zCounterLoad(_zCounter* ent, xSerial* s);
void zCounterSave(_zCounter* ent, xSerial* s);
void zCounterReset(xBase* b);
void zCounterInit(void* b, void* asset);

// zCounterEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a1e10
int32 zCounterEventCB(xBase* to, uint32 toEvent)
{
	_zCounter* t;
	// Line 146, Address: 0x1a1e10, Func Offset: 0
	// Line 153, Address: 0x1a1e14, Func Offset: 0x4
	// Line 156, Address: 0x1a1e44, Func Offset: 0x34
	// Line 158, Address: 0x1a1e54, Func Offset: 0x44
	// Line 159, Address: 0x1a1e60, Func Offset: 0x50
	// Line 161, Address: 0x1a1e6c, Func Offset: 0x5c
	// Line 164, Address: 0x1a1e74, Func Offset: 0x64
	// Line 167, Address: 0x1a1e7c, Func Offset: 0x6c
	// Line 169, Address: 0x1a1e8c, Func Offset: 0x7c
	// Line 170, Address: 0x1a1e98, Func Offset: 0x88
	// Line 172, Address: 0x1a1ea4, Func Offset: 0x94
	// Line 175, Address: 0x1a1eac, Func Offset: 0x9c
	// Line 185, Address: 0x1a1eb4, Func Offset: 0xa4
	// Line 188, Address: 0x1a1eb8, Func Offset: 0xa8
	// Line 189, Address: 0x1a1ec0, Func Offset: 0xb0
	// Line 192, Address: 0x1a1ec8, Func Offset: 0xb8
	// Line 198, Address: 0x1a1ecc, Func Offset: 0xbc
	// Line 197, Address: 0x1a1ed0, Func Offset: 0xc0
	// Line 198, Address: 0x1a1ed4, Func Offset: 0xc4
	// Func End, Address: 0x1a1edc, Func Offset: 0xcc
}

// zCounterLoad__FP9_zCounterP7xSerial
// Start address: 0x1a1ee0
void zCounterLoad(_zCounter* ent, xSerial* s)
{
	// Line 123, Address: 0x1a1ee0, Func Offset: 0
	// Line 124, Address: 0x1a1ef4, Func Offset: 0x14
	// Line 129, Address: 0x1a1efc, Func Offset: 0x1c
	// Line 130, Address: 0x1a1f08, Func Offset: 0x28
	// Line 131, Address: 0x1a1f14, Func Offset: 0x34
	// Func End, Address: 0x1a1f28, Func Offset: 0x48
}

// zCounterSave__FP9_zCounterP7xSerial
// Start address: 0x1a1f30
void zCounterSave(_zCounter* ent, xSerial* s)
{
	// Line 101, Address: 0x1a1f30, Func Offset: 0
	// Line 102, Address: 0x1a1f44, Func Offset: 0x14
	// Line 107, Address: 0x1a1f4c, Func Offset: 0x1c
	// Line 108, Address: 0x1a1f58, Func Offset: 0x28
	// Line 110, Address: 0x1a1f64, Func Offset: 0x34
	// Func End, Address: 0x1a1f78, Func Offset: 0x48
}

// zCounterReset__FP5xBase
// Start address: 0x1a1f80
void zCounterReset(xBase* b)
{
	_zCounter* t;
	// Line 70, Address: 0x1a1f80, Func Offset: 0
	// Line 76, Address: 0x1a1f8c, Func Offset: 0xc
	// Line 79, Address: 0x1a1f98, Func Offset: 0x18
	// Line 80, Address: 0x1a1fa4, Func Offset: 0x24
	// Line 81, Address: 0x1a1fac, Func Offset: 0x2c
	// Line 82, Address: 0x1a1fb4, Func Offset: 0x34
	// Line 85, Address: 0x1a1fb8, Func Offset: 0x38
	// Line 86, Address: 0x1a1fc4, Func Offset: 0x44
	// Line 89, Address: 0x1a1fc8, Func Offset: 0x48
	// Func End, Address: 0x1a1fd8, Func Offset: 0x58
}

// zCounterInit__FPvPv
// Start address: 0x1a1fe0
void zCounterInit(void* b, void* asset)
{
	// Line 43, Address: 0x1a1fe0, Func Offset: 0
	// Line 44, Address: 0x1a1ff4, Func Offset: 0x14
	// Line 45, Address: 0x1a2038, Func Offset: 0x58
	// Func End, Address: 0x1a204c, Func Offset: 0x6c
}

