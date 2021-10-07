typedef struct xAnimTransition;
typedef struct _tagxCamShoulder;
typedef struct _xEnt;
typedef struct xBase;
typedef struct p2EntHangableAsset;
typedef struct RxPipelineCluster;
typedef struct _xScene;
typedef struct _zEnt;
typedef struct RxPipelineNodeParam;
typedef struct xAnimState;
typedef struct RxNodeDefinition;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct p2EnvAsset;
typedef struct tag_iFile;
typedef struct _xEntCollis;
typedef struct RwLLLink;
typedef struct RpCollSector;
typedef struct _tagxRumble;
typedef struct rxHeapBlockHeader;
typedef struct _xBox;
typedef struct RwRGBAReal;
typedef struct _tagxCamFollowAsset;
typedef struct RpMeshHeader;
typedef struct RxPipelineNode;
typedef struct xModelInstance;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterial;
typedef struct iEnv;
typedef struct xCamAsset;
typedef struct _tagRain;
typedef enum RwCameraProjection;
typedef struct RpWorld;
typedef struct RwObjectHasFrame;
typedef struct _tagEmitSphere;
typedef struct _xVec3;
typedef struct RxClusterDefinition;
typedef struct RwTexture;
typedef enum RxClusterValidityReq;
typedef struct RwV2d;
typedef struct RxPipelineRequiresCluster;
typedef enum _tagCamType;
typedef struct _zCutsceneMgr;
typedef struct RxPipeline;
typedef struct zCutsceneMgrAsset;
typedef struct RpAtomic;
typedef struct _zParEmitter;
typedef struct _xCollis;
typedef struct iFogParams;
typedef struct p2LinkAsset;
typedef struct xSurface;
typedef struct RpTriangle;
typedef struct zPlayerGlobals;
typedef struct xAnimEffect;
typedef struct p2BaseAsset;
typedef struct RpLight;
typedef struct _zEntHangable;
typedef struct _xEntFrame;
typedef struct _zFog;
typedef struct _tagxCamStatic;
typedef struct xCutscene;
typedef struct RwRGBA;
typedef struct RpWorldSector;
typedef enum RwTextureFilterMode;
typedef struct p2EntAsset;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct RwObject;
typedef struct RwFrame;
typedef struct xAnimActiveEffect;
typedef struct zCutsceneZbufferHack;
typedef enum RxClusterValid;
typedef struct _tagEmitRect;
typedef struct RpPolygon;
typedef struct xAnimPlay;
typedef struct RwV3d;
typedef struct RwResEntry;
typedef struct _tagxCamFrame;
typedef enum _tagRumbleType;
typedef struct RwPlane;
typedef struct RpMorphTarget;
typedef struct RpVertexNormal;
typedef struct RwCamera;
typedef struct RwRaster;
typedef struct _tagWind;
typedef struct RwLinkList;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct zParEmitterAsset;
typedef struct xAnimFile;
typedef struct xParGroup;
typedef struct RxPacket;
typedef struct _tagxCamStaticFollow;
typedef struct xAnimTransitionList;
typedef struct iModelTag;
typedef struct _zEntSimpleObj;
typedef struct _xMat4x3;
typedef struct xCutsceneData;
typedef struct xModelPool;
typedef struct zShaggy1Globals;
typedef struct xFFX;
typedef struct xCutsceneTime;
typedef struct _tagxCam;
typedef struct _iCollis;
typedef struct xParCmdTex;
typedef struct _zEnv;
typedef struct rxReq;
typedef struct p2SimpleObjAsset;
typedef enum RwFogType;
typedef struct _tagEmitLine;
typedef struct xQCData;
typedef struct RpClump;
typedef struct zFogAsset;
typedef struct RwTexDictionary;
typedef struct zCheckPoint;
typedef struct xMemPool;
typedef enum RpWorldRenderOrder;
typedef struct _xEnv;
typedef struct _xQuat;
typedef struct xAnimSingle;
typedef struct _xEntShadow;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct _xBBox;
typedef struct zGlobalGameStats;
typedef enum RxClusterForcePresent;
typedef struct RwFrustumPlane;
typedef struct _tagClimate;
typedef struct zAssetPickupTable;
typedef struct _tagxCamPath;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct RxClusterRef;
typedef struct _tagp2CamStaticAsset;
typedef enum RxNodeDefEditable;
typedef struct xPar;
typedef struct RwMatrixTag;
typedef struct RxIoSpec;
typedef struct xParCmdAsset;
typedef struct _tagEmitVolume;
typedef struct xCutsceneInfo;
typedef struct zJumpParam;
typedef struct _xRot;
typedef struct RxNodeMethods;
typedef struct zGlobals;
typedef struct RpGeometry;
typedef struct xAnimTable;
typedef struct RwSurfaceProperties;
typedef struct zPortalAsset;
typedef struct _tagCamInfo;
typedef struct xCutsceneBreak;
typedef struct _tagxPad;
typedef struct RpMaterialList;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RxHeap;
typedef struct RpSector;
typedef struct zScene;
typedef struct _tagEmitOffsetPoint;
typedef struct RxCluster;
typedef struct _xEntDrive;
typedef struct _tagxCamFollow;
typedef struct iShadowCache;
typedef struct _zPortal;
typedef struct RwSphere;
typedef enum _tagPadState;
typedef struct zPlayerStatic;
typedef struct zCutsceneZbuffer;
typedef struct _tagiPad;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCamPathAsset;
typedef enum RwTextureAddressMode;
typedef struct _zParEmitterCustomSettings;
typedef struct _zPlatform;
typedef struct _xSphere;
typedef struct _xBound;
typedef struct _tagPadAnalog;
typedef struct _tagFirework;
typedef struct _tagEmitCircle;
typedef struct tag_xFile;
typedef struct _xCylinder;
typedef struct sceCdlFILE;

