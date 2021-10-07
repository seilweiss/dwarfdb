typedef struct xAnimTransition;
typedef struct RpMorphTarget;
typedef struct RxPipelineNodeParam;
typedef struct RxNodeDefinition;
typedef struct xModelInstance;
typedef struct zParCmd;
typedef struct RwTexCoords;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xVec3;
typedef struct _tagxRumble;
typedef struct xBase;
typedef struct xAnimSingle;
typedef struct _tagxCamFollowAsset;
typedef struct xParGroup;
typedef struct _xCylinder;
typedef struct _tagEmitSphere;
typedef struct _zCutsceneMgr;
typedef struct xCamAsset;
typedef struct _zParEmitter;
typedef struct zShaggy1Globals;
typedef struct rxHeapBlockHeader;
typedef struct RwRGBA;
typedef struct zCutsceneMgrAsset;
typedef struct iModelTag;
typedef struct RxPipelineNode;
typedef struct RwLLLink;
typedef struct xAnimState;
typedef struct xPar;
typedef struct _xCollis;
typedef struct rxHeapFreeBlock;
typedef struct RwResEntry;
typedef struct _zEnt;
typedef struct xModelPool;
typedef struct xParCmdAccelerate;
typedef struct RwRGBAReal;
typedef struct xParCmdMoveRandomPar;
typedef struct xParCmdFollow;
typedef struct xCutscene;
typedef struct _xEntShadow;
typedef struct RxClusterDefinition;
typedef enum _tagCamType;
typedef enum RwCameraProjection;
typedef struct xParCmdPlayerCollision;
typedef struct _xEnt;
typedef struct p2EntAsset;
typedef struct zCheckPoint;
typedef struct p2LinkAsset;
typedef enum RxClusterValidityReq;
typedef struct _xBox;
typedef struct RxPipelineRequiresCluster;
typedef struct RwObjectHasFrame;
typedef struct xParCmdAsset;
typedef struct xAnimPlay;
typedef struct RxPipeline;
typedef struct zCutsceneZbufferHack;
typedef struct RpClump;
typedef struct RpAtomic;
typedef struct RwV2d;
typedef struct zPortalAsset;
typedef struct _xScene;
typedef enum RpWorldRenderOrder;
typedef struct _zVolume;
typedef struct zGlobalGameStats;
typedef struct xAnimFile;
typedef struct iShadowCache;
typedef struct _tagxCamStatic;
typedef struct _tagEmitRect;
typedef struct _zEntHangable;
typedef struct xAnimEffect;
typedef struct RxPipelineCluster;
typedef struct _tagWind;
typedef struct RpCollSector;
typedef struct p2EntHangableAsset;
typedef struct xParCmdScale3rdPolyReg;
typedef struct xAnimTransitionList;
typedef struct RpMeshHeader;
typedef enum RwTextureFilterMode;
typedef enum RxClusterValid;
typedef struct xParCmdOrbitLine;
typedef struct xAnimTable;
typedef struct RwObject;
typedef struct _xMat4x3;
typedef struct _tagxCamFrame;
typedef struct zParEmitterAsset;
typedef struct RwMatrixTag;
typedef struct zJumpParam;
typedef enum _tagRumbleType;
typedef struct _xMat3x3;
typedef struct RpWorldSector;
typedef struct xCutsceneData;
typedef struct _tagxCamShoulderAsset;
typedef struct RwCamera;
typedef struct RwV3d;
typedef enum _tagTransType;
typedef struct xCutsceneTime;
typedef struct _xBound;
typedef struct _xEnv;
typedef struct RwPlane;
typedef struct zGlobals;
typedef struct xParCmdJet;
typedef struct xAnimActiveEffect;
typedef struct RwRaster;
typedef struct xMemPool;
typedef struct RxPacket;
typedef struct _tagxCamStaticFollow;
typedef struct _xEntFrame;
typedef struct _tagEmitLine;
typedef struct RwLinkList;
typedef struct RpWorld;
typedef struct xParCmdTex;
typedef struct _tagxPad;
typedef struct _tagxCam;
typedef struct RpGeometry;
typedef struct _tagClimate;
typedef struct RpVertexNormal;
typedef struct zCmdInfo;
typedef struct xParCmdAlpha3rdPolyReg;
typedef struct rxReq;
typedef struct _zPortal;
typedef struct RpMaterialList;
typedef struct zAssetPickupTable;
typedef struct xParCmdOrbitPoint;
typedef struct RwTexDictionary;
typedef enum RwFogType;
typedef struct RpSector;
typedef struct RpMaterial;
typedef struct RxPipelineNodeTopSortData;
typedef struct _xEntCollis;
typedef struct xParCmdMove;
typedef struct zPlayerStatic;
typedef struct RxOutputSpec;
typedef struct zVolumeAsset;
typedef enum RxClusterForcePresent;
typedef struct p2BaseAsset;
typedef struct _tagxCamPath;
typedef struct xCutsceneInfo;
typedef struct RwFrustumPlane;
typedef struct iEnv;
typedef struct _tagp2CamStaticAsset;
typedef struct _xQuat;
typedef struct xParCmdRotPar;
typedef struct _tagEmitVolume;
typedef struct zScene;
typedef struct RxClusterRef;
typedef struct RwBBox;
typedef enum RxNodeDefEditable;
typedef struct RpPolygon;
typedef struct _zPlatform;
typedef struct RxIoSpec;
typedef struct RpLight;
typedef struct _xVec4;
typedef struct xCutsceneBreak;
typedef struct xParCmdApplyCamMat;
typedef struct RwTexture;
typedef struct RpTriangle;
typedef struct xParCmdApplyWind;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct xParCmdTexAnim;
typedef struct xParCmdKillSlow;
typedef struct _xEntDrive;
typedef struct _tagEmitOffsetPoint;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _xRot;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct xParCmdRotateAround;
typedef struct zCutsceneZbuffer;
typedef struct RxCluster;
typedef struct _tagxCamFollow;
typedef enum _tagPadState;
typedef struct xSurface;
typedef struct _iCollis;
typedef struct _tagiPad;
typedef struct xParCmdKillDistance;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef struct xParCmdRandomVelocityPar;
typedef struct xParCmd;
typedef struct _tagxCamPathAsset;
typedef struct zPlayerGlobals;
typedef struct xFFX;
typedef struct xQCData;
typedef struct tag_xFile;
typedef struct _xRay3;
typedef struct iFogParams;
typedef struct _xBBox;
typedef enum RwTextureAddressMode;
typedef struct sceCdlFILE;
typedef struct _tagEmitCircle;
typedef struct _tagPadAnalog;
typedef struct RpInterpolator;
typedef struct tag_iFile;
typedef struct _tagxCamShoulder;
typedef struct _xSphere;
typedef struct _tagRain;

typedef void(*type_2)(int32);
typedef void(*type_4)(RxNodeDefinition*);
typedef int32(*type_7)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_13)(RxPipelineNode*);
typedef void(*type_14)(zParCmd*, xParGroup*, float32);
typedef void(*type_16)(RxPipelineNode*);
typedef int32(*type_23)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_25)(RwObjectHasFrame*);
typedef RpClump*(*type_26)(RpClump*, void*);
typedef uint32(*type_30)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_35)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpWorldSector*(*type_37)(RpWorldSector*);
typedef int32(*type_40)(RxNodeDefinition*);
typedef void(*type_45)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_48)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_49)(RwResEntry*);
typedef void(*type_50)(_xEnt*, _xScene*, float32);
typedef RwCamera*(*type_51)(RwCamera*);
typedef void(*type_52)(void*, xParGroup*);
typedef RpAtomic*(*type_54)(RpAtomic*);
typedef void(*type_55)(_xEnt*);
typedef xBase*(*type_56)(uint32);
typedef RwCamera*(*type_57)(RwCamera*);
typedef void(*type_58)(xMemPool*, void*);
typedef int8*(*type_59)(xBase*);
typedef void(*type_61)(_xEnt*);
typedef void(*type_63)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int8*(*type_64)(uint32);
typedef void(*type_67)(_xEnt*, _xVec3*);
typedef uint32(*type_68)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_72)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_89)(_xEnt*, _xVec3*);

