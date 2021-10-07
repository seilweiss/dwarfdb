typedef struct RwCamera;
typedef struct RxClusterDefinition;
typedef struct RwRaster;
typedef struct RwV3d;
typedef struct RwResEntry;
typedef struct xAnimTransitionList;
typedef struct xModelInstance;
typedef struct _tagxCamStaticFollow;
typedef struct xAnimFile;
typedef struct xSurface;
typedef struct xCutsceneData;
typedef struct _xScene;
typedef enum RxClusterValid;
typedef struct xParGroup;
typedef struct zParEmitterAsset;
typedef struct zScene;
typedef struct RxPipelineCluster;
typedef struct zShaggy1Globals;
typedef struct RpVertexNormal;
typedef struct _zParEmitter;
typedef struct xCutsceneTime;
typedef struct xBase;
typedef struct iModelTag;
typedef struct RxPipelineRequiresCluster;
typedef struct _zEnt;
typedef struct _xMat4x3;
typedef struct xPar;
typedef struct xModelPool;
typedef struct _tagxCam;
typedef struct RwTexCoords;
typedef struct rxReq;
typedef struct xFFX;
typedef struct _iCollis;
typedef struct _tagxRumble;
typedef enum RwFogType;
typedef struct xAnimTransition;
typedef struct xParCmdTex;
typedef struct _tagEmitLine;
typedef struct RwRGBA;
typedef struct RwTexDictionary;
typedef struct zCheckPoint;
typedef struct xQCData;
typedef struct xAnimPlay;
typedef struct _xEnt;
typedef struct _xEnv;
typedef struct xAnimSingle;
typedef struct RpClump;
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
typedef struct RwFrustumPlane;
typedef struct _zEntHangable;
typedef struct zAssetPickupTable;
typedef struct RxClusterRef;
typedef struct _tagxCamPath;
typedef enum RxNodeDefEditable;
typedef struct _tagp2CamStaticAsset;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct xCutscene;
typedef struct RwMatrixTag;
typedef struct RxIoSpec;
typedef struct RpCollSector;
typedef struct xCutsceneInfo;
typedef struct _xEntFrame;
typedef struct rxHeapFreeBlock;
typedef struct zJumpParam;
typedef struct xParCmdAsset;
typedef struct _tagEmitVolume;
typedef struct RwTexture;
typedef struct RpMeshHeader;
typedef struct RpWorldSector;
typedef struct _xRot;
typedef struct RxPipeline;
typedef struct xAnimEffect;
typedef struct RxNodeMethods;
typedef struct _xCollis;
typedef enum _tagRumbleType;
typedef struct zGlobals;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zPortalAsset;
typedef struct xAnimTable;
typedef struct RwSurfaceProperties;
typedef struct RpWorld;
typedef struct xCutsceneBreak;
typedef struct RxNodeDefinition;
typedef struct RpGeometry;
typedef struct _tagxPad;
typedef enum en_ZVILLAIN_BUBBLE_RESPONSE;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct RxHeap;
typedef struct p2LinkAsset;
typedef struct RwFrame;
typedef struct RxCluster;
typedef struct RpMorphTarget;
typedef struct xAnimActiveEffect;
typedef struct _zEntBubble;
typedef struct _xEntDrive;
typedef struct _tagEmitOffsetPoint;
typedef struct rxHeapBlockHeader;
typedef struct xMemPool;
typedef struct _tagxCamFollow;
typedef struct RpSector;
typedef struct RpMaterialList;
typedef enum RxClusterValidityReq;
typedef struct _zPortal;
typedef struct _zCutsceneMgr;
typedef struct zPlayerStatic;
typedef struct iShadowCache;
typedef struct RwSphere;
typedef struct RpMaterial;
typedef struct zCutsceneZbuffer;
typedef struct RwLLLink;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct p2EntAsset;
typedef struct _tagxCamPathAsset;
typedef enum RwTextureAddressMode;
typedef struct _zParEmitterCustomSettings;
typedef struct RxPipelineNode;
typedef struct _zPlatform;
typedef struct RpLight;
typedef struct _xSphere;
typedef struct _xBound;
typedef struct RpTriangle;
typedef struct RxPipelineNodeParam;
typedef struct RpPolygon;
typedef struct tag_xFile;
typedef struct _tagEmitCircle;
typedef struct iEnv;
typedef struct zCutsceneZbufferHack;
typedef struct sceCdlFILE;
typedef struct _tagxCamShoulder;
typedef struct _xCylinder;
typedef struct p2EntHangableAsset;
typedef struct tag_iFile;
typedef struct _tagxCamFollowAsset;
typedef struct RwRGBAReal;
typedef struct _xBox;
typedef struct xCamAsset;
typedef struct _xEntCollis;
typedef enum RwCameraProjection;
typedef enum _tagCamType;
typedef struct _tagEmitSphere;
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
typedef struct _tagEmitRect;
typedef struct _tagxCamFrame;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct RwLinkList;