typedef int32(*type_0)(RxNodeDefinition*);
typedef void(*type_1)(_xEnt*, _xScene*, float32);
typedef void(*type_2)(int32);
typedef void(*type_6)(_xEnt*);
typedef void(*type_8)(RxNodeDefinition*);
typedef xBase*(*type_12)(uint32);
typedef void(*type_17)(_xEnt*);
typedef void(*type_20)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_21)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_22)(RxPipelineNode*);
typedef int32(*type_26)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int8*(*type_28)(xBase*);
typedef void(*type_32)(_xEnt*, _xVec3*);
typedef void(*type_33)(RxPipelineNode*);
typedef int8*(*type_36)(uint32);
typedef void(*type_37)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_42)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwObjectHasFrame*(*type_44)(RwObjectHasFrame*);
typedef int32(*type_47)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_56)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_58)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_59)(_xEnt*, _xVec3*);
typedef void(*type_64)(RwResEntry*);
typedef RwCamera*(*type_68)(RwCamera*);
typedef RwCamera*(*type_74)(RwCamera*);
typedef void(*type_76)(void*, xParGroup*);
typedef void(*type_79)(xMemPool*, void*);
typedef RpClump*(*type_83)(RpClump*, void*);
typedef RpWorldSector*(*type_87)(RpWorldSector*);
typedef RpAtomic*(*type_99)(RpAtomic*);
typedef uint32(*type_101)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);

