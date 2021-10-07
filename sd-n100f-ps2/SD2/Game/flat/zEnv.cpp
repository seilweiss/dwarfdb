typedef struct p2EntHangableAsset;
typedef struct _xScene;
typedef struct RpPolygon;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct xAnimState;
typedef struct _zEntHangable;
typedef struct _xEnt;
typedef struct rxReq;
typedef struct _tagxRumble;
typedef struct xCamAsset;
typedef struct RpLight;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct p2EnvAsset;
typedef struct _xEnv;
typedef struct RwSurfaceProperties;
typedef struct zJumpParam;
typedef struct RxNodeDefinition;
typedef struct _xEntCollis;
typedef struct RpTriangle;
typedef struct xCutsceneTime;
typedef struct iEnv;
typedef struct _zEnv;
typedef struct _tagxCamStatic;
typedef struct RwMatrixTag;
typedef struct xSerial;
typedef struct RxHeap;
typedef struct xCutsceneData;
typedef struct _xSphere;
typedef struct RxPipeline;
typedef struct xModelInstance;
typedef struct zGlobals;
typedef struct RxCluster;
typedef struct zScene;
typedef struct xBase;
typedef struct RxClusterRef;
typedef struct _xVec3;
typedef struct rxHeapBlockHeader;
typedef struct _zEnt;
typedef struct _tagxPad;
typedef struct zSurfacePropTexAnim;
typedef enum RxClusterValidityReq;
typedef struct RpWorld;
typedef struct _tagxCamFrame;
typedef struct RxPipelineCluster;
typedef struct _xCylinder;
typedef struct _zPortal;
typedef struct xAnimEffect;
typedef struct _xCollis;
typedef struct RwSphere;
typedef struct _tagxCamShoulderAsset;
typedef struct RxClusterDefinition;
typedef enum _tagTransType;
typedef struct RwCamera;
typedef struct RpCollSector;
typedef struct RxOutputSpec;
typedef struct zAssetPickupTable;
typedef enum rxEmbeddedPacketState;
typedef struct _xEntFrame;
typedef struct p2EntAsset;
typedef struct RxPacket;
typedef struct xAnimActiveEffect;
typedef struct _tagxCamStaticFollow;
typedef enum RwTextureAddressMode;
typedef struct xCutscene;
typedef struct zPlayerStatic;
typedef struct _xBox;
typedef struct _zCutsceneMgr;
typedef struct xAnimPlay;
typedef struct RpMeshHeader;
typedef enum _tagRumbleType;
typedef struct RpMaterial;
typedef struct RxPipelineNode;
typedef struct zSurfColorFX;
typedef struct xCutsceneInfo;
typedef struct _tagxCam;
typedef enum RwCameraProjection;
typedef struct RwTexture;
typedef struct xSurface;
typedef struct RwObjectHasFrame;
typedef struct xAnimFile;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpAtomic;
typedef struct xAnimTransitionList;
typedef struct _zPlatform;
typedef struct zSurfaceProps;
typedef struct p2LinkAsset;
typedef struct RpWorldSector;
typedef struct RwRGBA;
typedef struct zSurfacePropUVFX;
typedef struct xCutsceneBreak;
typedef struct RpInterpolator;
typedef struct _xMat4x3;
typedef struct RwTexCoords;
typedef struct iModelTag;
typedef struct xAnimTransition;
typedef struct _tagxCamPath;
typedef struct xModelPool;
typedef struct _tagp2CamStaticAsset;
typedef struct xMemPool;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct RwRGBAReal;
typedef struct RwResEntry;
typedef struct xAnimSingle;
typedef struct xQCData;
typedef struct zSurfUVFX;
typedef struct RpVertexNormal;
typedef struct xFFX;
typedef struct rxHeapFreeBlock;
typedef struct _xEntDrive;
typedef struct RpMorphTarget;
typedef struct zPortalAsset;
typedef struct zCutsceneZbuffer;
typedef struct zGroupAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct zSurfAsset;
typedef struct RwRaster;
typedef struct _xBBox;
typedef struct RwV2d;
typedef struct _zGroup;
typedef struct _xEntShadow;
typedef struct _iCollis;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef enum RwTextureFilterMode;
typedef struct zSurfMatFX;
typedef struct RpClump;
typedef struct RwObject;
typedef struct RwTexDictionary;
typedef enum RxClusterValid;
typedef enum RpWorldRenderOrder;
typedef struct zPlayerGlobals;
typedef struct _tagxCamFollow;
typedef struct _xQuat;
typedef struct xAnimTable;
typedef struct zCutsceneZbufferHack;
typedef struct tag_xFile;
typedef struct RwPlane;
typedef struct RwFrustumPlane;
typedef struct sceCdlFILE;
typedef struct RwLinkList;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct p2BaseAsset;
typedef struct tag_iFile;
typedef struct _tagxCamPathAsset;
typedef struct _xRot;
typedef enum _tagPadState;
typedef struct iFogParams;
typedef enum RwFogType;
typedef struct iShadowCache;
typedef struct _tagiPad;
typedef struct RpGeometry;
typedef struct zShaggy1Globals;
typedef struct zCutsceneMgrAsset;
typedef struct _tagxCamShoulder;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct zCheckPoint;
typedef struct RpSector;
typedef enum RxNodeDefEditable;
typedef struct _tagPadAnalog;
typedef struct _tagxCamFollowAsset;
typedef struct _xBound;
typedef struct zSurfTextureAnim;
typedef struct zGlobalGameStats;
typedef struct RxIoSpec;
typedef enum _tagCamType;

