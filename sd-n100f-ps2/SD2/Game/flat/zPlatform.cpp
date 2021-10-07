typedef struct RxClusterDefinition;
typedef struct RwRaster;
typedef struct RwCamera;
typedef struct RwV3d;
typedef struct xBase;
typedef struct RwResEntry;
typedef struct _xEntSplineData;
typedef struct _zParEmitter;
typedef struct xAnimTransitionList;
typedef struct xModelInstance;
typedef struct p2PlatformAsset;
typedef struct xAnimFile;
typedef struct _tagxCamStaticFollow;
typedef struct xSurface;
typedef struct xCutsceneData;
typedef struct _xScene;
typedef enum RxClusterValid;
typedef struct _zPlatform;
typedef struct xParGroup;
typedef struct zParEmitterAsset;
typedef struct RxPipelineCluster;
typedef struct zShaggy1Globals;
typedef struct RpVertexNormal;
typedef struct xCutsceneTime;
typedef struct p2EntMotionAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct iModelTag;
typedef struct _zEnt;
typedef struct _xMat4x3;
typedef struct _xVec3;
typedef struct xModelPool;
typedef struct _tagxCam;
typedef struct RwTexCoords;
typedef struct rxReq;
typedef struct xFFX;
typedef struct _iCollis;
typedef struct p2EntMotionERData;
typedef struct _tagxRumble;
typedef enum RwFogType;
typedef struct p2PlatformOrbitData;
typedef struct xAnimTransition;
typedef struct xParCmdTex;
typedef struct _tagEmitLine;
typedef struct RwRGBA;
typedef struct RwTexDictionary;
typedef struct zCheckPoint;
typedef struct xQCData;
typedef struct xAnimPlay;
typedef struct p2EntMotionPenData;
typedef struct _xEnt;
typedef struct _xEnv;
typedef struct p2PlatformBreakawayData;
typedef struct xFFXShakeState;
typedef struct _xMovePoint;
typedef struct RpClump;
typedef struct xAnimSingle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpAtomic;
typedef struct _xQuat;
typedef struct RxOutputSpec;
typedef struct _xEntShadow;
typedef enum RxClusterForcePresent;
typedef enum RpWorldRenderOrder;
typedef struct zGlobalGameStats;
typedef struct _xEntMPData;
typedef struct xAnimState;
typedef struct _xBBox;
typedef struct RwFrustumPlane;
typedef struct xCoef;
typedef struct _zEntHangable;
typedef struct zAssetPickupTable;
typedef struct _xEntMotion;
typedef struct RxClusterRef;
typedef struct _tagxCamPath;
typedef enum RxNodeDefEditable;
typedef struct p2PlatformSplineData;
typedef struct _tagp2CamStaticAsset;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct xCutscene;
typedef struct xPar;
typedef struct RwMatrixTag;
typedef struct RxIoSpec;
typedef struct RpCollSector;
typedef struct xCutsceneInfo;
typedef struct xSpline3;
typedef struct _xEntFrame;
typedef struct rxHeapFreeBlock;
typedef struct zJumpParam;
typedef struct xParCmdAsset;
typedef struct RwTexture;
typedef struct _tagEmitVolume;
typedef struct RpMeshHeader;
typedef struct RpWorldSector;
typedef struct _xEntDrive;
typedef struct _xRot;
typedef struct p2PlatformSpringboardData;
typedef struct RxPipeline;
typedef struct xAnimEffect;
typedef struct RxNodeMethods;
typedef struct _xCollis;
typedef struct p2EntMotionOrbitData;
typedef struct xCoef3;
typedef enum _tagRumbleType;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobals;
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
typedef struct p2LinkAsset;
typedef struct RwFrame;
typedef struct zScene;
typedef struct RxCluster;
typedef struct RpMorphTarget;
typedef struct xAnimActiveEffect;
typedef struct _tagEmitOffsetPoint;
typedef struct rxHeapBlockHeader;
typedef struct xMemPool;
typedef struct _tagxCamFollow;
typedef struct RpSector;
typedef struct RpMaterialList;
typedef struct p2PlatformMechData;
typedef enum RxClusterValidityReq;
typedef struct _zPortal;
typedef struct xSerial;
typedef struct _zCutsceneMgr;
typedef struct zPlayerStatic;
typedef struct p2PlatformTeeterData;
typedef struct iShadowCache;
typedef struct RwSphere;
typedef struct p2EntMotionSplineData;
typedef struct RpMaterial;
typedef struct zCutsceneZbuffer;
typedef struct RwLLLink;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct p2EntAsset;
typedef struct _xEntERData;
typedef struct _tagxCamPathAsset;
typedef enum RwTextureAddressMode;
typedef struct _zParEmitterCustomSettings;
typedef struct RxPipelineNode;
typedef struct p2PlatformPenData;
typedef struct RpLight;
typedef struct _xSphere;
typedef struct p2MovePointAsset;
typedef struct p2EntMotionMPData;
typedef struct _xBound;
typedef struct RpTriangle;
typedef struct RxPipelineNodeParam;
typedef struct RpPolygon;
typedef struct tag_xFile;
typedef struct _tagEmitCircle;
typedef struct iEnv;
typedef struct _xEntMechData;
typedef struct zCutsceneZbufferHack;
typedef struct sceCdlFILE;
typedef struct _tagxCamShoulder;
typedef struct _xCylinder;
typedef struct p2PlatformConvBeltData;
typedef struct p2EntHangableAsset;
typedef struct tag_iFile;
typedef struct _tagxCamFollowAsset;
typedef struct RwRGBAReal;
typedef struct _xBox;
typedef struct p2EntMotionMechData;
typedef struct _xEntCollis;
typedef struct xCamAsset;
typedef enum RwCameraProjection;
typedef enum _tagCamType;
typedef struct _tagEmitSphere;
typedef struct RwV2d;
typedef struct RwObjectHasFrame;
typedef struct p2PlatformFallingData;
typedef struct _xEntOrbitData;
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
typedef struct _tagEmitRect;
typedef struct p2PlatformFRData;
typedef struct p2PlatformERData;
typedef struct _tagxCamFrame;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct RwLinkList;
typedef struct _xEntPenData;