typedef float32 type_3[3];
typedef RwV3d type_4[8];
typedef uint8 type_5[4];
typedef zCutsceneZbuffer type_7[4];
typedef uint8 type_9[4];
typedef zGlobalGameStats type_10[30];
typedef int8 type_11[16];
typedef zGlobalGameStats type_13[13];
typedef uint8 type_14[8];
typedef uint32 type_15[1];
typedef _zEnt* type_16[10];
typedef uint8 type_18[4];
typedef int8 type_19[128];
typedef zGlobalGameStats type_23[4];
typedef int32 type_24[2];
typedef int8 type_25[64];
typedef uint8 type_27[4];
typedef uint32 type_29[2];
typedef int32 type_30[2];
typedef uint8 type_31[3];
typedef uint32 type_34[2];
typedef _tagFirework type_35[10];
typedef uint32 type_38[43];
typedef _xVec3 type_39[5];
typedef uint32 type_40[2];
typedef float32 type_41[2];
typedef xBase* type_43[43];
typedef uint8 type_45[22];
typedef RpLight* type_46[2];
typedef uint8 type_48[22];
typedef RwTexCoords* type_49[8];
typedef RwFrame* type_50[2];
typedef uint8 type_51[3];
typedef int8 type_52[16];
typedef RxCluster type_53[1];
typedef _xVec3 type_54[5];
typedef int8 type_55[16];
typedef uint32 type_57[4];
typedef uint32 type_60[2];
typedef RwTexCoords* type_61[8];
typedef uint8 type_62[4];
typedef int8 type_63[64];
typedef _xVec4 type_65[8];
typedef uint8 type_66[4];
typedef uint8 type_67[3];
typedef uint8 type_69[3];
typedef _xCollis type_70[18];
typedef float32 type_71[15];
typedef float32 type_72[4];
typedef float32 type_73[15];
typedef uint32 type_75[15];
typedef uint8 type_77[8];
typedef float32 type_78[4];
typedef uint8 type_80[8];
typedef uint8 type_81[2];
typedef float32 type_82[4];
typedef uint8 type_84[8];
typedef uint8 type_85[2];
typedef uint8 type_86[8];
typedef uint8 type_88[3];
typedef uint32 type_89[2];
typedef uint8 type_90[4];
typedef uint8 type_91[3];
typedef iModelTag type_92[4];
typedef _xVec3 type_93[2];
typedef int8 type_94[16];
typedef int8 type_95[32];
typedef uint8 type_96[3];
typedef _xQuat type_97[2];
typedef int8 type_98[32];
typedef uint8 type_100[2];
typedef uint8 type_102[2];
typedef uint8 type_103[3];
typedef int8 type_104[128];
typedef int8 type_105[128][6];
typedef _xVec3 type_106[4];
typedef int8 type_107[64];
typedef float32 type_108[4];
typedef float32 type_109[4];
typedef float32 type_110[4];
typedef uint8 type_111[3];
typedef float32 type_112[4];
typedef uint16 type_113[3];
typedef int8 type_114[32];
typedef float32 type_115[4];
typedef uint16 type_116[3];
typedef float32 type_117[4];
typedef float32 type_118[4];
typedef RwFrustumPlane type_119[6];
typedef float32 type_120[3];

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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct _tagRain
{
	int32 rain;
	float32 strength;
	_zParEmitter* rain_emitter;
	_zParEmitter* snow_emitter;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _tagEmitSphere
{
	float32 radius;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct _zFog : xBase
{
	zFogAsset* tasset;
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _tagWind
{
	float32 strength;
	float32 angle;
	_xVec3 dir;
};

struct RwLinkList
{
	RwLLLink link;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _zEntSimpleObj : _zEnt
{
	p2SimpleObjAsset* sasset;
	uint32 sflags;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xFFX
{
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _iCollis
{
	int32 unknown;
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

struct _zEnv : xBase
{
	p2EnvAsset* easset;
};

struct rxReq
{
};

struct p2SimpleObjAsset
{
	float32 animSpeed;
	uint32 initAnimState;
	uint8 collType;
	uint8 flags;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct zFogAsset : p2BaseAsset
{
	uint8 bkgndColor[4];
	uint8 fogColor[4];
	float32 fogDensity;
	float32 fogStart;
	float32 fogStop;
	float32 transitionTime;
	uint8 fogType;
	uint8 padFog[3];
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _tagClimate
{
	_tagRain rain;
	_tagWind wind;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

struct RpSector
{
	int32 type;
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

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _tagiPad
{
	int32 port;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _zPlatform
{
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _tagFirework
{
	int32 state;
	float32 timer;
	_xVec3 vel;
	_xVec3 pos;
	float32 fuel;
};

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

int32 sGameExtrasOn;
int32 sDay;
int32 sMonth;
int32 sFireworksOn;
int32 sColoredFountain;
_zParEmitter* sFireworkTrailEmit;
_zParEmitter* sFirework1Emit;
_zParEmitter* sFirework2Emit;
_zFog* sFog;
float32 sFogIntensity;
float32 sFogPrevIntensity;
int32 sThunderOn;
uint32 sThunderFar1;
uint32 sThunderFar2;
uint32 sThunderNear1;
uint32 sThunderNear2;
uint32 sThunderNear3;
uint32 sThunderNear4;
_tagFirework sFirework[10];
zGlobals globals;
_tagClimate gClimate;
_zEnv* gCurEnv;

int32 zGameExtraIsAnnaBday();
int32 zGameExtraIsShirazBday();
int32 zGameExtraIsValentines();
void UpdateFireworks(float32 dt);
void UpdateThunder();
void UpdateColoredFountain(float32 dt);
void Init4thJuly();
void InitStPatricksDay();
void zGameExtrasReset();
void zGameExtras(float32 dt);
void zGameExtrasInit();

// zGameExtraIsAnnaBday__Fv
// Start address: 0x27f020
int32 zGameExtraIsAnnaBday()
{
	// Line 882, Address: 0x27f020, Func Offset: 0
	// Line 883, Address: 0x27f040, Func Offset: 0x20
	// Line 884, Address: 0x27f048, Func Offset: 0x28
	// Line 885, Address: 0x27f04c, Func Offset: 0x2c
	// Func End, Address: 0x27f054, Func Offset: 0x34
}

// zGameExtraIsShirazBday__Fv
// Start address: 0x27f060
int32 zGameExtraIsShirazBday()
{
	// Line 874, Address: 0x27f060, Func Offset: 0
	// Line 875, Address: 0x27f07c, Func Offset: 0x1c
	// Line 876, Address: 0x27f084, Func Offset: 0x24
	// Line 877, Address: 0x27f088, Func Offset: 0x28
	// Func End, Address: 0x27f090, Func Offset: 0x30
}

// zGameExtraIsValentines__Fv
// Start address: 0x27f090
int32 zGameExtraIsValentines()
{
	// Line 867, Address: 0x27f090, Func Offset: 0
	// Line 868, Address: 0x27f0b0, Func Offset: 0x20
	// Line 869, Address: 0x27f0b8, Func Offset: 0x28
	// Line 870, Address: 0x27f0bc, Func Offset: 0x2c
	// Func End, Address: 0x27f0c4, Func Offset: 0x34
}

// UpdateFireworks__Ff
// Start address: 0x27f0d0
void UpdateFireworks(float32 dt)
{
	_zParEmitterCustomSettings xplo_info;
	_zParEmitter* femit;
	_zParEmitterCustomSettings trail_info;
	int32 i;
	iFogParams fog;
	int32 july_4_rgb;
	_xVec3 h002_launch[5];
	_xVec3 h001_launch[5];
	int8 init;
	// Line 683, Address: 0x27f0d0, Func Offset: 0
	// Line 684, Address: 0x27f104, Func Offset: 0x34
	// Line 686, Address: 0x27f120, Func Offset: 0x50
	// Line 690, Address: 0x27f12c, Func Offset: 0x5c
	// Line 697, Address: 0x27f158, Func Offset: 0x88
	// Line 699, Address: 0x27f160, Func Offset: 0x90
	// Line 698, Address: 0x27f168, Func Offset: 0x98
	// Line 699, Address: 0x27f16c, Func Offset: 0x9c
	// Line 698, Address: 0x27f17c, Func Offset: 0xac
	// Line 699, Address: 0x27f184, Func Offset: 0xb4
	// Line 700, Address: 0x27f1a0, Func Offset: 0xd0
	// Line 701, Address: 0x27f1ac, Func Offset: 0xdc
	// Line 702, Address: 0x27f234, Func Offset: 0x164
	// Line 703, Address: 0x27f2b8, Func Offset: 0x1e8
	// Line 704, Address: 0x27f33c, Func Offset: 0x26c
	// Line 705, Address: 0x27f3c0, Func Offset: 0x2f0
	// Line 706, Address: 0x27f444, Func Offset: 0x374
	// Line 707, Address: 0x27f4c8, Func Offset: 0x3f8
	// Line 708, Address: 0x27f54c, Func Offset: 0x47c
	// Line 711, Address: 0x27f5cc, Func Offset: 0x4fc
	// Line 708, Address: 0x27f5d0, Func Offset: 0x500
	// Line 711, Address: 0x27f5d4, Func Offset: 0x504
	// Line 712, Address: 0x27f5e0, Func Offset: 0x510
	// Line 716, Address: 0x27f5e8, Func Offset: 0x518
	// Line 718, Address: 0x27f5fc, Func Offset: 0x52c
	// Line 716, Address: 0x27f600, Func Offset: 0x530
	// Line 718, Address: 0x27f604, Func Offset: 0x534
	// Line 719, Address: 0x27f61c, Func Offset: 0x54c
	// Line 722, Address: 0x27f650, Func Offset: 0x580
	// Line 729, Address: 0x27f678, Func Offset: 0x5a8
	// Line 731, Address: 0x27f684, Func Offset: 0x5b4
	// Line 732, Address: 0x27f688, Func Offset: 0x5b8
	// Line 731, Address: 0x27f690, Func Offset: 0x5c0
	// Line 732, Address: 0x27f694, Func Offset: 0x5c4
	// Line 735, Address: 0x27f6a4, Func Offset: 0x5d4
	// Line 736, Address: 0x27f768, Func Offset: 0x698
	// Line 738, Address: 0x27f770, Func Offset: 0x6a0
	// Line 739, Address: 0x27f784, Func Offset: 0x6b4
	// Line 743, Address: 0x27f78c, Func Offset: 0x6bc
	// Line 744, Address: 0x27f798, Func Offset: 0x6c8
	// Line 745, Address: 0x27f7a4, Func Offset: 0x6d4
	// Line 748, Address: 0x27f7b0, Func Offset: 0x6e0
	// Line 750, Address: 0x27f7dc, Func Offset: 0x70c
	// Line 753, Address: 0x27f804, Func Offset: 0x734
	// Line 756, Address: 0x27f81c, Func Offset: 0x74c
	// Line 753, Address: 0x27f820, Func Offset: 0x750
	// Line 759, Address: 0x27f830, Func Offset: 0x760
	// Line 765, Address: 0x27f838, Func Offset: 0x768
	// Line 766, Address: 0x27f83c, Func Offset: 0x76c
	// Line 765, Address: 0x27f844, Func Offset: 0x774
	// Line 766, Address: 0x27f848, Func Offset: 0x778
	// Line 767, Address: 0x27f858, Func Offset: 0x788
	// Line 771, Address: 0x27f868, Func Offset: 0x798
	// Line 778, Address: 0x27f870, Func Offset: 0x7a0
	// Line 780, Address: 0x27f874, Func Offset: 0x7a4
	// Line 771, Address: 0x27f878, Func Offset: 0x7a8
	// Line 772, Address: 0x27f884, Func Offset: 0x7b4
	// Line 773, Address: 0x27f898, Func Offset: 0x7c8
	// Line 778, Address: 0x27f8ac, Func Offset: 0x7dc
	// Line 779, Address: 0x27f8b0, Func Offset: 0x7e0
	// Line 780, Address: 0x27f8b4, Func Offset: 0x7e4
	// Line 779, Address: 0x27f8b8, Func Offset: 0x7e8
	// Line 780, Address: 0x27f8cc, Func Offset: 0x7fc
	// Line 784, Address: 0x27f8d8, Func Offset: 0x808
	// Line 788, Address: 0x27f8f4, Func Offset: 0x824
	// Line 791, Address: 0x27f920, Func Offset: 0x850
	// Line 792, Address: 0x27f924, Func Offset: 0x854
	// Line 793, Address: 0x27f948, Func Offset: 0x878
	// Line 796, Address: 0x27f950, Func Offset: 0x880
	// Line 797, Address: 0x27f954, Func Offset: 0x884
	// Line 800, Address: 0x27f958, Func Offset: 0x888
	// Line 797, Address: 0x27f95c, Func Offset: 0x88c
	// Line 800, Address: 0x27f970, Func Offset: 0x8a0
	// Line 803, Address: 0x27f98c, Func Offset: 0x8bc
	// Line 806, Address: 0x27f998, Func Offset: 0x8c8
	// Line 807, Address: 0x27f9a4, Func Offset: 0x8d4
	// Line 808, Address: 0x27f9ac, Func Offset: 0x8dc
	// Line 809, Address: 0x27f9b4, Func Offset: 0x8e4
	// Line 810, Address: 0x27f9bc, Func Offset: 0x8ec
	// Line 813, Address: 0x27f9c8, Func Offset: 0x8f8
	// Line 814, Address: 0x27f9d4, Func Offset: 0x904
	// Line 815, Address: 0x27f9dc, Func Offset: 0x90c
	// Line 816, Address: 0x27f9e0, Func Offset: 0x910
	// Line 820, Address: 0x27f9e8, Func Offset: 0x918
	// Line 821, Address: 0x27f9f4, Func Offset: 0x924
	// Line 822, Address: 0x27fa00, Func Offset: 0x930
	// Line 823, Address: 0x27fa0c, Func Offset: 0x93c
	// Line 824, Address: 0x27fa10, Func Offset: 0x940
	// Line 825, Address: 0x27fa1c, Func Offset: 0x94c
	// Line 827, Address: 0x27fa2c, Func Offset: 0x95c
	// Line 831, Address: 0x27fa34, Func Offset: 0x964
	// Line 832, Address: 0x27fa60, Func Offset: 0x990
	// Line 833, Address: 0x27fa8c, Func Offset: 0x9bc
	// Line 836, Address: 0x27fab8, Func Offset: 0x9e8
	// Line 838, Address: 0x27fad8, Func Offset: 0xa08
	// Line 841, Address: 0x27fae0, Func Offset: 0xa10
	// Line 847, Address: 0x27faf4, Func Offset: 0xa24
	// Line 849, Address: 0x27fafc, Func Offset: 0xa2c
	// Line 847, Address: 0x27fb04, Func Offset: 0xa34
	// Line 849, Address: 0x27fb08, Func Offset: 0xa38
	// Line 847, Address: 0x27fb0c, Func Offset: 0xa3c
	// Line 849, Address: 0x27fb14, Func Offset: 0xa44
	// Line 847, Address: 0x27fb18, Func Offset: 0xa48
	// Line 849, Address: 0x27fb2c, Func Offset: 0xa5c
	// Line 850, Address: 0x27fb38, Func Offset: 0xa68
	// Line 851, Address: 0x27fb44, Func Offset: 0xa74
	// Line 852, Address: 0x27fb58, Func Offset: 0xa88
	// Line 854, Address: 0x27fb90, Func Offset: 0xac0
	// Line 856, Address: 0x27fbc0, Func Offset: 0xaf0
	// Line 857, Address: 0x27fbc8, Func Offset: 0xaf8
	// Line 856, Address: 0x27fbd0, Func Offset: 0xb00
	// Line 857, Address: 0x27fbd4, Func Offset: 0xb04
	// Line 858, Address: 0x27fbe4, Func Offset: 0xb14
	// Line 861, Address: 0x27fbe8, Func Offset: 0xb18
	// Line 862, Address: 0x27fbf8, Func Offset: 0xb28
	// Func End, Address: 0x27fc30, Func Offset: 0xb60
}

// UpdateThunder__Ff
// Start address: 0x27fc30
void UpdateThunder()
{
	iFogParams fog;
	// Line 623, Address: 0x27fc30, Func Offset: 0
	// Line 624, Address: 0x27fc48, Func Offset: 0x18
	// Line 628, Address: 0x27fc54, Func Offset: 0x24
	// Line 633, Address: 0x27fc80, Func Offset: 0x50
	// Line 634, Address: 0x27fc98, Func Offset: 0x68
	// Line 635, Address: 0x27fcc0, Func Offset: 0x90
	// Line 638, Address: 0x27fcd4, Func Offset: 0xa4
	// Line 639, Address: 0x27fcdc, Func Offset: 0xac
	// Line 640, Address: 0x27fcec, Func Offset: 0xbc
	// Line 641, Address: 0x27fcf8, Func Offset: 0xc8
	// Line 642, Address: 0x27fd04, Func Offset: 0xd4
	// Line 643, Address: 0x27fd8c, Func Offset: 0x15c
	// Line 644, Address: 0x27fe10, Func Offset: 0x1e0
	// Line 645, Address: 0x27fe94, Func Offset: 0x264
	// Line 646, Address: 0x27ff18, Func Offset: 0x2e8
	// Line 647, Address: 0x27ff9c, Func Offset: 0x36c
	// Line 648, Address: 0x280020, Func Offset: 0x3f0
	// Line 649, Address: 0x2800a4, Func Offset: 0x474
	// Line 652, Address: 0x280124, Func Offset: 0x4f4
	// Line 649, Address: 0x280128, Func Offset: 0x4f8
	// Line 652, Address: 0x28012c, Func Offset: 0x4fc
	// Line 653, Address: 0x280138, Func Offset: 0x508
	// Line 657, Address: 0x280140, Func Offset: 0x510
	// Line 659, Address: 0x280154, Func Offset: 0x524
	// Line 657, Address: 0x280158, Func Offset: 0x528
	// Line 659, Address: 0x28015c, Func Offset: 0x52c
	// Line 660, Address: 0x280174, Func Offset: 0x544
	// Line 663, Address: 0x280178, Func Offset: 0x548
	// Line 666, Address: 0x280198, Func Offset: 0x568
	// Line 669, Address: 0x2801b4, Func Offset: 0x584
	// Line 674, Address: 0x2801f4, Func Offset: 0x5c4
	// Line 676, Address: 0x280210, Func Offset: 0x5e0
	// Line 677, Address: 0x280230, Func Offset: 0x600
	// Line 680, Address: 0x280234, Func Offset: 0x604
	// Func End, Address: 0x280250, Func Offset: 0x620
}

// UpdateColoredFountain__Ff
// Start address: 0x280250
void UpdateColoredFountain(float32 dt)
{
	zParEmitterAsset* a;
	_zParEmitter* fe;
	float32 ftimer;
	int8 init;
	// Line 534, Address: 0x280250, Func Offset: 0
	// Line 535, Address: 0x28025c, Func Offset: 0xc
	// Line 537, Address: 0x280278, Func Offset: 0x28
	// Line 540, Address: 0x280284, Func Offset: 0x34
	// Line 541, Address: 0x280288, Func Offset: 0x38
	// Line 540, Address: 0x280290, Func Offset: 0x40
	// Line 541, Address: 0x280294, Func Offset: 0x44
	// Line 543, Address: 0x2802a4, Func Offset: 0x54
	// Line 546, Address: 0x2802ac, Func Offset: 0x5c
	// Line 547, Address: 0x2802b8, Func Offset: 0x68
	// Line 552, Address: 0x2802c0, Func Offset: 0x70
	// Line 553, Address: 0x2802ec, Func Offset: 0x9c
	// Line 554, Address: 0x280318, Func Offset: 0xc8
	// Line 556, Address: 0x280348, Func Offset: 0xf8
	// Line 560, Address: 0x280354, Func Offset: 0x104
	// Line 561, Address: 0x280380, Func Offset: 0x130
	// Line 562, Address: 0x2803ac, Func Offset: 0x15c
	// Line 564, Address: 0x2803dc, Func Offset: 0x18c
	// Line 568, Address: 0x2803e8, Func Offset: 0x198
	// Line 569, Address: 0x280414, Func Offset: 0x1c4
	// Line 570, Address: 0x280440, Func Offset: 0x1f0
	// Line 572, Address: 0x280470, Func Offset: 0x220
	// Line 576, Address: 0x28047c, Func Offset: 0x22c
	// Line 577, Address: 0x2804a8, Func Offset: 0x258
	// Line 578, Address: 0x2804d4, Func Offset: 0x284
	// Line 581, Address: 0x280504, Func Offset: 0x2b4
	// Func End, Address: 0x280514, Func Offset: 0x2c4
}

// Init4thJuly__Fv
// Start address: 0x280520
void Init4thJuly()
{
	int8 emitter_txt[64];
	int32 i;
	int32 idx;
	zParEmitterAsset* a;
	_zParEmitter* fe;
	// Line 327, Address: 0x280520, Func Offset: 0
	// Line 329, Address: 0x280528, Func Offset: 0x8
	// Line 327, Address: 0x28052c, Func Offset: 0xc
	// Line 329, Address: 0x280530, Func Offset: 0x10
	// Line 330, Address: 0x28053c, Func Offset: 0x1c
	// Line 333, Address: 0x280544, Func Offset: 0x24
	// Line 335, Address: 0x280548, Func Offset: 0x28
	// Line 336, Address: 0x28054c, Func Offset: 0x2c
	// Line 337, Address: 0x280550, Func Offset: 0x30
	// Line 335, Address: 0x280554, Func Offset: 0x34
	// Line 336, Address: 0x28055c, Func Offset: 0x3c
	// Line 339, Address: 0x280564, Func Offset: 0x44
	// Line 337, Address: 0x280568, Func Offset: 0x48
	// Line 339, Address: 0x28056c, Func Offset: 0x4c
	// Line 341, Address: 0x280578, Func Offset: 0x58
	// Line 343, Address: 0x28057c, Func Offset: 0x5c
	// Line 344, Address: 0x280588, Func Offset: 0x68
	// Line 347, Address: 0x280590, Func Offset: 0x70
	// Line 345, Address: 0x280594, Func Offset: 0x74
	// Line 347, Address: 0x280598, Func Offset: 0x78
	// Line 349, Address: 0x2805a4, Func Offset: 0x84
	// Line 351, Address: 0x2805a8, Func Offset: 0x88
	// Line 353, Address: 0x2805ac, Func Offset: 0x8c
	// Line 351, Address: 0x2805b0, Func Offset: 0x90
	// Line 352, Address: 0x2805b8, Func Offset: 0x98
	// Line 355, Address: 0x2805c0, Func Offset: 0xa0
	// Line 353, Address: 0x2805c4, Func Offset: 0xa4
	// Line 355, Address: 0x2805c8, Func Offset: 0xa8
	// Line 357, Address: 0x2805d4, Func Offset: 0xb4
	// Line 359, Address: 0x2805d8, Func Offset: 0xb8
	// Line 364, Address: 0x2805dc, Func Offset: 0xbc
	// Line 365, Address: 0x2805e0, Func Offset: 0xc0
	// Line 359, Address: 0x2805e4, Func Offset: 0xc4
	// Line 360, Address: 0x2805ec, Func Offset: 0xcc
	// Line 361, Address: 0x2805f0, Func Offset: 0xd0
	// Line 360, Address: 0x2805f4, Func Offset: 0xd4
	// Line 361, Address: 0x2805f8, Func Offset: 0xd8
	// Line 368, Address: 0x280600, Func Offset: 0xe0
	// Line 369, Address: 0x280614, Func Offset: 0xf4
	// Line 370, Address: 0x28061c, Func Offset: 0xfc
	// Line 372, Address: 0x280624, Func Offset: 0x104
	// Line 373, Address: 0x280628, Func Offset: 0x108
	// Line 375, Address: 0x280630, Func Offset: 0x110
	// Line 377, Address: 0x280638, Func Offset: 0x118
	// Line 378, Address: 0x280644, Func Offset: 0x124
	// Line 379, Address: 0x28064c, Func Offset: 0x12c
	// Line 380, Address: 0x280650, Func Offset: 0x130
	// Line 381, Address: 0x280658, Func Offset: 0x138
	// Line 383, Address: 0x280664, Func Offset: 0x144
	// Line 384, Address: 0x280670, Func Offset: 0x150
	// Line 385, Address: 0x280678, Func Offset: 0x158
	// Line 386, Address: 0x280680, Func Offset: 0x160
	// Line 389, Address: 0x280688, Func Offset: 0x168
	// Line 390, Address: 0x280694, Func Offset: 0x174
	// Line 391, Address: 0x2806a0, Func Offset: 0x180
	// Line 393, Address: 0x2806ac, Func Offset: 0x18c
	// Line 394, Address: 0x2806b0, Func Offset: 0x190
	// Line 395, Address: 0x2806b4, Func Offset: 0x194
	// Line 396, Address: 0x2806c0, Func Offset: 0x1a0
	// Line 397, Address: 0x2806c4, Func Offset: 0x1a4
	// Line 398, Address: 0x2806c8, Func Offset: 0x1a8
	// Line 399, Address: 0x2806d8, Func Offset: 0x1b8
	// Func End, Address: 0x2806ec, Func Offset: 0x1cc
}

// InitStPatricksDay__Fv
// Start address: 0x2806f0
void InitStPatricksDay()
{
	int8 emitter_txt[64];
	int32 i;
	zParEmitterAsset* a;
	_zParEmitter* fe;
	// Line 257, Address: 0x2806f0, Func Offset: 0
	// Line 259, Address: 0x2806f4, Func Offset: 0x4
	// Line 257, Address: 0x2806f8, Func Offset: 0x8
	// Line 259, Address: 0x2806fc, Func Offset: 0xc
	// Line 260, Address: 0x280708, Func Offset: 0x18
	// Line 263, Address: 0x280710, Func Offset: 0x20
	// Line 265, Address: 0x280714, Func Offset: 0x24
	// Line 266, Address: 0x280718, Func Offset: 0x28
	// Line 267, Address: 0x28071c, Func Offset: 0x2c
	// Line 265, Address: 0x280720, Func Offset: 0x30
	// Line 266, Address: 0x280728, Func Offset: 0x38
	// Line 269, Address: 0x280730, Func Offset: 0x40
	// Line 267, Address: 0x280734, Func Offset: 0x44
	// Line 269, Address: 0x280738, Func Offset: 0x48
	// Line 271, Address: 0x280744, Func Offset: 0x54
	// Line 273, Address: 0x280748, Func Offset: 0x58
	// Line 274, Address: 0x28074c, Func Offset: 0x5c
	// Line 275, Address: 0x280750, Func Offset: 0x60
	// Line 273, Address: 0x280754, Func Offset: 0x64
	// Line 274, Address: 0x28075c, Func Offset: 0x6c
	// Line 277, Address: 0x280764, Func Offset: 0x74
	// Line 275, Address: 0x280768, Func Offset: 0x78
	// Line 277, Address: 0x28076c, Func Offset: 0x7c
	// Line 279, Address: 0x280778, Func Offset: 0x88
	// Line 281, Address: 0x28077c, Func Offset: 0x8c
	// Line 282, Address: 0x280780, Func Offset: 0x90
	// Line 283, Address: 0x280784, Func Offset: 0x94
	// Line 281, Address: 0x280788, Func Offset: 0x98
	// Line 282, Address: 0x280790, Func Offset: 0xa0
	// Line 285, Address: 0x280798, Func Offset: 0xa8
	// Line 283, Address: 0x28079c, Func Offset: 0xac
	// Line 285, Address: 0x2807a0, Func Offset: 0xb0
	// Line 287, Address: 0x2807ac, Func Offset: 0xbc
	// Line 289, Address: 0x2807b0, Func Offset: 0xc0
	// Line 290, Address: 0x2807b4, Func Offset: 0xc4
	// Line 294, Address: 0x2807b8, Func Offset: 0xc8
	// Line 289, Address: 0x2807bc, Func Offset: 0xcc
	// Line 290, Address: 0x2807c4, Func Offset: 0xd4
	// Line 291, Address: 0x2807c8, Func Offset: 0xd8
	// Line 290, Address: 0x2807cc, Func Offset: 0xdc
	// Line 291, Address: 0x2807d0, Func Offset: 0xe0
	// Line 297, Address: 0x2807d8, Func Offset: 0xe8
	// Line 298, Address: 0x2807ec, Func Offset: 0xfc
	// Line 299, Address: 0x2807f4, Func Offset: 0x104
	// Line 301, Address: 0x2807fc, Func Offset: 0x10c
	// Line 302, Address: 0x280800, Func Offset: 0x110
	// Line 304, Address: 0x280808, Func Offset: 0x118
	// Line 305, Address: 0x280810, Func Offset: 0x120
	// Line 306, Address: 0x28081c, Func Offset: 0x12c
	// Line 309, Address: 0x280828, Func Offset: 0x138
	// Line 310, Address: 0x280838, Func Offset: 0x148
	// Func End, Address: 0x280848, Func Offset: 0x158
}

// zGameExtrasReset__Fv
// Start address: 0x280850
void zGameExtrasReset()
{
	// Line 242, Address: 0x280850, Func Offset: 0
	// Line 243, Address: 0x280854, Func Offset: 0x4
	// Line 244, Address: 0x280858, Func Offset: 0x8
	// Line 245, Address: 0x28085c, Func Offset: 0xc
	// Line 247, Address: 0x280860, Func Offset: 0x10
	// Func End, Address: 0x280868, Func Offset: 0x18
}

// zGameExtras__Ff
// Start address: 0x280870
void zGameExtras(float32 dt)
{
	// Line 220, Address: 0x280870, Func Offset: 0
	// Line 221, Address: 0x28087c, Func Offset: 0xc
	// Line 224, Address: 0x280888, Func Offset: 0x18
	// Line 227, Address: 0x280898, Func Offset: 0x28
	// Line 230, Address: 0x2808a8, Func Offset: 0x38
	// Line 233, Address: 0x2808b0, Func Offset: 0x40
	// Line 235, Address: 0x2808b8, Func Offset: 0x48
	// Line 236, Address: 0x2808c0, Func Offset: 0x50
	// Func End, Address: 0x2808d0, Func Offset: 0x60
}

// zGameExtrasInit__Fv
// Start address: 0x2808d0
void zGameExtrasInit()
{
	// Line 108, Address: 0x2808d0, Func Offset: 0
	// Line 111, Address: 0x2808fc, Func Offset: 0x2c
	// Line 112, Address: 0x280904, Func Offset: 0x34
	// Line 113, Address: 0x28090c, Func Offset: 0x3c
	// Line 114, Address: 0x280914, Func Offset: 0x44
	// Line 115, Address: 0x28091c, Func Offset: 0x4c
	// Line 116, Address: 0x280928, Func Offset: 0x58
	// Line 117, Address: 0x28092c, Func Offset: 0x5c
	// Line 118, Address: 0x280930, Func Offset: 0x60
	// Line 119, Address: 0x280934, Func Offset: 0x64
	// Line 122, Address: 0x280938, Func Offset: 0x68
	// Line 115, Address: 0x28093c, Func Offset: 0x6c
	// Line 116, Address: 0x280940, Func Offset: 0x70
	// Line 117, Address: 0x280944, Func Offset: 0x74
	// Line 118, Address: 0x280948, Func Offset: 0x78
	// Line 119, Address: 0x28094c, Func Offset: 0x7c
	// Line 121, Address: 0x280950, Func Offset: 0x80
	// Line 125, Address: 0x280958, Func Offset: 0x88
	// Line 120, Address: 0x28095c, Func Offset: 0x8c
	// Line 125, Address: 0x280960, Func Offset: 0x90
	// Line 128, Address: 0x2809f0, Func Offset: 0x120
	// Line 129, Address: 0x2809fc, Func Offset: 0x12c
	// Line 134, Address: 0x280a0c, Func Offset: 0x13c
	// Line 143, Address: 0x280aa4, Func Offset: 0x1d4
	// Line 146, Address: 0x280ad0, Func Offset: 0x200
	// Line 147, Address: 0x280ae0, Func Offset: 0x210
	// Line 148, Address: 0x280b78, Func Offset: 0x2a8
	// Line 151, Address: 0x280b80, Func Offset: 0x2b0
	// Line 152, Address: 0x280b90, Func Offset: 0x2c0
	// Line 153, Address: 0x280c28, Func Offset: 0x358
	// Line 156, Address: 0x280c30, Func Offset: 0x360
	// Line 157, Address: 0x280c40, Func Offset: 0x370
	// Line 158, Address: 0x280c48, Func Offset: 0x378
	// Line 159, Address: 0x280c58, Func Offset: 0x388
	// Line 160, Address: 0x280cf0, Func Offset: 0x420
	// Line 166, Address: 0x280cf8, Func Offset: 0x428
	// Line 167, Address: 0x280d08, Func Offset: 0x438
	// Line 168, Address: 0x280da0, Func Offset: 0x4d0
	// Line 174, Address: 0x280da8, Func Offset: 0x4d8
	// Line 176, Address: 0x280db8, Func Offset: 0x4e8
	// Line 177, Address: 0x280dc0, Func Offset: 0x4f0
	// Line 179, Address: 0x280e58, Func Offset: 0x588
	// Line 182, Address: 0x280e60, Func Offset: 0x590
	// Line 184, Address: 0x280e70, Func Offset: 0x5a0
	// Line 185, Address: 0x280f0c, Func Offset: 0x63c
	// Line 187, Address: 0x280f18, Func Offset: 0x648
	// Line 190, Address: 0x280f20, Func Offset: 0x650
	// Line 191, Address: 0x280f30, Func Offset: 0x660
	// Line 192, Address: 0x280fc8, Func Offset: 0x6f8
	// Line 195, Address: 0x280fd0, Func Offset: 0x700
	// Line 196, Address: 0x280fe0, Func Offset: 0x710
	// Line 197, Address: 0x281038, Func Offset: 0x768
	// Line 200, Address: 0x281040, Func Offset: 0x770
	// Line 201, Address: 0x281050, Func Offset: 0x780
	// Line 202, Address: 0x2810e8, Func Offset: 0x818
	// Line 205, Address: 0x2810f0, Func Offset: 0x820
	// Line 206, Address: 0x281100, Func Offset: 0x830
	// Line 208, Address: 0x2811a0, Func Offset: 0x8d0
	// Line 214, Address: 0x281274, Func Offset: 0x9a4
	// Func End, Address: 0x2812a4, Func Offset: 0x9d4
}

