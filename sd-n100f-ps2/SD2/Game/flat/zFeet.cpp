typedef enum RxClusterValidityReq;
typedef enum _tagCamType;
typedef struct RpClump;
typedef struct xAnimFile;
typedef struct xAnimSingle;
typedef struct RxPipelineCluster;
typedef struct xSurface;
typedef struct _xCylinder;
typedef struct _tagPadAnalog;
typedef struct xCutsceneBreak;
typedef struct RwSphere;
typedef struct xCamAsset;
typedef struct xFFX;
typedef struct _tagEmitRect;
typedef struct RxClusterDefinition;
typedef struct xAnimEffect;
typedef struct RpCollSector;
typedef struct rxHeapBlockHeader;
typedef struct xCutsceneTime;
typedef struct RwRGBA;
typedef struct xAnimTable;
typedef struct _xEnt;
typedef struct RxOutputSpec;
typedef struct xQCData;
typedef struct RpMeshHeader;
typedef enum rxEmbeddedPacketState;
typedef struct _zParEmitter;
typedef struct xAnimTransitionList;
typedef struct _tagxPad;
typedef struct RxPacket;
typedef struct RxPipeline;
typedef struct zPlayerGlobals;
typedef struct _tagxCamStatic;
typedef struct zParEmitterAsset;
typedef struct _xBox;
typedef struct RpWorldSector;
typedef struct _tagSkidEdge;
typedef enum RwTextureAddressMode;
typedef struct xParGroup;
typedef struct RxPipelineNode;
typedef struct _xBBox;
typedef struct _tagxRumble;
typedef struct _tagFeetSkidMark;
typedef struct _zEnt;
typedef struct _xEnv;
typedef struct xMemPool;
typedef struct zSurfUVFX;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimActiveEffect;
typedef struct xAnimState;
typedef struct zCutsceneZbuffer;
typedef struct xBase;
typedef enum RwCameraProjection;
typedef struct _tagxCamFrame;
typedef struct _xEntShadow;
typedef struct xModelInstance;
typedef struct RxPipelineNodeParam;
typedef struct RpWorld;
typedef struct xCutsceneData;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpGeometry;
typedef struct tagzFeet;
typedef struct xParCmdTex;
typedef struct RwObjectHasFrame;
typedef struct _tagEmitLine;
typedef struct RwCamera;
typedef struct _tagxCamShoulderAsset;
typedef struct zSurfAsset;
typedef enum _tagTransType;
typedef struct _xEntFrame;
typedef struct RxNodeDefinition;
typedef struct RpAtomic;
typedef struct RpVertexNormal;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct _tagxCamStaticFollow;
typedef struct RpSector;
typedef struct RpMaterial;
typedef struct _tagxCam;
typedef struct zSurfMatFX;
typedef struct RwLLLink;
typedef struct zShaggy1Globals;
typedef struct RwResEntry;
typedef struct RwRGBAReal;
typedef struct rxHeapFreeBlock;
typedef struct p2LinkAsset;
typedef struct RwV3d;
typedef struct xAnimTransition;
typedef struct zPortalAsset;
typedef struct iEnv;
typedef struct xPar;
typedef struct zCutsceneZbufferHack;
typedef struct _tagPlayerFX;
typedef struct _xVec3;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct xParCmdAsset;
typedef enum _tagRumbleType;
typedef struct _tagFoot;
typedef struct _tagEmitVolume;
typedef struct RwRaster;
typedef struct _xMat4x3;
typedef struct RpPolygon;
typedef struct RpLight;
typedef struct zAssetPickupTable;
typedef struct _tagxCamPath;
typedef struct zGlobalGameStats;
typedef struct iShadowCache;
typedef struct _tagp2CamStaticAsset;
typedef struct _zEntHangable;
typedef struct RpTriangle;
typedef struct p2BaseAsset;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef struct zScene;
typedef struct p2EntHangableAsset;
typedef struct RwFrame;
typedef enum RxClusterValid;
typedef struct iModelTag;
typedef struct p2EntAsset;
typedef struct xModelPool;
typedef struct _zCutsceneMgr;
typedef struct _xQuat;
typedef struct RwTexDictionary;
typedef struct zSurfacePropTexAnim;
typedef struct _zPortal;
typedef struct _tagEmitOffsetPoint;
typedef struct zCutsceneMgrAsset;
typedef struct RwPlane;
typedef struct xAnimPlay;
typedef struct xCutscene;
typedef struct zCheckPoint;
typedef struct _xBound;
typedef struct RwLinkList;
typedef struct _xScene;
typedef struct RwFrustumPlane;
typedef struct zGlobals;
typedef struct _xEntDrive;
typedef struct _xVec4;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RwBBox;
typedef struct RxColorUnion;
typedef struct _iCollis;
typedef struct zSurfTextureAnim;
typedef struct rxReq;
typedef struct _tagxCamFollow;
typedef struct _xRot;
typedef enum RwFogType;
typedef struct _zParEmitterCustomSettings;
typedef struct RwTexture;
typedef struct RwMatrixTag;
typedef struct RwTexCoords;
typedef struct _xEntCollis;
typedef struct zSurfacePropUVFX;
typedef struct zJumpParam;
typedef enum RxClusterForcePresent;
typedef struct RpInterpolator;
typedef struct _tagEmitCircle;
typedef struct _tagxCamPathAsset;
typedef struct RxObjSpace3DVertex;
typedef struct RxClusterRef;
typedef struct tag_xFile;
typedef enum RxNodeDefEditable;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct iFogParams;
typedef struct _zPlatform;
typedef struct RxIoSpec;
typedef struct _xCollis;
typedef struct tag_iFile;
typedef struct RxNodeMethods;
typedef struct _xRay3;
typedef enum _tagPadState;
typedef struct _tagxCamShoulder;
typedef struct _tagEmitSphere;
typedef struct RwSurfaceProperties;
typedef struct zSurfaceProps;
typedef struct _tagiPad;
typedef struct zPlayerStatic;
typedef struct RxHeap;
typedef struct _xSphere;
typedef struct _tagxCamFollowAsset;
typedef struct RxCluster;
typedef struct zSurfColorFX;
typedef enum RpWorldRenderOrder;