typedef int32(*type_1)(RxPipelineNode*);
typedef void(*type_2)(RwResEntry*);
typedef void(*type_5)(_xEnt*, _xScene*, float32, void*);
typedef void(*type_7)(RxPipelineNode*);
typedef int32(*type_11)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_12)(RwCamera*);
typedef int32(*type_13)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_16)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_17)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_20)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwCamera*(*type_21)(RwCamera*);
typedef void(*type_22)(void*, xParGroup*);
typedef RpClump*(*type_30)(RpClump*, void*);
typedef RpWorldSector*(*type_37)(RpWorldSector*);
typedef xBase*(*type_45)(uint32);
typedef void(*type_48)(_xEnt*, _xScene*, float32, void*);
typedef int8*(*type_49)(xBase*);
typedef int8*(*type_53)(uint32);
typedef void(*type_54)(_xEnt*, _xVec3*);
typedef RpAtomic*(*type_55)(RpAtomic*);
typedef uint32(*type_56)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_62)(xMemPool*, void*);
typedef void(*type_67)(_xEnt*, _xScene*, float32);
typedef int32(*type_73)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_75)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_77)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_78)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_82)(RxNodeDefinition*);
typedef void(*type_83)(int32);
typedef void(*type_86)(_xEnt*, _xScene*, float32);
typedef void(*type_87)(RxNodeDefinition*);
typedef void(*type_96)(_xEnt*);
typedef int32(*type_101)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_103)(_xEnt*);
typedef void(*type_109)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_114)(RwObjectHasFrame*);
typedef void(*type_122)(_xEnt*, _xVec3*);

