typedef struct RpLight;
typedef enum RpWorldRenderOrder;
typedef struct _xMovePoint;
typedef struct RxClusterRef;
typedef struct RpClump;
typedef struct rxHeapBlockHeader;
typedef struct _xCollis;
typedef struct xMemPool;
typedef struct RwFrame;
typedef struct xAnimFile;
typedef enum RxClusterValidityReq;
typedef struct _xEnt;
typedef struct p2EntMotionMechData;
typedef struct RxPipelineCluster;
typedef struct _xVec3;
typedef struct RwSphere;
typedef struct xAnimSingle;
typedef struct xAnimEffect;
typedef struct RxClusterDefinition;
typedef struct p2EntMotionOrbitData;
typedef struct _xScene;
typedef struct RpCollSector;
typedef struct RxOutputSpec;
typedef struct xAnimTransitionList;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct RpMeshHeader;
typedef struct xAnimTable;
typedef struct _xSphere;
typedef struct xBase;
typedef struct RxPipeline;
typedef enum RwTextureAddressMode;
typedef struct _xEntERData;
typedef struct _xEntMotion;
typedef struct xSurface;
typedef struct iEnv;
typedef struct RpWorldSector;
typedef struct RxPipelineNode;
typedef struct _xEntFrame;
typedef struct _xMat3x3;
typedef struct _xEntMechData;
typedef struct xAnimActiveEffect;
typedef struct p2EntAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xCylinder;
typedef struct xFFX;
typedef struct RpWorld;
typedef struct RxPipelineNodeParam;
typedef struct _tagxRumble;
typedef struct RxPipelineNodeTopSortData;
typedef struct xQCData;
typedef struct _xEnv;
typedef struct xModelInstance;
typedef struct p2EntMotionSplineData;
typedef struct RxNodeDefinition;
typedef struct RpGeometry;
typedef struct RpAtomic;
typedef struct RpVertexNormal;
typedef struct _xBox;
typedef struct _xEntShadow;
typedef struct RpMaterialList;
typedef struct _xBBox;
typedef struct RpSector;
typedef struct RpMorphTarget;
typedef struct RpMaterial;
typedef struct xSpline3;
typedef struct RwLLLink;
typedef struct RwResEntry;
typedef struct _xEntMPData;
typedef struct RwObjectHasFrame;
typedef struct RwRGBAReal;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTransition;
typedef enum _tagPadState;
typedef struct p2EntMotionMPData;
typedef struct RwV3d;
typedef struct _tagiPad;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimState;
typedef struct _xEntPenData;
typedef struct _xEntOrbitData;
typedef struct p2EntMotionAsset;
typedef struct RpPolygon;
typedef struct p2EntMotionPenData;
typedef struct p2LinkAsset;
typedef enum RwTextureFilterMode;
typedef struct xModelPool;
typedef struct RwObject;
typedef struct RpTriangle;
typedef enum RxClusterValid;
typedef struct _tagPadAnalog;
typedef struct xCoef3;
typedef struct xAnimPlay;
typedef struct _tagxPad;
typedef struct RwRGBA;
typedef struct iShadowCache;
typedef struct RwRaster;
typedef struct _xMat4x3;
typedef struct RwLinkList;
typedef struct p2MovePointAsset;
typedef struct _xEntSplineData;
typedef struct RwMatrixTag;
typedef struct _xQuat;
typedef struct rxReq;
typedef struct RwTexDictionary;
typedef struct _xBound;
typedef struct RwTexCoords;
typedef struct RwTexture;
typedef struct RwBBox;
typedef struct p2BaseAsset;
typedef enum RxClusterForcePresent;
typedef struct _iCollis;
typedef enum RxNodeDefEditable;
typedef struct _xEntCollis;
typedef struct RpInterpolator;
typedef struct _xRot;
typedef struct xCoef;
typedef struct RxIoSpec;
typedef enum _tagRumbleType;
typedef struct p2EntMotionERData;
typedef struct RxNodeMethods;
typedef struct RwSurfaceProperties;
typedef struct iColor_tag;
typedef struct RxHeap;
typedef struct RxCluster;

typedef void(*type_2)(xMemPool*, void*);
typedef void(*type_3)(_xEnt*);
typedef void(*type_4)(_xEnt*, _xVec3*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef RpWorldSector*(*type_9)(RpWorldSector*);
typedef xBase*(*type_11)(uint32);
typedef void(*type_12)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_13)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_14)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int8*(*type_15)(xBase*);
typedef uint32(*type_17)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_19)(RxNodeDefinition*);
typedef int8*(*type_20)(uint32);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef void(*type_23)(RxNodeDefinition*);
typedef int32(*type_25)(RxPipelineNode*);
typedef void(*type_26)(RxPipelineNode*);
typedef int32(*type_27)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwObjectHasFrame*(*type_28)(RwObjectHasFrame*);
typedef uint32(*type_29)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_31)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_36)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_40)(RwResEntry*);
typedef void(*type_42)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_44)(_xEnt*, _xScene*, float32);
typedef void(*type_46)(_xEnt*);
typedef void(*type_50)(_xEnt*, _xVec3*);
typedef void(*type_56)();

