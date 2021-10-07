typedef struct _xEnt;
typedef struct _xVec3;
typedef struct RxOutputSpec;
typedef struct xBase;
typedef struct xAnimTable;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCam;
typedef struct zCutsceneZbufferHack;
typedef struct zSurfColorFX;
typedef struct _zEnt;
typedef struct RxPacket;
typedef struct _xScene;
typedef struct RwObjectHasFrame;
typedef struct tag_xFile;
typedef struct _xCollis;
typedef struct xAnimEffect;
typedef struct p2LinkAsset;
typedef struct sceCdlFILE;
typedef struct _xEntFrame;
typedef struct RpCollSector;
typedef enum RwTextureAddressMode;
typedef struct xCutsceneInfo;
typedef struct RxPipelineNode;
typedef struct _xEntCollis;
typedef struct RpMeshHeader;
typedef struct RpMaterial;
typedef struct xAnimActiveEffect;
typedef struct _xMat3x3;
typedef struct tag_iFile;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zSurfacePropUVFX;
typedef struct RxPipelineNodeParam;
typedef struct xAnimPlay;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwTexture;
typedef struct _tagxPad;
typedef struct _xEntDrive;
typedef struct p2EntAsset;
typedef struct zPlayerGlobals;
typedef struct RxPipeline;
typedef struct _tagCamInfo;
typedef struct xSurface;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RxNodeDefinition;
typedef enum _tagRumbleType;
typedef struct _zCutsceneMgr;
typedef struct xModelInstance;
typedef struct RpAtomic;
typedef struct RxPipelineCluster;
typedef struct RwRaster;
typedef struct xAnimFile;
typedef struct zSurfUVFX;
typedef struct zCutsceneMgrAsset;
typedef struct RpTriangle;
typedef struct RwCamera;
typedef struct RpWorldSector;
typedef struct xAnimTransitionList;
typedef struct xCutscene;
typedef struct RwRGBA;
typedef struct zSurfaceProps;
typedef struct _tagxCamFollow;
typedef struct rxHeapBlockHeader;
typedef struct RpInterpolator;
typedef struct xModCollRec;
typedef struct RwTexCoords;
typedef struct RwLLLink;
typedef struct _xMat4x3;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct xAnimTransition;
typedef struct RpPolygon;
typedef struct zSurfAsset;
typedef struct RwV3d;
typedef struct _zEntHangable;
typedef struct RxClusterDefinition;
typedef struct xFFX;
typedef struct xQCData;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct zGroupAsset;
typedef struct RwTexDictionary;
typedef struct RxPipelineRequiresCluster;
typedef struct _zGroup;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct xMemPool;
typedef struct RwV2d;
typedef struct RpMorphTarget;
typedef struct _tagxCamPathAsset;
typedef struct p2EntHangableAsset;
typedef struct _xQuat;
typedef struct zSurfMatFX;
typedef struct xAnimState;
typedef struct zShaggy1Globals;
typedef struct _xBBox;
typedef struct xSerial;
typedef struct RwFrustumPlane;
typedef struct _xEntShadow;
typedef struct _xEnv;
typedef struct iFogParams;
typedef enum RwTextureFilterMode;
typedef struct RwBBox;
typedef struct RwObject;
typedef struct _xVec4;
typedef enum RxClusterValid;
typedef struct zCheckPoint;
typedef enum RpWorldRenderOrder;
typedef struct xCutsceneTime;
typedef struct xCutsceneData;
typedef struct RpClump;
typedef struct _tagxCamShoulder;
typedef struct iEnv;
typedef struct _xRot;
typedef struct zGlobalGameStats;
typedef struct RwPlane;
typedef struct RpWorld;
typedef struct RwLinkList;
typedef struct _tagxCamFollowAsset;
typedef struct _tagxRumble;
typedef struct xCamAsset;
typedef struct p2BaseAsset;
typedef struct RpLight;
typedef struct RwFrame;
typedef struct zJumpParam;
typedef struct rxReq;
typedef enum _tagCamType;
typedef struct iModelTag;
typedef struct zAssetPickupTable;
typedef enum RwFogType;
typedef struct xModelPool;
typedef struct zGlobals;
typedef struct iShadowCache;
typedef enum RxClusterForcePresent;
typedef struct _xBound;
typedef enum _tagPadState;
typedef struct _tagxCamStatic;
typedef struct RpGeometry;
typedef struct zSurfTextureAnim;
typedef struct zPortalAsset;
typedef struct RpSector;
typedef struct RpMaterialList;
typedef struct _xRay3;
typedef struct _tagiPad;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct zScene;
typedef struct xCutsceneBreak;
typedef struct _tagxCamFrame;
typedef struct RxIoSpec;
typedef struct _xBox;
typedef struct zPlayerStatic;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct _xSphere;
typedef struct RwMatrixTag;
typedef struct _zPortal;
typedef struct RxNodeMethods;
typedef struct _tagPadAnalog;
typedef struct _tagxCamStaticFollow;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RwSurfaceProperties;
typedef struct _xCylinder;
typedef struct _zPlatform;
typedef struct zCutsceneZbuffer;
typedef struct RxHeap;
typedef struct zSurfacePropTexAnim;
typedef struct RxCluster;
typedef enum RwCameraProjection;
typedef struct RwSphere;
typedef struct _iCollis;
typedef struct _tagxCamPath;
typedef struct _tagp2CamStaticAsset;

typedef _xEnt*(*type_0)(_xEnt*, _xScene*, void*);
typedef void(*type_2)(_xEnt*, _xVec3*);
typedef void(*type_3)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_6)(_xEnt*);
typedef void(*type_8)();
typedef uint32(*type_11)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_12)(void*, void*);
typedef void(*type_13)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_15)(RwObjectHasFrame*);
typedef void(*type_16)(int32);
typedef int32(*type_24)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_28)(_xEnt*);
typedef int32(*type_29)(void*, void*);
typedef int32(*type_31)(RxNodeDefinition*);
typedef void(*type_33)(_xEnt*, _xVec3*);
typedef void(*type_35)(RxNodeDefinition*);
typedef void(*type_39)(_xEnt*, _xVec3*);
typedef int32(*type_40)(RxPipelineNode*);
typedef void(*type_41)(_xEnt*, _xScene*, float32, void*);
typedef RwCamera*(*type_42)(RwCamera*);
typedef void(*type_45)(RxPipelineNode*);
typedef void(*type_46)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef RwCamera*(*type_48)(RwCamera*);
typedef int32(*type_54)(RxPipelineNode*, RxPipeline*);
typedef void(*type_55)(xMemPool*, void*);
typedef void(*type_60)();
typedef xBase*(*type_63)(uint32);
typedef void(*type_66)(_xEnt*, _xScene*, float32);
typedef int8*(*type_67)(xBase*);
typedef uint32(*type_68)(RxPipelineNode*, uint32, uint32, void*);
typedef int8*(*type_69)(uint32);
typedef int32(*type_71)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_76)(_xEnt*);
typedef RpClump*(*type_78)(RpClump*, void*);
typedef _xEnt*(*type_79)(_xEnt*, _xScene*, void*);
typedef void(*type_82)(RwResEntry*);
typedef RpWorldSector*(*type_84)(RpWorldSector*);
typedef _xEnt*(*type_89)(_xEnt*, _xScene*, void*);
typedef uint32(*type_91)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_100)(RpAtomic*);
typedef uint32(*type_107)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_112)(_xEnt*, _xScene*, float32);
typedef void(*type_113)(_xEnt*);

