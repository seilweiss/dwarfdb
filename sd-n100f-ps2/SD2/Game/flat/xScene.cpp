typedef struct RwBBox;
typedef struct rxHeapBlockHeader;
typedef struct RwLLLink;
typedef struct p2EntAsset;
typedef struct RxPipeline;
typedef struct xAnimPlay;
typedef struct _xMat4x3;
typedef struct RpTriangle;
typedef struct _xEnt;
typedef struct RwRGBAReal;
typedef struct RpWorldSector;
typedef struct _xVec3;
typedef struct RxPipelineNode;
typedef struct RwRGBA;
typedef struct rxHeapFreeBlock;
typedef struct xAnimFile;
typedef struct RpInterpolator;
typedef struct xModelPool;
typedef struct RwTexCoords;
typedef struct RwTexture;
typedef struct _xEnv;
typedef struct RxClusterDefinition;
typedef struct xAnimTransitionList;
typedef struct _xScene;
typedef struct RpPolygon;
typedef enum RxClusterValidityReq;
typedef struct _xBound;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelInstance;
typedef struct RpMeshHeader;
typedef struct _xRot;
typedef struct RwV3d;
typedef struct RwRaster;
typedef struct p2LinkAsset;
typedef struct _xEntFrame;
typedef struct RwResEntry;
typedef struct RpVertexNormal;
typedef struct RwTexDictionary;
typedef struct xAnimTransition;
typedef struct RpMorphTarget;
typedef enum RwTextureFilterMode;
typedef struct RxPipelineCluster;
typedef struct xAnimSingle;
typedef struct xBase;
typedef struct RwObject;
typedef struct RwFrame;
typedef enum RxClusterValid;
typedef struct _xRay3;
typedef struct iEnv;
typedef struct xAnimState;
typedef struct _xCollis;
typedef struct _xEntCollis;
typedef struct RpWorld;
typedef struct RpClump;
typedef enum RpWorldRenderOrder;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef struct RxPacket;
typedef struct RpLight;
typedef struct xMemPool;
typedef struct RpCollSector;
typedef struct xAnimEffect;
typedef struct rxReq;
typedef struct _xSphere;
typedef struct xAnimTable;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef enum RxClusterForcePresent;
typedef struct _xCylinder;
typedef struct xAnimActiveEffect;
typedef struct p2BaseAsset;
typedef struct RxClusterRef;
typedef struct RpGeometry;
typedef enum RxNodeDefEditable;
typedef struct RpAtomic;
typedef struct _xBox;
typedef struct RxIoSpec;
typedef struct RpSector;
typedef struct xSurface;
typedef struct RpMaterialList;
typedef struct RxNodeMethods;
typedef struct xQCData;
typedef struct RpMaterial;
typedef struct RwObjectHasFrame;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xFFX;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct _xBBox;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct _xEntShadow;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNodeParam;
typedef struct _xQuat;
typedef struct iShadowCache;
typedef struct _iCollis;

typedef int32(*type_1)(RxPipelineNode*);
typedef void(*type_3)(_xEnt*);
typedef void(*type_4)(RxPipelineNode*);
typedef xBase*(*type_6)(uint32);
typedef void(*type_7)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int8*(*type_8)(xBase*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_12)(uint32);
typedef void(*type_14)(_xEnt*, _xScene*, float32);
typedef void(*type_18)(_xEnt*);
typedef uint32(*type_19)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef _xEnt*(*type_23)(_xEnt*, _xScene*, void*);
typedef void(*type_24)(_xEnt*);
typedef void(*type_25)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int32(*type_27)(RxNodeDefinition*);
typedef void(*type_28)(RxNodeDefinition*);
typedef void(*type_29)(_xEnt*, _xVec3*);
typedef void(*type_31)(RwResEntry*);
typedef RpClump*(*type_33)(RpClump*, void*);
typedef uint32(*type_34)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_35)(xMemPool*, void*);
typedef RpWorldSector*(*type_37)(RpWorldSector*);
typedef void(*type_39)(_xEnt*, _xVec3*);
typedef uint32(*type_40)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_41)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef RwObjectHasFrame*(*type_45)(RwObjectHasFrame*);
typedef uint32(*type_46)(xAnimTransition*, xAnimSingle*, void*);

