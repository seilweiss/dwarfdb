typedef struct RwRGBA;
typedef struct RxPipeline;
typedef struct _xEnt;
typedef struct RpWorld;
typedef struct RxPipelineNode;
typedef struct xFFX;
typedef struct xFFXRotMatchState;
typedef struct RwResEntry;
typedef struct xModelInstance;
typedef struct RwRaster;
typedef struct p2LinkAsset;
typedef enum RwTextureFilterMode;
typedef struct xAnimPlay;
typedef struct RxPipelineCluster;
typedef struct rxHeapBlockHeader;
typedef struct RpClump;
typedef struct RwObject;
typedef struct _xEntShadow;
typedef enum RxClusterValid;
typedef struct p2BaseAsset;
typedef struct RpLight;
typedef struct xAnimFile;
typedef enum RpWorldRenderOrder;
typedef struct _xMat4x3;
typedef struct xAnimSingle;
typedef struct xAnimEffect;
typedef struct RwFrame;
typedef struct _xCollis;
typedef struct rxHeapFreeBlock;
typedef struct RwV3d;
typedef struct xFFXShakeState;
typedef struct RpCollSector;
typedef struct xAnimTransitionList;
typedef struct RpMeshHeader;
typedef struct xModelPool;
typedef struct iShadowCache;
typedef struct xAnimTable;
typedef struct _xScene;
typedef struct RwTexDictionary;
typedef struct RwLinkList;
typedef struct _xQuat;
typedef struct RxNodeDefinition;
typedef struct RxPacket;
typedef struct xBase;
typedef struct iEnv;
typedef struct RxClusterDefinition;
typedef struct RpWorldSector;
typedef struct p2EntAsset;
typedef struct RpAtomic;
typedef struct RxPipelineRequiresCluster;
typedef struct RwBBox;
typedef struct xMemPool;
typedef struct rxReq;
typedef struct xAnimActiveEffect;
typedef struct _xVec3;
typedef struct _xBound;
typedef struct RpGeometry;
typedef struct RwTexCoords;
typedef struct _xEntFrame;
typedef struct _xEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct RpVertexNormal;
typedef struct RwMatrixTag;
typedef struct RwTexture;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct _xRot;
typedef struct RpSector;
typedef struct RpMaterial;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RwLLLink;
typedef struct xAnimTransition;
typedef struct RxIoSpec;
typedef struct _xEntCollis;
typedef struct xAnimState;
typedef struct RxNodeMethods;
typedef struct RpPolygon;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwSurfaceProperties;
typedef struct RpTriangle;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct _xSphere;
typedef enum RxClusterValidityReq;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef struct _xCylinder;
typedef enum RwTextureAddressMode;
typedef struct xSurface;
typedef struct RxPipelineNodeParam;
typedef struct _xBox;
typedef struct xQCData;
typedef struct RwObjectHasFrame;
typedef struct _iCollis;
typedef struct RpInterpolator;
typedef struct _xBBox;
typedef struct RwRGBAReal;

typedef void(*type_0)(_xEnt*, _xScene*, float32, void*);
typedef int32(*type_3)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_6)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_10)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef int32(*type_14)(RxNodeDefinition*);
typedef void(*type_16)(RxNodeDefinition*);
typedef int32(*type_19)(RxPipelineNode*);
typedef void(*type_20)(RwResEntry*);
typedef RpWorldSector*(*type_21)(RpWorldSector*);
typedef void(*type_22)(RxPipelineNode*);
typedef xBase*(*type_23)(uint32);
typedef uint32(*type_24)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int8*(*type_26)(xBase*);
typedef void(*type_27)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int8*(*type_28)(uint32);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef void(*type_30)(_xEnt*, _xScene*, float32);
typedef void(*type_31)(_xEnt*);
typedef void(*type_34)(xMemPool*, void*);
typedef void(*type_35)(_xEnt*);
typedef void(*type_36)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_37)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_38)(_xEnt*, _xVec3*);
typedef uint32(*type_40)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_43)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_49)(RwObjectHasFrame*);