typedef void(*type_1)(_xEnt*, _xScene*, float32, void*);
typedef RpClump*(*type_10)(RpClump*, void*);
typedef void(*type_19)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_22)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RpWorldSector*(*type_27)(RpWorldSector*);
typedef int32(*type_31)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_33)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_35)(RxNodeDefinition*);
typedef int32(*type_37)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_39)(void*, xParGroup*);
typedef RpAtomic*(*type_41)(RpAtomic*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);
typedef void(*type_44)(RxNodeDefinition*);
typedef xBase*(*type_49)(uint32);
typedef int8*(*type_53)(xBase*);
typedef int32(*type_54)(RxPipelineNode*);
typedef int8*(*type_55)(uint32);
typedef void(*type_56)();
typedef void(*type_57)(RxPipelineNode*);
typedef uint32(*type_60)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_62)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_64)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_73)(RwCamera*);
typedef uint32(*type_77)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_79)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_82)(RwCamera*);
typedef void(*type_89)(xMemPool*, void*);
typedef void(*type_90)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_96)(RwResEntry*);
typedef void(*type_98)(_xEnt*, _xScene*, float32);
typedef void(*type_101)(_xEnt*);
typedef void(*type_104)(_xEnt*);
typedef void(*type_109)(_xEnt*, _xVec3*);
typedef void(*type_110)(int32);
typedef void(*type_125)(_xEnt*, _xVec3*);

