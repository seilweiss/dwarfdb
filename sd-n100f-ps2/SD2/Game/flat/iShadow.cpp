typedef struct RpMaterialList;
typedef struct _xEnt;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct xCutsceneTime;
typedef struct xAnimSingle;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct RpMorphTarget;
typedef struct RxPacket;
typedef struct _xScene;
typedef struct _xCylinder;
typedef struct zScene;
typedef struct xAnimTransitionList;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct _zPortal;
typedef struct zCutsceneMgrAsset;
typedef struct _tagxCamFollow;
typedef struct iShadowCache;
typedef struct RpGeometry;
typedef struct xAnimTable;
typedef enum RwTextureAddressMode;
typedef struct _xBBox;
typedef struct zPlayerStatic;
typedef struct RwResEntry;
typedef struct RxPipelineNode;
typedef struct _zPlatform;
typedef struct xBase;
typedef struct _zEntHangable;
typedef struct RwV3d;
typedef struct _xEntCollis;
typedef struct RwLLLink;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zCutsceneZbuffer;
typedef struct _xBox;
typedef struct _xEnv;
typedef struct RxPipelineNodeParam;
typedef struct RwMatrixTag;
typedef struct RxPipelineNodeTopSortData;
typedef struct p2EntHangableAsset;
typedef struct xAnimActiveEffect;
typedef struct xModelInstance;
typedef struct _xCollis;
typedef struct RpClump;
typedef struct _xEntDrive;
typedef struct _tagxCamPathAsset;
typedef enum RwCameraProjection;
typedef struct xMemPool;
typedef struct RpPolygon;
typedef struct RxNodeDefinition;
typedef enum _tagRumbleType;
typedef struct _xVec3;
typedef struct RwObjectHasFrame;
typedef struct RpLight;
typedef struct RxPipelineCluster;
typedef struct RpTriangle;
typedef struct xModelPool;
typedef struct rxHeapBlockHeader;
typedef struct RxPipeline;
typedef struct _xEntFrame;
typedef struct zPortalAsset;
typedef struct rxHeapFreeBlock;
typedef struct _zEnt;
typedef struct RwRGBAReal;
typedef struct _tagxCam;
typedef struct iEnv;
typedef struct zCutsceneZbufferHack;
typedef struct xCutsceneData;
typedef enum RwShadeMode;
typedef struct _tagxCamShoulder;
typedef struct RxClusterDefinition;
typedef struct xAnimTransition;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct _tagxCamFollowAsset;
typedef struct xAnimState;
typedef struct RpCollSector;
typedef struct xCamAsset;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct RwRaster;
typedef struct RpMeshHeader;
typedef struct RwCamera;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef struct _xMat4x3;
typedef enum RxClusterValid;
typedef enum _tagCamType;
typedef struct RpWorld;
typedef struct RwTexture;
typedef struct _zCutsceneMgr;
typedef struct xFFX;
typedef struct iFogParams;
typedef struct p2LinkAsset;
typedef struct RwRGBA;
typedef struct xCutscene;
typedef struct _xBound;
typedef struct RwPlane;
typedef struct RwTexDictionary;
typedef struct _tagxCamStatic;
typedef struct p2BaseAsset;
typedef struct _xQuat;
typedef struct RpWorldSector;
typedef struct RwLinkList;
typedef struct _xEntShadow;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct _tagxRumble;
typedef struct RwFrame;
typedef struct RwFrustumPlane;
typedef struct RxColorUnion;
typedef struct zShaggy1Globals;
typedef struct RwBBox;
typedef struct _tagxCamFrame;
typedef struct _xVec4;
typedef struct zAssetPickupTable;
typedef struct rxReq;
typedef struct _tagxCamShoulderAsset;
typedef enum RwFogType;
typedef struct RpVertexNormal;
typedef enum _tagTransType;
typedef struct tag_iFile;
typedef struct xCutsceneBreak;
typedef struct tag_xFile;
typedef struct _xRot;
typedef struct _tagxCamStaticFollow;
typedef struct xAnimPlay;
typedef enum RxClusterForcePresent;
typedef enum _tagPadState;
typedef struct sceCdlFILE;
typedef struct zGlobalGameStats;
typedef struct p2EntAsset;
typedef struct RxObjSpace3DVertex;
typedef struct _tagiPad;
typedef struct zCheckPoint;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct xAnimFile;
typedef struct RxRenderStateVector;
typedef enum RwBlendFunction;
typedef struct RxIoSpec;
typedef enum RpWorldRenderOrder;
typedef struct RxNodeMethods;
typedef struct _tagxCamPath;
typedef struct _tagp2CamStaticAsset;
typedef struct _tagPadAnalog;
typedef struct zGlobals;
typedef struct RwSurfaceProperties;
typedef struct _tagxPad;
typedef struct zJumpParam;
typedef struct _xRay3;
typedef struct xCutsceneInfo;
typedef struct RxHeap;
typedef struct _iCollis;
typedef struct RxCluster;
typedef struct iModelTag;
typedef struct _xSphere;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct RwSphere;
typedef struct xQCData;

