typedef struct _zEnt;
typedef struct RpAtomic;
typedef struct _xEntCollis;
typedef struct RpGeometry;
typedef struct xAnimState;
typedef struct RwV3d;
typedef struct RxIoSpec;
typedef struct RwLLLink;
typedef struct _xEnt;
typedef struct RxClusterDefinition;
typedef struct _tagxRumble;
typedef struct RpSector;
typedef struct RwRaster;
typedef struct rxHeapFreeBlock;
typedef struct xModelInstance;
typedef struct p2EntHangableAsset;
typedef struct RpClump;
typedef struct _xScene;
typedef struct RxNodeMethods;
typedef struct xAnimPlay;
typedef struct _tagxCamPathAsset;
typedef struct _xVec3;
typedef struct rxReq;
typedef struct RpWorld;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwFrame;
typedef struct RpLight;
typedef struct RpPolygon;
typedef struct xAnimFile;
typedef struct RwMatrixTag;
typedef struct RwSurfaceProperties;
typedef struct _xCollis;
typedef struct RxNodeDefinition;
typedef struct RpTriangle;
typedef struct xAnimSingle;
typedef struct p2MarkerAsset;
typedef struct xAnimEffect;
typedef struct RxHeap;
typedef struct _xSphere;
typedef struct _zCutsceneMgr;
typedef struct _xEntFrame;
typedef struct xCutsceneBreak;
typedef struct xAnimTransitionList;
typedef struct RxPipeline;
typedef struct _xEnv;
typedef struct xBase;
typedef struct RxCluster;
typedef struct xAnimTable;
typedef struct zCutsceneMgrAsset;
typedef struct zAssetPickupTable;
typedef struct iEnv;
typedef struct zShaggy1Globals;
typedef struct _tagxCam;
typedef struct RxClusterRef;
typedef struct rxHeapBlockHeader;
typedef struct xCutscene;
typedef struct _tagxCamShoulder;
typedef struct xModelPool;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineCluster;
typedef struct _xCylinder;
typedef struct zCutsceneZbufferHack;
typedef struct RwSky2DVertexFields;
typedef struct RwSphere;
typedef struct RwCamera;
typedef struct zCheckPoint;
typedef struct p2EntAsset;
typedef struct p2EnvAsset;
typedef struct RxOutputSpec;
typedef enum _tagRumbleType;
typedef enum rxEmbeddedPacketState;
typedef struct xMemPool;
typedef struct _tagxCamFollowAsset;
typedef struct RxPacket;
typedef struct xAnimActiveEffect;
typedef struct xCamAsset;
typedef struct RpCollSector;
typedef struct _xBox;
typedef enum RwTextureAddressMode;
typedef struct zGlobalGameStats;
typedef struct RpMeshHeader;
typedef struct _zEntHangable;
typedef struct xSurface;
typedef struct RxPipelineNode;
typedef struct RpMaterial;
typedef enum _tagCamType;
typedef enum eGameMode;
typedef struct RwTexture;
typedef enum RwCameraProjection;
typedef struct _xEntDrive;
typedef struct RxPipelineNodeParam;
typedef struct xQCData;
typedef struct iFogParams;
typedef struct p2LinkAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct _zEnv;
typedef struct xCutsceneTime;
typedef struct RwObjectHasFrame;
typedef struct xFFX;
typedef struct iColor_tag;
typedef struct tag_xFile;
typedef struct p2BaseAsset;
typedef struct zJumpParam;
typedef struct _tagxCamStatic;
typedef struct RwRGBA;
typedef struct xCutsceneInfo;
typedef struct RpInterpolator;
typedef struct sceCdlFILE;
typedef struct _xBBox;
typedef struct xAnimTransition;
typedef struct RwTexCoords;
typedef struct RpWorldSector;
typedef struct zGlobals;
typedef struct _xEntShadow;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct tag_iFile;
typedef struct RwResEntry;
typedef struct _tagxCamFrame;
typedef enum _tagPadInit;
typedef struct _tagxPad;
typedef struct RwRGBAReal;
typedef struct _tagxCamShoulderAsset;
typedef struct RpMorphTarget;
typedef enum _tagTransType;
typedef struct RpVertexNormal;
typedef struct _tagiTRCPadInfo;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct _tagxCamStaticFollow;
typedef struct zPlayerStatic;
typedef struct xCutsceneData;
typedef struct _xMat4x3;
typedef struct RwSky2DVertex;
typedef enum RwTextureFilterMode;
typedef struct zScene;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct zPortalAsset;
typedef enum RpWorldRenderOrder;
typedef struct _xQuat;
typedef struct _zPlatform;
typedef struct _iCollis;
typedef enum _tagTRCState;
typedef struct RwTexDictionary;
typedef struct iShadowCache;
typedef struct _tagxCamPath;
typedef struct _tagp2CamStaticAsset;
typedef struct RwPlane;
typedef enum _tagPadState;
typedef struct RwLinkList;
typedef struct RwFrustumPlane;
typedef struct _zPortal;
typedef struct _xVec4;
typedef struct RwBBox;
typedef struct _tagiPad;
typedef struct zCutsceneZbuffer;
typedef struct _xRot;
typedef enum RwFogType;
typedef struct _xBound;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct iModelTag;
typedef struct _tagPadAnalog;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct _tagTRCPadInfo;
typedef enum RxNodeDefEditable;
typedef struct _tagxCamFollow;
typedef struct zPlayerGlobals;

typedef RwCamera*(*type_2)(RwCamera*);
typedef void(*type_4)(_xEnt*);
typedef void(*type_6)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_9)(_xEnt*, _xScene*, float32);
typedef void(*type_11)(_xEnt*, _xVec3*);
typedef RpAtomic*(*type_13)(RpAtomic*);
typedef void(*type_14)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_18)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_19)(_xEnt*);
typedef RpWorldSector*(*type_21)(RpWorldSector*);
typedef xBase*(*type_30)(uint32);
typedef int8*(*type_34)(xBase*);
typedef void(*type_35)(_xEnt*, _xVec3*);
typedef int8*(*type_37)(uint32);
typedef uint32(*type_38)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_39)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_43)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_46)(RxNodeDefinition*);
typedef void(*type_49)(int32);
typedef RwObjectHasFrame*(*type_51)(RwObjectHasFrame*);
typedef void(*type_52)(xMemPool*, void*);
typedef void(*type_53)(RxNodeDefinition*);
typedef int32(*type_59)(RxPipelineNode*);
typedef uint32(*type_60)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_63)(RxPipelineNode*);
typedef int32(*type_68)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_72)(RwCamera*);
typedef uint32(*type_79)(RxPipelineNode*, uint32, uint32, void*);
typedef RpClump*(*type_84)(RpClump*, void*);
typedef void(*type_90)(RwResEntry*);

