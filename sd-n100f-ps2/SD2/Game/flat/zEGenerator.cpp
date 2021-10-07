typedef struct RwCamera;
typedef struct RxClusterDefinition;
typedef struct RwRaster;
typedef struct RwV3d;
typedef struct _xEntMPData;
typedef struct RwResEntry;
typedef struct xModelInstance;
typedef struct zEGenAsset;
typedef struct xAnimTransitionList;
typedef struct _tagxCamStaticFollow;
typedef struct xAnimFile;
typedef struct xSurface;
typedef struct xCutsceneData;
typedef struct _xScene;
typedef enum RxClusterValid;
typedef struct _xEntMotion;
typedef struct RxPipelineCluster;
typedef struct zShaggy1Globals;
typedef struct RpVertexNormal;
typedef struct xCutsceneTime;
typedef struct xCoef;
typedef struct p2EntMotionAsset;
typedef struct xBase;
typedef struct iModelTag;
typedef struct RxPipelineRequiresCluster;
typedef struct _zEnt;
typedef struct _xMat4x3;
typedef struct xModelPool;
typedef struct _tagxCam;
typedef struct RwTexCoords;
typedef struct rxReq;
typedef struct xFFX;
typedef struct _iCollis;
typedef struct p2EntMotionERData;
typedef struct _tagxRumble;
typedef struct p2LinkAsset;
typedef enum RwFogType;
typedef struct p2PlatformOrbitData;
typedef struct xAnimTransition;
typedef struct _xMovePoint;
typedef struct RwRGBA;
typedef struct RwTexDictionary;
typedef struct zEGenerator;
typedef struct zCheckPoint;
typedef struct xQCData;
typedef struct xAnimPlay;
typedef struct p2EntMotionPenData;
typedef struct _xEnt;
typedef struct xSpline3;
typedef struct _xEnv;
typedef struct p2PlatformBreakawayData;
typedef struct RpClump;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimSingle;
typedef struct RpAtomic;
typedef struct _xQuat;
typedef struct RxOutputSpec;
typedef struct _xEntShadow;
typedef struct _xVec3;
typedef enum RxClusterForcePresent;
typedef enum RpWorldRenderOrder;
typedef struct zGlobalGameStats;
typedef struct xAnimState;
typedef struct xSerial;
typedef struct _xBBox;
typedef struct RwFrustumPlane;
typedef struct xCoef3;
typedef struct _zEntHangable;
typedef struct zAssetPickupTable;
typedef struct RxClusterRef;
typedef struct _tagxCamPath;
typedef enum RxNodeDefEditable;
typedef struct p2PlatformSplineData;
typedef struct _tagp2CamStaticAsset;
typedef struct RwBBox;
typedef struct _tagLightning;
typedef struct _xVec4;
typedef struct xCutscene;
typedef struct RwMatrixTag;
typedef struct RxIoSpec;
typedef struct RpCollSector;
typedef struct xCutsceneInfo;
typedef struct _xEntFrame;
typedef struct rxHeapFreeBlock;
typedef struct zJumpParam;
typedef struct RwTexture;
typedef struct RpMeshHeader;
typedef struct RpWorldSector;
typedef struct _xRot;
typedef struct p2EntAsset;
typedef struct p2PlatformSpringboardData;
typedef struct RxPipeline;
typedef struct xAnimEffect;
typedef struct RxNodeMethods;
typedef struct _xCollis;
typedef struct p2EntMotionOrbitData;
typedef enum _tagRumbleType;
typedef struct zGlobals;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct p2PlatformMPData;
typedef struct zPortalAsset;
typedef struct xAnimTable;
typedef struct RwSurfaceProperties;
typedef struct RpWorld;
typedef struct xCutsceneBreak;
typedef struct RxNodeDefinition;
typedef struct RpGeometry;
typedef struct _tagxPad;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct RxHeap;
typedef enum _tagLightningType;
typedef struct _xEntERData;
typedef struct RwFrame;
typedef struct zScene;
typedef struct RxCluster;
typedef struct RpMorphTarget;
typedef struct xAnimActiveEffect;
typedef struct _xEntDrive;
typedef struct rxHeapBlockHeader;
typedef struct xMemPool;
typedef struct _tagxCamFollow;
typedef struct RpSector;
typedef struct RpMaterialList;
typedef struct p2PlatformMechData;
typedef enum RxClusterValidityReq;
typedef struct _zPortal;
typedef struct _zCutsceneMgr;
typedef struct zPlayerStatic;
typedef struct p2PlatformTeeterData;
typedef struct iShadowCache;
typedef struct RwSphere;
typedef struct p2EntMotionSplineData;
typedef struct RpMaterial;
typedef struct zCutsceneZbuffer;
typedef struct _tagLightningLine;
typedef struct RwLLLink;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct _xEntMechData;
typedef struct _tagxCamPathAsset;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNode;
typedef struct _zPlatform;
typedef struct p2PlatformPenData;
typedef struct RpLight;
typedef struct _xSphere;
typedef struct p2EntMotionMPData;
typedef struct _xBound;
typedef struct RpTriangle;
typedef struct RxPipelineNodeParam;
typedef struct RpPolygon;
typedef struct _tagLightningRot;
typedef struct p2PlatformAsset;
typedef struct tag_xFile;
typedef struct iEnv;
typedef struct zCutsceneZbufferHack;
typedef struct sceCdlFILE;
typedef struct _tagxCamShoulder;
typedef struct _xCylinder;
typedef struct _xEntOrbitData;
typedef struct p2PlatformConvBeltData;
typedef struct p2EntHangableAsset;
typedef struct tag_iFile;
typedef struct _tagxCamFollowAsset;
typedef struct RwRGBAReal;
typedef struct _xBox;
typedef struct p2EntMotionMechData;
typedef struct xCamAsset;
typedef struct _xEntCollis;
typedef struct p2MovePointAsset;
typedef enum RwCameraProjection;
typedef enum _tagCamType;
typedef struct RwV2d;
typedef struct RwObjectHasFrame;
typedef struct _tagLightningAdd;
typedef struct p2PlatformFallingData;
typedef enum _tagPadState;
typedef struct zCutsceneMgrAsset;
typedef struct iFogParams;
typedef struct zPlayerGlobals;
typedef struct _tagiPad;
typedef enum RwTextureFilterMode;
typedef struct _xEntPenData;
typedef struct _tagxCamStatic;
typedef struct p2BaseAsset;
typedef struct RwObject;
typedef struct _xEntSplineData;
typedef struct RpInterpolator;
typedef struct p2PlatformFRData;
typedef struct p2PlatformERData;
typedef struct _tagxCamFrame;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*);
typedef void(*type_1)(RwResEntry*);
typedef void(*type_3)(RxPipelineNode*);
typedef int32(*type_4)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_9)(RwCamera*);
typedef uint32(*type_12)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_14)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_16)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwCamera*(*type_17)(RwCamera*);
typedef RpClump*(*type_25)(RpClump*, void*);
typedef RpWorldSector*(*type_33)(RpWorldSector*);
typedef xBase*(*type_40)(uint32);
typedef int8*(*type_43)(xBase*);
typedef int8*(*type_47)(uint32);
typedef RpAtomic*(*type_48)(RpAtomic*);
typedef uint32(*type_49)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_52)(xMemPool*, void*);
typedef int32(*type_61)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_63)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_65)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_66)(zEGenerator*, _xScene*, float32);
typedef int32(*type_71)(RxNodeDefinition*);
typedef void(*type_72)(int32);
typedef void(*type_74)(zEGenerator*);
typedef void(*type_75)(_xEnt*, _xScene*, float32);
typedef void(*type_76)(RxNodeDefinition*);
typedef void(*type_83)(_xEnt*);
typedef int32(*type_88)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_90)(_xEnt*);
typedef void(*type_95)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_100)(RwObjectHasFrame*);
typedef void(*type_109)(_xEnt*, _xVec3*);