typedef zGlobalGameStats type_1[30];
typedef zGlobalGameStats type_4[13];
typedef float32 type_5[2];
typedef _zEnt* type_7[10];
typedef zGlobalGameStats type_9[4];
typedef uint32 type_10[1];
typedef zCutsceneZbuffer type_14[4];
typedef uint8 type_17[22];
typedef int32 type_18[2];
typedef uint8 type_19[22];
typedef uint32 type_20[2];
typedef int8 type_21[16];
typedef int32 type_22[2];
typedef uint8 type_23[8];
typedef uint8 type_25[3];
typedef int8 type_26[128];
typedef uint32 type_27[43];
typedef uint32 type_30[2];
typedef xBase* type_32[43];
typedef uint32 type_34[2];
typedef uint32 type_36[2];
typedef RwTexCoords* type_37[8];
typedef float32 type_38[4];
typedef _xCollis type_43[18];
typedef uint32 type_44[2];
typedef int8 type_47[16];
typedef RwTexCoords* type_49[8];
typedef float32 type_50[4];
typedef int8 type_51[16];
typedef uint8 type_52[8];
typedef float32 type_53[4];
typedef zSurfacePropTexAnim type_56[2];
typedef uint8 type_57[8];
typedef int8 type_58[40];
typedef uint8 type_59[2];
typedef uint8 type_61[8];
typedef zSurfacePropUVFX type_62[2];
typedef RxCluster type_64[1];
typedef uint8 type_65[8];
typedef uint32 type_70[4];
typedef int8 type_72[80];
typedef float32 type_73[15];
typedef float32 type_74[15];
typedef uint8 type_75[3];
typedef uint32 type_77[15];
typedef _xVec3 type_80[2];
typedef xModCollRec type_81[101];
typedef int8 type_83[32];
typedef RpLight* type_85[2];
typedef _xQuat type_86[2];
typedef int8 type_87[32];
typedef RwFrame* type_88[2];
typedef zSurfTextureAnim type_90[2];
typedef float32 type_92[4];
typedef uint8 type_93[3];
typedef iModelTag type_94[4];
typedef zSurfUVFX type_95[2];
typedef _xVec3 type_96[4];
typedef uint8 type_97[3];
typedef int8 type_98[80];
typedef int8 type_99[16];
typedef int8 type_101[6];
typedef int8 type_102[6][6];
typedef int8 type_103[128];
typedef int8 type_104[128][6];
typedef uint8 type_105[3];
typedef _xVec4 type_106[8];
typedef float32 type_108[4];
typedef RwFrustumPlane type_109[6];
typedef float32 type_110[4];
typedef int8 type_111[32];
typedef float32 type_114[4];
typedef RwV3d type_115[8];
typedef uint16 type_116[3];
typedef float32 type_117[4];
typedef float32 type_118[4];
typedef uint16 type_119[3];
typedef float32 type_120[3];
typedef float32 type_121[3];

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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct zSurfColorFX
{
	uint16 flags;
	uint16 mode;
	float32 speed;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	_xVec3 trans;
	_xVec3 trans_spd;
	_xVec3 scale;
	_xVec3 scale_spd;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct zSurfUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	_xVec3 trans;
	_xVec3 trans_spd;
	_xVec3 scale;
	_xVec3 scale_spd;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct zSurfaceProps
{
	zSurfAsset* asset;
	uint32 texanim_flags;
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct xModCollRec
{
	_xEnt* owner;
	uint32 nusing;
	long32 ctime;
	long32 ltime;
	float32 frac;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct zSurfAsset : p2BaseAsset
{
	uint8 game_damage_type;
	uint8 game_sticky;
	uint8 game_damage_flags;
	uint8 surf_type;
	uint8 phys_pad;
	uint8 sld_start;
	uint8 sld_stop;
	uint8 phys_flags;
	float32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	uint32 texture_anim_flags;
	zSurfTextureAnim texture_anim[2];
	uint32 uvfx_flags;
	zSurfUVFX uvfx[2];
	uint8 on;
	uint8 surf_pad[3];
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xFFX
{
	uint32 flags;
	void(*doEffect)(_xEnt*, _xScene*, float32, void*);
	void* fdata;
	xFFX* next;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zGroupAsset : p2BaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _zGroup : xBase
{
	zGroupAsset* asset;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RwLinkList
{
	RwLLLink link;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct rxReq
{
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct _tagiPad
{
	int32 port;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct st_SERIAL_CLIENTINFO
{
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct _zPlatform
{
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
	xBase* group_ptr;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _iCollis
{
	int32 unknown;
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

int8* g_xEnt_FMT;
float32 nsn_angle;
float32 sEntityTimePassed;
_xBox all_ents_box;
int32 all_ents_box_init;
_xEnt** dbg_xents;
uint16 dbg_num;
int16 dbg_idx;
int32 dbg_mode;
int32 dbg_holding_inc;
int32 dbg_holding_dec;
float32 dbg_tmr;
float32 dbg_ltm;
xModCollRec* mcrecs;
int32 num_mcrecs;
long32 mctime;
xModCollRec smcrecs[101];
int32 mcmode;
int8 scoll_name[6][6];
zGlobals globals;
_tagxPad* gDebugPad;
_xScene* g_xSceneCur;
int32(*CmpModCollLtime)(void*, void*);
int32(*CmpModCollCtime)(void*, void*);
uint32 gActiveHeap;
void(*xModCollCB)();
void(*xEntDebugCB)();
float32 ShadowThreshold;
_xEnt*(*xEntCollCheckOneTrigNoDepen)(_xEnt*, _xScene*, void*);
_xVec3 g_NY3;
_xEnt*(*xEntCollCheckOneEntNoDepen)(_xEnt*, _xScene*, void*);
_xVec3 g_O3;
void(*xEntUpdateTimer)(_xEnt*);
void(*xEntRender)(_xEnt*);
void(*xEntUpdate)(_xEnt*, _xScene*, float32);
void(*xEntDefaultTranslate)(_xEnt*, _xVec3*);
void(*xEntDefaultBoundUpdate)(_xEnt*, _xVec3*);

uint32 xEntIsVisible(_xEnt* ent);
void xModCollCB();
int32 CmpModCollLtime(void* a, void* b);
int32 CmpModCollCtime(void* a, void* b);
void xModCollAddSample(_xEnt* xent, long32 elapsed);
void xModCollAdd(_xEnt* xent);
void xModCollInit();
void xEntDebugIPad();
void xEntDebugWrite(_xEnt* xent);
int8* xEntCollTypeStrAll(int8* str, uint8 type);
void xEntDebugCB();
_xBox* xEntGetAllEntsBox();
void xEntSetNostepNormAngle(float32 angle);
void xEntSetMaterialMul(_xEnt* ent, float32 r, float32 g, float32 b);
void xEntRender(_xEnt* ent);
void xEntCollideWalls(_xEnt* p, _xScene* sc, float32 dt);
void xEntCollideCeiling(_xEnt* p, _xScene* sc, float32 dt);
void xEntCollideFloor(_xEnt* p, _xScene* sc, float32 dt);
_xEnt* xEntCollCheckOneTrigNoDepen(_xEnt* ent, void* data);
_xEnt* xEntCollCheckOneEntNoDepen(_xEnt* ent, void* data);
void xEntEndCollCheckTrigs(_xEnt* ent);
void xEntBeginCollCheckTrigs(_xEnt* ent);
void xEntCollCheckNPCs(_xEnt* p, _xScene* sc, _xEnt*(*hitIt)(_xEnt*, _xScene*, void*));
void xEntCollCheckDyns(_xEnt* p, _xScene* sc, _xEnt*(*hitIt)(_xEnt*, _xScene*, void*));
void xEntCollCheckStats(_xEnt* p, _xScene* sc, _xEnt*(*hitIt)(_xEnt*, _xScene*, void*));
void xEntEndCollide(_xEnt* ent, _xScene* sc, float32 dt);
void xEntBeginCollide(_xEnt* ent);
void xEntCollide(_xEnt* ent, _xScene* sc, float32 dt);
void xEntApplyPhysics(_xEnt* ent, _xScene* sc, float32 dt);
void xEntMove(_xEnt* ent, _xScene* sc, float32 dt);
void xEntMotionToMatrix(_xEnt* ent, _xEntFrame* frame);
void xEntDefaultTranslate(_xEnt* ent, _xVec3* dpos);
void xEntDefaultBoundUpdate(_xEnt* ent, _xVec3* pos);
void xEntEndUpdate(_xEnt* ent);
void xEntBeginUpdate(_xEnt* ent, float32 dt);
void xEntUpdate(_xEnt* ent, _xScene* sc, float32 dt);
xModelInstance* xEntLoadModel(_xEnt* ent, RpAtomic* imodel);
void xEntReset(_xEnt* ent);
void xEntLoad(_xEnt* ent, xSerial* s);
void xEntSave(_xEnt* ent, xSerial* s);
void xEntSetup(_xEnt* ent);
void xEntInitForType(_xEnt* ent);
void xEntInit(_xEnt* ent, p2EntAsset* asset);
void xEntSceneExit();
void xEntSceneInit();
void xEntSetTimePassed(float32 sec);
void xEntUpdateTimer(_xEnt* ent);

// xEntIsVisible__FP5_xEnt
// Start address: 0x128790
uint32 xEntIsVisible(_xEnt* ent)
{
	// Line 2942, Address: 0x128790, Func Offset: 0
	// Line 2944, Address: 0x1287a0, Func Offset: 0x10
	// Line 2948, Address: 0x1287a8, Func Offset: 0x18
	// Line 2950, Address: 0x1287c4, Func Offset: 0x34
	// Line 2952, Address: 0x1287d4, Func Offset: 0x44
	// Line 2956, Address: 0x1287dc, Func Offset: 0x4c
	// Line 2957, Address: 0x1287e0, Func Offset: 0x50
	// Func End, Address: 0x1287e8, Func Offset: 0x58
}

// xModCollCB__Fv
// Start address: 0x1287f0
void xModCollCB()
{
	float32 scale;
	int32 i;
	xModCollRec* mc;
	// Line 2873, Address: 0x1287f0, Func Offset: 0
	// Line 2876, Address: 0x128818, Func Offset: 0x28
	// Line 2878, Address: 0x128834, Func Offset: 0x44
	// Line 2879, Address: 0x128848, Func Offset: 0x58
	// Line 2880, Address: 0x128854, Func Offset: 0x64
	// Line 2879, Address: 0x128858, Func Offset: 0x68
	// Line 2880, Address: 0x12885c, Func Offset: 0x6c
	// Line 2882, Address: 0x128870, Func Offset: 0x80
	// Line 2883, Address: 0x128888, Func Offset: 0x98
	// Line 2885, Address: 0x12889c, Func Offset: 0xac
	// Line 2886, Address: 0x1288b0, Func Offset: 0xc0
	// Line 2887, Address: 0x1288c8, Func Offset: 0xd8
	// Line 2888, Address: 0x1288d4, Func Offset: 0xe4
	// Line 2890, Address: 0x1288e0, Func Offset: 0xf0
	// Line 2891, Address: 0x1288ec, Func Offset: 0xfc
	// Line 2899, Address: 0x128938, Func Offset: 0x148
	// Line 2900, Address: 0x128960, Func Offset: 0x170
	// Line 2904, Address: 0x128978, Func Offset: 0x188
	// Line 2905, Address: 0x128980, Func Offset: 0x190
	// Line 2906, Address: 0x128998, Func Offset: 0x1a8
	// Line 2907, Address: 0x1289a4, Func Offset: 0x1b4
	// Line 2909, Address: 0x1289b0, Func Offset: 0x1c0
	// Line 2910, Address: 0x1289bc, Func Offset: 0x1cc
	// Line 2918, Address: 0x128a08, Func Offset: 0x218
	// Line 2919, Address: 0x128a30, Func Offset: 0x240
	// Line 2920, Address: 0x128a48, Func Offset: 0x258
	// Line 2924, Address: 0x128a4c, Func Offset: 0x25c
	// Line 2925, Address: 0x128a58, Func Offset: 0x268
	// Line 2926, Address: 0x128a5c, Func Offset: 0x26c
	// Line 2927, Address: 0x128a78, Func Offset: 0x288
	// Func End, Address: 0x128aa4, Func Offset: 0x2b4
}

// CmpModCollLtime__FPCvPCv
// Start address: 0x128ab0
int32 CmpModCollLtime(void* a, void* b)
{
	xModCollRec* mcb;
	xModCollRec* mca;
	// Line 2857, Address: 0x128ab0, Func Offset: 0
	// Line 2858, Address: 0x128ac4, Func Offset: 0x14
	// Line 2859, Address: 0x128acc, Func Offset: 0x1c
	// Line 2860, Address: 0x128ad4, Func Offset: 0x24
	// Line 2862, Address: 0x128adc, Func Offset: 0x2c
	// Line 2863, Address: 0x128af0, Func Offset: 0x40
	// Line 2865, Address: 0x128af8, Func Offset: 0x48
	// Line 2870, Address: 0x128b08, Func Offset: 0x58
	// Func End, Address: 0x128b10, Func Offset: 0x60
}

// CmpModCollCtime__FPCvPCv
// Start address: 0x128b10
int32 CmpModCollCtime(void* a, void* b)
{
	// Line 2844, Address: 0x128b10, Func Offset: 0
	// Line 2845, Address: 0x128b24, Func Offset: 0x14
	// Line 2847, Address: 0x128b2c, Func Offset: 0x1c
	// Line 2851, Address: 0x128b3c, Func Offset: 0x2c
	// Func End, Address: 0x128b44, Func Offset: 0x34
}

// xModCollAddSample__FP5_xEntl
// Start address: 0x128b50
void xModCollAddSample(_xEnt* xent, long32 elapsed)
{
	xModCollRec* mc;
	xModCollRec* end;
	// Line 2823, Address: 0x128b50, Func Offset: 0
	// Line 2824, Address: 0x128b70, Func Offset: 0x20
	// Line 2826, Address: 0x128b78, Func Offset: 0x28
	// Line 2827, Address: 0x128b88, Func Offset: 0x38
	// Line 2828, Address: 0x128b94, Func Offset: 0x44
	// Line 2829, Address: 0x128bb0, Func Offset: 0x60
	// Line 2830, Address: 0x128bbc, Func Offset: 0x6c
	// Line 2832, Address: 0x128bc8, Func Offset: 0x78
	// Line 2833, Address: 0x128bd8, Func Offset: 0x88
	// Line 2834, Address: 0x128be4, Func Offset: 0x94
	// Func End, Address: 0x128bec, Func Offset: 0x9c
}

// xModCollAdd__FP5_xEnt
// Start address: 0x128bf0
void xModCollAdd(_xEnt* xent)
{
	xModCollRec* mc;
	xModCollRec* end;
	// Line 2790, Address: 0x128bf0, Func Offset: 0
	// Line 2797, Address: 0x128c04, Func Offset: 0x14
	// Line 2798, Address: 0x128c24, Func Offset: 0x34
	// Line 2800, Address: 0x128c30, Func Offset: 0x40
	// Line 2801, Address: 0x128c3c, Func Offset: 0x4c
	// Line 2803, Address: 0x128c50, Func Offset: 0x60
	// Line 2804, Address: 0x128c58, Func Offset: 0x68
	// Line 2806, Address: 0x128c60, Func Offset: 0x70
	// Line 2807, Address: 0x128c70, Func Offset: 0x80
	// Line 2812, Address: 0x128c74, Func Offset: 0x84
	// Line 2807, Address: 0x128c78, Func Offset: 0x88
	// Line 2808, Address: 0x128c80, Func Offset: 0x90
	// Line 2809, Address: 0x128c84, Func Offset: 0x94
	// Line 2810, Address: 0x128c88, Func Offset: 0x98
	// Line 2811, Address: 0x128c8c, Func Offset: 0x9c
	// Line 2812, Address: 0x128c90, Func Offset: 0xa0
	// Line 2814, Address: 0x128c94, Func Offset: 0xa4
	// Func End, Address: 0x128c9c, Func Offset: 0xac
}

// xModCollInit__Fv
// Start address: 0x128ca0
void xModCollInit()
{
	int32 i;
	// Line 2764, Address: 0x128ca0, Func Offset: 0
	// Line 2765, Address: 0x128ca4, Func Offset: 0x4
	// Line 2764, Address: 0x128ca8, Func Offset: 0x8
	// Line 2765, Address: 0x128cac, Func Offset: 0xc
	// Line 2767, Address: 0x128cb8, Func Offset: 0x18
	// Line 2770, Address: 0x128cc4, Func Offset: 0x24
	// Line 2767, Address: 0x128cd4, Func Offset: 0x34
	// Line 2768, Address: 0x128cd8, Func Offset: 0x38
	// Line 2769, Address: 0x128cdc, Func Offset: 0x3c
	// Line 2772, Address: 0x128ce0, Func Offset: 0x40
	// Line 2773, Address: 0x128ce8, Func Offset: 0x48
	// Line 2774, Address: 0x128d28, Func Offset: 0x88
	// Line 2773, Address: 0x128d2c, Func Offset: 0x8c
	// Line 2774, Address: 0x128d30, Func Offset: 0x90
	// Line 2773, Address: 0x128d34, Func Offset: 0x94
	// Line 2774, Address: 0x128d38, Func Offset: 0x98
	// Line 2775, Address: 0x128d48, Func Offset: 0xa8
	// Func End, Address: 0x128d54, Func Offset: 0xb4
}

// xEntDebugIPad__FP5_xEnt
// Start address: 0x128d60
void xEntDebugIPad()
{
	float32 now;
	// Line 2685, Address: 0x128d60, Func Offset: 0
	// Line 2690, Address: 0x128d68, Func Offset: 0x8
	// Line 2692, Address: 0x128d78, Func Offset: 0x18
	// Line 2693, Address: 0x128d94, Func Offset: 0x34
	// Line 2695, Address: 0x128d98, Func Offset: 0x38
	// Line 2696, Address: 0x128dac, Func Offset: 0x4c
	// Line 2697, Address: 0x128dbc, Func Offset: 0x5c
	// Line 2699, Address: 0x128dc4, Func Offset: 0x64
	// Line 2701, Address: 0x128dcc, Func Offset: 0x6c
	// Line 2702, Address: 0x128dd8, Func Offset: 0x78
	// Line 2704, Address: 0x128df8, Func Offset: 0x98
	// Line 2706, Address: 0x128e00, Func Offset: 0xa0
	// Line 2711, Address: 0x128e24, Func Offset: 0xc4
	// Line 2712, Address: 0x128e38, Func Offset: 0xd8
	// Line 2714, Address: 0x128e3c, Func Offset: 0xdc
	// Line 2715, Address: 0x128e40, Func Offset: 0xe0
	// Line 2716, Address: 0x128e50, Func Offset: 0xf0
	// Line 2720, Address: 0x128e64, Func Offset: 0x104
	// Line 2721, Address: 0x128e74, Func Offset: 0x114
	// Line 2722, Address: 0x128e84, Func Offset: 0x124
	// Line 2724, Address: 0x128e8c, Func Offset: 0x12c
	// Line 2726, Address: 0x128e94, Func Offset: 0x134
	// Line 2727, Address: 0x128ea0, Func Offset: 0x140
	// Line 2729, Address: 0x128ec0, Func Offset: 0x160
	// Line 2731, Address: 0x128ec8, Func Offset: 0x168
	// Line 2736, Address: 0x128eec, Func Offset: 0x18c
	// Line 2737, Address: 0x128f00, Func Offset: 0x1a0
	// Line 2739, Address: 0x128f04, Func Offset: 0x1a4
	// Line 2740, Address: 0x128f08, Func Offset: 0x1a8
	// Line 2741, Address: 0x128f18, Func Offset: 0x1b8
	// Line 2742, Address: 0x128f24, Func Offset: 0x1c4
	// Line 2749, Address: 0x128f30, Func Offset: 0x1d0
	// Line 2750, Address: 0x128f44, Func Offset: 0x1e4
	// Line 2751, Address: 0x128f54, Func Offset: 0x1f4
	// Line 2752, Address: 0x128f5c, Func Offset: 0x1fc
	// Line 2753, Address: 0x128f78, Func Offset: 0x218
	// Line 2755, Address: 0x128f88, Func Offset: 0x228
	// Line 2756, Address: 0x128f90, Func Offset: 0x230
	// Line 2757, Address: 0x128f94, Func Offset: 0x234
	// Line 2760, Address: 0x128fb4, Func Offset: 0x254
	// Func End, Address: 0x128fc0, Func Offset: 0x260
}

// xEntDebugWrite__FPC5_xEnt
// Start address: 0x128fc0
void xEntDebugWrite(_xEnt* xent)
{
	_xVec3 lhdng;
	int32 i;
	_xCollis* scoll;
	_xVec3 ang;
	_xMat3x3 mat_norm;
	_xVec3 scale;
	_xVec3* ovel;
	_xVec3* vel;
	int8 str[40];
	// Line 2575, Address: 0x128fc0, Func Offset: 0
	// Line 2578, Address: 0x129000, Func Offset: 0x40
	// Line 2579, Address: 0x129020, Func Offset: 0x60
	// Line 2580, Address: 0x129030, Func Offset: 0x70
	// Line 2581, Address: 0x129044, Func Offset: 0x84
	// Line 2582, Address: 0x129070, Func Offset: 0xb0
	// Line 2583, Address: 0x12909c, Func Offset: 0xdc
	// Line 2584, Address: 0x1290c8, Func Offset: 0x108
	// Line 2585, Address: 0x1290f4, Func Offset: 0x134
	// Line 2586, Address: 0x129120, Func Offset: 0x160
	// Line 2587, Address: 0x12914c, Func Offset: 0x18c
	// Line 2590, Address: 0x129174, Func Offset: 0x1b4
	// Line 2593, Address: 0x12919c, Func Offset: 0x1dc
	// Line 2594, Address: 0x1291a4, Func Offset: 0x1e4
	// Line 2595, Address: 0x1291dc, Func Offset: 0x21c
	// Line 2597, Address: 0x1291ec, Func Offset: 0x22c
	// Line 2598, Address: 0x1291f0, Func Offset: 0x230
	// Line 2597, Address: 0x1291f8, Func Offset: 0x238
	// Line 2598, Address: 0x1291fc, Func Offset: 0x23c
	// Line 2601, Address: 0x129244, Func Offset: 0x284
	// Line 2603, Address: 0x129254, Func Offset: 0x294
	// Line 2606, Address: 0x129258, Func Offset: 0x298
	// Line 2607, Address: 0x129278, Func Offset: 0x2b8
	// Line 2608, Address: 0x1292b0, Func Offset: 0x2f0
	// Line 2610, Address: 0x1292e8, Func Offset: 0x328
	// Line 2612, Address: 0x1292f0, Func Offset: 0x330
	// Line 2613, Address: 0x1292f8, Func Offset: 0x338
	// Line 2615, Address: 0x129330, Func Offset: 0x370
	// Line 2617, Address: 0x12933c, Func Offset: 0x37c
	// Line 2618, Address: 0x129348, Func Offset: 0x388
	// Line 2625, Address: 0x12941c, Func Offset: 0x45c
	// Line 2628, Address: 0x129434, Func Offset: 0x474
	// Line 2629, Address: 0x1294dc, Func Offset: 0x51c
	// Line 2630, Address: 0x129564, Func Offset: 0x5a4
	// Line 2631, Address: 0x129580, Func Offset: 0x5c0
	// Line 2632, Address: 0x12959c, Func Offset: 0x5dc
	// Line 2633, Address: 0x129618, Func Offset: 0x658
	// Line 2634, Address: 0x12979c, Func Offset: 0x7dc
	// Line 2635, Address: 0x1297a8, Func Offset: 0x7e8
	// Line 2636, Address: 0x1297b8, Func Offset: 0x7f8
	// Line 2637, Address: 0x1297d4, Func Offset: 0x814
	// Line 2638, Address: 0x1297f4, Func Offset: 0x834
	// Line 2639, Address: 0x129810, Func Offset: 0x850
	// Line 2640, Address: 0x12982c, Func Offset: 0x86c
	// Line 2641, Address: 0x129848, Func Offset: 0x888
	// Line 2642, Address: 0x129864, Func Offset: 0x8a4
	// Line 2644, Address: 0x12986c, Func Offset: 0x8ac
	// Line 2645, Address: 0x129870, Func Offset: 0x8b0
	// Line 2646, Address: 0x129878, Func Offset: 0x8b8
	// Line 2647, Address: 0x129888, Func Offset: 0x8c8
	// Line 2648, Address: 0x129898, Func Offset: 0x8d8
	// Line 2649, Address: 0x1298a0, Func Offset: 0x8e0
	// Line 2651, Address: 0x1298b0, Func Offset: 0x8f0
	// Line 2652, Address: 0x1298d4, Func Offset: 0x914
	// Line 2653, Address: 0x1298ec, Func Offset: 0x92c
	// Line 2654, Address: 0x129924, Func Offset: 0x964
	// Line 2656, Address: 0x129938, Func Offset: 0x978
	// Line 2657, Address: 0x129948, Func Offset: 0x988
	// Line 2658, Address: 0x129980, Func Offset: 0x9c0
	// Line 2659, Address: 0x12998c, Func Offset: 0x9cc
	// Line 2660, Address: 0x12999c, Func Offset: 0x9dc
	// Line 2661, Address: 0x1299bc, Func Offset: 0x9fc
	// Line 2662, Address: 0x1299c4, Func Offset: 0xa04
	// Line 2664, Address: 0x1299d0, Func Offset: 0xa10
	// Line 2665, Address: 0x1299d8, Func Offset: 0xa18
	// Line 2666, Address: 0x1299e4, Func Offset: 0xa24
	// Line 2667, Address: 0x1299e8, Func Offset: 0xa28
	// Line 2665, Address: 0x1299f0, Func Offset: 0xa30
	// Line 2667, Address: 0x1299f4, Func Offset: 0xa34
	// Line 2669, Address: 0x1299fc, Func Offset: 0xa3c
	// Line 2670, Address: 0x129a04, Func Offset: 0xa44
	// Line 2673, Address: 0x129a0c, Func Offset: 0xa4c
	// Func End, Address: 0x129a4c, Func Offset: 0xa8c
}

// xEntCollTypeStrAll__FPcUc
// Start address: 0x129a50
int8* xEntCollTypeStrAll(int8* str, uint8 type)
{
	// Line 2477, Address: 0x129a50, Func Offset: 0
	// Line 2480, Address: 0x129a60, Func Offset: 0x10
	// Line 2479, Address: 0x129a68, Func Offset: 0x18
	// Line 2480, Address: 0x129a6c, Func Offset: 0x1c
	// Line 2481, Address: 0x129a74, Func Offset: 0x24
	// Line 2483, Address: 0x129a80, Func Offset: 0x30
	// Line 2484, Address: 0x129a8c, Func Offset: 0x3c
	// Line 2486, Address: 0x129a9c, Func Offset: 0x4c
	// Line 2487, Address: 0x129aa8, Func Offset: 0x58
	// Line 2489, Address: 0x129ab8, Func Offset: 0x68
	// Line 2490, Address: 0x129ac4, Func Offset: 0x74
	// Line 2492, Address: 0x129ad4, Func Offset: 0x84
	// Line 2493, Address: 0x129ae0, Func Offset: 0x90
	// Line 2495, Address: 0x129af0, Func Offset: 0xa0
	// Line 2496, Address: 0x129afc, Func Offset: 0xac
	// Line 2498, Address: 0x129b0c, Func Offset: 0xbc
	// Line 2499, Address: 0x129b18, Func Offset: 0xc8
	// Line 2501, Address: 0x129b28, Func Offset: 0xd8
	// Line 2502, Address: 0x129b2c, Func Offset: 0xdc
	// Func End, Address: 0x129b40, Func Offset: 0xf0
}

// xEntDebugCB__Fv
// Start address: 0x129b40
void xEntDebugCB()
{
	_xEnt* xent;
	// Line 2430, Address: 0x129b40, Func Offset: 0
	// Line 2431, Address: 0x129b4c, Func Offset: 0xc
	// Line 2436, Address: 0x129b5c, Func Offset: 0x1c
	// Line 2442, Address: 0x129b68, Func Offset: 0x28
	// Line 2446, Address: 0x129b78, Func Offset: 0x38
	// Line 2452, Address: 0x129b80, Func Offset: 0x40
	// Line 2453, Address: 0x129b88, Func Offset: 0x48
	// Func End, Address: 0x129b98, Func Offset: 0x58
}

// xEntGetAllEntsBox__Fv
// Start address: 0x129ba0
_xBox* xEntGetAllEntsBox()
{
	// Line 2380, Address: 0x129ba0, Func Offset: 0
	// Line 2381, Address: 0x129ba4, Func Offset: 0x4
	// Func End, Address: 0x129bac, Func Offset: 0xc
}

// xEntSetNostepNormAngle__Ff
// Start address: 0x129bb0
void xEntSetNostepNormAngle(float32 angle)
{
	// Line 2371, Address: 0x129bb0, Func Offset: 0
	// Func End, Address: 0x129bb8, Func Offset: 0x8
}

// xEntSetMaterialMul__FP5_xEntfff
// Start address: 0x129bc0
void xEntSetMaterialMul(_xEnt* ent, float32 r, float32 g, float32 b)
{
	// Line 2363, Address: 0x129bc0, Func Offset: 0
	// Line 2364, Address: 0x129bc8, Func Offset: 0x8
	// Line 2365, Address: 0x129bd0, Func Offset: 0x10
	// Line 2366, Address: 0x129bd4, Func Offset: 0x14
	// Func End, Address: 0x129bdc, Func Offset: 0x1c
}

// xEntRender__FP5_xEnt
// Start address: 0x129be0
void xEntRender(_xEnt* ent)
{
	float32 rad;
	_xVec3* campos;
	_xVec3* pos;
	int32 reset_material_colors;
	RwTexture* texptr;
	RwTexture* texptr;
	uint32 texid;
	_zGroup* g;
	RwTexture* texptr;
	uint32 texid;
	_zGroup* g;
	zSurfaceProps* pp;
	RxPipeline* oldPipe;
	int32 setPipeline;
	int32 setMaterialTextureRestore;
	int32 we_altered_the_alpha_on_the_material;
	int32 fadeout_type;
	int8 init;
	// Line 1956, Address: 0x129be0, Func Offset: 0
	// Line 1960, Address: 0x129c00, Func Offset: 0x20
	// Line 1961, Address: 0x129c68, Func Offset: 0x88
	// Line 1965, Address: 0x129c70, Func Offset: 0x90
	// Line 1976, Address: 0x129c84, Func Offset: 0xa4
	// Line 1979, Address: 0x129c94, Func Offset: 0xb4
	// Line 1980, Address: 0x129cb0, Func Offset: 0xd0
	// Line 1981, Address: 0x129cb8, Func Offset: 0xd8
	// Line 1993, Address: 0x129cbc, Func Offset: 0xdc
	// Line 1995, Address: 0x129cdc, Func Offset: 0xfc
	// Line 1997, Address: 0x129ce8, Func Offset: 0x108
	// Line 2000, Address: 0x129cec, Func Offset: 0x10c
	// Line 1997, Address: 0x129cf4, Func Offset: 0x114
	// Line 2000, Address: 0x129cfc, Func Offset: 0x11c
	// Line 1997, Address: 0x129d00, Func Offset: 0x120
	// Line 2000, Address: 0x129d10, Func Offset: 0x130
	// Line 2002, Address: 0x129d28, Func Offset: 0x148
	// Line 2004, Address: 0x129d44, Func Offset: 0x164
	// Line 2007, Address: 0x129d4c, Func Offset: 0x16c
	// Line 2010, Address: 0x129d6c, Func Offset: 0x18c
	// Line 2011, Address: 0x129d74, Func Offset: 0x194
	// Line 2013, Address: 0x129d80, Func Offset: 0x1a0
	// Line 2016, Address: 0x129d90, Func Offset: 0x1b0
	// Line 2013, Address: 0x129d98, Func Offset: 0x1b8
	// Line 2016, Address: 0x129da0, Func Offset: 0x1c0
	// Line 2018, Address: 0x129db0, Func Offset: 0x1d0
	// Line 2019, Address: 0x129db8, Func Offset: 0x1d8
	// Line 2021, Address: 0x129dc4, Func Offset: 0x1e4
	// Line 2024, Address: 0x129dd4, Func Offset: 0x1f4
	// Line 2021, Address: 0x129ddc, Func Offset: 0x1fc
	// Line 2024, Address: 0x129de4, Func Offset: 0x204
	// Line 2026, Address: 0x129df4, Func Offset: 0x214
	// Line 2029, Address: 0x129dfc, Func Offset: 0x21c
	// Line 2032, Address: 0x129e00, Func Offset: 0x220
	// Line 2029, Address: 0x129e04, Func Offset: 0x224
	// Line 2032, Address: 0x129e0c, Func Offset: 0x22c
	// Line 2029, Address: 0x129e10, Func Offset: 0x230
	// Line 2032, Address: 0x129e20, Func Offset: 0x240
	// Line 2033, Address: 0x129e40, Func Offset: 0x260
	// Line 2047, Address: 0x129e44, Func Offset: 0x264
	// Line 2048, Address: 0x129e6c, Func Offset: 0x28c
	// Line 2051, Address: 0x129e80, Func Offset: 0x2a0
	// Line 2055, Address: 0x129e88, Func Offset: 0x2a8
	// Line 2060, Address: 0x129ea8, Func Offset: 0x2c8
	// Line 2061, Address: 0x129ebc, Func Offset: 0x2dc
	// Line 2062, Address: 0x129ecc, Func Offset: 0x2ec
	// Line 2065, Address: 0x129ed0, Func Offset: 0x2f0
	// Line 2066, Address: 0x129ef8, Func Offset: 0x318
	// Line 2067, Address: 0x129f0c, Func Offset: 0x32c
	// Line 2079, Address: 0x129f10, Func Offset: 0x330
	// Line 2073, Address: 0x129f14, Func Offset: 0x334
	// Line 2079, Address: 0x129f18, Func Offset: 0x338
	// Line 2086, Address: 0x129f2c, Func Offset: 0x34c
	// Line 2090, Address: 0x129f3c, Func Offset: 0x35c
	// Line 2091, Address: 0x129f44, Func Offset: 0x364
	// Line 2095, Address: 0x129f4c, Func Offset: 0x36c
	// Line 2098, Address: 0x129f58, Func Offset: 0x378
	// Line 2099, Address: 0x129f64, Func Offset: 0x384
	// Line 2102, Address: 0x129f6c, Func Offset: 0x38c
	// Line 2103, Address: 0x129f78, Func Offset: 0x398
	// Line 2111, Address: 0x129f7c, Func Offset: 0x39c
	// Line 2115, Address: 0x129f8c, Func Offset: 0x3ac
	// Line 2116, Address: 0x129f94, Func Offset: 0x3b4
	// Line 2120, Address: 0x129f9c, Func Offset: 0x3bc
	// Line 2123, Address: 0x129fa8, Func Offset: 0x3c8
	// Line 2124, Address: 0x129fb4, Func Offset: 0x3d4
	// Line 2127, Address: 0x129fbc, Func Offset: 0x3dc
	// Line 2131, Address: 0x129fc4, Func Offset: 0x3e4
	// Line 2133, Address: 0x129fcc, Func Offset: 0x3ec
	// Line 2137, Address: 0x129fdc, Func Offset: 0x3fc
	// Line 2138, Address: 0x129fec, Func Offset: 0x40c
	// Line 2141, Address: 0x129ff4, Func Offset: 0x414
	// Line 2145, Address: 0x129ffc, Func Offset: 0x41c
	// Line 2147, Address: 0x12a004, Func Offset: 0x424
	// Line 2150, Address: 0x12a010, Func Offset: 0x430
	// Line 2155, Address: 0x12a020, Func Offset: 0x440
	// Line 2156, Address: 0x12a02c, Func Offset: 0x44c
	// Line 2158, Address: 0x12a034, Func Offset: 0x454
	// Line 2159, Address: 0x12a03c, Func Offset: 0x45c
	// Line 2161, Address: 0x12a044, Func Offset: 0x464
	// Line 2162, Address: 0x12a05c, Func Offset: 0x47c
	// Line 2174, Address: 0x12a074, Func Offset: 0x494
	// Line 2177, Address: 0x12a07c, Func Offset: 0x49c
	// Line 2181, Address: 0x12a084, Func Offset: 0x4a4
	// Line 2188, Address: 0x12a08c, Func Offset: 0x4ac
	// Line 2191, Address: 0x12a0d4, Func Offset: 0x4f4
	// Line 2203, Address: 0x12a0e8, Func Offset: 0x508
	// Line 2204, Address: 0x12a0f4, Func Offset: 0x514
	// Line 2205, Address: 0x12a0fc, Func Offset: 0x51c
	// Line 2275, Address: 0x12a104, Func Offset: 0x524
	// Line 2277, Address: 0x12a10c, Func Offset: 0x52c
	// Line 2280, Address: 0x12a114, Func Offset: 0x534
	// Line 2282, Address: 0x12a11c, Func Offset: 0x53c
	// Line 2285, Address: 0x12a128, Func Offset: 0x548
	// Line 2287, Address: 0x12a130, Func Offset: 0x550
	// Line 2291, Address: 0x12a138, Func Offset: 0x558
	// Line 2295, Address: 0x12a140, Func Offset: 0x560
	// Line 2319, Address: 0x12a14c, Func Offset: 0x56c
	// Line 2324, Address: 0x12a168, Func Offset: 0x588
	// Line 2325, Address: 0x12a16c, Func Offset: 0x58c
	// Line 2326, Address: 0x12a174, Func Offset: 0x594
	// Line 2324, Address: 0x12a180, Func Offset: 0x5a0
	// Line 2330, Address: 0x12a184, Func Offset: 0x5a4
	// Line 2326, Address: 0x12a188, Func Offset: 0x5a8
	// Line 2330, Address: 0x12a1a0, Func Offset: 0x5c0
	// Line 2331, Address: 0x12a1cc, Func Offset: 0x5ec
	// Line 2332, Address: 0x12a1d8, Func Offset: 0x5f8
	// Line 2334, Address: 0x12a1e0, Func Offset: 0x600
	// Line 2336, Address: 0x12a1ec, Func Offset: 0x60c
	// Line 2339, Address: 0x12a210, Func Offset: 0x630
	// Line 2343, Address: 0x12a220, Func Offset: 0x640
	// Line 2345, Address: 0x12a234, Func Offset: 0x654
	// Line 2349, Address: 0x12a240, Func Offset: 0x660
	// Line 2352, Address: 0x12a260, Func Offset: 0x680
	// Line 2354, Address: 0x12a280, Func Offset: 0x6a0
	// Line 2357, Address: 0x12a28c, Func Offset: 0x6ac
	// Func End, Address: 0x12a2b0, Func Offset: 0x6d0
}

// xEntCollideWalls__FP5_xEntP7_xScenef
// Start address: 0x12a2b0
void xEntCollideWalls(_xEnt* p, _xScene* sc, float32 dt)
{
	uint8 idx;
	uint8 sidx;
	_xEnt* cent;
	_xCollis* coll;
	// Line 1798, Address: 0x12a2b0, Func Offset: 0
	// Line 1807, Address: 0x12a2dc, Func Offset: 0x2c
	// Line 1810, Address: 0x12a304, Func Offset: 0x54
	// Line 1811, Address: 0x12a318, Func Offset: 0x68
	// Line 1813, Address: 0x12a31c, Func Offset: 0x6c
	// Line 1814, Address: 0x12a330, Func Offset: 0x80
	// Line 1815, Address: 0x12a338, Func Offset: 0x88
	// Line 1814, Address: 0x12a33c, Func Offset: 0x8c
	// Line 1817, Address: 0x12a340, Func Offset: 0x90
	// Line 1844, Address: 0x12a39c, Func Offset: 0xec
	// Line 1846, Address: 0x12a3d0, Func Offset: 0x120
	// Line 1848, Address: 0x12a3d8, Func Offset: 0x128
	// Line 1850, Address: 0x12a40c, Func Offset: 0x15c
	// Line 1851, Address: 0x12a410, Func Offset: 0x160
	// Line 1848, Address: 0x12a414, Func Offset: 0x164
	// Line 1851, Address: 0x12a418, Func Offset: 0x168
	// Line 1853, Address: 0x12a430, Func Offset: 0x180
	// Line 1854, Address: 0x12a444, Func Offset: 0x194
	// Line 1856, Address: 0x12a448, Func Offset: 0x198
	// Line 1857, Address: 0x12a45c, Func Offset: 0x1ac
	// Line 1858, Address: 0x12a464, Func Offset: 0x1b4
	// Line 1857, Address: 0x12a468, Func Offset: 0x1b8
	// Line 1860, Address: 0x12a46c, Func Offset: 0x1bc
	// Line 1882, Address: 0x12a4c8, Func Offset: 0x218
	// Line 1884, Address: 0x12a4cc, Func Offset: 0x21c
	// Line 1887, Address: 0x12a500, Func Offset: 0x250
	// Line 1884, Address: 0x12a504, Func Offset: 0x254
	// Line 1887, Address: 0x12a508, Func Offset: 0x258
	// Line 1889, Address: 0x12a520, Func Offset: 0x270
	// Line 1890, Address: 0x12a534, Func Offset: 0x284
	// Line 1892, Address: 0x12a538, Func Offset: 0x288
	// Line 1893, Address: 0x12a54c, Func Offset: 0x29c
	// Line 1894, Address: 0x12a554, Func Offset: 0x2a4
	// Line 1893, Address: 0x12a558, Func Offset: 0x2a8
	// Line 1896, Address: 0x12a55c, Func Offset: 0x2ac
	// Line 1918, Address: 0x12a5b8, Func Offset: 0x308
	// Line 1920, Address: 0x12a5bc, Func Offset: 0x30c
	// Line 1923, Address: 0x12a5f0, Func Offset: 0x340
	// Line 1920, Address: 0x12a5f4, Func Offset: 0x344
	// Line 1923, Address: 0x12a5f8, Func Offset: 0x348
	// Line 1925, Address: 0x12a610, Func Offset: 0x360
	// Line 1926, Address: 0x12a624, Func Offset: 0x374
	// Line 1928, Address: 0x12a628, Func Offset: 0x378
	// Line 1929, Address: 0x12a63c, Func Offset: 0x38c
	// Line 1930, Address: 0x12a648, Func Offset: 0x398
	// Line 1945, Address: 0x12a66c, Func Offset: 0x3bc
	// Line 1947, Address: 0x12a670, Func Offset: 0x3c0
	// Line 1949, Address: 0x12a6a4, Func Offset: 0x3f4
	// Line 1950, Address: 0x12a6a8, Func Offset: 0x3f8
	// Line 1947, Address: 0x12a6ac, Func Offset: 0x3fc
	// Line 1950, Address: 0x12a6b0, Func Offset: 0x400
	// Line 1952, Address: 0x12a6c8, Func Offset: 0x418
	// Func End, Address: 0x12a6f4, Func Offset: 0x444
}

// xEntCollideCeiling__FP5_xEntP7_xScenef
// Start address: 0x12a700
void xEntCollideCeiling(_xEnt* p, _xScene* sc, float32 dt)
{
	float32 ceil_dist;
	_xEnt* fent;
	_xCollis* mf;
	_xCollis* ml;
	uint8 idx;
	_xCollis* coll;
	// Line 1716, Address: 0x12a700, Func Offset: 0
	// Line 1723, Address: 0x12a730, Func Offset: 0x30
	// Line 1730, Address: 0x12a738, Func Offset: 0x38
	// Line 1723, Address: 0x12a744, Func Offset: 0x44
	// Line 1730, Address: 0x12a748, Func Offset: 0x48
	// Line 1738, Address: 0x12a764, Func Offset: 0x64
	// Line 1741, Address: 0x12a770, Func Offset: 0x70
	// Line 1744, Address: 0x12a77c, Func Offset: 0x7c
	// Line 1756, Address: 0x12a7d4, Func Offset: 0xd4
	// Line 1758, Address: 0x12a7dc, Func Offset: 0xdc
	// Line 1761, Address: 0x12a7ec, Func Offset: 0xec
	// Line 1762, Address: 0x12a7f0, Func Offset: 0xf0
	// Line 1767, Address: 0x12a830, Func Offset: 0x130
	// Line 1770, Address: 0x12a834, Func Offset: 0x134
	// Line 1767, Address: 0x12a83c, Func Offset: 0x13c
	// Line 1770, Address: 0x12a840, Func Offset: 0x140
	// Line 1776, Address: 0x12a860, Func Offset: 0x160
	// Line 1777, Address: 0x12a868, Func Offset: 0x168
	// Line 1781, Address: 0x12a874, Func Offset: 0x174
	// Line 1777, Address: 0x12a878, Func Offset: 0x178
	// Line 1781, Address: 0x12a87c, Func Offset: 0x17c
	// Line 1786, Address: 0x12a884, Func Offset: 0x184
	// Line 1781, Address: 0x12a888, Func Offset: 0x188
	// Line 1782, Address: 0x12a904, Func Offset: 0x204
	// Line 1786, Address: 0x12a90c, Func Offset: 0x20c
	// Line 1787, Address: 0x12a914, Func Offset: 0x214
	// Line 1790, Address: 0x12a928, Func Offset: 0x228
	// Line 1794, Address: 0x12a930, Func Offset: 0x230
	// Func End, Address: 0x12a960, Func Offset: 0x260
}

// xEntCollideFloor__FP5_xEntP7_xScenef
// Start address: 0x12a960
void xEntCollideFloor(_xEnt* p, _xScene* sc, float32 dt)
{
	float32 flr_dist;
	_xEnt* fent;
	_xCollis* mf;
	int32 stepping;
	_xCollis* ml;
	uint8 idx;
	_xCollis* coll;
	// Line 1593, Address: 0x12a960, Func Offset: 0
	// Line 1600, Address: 0x12a99c, Func Offset: 0x3c
	// Line 1611, Address: 0x12a9a0, Func Offset: 0x40
	// Line 1609, Address: 0x12a9b0, Func Offset: 0x50
	// Line 1600, Address: 0x12a9b4, Func Offset: 0x54
	// Line 1611, Address: 0x12a9b8, Func Offset: 0x58
	// Line 1614, Address: 0x12a9d4, Func Offset: 0x74
	// Line 1618, Address: 0x12a9d8, Func Offset: 0x78
	// Line 1614, Address: 0x12a9dc, Func Offset: 0x7c
	// Line 1615, Address: 0x12a9e0, Func Offset: 0x80
	// Line 1614, Address: 0x12a9e4, Func Offset: 0x84
	// Line 1615, Address: 0x12a9e8, Func Offset: 0x88
	// Line 1618, Address: 0x12a9f0, Func Offset: 0x90
	// Line 1615, Address: 0x12a9f4, Func Offset: 0x94
	// Line 1618, Address: 0x12a9f8, Func Offset: 0x98
	// Line 1622, Address: 0x12aa08, Func Offset: 0xa8
	// Line 1623, Address: 0x12aa18, Func Offset: 0xb8
	// Line 1625, Address: 0x12aa1c, Func Offset: 0xbc
	// Line 1628, Address: 0x12aa2c, Func Offset: 0xcc
	// Line 1630, Address: 0x12aa30, Func Offset: 0xd0
	// Line 1631, Address: 0x12aa38, Func Offset: 0xd8
	// Line 1642, Address: 0x12aa90, Func Offset: 0x130
	// Line 1654, Address: 0x12aae8, Func Offset: 0x188
	// Line 1656, Address: 0x12aaf0, Func Offset: 0x190
	// Line 1660, Address: 0x12ab00, Func Offset: 0x1a0
	// Line 1665, Address: 0x12ab18, Func Offset: 0x1b8
	// Line 1669, Address: 0x12ab98, Func Offset: 0x238
	// Line 1672, Address: 0x12ab9c, Func Offset: 0x23c
	// Line 1674, Address: 0x12ac10, Func Offset: 0x2b0
	// Line 1673, Address: 0x12ac14, Func Offset: 0x2b4
	// Line 1677, Address: 0x12ac18, Func Offset: 0x2b8
	// Line 1674, Address: 0x12ac1c, Func Offset: 0x2bc
	// Line 1677, Address: 0x12ac20, Func Offset: 0x2c0
	// Line 1681, Address: 0x12ac40, Func Offset: 0x2e0
	// Line 1682, Address: 0x12ac48, Func Offset: 0x2e8
	// Line 1684, Address: 0x12ac54, Func Offset: 0x2f4
	// Line 1682, Address: 0x12ac58, Func Offset: 0x2f8
	// Line 1684, Address: 0x12ac5c, Func Offset: 0x2fc
	// Line 1688, Address: 0x12ac64, Func Offset: 0x304
	// Line 1684, Address: 0x12ac68, Func Offset: 0x308
	// Line 1688, Address: 0x12ace0, Func Offset: 0x380
	// Line 1689, Address: 0x12ace8, Func Offset: 0x388
	// Line 1693, Address: 0x12acf0, Func Offset: 0x390
	// Line 1694, Address: 0x12acf8, Func Offset: 0x398
	// Line 1697, Address: 0x12ad18, Func Offset: 0x3b8
	// Line 1698, Address: 0x12ad2c, Func Offset: 0x3cc
	// Line 1699, Address: 0x12ad3c, Func Offset: 0x3dc
	// Line 1701, Address: 0x12ad44, Func Offset: 0x3e4
	// Line 1707, Address: 0x12ad58, Func Offset: 0x3f8
	// Line 1711, Address: 0x12ad60, Func Offset: 0x400
	// Func End, Address: 0x12ad9c, Func Offset: 0x43c
}

// xEntCollCheckOneTrigNoDepen__FP5_xEntP7_xScenePv
// Start address: 0x12ada0
_xEnt* xEntCollCheckOneTrigNoDepen(_xEnt* ent, void* data)
{
	_xEnt* p;
	// Line 1585, Address: 0x12ada0, Func Offset: 0
	// Line 1587, Address: 0x12adf0, Func Offset: 0x50
	// Line 1585, Address: 0x12adf4, Func Offset: 0x54
	// Line 1588, Address: 0x12adf8, Func Offset: 0x58
	// Func End, Address: 0x12ae00, Func Offset: 0x60
}

// xEntCollCheckOneEntNoDepen__FP5_xEntP7_xScenePv
// Start address: 0x12ae00
_xEnt* xEntCollCheckOneEntNoDepen(_xEnt* ent, void* data)
{
	float32 hsqr;
	float32 dz;
	float32 dy;
	float32 dx;
	float32 rsum;
	uint8 idx;
	long32 t1;
	uint8 ncolls;
	long32 t0;
	uint32 modl_coll;
	_xCollis* coll;
	_xEnt* p;
	// Line 1454, Address: 0x12ae00, Func Offset: 0
	// Line 1455, Address: 0x12ae20, Func Offset: 0x20
	// Line 1459, Address: 0x12ae24, Func Offset: 0x24
	// Line 1462, Address: 0x12ae3c, Func Offset: 0x3c
	// Line 1464, Address: 0x12ae44, Func Offset: 0x44
	// Line 1466, Address: 0x12ae58, Func Offset: 0x58
	// Line 1469, Address: 0x12ae60, Func Offset: 0x60
	// Line 1471, Address: 0x12ae78, Func Offset: 0x78
	// Line 1473, Address: 0x12ae80, Func Offset: 0x80
	// Line 1471, Address: 0x12ae84, Func Offset: 0x84
	// Line 1473, Address: 0x12ae90, Func Offset: 0x90
	// Line 1476, Address: 0x12ae9c, Func Offset: 0x9c
	// Line 1477, Address: 0x12aea4, Func Offset: 0xa4
	// Line 1483, Address: 0x12aea8, Func Offset: 0xa8
	// Line 1487, Address: 0x12aeb0, Func Offset: 0xb0
	// Line 1488, Address: 0x12aeb8, Func Offset: 0xb8
	// Line 1491, Address: 0x12aebc, Func Offset: 0xbc
	// Line 1493, Address: 0x12aecc, Func Offset: 0xcc
	// Line 1494, Address: 0x12aedc, Func Offset: 0xdc
	// Line 1500, Address: 0x12aee4, Func Offset: 0xe4
	// Line 1502, Address: 0x12aeec, Func Offset: 0xec
	// Line 1500, Address: 0x12aef0, Func Offset: 0xf0
	// Line 1502, Address: 0x12aef4, Func Offset: 0xf4
	// Line 1510, Address: 0x12af20, Func Offset: 0x120
	// Line 1511, Address: 0x12af28, Func Offset: 0x128
	// Line 1514, Address: 0x12af38, Func Offset: 0x138
	// Line 1517, Address: 0x12af54, Func Offset: 0x154
	// Line 1519, Address: 0x12af58, Func Offset: 0x158
	// Line 1514, Address: 0x12b018, Func Offset: 0x218
	// Line 1519, Address: 0x12b020, Func Offset: 0x220
	// Line 1520, Address: 0x12b028, Func Offset: 0x228
	// Line 1519, Address: 0x12b02c, Func Offset: 0x22c
	// Line 1520, Address: 0x12b030, Func Offset: 0x230
	// Line 1519, Address: 0x12b034, Func Offset: 0x234
	// Line 1520, Address: 0x12b040, Func Offset: 0x240
	// Line 1524, Address: 0x12b050, Func Offset: 0x250
	// Line 1527, Address: 0x12b058, Func Offset: 0x258
	// Line 1528, Address: 0x12b060, Func Offset: 0x260
	// Line 1530, Address: 0x12b064, Func Offset: 0x264
	// Line 1542, Address: 0x12b074, Func Offset: 0x274
	// Line 1549, Address: 0x12b0c4, Func Offset: 0x2c4
	// Line 1553, Address: 0x12b0ec, Func Offset: 0x2ec
	// Line 1549, Address: 0x12b0f0, Func Offset: 0x2f0
	// Line 1553, Address: 0x12b0f4, Func Offset: 0x2f4
	// Line 1556, Address: 0x12b100, Func Offset: 0x300
	// Line 1558, Address: 0x12b118, Func Offset: 0x318
	// Line 1561, Address: 0x12b124, Func Offset: 0x324
	// Line 1563, Address: 0x12b12c, Func Offset: 0x32c
	// Line 1558, Address: 0x12b130, Func Offset: 0x330
	// Line 1559, Address: 0x12b134, Func Offset: 0x334
	// Line 1561, Address: 0x12b138, Func Offset: 0x338
	// Line 1562, Address: 0x12b14c, Func Offset: 0x34c
	// Line 1563, Address: 0x12b150, Func Offset: 0x350
	// Line 1564, Address: 0x12b154, Func Offset: 0x354
	// Line 1571, Address: 0x12b158, Func Offset: 0x358
	// Line 1572, Address: 0x12b15c, Func Offset: 0x35c
	// Func End, Address: 0x12b180, Func Offset: 0x380
}

// xEntEndCollCheckTrigs__FP5_xEnt
// Start address: 0x12b180
void xEntEndCollCheckTrigs(_xEnt* ent)
{
	// Line 1433, Address: 0x12b180, Func Offset: 0
	// Line 1435, Address: 0x12b198, Func Offset: 0x18
	// Line 1438, Address: 0x12b2fc, Func Offset: 0x17c
	// Func End, Address: 0x12b304, Func Offset: 0x184
}

// xEntBeginCollCheckTrigs__FP5_xEnt
// Start address: 0x12b310
void xEntBeginCollCheckTrigs(_xEnt* ent)
{
	// Line 1423, Address: 0x12b310, Func Offset: 0
	// Line 1425, Address: 0x12b370, Func Offset: 0x60
	// Line 1426, Address: 0x12b374, Func Offset: 0x64
	// Func End, Address: 0x12b37c, Func Offset: 0x6c
}

// xEntCollCheckNPCs__FP5_xEntP7_xScenePFP5_xEntP7_xScenePv_P5_xEnt
// Start address: 0x12b380
void xEntCollCheckNPCs(_xEnt* p, _xScene* sc, _xEnt*(*hitIt)(_xEnt*, _xScene*, void*))
{
	// Line 1406, Address: 0x12b380, Func Offset: 0
	// Line 1411, Address: 0x12b38c, Func Offset: 0xc
	// Line 1412, Address: 0x12b398, Func Offset: 0x18
	// Line 1413, Address: 0x12b3ac, Func Offset: 0x2c
	// Line 1414, Address: 0x12b3b8, Func Offset: 0x38
	// Func End, Address: 0x12b3c8, Func Offset: 0x48
}

// xEntCollCheckDyns__FP5_xEntP7_xScenePFP5_xEntP7_xScenePv_P5_xEnt
// Start address: 0x12b3d0
void xEntCollCheckDyns(_xEnt* p, _xScene* sc, _xEnt*(*hitIt)(_xEnt*, _xScene*, void*))
{
	// Line 1394, Address: 0x12b3d0, Func Offset: 0
	// Line 1399, Address: 0x12b3dc, Func Offset: 0xc
	// Line 1400, Address: 0x12b3e8, Func Offset: 0x18
	// Line 1401, Address: 0x12b3fc, Func Offset: 0x2c
	// Line 1402, Address: 0x12b408, Func Offset: 0x38
	// Func End, Address: 0x12b418, Func Offset: 0x48
}

// xEntCollCheckStats__FP5_xEntP7_xScenePFP5_xEntP7_xScenePv_P5_xEnt
// Start address: 0x12b420
void xEntCollCheckStats(_xEnt* p, _xScene* sc, _xEnt*(*hitIt)(_xEnt*, _xScene*, void*))
{
	// Line 1383, Address: 0x12b420, Func Offset: 0
	// Line 1388, Address: 0x12b42c, Func Offset: 0xc
	// Line 1389, Address: 0x12b438, Func Offset: 0x18
	// Line 1390, Address: 0x12b44c, Func Offset: 0x2c
	// Line 1391, Address: 0x12b458, Func Offset: 0x38
	// Func End, Address: 0x12b468, Func Offset: 0x48
}

// xEntEndCollide__FP5_xEntP7_xScenef
// Start address: 0x12b470
void xEntEndCollide(_xEnt* ent, _xScene* sc, float32 dt)
{
	// Line 1312, Address: 0x12b470, Func Offset: 0
	// Line 1314, Address: 0x12b478, Func Offset: 0x8
	// Line 1315, Address: 0x12b488, Func Offset: 0x18
	// Line 1353, Address: 0x12b490, Func Offset: 0x20
	// Func End, Address: 0x12b49c, Func Offset: 0x2c
}

// xEntBeginCollide__FP5_xEntP7_xScenef
// Start address: 0x12b4a0
void xEntBeginCollide(_xEnt* ent)
{
	_xCollis* coll;
	uint8 idx;
	// Line 1282, Address: 0x12b4a0, Func Offset: 0
	// Line 1285, Address: 0x12b4ac, Func Offset: 0xc
	// Line 1286, Address: 0x12b4b8, Func Offset: 0x18
	// Line 1290, Address: 0x12b4c4, Func Offset: 0x24
	// Line 1294, Address: 0x12b4cc, Func Offset: 0x2c
	// Line 1292, Address: 0x12b4d0, Func Offset: 0x30
	// Line 1294, Address: 0x12b4d4, Func Offset: 0x34
	// Line 1291, Address: 0x12b4d8, Func Offset: 0x38
	// Line 1294, Address: 0x12b4dc, Func Offset: 0x3c
	// Line 1291, Address: 0x12b4e8, Func Offset: 0x48
	// Line 1292, Address: 0x12b4ec, Func Offset: 0x4c
	// Line 1293, Address: 0x12b4f0, Func Offset: 0x50
	// Line 1294, Address: 0x12b4f4, Func Offset: 0x54
	// Line 1290, Address: 0x12b598, Func Offset: 0xf8
	// Line 1294, Address: 0x12b5a8, Func Offset: 0x108
	// Line 1295, Address: 0x12b5ac, Func Offset: 0x10c
	// Line 1294, Address: 0x12b5b4, Func Offset: 0x114
	// Line 1295, Address: 0x12b5c8, Func Offset: 0x128
	// Line 1299, Address: 0x12b5d8, Func Offset: 0x138
	// Line 1302, Address: 0x12b5e4, Func Offset: 0x144
	// Line 1303, Address: 0x12b5ec, Func Offset: 0x14c
	// Line 1304, Address: 0x12b5f4, Func Offset: 0x154
	// Line 1305, Address: 0x12b5fc, Func Offset: 0x15c
	// Line 1306, Address: 0x12b604, Func Offset: 0x164
	// Line 1307, Address: 0x12b60c, Func Offset: 0x16c
	// Line 1308, Address: 0x12b614, Func Offset: 0x174
	// Line 1309, Address: 0x12b61c, Func Offset: 0x17c
	// Line 1310, Address: 0x12b624, Func Offset: 0x184
	// Func End, Address: 0x12b634, Func Offset: 0x194
}

// xEntCollide__FP5_xEntP7_xScenef
// Start address: 0x12b640
void xEntCollide(_xEnt* ent, _xScene* sc, float32 dt)
{
	_xRay3 flray;
	_xCollis* coll;
	float32 depen_len;
	float32 h_dot_n;
	_xCollis* coll;
	// Line 1151, Address: 0x12b640, Func Offset: 0
	// Line 1154, Address: 0x12b658, Func Offset: 0x18
	// Line 1164, Address: 0x12b66c, Func Offset: 0x2c
	// Line 1169, Address: 0x12b680, Func Offset: 0x40
	// Line 1172, Address: 0x12b688, Func Offset: 0x48
	// Line 1173, Address: 0x12b69c, Func Offset: 0x5c
	// Line 1175, Address: 0x12b6c4, Func Offset: 0x84
	// Line 1176, Address: 0x12b6d8, Func Offset: 0x98
	// Line 1178, Address: 0x12b700, Func Offset: 0xc0
	// Line 1179, Address: 0x12b714, Func Offset: 0xd4
	// Line 1181, Address: 0x12b73c, Func Offset: 0xfc
	// Line 1182, Address: 0x12b750, Func Offset: 0x110
	// Line 1185, Address: 0x12b7c8, Func Offset: 0x188
	// Line 1200, Address: 0x12b7dc, Func Offset: 0x19c
	// Line 1203, Address: 0x12b7fc, Func Offset: 0x1bc
	// Line 1206, Address: 0x12b80c, Func Offset: 0x1cc
	// Line 1207, Address: 0x12b81c, Func Offset: 0x1dc
	// Line 1208, Address: 0x12b834, Func Offset: 0x1f4
	// Line 1207, Address: 0x12b83c, Func Offset: 0x1fc
	// Line 1208, Address: 0x12b84c, Func Offset: 0x20c
	// Line 1210, Address: 0x12b85c, Func Offset: 0x21c
	// Line 1211, Address: 0x12b860, Func Offset: 0x220
	// Line 1210, Address: 0x12b864, Func Offset: 0x224
	// Line 1214, Address: 0x12b884, Func Offset: 0x244
	// Line 1215, Address: 0x12b888, Func Offset: 0x248
	// Line 1214, Address: 0x12b890, Func Offset: 0x250
	// Line 1215, Address: 0x12b898, Func Offset: 0x258
	// Line 1217, Address: 0x12b8b8, Func Offset: 0x278
	// Line 1219, Address: 0x12b904, Func Offset: 0x2c4
	// Line 1225, Address: 0x12b928, Func Offset: 0x2e8
	// Line 1226, Address: 0x12b944, Func Offset: 0x304
	// Line 1227, Address: 0x12b954, Func Offset: 0x314
	// Line 1228, Address: 0x12b95c, Func Offset: 0x31c
	// Line 1233, Address: 0x12b968, Func Offset: 0x328
	// Line 1234, Address: 0x12b970, Func Offset: 0x330
	// Line 1239, Address: 0x12b990, Func Offset: 0x350
	// Line 1240, Address: 0x12b99c, Func Offset: 0x35c
	// Line 1241, Address: 0x12b9a4, Func Offset: 0x364
	// Line 1242, Address: 0x12b9a8, Func Offset: 0x368
	// Line 1243, Address: 0x12b9ac, Func Offset: 0x36c
	// Line 1239, Address: 0x12b9b0, Func Offset: 0x370
	// Line 1243, Address: 0x12b9b8, Func Offset: 0x378
	// Line 1239, Address: 0x12b9c0, Func Offset: 0x380
	// Line 1240, Address: 0x12b9cc, Func Offset: 0x38c
	// Line 1241, Address: 0x12b9e4, Func Offset: 0x3a4
	// Line 1243, Address: 0x12b9e8, Func Offset: 0x3a8
	// Line 1244, Address: 0x12b9f0, Func Offset: 0x3b0
	// Line 1270, Address: 0x12ba00, Func Offset: 0x3c0
	// Line 1272, Address: 0x12ba10, Func Offset: 0x3d0
	// Line 1275, Address: 0x12ba20, Func Offset: 0x3e0
	// Line 1276, Address: 0x12ba34, Func Offset: 0x3f4
	// Line 1280, Address: 0x12bc2c, Func Offset: 0x5ec
	// Func End, Address: 0x12bc48, Func Offset: 0x608
}

// xEntApplyPhysics__FP5_xEntP7_xScenef
// Start address: 0x12bc50
void xEntApplyPhysics(_xEnt* ent, _xScene* sc, float32 dt)
{
	float32 scale;
	float32 tdrag;
	float32 tfric;
	// Line 1080, Address: 0x12bc50, Func Offset: 0
	// Line 1095, Address: 0x12bc6c, Func Offset: 0x1c
	// Line 1096, Address: 0x12bc80, Func Offset: 0x30
	// Line 1097, Address: 0x12bc90, Func Offset: 0x40
	// Line 1103, Address: 0x12bca8, Func Offset: 0x58
	// Line 1104, Address: 0x12bcb8, Func Offset: 0x68
	// Line 1105, Address: 0x12bcc8, Func Offset: 0x78
	// Line 1106, Address: 0x12bcd4, Func Offset: 0x84
	// Line 1105, Address: 0x12bcd8, Func Offset: 0x88
	// Line 1106, Address: 0x12bcdc, Func Offset: 0x8c
	// Line 1105, Address: 0x12bce0, Func Offset: 0x90
	// Line 1106, Address: 0x12bce4, Func Offset: 0x94
	// Line 1112, Address: 0x12bd04, Func Offset: 0xb4
	// Line 1113, Address: 0x12bd14, Func Offset: 0xc4
	// Line 1114, Address: 0x12bd24, Func Offset: 0xd4
	// Line 1115, Address: 0x12bd30, Func Offset: 0xe0
	// Line 1114, Address: 0x12bd34, Func Offset: 0xe4
	// Line 1115, Address: 0x12bd38, Func Offset: 0xe8
	// Line 1114, Address: 0x12bd3c, Func Offset: 0xec
	// Line 1115, Address: 0x12bd40, Func Offset: 0xf0
	// Line 1127, Address: 0x12bd60, Func Offset: 0x110
	// Line 1128, Address: 0x12bd64, Func Offset: 0x114
	// Line 1132, Address: 0x12bd6c, Func Offset: 0x11c
	// Line 1128, Address: 0x12bd74, Func Offset: 0x124
	// Line 1127, Address: 0x12bd78, Func Offset: 0x128
	// Line 1128, Address: 0x12bd9c, Func Offset: 0x14c
	// Line 1132, Address: 0x12bda4, Func Offset: 0x154
	// Line 1134, Address: 0x12bdb4, Func Offset: 0x164
	// Line 1135, Address: 0x12bdc8, Func Offset: 0x178
	// Line 1136, Address: 0x12bde4, Func Offset: 0x194
	// Line 1135, Address: 0x12bde8, Func Offset: 0x198
	// Line 1136, Address: 0x12bdf4, Func Offset: 0x1a4
	// Line 1137, Address: 0x12be0c, Func Offset: 0x1bc
	// Line 1145, Address: 0x12be18, Func Offset: 0x1c8
	// Line 1146, Address: 0x12be40, Func Offset: 0x1f0
	// Func End, Address: 0x12be60, Func Offset: 0x210
}

// xEntMove__FP5_xEntP7_xScenef
// Start address: 0x12be60
void xEntMove(_xEnt* ent, _xScene* sc, float32 dt)
{
	_xEntFrame* dframe;
	_xVec3 dpos;
	// Line 1062, Address: 0x12be60, Func Offset: 0
	// Line 1066, Address: 0x12be6c, Func Offset: 0xc
	// Line 1068, Address: 0x12be7c, Func Offset: 0x1c
	// Line 1071, Address: 0x12be88, Func Offset: 0x28
	// Line 1073, Address: 0x12be94, Func Offset: 0x34
	// Line 1075, Address: 0x12be98, Func Offset: 0x38
	// Line 1074, Address: 0x12be9c, Func Offset: 0x3c
	// Line 1075, Address: 0x12becc, Func Offset: 0x6c
	// Line 1077, Address: 0x12bed8, Func Offset: 0x78
	// Func End, Address: 0x12bee8, Func Offset: 0x88
}

// xEntMotionToMatrix__FP5_xEntP10_xEntFrame
// Start address: 0x12bef0
void xEntMotionToMatrix(_xEnt* ent, _xEntFrame* frame)
{
	// Line 999, Address: 0x12bef0, Func Offset: 0
	// Line 1004, Address: 0x12bf04, Func Offset: 0x14
	// Line 1005, Address: 0x12bf14, Func Offset: 0x24
	// Line 1006, Address: 0x12bf20, Func Offset: 0x30
	// Line 1007, Address: 0x12bf30, Func Offset: 0x40
	// Line 1008, Address: 0x12bf38, Func Offset: 0x48
	// Line 1015, Address: 0x12bf40, Func Offset: 0x50
	// Line 1016, Address: 0x12bf54, Func Offset: 0x64
	// Line 1017, Address: 0x12bf60, Func Offset: 0x70
	// Line 1018, Address: 0x12bf70, Func Offset: 0x80
	// Line 1019, Address: 0x12bf78, Func Offset: 0x88
	// Line 1028, Address: 0x12bf80, Func Offset: 0x90
	// Line 1029, Address: 0x12bf90, Func Offset: 0xa0
	// Line 1032, Address: 0x12c01c, Func Offset: 0x12c
	// Line 1033, Address: 0x12c02c, Func Offset: 0x13c
	// Line 1034, Address: 0x12c034, Func Offset: 0x144
	// Line 1036, Address: 0x12c040, Func Offset: 0x150
	// Line 1043, Address: 0x12c074, Func Offset: 0x184
	// Line 1044, Address: 0x12c084, Func Offset: 0x194
	// Line 1045, Address: 0x12c08c, Func Offset: 0x19c
	// Line 1047, Address: 0x12c098, Func Offset: 0x1a8
	// Line 1054, Address: 0x12c0c8, Func Offset: 0x1d8
	// Line 1055, Address: 0x12c0d8, Func Offset: 0x1e8
	// Line 1059, Address: 0x12c164, Func Offset: 0x274
	// Func End, Address: 0x12c178, Func Offset: 0x288
}

// xEntDefaultTranslate__FP5_xEntP6_xVec3
// Start address: 0x12c180
void xEntDefaultTranslate(_xEnt* ent, _xVec3* dpos)
{
	// Line 954, Address: 0x12c180, Func Offset: 0
	// Line 958, Address: 0x12c18c, Func Offset: 0xc
	// Line 959, Address: 0x12c198, Func Offset: 0x18
	// Line 961, Address: 0x12c1cc, Func Offset: 0x4c
	// Line 962, Address: 0x12c1d8, Func Offset: 0x58
	// Line 964, Address: 0x12c208, Func Offset: 0x88
	// Line 965, Address: 0x12c244, Func Offset: 0xc4
	// Func End, Address: 0x12c254, Func Offset: 0xd4
}

// xEntDefaultBoundUpdate__FP5_xEntP6_xVec3
// Start address: 0x12c260
void xEntDefaultBoundUpdate(_xEnt* ent, _xVec3* pos)
{
	// Line 914, Address: 0x12c260, Func Offset: 0
	// Line 915, Address: 0x12c270, Func Offset: 0x10
	// Line 916, Address: 0x12c274, Func Offset: 0x14
	// Line 915, Address: 0x12c284, Func Offset: 0x24
	// Line 916, Address: 0x12c298, Func Offset: 0x38
	// Line 917, Address: 0x12c2a4, Func Offset: 0x44
	// Line 938, Address: 0x12c2a8, Func Offset: 0x48
	// Func End, Address: 0x12c2b4, Func Offset: 0x54
}

// xEntEndUpdate__FP5_xEntP7_xScenef
// Start address: 0x12c2c0
void xEntEndUpdate(_xEnt* ent)
{
	_xVec3* upos;
	_xVec3* mpos;
	// Line 835, Address: 0x12c2c0, Func Offset: 0
	// Line 836, Address: 0x12c2cc, Func Offset: 0xc
	// Line 838, Address: 0x12c2dc, Func Offset: 0x1c
	// Line 839, Address: 0x12c2e8, Func Offset: 0x28
	// Line 841, Address: 0x12c2f4, Func Offset: 0x34
	// Line 842, Address: 0x12c308, Func Offset: 0x48
	// Line 844, Address: 0x12c314, Func Offset: 0x54
	// Line 845, Address: 0x12c32c, Func Offset: 0x6c
	// Line 862, Address: 0x12c330, Func Offset: 0x70
	// Line 845, Address: 0x12c334, Func Offset: 0x74
	// Line 862, Address: 0x12c338, Func Offset: 0x78
	// Line 889, Address: 0x12c34c, Func Offset: 0x8c
	// Line 890, Address: 0x12c358, Func Offset: 0x98
	// Line 904, Address: 0x12c36c, Func Offset: 0xac
	// Line 910, Address: 0x12c374, Func Offset: 0xb4
	// Func End, Address: 0x12c384, Func Offset: 0xc4
}

// xEntBeginUpdate__FP5_xEntP7_xScenef
// Start address: 0x12c390
void xEntBeginUpdate(_xEnt* ent, float32 dt)
{
	// Line 814, Address: 0x12c390, Func Offset: 0
	// Line 815, Address: 0x12c3a4, Func Offset: 0x14
	// Line 817, Address: 0x12c3b0, Func Offset: 0x20
	// Line 819, Address: 0x12c3b8, Func Offset: 0x28
	// Line 820, Address: 0x12c3c4, Func Offset: 0x34
	// Line 821, Address: 0x12c3dc, Func Offset: 0x4c
	// Line 822, Address: 0x12c3f8, Func Offset: 0x68
	// Line 823, Address: 0x12c41c, Func Offset: 0x8c
	// Line 825, Address: 0x12c430, Func Offset: 0xa0
	// Line 829, Address: 0x12c438, Func Offset: 0xa8
	// Line 830, Address: 0x12c454, Func Offset: 0xc4
	// Line 832, Address: 0x12c458, Func Offset: 0xc8
	// Func End, Address: 0x12c46c, Func Offset: 0xdc
}

// xEntUpdate__FP5_xEntP7_xScenef
// Start address: 0x12c470
void xEntUpdate(_xEnt* ent, _xScene* sc, float32 dt)
{
	// Line 741, Address: 0x12c470, Func Offset: 0
	// Line 765, Address: 0x12c488, Func Offset: 0x18
	// Line 772, Address: 0x12c540, Func Offset: 0xd0
	// Line 773, Address: 0x12c550, Func Offset: 0xe0
	// Line 778, Address: 0x12c55c, Func Offset: 0xec
	// Line 779, Address: 0x12c56c, Func Offset: 0xfc
	// Line 784, Address: 0x12c5e0, Func Offset: 0x170
	// Line 795, Address: 0x12c5f0, Func Offset: 0x180
	// Line 796, Address: 0x12c5fc, Func Offset: 0x18c
	// Line 801, Address: 0x12c608, Func Offset: 0x198
	// Line 811, Address: 0x12c6ac, Func Offset: 0x23c
	// Func End, Address: 0x12c6c4, Func Offset: 0x254
}

// xEntLoadModel__FP5_xEntP8RpAtomic
// Start address: 0x12c6d0
xModelInstance* xEntLoadModel(_xEnt* ent, RpAtomic* imodel)
{
	xModelInstance* model;
	// Line 673, Address: 0x12c6d0, Func Offset: 0
	// Line 679, Address: 0x12c6e8, Func Offset: 0x18
	// Line 682, Address: 0x12c704, Func Offset: 0x34
	// Line 683, Address: 0x12c718, Func Offset: 0x48
	// Line 685, Address: 0x12c73c, Func Offset: 0x6c
	// Line 687, Address: 0x12c750, Func Offset: 0x80
	// Line 688, Address: 0x12c758, Func Offset: 0x88
	// Line 692, Address: 0x12c75c, Func Offset: 0x8c
	// Func End, Address: 0x12c774, Func Offset: 0xa4
}

// xEntReset__FP5_xEnt
// Start address: 0x12c780
void xEntReset(_xEnt* ent)
{
	_xMat4x3 frame;
	// Line 524, Address: 0x12c780, Func Offset: 0
	// Line 531, Address: 0x12c794, Func Offset: 0x14
	// Line 534, Address: 0x12c7a0, Func Offset: 0x20
	// Line 535, Address: 0x12c7ac, Func Offset: 0x2c
	// Line 538, Address: 0x12c7b8, Func Offset: 0x38
	// Line 545, Address: 0x12c7d0, Func Offset: 0x50
	// Line 550, Address: 0x12c7d8, Func Offset: 0x58
	// Line 545, Address: 0x12c7dc, Func Offset: 0x5c
	// Line 546, Address: 0x12c800, Func Offset: 0x80
	// Line 547, Address: 0x12c82c, Func Offset: 0xac
	// Line 550, Address: 0x12c858, Func Offset: 0xd8
	// Line 552, Address: 0x12c874, Func Offset: 0xf4
	// Line 555, Address: 0x12c878, Func Offset: 0xf8
	// Line 556, Address: 0x12c884, Func Offset: 0x104
	// Line 562, Address: 0x12c894, Func Offset: 0x114
	// Line 563, Address: 0x12c8a4, Func Offset: 0x124
	// Line 564, Address: 0x12c8b0, Func Offset: 0x130
	// Line 565, Address: 0x12c8c0, Func Offset: 0x140
	// Line 571, Address: 0x12c8cc, Func Offset: 0x14c
	// Line 573, Address: 0x12c8d8, Func Offset: 0x158
	// Line 574, Address: 0x12c8e0, Func Offset: 0x160
	// Line 577, Address: 0x12c8e4, Func Offset: 0x164
	// Line 574, Address: 0x12c8ec, Func Offset: 0x16c
	// Line 577, Address: 0x12c904, Func Offset: 0x184
	// Line 578, Address: 0x12c920, Func Offset: 0x1a0
	// Line 581, Address: 0x12c93c, Func Offset: 0x1bc
	// Line 582, Address: 0x12c95c, Func Offset: 0x1dc
	// Line 583, Address: 0x12c964, Func Offset: 0x1e4
	// Line 587, Address: 0x12c988, Func Offset: 0x208
	// Line 589, Address: 0x12c9b8, Func Offset: 0x238
	// Line 604, Address: 0x12c9dc, Func Offset: 0x25c
	// Line 606, Address: 0x12c9ec, Func Offset: 0x26c
	// Line 607, Address: 0x12c9f8, Func Offset: 0x278
	// Line 608, Address: 0x12ca04, Func Offset: 0x284
	// Line 610, Address: 0x12ca14, Func Offset: 0x294
	// Line 611, Address: 0x12ca1c, Func Offset: 0x29c
	// Line 615, Address: 0x12ca2c, Func Offset: 0x2ac
	// Line 620, Address: 0x12ca44, Func Offset: 0x2c4
	// Line 621, Address: 0x12ca4c, Func Offset: 0x2cc
	// Line 622, Address: 0x12ca54, Func Offset: 0x2d4
	// Line 623, Address: 0x12ca5c, Func Offset: 0x2dc
	// Line 626, Address: 0x12cb44, Func Offset: 0x3c4
	// Func End, Address: 0x12cb5c, Func Offset: 0x3dc
}

// xEntLoad__FP5_xEntP7xSerial
// Start address: 0x12cb60
void xEntLoad(_xEnt* ent, xSerial* s)
{
	int32 b;
	// Line 506, Address: 0x12cb60, Func Offset: 0
	// Line 507, Address: 0x12cb74, Func Offset: 0x14
	// Line 514, Address: 0x12cb7c, Func Offset: 0x1c
	// Line 515, Address: 0x12cb8c, Func Offset: 0x2c
	// Line 516, Address: 0x12cb98, Func Offset: 0x38
	// Line 518, Address: 0x12cba8, Func Offset: 0x48
	// Line 520, Address: 0x12cbb4, Func Offset: 0x54
	// Func End, Address: 0x12cbc8, Func Offset: 0x68
}

// xEntSave__FP5_xEntP7xSerial
// Start address: 0x12cbd0
void xEntSave(_xEnt* ent, xSerial* s)
{
	// Line 487, Address: 0x12cbd0, Func Offset: 0
	// Line 488, Address: 0x12cbe4, Func Offset: 0x14
	// Line 493, Address: 0x12cbec, Func Offset: 0x1c
	// Line 494, Address: 0x12cc44, Func Offset: 0x74
	// Line 496, Address: 0x12cc58, Func Offset: 0x88
	// Line 498, Address: 0x12cc60, Func Offset: 0x90
	// Func End, Address: 0x12cc74, Func Offset: 0xa4
}

// xEntSetup__FP5_xEnt
// Start address: 0x12cc80
void xEntSetup(_xEnt* ent)
{
	_xEnt* dent;
	p2LinkAsset* la;
	int32 i;
	// Line 445, Address: 0x12cc80, Func Offset: 0
	// Line 451, Address: 0x12cc98, Func Offset: 0x18
	// Line 454, Address: 0x12cca0, Func Offset: 0x20
	// Line 455, Address: 0x12ccb0, Func Offset: 0x30
	// Line 456, Address: 0x12ccbc, Func Offset: 0x3c
	// Line 457, Address: 0x12ccc8, Func Offset: 0x48
	// Line 458, Address: 0x12ccd0, Func Offset: 0x50
	// Line 460, Address: 0x12ccd4, Func Offset: 0x54
	// Line 461, Address: 0x12ccdc, Func Offset: 0x5c
	// Line 464, Address: 0x12cce0, Func Offset: 0x60
	// Line 465, Address: 0x12ccf0, Func Offset: 0x70
	// Line 466, Address: 0x12ccf4, Func Offset: 0x74
	// Line 465, Address: 0x12ccf8, Func Offset: 0x78
	// Line 466, Address: 0x12ccfc, Func Offset: 0x7c
	// Line 467, Address: 0x12cd08, Func Offset: 0x88
	// Line 469, Address: 0x12cd14, Func Offset: 0x94
	// Line 472, Address: 0x12cd1c, Func Offset: 0x9c
	// Line 475, Address: 0x12cd24, Func Offset: 0xa4
	// Line 476, Address: 0x12cd38, Func Offset: 0xb8
	// Func End, Address: 0x12cd54, Func Offset: 0xd4
}

// xEntInitForType__FP5_xEnt
// Start address: 0x12cd60
void xEntInitForType(_xEnt* ent)
{
	// Line 316, Address: 0x12cd60, Func Offset: 0
	// Line 318, Address: 0x12cd6c, Func Offset: 0xc
	// Line 316, Address: 0x12cd70, Func Offset: 0x10
	// Line 318, Address: 0x12cd74, Func Offset: 0x14
	// Line 319, Address: 0x12cd7c, Func Offset: 0x1c
	// Line 320, Address: 0x12cd88, Func Offset: 0x28
	// Line 321, Address: 0x12cd98, Func Offset: 0x38
	// Line 324, Address: 0x12cd9c, Func Offset: 0x3c
	// Line 326, Address: 0x12cdac, Func Offset: 0x4c
	// Line 333, Address: 0x12cdb0, Func Offset: 0x50
	// Line 326, Address: 0x12cdb4, Func Offset: 0x54
	// Line 333, Address: 0x12cdbc, Func Offset: 0x5c
	// Line 337, Address: 0x12cdc0, Func Offset: 0x60
	// Line 339, Address: 0x12cdd0, Func Offset: 0x70
	// Line 341, Address: 0x12cdd4, Func Offset: 0x74
	// Line 339, Address: 0x12cdd8, Func Offset: 0x78
	// Line 341, Address: 0x12cde0, Func Offset: 0x80
	// Line 345, Address: 0x12cde4, Func Offset: 0x84
	// Line 347, Address: 0x12cdf4, Func Offset: 0x94
	// Line 349, Address: 0x12ce00, Func Offset: 0xa0
	// Line 350, Address: 0x12ce04, Func Offset: 0xa4
	// Line 351, Address: 0x12ce14, Func Offset: 0xb4
	// Line 353, Address: 0x12ce24, Func Offset: 0xc4
	// Line 355, Address: 0x12ce28, Func Offset: 0xc8
	// Line 353, Address: 0x12ce2c, Func Offset: 0xcc
	// Line 355, Address: 0x12ce34, Func Offset: 0xd4
	// Line 359, Address: 0x12ce38, Func Offset: 0xd8
	// Line 361, Address: 0x12ce48, Func Offset: 0xe8
	// Line 364, Address: 0x12ce4c, Func Offset: 0xec
	// Line 361, Address: 0x12ce50, Func Offset: 0xf0
	// Line 363, Address: 0x12ce58, Func Offset: 0xf8
	// Line 364, Address: 0x12ce5c, Func Offset: 0xfc
	// Line 365, Address: 0x12ce6c, Func Offset: 0x10c
	// Line 367, Address: 0x12ce7c, Func Offset: 0x11c
	// Line 369, Address: 0x12ce80, Func Offset: 0x120
	// Line 367, Address: 0x12ce84, Func Offset: 0x124
	// Line 369, Address: 0x12ce8c, Func Offset: 0x12c
	// Line 371, Address: 0x12ce90, Func Offset: 0x130
	// Line 373, Address: 0x12ce94, Func Offset: 0x134
	// Line 375, Address: 0x12cea4, Func Offset: 0x144
	// Line 377, Address: 0x12ceb0, Func Offset: 0x150
	// Line 379, Address: 0x12ceb8, Func Offset: 0x158
	// Line 381, Address: 0x12cec0, Func Offset: 0x160
	// Line 384, Address: 0x12cec4, Func Offset: 0x164
	// Line 386, Address: 0x12ced4, Func Offset: 0x174
	// Line 389, Address: 0x12ced8, Func Offset: 0x178
	// Line 386, Address: 0x12cedc, Func Offset: 0x17c
	// Line 388, Address: 0x12cee4, Func Offset: 0x184
	// Line 389, Address: 0x12cee8, Func Offset: 0x188
	// Line 390, Address: 0x12cef8, Func Offset: 0x198
	// Line 392, Address: 0x12cf08, Func Offset: 0x1a8
	// Line 394, Address: 0x12cf14, Func Offset: 0x1b4
	// Line 395, Address: 0x12cf18, Func Offset: 0x1b8
	// Line 397, Address: 0x12cf1c, Func Offset: 0x1bc
	// Line 399, Address: 0x12cf2c, Func Offset: 0x1cc
	// Line 402, Address: 0x12cf34, Func Offset: 0x1d4
	// Line 399, Address: 0x12cf38, Func Offset: 0x1d8
	// Line 402, Address: 0x12cf3c, Func Offset: 0x1dc
	// Line 404, Address: 0x12cf44, Func Offset: 0x1e4
	// Line 406, Address: 0x12cf4c, Func Offset: 0x1ec
	// Line 422, Address: 0x12cf54, Func Offset: 0x1f4
	// Line 423, Address: 0x12cf60, Func Offset: 0x200
	// Line 426, Address: 0x12cf98, Func Offset: 0x238
	// Func End, Address: 0x12cfac, Func Offset: 0x24c
}

// xEntInit__FP5_xEntP10p2EntAsset
// Start address: 0x12cfb0
void xEntInit(_xEnt* ent, p2EntAsset* asset)
{
	// Line 271, Address: 0x12cfb0, Func Offset: 0
	// Line 284, Address: 0x12cfc4, Func Offset: 0x14
	// Line 289, Address: 0x12cfcc, Func Offset: 0x1c
	// Line 286, Address: 0x12cfd0, Func Offset: 0x20
	// Line 289, Address: 0x12cfd4, Func Offset: 0x24
	// Line 290, Address: 0x12cfdc, Func Offset: 0x2c
	// Line 291, Address: 0x12cfe8, Func Offset: 0x38
	// Line 292, Address: 0x12cff4, Func Offset: 0x44
	// Line 293, Address: 0x12d000, Func Offset: 0x50
	// Line 295, Address: 0x12d004, Func Offset: 0x54
	// Line 294, Address: 0x12d008, Func Offset: 0x58
	// Line 295, Address: 0x12d00c, Func Offset: 0x5c
	// Line 298, Address: 0x12d014, Func Offset: 0x64
	// Line 310, Address: 0x12d018, Func Offset: 0x68
	// Line 298, Address: 0x12d01c, Func Offset: 0x6c
	// Line 299, Address: 0x12d020, Func Offset: 0x70
	// Line 300, Address: 0x12d028, Func Offset: 0x78
	// Line 301, Address: 0x12d030, Func Offset: 0x80
	// Line 302, Address: 0x12d038, Func Offset: 0x88
	// Line 303, Address: 0x12d03c, Func Offset: 0x8c
	// Line 304, Address: 0x12d040, Func Offset: 0x90
	// Line 306, Address: 0x12d044, Func Offset: 0x94
	// Line 307, Address: 0x12d048, Func Offset: 0x98
	// Line 308, Address: 0x12d04c, Func Offset: 0x9c
	// Line 309, Address: 0x12d050, Func Offset: 0xa0
	// Line 310, Address: 0x12d054, Func Offset: 0xa4
	// Line 311, Address: 0x12d058, Func Offset: 0xa8
	// Line 312, Address: 0x12d05c, Func Offset: 0xac
	// Line 313, Address: 0x12d060, Func Offset: 0xb0
	// Func End, Address: 0x12d074, Func Offset: 0xc4
}

// xEntSceneExit__Fv
// Start address: 0x12d080
void xEntSceneExit()
{
	// Line 227, Address: 0x12d080, Func Offset: 0
	// Line 229, Address: 0x12d084, Func Offset: 0x4
	// Line 227, Address: 0x12d088, Func Offset: 0x8
	// Line 229, Address: 0x12d08c, Func Offset: 0xc
	// Line 231, Address: 0x12d0c4, Func Offset: 0x44
	// Func End, Address: 0x12d0d0, Func Offset: 0x50
}

// xEntSceneInit__Fv
// Start address: 0x12d0d0
void xEntSceneInit()
{
	// Line 219, Address: 0x12d0d0, Func Offset: 0
	// Line 221, Address: 0x12d0d4, Func Offset: 0x4
	// Line 219, Address: 0x12d0d8, Func Offset: 0x8
	// Line 221, Address: 0x12d0dc, Func Offset: 0xc
	// Line 223, Address: 0x12d114, Func Offset: 0x44
	// Line 224, Address: 0x12d11c, Func Offset: 0x4c
	// Func End, Address: 0x12d128, Func Offset: 0x58
}

// xEntSetTimePassed__Ff
// Start address: 0x12d130
void xEntSetTimePassed(float32 sec)
{
	// Line 215, Address: 0x12d130, Func Offset: 0
	// Func End, Address: 0x12d138, Func Offset: 0x8
}

// xEntUpdateTimer__FP5_xEnt
// Start address: 0x12d140
void xEntUpdateTimer(_xEnt* ent)
{
	// Line 205, Address: 0x12d140, Func Offset: 0
	// Line 208, Address: 0x12d144, Func Offset: 0x4
	// Func End, Address: 0x12d14c, Func Offset: 0xc
}

