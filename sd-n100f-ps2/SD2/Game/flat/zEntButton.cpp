typedef struct xSerial;
typedef struct RxClusterDefinition;
typedef struct RwRaster;
typedef struct RwCamera;
typedef struct RwV3d;
typedef struct RwResEntry;
typedef struct xAnimTransitionList;
typedef struct xModelInstance;
typedef struct xAnimFile;
typedef struct _tagxCamStaticFollow;
typedef struct xSurface;
typedef struct xCutsceneData;
typedef struct _xScene;
typedef enum RxClusterValid;
typedef struct RxPipelineCluster;
typedef struct zShaggy1Globals;
typedef struct RpVertexNormal;
typedef struct _xEntERData;
typedef struct p2EntMotionAsset;
typedef struct xCutsceneTime;
typedef struct xBase;
typedef struct iModelTag;
typedef struct RxPipelineRequiresCluster;
typedef struct _zEnt;
typedef struct _xMat4x3;
typedef struct xModelPool;
typedef struct _tagxCam;
typedef struct _zEntButton;
typedef struct RwTexCoords;
typedef struct rxReq;
typedef struct xFFX;
typedef struct _iCollis;
typedef struct p2EntMotionERData;
typedef struct _tagxRumble;
typedef enum RwFogType;
typedef struct xAnimTransition;
typedef struct RwRGBA;
typedef struct RwTexDictionary;
typedef struct zCheckPoint;
typedef struct _xEnt;
typedef struct xQCData;
typedef struct xAnimPlay;
typedef struct p2EntMotionPenData;
typedef struct _xEnv;
typedef struct RpClump;
typedef struct xAnimSingle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpAtomic;
typedef struct _xQuat;
typedef struct RxOutputSpec;
typedef struct _xEntShadow;
typedef struct _xVec3;
typedef enum RxClusterForcePresent;
typedef enum RpWorldRenderOrder;
typedef struct zGlobalGameStats;
typedef struct xAnimState;
typedef struct _xBBox;
typedef struct _xEntMechData;
typedef struct RwFrustumPlane;
typedef struct _zEntHangable;
typedef struct zAssetPickupTable;
typedef struct RxClusterRef;
typedef struct _tagxCamPath;
typedef enum RxNodeDefEditable;
typedef struct _tagp2CamStaticAsset;
typedef struct zEntButtonAsset;
typedef struct RwBBox;
typedef struct _xEntFrame;
typedef struct _xVec4;
typedef struct xCutscene;
typedef struct xSpline3;
typedef struct RwMatrixTag;
typedef struct RxIoSpec;
typedef struct RpCollSector;
typedef struct xCutsceneInfo;
typedef struct rxHeapFreeBlock;
typedef struct zJumpParam;
typedef struct RwTexture;
typedef struct RpMeshHeader;
typedef struct RpWorldSector;
typedef struct _xRot;
typedef struct RxPipeline;
typedef struct xAnimEffect;
typedef struct RxNodeMethods;
typedef struct _xCollis;
typedef struct p2EntMotionOrbitData;
typedef enum _tagRumbleType;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobals;
typedef struct zPortalAsset;
typedef struct xAnimTable;
typedef struct RwSurfaceProperties;
typedef struct RpWorld;
typedef struct _xEntOrbitData;
typedef struct xCutsceneBreak;
typedef struct RxNodeDefinition;
typedef struct RpGeometry;
typedef struct _tagxPad;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct RxHeap;
typedef struct p2LinkAsset;
typedef struct RwFrame;
typedef struct zScene;
typedef struct RxCluster;
typedef struct RpMorphTarget;
typedef struct xAnimActiveEffect;
typedef struct _xEntDrive;
typedef struct rxHeapBlockHeader;
typedef struct p2EntAsset;
typedef struct xMemPool;
typedef struct _tagxCamFollow;
typedef struct xCoef3;
typedef struct RpSector;
typedef struct RpMaterialList;
typedef enum RxClusterValidityReq;
typedef struct _zPortal;
typedef struct _zCutsceneMgr;
typedef struct zPlayerStatic;
typedef struct iShadowCache;
typedef struct RwSphere;
typedef struct p2EntMotionSplineData;
typedef struct RpMaterial;
typedef struct zCutsceneZbuffer;
typedef struct RwLLLink;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct _tagxCamPathAsset;
typedef enum RwTextureAddressMode;
typedef struct _xEntPenData;
typedef struct RxPipelineNode;
typedef struct _zPlatform;
typedef struct _xEntSplineData;
typedef struct RpLight;
typedef struct _xSphere;
typedef struct p2EntMotionMPData;
typedef struct _xBound;
typedef struct RpTriangle;
typedef struct RxPipelineNodeParam;
typedef struct RpPolygon;
typedef struct tag_xFile;
typedef struct iEnv;
typedef struct zCutsceneZbufferHack;
typedef struct sceCdlFILE;
typedef struct _tagxCamShoulder;
typedef struct _xCylinder;
typedef struct p2EntHangableAsset;
typedef struct _xEntMPData;
typedef struct tag_iFile;
typedef struct xCoef;
typedef struct _xEntMotion;
typedef struct _tagxCamFollowAsset;
typedef struct RwRGBAReal;
typedef struct _xBox;
typedef struct _xMovePoint;
typedef struct p2EntMotionMechData;
typedef struct _xEntCollis;
typedef struct xCamAsset;
typedef enum RwCameraProjection;
typedef enum _tagCamType;
typedef struct RwV2d;
typedef struct RwObjectHasFrame;
typedef enum _tagPadState;
typedef struct zCutsceneMgrAsset;
typedef struct iFogParams;
typedef struct zPlayerGlobals;
typedef struct _tagiPad;
typedef enum RwTextureFilterMode;
typedef struct _tagxCamStatic;
typedef struct p2BaseAsset;
typedef struct RwObject;
typedef struct RpInterpolator;
typedef struct _tagxCamFrame;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*);
typedef void(*type_1)(RwResEntry*);
typedef void(*type_3)(RxPipelineNode*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_7)(RwCamera*);
typedef uint32(*type_10)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_12)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_14)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwCamera*(*type_15)(RwCamera*);
typedef RpClump*(*type_22)(RpClump*, void*);
typedef int32(*type_28)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpWorldSector*(*type_29)(RpWorldSector*);
typedef xBase*(*type_34)(uint32);
typedef int8*(*type_37)(xBase*);
typedef int8*(*type_41)(uint32);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef uint32(*type_43)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_46)(xMemPool*, void*);
typedef void(*type_51)(_zEntButton*, _xScene*, float32);
typedef int32(*type_56)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_58)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_60)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_64)(RxNodeDefinition*);
typedef void(*type_65)(int32);
typedef void(*type_67)(_xEnt*, _xScene*, float32);
typedef void(*type_68)(RxNodeDefinition*);
typedef void(*type_70)(_zEntButton*, _xScene*, float32, _xEntFrame*);
typedef void(*type_76)(_xEnt*);
typedef int32(*type_82)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_84)(_xEnt*);
typedef void(*type_89)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_94)(RwObjectHasFrame*);
typedef void(*type_102)(_xEnt*, _xVec3*);