typedef RpAtomic*(*type_3)(RpAtomic*);
typedef void(*type_4)(_xEnt*, _xScene*, float32);
typedef void(*type_8)(_xEnt*);
typedef void(*type_13)(_xEnt*);
typedef int32(*type_14)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_16)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef xBase*(*type_18)(uint32);
typedef int32(*type_22)(RxNodeDefinition*);
typedef void(*type_23)(_xEnt*, _xVec3*);
typedef int8*(*type_24)(xBase*);
typedef uint32(*type_27)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_28)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int8*(*type_29)(uint32);
typedef void(*type_33)(RxNodeDefinition*);
typedef RpWorldSector*(*type_34)(RpWorldSector*);
typedef uint32(*type_35)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwObjectHasFrame*(*type_38)(RwObjectHasFrame*);
typedef int32(*type_43)(RxPipelineNode*);
typedef void(*type_49)(RxPipelineNode*);
typedef uint32(*type_55)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_56)(_xEnt*, _xVec3*);
typedef int32(*type_57)(RxPipelineNode*, RxPipeline*);
typedef void(*type_58)(xMemPool*, void*);
typedef int32(*type_59)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_66)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef RwCamera*(*type_72)(RwCamera*);
typedef void(*type_77)(RwResEntry*);
typedef void(*type_79)(int32);
typedef RpClump*(*type_91)(RpClump*, void*);