typedef uint8 type_1[3];
typedef uint8 type_2[2];
typedef float32 type_4[4];
typedef float32 type_5[4];
typedef RpLight* type_7[2];
typedef RxCluster type_8[1];
typedef RwFrame* type_9[2];
typedef uint32 type_11[4];
typedef _xVec3 type_15[2];
typedef _xQuat type_17[2];
typedef _xVec3 type_18[4];
typedef uint8 type_25[3];
typedef int8 type_32[32];
typedef int8 type_33[32];
typedef uint16 type_39[3];
typedef uint16 type_41[3];
typedef float32 type_42[2];
typedef float32 type_44[4];
typedef _xCollis type_45[18];
typedef RwTexCoords* type_46[8];
typedef uint8 type_47[8];
typedef uint8 type_48[8];
typedef uint8 type_50[8];
typedef uint8 type_51[8];
typedef RwTexCoords* type_52[8];

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xFFX
{
	uint32 flags;
	void(*doEffect)(_xEnt*, _xScene*, float32, void*);
	void* fdata;
	xFFX* next;
};

struct xFFXRotMatchState
{
	int32 lgrounded;
	_xVec3 lfup;
	_xVec3 lfat;
	_xVec3 plfat;
	float32 tmr;
	float32 mrate;
	float32 tmatch;
	float32 rrate;
	float32 trelax;
	float32 max_decl;
	xFFXRotMatchState* next;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xFFXShakeState
{
	_xVec3 disp;
	float32 dur;
	float32 freq;
	float32 tmr;
	float32 alpha;
	float32 lval;
	xFFXShakeState* next;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct rxReq
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RpSector
{
	int32 type;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct xSurface
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _iCollis
{
	int32 unknown;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

uint32 psize;
xFFX* pool;
xFFX* alist;
uint32 shake_psize;
xFFXShakeState* shake_pool;
xFFXShakeState* shake_alist;
uint32 rot_match_psize;
xFFXRotMatchState* rot_match_pool;
xFFXRotMatchState* rot_match_alist;
uint32 gActiveHeap;

xFFXRotMatchState* xFFXRotMatchAlloc();
void xFFXRotMatchPoolInit(uint32 num);
void xFFXShakeFree(xFFXShakeState* s);
xFFXShakeState* xFFXShakeAlloc();
void xFFXShakePoolInit(uint32 num);
void xFFXShakeUpdateEnt(_xEnt* ent, float32 dt, void* fdata);
void xFFXApply(_xEnt* ent, _xScene* sc, float32 dt);
void xFFXApplyOne(xFFX* ffx, _xEnt* ent, _xScene* sc, float32 dt);
int16 xFFXAddEffect(_xEnt* ent, void(*dof)(_xEnt*, _xScene*, float32, void*), void* fd);
int16 xFFXAddEffect(_xEnt* ent, xFFX* f);
void xFFXTurnOff(xFFX* f);
void xFFXTurnOn(xFFX* f);
xFFX* xFFXAlloc();
void xFFXPoolInit(uint32 num_ffx);

// xFFXRotMatchAlloc__Fv
// Start address: 0x1a7860
xFFXRotMatchState* xFFXRotMatchAlloc()
{
	// Line 498, Address: 0x1a7860, Func Offset: 0
	// Line 499, Address: 0x1a7870, Func Offset: 0x10
	// Line 503, Address: 0x1a7878, Func Offset: 0x18
	// Line 505, Address: 0x1a7880, Func Offset: 0x20
	// Func End, Address: 0x1a7888, Func Offset: 0x28
}

// xFFXRotMatchPoolInit__FUi
// Start address: 0x1a7890
void xFFXRotMatchPoolInit(uint32 num)
{
	uint32 i;
	// Line 482, Address: 0x1a7890, Func Offset: 0
	// Line 486, Address: 0x1a789c, Func Offset: 0xc
	// Line 487, Address: 0x1a78a0, Func Offset: 0x10
	// Line 486, Address: 0x1a78a8, Func Offset: 0x18
	// Line 487, Address: 0x1a78ac, Func Offset: 0x1c
	// Line 488, Address: 0x1a78c0, Func Offset: 0x30
	// Line 489, Address: 0x1a78c4, Func Offset: 0x34
	// Line 490, Address: 0x1a78d4, Func Offset: 0x44
	// Line 491, Address: 0x1a78e8, Func Offset: 0x58
	// Line 490, Address: 0x1a78ec, Func Offset: 0x5c
	// Line 491, Address: 0x1a78fc, Func Offset: 0x6c
	// Line 492, Address: 0x1a7910, Func Offset: 0x80
	// Line 493, Address: 0x1a792c, Func Offset: 0x9c
	// Func End, Address: 0x1a793c, Func Offset: 0xac
}

// xFFXShakeFree__FP14xFFXShakeState
// Start address: 0x1a7940
void xFFXShakeFree(xFFXShakeState* s)
{
	// Line 324, Address: 0x1a7940, Func Offset: 0
	// Line 326, Address: 0x1a794c, Func Offset: 0xc
	// Func End, Address: 0x1a7954, Func Offset: 0x14
}

// xFFXShakeAlloc__Fv
// Start address: 0x1a7960
xFFXShakeState* xFFXShakeAlloc()
{
	// Line 310, Address: 0x1a7960, Func Offset: 0
	// Line 311, Address: 0x1a7970, Func Offset: 0x10
	// Line 315, Address: 0x1a7978, Func Offset: 0x18
	// Line 317, Address: 0x1a7980, Func Offset: 0x20
	// Func End, Address: 0x1a7988, Func Offset: 0x28
}

// xFFXShakePoolInit__FUi
// Start address: 0x1a7990
void xFFXShakePoolInit(uint32 num)
{
	uint32 i;
	// Line 294, Address: 0x1a7990, Func Offset: 0
	// Line 298, Address: 0x1a799c, Func Offset: 0xc
	// Line 299, Address: 0x1a79a0, Func Offset: 0x10
	// Line 298, Address: 0x1a79a8, Func Offset: 0x18
	// Line 299, Address: 0x1a79ac, Func Offset: 0x1c
	// Line 300, Address: 0x1a79c0, Func Offset: 0x30
	// Line 301, Address: 0x1a79c4, Func Offset: 0x34
	// Line 302, Address: 0x1a79d4, Func Offset: 0x44
	// Line 303, Address: 0x1a79e8, Func Offset: 0x58
	// Line 302, Address: 0x1a79ec, Func Offset: 0x5c
	// Line 303, Address: 0x1a79fc, Func Offset: 0x6c
	// Line 304, Address: 0x1a7a10, Func Offset: 0x80
	// Line 305, Address: 0x1a7a2c, Func Offset: 0x9c
	// Func End, Address: 0x1a7a3c, Func Offset: 0xac
}

// xFFXShakeUpdateEnt__FP5_xEntP7_xScenefPv
// Start address: 0x1a7a40
void xFFXShakeUpdateEnt(_xEnt* ent, float32 dt, void* fdata)
{
	float32 mag;
	float32 tnext;
	xFFXShakeState* ss;
	// Line 251, Address: 0x1a7a40, Func Offset: 0
	// Line 258, Address: 0x1a7a58, Func Offset: 0x18
	// Line 262, Address: 0x1a7a5c, Func Offset: 0x1c
	// Line 258, Address: 0x1a7a68, Func Offset: 0x28
	// Line 262, Address: 0x1a7a6c, Func Offset: 0x2c
	// Line 265, Address: 0x1a7a84, Func Offset: 0x44
	// Line 271, Address: 0x1a7aa0, Func Offset: 0x60
	// Line 272, Address: 0x1a7ad4, Func Offset: 0x94
	// Line 273, Address: 0x1a7b28, Func Offset: 0xe8
	// Line 274, Address: 0x1a7b34, Func Offset: 0xf4
	// Line 277, Address: 0x1a7b3c, Func Offset: 0xfc
	// Line 278, Address: 0x1a7b40, Func Offset: 0x100
	// Line 277, Address: 0x1a7b48, Func Offset: 0x108
	// Line 278, Address: 0x1a7b54, Func Offset: 0x114
	// Line 277, Address: 0x1a7b68, Func Offset: 0x128
	// Line 278, Address: 0x1a7b6c, Func Offset: 0x12c
	// Line 277, Address: 0x1a7b78, Func Offset: 0x138
	// Line 278, Address: 0x1a7b7c, Func Offset: 0x13c
	// Line 280, Address: 0x1a7b84, Func Offset: 0x144
	// Line 281, Address: 0x1a7b88, Func Offset: 0x148
	// Line 282, Address: 0x1a7b8c, Func Offset: 0x14c
	// Func End, Address: 0x1a7ba8, Func Offset: 0x168
}

// xFFXApply__FP5_xEntP7_xScenef
// Start address: 0x1a7bb0
void xFFXApply(_xEnt* ent, _xScene* sc, float32 dt)
{
	// Line 241, Address: 0x1a7bb0, Func Offset: 0
	// Line 244, Address: 0x1a7bd0, Func Offset: 0x20
	// Line 245, Address: 0x1a7be4, Func Offset: 0x34
	// Line 247, Address: 0x1a7c88, Func Offset: 0xd8
	// Func End, Address: 0x1a7cac, Func Offset: 0xfc
}

// xFFXApplyOne__FP4xFFXP5_xEntP7_xScenef
// Start address: 0x1a7cb0
void xFFXApplyOne(xFFX* ffx, _xEnt* ent, _xScene* sc, float32 dt)
{
	// Line 226, Address: 0x1a7cb0, Func Offset: 0
	// Line 232, Address: 0x1a7cd4, Func Offset: 0x24
	// Line 233, Address: 0x1a7cec, Func Offset: 0x3c
	// Line 235, Address: 0x1a7d90, Func Offset: 0xe0
	// Line 236, Address: 0x1a7da0, Func Offset: 0xf0
	// Line 238, Address: 0x1a7db8, Func Offset: 0x108
	// Func End, Address: 0x1a7de0, Func Offset: 0x130
}

// xFFXAddEffect__FP5_xEntPFP5_xEntP7_xScenefPv_vPv
// Start address: 0x1a7de0
int16 xFFXAddEffect(_xEnt* ent, void(*dof)(_xEnt*, _xScene*, float32, void*), void* fd)
{
	// Line 126, Address: 0x1a7de0, Func Offset: 0
	// Line 128, Address: 0x1a7e00, Func Offset: 0x20
	// Line 129, Address: 0x1a7e08, Func Offset: 0x28
	// Line 132, Address: 0x1a7e10, Func Offset: 0x30
	// Line 133, Address: 0x1a7e14, Func Offset: 0x34
	// Line 134, Address: 0x1a7e18, Func Offset: 0x38
	// Line 135, Address: 0x1a7e3c, Func Offset: 0x5c
	// Func End, Address: 0x1a7e44, Func Offset: 0x64
}

// xFFXAddEffect__FP5_xEntP4xFFX
// Start address: 0x1a7e50
int16 xFFXAddEffect(_xEnt* ent, xFFX* f)
{
	// Line 118, Address: 0x1a7e50, Func Offset: 0
	// Line 119, Address: 0x1a7e58, Func Offset: 0x8
	// Line 120, Address: 0x1a7e64, Func Offset: 0x14
	// Line 121, Address: 0x1a7e68, Func Offset: 0x18
	// Line 122, Address: 0x1a7e70, Func Offset: 0x20
	// Func End, Address: 0x1a7e78, Func Offset: 0x28
}

// xFFXTurnOff__FP4xFFX
// Start address: 0x1a7e80
void xFFXTurnOff(xFFX* f)
{
	// Line 77, Address: 0x1a7e80, Func Offset: 0
	// Line 78, Address: 0x1a7e8c, Func Offset: 0xc
	// Func End, Address: 0x1a7e94, Func Offset: 0x14
}

// xFFXTurnOn__FP4xFFX
// Start address: 0x1a7ea0
void xFFXTurnOn(xFFX* f)
{
	// Line 71, Address: 0x1a7ea0, Func Offset: 0
	// Line 72, Address: 0x1a7ea8, Func Offset: 0x8
	// Func End, Address: 0x1a7eb0, Func Offset: 0x10
}

// xFFXAlloc__Fv
// Start address: 0x1a7eb0
xFFX* xFFXAlloc()
{
	// Line 44, Address: 0x1a7eb0, Func Offset: 0
	// Line 45, Address: 0x1a7ec0, Func Offset: 0x10
	// Line 49, Address: 0x1a7ec8, Func Offset: 0x18
	// Line 51, Address: 0x1a7ed0, Func Offset: 0x20
	// Func End, Address: 0x1a7ed8, Func Offset: 0x28
}

// xFFXPoolInit__FUi
// Start address: 0x1a7ee0
void xFFXPoolInit(uint32 num_ffx)
{
	uint32 i;
	// Line 28, Address: 0x1a7ee0, Func Offset: 0
	// Line 32, Address: 0x1a7eec, Func Offset: 0xc
	// Line 33, Address: 0x1a7ef4, Func Offset: 0x14
	// Line 34, Address: 0x1a7f08, Func Offset: 0x28
	// Line 35, Address: 0x1a7f0c, Func Offset: 0x2c
	// Line 36, Address: 0x1a7f1c, Func Offset: 0x3c
	// Line 37, Address: 0x1a7f28, Func Offset: 0x48
	// Line 36, Address: 0x1a7f2c, Func Offset: 0x4c
	// Line 37, Address: 0x1a7f3c, Func Offset: 0x5c
	// Line 38, Address: 0x1a7f50, Func Offset: 0x70
	// Line 39, Address: 0x1a7f60, Func Offset: 0x80
	// Func End, Address: 0x1a7f70, Func Offset: 0x90
}

