typedef struct st_ZDISPATCH_DATA;
typedef struct xAnimEffect;
typedef enum _tagPadState;
typedef struct RxPipelineCluster;
typedef struct _xBox;
typedef struct xModelInstance;
typedef struct _tagCamInfo;
typedef struct zCutsceneZbuffer;
typedef struct xAnimActiveEffect;
typedef struct _xEntShadow;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RxPipelineNodeParam;
typedef struct xBase;
typedef struct RxNodeDefinition;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _zEnt;
typedef struct xMemPool;
typedef struct RpCollSector;
typedef struct st_ZDISPATCH_CONTEXT;
typedef struct _tagiPad;
typedef struct rxHeapBlockHeader;
typedef struct RwLLLink;
typedef struct RwRGBAReal;
typedef enum RwCameraProjection;
typedef struct RpMeshHeader;
typedef struct p2BaseAsset;
typedef struct RxPipelineNode;
typedef struct RpMaterial;
typedef struct xAnimSingle;
typedef struct _zPortal;
typedef struct rxHeapFreeBlock;
typedef struct _xEnv;
typedef struct _tagxCamFollow;
typedef struct RwObjectHasFrame;
typedef struct iShadowCache;
typedef struct iEnv;
typedef struct RwTexture;
typedef struct _xEnt;
typedef struct p2EntHangableAsset;
typedef struct zPortalAsset;
typedef struct RxClusterDefinition;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct RxPipeline;
typedef struct zPlayerGlobals;
typedef struct RwV2d;
typedef struct xSurface;
typedef struct iSndVol;
typedef struct _tagPadAnalog;
typedef struct p2EntAsset;
typedef struct RpAtomic;
typedef struct _xMat4x3;
typedef struct zScene;
typedef struct xAnimTransition;
typedef struct p2LinkAsset;
typedef struct _tagxCamPathAsset;
typedef struct RpTriangle;
typedef struct zCutsceneZbufferHack;
typedef struct _xScene;
typedef struct tag_xFile;
typedef struct RpWorldSector;
typedef struct RwRGBA;
typedef struct _tagxPad;
typedef enum RwTextureFilterMode;
typedef struct xSndGlobals;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct RwObject;
typedef struct xAnimState;
typedef struct iFogParams;
typedef struct _xBound;
typedef enum RxClusterValid;
typedef struct RpPolygon;
typedef struct _xEntFrame;
typedef struct _tagxRumble;
typedef struct RwV3d;
typedef struct tag_iFile;
typedef struct RwResEntry;
typedef struct st_ZDISPATCH_DEPOT;
typedef struct RpVertexNormal;
typedef struct _tagxCam;
typedef struct RpMorphTarget;
typedef struct RwCamera;
typedef struct _tagxCamShoulder;
typedef struct RwPlane;
typedef struct RwRaster;
typedef struct xSndVoiceInfo;
typedef struct RwLinkList;
typedef struct _zCutsceneMgr;
typedef struct zShaggy1Globals;
typedef struct RxPacket;
typedef struct zCutsceneMgrAsset;
typedef struct _xEntCollis;
typedef struct _tagxCamFollowAsset;
typedef struct xCutscene;
typedef struct xCamAsset;
typedef struct _xQuat;
typedef struct zCheckPoint;
typedef struct rxReq;
typedef enum RwFogType;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RwTexDictionary;
typedef struct RpClump;
typedef enum _tagCamType;
typedef struct xSerial;
typedef struct _xVec3;
typedef enum RpWorldRenderOrder;
typedef struct RwFrustumPlane;
typedef struct zGlobalGameStats;
typedef struct RxPipelineNodeTopSortData;
typedef struct iSndInfo;
typedef struct RxOutputSpec;
typedef struct _xVec4;
typedef struct _zEntHangable;
typedef enum RxClusterForcePresent;
typedef struct RwBBox;
typedef struct _xCollis;
typedef enum _tagRumbleType;
typedef struct _tagxCamStatic;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct xAnimPlay;
typedef struct _xRot;
typedef struct zJumpParam;
typedef struct RxIoSpec;
typedef struct xCutsceneData;
typedef struct _tagxCamFrame;
typedef struct xAnimFile;
typedef struct xCutsceneTime;
typedef struct zGlobals;
typedef struct iColor_tag;
typedef struct RxNodeMethods;
typedef struct xAnimTransitionList;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct _iCollis;
typedef struct RpWorld;
typedef struct RpGeometry;
typedef struct RwFrame;
typedef struct RwSurfaceProperties;
typedef struct iModelTag;
typedef struct RpMaterialList;
typedef struct _tagxCamStaticFollow;
typedef struct xModelPool;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct zAssetPickupTable;
typedef struct RxCluster;
typedef struct RpSector;
typedef struct xQCData;
typedef struct zPlayerStatic;
typedef struct xSndVol;
typedef struct xFFX;
typedef struct _xBBox;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCamPath;
typedef struct _xSphere;
typedef struct _tagp2CamStaticAsset;
typedef struct _zPlatform;
typedef enum RwTextureAddressMode;
typedef struct RpLight;
typedef struct xCutsceneBreak;
typedef struct _xCylinder;
typedef struct _xEntDrive;
typedef enum en_DISPATCH_COMMAND;