typedef uint8 type_0[4];
typedef _xVec4 type_3[8];
typedef uint8 type_4[3];
typedef uint8 type_6[4];
typedef RwTexCoords* type_8[8];
typedef uint8 type_9[3];
typedef float32 type_10[15];
typedef _xCollis type_14[18];
typedef float32 type_15[15];
typedef float32 type_18[4];
typedef uint32 type_19[15];
typedef float32 type_23[4];
typedef uint8 type_24[8];
typedef uint8 type_25[2];
typedef float32 type_26[4];
typedef uint8 type_27[2];
typedef uint8 type_28[8];
typedef uint8 type_29[8];
typedef uint8 type_31[2];
typedef uint8 type_32[22];
typedef float32 type_33[4];
typedef uint8 type_34[8];
typedef uint8 type_35[22];
typedef uint32 type_36[2];
typedef float32 type_38[3];
typedef uint8 type_39[3];
typedef uint8 type_40[4];
typedef uint8 type_41[3];
typedef uint32 type_42[3];
typedef int8 type_43[16];
typedef iModelTag type_44[4];
typedef _xVec3 type_46[2];
typedef int8 type_47[32];
typedef uint8 type_50[3];
typedef int8 type_51[32];
typedef _xQuat type_52[2];
typedef uint8 type_57[2];
typedef int8 type_58[128];
typedef int8 type_59[128][6];
typedef uint8 type_60[2];
typedef uint8 type_61[3];
typedef _xVec3 type_63[4];
typedef float32 type_64[4];
typedef float32 type_65[4];
typedef float32 type_66[4];
typedef int8 type_68[32];
typedef float32 type_69[4];
typedef float32 type_70[4];
typedef uint8 type_71[3];
typedef float32 type_72[4];
typedef float32 type_74[4];
typedef uint16 type_76[3];
typedef float32 type_79[3];
typedef uint16 type_80[3];
typedef RwFrustumPlane type_81[6];
typedef float32 type_84[3];
typedef uint8 type_85[4];
typedef RwV3d type_88[8];
typedef zCutsceneZbuffer type_89[4];
typedef uint8 type_90[4];
typedef int8 type_91[16];
typedef zGlobalGameStats type_92[30];
typedef uint8 type_93[2];
typedef uint8 type_94[8];
typedef zGlobalGameStats type_95[13];
typedef _zEnt* type_97[10];
typedef int8 type_98[128];
typedef uint32 type_99[1];
typedef zGlobalGameStats type_100[4];
typedef int32 type_102[2];
typedef uint32 type_104[2];
typedef int32 type_105[2];
typedef uint8 type_106[3];
typedef uint32 type_107[2];
typedef uint32 type_108[43];
typedef uint32 type_110[2];
typedef xBase* type_111[43];
typedef float32 type_112[2];
typedef RpLight* type_113[2];
typedef RwFrame* type_115[2];
typedef RxCluster type_116[1];
typedef int8 type_117[16];
typedef RwTexCoords* type_118[8];
typedef int8 type_119[16];
typedef uint32 type_120[4];
typedef uint32 type_121[2];

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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _xEntSplineData
{
	int32 unknown;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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
	uint32 flags;
	void(*doEffect)(_xEnt*, _xScene*, float32, void*);
	void* fdata;
	xFFX* next;
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

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xCoef
{
	float32 a[4];
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

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
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

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
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

struct xSerial
{
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

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
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

struct _tagEmitSphere
{
	float32 radius;
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

struct p2PlatformFallingData
{
	float32 speed;
	uint32 bustModelID;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct _xEntPenData
{
	_xVec3 top;
	float32 w;
	_xMat4x3 omat;
};

_zParEmitter* sEmitTremble;
_zParEmitter* sEmitBreakaway;
zGlobals globals;
void(*xFFXShakeUpdateEnt)(_xEnt*, _xScene*, float32, void*);
_xVec3 g_O3;
uint32 gActiveHeap;
void(*zPlatformTranslate)(_xEnt*, _xVec3*);
int32(*zPlatformEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zPlatform_Move)(_xEnt*, _xScene*, float32, _xEntFrame*);
void(*zPlatform_Update)(_xEnt*, _xScene*, float32);

int32 zPlatformEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zPlatformTranslate(_xEnt* xent, _xVec3* dpos);
void zPlatform_MakeDiggable(_zPlatform* plat);
void zPlatform_Dismount();
void zPlatform_Mount(_zPlatform* plat);
void zPlatform_Tremble(_zPlatform* plat, float32 ampl, float32 freq, float32 dur);
void zPlatform_Shake(_zPlatform* plat, float32 ampl, float32 freq);
void zPlatform_Move(_xEnt* entplat, _xScene* s, float32 dt, _xEntFrame* frame);
void zPlatform_Update(_xEnt* entplat, _xScene* sc, float32 dt);
void zPlatform_Reset(_zPlatform* plat, _xScene* sc);
void zPlatform_Load(_zPlatform* ent, xSerial* s);
void zPlatform_Save(_zPlatform* ent, xSerial* s);
void zPlatform_Setup(_zPlatform* plat, _xScene* sc);
void zPlatform_Init(_zPlatform* plat, p2EntAsset* asset);
void zPlatform_Init(void* plat, void* asset);

// zPlatformEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1962d0
int32 zPlatformEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	_zPlatform* plat;
	// Line 658, Address: 0x1962d0, Func Offset: 0
	// Line 666, Address: 0x1962dc, Func Offset: 0xc
	// Line 669, Address: 0x1963d8, Func Offset: 0x108
	// Line 679, Address: 0x1963e8, Func Offset: 0x118
	// Line 682, Address: 0x1963f0, Func Offset: 0x120
	// Line 685, Address: 0x196400, Func Offset: 0x130
	// Line 688, Address: 0x196408, Func Offset: 0x138
	// Line 689, Address: 0x196418, Func Offset: 0x148
	// Line 690, Address: 0x19641c, Func Offset: 0x14c
	// Line 693, Address: 0x196424, Func Offset: 0x154
	// Line 696, Address: 0x19642c, Func Offset: 0x15c
	// Line 706, Address: 0x196454, Func Offset: 0x184
	// Line 708, Address: 0x196460, Func Offset: 0x190
	// Line 709, Address: 0x196468, Func Offset: 0x198
	// Line 712, Address: 0x196470, Func Offset: 0x1a0
	// Line 713, Address: 0x196478, Func Offset: 0x1a8
	// Line 717, Address: 0x196480, Func Offset: 0x1b0
	// Line 718, Address: 0x19648c, Func Offset: 0x1bc
	// Line 720, Address: 0x196494, Func Offset: 0x1c4
	// Line 724, Address: 0x19649c, Func Offset: 0x1cc
	// Line 725, Address: 0x1964a8, Func Offset: 0x1d8
	// Line 727, Address: 0x1964b0, Func Offset: 0x1e0
	// Line 730, Address: 0x1964b8, Func Offset: 0x1e8
	// Line 731, Address: 0x1964c4, Func Offset: 0x1f4
	// Line 734, Address: 0x1964cc, Func Offset: 0x1fc
	// Line 735, Address: 0x1964d4, Func Offset: 0x204
	// Line 738, Address: 0x1964dc, Func Offset: 0x20c
	// Line 739, Address: 0x1964e4, Func Offset: 0x214
	// Line 742, Address: 0x1964ec, Func Offset: 0x21c
	// Line 744, Address: 0x1964f8, Func Offset: 0x228
	// Line 745, Address: 0x1964fc, Func Offset: 0x22c
	// Line 748, Address: 0x196504, Func Offset: 0x234
	// Line 751, Address: 0x196510, Func Offset: 0x240
	// Line 766, Address: 0x196518, Func Offset: 0x248
	// Line 767, Address: 0x196528, Func Offset: 0x258
	// Line 770, Address: 0x196530, Func Offset: 0x260
	// Line 771, Address: 0x196538, Func Offset: 0x268
	// Line 774, Address: 0x196540, Func Offset: 0x270
	// Line 778, Address: 0x19654c, Func Offset: 0x27c
	// Line 780, Address: 0x196558, Func Offset: 0x288
	// Line 783, Address: 0x196560, Func Offset: 0x290
	// Line 784, Address: 0x19656c, Func Offset: 0x29c
	// Line 788, Address: 0x19657c, Func Offset: 0x2ac
	// Line 791, Address: 0x196588, Func Offset: 0x2b8
	// Line 795, Address: 0x196590, Func Offset: 0x2c0
	// Line 797, Address: 0x1965a0, Func Offset: 0x2d0
	// Line 799, Address: 0x1965c0, Func Offset: 0x2f0
	// Line 803, Address: 0x1965c8, Func Offset: 0x2f8
	// Line 805, Address: 0x1965d8, Func Offset: 0x308
	// Line 812, Address: 0x196600, Func Offset: 0x330
	// Line 811, Address: 0x196608, Func Offset: 0x338
	// Line 812, Address: 0x19660c, Func Offset: 0x33c
	// Func End, Address: 0x196614, Func Offset: 0x344
}

// zPlatformTranslate__FP5_xEntP6_xVec3
// Start address: 0x196620
void zPlatformTranslate(_xEnt* xent, _xVec3* dpos)
{
	_zPlatform* plat;
	// Line 638, Address: 0x196620, Func Offset: 0
	// Line 641, Address: 0x196634, Func Offset: 0x14
	// Line 642, Address: 0x19663c, Func Offset: 0x1c
	// Line 643, Address: 0x196648, Func Offset: 0x28
	// Func End, Address: 0x19665c, Func Offset: 0x3c
}

// zPlatform_MakeDiggable__FP10_zPlatform
// Start address: 0x196660
void zPlatform_MakeDiggable(_zPlatform* plat)
{
	// Line 631, Address: 0x196660, Func Offset: 0
	// Line 632, Address: 0x19666c, Func Offset: 0xc
	// Line 633, Address: 0x196670, Func Offset: 0x10
	// Line 634, Address: 0x19667c, Func Offset: 0x1c
	// Func End, Address: 0x196684, Func Offset: 0x24
}

// zPlatform_Dismount__FP10_zPlatform
// Start address: 0x196690
void zPlatform_Dismount()
{
	// Line 626, Address: 0x196690, Func Offset: 0
	// Func End, Address: 0x196698, Func Offset: 0x8
}

// zPlatform_Mount__FP10_zPlatform
// Start address: 0x1966a0
void zPlatform_Mount(_zPlatform* plat)
{
	// Line 609, Address: 0x1966a0, Func Offset: 0
	// Line 610, Address: 0x1966a8, Func Offset: 0x8
	// Line 611, Address: 0x1966b8, Func Offset: 0x18
	// Line 612, Address: 0x1966c4, Func Offset: 0x24
	// Line 614, Address: 0x1966c8, Func Offset: 0x28
	// Line 616, Address: 0x1966f8, Func Offset: 0x58
	// Func End, Address: 0x196704, Func Offset: 0x64
}

// zPlatform_Tremble__FP10_zPlatformfff
// Start address: 0x196710
void zPlatform_Tremble(_zPlatform* plat, float32 ampl, float32 freq, float32 dur)
{
	int32 i;
	_zParEmitterCustomSettings info;
	xFFX* sfkt;
	xFFXShakeState* ss;
	// Line 553, Address: 0x196710, Func Offset: 0
	// Line 554, Address: 0x196738, Func Offset: 0x28
	// Line 555, Address: 0x196744, Func Offset: 0x34
	// Line 556, Address: 0x19674c, Func Offset: 0x3c
	// Line 558, Address: 0x196754, Func Offset: 0x44
	// Line 559, Address: 0x19675c, Func Offset: 0x4c
	// Line 560, Address: 0x196764, Func Offset: 0x54
	// Line 562, Address: 0x19676c, Func Offset: 0x5c
	// Line 564, Address: 0x196774, Func Offset: 0x64
	// Line 571, Address: 0x19677c, Func Offset: 0x6c
	// Line 568, Address: 0x196780, Func Offset: 0x70
	// Line 564, Address: 0x196784, Func Offset: 0x74
	// Line 568, Address: 0x196788, Func Offset: 0x78
	// Line 571, Address: 0x19678c, Func Offset: 0x7c
	// Line 562, Address: 0x196790, Func Offset: 0x80
	// Line 563, Address: 0x1967b0, Func Offset: 0xa0
	// Line 564, Address: 0x1967b4, Func Offset: 0xa4
	// Line 565, Address: 0x1967b8, Func Offset: 0xa8
	// Line 566, Address: 0x1967bc, Func Offset: 0xac
	// Line 568, Address: 0x1967c0, Func Offset: 0xb0
	// Line 571, Address: 0x1967c4, Func Offset: 0xb4
	// Line 579, Address: 0x1967cc, Func Offset: 0xbc
	// Line 580, Address: 0x1967d0, Func Offset: 0xc0
	// Line 583, Address: 0x1967e0, Func Offset: 0xd0
	// Line 580, Address: 0x1967e8, Func Offset: 0xd8
	// Line 585, Address: 0x1967fc, Func Offset: 0xec
	// Line 586, Address: 0x196814, Func Offset: 0x104
	// Line 587, Address: 0x196824, Func Offset: 0x114
	// Func End, Address: 0x196844, Func Offset: 0x134
}

// zPlatform_Shake__FP10_zPlatformfff
// Start address: 0x196850
void zPlatform_Shake(_zPlatform* plat, float32 ampl, float32 freq)
{
	xFFX* sfkt;
	xFFXShakeState* ss;
	// Line 524, Address: 0x196850, Func Offset: 0
	// Line 528, Address: 0x196870, Func Offset: 0x20
	// Line 529, Address: 0x19687c, Func Offset: 0x2c
	// Line 530, Address: 0x196884, Func Offset: 0x34
	// Line 532, Address: 0x19688c, Func Offset: 0x3c
	// Line 533, Address: 0x196894, Func Offset: 0x44
	// Line 534, Address: 0x19689c, Func Offset: 0x4c
	// Line 536, Address: 0x1968a4, Func Offset: 0x54
	// Line 537, Address: 0x1968a8, Func Offset: 0x58
	// Line 538, Address: 0x1968ac, Func Offset: 0x5c
	// Line 539, Address: 0x1968b0, Func Offset: 0x60
	// Line 540, Address: 0x1968b8, Func Offset: 0x68
	// Line 547, Address: 0x1968c4, Func Offset: 0x74
	// Line 544, Address: 0x1968c8, Func Offset: 0x78
	// Line 540, Address: 0x1968d0, Func Offset: 0x80
	// Line 547, Address: 0x1968d4, Func Offset: 0x84
	// Line 540, Address: 0x1968d8, Func Offset: 0x88
	// Line 541, Address: 0x1968dc, Func Offset: 0x8c
	// Line 542, Address: 0x1968e0, Func Offset: 0x90
	// Line 544, Address: 0x1968e4, Func Offset: 0x94
	// Line 547, Address: 0x1968e8, Func Offset: 0x98
	// Line 549, Address: 0x1968f0, Func Offset: 0xa0
	// Func End, Address: 0x19690c, Func Offset: 0xbc
}

// zPlatform_Move__FP5_xEntP7_xScenefP10_xEntFrame
// Start address: 0x196910
void zPlatform_Move(_xEnt* entplat, _xScene* s, float32 dt, _xEntFrame* frame)
{
	// Line 519, Address: 0x196910, Func Offset: 0
	// Func End, Address: 0x196918, Func Offset: 0x8
}

// zPlatform_Update__FP5_xEntP7_xScenef
// Start address: 0x196920
void zPlatform_Update(_xEnt* entplat, _xScene* sc, float32 dt)
{
	_xVec3* rot;
	_xVec3* orot;
	_xVec3* pos;
	_xVec3* opos;
	int32 moving;
	_xMovePoint* src;
	_xVec3* scale;
	float32 tangle;
	float32 mangle;
	float32 dangle;
	float32 cangle;
	_xVec3 lpos;
	_xVec3* scale;
	float32 dtilt;
	float32 itilt;
	float32 ctilt;
	_xEntDrive* drv;
	_xEnt* p;
	_xEntDrive* drv;
	p2EntMotionMechData* mkasst;
	uint16 state;
	uint16 state;
	_zPlatform* plat;
	// Line 257, Address: 0x196920, Func Offset: 0
	// Line 263, Address: 0x196948, Func Offset: 0x28
	// Line 265, Address: 0x196950, Func Offset: 0x30
	// Line 266, Address: 0x19695c, Func Offset: 0x3c
	// Line 281, Address: 0x196960, Func Offset: 0x40
	// Line 282, Address: 0x196970, Func Offset: 0x50
	// Line 283, Address: 0x196980, Func Offset: 0x60
	// Line 284, Address: 0x196984, Func Offset: 0x64
	// Line 283, Address: 0x19698c, Func Offset: 0x6c
	// Line 284, Address: 0x196990, Func Offset: 0x70
	// Line 286, Address: 0x1969a0, Func Offset: 0x80
	// Line 288, Address: 0x196a10, Func Offset: 0xf0
	// Line 289, Address: 0x196a14, Func Offset: 0xf4
	// Line 291, Address: 0x196a20, Func Offset: 0x100
	// Line 292, Address: 0x196a2c, Func Offset: 0x10c
	// Line 293, Address: 0x196a38, Func Offset: 0x118
	// Line 294, Address: 0x196a3c, Func Offset: 0x11c
	// Line 295, Address: 0x196a54, Func Offset: 0x134
	// Line 298, Address: 0x196a60, Func Offset: 0x140
	// Line 301, Address: 0x196a6c, Func Offset: 0x14c
	// Line 302, Address: 0x196a7c, Func Offset: 0x15c
	// Line 303, Address: 0x196a88, Func Offset: 0x168
	// Line 304, Address: 0x196a9c, Func Offset: 0x17c
	// Line 305, Address: 0x196aa0, Func Offset: 0x180
	// Line 307, Address: 0x196aa4, Func Offset: 0x184
	// Line 305, Address: 0x196aac, Func Offset: 0x18c
	// Line 306, Address: 0x196ab4, Func Offset: 0x194
	// Line 307, Address: 0x196abc, Func Offset: 0x19c
	// Line 309, Address: 0x196ad4, Func Offset: 0x1b4
	// Line 310, Address: 0x196af8, Func Offset: 0x1d8
	// Line 312, Address: 0x196b00, Func Offset: 0x1e0
	// Line 313, Address: 0x196b2c, Func Offset: 0x20c
	// Line 314, Address: 0x196b30, Func Offset: 0x210
	// Line 316, Address: 0x196b34, Func Offset: 0x214
	// Line 314, Address: 0x196b3c, Func Offset: 0x21c
	// Line 315, Address: 0x196b44, Func Offset: 0x224
	// Line 316, Address: 0x196b4c, Func Offset: 0x22c
	// Line 319, Address: 0x196b64, Func Offset: 0x244
	// Line 320, Address: 0x196b74, Func Offset: 0x254
	// Line 321, Address: 0x196b78, Func Offset: 0x258
	// Line 320, Address: 0x196b80, Func Offset: 0x260
	// Line 321, Address: 0x196b84, Func Offset: 0x264
	// Line 322, Address: 0x196b94, Func Offset: 0x274
	// Line 326, Address: 0x196ba0, Func Offset: 0x280
	// Line 327, Address: 0x196bb0, Func Offset: 0x290
	// Line 329, Address: 0x196bb4, Func Offset: 0x294
	// Line 330, Address: 0x196bc0, Func Offset: 0x2a0
	// Line 332, Address: 0x196bc4, Func Offset: 0x2a4
	// Line 333, Address: 0x196bd0, Func Offset: 0x2b0
	// Line 342, Address: 0x196bdc, Func Offset: 0x2bc
	// Line 350, Address: 0x196c14, Func Offset: 0x2f4
	// Line 365, Address: 0x196c20, Func Offset: 0x300
	// Line 368, Address: 0x196c24, Func Offset: 0x304
	// Line 369, Address: 0x196c34, Func Offset: 0x314
	// Line 371, Address: 0x196c3c, Func Offset: 0x31c
	// Line 372, Address: 0x196c4c, Func Offset: 0x32c
	// Line 373, Address: 0x196c54, Func Offset: 0x334
	// Line 375, Address: 0x196c6c, Func Offset: 0x34c
	// Line 376, Address: 0x196c88, Func Offset: 0x368
	// Line 379, Address: 0x196c8c, Func Offset: 0x36c
	// Line 385, Address: 0x196ccc, Func Offset: 0x3ac
	// Line 388, Address: 0x196d04, Func Offset: 0x3e4
	// Line 389, Address: 0x196d14, Func Offset: 0x3f4
	// Line 390, Address: 0x196d1c, Func Offset: 0x3fc
	// Line 393, Address: 0x196d34, Func Offset: 0x414
	// Line 391, Address: 0x196d44, Func Offset: 0x424
	// Line 393, Address: 0x196d48, Func Offset: 0x428
	// Line 392, Address: 0x196d50, Func Offset: 0x430
	// Line 393, Address: 0x196d54, Func Offset: 0x434
	// Line 392, Address: 0x196d58, Func Offset: 0x438
	// Line 391, Address: 0x196d5c, Func Offset: 0x43c
	// Line 393, Address: 0x196d60, Func Offset: 0x440
	// Line 392, Address: 0x196d64, Func Offset: 0x444
	// Line 393, Address: 0x196d68, Func Offset: 0x448
	// Line 395, Address: 0x196d7c, Func Offset: 0x45c
	// Line 396, Address: 0x196d8c, Func Offset: 0x46c
	// Line 397, Address: 0x196d9c, Func Offset: 0x47c
	// Line 398, Address: 0x196dac, Func Offset: 0x48c
	// Line 399, Address: 0x196dc4, Func Offset: 0x4a4
	// Line 401, Address: 0x196de0, Func Offset: 0x4c0
	// Line 402, Address: 0x196df0, Func Offset: 0x4d0
	// Line 410, Address: 0x196e0c, Func Offset: 0x4ec
	// Line 409, Address: 0x196e10, Func Offset: 0x4f0
	// Line 410, Address: 0x196e14, Func Offset: 0x4f4
	// Line 411, Address: 0x196e40, Func Offset: 0x520
	// Line 412, Address: 0x196e70, Func Offset: 0x550
	// Line 414, Address: 0x196e9c, Func Offset: 0x57c
	// Line 416, Address: 0x196ea4, Func Offset: 0x584
	// Line 427, Address: 0x196ec0, Func Offset: 0x5a0
	// Line 433, Address: 0x196f0c, Func Offset: 0x5ec
	// Line 429, Address: 0x196f28, Func Offset: 0x608
	// Line 433, Address: 0x196f2c, Func Offset: 0x60c
	// Line 434, Address: 0x196f34, Func Offset: 0x614
	// Line 433, Address: 0x196f38, Func Offset: 0x618
	// Line 429, Address: 0x196f3c, Func Offset: 0x61c
	// Line 433, Address: 0x196f40, Func Offset: 0x620
	// Line 434, Address: 0x196f4c, Func Offset: 0x62c
	// Line 436, Address: 0x196f54, Func Offset: 0x634
	// Line 443, Address: 0x196f64, Func Offset: 0x644
	// Line 444, Address: 0x196f7c, Func Offset: 0x65c
	// Line 446, Address: 0x196f8c, Func Offset: 0x66c
	// Line 447, Address: 0x196fa4, Func Offset: 0x684
	// Line 452, Address: 0x196fa8, Func Offset: 0x688
	// Line 453, Address: 0x196fb8, Func Offset: 0x698
	// Line 461, Address: 0x196fd4, Func Offset: 0x6b4
	// Line 460, Address: 0x196fd8, Func Offset: 0x6b8
	// Line 461, Address: 0x196fdc, Func Offset: 0x6bc
	// Line 462, Address: 0x197008, Func Offset: 0x6e8
	// Line 463, Address: 0x197038, Func Offset: 0x718
	// Line 473, Address: 0x197068, Func Offset: 0x748
	// Line 474, Address: 0x197078, Func Offset: 0x758
	// Line 476, Address: 0x19707c, Func Offset: 0x75c
	// Line 477, Address: 0x197088, Func Offset: 0x768
	// Line 478, Address: 0x197094, Func Offset: 0x774
	// Line 483, Address: 0x197098, Func Offset: 0x778
	// Line 487, Address: 0x19709c, Func Offset: 0x77c
	// Line 483, Address: 0x1970a4, Func Offset: 0x784
	// Line 484, Address: 0x1970a8, Func Offset: 0x788
	// Line 485, Address: 0x1970ac, Func Offset: 0x78c
	// Line 487, Address: 0x1970b0, Func Offset: 0x790
	// Line 488, Address: 0x1970b8, Func Offset: 0x798
	// Line 489, Address: 0x197100, Func Offset: 0x7e0
	// Line 490, Address: 0x197104, Func Offset: 0x7e4
	// Line 494, Address: 0x19710c, Func Offset: 0x7ec
	// Line 495, Address: 0x197114, Func Offset: 0x7f4
	// Line 498, Address: 0x1971a4, Func Offset: 0x884
	// Line 503, Address: 0x1971a8, Func Offset: 0x888
	// Line 504, Address: 0x1971b4, Func Offset: 0x894
	// Line 505, Address: 0x1971bc, Func Offset: 0x89c
	// Line 506, Address: 0x1971c8, Func Offset: 0x8a8
	// Line 507, Address: 0x1971d0, Func Offset: 0x8b0
	// Line 510, Address: 0x1971d8, Func Offset: 0x8b8
	// Line 511, Address: 0x1971dc, Func Offset: 0x8bc
	// Func End, Address: 0x197200, Func Offset: 0x8e0
}

// zPlatform_Reset__FP10_zPlatformP7_xScene
// Start address: 0x197200
void zPlatform_Reset(_zPlatform* plat, _xScene* sc)
{
	// Line 185, Address: 0x197200, Func Offset: 0
	// Line 187, Address: 0x197214, Func Offset: 0x14
	// Line 189, Address: 0x19721c, Func Offset: 0x1c
	// Line 192, Address: 0x197228, Func Offset: 0x28
	// Line 194, Address: 0x197230, Func Offset: 0x30
	// Line 196, Address: 0x19723c, Func Offset: 0x3c
	// Line 198, Address: 0x197240, Func Offset: 0x40
	// Line 199, Address: 0x197250, Func Offset: 0x50
	// Line 203, Address: 0x197254, Func Offset: 0x54
	// Line 199, Address: 0x19725c, Func Offset: 0x5c
	// Line 200, Address: 0x197264, Func Offset: 0x64
	// Line 201, Address: 0x197268, Func Offset: 0x68
	// Line 202, Address: 0x197274, Func Offset: 0x74
	// Line 203, Address: 0x19727c, Func Offset: 0x7c
	// Line 204, Address: 0x197298, Func Offset: 0x98
	// Line 205, Address: 0x1972a0, Func Offset: 0xa0
	// Line 207, Address: 0x1972a8, Func Offset: 0xa8
	// Line 208, Address: 0x1972b8, Func Offset: 0xb8
	// Line 210, Address: 0x1972bc, Func Offset: 0xbc
	// Line 211, Address: 0x1972cc, Func Offset: 0xcc
	// Line 212, Address: 0x1972d0, Func Offset: 0xd0
	// Line 215, Address: 0x1972d4, Func Offset: 0xd4
	// Line 216, Address: 0x1972e4, Func Offset: 0xe4
	// Line 222, Address: 0x1972ec, Func Offset: 0xec
	// Line 224, Address: 0x197300, Func Offset: 0x100
	// Line 225, Address: 0x197308, Func Offset: 0x108
	// Line 228, Address: 0x19730c, Func Offset: 0x10c
	// Line 229, Address: 0x197310, Func Offset: 0x110
	// Func End, Address: 0x197324, Func Offset: 0x124
}

// zPlatform_Load__FP10_zPlatformP7xSerial
// Start address: 0x197330
void zPlatform_Load(_zPlatform* ent, xSerial* s)
{
	// Line 177, Address: 0x197330, Func Offset: 0
	// Func End, Address: 0x197338, Func Offset: 0x8
}

// zPlatform_Save__FP10_zPlatformP7xSerial
// Start address: 0x197340
void zPlatform_Save(_zPlatform* ent, xSerial* s)
{
	// Line 158, Address: 0x197340, Func Offset: 0
	// Func End, Address: 0x197348, Func Offset: 0x8
}

// zPlatform_Setup__FP10_zPlatformP7_xScene
// Start address: 0x197350
void zPlatform_Setup(_zPlatform* plat, _xScene* sc)
{
	// Line 135, Address: 0x197350, Func Offset: 0
	// Line 136, Address: 0x197364, Func Offset: 0x14
	// Line 138, Address: 0x19736c, Func Offset: 0x1c
	// Line 140, Address: 0x197378, Func Offset: 0x28
	// Line 141, Address: 0x197388, Func Offset: 0x38
	// Line 144, Address: 0x197398, Func Offset: 0x48
	// Func End, Address: 0x1973ac, Func Offset: 0x5c
}

// zPlatform_Init__FP10_zPlatformP10p2EntAsset
// Start address: 0x1973b0
void zPlatform_Init(_zPlatform* plat, p2EntAsset* asset)
{
	xAnimFile* afile;
	uint32 size;
	void* buf;
	uint32 size;
	void* buf;
	p2EntMotionAsset* emasset;
	p2PlatformAsset* passet;
	// Line 40, Address: 0x1973b0, Func Offset: 0
	// Line 49, Address: 0x1973c4, Func Offset: 0x14
	// Line 45, Address: 0x1973c8, Func Offset: 0x18
	// Line 49, Address: 0x1973d0, Func Offset: 0x20
	// Line 51, Address: 0x1973dc, Func Offset: 0x2c
	// Line 52, Address: 0x1973e0, Func Offset: 0x30
	// Line 54, Address: 0x1973e8, Func Offset: 0x38
	// Line 55, Address: 0x1973f4, Func Offset: 0x44
	// Line 57, Address: 0x1973fc, Func Offset: 0x4c
	// Line 63, Address: 0x197400, Func Offset: 0x50
	// Line 65, Address: 0x19740c, Func Offset: 0x5c
	// Line 66, Address: 0x197418, Func Offset: 0x68
	// Line 67, Address: 0x197424, Func Offset: 0x74
	// Line 69, Address: 0x197430, Func Offset: 0x80
	// Line 70, Address: 0x197434, Func Offset: 0x84
	// Line 73, Address: 0x197438, Func Offset: 0x88
	// Line 74, Address: 0x19743c, Func Offset: 0x8c
	// Line 76, Address: 0x197440, Func Offset: 0x90
	// Line 82, Address: 0x197450, Func Offset: 0xa0
	// Line 83, Address: 0x197460, Func Offset: 0xb0
	// Line 84, Address: 0x197468, Func Offset: 0xb8
	// Line 85, Address: 0x197470, Func Offset: 0xc0
	// Line 87, Address: 0x197478, Func Offset: 0xc8
	// Line 91, Address: 0x197480, Func Offset: 0xd0
	// Line 93, Address: 0x19748c, Func Offset: 0xdc
	// Line 94, Address: 0x197494, Func Offset: 0xe4
	// Line 96, Address: 0x19749c, Func Offset: 0xec
	// Line 98, Address: 0x1974a0, Func Offset: 0xf0
	// Line 99, Address: 0x1974a8, Func Offset: 0xf8
	// Line 102, Address: 0x1974ac, Func Offset: 0xfc
	// Line 104, Address: 0x1974b0, Func Offset: 0x100
	// Line 106, Address: 0x1974c0, Func Offset: 0x110
	// Line 109, Address: 0x1974cc, Func Offset: 0x11c
	// Line 111, Address: 0x1974d4, Func Offset: 0x124
	// Line 112, Address: 0x1974dc, Func Offset: 0x12c
	// Line 115, Address: 0x1974f4, Func Offset: 0x144
	// Line 116, Address: 0x197508, Func Offset: 0x158
	// Line 117, Address: 0x197538, Func Offset: 0x188
	// Line 118, Address: 0x19754c, Func Offset: 0x19c
	// Line 130, Address: 0x197568, Func Offset: 0x1b8
	// Line 131, Address: 0x197578, Func Offset: 0x1c8
	// Func End, Address: 0x197590, Func Offset: 0x1e0
}

// zPlatform_Init__FPvPv
// Start address: 0x197590
void zPlatform_Init(void* plat, void* asset)
{
	// Line 36, Address: 0x197590, Func Offset: 0
	// Func End, Address: 0x197598, Func Offset: 0x8
}