typedef uint8 type_0[3];
typedef zGlobalGameStats type_2[4];
typedef float32 type_3[4];
typedef float32 type_4[4];
typedef zSurfacePropUVFX type_5[2];
typedef int32 type_6[2];
typedef uint8 type_7[3];
typedef float32 type_8[4];
typedef int32 type_9[2];
typedef RwFrustumPlane type_11[6];
typedef uint8 type_12[3];
typedef int8 type_13[16];
typedef float32 type_14[4];
typedef _xCollis type_15[18];
typedef int8 type_16[16];
typedef _xVec3 type_17[2];
typedef float32 type_18[4];
typedef RwV3d type_20[8];
typedef float32 type_21[3];
typedef _xQuat type_23[2];
typedef float32 type_24[3];
typedef uint8 type_25[8];
typedef uint8 type_26[4];
typedef uint8 type_28[8];
typedef uint8 type_29[4];
typedef uint8 type_30[8];
typedef uint8 type_32[8];
typedef float32 type_34[15];
typedef uint32 type_36[2];
typedef float32 type_38[15];
typedef _xVec4 type_40[8];
typedef uint32 type_43[15];
typedef uint8 type_45[22];
typedef uint8 type_46[3];
typedef int8 type_47[128];
typedef uint8 type_48[2];
typedef float32 type_50[4];
typedef uint8 type_51[22];
typedef int8 type_52[128];
typedef zCutsceneZbuffer type_58[4];
typedef _zParEmitter* type_59[23];
typedef _zParEmitter* type_61[23];
typedef uint8 type_63[4];
typedef uint16 type_65[3];
typedef RpLight* type_66[2];
typedef uint32 type_67[2];
typedef uint16 type_68[3];
typedef _zParEmitter* type_69[2];
typedef RwFrame* type_70[2];
typedef _xVec3 type_71[4];
typedef RxCluster type_72[1];
typedef int8 type_74[16];
typedef uint32 type_75[2];
typedef uint32 type_76[2];
typedef uint32 type_78[2];
typedef uint32 type_80[4];
typedef float32 type_81[6];
typedef float32 type_83[4];
typedef uint8 type_84[3];
typedef uint8 type_85[3];
typedef int32 type_86[6];
typedef uint32 type_87[23];
typedef uint8 type_88[2];
typedef uint8 type_91[2];
typedef uint8 type_92[3];
typedef iModelTag type_93[4];
typedef float32 type_94[2];
typedef RxObjSpace3DVertex type_95[256];
typedef zSurfTextureAnim type_97[2];
typedef zSurfUVFX type_99[2];
typedef float32 type_100[4];
typedef uint8 type_102[3];
typedef int8 type_103[128];
typedef int8 type_105[128][6];
typedef RwTexCoords* type_106[8];
typedef int8 type_107[32];
typedef int8 type_108[32];
typedef uint8 type_111[4];
typedef uint8 type_112[4];
typedef int8 type_113[32];
typedef int8 type_114[16];
typedef uint8 type_115[8];
typedef RwTexCoords* type_116[8];
typedef int8 type_117[128];
typedef uint32 type_118[43];
typedef _tagSkidEdge* type_119[4];
typedef xBase* type_120[43];
typedef uint8 type_121[3];
typedef float32 type_122[4];
typedef float32 type_123[4];
typedef zGlobalGameStats type_124[30];
typedef uint8 type_126[2];
typedef zSurfacePropTexAnim type_127[2];
typedef zGlobalGameStats type_128[13];
typedef float32 type_129[4];
typedef _zEnt* type_130[10];
typedef uint32 type_131[1];

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xFFX
{
	uint32 flags;
	void(*doEffect)(_xEnt*, _xScene*, float32, void*);
	void* fdata;
	xFFX* next;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _zParEmitter : xBase
{
	zParEmitterAsset* tasset;
	xParGroup* group;
	uint8 emit_flags;
	uint8 emit_pad[3];
	float32 emit_interval_current;
	uint8 rot[3];
	iModelTag tag;
	void* attachTo;
	void* parSys;
	void* emit_volume;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _tagxCamStatic
{
	uint32 unused;
};

struct zParEmitterAsset : p2BaseAsset
{
	uint8 emit_flags;
	uint8 emit_type;
	uint8 count;
	uint8 count_variation;
	float32 interval;
	union
	{
		_tagEmitCircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
	};
	uint32 attachToID;
	uint32 parSysID;
	_xVec3 pos;
	_xVec3 vel;
	float32 vel_angle_variation;
	uint8 color_birth[4];
	uint8 color_death[4];
	float32 size_birth;
	float32 size_birth_variation;
	float32 size_death;
	float32 life;
	float32 life_variation;
	uint8 pad_emit[2];
	uint8 cull_mode;
	float32 cull_dist_sqr;
	uint8 max_emit;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct _tagSkidEdge
{
	_xVec3 centre;
	_xVec3 local_x;
	float32 width;
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

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_priority;
	uint8 m_flags;
	uint8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	void(*draw)(void*, xParGroup*);
	xParCmdTex* m_cmdTex;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct _tagFeetSkidMark
{
	int32 total_feet;
	_tagSkidEdge* edge[4];
	int32 first_idx;
	int32 total_edges;
	float32 sample_timer;
	float32 remove_timer;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct tagzFeet
{
	int32 total;
	_xEnt* owner;
	int16 entity_type;
	int16 pitch;
};

struct xParCmdTex : xParCmdAsset
{
	float32 x1;
	float32 y1;
	float32 x2;
	float32 y2;
	uint8 birthMode;
	uint8 rows;
	uint8 cols;
	uint8 unit_count;
	float32 unit_width;
	float32 unit_height;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
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

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	uint8 m_c[4];
	_xVec3 m_pos;
	float32 m_size;
	_xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_texIdx[2];
	uint8 m_rotdeg[3];
	uint8 pad8;
	uint32 pad32;
	zParEmitterAsset* m_asset;
	float32 m_cvel[4];
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct _tagPlayerFX
{
	_zParEmitter* emit_land[23];
	_zParEmitter* emit_stop[23];
	_zParEmitter* emit_scratch;
	_zParEmitter* emit_digup[2];
	float32 timer_stop;
	float32 timer_scratch;
	float32 timer_digup;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
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

struct _tagFoot
{
	tagzFeet* feet;
	int32 idx;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct _iCollis
{
	int32 unknown;
};

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
};

struct rxReq
{
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

struct _zParEmitterCustomSettings
{
	uint32 custom_flags;
	uint8 count;
	uint8 count_variation;
	float32 interval;
	uint32 attachToID;
	_xVec3 pos;
	_xVec3 vel;
	float32 vel_angle_variation;
	uint8 color_birth[4];
	uint8 color_death[4];
	float32 size_birth;
	float32 size_birth_variation;
	float32 size_death;
	float32 life;
	float32 life_variation;
	uint8 rot[3];
	float32 xzcircle_radius;
	float32 emit_interval_current;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
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

struct _zPlatform
{
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zSurfaceProps
{
	zSurfAsset* asset;
	uint32 texanim_flags;
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
};

struct _tagiPad
{
	int32 port;
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct zSurfColorFX
{
	uint16 flags;
	uint16 mode;
	float32 speed;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

uint32 sSurfaceSoundIDStep[23];
xBase* paremit_sd_pawprint;
xBase* paremit_vil_footprint;
RwRaster* sSkidMarkRaster;
float32 cPlayerSkidWidth[4];
zGlobals globals;
uint32 gActiveHeap;
_tagPlayerFX gPlayerfx;
_xEnv* gCurXEnv;
uint32(*zFeetStepVillainCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
uint32(*zFeetStepCB)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
void(*zFeetDebugCB)();

void zFeetRenderSkidMark(_tagFeetSkidMark* m);
void DrawSkidMarkStrip(_tagFeetSkidMark* m, _tagSkidEdge* edge_array, uint8 red, uint8 green, uint8 blue);
void zFeetUpdateSkidMark(_tagFeetSkidMark* m, float32 seconds);
void zFeetAddSkidMark(_xEnt* ent, _tagFeetSkidMark* m, float32 seconds);
void zFeetInitSkidMark(_tagFeetSkidMark* m, int32 total_feet);
void zFeetDebugCB();
uint32 zFeetStepVillainCB(xAnimActiveEffect* acteffect);
uint32 zFeetStepCB(xAnimActiveEffect* acteffect);
void zFeetInit(int32 ent_type, _xEnt* owner, tagzFeet* feet, int32 feet_subtype, xAnimTable* table);
void zFeetExit(xAnimTable* table);
void zFeetGetIDs();

// zFeetRenderSkidMark__FP16_tagFeetSkidMark
// Start address: 0x1dae10
void zFeetRenderSkidMark(_tagFeetSkidMark* m)
{
	int32 i;
	// Line 935, Address: 0x1dae10, Func Offset: 0
	// Line 939, Address: 0x1dae24, Func Offset: 0x14
	// Line 944, Address: 0x1dae34, Func Offset: 0x24
	// Line 948, Address: 0x1dae40, Func Offset: 0x30
	// Line 950, Address: 0x1dae4c, Func Offset: 0x3c
	// Line 951, Address: 0x1dae68, Func Offset: 0x58
	// Line 952, Address: 0x1dae80, Func Offset: 0x70
	// Func End, Address: 0x1dae98, Func Offset: 0x88
}

// DrawSkidMarkStrip__FP16_tagFeetSkidMarkP12_tagSkidEdgeUcUcUc
// Start address: 0x1daea0
void DrawSkidMarkStrip(_tagFeetSkidMark* m, _tagSkidEdge* edge_array, uint8 red, uint8 green, uint8 blue)
{
	RwRGBA* _col;
	RwRGBA* _col;
	int32 count;
	RwRGBA* _col;
	RwRGBA* _col;
	uint8 alphau8;
	float32 alphaf;
	_tagSkidEdge* e;
	uint32 vert_idx;
	RxObjSpace3DVertex strip_vert[256];
	// Line 817, Address: 0x1daea0, Func Offset: 0
	// Line 829, Address: 0x1daebc, Func Offset: 0x1c
	// Line 820, Address: 0x1daec0, Func Offset: 0x20
	// Line 830, Address: 0x1daec4, Func Offset: 0x24
	// Line 820, Address: 0x1daed8, Func Offset: 0x38
	// Line 831, Address: 0x1daeec, Func Offset: 0x4c
	// Line 836, Address: 0x1daef4, Func Offset: 0x54
	// Line 837, Address: 0x1daefc, Func Offset: 0x5c
	// Line 840, Address: 0x1daf04, Func Offset: 0x64
	// Line 836, Address: 0x1daf0c, Func Offset: 0x6c
	// Line 837, Address: 0x1daf14, Func Offset: 0x74
	// Line 836, Address: 0x1daf18, Func Offset: 0x78
	// Line 839, Address: 0x1daf1c, Func Offset: 0x7c
	// Line 837, Address: 0x1daf20, Func Offset: 0x80
	// Line 838, Address: 0x1daf24, Func Offset: 0x84
	// Line 837, Address: 0x1daf2c, Func Offset: 0x8c
	// Line 840, Address: 0x1daf30, Func Offset: 0x90
	// Line 853, Address: 0x1daf34, Func Offset: 0x94
	// Line 855, Address: 0x1daf38, Func Offset: 0x98
	// Line 838, Address: 0x1daf3c, Func Offset: 0x9c
	// Line 837, Address: 0x1daf40, Func Offset: 0xa0
	// Line 836, Address: 0x1daf44, Func Offset: 0xa4
	// Line 840, Address: 0x1daf48, Func Offset: 0xa8
	// Line 838, Address: 0x1daf4c, Func Offset: 0xac
	// Line 861, Address: 0x1daf54, Func Offset: 0xb4
	// Line 837, Address: 0x1daf5c, Func Offset: 0xbc
	// Line 861, Address: 0x1daf60, Func Offset: 0xc0
	// Line 837, Address: 0x1daf64, Func Offset: 0xc4
	// Line 840, Address: 0x1daf68, Func Offset: 0xc8
	// Line 841, Address: 0x1daf70, Func Offset: 0xd0
	// Line 842, Address: 0x1daf74, Func Offset: 0xd4
	// Line 843, Address: 0x1daf78, Func Offset: 0xd8
	// Line 848, Address: 0x1daf88, Func Offset: 0xe8
	// Line 849, Address: 0x1daf8c, Func Offset: 0xec
	// Line 848, Address: 0x1daf90, Func Offset: 0xf0
	// Line 850, Address: 0x1daf94, Func Offset: 0xf4
	// Line 849, Address: 0x1daf98, Func Offset: 0xf8
	// Line 848, Address: 0x1daf9c, Func Offset: 0xfc
	// Line 850, Address: 0x1dafa0, Func Offset: 0x100
	// Line 849, Address: 0x1dafa4, Func Offset: 0x104
	// Line 848, Address: 0x1dafa8, Func Offset: 0x108
	// Line 849, Address: 0x1dafac, Func Offset: 0x10c
	// Line 850, Address: 0x1dafb0, Func Offset: 0x110
	// Line 848, Address: 0x1dafb4, Func Offset: 0x114
	// Line 849, Address: 0x1dafb8, Func Offset: 0x118
	// Line 851, Address: 0x1dafbc, Func Offset: 0x11c
	// Line 850, Address: 0x1dafc0, Func Offset: 0x120
	// Line 851, Address: 0x1dafc4, Func Offset: 0x124
	// Line 852, Address: 0x1dafcc, Func Offset: 0x12c
	// Line 853, Address: 0x1dafd0, Func Offset: 0x130
	// Line 854, Address: 0x1dafd4, Func Offset: 0x134
	// Line 861, Address: 0x1dafe4, Func Offset: 0x144
	// Line 866, Address: 0x1daff0, Func Offset: 0x150
	// Line 867, Address: 0x1daff8, Func Offset: 0x158
	// Line 866, Address: 0x1db004, Func Offset: 0x164
	// Line 868, Address: 0x1db010, Func Offset: 0x170
	// Line 867, Address: 0x1db014, Func Offset: 0x174
	// Line 868, Address: 0x1db018, Func Offset: 0x178
	// Line 867, Address: 0x1db01c, Func Offset: 0x17c
	// Line 868, Address: 0x1db020, Func Offset: 0x180
	// Line 867, Address: 0x1db028, Func Offset: 0x188
	// Line 866, Address: 0x1db030, Func Offset: 0x190
	// Line 867, Address: 0x1db034, Func Offset: 0x194
	// Line 869, Address: 0x1db038, Func Offset: 0x198
	// Line 870, Address: 0x1db044, Func Offset: 0x1a4
	// Line 872, Address: 0x1db054, Func Offset: 0x1b4
	// Line 873, Address: 0x1db058, Func Offset: 0x1b8
	// Line 876, Address: 0x1db060, Func Offset: 0x1c0
	// Line 877, Address: 0x1db06c, Func Offset: 0x1cc
	// Line 879, Address: 0x1db07c, Func Offset: 0x1dc
	// Line 881, Address: 0x1db088, Func Offset: 0x1e8
	// Line 882, Address: 0x1db08c, Func Offset: 0x1ec
	// Line 885, Address: 0x1db0a0, Func Offset: 0x200
	// Line 889, Address: 0x1db0b0, Func Offset: 0x210
	// Line 893, Address: 0x1db0b8, Func Offset: 0x218
	// Line 894, Address: 0x1db0c0, Func Offset: 0x220
	// Line 896, Address: 0x1db0cc, Func Offset: 0x22c
	// Line 893, Address: 0x1db0d4, Func Offset: 0x234
	// Line 896, Address: 0x1db0dc, Func Offset: 0x23c
	// Line 895, Address: 0x1db0e0, Func Offset: 0x240
	// Line 894, Address: 0x1db0e4, Func Offset: 0x244
	// Line 895, Address: 0x1db0e8, Func Offset: 0x248
	// Line 894, Address: 0x1db0ec, Func Offset: 0x24c
	// Line 896, Address: 0x1db0f0, Func Offset: 0x250
	// Line 895, Address: 0x1db0f4, Func Offset: 0x254
	// Line 893, Address: 0x1db0fc, Func Offset: 0x25c
	// Line 894, Address: 0x1db100, Func Offset: 0x260
	// Line 896, Address: 0x1db104, Func Offset: 0x264
	// Line 894, Address: 0x1db108, Func Offset: 0x268
	// Line 896, Address: 0x1db114, Func Offset: 0x274
	// Line 898, Address: 0x1db11c, Func Offset: 0x27c
	// Line 900, Address: 0x1db12c, Func Offset: 0x28c
	// Line 901, Address: 0x1db130, Func Offset: 0x290
	// Line 904, Address: 0x1db138, Func Offset: 0x298
	// Line 905, Address: 0x1db144, Func Offset: 0x2a4
	// Line 907, Address: 0x1db154, Func Offset: 0x2b4
	// Line 909, Address: 0x1db160, Func Offset: 0x2c0
	// Line 910, Address: 0x1db168, Func Offset: 0x2c8
	// Line 912, Address: 0x1db17c, Func Offset: 0x2dc
	// Line 914, Address: 0x1db180, Func Offset: 0x2e0
	// Line 918, Address: 0x1db18c, Func Offset: 0x2ec
	// Line 920, Address: 0x1db194, Func Offset: 0x2f4
	// Line 926, Address: 0x1db1a8, Func Offset: 0x308
	// Line 928, Address: 0x1db1bc, Func Offset: 0x31c
	// Line 929, Address: 0x1db1c4, Func Offset: 0x324
	// Line 931, Address: 0x1db1cc, Func Offset: 0x32c
	// Func End, Address: 0x1db1ec, Func Offset: 0x34c
}

// zFeetUpdateSkidMark__FP16_tagFeetSkidMarkf
// Start address: 0x1db1f0
void zFeetUpdateSkidMark(_tagFeetSkidMark* m, float32 seconds)
{
	// Line 783, Address: 0x1db1f0, Func Offset: 0
	// Line 785, Address: 0x1db1fc, Func Offset: 0xc
	// Line 786, Address: 0x1db200, Func Offset: 0x10
	// Line 785, Address: 0x1db208, Func Offset: 0x18
	// Line 786, Address: 0x1db20c, Func Offset: 0x1c
	// Line 788, Address: 0x1db21c, Func Offset: 0x2c
	// Line 791, Address: 0x1db224, Func Offset: 0x34
	// Line 792, Address: 0x1db230, Func Offset: 0x40
	// Line 795, Address: 0x1db248, Func Offset: 0x58
	// Line 796, Address: 0x1db24c, Func Offset: 0x5c
	// Line 801, Address: 0x1db250, Func Offset: 0x60
	// Func End, Address: 0x1db258, Func Offset: 0x68
}

// zFeetAddSkidMark__FP5_xEntP16_tagFeetSkidMarkf
// Start address: 0x1db260
void zFeetAddSkidMark(_xEnt* ent, _tagFeetSkidMark* m, float32 seconds)
{
	_tagSkidEdge* e;
	int32 i;
	_xVec3 feet_dir;
	// Line 718, Address: 0x1db260, Func Offset: 0
	// Line 722, Address: 0x1db28c, Func Offset: 0x2c
	// Line 725, Address: 0x1db29c, Func Offset: 0x3c
	// Line 729, Address: 0x1db2ac, Func Offset: 0x4c
	// Line 731, Address: 0x1db2e8, Func Offset: 0x88
	// Line 733, Address: 0x1db304, Func Offset: 0xa4
	// Line 735, Address: 0x1db308, Func Offset: 0xa8
	// Line 738, Address: 0x1db314, Func Offset: 0xb4
	// Line 739, Address: 0x1db318, Func Offset: 0xb8
	// Line 740, Address: 0x1db320, Func Offset: 0xc0
	// Line 743, Address: 0x1db328, Func Offset: 0xc8
	// Line 748, Address: 0x1db32c, Func Offset: 0xcc
	// Line 751, Address: 0x1db330, Func Offset: 0xd0
	// Line 750, Address: 0x1db334, Func Offset: 0xd4
	// Line 751, Address: 0x1db338, Func Offset: 0xd8
	// Line 748, Address: 0x1db33c, Func Offset: 0xdc
	// Line 749, Address: 0x1db348, Func Offset: 0xe8
	// Line 750, Address: 0x1db350, Func Offset: 0xf0
	// Line 751, Address: 0x1db35c, Func Offset: 0xfc
	// Line 755, Address: 0x1db370, Func Offset: 0x110
	// Line 758, Address: 0x1db384, Func Offset: 0x124
	// Line 761, Address: 0x1db388, Func Offset: 0x128
	// Line 758, Address: 0x1db38c, Func Offset: 0x12c
	// Line 761, Address: 0x1db390, Func Offset: 0x130
	// Line 758, Address: 0x1db394, Func Offset: 0x134
	// Line 761, Address: 0x1db39c, Func Offset: 0x13c
	// Line 758, Address: 0x1db3a0, Func Offset: 0x140
	// Line 761, Address: 0x1db3a8, Func Offset: 0x148
	// Line 764, Address: 0x1db3b4, Func Offset: 0x154
	// Line 767, Address: 0x1db3c4, Func Offset: 0x164
	// Line 764, Address: 0x1db3cc, Func Offset: 0x16c
	// Line 768, Address: 0x1db3d0, Func Offset: 0x170
	// Line 764, Address: 0x1db3d4, Func Offset: 0x174
	// Line 766, Address: 0x1db3dc, Func Offset: 0x17c
	// Line 764, Address: 0x1db3e0, Func Offset: 0x180
	// Line 766, Address: 0x1db3e4, Func Offset: 0x184
	// Line 767, Address: 0x1db3fc, Func Offset: 0x19c
	// Line 768, Address: 0x1db408, Func Offset: 0x1a8
	// Line 771, Address: 0x1db418, Func Offset: 0x1b8
	// Line 774, Address: 0x1db424, Func Offset: 0x1c4
	// Func End, Address: 0x1db454, Func Offset: 0x1f4
}

// zFeetInitSkidMark__FP16_tagFeetSkidMarki
// Start address: 0x1db460
void zFeetInitSkidMark(_tagFeetSkidMark* m, int32 total_feet)
{
	int32 i;
	// Line 694, Address: 0x1db460, Func Offset: 0
	// Line 696, Address: 0x1db47c, Func Offset: 0x1c
	// Line 699, Address: 0x1db480, Func Offset: 0x20
	// Line 701, Address: 0x1db490, Func Offset: 0x30
	// Line 702, Address: 0x1db4a4, Func Offset: 0x44
	// Line 703, Address: 0x1db4b8, Func Offset: 0x58
	// Line 704, Address: 0x1db4bc, Func Offset: 0x5c
	// Line 705, Address: 0x1db4c0, Func Offset: 0x60
	// Func End, Address: 0x1db4dc, Func Offset: 0x7c
}

// zFeetDebugCB__Fv
// Start address: 0x1db4e0
void zFeetDebugCB()
{
	// Line 685, Address: 0x1db4e0, Func Offset: 0
	// Func End, Address: 0x1db4e8, Func Offset: 0x8
}

// zFeetStepVillainCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x1db4f0
uint32 zFeetStepVillainCB(xAnimActiveEffect* acteffect)
{
	_xVec3 angles;
	xBase* b;
	float32 pitch;
	zSurfaceProps* surface;
	xSurface* xsurf;
	int32 surface_type;
	_zParEmitterCustomSettings info;
	_xEnt* ent;
	tagzFeet* feet;
	_tagFoot* foot;
	// Line 570, Address: 0x1db4f0, Func Offset: 0
	// Line 572, Address: 0x1db50c, Func Offset: 0x1c
	// Line 574, Address: 0x1db510, Func Offset: 0x20
	// Line 572, Address: 0x1db514, Func Offset: 0x24
	// Line 576, Address: 0x1db518, Func Offset: 0x28
	// Line 577, Address: 0x1db524, Func Offset: 0x34
	// Line 579, Address: 0x1db52c, Func Offset: 0x3c
	// Line 582, Address: 0x1db530, Func Offset: 0x40
	// Line 583, Address: 0x1db550, Func Offset: 0x60
	// Line 592, Address: 0x1db55c, Func Offset: 0x6c
	// Line 597, Address: 0x1db584, Func Offset: 0x94
	// Line 596, Address: 0x1db588, Func Offset: 0x98
	// Line 597, Address: 0x1db58c, Func Offset: 0x9c
	// Line 598, Address: 0x1db594, Func Offset: 0xa4
	// Line 600, Address: 0x1db5a8, Func Offset: 0xb8
	// Line 604, Address: 0x1db5ac, Func Offset: 0xbc
	// Line 606, Address: 0x1db5c0, Func Offset: 0xd0
	// Line 610, Address: 0x1db5c8, Func Offset: 0xd8
	// Line 611, Address: 0x1db5d4, Func Offset: 0xe4
	// Line 615, Address: 0x1db5dc, Func Offset: 0xec
	// Line 618, Address: 0x1db5f4, Func Offset: 0x104
	// Line 619, Address: 0x1db610, Func Offset: 0x120
	// Line 628, Address: 0x1db644, Func Offset: 0x154
	// Line 636, Address: 0x1db648, Func Offset: 0x158
	// Line 639, Address: 0x1db654, Func Offset: 0x164
	// Line 633, Address: 0x1db658, Func Offset: 0x168
	// Line 639, Address: 0x1db65c, Func Offset: 0x16c
	// Line 640, Address: 0x1db668, Func Offset: 0x178
	// Line 641, Address: 0x1db694, Func Offset: 0x1a4
	// Line 640, Address: 0x1db698, Func Offset: 0x1a8
	// Line 641, Address: 0x1db69c, Func Offset: 0x1ac
	// Line 642, Address: 0x1db6c8, Func Offset: 0x1d8
	// Line 641, Address: 0x1db6cc, Func Offset: 0x1dc
	// Line 642, Address: 0x1db6d0, Func Offset: 0x1e0
	// Line 644, Address: 0x1db6fc, Func Offset: 0x20c
	// Line 642, Address: 0x1db700, Func Offset: 0x210
	// Line 644, Address: 0x1db704, Func Offset: 0x214
	// Line 649, Address: 0x1db710, Func Offset: 0x220
	// Line 650, Address: 0x1db718, Func Offset: 0x228
	// Line 653, Address: 0x1db73c, Func Offset: 0x24c
	// Line 654, Address: 0x1db740, Func Offset: 0x250
	// Func End, Address: 0x1db760, Func Offset: 0x270
}

// zFeetStepCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x1db760
uint32 zFeetStepCB(xAnimActiveEffect* acteffect)
{
	_xVec3 angles;
	xBase* b;
	float32 pitch;
	zSurfaceProps* surface;
	xSurface* xsurf;
	int32 surface_type;
	int32 collided_with_ground;
	_xRay3 ray;
	_zParEmitterCustomSettings info;
	_xEnt* ent;
	tagzFeet* feet;
	_tagFoot* foot;
	// Line 454, Address: 0x1db760, Func Offset: 0
	// Line 456, Address: 0x1db784, Func Offset: 0x24
	// Line 457, Address: 0x1db794, Func Offset: 0x34
	// Line 461, Address: 0x1db79c, Func Offset: 0x3c
	// Line 463, Address: 0x1db7a0, Func Offset: 0x40
	// Line 461, Address: 0x1db7a4, Func Offset: 0x44
	// Line 465, Address: 0x1db7a8, Func Offset: 0x48
	// Line 470, Address: 0x1db7ac, Func Offset: 0x4c
	// Line 471, Address: 0x1db7bc, Func Offset: 0x5c
	// Line 474, Address: 0x1db7c4, Func Offset: 0x64
	// Line 475, Address: 0x1db7cc, Func Offset: 0x6c
	// Line 486, Address: 0x1db7fc, Func Offset: 0x9c
	// Line 487, Address: 0x1db800, Func Offset: 0xa0
	// Line 486, Address: 0x1db80c, Func Offset: 0xac
	// Line 490, Address: 0x1db810, Func Offset: 0xb0
	// Line 486, Address: 0x1db814, Func Offset: 0xb4
	// Line 490, Address: 0x1db820, Func Offset: 0xc0
	// Line 497, Address: 0x1db824, Func Offset: 0xc4
	// Line 496, Address: 0x1db828, Func Offset: 0xc8
	// Line 486, Address: 0x1db82c, Func Offset: 0xcc
	// Line 487, Address: 0x1db838, Func Offset: 0xd8
	// Line 497, Address: 0x1db84c, Func Offset: 0xec
	// Line 489, Address: 0x1db850, Func Offset: 0xf0
	// Line 490, Address: 0x1db854, Func Offset: 0xf4
	// Line 491, Address: 0x1db858, Func Offset: 0xf8
	// Line 497, Address: 0x1db85c, Func Offset: 0xfc
	// Line 498, Address: 0x1db86c, Func Offset: 0x10c
	// Line 502, Address: 0x1db870, Func Offset: 0x110
	// Line 506, Address: 0x1db880, Func Offset: 0x120
	// Line 502, Address: 0x1db884, Func Offset: 0x124
	// Line 507, Address: 0x1db894, Func Offset: 0x134
	// Line 508, Address: 0x1db8a0, Func Offset: 0x140
	// Line 510, Address: 0x1db8b4, Func Offset: 0x154
	// Line 514, Address: 0x1db8b8, Func Offset: 0x158
	// Line 516, Address: 0x1db8cc, Func Offset: 0x16c
	// Line 520, Address: 0x1db8d4, Func Offset: 0x174
	// Line 521, Address: 0x1db8e0, Func Offset: 0x180
	// Line 525, Address: 0x1db8e8, Func Offset: 0x188
	// Line 528, Address: 0x1db900, Func Offset: 0x1a0
	// Line 529, Address: 0x1db91c, Func Offset: 0x1bc
	// Line 538, Address: 0x1db950, Func Offset: 0x1f0
	// Line 543, Address: 0x1db954, Func Offset: 0x1f4
	// Line 549, Address: 0x1db998, Func Offset: 0x238
	// Line 545, Address: 0x1db99c, Func Offset: 0x23c
	// Line 549, Address: 0x1db9a0, Func Offset: 0x240
	// Line 550, Address: 0x1db9ac, Func Offset: 0x24c
	// Line 551, Address: 0x1db9d8, Func Offset: 0x278
	// Line 550, Address: 0x1db9dc, Func Offset: 0x27c
	// Line 551, Address: 0x1db9e0, Func Offset: 0x280
	// Line 552, Address: 0x1dba0c, Func Offset: 0x2ac
	// Line 551, Address: 0x1dba10, Func Offset: 0x2b0
	// Line 552, Address: 0x1dba14, Func Offset: 0x2b4
	// Line 554, Address: 0x1dba40, Func Offset: 0x2e0
	// Line 552, Address: 0x1dba44, Func Offset: 0x2e4
	// Line 554, Address: 0x1dba48, Func Offset: 0x2e8
	// Line 559, Address: 0x1dba54, Func Offset: 0x2f4
	// Line 560, Address: 0x1dba5c, Func Offset: 0x2fc
	// Line 564, Address: 0x1dba80, Func Offset: 0x320
	// Line 565, Address: 0x1dba84, Func Offset: 0x324
	// Func End, Address: 0x1dbaac, Func Offset: 0x34c
}

// zFeetInit__FiP5_xEntP8tagzFeetiP10xAnimTable
// Start address: 0x1dbab0
void zFeetInit(int32 ent_type, _xEnt* owner, tagzFeet* feet, int32 feet_subtype, xAnimTable* table)
{
	int32 tag_idx[6];
	float32 step_time[6];
	// Line 157, Address: 0x1dbab0, Func Offset: 0
	// Line 164, Address: 0x1dbadc, Func Offset: 0x2c
	// Line 165, Address: 0x1dbae0, Func Offset: 0x30
	// Line 169, Address: 0x1dbae4, Func Offset: 0x34
	// Line 174, Address: 0x1dbaf8, Func Offset: 0x48
	// Line 178, Address: 0x1dbb2c, Func Offset: 0x7c
	// Line 183, Address: 0x1dbb54, Func Offset: 0xa4
	// Line 184, Address: 0x1dbb60, Func Offset: 0xb0
	// Line 185, Address: 0x1dbb6c, Func Offset: 0xbc
	// Line 186, Address: 0x1dbb78, Func Offset: 0xc8
	// Line 189, Address: 0x1dbb84, Func Offset: 0xd4
	// Line 190, Address: 0x1dbc08, Func Offset: 0x158
	// Line 191, Address: 0x1dbc80, Func Offset: 0x1d0
	// Line 192, Address: 0x1dbcf8, Func Offset: 0x248
	// Line 193, Address: 0x1dbd68, Func Offset: 0x2b8
	// Line 197, Address: 0x1dbd70, Func Offset: 0x2c0
	// Line 198, Address: 0x1dbd7c, Func Offset: 0x2cc
	// Line 199, Address: 0x1dbd88, Func Offset: 0x2d8
	// Line 200, Address: 0x1dbd94, Func Offset: 0x2e4
	// Line 203, Address: 0x1dbd98, Func Offset: 0x2e8
	// Line 204, Address: 0x1dbe18, Func Offset: 0x368
	// Line 205, Address: 0x1dbe90, Func Offset: 0x3e0
	// Line 206, Address: 0x1dbf08, Func Offset: 0x458
	// Line 207, Address: 0x1dbf78, Func Offset: 0x4c8
	// Line 212, Address: 0x1dbf80, Func Offset: 0x4d0
	// Line 211, Address: 0x1dbf84, Func Offset: 0x4d4
	// Line 212, Address: 0x1dbf88, Func Offset: 0x4d8
	// Line 213, Address: 0x1dbf90, Func Offset: 0x4e0
	// Line 214, Address: 0x1dbf9c, Func Offset: 0x4ec
	// Line 215, Address: 0x1dbfa0, Func Offset: 0x4f0
	// Line 218, Address: 0x1dbfa4, Func Offset: 0x4f4
	// Line 219, Address: 0x1dc020, Func Offset: 0x570
	// Line 223, Address: 0x1dc028, Func Offset: 0x578
	// Line 224, Address: 0x1dc034, Func Offset: 0x584
	// Line 225, Address: 0x1dc040, Func Offset: 0x590
	// Line 226, Address: 0x1dc04c, Func Offset: 0x59c
	// Line 229, Address: 0x1dc058, Func Offset: 0x5a8
	// Line 230, Address: 0x1dc0d0, Func Offset: 0x620
	// Line 234, Address: 0x1dc0d8, Func Offset: 0x628
	// Line 235, Address: 0x1dc0e4, Func Offset: 0x634
	// Line 236, Address: 0x1dc0e8, Func Offset: 0x638
	// Line 237, Address: 0x1dc0f4, Func Offset: 0x644
	// Line 240, Address: 0x1dc0f8, Func Offset: 0x648
	// Line 241, Address: 0x1dc170, Func Offset: 0x6c0
	// Line 245, Address: 0x1dc178, Func Offset: 0x6c8
	// Line 246, Address: 0x1dc184, Func Offset: 0x6d4
	// Line 247, Address: 0x1dc190, Func Offset: 0x6e0
	// Line 248, Address: 0x1dc19c, Func Offset: 0x6ec
	// Line 251, Address: 0x1dc1a8, Func Offset: 0x6f8
	// Line 252, Address: 0x1dc220, Func Offset: 0x770
	// Line 256, Address: 0x1dc228, Func Offset: 0x778
	// Line 257, Address: 0x1dc234, Func Offset: 0x784
	// Line 258, Address: 0x1dc240, Func Offset: 0x790
	// Line 259, Address: 0x1dc24c, Func Offset: 0x79c
	// Line 262, Address: 0x1dc258, Func Offset: 0x7a8
	// Line 263, Address: 0x1dc2d0, Func Offset: 0x820
	// Line 267, Address: 0x1dc2d8, Func Offset: 0x828
	// Line 268, Address: 0x1dc2e4, Func Offset: 0x834
	// Line 269, Address: 0x1dc2f0, Func Offset: 0x840
	// Line 270, Address: 0x1dc2fc, Func Offset: 0x84c
	// Line 273, Address: 0x1dc300, Func Offset: 0x850
	// Line 274, Address: 0x1dc378, Func Offset: 0x8c8
	// Line 278, Address: 0x1dc380, Func Offset: 0x8d0
	// Line 279, Address: 0x1dc38c, Func Offset: 0x8dc
	// Line 280, Address: 0x1dc398, Func Offset: 0x8e8
	// Line 281, Address: 0x1dc3a4, Func Offset: 0x8f4
	// Line 285, Address: 0x1dc3b0, Func Offset: 0x900
	// Line 286, Address: 0x1dc428, Func Offset: 0x978
	// Line 290, Address: 0x1dc430, Func Offset: 0x980
	// Line 291, Address: 0x1dc43c, Func Offset: 0x98c
	// Line 292, Address: 0x1dc448, Func Offset: 0x998
	// Line 293, Address: 0x1dc454, Func Offset: 0x9a4
	// Line 296, Address: 0x1dc460, Func Offset: 0x9b0
	// Line 303, Address: 0x1dc4d8, Func Offset: 0xa28
	// Line 306, Address: 0x1dc4e0, Func Offset: 0xa30
	// Line 309, Address: 0x1dc4e8, Func Offset: 0xa38
	// Line 311, Address: 0x1dc510, Func Offset: 0xa60
	// Line 318, Address: 0x1dc538, Func Offset: 0xa88
	// Line 319, Address: 0x1dc5d8, Func Offset: 0xb28
	// Line 320, Address: 0x1dc660, Func Offset: 0xbb0
	// Line 328, Address: 0x1dc668, Func Offset: 0xbb8
	// Line 329, Address: 0x1dc700, Func Offset: 0xc50
	// Line 330, Address: 0x1dc788, Func Offset: 0xcd8
	// Line 340, Address: 0x1dc790, Func Offset: 0xce0
	// Line 341, Address: 0x1dc828, Func Offset: 0xd78
	// Line 342, Address: 0x1dc8a8, Func Offset: 0xdf8
	// Line 348, Address: 0x1dc8b0, Func Offset: 0xe00
	// Line 349, Address: 0x1dc950, Func Offset: 0xea0
	// Line 350, Address: 0x1dc9d8, Func Offset: 0xf28
	// Line 358, Address: 0x1dc9e0, Func Offset: 0xf30
	// Line 359, Address: 0x1dca80, Func Offset: 0xfd0
	// Line 427, Address: 0x1dcb08, Func Offset: 0x1058
	// Func End, Address: 0x1dcb38, Func Offset: 0x1088
}

// zFeetExit__FP5_xEntP10xAnimTable
// Start address: 0x1dcb40
void zFeetExit(xAnimTable* table)
{
	// Line 140, Address: 0x1dcb40, Func Offset: 0
	// Func End, Address: 0x1dcb50, Func Offset: 0x10
}

// zFeetGetIDs__Fv
// Start address: 0x1dcb50
void zFeetGetIDs()
{
	RwTexture* tex;
	int32 i;
	int8 name[128];
	int8 type_name[128];
	// Line 50, Address: 0x1dcb50, Func Offset: 0
	// Line 53, Address: 0x1dcb64, Func Offset: 0x14
	// Line 55, Address: 0x1dcb6c, Func Offset: 0x1c
	// Line 56, Address: 0x1dcb78, Func Offset: 0x28
	// Line 57, Address: 0x1dcb88, Func Offset: 0x38
	// Line 58, Address: 0x1dcb94, Func Offset: 0x44
	// Line 64, Address: 0x1dcba0, Func Offset: 0x50
	// Line 66, Address: 0x1dcbb0, Func Offset: 0x60
	// Line 67, Address: 0x1dcbc8, Func Offset: 0x78
	// Line 69, Address: 0x1dcbe0, Func Offset: 0x90
	// Line 70, Address: 0x1dcbf8, Func Offset: 0xa8
	// Line 72, Address: 0x1dcc00, Func Offset: 0xb0
	// Line 77, Address: 0x1dcc08, Func Offset: 0xb8
	// Line 78, Address: 0x1dcc1c, Func Offset: 0xcc
	// Func End, Address: 0x1dcc30, Func Offset: 0xe0
}