typedef int32(*type_1)(RxNodeDefinition*);
typedef void(*type_5)(RxNodeDefinition*);
typedef xBase*(*type_8)(uint32);
typedef uint32(*type_10)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_11)(RxPipelineNode*);
typedef int32(*type_13)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int8*(*type_14)(xBase*);
typedef void(*type_15)(RxPipelineNode*);
typedef int8*(*type_17)(uint32);
typedef RwObjectHasFrame*(*type_18)(RwObjectHasFrame*);
typedef int32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(int32);
typedef uint32(*type_24)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_27)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_28)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_36)(_xEnt*, _xScene*, float32);
typedef void(*type_40)(_xEnt*);
typedef int32(*type_41)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_42)(RwResEntry*);
typedef RwCamera*(*type_43)(RwCamera*);
typedef void(*type_45)(_xEnt*);
typedef void(*type_46)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef RwCamera*(*type_48)(RwCamera*);
typedef void(*type_50)(_xEnt*, _xVec3*);
typedef uint32(*type_53)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RpClump*(*type_54)(RpClump*, void*);
typedef RpWorldSector*(*type_57)(RpWorldSector*);
typedef void(*type_60)(_xEnt*, _xVec3*);
typedef void(*type_66)(xMemPool*, void*);
typedef RpAtomic*(*type_68)(RpAtomic*);

typedef _xQuat type_0[2];
typedef zGlobalGameStats type_2[30];
typedef zGlobalGameStats type_3[13];
typedef _zEnt* type_4[10];
typedef uint32 type_6[1];
typedef zGlobalGameStats type_7[4];
typedef int32 type_9[2];
typedef int32 type_12[2];
typedef _xVec3 type_16[4];
typedef RwTexCoords* type_20[8];
typedef uint8 type_21[3];
typedef zCutsceneZbuffer type_22[4];
typedef RxCluster type_25[1];
typedef int8 type_26[16];
typedef uint32 type_29[2];
typedef uint8 type_30[8];
typedef uint32 type_31[4];
typedef int8 type_33[128];
typedef uint32 type_34[2];
typedef RwTexCoords* type_35[8];
typedef uint32 type_37[2];
typedef xSndVoiceInfo type_38[48];
typedef uint32 type_39[2];
typedef uint8 type_44[22];
typedef uint8 type_47[22];
typedef float32 type_49[2];
typedef int8 type_51[16];
typedef int8 type_52[16];
typedef uint32 type_55[43];
typedef uint8 type_56[3];
typedef xBase* type_58[43];
typedef float32 type_59[15];
typedef iModelTag type_61[4];
typedef float32 type_62[15];
typedef uint32 type_63[15];
typedef _xVec4 type_64[8];
typedef int8 type_65[32];
typedef int8 type_67[32];
typedef float32 type_69[4];
typedef _xCollis type_70[18];
typedef float32 type_71[4];
typedef float32 type_72[4];
typedef int8 type_73[128];
typedef int8 type_74[128][6];
typedef uint8 type_75[8];
typedef uint8 type_76[2];
typedef float32 type_77[4];
typedef uint8 type_78[8];
typedef float32 type_79[4];
typedef uint8 type_80[8];
typedef float32 type_81[4];
typedef float32 type_82[4];
typedef int8 type_83[32];
typedef uint8 type_84[8];
typedef uint16 type_85[3];
typedef float32 type_86[4];
typedef int8 type_87[16];
typedef float32 type_88[4];
typedef uint16 type_89[3];
typedef RwFrustumPlane type_90[6];
typedef uint32 type_91[2];
typedef float32 type_92[3];
typedef uint8 type_93[3];
typedef RpLight* type_94[2];
typedef _xVec3 type_95[2];
typedef float32 type_96[3];
typedef RwFrame* type_97[2];
typedef uint8 type_98[3];
typedef RwV3d type_99[8];