typedef _xVec4 type_2[8];
typedef RwTexCoords* type_5[8];
typedef float32 type_6[15];
typedef float32 type_7[4];
typedef _xCollis type_10[18];
typedef float32 type_11[15];
typedef float32 type_13[4];
typedef uint32 type_15[15];
typedef float32 type_18[4];
typedef uint8 type_19[8];
typedef uint8 type_20[2];
typedef float32 type_21[4];
typedef uint8 type_22[8];
typedef uint8 type_23[8];
typedef uint8 type_24[22];
typedef uint8 type_26[2];
typedef uint8 type_27[8];
typedef uint8 type_28[22];
typedef _tagLightning* type_29[2];
typedef _xVec3 type_30[16];
typedef _xVec3 type_31[16];
typedef uint32 type_32[2];
typedef float32 type_34[3];
typedef uint8 type_35[3];
typedef uint8 type_36[3];
typedef uint32 type_37[3];
typedef int8 type_38[16];
typedef iModelTag type_39[4];
typedef _xVec3 type_41[2];
typedef int8 type_42[32];
typedef uint8 type_44[3];
typedef int8 type_45[32];
typedef _xQuat type_46[2];
typedef int8 type_50[128];
typedef int8 type_51[128][6];
typedef _xVec3 type_53[4];
typedef float32 type_54[4];
typedef float32 type_55[4];
typedef float32 type_56[4];
typedef int8 type_57[32];
typedef float32 type_58[4];
typedef uint8 type_59[3];
typedef float32 type_60[4];
typedef float32 type_62[4];
typedef uint16 type_64[3];
typedef float32 type_67[3];
typedef uint16 type_68[3];
typedef RwFrustumPlane type_69[6];
typedef float32 type_70[16];
typedef float32 type_73[3];
typedef RwV3d type_77[8];
typedef zCutsceneZbuffer type_78[4];
typedef int8 type_79[16];
typedef zGlobalGameStats type_80[30];
typedef uint8 type_81[8];
typedef zGlobalGameStats type_82[13];
typedef _zEnt* type_84[10];
typedef int8 type_85[128];
typedef uint32 type_86[1];
typedef zGlobalGameStats type_87[4];
typedef int32 type_89[2];
typedef uint32 type_91[2];
typedef int32 type_92[2];
typedef uint32 type_93[2];
typedef uint32 type_94[43];
typedef uint32 type_96[2];
typedef xBase* type_97[43];
typedef float32 type_98[2];
typedef RpLight* type_99[2];
typedef RwFrame* type_101[2];
typedef uint8 type_102[2];
typedef RxCluster type_103[1];
typedef int8 type_104[16];
typedef RwTexCoords* type_105[8];
typedef int8 type_106[16];
typedef uint32 type_107[4];
typedef uint32 type_108[2];

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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct zEGenAsset : p2EntAsset
{
	_xVec3 src_dpos;
	uint8 damage_type;
	uint8 flags;
	float32 ontime;
	uint32 onAnimID;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct xCoef
{
	float32 a[4];
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct p2PlatformOrbitData
{
	int32 nodata;
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

struct zEGenerator : _zEnt
{
	uint16 flags;
	uint16 num_dsts;
	float32 tmr;
	xAnimFile* afile;
	_xVec3 src_pos;
	_xVec3 dst_pos;
	xBase* dst;
	_tagLightning* lfx[2];
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct p2PlatformBreakawayData
{
	float32 ba_delay;
	uint32 bustModelID;
	float32 reset_delay;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xSerial
{
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct p2PlatformSplineData
{
	int32 nodata;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct _tagLightning
{
	_tagLightningType type;
	uint32 flags;
	_xVec3 base_point[16];
	_xVec3 point[16];
	int32 total_points;
	float32 arc_height;
	float32 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
	};
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 alpha_pad;
	float32 rand_radius;
	float32 time_left;
	float32 time_total;
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

struct p2PlatformSpringboardData
{
	float32 jmph[3];
	uint32 animID[3];
	_xVec3 jmpdir;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct p2PlatformMPData
{
	int32 nodata;
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

enum _tagLightningType
{
	eLT_Line,
	eLT_Rotating,
	eLT_Total
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

struct p2PlatformMechData
{
	int32 nodata;
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

struct p2PlatformTeeterData
{
	float32 itilt;
	float32 maxtilt;
	float32 invmass;
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

struct _tagLightningLine
{
	float32 unused;
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

struct _zPlatform : _zEnt
{
	p2PlatformAsset* passet;
	_xEntMotion motion;
	uint16 state;
	uint16 plat_flags;
	float32 tmr;
	int32 ctr;
	_xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int32 moving;
};

struct p2PlatformPenData
{
	int32 nodata;
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

struct _tagLightningRot
{
	float32 deg[16];
	float32 degrees;
	float32 height;
};

struct p2PlatformAsset
{
	uint8 type;
	uint8 pad;
	uint16 flags;
	union
	{
		p2PlatformERData er;
		p2PlatformOrbitData orb;
		p2PlatformSplineData spl;
		p2PlatformMPData mp;
		p2PlatformMechData mech;
		p2PlatformPenData pen;
		p2PlatformConvBeltData cb;
		p2PlatformFallingData fall;
		p2PlatformFRData fr;
		p2PlatformBreakawayData ba;
		p2PlatformSpringboardData sb;
		p2PlatformTeeterData teet;
	};
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

struct _xEntOrbitData
{
	_xVec3 orig;
	_xVec3 c;
	float32 a;
	float32 b;
	float32 p;
	float32 w;
};

struct p2PlatformConvBeltData
{
	float32 speed;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct _tagLightningAdd
{
	_tagLightningType type;
	float32 setup_degrees;
	float32 move_degrees;
	float32 rot_radius;
	_xVec3* start;
	_xVec3* end;
	int32 total_points;
	float32 time;
	float32 arc_height;
	float32 thickness;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 alpha_pad;
	float32 rand_radius;
	uint32 flags;
};

struct p2PlatformFallingData
{
	float32 speed;
	uint32 bustModelID;
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

struct _xEntPenData
{
	_xVec3 top;
	float32 w;
	_xMat4x3 omat;
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

struct _xEntSplineData
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

struct p2PlatformFRData
{
	float32 fspeed;
	float32 rspeed;
	float32 ret_delay;
	float32 post_ret_delay;
};

struct p2PlatformERData
{
	int32 nodata;
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
void(*zEGenerator_Render)(zEGenerator*);
int32(*zEGeneratorEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEGenerator_Update)(zEGenerator*, _xScene*, float32);

int32 zEGeneratorEventCB(xBase* to, uint32 toEvent);
void zEGenerator_TurnOff(zEGenerator* egen);
void zEGenerator_TurnOn(zEGenerator* egen);
void zEGenerator_Render(zEGenerator* egen);
void zEGenerator_Update(zEGenerator* egen, _xScene* sc, float32 dt);
void zEGenerator_Reset(zEGenerator* egen);
void zEGenerator_Load(zEGenerator* ent, xSerial* s);
void zEGenerator_Save(zEGenerator* ent, xSerial* s);
void zEGenerator_Setup(zEGenerator* egen);
void zEGenerator_Init(zEGenerator* egen, p2EntAsset* asset);
void zEGenerator_Init(void* egen, void* asset);

// zEGeneratorEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1d8a30
int32 zEGeneratorEventCB(xBase* to, uint32 toEvent)
{
	zEGenerator* egen;
	// Line 392, Address: 0x1d8a30, Func Offset: 0
	// Line 400, Address: 0x1d8a40, Func Offset: 0x10
	// Line 403, Address: 0x1d8aa8, Func Offset: 0x78
	// Line 404, Address: 0x1d8ab0, Func Offset: 0x80
	// Line 407, Address: 0x1d8ab8, Func Offset: 0x88
	// Line 408, Address: 0x1d8b08, Func Offset: 0xd8
	// Line 411, Address: 0x1d8b10, Func Offset: 0xe0
	// Line 412, Address: 0x1d8b38, Func Offset: 0x108
	// Line 415, Address: 0x1d8b40, Func Offset: 0x110
	// Line 416, Address: 0x1d8b94, Func Offset: 0x164
	// Line 419, Address: 0x1d8b9c, Func Offset: 0x16c
	// Line 420, Address: 0x1d8ba4, Func Offset: 0x174
	// Line 423, Address: 0x1d8bac, Func Offset: 0x17c
	// Line 424, Address: 0x1d8bb4, Func Offset: 0x184
	// Line 427, Address: 0x1d8bbc, Func Offset: 0x18c
	// Line 429, Address: 0x1d8bc8, Func Offset: 0x198
	// Line 430, Address: 0x1d8bcc, Func Offset: 0x19c
	// Line 433, Address: 0x1d8bd4, Func Offset: 0x1a4
	// Line 435, Address: 0x1d8be0, Func Offset: 0x1b0
	// Line 441, Address: 0x1d8be4, Func Offset: 0x1b4
	// Line 440, Address: 0x1d8bf0, Func Offset: 0x1c0
	// Line 441, Address: 0x1d8bf4, Func Offset: 0x1c4
	// Func End, Address: 0x1d8bfc, Func Offset: 0x1cc
}

// zEGenerator_TurnOff__FP11zEGenerator
// Start address: 0x1d8c00
void zEGenerator_TurnOff(zEGenerator* egen)
{
	int32 i;
	// Line 342, Address: 0x1d8c00, Func Offset: 0
	// Line 343, Address: 0x1d8c10, Func Offset: 0x10
	// Line 345, Address: 0x1d8c1c, Func Offset: 0x1c
	// Line 352, Address: 0x1d8c28, Func Offset: 0x28
	// Line 358, Address: 0x1d8c38, Func Offset: 0x38
	// Line 360, Address: 0x1d8c3c, Func Offset: 0x3c
	// Line 362, Address: 0x1d8c48, Func Offset: 0x48
	// Line 363, Address: 0x1d8c50, Func Offset: 0x50
	// Line 364, Address: 0x1d8c54, Func Offset: 0x54
	// Line 365, Address: 0x1d8c58, Func Offset: 0x58
	// Line 366, Address: 0x1d8c68, Func Offset: 0x68
	// Func End, Address: 0x1d8c7c, Func Offset: 0x7c
}

// zEGenerator_TurnOn__FP11zEGenerator
// Start address: 0x1d8c80
void zEGenerator_TurnOn(zEGenerator* egen)
{
	_tagLightningAdd add;
	int32 i;
	xBase* b;
	p2LinkAsset* link;
	int32 i;
	uint16 imp;
	uint16 itgt;
	zEGenAsset* zasset;
	// Line 216, Address: 0x1d8c80, Func Offset: 0
	// Line 217, Address: 0x1d8cac, Func Offset: 0x2c
	// Line 221, Address: 0x1d8cb8, Func Offset: 0x38
	// Line 219, Address: 0x1d8cbc, Func Offset: 0x3c
	// Line 221, Address: 0x1d8cc0, Func Offset: 0x40
	// Line 228, Address: 0x1d8cc8, Func Offset: 0x48
	// Line 231, Address: 0x1d8cdc, Func Offset: 0x5c
	// Line 234, Address: 0x1d8ce4, Func Offset: 0x64
	// Line 235, Address: 0x1d8d1c, Func Offset: 0x9c
	// Line 236, Address: 0x1d8d28, Func Offset: 0xa8
	// Line 237, Address: 0x1d8d34, Func Offset: 0xb4
	// Line 238, Address: 0x1d8d38, Func Offset: 0xb8
	// Line 236, Address: 0x1d8d40, Func Offset: 0xc0
	// Line 238, Address: 0x1d8d50, Func Offset: 0xd0
	// Line 239, Address: 0x1d8d58, Func Offset: 0xd8
	// Line 241, Address: 0x1d8d60, Func Offset: 0xe0
	// Line 243, Address: 0x1d8d6c, Func Offset: 0xec
	// Line 244, Address: 0x1d8d74, Func Offset: 0xf4
	// Line 245, Address: 0x1d8d84, Func Offset: 0x104
	// Line 246, Address: 0x1d8d8c, Func Offset: 0x10c
	// Line 248, Address: 0x1d8d9c, Func Offset: 0x11c
	// Line 250, Address: 0x1d8dbc, Func Offset: 0x13c
	// Line 251, Address: 0x1d8dc4, Func Offset: 0x144
	// Line 253, Address: 0x1d8dcc, Func Offset: 0x14c
	// Line 255, Address: 0x1d8dec, Func Offset: 0x16c
	// Line 260, Address: 0x1d8df4, Func Offset: 0x174
	// Line 264, Address: 0x1d8dfc, Func Offset: 0x17c
	// Line 270, Address: 0x1d8e10, Func Offset: 0x190
	// Line 272, Address: 0x1d8e18, Func Offset: 0x198
	// Line 274, Address: 0x1d8e24, Func Offset: 0x1a4
	// Line 275, Address: 0x1d8e2c, Func Offset: 0x1ac
	// Line 277, Address: 0x1d8e30, Func Offset: 0x1b0
	// Line 283, Address: 0x1d8e40, Func Offset: 0x1c0
	// Line 285, Address: 0x1d8e50, Func Offset: 0x1d0
	// Line 286, Address: 0x1d8e54, Func Offset: 0x1d4
	// Line 287, Address: 0x1d8e60, Func Offset: 0x1e0
	// Line 288, Address: 0x1d8e68, Func Offset: 0x1e8
	// Line 289, Address: 0x1d8e70, Func Offset: 0x1f0
	// Line 290, Address: 0x1d8e80, Func Offset: 0x200
	// Line 291, Address: 0x1d8e8c, Func Offset: 0x20c
	// Line 292, Address: 0x1d8e94, Func Offset: 0x214
	// Line 293, Address: 0x1d8e9c, Func Offset: 0x21c
	// Line 294, Address: 0x1d8ea8, Func Offset: 0x228
	// Line 296, Address: 0x1d8eb0, Func Offset: 0x230
	// Line 298, Address: 0x1d8f08, Func Offset: 0x288
	// Line 299, Address: 0x1d8f10, Func Offset: 0x290
	// Line 300, Address: 0x1d8f18, Func Offset: 0x298
	// Line 301, Address: 0x1d8f20, Func Offset: 0x2a0
	// Line 302, Address: 0x1d8f24, Func Offset: 0x2a4
	// Line 306, Address: 0x1d8f2c, Func Offset: 0x2ac
	// Line 310, Address: 0x1d8f38, Func Offset: 0x2b8
	// Line 311, Address: 0x1d8f3c, Func Offset: 0x2bc
	// Line 312, Address: 0x1d8f64, Func Offset: 0x2e4
	// Line 313, Address: 0x1d8f8c, Func Offset: 0x30c
	// Line 314, Address: 0x1d8fa0, Func Offset: 0x320
	// Line 315, Address: 0x1d8fac, Func Offset: 0x32c
	// Line 316, Address: 0x1d8fb8, Func Offset: 0x338
	// Line 317, Address: 0x1d8fc4, Func Offset: 0x344
	// Line 318, Address: 0x1d8fd0, Func Offset: 0x350
	// Line 319, Address: 0x1d8fd8, Func Offset: 0x358
	// Line 320, Address: 0x1d8fdc, Func Offset: 0x35c
	// Line 321, Address: 0x1d8fe4, Func Offset: 0x364
	// Line 322, Address: 0x1d8fec, Func Offset: 0x36c
	// Line 324, Address: 0x1d8ff4, Func Offset: 0x374
	// Line 326, Address: 0x1d9044, Func Offset: 0x3c4
	// Line 327, Address: 0x1d9048, Func Offset: 0x3c8
	// Line 328, Address: 0x1d9050, Func Offset: 0x3d0
	// Line 329, Address: 0x1d9058, Func Offset: 0x3d8
	// Line 330, Address: 0x1d905c, Func Offset: 0x3dc
	// Line 333, Address: 0x1d9064, Func Offset: 0x3e4
	// Line 338, Address: 0x1d9074, Func Offset: 0x3f4
	// Func End, Address: 0x1d90a4, Func Offset: 0x424
}

// zEGenerator_Render__FP11zEGenerator
// Start address: 0x1d90b0
void zEGenerator_Render(zEGenerator* egen)
{
	// Line 203, Address: 0x1d90b0, Func Offset: 0
	// Func End, Address: 0x1d90b8, Func Offset: 0x8
}

// zEGenerator_Update__FP11zEGeneratorP7_xScenef
// Start address: 0x1d90c0
void zEGenerator_Update(zEGenerator* egen, _xScene* sc, float32 dt)
{
	// Line 173, Address: 0x1d90c0, Func Offset: 0
	// Line 175, Address: 0x1d90dc, Func Offset: 0x1c
	// Line 178, Address: 0x1d90e4, Func Offset: 0x24
	// Line 180, Address: 0x1d9100, Func Offset: 0x40
	// Line 181, Address: 0x1d9120, Func Offset: 0x60
	// Line 182, Address: 0x1d912c, Func Offset: 0x6c
	// Line 184, Address: 0x1d9134, Func Offset: 0x74
	// Line 185, Address: 0x1d9140, Func Offset: 0x80
	// Line 190, Address: 0x1d9148, Func Offset: 0x88
	// Line 191, Address: 0x1d9164, Func Offset: 0xa4
	// Line 192, Address: 0x1d9168, Func Offset: 0xa8
	// Line 193, Address: 0x1d9178, Func Offset: 0xb8
	// Line 194, Address: 0x1d91d0, Func Offset: 0x110
	// Line 197, Address: 0x1d91dc, Func Offset: 0x11c
	// Func End, Address: 0x1d91f8, Func Offset: 0x138
}

// zEGenerator_Reset__FP11zEGeneratorP7_xScene
// Start address: 0x1d9200
void zEGenerator_Reset(zEGenerator* egen)
{
	zEGenAsset* zasset;
	// Line 149, Address: 0x1d9200, Func Offset: 0
	// Line 151, Address: 0x1d9218, Func Offset: 0x18
	// Line 153, Address: 0x1d9220, Func Offset: 0x20
	// Line 155, Address: 0x1d9224, Func Offset: 0x24
	// Line 157, Address: 0x1d922c, Func Offset: 0x2c
	// Line 158, Address: 0x1d923c, Func Offset: 0x3c
	// Line 159, Address: 0x1d9244, Func Offset: 0x44
	// Line 161, Address: 0x1d924c, Func Offset: 0x4c
	// Line 164, Address: 0x1d9298, Func Offset: 0x98
	// Line 166, Address: 0x1d92a8, Func Offset: 0xa8
	// Line 167, Address: 0x1d92b0, Func Offset: 0xb0
	// Line 169, Address: 0x1d92b4, Func Offset: 0xb4
	// Func End, Address: 0x1d92d0, Func Offset: 0xd0
}

// zEGenerator_Load__FP11zEGeneratorP7xSerial
// Start address: 0x1d92d0
void zEGenerator_Load(zEGenerator* ent, xSerial* s)
{
	// Line 141, Address: 0x1d92d0, Func Offset: 0
	// Func End, Address: 0x1d92d8, Func Offset: 0x8
}

// zEGenerator_Save__FP11zEGeneratorP7xSerial
// Start address: 0x1d92e0
void zEGenerator_Save(zEGenerator* ent, xSerial* s)
{
	// Line 122, Address: 0x1d92e0, Func Offset: 0
	// Func End, Address: 0x1d92e8, Func Offset: 0x8
}

// zEGenerator_Setup__FP11zEGeneratorP7_xScene
// Start address: 0x1d92f0
void zEGenerator_Setup(zEGenerator* egen)
{
	xBase* b;
	p2LinkAsset* la;
	int32 i;
	// Line 91, Address: 0x1d92f0, Func Offset: 0
	// Line 92, Address: 0x1d9308, Func Offset: 0x18
	// Line 94, Address: 0x1d9310, Func Offset: 0x20
	// Line 95, Address: 0x1d9314, Func Offset: 0x24
	// Line 96, Address: 0x1d9320, Func Offset: 0x30
	// Line 97, Address: 0x1d9328, Func Offset: 0x38
	// Line 98, Address: 0x1d9330, Func Offset: 0x40
	// Line 99, Address: 0x1d9348, Func Offset: 0x58
	// Line 100, Address: 0x1d9358, Func Offset: 0x68
	// Line 101, Address: 0x1d9360, Func Offset: 0x70
	// Line 102, Address: 0x1d9374, Func Offset: 0x84
	// Line 107, Address: 0x1d9384, Func Offset: 0x94
	// Line 108, Address: 0x1d9398, Func Offset: 0xa8
	// Func End, Address: 0x1d93b4, Func Offset: 0xc4
}

// zEGenerator_Init__FP11zEGeneratorP10p2EntAsset
// Start address: 0x1d93c0
void zEGenerator_Init(zEGenerator* egen, p2EntAsset* asset)
{
	uint32 size;
	void* buf;
	zEGenAsset* zasset;
	// Line 36, Address: 0x1d93c0, Func Offset: 0
	// Line 42, Address: 0x1d93d0, Func Offset: 0x10
	// Line 46, Address: 0x1d93e4, Func Offset: 0x24
	// Line 47, Address: 0x1d93f0, Func Offset: 0x30
	// Line 49, Address: 0x1d93f8, Func Offset: 0x38
	// Line 57, Address: 0x1d93fc, Func Offset: 0x3c
	// Line 59, Address: 0x1d9408, Func Offset: 0x48
	// Line 58, Address: 0x1d940c, Func Offset: 0x4c
	// Line 59, Address: 0x1d9410, Func Offset: 0x50
	// Line 60, Address: 0x1d9418, Func Offset: 0x58
	// Line 62, Address: 0x1d9424, Func Offset: 0x64
	// Line 65, Address: 0x1d9428, Func Offset: 0x68
	// Line 68, Address: 0x1d9434, Func Offset: 0x74
	// Line 70, Address: 0x1d9440, Func Offset: 0x80
	// Line 71, Address: 0x1d9448, Func Offset: 0x88
	// Line 74, Address: 0x1d9460, Func Offset: 0xa0
	// Line 75, Address: 0x1d9474, Func Offset: 0xb4
	// Line 76, Address: 0x1d94a4, Func Offset: 0xe4
	// Line 77, Address: 0x1d94b8, Func Offset: 0xf8
	// Line 87, Address: 0x1d94d4, Func Offset: 0x114
	// Func End, Address: 0x1d94e8, Func Offset: 0x128
}

// zEGenerator_Init__FPvPv
// Start address: 0x1d94f0
void zEGenerator_Init(void* egen, void* asset)
{
	// Line 32, Address: 0x1d94f0, Func Offset: 0
	// Func End, Address: 0x1d94f8, Func Offset: 0x8
}