typedef int8 type_0[128];
typedef int8 type_1[128][6];
typedef RwFrustumPlane type_2[6];
typedef uint8 type_5[22];
typedef RwV3d type_6[8];
typedef _xVec3 type_7[2];
typedef uint8 type_9[22];
typedef int8 type_10[32];
typedef _xQuat type_11[2];
typedef _xVec3 type_12[4];
typedef float32 type_15[4];
typedef int8 type_17[16];
typedef float32 type_19[4];
typedef float32 type_20[4];
typedef int8 type_21[16];
typedef float32 type_25[4];
typedef uint8 type_26[3];
typedef float32 type_30[4];
typedef uint8 type_31[3];
typedef uint16 type_32[3];
typedef float32 type_36[4];
typedef zGlobalGameStats type_37[30];
typedef uint16 type_39[3];
typedef float32 type_40[3];
typedef zGlobalGameStats type_41[13];
typedef _zEnt* type_42[10];
typedef uint32 type_44[1];
typedef int8 type_45[16];
typedef float32 type_46[3];
typedef zGlobalGameStats type_47[4];
typedef int32 type_48[2];
typedef int32 type_50[2];
typedef float32 type_51[15];
typedef zCutsceneZbuffer type_52[4];
typedef float32 type_53[15];
typedef uint32 type_54[15];
typedef uint32 type_60[2];
typedef uint32 type_61[43];
typedef uint32 type_62[2];
typedef RxCluster type_63[1];
typedef xBase* type_64[43];
typedef uint32 type_65[2];
typedef _xCollis type_68[18];
typedef uint32 type_69[4];
typedef RpLight* type_70[2];
typedef uint32 type_71[2];
typedef uint8 type_73[8];
typedef RwTexCoords* type_74[8];
typedef RwFrame* type_75[2];
typedef uint8 type_76[8];
typedef float32 type_78[2];
typedef uint8 type_80[8];
typedef uint8 type_81[8];
typedef RwTexCoords* type_82[8];
typedef int8 type_83[128];
typedef _xVec3 type_84[4];
typedef _xVec4 type_85[8];
typedef int8 type_86[16];
typedef RxObjSpace3DVertex type_87[384];
typedef uint8 type_88[8];
typedef int8 type_89[32];
typedef int8 type_90[32];
typedef float32 type_92[4];
typedef iModelTag type_93[4];
typedef float32 type_94[4];
typedef uint32 type_95[2];
typedef uint8 type_96[2];
typedef uint8 type_97[3];
typedef uint8 type_98[3];
typedef float32 type_99[4];

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct _zPlatform
{
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

enum RwShadeMode
{
	rwSHADEMODENASHADEMODE,
	rwSHADEMODEFLAT,
	rwSHADEMODEGOURAUD,
	rwSHADEMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct xFFX
{
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct RwLinkList
{
	RwLLLink link;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct rxReq
{
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
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

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct _tagiPad
{
	int32 port;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RxRenderStateVector
{
	uint32 Flags;
	RwShadeMode ShadeMode;
	RwBlendFunction SrcBlend;
	RwBlendFunction DestBlend;
	RwRaster* TextureRaster;
	RwTextureAddressMode AddressModeU;
	RwTextureAddressMode AddressModeV;
	RwTextureFilterMode FilterMode;
	RwRGBA BorderColor;
	RwFogType FogType;
	RwRGBA FogColor;
	uint8* FogTable;
};

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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

struct _iCollis
{
	int32 unknown;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

RwRaster* sShadowRaster;
RxRenderStateVector rsv;
_xRay3 sShadowRay;
RxObjSpace3DVertex sShadowVert[384];
uint32 sShadowVertCount;
zGlobals globals;

void iShadowRender();
void iShadowAdd(iShadowCache* cache, uint8 alpha);
void iShadowCollide(iShadowCache* cache, _xEnt* ent, float32 radius, float32 ecc);
void iShadowInit();

// iShadowRender__Fv
// Start address: 0x1a1660
void iShadowRender()
{
	// Line 208, Address: 0x1a1660, Func Offset: 0
	// Line 209, Address: 0x1a1670, Func Offset: 0x10
	// Line 213, Address: 0x1a1680, Func Offset: 0x20
	// Line 216, Address: 0x1a1690, Func Offset: 0x30
	// Line 217, Address: 0x1a169c, Func Offset: 0x3c
	// Line 218, Address: 0x1a16a8, Func Offset: 0x48
	// Line 219, Address: 0x1a16b4, Func Offset: 0x54
	// Line 220, Address: 0x1a16c0, Func Offset: 0x60
	// Line 221, Address: 0x1a16cc, Func Offset: 0x6c
	// Line 224, Address: 0x1a16d8, Func Offset: 0x78
	// Line 227, Address: 0x1a16f0, Func Offset: 0x90
	// Line 228, Address: 0x1a16f8, Func Offset: 0x98
	// Line 231, Address: 0x1a1700, Func Offset: 0xa0
	// Line 232, Address: 0x1a170c, Func Offset: 0xac
	// Line 233, Address: 0x1a1718, Func Offset: 0xb8
	// Line 234, Address: 0x1a1724, Func Offset: 0xc4
	// Line 236, Address: 0x1a173c, Func Offset: 0xdc
	// Line 239, Address: 0x1a1754, Func Offset: 0xf4
	// Line 240, Address: 0x1a1758, Func Offset: 0xf8
	// Func End, Address: 0x1a176c, Func Offset: 0x10c
}

// iShadowAdd__FP12iShadowCacheUc
// Start address: 0x1a1770
void iShadowAdd(iShadowCache* cache, uint8 alpha)
{
	// Line 169, Address: 0x1a1770, Func Offset: 0
	// Line 170, Address: 0x1a17a8, Func Offset: 0x38
	// Line 174, Address: 0x1a17b0, Func Offset: 0x40
	// Line 190, Address: 0x1a18d0, Func Offset: 0x160
	// Line 204, Address: 0x1a18fc, Func Offset: 0x18c
	// Line 205, Address: 0x1a1908, Func Offset: 0x198
	// Func End, Address: 0x1a1910, Func Offset: 0x1a0
}

// iShadowCollide__FP12iShadowCacheP5_xEntff
// Start address: 0x1a1910
void iShadowCollide(iShadowCache* cache, _xEnt* ent, float32 radius, float32 ecc)
{
	float32 centerz;
	float32 centery;
	float32 centerx;
	float32 dydz;
	float32 dydx;
	float32 mag;
	_xVec3 tmppos[4];
	_xCollis crec;
	float32 height;
	// Line 80, Address: 0x1a1910, Func Offset: 0
	// Line 86, Address: 0x1a1938, Func Offset: 0x28
	// Line 90, Address: 0x1a194c, Func Offset: 0x3c
	// Line 91, Address: 0x1a1968, Func Offset: 0x58
	// Line 94, Address: 0x1a19b4, Func Offset: 0xa4
	// Line 96, Address: 0x1a19bc, Func Offset: 0xac
	// Line 106, Address: 0x1a1a50, Func Offset: 0x140
	// Line 107, Address: 0x1a1a58, Func Offset: 0x148
	// Line 109, Address: 0x1a1a64, Func Offset: 0x154
	// Line 107, Address: 0x1a1a68, Func Offset: 0x158
	// Line 108, Address: 0x1a1a9c, Func Offset: 0x18c
	// Line 109, Address: 0x1a1abc, Func Offset: 0x1ac
	// Line 110, Address: 0x1a1acc, Func Offset: 0x1bc
	// Line 111, Address: 0x1a1adc, Func Offset: 0x1cc
	// Line 112, Address: 0x1a1aec, Func Offset: 0x1dc
	// Line 114, Address: 0x1a1af4, Func Offset: 0x1e4
	// Line 115, Address: 0x1a1af8, Func Offset: 0x1e8
	// Line 119, Address: 0x1a1b00, Func Offset: 0x1f0
	// Line 131, Address: 0x1a1b04, Func Offset: 0x1f4
	// Line 119, Address: 0x1a1b0c, Func Offset: 0x1fc
	// Line 131, Address: 0x1a1b48, Func Offset: 0x238
	// Line 132, Address: 0x1a1b58, Func Offset: 0x248
	// Line 139, Address: 0x1a1b5c, Func Offset: 0x24c
	// Line 132, Address: 0x1a1b68, Func Offset: 0x258
	// Line 139, Address: 0x1a1b94, Func Offset: 0x284
	// Line 140, Address: 0x1a1ba8, Func Offset: 0x298
	// Line 142, Address: 0x1a1bac, Func Offset: 0x29c
	// Line 140, Address: 0x1a1bb0, Func Offset: 0x2a0
	// Line 141, Address: 0x1a1bb8, Func Offset: 0x2a8
	// Line 142, Address: 0x1a1bc4, Func Offset: 0x2b4
	// Line 147, Address: 0x1a1bd0, Func Offset: 0x2c0
	// Line 148, Address: 0x1a1bf4, Func Offset: 0x2e4
	// Line 149, Address: 0x1a1c14, Func Offset: 0x304
	// Line 148, Address: 0x1a1c18, Func Offset: 0x308
	// Line 150, Address: 0x1a1c1c, Func Offset: 0x30c
	// Line 149, Address: 0x1a1c24, Func Offset: 0x314
	// Line 150, Address: 0x1a1c2c, Func Offset: 0x31c
	// Line 151, Address: 0x1a1c30, Func Offset: 0x320
	// Line 153, Address: 0x1a1c3c, Func Offset: 0x32c
	// Line 156, Address: 0x1a1c44, Func Offset: 0x334
	// Line 155, Address: 0x1a1c4c, Func Offset: 0x33c
	// Line 154, Address: 0x1a1c50, Func Offset: 0x340
	// Line 153, Address: 0x1a1c54, Func Offset: 0x344
	// Line 155, Address: 0x1a1c5c, Func Offset: 0x34c
	// Line 157, Address: 0x1a1c64, Func Offset: 0x354
	// Line 156, Address: 0x1a1c68, Func Offset: 0x358
	// Line 157, Address: 0x1a1c6c, Func Offset: 0x35c
	// Line 154, Address: 0x1a1c70, Func Offset: 0x360
	// Line 155, Address: 0x1a1c78, Func Offset: 0x368
	// Line 157, Address: 0x1a1c80, Func Offset: 0x370
	// Line 155, Address: 0x1a1c84, Func Offset: 0x374
	// Line 157, Address: 0x1a1c88, Func Offset: 0x378
	// Line 160, Address: 0x1a1c8c, Func Offset: 0x37c
	// Line 156, Address: 0x1a1c90, Func Offset: 0x380
	// Line 160, Address: 0x1a1c94, Func Offset: 0x384
	// Line 161, Address: 0x1a1ca8, Func Offset: 0x398
	// Line 162, Address: 0x1a1cc8, Func Offset: 0x3b8
	// Line 163, Address: 0x1a1ce8, Func Offset: 0x3d8
	// Line 164, Address: 0x1a1d08, Func Offset: 0x3f8
	// Func End, Address: 0x1a1d30, Func Offset: 0x420
}

// iShadowInit__Fv
// Start address: 0x1a1d30
void iShadowInit()
{
	uint32 i;
	RwTexture* tex;
	// Line 33, Address: 0x1a1d30, Func Offset: 0
	// Line 35, Address: 0x1a1d34, Func Offset: 0x4
	// Line 33, Address: 0x1a1d38, Func Offset: 0x8
	// Line 35, Address: 0x1a1d3c, Func Offset: 0xc
	// Line 36, Address: 0x1a1d54, Func Offset: 0x24
	// Line 37, Address: 0x1a1d5c, Func Offset: 0x2c
	// Line 38, Address: 0x1a1d60, Func Offset: 0x30
	// Line 39, Address: 0x1a1d68, Func Offset: 0x38
	// Line 42, Address: 0x1a1d6c, Func Offset: 0x3c
	// Line 43, Address: 0x1a1d78, Func Offset: 0x48
	// Line 44, Address: 0x1a1d80, Func Offset: 0x50
	// Line 45, Address: 0x1a1d84, Func Offset: 0x54
	// Line 46, Address: 0x1a1d88, Func Offset: 0x58
	// Line 47, Address: 0x1a1d90, Func Offset: 0x60
	// Line 52, Address: 0x1a1d98, Func Offset: 0x68
	// Line 53, Address: 0x1a1db4, Func Offset: 0x84
	// Line 54, Address: 0x1a1db8, Func Offset: 0x88
	// Line 55, Address: 0x1a1dc0, Func Offset: 0x90
	// Line 56, Address: 0x1a1dc4, Func Offset: 0x94
	// Line 57, Address: 0x1a1dc8, Func Offset: 0x98
	// Line 58, Address: 0x1a1dcc, Func Offset: 0x9c
	// Line 59, Address: 0x1a1dd0, Func Offset: 0xa0
	// Line 61, Address: 0x1a1dd4, Func Offset: 0xa4
	// Line 62, Address: 0x1a1dd8, Func Offset: 0xa8
	// Line 63, Address: 0x1a1ddc, Func Offset: 0xac
	// Line 64, Address: 0x1a1de0, Func Offset: 0xb0
	// Line 65, Address: 0x1a1de4, Func Offset: 0xb4
	// Line 76, Address: 0x1a1de8, Func Offset: 0xb8
	// Line 66, Address: 0x1a1dec, Func Offset: 0xbc
	// Line 76, Address: 0x1a1df0, Func Offset: 0xc0
	// Line 77, Address: 0x1a1dfc, Func Offset: 0xcc
	// Func End, Address: 0x1a1e0c, Func Offset: 0xdc
}