typedef _xVec4 type_2[8];
typedef RwTexCoords* type_4[8];
typedef float32 type_5[15];
typedef _xCollis type_8[18];
typedef float32 type_9[15];
typedef float32 type_11[4];
typedef uint32 type_13[15];
typedef float32 type_16[4];
typedef uint8 type_17[8];
typedef uint8 type_18[2];
typedef float32 type_19[4];
typedef uint8 type_20[8];
typedef uint8 type_21[8];
typedef uint8 type_23[2];
typedef uint8 type_24[22];
typedef uint8 type_25[8];
typedef uint8 type_26[22];
typedef uint32 type_27[2];
typedef uint8 type_30[3];
typedef uint8 type_31[3];
typedef int8 type_32[16];
typedef iModelTag type_33[4];
typedef _xVec3 type_35[2];
typedef int8 type_36[32];
typedef uint8 type_38[3];
typedef int8 type_39[32];
typedef _xQuat type_40[2];
typedef int8 type_44[128];
typedef int8 type_45[128][6];
typedef _xVec3 type_47[4];
typedef float32 type_48[4];
typedef float32 type_49[4];
typedef float32 type_50[4];
typedef int8 type_52[32];
typedef float32 type_53[4];
typedef uint8 type_54[3];
typedef float32 type_55[4];
typedef float32 type_57[4];
typedef uint16 type_59[3];
typedef float32 type_61[3];
typedef uint16 type_62[3];
typedef RwFrustumPlane type_63[6];
typedef float32 type_66[3];
typedef RwV3d type_69[8];
typedef zCutsceneZbuffer type_71[4];
typedef int8 type_72[16];
typedef zGlobalGameStats type_73[30];
typedef uint8 type_74[8];
typedef zGlobalGameStats type_75[13];
typedef _zEnt* type_77[10];
typedef int8 type_78[128];
typedef uint32 type_79[1];
typedef float32 type_80[4];
typedef zGlobalGameStats type_81[4];
typedef int32 type_83[2];
typedef uint32 type_85[2];
typedef int32 type_86[2];
typedef uint32 type_87[2];
typedef uint32 type_88[43];
typedef uint32 type_90[2];
typedef xBase* type_91[43];
typedef float32 type_92[2];
typedef RpLight* type_93[2];
typedef RwFrame* type_95[2];
typedef RxCluster type_96[1];
typedef int8 type_97[16];
typedef RwTexCoords* type_98[8];
typedef int8 type_99[16];
typedef uint32 type_100[4];
typedef uint32 type_101[2];