typedef RpLight* type_0[2];
typedef RwFrame* type_1[2];
typedef _xVec3 type_6[2];
typedef float32 type_7[4];
typedef _xQuat type_8[2];
typedef _xCollis type_10[18];
typedef uint8 type_16[8];
typedef uint8 type_18[8];
typedef uint8 type_21[8];
typedef uint8 type_24[8];
typedef uint8 type_30[3];
typedef uint16 type_32[3];
typedef uint8 type_33[3];
typedef RxCluster type_34[1];
typedef uint16 type_35[3];
typedef uint32 type_37[4];
typedef float32 type_38[2];
typedef _xVec3 type_39[4];
typedef uint8 type_41[3];
typedef uint8 type_43[22];
typedef uint8 type_45[22];
typedef uint8 type_47[2];
typedef RwTexCoords* type_48[8];
typedef float32 type_49[4];
typedef RwTexCoords* type_51[8];
typedef float32 type_52[4];
typedef float32 type_53[4];
typedef uint8 type_54[2];
typedef int8 type_55[32];
typedef int8 type_57[32];
typedef uint8 type_58[2];

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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _xMovePoint : xBase
{
	p2MovePointAsset* asset;
	_xVec3* pos;
	_xMovePoint** nodes;
	_xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 flg_props;
	uint8 pad[2];
	float32 delay;
	xSpline3* spl;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct p2EntMotionMechData
{
	uint8 type;
	uint8 flags;
	uint8 sld_axis;
	uint8 rot_axis;
	float32 sld_dist;
	float32 sld_tm;
	float32 sld_acc_tm;
	float32 sld_dec_tm;
	float32 rot_dist;
	float32 rot_tm;
	float32 rot_acc_tm;
	float32 rot_dec_tm;
	float32 ret_delay;
	float32 post_ret_delay;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct p2EntMotionOrbitData
{
	_xVec3 center;
	float32 w;
	float32 h;
	float32 period;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xEntERData
{
	_xVec3 a;
	_xVec3 b;
	_xVec3 dir;
	float32 et;
	float32 wet;
	float32 rt;
	float32 wrt;
	float32 p;
	float32 brt;
	float32 ert;
	int32 state;
};

struct _xEntMotion
{
	p2EntMotionAsset* asset;
	uint8 type;
	uint8 pad;
	uint16 flags;
	float32 t;
	float32 tmr;
	float32 d;
	union
	{
		_xEntERData er;
		_xEntOrbitData orb;
		_xEntSplineData spl;
		_xEntMPData mp;
		_xEntMechData mech;
		_xEntPenData pen;
	};
	_xEnt* owner;
	_xEnt* target;
};

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		_xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	uint8 pad[3];
	void* moprops;
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

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
};

struct _xEntMechData
{
	_xVec3 apos;
	_xVec3 bpos;
	_xVec3 dir;
	float32 arot;
	float32 brot;
	float32 ss;
	float32 sr;
	int32 state;
	float32 tsfd;
	float32 trfd;
	float32 tsbd;
	float32 trbd;
	float32* rotptr;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct xFFX
{
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct p2EntMotionSplineData
{
	int32 unknown;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RpSector
{
	int32 type;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	_xVec3* points;
	float32* time;
	_xVec3* p12;
	_xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _xEntMPData
{
	float32 curdist;
	float32 speed;
	_xMovePoint* dest;
	_xMovePoint* src;
	xSpline3* spl;
	float32 dist;
	uint32 padalign;
	_xQuat aquat;
	_xQuat bquat;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct p2EntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagiPad
{
	int32 port;
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

struct _xEntPenData
{
	_xVec3 top;
	float32 w;
	_xMat4x3 omat;
};

struct _xEntOrbitData
{
	_xVec3 orig;
	_xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct p2EntMotionAsset
{
	uint8 type;
	uint8 pad;
	uint16 flags;
	union
	{
		p2EntMotionERData er;
		p2EntMotionOrbitData orb;
		p2EntMotionSplineData spl;
		p2EntMotionMPData mp;
		p2EntMotionMechData mech;
		p2EntMotionPenData pen;
	};
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct p2EntMotionPenData
{
	uint8 flags;
	uint8 plane;
	uint8 pad[2];
	float32 len;
	float32 range;
	float32 period;
	float32 phase;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct _tagxPad
{
	uint8 value[22];
	uint8 last_value[22];
	uint32 on;
	uint32 pressed;
	uint32 released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	uint32 flags;
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct RwLinkList
{
	RwLLLink link;
};

struct p2MovePointAsset : p2BaseAsset
{
	_xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
};

struct _xEntSplineData
{
	int32 unknown;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct rxReq
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _iCollis
{
	int32 unknown;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct xCoef
{
	float32 a[4];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

struct p2EntMotionERData
{
	_xVec3 ret_pos;
	_xVec3 ext_dpos;
	float32 ext_tm;
	float32 ext_wait_tm;
	float32 ret_tm;
	float32 ret_wait_tm;
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

_xEntMotion** dbg_xems;
uint16 dbg_num;
uint16 dbg_num_allocd;
int16 dbg_idx;
_xScene* g_xSceneCur;
_tagxPad* gDebugPad;
iColor_tag g_NEON_RED;
iColor_tag g_PIMP_GOLD;
iColor_tag g_NEON_GREEN;
uint32 gActiveHeap;
void(*xEntMotionDebugCB)();

void xEntMotionDebugIPad(_xEntMotion* xem);
void xEntMotionDebugDraw(_xEntMotion* xem);
void xEntMotionDebugWrite(_xEntMotion* xem);
void xEntMotionDebugCB();
void xEntMotionDebugExit();
void xEntMotionDebugInit(uint16 num_xems);
void xEntMotionTranslate(_xEntMotion* motion, _xVec3* dpos);
void xEntMechReverse(_xEntMotion* motion);
void xEntMechForward(_xEntMotion* motion);
uint32 xEntRotMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame);
uint32 xEntSldMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame);
void xEntMechMove(_xEntMotion* motion, _xScene* sc, float32 dt, _xEntFrame* frame);
void xEntPenMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame);
void xEntMPMove(_xEntMotion* motion, _xScene* sc, float32 dt, _xEntFrame* frame);
void xEntMPGetNext(_xEntMotion* motion, _xMovePoint* prev);
void xEntOrbitMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame);
void xEntERMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame);
void xEntMotionMove(_xEntMotion* motion, _xScene* sc, float32 dt, _xEntFrame* frame);
void xEntMotionReset(_xEntMotion* motion, _xScene* sc);
void xEntMotionSetup(_xEntMotion* motion);
void xEntMotionInit(_xEntMotion* motion, _xEnt* owner, p2EntMotionAsset* asset);

// xEntMotionDebugIPad__FP11_xEntMotion
// Start address: 0x192a90
void xEntMotionDebugIPad(_xEntMotion* xem)
{
	// Line 1401, Address: 0x192a90, Func Offset: 0
	// Line 1402, Address: 0x192aa0, Func Offset: 0x10
	// Line 1403, Address: 0x192abc, Func Offset: 0x2c
	// Line 1404, Address: 0x192acc, Func Offset: 0x3c
	// Line 1405, Address: 0x192ae0, Func Offset: 0x50
	// Line 1408, Address: 0x192ae4, Func Offset: 0x54
	// Line 1409, Address: 0x192af4, Func Offset: 0x64
	// Line 1410, Address: 0x192b00, Func Offset: 0x70
	// Line 1411, Address: 0x192b0c, Func Offset: 0x7c
	// Line 1414, Address: 0x192b18, Func Offset: 0x88
	// Line 1415, Address: 0x192b2c, Func Offset: 0x9c
	// Line 1416, Address: 0x192b38, Func Offset: 0xa8
	// Line 1418, Address: 0x192b40, Func Offset: 0xb0
	// Line 1420, Address: 0x192b4c, Func Offset: 0xbc
	// Line 1421, Address: 0x192b64, Func Offset: 0xd4
	// Line 1422, Address: 0x192b74, Func Offset: 0xe4
	// Line 1423, Address: 0x192b7c, Func Offset: 0xec
	// Line 1424, Address: 0x192b84, Func Offset: 0xf4
	// Line 1427, Address: 0x192b90, Func Offset: 0x100
	// Func End, Address: 0x192ba4, Func Offset: 0x114
}

// xEntMotionDebugDraw__FPC11_xEntMotion
// Start address: 0x192bb0
void xEntMotionDebugDraw(_xEntMotion* xem)
{
	uint16 jdx;
	uint16 idx;
	_xMovePoint* xmp;
	// Line 1334, Address: 0x192bb0, Func Offset: 0
	// Line 1335, Address: 0x192bd8, Func Offset: 0x28
	// Line 1336, Address: 0x192bf0, Func Offset: 0x40
	// Line 1337, Address: 0x192bf8, Func Offset: 0x48
	// Line 1339, Address: 0x192c1c, Func Offset: 0x6c
	// Line 1341, Address: 0x192c44, Func Offset: 0x94
	// Line 1342, Address: 0x192c50, Func Offset: 0xa0
	// Line 1343, Address: 0x192c5c, Func Offset: 0xac
	// Line 1345, Address: 0x192c64, Func Offset: 0xb4
	// Line 1346, Address: 0x192c70, Func Offset: 0xc0
	// Line 1347, Address: 0x192c78, Func Offset: 0xc8
	// Line 1349, Address: 0x192c90, Func Offset: 0xe0
	// Line 1354, Address: 0x192c98, Func Offset: 0xe8
	// Line 1367, Address: 0x192ca4, Func Offset: 0xf4
	// Line 1368, Address: 0x192ca8, Func Offset: 0xf8
	// Line 1369, Address: 0x192cb0, Func Offset: 0x100
	// Line 1370, Address: 0x192cb8, Func Offset: 0x108
	// Line 1371, Address: 0x192cbc, Func Offset: 0x10c
	// Line 1370, Address: 0x192cc0, Func Offset: 0x110
	// Line 1371, Address: 0x192cc8, Func Offset: 0x118
	// Line 1372, Address: 0x192cd0, Func Offset: 0x120
	// Line 1374, Address: 0x192cf0, Func Offset: 0x140
	// Line 1376, Address: 0x192cfc, Func Offset: 0x14c
	// Line 1377, Address: 0x192d24, Func Offset: 0x174
	// Line 1376, Address: 0x192d28, Func Offset: 0x178
	// Line 1377, Address: 0x192d2c, Func Offset: 0x17c
	// Line 1378, Address: 0x192d4c, Func Offset: 0x19c
	// Line 1382, Address: 0x192d68, Func Offset: 0x1b8
	// Line 1383, Address: 0x192d80, Func Offset: 0x1d0
	// Line 1384, Address: 0x192d88, Func Offset: 0x1d8
	// Line 1386, Address: 0x192da8, Func Offset: 0x1f8
	// Line 1388, Address: 0x192db0, Func Offset: 0x200
	// Line 1389, Address: 0x192dbc, Func Offset: 0x20c
	// Line 1390, Address: 0x192dc8, Func Offset: 0x218
	// Line 1392, Address: 0x192dd0, Func Offset: 0x220
	// Line 1393, Address: 0x192ddc, Func Offset: 0x22c
	// Line 1394, Address: 0x192de4, Func Offset: 0x234
	// Line 1398, Address: 0x192dfc, Func Offset: 0x24c
	// Func End, Address: 0x192e28, Func Offset: 0x278
}

// xEntMotionDebugWrite__FPC11_xEntMotion
// Start address: 0x192e30
void xEntMotionDebugWrite(_xEntMotion* xem)
{
	int8* gps;
	// Line 1139, Address: 0x192e30, Func Offset: 0
	// Line 1142, Address: 0x192e48, Func Offset: 0x18
	// Line 1144, Address: 0x192e74, Func Offset: 0x44
	// Line 1145, Address: 0x192e78, Func Offset: 0x48
	// Line 1147, Address: 0x192e80, Func Offset: 0x50
	// Line 1148, Address: 0x192e84, Func Offset: 0x54
	// Line 1150, Address: 0x192e8c, Func Offset: 0x5c
	// Line 1151, Address: 0x192e90, Func Offset: 0x60
	// Line 1153, Address: 0x192e98, Func Offset: 0x68
	// Line 1154, Address: 0x192e9c, Func Offset: 0x6c
	// Line 1156, Address: 0x192ea4, Func Offset: 0x74
	// Line 1157, Address: 0x192ea8, Func Offset: 0x78
	// Line 1159, Address: 0x192eb0, Func Offset: 0x80
	// Line 1160, Address: 0x192eb4, Func Offset: 0x84
	// Line 1162, Address: 0x192ebc, Func Offset: 0x8c
	// Line 1164, Address: 0x192ec4, Func Offset: 0x94
	// Line 1165, Address: 0x192ed4, Func Offset: 0xa4
	// Line 1168, Address: 0x192f00, Func Offset: 0xd0
	// Line 1176, Address: 0x192f34, Func Offset: 0x104
	// Line 1177, Address: 0x192f6c, Func Offset: 0x13c
	// Line 1179, Address: 0x192f94, Func Offset: 0x164
	// Line 1180, Address: 0x192fcc, Func Offset: 0x19c
	// Line 1181, Address: 0x193004, Func Offset: 0x1d4
	// Line 1186, Address: 0x193040, Func Offset: 0x210
	// Line 1187, Address: 0x193058, Func Offset: 0x228
	// Line 1188, Address: 0x193070, Func Offset: 0x240
	// Line 1189, Address: 0x193088, Func Offset: 0x258
	// Line 1190, Address: 0x1930a0, Func Offset: 0x270
	// Line 1191, Address: 0x1930b8, Func Offset: 0x288
	// Line 1193, Address: 0x1930c0, Func Offset: 0x290
	// Line 1194, Address: 0x1930f8, Func Offset: 0x2c8
	// Line 1195, Address: 0x193110, Func Offset: 0x2e0
	// Line 1196, Address: 0x193128, Func Offset: 0x2f8
	// Line 1197, Address: 0x193140, Func Offset: 0x310
	// Line 1198, Address: 0x193158, Func Offset: 0x328
	// Line 1202, Address: 0x193160, Func Offset: 0x330
	// Line 1205, Address: 0x193184, Func Offset: 0x354
	// Line 1206, Address: 0x193194, Func Offset: 0x364
	// Line 1209, Address: 0x1931b8, Func Offset: 0x388
	// Line 1211, Address: 0x1931c8, Func Offset: 0x398
	// Line 1212, Address: 0x1931e0, Func Offset: 0x3b0
	// Line 1213, Address: 0x1931f8, Func Offset: 0x3c8
	// Line 1215, Address: 0x193200, Func Offset: 0x3d0
	// Line 1218, Address: 0x193248, Func Offset: 0x418
	// Line 1221, Address: 0x193250, Func Offset: 0x420
	// Line 1224, Address: 0x193258, Func Offset: 0x428
	// Line 1227, Address: 0x193260, Func Offset: 0x430
	// Line 1229, Address: 0x193268, Func Offset: 0x438
	// Line 1232, Address: 0x19326c, Func Offset: 0x43c
	// Line 1233, Address: 0x19327c, Func Offset: 0x44c
	// Line 1236, Address: 0x1932ac, Func Offset: 0x47c
	// Line 1237, Address: 0x1932c0, Func Offset: 0x490
	// Line 1239, Address: 0x1932d8, Func Offset: 0x4a8
	// Line 1240, Address: 0x1932e4, Func Offset: 0x4b4
	// Line 1243, Address: 0x193320, Func Offset: 0x4f0
	// Line 1244, Address: 0x193334, Func Offset: 0x504
	// Line 1246, Address: 0x19334c, Func Offset: 0x51c
	// Line 1247, Address: 0x193358, Func Offset: 0x528
	// Line 1249, Address: 0x193384, Func Offset: 0x554
	// Line 1250, Address: 0x193398, Func Offset: 0x568
	// Line 1251, Address: 0x19339c, Func Offset: 0x56c
	// Line 1254, Address: 0x1933a4, Func Offset: 0x574
	// Line 1256, Address: 0x1933ac, Func Offset: 0x57c
	// Line 1257, Address: 0x1933b0, Func Offset: 0x580
	// Line 1259, Address: 0x1933b8, Func Offset: 0x588
	// Line 1260, Address: 0x1933bc, Func Offset: 0x58c
	// Line 1262, Address: 0x1933c4, Func Offset: 0x594
	// Line 1263, Address: 0x1933d8, Func Offset: 0x5a8
	// Line 1264, Address: 0x1933dc, Func Offset: 0x5ac
	// Line 1267, Address: 0x1933e4, Func Offset: 0x5b4
	// Line 1269, Address: 0x1933ec, Func Offset: 0x5bc
	// Line 1270, Address: 0x1933f0, Func Offset: 0x5c0
	// Line 1272, Address: 0x1933f8, Func Offset: 0x5c8
	// Line 1273, Address: 0x1933fc, Func Offset: 0x5cc
	// Line 1275, Address: 0x193404, Func Offset: 0x5d4
	// Line 1276, Address: 0x193408, Func Offset: 0x5d8
	// Line 1278, Address: 0x193410, Func Offset: 0x5e0
	// Line 1281, Address: 0x193418, Func Offset: 0x5e8
	// Line 1282, Address: 0x193428, Func Offset: 0x5f8
	// Line 1283, Address: 0x19343c, Func Offset: 0x60c
	// Line 1287, Address: 0x193478, Func Offset: 0x648
	// Line 1288, Address: 0x193494, Func Offset: 0x664
	// Line 1289, Address: 0x1934b0, Func Offset: 0x680
	// Line 1290, Address: 0x1934c8, Func Offset: 0x698
	// Line 1291, Address: 0x1934e4, Func Offset: 0x6b4
	// Line 1292, Address: 0x193500, Func Offset: 0x6d0
	// Line 1293, Address: 0x193518, Func Offset: 0x6e8
	// Line 1294, Address: 0x193530, Func Offset: 0x700
	// Line 1297, Address: 0x193568, Func Offset: 0x738
	// Line 1300, Address: 0x1935a0, Func Offset: 0x770
	// Line 1304, Address: 0x1935d8, Func Offset: 0x7a8
	// Line 1305, Address: 0x1935e8, Func Offset: 0x7b8
	// Line 1309, Address: 0x193624, Func Offset: 0x7f4
	// Line 1310, Address: 0x193640, Func Offset: 0x810
	// Line 1311, Address: 0x19365c, Func Offset: 0x82c
	// Line 1312, Address: 0x1936a0, Func Offset: 0x870
	// Line 1313, Address: 0x1936bc, Func Offset: 0x88c
	// Line 1314, Address: 0x1936d8, Func Offset: 0x8a8
	// Line 1315, Address: 0x1936f0, Func Offset: 0x8c0
	// Line 1316, Address: 0x193708, Func Offset: 0x8d8
	// Line 1317, Address: 0x19374c, Func Offset: 0x91c
	// Line 1319, Address: 0x193790, Func Offset: 0x960
	// Line 1321, Address: 0x193798, Func Offset: 0x968
	// Line 1324, Address: 0x1937d0, Func Offset: 0x9a0
	// Line 1325, Address: 0x1937ec, Func Offset: 0x9bc
	// Line 1326, Address: 0x193808, Func Offset: 0x9d8
	// Line 1327, Address: 0x19384c, Func Offset: 0xa1c
	// Line 1328, Address: 0x193894, Func Offset: 0xa64
	// Line 1331, Address: 0x1938ac, Func Offset: 0xa7c
	// Func End, Address: 0x1938c8, Func Offset: 0xa98
}

// xEntMotionDebugCB__Fv
// Start address: 0x1938d0
void xEntMotionDebugCB()
{
	_xEntMotion* xem;
	// Line 1114, Address: 0x1938d0, Func Offset: 0
	// Line 1115, Address: 0x1938dc, Func Offset: 0xc
	// Line 1120, Address: 0x1938ec, Func Offset: 0x1c
	// Line 1126, Address: 0x1938f8, Func Offset: 0x28
	// Line 1129, Address: 0x193908, Func Offset: 0x38
	// Line 1132, Address: 0x193910, Func Offset: 0x40
	// Line 1135, Address: 0x193918, Func Offset: 0x48
	// Line 1136, Address: 0x193920, Func Offset: 0x50
	// Func End, Address: 0x193930, Func Offset: 0x60
}

// xEntMotionDebugExit__Fv
// Start address: 0x193930
void xEntMotionDebugExit()
{
	// Line 1102, Address: 0x193930, Func Offset: 0
	// Line 1099, Address: 0x193934, Func Offset: 0x4
	// Line 1100, Address: 0x193938, Func Offset: 0x8
	// Line 1101, Address: 0x19393c, Func Offset: 0xc
	// Line 1103, Address: 0x193940, Func Offset: 0x10
	// Func End, Address: 0x193948, Func Offset: 0x18
}

// xEntMotionDebugInit__FUs
// Start address: 0x193950
void xEntMotionDebugInit(uint16 num_xems)
{
	// Line 1085, Address: 0x193950, Func Offset: 0
	// Line 1086, Address: 0x19395c, Func Offset: 0xc
	// Line 1089, Address: 0x193968, Func Offset: 0x18
	// Line 1091, Address: 0x19397c, Func Offset: 0x2c
	// Line 1093, Address: 0x193990, Func Offset: 0x40
	// Line 1091, Address: 0x193994, Func Offset: 0x44
	// Line 1094, Address: 0x193998, Func Offset: 0x48
	// Line 1095, Address: 0x19399c, Func Offset: 0x4c
	// Func End, Address: 0x1939ac, Func Offset: 0x5c
}

// xEntMotionTranslate__FP11_xEntMotionPC6_xVec3
// Start address: 0x1939b0
void xEntMotionTranslate(_xEntMotion* motion, _xVec3* dpos)
{
	// Line 1057, Address: 0x1939b0, Func Offset: 0
	// Line 1058, Address: 0x1939bc, Func Offset: 0xc
	// Line 1059, Address: 0x1939ec, Func Offset: 0x3c
	// Line 1061, Address: 0x193a18, Func Offset: 0x68
	// Line 1062, Address: 0x193a28, Func Offset: 0x78
	// Line 1063, Address: 0x193a58, Func Offset: 0xa8
	// Line 1065, Address: 0x193a84, Func Offset: 0xd4
	// Line 1068, Address: 0x193a94, Func Offset: 0xe4
	// Line 1069, Address: 0x193a9c, Func Offset: 0xec
	// Line 1070, Address: 0x193acc, Func Offset: 0x11c
	// Line 1072, Address: 0x193af8, Func Offset: 0x148
	// Line 1073, Address: 0x193b08, Func Offset: 0x158
	// Line 1074, Address: 0x193b38, Func Offset: 0x188
	// Line 1076, Address: 0x193b68, Func Offset: 0x1b8
	// Func End, Address: 0x193b70, Func Offset: 0x1c0
}

// xEntMechReverse__FP11_xEntMotion
// Start address: 0x193b70
void xEntMechReverse(_xEntMotion* motion)
{
	p2EntMotionMechData* mkasst;
	_xEntMechData* mech;
	// Line 1007, Address: 0x193b70, Func Offset: 0
	// Line 998, Address: 0x193b74, Func Offset: 0x4
	// Line 997, Address: 0x193b78, Func Offset: 0x8
	// Line 1007, Address: 0x193b7c, Func Offset: 0xc
	// Line 1009, Address: 0x193b84, Func Offset: 0x14
	// Line 1010, Address: 0x193b90, Func Offset: 0x20
	// Line 1013, Address: 0x193b94, Func Offset: 0x24
	// Line 1010, Address: 0x193b98, Func Offset: 0x28
	// Line 1011, Address: 0x193ba0, Func Offset: 0x30
	// Line 1012, Address: 0x193bac, Func Offset: 0x3c
	// Line 1015, Address: 0x193bbc, Func Offset: 0x4c
	// Line 1016, Address: 0x193bd0, Func Offset: 0x60
	// Line 1019, Address: 0x193bd4, Func Offset: 0x64
	// Line 1016, Address: 0x193bd8, Func Offset: 0x68
	// Line 1017, Address: 0x193be0, Func Offset: 0x70
	// Line 1018, Address: 0x193bec, Func Offset: 0x7c
	// Line 1021, Address: 0x193bfc, Func Offset: 0x8c
	// Line 1024, Address: 0x193c0c, Func Offset: 0x9c
	// Line 1027, Address: 0x193c14, Func Offset: 0xa4
	// Line 1030, Address: 0x193c1c, Func Offset: 0xac
	// Line 1033, Address: 0x193c24, Func Offset: 0xb4
	// Line 1034, Address: 0x193c2c, Func Offset: 0xbc
	// Line 1035, Address: 0x193c38, Func Offset: 0xc8
	// Line 1036, Address: 0x193c44, Func Offset: 0xd4
	// Line 1037, Address: 0x193c48, Func Offset: 0xd8
	// Line 1041, Address: 0x193c64, Func Offset: 0xf4
	// Line 1042, Address: 0x193c68, Func Offset: 0xf8
	// Line 1043, Address: 0x193c70, Func Offset: 0x100
	// Line 1049, Address: 0x193c74, Func Offset: 0x104
	// Func End, Address: 0x193c7c, Func Offset: 0x10c
}

// xEntMechForward__FP11_xEntMotion
// Start address: 0x193c80
void xEntMechForward(_xEntMotion* motion)
{
	p2EntMotionMechData* mkasst;
	_xEntMechData* mech;
	// Line 946, Address: 0x193c80, Func Offset: 0
	// Line 937, Address: 0x193c84, Func Offset: 0x4
	// Line 936, Address: 0x193c88, Func Offset: 0x8
	// Line 946, Address: 0x193c8c, Func Offset: 0xc
	// Line 948, Address: 0x193c94, Func Offset: 0x14
	// Line 951, Address: 0x193ca0, Func Offset: 0x20
	// Line 954, Address: 0x193cac, Func Offset: 0x2c
	// Line 957, Address: 0x193cb4, Func Offset: 0x34
	// Line 958, Address: 0x193cbc, Func Offset: 0x3c
	// Line 959, Address: 0x193cc8, Func Offset: 0x48
	// Line 960, Address: 0x193cd4, Func Offset: 0x54
	// Line 963, Address: 0x193ce4, Func Offset: 0x64
	// Line 964, Address: 0x193cf4, Func Offset: 0x74
	// Line 965, Address: 0x193d00, Func Offset: 0x80
	// Line 966, Address: 0x193d0c, Func Offset: 0x8c
	// Line 969, Address: 0x193d1c, Func Offset: 0x9c
	// Line 972, Address: 0x193d2c, Func Offset: 0xac
	// Line 975, Address: 0x193d34, Func Offset: 0xb4
	// Line 976, Address: 0x193d3c, Func Offset: 0xbc
	// Line 977, Address: 0x193d48, Func Offset: 0xc8
	// Line 978, Address: 0x193d54, Func Offset: 0xd4
	// Line 979, Address: 0x193d58, Func Offset: 0xd8
	// Line 984, Address: 0x193d74, Func Offset: 0xf4
	// Line 985, Address: 0x193d7c, Func Offset: 0xfc
	// Line 989, Address: 0x193d80, Func Offset: 0x100
	// Func End, Address: 0x193d88, Func Offset: 0x108
}

// xEntRotMove__FP11_xEntMotionP7_xScenefP10_xEntFrame
// Start address: 0x193d90
uint32 xEntRotMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame)
{
	p2EntAsset* easst;
	_xEnt* ownr;
	float32 speed;
	float32 rem;
	uint32 last;
	p2EntMotionMechData* mkasst;
	_xEntMechData* mech;
	// Line 865, Address: 0x193d90, Func Offset: 0
	// Line 867, Address: 0x193da4, Func Offset: 0x14
	// Line 870, Address: 0x193dac, Func Offset: 0x1c
	// Line 874, Address: 0x193db0, Func Offset: 0x20
	// Line 866, Address: 0x193db8, Func Offset: 0x28
	// Line 870, Address: 0x193dbc, Func Offset: 0x2c
	// Line 874, Address: 0x193dc4, Func Offset: 0x34
	// Line 875, Address: 0x193dd8, Func Offset: 0x48
	// Line 879, Address: 0x193e00, Func Offset: 0x70
	// Line 881, Address: 0x193e08, Func Offset: 0x78
	// Line 885, Address: 0x193e10, Func Offset: 0x80
	// Line 891, Address: 0x193e1c, Func Offset: 0x8c
	// Line 893, Address: 0x193e24, Func Offset: 0x94
	// Line 897, Address: 0x193e4c, Func Offset: 0xbc
	// Line 902, Address: 0x193eb8, Func Offset: 0x128
	// Line 903, Address: 0x193ec0, Func Offset: 0x130
	// Line 910, Address: 0x193f2c, Func Offset: 0x19c
	// Line 911, Address: 0x193f44, Func Offset: 0x1b4
	// Line 910, Address: 0x193f48, Func Offset: 0x1b8
	// Line 914, Address: 0x193f4c, Func Offset: 0x1bc
	// Line 918, Address: 0x193f60, Func Offset: 0x1d0
	// Line 919, Address: 0x193f64, Func Offset: 0x1d4
	// Line 920, Address: 0x193f6c, Func Offset: 0x1dc
	// Line 921, Address: 0x193f70, Func Offset: 0x1e0
	// Line 922, Address: 0x193f98, Func Offset: 0x208
	// Line 923, Address: 0x193fc0, Func Offset: 0x230
	// Line 926, Address: 0x193fe8, Func Offset: 0x258
	// Line 927, Address: 0x193fec, Func Offset: 0x25c
	// Line 926, Address: 0x193ff0, Func Offset: 0x260
	// Line 928, Address: 0x193ff8, Func Offset: 0x268
	// Func End, Address: 0x194010, Func Offset: 0x280
}

// xEntSldMove__FP11_xEntMotionP7_xScenefP10_xEntFrame
// Start address: 0x194010
uint32 xEntSldMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame)
{
	float32 speed;
	float32 rem;
	uint32 last;
	p2EntMotionMechData* mkasst;
	_xEntMechData* mech;
	// Line 823, Address: 0x194010, Func Offset: 0
	// Line 826, Address: 0x194014, Func Offset: 0x4
	// Line 822, Address: 0x194018, Func Offset: 0x8
	// Line 830, Address: 0x19401c, Func Offset: 0xc
	// Line 826, Address: 0x194020, Func Offset: 0x10
	// Line 830, Address: 0x194028, Func Offset: 0x18
	// Line 831, Address: 0x19403c, Func Offset: 0x2c
	// Line 832, Address: 0x194048, Func Offset: 0x38
	// Line 833, Address: 0x194074, Func Offset: 0x64
	// Line 834, Address: 0x19407c, Func Offset: 0x6c
	// Line 840, Address: 0x1940ac, Func Offset: 0x9c
	// Line 843, Address: 0x1940b4, Func Offset: 0xa4
	// Line 844, Address: 0x1940c0, Func Offset: 0xb0
	// Line 849, Address: 0x19412c, Func Offset: 0x11c
	// Line 850, Address: 0x194134, Func Offset: 0x124
	// Line 856, Address: 0x1941a0, Func Offset: 0x190
	// Line 857, Address: 0x1941a4, Func Offset: 0x194
	// Line 856, Address: 0x1941a8, Func Offset: 0x198
	// Line 860, Address: 0x1941cc, Func Offset: 0x1bc
	// Line 862, Address: 0x1941d4, Func Offset: 0x1c4
	// Func End, Address: 0x1941dc, Func Offset: 0x1cc
}

// xEntMechMove__FP11_xEntMotionP7_xScenefP10_xEntFrame
// Start address: 0x1941e0
void xEntMechMove(_xEntMotion* motion, _xScene* sc, float32 dt, _xEntFrame* frame)
{
	uint32 last;
	p2EntMotionMechData* mkasst;
	_xEntMechData* mech;
	// Line 716, Address: 0x1941e0, Func Offset: 0
	// Line 718, Address: 0x1941fc, Func Offset: 0x1c
	// Line 717, Address: 0x194208, Func Offset: 0x28
	// Line 719, Address: 0x19420c, Func Offset: 0x2c
	// Line 721, Address: 0x194210, Func Offset: 0x30
	// Line 723, Address: 0x194214, Func Offset: 0x34
	// Line 724, Address: 0x194220, Func Offset: 0x40
	// Line 725, Address: 0x194228, Func Offset: 0x48
	// Line 726, Address: 0x194238, Func Offset: 0x58
	// Line 728, Address: 0x194240, Func Offset: 0x60
	// Line 729, Address: 0x194248, Func Offset: 0x68
	// Line 731, Address: 0x194258, Func Offset: 0x78
	// Line 732, Address: 0x194270, Func Offset: 0x90
	// Line 733, Address: 0x194278, Func Offset: 0x98
	// Line 734, Address: 0x194284, Func Offset: 0xa4
	// Line 735, Address: 0x19428c, Func Offset: 0xac
	// Line 736, Address: 0x19429c, Func Offset: 0xbc
	// Line 737, Address: 0x1942a0, Func Offset: 0xc0
	// Line 742, Address: 0x1942a8, Func Offset: 0xc8
	// Line 743, Address: 0x1942bc, Func Offset: 0xdc
	// Line 744, Address: 0x1942c8, Func Offset: 0xe8
	// Line 745, Address: 0x1942d0, Func Offset: 0xf0
	// Line 747, Address: 0x1942e0, Func Offset: 0x100
	// Line 748, Address: 0x1942f8, Func Offset: 0x118
	// Line 749, Address: 0x194300, Func Offset: 0x120
	// Line 750, Address: 0x19430c, Func Offset: 0x12c
	// Line 751, Address: 0x194314, Func Offset: 0x134
	// Line 753, Address: 0x194324, Func Offset: 0x144
	// Line 758, Address: 0x194348, Func Offset: 0x168
	// Line 759, Address: 0x194358, Func Offset: 0x178
	// Line 760, Address: 0x194370, Func Offset: 0x190
	// Line 764, Address: 0x19438c, Func Offset: 0x1ac
	// Line 765, Address: 0x194390, Func Offset: 0x1b0
	// Line 766, Address: 0x194398, Func Offset: 0x1b8
	// Line 771, Address: 0x19439c, Func Offset: 0x1bc
	// Line 772, Address: 0x1943ac, Func Offset: 0x1cc
	// Line 773, Address: 0x1943b4, Func Offset: 0x1d4
	// Line 774, Address: 0x1943c4, Func Offset: 0x1e4
	// Line 776, Address: 0x1943cc, Func Offset: 0x1ec
	// Line 777, Address: 0x1943d4, Func Offset: 0x1f4
	// Line 779, Address: 0x1943e4, Func Offset: 0x204
	// Line 782, Address: 0x1943fc, Func Offset: 0x21c
	// Line 783, Address: 0x194400, Func Offset: 0x220
	// Line 788, Address: 0x194408, Func Offset: 0x228
	// Line 789, Address: 0x194418, Func Offset: 0x238
	// Line 790, Address: 0x194424, Func Offset: 0x244
	// Line 791, Address: 0x19442c, Func Offset: 0x24c
	// Line 793, Address: 0x19443c, Func Offset: 0x25c
	// Line 796, Address: 0x194454, Func Offset: 0x274
	// Line 797, Address: 0x194458, Func Offset: 0x278
	// Line 802, Address: 0x194460, Func Offset: 0x280
	// Line 803, Address: 0x194470, Func Offset: 0x290
	// Line 804, Address: 0x194488, Func Offset: 0x2a8
	// Line 808, Address: 0x194490, Func Offset: 0x2b0
	// Line 809, Address: 0x194494, Func Offset: 0x2b4
	// Line 808, Address: 0x194498, Func Offset: 0x2b8
	// Line 813, Address: 0x1944a0, Func Offset: 0x2c0
	// Line 815, Address: 0x1944a8, Func Offset: 0x2c8
	// Line 816, Address: 0x1944b0, Func Offset: 0x2d0
	// Line 818, Address: 0x1944bc, Func Offset: 0x2dc
	// Func End, Address: 0x1944dc, Func Offset: 0x2fc
}

// xEntPenMove__FP11_xEntMotionP7_xScenefP10_xEntFrame
// Start address: 0x1944e0
void xEntPenMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame)
{
	float32 rem;
	float32 newt;
	float32 dangle;
	float32 v;
	float32 th;
	p2EntMotionPenData* aspen;
	_xEntPenData* pen;
	// Line 648, Address: 0x1944e0, Func Offset: 0
	// Line 658, Address: 0x194500, Func Offset: 0x20
	// Line 650, Address: 0x19450c, Func Offset: 0x2c
	// Line 658, Address: 0x194510, Func Offset: 0x30
	// Line 665, Address: 0x194514, Func Offset: 0x34
	// Line 661, Address: 0x194518, Func Offset: 0x38
	// Line 665, Address: 0x194524, Func Offset: 0x44
	// Line 650, Address: 0x194528, Func Offset: 0x48
	// Line 665, Address: 0x19452c, Func Offset: 0x4c
	// Line 649, Address: 0x194530, Func Offset: 0x50
	// Line 665, Address: 0x194534, Func Offset: 0x54
	// Line 661, Address: 0x194538, Func Offset: 0x58
	// Line 665, Address: 0x19453c, Func Offset: 0x5c
	// Line 668, Address: 0x19455c, Func Offset: 0x7c
	// Line 669, Address: 0x194564, Func Offset: 0x84
	// Line 665, Address: 0x19456c, Func Offset: 0x8c
	// Line 668, Address: 0x194578, Func Offset: 0x98
	// Line 669, Address: 0x19457c, Func Offset: 0x9c
	// Line 670, Address: 0x19458c, Func Offset: 0xac
	// Line 675, Address: 0x194590, Func Offset: 0xb0
	// Line 676, Address: 0x1945b8, Func Offset: 0xd8
	// Line 677, Address: 0x1945c8, Func Offset: 0xe8
	// Line 678, Address: 0x1945cc, Func Offset: 0xec
	// Line 692, Address: 0x1945d4, Func Offset: 0xf4
	// Line 699, Address: 0x1945e0, Func Offset: 0x100
	// Line 713, Address: 0x1945e8, Func Offset: 0x108
	// Func End, Address: 0x19460c, Func Offset: 0x12c
}

// xEntMPMove__FP11_xEntMotionP7_xScenefP10_xEntFrame
// Start address: 0x194610
void xEntMPMove(_xEntMotion* motion, _xScene* sc, float32 dt, _xEntFrame* frame)
{
	float32 u;
	_xMat3x3 tmpmat;
	_xQuat qold;
	_xQuat quat;
	_xVec3 dir;
	_xVec3 tgt;
	float32 qdot;
	_xMovePoint* prev;
	float32 newdist;
	_xEntMPData* mp;
	// Line 506, Address: 0x194610, Func Offset: 0
	// Line 510, Address: 0x194634, Func Offset: 0x24
	// Line 513, Address: 0x194654, Func Offset: 0x44
	// Line 516, Address: 0x19465c, Func Offset: 0x4c
	// Line 518, Address: 0x194678, Func Offset: 0x68
	// Line 519, Address: 0x19467c, Func Offset: 0x6c
	// Line 527, Address: 0x194684, Func Offset: 0x74
	// Line 532, Address: 0x19468c, Func Offset: 0x7c
	// Line 535, Address: 0x194694, Func Offset: 0x84
	// Line 532, Address: 0x194698, Func Offset: 0x88
	// Line 535, Address: 0x1946a0, Func Offset: 0x90
	// Line 538, Address: 0x1946b0, Func Offset: 0xa0
	// Line 539, Address: 0x1946c8, Func Offset: 0xb8
	// Line 540, Address: 0x1946e0, Func Offset: 0xd0
	// Line 543, Address: 0x1946f8, Func Offset: 0xe8
	// Line 544, Address: 0x19470c, Func Offset: 0xfc
	// Line 550, Address: 0x194718, Func Offset: 0x108
	// Line 548, Address: 0x19471c, Func Offset: 0x10c
	// Line 549, Address: 0x194720, Func Offset: 0x110
	// Line 550, Address: 0x194724, Func Offset: 0x114
	// Line 555, Address: 0x194730, Func Offset: 0x120
	// Line 558, Address: 0x19473c, Func Offset: 0x12c
	// Line 562, Address: 0x194744, Func Offset: 0x134
	// Line 568, Address: 0x194748, Func Offset: 0x138
	// Line 570, Address: 0x194754, Func Offset: 0x144
	// Line 571, Address: 0x194760, Func Offset: 0x150
	// Line 574, Address: 0x194774, Func Offset: 0x164
	// Line 578, Address: 0x194788, Func Offset: 0x178
	// Line 579, Address: 0x1947c8, Func Offset: 0x1b8
	// Line 580, Address: 0x1947fc, Func Offset: 0x1ec
	// Line 581, Address: 0x194810, Func Offset: 0x200
	// Line 590, Address: 0x194824, Func Offset: 0x214
	// Line 592, Address: 0x194830, Func Offset: 0x220
	// Line 590, Address: 0x194838, Func Offset: 0x228
	// Line 592, Address: 0x194854, Func Offset: 0x244
	// Line 598, Address: 0x19485c, Func Offset: 0x24c
	// Line 599, Address: 0x194868, Func Offset: 0x258
	// Line 600, Address: 0x194874, Func Offset: 0x264
	// Line 601, Address: 0x1948a8, Func Offset: 0x298
	// Line 600, Address: 0x1948ac, Func Offset: 0x29c
	// Line 601, Address: 0x1948b8, Func Offset: 0x2a8
	// Line 602, Address: 0x1948c8, Func Offset: 0x2b8
	// Line 603, Address: 0x1948dc, Func Offset: 0x2cc
	// Line 602, Address: 0x1948e0, Func Offset: 0x2d0
	// Line 605, Address: 0x194900, Func Offset: 0x2f0
	// Line 606, Address: 0x194920, Func Offset: 0x310
	// Line 607, Address: 0x194938, Func Offset: 0x328
	// Line 608, Address: 0x19495c, Func Offset: 0x34c
	// Line 609, Address: 0x194968, Func Offset: 0x358
	// Line 610, Address: 0x1949c4, Func Offset: 0x3b4
	// Line 611, Address: 0x1949cc, Func Offset: 0x3bc
	// Line 612, Address: 0x1949d8, Func Offset: 0x3c8
	// Line 613, Address: 0x1949e8, Func Offset: 0x3d8
	// Line 614, Address: 0x1949f4, Func Offset: 0x3e4
	// Line 617, Address: 0x194a00, Func Offset: 0x3f0
	// Line 619, Address: 0x194a08, Func Offset: 0x3f8
	// Line 622, Address: 0x194a6c, Func Offset: 0x45c
	// Line 627, Address: 0x194b1c, Func Offset: 0x50c
	// Line 628, Address: 0x194b68, Func Offset: 0x558
	// Line 629, Address: 0x194b74, Func Offset: 0x564
	// Line 634, Address: 0x194b80, Func Offset: 0x570
	// Line 635, Address: 0x194b90, Func Offset: 0x580
	// Line 636, Address: 0x194ba0, Func Offset: 0x590
	// Line 641, Address: 0x194bb0, Func Offset: 0x5a0
	// Func End, Address: 0x194bd4, Func Offset: 0x5c4
}

// xEntMPGetNext__FP11_xEntMotionP11_xMovePointP7_xScene
// Start address: 0x194be0
void xEntMPGetNext(_xEntMotion* motion, _xMovePoint* prev)
{
	_xMat3x3 mat;
	_xVec3 tempdir;
	_xEntMPData* mp;
	// Line 460, Address: 0x194be0, Func Offset: 0
	// Line 463, Address: 0x194bf0, Func Offset: 0x10
	// Line 464, Address: 0x194bf8, Func Offset: 0x18
	// Line 466, Address: 0x194bfc, Func Offset: 0x1c
	// Line 461, Address: 0x194c00, Func Offset: 0x20
	// Line 466, Address: 0x194c04, Func Offset: 0x24
	// Line 467, Address: 0x194c14, Func Offset: 0x34
	// Line 469, Address: 0x194c24, Func Offset: 0x44
	// Line 470, Address: 0x194c2c, Func Offset: 0x4c
	// Line 472, Address: 0x194c34, Func Offset: 0x54
	// Line 474, Address: 0x194c3c, Func Offset: 0x5c
	// Line 475, Address: 0x194c44, Func Offset: 0x64
	// Line 478, Address: 0x194c4c, Func Offset: 0x6c
	// Line 479, Address: 0x194c60, Func Offset: 0x80
	// Line 488, Address: 0x194c74, Func Offset: 0x94
	// Line 490, Address: 0x194c88, Func Offset: 0xa8
	// Line 488, Address: 0x194c8c, Func Offset: 0xac
	// Line 490, Address: 0x194c90, Func Offset: 0xb0
	// Line 488, Address: 0x194c94, Func Offset: 0xb4
	// Line 490, Address: 0x194cac, Func Offset: 0xcc
	// Line 491, Address: 0x194cb4, Func Offset: 0xd4
	// Line 496, Address: 0x194cc0, Func Offset: 0xe0
	// Line 498, Address: 0x194cd0, Func Offset: 0xf0
	// Line 499, Address: 0x194cd8, Func Offset: 0xf8
	// Line 500, Address: 0x194ce4, Func Offset: 0x104
	// Line 501, Address: 0x194cfc, Func Offset: 0x11c
	// Line 503, Address: 0x194d20, Func Offset: 0x140
	// Func End, Address: 0x194d34, Func Offset: 0x154
}

// xEntOrbitMove__FP11_xEntMotionP7_xScenefP10_xEntFrame
// Start address: 0x194d40
void xEntOrbitMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame)
{
	float32 rem;
	float32 newt;
	float32 s;
	float32 u;
	float32 th;
	// Line 424, Address: 0x194d40, Func Offset: 0
	// Line 429, Address: 0x194d58, Func Offset: 0x18
	// Line 424, Address: 0x194d68, Func Offset: 0x28
	// Line 431, Address: 0x194d6c, Func Offset: 0x2c
	// Line 432, Address: 0x194d7c, Func Offset: 0x3c
	// Line 431, Address: 0x194d80, Func Offset: 0x40
	// Line 432, Address: 0x194d84, Func Offset: 0x44
	// Line 434, Address: 0x194d90, Func Offset: 0x50
	// Line 435, Address: 0x194d98, Func Offset: 0x58
	// Line 434, Address: 0x194d9c, Func Offset: 0x5c
	// Line 435, Address: 0x194da0, Func Offset: 0x60
	// Line 436, Address: 0x194db0, Func Offset: 0x70
	// Line 441, Address: 0x194db4, Func Offset: 0x74
	// Line 442, Address: 0x194ddc, Func Offset: 0x9c
	// Line 443, Address: 0x194e08, Func Offset: 0xc8
	// Line 444, Address: 0x194e10, Func Offset: 0xd0
	// Line 446, Address: 0x194e34, Func Offset: 0xf4
	// Line 449, Address: 0x194e5c, Func Offset: 0x11c
	// Line 456, Address: 0x194e64, Func Offset: 0x124
	// Func End, Address: 0x194e84, Func Offset: 0x144
}

// xEntERMove__FP11_xEntMotionP7_xScenefP10_xEntFrame
// Start address: 0x194e90
void xEntERMove(_xEntMotion* motion, float32 dt, _xEntFrame* frame)
{
	float32 scale;
	float32 rem;
	float32 scale;
	float32 rem;
	float32 newt;
	// Line 378, Address: 0x194e90, Func Offset: 0
	// Line 379, Address: 0x194e98, Func Offset: 0x8
	// Line 378, Address: 0x194ea0, Func Offset: 0x10
	// Line 379, Address: 0x194ea4, Func Offset: 0x14
	// Line 380, Address: 0x194eb4, Func Offset: 0x24
	// Line 383, Address: 0x194eb8, Func Offset: 0x28
	// Line 384, Address: 0x194ee0, Func Offset: 0x50
	// Line 386, Address: 0x194ee4, Func Offset: 0x54
	// Line 388, Address: 0x194ef8, Func Offset: 0x68
	// Line 386, Address: 0x194efc, Func Offset: 0x6c
	// Line 388, Address: 0x194f0c, Func Offset: 0x7c
	// Line 390, Address: 0x194f14, Func Offset: 0x84
	// Line 391, Address: 0x194f40, Func Offset: 0xb0
	// Line 392, Address: 0x194f48, Func Offset: 0xb8
	// Line 393, Address: 0x194f78, Func Offset: 0xe8
	// Line 395, Address: 0x194f9c, Func Offset: 0x10c
	// Line 399, Address: 0x194fa4, Func Offset: 0x114
	// Line 402, Address: 0x194fec, Func Offset: 0x15c
	// Line 403, Address: 0x195038, Func Offset: 0x1a8
	// Line 405, Address: 0x195040, Func Offset: 0x1b0
	// Line 407, Address: 0x195054, Func Offset: 0x1c4
	// Line 405, Address: 0x195058, Func Offset: 0x1c8
	// Line 407, Address: 0x195068, Func Offset: 0x1d8
	// Line 409, Address: 0x195070, Func Offset: 0x1e0
	// Line 410, Address: 0x19509c, Func Offset: 0x20c
	// Line 411, Address: 0x1950a4, Func Offset: 0x214
	// Line 412, Address: 0x1950d4, Func Offset: 0x244
	// Line 414, Address: 0x1950f8, Func Offset: 0x268
	// Line 418, Address: 0x195100, Func Offset: 0x270
	// Line 419, Address: 0x19512c, Func Offset: 0x29c
	// Line 421, Address: 0x195130, Func Offset: 0x2a0
	// Func End, Address: 0x195138, Func Offset: 0x2a8
}

// xEntMotionMove__FP11_xEntMotionP7_xScenefP10_xEntFrame
// Start address: 0x195140
void xEntMotionMove(_xEntMotion* motion, _xScene* sc, float32 dt, _xEntFrame* frame)
{
	// Line 338, Address: 0x195140, Func Offset: 0
	// Line 342, Address: 0x195150, Func Offset: 0x10
	// Line 346, Address: 0x195164, Func Offset: 0x24
	// Line 347, Address: 0x195170, Func Offset: 0x30
	// Line 349, Address: 0x195178, Func Offset: 0x38
	// Line 350, Address: 0x195188, Func Offset: 0x48
	// Line 352, Address: 0x195190, Func Offset: 0x50
	// Line 353, Address: 0x1951a0, Func Offset: 0x60
	// Line 355, Address: 0x1951a8, Func Offset: 0x68
	// Line 356, Address: 0x1951b8, Func Offset: 0x78
	// Line 358, Address: 0x1951c0, Func Offset: 0x80
	// Line 359, Address: 0x1951d0, Func Offset: 0x90
	// Line 361, Address: 0x1951d8, Func Offset: 0x98
	// Line 363, Address: 0x1951e0, Func Offset: 0xa0
	// Line 366, Address: 0x1951e4, Func Offset: 0xa4
	// Line 367, Address: 0x1951f0, Func Offset: 0xb0
	// Func End, Address: 0x195204, Func Offset: 0xc4
}

// xEntMotionReset__FP11_xEntMotionP7_xScene
// Start address: 0x195210
void xEntMotionReset(_xEntMotion* motion, _xScene* sc)
{
	float32 drot;
	_xEntMechData* mech;
	p2EntMotionMechData* mkasst;
	_xEnt* ownr;
	_xVec3* modlpos;
	_xMat3x3* modlrot;
	_xVec3 pshtotop;
	_xVec3 totop;
	_xMat3x3 pshrot;
	float32 dangle;
	p2EntMotionPenData* aspen;
	// Line 195, Address: 0x195210, Func Offset: 0
	// Line 198, Address: 0x195238, Func Offset: 0x28
	// Line 199, Address: 0x195248, Func Offset: 0x38
	// Line 201, Address: 0x19524c, Func Offset: 0x3c
	// Line 204, Address: 0x195258, Func Offset: 0x48
	// Line 205, Address: 0x19526c, Func Offset: 0x5c
	// Line 206, Address: 0x195280, Func Offset: 0x70
	// Line 207, Address: 0x1952a4, Func Offset: 0x94
	// Line 210, Address: 0x1952b4, Func Offset: 0xa4
	// Line 212, Address: 0x1952dc, Func Offset: 0xcc
	// Line 213, Address: 0x1952ec, Func Offset: 0xdc
	// Line 215, Address: 0x19530c, Func Offset: 0xfc
	// Line 222, Address: 0x19531c, Func Offset: 0x10c
	// Line 216, Address: 0x195320, Func Offset: 0x110
	// Line 222, Address: 0x195324, Func Offset: 0x114
	// Line 226, Address: 0x195328, Func Offset: 0x118
	// Line 216, Address: 0x19532c, Func Offset: 0x11c
	// Line 222, Address: 0x195330, Func Offset: 0x120
	// Line 226, Address: 0x195334, Func Offset: 0x124
	// Line 233, Address: 0x195340, Func Offset: 0x130
	// Line 235, Address: 0x195358, Func Offset: 0x148
	// Line 236, Address: 0x19535c, Func Offset: 0x14c
	// Line 237, Address: 0x195360, Func Offset: 0x150
	// Line 240, Address: 0x195364, Func Offset: 0x154
	// Line 236, Address: 0x195370, Func Offset: 0x160
	// Line 240, Address: 0x195378, Func Offset: 0x168
	// Line 243, Address: 0x195380, Func Offset: 0x170
	// Line 246, Address: 0x195390, Func Offset: 0x180
	// Line 243, Address: 0x195398, Func Offset: 0x188
	// Line 246, Address: 0x1953ac, Func Offset: 0x19c
	// Line 243, Address: 0x1953b0, Func Offset: 0x1a0
	// Line 246, Address: 0x1953b4, Func Offset: 0x1a4
	// Line 249, Address: 0x1953bc, Func Offset: 0x1ac
	// Line 258, Address: 0x1953c0, Func Offset: 0x1b0
	// Line 249, Address: 0x1953cc, Func Offset: 0x1bc
	// Line 256, Address: 0x1953ec, Func Offset: 0x1dc
	// Line 258, Address: 0x195418, Func Offset: 0x208
	// Line 260, Address: 0x195420, Func Offset: 0x210
	// Line 261, Address: 0x195430, Func Offset: 0x220
	// Line 262, Address: 0x195444, Func Offset: 0x234
	// Line 263, Address: 0x195458, Func Offset: 0x248
	// Line 267, Address: 0x195478, Func Offset: 0x268
	// Line 269, Address: 0x195488, Func Offset: 0x278
	// Line 268, Address: 0x19548c, Func Offset: 0x27c
	// Line 270, Address: 0x195490, Func Offset: 0x280
	// Line 272, Address: 0x195494, Func Offset: 0x284
	// Line 276, Address: 0x19549c, Func Offset: 0x28c
	// Line 280, Address: 0x1954a8, Func Offset: 0x298
	// Line 284, Address: 0x1954b4, Func Offset: 0x2a4
	// Line 285, Address: 0x1954d0, Func Offset: 0x2c0
	// Line 286, Address: 0x1954dc, Func Offset: 0x2cc
	// Line 287, Address: 0x1954f8, Func Offset: 0x2e8
	// Line 288, Address: 0x195508, Func Offset: 0x2f8
	// Line 289, Address: 0x195524, Func Offset: 0x314
	// Line 290, Address: 0x19552c, Func Offset: 0x31c
	// Line 292, Address: 0x19554c, Func Offset: 0x33c
	// Line 295, Address: 0x195554, Func Offset: 0x344
	// Line 292, Address: 0x19555c, Func Offset: 0x34c
	// Line 293, Address: 0x19557c, Func Offset: 0x36c
	// Line 295, Address: 0x1955ac, Func Offset: 0x39c
	// Line 298, Address: 0x1955d0, Func Offset: 0x3c0
	// Line 299, Address: 0x1955e0, Func Offset: 0x3d0
	// Line 301, Address: 0x1955f0, Func Offset: 0x3e0
	// Line 303, Address: 0x1955fc, Func Offset: 0x3ec
	// Line 304, Address: 0x195604, Func Offset: 0x3f4
	// Line 306, Address: 0x195614, Func Offset: 0x404
	// Line 307, Address: 0x19561c, Func Offset: 0x40c
	// Line 308, Address: 0x195624, Func Offset: 0x414
	// Line 310, Address: 0x195630, Func Offset: 0x420
	// Line 312, Address: 0x195634, Func Offset: 0x424
	// Line 310, Address: 0x195644, Func Offset: 0x434
	// Line 312, Address: 0x195648, Func Offset: 0x438
	// Line 310, Address: 0x195650, Func Offset: 0x440
	// Line 312, Address: 0x195654, Func Offset: 0x444
	// Line 315, Address: 0x195658, Func Offset: 0x448
	// Line 312, Address: 0x19565c, Func Offset: 0x44c
	// Line 315, Address: 0x19566c, Func Offset: 0x45c
	// Line 317, Address: 0x195678, Func Offset: 0x468
	// Line 320, Address: 0x1956a0, Func Offset: 0x490
	// Line 321, Address: 0x1956b0, Func Offset: 0x4a0
	// Line 325, Address: 0x1956c0, Func Offset: 0x4b0
	// Line 330, Address: 0x1956dc, Func Offset: 0x4cc
	// Line 331, Address: 0x1956e4, Func Offset: 0x4d4
	// Line 333, Address: 0x1956e8, Func Offset: 0x4d8
	// Line 335, Address: 0x1956ec, Func Offset: 0x4dc
	// Func End, Address: 0x195718, Func Offset: 0x508
}

// xEntMotionSetup__FP11_xEntMotionP7_xScene
// Start address: 0x195720
void xEntMotionSetup(_xEntMotion* motion)
{
	// Line 164, Address: 0x195720, Func Offset: 0
	// Line 165, Address: 0x19572c, Func Offset: 0xc
	// Line 166, Address: 0x19573c, Func Offset: 0x1c
	// Line 167, Address: 0x195748, Func Offset: 0x28
	// Line 192, Address: 0x195754, Func Offset: 0x34
	// Func End, Address: 0x19575c, Func Offset: 0x3c
}

// xEntMotionInit__FP11_xEntMotionP5_xEntP16p2EntMotionAsset
// Start address: 0x195760
void xEntMotionInit(_xEntMotion* motion, _xEnt* owner, p2EntMotionAsset* asset)
{
	p2EntMotionMechData* mkasst;
	// Line 64, Address: 0x195760, Func Offset: 0
	// Line 65, Address: 0x195764, Func Offset: 0x4
	// Line 66, Address: 0x19576c, Func Offset: 0xc
	// Line 68, Address: 0x195774, Func Offset: 0x14
	// Line 69, Address: 0x195780, Func Offset: 0x20
	// Line 76, Address: 0x195784, Func Offset: 0x24
	// Line 69, Address: 0x19578c, Func Offset: 0x2c
	// Line 70, Address: 0x1957a0, Func Offset: 0x40
	// Line 71, Address: 0x1957d0, Func Offset: 0x70
	// Line 72, Address: 0x1957d8, Func Offset: 0x78
	// Line 73, Address: 0x1957e0, Func Offset: 0x80
	// Line 74, Address: 0x1957e8, Func Offset: 0x88
	// Line 76, Address: 0x1957f0, Func Offset: 0x90
	// Line 80, Address: 0x195804, Func Offset: 0xa4
	// Line 81, Address: 0x195814, Func Offset: 0xb4
	// Line 85, Address: 0x195818, Func Offset: 0xb8
	// Line 81, Address: 0x195828, Func Offset: 0xc8
	// Line 82, Address: 0x19583c, Func Offset: 0xdc
	// Line 83, Address: 0x195844, Func Offset: 0xe4
	// Line 84, Address: 0x19584c, Func Offset: 0xec
	// Line 85, Address: 0x195854, Func Offset: 0xf4
	// Line 87, Address: 0x195864, Func Offset: 0x104
	// Line 91, Address: 0x195874, Func Offset: 0x114
	// Line 95, Address: 0x19587c, Func Offset: 0x11c
	// Line 97, Address: 0x19589c, Func Offset: 0x13c
	// Line 100, Address: 0x1958ac, Func Offset: 0x14c
	// Line 102, Address: 0x1958c8, Func Offset: 0x168
	// Line 104, Address: 0x1958cc, Func Offset: 0x16c
	// Line 106, Address: 0x1958e8, Func Offset: 0x188
	// Line 108, Address: 0x1958ec, Func Offset: 0x18c
	// Line 110, Address: 0x195908, Func Offset: 0x1a8
	// Line 112, Address: 0x19590c, Func Offset: 0x1ac
	// Line 114, Address: 0x19592c, Func Offset: 0x1cc
	// Line 117, Address: 0x195940, Func Offset: 0x1e0
	// Line 119, Address: 0x19595c, Func Offset: 0x1fc
	// Line 121, Address: 0x195960, Func Offset: 0x200
	// Line 123, Address: 0x19597c, Func Offset: 0x21c
	// Line 125, Address: 0x195980, Func Offset: 0x220
	// Line 127, Address: 0x19599c, Func Offset: 0x23c
	// Line 129, Address: 0x1959a0, Func Offset: 0x240
	// Line 130, Address: 0x1959b0, Func Offset: 0x250
	// Line 132, Address: 0x1959c8, Func Offset: 0x268
	// Line 135, Address: 0x1959cc, Func Offset: 0x26c
	// Line 137, Address: 0x1959ec, Func Offset: 0x28c
	// Line 147, Address: 0x195a00, Func Offset: 0x2a0
	// Line 148, Address: 0x195a04, Func Offset: 0x2a4
	// Line 151, Address: 0x195a08, Func Offset: 0x2a8
	// Line 153, Address: 0x195a3c, Func Offset: 0x2dc
	// Func End, Address: 0x195a44, Func Offset: 0x2e4
}