typedef uint8 type_0[3];
typedef int8 type_1[32];
typedef float32 type_3[4];
typedef float32 type_5[4];
typedef zCutsceneZbuffer type_7[4];
typedef uint8 type_8[2];
typedef float32 type_10[4];
typedef uint32 type_12[14];
typedef uint32 type_15[2];
typedef uint32 type_16[43];
typedef int8 type_17[256];
typedef uint32 type_20[2];
typedef int8 type_22[16];
typedef uint32 type_23[2];
typedef uint16 type_24[3];
typedef uint16 type_25[3];
typedef uint8 type_26[22];
typedef uint32 type_27[2];
typedef uint8 type_28[22];
typedef _xVec3 type_29[2];
typedef uint16 type_31[6];
typedef _xQuat type_32[2];
typedef RwFrustumPlane type_33[6];
typedef RwV3d type_36[8];
typedef uint32 type_40[14];
typedef _xCollis type_41[18];
typedef _tagTRCPadInfo type_42[4];
typedef RpLight* type_44[2];
typedef RwFrame* type_45[2];
typedef uint8 type_47[8];
typedef RwTexCoords* type_48[8];
typedef uint8 type_50[8];
typedef uint8 type_54[8];
typedef int8 type_55[16];
typedef iModelTag type_56[4];
typedef uint8 type_57[8];
typedef uint8 type_58[8];
typedef int8 type_61[128];
typedef <unknown fundamental type (0xa510)> type_62[4];
typedef RwTexCoords* type_64[8];
typedef uint32 type_65[14];
typedef uint8 type_66[3];
typedef _xVec4 type_67[8];
typedef int8 type_69[128];
typedef int8 type_70[128][6];
typedef float32 type_71[4];
typedef float32 type_73[2];
typedef RxCluster type_74[1];
typedef int8 type_75[16];
typedef int8 type_76[256];
typedef float32 type_77[4];
typedef int8 type_78[16];
typedef uint32 type_80[14];
typedef float32 type_81[4];
typedef uint32 type_82[4];
typedef int8 type_83[32];
typedef float32 type_85[4];
typedef float32 type_86[4];
typedef _xVec3 type_87[4];
typedef float32 type_88[3];
typedef RwSky2DVertex type_89[4];
typedef float32 type_91[3];
typedef uint32 type_92[2];
typedef uint8 type_93[3];
typedef float32 type_94[15];
typedef zGlobalGameStats type_95[30];
typedef float32 type_96[15];
typedef uint8 type_97[3];
typedef zGlobalGameStats type_98[13];
typedef _zEnt* type_99[10];
typedef uint32 type_100[1];
typedef uint32 type_101[15];
typedef zGlobalGameStats type_102[4];
typedef int32 type_103[2];
typedef int32 type_104[2];
typedef uint32 type_105[14];
typedef float32 type_106[4];
typedef int8 type_107[32];
typedef xBase* type_108[43];

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RpSector
{
	int32 type;
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

struct p2EntHangableAsset
{
	uint32 flags;
	float32 pivotOffset;
	float32 leverArm;
	float32 gravity;
	float32 accel;
	float32 decay;
	float32 grabDelay;
	float32 stopDecel;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxReq
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct p2MarkerAsset
{
	_xVec3 pos;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct zShaggy1Globals
{
	_zEnt* GrabTry;
	_zEnt* Grab;
	float32 GrabRot;
	float32 GrabOffset;
	float32 GrabTimer;
	_xVec3 ReleaseTrans;
	_xVec3 HangTrans;
	_xVec3 LastDelta;
	uint32 ThrowEnded;
	float32 ExtraTransY;
	_xVec3 ThrowPos;
	_xVec3 ThrowVel;
	uint32 CatchMe;
	uint32 CatchYou;
	_zEnt* HangTarget;
	float32 ThrowTimer;
	_xVec3 HangStart;
	_xVec3 HangRelative;
	uint32 SetDown;
	uint32 GrabOn;
	uint32 ThrowState;
	float32 ThrowRot;
	float32 CatchHeight;
	float32 CatchVel;
	xBase* ThrowTgt;
	float32 ThrowTgtAngle;
	float32 ThrowTgtPeak;
	float32 ThrowTgtOffset;
	uint32 ThrowTgtAdjust;
	_xVec3 ThrowTgtVec;
	float32 ThrowTgtSpeed;
	float32 ThrowAccel;
	_zEnt* Hangable[10];
};

struct _tagxCam : xBase
{
	uint32 valid_flags;
	_tagCamType cam_type;
	uint32 flags;
	_xMat4x3 mat;
	_xQuat rot;
	float32 fov;
	float32 trans_time;
	_tagTransType trans_type;
	_xVec3 view_offset;
	_tagCamInfo u;
	xCamAsset* asset;
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

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	uint32* TimeChunkOffs;
	uint32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	uint32 Waiting;
	void* RawBuf;
	void* AlignBuf;
	float32 Time;
	float32 CamTime;
	uint32 PlayIndex;
	uint32 Ready;
	int32 DataLoading;
	uint32 GotData;
	uint32 ShutDownWait;
	float32 PlaybackSpeed;
	uint32 Opened;
	tag_xFile File;
	uint32 CurrSector;
	void* MemBuf;
	void* MemCurr;
	uint32 SndStarted;
	uint32 SndNumChannel;
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct p2EnvAsset : p2BaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	float32 padF1;
	float32 padF2;
	float32 padF3;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xCamAsset : p2BaseAsset
{
	_xVec3 pos;
	_xVec3 at;
	_xVec3 up;
	_xVec3 right;
	_xVec3 view_offset;
	int16 offset_start_frames;
	int16 offset_end_frames;
	float32 fov;
	float32 trans_time;
	_tagTransType trans_type;
	uint32 flags;
	float32 fade_up;
	float32 fade_down;
	union
	{
		_tagxCamFollowAsset cam_follow;
		_tagxCamShoulderAsset cam_shoulder;
		_tagp2CamStaticAsset cam_static;
		_tagxCamPathAsset cam_path;
		_tagp2CamStaticFollowAsset cam_staticFollow;
	};
	uint32 valid_flags;
	uint32 markerid[2];
	uint8 cam_type;
	uint8 pad[3];
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct zGlobalGameStats
{
	float32 gameTime;
	uint32 visited;
	float32 levelTime;
	float32 levelTime_sum;
	float32 areaTime;
	float32 areaTime_sum;
	float32 roomTime;
	float32 roomTime_sum;
	float32 timeRunning;
	float32 timeRunning_sum;
	float32 timeWalking;
	float32 timeWalking_sum;
	uint32 scares;
	uint32 scares_sum;
	uint32 deaths;
	uint32 deaths_sum;
	uint32 singleJumps;
	uint32 singleJumps_sum;
	uint32 doubleJumps;
	uint32 doubleJumps_sum;
	uint32 gumShot;
	uint32 gumShot_sum;
	uint32 gumHit;
	uint32 gumHit_sum;
	uint32 gumEmpty;
	uint32 gumEmpty_sum;
	uint32 soapShot;
	uint32 soapShot_sum;
	uint32 soapHit;
	uint32 soapHit_sum;
	uint32 soapEmpty;
	uint32 soapEmpty_sum;
	uint32 food;
	uint32 food_sum;
	uint32 snackBoxes;
	uint32 snackBoxes_sum;
	uint32 enemyKills;
	uint32 enemyKills_sum;
	uint32 enemyCount;
	uint32 enemyCount_sum;
	uint32 specials;
	uint32 specials_tot;
	uint32 tokens;
	uint32 tokens_tot;
	uint32 snacks;
	uint32 snacks_tot;
	uint32 chances;
	uint32 chances_tot;
	uint32 keys;
	uint32 keys_tot;
	uint32 clues;
	uint32 clues_tot;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _zEntHangable : _zEnt
{
	p2EntHangableAsset* hangInfo;
	_xVec3 pivot;
	_xVec3 endpos;
	_xVec3 vel;
	_xVec3 swingplane;
	float32 grabTimer;
	float32 spin;
	uint32 state;
	_zEnt* shaggy;
	int32 enabled;
	_zEnt* follow;
	int32 moving;
	float32 candle_timer;
	int32 candle_state;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

enum _tagCamType
{
	eCamType_Follow,
	eCamType_FollowWithOffset,
	eCamType_Static,
	eCamType_Path,
	eCamType_StaticFollow,
	eCamType_Shoulder,
	eCamType_Total
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	_xEnt* odriver;
	_xEnt* driver;
	_xEnt* driven;
	_xVec3 op;
	_xVec3 p;
	_xVec3 q;
	float32 yaw;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct iFogParams
{
	RwFogType type;
	float32 start;
	float32 stop;
	float32 density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	uint8* table;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct _zEnv : xBase
{
	p2EnvAsset* easset;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct xFFX
{
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xCutsceneInfo
{
	uint32 Magic;
	uint32 AssetID;
	uint32 NumData;
	uint32 NumTime;
	uint32 MaxModel;
	uint32 MaxBufEven;
	uint32 MaxBufOdd;
	uint32 HeaderSize;
	uint32 VisCount;
	uint32 VisSize;
	uint32 BreakCount;
	uint32 pad;
	int8 SoundLeft[16];
	int8 SoundRight[16];
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

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct zGlobals
{
	_tagxCamFrame camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	int32 profile;
	_zCutsceneMgr* cmgr;
	int8 profFunc[128][6];
	zScene* sceneCur;
	zScene* scenePreload;
	int32 sceneFirst;
	int8 sceneStart[32];
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	zGlobalGameStats stats;
	zGlobalGameStats areaStats[30];
	zGlobalGameStats levelStats[13];
	zGlobalGameStats worldStats[4];
	int32 option_vibration;
	float32 update_dt;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _tagxCamFrame
{
	RwCamera* lo_cam;
	_tagxCam orig_cam;
	_tagxCam hi_cam;
	_xVec4 frustplane[8];
	_tagxCam* t_cam;
	float32 t_time;
	float32 g_time;
	_xEnv* env;
	_xVec3* target_pos;
	_xMat4x3* target_frame;
	_xVec3 pre_align_dir;
	_tagxCam** cameras;
	uint32 total_cameras;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

enum _tagTransType
{
	eTransType_None,
	eTransType_Interp1,
	eTransType_Interp2,
	eTransType_Interp3,
	eTransType_Interp4,
	eTransType_Linear,
	eTransType_Interp1Rev,
	eTransType_Interp2Rev,
	eTransType_Interp3Rev,
	eTransType_Interp4Rev,
	eTransType_Total
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct zPlayerStatic
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SpeedSneak[4];
	float32 SpeedWalk[4];
	float32 SpeedRun[4];
	float32 SpeedAir[4];
	float32 SpeedHotsauce[4];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 Gravity;
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Double;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Toss;
	float32 HeadbuttSpeedMin;
	float32 HeadbuttSpeedMax;
	float32 HeadbuttAccel;
	float32 HeadbuttTimeMin;
	float32 HeadbuttTimeMax;
	float32 HeadbuttTurn;
	float32 FireDelay;
	float32 FireRepeat;
	float32 FirePress;
	float32 FireTargetYaw;
	float32 FireTargetPitch;
	float32 FireTargetDist;
	float32 FireTargetRadius;
	float32 FireTrack;
	float32 FireGumSpeed;
	float32 FireSoapSpeed;
	float32 FireGumTimer;
	float32 FireSoapTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	uint16 AmmoCapacityGum;
	uint16 AmmoCapacitySoap;
	uint16 AmmoSceneGum;
	uint16 AmmoSceneSoap;
};

struct xCutsceneData
{
	uint32 DataType;
	uint32 AssetID;
	uint32 ChunkSize;
	union
	{
		uint32 FileOffset;
		void* DataPtr;
	};
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _zPlatform
{
};

struct _iCollis
{
	int32 unknown;
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskInvalid,
	TRC_Total
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct _tagiPad
{
	int32 port;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagCamInfo
{
	union
	{
		_tagxCamFollow f;
		_tagxCamStatic s;
		_tagxCamShoulder sh;
		_tagxCamPath p;
		_tagxCamStaticFollow sf;
	};
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct zPlayerGlobals
{
	_zEnt ent;
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	int32 Sneak;
	int32 Teeter;
	int32 CanSlip;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	float32 LookAroundTimer;
	uint32 LookAroundRand;
	uint32 LastProjectile;
	float32 DecelRun;
	float32 DecelRunSpeed;
	float32 HotsauceTimer;
	float32 LeanLerp;
	uint32 HeadbuttHit;
	float32 ScareTimer;
	xBase* ScareSource;
	uint32 ScareShaggy;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	_xEnt* MountChimney;
	float32 MountChimOldY;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	float32 Face_ScareTimer;
	uint32 Face_ScareRandom;
	uint32 Face_Event;
	float32 Face_EventTimer;
	float32 Face_PantTimer;
	uint32 Face_AnimSpecific;
	uint32 IdleRand;
	float32 IdleMinorTimer;
	float32 IdleMajorTimer;
	float32 IdleSitTimer;
	int32 Transparent;
	_zEnt* FireTarget;
	_zEnt* DamageSource;
	uint32 ControlOn;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	_xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	_zEnt* Diggable;
	float32 DigTimer;
	zShaggy1Globals Shaggy1;
	_zEnt* Shaggy8Call;
	float32 Shaggy8CallTimer;
	_zEntHangable* HangFound;
	_zEntHangable* HangEnt;
	_zEntHangable* HangEntLast;
	_xVec3 HangPivot;
	_xVec3 HangVel;
	float32 HangLength;
	_xVec3 HangStartPos;
	float32 HangStartLerp;
	iModelTag HangPawTag[4];
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	_zPlatform* Jump_Springboard;
	int32 cheat_mode;
	uint32 Inv_Clue;
	uint32 Inv_Key;
	uint32 Inv_Chances;
	uint32 Inv_ScoobySnacks;
	uint32 Inv_Specials;
	uint32 Inv_Mtokens[1];
	int32 Inv_Ammo[2];
	int32 Inv_AmmoMax[2];
	iModelTag BubbleTag;
	_xEntDrive drv;
	xSurface* floor_surf;
	_xVec3 floor_norm;
	int32 slope;
	_xCollis earc_coll;
	_xSphere head_sph;
	iModelTag center_tag;
	iModelTag head_tag;
	uint32 TongueFlags[2];
	_xVec3 RootUp;
	_xVec3 RootUpTarget;
	zPlayerStatic s;
	zCheckPoint cp;
};

uint32 sPlayerMarkerStartID;
uint32 sPlayerMarkerStartCamID;
float32 sPlayerStartAngle;
int32 sPortalling;
float32 sGameOverTimer;
float32 sTimeElapsed;
long32 sTimeLast;
long32 sTimeCurrent;
RwSky2DVertex Vert[4];
uint16 Idx[6];
uint32 startPressed;
iColor_tag sFadeColor;
iColor_tag black;
iColor_tag clear;
long32 t0;
long32 t1;
float32 snd_radius;
uint32 gLastVsyncFlip;
RwCamera* sGameScreenTransCam;
RpWorld* World;
RpLight* DirectionalLight;
uint32 loadMeter;
uint32 loadCDMeter;
float32 sCheatTimer;
uint32 sCheatUnlockCredits[14];
uint32 sCheatUnlockAllMovies[14];
uint32 sCheatWarpGate[14];
uint32 sCheatAllPowerups[14];
uint32 sCheatPressed[14];
zGlobals globals;
_zEnv* gCurEnv;
int32 gGameState;
eGameMode gGameMode;
_tagTRCPadInfo gTrcPad[4];
uint32 gVsyncCount;
uint32 gFrameCount;
uint32 gScreenDump;

void zGameCheats(float32 dt);
int32 TestCheat(uint32* cheat_info);
void setupPlayer();
void zGameScreenTransitionEnd();
void zGameScreenTransition_UIRender(float32 x1, float32 y1, float32 x2, float32 y2, int32 tex);
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg, uint8* rgba);
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg);
void zGameScreenTransitionBegin();
void zGameUpdateMode();
void zGamePauseIfPossible();
int32 zGameIsPaused();
void zGameLoop();
void zGameSetup();
void zGameExit();
void zGameInit(uint32 theSceneID);

// zGameCheats__Ff
// Start address: 0x130350
void zGameCheats(float32 dt)
{
	// Line 1927, Address: 0x130350, Func Offset: 0
	// Line 1928, Address: 0x130364, Func Offset: 0x14
	// Line 1945, Address: 0x130378, Func Offset: 0x28
	// Line 1948, Address: 0x130394, Func Offset: 0x44
	// Line 1950, Address: 0x1303b0, Func Offset: 0x60
	// Line 1951, Address: 0x130438, Func Offset: 0xe8
	// Line 1950, Address: 0x13043c, Func Offset: 0xec
	// Line 1951, Address: 0x130440, Func Offset: 0xf0
	// Line 1954, Address: 0x13044c, Func Offset: 0xfc
	// Line 1958, Address: 0x130460, Func Offset: 0x110
	// Line 1961, Address: 0x130468, Func Offset: 0x118
	// Line 1968, Address: 0x13047c, Func Offset: 0x12c
	// Line 1969, Address: 0x130488, Func Offset: 0x138
	// Line 1970, Address: 0x130494, Func Offset: 0x144
	// Line 1971, Address: 0x1304a0, Func Offset: 0x150
	// Line 1972, Address: 0x1304ac, Func Offset: 0x15c
	// Line 1973, Address: 0x1304b8, Func Offset: 0x168
	// Line 1974, Address: 0x1304c4, Func Offset: 0x174
	// Line 1975, Address: 0x1304d0, Func Offset: 0x180
	// Line 1976, Address: 0x1304dc, Func Offset: 0x18c
	// Line 1977, Address: 0x1304e8, Func Offset: 0x198
	// Line 1978, Address: 0x1304f4, Func Offset: 0x1a4
	// Line 1979, Address: 0x130500, Func Offset: 0x1b0
	// Line 1980, Address: 0x13050c, Func Offset: 0x1bc
	// Line 1981, Address: 0x130518, Func Offset: 0x1c8
	// Line 1982, Address: 0x130524, Func Offset: 0x1d4
	// Line 1985, Address: 0x130530, Func Offset: 0x1e0
	// Line 1989, Address: 0x130544, Func Offset: 0x1f4
	// Line 1992, Address: 0x13054c, Func Offset: 0x1fc
	// Line 1996, Address: 0x130560, Func Offset: 0x210
	// Line 2000, Address: 0x130568, Func Offset: 0x218
	// Line 2001, Address: 0x130570, Func Offset: 0x220
	// Line 2004, Address: 0x130578, Func Offset: 0x228
	// Line 2005, Address: 0x13057c, Func Offset: 0x22c
	// Line 2004, Address: 0x130584, Func Offset: 0x234
	// Line 2005, Address: 0x130588, Func Offset: 0x238
	// Line 2008, Address: 0x130598, Func Offset: 0x248
	// Line 2009, Address: 0x1305a4, Func Offset: 0x254
	// Line 2012, Address: 0x1305b8, Func Offset: 0x268
	// Line 2016, Address: 0x1305c0, Func Offset: 0x270
	// Line 2017, Address: 0x1305c8, Func Offset: 0x278
	// Line 2054, Address: 0x1305dc, Func Offset: 0x28c
	// Func End, Address: 0x1305f4, Func Offset: 0x2a4
}

// TestCheat__FPUi
// Start address: 0x130600
int32 TestCheat(uint32* cheat_info)
{
	int32 i;
	// Line 1877, Address: 0x130600, Func Offset: 0
	// Line 1879, Address: 0x130610, Func Offset: 0x10
	// Line 1881, Address: 0x130614, Func Offset: 0x14
	// Line 1883, Address: 0x13061c, Func Offset: 0x1c
	// Line 1884, Address: 0x130628, Func Offset: 0x28
	// Line 1885, Address: 0x130634, Func Offset: 0x34
	// Line 1886, Address: 0x130638, Func Offset: 0x38
	// Line 1889, Address: 0x130650, Func Offset: 0x50
	// Line 1892, Address: 0x130690, Func Offset: 0x90
	// Line 1893, Address: 0x1306c0, Func Offset: 0xc0
	// Line 1895, Address: 0x1306c8, Func Offset: 0xc8
	// Line 1896, Address: 0x1306f8, Func Offset: 0xf8
	// Line 1898, Address: 0x130700, Func Offset: 0x100
	// Line 1899, Address: 0x130730, Func Offset: 0x130
	// Line 1902, Address: 0x130738, Func Offset: 0x138
	// Line 1907, Address: 0x13076c, Func Offset: 0x16c
	// Line 1908, Address: 0x130770, Func Offset: 0x170
	// Func End, Address: 0x13077c, Func Offset: 0x17c
}

// setupPlayer__Fv
// Start address: 0x130780
void setupPlayer()
{
	p2MarkerAsset* m;
	uint32 size;
	int32 playerCount;
	p2EntAsset* asset;
	// Line 1651, Address: 0x130780, Func Offset: 0
	// Line 1658, Address: 0x130788, Func Offset: 0x8
	// Line 1651, Address: 0x13078c, Func Offset: 0xc
	// Line 1658, Address: 0x130790, Func Offset: 0x10
	// Line 1663, Address: 0x13079c, Func Offset: 0x1c
	// Line 1666, Address: 0x1307b0, Func Offset: 0x30
	// Line 1667, Address: 0x1307b8, Func Offset: 0x38
	// Line 1668, Address: 0x1307c8, Func Offset: 0x48
	// Line 1669, Address: 0x1307f0, Func Offset: 0x70
	// Line 1671, Address: 0x1307f4, Func Offset: 0x74
	// Line 1672, Address: 0x1307f8, Func Offset: 0x78
	// Line 1676, Address: 0x1307fc, Func Offset: 0x7c
	// Line 1679, Address: 0x130810, Func Offset: 0x90
	// Line 1682, Address: 0x130820, Func Offset: 0xa0
	// Line 1683, Address: 0x130828, Func Offset: 0xa8
	// Line 1686, Address: 0x130830, Func Offset: 0xb0
	// Line 1689, Address: 0x130838, Func Offset: 0xb8
	// Line 1686, Address: 0x13083c, Func Offset: 0xbc
	// Line 1687, Address: 0x130850, Func Offset: 0xd0
	// Line 1689, Address: 0x130870, Func Offset: 0xf0
	// Line 1690, Address: 0x13087c, Func Offset: 0xfc
	// Line 1692, Address: 0x13088c, Func Offset: 0x10c
	// Line 1696, Address: 0x130890, Func Offset: 0x110
	// Line 1698, Address: 0x13089c, Func Offset: 0x11c
	// Func End, Address: 0x1308b0, Func Offset: 0x130
}

// zGameScreenTransitionEnd__Fv
// Start address: 0x1308b0
void zGameScreenTransitionEnd()
{
	RwFrame* frame;
	// Line 1615, Address: 0x1308b0, Func Offset: 0
	// Line 1618, Address: 0x1308bc, Func Offset: 0xc
	// Line 1620, Address: 0x1308c4, Func Offset: 0x14
	// Line 1622, Address: 0x1308d4, Func Offset: 0x24
	// Line 1623, Address: 0x1308d8, Func Offset: 0x28
	// Line 1625, Address: 0x1308e0, Func Offset: 0x30
	// Line 1627, Address: 0x1308e8, Func Offset: 0x38
	// Line 1628, Address: 0x1308f0, Func Offset: 0x40
	// Line 1630, Address: 0x1308f4, Func Offset: 0x44
	// Line 1632, Address: 0x130904, Func Offset: 0x54
	// Line 1634, Address: 0x130910, Func Offset: 0x60
	// Line 1635, Address: 0x130918, Func Offset: 0x68
	// Line 1636, Address: 0x130920, Func Offset: 0x70
	// Line 1639, Address: 0x130924, Func Offset: 0x74
	// Line 1640, Address: 0x13092c, Func Offset: 0x7c
	// Line 1643, Address: 0x130930, Func Offset: 0x80
	// Func End, Address: 0x130944, Func Offset: 0x94
}

// zGameScreenTransition_UIRender__Fffffi
// Start address: 0x130950
void zGameScreenTransition_UIRender(float32 x1, float32 y1, float32 x2, float32 y2, int32 tex)
{
	float32 cooz;
	float32 cz;
	float32 z;
	RwCamera* camera;
	uint8 b;
	uint8 g;
	uint8 r;
	RwRaster* raster;
	RwTexture* texture;
	// Line 1492, Address: 0x130950, Func Offset: 0
	// Line 1493, Address: 0x130988, Func Offset: 0x38
	// Line 1495, Address: 0x130990, Func Offset: 0x40
	// Line 1496, Address: 0x1309a8, Func Offset: 0x58
	// Line 1498, Address: 0x1309b0, Func Offset: 0x60
	// Line 1499, Address: 0x1309b4, Func Offset: 0x64
	// Line 1501, Address: 0x1309bc, Func Offset: 0x6c
	// Line 1504, Address: 0x1309c4, Func Offset: 0x74
	// Line 1507, Address: 0x1309cc, Func Offset: 0x7c
	// Line 1518, Address: 0x1309d8, Func Offset: 0x88
	// Line 1521, Address: 0x1309f8, Func Offset: 0xa8
	// Line 1548, Address: 0x1309fc, Func Offset: 0xac
	// Line 1550, Address: 0x130a04, Func Offset: 0xb4
	// Line 1549, Address: 0x130a0c, Func Offset: 0xbc
	// Line 1550, Address: 0x130a10, Func Offset: 0xc0
	// Line 1552, Address: 0x130a14, Func Offset: 0xc4
	// Line 1553, Address: 0x130a20, Func Offset: 0xd0
	// Line 1554, Address: 0x130a24, Func Offset: 0xd4
	// Line 1555, Address: 0x130a28, Func Offset: 0xd8
	// Line 1556, Address: 0x130a2c, Func Offset: 0xdc
	// Line 1557, Address: 0x130a30, Func Offset: 0xe0
	// Line 1558, Address: 0x130a34, Func Offset: 0xe4
	// Line 1560, Address: 0x130a38, Func Offset: 0xe8
	// Line 1561, Address: 0x130a3c, Func Offset: 0xec
	// Line 1562, Address: 0x130a40, Func Offset: 0xf0
	// Line 1563, Address: 0x130a44, Func Offset: 0xf4
	// Line 1564, Address: 0x130a48, Func Offset: 0xf8
	// Line 1565, Address: 0x130a4c, Func Offset: 0xfc
	// Line 1566, Address: 0x130a50, Func Offset: 0x100
	// Line 1568, Address: 0x130a54, Func Offset: 0x104
	// Line 1569, Address: 0x130a58, Func Offset: 0x108
	// Line 1570, Address: 0x130a5c, Func Offset: 0x10c
	// Line 1571, Address: 0x130a60, Func Offset: 0x110
	// Line 1572, Address: 0x130a64, Func Offset: 0x114
	// Line 1573, Address: 0x130a68, Func Offset: 0x118
	// Line 1574, Address: 0x130a6c, Func Offset: 0x11c
	// Line 1576, Address: 0x130a70, Func Offset: 0x120
	// Line 1577, Address: 0x130a74, Func Offset: 0x124
	// Line 1578, Address: 0x130a78, Func Offset: 0x128
	// Line 1579, Address: 0x130a7c, Func Offset: 0x12c
	// Line 1580, Address: 0x130a80, Func Offset: 0x130
	// Line 1581, Address: 0x130a84, Func Offset: 0x134
	// Line 1588, Address: 0x130a88, Func Offset: 0x138
	// Line 1590, Address: 0x130b20, Func Offset: 0x1d0
	// Line 1592, Address: 0x130bb8, Func Offset: 0x268
	// Line 1594, Address: 0x130c50, Func Offset: 0x300
	// Line 1596, Address: 0x130cec, Func Offset: 0x39c
	// Line 1597, Address: 0x130cf8, Func Offset: 0x3a8
	// Line 1598, Address: 0x130d04, Func Offset: 0x3b4
	// Line 1599, Address: 0x130d10, Func Offset: 0x3c0
	// Line 1600, Address: 0x130d1c, Func Offset: 0x3cc
	// Line 1601, Address: 0x130d28, Func Offset: 0x3d8
	// Line 1604, Address: 0x130d34, Func Offset: 0x3e4
	// Line 1608, Address: 0x130d50, Func Offset: 0x400
	// Func End, Address: 0x130d7c, Func Offset: 0x42c
}

// zGameScreenTransitionUpdate__FfPcPUc
// Start address: 0x130d80
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg, uint8* rgba)
{
	int8 str[256];
	int8 meter[256];
	RwRGBA back_col;
	// Line 1285, Address: 0x130d80, Func Offset: 0
	// Line 1292, Address: 0x130da0, Func Offset: 0x20
	// Line 1297, Address: 0x130db0, Func Offset: 0x30
	// Line 1299, Address: 0x130db8, Func Offset: 0x38
	// Line 1300, Address: 0x130dc0, Func Offset: 0x40
	// Line 1301, Address: 0x130dc8, Func Offset: 0x48
	// Line 1302, Address: 0x130dd0, Func Offset: 0x50
	// Line 1303, Address: 0x130dd8, Func Offset: 0x58
	// Line 1307, Address: 0x130de0, Func Offset: 0x60
	// Line 1308, Address: 0x130df0, Func Offset: 0x70
	// Line 1315, Address: 0x130df8, Func Offset: 0x78
	// Line 1320, Address: 0x130e08, Func Offset: 0x88
	// Line 1324, Address: 0x130e18, Func Offset: 0x98
	// Line 1328, Address: 0x130e20, Func Offset: 0xa0
	// Line 1329, Address: 0x130e40, Func Offset: 0xc0
	// Line 1330, Address: 0x130e48, Func Offset: 0xc8
	// Line 1333, Address: 0x130e50, Func Offset: 0xd0
	// Line 1334, Address: 0x130e80, Func Offset: 0x100
	// Line 1337, Address: 0x130ef4, Func Offset: 0x174
	// Line 1338, Address: 0x130f00, Func Offset: 0x180
	// Line 1340, Address: 0x130f08, Func Offset: 0x188
	// Line 1341, Address: 0x130f14, Func Offset: 0x194
	// Line 1343, Address: 0x130f1c, Func Offset: 0x19c
	// Line 1344, Address: 0x130f28, Func Offset: 0x1a8
	// Line 1346, Address: 0x130f30, Func Offset: 0x1b0
	// Line 1347, Address: 0x130f3c, Func Offset: 0x1bc
	// Line 1349, Address: 0x130f44, Func Offset: 0x1c4
	// Line 1357, Address: 0x130f48, Func Offset: 0x1c8
	// Line 1358, Address: 0x130f68, Func Offset: 0x1e8
	// Line 1373, Address: 0x130f94, Func Offset: 0x214
	// Line 1375, Address: 0x130fa8, Func Offset: 0x228
	// Line 1379, Address: 0x130fb8, Func Offset: 0x238
	// Line 1380, Address: 0x130fcc, Func Offset: 0x24c
	// Line 1381, Address: 0x131008, Func Offset: 0x288
	// Line 1385, Address: 0x131010, Func Offset: 0x290
	// Line 1386, Address: 0x131020, Func Offset: 0x2a0
	// Line 1388, Address: 0x13105c, Func Offset: 0x2dc
	// Line 1391, Address: 0x131074, Func Offset: 0x2f4
	// Line 1392, Address: 0x131090, Func Offset: 0x310
	// Line 1393, Address: 0x1310d0, Func Offset: 0x350
	// Line 1397, Address: 0x1310d8, Func Offset: 0x358
	// Line 1398, Address: 0x131104, Func Offset: 0x384
	// Line 1404, Address: 0x131148, Func Offset: 0x3c8
	// Line 1473, Address: 0x131150, Func Offset: 0x3d0
	// Line 1475, Address: 0x131158, Func Offset: 0x3d8
	// Line 1477, Address: 0x131160, Func Offset: 0x3e0
	// Line 1480, Address: 0x131168, Func Offset: 0x3e8
	// Line 1483, Address: 0x131174, Func Offset: 0x3f4
	// Line 1487, Address: 0x13117c, Func Offset: 0x3fc
	// Line 1489, Address: 0x13118c, Func Offset: 0x40c
	// Func End, Address: 0x1311a8, Func Offset: 0x428
}

// zGameScreenTransitionUpdate__FfPc
// Start address: 0x1311b0
void zGameScreenTransitionUpdate(float32 percentComplete, int8* msg)
{
	// Line 1270, Address: 0x1311b0, Func Offset: 0
	// Line 1277, Address: 0x1311c4, Func Offset: 0x14
	// Line 1280, Address: 0x1311d4, Func Offset: 0x24
	// Line 1282, Address: 0x1311e0, Func Offset: 0x30
	// Func End, Address: 0x1311f4, Func Offset: 0x44
}

// zGameScreenTransitionBegin__Fv
// Start address: 0x131200
void zGameScreenTransitionBegin()
{
	RwBBox box;
	RwRGBAReal col;
	RwFrame* frame;
	// Line 1214, Address: 0x131200, Func Offset: 0
	// Line 1219, Address: 0x13120c, Func Offset: 0xc
	// Line 1227, Address: 0x131218, Func Offset: 0x18
	// Line 1228, Address: 0x13122c, Func Offset: 0x2c
	// Line 1236, Address: 0x131238, Func Offset: 0x38
	// Line 1238, Address: 0x131248, Func Offset: 0x48
	// Line 1243, Address: 0x131254, Func Offset: 0x54
	// Line 1245, Address: 0x131264, Func Offset: 0x64
	// Line 1247, Address: 0x131270, Func Offset: 0x70
	// Line 1249, Address: 0x131278, Func Offset: 0x78
	// Line 1253, Address: 0x131284, Func Offset: 0x84
	// Line 1254, Address: 0x131290, Func Offset: 0x90
	// Line 1255, Address: 0x131294, Func Offset: 0x94
	// Line 1256, Address: 0x131298, Func Offset: 0x98
	// Line 1257, Address: 0x1312a4, Func Offset: 0xa4
	// Line 1258, Address: 0x1312a8, Func Offset: 0xa8
	// Line 1260, Address: 0x1312ac, Func Offset: 0xac
	// Line 1263, Address: 0x1312bc, Func Offset: 0xbc
	// Line 1265, Address: 0x1312c8, Func Offset: 0xc8
	// Func End, Address: 0x1312dc, Func Offset: 0xdc
}

// zGameUpdateMode__Fv
// Start address: 0x1312e0
void zGameUpdateMode()
{
	int32 qwerty;
	_tagxCam* cam;
	_tagxCam* cam;
	p2MarkerAsset* m;
	uint32 size;
	int32 vbl;
	uint32 nextSceneID;
	int8* id;
	zPortalAsset* passet;
	// Line 982, Address: 0x1312e0, Func Offset: 0
	// Line 983, Address: 0x1312f4, Func Offset: 0x14
	// Line 1008, Address: 0x131308, Func Offset: 0x28
	// Line 1011, Address: 0x131318, Func Offset: 0x38
	// Line 1016, Address: 0x131320, Func Offset: 0x40
	// Line 1019, Address: 0x13133c, Func Offset: 0x5c
	// Line 1021, Address: 0x131368, Func Offset: 0x88
	// Line 1024, Address: 0x131374, Func Offset: 0x94
	// Line 1025, Address: 0x1313ac, Func Offset: 0xcc
	// Line 1033, Address: 0x1313b4, Func Offset: 0xd4
	// Line 1055, Address: 0x1313bc, Func Offset: 0xdc
	// Line 1056, Address: 0x1313c4, Func Offset: 0xe4
	// Line 1060, Address: 0x1313cc, Func Offset: 0xec
	// Line 1066, Address: 0x1313d4, Func Offset: 0xf4
	// Line 1071, Address: 0x1313e8, Func Offset: 0x108
	// Line 1069, Address: 0x1313ec, Func Offset: 0x10c
	// Line 1071, Address: 0x1313fc, Func Offset: 0x11c
	// Line 1069, Address: 0x131400, Func Offset: 0x120
	// Line 1071, Address: 0x131414, Func Offset: 0x134
	// Line 1074, Address: 0x13141c, Func Offset: 0x13c
	// Line 1075, Address: 0x131424, Func Offset: 0x144
	// Line 1076, Address: 0x13142c, Func Offset: 0x14c
	// Line 1080, Address: 0x131434, Func Offset: 0x154
	// Line 1086, Address: 0x131478, Func Offset: 0x198
	// Line 1087, Address: 0x13148c, Func Offset: 0x1ac
	// Line 1088, Address: 0x131498, Func Offset: 0x1b8
	// Line 1089, Address: 0x1314a0, Func Offset: 0x1c0
	// Line 1094, Address: 0x1314b8, Func Offset: 0x1d8
	// Line 1095, Address: 0x131534, Func Offset: 0x254
	// Line 1098, Address: 0x1315c8, Func Offset: 0x2e8
	// Line 1099, Address: 0x1315d4, Func Offset: 0x2f4
	// Line 1101, Address: 0x1315dc, Func Offset: 0x2fc
	// Line 1105, Address: 0x1315e4, Func Offset: 0x304
	// Line 1108, Address: 0x1315f4, Func Offset: 0x314
	// Line 1109, Address: 0x1315fc, Func Offset: 0x31c
	// Line 1112, Address: 0x131604, Func Offset: 0x324
	// Line 1114, Address: 0x131620, Func Offset: 0x340
	// Line 1123, Address: 0x131624, Func Offset: 0x344
	// Line 1124, Address: 0x131634, Func Offset: 0x354
	// Line 1127, Address: 0x13163c, Func Offset: 0x35c
	// Line 1128, Address: 0x131644, Func Offset: 0x364
	// Line 1134, Address: 0x131650, Func Offset: 0x370
	// Line 1139, Address: 0x131670, Func Offset: 0x390
	// Line 1141, Address: 0x13168c, Func Offset: 0x3ac
	// Line 1145, Address: 0x131694, Func Offset: 0x3b4
	// Line 1147, Address: 0x13169c, Func Offset: 0x3bc
	// Line 1148, Address: 0x1316a4, Func Offset: 0x3c4
	// Line 1149, Address: 0x1316a8, Func Offset: 0x3c8
	// Line 1154, Address: 0x1316b4, Func Offset: 0x3d4
	// Line 1156, Address: 0x1316cc, Func Offset: 0x3ec
	// Line 1158, Address: 0x1316d4, Func Offset: 0x3f4
	// Line 1159, Address: 0x1316dc, Func Offset: 0x3fc
	// Line 1163, Address: 0x1316e4, Func Offset: 0x404
	// Line 1171, Address: 0x1316ec, Func Offset: 0x40c
	// Line 1172, Address: 0x1316f4, Func Offset: 0x414
	// Line 1173, Address: 0x1316fc, Func Offset: 0x41c
	// Line 1177, Address: 0x131704, Func Offset: 0x424
	// Line 1179, Address: 0x131724, Func Offset: 0x444
	// Line 1181, Address: 0x131728, Func Offset: 0x448
	// Line 1182, Address: 0x131744, Func Offset: 0x464
	// Line 1185, Address: 0x13174c, Func Offset: 0x46c
	// Line 1186, Address: 0x131754, Func Offset: 0x474
	// Line 1187, Address: 0x13176c, Func Offset: 0x48c
	// Line 1189, Address: 0x131788, Func Offset: 0x4a8
	// Line 1190, Address: 0x13178c, Func Offset: 0x4ac
	// Line 1194, Address: 0x131794, Func Offset: 0x4b4
	// Line 1195, Address: 0x13179c, Func Offset: 0x4bc
	// Line 1199, Address: 0x1317a4, Func Offset: 0x4c4
	// Line 1202, Address: 0x1317a8, Func Offset: 0x4c8
	// Func End, Address: 0x1317c0, Func Offset: 0x4e0
}

// zGamePauseIfPossible__Fv
// Start address: 0x1317c0
void zGamePauseIfPossible()
{
	// Line 952, Address: 0x1317c0, Func Offset: 0
	// Line 954, Address: 0x1317cc, Func Offset: 0xc
	// Line 958, Address: 0x1317e0, Func Offset: 0x20
	// Line 962, Address: 0x1317f0, Func Offset: 0x30
	// Line 963, Address: 0x131818, Func Offset: 0x58
	// Line 965, Address: 0x131820, Func Offset: 0x60
	// Line 968, Address: 0x131858, Func Offset: 0x98
	// Line 969, Address: 0x131890, Func Offset: 0xd0
	// Func End, Address: 0x1318a4, Func Offset: 0xe4
}

// zGameIsPaused__Fv
// Start address: 0x1318b0
int32 zGameIsPaused()
{
	// Line 860, Address: 0x1318b0, Func Offset: 0
	// Line 861, Address: 0x1318b8, Func Offset: 0x8
	// Line 862, Address: 0x1318c8, Func Offset: 0x18
	// Line 864, Address: 0x1318d0, Func Offset: 0x20
	// Line 865, Address: 0x1318d8, Func Offset: 0x28
	// Line 867, Address: 0x1318e0, Func Offset: 0x30
	// Line 869, Address: 0x1318f0, Func Offset: 0x40
	// Line 870, Address: 0x131904, Func Offset: 0x54
	// Line 873, Address: 0x13190c, Func Offset: 0x5c
	// Line 874, Address: 0x131910, Func Offset: 0x60
	// Func End, Address: 0x13191c, Func Offset: 0x6c
}

// zGameLoop__Fv
// Start address: 0x131920
void zGameLoop()
{
	uint32 vcount;
	long32 tprof1;
	long32 tprof0;
	int32 ostrich_delay;
	float32 paccum;
	float32 pcount;
	// Line 447, Address: 0x131920, Func Offset: 0
	// Line 451, Address: 0x131948, Func Offset: 0x28
	// Line 447, Address: 0x13194c, Func Offset: 0x2c
	// Line 451, Address: 0x131950, Func Offset: 0x30
	// Line 453, Address: 0x131958, Func Offset: 0x38
	// Line 460, Address: 0x131974, Func Offset: 0x54
	// Line 461, Address: 0x131988, Func Offset: 0x68
	// Line 515, Address: 0x1319e8, Func Offset: 0xc8
	// Line 516, Address: 0x1319f4, Func Offset: 0xd4
	// Line 534, Address: 0x131a00, Func Offset: 0xe0
	// Line 537, Address: 0x131a18, Func Offset: 0xf8
	// Line 538, Address: 0x131a20, Func Offset: 0x100
	// Line 539, Address: 0x131a28, Func Offset: 0x108
	// Line 542, Address: 0x131a48, Func Offset: 0x128
	// Line 543, Address: 0x131a4c, Func Offset: 0x12c
	// Line 550, Address: 0x131a50, Func Offset: 0x130
	// Line 552, Address: 0x131a58, Func Offset: 0x138
	// Line 553, Address: 0x131a60, Func Offset: 0x140
	// Line 558, Address: 0x131a6c, Func Offset: 0x14c
	// Line 628, Address: 0x131a78, Func Offset: 0x158
	// Line 632, Address: 0x131a80, Func Offset: 0x160
	// Line 636, Address: 0x131a88, Func Offset: 0x168
	// Line 642, Address: 0x131a90, Func Offset: 0x170
	// Line 644, Address: 0x131aa8, Func Offset: 0x188
	// Line 645, Address: 0x131abc, Func Offset: 0x19c
	// Line 647, Address: 0x131ac4, Func Offset: 0x1a4
	// Line 648, Address: 0x131ac8, Func Offset: 0x1a8
	// Line 649, Address: 0x131acc, Func Offset: 0x1ac
	// Line 651, Address: 0x131ad0, Func Offset: 0x1b0
	// Line 652, Address: 0x131ae8, Func Offset: 0x1c8
	// Line 654, Address: 0x131af0, Func Offset: 0x1d0
	// Line 655, Address: 0x131af4, Func Offset: 0x1d4
	// Line 658, Address: 0x131af8, Func Offset: 0x1d8
	// Line 659, Address: 0x131b0c, Func Offset: 0x1ec
	// Line 661, Address: 0x131b10, Func Offset: 0x1f0
	// Line 662, Address: 0x131b1c, Func Offset: 0x1fc
	// Line 663, Address: 0x131b20, Func Offset: 0x200
	// Line 664, Address: 0x131b40, Func Offset: 0x220
	// Line 665, Address: 0x131b60, Func Offset: 0x240
	// Line 666, Address: 0x131b80, Func Offset: 0x260
	// Line 667, Address: 0x131ba0, Func Offset: 0x280
	// Line 668, Address: 0x131bc0, Func Offset: 0x2a0
	// Line 669, Address: 0x131bdc, Func Offset: 0x2bc
	// Line 681, Address: 0x131be0, Func Offset: 0x2c0
	// Line 684, Address: 0x131be8, Func Offset: 0x2c8
	// Line 687, Address: 0x131bf0, Func Offset: 0x2d0
	// Line 699, Address: 0x131c50, Func Offset: 0x330
	// Line 702, Address: 0x131c5c, Func Offset: 0x33c
	// Line 713, Address: 0x131c64, Func Offset: 0x344
	// Line 714, Address: 0x131c6c, Func Offset: 0x34c
	// Line 716, Address: 0x131c80, Func Offset: 0x360
	// Line 721, Address: 0x131c9c, Func Offset: 0x37c
	// Line 722, Address: 0x131cac, Func Offset: 0x38c
	// Line 724, Address: 0x131cb4, Func Offset: 0x394
	// Line 733, Address: 0x131cc0, Func Offset: 0x3a0
	// Line 734, Address: 0x131cdc, Func Offset: 0x3bc
	// Line 735, Address: 0x131ce4, Func Offset: 0x3c4
	// Line 736, Address: 0x131cec, Func Offset: 0x3cc
	// Line 738, Address: 0x131cf8, Func Offset: 0x3d8
	// Line 743, Address: 0x131d04, Func Offset: 0x3e4
	// Line 746, Address: 0x131d10, Func Offset: 0x3f0
	// Line 749, Address: 0x131d18, Func Offset: 0x3f8
	// Line 790, Address: 0x131d20, Func Offset: 0x400
	// Line 795, Address: 0x131d28, Func Offset: 0x408
	// Line 797, Address: 0x131d30, Func Offset: 0x410
	// Line 798, Address: 0x131d38, Func Offset: 0x418
	// Line 799, Address: 0x131d48, Func Offset: 0x428
	// Line 798, Address: 0x131d54, Func Offset: 0x434
	// Line 799, Address: 0x131d5c, Func Offset: 0x43c
	// Line 801, Address: 0x131d68, Func Offset: 0x448
	// Line 802, Address: 0x131d78, Func Offset: 0x458
	// Line 824, Address: 0x131d80, Func Offset: 0x460
	// Line 825, Address: 0x131d90, Func Offset: 0x470
	// Line 830, Address: 0x131da4, Func Offset: 0x484
	// Line 831, Address: 0x131dc4, Func Offset: 0x4a4
	// Line 833, Address: 0x131dc8, Func Offset: 0x4a8
	// Line 835, Address: 0x131dd4, Func Offset: 0x4b4
	// Line 836, Address: 0x131ddc, Func Offset: 0x4bc
	// Line 838, Address: 0x131de4, Func Offset: 0x4c4
	// Line 840, Address: 0x131dec, Func Offset: 0x4cc
	// Line 842, Address: 0x131dfc, Func Offset: 0x4dc
	// Line 843, Address: 0x131e04, Func Offset: 0x4e4
	// Line 845, Address: 0x131e0c, Func Offset: 0x4ec
	// Line 848, Address: 0x131e18, Func Offset: 0x4f8
	// Line 851, Address: 0x131ec8, Func Offset: 0x5a8
	// Func End, Address: 0x131ef8, Func Offset: 0x5d8
}

// zGameSetup__Fv
// Start address: 0x131f00
void zGameSetup()
{
	RpWorld* world;
	// Line 374, Address: 0x131f00, Func Offset: 0
	// Line 376, Address: 0x131f0c, Func Offset: 0xc
	// Line 378, Address: 0x131f14, Func Offset: 0x14
	// Line 379, Address: 0x131f2c, Func Offset: 0x2c
	// Line 380, Address: 0x131f34, Func Offset: 0x34
	// Line 383, Address: 0x131f3c, Func Offset: 0x3c
	// Line 384, Address: 0x131f44, Func Offset: 0x44
	// Line 388, Address: 0x131f4c, Func Offset: 0x4c
	// Line 389, Address: 0x131f54, Func Offset: 0x54
	// Line 392, Address: 0x131f64, Func Offset: 0x64
	// Line 394, Address: 0x131f70, Func Offset: 0x70
	// Line 418, Address: 0x131f78, Func Offset: 0x78
	// Line 421, Address: 0x131f8c, Func Offset: 0x8c
	// Line 425, Address: 0x131fa0, Func Offset: 0xa0
	// Line 426, Address: 0x131fa8, Func Offset: 0xa8
	// Func End, Address: 0x131fbc, Func Offset: 0xbc
}

// zGameExit__Fv
// Start address: 0x131fc0
void zGameExit()
{
	// Line 336, Address: 0x131fc0, Func Offset: 0
	// Line 343, Address: 0x131fc8, Func Offset: 0x8
	// Line 346, Address: 0x131fd0, Func Offset: 0x10
	// Line 351, Address: 0x131fd8, Func Offset: 0x18
	// Line 352, Address: 0x131fe0, Func Offset: 0x20
	// Line 353, Address: 0x131fe8, Func Offset: 0x28
	// Line 356, Address: 0x131ff4, Func Offset: 0x34
	// Line 357, Address: 0x132004, Func Offset: 0x44
	// Line 359, Address: 0x13200c, Func Offset: 0x4c
	// Line 360, Address: 0x132014, Func Offset: 0x54
	// Func End, Address: 0x132024, Func Offset: 0x64
}

// zGameInit__FUi
// Start address: 0x132030
void zGameInit(uint32 theSceneID)
{
	// Line 296, Address: 0x132030, Func Offset: 0
	// Line 297, Address: 0x13203c, Func Offset: 0xc
	// Line 298, Address: 0x132050, Func Offset: 0x20
	// Line 299, Address: 0x132058, Func Offset: 0x28
	// Line 304, Address: 0x132060, Func Offset: 0x30
	// Line 307, Address: 0x132068, Func Offset: 0x38
	// Line 310, Address: 0x132080, Func Offset: 0x50
	// Line 313, Address: 0x132090, Func Offset: 0x60
	// Line 316, Address: 0x132098, Func Offset: 0x68
	// Line 318, Address: 0x1320a0, Func Offset: 0x70
	// Line 319, Address: 0x1320b0, Func Offset: 0x80
	// Line 320, Address: 0x1320b8, Func Offset: 0x88
	// Line 325, Address: 0x1320c0, Func Offset: 0x90
	// Func End, Address: 0x1320d0, Func Offset: 0xa0
}