struct xSerial
{
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _zEntButton : _zEnt
{
	zEntButtonAsset* basset;
	_xEntMotion motion;
	uint32 state;
	float32 speed;
	uint32 oldState;
	int32 oldMotState;
	uint32 counter;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct rxReq
{
};

struct xFFX
{
};

struct _iCollis
{
	int32 unknown;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct zEntButtonAsset
{
	uint32 actMethod;
	int32 initButtonState;
	int32 isReset;
	int32 isSpringBB;
	uint8 buttonFlags;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct p2EntMotionOrbitData
{
	_xVec3 center;
	float32 w;
	float32 h;
	float32 period;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _xEntOrbitData
{
	_xVec3 orig;
	_xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct p2EntMotionSplineData
{
	int32 unknown;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct _xEntPenData
{
	_xVec3 top;
	float32 w;
	_xMat4x3 omat;
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

struct _xEntSplineData
{
	int32 unknown;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct p2EntMotionMPData
{
	uint32 flags;
	uint32 mp_id;
	float32 speed;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct xCoef
{
	float32 a[4];
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _xMovePoint
{
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct _tagiPad
{
	int32 port;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RwLinkList
{
	RwLLLink link;
};

zGlobals globals;
int32(*zEntButtonEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntButton_Move)(_zEntButton*, _xScene*, float32, _xEntFrame*);
void(*zEntButton_Update)(_zEntButton*, _xScene*, float32);

int32 zEntButtonEventCB(xBase* to, uint32 toEvent, float32* toParam);
uint32 zEntButton_CheckState(_zEntButton* ent);
uint32 zEntButton_ButtBounce(_zEntButton* ent);
uint32 zEntButton_Stand(_zEntButton* ent);
uint32 zEntButton_Headbutt(_zEntButton* ent);
void zEntButton_Update(_zEntButton* ent, _xScene* sc, float32 dt);
void zEntButton_Reset(_zEntButton* ent, _xScene* sc);
void zEntButton_Load(_zEntButton* ent, xSerial* s);
void zEntButton_Save(_zEntButton* ent, xSerial* s);
void zEntButton_Setup(_zEntButton* ent, _xScene* sc);
void zEntButton_Move(_zEntButton* ent, _xScene* s, float32 dt, _xEntFrame* frame);
void zEntButton_Init(_zEntButton* ent, p2EntAsset* asset);
void zEntButton_Init(void* ent, void* asset);

// zEntButtonEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a38a0
int32 zEntButtonEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	_zEntButton* s;
	// Line 295, Address: 0x1a38a0, Func Offset: 0
	// Line 304, Address: 0x1a38b0, Func Offset: 0x10
	// Line 308, Address: 0x1a3948, Func Offset: 0xa8
	// Line 309, Address: 0x1a3954, Func Offset: 0xb4
	// Line 310, Address: 0x1a395c, Func Offset: 0xbc
	// Line 315, Address: 0x1a3964, Func Offset: 0xc4
	// Line 316, Address: 0x1a3970, Func Offset: 0xd0
	// Line 317, Address: 0x1a3978, Func Offset: 0xd8
	// Line 320, Address: 0x1a3980, Func Offset: 0xe0
	// Line 321, Address: 0x1a39f8, Func Offset: 0x158
	// Line 324, Address: 0x1a3a00, Func Offset: 0x160
	// Line 325, Address: 0x1a3a10, Func Offset: 0x170
	// Line 328, Address: 0x1a3a18, Func Offset: 0x178
	// Line 329, Address: 0x1a3a24, Func Offset: 0x184
	// Line 330, Address: 0x1a3a2c, Func Offset: 0x18c
	// Line 333, Address: 0x1a3a34, Func Offset: 0x194
	// Line 334, Address: 0x1a3a40, Func Offset: 0x1a0
	// Line 336, Address: 0x1a3a54, Func Offset: 0x1b4
	// Line 337, Address: 0x1a3a5c, Func Offset: 0x1bc
	// Line 347, Address: 0x1a3a64, Func Offset: 0x1c4
	// Line 357, Address: 0x1a3a74, Func Offset: 0x1d4
	// Line 356, Address: 0x1a3a80, Func Offset: 0x1e0
	// Line 357, Address: 0x1a3a84, Func Offset: 0x1e4
	// Func End, Address: 0x1a3a8c, Func Offset: 0x1ec
}

// zEntButton_CheckState__FP11_zEntButton
// Start address: 0x1a3a90
uint32 zEntButton_CheckState(_zEntButton* ent)
{
	// Line 280, Address: 0x1a3a90, Func Offset: 0
	// Func End, Address: 0x1a3a98, Func Offset: 0x8
}

// zEntButton_ButtBounce__FP11_zEntButton
// Start address: 0x1a3aa0
uint32 zEntButton_ButtBounce(_zEntButton* ent)
{
	// Line 263, Address: 0x1a3aa0, Func Offset: 0
	// Line 266, Address: 0x1a3ab4, Func Offset: 0x14
	// Line 275, Address: 0x1a3ac4, Func Offset: 0x24
	// Func End, Address: 0x1a3acc, Func Offset: 0x2c
}

// zEntButton_Stand__FP11_zEntButton
// Start address: 0x1a3ad0
uint32 zEntButton_Stand(_zEntButton* ent)
{
	// Line 256, Address: 0x1a3ad0, Func Offset: 0
	// Line 259, Address: 0x1a3adc, Func Offset: 0xc
	// Func End, Address: 0x1a3ae4, Func Offset: 0x14
}

// zEntButton_Headbutt__FP11_zEntButton
// Start address: 0x1a3af0
uint32 zEntButton_Headbutt(_zEntButton* ent)
{
	// Line 248, Address: 0x1a3af0, Func Offset: 0
	// Line 251, Address: 0x1a3b08, Func Offset: 0x18
	// Func End, Address: 0x1a3b10, Func Offset: 0x20
}

// zEntButton_Update__FP11_zEntButtonP7_xScenef
// Start address: 0x1a3b10
void zEntButton_Update(_zEntButton* ent, _xScene* sc, float32 dt)
{
	// Line 154, Address: 0x1a3b10, Func Offset: 0
	// Line 156, Address: 0x1a3b1c, Func Offset: 0xc
	// Line 158, Address: 0x1a3b24, Func Offset: 0x14
	// Line 161, Address: 0x1a3b34, Func Offset: 0x24
	// Line 164, Address: 0x1a3b54, Func Offset: 0x44
	// Line 166, Address: 0x1a3b64, Func Offset: 0x54
	// Line 169, Address: 0x1a3b6c, Func Offset: 0x5c
	// Line 172, Address: 0x1a3b7c, Func Offset: 0x6c
	// Line 174, Address: 0x1a3b84, Func Offset: 0x74
	// Line 185, Address: 0x1a3b8c, Func Offset: 0x7c
	// Line 187, Address: 0x1a3b94, Func Offset: 0x84
	// Line 190, Address: 0x1a3ba4, Func Offset: 0x94
	// Line 193, Address: 0x1a3bd4, Func Offset: 0xc4
	// Line 194, Address: 0x1a3bdc, Func Offset: 0xcc
	// Line 198, Address: 0x1a3be4, Func Offset: 0xd4
	// Line 199, Address: 0x1a3bec, Func Offset: 0xdc
	// Line 201, Address: 0x1a3bf4, Func Offset: 0xe4
	// Line 202, Address: 0x1a3bfc, Func Offset: 0xec
	// Line 204, Address: 0x1a3c04, Func Offset: 0xf4
	// Line 205, Address: 0x1a3c10, Func Offset: 0x100
	// Line 211, Address: 0x1a3c1c, Func Offset: 0x10c
	// Line 215, Address: 0x1a3c24, Func Offset: 0x114
	// Line 216, Address: 0x1a3c34, Func Offset: 0x124
	// Line 219, Address: 0x1a3c40, Func Offset: 0x130
	// Line 221, Address: 0x1a3c50, Func Offset: 0x140
	// Line 224, Address: 0x1a3c5c, Func Offset: 0x14c
	// Func End, Address: 0x1a3c6c, Func Offset: 0x15c
}

// zEntButton_Reset__FP11_zEntButtonP7_xScene
// Start address: 0x1a3c70
void zEntButton_Reset(_zEntButton* ent, _xScene* sc)
{
	// Line 133, Address: 0x1a3c70, Func Offset: 0
	// Line 135, Address: 0x1a3c84, Func Offset: 0x14
	// Line 136, Address: 0x1a3c8c, Func Offset: 0x1c
	// Line 138, Address: 0x1a3c98, Func Offset: 0x28
	// Line 139, Address: 0x1a3ca4, Func Offset: 0x34
	// Line 141, Address: 0x1a3cb0, Func Offset: 0x40
	// Line 142, Address: 0x1a3cc4, Func Offset: 0x54
	// Line 144, Address: 0x1a3cd0, Func Offset: 0x60
	// Line 149, Address: 0x1a3cd4, Func Offset: 0x64
	// Line 150, Address: 0x1a3cd8, Func Offset: 0x68
	// Line 144, Address: 0x1a3cdc, Func Offset: 0x6c
	// Line 146, Address: 0x1a3ce4, Func Offset: 0x74
	// Line 147, Address: 0x1a3ce8, Func Offset: 0x78
	// Line 149, Address: 0x1a3cf4, Func Offset: 0x84
	// Line 150, Address: 0x1a3cf8, Func Offset: 0x88
	// Line 151, Address: 0x1a3cfc, Func Offset: 0x8c
	// Func End, Address: 0x1a3d10, Func Offset: 0xa0
}

// zEntButton_Load__FP11_zEntButtonP7xSerial
// Start address: 0x1a3d10
void zEntButton_Load(_zEntButton* ent, xSerial* s)
{
	// Line 126, Address: 0x1a3d10, Func Offset: 0
	// Func End, Address: 0x1a3d18, Func Offset: 0x8
}

// zEntButton_Save__FP11_zEntButtonP7xSerial
// Start address: 0x1a3d20
void zEntButton_Save(_zEntButton* ent, xSerial* s)
{
	// Line 107, Address: 0x1a3d20, Func Offset: 0
	// Func End, Address: 0x1a3d28, Func Offset: 0x8
}

// zEntButton_Setup__FP11_zEntButtonP7_xScene
// Start address: 0x1a3d30
void zEntButton_Setup(_zEntButton* ent, _xScene* sc)
{
	// Line 93, Address: 0x1a3d30, Func Offset: 0
	// Func End, Address: 0x1a3d38, Func Offset: 0x8
}

// zEntButton_Move__FP11_zEntButtonP7_xScenefP10_xEntFrame
// Start address: 0x1a3d40
void zEntButton_Move(_zEntButton* ent, _xScene* s, float32 dt, _xEntFrame* frame)
{
	// Line 88, Address: 0x1a3d40, Func Offset: 0
	// Func End, Address: 0x1a3d48, Func Offset: 0x8
}

// zEntButton_Init__FP11_zEntButtonP10p2EntAsset
// Start address: 0x1a3d50
void zEntButton_Init(_zEntButton* ent, p2EntAsset* asset)
{
	p2EntMotionAsset* emasset;
	zEntButtonAsset* passet;
	// Line 34, Address: 0x1a3d50, Func Offset: 0
	// Line 36, Address: 0x1a3d60, Func Offset: 0x10
	// Line 38, Address: 0x1a3d74, Func Offset: 0x24
	// Line 44, Address: 0x1a3d78, Func Offset: 0x28
	// Line 46, Address: 0x1a3d7c, Func Offset: 0x2c
	// Line 39, Address: 0x1a3d80, Func Offset: 0x30
	// Line 50, Address: 0x1a3d84, Func Offset: 0x34
	// Line 51, Address: 0x1a3d8c, Func Offset: 0x3c
	// Line 46, Address: 0x1a3d94, Func Offset: 0x44
	// Line 47, Address: 0x1a3d9c, Func Offset: 0x4c
	// Line 52, Address: 0x1a3da0, Func Offset: 0x50
	// Line 47, Address: 0x1a3da8, Func Offset: 0x58
	// Line 48, Address: 0x1a3db0, Func Offset: 0x60
	// Line 50, Address: 0x1a3dbc, Func Offset: 0x6c
	// Line 51, Address: 0x1a3dc0, Func Offset: 0x70
	// Line 52, Address: 0x1a3dc4, Func Offset: 0x74
	// Line 57, Address: 0x1a3dc8, Func Offset: 0x78
	// Line 58, Address: 0x1a3dd4, Func Offset: 0x84
	// Line 60, Address: 0x1a3ddc, Func Offset: 0x8c
	// Line 66, Address: 0x1a3de0, Func Offset: 0x90
	// Line 68, Address: 0x1a3dec, Func Offset: 0x9c
	// Line 69, Address: 0x1a3df0, Func Offset: 0xa0
	// Line 71, Address: 0x1a3df4, Func Offset: 0xa4
	// Line 74, Address: 0x1a3df8, Func Offset: 0xa8
	// Line 69, Address: 0x1a3dfc, Func Offset: 0xac
	// Line 74, Address: 0x1a3e00, Func Offset: 0xb0
	// Line 76, Address: 0x1a3e08, Func Offset: 0xb8
	// Line 77, Address: 0x1a3e18, Func Offset: 0xc8
	// Line 80, Address: 0x1a3e24, Func Offset: 0xd4
	// Line 82, Address: 0x1a3e2c, Func Offset: 0xdc
	// Func End, Address: 0x1a3e40, Func Offset: 0xf0
}

// zEntButton_Init__FPvPv
// Start address: 0x1a3e40
void zEntButton_Init(void* ent, void* asset)
{
	// Line 30, Address: 0x1a3e40, Func Offset: 0
	// Func End, Address: 0x1a3e48, Func Offset: 0x8
}