typedef _xVec3 type_0[4];
typedef RwTexCoords* type_2[8];
typedef uint8 type_5[3];
typedef RwTexCoords* type_9[8];
typedef int8 type_11[32];
typedef int8 type_13[32];
typedef float32 type_15[4];
typedef RxCluster type_16[1];
typedef float32 type_17[4];
typedef uint32 type_20[4];
typedef uint8 type_21[2];
typedef float32 type_26[4];
typedef RpLight* type_30[2];
typedef RwFrame* type_32[2];
typedef _xVec3 type_36[2];
typedef _xQuat type_38[2];
typedef _xCollis type_43[18];
typedef uint8 type_44[8];
typedef uint8 type_47[8];
typedef uint8 type_48[8];
typedef uint16 type_49[3];
typedef uint8 type_50[8];
typedef uint16 type_51[3];
typedef uint8 type_52[3];
typedef float32 type_53[2];

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLinkList
{
	RwLLLink link;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct rxReq
{
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpSector
{
	int32 type;
};

struct xSurface
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xFFX
{
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _iCollis
{
	int32 unknown;
};

int8* g_xScene_FMT;
_xScene* g_xSceneCur;
uint32 gActiveHeap;

void xRayHitsCameraScene(_xScene* sc, _xRay3* r, void(*camera_func)(_xEnt*));
void xRayHitsScene(_xScene* sc, _xRay3* r, _xCollis* coll);
void xSceneForAllNPCs(_xScene* sc, _xEnt*(*func)(_xEnt*, _xScene*, void*), void* data);
void xSceneForAllDynamics(_xScene* sc, _xEnt*(*func)(_xEnt*, _xScene*, void*), void* data);
void xSceneForAllStatics(_xScene* sc, _xEnt*(*func)(_xEnt*, _xScene*, void*), void* data);
void xSceneForAllTriggers(_xScene* sc, _xEnt*(*func)(_xEnt*, _xScene*, void*), void* data);
int8* xSceneID2Name(_xScene* sc, uint32 id);
xBase* xSceneResolvID(_xScene* sc, uint32 id);
void xSceneAddEnt(_xScene* sc, _xEnt* ent);
void xSceneSetup(_xScene* sc);
void xSceneLoad();
void xSceneSave();
void xSceneInit(_xScene* sc, uint16 num_trigs, uint16 num_stats, uint16 num_dyns, uint16 num_npcs);

// xRayHitsCameraScene__FP7_xSceneP6_xRay3PFP5_xEnt_v
// Start address: 0x12fa10
void xRayHitsCameraScene(_xScene* sc, _xRay3* r, void(*camera_func)(_xEnt*))
{
	_xEnt* ent;
	_xEnt* ent;
	uint16 i;
	xQCData qcr;
	// Line 478, Address: 0x12fa10, Func Offset: 0
	// Line 485, Address: 0x12fa3c, Func Offset: 0x2c
	// Line 493, Address: 0x12fa44, Func Offset: 0x34
	// Line 494, Address: 0x12fa50, Func Offset: 0x40
	// Line 495, Address: 0x12fa5c, Func Offset: 0x4c
	// Line 505, Address: 0x12fa6c, Func Offset: 0x5c
	// Line 509, Address: 0x12fa80, Func Offset: 0x70
	// Line 521, Address: 0x12fa90, Func Offset: 0x80
	// Line 523, Address: 0x12fa98, Func Offset: 0x88
	// Line 521, Address: 0x12fa9c, Func Offset: 0x8c
	// Line 523, Address: 0x12faa0, Func Offset: 0x90
	// Line 524, Address: 0x12fabc, Func Offset: 0xac
	// Line 525, Address: 0x12fac8, Func Offset: 0xb8
	// Line 526, Address: 0x12fad4, Func Offset: 0xc4
	// Line 536, Address: 0x12fae4, Func Offset: 0xd4
	// Line 540, Address: 0x12faf8, Func Offset: 0xe8
	// Line 552, Address: 0x12fb08, Func Offset: 0xf8
	// Line 554, Address: 0x12fb10, Func Offset: 0x100
	// Line 552, Address: 0x12fb14, Func Offset: 0x104
	// Line 554, Address: 0x12fb18, Func Offset: 0x108
	// Line 570, Address: 0x12fb34, Func Offset: 0x124
	// Func End, Address: 0x12fb58, Func Offset: 0x148
}

// xRayHitsScene__FP7_xSceneP6_xRay3P8_xCollis
// Start address: 0x12fb60
void xRayHitsScene(_xScene* sc, _xRay3* r, _xCollis* coll)
{
	_xEnt* ent;
	_xEnt* ent;
	_xEnt* ent;
	uint16 i;
	_xCollis c;
	xQCData q;
	// Line 367, Address: 0x12fb60, Func Offset: 0
	// Line 376, Address: 0x12fb8c, Func Offset: 0x2c
	// Line 385, Address: 0x12fb94, Func Offset: 0x34
	// Line 387, Address: 0x12fba0, Func Offset: 0x40
	// Line 388, Address: 0x12fbac, Func Offset: 0x4c
	// Line 390, Address: 0x12fbb0, Func Offset: 0x50
	// Line 388, Address: 0x12fbbc, Func Offset: 0x5c
	// Line 390, Address: 0x12fbc4, Func Offset: 0x64
	// Line 394, Address: 0x12fbcc, Func Offset: 0x6c
	// Line 405, Address: 0x12fbdc, Func Offset: 0x7c
	// Line 406, Address: 0x12fbf4, Func Offset: 0x94
	// Line 407, Address: 0x12fbf8, Func Offset: 0x98
	// Line 408, Address: 0x12fc00, Func Offset: 0xa0
	// Line 410, Address: 0x12fc04, Func Offset: 0xa4
	// Line 408, Address: 0x12fc0c, Func Offset: 0xac
	// Line 410, Address: 0x12fc10, Func Offset: 0xb0
	// Line 411, Address: 0x12fc2c, Func Offset: 0xcc
	// Line 412, Address: 0x12fc38, Func Offset: 0xd8
	// Line 414, Address: 0x12fc3c, Func Offset: 0xdc
	// Line 412, Address: 0x12fc48, Func Offset: 0xe8
	// Line 414, Address: 0x12fc50, Func Offset: 0xf0
	// Line 418, Address: 0x12fc58, Func Offset: 0xf8
	// Line 429, Address: 0x12fc68, Func Offset: 0x108
	// Line 430, Address: 0x12fc80, Func Offset: 0x120
	// Line 431, Address: 0x12fc84, Func Offset: 0x124
	// Line 432, Address: 0x12fc8c, Func Offset: 0x12c
	// Line 434, Address: 0x12fc90, Func Offset: 0x130
	// Line 432, Address: 0x12fc94, Func Offset: 0x134
	// Line 434, Address: 0x12fc98, Func Offset: 0x138
	// Line 435, Address: 0x12fcb4, Func Offset: 0x154
	// Line 436, Address: 0x12fcc0, Func Offset: 0x160
	// Line 438, Address: 0x12fcc4, Func Offset: 0x164
	// Line 436, Address: 0x12fcd0, Func Offset: 0x170
	// Line 438, Address: 0x12fcd8, Func Offset: 0x178
	// Line 442, Address: 0x12fce0, Func Offset: 0x180
	// Line 453, Address: 0x12fcf0, Func Offset: 0x190
	// Line 454, Address: 0x12fd08, Func Offset: 0x1a8
	// Line 455, Address: 0x12fd0c, Func Offset: 0x1ac
	// Line 456, Address: 0x12fd14, Func Offset: 0x1b4
	// Line 458, Address: 0x12fd18, Func Offset: 0x1b8
	// Line 456, Address: 0x12fd1c, Func Offset: 0x1bc
	// Line 458, Address: 0x12fd20, Func Offset: 0x1c0
	// Line 459, Address: 0x12fd3c, Func Offset: 0x1dc
	// Line 460, Address: 0x12fd4c, Func Offset: 0x1ec
	// Line 461, Address: 0x12fd64, Func Offset: 0x204
	// Line 462, Address: 0x12fd68, Func Offset: 0x208
	// Line 463, Address: 0x12fd70, Func Offset: 0x210
	// Line 468, Address: 0x12fd74, Func Offset: 0x214
	// Line 469, Address: 0x12fd98, Func Offset: 0x238
	// Line 470, Address: 0x12fda0, Func Offset: 0x240
	// Line 471, Address: 0x12fda8, Func Offset: 0x248
	// Line 473, Address: 0x12fdb8, Func Offset: 0x258
	// Func End, Address: 0x12fddc, Func Offset: 0x27c
}

// xSceneForAllNPCs__FP7_xScenePFP5_xEntP7_xScenePv_P5_xEntPv
// Start address: 0x12fde0
void xSceneForAllNPCs(_xScene* sc, _xEnt*(*func)(_xEnt*, _xScene*, void*), void* data)
{
	uint16 i;
	// Line 353, Address: 0x12fde0, Func Offset: 0
	// Line 357, Address: 0x12fe08, Func Offset: 0x28
	// Line 359, Address: 0x12fe14, Func Offset: 0x34
	// Line 362, Address: 0x12fe38, Func Offset: 0x58
	// Line 363, Address: 0x12fe58, Func Offset: 0x78
	// Func End, Address: 0x12fe78, Func Offset: 0x98
}

// xSceneForAllDynamics__FP7_xScenePFP5_xEntP7_xScenePv_P5_xEntPv
// Start address: 0x12fe80
void xSceneForAllDynamics(_xScene* sc, _xEnt*(*func)(_xEnt*, _xScene*, void*), void* data)
{
	uint16 i;
	// Line 340, Address: 0x12fe80, Func Offset: 0
	// Line 344, Address: 0x12fea8, Func Offset: 0x28
	// Line 346, Address: 0x12feb4, Func Offset: 0x34
	// Line 350, Address: 0x12fed8, Func Offset: 0x58
	// Line 351, Address: 0x12fef8, Func Offset: 0x78
	// Func End, Address: 0x12ff18, Func Offset: 0x98
}

// xSceneForAllStatics__FP7_xScenePFP5_xEntP7_xScenePv_P5_xEntPv
// Start address: 0x12ff20
void xSceneForAllStatics(_xScene* sc, _xEnt*(*func)(_xEnt*, _xScene*, void*), void* data)
{
	uint16 i;
	// Line 328, Address: 0x12ff20, Func Offset: 0
	// Line 332, Address: 0x12ff48, Func Offset: 0x28
	// Line 334, Address: 0x12ff54, Func Offset: 0x34
	// Line 337, Address: 0x12ff78, Func Offset: 0x58
	// Line 338, Address: 0x12ff98, Func Offset: 0x78
	// Func End, Address: 0x12ffb8, Func Offset: 0x98
}

// xSceneForAllTriggers__FP7_xScenePFP5_xEntP7_xScenePv_P5_xEntPv
// Start address: 0x12ffc0
void xSceneForAllTriggers(_xScene* sc, _xEnt*(*func)(_xEnt*, _xScene*, void*), void* data)
{
	uint16 i;
	// Line 315, Address: 0x12ffc0, Func Offset: 0
	// Line 319, Address: 0x12ffe8, Func Offset: 0x28
	// Line 321, Address: 0x12fff4, Func Offset: 0x34
	// Line 325, Address: 0x130018, Func Offset: 0x58
	// Line 326, Address: 0x130038, Func Offset: 0x78
	// Func End, Address: 0x130058, Func Offset: 0x98
}

// xSceneID2Name__FP7_xSceneUi
// Start address: 0x130060
int8* xSceneID2Name(_xScene* sc, uint32 id)
{
	// Line 268, Address: 0x130060, Func Offset: 0
	// Line 272, Address: 0x130068, Func Offset: 0x8
	// Line 275, Address: 0x13007c, Func Offset: 0x1c
	// Func End, Address: 0x130088, Func Offset: 0x28
}

// xSceneResolvID__FP7_xSceneUi
// Start address: 0x130090
xBase* xSceneResolvID(_xScene* sc, uint32 id)
{
	// Line 250, Address: 0x130090, Func Offset: 0
	// Line 254, Address: 0x130098, Func Offset: 0x8
	// Line 257, Address: 0x1300ac, Func Offset: 0x1c
	// Func End, Address: 0x1300b8, Func Offset: 0x28
}

// xSceneAddEnt__FP7_xSceneP5_xEnt
// Start address: 0x1300c0
void xSceneAddEnt(_xScene* sc, _xEnt* ent)
{
	// Line 175, Address: 0x1300c0, Func Offset: 0
	// Line 178, Address: 0x1300d0, Func Offset: 0x10
	// Line 180, Address: 0x1300e8, Func Offset: 0x28
	// Line 183, Address: 0x1300f8, Func Offset: 0x38
	// Line 185, Address: 0x130110, Func Offset: 0x50
	// Line 188, Address: 0x130120, Func Offset: 0x60
	// Line 190, Address: 0x130138, Func Offset: 0x78
	// Line 193, Address: 0x130148, Func Offset: 0x88
	// Line 206, Address: 0x130164, Func Offset: 0xa4
	// Line 207, Address: 0x13017c, Func Offset: 0xbc
	// Func End, Address: 0x130184, Func Offset: 0xc4
}

// xSceneSetup__FP7_xScene
// Start address: 0x130190
void xSceneSetup(_xScene* sc)
{
	// Line 168, Address: 0x130190, Func Offset: 0
	// Func End, Address: 0x130198, Func Offset: 0x8
}

// xSceneLoad__FP7_xSceneP7xSerial
// Start address: 0x1301a0
void xSceneLoad()
{
	// Line 145, Address: 0x1301a0, Func Offset: 0
	// Func End, Address: 0x1301a8, Func Offset: 0x8
}

// xSceneSave__FP7_xSceneP7xSerial
// Start address: 0x1301b0
void xSceneSave()
{
	// Line 127, Address: 0x1301b0, Func Offset: 0
	// Func End, Address: 0x1301b8, Func Offset: 0x8
}

// xSceneInit__FP7_xSceneUsUsUsUs
// Start address: 0x1301c0
void xSceneInit(_xScene* sc, uint16 num_trigs, uint16 num_stats, uint16 num_dyns, uint16 num_npcs)
{
	// Line 35, Address: 0x1301c0, Func Offset: 0
	// Line 38, Address: 0x1301e0, Func Offset: 0x20
	// Line 40, Address: 0x1301e4, Func Offset: 0x24
	// Line 41, Address: 0x1301ec, Func Offset: 0x2c
	// Line 44, Address: 0x130214, Func Offset: 0x54
	// Line 45, Address: 0x130218, Func Offset: 0x58
	// Line 48, Address: 0x13022c, Func Offset: 0x6c
	// Line 49, Address: 0x130230, Func Offset: 0x70
	// Line 52, Address: 0x130244, Func Offset: 0x84
	// Line 53, Address: 0x130248, Func Offset: 0x88
	// Line 65, Address: 0x130258, Func Offset: 0x98
	// Line 53, Address: 0x130274, Func Offset: 0xb4
	// Line 65, Address: 0x130278, Func Offset: 0xb8
	// Line 67, Address: 0x13027c, Func Offset: 0xbc
	// Line 68, Address: 0x130280, Func Offset: 0xc0
	// Line 71, Address: 0x130294, Func Offset: 0xd4
	// Line 72, Address: 0x130298, Func Offset: 0xd8
	// Line 75, Address: 0x1302ac, Func Offset: 0xec
	// Line 76, Address: 0x1302b0, Func Offset: 0xf0
	// Line 77, Address: 0x1302b4, Func Offset: 0xf4
	// Line 78, Address: 0x1302b8, Func Offset: 0xf8
	// Line 79, Address: 0x1302bc, Func Offset: 0xfc
	// Line 83, Address: 0x1302c0, Func Offset: 0x100
	// Line 84, Address: 0x1302c8, Func Offset: 0x108
	// Line 86, Address: 0x1302d0, Func Offset: 0x110
	// Line 87, Address: 0x1302e8, Func Offset: 0x128
	// Line 88, Address: 0x1302f8, Func Offset: 0x138
	// Line 89, Address: 0x130308, Func Offset: 0x148
	// Line 92, Address: 0x130314, Func Offset: 0x154
	// Line 94, Address: 0x13031c, Func Offset: 0x15c
	// Line 95, Address: 0x130324, Func Offset: 0x164
	// Line 96, Address: 0x13032c, Func Offset: 0x16c
	// Func End, Address: 0x130350, Func Offset: 0x190
}