typedef void(*type_0)(_xEnt*, _xScene*, float32);
typedef int8*(*type_1)(uint32);
typedef RpAtomic*(*type_2)(RpAtomic*);
typedef void(*type_3)(_xEnt*);
typedef uint32(*type_5)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_6)(RpWorldSector*);
typedef void(*type_8)(_xEnt*);
typedef void(*type_10)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_13)(_xEnt*, _xVec3*);
typedef void(*type_18)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_20)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_27)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_28)(_xEnt*, _xVec3*);
typedef int32(*type_32)(RxNodeDefinition*);
typedef RwObjectHasFrame*(*type_33)(RwObjectHasFrame*);
typedef void(*type_37)(RxNodeDefinition*);
typedef int32(*type_42)(RxPipelineNode*);
typedef void(*type_45)(xMemPool*, void*);
typedef void(*type_51)(RxPipelineNode*);
typedef int32(*type_65)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef int32(*type_69)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwCamera*(*type_71)(RwCamera*);
typedef uint32(*type_72)(RxPipelineNode*, uint32, uint32, void*);
typedef xBase*(*type_75)(uint32);
typedef RpClump*(*type_78)(RpClump*, void*);
typedef int8*(*type_79)(xBase*);
typedef void(*type_80)(int32);
typedef void(*type_84)(RwResEntry*);
typedef int32(*type_85)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_89)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);