typedef uint32 type_0[2];
typedef RwV3d type_1[8];
typedef RwTexCoords* type_3[8];
typedef uint8 type_5[3];
typedef uint32 type_6[43];
typedef uint32 type_8[2];
typedef float32 type_9[4];
typedef xBase* type_10[43];
typedef uint32 type_11[2];
typedef float32 type_12[4];
typedef uint8 type_15[2];
typedef float32 type_17[4];
typedef int8 type_18[64];
typedef int8 type_19[16];
typedef _zVolume* type_20[32];
typedef uint8 type_21[22];
typedef int8 type_22[16];
typedef uint8 type_24[22];
typedef RxCluster type_27[1];
typedef _xVec3 type_28[4];
typedef _xVec3 type_29[2];
typedef uint8 type_31[4];
typedef uint8 type_32[3];
typedef uint32 type_33[4];
typedef _xQuat type_34[2];
typedef uint8 type_36[4];
typedef uint8 type_38[3];
typedef uint8 type_39[3];
typedef float32 type_41[15];
typedef float32 type_42[15];
typedef _xVec4 type_43[8];
typedef uint8 type_44[3];
typedef iModelTag type_46[4];
typedef uint32 type_47[15];
typedef uint8 type_53[2];
typedef int8 type_60[128];
typedef int8 type_62[128][6];
typedef zCmdInfo type_65[29];
typedef float32 type_66[4];
typedef float32 type_69[4];
typedef float32 type_70[4];
typedef int8 type_71[32];
typedef uint8 type_73[4];
typedef int8 type_74[16];
typedef uint32 type_75[2];
typedef float32 type_76[0];
typedef float32 type_77[4];
typedef uint16 type_78[3];
typedef RpLight* type_79[2];
typedef float32 type_80[4];
typedef uint8 type_81[3];
typedef RwFrame* type_82[2];
typedef uint16 type_83[3];
typedef float32 type_84[3];
typedef float32 type_85[3];
typedef int8 type_86[32];
typedef int8 type_87[32];
typedef zGlobalGameStats type_88[30];
typedef uint8 type_90[2];
typedef uint8 type_91[2];
typedef zGlobalGameStats type_92[13];
typedef _zEnt* type_93[10];
typedef uint32 type_94[1];
typedef float32 type_95[2];
typedef uint8 type_96[3];
typedef zGlobalGameStats type_97[4];
typedef int32 type_98[2];
typedef int32 type_99[2];
typedef float32 type_100[4];
typedef _xCollis type_101[18];
typedef float32 type_102[4];
typedef uint8 type_103[8];
typedef uint8 type_104[8];
typedef RwTexCoords* type_105[8];
typedef uint8 type_106[8];
typedef int8 type_107[16];
typedef zCutsceneZbuffer type_108[4];
typedef uint8 type_109[8];
typedef uint8 type_110[8];
typedef RwFrustumPlane type_111[6];
typedef int8 type_112[128];
typedef uint32 type_113[2];

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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct zParCmd : xParCmd
{
	xParCmdAsset* tasset;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct _tagEmitSphere
{
	float32 radius;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xParCmdAccelerate : xParCmdAsset
{
	_xVec3 acc;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xParCmdMoveRandomPar : xParCmdAsset
{
	_xVec3 dim;
};

struct xParCmdFollow : xParCmdAsset
{
	float32 gravity;
	float32 epsilon;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xParCmdPlayerCollision : xParCmdAsset
{
	float32 min;
	float32 max;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _zVolume : xBase
{
	zVolumeAsset* asset;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _tagWind
{
	float32 strength;
	float32 angle;
	_xVec3 dir;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xParCmdScale3rdPolyReg : xParCmdAsset
{
	float32 constant;
	float32 a;
	float32 a2;
	float32 a3;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xParCmdOrbitLine : xParCmdAsset
{
	_xVec3 p;
	_xVec3 axis;
	float32 gravity;
	float32 epsilon;
	float32 maxRadiusSqr;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
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

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xParCmdJet : xParCmdAsset
{
	_xVec3 center;
	_xVec3 acc;
	float32 gravity;
	float32 epsilon;
	float32 radiusSqr;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct RwLinkList
{
	RwLLLink link;
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

struct _tagClimate
{
	_tagRain rain;
	_tagWind wind;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct zCmdInfo
{
	uint32 type;
	uint32 size;
	void(*func)(zParCmd*, xParGroup*, float32);
};

struct xParCmdAlpha3rdPolyReg : xParCmdAsset
{
	float32 constant;
	float32 a;
	float32 a2;
	float32 a3;
};

struct rxReq
{
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct xParCmdOrbitPoint : xParCmdAsset
{
	_xVec3 center;
	float32 gravity;
	float32 epsilon;
	float32 maxRadiusSqr;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xParCmdMove : xParCmdAsset
{
	_xVec3 dir;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zVolumeAsset : p2BaseAsset
{
	uint32 flags;
	_xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct xParCmdRotPar : xParCmdAsset
{
	_xVec3 min;
	_xVec3 max;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct xParCmdApplyCamMat : xParCmdAsset
{
	_xVec3 apply;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct xParCmdApplyWind : xParCmdAsset
{
	float32 strength;
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

struct xParCmdTexAnim : xParCmdAsset
{
	uint8 anim_mode;
	uint8 anim_wrap_mode;
	uint8 pad_anim;
	uint8 throttle_spd_less_than;
	float32 throttle_spd_sqr;
	float32 throttle_time;
	float32 throttle_time_elapsed;
};

struct xParCmdKillSlow : xParCmdAsset
{
	float32 speedLimitSqr;
	uint32 kill_less_than;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xParCmdRotateAround : xParCmdAsset
{
	_xVec3 pos;
	float32 unused1;
	float32 radius_growth;
	float32 yaw;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct _iCollis
{
	int32 unknown;
};

struct _tagiPad
{
	int32 port;
};

struct xParCmdKillDistance : xParCmdAsset
{
	float32 dSqr;
	uint32 kill_greater_than;
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

struct xParCmdRandomVelocityPar : xParCmdAsset
{
	float32 x;
	float32 y;
	float32 z;
};

struct xParCmd
{
	uint32 flag;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct xFFX
{
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _tagRain
{
	int32 rain;
	float32 strength;
	_zParEmitter* rain_emitter;
	_zParEmitter* snow_emitter;
};

zCmdInfo sCmdInfo[29];
_zVolume* sClipVolume[32];
int32 sClipVolumeTotal;
zGlobals globals;
_tagClimate gClimate;
float32 cosSinPolynomial[0];

void xParCmdCustom_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdCustom_Grass_Update(xParGroup* ps, float32 dt);
void xParCmdTexAnim_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdTex_Update();
void xParCmdJet_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdRotateAround_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdDamagePlayer_Update(xParGroup* ps);
void xParCmdAnimalMagentism_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdApplyCamMat_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdVelocityApply_Update(xParGroup* ps);
void xParCmdRotPar_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdApplyWind_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdRandomVelocityPar_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdPlayerCollision_Update(zParCmd* c, xParGroup* ps);
void xParCmdAlpha3rdPolyReg_Update(zParCmd* c, xParGroup* ps);
void xParCmdClipVolumes_Update(xParGroup* ps);
void xParCmdScale_Update(zParCmd* c, xParGroup* ps);
void xParCmdSmokeAlpha_Update(zParCmd* c, xParGroup* ps);
void xParCmdScale3rdPolyReg_Update(zParCmd* c, xParGroup* ps);
void xParCmdMoveRandomPar_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdMoveRandom_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdMove_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdAccelerate_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdOrbitLine_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdOrbitPoint_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdFollow_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdAge_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdKillSlow_Update(zParCmd* c, xParGroup* ps, float32 dt);
void xParCmdKillDistance_Update(zParCmd* c, xParGroup* ps);
void(*)(zParCmd*, xParGroup*, float32) zParCmdGetUpdateFunc(uint32 parType);
uint32 zParCmdGetSize(uint32 parType);
void zParCmdFindClipVolumes();

// xParCmdCustom_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d30f0
void xParCmdCustom_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 oorSqr;
	float32 rSqr;
	float32 mdt;
	xPar* p;
	// Line 1672, Address: 0x1d30f0, Func Offset: 0
	// Line 1686, Address: 0x1d3114, Func Offset: 0x24
	// Line 1697, Address: 0x1d3144, Func Offset: 0x54
	// Line 1701, Address: 0x1d3148, Func Offset: 0x58
	// Line 1702, Address: 0x1d3158, Func Offset: 0x68
	// Line 1703, Address: 0x1d315c, Func Offset: 0x6c
	// Line 1706, Address: 0x1d3160, Func Offset: 0x70
	// Line 1712, Address: 0x1d3168, Func Offset: 0x78
	// Line 1718, Address: 0x1d3174, Func Offset: 0x84
	// Line 1712, Address: 0x1d317c, Func Offset: 0x8c
	// Line 1716, Address: 0x1d3188, Func Offset: 0x98
	// Line 1718, Address: 0x1d3198, Func Offset: 0xa8
	// Line 1721, Address: 0x1d31a8, Func Offset: 0xb8
	// Line 1724, Address: 0x1d31cc, Func Offset: 0xdc
	// Line 1728, Address: 0x1d31f8, Func Offset: 0x108
	// Line 1729, Address: 0x1d324c, Func Offset: 0x15c
	// Line 1731, Address: 0x1d3250, Func Offset: 0x160
	// Line 1732, Address: 0x1d3254, Func Offset: 0x164
	// Line 1734, Address: 0x1d325c, Func Offset: 0x16c
	// Line 1741, Address: 0x1d3264, Func Offset: 0x174
	// Line 1743, Address: 0x1d326c, Func Offset: 0x17c
	// Line 1744, Address: 0x1d3270, Func Offset: 0x180
	// Line 1745, Address: 0x1d3274, Func Offset: 0x184
	// Line 1746, Address: 0x1d3278, Func Offset: 0x188
	// Line 1747, Address: 0x1d327c, Func Offset: 0x18c
	// Line 1749, Address: 0x1d3288, Func Offset: 0x198
	// Line 1752, Address: 0x1d3290, Func Offset: 0x1a0
	// Line 1759, Address: 0x1d3298, Func Offset: 0x1a8
	// Func End, Address: 0x1d32c0, Func Offset: 0x1d0
}

// xParCmdCustom_Grass_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d32c0
void xParCmdCustom_Grass_Update(xParGroup* ps, float32 dt)
{
	xPar* p;
	// Line 1639, Address: 0x1d32c0, Func Offset: 0
	// Line 1632, Address: 0x1d32c8, Func Offset: 0x8
	// Line 1639, Address: 0x1d32cc, Func Offset: 0xc
	// Line 1640, Address: 0x1d32d0, Func Offset: 0x10
	// Line 1641, Address: 0x1d32d4, Func Offset: 0x14
	// Line 1644, Address: 0x1d32d8, Func Offset: 0x18
	// Line 1650, Address: 0x1d3304, Func Offset: 0x44
	// Line 1654, Address: 0x1d330c, Func Offset: 0x4c
	// Line 1650, Address: 0x1d3310, Func Offset: 0x50
	// Line 1654, Address: 0x1d3314, Func Offset: 0x54
	// Line 1650, Address: 0x1d3318, Func Offset: 0x58
	// Line 1654, Address: 0x1d3320, Func Offset: 0x60
	// Line 1650, Address: 0x1d332c, Func Offset: 0x6c
	// Line 1654, Address: 0x1d3330, Func Offset: 0x70
	// Line 1656, Address: 0x1d3344, Func Offset: 0x84
	// Line 1657, Address: 0x1d3348, Func Offset: 0x88
	// Line 1656, Address: 0x1d3358, Func Offset: 0x98
	// Line 1657, Address: 0x1d335c, Func Offset: 0x9c
	// Line 1659, Address: 0x1d336c, Func Offset: 0xac
	// Line 1662, Address: 0x1d3374, Func Offset: 0xb4
	// Line 1663, Address: 0x1d3378, Func Offset: 0xb8
	// Line 1662, Address: 0x1d3384, Func Offset: 0xc4
	// Line 1663, Address: 0x1d3388, Func Offset: 0xc8
	// Line 1664, Address: 0x1d3398, Func Offset: 0xd8
	// Line 1665, Address: 0x1d339c, Func Offset: 0xdc
	// Line 1667, Address: 0x1d33a0, Func Offset: 0xe0
	// Line 1668, Address: 0x1d33a4, Func Offset: 0xe4
	// Line 1669, Address: 0x1d33b0, Func Offset: 0xf0
	// Func End, Address: 0x1d33b8, Func Offset: 0xf8
}

// xParCmdTexAnim_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d33c0
void xParCmdTexAnim_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	xParCmdTex* tex;
	xParCmdTexAnim* cmd;
	xPar* p;
	// Line 1453, Address: 0x1d33c0, Func Offset: 0
	// Line 1461, Address: 0x1d33d0, Func Offset: 0x10
	// Line 1462, Address: 0x1d33d4, Func Offset: 0x14
	// Line 1470, Address: 0x1d33dc, Func Offset: 0x1c
	// Line 1472, Address: 0x1d33f8, Func Offset: 0x38
	// Line 1473, Address: 0x1d3400, Func Offset: 0x40
	// Line 1477, Address: 0x1d3410, Func Offset: 0x50
	// Line 1481, Address: 0x1d3418, Func Offset: 0x58
	// Line 1483, Address: 0x1d341c, Func Offset: 0x5c
	// Line 1485, Address: 0x1d3428, Func Offset: 0x68
	// Line 1488, Address: 0x1d3430, Func Offset: 0x70
	// Line 1489, Address: 0x1d344c, Func Offset: 0x8c
	// Line 1492, Address: 0x1d346c, Func Offset: 0xac
	// Line 1493, Address: 0x1d3470, Func Offset: 0xb0
	// Line 1494, Address: 0x1d3478, Func Offset: 0xb8
	// Line 1495, Address: 0x1d3480, Func Offset: 0xc0
	// Line 1497, Address: 0x1d3488, Func Offset: 0xc8
	// Line 1499, Address: 0x1d3498, Func Offset: 0xd8
	// Line 1502, Address: 0x1d34a0, Func Offset: 0xe0
	// Line 1503, Address: 0x1d34ac, Func Offset: 0xec
	// Line 1505, Address: 0x1d34c0, Func Offset: 0x100
	// Line 1506, Address: 0x1d34c4, Func Offset: 0x104
	// Line 1509, Address: 0x1d34d4, Func Offset: 0x114
	// Line 1510, Address: 0x1d34f4, Func Offset: 0x134
	// Line 1511, Address: 0x1d34fc, Func Offset: 0x13c
	// Line 1513, Address: 0x1d3508, Func Offset: 0x148
	// Line 1514, Address: 0x1d352c, Func Offset: 0x16c
	// Line 1515, Address: 0x1d3534, Func Offset: 0x174
	// Line 1518, Address: 0x1d3540, Func Offset: 0x180
	// Line 1519, Address: 0x1d354c, Func Offset: 0x18c
	// Line 1521, Address: 0x1d3560, Func Offset: 0x1a0
	// Line 1522, Address: 0x1d3564, Func Offset: 0x1a4
	// Line 1527, Address: 0x1d3570, Func Offset: 0x1b0
	// Line 1528, Address: 0x1d3574, Func Offset: 0x1b4
	// Line 1530, Address: 0x1d357c, Func Offset: 0x1bc
	// Line 1531, Address: 0x1d3584, Func Offset: 0x1c4
	// Line 1533, Address: 0x1d358c, Func Offset: 0x1cc
	// Line 1535, Address: 0x1d359c, Func Offset: 0x1dc
	// Line 1538, Address: 0x1d35a4, Func Offset: 0x1e4
	// Line 1540, Address: 0x1d35b0, Func Offset: 0x1f0
	// Line 1541, Address: 0x1d35b4, Func Offset: 0x1f4
	// Line 1540, Address: 0x1d35b8, Func Offset: 0x1f8
	// Line 1541, Address: 0x1d35c0, Func Offset: 0x200
	// Line 1543, Address: 0x1d35cc, Func Offset: 0x20c
	// Line 1544, Address: 0x1d35ec, Func Offset: 0x22c
	// Line 1545, Address: 0x1d35f4, Func Offset: 0x234
	// Line 1547, Address: 0x1d3600, Func Offset: 0x240
	// Line 1549, Address: 0x1d3624, Func Offset: 0x264
	// Line 1551, Address: 0x1d362c, Func Offset: 0x26c
	// Line 1553, Address: 0x1d3638, Func Offset: 0x278
	// Line 1554, Address: 0x1d363c, Func Offset: 0x27c
	// Line 1556, Address: 0x1d3644, Func Offset: 0x284
	// Line 1557, Address: 0x1d364c, Func Offset: 0x28c
	// Line 1559, Address: 0x1d3654, Func Offset: 0x294
	// Line 1561, Address: 0x1d3664, Func Offset: 0x2a4
	// Line 1564, Address: 0x1d366c, Func Offset: 0x2ac
	// Line 1566, Address: 0x1d3678, Func Offset: 0x2b8
	// Line 1568, Address: 0x1d367c, Func Offset: 0x2bc
	// Line 1566, Address: 0x1d3680, Func Offset: 0x2c0
	// Line 1568, Address: 0x1d3688, Func Offset: 0x2c8
	// Line 1570, Address: 0x1d3694, Func Offset: 0x2d4
	// Line 1571, Address: 0x1d36b4, Func Offset: 0x2f4
	// Line 1572, Address: 0x1d36bc, Func Offset: 0x2fc
	// Line 1574, Address: 0x1d36c8, Func Offset: 0x308
	// Line 1576, Address: 0x1d36ec, Func Offset: 0x32c
	// Line 1578, Address: 0x1d36f4, Func Offset: 0x334
	// Line 1580, Address: 0x1d3700, Func Offset: 0x340
	// Line 1581, Address: 0x1d3704, Func Offset: 0x344
	// Line 1583, Address: 0x1d370c, Func Offset: 0x34c
	// Line 1584, Address: 0x1d3714, Func Offset: 0x354
	// Line 1586, Address: 0x1d371c, Func Offset: 0x35c
	// Line 1588, Address: 0x1d372c, Func Offset: 0x36c
	// Line 1591, Address: 0x1d3734, Func Offset: 0x374
	// Line 1592, Address: 0x1d3740, Func Offset: 0x380
	// Line 1594, Address: 0x1d3754, Func Offset: 0x394
	// Line 1596, Address: 0x1d3758, Func Offset: 0x398
	// Line 1598, Address: 0x1d3768, Func Offset: 0x3a8
	// Line 1599, Address: 0x1d3788, Func Offset: 0x3c8
	// Line 1600, Address: 0x1d3790, Func Offset: 0x3d0
	// Line 1602, Address: 0x1d379c, Func Offset: 0x3dc
	// Line 1604, Address: 0x1d37c4, Func Offset: 0x404
	// Line 1605, Address: 0x1d37c8, Func Offset: 0x408
	// Line 1606, Address: 0x1d37cc, Func Offset: 0x40c
	// Line 1612, Address: 0x1d37d4, Func Offset: 0x414
	// Line 1613, Address: 0x1d37d8, Func Offset: 0x418
	// Func End, Address: 0x1d37ec, Func Offset: 0x42c
}

// xParCmdTex_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d37f0
void xParCmdTex_Update()
{
	// Line 1415, Address: 0x1d37f0, Func Offset: 0
	// Func End, Address: 0x1d37f8, Func Offset: 0x8
}

// xParCmdJet_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d3800
void xParCmdJet_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 oorSqr;
	float32 rSqr;
	float32 mdt;
	xParCmdJet* cmd;
	xPar* p;
	// Line 1340, Address: 0x1d3800, Func Offset: 0
	// Line 1342, Address: 0x1d3828, Func Offset: 0x28
	// Line 1350, Address: 0x1d382c, Func Offset: 0x2c
	// Line 1353, Address: 0x1d3830, Func Offset: 0x30
	// Line 1355, Address: 0x1d383c, Func Offset: 0x3c
	// Line 1356, Address: 0x1d3848, Func Offset: 0x48
	// Line 1357, Address: 0x1d384c, Func Offset: 0x4c
	// Line 1358, Address: 0x1d3850, Func Offset: 0x50
	// Line 1361, Address: 0x1d3858, Func Offset: 0x58
	// Line 1365, Address: 0x1d3868, Func Offset: 0x68
	// Line 1366, Address: 0x1d386c, Func Offset: 0x6c
	// Line 1372, Address: 0x1d3874, Func Offset: 0x74
	// Line 1378, Address: 0x1d3880, Func Offset: 0x80
	// Line 1372, Address: 0x1d3884, Func Offset: 0x84
	// Line 1376, Address: 0x1d3890, Func Offset: 0x90
	// Line 1378, Address: 0x1d38a0, Func Offset: 0xa0
	// Line 1381, Address: 0x1d38b0, Func Offset: 0xb0
	// Line 1384, Address: 0x1d38cc, Func Offset: 0xcc
	// Line 1385, Address: 0x1d38f8, Func Offset: 0xf8
	// Line 1388, Address: 0x1d3924, Func Offset: 0x124
	// Line 1389, Address: 0x1d393c, Func Offset: 0x13c
	// Line 1390, Address: 0x1d3950, Func Offset: 0x150
	// Line 1393, Address: 0x1d3968, Func Offset: 0x168
	// Line 1394, Address: 0x1d396c, Func Offset: 0x16c
	// Line 1395, Address: 0x1d3978, Func Offset: 0x178
	// Func End, Address: 0x1d39a4, Func Offset: 0x1a4
}

// xParCmdRotateAround_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d39b0
void xParCmdRotateAround_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	_xVec3 out_offset;
	_xVec3 offset;
	_xMat3x3 rotmat;
	_xVec3 angles;
	float32 radius;
	_xMat3x3 lookmat;
	_xVec3 at;
	float32 radius_growth;
	float32 yaw;
	xParCmdRotateAround* cmd;
	xPar* p;
	// Line 1266, Address: 0x1d39b0, Func Offset: 0
	// Line 1268, Address: 0x1d39cc, Func Offset: 0x1c
	// Line 1274, Address: 0x1d39d0, Func Offset: 0x20
	// Line 1280, Address: 0x1d39dc, Func Offset: 0x2c
	// Line 1274, Address: 0x1d39e0, Func Offset: 0x30
	// Line 1277, Address: 0x1d39ec, Func Offset: 0x3c
	// Line 1274, Address: 0x1d39f0, Func Offset: 0x40
	// Line 1281, Address: 0x1d3a04, Func Offset: 0x54
	// Line 1285, Address: 0x1d3a0c, Func Offset: 0x5c
	// Line 1288, Address: 0x1d3a18, Func Offset: 0x68
	// Line 1285, Address: 0x1d3a20, Func Offset: 0x70
	// Line 1288, Address: 0x1d3a48, Func Offset: 0x98
	// Line 1292, Address: 0x1d3a54, Func Offset: 0xa4
	// Line 1295, Address: 0x1d3a60, Func Offset: 0xb0
	// Line 1299, Address: 0x1d3a64, Func Offset: 0xb4
	// Line 1295, Address: 0x1d3a68, Func Offset: 0xb8
	// Line 1299, Address: 0x1d3a70, Func Offset: 0xc0
	// Line 1302, Address: 0x1d3a80, Func Offset: 0xd0
	// Line 1308, Address: 0x1d3a84, Func Offset: 0xd4
	// Line 1309, Address: 0x1d3a88, Func Offset: 0xd8
	// Line 1311, Address: 0x1d3a8c, Func Offset: 0xdc
	// Line 1316, Address: 0x1d3aa0, Func Offset: 0xf0
	// Line 1317, Address: 0x1d3ab0, Func Offset: 0x100
	// Line 1321, Address: 0x1d3ac0, Func Offset: 0x110
	// Line 1322, Address: 0x1d3ac4, Func Offset: 0x114
	// Line 1324, Address: 0x1d3ad0, Func Offset: 0x120
	// Func End, Address: 0x1d3af0, Func Offset: 0x140
}

// xParCmdDamagePlayer_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d3af0
void xParCmdDamagePlayer_Update(xParGroup* ps)
{
	int32 i;
	_xCollis collis;
	int32 i;
	_xBound* pbound;
	xPar* p;
	int32 last_idx;
	int8 init;
	// Line 1201, Address: 0x1d3af0, Func Offset: 0
	// Line 1202, Address: 0x1d3b04, Func Offset: 0x14
	// Line 1212, Address: 0x1d3b20, Func Offset: 0x30
	// Line 1216, Address: 0x1d3b28, Func Offset: 0x38
	// Line 1217, Address: 0x1d3b38, Func Offset: 0x48
	// Line 1218, Address: 0x1d3b48, Func Offset: 0x58
	// Line 1220, Address: 0x1d3b4c, Func Offset: 0x5c
	// Line 1221, Address: 0x1d3b50, Func Offset: 0x60
	// Line 1223, Address: 0x1d3b5c, Func Offset: 0x6c
	// Line 1225, Address: 0x1d3b64, Func Offset: 0x74
	// Line 1226, Address: 0x1d3b6c, Func Offset: 0x7c
	// Line 1227, Address: 0x1d3b70, Func Offset: 0x80
	// Line 1230, Address: 0x1d3b84, Func Offset: 0x94
	// Line 1233, Address: 0x1d3b90, Func Offset: 0xa0
	// Line 1236, Address: 0x1d3bb4, Func Offset: 0xc4
	// Line 1237, Address: 0x1d3bdc, Func Offset: 0xec
	// Line 1238, Address: 0x1d3bec, Func Offset: 0xfc
	// Line 1246, Address: 0x1d3bfc, Func Offset: 0x10c
	// Line 1251, Address: 0x1d3c08, Func Offset: 0x118
	// Line 1253, Address: 0x1d3c10, Func Offset: 0x120
	// Line 1255, Address: 0x1d3c18, Func Offset: 0x128
	// Line 1257, Address: 0x1d3c20, Func Offset: 0x130
	// Line 1258, Address: 0x1d3c34, Func Offset: 0x144
	// Line 1259, Address: 0x1d3c40, Func Offset: 0x150
	// Func End, Address: 0x1d3c58, Func Offset: 0x168
}

// xParCmdAnimalMagentism_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d3c60
void xParCmdAnimalMagentism_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 dist;
	_xVec3 vec;
	float32 mul;
	_xVec3 pos;
	xPar* p;
	// Line 1146, Address: 0x1d3c60, Func Offset: 0
	// Line 1155, Address: 0x1d3c7c, Func Offset: 0x1c
	// Line 1146, Address: 0x1d3c80, Func Offset: 0x20
	// Line 1155, Address: 0x1d3c84, Func Offset: 0x24
	// Line 1156, Address: 0x1d3c90, Func Offset: 0x30
	// Line 1155, Address: 0x1d3c9c, Func Offset: 0x3c
	// Line 1156, Address: 0x1d3cb8, Func Offset: 0x58
	// Line 1160, Address: 0x1d3cc4, Func Offset: 0x64
	// Line 1161, Address: 0x1d3cc8, Func Offset: 0x68
	// Line 1160, Address: 0x1d3ccc, Func Offset: 0x6c
	// Line 1162, Address: 0x1d3cd4, Func Offset: 0x74
	// Line 1166, Address: 0x1d3ce8, Func Offset: 0x88
	// Line 1170, Address: 0x1d3cf0, Func Offset: 0x90
	// Line 1167, Address: 0x1d3cf4, Func Offset: 0x94
	// Line 1168, Address: 0x1d3cf8, Func Offset: 0x98
	// Line 1170, Address: 0x1d3cfc, Func Offset: 0x9c
	// Line 1166, Address: 0x1d3d00, Func Offset: 0xa0
	// Line 1167, Address: 0x1d3d08, Func Offset: 0xa8
	// Line 1168, Address: 0x1d3d14, Func Offset: 0xb4
	// Line 1170, Address: 0x1d3d1c, Func Offset: 0xbc
	// Line 1173, Address: 0x1d3d24, Func Offset: 0xc4
	// Line 1179, Address: 0x1d3d28, Func Offset: 0xc8
	// Line 1173, Address: 0x1d3d30, Func Offset: 0xd0
	// Line 1179, Address: 0x1d3d34, Func Offset: 0xd4
	// Line 1173, Address: 0x1d3d38, Func Offset: 0xd8
	// Line 1174, Address: 0x1d3d44, Func Offset: 0xe4
	// Line 1175, Address: 0x1d3d58, Func Offset: 0xf8
	// Line 1179, Address: 0x1d3d68, Func Offset: 0x108
	// Line 1181, Address: 0x1d3d70, Func Offset: 0x110
	// Line 1182, Address: 0x1d3d74, Func Offset: 0x114
	// Line 1183, Address: 0x1d3d7c, Func Offset: 0x11c
	// Line 1185, Address: 0x1d3d98, Func Offset: 0x138
	// Line 1186, Address: 0x1d3da0, Func Offset: 0x140
	// Line 1185, Address: 0x1d3da4, Func Offset: 0x144
	// Line 1186, Address: 0x1d3da8, Func Offset: 0x148
	// Line 1187, Address: 0x1d3db0, Func Offset: 0x150
	// Line 1188, Address: 0x1d3dbc, Func Offset: 0x15c
	// Line 1191, Address: 0x1d3dc8, Func Offset: 0x168
	// Line 1192, Address: 0x1d3dcc, Func Offset: 0x16c
	// Line 1193, Address: 0x1d3dd8, Func Offset: 0x178
	// Func End, Address: 0x1d3dfc, Func Offset: 0x19c
}

// xParCmdApplyCamMat_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d3e00
void xParCmdApplyCamMat_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 mul;
	_xMat4x3* mat;
	xParCmdApplyCamMat* cmd;
	xPar* p;
	// Line 1083, Address: 0x1d3e00, Func Offset: 0
	// Line 1090, Address: 0x1d3e04, Func Offset: 0x4
	// Line 1095, Address: 0x1d3e08, Func Offset: 0x8
	// Line 1098, Address: 0x1d3e20, Func Offset: 0x20
	// Line 1099, Address: 0x1d3e24, Func Offset: 0x24
	// Line 1101, Address: 0x1d3e2c, Func Offset: 0x2c
	// Line 1102, Address: 0x1d3e40, Func Offset: 0x40
	// Line 1103, Address: 0x1d3e54, Func Offset: 0x54
	// Line 1105, Address: 0x1d3e68, Func Offset: 0x68
	// Line 1106, Address: 0x1d3e6c, Func Offset: 0x6c
	// Line 1107, Address: 0x1d3e74, Func Offset: 0x74
	// Line 1110, Address: 0x1d3e78, Func Offset: 0x78
	// Line 1113, Address: 0x1d3e94, Func Offset: 0x94
	// Line 1114, Address: 0x1d3e98, Func Offset: 0x98
	// Line 1116, Address: 0x1d3ea0, Func Offset: 0xa0
	// Line 1117, Address: 0x1d3eb4, Func Offset: 0xb4
	// Line 1118, Address: 0x1d3ec8, Func Offset: 0xc8
	// Line 1120, Address: 0x1d3edc, Func Offset: 0xdc
	// Line 1121, Address: 0x1d3ee0, Func Offset: 0xe0
	// Line 1125, Address: 0x1d3ee8, Func Offset: 0xe8
	// Line 1128, Address: 0x1d3f04, Func Offset: 0x104
	// Line 1129, Address: 0x1d3f08, Func Offset: 0x108
	// Line 1131, Address: 0x1d3f10, Func Offset: 0x110
	// Line 1132, Address: 0x1d3f24, Func Offset: 0x124
	// Line 1133, Address: 0x1d3f38, Func Offset: 0x138
	// Line 1135, Address: 0x1d3f4c, Func Offset: 0x14c
	// Line 1136, Address: 0x1d3f50, Func Offset: 0x150
	// Line 1138, Address: 0x1d3f58, Func Offset: 0x158
	// Func End, Address: 0x1d3f60, Func Offset: 0x160
}

// xParCmdVelocityApply_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d3f60
void xParCmdVelocityApply_Update(xParGroup* ps)
{
	xPar* p;
	// Line 1066, Address: 0x1d3f60, Func Offset: 0
	// Line 1067, Address: 0x1d3f64, Func Offset: 0x4
	// Line 1069, Address: 0x1d3f6c, Func Offset: 0xc
	// Line 1071, Address: 0x1d3f9c, Func Offset: 0x3c
	// Line 1072, Address: 0x1d3fa0, Func Offset: 0x40
	// Line 1074, Address: 0x1d3fa8, Func Offset: 0x48
	// Func End, Address: 0x1d3fb0, Func Offset: 0x50
}

// xParCmdRotPar_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d3fb0
void xParCmdRotPar_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	xParCmdRotPar* cmd;
	xPar* p;
	// Line 1018, Address: 0x1d3fb0, Func Offset: 0
	// Line 1020, Address: 0x1d3fd8, Func Offset: 0x28
	// Line 1026, Address: 0x1d3fdc, Func Offset: 0x2c
	// Line 1036, Address: 0x1d3fe4, Func Offset: 0x34
	// Line 1026, Address: 0x1d3fe8, Func Offset: 0x38
	// Line 1028, Address: 0x1d3ff0, Func Offset: 0x40
	// Line 1027, Address: 0x1d3ff8, Func Offset: 0x48
	// Line 1026, Address: 0x1d4000, Func Offset: 0x50
	// Line 1028, Address: 0x1d400c, Func Offset: 0x5c
	// Line 1027, Address: 0x1d4018, Func Offset: 0x68
	// Line 1031, Address: 0x1d4020, Func Offset: 0x70
	// Line 1027, Address: 0x1d4024, Func Offset: 0x74
	// Line 1031, Address: 0x1d4028, Func Offset: 0x78
	// Line 1026, Address: 0x1d402c, Func Offset: 0x7c
	// Line 1032, Address: 0x1d4034, Func Offset: 0x84
	// Line 1033, Address: 0x1d4038, Func Offset: 0x88
	// Line 1026, Address: 0x1d403c, Func Offset: 0x8c
	// Line 1033, Address: 0x1d4040, Func Offset: 0x90
	// Line 1032, Address: 0x1d4044, Func Offset: 0x94
	// Line 1037, Address: 0x1d4048, Func Offset: 0x98
	// Line 1040, Address: 0x1d4050, Func Offset: 0xa0
	// Line 1041, Address: 0x1d409c, Func Offset: 0xec
	// Line 1042, Address: 0x1d40e8, Func Offset: 0x138
	// Line 1044, Address: 0x1d4138, Func Offset: 0x188
	// Line 1045, Address: 0x1d413c, Func Offset: 0x18c
	// Line 1046, Address: 0x1d4148, Func Offset: 0x198
	// Func End, Address: 0x1d4174, Func Offset: 0x1c4
}

// xParCmdApplyWind_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4180
void xParCmdApplyWind_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	_xVec3 wind_vec;
	xParCmdApplyWind* cmd;
	xPar* p;
	// Line 987, Address: 0x1d4180, Func Offset: 0
	// Line 989, Address: 0x1d4194, Func Offset: 0x14
	// Line 996, Address: 0x1d419c, Func Offset: 0x1c
	// Line 997, Address: 0x1d41b0, Func Offset: 0x30
	// Line 998, Address: 0x1d41b8, Func Offset: 0x38
	// Line 997, Address: 0x1d41bc, Func Offset: 0x3c
	// Line 998, Address: 0x1d41c8, Func Offset: 0x48
	// Line 1002, Address: 0x1d41dc, Func Offset: 0x5c
	// Line 1003, Address: 0x1d41e0, Func Offset: 0x60
	// Line 1006, Address: 0x1d41e8, Func Offset: 0x68
	// Line 1007, Address: 0x1d41f8, Func Offset: 0x78
	// Line 1009, Address: 0x1d4208, Func Offset: 0x88
	// Line 1010, Address: 0x1d420c, Func Offset: 0x8c
	// Line 1011, Address: 0x1d4218, Func Offset: 0x98
	// Func End, Address: 0x1d4230, Func Offset: 0xb0
}

// xParCmdRandomVelocityPar_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4230
void xParCmdRandomVelocityPar_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	uint32 uvelz;
	uint32 uvely;
	uint32 uvelx;
	_xVec3* velvec;
	_xVec3 rot;
	xParCmdRandomVelocityPar* cmd;
	xPar* p;
	// Line 872, Address: 0x1d4230, Func Offset: 0
	// Line 874, Address: 0x1d4250, Func Offset: 0x20
	// Line 897, Address: 0x1d4254, Func Offset: 0x24
	// Line 882, Address: 0x1d4260, Func Offset: 0x30
	// Line 883, Address: 0x1d426c, Func Offset: 0x3c
	// Line 884, Address: 0x1d4278, Func Offset: 0x48
	// Line 897, Address: 0x1d4284, Func Offset: 0x54
	// Line 898, Address: 0x1d42cc, Func Offset: 0x9c
	// Line 899, Address: 0x1d42fc, Func Offset: 0xcc
	// Line 900, Address: 0x1d4304, Func Offset: 0xd4
	// Line 901, Address: 0x1d430c, Func Offset: 0xdc
	// Line 902, Address: 0x1d4314, Func Offset: 0xe4
	// Line 903, Address: 0x1d4318, Func Offset: 0xe8
	// Line 904, Address: 0x1d431c, Func Offset: 0xec
	// Line 905, Address: 0x1d4324, Func Offset: 0xf4
	// Line 906, Address: 0x1d432c, Func Offset: 0xfc
	// Line 907, Address: 0x1d4334, Func Offset: 0x104
	// Line 908, Address: 0x1d4338, Func Offset: 0x108
	// Line 909, Address: 0x1d433c, Func Offset: 0x10c
	// Line 917, Address: 0x1d4340, Func Offset: 0x110
	// Line 923, Address: 0x1d4348, Func Offset: 0x118
	// Line 927, Address: 0x1d4350, Func Offset: 0x120
	// Line 928, Address: 0x1d4354, Func Offset: 0x124
	// Line 929, Address: 0x1d4358, Func Offset: 0x128
	// Line 930, Address: 0x1d435c, Func Offset: 0x12c
	// Line 931, Address: 0x1d4360, Func Offset: 0x130
	// Line 932, Address: 0x1d4364, Func Offset: 0x134
	// Line 938, Address: 0x1d4368, Func Offset: 0x138
	// Line 939, Address: 0x1d43c8, Func Offset: 0x198
	// Line 940, Address: 0x1d4408, Func Offset: 0x1d8
	// Line 950, Address: 0x1d4418, Func Offset: 0x1e8
	// Line 951, Address: 0x1d441c, Func Offset: 0x1ec
	// Line 952, Address: 0x1d4420, Func Offset: 0x1f0
	// Line 953, Address: 0x1d4424, Func Offset: 0x1f4
	// Line 954, Address: 0x1d4428, Func Offset: 0x1f8
	// Line 955, Address: 0x1d442c, Func Offset: 0x1fc
	// Line 956, Address: 0x1d4430, Func Offset: 0x200
	// Line 957, Address: 0x1d4434, Func Offset: 0x204
	// Line 958, Address: 0x1d4438, Func Offset: 0x208
	// Line 959, Address: 0x1d443c, Func Offset: 0x20c
	// Line 960, Address: 0x1d4440, Func Offset: 0x210
	// Line 961, Address: 0x1d4444, Func Offset: 0x214
	// Line 979, Address: 0x1d4448, Func Offset: 0x218
	// Line 980, Address: 0x1d4450, Func Offset: 0x220
	// Func End, Address: 0x1d4474, Func Offset: 0x244
}

// xParCmdPlayerCollision_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4480
void xParCmdPlayerCollision_Update(zParCmd* c, xParGroup* ps)
{
	_xRay3 ray;
	float32 t;
	xParCmdPlayerCollision* cmd;
	xPar* p;
	// Line 825, Address: 0x1d4480, Func Offset: 0
	// Line 833, Address: 0x1d4494, Func Offset: 0x14
	// Line 834, Address: 0x1d4498, Func Offset: 0x18
	// Line 838, Address: 0x1d44a4, Func Offset: 0x24
	// Line 839, Address: 0x1d44ac, Func Offset: 0x2c
	// Line 838, Address: 0x1d44b0, Func Offset: 0x30
	// Line 839, Address: 0x1d44c0, Func Offset: 0x40
	// Line 840, Address: 0x1d44d0, Func Offset: 0x50
	// Line 841, Address: 0x1d44d8, Func Offset: 0x58
	// Line 842, Address: 0x1d44f4, Func Offset: 0x74
	// Line 843, Address: 0x1d44f8, Func Offset: 0x78
	// Line 845, Address: 0x1d4500, Func Offset: 0x80
	// Line 843, Address: 0x1d4504, Func Offset: 0x84
	// Line 845, Address: 0x1d4508, Func Offset: 0x88
	// Line 849, Address: 0x1d452c, Func Offset: 0xac
	// Line 851, Address: 0x1d4530, Func Offset: 0xb0
	// Line 849, Address: 0x1d4538, Func Offset: 0xb8
	// Line 850, Address: 0x1d454c, Func Offset: 0xcc
	// Line 851, Address: 0x1d4560, Func Offset: 0xe0
	// Line 852, Address: 0x1d4570, Func Offset: 0xf0
	// Line 853, Address: 0x1d457c, Func Offset: 0xfc
	// Line 855, Address: 0x1d4594, Func Offset: 0x114
	// Line 857, Address: 0x1d4598, Func Offset: 0x118
	// Line 859, Address: 0x1d45a8, Func Offset: 0x128
	// Line 862, Address: 0x1d45ac, Func Offset: 0x12c
	// Line 864, Address: 0x1d45b0, Func Offset: 0x130
	// Line 865, Address: 0x1d45b4, Func Offset: 0x134
	// Line 866, Address: 0x1d45c0, Func Offset: 0x140
	// Func End, Address: 0x1d45d8, Func Offset: 0x158
}

// xParCmdAlpha3rdPolyReg_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d45e0
void xParCmdAlpha3rdPolyReg_Update(zParCmd* c, xParGroup* ps)
{
	float32 alpha;
	float32 t2;
	float32 t;
	xParCmdAlpha3rdPolyReg* cmd;
	xPar* p;
	// Line 781, Address: 0x1d45e0, Func Offset: 0
	// Line 789, Address: 0x1d45f0, Func Offset: 0x10
	// Line 790, Address: 0x1d45f4, Func Offset: 0x14
	// Line 794, Address: 0x1d45fc, Func Offset: 0x1c
	// Line 795, Address: 0x1d4604, Func Offset: 0x24
	// Line 794, Address: 0x1d4608, Func Offset: 0x28
	// Line 795, Address: 0x1d4618, Func Offset: 0x38
	// Line 796, Address: 0x1d4628, Func Offset: 0x48
	// Line 797, Address: 0x1d4630, Func Offset: 0x50
	// Line 798, Address: 0x1d464c, Func Offset: 0x6c
	// Line 799, Address: 0x1d4650, Func Offset: 0x70
	// Line 808, Address: 0x1d4658, Func Offset: 0x78
	// Line 799, Address: 0x1d465c, Func Offset: 0x7c
	// Line 808, Address: 0x1d4660, Func Offset: 0x80
	// Line 800, Address: 0x1d466c, Func Offset: 0x8c
	// Line 808, Address: 0x1d4670, Func Offset: 0x90
	// Line 809, Address: 0x1d4698, Func Offset: 0xb8
	// Line 810, Address: 0x1d46a8, Func Offset: 0xc8
	// Line 811, Address: 0x1d46b0, Func Offset: 0xd0
	// Line 812, Address: 0x1d46bc, Func Offset: 0xdc
	// Line 815, Address: 0x1d46c0, Func Offset: 0xe0
	// Line 816, Address: 0x1d46c4, Func Offset: 0xe4
	// Line 818, Address: 0x1d46d0, Func Offset: 0xf0
	// Func End, Address: 0x1d46e4, Func Offset: 0x104
}

// xParCmdClipVolumes_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d46f0
void xParCmdClipVolumes_Update(xParGroup* ps)
{
	_xCollis collis;
	int32 i;
	xPar* p;
	// Line 744, Address: 0x1d46f0, Func Offset: 0
	// Line 752, Address: 0x1d470c, Func Offset: 0x1c
	// Line 753, Address: 0x1d4710, Func Offset: 0x20
	// Line 757, Address: 0x1d4720, Func Offset: 0x30
	// Line 763, Address: 0x1d472c, Func Offset: 0x3c
	// Line 764, Address: 0x1d4744, Func Offset: 0x54
	// Line 767, Address: 0x1d4754, Func Offset: 0x64
	// Line 768, Address: 0x1d475c, Func Offset: 0x6c
	// Line 767, Address: 0x1d4760, Func Offset: 0x70
	// Line 769, Address: 0x1d4764, Func Offset: 0x74
	// Line 772, Address: 0x1d4778, Func Offset: 0x88
	// Line 773, Address: 0x1d477c, Func Offset: 0x8c
	// Line 774, Address: 0x1d4788, Func Offset: 0x98
	// Func End, Address: 0x1d47a8, Func Offset: 0xb8
}

// xParCmdScale_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d47b0
void xParCmdScale_Update(zParCmd* c, xParGroup* ps)
{
	float32 t2;
	float32 t;
	float32 a3;
	float32 a2;
	float32 a;
	float32 constant;
	xPar* p;
	// Line 688, Address: 0x1d47b0, Func Offset: 0
	// Line 692, Address: 0x1d47d4, Func Offset: 0x24
	// Line 691, Address: 0x1d47dc, Func Offset: 0x2c
	// Line 693, Address: 0x1d47e0, Func Offset: 0x30
	// Line 694, Address: 0x1d47ec, Func Offset: 0x3c
	// Line 695, Address: 0x1d47f8, Func Offset: 0x48
	// Line 698, Address: 0x1d4800, Func Offset: 0x50
	// Line 699, Address: 0x1d4808, Func Offset: 0x58
	// Line 700, Address: 0x1d4814, Func Offset: 0x64
	// Line 701, Address: 0x1d4820, Func Offset: 0x70
	// Line 710, Address: 0x1d482c, Func Offset: 0x7c
	// Line 711, Address: 0x1d4830, Func Offset: 0x80
	// Line 714, Address: 0x1d4838, Func Offset: 0x88
	// Line 715, Address: 0x1d4840, Func Offset: 0x90
	// Line 714, Address: 0x1d4844, Func Offset: 0x94
	// Line 715, Address: 0x1d4854, Func Offset: 0xa4
	// Line 716, Address: 0x1d4864, Func Offset: 0xb4
	// Line 717, Address: 0x1d486c, Func Offset: 0xbc
	// Line 718, Address: 0x1d4888, Func Offset: 0xd8
	// Line 719, Address: 0x1d4890, Func Offset: 0xe0
	// Line 729, Address: 0x1d4898, Func Offset: 0xe8
	// Line 719, Address: 0x1d489c, Func Offset: 0xec
	// Line 729, Address: 0x1d48a0, Func Offset: 0xf0
	// Line 720, Address: 0x1d48a4, Func Offset: 0xf4
	// Line 729, Address: 0x1d48a8, Func Offset: 0xf8
	// Line 732, Address: 0x1d48c4, Func Offset: 0x114
	// Line 735, Address: 0x1d48c8, Func Offset: 0x118
	// Line 736, Address: 0x1d48cc, Func Offset: 0x11c
	// Line 737, Address: 0x1d48d8, Func Offset: 0x128
	// Func End, Address: 0x1d48e0, Func Offset: 0x130
}

// xParCmdSmokeAlpha_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d48e0
void xParCmdSmokeAlpha_Update(zParCmd* c, xParGroup* ps)
{
	float32 alpha;
	float32 t2;
	float32 t;
	float32 a3;
	float32 a2;
	float32 a;
	float32 constant;
	xPar* p;
	// Line 605, Address: 0x1d48e0, Func Offset: 0
	// Line 615, Address: 0x1d48fc, Func Offset: 0x1c
	// Line 624, Address: 0x1d4920, Func Offset: 0x40
	// Line 623, Address: 0x1d4928, Func Offset: 0x48
	// Line 625, Address: 0x1d492c, Func Offset: 0x4c
	// Line 626, Address: 0x1d4938, Func Offset: 0x58
	// Line 627, Address: 0x1d4944, Func Offset: 0x64
	// Line 630, Address: 0x1d494c, Func Offset: 0x6c
	// Line 629, Address: 0x1d4954, Func Offset: 0x74
	// Line 631, Address: 0x1d4958, Func Offset: 0x78
	// Line 632, Address: 0x1d4964, Func Offset: 0x84
	// Line 640, Address: 0x1d4970, Func Offset: 0x90
	// Line 641, Address: 0x1d4974, Func Offset: 0x94
	// Line 644, Address: 0x1d497c, Func Offset: 0x9c
	// Line 645, Address: 0x1d4984, Func Offset: 0xa4
	// Line 644, Address: 0x1d4988, Func Offset: 0xa8
	// Line 645, Address: 0x1d4998, Func Offset: 0xb8
	// Line 648, Address: 0x1d49a8, Func Offset: 0xc8
	// Line 649, Address: 0x1d49b0, Func Offset: 0xd0
	// Line 651, Address: 0x1d49cc, Func Offset: 0xec
	// Line 653, Address: 0x1d49d0, Func Offset: 0xf0
	// Line 663, Address: 0x1d49e0, Func Offset: 0x100
	// Line 655, Address: 0x1d49e8, Func Offset: 0x108
	// Line 663, Address: 0x1d49ec, Func Offset: 0x10c
	// Line 664, Address: 0x1d4a08, Func Offset: 0x128
	// Line 665, Address: 0x1d4a18, Func Offset: 0x138
	// Line 666, Address: 0x1d4a20, Func Offset: 0x140
	// Line 667, Address: 0x1d4a2c, Func Offset: 0x14c
	// Line 670, Address: 0x1d4a30, Func Offset: 0x150
	// Line 671, Address: 0x1d4a34, Func Offset: 0x154
	// Line 673, Address: 0x1d4a40, Func Offset: 0x160
	// Func End, Address: 0x1d4a60, Func Offset: 0x180
}

// xParCmdScale3rdPolyReg_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4a60
void xParCmdScale3rdPolyReg_Update(zParCmd* c, xParGroup* ps)
{
	float32 t2;
	float32 t;
	xParCmdScale3rdPolyReg* cmd;
	xPar* p;
	// Line 564, Address: 0x1d4a60, Func Offset: 0
	// Line 570, Address: 0x1d4a64, Func Offset: 0x4
	// Line 571, Address: 0x1d4a68, Func Offset: 0x8
	// Line 577, Address: 0x1d4a70, Func Offset: 0x10
	// Line 575, Address: 0x1d4a74, Func Offset: 0x14
	// Line 574, Address: 0x1d4a78, Func Offset: 0x18
	// Line 575, Address: 0x1d4a90, Func Offset: 0x30
	// Line 576, Address: 0x1d4aa0, Func Offset: 0x40
	// Line 577, Address: 0x1d4aa8, Func Offset: 0x48
	// Line 578, Address: 0x1d4ab8, Func Offset: 0x58
	// Line 589, Address: 0x1d4ac0, Func Offset: 0x60
	// Line 579, Address: 0x1d4ac4, Func Offset: 0x64
	// Line 589, Address: 0x1d4ac8, Func Offset: 0x68
	// Line 580, Address: 0x1d4ad4, Func Offset: 0x74
	// Line 589, Address: 0x1d4ad8, Func Offset: 0x78
	// Line 592, Address: 0x1d4afc, Func Offset: 0x9c
	// Line 595, Address: 0x1d4b00, Func Offset: 0xa0
	// Line 596, Address: 0x1d4b04, Func Offset: 0xa4
	// Line 597, Address: 0x1d4b10, Func Offset: 0xb0
	// Func End, Address: 0x1d4b18, Func Offset: 0xb8
}

// xParCmdMoveRandomPar_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4b20
void xParCmdMoveRandomPar_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	xParCmdMoveRandomPar* cmd;
	xPar* p;
	// Line 529, Address: 0x1d4b20, Func Offset: 0
	// Line 538, Address: 0x1d4b34, Func Offset: 0x14
	// Line 531, Address: 0x1d4b3c, Func Offset: 0x1c
	// Line 538, Address: 0x1d4b40, Func Offset: 0x20
	// Line 545, Address: 0x1d4b44, Func Offset: 0x24
	// Line 540, Address: 0x1d4b48, Func Offset: 0x28
	// Line 542, Address: 0x1d4b4c, Func Offset: 0x2c
	// Line 540, Address: 0x1d4b50, Func Offset: 0x30
	// Line 546, Address: 0x1d4b54, Func Offset: 0x34
	// Line 548, Address: 0x1d4b5c, Func Offset: 0x3c
	// Line 549, Address: 0x1d4b7c, Func Offset: 0x5c
	// Line 551, Address: 0x1d4ba0, Func Offset: 0x80
	// Line 552, Address: 0x1d4ba4, Func Offset: 0x84
	// Line 554, Address: 0x1d4bb0, Func Offset: 0x90
	// Func End, Address: 0x1d4bc8, Func Offset: 0xa8
}

// xParCmdMoveRandom_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4bd0
void xParCmdMoveRandom_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	xParCmdMove* cmd;
	xPar* p;
	// Line 494, Address: 0x1d4bd0, Func Offset: 0
	// Line 496, Address: 0x1d4bf0, Func Offset: 0x20
	// Line 504, Address: 0x1d4bf8, Func Offset: 0x28
	// Line 505, Address: 0x1d4c04, Func Offset: 0x34
	// Line 506, Address: 0x1d4c1c, Func Offset: 0x4c
	// Line 507, Address: 0x1d4c34, Func Offset: 0x64
	// Line 509, Address: 0x1d4c44, Func Offset: 0x74
	// Line 507, Address: 0x1d4c48, Func Offset: 0x78
	// Line 514, Address: 0x1d4c4c, Func Offset: 0x7c
	// Line 509, Address: 0x1d4c50, Func Offset: 0x80
	// Line 507, Address: 0x1d4c58, Func Offset: 0x88
	// Line 509, Address: 0x1d4c5c, Func Offset: 0x8c
	// Line 510, Address: 0x1d4c68, Func Offset: 0x98
	// Line 515, Address: 0x1d4c70, Func Offset: 0xa0
	// Line 517, Address: 0x1d4c78, Func Offset: 0xa8
	// Line 519, Address: 0x1d4c9c, Func Offset: 0xcc
	// Line 520, Address: 0x1d4ca0, Func Offset: 0xd0
	// Line 522, Address: 0x1d4ca8, Func Offset: 0xd8
	// Func End, Address: 0x1d4ccc, Func Offset: 0xfc
}

// xParCmdMove_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4cd0
void xParCmdMove_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	xParCmdMove* cmd;
	xPar* p;
	// Line 466, Address: 0x1d4cd0, Func Offset: 0
	// Line 480, Address: 0x1d4cd4, Func Offset: 0x4
	// Line 474, Address: 0x1d4cd8, Func Offset: 0x8
	// Line 476, Address: 0x1d4ce4, Func Offset: 0x14
	// Line 481, Address: 0x1d4cec, Func Offset: 0x1c
	// Line 483, Address: 0x1d4cf4, Func Offset: 0x24
	// Line 485, Address: 0x1d4d18, Func Offset: 0x48
	// Line 486, Address: 0x1d4d1c, Func Offset: 0x4c
	// Line 488, Address: 0x1d4d28, Func Offset: 0x58
	// Func End, Address: 0x1d4d30, Func Offset: 0x60
}

// xParCmdAccelerate_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4d30
void xParCmdAccelerate_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	xParCmdAccelerate* cmd;
	xPar* p;
	// Line 436, Address: 0x1d4d30, Func Offset: 0
	// Line 449, Address: 0x1d4d34, Func Offset: 0x4
	// Line 444, Address: 0x1d4d38, Func Offset: 0x8
	// Line 445, Address: 0x1d4d44, Func Offset: 0x14
	// Line 450, Address: 0x1d4d4c, Func Offset: 0x1c
	// Line 452, Address: 0x1d4d54, Func Offset: 0x24
	// Line 453, Address: 0x1d4d60, Func Offset: 0x30
	// Line 454, Address: 0x1d4d6c, Func Offset: 0x3c
	// Line 456, Address: 0x1d4d78, Func Offset: 0x48
	// Line 457, Address: 0x1d4d7c, Func Offset: 0x4c
	// Line 458, Address: 0x1d4d88, Func Offset: 0x58
	// Func End, Address: 0x1d4d90, Func Offset: 0x60
}

// xParCmdOrbitLine_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4d90
void xParCmdOrbitLine_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 force;
	float32 rSqr;
	float32 mdt;
	xParCmdOrbitLine* cmd;
	xPar* p;
	// Line 382, Address: 0x1d4d90, Func Offset: 0
	// Line 384, Address: 0x1d4db4, Func Offset: 0x24
	// Line 396, Address: 0x1d4db8, Func Offset: 0x28
	// Line 393, Address: 0x1d4dbc, Func Offset: 0x2c
	// Line 397, Address: 0x1d4dc0, Func Offset: 0x30
	// Line 400, Address: 0x1d4dc8, Func Offset: 0x38
	// Line 402, Address: 0x1d4de0, Func Offset: 0x50
	// Line 400, Address: 0x1d4de4, Func Offset: 0x54
	// Line 402, Address: 0x1d4de8, Func Offset: 0x58
	// Line 400, Address: 0x1d4df0, Func Offset: 0x60
	// Line 413, Address: 0x1d4df8, Func Offset: 0x68
	// Line 402, Address: 0x1d4dfc, Func Offset: 0x6c
	// Line 407, Address: 0x1d4e14, Func Offset: 0x84
	// Line 411, Address: 0x1d4e38, Func Offset: 0xa8
	// Line 413, Address: 0x1d4e48, Func Offset: 0xb8
	// Line 415, Address: 0x1d4e58, Func Offset: 0xc8
	// Line 418, Address: 0x1d4e64, Func Offset: 0xd4
	// Line 419, Address: 0x1d4e68, Func Offset: 0xd8
	// Line 418, Address: 0x1d4e6c, Func Offset: 0xdc
	// Line 419, Address: 0x1d4e78, Func Offset: 0xe8
	// Line 420, Address: 0x1d4e84, Func Offset: 0xf4
	// Line 421, Address: 0x1d4e94, Func Offset: 0x104
	// Line 422, Address: 0x1d4ea4, Func Offset: 0x114
	// Line 425, Address: 0x1d4ea8, Func Offset: 0x118
	// Line 426, Address: 0x1d4eac, Func Offset: 0x11c
	// Line 427, Address: 0x1d4eb8, Func Offset: 0x128
	// Func End, Address: 0x1d4ee0, Func Offset: 0x150
}

// xParCmdOrbitPoint_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4ee0
void xParCmdOrbitPoint_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 force;
	float32 rSqr;
	float32 mdt;
	xParCmdOrbitPoint* cmd;
	xPar* p;
	// Line 338, Address: 0x1d4ee0, Func Offset: 0
	// Line 340, Address: 0x1d4f04, Func Offset: 0x24
	// Line 352, Address: 0x1d4f08, Func Offset: 0x28
	// Line 349, Address: 0x1d4f0c, Func Offset: 0x2c
	// Line 353, Address: 0x1d4f10, Func Offset: 0x30
	// Line 356, Address: 0x1d4f18, Func Offset: 0x38
	// Line 362, Address: 0x1d4f30, Func Offset: 0x50
	// Line 356, Address: 0x1d4f34, Func Offset: 0x54
	// Line 360, Address: 0x1d4f40, Func Offset: 0x60
	// Line 362, Address: 0x1d4f50, Func Offset: 0x70
	// Line 364, Address: 0x1d4f60, Func Offset: 0x80
	// Line 367, Address: 0x1d4f6c, Func Offset: 0x8c
	// Line 368, Address: 0x1d4f70, Func Offset: 0x90
	// Line 367, Address: 0x1d4f74, Func Offset: 0x94
	// Line 368, Address: 0x1d4f80, Func Offset: 0xa0
	// Line 369, Address: 0x1d4f8c, Func Offset: 0xac
	// Line 370, Address: 0x1d4f9c, Func Offset: 0xbc
	// Line 371, Address: 0x1d4fac, Func Offset: 0xcc
	// Line 374, Address: 0x1d4fb0, Func Offset: 0xd0
	// Line 375, Address: 0x1d4fb4, Func Offset: 0xd4
	// Line 376, Address: 0x1d4fc0, Func Offset: 0xe0
	// Func End, Address: 0x1d4fe8, Func Offset: 0x108
}

// xParCmdFollow_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d4ff0
void xParCmdFollow_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 force;
	float32 lenSqr;
	float32 mdt;
	xParCmdFollow* cmd;
	xPar* p;
	// Line 300, Address: 0x1d4ff0, Func Offset: 0
	// Line 302, Address: 0x1d5010, Func Offset: 0x20
	// Line 314, Address: 0x1d5014, Func Offset: 0x24
	// Line 311, Address: 0x1d5018, Func Offset: 0x28
	// Line 315, Address: 0x1d501c, Func Offset: 0x2c
	// Line 318, Address: 0x1d5024, Func Offset: 0x34
	// Line 321, Address: 0x1d5048, Func Offset: 0x58
	// Line 324, Address: 0x1d5058, Func Offset: 0x68
	// Line 326, Address: 0x1d5060, Func Offset: 0x70
	// Line 324, Address: 0x1d5064, Func Offset: 0x74
	// Line 326, Address: 0x1d507c, Func Offset: 0x8c
	// Line 327, Address: 0x1d5088, Func Offset: 0x98
	// Line 328, Address: 0x1d5098, Func Offset: 0xa8
	// Line 330, Address: 0x1d50a8, Func Offset: 0xb8
	// Line 331, Address: 0x1d50b0, Func Offset: 0xc0
	// Line 332, Address: 0x1d50c8, Func Offset: 0xd8
	// Func End, Address: 0x1d50ec, Func Offset: 0xfc
}

// xParCmdAge_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d50f0
void xParCmdAge_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 age_rate;
	xPar* p;
	// Line 281, Address: 0x1d50f0, Func Offset: 0
	// Line 284, Address: 0x1d50f8, Func Offset: 0x8
	// Line 286, Address: 0x1d50fc, Func Offset: 0xc
	// Line 288, Address: 0x1d5104, Func Offset: 0x14
	// Line 290, Address: 0x1d5110, Func Offset: 0x20
	// Line 291, Address: 0x1d5114, Func Offset: 0x24
	// Line 294, Address: 0x1d5120, Func Offset: 0x30
	// Func End, Address: 0x1d5128, Func Offset: 0x38
}

// xParCmdKillSlow_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d5130
void xParCmdKillSlow_Update(zParCmd* c, xParGroup* ps, float32 dt)
{
	float32 speedLimit;
	xParCmdKillSlow* cmd;
	xPar* p;
	// Line 230, Address: 0x1d5130, Func Offset: 0
	// Line 238, Address: 0x1d5134, Func Offset: 0x4
	// Line 241, Address: 0x1d5138, Func Offset: 0x8
	// Line 243, Address: 0x1d513c, Func Offset: 0xc
	// Line 245, Address: 0x1d5148, Func Offset: 0x18
	// Line 248, Address: 0x1d5150, Func Offset: 0x20
	// Line 249, Address: 0x1d517c, Func Offset: 0x4c
	// Line 251, Address: 0x1d5180, Func Offset: 0x50
	// Line 252, Address: 0x1d5184, Func Offset: 0x54
	// Line 253, Address: 0x1d518c, Func Offset: 0x5c
	// Line 256, Address: 0x1d5194, Func Offset: 0x64
	// Line 259, Address: 0x1d519c, Func Offset: 0x6c
	// Line 260, Address: 0x1d51c8, Func Offset: 0x98
	// Line 262, Address: 0x1d51d0, Func Offset: 0xa0
	// Line 263, Address: 0x1d51d4, Func Offset: 0xa4
	// Line 265, Address: 0x1d51dc, Func Offset: 0xac
	// Line 266, Address: 0x1d51e0, Func Offset: 0xb0
	// Func End, Address: 0x1d51e8, Func Offset: 0xb8
}

// xParCmdKillDistance_Update__FP7zParCmdP9xParGroupf
// Start address: 0x1d51f0
void xParCmdKillDistance_Update(zParCmd* c, xParGroup* ps)
{
	_xVec3* camera_pos;
	xParCmdKillDistance* cmd;
	xPar* p;
	// Line 184, Address: 0x1d51f0, Func Offset: 0
	// Line 191, Address: 0x1d51f4, Func Offset: 0x4
	// Line 196, Address: 0x1d51f8, Func Offset: 0x8
	// Line 191, Address: 0x1d51fc, Func Offset: 0xc
	// Line 198, Address: 0x1d5200, Func Offset: 0x10
	// Line 200, Address: 0x1d520c, Func Offset: 0x1c
	// Line 202, Address: 0x1d5214, Func Offset: 0x24
	// Line 204, Address: 0x1d522c, Func Offset: 0x3c
	// Line 202, Address: 0x1d5230, Func Offset: 0x40
	// Line 204, Address: 0x1d523c, Func Offset: 0x4c
	// Line 205, Address: 0x1d525c, Func Offset: 0x6c
	// Line 207, Address: 0x1d5260, Func Offset: 0x70
	// Line 208, Address: 0x1d5264, Func Offset: 0x74
	// Line 209, Address: 0x1d526c, Func Offset: 0x7c
	// Line 212, Address: 0x1d5274, Func Offset: 0x84
	// Line 214, Address: 0x1d527c, Func Offset: 0x8c
	// Line 216, Address: 0x1d5294, Func Offset: 0xa4
	// Line 214, Address: 0x1d5298, Func Offset: 0xa8
	// Line 216, Address: 0x1d52a4, Func Offset: 0xb4
	// Line 217, Address: 0x1d52c4, Func Offset: 0xd4
	// Line 219, Address: 0x1d52c8, Func Offset: 0xd8
	// Line 220, Address: 0x1d52cc, Func Offset: 0xdc
	// Line 221, Address: 0x1d52d4, Func Offset: 0xe4
	// Line 222, Address: 0x1d52d8, Func Offset: 0xe8
	// Func End, Address: 0x1d52e0, Func Offset: 0xf0
}

// zParCmdGetUpdateFunc__FUi
// Start address: 0x1d52e0
void(*)(zParCmd*, xParGroup*, float32) zParCmdGetUpdateFunc(uint32 parType)
{
	int32 i;
	// Line 167, Address: 0x1d52e8, Func Offset: 0x8
	// Line 169, Address: 0x1d52f0, Func Offset: 0x10
	// Line 170, Address: 0x1d52fc, Func Offset: 0x1c
	// Line 171, Address: 0x1d5314, Func Offset: 0x34
	// Line 174, Address: 0x1d5320, Func Offset: 0x40
	// Line 175, Address: 0x1d5324, Func Offset: 0x44
	// Func End, Address: 0x1d532c, Func Offset: 0x4c
}

// zParCmdGetSize__FUi
// Start address: 0x1d5330
uint32 zParCmdGetSize(uint32 parType)
{
	int32 i;
	// Line 146, Address: 0x1d5338, Func Offset: 0x8
	// Line 148, Address: 0x1d5340, Func Offset: 0x10
	// Line 149, Address: 0x1d534c, Func Offset: 0x1c
	// Line 150, Address: 0x1d5364, Func Offset: 0x34
	// Line 154, Address: 0x1d5370, Func Offset: 0x40
	// Line 155, Address: 0x1d5374, Func Offset: 0x44
	// Func End, Address: 0x1d537c, Func Offset: 0x4c
}

// zParCmdFindClipVolumes__Fv
// Start address: 0x1d5380
void zParCmdFindClipVolumes()
{
	_zVolume* vol;
	int8 findname[64];
	// Line 117, Address: 0x1d5380, Func Offset: 0
	// Line 120, Address: 0x1d538c, Func Offset: 0xc
	// Line 122, Address: 0x1d53a8, Func Offset: 0x28
	// Line 124, Address: 0x1d53b4, Func Offset: 0x34
	// Line 126, Address: 0x1d53c4, Func Offset: 0x44
	// Line 127, Address: 0x1d53d4, Func Offset: 0x54
	// Line 130, Address: 0x1d53dc, Func Offset: 0x5c
	// Line 131, Address: 0x1d53ec, Func Offset: 0x6c
	// Line 132, Address: 0x1d5408, Func Offset: 0x88
	// Func End, Address: 0x1d541c, Func Offset: 0x9c
}