typedef int32(*type_1)(RxPipelineNode*);
typedef void(*type_2)(RwResEntry*);
typedef void(*type_6)(RxPipelineNode*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_11)(RwCamera*);
typedef uint32(*type_14)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_15)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_18)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwCamera*(*type_19)(RwCamera*);
typedef void(*type_20)(void*, xParGroup*);
typedef RpClump*(*type_29)(RpClump*, void*);
typedef RpWorldSector*(*type_33)(RpWorldSector*);
typedef void(*type_39)(_zEntBubble*, _xScene*, float32);
typedef xBase*(*type_40)(uint32);
typedef int8*(*type_43)(xBase*);
typedef int8*(*type_47)(uint32);
typedef RpAtomic*(*type_48)(RpAtomic*);
typedef void(*type_49)(_zEntBubble*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_50)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_56)(xMemPool*, void*);
typedef int32(*type_66)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_68)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_70)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_74)(RxNodeDefinition*);
typedef void(*type_75)(int32);
typedef void(*type_78)(_xEnt*, _xScene*, float32);
typedef void(*type_79)(RxNodeDefinition*);
typedef void(*type_87)(_xEnt*);
typedef int32(*type_91)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_93)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_95)(_xEnt*);
typedef void(*type_101)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_106)(RwObjectHasFrame*);
typedef void(*type_107)(_xEnt*, _xVec3*);
typedef void(*type_115)(_xEnt*, _xVec3*);

typedef uint8 type_0[4];
typedef _xVec4 type_3[8];
typedef uint8 type_4[3];
typedef uint8 type_5[4];
typedef RwTexCoords* type_7[8];
typedef uint8 type_8[3];
typedef float32 type_9[15];
typedef _xCollis type_12[18];
typedef float32 type_13[15];
typedef float32 type_16[4];
typedef uint32 type_17[15];
typedef float32 type_21[4];
typedef uint8 type_22[8];
typedef float32 type_23[4];
typedef uint8 type_24[2];
typedef uint8 type_25[8];
typedef uint8 type_26[8];
typedef uint8 type_27[22];
typedef uint8 type_28[2];
typedef uint8 type_30[8];
typedef uint8 type_31[22];
typedef uint32 type_32[2];
typedef uint8 type_34[3];
typedef uint8 type_35[4];
typedef uint8 type_36[3];
typedef int8 type_37[16];
typedef iModelTag type_38[4];
typedef _xVec3 type_41[2];
typedef int8 type_42[32];
typedef uint8 type_44[3];
typedef int8 type_45[32];
typedef _xQuat type_46[2];
typedef uint8 type_51[2];
typedef int8 type_52[128];
typedef int8 type_53[128][6];
typedef uint8 type_54[2];
typedef uint8 type_55[3];
typedef _xVec3 type_57[4];
typedef float32 type_58[4];
typedef float32 type_59[4];
typedef float32 type_60[4];
typedef int8 type_61[32];
typedef float32 type_62[4];
typedef float32 type_63[4];
typedef uint8 type_64[3];
typedef float32 type_65[4];
typedef float32 type_67[4];
typedef uint16 type_69[3];
typedef float32 type_71[3];
typedef uint16 type_72[3];
typedef RwFrustumPlane type_73[6];
typedef float32 type_76[3];
typedef uint8 type_77[4];
typedef RwV3d type_80[8];
typedef zCutsceneZbuffer type_81[4];
typedef uint8 type_82[4];
typedef int8 type_83[16];
typedef zGlobalGameStats type_84[30];
typedef uint8 type_85[8];
typedef zGlobalGameStats type_86[13];
typedef _zEnt* type_88[10];
typedef int8 type_89[128];
typedef uint32 type_90[1];
typedef zGlobalGameStats type_92[4];
typedef int32 type_94[2];
typedef uint32 type_96[2];
typedef int32 type_97[2];
typedef uint8 type_98[3];
typedef uint32 type_99[2];
typedef uint32 type_100[43];
typedef uint32 type_102[2];
typedef xBase* type_103[43];
typedef float32 type_104[2];
typedef RpLight* type_105[2];
typedef RwFrame* type_108[2];
typedef RxCluster type_109[1];
typedef int8 type_110[16];
typedef RwTexCoords* type_111[8];
typedef int8 type_112[16];
typedef uint32 type_113[4];
typedef uint32 type_114[2];

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

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