struct st_ZDISPATCH_DATA : xBase
{
	p2BaseAsset* rawass;
	int32 placeholder;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct st_ZDISPATCH_CONTEXT
{
	en_DISPATCH_COMMAND cmd;
	void* indata;
	void* inxtra;
	void* result;
};

struct _tagiPad
{
	int32 port;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct iSndVol
{
	int16 volL;
	int16 volR;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct xSndGlobals
{
	uint32 stereo;
	uint32 SndCount;
	xSndVol mastervol;
	xSndVol streamvol;
	xSndVol fxvol;
	xSndVoiceInfo voice[48];
	_xVec3 right;
	_xVec3 up;
	_xVec3 at;
	_xVec3 pos;
	float32 radius2;
	_xVec3 nearpos;
	_xVec3 farpos;
	uint32 suspendCD;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct st_ZDISPATCH_DEPOT
{
	st_ZDISPATCH_DATA* raw_pool;
	int32 raw_cnt;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xSndVoiceInfo
{
	uint32 assetID;
	uint32 sndID;
	uint32 parentID;
	_xVec3* parentPos;
	int32 internalID;
	uint16 flags;
	uint16 priority;
	float32 vol;
	float32 pitch;
	uint32 sample_rate;
	uint32 deadct;
	_xVec3 pos;
	float32 radius2;
	iSndInfo ps;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct rxReq
{
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct st_SERIAL_CLIENTINFO
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct _tagxCamStatic
{
	uint32 unused;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _iCollis
{
	int32 unknown;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct RpSector
{
	int32 type;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct xSndVol
{
	float32 volL;
	float32 volR;
};

struct xFFX
{
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct _zPlatform
{
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

enum en_DISPATCH_COMMAND
{
	ZDSP_CMD_INITDFLT = 0xffffffff,
	ZDSP_CMD_CTRL_CFGGET,
	ZDSP_CMD_CTRL_CFGSET,
	ZDSP_CMD_CTRL_VIBEGET,
	ZDSP_CMD_CTRL_VIBESET,
	ZDSP_CMD_SNDMOD_GET,
	ZDSP_CMD_SNDMOD_SET,
	ZDSP_CMD_SNDVOL_GET,
	ZDSP_CMD_SNDVOL_SET,
	ZDSP_CMD_SNDVOL_INCR,
	ZDSP_CMD_SNDVOL_DECR,
	ZDSP_CMD_MUSVOL_GET,
	ZDSP_CMD_MUSVOL_SET,
	ZDSP_CMD_MUSVOL_INCR,
	ZDSP_CMD_MUSVOL_DECR,
	ZDSP_CMD_SFXVOL_GET,
	ZDSP_CMD_SFXVOL_SET,
	ZDSP_CMD_SFXVOL_INCR,
	ZDSP_CMD_SFXVOL_DECR,
	ZDSP_CMD_GSTATE_GET,
	ZDSP_CMD_GSTATE_SET,
	ZDSP_CMD_GMODE_GET,
	ZDSP_CMD_GMODE_SET,
	ZDSP_CHECKPNT_SET,
	ZDSP_CMD_NOMORE
};

int32 g_zdsp_init;
int32 g_zdsp_dblog_init;
st_ZDISPATCH_DEPOT g_zdsp_depot;
xSndGlobals gSnd;
zGlobals globals;
int32(*ZDSP_elcb_event)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

int32 ZDSP_elcb_event(xBase* xb, uint32 toEvent, float32* toParam, xBase* toParamWidget);
int32 ZDSP_doCommand(st_ZDISPATCH_CONTEXT* cmdCtxt);
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, void* indata, void* inxtra, void* result);
void ZDSP_instInit(st_ZDISPATCH_DATA* dspdata, p2BaseAsset* bass);
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata);
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, p2BaseAsset* bass);
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx);
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt);
void zDispatcher_sceneFinish();
void zDispatcher_scenePrepare();
void zDispatcher_Shutdown();
void zDispatcher_Startup();

// ZDSP_elcb_event__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a8080
int32 ZDSP_elcb_event(xBase* xb, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	iColor_tag clear;
	iColor_tag black;
	st_ZDISPATCH_DATA* dspdata;
	// Line 843, Address: 0x1a8080, Func Offset: 0
	// Line 849, Address: 0x1a8090, Func Offset: 0x10
	// Line 852, Address: 0x1a8348, Func Offset: 0x2c8
	// Line 853, Address: 0x1a8384, Func Offset: 0x304
	// Line 860, Address: 0x1a838c, Func Offset: 0x30c
	// Line 861, Address: 0x1a8394, Func Offset: 0x314
	// Line 864, Address: 0x1a839c, Func Offset: 0x31c
	// Line 865, Address: 0x1a83a4, Func Offset: 0x324
	// Line 868, Address: 0x1a83ac, Func Offset: 0x32c
	// Line 869, Address: 0x1a83b4, Func Offset: 0x334
	// Line 872, Address: 0x1a83bc, Func Offset: 0x33c
	// Line 873, Address: 0x1a83c4, Func Offset: 0x344
	// Line 876, Address: 0x1a83cc, Func Offset: 0x34c
	// Line 877, Address: 0x1a83d4, Func Offset: 0x354
	// Line 880, Address: 0x1a83dc, Func Offset: 0x35c
	// Line 881, Address: 0x1a83e4, Func Offset: 0x364
	// Line 890, Address: 0x1a83ec, Func Offset: 0x36c
	// Line 892, Address: 0x1a8404, Func Offset: 0x384
	// Line 894, Address: 0x1a840c, Func Offset: 0x38c
	// Line 896, Address: 0x1a8424, Func Offset: 0x3a4
	// Line 898, Address: 0x1a842c, Func Offset: 0x3ac
	// Line 900, Address: 0x1a8448, Func Offset: 0x3c8
	// Line 902, Address: 0x1a8450, Func Offset: 0x3d0
	// Line 904, Address: 0x1a846c, Func Offset: 0x3ec
	// Line 907, Address: 0x1a8474, Func Offset: 0x3f4
	// Line 908, Address: 0x1a8490, Func Offset: 0x410
	// Line 910, Address: 0x1a8498, Func Offset: 0x418
	// Line 911, Address: 0x1a84b0, Func Offset: 0x430
	// Line 914, Address: 0x1a84b8, Func Offset: 0x438
	// Line 916, Address: 0x1a84d0, Func Offset: 0x450
	// Line 918, Address: 0x1a84d8, Func Offset: 0x458
	// Line 920, Address: 0x1a84f4, Func Offset: 0x474
	// Line 923, Address: 0x1a84fc, Func Offset: 0x47c
	// Line 924, Address: 0x1a8510, Func Offset: 0x490
	// Line 926, Address: 0x1a8518, Func Offset: 0x498
	// Line 927, Address: 0x1a852c, Func Offset: 0x4ac
	// Line 930, Address: 0x1a8534, Func Offset: 0x4b4
	// Line 931, Address: 0x1a8548, Func Offset: 0x4c8
	// Line 933, Address: 0x1a8550, Func Offset: 0x4d0
	// Line 934, Address: 0x1a8564, Func Offset: 0x4e4
	// Line 937, Address: 0x1a856c, Func Offset: 0x4ec
	// Line 938, Address: 0x1a8580, Func Offset: 0x500
	// Line 940, Address: 0x1a8588, Func Offset: 0x508
	// Line 942, Address: 0x1a859c, Func Offset: 0x51c
	// Line 1015, Address: 0x1a85a4, Func Offset: 0x524
	// Line 1016, Address: 0x1a85b0, Func Offset: 0x530
	// Line 1025, Address: 0x1a85b8, Func Offset: 0x538
	// Line 1027, Address: 0x1a85c4, Func Offset: 0x544
	// Line 1031, Address: 0x1a85cc, Func Offset: 0x54c
	// Line 1032, Address: 0x1a85d4, Func Offset: 0x554
	// Line 1035, Address: 0x1a85dc, Func Offset: 0x55c
	// Line 1036, Address: 0x1a85e4, Func Offset: 0x564
	// Line 1038, Address: 0x1a85ec, Func Offset: 0x56c
	// Line 1039, Address: 0x1a85f4, Func Offset: 0x574
	// Line 1041, Address: 0x1a85fc, Func Offset: 0x57c
	// Line 1042, Address: 0x1a8604, Func Offset: 0x584
	// Line 1044, Address: 0x1a860c, Func Offset: 0x58c
	// Line 1045, Address: 0x1a8614, Func Offset: 0x594
	// Line 1047, Address: 0x1a861c, Func Offset: 0x59c
	// Line 1048, Address: 0x1a8624, Func Offset: 0x5a4
	// Line 1051, Address: 0x1a862c, Func Offset: 0x5ac
	// Line 1052, Address: 0x1a8634, Func Offset: 0x5b4
	// Line 1054, Address: 0x1a863c, Func Offset: 0x5bc
	// Line 1055, Address: 0x1a8644, Func Offset: 0x5c4
	// Line 1058, Address: 0x1a864c, Func Offset: 0x5cc
	// Line 1060, Address: 0x1a8654, Func Offset: 0x5d4
	// Line 1059, Address: 0x1a8658, Func Offset: 0x5d8
	// Line 1060, Address: 0x1a865c, Func Offset: 0x5dc
	// Line 1058, Address: 0x1a8660, Func Offset: 0x5e0
	// Line 1059, Address: 0x1a8664, Func Offset: 0x5e4
	// Line 1060, Address: 0x1a866c, Func Offset: 0x5ec
	// Line 1061, Address: 0x1a8678, Func Offset: 0x5f8
	// Line 1064, Address: 0x1a8680, Func Offset: 0x600
	// Line 1067, Address: 0x1a86ac, Func Offset: 0x62c
	// Line 1068, Address: 0x1a86cc, Func Offset: 0x64c
	// Line 1070, Address: 0x1a86d4, Func Offset: 0x654
	// Line 1071, Address: 0x1a86f4, Func Offset: 0x674
	// Line 1073, Address: 0x1a86fc, Func Offset: 0x67c
	// Line 1074, Address: 0x1a8714, Func Offset: 0x694
	// Line 1076, Address: 0x1a871c, Func Offset: 0x69c
	// Line 1077, Address: 0x1a8734, Func Offset: 0x6b4
	// Line 1078, Address: 0x1a873c, Func Offset: 0x6bc
	// Line 1080, Address: 0x1a8744, Func Offset: 0x6c4
	// Line 1081, Address: 0x1a8764, Func Offset: 0x6e4
	// Line 1083, Address: 0x1a876c, Func Offset: 0x6ec
	// Line 1084, Address: 0x1a877c, Func Offset: 0x6fc
	// Line 1086, Address: 0x1a87a4, Func Offset: 0x724
	// Line 1087, Address: 0x1a87c4, Func Offset: 0x744
	// Line 1089, Address: 0x1a87cc, Func Offset: 0x74c
	// Line 1095, Address: 0x1a8814, Func Offset: 0x794
	// Line 1098, Address: 0x1a881c, Func Offset: 0x79c
	// Line 1107, Address: 0x1a8824, Func Offset: 0x7a4
	// Line 1106, Address: 0x1a8830, Func Offset: 0x7b0
	// Line 1107, Address: 0x1a8834, Func Offset: 0x7b4
	// Func End, Address: 0x1a883c, Func Offset: 0x7bc
}

// ZDSP_doCommand__FP17st_ZDISPATCH_DATAP20st_ZDISPATCH_CONTEXT
// Start address: 0x1a8840
int32 ZDSP_doCommand(st_ZDISPATCH_CONTEXT* cmdCtxt)
{
	void* result;
	void* indata;
	en_DISPATCH_COMMAND cmd;
	int32 iv;
	int32 warned;
	int8 init;
	// Line 530, Address: 0x1a8840, Func Offset: 0
	// Line 539, Address: 0x1a8850, Func Offset: 0x10
	// Line 535, Address: 0x1a8858, Func Offset: 0x18
	// Line 537, Address: 0x1a885c, Func Offset: 0x1c
	// Line 539, Address: 0x1a8860, Func Offset: 0x20
	// Line 540, Address: 0x1a8874, Func Offset: 0x34
	// Line 545, Address: 0x1a8884, Func Offset: 0x44
	// Line 548, Address: 0x1a888c, Func Offset: 0x4c
	// Line 561, Address: 0x1a88ac, Func Offset: 0x6c
	// Line 569, Address: 0x1a88b4, Func Offset: 0x74
	// Line 570, Address: 0x1a88bc, Func Offset: 0x7c
	// Line 580, Address: 0x1a88c4, Func Offset: 0x84
	// Line 581, Address: 0x1a88cc, Func Offset: 0x8c
	// Line 588, Address: 0x1a88d4, Func Offset: 0x94
	// Line 589, Address: 0x1a88d8, Func Offset: 0x98
	// Line 590, Address: 0x1a88dc, Func Offset: 0x9c
	// Line 591, Address: 0x1a88e8, Func Offset: 0xa8
	// Line 592, Address: 0x1a88f4, Func Offset: 0xb4
	// Line 607, Address: 0x1a88fc, Func Offset: 0xbc
	// Line 608, Address: 0x1a8904, Func Offset: 0xc4
	// Line 615, Address: 0x1a890c, Func Offset: 0xcc
	// Line 616, Address: 0x1a8910, Func Offset: 0xd0
	// Line 617, Address: 0x1a8924, Func Offset: 0xe4
	// Line 622, Address: 0x1a8930, Func Offset: 0xf0
	// Line 623, Address: 0x1a8940, Func Offset: 0x100
	// Line 632, Address: 0x1a8948, Func Offset: 0x108
	// Line 633, Address: 0x1a8950, Func Offset: 0x110
	// Line 640, Address: 0x1a8958, Func Offset: 0x118
	// Line 641, Address: 0x1a89d8, Func Offset: 0x198
	// Line 642, Address: 0x1a89e8, Func Offset: 0x1a8
	// Line 649, Address: 0x1a89f0, Func Offset: 0x1b0
	// Line 650, Address: 0x1a89f8, Func Offset: 0x1b8
	// Line 653, Address: 0x1a8a08, Func Offset: 0x1c8
	// Line 655, Address: 0x1a8a90, Func Offset: 0x250
	// Line 656, Address: 0x1a8aa0, Func Offset: 0x260
	// Line 663, Address: 0x1a8aa8, Func Offset: 0x268
	// Line 664, Address: 0x1a8ab0, Func Offset: 0x270
	// Line 667, Address: 0x1a8ac0, Func Offset: 0x280
	// Line 669, Address: 0x1a8b48, Func Offset: 0x308
	// Line 670, Address: 0x1a8b58, Func Offset: 0x318
	// Line 679, Address: 0x1a8b60, Func Offset: 0x320
	// Line 680, Address: 0x1a8b68, Func Offset: 0x328
	// Line 687, Address: 0x1a8b70, Func Offset: 0x330
	// Line 688, Address: 0x1a8bf0, Func Offset: 0x3b0
	// Line 689, Address: 0x1a8c00, Func Offset: 0x3c0
	// Line 696, Address: 0x1a8c08, Func Offset: 0x3c8
	// Line 697, Address: 0x1a8c10, Func Offset: 0x3d0
	// Line 700, Address: 0x1a8c20, Func Offset: 0x3e0
	// Line 702, Address: 0x1a8ca8, Func Offset: 0x468
	// Line 703, Address: 0x1a8cb8, Func Offset: 0x478
	// Line 710, Address: 0x1a8cc0, Func Offset: 0x480
	// Line 711, Address: 0x1a8cc8, Func Offset: 0x488
	// Line 714, Address: 0x1a8cd8, Func Offset: 0x498
	// Line 716, Address: 0x1a8d60, Func Offset: 0x520
	// Line 717, Address: 0x1a8d70, Func Offset: 0x530
	// Line 727, Address: 0x1a8d78, Func Offset: 0x538
	// Line 728, Address: 0x1a8d80, Func Offset: 0x540
	// Line 735, Address: 0x1a8d88, Func Offset: 0x548
	// Line 736, Address: 0x1a8e08, Func Offset: 0x5c8
	// Line 737, Address: 0x1a8e18, Func Offset: 0x5d8
	// Line 744, Address: 0x1a8e20, Func Offset: 0x5e0
	// Line 745, Address: 0x1a8e28, Func Offset: 0x5e8
	// Line 748, Address: 0x1a8e38, Func Offset: 0x5f8
	// Line 750, Address: 0x1a8ec0, Func Offset: 0x680
	// Line 751, Address: 0x1a8ed0, Func Offset: 0x690
	// Line 758, Address: 0x1a8ed8, Func Offset: 0x698
	// Line 759, Address: 0x1a8ee0, Func Offset: 0x6a0
	// Line 762, Address: 0x1a8ef0, Func Offset: 0x6b0
	// Line 764, Address: 0x1a8f78, Func Offset: 0x738
	// Line 765, Address: 0x1a8f88, Func Offset: 0x748
	// Line 780, Address: 0x1a8f90, Func Offset: 0x750
	// Line 781, Address: 0x1a8f98, Func Offset: 0x758
	// Line 789, Address: 0x1a8fa0, Func Offset: 0x760
	// Line 790, Address: 0x1a8fa8, Func Offset: 0x768
	// Line 791, Address: 0x1a8fb8, Func Offset: 0x778
	// Line 802, Address: 0x1a8fc0, Func Offset: 0x780
	// Line 803, Address: 0x1a8fc8, Func Offset: 0x788
	// Line 814, Address: 0x1a8fd0, Func Offset: 0x790
	// Line 815, Address: 0x1a8fd8, Func Offset: 0x798
	// Line 837, Address: 0x1a8fec, Func Offset: 0x7ac
	// Line 836, Address: 0x1a8ff8, Func Offset: 0x7b8
	// Line 837, Address: 0x1a8ffc, Func Offset: 0x7bc
	// Func End, Address: 0x1a9004, Func Offset: 0x7c4
}

// ZDSP_injectCmd__FP17st_ZDISPATCH_DATA19en_DISPATCH_COMMANDPvPvPv
// Start address: 0x1a9010
void ZDSP_injectCmd(st_ZDISPATCH_DATA* dspdata, en_DISPATCH_COMMAND cmd, void* indata, void* inxtra, void* result)
{
	st_ZDISPATCH_CONTEXT cmdctxt;
	// Line 506, Address: 0x1a9010, Func Offset: 0
	// Line 507, Address: 0x1a9014, Func Offset: 0x4
	// Line 506, Address: 0x1a9018, Func Offset: 0x8
	// Line 507, Address: 0x1a901c, Func Offset: 0xc
	// Line 510, Address: 0x1a902c, Func Offset: 0x1c
	// Line 511, Address: 0x1a9030, Func Offset: 0x20
	// Line 512, Address: 0x1a9034, Func Offset: 0x24
	// Line 513, Address: 0x1a9038, Func Offset: 0x28
	// Line 515, Address: 0x1a903c, Func Offset: 0x2c
	// Line 522, Address: 0x1a9044, Func Offset: 0x34
	// Func End, Address: 0x1a9050, Func Offset: 0x40
}

// ZDSP_instInit__FP17st_ZDISPATCH_DATAP11p2BaseAsset
// Start address: 0x1a9050
void ZDSP_instInit(st_ZDISPATCH_DATA* dspdata, p2BaseAsset* bass)
{
	// Line 268, Address: 0x1a9050, Func Offset: 0
	// Line 273, Address: 0x1a9064, Func Offset: 0x14
	// Line 280, Address: 0x1a906c, Func Offset: 0x1c
	// Line 277, Address: 0x1a9070, Func Offset: 0x20
	// Line 280, Address: 0x1a9074, Func Offset: 0x24
	// Line 283, Address: 0x1a907c, Func Offset: 0x2c
	// Line 284, Address: 0x1a9088, Func Offset: 0x38
	// Line 285, Address: 0x1a9090, Func Offset: 0x40
	// Line 286, Address: 0x1a9098, Func Offset: 0x48
	// Line 291, Address: 0x1a909c, Func Offset: 0x4c
	// Line 296, Address: 0x1a90ac, Func Offset: 0x5c
	// Func End, Address: 0x1a90c0, Func Offset: 0x70
}

// zDispatcher_Load__FP17st_ZDISPATCH_DATAP7xSerial
// Start address: 0x1a90c0
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
	// Line 252, Address: 0x1a90c0, Func Offset: 0
	// Func End, Address: 0x1a90c8, Func Offset: 0x8
}

// zDispatcher_Save__FP17st_ZDISPATCH_DATAP7xSerial
// Start address: 0x1a90d0
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
	// Line 234, Address: 0x1a90d0, Func Offset: 0
	// Func End, Address: 0x1a90d8, Func Offset: 0x8
}

// zDispatcher_InitDep__FP17st_ZDISPATCH_DATAP6zScene
// Start address: 0x1a90e0
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata)
{
	// Line 213, Address: 0x1a90e0, Func Offset: 0
	// Func End, Address: 0x1a90f0, Func Offset: 0x10
}

// zDispatcher_Init__FP17st_ZDISPATCH_DATAP11p2BaseAsset
// Start address: 0x1a90f0
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, p2BaseAsset* bass)
{
	// Line 206, Address: 0x1a90f0, Func Offset: 0
	// Line 207, Address: 0x1a9104, Func Offset: 0x14
	// Line 209, Address: 0x1a914c, Func Offset: 0x5c
	// Func End, Address: 0x1a9160, Func Offset: 0x70
}

// zDispatcher_getInst__FP17st_ZDISPATCH_DATAi
// Start address: 0x1a9160
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int32 idx)
{
	// Line 194, Address: 0x1a9160, Func Offset: 0
	// Line 195, Address: 0x1a916c, Func Offset: 0xc
	// Func End, Address: 0x1a9174, Func Offset: 0x14
}

// zDispatcher_memPool__Fi
// Start address: 0x1a9180
st_ZDISPATCH_DATA* zDispatcher_memPool(int32 cnt)
{
	st_ZDISPATCH_DEPOT* depot;
	st_ZDISPATCH_DATA* pool;
	// Line 167, Address: 0x1a9180, Func Offset: 0
	// Line 172, Address: 0x1a919c, Func Offset: 0x1c
	// Line 174, Address: 0x1a91ac, Func Offset: 0x2c
	// Line 176, Address: 0x1a91c8, Func Offset: 0x48
	// Line 179, Address: 0x1a91d8, Func Offset: 0x58
	// Line 180, Address: 0x1a91dc, Func Offset: 0x5c
	// Line 182, Address: 0x1a91e0, Func Offset: 0x60
	// Line 183, Address: 0x1a91e4, Func Offset: 0x64
	// Func End, Address: 0x1a9200, Func Offset: 0x80
}

// zDispatcher_sceneFinish__Fv
// Start address: 0x1a9200
void zDispatcher_sceneFinish()
{
	st_ZDISPATCH_DEPOT* depot;
	// Line 153, Address: 0x1a9200, Func Offset: 0
	// Line 156, Address: 0x1a9208, Func Offset: 0x8
	// Line 154, Address: 0x1a920c, Func Offset: 0xc
	// Line 156, Address: 0x1a9210, Func Offset: 0x10
	// Line 159, Address: 0x1a921c, Func Offset: 0x1c
	// Line 162, Address: 0x1a9228, Func Offset: 0x28
	// Func End, Address: 0x1a9234, Func Offset: 0x34
}

// zDispatcher_scenePrepare__Fv
// Start address: 0x1a9240
void zDispatcher_scenePrepare()
{
	st_ZDISPATCH_DEPOT* depot;
	// Line 139, Address: 0x1a9240, Func Offset: 0
	// Line 142, Address: 0x1a9248, Func Offset: 0x8
	// Line 140, Address: 0x1a924c, Func Offset: 0xc
	// Line 142, Address: 0x1a9250, Func Offset: 0x10
	// Line 147, Address: 0x1a925c, Func Offset: 0x1c
	// Line 150, Address: 0x1a9268, Func Offset: 0x28
	// Func End, Address: 0x1a9274, Func Offset: 0x34
}

// zDispatcher_Shutdown__Fv
// Start address: 0x1a9280
void zDispatcher_Shutdown()
{
	// Line 133, Address: 0x1a9280, Func Offset: 0
	// Func End, Address: 0x1a9288, Func Offset: 0x8
}

// zDispatcher_Startup__Fv
// Start address: 0x1a9290
void zDispatcher_Startup()
{
	// Line 128, Address: 0x1a9290, Func Offset: 0
	// Func End, Address: 0x1a9298, Func Offset: 0x8
}