typedef uint16 type_4[3];
typedef uint8 type_7[3];
typedef uint16 type_9[3];
typedef float32 type_11[15];
typedef iModelTag type_12[4];
typedef float32 type_14[15];
typedef float32 type_15[2];
typedef RwFrustumPlane type_16[6];
typedef uint8 type_17[22];
typedef uint32 type_19[15];
typedef uint8 type_21[22];
typedef RwV3d type_22[8];
typedef _xVec4 type_23[8];
typedef int8 type_24[128];
typedef int8 type_25[128][6];
typedef float32 type_26[4];
typedef float32 type_29[4];
typedef float32 type_30[4];
typedef int8 type_31[32];
typedef int8 type_34[16];
typedef RwTexCoords* type_35[8];
typedef float32 type_36[4];
typedef float32 type_38[4];
typedef _xCollis type_39[18];
typedef float32 type_40[3];
typedef float32 type_41[4];
typedef float32 type_43[3];
typedef float32 type_44[4];
typedef RwTexCoords* type_46[8];
typedef float32 type_47[4];
typedef uint8 type_48[8];
typedef zGlobalGameStats type_49[30];
typedef uint32 type_50[2];
typedef uint8 type_52[8];
typedef float32 type_53[4];
typedef zGlobalGameStats type_54[13];
typedef _zEnt* type_55[10];
typedef uint8 type_56[2];
typedef uint32 type_57[43];
typedef uint32 type_58[1];
typedef uint8 type_59[3];
typedef uint8 type_60[8];
typedef zGlobalGameStats type_61[4];
typedef int32 type_62[2];
typedef xBase* type_63[43];
typedef uint8 type_64[8];
typedef int32 type_66[2];
typedef RxCluster type_68[1];
typedef zSurfacePropTexAnim type_70[2];
typedef uint8 type_73[3];
typedef uint32 type_74[4];
typedef _xVec3 type_76[2];
typedef zSurfacePropUVFX type_77[2];
typedef _xQuat type_81[2];
typedef zCutsceneZbuffer type_82[4];
typedef int8 type_83[16];
typedef uint8 type_86[8];
typedef int8 type_87[128];
typedef uint32 type_88[2];
typedef uint32 type_90[2];
typedef uint32 type_91[2];
typedef uint32 type_92[2];
typedef _xVec3 type_93[4];
typedef int8 type_94[32];
typedef int8 type_95[32];
typedef zSurfTextureAnim type_96[2];
typedef uint8 type_97[3];
typedef RpLight* type_98[2];
typedef RwFrame* type_99[2];
typedef zSurfUVFX type_100[2];
typedef int8 type_101[16];
typedef int8 type_102[16];
typedef uint8 type_103[3];

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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct rxReq
{
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _zEnv : xBase
{
	p2EnvAsset* easset;
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct xSerial
{
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
	xBase* group_ptr;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct zSurfColorFX
{
	uint16 flags;
	uint16 mode;
	float32 speed;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _zPlatform
{
};

struct zSurfaceProps
{
	zSurfAsset* asset;
	uint32 texanim_flags;
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xFFX
{
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct zGroupAsset : p2BaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _zGroup : xBase
{
	zGroupAsset* asset;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _iCollis
{
	int32 unknown;
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

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct RwLinkList
{
	RwLLLink link;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _tagiPad
{
	int32 port;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RpSector
{
	int32 type;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

zGlobals globals;
int32(*zEnvEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

int32 zEnvEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zEnvLoad(_zEnv* ent, xSerial* s);
void zEnvSave(_zEnv* ent, xSerial* s);
void zEnvRender(_xEnv* env);
void zEnvStartingCamera(_zEnv* env);
void zEnvSetup(_zEnv* env);
void zEnvInit(_zEnv* env, p2EnvAsset* easset);
void zEnvInit(void* env, void* easset);

// zEnvEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1926b0
int32 zEnvEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	// Line 315, Address: 0x1926b0, Func Offset: 0
	// Line 319, Address: 0x1926b4, Func Offset: 0x4
	// Line 322, Address: 0x1926f4, Func Offset: 0x44
	// Line 323, Address: 0x192704, Func Offset: 0x54
	// Line 326, Address: 0x19270c, Func Offset: 0x5c
	// Line 327, Address: 0x192714, Func Offset: 0x64
	// Line 330, Address: 0x19271c, Func Offset: 0x6c
	// Line 331, Address: 0x192724, Func Offset: 0x74
	// Line 334, Address: 0x19272c, Func Offset: 0x7c
	// Line 336, Address: 0x192734, Func Offset: 0x84
	// Line 339, Address: 0x19273c, Func Offset: 0x8c
	// Line 345, Address: 0x192744, Func Offset: 0x94
	// Line 344, Address: 0x192748, Func Offset: 0x98
	// Line 345, Address: 0x19274c, Func Offset: 0x9c
	// Func End, Address: 0x192754, Func Offset: 0xa4
}

// zEnvLoad__FP5_zEnvP7xSerial
// Start address: 0x192760
void zEnvLoad(_zEnv* ent, xSerial* s)
{
	// Line 290, Address: 0x192760, Func Offset: 0
	// Func End, Address: 0x192768, Func Offset: 0x8
}

// zEnvSave__FP5_zEnvP7xSerial
// Start address: 0x192770
void zEnvSave(_zEnv* ent, xSerial* s)
{
	// Line 271, Address: 0x192770, Func Offset: 0
	// Func End, Address: 0x192778, Func Offset: 0x8
}

// zEnvRender__FP5_xEnv
// Start address: 0x192780
void zEnvRender(_xEnv* env)
{
	RwTexture* texptr;
	uint32 texid;
	_zGroup* g;
	RpMaterial* mp;
	zSurfaceProps* pp;
	xSurface* sp;
	int32 i;
	int32 num;
	RpWorld* world;
	// Line 141, Address: 0x192780, Func Offset: 0
	// Line 149, Address: 0x1927a0, Func Offset: 0x20
	// Line 153, Address: 0x1927ac, Func Offset: 0x2c
	// Line 154, Address: 0x1927b0, Func Offset: 0x30
	// Line 157, Address: 0x1927c0, Func Offset: 0x40
	// Line 158, Address: 0x1927c8, Func Offset: 0x48
	// Line 160, Address: 0x1927cc, Func Offset: 0x4c
	// Line 165, Address: 0x1927e0, Func Offset: 0x60
	// Line 168, Address: 0x1927f0, Func Offset: 0x70
	// Line 170, Address: 0x1927fc, Func Offset: 0x7c
	// Line 172, Address: 0x192804, Func Offset: 0x84
	// Line 173, Address: 0x192808, Func Offset: 0x88
	// Line 175, Address: 0x192810, Func Offset: 0x90
	// Line 176, Address: 0x192818, Func Offset: 0x98
	// Line 177, Address: 0x192824, Func Offset: 0xa4
	// Line 179, Address: 0x19282c, Func Offset: 0xac
	// Line 184, Address: 0x192834, Func Offset: 0xb4
	// Line 247, Address: 0x192848, Func Offset: 0xc8
	// Line 257, Address: 0x192850, Func Offset: 0xd0
	// Func End, Address: 0x192874, Func Offset: 0xf4
}

// zEnvStartingCamera__FP5_zEnv
// Start address: 0x192880
void zEnvStartingCamera(_zEnv* env)
{
	_tagxCam* cam;
	// Line 121, Address: 0x192880, Func Offset: 0
	// Line 126, Address: 0x192888, Func Offset: 0x8
	// Line 128, Address: 0x192898, Func Offset: 0x18
	// Line 130, Address: 0x1928a0, Func Offset: 0x20
	// Line 131, Address: 0x1928ac, Func Offset: 0x2c
	// Line 137, Address: 0x1928b4, Func Offset: 0x34
	// Func End, Address: 0x1928c0, Func Offset: 0x40
}

// zEnvSetup__FP5_zEnv
// Start address: 0x1928c0
void zEnvSetup(_zEnv* env)
{
	// Line 105, Address: 0x1928c0, Func Offset: 0
	// Line 110, Address: 0x1928cc, Func Offset: 0xc
	// Line 115, Address: 0x1928d4, Func Offset: 0x14
	// Line 116, Address: 0x1928ec, Func Offset: 0x2c
	// Func End, Address: 0x1928fc, Func Offset: 0x3c
}

// zEnvInit__FP5_zEnvP10p2EnvAsset
// Start address: 0x192900
void zEnvInit(_zEnv* env, p2EnvAsset* easset)
{
	void* buf;
	uint32 bufsize;
	// Line 37, Address: 0x192900, Func Offset: 0
	// Line 39, Address: 0x192914, Func Offset: 0x14
	// Line 43, Address: 0x19291c, Func Offset: 0x1c
	// Line 42, Address: 0x192920, Func Offset: 0x20
	// Line 43, Address: 0x192924, Func Offset: 0x24
	// Line 45, Address: 0x19292c, Func Offset: 0x2c
	// Line 46, Address: 0x192938, Func Offset: 0x38
	// Line 49, Address: 0x192944, Func Offset: 0x44
	// Line 56, Address: 0x192950, Func Offset: 0x50
	// Line 58, Address: 0x19295c, Func Offset: 0x5c
	// Line 59, Address: 0x192964, Func Offset: 0x64
	// Line 63, Address: 0x19297c, Func Offset: 0x7c
	// Line 66, Address: 0x192984, Func Offset: 0x84
	// Line 68, Address: 0x192990, Func Offset: 0x90
	// Line 69, Address: 0x19299c, Func Offset: 0x9c
	// Line 70, Address: 0x1929a4, Func Offset: 0xa4
	// Line 74, Address: 0x1929b8, Func Offset: 0xb8
	// Line 76, Address: 0x1929c4, Func Offset: 0xc4
	// Line 77, Address: 0x1929d0, Func Offset: 0xd0
	// Line 78, Address: 0x1929d8, Func Offset: 0xd8
	// Line 82, Address: 0x1929ec, Func Offset: 0xec
	// Line 84, Address: 0x1929f8, Func Offset: 0xf8
	// Line 85, Address: 0x192a04, Func Offset: 0x104
	// Line 86, Address: 0x192a0c, Func Offset: 0x10c
	// Line 90, Address: 0x192a24, Func Offset: 0x124
	// Line 92, Address: 0x192a3c, Func Offset: 0x13c
	// Line 94, Address: 0x192a48, Func Offset: 0x148
	// Line 95, Address: 0x192a50, Func Offset: 0x150
	// Line 101, Address: 0x192a64, Func Offset: 0x164
	// Func End, Address: 0x192a78, Func Offset: 0x178
}

// zEnvInit__FPvPv
// Start address: 0x192a80
void zEnvInit(void* env, void* easset)
{
	// Line 33, Address: 0x192a80, Func Offset: 0
	// Func End, Address: 0x192a88, Func Offset: 0x8
}