enum en_ZVILLAIN_BUBBLE_RESPONSE
{
	ZVIL_BUBBLE_NONE,
	ZVIL_BUBBLE_ENVELOP,
	ZVIL_BUBBLE_BREAK,
	ZVIL_BUBBLE_BOUNCE
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

struct _zEntBubble : _zEnt
{
	uint32 state;
	_zEnt* villain;
	float32 bubbleScale;
	float32 timer;
	float32 stuckTimer;
	_xVec3 envelopStart;
	float32 fx_timer;
	float32 fx_scale;
	xPar* particle;
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

struct _zPlatform
{
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

RpAtomic* gBubbleModel;
_zParEmitter* sEmitGumWad;
_zParEmitter* sEmitSoapFlight;
zGlobals globals;
_xMat4x3 g_I3;
void(*zEntBubble_Move)(_zEntBubble*, _xScene*, float32, _xEntFrame*);
void(*xEntDefaultBoundUpdate)(_xEnt*, _xVec3*);
void(*zEntBubble_Update)(_zEntBubble*, _xScene*, float32);
int32(*zEntBubbleEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

void zEntBubble_FX(_zEntBubble* ent, float32 dt);
int32 zEntBubbleEventCB();
void zEntBubble_Render();
void zEntBubble_Cleanup();
void zEntBubble_Pop(_zEntBubble* ent);
void zEntBubble_Move(_xEntFrame* frame);
void zEntBubble_Update(_zEntBubble* ent, _xScene* sc, float32 dt);
void zEntBubble_Launch(float32 wait);
void zEntBubble_DisableCollision();
void zEntBubble_EnableCollision();
_zEnt* AutoTarget();
void zEntBubble_SceneInit(zScene* scene);

// zEntBubble_FX__FP11_zEntBubblef
// Start address: 0x19ad70
void zEntBubble_FX(_zEntBubble* ent, float32 dt)
{
	_zParEmitterCustomSettings info;
	// Line 553, Address: 0x19ad70, Func Offset: 0
	// Line 556, Address: 0x19ad84, Func Offset: 0x14
	// Line 558, Address: 0x19ad94, Func Offset: 0x24
	// Line 559, Address: 0x19ad98, Func Offset: 0x28
	// Line 558, Address: 0x19ada0, Func Offset: 0x30
	// Line 559, Address: 0x19ada4, Func Offset: 0x34
	// Line 561, Address: 0x19adb4, Func Offset: 0x44
	// Line 564, Address: 0x19adc4, Func Offset: 0x54
	// Line 565, Address: 0x19adcc, Func Offset: 0x5c
	// Line 568, Address: 0x19add0, Func Offset: 0x60
	// Line 565, Address: 0x19addc, Func Offset: 0x6c
	// Line 567, Address: 0x19adf8, Func Offset: 0x88
	// Line 568, Address: 0x19adfc, Func Offset: 0x8c
	// Line 573, Address: 0x19ae08, Func Offset: 0x98
	// Line 574, Address: 0x19ae0c, Func Offset: 0x9c
	// Line 573, Address: 0x19ae18, Func Offset: 0xa8
	// Line 574, Address: 0x19ae1c, Func Offset: 0xac
	// Line 575, Address: 0x19ae2c, Func Offset: 0xbc
	// Line 577, Address: 0x19ae30, Func Offset: 0xc0
	// Line 578, Address: 0x19ae3c, Func Offset: 0xcc
	// Line 579, Address: 0x19ae48, Func Offset: 0xd8
	// Line 580, Address: 0x19ae50, Func Offset: 0xe0
	// Line 583, Address: 0x19ae58, Func Offset: 0xe8
	// Line 584, Address: 0x19ae5c, Func Offset: 0xec
	// Line 583, Address: 0x19ae64, Func Offset: 0xf4
	// Line 584, Address: 0x19ae68, Func Offset: 0xf8
	// Line 586, Address: 0x19ae78, Func Offset: 0x108
	// Line 590, Address: 0x19ae84, Func Offset: 0x114
	// Line 592, Address: 0x19ae90, Func Offset: 0x120
	// Line 593, Address: 0x19aea0, Func Offset: 0x130
	// Line 594, Address: 0x19aeb4, Func Offset: 0x144
	// Line 597, Address: 0x19aec8, Func Offset: 0x158
	// Func End, Address: 0x19aedc, Func Offset: 0x16c
}

// zEntBubbleEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x19aee0
int32 zEntBubbleEventCB()
{
	// Line 545, Address: 0x19aee0, Func Offset: 0
	// Func End, Address: 0x19aee8, Func Offset: 0x8
}

// zEntBubble_Render__Fv
// Start address: 0x19aef0
void zEntBubble_Render()
{
	RwRGBA colsoap;
	zScene* sc;
	uint32 i;
	// Line 515, Address: 0x19aef0, Func Offset: 0
	// Line 517, Address: 0x19af08, Func Offset: 0x18
	// Line 520, Address: 0x19af10, Func Offset: 0x20
	// Line 522, Address: 0x19af20, Func Offset: 0x30
	// Line 525, Address: 0x19af3c, Func Offset: 0x4c
	// Line 529, Address: 0x19af60, Func Offset: 0x70
	// Line 530, Address: 0x19af94, Func Offset: 0xa4
	// Line 539, Address: 0x19afac, Func Offset: 0xbc
	// Line 540, Address: 0x19afc0, Func Offset: 0xd0
	// Func End, Address: 0x19afdc, Func Offset: 0xec
}

// zEntBubble_Cleanup__Fv
// Start address: 0x19afe0
void zEntBubble_Cleanup()
{
	_zEnt* tmp;
	zScene* sc;
	uint32 i;
	// Line 500, Address: 0x19afe0, Func Offset: 0
	// Line 502, Address: 0x19afe8, Func Offset: 0x8
	// Line 503, Address: 0x19aff4, Func Offset: 0x14
	// Line 505, Address: 0x19b010, Func Offset: 0x30
	// Line 507, Address: 0x19b01c, Func Offset: 0x3c
	// Line 506, Address: 0x19b020, Func Offset: 0x40
	// Line 507, Address: 0x19b024, Func Offset: 0x44
	// Line 506, Address: 0x19b028, Func Offset: 0x48
	// Line 507, Address: 0x19b02c, Func Offset: 0x4c
	// Line 506, Address: 0x19b034, Func Offset: 0x54
	// Line 507, Address: 0x19b038, Func Offset: 0x58
	// Line 508, Address: 0x19b03c, Func Offset: 0x5c
	// Line 509, Address: 0x19b04c, Func Offset: 0x6c
	// Line 510, Address: 0x19b058, Func Offset: 0x78
	// Line 511, Address: 0x19b05c, Func Offset: 0x7c
	// Line 512, Address: 0x19b070, Func Offset: 0x90
	// Func End, Address: 0x19b078, Func Offset: 0x98
}

// zEntBubble_Pop__FP11_zEntBubble
// Start address: 0x19b080
void zEntBubble_Pop(_zEntBubble* ent)
{
	// Line 492, Address: 0x19b080, Func Offset: 0
	// Line 494, Address: 0x19b088, Func Offset: 0x8
	// Func End, Address: 0x19b090, Func Offset: 0x10
}

// zEntBubble_Move__FP11_zEntBubbleP7_xScenefP10_xEntFrame
// Start address: 0x19b090
void zEntBubble_Move(_xEntFrame* frame)
{
	// Line 488, Address: 0x19b090, Func Offset: 0
	// Func End, Address: 0x19b098, Func Offset: 0x8
}

// zEntBubble_Update__FP11_zEntBubbleP7_xScenef
// Start address: 0x19b0a0
void zEntBubble_Update(_zEntBubble* ent, _xScene* sc, float32 dt)
{
	en_ZVILLAIN_BUBBLE_RESPONSE response;
	_zEnt* vill;
	_xCollis* endcoll;
	_xCollis* coll;
	float32 lerp;
	_zParEmitterCustomSettings info;
	float32 cpitch;
	float32 spitch;
	float32 mag;
	float32 dz;
	float32 dy;
	float32 dx;
	float32 flyspeed;
	_xEntCollis coll;
	// Line 246, Address: 0x19b0a0, Func Offset: 0
	// Line 250, Address: 0x19b0d0, Func Offset: 0x30
	// Line 251, Address: 0x19b0e0, Func Offset: 0x40
	// Line 256, Address: 0x19b0e8, Func Offset: 0x48
	// Line 259, Address: 0x19b0f0, Func Offset: 0x50
	// Line 262, Address: 0x19b144, Func Offset: 0xa4
	// Line 263, Address: 0x19b148, Func Offset: 0xa8
	// Line 262, Address: 0x19b150, Func Offset: 0xb0
	// Line 263, Address: 0x19b154, Func Offset: 0xb4
	// Line 266, Address: 0x19b164, Func Offset: 0xc4
	// Line 267, Address: 0x19b16c, Func Offset: 0xcc
	// Line 270, Address: 0x19b170, Func Offset: 0xd0
	// Line 273, Address: 0x19b198, Func Offset: 0xf8
	// Line 274, Address: 0x19b1b4, Func Offset: 0x114
	// Line 277, Address: 0x19b1b8, Func Offset: 0x118
	// Line 278, Address: 0x19b1cc, Func Offset: 0x12c
	// Line 279, Address: 0x19b1d4, Func Offset: 0x134
	// Line 282, Address: 0x19b1e8, Func Offset: 0x148
	// Line 284, Address: 0x19b1f4, Func Offset: 0x154
	// Line 288, Address: 0x19b220, Func Offset: 0x180
	// Line 289, Address: 0x19b234, Func Offset: 0x194
	// Line 290, Address: 0x19b254, Func Offset: 0x1b4
	// Line 291, Address: 0x19b260, Func Offset: 0x1c0
	// Line 292, Address: 0x19b274, Func Offset: 0x1d4
	// Line 293, Address: 0x19b294, Func Offset: 0x1f4
	// Line 295, Address: 0x19b29c, Func Offset: 0x1fc
	// Line 296, Address: 0x19b2ac, Func Offset: 0x20c
	// Line 297, Address: 0x19b2b4, Func Offset: 0x214
	// Line 302, Address: 0x19b2c4, Func Offset: 0x224
	// Line 305, Address: 0x19b2e4, Func Offset: 0x244
	// Line 306, Address: 0x19b2e8, Func Offset: 0x248
	// Line 310, Address: 0x19b2f0, Func Offset: 0x250
	// Line 313, Address: 0x19b2fc, Func Offset: 0x25c
	// Line 314, Address: 0x19b304, Func Offset: 0x264
	// Line 317, Address: 0x19b308, Func Offset: 0x268
	// Line 314, Address: 0x19b318, Func Offset: 0x278
	// Line 315, Address: 0x19b324, Func Offset: 0x284
	// Line 316, Address: 0x19b334, Func Offset: 0x294
	// Line 317, Address: 0x19b340, Func Offset: 0x2a0
	// Line 319, Address: 0x19b348, Func Offset: 0x2a8
	// Line 322, Address: 0x19b350, Func Offset: 0x2b0
	// Line 323, Address: 0x19b360, Func Offset: 0x2c0
	// Line 324, Address: 0x19b364, Func Offset: 0x2c4
	// Line 327, Address: 0x19b36c, Func Offset: 0x2cc
	// Line 328, Address: 0x19b37c, Func Offset: 0x2dc
	// Line 329, Address: 0x19b38c, Func Offset: 0x2ec
	// Line 331, Address: 0x19b398, Func Offset: 0x2f8
	// Line 341, Address: 0x19b3a0, Func Offset: 0x300
	// Line 353, Address: 0x19b3a4, Func Offset: 0x304
	// Line 354, Address: 0x19b3ac, Func Offset: 0x30c
	// Line 341, Address: 0x19b3b4, Func Offset: 0x314
	// Line 343, Address: 0x19b3bc, Func Offset: 0x31c
	// Line 344, Address: 0x19b3c4, Func Offset: 0x324
	// Line 345, Address: 0x19b3cc, Func Offset: 0x32c
	// Line 353, Address: 0x19b3d4, Func Offset: 0x334
	// Line 354, Address: 0x19b3dc, Func Offset: 0x33c
	// Line 355, Address: 0x19b3ec, Func Offset: 0x34c
	// Line 363, Address: 0x19b3f0, Func Offset: 0x350
	// Line 385, Address: 0x19b400, Func Offset: 0x360
	// Line 363, Address: 0x19b404, Func Offset: 0x364
	// Line 379, Address: 0x19b410, Func Offset: 0x370
	// Line 363, Address: 0x19b418, Func Offset: 0x378
	// Line 370, Address: 0x19b454, Func Offset: 0x3b4
	// Line 374, Address: 0x19b458, Func Offset: 0x3b8
	// Line 370, Address: 0x19b460, Func Offset: 0x3c0
	// Line 374, Address: 0x19b46c, Func Offset: 0x3cc
	// Line 375, Address: 0x19b480, Func Offset: 0x3e0
	// Line 376, Address: 0x19b49c, Func Offset: 0x3fc
	// Line 379, Address: 0x19b4b8, Func Offset: 0x418
	// Line 385, Address: 0x19b4d4, Func Offset: 0x434
	// Line 387, Address: 0x19b4dc, Func Offset: 0x43c
	// Line 390, Address: 0x19b4e4, Func Offset: 0x444
	// Line 393, Address: 0x19b4f4, Func Offset: 0x454
	// Line 395, Address: 0x19b500, Func Offset: 0x460
	// Line 396, Address: 0x19b504, Func Offset: 0x464
	// Line 395, Address: 0x19b50c, Func Offset: 0x46c
	// Line 396, Address: 0x19b510, Func Offset: 0x470
	// Line 398, Address: 0x19b520, Func Offset: 0x480
	// Line 401, Address: 0x19b528, Func Offset: 0x488
	// Line 403, Address: 0x19b534, Func Offset: 0x494
	// Line 404, Address: 0x19b538, Func Offset: 0x498
	// Line 406, Address: 0x19b53c, Func Offset: 0x49c
	// Line 409, Address: 0x19b544, Func Offset: 0x4a4
	// Line 410, Address: 0x19b564, Func Offset: 0x4c4
	// Line 411, Address: 0x19b584, Func Offset: 0x4e4
	// Line 414, Address: 0x19b594, Func Offset: 0x4f4
	// Line 415, Address: 0x19b5ac, Func Offset: 0x50c
	// Line 416, Address: 0x19b5c0, Func Offset: 0x520
	// Line 415, Address: 0x19b5c4, Func Offset: 0x524
	// Line 416, Address: 0x19b5c8, Func Offset: 0x528
	// Line 417, Address: 0x19b5dc, Func Offset: 0x53c
	// Line 420, Address: 0x19b5e8, Func Offset: 0x548
	// Line 422, Address: 0x19b5f4, Func Offset: 0x554
	// Line 423, Address: 0x19b5f8, Func Offset: 0x558
	// Line 424, Address: 0x19b5fc, Func Offset: 0x55c
	// Line 427, Address: 0x19b600, Func Offset: 0x560
	// Line 428, Address: 0x19b604, Func Offset: 0x564
	// Line 430, Address: 0x19b610, Func Offset: 0x570
	// Line 435, Address: 0x19b644, Func Offset: 0x5a4
	// Line 436, Address: 0x19b64c, Func Offset: 0x5ac
	// Line 437, Address: 0x19b650, Func Offset: 0x5b0
	// Line 438, Address: 0x19b654, Func Offset: 0x5b4
	// Line 439, Address: 0x19b658, Func Offset: 0x5b8
	// Line 438, Address: 0x19b65c, Func Offset: 0x5bc
	// Line 440, Address: 0x19b670, Func Offset: 0x5d0
	// Line 443, Address: 0x19b678, Func Offset: 0x5d8
	// Line 444, Address: 0x19b680, Func Offset: 0x5e0
	// Line 445, Address: 0x19b684, Func Offset: 0x5e4
	// Line 452, Address: 0x19b688, Func Offset: 0x5e8
	// Line 453, Address: 0x19b68c, Func Offset: 0x5ec
	// Line 457, Address: 0x19b698, Func Offset: 0x5f8
	// Line 460, Address: 0x19b6a8, Func Offset: 0x608
	// Line 464, Address: 0x19b704, Func Offset: 0x664
	// Line 465, Address: 0x19b708, Func Offset: 0x668
	// Line 464, Address: 0x19b718, Func Offset: 0x678
	// Line 465, Address: 0x19b71c, Func Offset: 0x67c
	// Line 466, Address: 0x19b72c, Func Offset: 0x68c
	// Line 468, Address: 0x19b730, Func Offset: 0x690
	// Line 472, Address: 0x19b738, Func Offset: 0x698
	// Line 479, Address: 0x19b740, Func Offset: 0x6a0
	// Line 483, Address: 0x19b748, Func Offset: 0x6a8
	// Func End, Address: 0x19b770, Func Offset: 0x6d0
}

// zEntBubble_Launch__Ff
// Start address: 0x19b770
void zEntBubble_Launch(float32 wait)
{
	_zEntBubble* bub;
	// Line 183, Address: 0x19b770, Func Offset: 0
	// Line 185, Address: 0x19b780, Func Offset: 0x10
	// Line 183, Address: 0x19b784, Func Offset: 0x14
	// Line 185, Address: 0x19b788, Func Offset: 0x18
	// Line 189, Address: 0x19b7a4, Func Offset: 0x34
	// Line 198, Address: 0x19b7b0, Func Offset: 0x40
	// Line 189, Address: 0x19b7b4, Func Offset: 0x44
	// Line 198, Address: 0x19b7b8, Func Offset: 0x48
	// Line 192, Address: 0x19b7bc, Func Offset: 0x4c
	// Line 189, Address: 0x19b7c0, Func Offset: 0x50
	// Line 192, Address: 0x19b7c8, Func Offset: 0x58
	// Line 195, Address: 0x19b7cc, Func Offset: 0x5c
	// Line 198, Address: 0x19b7d0, Func Offset: 0x60
	// Line 199, Address: 0x19b7e0, Func Offset: 0x70
	// Line 203, Address: 0x19b7e4, Func Offset: 0x74
	// Line 199, Address: 0x19b7e8, Func Offset: 0x78
	// Line 203, Address: 0x19b820, Func Offset: 0xb0
	// Line 204, Address: 0x19b824, Func Offset: 0xb4
	// Line 205, Address: 0x19b838, Func Offset: 0xc8
	// Line 215, Address: 0x19b840, Func Offset: 0xd0
	// Line 205, Address: 0x19b844, Func Offset: 0xd4
	// Line 210, Address: 0x19b860, Func Offset: 0xf0
	// Line 211, Address: 0x19b868, Func Offset: 0xf8
	// Line 212, Address: 0x19b870, Func Offset: 0x100
	// Line 216, Address: 0x19b878, Func Offset: 0x108
	// Line 217, Address: 0x19b884, Func Offset: 0x114
	// Line 218, Address: 0x19b88c, Func Offset: 0x11c
	// Line 219, Address: 0x19b890, Func Offset: 0x120
	// Line 221, Address: 0x19b894, Func Offset: 0x124
	// Line 222, Address: 0x19b89c, Func Offset: 0x12c
	// Line 223, Address: 0x19b8a4, Func Offset: 0x134
	// Line 224, Address: 0x19b8b0, Func Offset: 0x140
	// Line 228, Address: 0x19b8bc, Func Offset: 0x14c
	// Line 231, Address: 0x19b8cc, Func Offset: 0x15c
	// Line 234, Address: 0x19b920, Func Offset: 0x1b0
	// Line 236, Address: 0x19b930, Func Offset: 0x1c0
	// Line 238, Address: 0x19b93c, Func Offset: 0x1cc
	// Line 241, Address: 0x19b944, Func Offset: 0x1d4
	// Line 243, Address: 0x19b950, Func Offset: 0x1e0
	// Func End, Address: 0x19b968, Func Offset: 0x1f8
}

// zEntBubble_DisableCollision__Fv
// Start address: 0x19b970
void zEntBubble_DisableCollision()
{
	zScene* sc;
	int32 i;
	// Line 172, Address: 0x19b970, Func Offset: 0
	// Line 174, Address: 0x19b978, Func Offset: 0x8
	// Line 175, Address: 0x19b98c, Func Offset: 0x1c
	// Line 178, Address: 0x19b9a4, Func Offset: 0x34
	// Line 179, Address: 0x19b9ac, Func Offset: 0x3c
	// Line 180, Address: 0x19b9c0, Func Offset: 0x50
	// Func End, Address: 0x19b9c8, Func Offset: 0x58
}

// zEntBubble_EnableCollision__Fv
// Start address: 0x19b9d0
void zEntBubble_EnableCollision()
{
	zScene* sc;
	int32 i;
	// Line 155, Address: 0x19b9d0, Func Offset: 0
	// Line 158, Address: 0x19b9d8, Func Offset: 0x8
	// Line 160, Address: 0x19b9ec, Func Offset: 0x1c
	// Line 164, Address: 0x19ba24, Func Offset: 0x54
	// Line 166, Address: 0x19ba3c, Func Offset: 0x6c
	// Line 167, Address: 0x19ba50, Func Offset: 0x80
	// Func End, Address: 0x19ba58, Func Offset: 0x88
}

// AutoTarget__Fv
// Start address: 0x19ba60
_zEnt* AutoTarget()
{
	float32 spitch;
	float32 xzdist;
	float32 dz;
	float32 dy;
	float32 dx;
	_zEnt** vill;
	_zEnt* near;
	float32 nearDist;
	float32 pitchSin;
	float32 plusAngle;
	float32 minusAngle;
	float32 dirAngle;
	uint32 i;
	// Line 93, Address: 0x19ba60, Func Offset: 0
	// Line 97, Address: 0x19baa4, Func Offset: 0x44
	// Line 93, Address: 0x19baa8, Func Offset: 0x48
	// Line 97, Address: 0x19baac, Func Offset: 0x4c
	// Line 105, Address: 0x19bab0, Func Offset: 0x50
	// Line 106, Address: 0x19bab4, Func Offset: 0x54
	// Line 105, Address: 0x19bac8, Func Offset: 0x68
	// Line 106, Address: 0x19bacc, Func Offset: 0x6c
	// Line 97, Address: 0x19bad0, Func Offset: 0x70
	// Line 106, Address: 0x19bad4, Func Offset: 0x74
	// Line 100, Address: 0x19badc, Func Offset: 0x7c
	// Line 97, Address: 0x19bae8, Func Offset: 0x88
	// Line 106, Address: 0x19baec, Func Offset: 0x8c
	// Line 97, Address: 0x19baf0, Func Offset: 0x90
	// Line 106, Address: 0x19baf4, Func Offset: 0x94
	// Line 95, Address: 0x19bb00, Func Offset: 0xa0
	// Line 109, Address: 0x19bb04, Func Offset: 0xa4
	// Line 110, Address: 0x19bb0c, Func Offset: 0xac
	// Line 111, Address: 0x19bb1c, Func Offset: 0xbc
	// Line 112, Address: 0x19bb24, Func Offset: 0xc4
	// Line 113, Address: 0x19bb34, Func Offset: 0xd4
	// Line 114, Address: 0x19bb3c, Func Offset: 0xdc
	// Line 116, Address: 0x19bb4c, Func Offset: 0xec
	// Line 119, Address: 0x19bb68, Func Offset: 0x108
	// Line 120, Address: 0x19bb70, Func Offset: 0x110
	// Line 123, Address: 0x19bb94, Func Offset: 0x134
	// Line 130, Address: 0x19bba0, Func Offset: 0x140
	// Line 123, Address: 0x19bba4, Func Offset: 0x144
	// Line 127, Address: 0x19bbb0, Func Offset: 0x150
	// Line 130, Address: 0x19bbb8, Func Offset: 0x158
	// Line 135, Address: 0x19bbfc, Func Offset: 0x19c
	// Line 136, Address: 0x19bc20, Func Offset: 0x1c0
	// Line 139, Address: 0x19bc3c, Func Offset: 0x1dc
	// Line 141, Address: 0x19bc58, Func Offset: 0x1f8
	// Line 142, Address: 0x19bc5c, Func Offset: 0x1fc
	// Line 146, Address: 0x19bc64, Func Offset: 0x204
	// Line 148, Address: 0x19bc7c, Func Offset: 0x21c
	// Line 149, Address: 0x19bc80, Func Offset: 0x220
	// Line 150, Address: 0x19bc84, Func Offset: 0x224
	// Func End, Address: 0x19bcd0, Func Offset: 0x270
}

// zEntBubble_SceneInit__FP6zScene
// Start address: 0x19bcd0
void zEntBubble_SceneInit(zScene* scene)
{
	_xEntFrame* frameBlock;
	_zEntBubble* bubbleBlock;
	uint32 bufsize;
	uint32 idx;
	// Line 33, Address: 0x19bcd0, Func Offset: 0
	// Line 35, Address: 0x19bcf4, Func Offset: 0x24
	// Line 36, Address: 0x19bd04, Func Offset: 0x34
	// Line 35, Address: 0x19bd08, Func Offset: 0x38
	// Line 36, Address: 0x19bd0c, Func Offset: 0x3c
	// Line 37, Address: 0x19bd14, Func Offset: 0x44
	// Line 36, Address: 0x19bd18, Func Offset: 0x48
	// Line 37, Address: 0x19bd1c, Func Offset: 0x4c
	// Line 41, Address: 0x19bd28, Func Offset: 0x58
	// Line 43, Address: 0x19bd4c, Func Offset: 0x7c
	// Line 45, Address: 0x19bd54, Func Offset: 0x84
	// Line 54, Address: 0x19bd58, Func Offset: 0x88
	// Line 50, Address: 0x19bd60, Func Offset: 0x90
	// Line 51, Address: 0x19bd64, Func Offset: 0x94
	// Line 57, Address: 0x19bd68, Func Offset: 0x98
	// Line 45, Address: 0x19bd6c, Func Offset: 0x9c
	// Line 49, Address: 0x19bd74, Func Offset: 0xa4
	// Line 50, Address: 0x19bd78, Func Offset: 0xa8
	// Line 51, Address: 0x19bd7c, Func Offset: 0xac
	// Line 52, Address: 0x19bd80, Func Offset: 0xb0
	// Line 53, Address: 0x19bd84, Func Offset: 0xb4
	// Line 54, Address: 0x19bd88, Func Offset: 0xb8
	// Line 57, Address: 0x19bd8c, Func Offset: 0xbc
	// Line 58, Address: 0x19bd90, Func Offset: 0xc0
	// Line 59, Address: 0x19bd98, Func Offset: 0xc8
	// Line 60, Address: 0x19bda0, Func Offset: 0xd0
	// Line 61, Address: 0x19bda8, Func Offset: 0xd8
	// Line 62, Address: 0x19bdb0, Func Offset: 0xe0
	// Line 63, Address: 0x19bdb4, Func Offset: 0xe4
	// Line 64, Address: 0x19bdb8, Func Offset: 0xe8
	// Line 65, Address: 0x19bdd4, Func Offset: 0x104
	// Line 66, Address: 0x19bde0, Func Offset: 0x110
	// Line 67, Address: 0x19bdec, Func Offset: 0x11c
	// Line 68, Address: 0x19bdf8, Func Offset: 0x128
	// Line 69, Address: 0x19bdfc, Func Offset: 0x12c
	// Line 70, Address: 0x19be00, Func Offset: 0x130
	// Line 71, Address: 0x19be08, Func Offset: 0x138
	// Line 72, Address: 0x19be10, Func Offset: 0x140
	// Line 71, Address: 0x19be18, Func Offset: 0x148
	// Line 72, Address: 0x19be20, Func Offset: 0x150
	// Line 75, Address: 0x19be28, Func Offset: 0x158
	// Line 77, Address: 0x19be3c, Func Offset: 0x16c
	// Line 79, Address: 0x19be54, Func Offset: 0x184
	// Line 82, Address: 0x19be5c, Func Offset: 0x18c
	// Line 84, Address: 0x19be70, Func Offset: 0x1a0
	// Line 86, Address: 0x19be88, Func Offset: 0x1b8
	// Line 89, Address: 0x19be90, Func Offset: 0x1c0
	// Func End, Address: 0x19beb4, Func Offset: 0x1e4
}

