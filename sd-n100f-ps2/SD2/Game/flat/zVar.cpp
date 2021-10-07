typedef struct _xEnt;
typedef struct RpClump;
typedef struct _tagxCam;
typedef struct RxCluster;
typedef struct zPlayerGlobals;
typedef struct _zCutsceneMgr;
typedef struct _xSphere;
typedef struct RxHeap;
typedef struct xSurface;
typedef struct _tagxRumble;
typedef struct xAnimPlay;
typedef struct tag_xFile;
typedef struct RwMatrixTag;
typedef struct _xEntFrame;
typedef struct RxClusterRef;
typedef struct rxHeapBlockHeader;
typedef struct sceCdlFILE;
typedef struct RpCollSector;
typedef struct xBase;
typedef struct xCutsceneInfo;
typedef struct zCutsceneMgrAsset;
typedef struct RpMeshHeader;
typedef enum RxClusterValidityReq;
typedef struct xAnimFile;
typedef struct xSerial;
typedef struct _zEnt;
typedef struct RxPipelineCluster;
typedef struct xCutscene;
typedef struct RxPipeline;
typedef struct xAnimSingle;
typedef struct xAnimEffect;
typedef struct RxClusterDefinition;
typedef struct RwSphere;
typedef struct tag_iFile;
typedef struct _xCylinder;
typedef struct RpWorldSector;
typedef struct _xEnv;
typedef struct _xCollis;
typedef struct RxOutputSpec;
typedef struct zCutsceneZbufferHack;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimTransitionList;
typedef struct RxPacket;
typedef struct xAnimTable;
typedef struct xModelPool;
typedef struct xSndVoiceInfo;
typedef enum RwTextureAddressMode;
typedef struct _xEntShadow;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RpWorld;
typedef struct xModelInstance;
typedef struct RxPipelineNode;
typedef struct p2LinkAsset;
typedef struct _xBox;
typedef struct RpGeometry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimActiveEffect;
typedef struct RpAtomic;
typedef enum RwCameraProjection;
typedef struct _xEntDrive;
typedef struct RxPipelineNodeParam;
typedef struct zShaggy1Globals;
typedef struct RpVertexNormal;
typedef struct xMemPool;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMaterialList;
typedef struct _tagxCamFollow;
typedef struct iShadowCache;
typedef struct RwObjectHasFrame;
typedef struct _zEntHangable;
typedef struct RpMorphTarget;
typedef struct xCutsceneTime;
typedef struct RpSector;
typedef struct RpMaterial;
typedef enum _tagRumbleType;
typedef struct RxNodeDefinition;
typedef struct zCheckPoint;
typedef struct p2EntHangableAsset;
typedef struct RwResEntry;
typedef struct iSndInfo;
typedef struct p2EntAsset;
typedef struct _xMat4x3;
typedef struct RwLLLink;
typedef struct _tagxCamPathAsset;
typedef struct RwV3d;
typedef struct zGlobalGameStats;
typedef struct RwRGBAReal;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTransition;
typedef struct _xBound;
typedef struct _xScene;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RpPolygon;
typedef struct xSndVol;
typedef struct RxPipelineRequiresCluster;
typedef struct RpLight;
typedef struct xAnimState;
typedef struct RwV2d;
typedef struct xCutsceneData;
typedef struct RwRaster;
typedef struct zJumpParam;
typedef struct RpTriangle;
typedef struct _tagxCamShoulder;
typedef struct RwCamera;
typedef enum RwTextureFilterMode;
typedef struct iEnv;
typedef struct zGlobals;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct _xEntCollis;
typedef struct _tagxCamFollowAsset;
typedef struct _tagxPad;
typedef struct xCamAsset;
typedef struct zPortalAsset;
typedef struct zAssetPickupTable;
typedef struct xCutsceneBreak;
typedef struct RwTexDictionary;
typedef struct RwRGBA;
typedef struct _xQuat;
typedef struct zVarEntry;
typedef struct _xVec3;
typedef struct RwPlane;
typedef enum _tagCamType;
typedef struct zScene;
typedef struct RwLinkList;
typedef struct RwFrustumPlane;
typedef struct zPlayerStatic;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct RwTexture;
typedef struct _zPortal;
typedef struct _tagxCamStatic;
typedef struct iFogParams;
typedef struct rxReq;
typedef struct zCutsceneZbuffer;
typedef struct zVarMagicEntry;
typedef enum RwFogType;
typedef struct p2BaseAsset;
typedef struct _zPlatform;
typedef struct _xRot;
typedef struct RpInterpolator;
typedef struct RwFrame;
typedef struct RwTexCoords;
typedef struct _tagxCamFrame;
typedef enum _tagPadState;
typedef enum RxClusterForcePresent;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct _tagiPad;
typedef enum RxNodeDefEditable;
typedef struct _tagxCamStaticFollow;
typedef struct iModelTag;
typedef struct xSndGlobals;
typedef struct RxIoSpec;
typedef struct xFFX;
typedef struct zSaveLoadGame;
typedef struct _iCollis;
typedef struct xQCData;
typedef struct RxNodeMethods;
typedef struct _tagPadAnalog;
typedef struct _xBBox;
typedef struct RwSurfaceProperties;
typedef struct iSndVol;
typedef enum RpWorldRenderOrder;
typedef struct _tagxCamPath;
typedef struct _tagp2CamStaticAsset;

typedef RpClump*(*type_6)(RpClump*, void*);
typedef void(*type_9)(int32);
typedef RpWorldSector*(*type_17)(RpWorldSector*);
typedef xBase*(*type_19)(uint32);
typedef int8*(*type_23)(xBase*);
typedef int8*(*type_27)(uint32);
typedef int32(*type_29)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpAtomic*(*type_30)(RpAtomic*);
typedef uint32(*type_31)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_32)(RxNodeDefinition*);
typedef RwObjectHasFrame*(*type_35)(RwObjectHasFrame*);
typedef void(*type_36)(RxNodeDefinition*);
typedef int32(*type_40)(RxPipelineNode*);
typedef void(*type_42)(RxPipelineNode*);
typedef void(*type_43)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_48)(_xEnt*, _xScene*, float32);
typedef void(*type_49)(xMemPool*, void*);
typedef int32(*type_50)(RxPipelineNode*, RxPipeline*);
typedef void(*type_55)(_xEnt*);
typedef RwCamera*(*type_59)(RwCamera*);
typedef uint32(*type_60)();
typedef void(*type_61)(_xEnt*);
typedef uint32(*type_62)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_63)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int32(*type_65)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef int8*(*type_69)(int8*);
typedef void(*type_70)(_xEnt*, _xVec3*);
typedef uint32(*type_72)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_75)(RwResEntry*);
typedef void(*type_86)(_xEnt*, _xVec3*);

typedef uint8 type_0[8];
typedef uint8 type_1[2];
typedef uint32 type_2[2];
typedef uint32 type_3[43];
typedef uint8 type_4[8];
typedef zSaveLoadGame type_5[0];
typedef uint32 type_7[2];
typedef xBase* type_8[43];
typedef RwFrustumPlane type_10[6];
typedef uint32 type_11[2];
typedef int8 type_12[16];
typedef uint8 type_13[3];
typedef uint8 type_14[8];
typedef RwV3d type_15[8];
typedef uint8 type_16[3];
typedef int8 type_18[128];
typedef int8 type_20[16];
typedef _xVec3 type_21[2];
typedef uint32 type_22[2];
typedef uint8 type_24[22];
typedef uint8 type_25[3];
typedef _xQuat type_26[2];
typedef uint8 type_28[22];
typedef _xVec3 type_33[4];
typedef int8 type_34[16];
typedef int8 type_37[16];
typedef float32 type_38[4];
typedef int8 type_39[32];
typedef uint8 type_41[3];
typedef int8 type_44[16];
typedef int8 type_46[32];
typedef uint16 type_47[3];
typedef float32 type_51[15];
typedef uint16 type_52[3];
typedef int8 type_53[256];
typedef float32 type_54[15];
typedef uint32 type_56[15];
typedef iModelTag type_57[4];
typedef RxCluster type_58[1];
typedef int8 type_64[32];
typedef uint32 type_66[4];
typedef zVarMagicEntry type_68[32];
typedef float32 type_71[2];
typedef int8 type_73[128];
typedef int8 type_74[128][6];
typedef float32 type_76[4];
typedef RpLight* type_77[2];
typedef float32 type_78[4];
typedef RwFrame* type_79[2];
typedef int8 type_80[16];
typedef float32 type_81[4];
typedef int8 type_82[32];
typedef int8 type_83[64];
typedef RwTexCoords* type_84[8];
typedef float32 type_85[4];
typedef float32 type_87[4];
typedef int8 type_88[32];
typedef float32 type_89[3];
typedef int8 type_90[32];
typedef _xVec4 type_91[8];
typedef float32 type_92[3];
typedef RwTexCoords* type_93[8];
typedef _xCollis type_94[18];
typedef zGlobalGameStats type_95[30];
typedef int8 type_96[64];
typedef float32 type_97[4];
typedef zGlobalGameStats type_98[13];
typedef _zEnt* type_99[10];
typedef zCutsceneZbuffer type_100[4];
typedef int8 type_101[32];
typedef uint32 type_102[1];
typedef zGlobalGameStats type_103[4];
typedef int32 type_104[2];
typedef uint8 type_105[8];
typedef float32 type_106[4];
typedef int32 type_107[2];
typedef zVarEntry type_108[108];
typedef uint8 type_109[8];
typedef float32 type_110[4];
typedef xSndVoiceInfo type_111[48];
typedef uint32 type_112[2];

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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct st_SERIAL_CLIENTINFO
{
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct xSndVol
{
	float32 volL;
	float32 volR;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct zVarEntry
{
	uint32 entry;
	uint32 varNameID;
	int8* varName;
	uint32(*varCB)();
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RwLinkList
{
	RwLLLink link;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct rxReq
{
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct zVarMagicEntry
{
	uint32 varNameID;
	int8* varName;
	int8*(*varCB)(int8*);
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _zPlatform
{
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagiPad
{
	int32 port;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xFFX
{
};

struct zSaveLoadGame
{
	int8 label[64];
	int8 date[32];
	int32 progress;
};

struct _iCollis
{
	int32 unknown;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

uint32 hasMap;
uint32 R001Unlocked;
uint32 S001Unlocked;
uint32 E001Unlocked;
uint32 F001Unlocked;
uint32 MMDefeated;
uint32 endgame;
uint32 allmovies;
uint32 selSceneID;
uint32 sSnackGateValue;
zVarEntry zVarEntryTable[108];
zVarMagicEntry sVarMagicEntryTrable[32];
int32 sVarMagicInit;
int8 txt[64];
zGlobals globals;
xSndGlobals gSnd;
zSaveLoadGame zSaveLoadGameTable[0];

uint32 zVarEntryCB_eVarCin14();
uint32 zVarEntryCB_eVarCin13();
uint32 zVarEntryCB_eVarCin12();
uint32 zVarEntryCB_eVarCin11();
uint32 zVarEntryCB_eVarCin10();
uint32 zVarEntryCB_eVarCin9();
uint32 zVarEntryCB_eVarCin8();
uint32 zVarEntryCB_eVarCin7();
uint32 zVarEntryCB_eVarCin6();
uint32 zVarEntryCB_eVarCin5();
uint32 zVarEntryCB_eVarCin4();
uint32 zVarEntryCB_eVarCin3();
uint32 zVarEntryCB_eVarCin2();
uint32 zVarEntryCB_eVarCin1();
uint32 zVarEntryCB_eVarAllSnacksFound();
uint32 zVarEntryCB_eVareVarDefeatedMM();
uint32 zVarEntryCB_eVarWarpH003();
uint32 zVarEntryCB_eVarWarpW026();
uint32 zVarEntryCB_eVarWarpW022();
uint32 zVarEntryCB_eVarWarpS003();
uint32 zVarEntryCB_eVarWarpR003();
uint32 zVarEntryCB_eVarWarpP005();
uint32 zVarEntryCB_eVarWarpP003();
uint32 zVarEntryCB_eVarWarpO006();
uint32 zVarEntryCB_eVarWarpO004();
uint32 zVarEntryCB_eVarWarpL018();
uint32 zVarEntryCB_eVarWarpL015();
uint32 zVarEntryCB_eVarWarpL014();
uint32 zVarEntryCB_eVarWarpI006();
uint32 zVarEntryCB_eVarWarpI003();
uint32 zVarEntryCB_eVarWarpH001();
uint32 zVarEntryCB_eVarWarpG008();
uint32 zVarEntryCB_eVarWarpG005();
uint32 zVarEntryCB_eVarWarpG001();
uint32 zVarEntryCB_eVarWarpF010();
uint32 zVarEntryCB_eVarWarpF007();
uint32 zVarEntryCB_eVarWarpF003();
uint32 zVarEntryCB_eVarWarpE009();
uint32 zVarEntryCB_eVarWarpE006();
uint32 zVarEntryCB_eVarWarpE004();
uint32 zVarEntryCB_eVarWarpC004();
uint32 zVarEntryCB_eVarWarpB004();
uint32 zVarEntryCB_eVarMToken21();
uint32 zVarEntryCB_eVarMToken20();
uint32 zVarEntryCB_eVarMToken19();
uint32 zVarEntryCB_eVarMToken18();
uint32 zVarEntryCB_eVarMToken17();
uint32 zVarEntryCB_eVarMToken16();
uint32 zVarEntryCB_eVarMToken15();
uint32 zVarEntryCB_eVarMToken14();
uint32 zVarEntryCB_eVarMToken13();
uint32 zVarEntryCB_eVarMToken12();
uint32 zVarEntryCB_eVarMToken11();
uint32 zVarEntryCB_eVarMToken10();
uint32 zVarEntryCB_eVarMToken9();
uint32 zVarEntryCB_eVarMToken8();
uint32 zVarEntryCB_eVarMToken7();
uint32 zVarEntryCB_eVarMToken6();
uint32 zVarEntryCB_eVarMToken5();
uint32 zVarEntryCB_eVarMToken4();
uint32 zVarEntryCB_eVarMToken3();
uint32 zVarEntryCB_eVarMToken2();
uint32 zVarEntryCB_eVarMToken1();
uint32 zVarEntryCB_CurrentRoom();
uint32 zVarEntryCB_PuzzlePieceH();
uint32 zVarEntryCB_PuzzlePieceO();
uint32 zVarEntryCB_PuzzlePieceR();
uint32 zVarEntryCB_PuzzlePieceI();
uint32 zVarEntryCB_PuzzlePieceS();
uint32 zVarEntryCB_PuzzlePieceB();
uint32 zVarEntryCB_PuzzlePieceP();
uint32 zVarEntryCB_PuzzlePieceG();
uint32 zVarEntryCB_PuzzlePieceC();
uint32 zVarEntryCB_PuzzlePieceE();
uint32 zVarEntryCB_PuzzlePieceW();
uint32 zVarEntryCB_PuzzlePieceL();
uint32 zVarEntryCB_PuzzlePieceF();
void zVarUnlockAllMovies();
void zVarUnlockEndGame();
uint32 finishedGame();
uint32 zVarEntryCB_UnlockedF001();
uint32 zVarEntryCB_UnlockedE001();
uint32 zVarEntryCB_UnlockedS001();
uint32 zVarEntryCB_UnlockedR001();
uint32 zVarEntryCB_MapItem();
uint32 zVarEntryCB_IsSneaking();
uint32 zVarEntryCB_CurrentSceneLetter();
int8* zVMCB_SpaceNeeded(int8* dst);
int8* zVMCB_SpaceAvailable(int8* dst);
int8* zVMCB_CurrentTime(int8* dst);
int8* zVMCB_CurrentDate(int8* dst);
int8* zVMCB_SnackGateValue(int8* dst);
int8* zVMCB_SelectedArea(int8* dst);
int8* zVMCB_AreaStatsTokens(int8* dst);
int8* zVMCB_AreaStatsSnacks(int8* dst);
int8* zVMCB_CurrentArea(int8* dst);
int8* zVMCB_TokenWorldStats(int8* dst);
int8* zVMCB_SnackWorldStats(int8* dst);
int8* zVMCB_TokenAreaStats(int8* dst);
int8* zVMCB_SnackAreaStats(int8* dst);
int8* zVMCB_TokenRoomStats(int8* dst);
int8* zVMCB_SnackRoomStats(int8* dst);
int8* zVMCB_CurrentPosition(int8* dst);
int8* zVMCB_MCSelectedCard(int8* dst);
int8* zVMCB_MCSelectedGame(int8* dst);
int8* zVMCB_GameSlot7(int8* dst);
int8* zVMCB_GameSlot6(int8* dst);
int8* zVMCB_GameSlot5(int8* dst);
int8* zVMCB_GameSlot4(int8* dst);
int8* zVMCB_GameSlot3(int8* dst);
int8* zVMCB_GameSlot2(int8* dst);
int8* zVMCB_GameSlot1(int8* dst);
int8* zVMCB_GameSlot0(int8* dst);
int8* zVMCB_Scene(int8* dst);
int8* zVMCB_SoundFXVolume(int8* dst);
int8* zVMCB_SoundMusicVolume(int8* dst);
int8* zVMCB_PlayerChancesCount(int8* dst);
int8* zVMCB_PlayerScoobySnackCount_Int(int8* dst);
void zVarDefeatMasterMind();
void zVarSetSnackGateValue(uint32 amount);
void zVarSetArea(uint32 sceneID);
void zVarUnlockF001();
void zVarUnlockE001();
void zVarUnlockS001();
void zVarUnlockR001();
void zVarGiveMap();
int8* zVarGameSlotInfo(int32 i);
uint32 zVarEntryCB_VibrationOn();
uint32 zVarEntryCB_MCAvailable();
uint32 zVarEntryCB_PCSpecialLightningBoltStun();
uint32 zVarEntryCB_PCSpecialShovel();
uint32 zVarEntryCB_PCSpecialUmbrella();
uint32 zVarEntryCB_PCSpecialFootballHelmet();
uint32 zVarEntryCB_PCSpecialLightningBolt();
uint32 zVarEntryCB_PCSpecialSpring();
uint32 zVarEntryCB_PCSpecialDivingHelmet();
uint32 zVarEntryCB_PCSpecialFlowerPot();
uint32 zVarEntryCB_PCSpecialBlackKnight();
uint32 zVarEntryCB_PCSpecialLampShade();
uint32 zVarEntryCB_PCSpecialSlippers();
uint32 zVarEntryCB_PCSpecialPlungers();
uint32 zVarEntryCB_PCSpecialStickyBoots();
uint32 zVarEntryCB_PCSpecialSoapBar();
uint32 zVarEntryCB_PCSpecialBubbleGum();
uint32 zVarEntryCB_SndFXVol();
uint32 zVarEntryCB_SndMusicVol();
uint32 zVarEntryCB_SndMasterVol();
uint32 zVarEntryCB_SndMode();
uint32 zVarEntryCB_PCScoobySnacks();
uint32 zVarEntryCB_PCChances();
void zVarLoad(xSerial* s);
void zVarSave(xSerial* s);
void zVarNewGame();
void zVarInit(zVarEntry* table);
void zVarMagicProcessText(int8* src, int8* dst);

// zVarEntryCB_eVarCin14__Fv
// Start address: 0x1ad2a0
uint32 zVarEntryCB_eVarCin14()
{
	// Line 1131, Address: 0x1ad2a0, Func Offset: 0
	// Func End, Address: 0x1ad2d0, Func Offset: 0x30
}

// zVarEntryCB_eVarCin13__Fv
// Start address: 0x1ad2d0
uint32 zVarEntryCB_eVarCin13()
{
	// Line 1130, Address: 0x1ad2d0, Func Offset: 0
	// Func End, Address: 0x1ad300, Func Offset: 0x30
}

// zVarEntryCB_eVarCin12__Fv
// Start address: 0x1ad300
uint32 zVarEntryCB_eVarCin12()
{
	// Line 1129, Address: 0x1ad300, Func Offset: 0
	// Func End, Address: 0x1ad330, Func Offset: 0x30
}

// zVarEntryCB_eVarCin11__Fv
// Start address: 0x1ad330
uint32 zVarEntryCB_eVarCin11()
{
	// Line 1128, Address: 0x1ad330, Func Offset: 0
	// Func End, Address: 0x1ad338, Func Offset: 0x8
}

// zVarEntryCB_eVarCin10__Fv
// Start address: 0x1ad340
uint32 zVarEntryCB_eVarCin10()
{
	// Line 1126, Address: 0x1ad340, Func Offset: 0
	// Func End, Address: 0x1ad370, Func Offset: 0x30
}

// zVarEntryCB_eVarCin9__Fv
// Start address: 0x1ad370
uint32 zVarEntryCB_eVarCin9()
{
	// Line 1125, Address: 0x1ad370, Func Offset: 0
	// Func End, Address: 0x1ad3a0, Func Offset: 0x30
}

// zVarEntryCB_eVarCin8__Fv
// Start address: 0x1ad3a0
uint32 zVarEntryCB_eVarCin8()
{
	// Line 1124, Address: 0x1ad3a0, Func Offset: 0
	// Func End, Address: 0x1ad3d0, Func Offset: 0x30
}

// zVarEntryCB_eVarCin7__Fv
// Start address: 0x1ad3d0
uint32 zVarEntryCB_eVarCin7()
{
	// Line 1123, Address: 0x1ad3d0, Func Offset: 0
	// Func End, Address: 0x1ad400, Func Offset: 0x30
}

// zVarEntryCB_eVarCin6__Fv
// Start address: 0x1ad400
uint32 zVarEntryCB_eVarCin6()
{
	// Line 1122, Address: 0x1ad400, Func Offset: 0
	// Func End, Address: 0x1ad430, Func Offset: 0x30
}

// zVarEntryCB_eVarCin5__Fv
// Start address: 0x1ad430
uint32 zVarEntryCB_eVarCin5()
{
	// Line 1121, Address: 0x1ad430, Func Offset: 0
	// Func End, Address: 0x1ad460, Func Offset: 0x30
}

// zVarEntryCB_eVarCin4__Fv
// Start address: 0x1ad460
uint32 zVarEntryCB_eVarCin4()
{
	// Line 1120, Address: 0x1ad460, Func Offset: 0
	// Func End, Address: 0x1ad490, Func Offset: 0x30
}

// zVarEntryCB_eVarCin3__Fv
// Start address: 0x1ad490
uint32 zVarEntryCB_eVarCin3()
{
	// Line 1119, Address: 0x1ad490, Func Offset: 0
	// Func End, Address: 0x1ad4c0, Func Offset: 0x30
}

// zVarEntryCB_eVarCin2__Fv
// Start address: 0x1ad4c0
uint32 zVarEntryCB_eVarCin2()
{
	// Line 1118, Address: 0x1ad4c0, Func Offset: 0
	// Func End, Address: 0x1ad4f0, Func Offset: 0x30
}

// zVarEntryCB_eVarCin1__Fv
// Start address: 0x1ad4f0
uint32 zVarEntryCB_eVarCin1()
{
	// Line 1117, Address: 0x1ad4f0, Func Offset: 0
	// Func End, Address: 0x1ad520, Func Offset: 0x30
}

// zVarEntryCB_eVarAllSnacksFound__Fv
// Start address: 0x1ad520
uint32 zVarEntryCB_eVarAllSnacksFound()
{
	int32 i;
	uint32 cnt;
	// Line 1089, Address: 0x1ad520, Func Offset: 0
	// Line 1090, Address: 0x1ad53c, Func Offset: 0x1c
	// Line 1091, Address: 0x1ad540, Func Offset: 0x20
	// Line 1094, Address: 0x1ad548, Func Offset: 0x28
	// Line 1095, Address: 0x1ad560, Func Offset: 0x40
	// Line 1097, Address: 0x1ad568, Func Offset: 0x48
	// Line 1099, Address: 0x1ad578, Func Offset: 0x58
	// Line 1101, Address: 0x1ad57c, Func Offset: 0x5c
	// Func End, Address: 0x1ad598, Func Offset: 0x78
}

// zVarEntryCB_eVareVarDefeatedMM__Fv
// Start address: 0x1ad5a0
uint32 zVarEntryCB_eVareVarDefeatedMM()
{
	// Line 1086, Address: 0x1ad5a0, Func Offset: 0
	// Func End, Address: 0x1ad5a8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpH003__Fv
// Start address: 0x1ad5b0
uint32 zVarEntryCB_eVarWarpH003()
{
	// Line 1084, Address: 0x1ad5b0, Func Offset: 0
	// Func End, Address: 0x1ad5b8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpW026__Fv
// Start address: 0x1ad5c0
uint32 zVarEntryCB_eVarWarpW026()
{
	// Line 1083, Address: 0x1ad5c0, Func Offset: 0
	// Func End, Address: 0x1ad5c8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpW022__Fv
// Start address: 0x1ad5d0
uint32 zVarEntryCB_eVarWarpW022()
{
	// Line 1082, Address: 0x1ad5d0, Func Offset: 0
	// Func End, Address: 0x1ad5d8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpS003__Fv
// Start address: 0x1ad5e0
uint32 zVarEntryCB_eVarWarpS003()
{
	// Line 1081, Address: 0x1ad5e0, Func Offset: 0
	// Func End, Address: 0x1ad5e8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpR003__Fv
// Start address: 0x1ad5f0
uint32 zVarEntryCB_eVarWarpR003()
{
	// Line 1080, Address: 0x1ad5f0, Func Offset: 0
	// Func End, Address: 0x1ad5f8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpP005__Fv
// Start address: 0x1ad600
uint32 zVarEntryCB_eVarWarpP005()
{
	// Line 1079, Address: 0x1ad600, Func Offset: 0
	// Func End, Address: 0x1ad608, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpP003__Fv
// Start address: 0x1ad610
uint32 zVarEntryCB_eVarWarpP003()
{
	// Line 1078, Address: 0x1ad610, Func Offset: 0
	// Func End, Address: 0x1ad618, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpO006__Fv
// Start address: 0x1ad620
uint32 zVarEntryCB_eVarWarpO006()
{
	// Line 1077, Address: 0x1ad620, Func Offset: 0
	// Func End, Address: 0x1ad628, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpO004__Fv
// Start address: 0x1ad630
uint32 zVarEntryCB_eVarWarpO004()
{
	// Line 1076, Address: 0x1ad630, Func Offset: 0
	// Func End, Address: 0x1ad638, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpL018__Fv
// Start address: 0x1ad640
uint32 zVarEntryCB_eVarWarpL018()
{
	// Line 1075, Address: 0x1ad640, Func Offset: 0
	// Func End, Address: 0x1ad648, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpL015__Fv
// Start address: 0x1ad650
uint32 zVarEntryCB_eVarWarpL015()
{
	// Line 1074, Address: 0x1ad650, Func Offset: 0
	// Func End, Address: 0x1ad658, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpL014__Fv
// Start address: 0x1ad660
uint32 zVarEntryCB_eVarWarpL014()
{
	// Line 1073, Address: 0x1ad660, Func Offset: 0
	// Func End, Address: 0x1ad668, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpI006__Fv
// Start address: 0x1ad670
uint32 zVarEntryCB_eVarWarpI006()
{
	// Line 1072, Address: 0x1ad670, Func Offset: 0
	// Func End, Address: 0x1ad678, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpI003__Fv
// Start address: 0x1ad680
uint32 zVarEntryCB_eVarWarpI003()
{
	// Line 1071, Address: 0x1ad680, Func Offset: 0
	// Func End, Address: 0x1ad688, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpH001__Fv
// Start address: 0x1ad690
uint32 zVarEntryCB_eVarWarpH001()
{
	// Line 1070, Address: 0x1ad690, Func Offset: 0
	// Func End, Address: 0x1ad698, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpG008__Fv
// Start address: 0x1ad6a0
uint32 zVarEntryCB_eVarWarpG008()
{
	// Line 1069, Address: 0x1ad6a0, Func Offset: 0
	// Func End, Address: 0x1ad6a8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpG005__Fv
// Start address: 0x1ad6b0
uint32 zVarEntryCB_eVarWarpG005()
{
	// Line 1068, Address: 0x1ad6b0, Func Offset: 0
	// Func End, Address: 0x1ad6b8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpG001__Fv
// Start address: 0x1ad6c0
uint32 zVarEntryCB_eVarWarpG001()
{
	// Line 1067, Address: 0x1ad6c0, Func Offset: 0
	// Func End, Address: 0x1ad6c8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpF010__Fv
// Start address: 0x1ad6d0
uint32 zVarEntryCB_eVarWarpF010()
{
	// Line 1066, Address: 0x1ad6d0, Func Offset: 0
	// Func End, Address: 0x1ad6d8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpF007__Fv
// Start address: 0x1ad6e0
uint32 zVarEntryCB_eVarWarpF007()
{
	// Line 1065, Address: 0x1ad6e0, Func Offset: 0
	// Func End, Address: 0x1ad6e8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpF003__Fv
// Start address: 0x1ad6f0
uint32 zVarEntryCB_eVarWarpF003()
{
	// Line 1064, Address: 0x1ad6f0, Func Offset: 0
	// Func End, Address: 0x1ad6f8, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpE009__Fv
// Start address: 0x1ad700
uint32 zVarEntryCB_eVarWarpE009()
{
	// Line 1063, Address: 0x1ad700, Func Offset: 0
	// Func End, Address: 0x1ad708, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpE006__Fv
// Start address: 0x1ad710
uint32 zVarEntryCB_eVarWarpE006()
{
	// Line 1062, Address: 0x1ad710, Func Offset: 0
	// Func End, Address: 0x1ad718, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpE004__Fv
// Start address: 0x1ad720
uint32 zVarEntryCB_eVarWarpE004()
{
	// Line 1061, Address: 0x1ad720, Func Offset: 0
	// Func End, Address: 0x1ad728, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpC004__Fv
// Start address: 0x1ad730
uint32 zVarEntryCB_eVarWarpC004()
{
	// Line 1060, Address: 0x1ad730, Func Offset: 0
	// Func End, Address: 0x1ad738, Func Offset: 0x8
}

// zVarEntryCB_eVarWarpB004__Fv
// Start address: 0x1ad740
uint32 zVarEntryCB_eVarWarpB004()
{
	// Line 1059, Address: 0x1ad740, Func Offset: 0
	// Func End, Address: 0x1ad748, Func Offset: 0x8
}

// zVarEntryCB_eVarMToken21__Fv
// Start address: 0x1ad750
uint32 zVarEntryCB_eVarMToken21()
{
	// Line 1058, Address: 0x1ad750, Func Offset: 0
	// Func End, Address: 0x1ad76c, Func Offset: 0x1c
}

// zVarEntryCB_eVarMToken20__Fv
// Start address: 0x1ad770
uint32 zVarEntryCB_eVarMToken20()
{
	// Line 1057, Address: 0x1ad770, Func Offset: 0
	// Func End, Address: 0x1ad78c, Func Offset: 0x1c
}

// zVarEntryCB_eVarMToken19__Fv
// Start address: 0x1ad790
uint32 zVarEntryCB_eVarMToken19()
{
	// Line 1056, Address: 0x1ad790, Func Offset: 0
	// Func End, Address: 0x1ad7ac, Func Offset: 0x1c
}

// zVarEntryCB_eVarMToken18__Fv
// Start address: 0x1ad7b0
uint32 zVarEntryCB_eVarMToken18()
{
	// Line 1055, Address: 0x1ad7b0, Func Offset: 0
	// Func End, Address: 0x1ad7cc, Func Offset: 0x1c
}

// zVarEntryCB_eVarMToken17__Fv
// Start address: 0x1ad7d0
uint32 zVarEntryCB_eVarMToken17()
{
	// Line 1054, Address: 0x1ad7d0, Func Offset: 0
	// Func End, Address: 0x1ad7ec, Func Offset: 0x1c
}

// zVarEntryCB_eVarMToken16__Fv
// Start address: 0x1ad7f0
uint32 zVarEntryCB_eVarMToken16()
{
	// Line 1053, Address: 0x1ad7f0, Func Offset: 0
	// Func End, Address: 0x1ad808, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken15__Fv
// Start address: 0x1ad810
uint32 zVarEntryCB_eVarMToken15()
{
	// Line 1052, Address: 0x1ad810, Func Offset: 0
	// Func End, Address: 0x1ad828, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken14__Fv
// Start address: 0x1ad830
uint32 zVarEntryCB_eVarMToken14()
{
	// Line 1051, Address: 0x1ad830, Func Offset: 0
	// Func End, Address: 0x1ad848, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken13__Fv
// Start address: 0x1ad850
uint32 zVarEntryCB_eVarMToken13()
{
	// Line 1050, Address: 0x1ad850, Func Offset: 0
	// Func End, Address: 0x1ad868, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken12__Fv
// Start address: 0x1ad870
uint32 zVarEntryCB_eVarMToken12()
{
	// Line 1049, Address: 0x1ad870, Func Offset: 0
	// Func End, Address: 0x1ad888, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken11__Fv
// Start address: 0x1ad890
uint32 zVarEntryCB_eVarMToken11()
{
	// Line 1048, Address: 0x1ad890, Func Offset: 0
	// Func End, Address: 0x1ad8a8, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken10__Fv
// Start address: 0x1ad8b0
uint32 zVarEntryCB_eVarMToken10()
{
	// Line 1047, Address: 0x1ad8b0, Func Offset: 0
	// Func End, Address: 0x1ad8c8, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken9__Fv
// Start address: 0x1ad8d0
uint32 zVarEntryCB_eVarMToken9()
{
	// Line 1046, Address: 0x1ad8d0, Func Offset: 0
	// Func End, Address: 0x1ad8e8, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken8__Fv
// Start address: 0x1ad8f0
uint32 zVarEntryCB_eVarMToken8()
{
	// Line 1045, Address: 0x1ad8f0, Func Offset: 0
	// Func End, Address: 0x1ad908, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken7__Fv
// Start address: 0x1ad910
uint32 zVarEntryCB_eVarMToken7()
{
	// Line 1044, Address: 0x1ad910, Func Offset: 0
	// Func End, Address: 0x1ad928, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken6__Fv
// Start address: 0x1ad930
uint32 zVarEntryCB_eVarMToken6()
{
	// Line 1043, Address: 0x1ad930, Func Offset: 0
	// Func End, Address: 0x1ad948, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken5__Fv
// Start address: 0x1ad950
uint32 zVarEntryCB_eVarMToken5()
{
	// Line 1042, Address: 0x1ad950, Func Offset: 0
	// Func End, Address: 0x1ad968, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken4__Fv
// Start address: 0x1ad970
uint32 zVarEntryCB_eVarMToken4()
{
	// Line 1041, Address: 0x1ad970, Func Offset: 0
	// Func End, Address: 0x1ad988, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken3__Fv
// Start address: 0x1ad990
uint32 zVarEntryCB_eVarMToken3()
{
	// Line 1040, Address: 0x1ad990, Func Offset: 0
	// Func End, Address: 0x1ad9a8, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken2__Fv
// Start address: 0x1ad9b0
uint32 zVarEntryCB_eVarMToken2()
{
	// Line 1039, Address: 0x1ad9b0, Func Offset: 0
	// Func End, Address: 0x1ad9c8, Func Offset: 0x18
}

// zVarEntryCB_eVarMToken1__Fv
// Start address: 0x1ad9d0
uint32 zVarEntryCB_eVarMToken1()
{
	// Line 1038, Address: 0x1ad9d0, Func Offset: 0
	// Func End, Address: 0x1ad9e8, Func Offset: 0x18
}

// zVarEntryCB_CurrentRoom__Fv
// Start address: 0x1ad9f0
uint32 zVarEntryCB_CurrentRoom()
{
	int8 s[16];
	int32 room;
	// Line 1023, Address: 0x1ad9f0, Func Offset: 0
	// Line 1027, Address: 0x1ad9f8, Func Offset: 0x8
	// Line 1029, Address: 0x1ada24, Func Offset: 0x34
	// Line 1031, Address: 0x1ada2c, Func Offset: 0x3c
	// Line 1029, Address: 0x1ada30, Func Offset: 0x40
	// Line 1031, Address: 0x1ada48, Func Offset: 0x58
	// Line 1033, Address: 0x1ada64, Func Offset: 0x74
	// Line 1035, Address: 0x1ada7c, Func Offset: 0x8c
	// Line 1033, Address: 0x1ada80, Func Offset: 0x90
	// Line 1035, Address: 0x1ada84, Func Offset: 0x94
	// Func End, Address: 0x1ada8c, Func Offset: 0x9c
}

// zVarEntryCB_PuzzlePieceH__Fv
// Start address: 0x1ada90
uint32 zVarEntryCB_PuzzlePieceH()
{
	// Line 1019, Address: 0x1ada90, Func Offset: 0
	// Func End, Address: 0x1adab4, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceO__Fv
// Start address: 0x1adac0
uint32 zVarEntryCB_PuzzlePieceO()
{
	// Line 1017, Address: 0x1adac0, Func Offset: 0
	// Func End, Address: 0x1adae4, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceR__Fv
// Start address: 0x1adaf0
uint32 zVarEntryCB_PuzzlePieceR()
{
	// Line 1015, Address: 0x1adaf0, Func Offset: 0
	// Func End, Address: 0x1adb14, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceI__Fv
// Start address: 0x1adb20
uint32 zVarEntryCB_PuzzlePieceI()
{
	// Line 1013, Address: 0x1adb20, Func Offset: 0
	// Func End, Address: 0x1adb44, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceS__Fv
// Start address: 0x1adb50
uint32 zVarEntryCB_PuzzlePieceS()
{
	// Line 1011, Address: 0x1adb50, Func Offset: 0
	// Func End, Address: 0x1adb74, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceB__Fv
// Start address: 0x1adb80
uint32 zVarEntryCB_PuzzlePieceB()
{
	// Line 1009, Address: 0x1adb80, Func Offset: 0
	// Func End, Address: 0x1adba4, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceP__Fv
// Start address: 0x1adbb0
uint32 zVarEntryCB_PuzzlePieceP()
{
	// Line 1007, Address: 0x1adbb0, Func Offset: 0
	// Func End, Address: 0x1adbd4, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceG__Fv
// Start address: 0x1adbe0
uint32 zVarEntryCB_PuzzlePieceG()
{
	// Line 1005, Address: 0x1adbe0, Func Offset: 0
	// Func End, Address: 0x1adc04, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceC__Fv
// Start address: 0x1adc10
uint32 zVarEntryCB_PuzzlePieceC()
{
	// Line 1003, Address: 0x1adc10, Func Offset: 0
	// Func End, Address: 0x1adc34, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceE__Fv
// Start address: 0x1adc40
uint32 zVarEntryCB_PuzzlePieceE()
{
	// Line 1001, Address: 0x1adc40, Func Offset: 0
	// Func End, Address: 0x1adc64, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceW__Fv
// Start address: 0x1adc70
uint32 zVarEntryCB_PuzzlePieceW()
{
	// Line 999, Address: 0x1adc70, Func Offset: 0
	// Func End, Address: 0x1adc94, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceL__Fv
// Start address: 0x1adca0
uint32 zVarEntryCB_PuzzlePieceL()
{
	// Line 997, Address: 0x1adca0, Func Offset: 0
	// Func End, Address: 0x1adcc4, Func Offset: 0x24
}

// zVarEntryCB_PuzzlePieceF__Fv
// Start address: 0x1adcd0
uint32 zVarEntryCB_PuzzlePieceF()
{
	// Line 995, Address: 0x1adcd0, Func Offset: 0
	// Func End, Address: 0x1adcf4, Func Offset: 0x24
}

// zVarUnlockAllMovies__Fv
// Start address: 0x1add00
void zVarUnlockAllMovies()
{
	// Line 989, Address: 0x1add00, Func Offset: 0
	// Line 990, Address: 0x1add04, Func Offset: 0x4
	// Func End, Address: 0x1add0c, Func Offset: 0xc
}

// zVarUnlockEndGame__Fv
// Start address: 0x1add10
void zVarUnlockEndGame()
{
	// Line 984, Address: 0x1add10, Func Offset: 0
	// Line 985, Address: 0x1add14, Func Offset: 0x4
	// Func End, Address: 0x1add1c, Func Offset: 0xc
}

// finishedGame__Fv
// Start address: 0x1add20
uint32 finishedGame()
{
	// Line 979, Address: 0x1add20, Func Offset: 0
	// Func End, Address: 0x1add28, Func Offset: 0x8
}

// zVarEntryCB_UnlockedF001__Fv
// Start address: 0x1add30
uint32 zVarEntryCB_UnlockedF001()
{
	// Line 974, Address: 0x1add30, Func Offset: 0
	// Func End, Address: 0x1add38, Func Offset: 0x8
}

// zVarEntryCB_UnlockedE001__Fv
// Start address: 0x1add40
uint32 zVarEntryCB_UnlockedE001()
{
	// Line 970, Address: 0x1add40, Func Offset: 0
	// Func End, Address: 0x1add48, Func Offset: 0x8
}

// zVarEntryCB_UnlockedS001__Fv
// Start address: 0x1add50
uint32 zVarEntryCB_UnlockedS001()
{
	// Line 966, Address: 0x1add50, Func Offset: 0
	// Func End, Address: 0x1add58, Func Offset: 0x8
}

// zVarEntryCB_UnlockedR001__Fv
// Start address: 0x1add60
uint32 zVarEntryCB_UnlockedR001()
{
	// Line 961, Address: 0x1add60, Func Offset: 0
	// Func End, Address: 0x1add68, Func Offset: 0x8
}

// zVarEntryCB_MapItem__Fv
// Start address: 0x1add70
uint32 zVarEntryCB_MapItem()
{
	// Line 956, Address: 0x1add70, Func Offset: 0
	// Func End, Address: 0x1add78, Func Offset: 0x8
}

// zVarEntryCB_IsSneaking__Fv
// Start address: 0x1add80
uint32 zVarEntryCB_IsSneaking()
{
	// Line 949, Address: 0x1add80, Func Offset: 0
	// Line 951, Address: 0x1addbc, Func Offset: 0x3c
	// Func End, Address: 0x1addc4, Func Offset: 0x44
}

// zVarEntryCB_CurrentSceneLetter__Fv
// Start address: 0x1addd0
uint32 zVarEntryCB_CurrentSceneLetter()
{
	int8 s[16];
	// Line 940, Address: 0x1addd0, Func Offset: 0
	// Line 942, Address: 0x1addd8, Func Offset: 0x8
	// Line 944, Address: 0x1ade04, Func Offset: 0x34
	// Line 945, Address: 0x1ade24, Func Offset: 0x54
	// Line 944, Address: 0x1ade28, Func Offset: 0x58
	// Line 945, Address: 0x1ade2c, Func Offset: 0x5c
	// Func End, Address: 0x1ade34, Func Offset: 0x64
}

// zVMCB_SpaceNeeded__FPc
// Start address: 0x1ade40
int8* zVMCB_SpaceNeeded(int8* dst)
{
	int32 count;
	// Line 933, Address: 0x1ade40, Func Offset: 0
	// Line 934, Address: 0x1ade4c, Func Offset: 0xc
	// Line 935, Address: 0x1ade68, Func Offset: 0x28
	// Line 936, Address: 0x1ade6c, Func Offset: 0x2c
	// Func End, Address: 0x1ade7c, Func Offset: 0x3c
}

// zVMCB_SpaceAvailable__FPc
// Start address: 0x1ade80
int8* zVMCB_SpaceAvailable(int8* dst)
{
	int32 count;
	// Line 928, Address: 0x1ade80, Func Offset: 0
	// Line 929, Address: 0x1ade8c, Func Offset: 0xc
	// Line 930, Address: 0x1adea8, Func Offset: 0x28
	// Line 931, Address: 0x1adeac, Func Offset: 0x2c
	// Func End, Address: 0x1adebc, Func Offset: 0x3c
}

// zVMCB_CurrentTime__FPc
// Start address: 0x1adec0
int8* zVMCB_CurrentTime(int8* dst)
{
	int32 count;
	// Line 923, Address: 0x1adec0, Func Offset: 0
	// Line 924, Address: 0x1adecc, Func Offset: 0xc
	// Line 925, Address: 0x1aded4, Func Offset: 0x14
	// Line 926, Address: 0x1aded8, Func Offset: 0x18
	// Func End, Address: 0x1adee8, Func Offset: 0x28
}

// zVMCB_CurrentDate__FPc
// Start address: 0x1adef0
int8* zVMCB_CurrentDate(int8* dst)
{
	int32 count;
	// Line 918, Address: 0x1adef0, Func Offset: 0
	// Line 919, Address: 0x1adefc, Func Offset: 0xc
	// Line 920, Address: 0x1adf04, Func Offset: 0x14
	// Line 921, Address: 0x1adf08, Func Offset: 0x18
	// Func End, Address: 0x1adf18, Func Offset: 0x28
}

// zVMCB_SnackGateValue__FPc
// Start address: 0x1adf20
int8* zVMCB_SnackGateValue(int8* dst)
{
	int32 count;
	// Line 913, Address: 0x1adf20, Func Offset: 0
	// Line 914, Address: 0x1adf2c, Func Offset: 0xc
	// Line 915, Address: 0x1adf40, Func Offset: 0x20
	// Line 916, Address: 0x1adf44, Func Offset: 0x24
	// Func End, Address: 0x1adf54, Func Offset: 0x34
}

// zVMCB_SelectedArea__FPc
// Start address: 0x1adf60
int8* zVMCB_SelectedArea(int8* dst)
{
	int32 count;
	// Line 907, Address: 0x1adf60, Func Offset: 0
	// Line 908, Address: 0x1adf70, Func Offset: 0x10
	// Line 909, Address: 0x1adf8c, Func Offset: 0x2c
	// Line 910, Address: 0x1adf90, Func Offset: 0x30
	// Func End, Address: 0x1adfa0, Func Offset: 0x40
}

// zVMCB_AreaStatsTokens__FPc
// Start address: 0x1adfa0
int8* zVMCB_AreaStatsTokens(int8* dst)
{
	int32 count;
	// Line 898, Address: 0x1adfa0, Func Offset: 0
	// Line 899, Address: 0x1adfb0, Func Offset: 0x10
	// Line 900, Address: 0x1adfc8, Func Offset: 0x28
	// Line 902, Address: 0x1adfd0, Func Offset: 0x30
	// Line 903, Address: 0x1adffc, Func Offset: 0x5c
	// Line 904, Address: 0x1ae000, Func Offset: 0x60
	// Func End, Address: 0x1ae014, Func Offset: 0x74
}

// zVMCB_AreaStatsSnacks__FPc
// Start address: 0x1ae020
int8* zVMCB_AreaStatsSnacks(int8* dst)
{
	int32 count;
	// Line 890, Address: 0x1ae020, Func Offset: 0
	// Line 891, Address: 0x1ae030, Func Offset: 0x10
	// Line 892, Address: 0x1ae048, Func Offset: 0x28
	// Line 894, Address: 0x1ae050, Func Offset: 0x30
	// Line 895, Address: 0x1ae07c, Func Offset: 0x5c
	// Line 896, Address: 0x1ae080, Func Offset: 0x60
	// Func End, Address: 0x1ae094, Func Offset: 0x74
}

// zVMCB_CurrentArea__FPc
// Start address: 0x1ae0a0
int8* zVMCB_CurrentArea(int8* dst)
{
	int32 count;
	// Line 885, Address: 0x1ae0a0, Func Offset: 0
	// Line 886, Address: 0x1ae0ac, Func Offset: 0xc
	// Line 887, Address: 0x1ae0d4, Func Offset: 0x34
	// Line 888, Address: 0x1ae0d8, Func Offset: 0x38
	// Func End, Address: 0x1ae0e8, Func Offset: 0x48
}

// zVMCB_TokenWorldStats__FPc
// Start address: 0x1ae0f0
int8* zVMCB_TokenWorldStats(int8* dst)
{
	// Line 882, Address: 0x1ae0f0, Func Offset: 0
	// Func End, Address: 0x1ae0f8, Func Offset: 0x8
}

// zVMCB_SnackWorldStats__FPc
// Start address: 0x1ae100
int8* zVMCB_SnackWorldStats(int8* dst)
{
	// Line 877, Address: 0x1ae100, Func Offset: 0
	// Func End, Address: 0x1ae108, Func Offset: 0x8
}

// zVMCB_TokenAreaStats__FPc
// Start address: 0x1ae110
int8* zVMCB_TokenAreaStats(int8* dst)
{
	// Line 872, Address: 0x1ae110, Func Offset: 0
	// Func End, Address: 0x1ae118, Func Offset: 0x8
}

// zVMCB_SnackAreaStats__FPc
// Start address: 0x1ae120
int8* zVMCB_SnackAreaStats(int8* dst)
{
	// Line 867, Address: 0x1ae120, Func Offset: 0
	// Func End, Address: 0x1ae128, Func Offset: 0x8
}

// zVMCB_TokenRoomStats__FPc
// Start address: 0x1ae130
int8* zVMCB_TokenRoomStats(int8* dst)
{
	// Line 862, Address: 0x1ae130, Func Offset: 0
	// Func End, Address: 0x1ae138, Func Offset: 0x8
}

// zVMCB_SnackRoomStats__FPc
// Start address: 0x1ae140
int8* zVMCB_SnackRoomStats(int8* dst)
{
	// Line 857, Address: 0x1ae140, Func Offset: 0
	// Func End, Address: 0x1ae148, Func Offset: 0x8
}

// zVMCB_CurrentPosition__FPc
// Start address: 0x1ae150
int8* zVMCB_CurrentPosition(int8* dst)
{
	int32 count;
	// Line 842, Address: 0x1ae150, Func Offset: 0
	// Line 848, Address: 0x1ae15c, Func Offset: 0xc
	// Line 850, Address: 0x1ae198, Func Offset: 0x48
	// Line 851, Address: 0x1ae19c, Func Offset: 0x4c
	// Func End, Address: 0x1ae1ac, Func Offset: 0x5c
}

// zVMCB_MCSelectedCard__FPc
// Start address: 0x1ae1b0
int8* zVMCB_MCSelectedCard(int8* dst)
{
	int32 count;
	// Line 835, Address: 0x1ae1b0, Func Offset: 0
	// Line 836, Address: 0x1ae1bc, Func Offset: 0xc
	// Line 838, Address: 0x1ae1dc, Func Offset: 0x2c
	// Line 839, Address: 0x1ae1e0, Func Offset: 0x30
	// Func End, Address: 0x1ae1f0, Func Offset: 0x40
}

// zVMCB_MCSelectedGame__FPc
// Start address: 0x1ae1f0
int8* zVMCB_MCSelectedGame(int8* dst)
{
	int32 count;
	// Line 829, Address: 0x1ae1f0, Func Offset: 0
	// Line 830, Address: 0x1ae1fc, Func Offset: 0xc
	// Line 832, Address: 0x1ae21c, Func Offset: 0x2c
	// Line 833, Address: 0x1ae220, Func Offset: 0x30
	// Func End, Address: 0x1ae230, Func Offset: 0x40
}

// zVMCB_GameSlot7__FPc
// Start address: 0x1ae230
int8* zVMCB_GameSlot7(int8* dst)
{
	int32 count;
	// Line 822, Address: 0x1ae230, Func Offset: 0
	// Line 823, Address: 0x1ae240, Func Offset: 0x10
	// Line 825, Address: 0x1ae260, Func Offset: 0x30
	// Line 826, Address: 0x1ae264, Func Offset: 0x34
	// Func End, Address: 0x1ae274, Func Offset: 0x44
}

// zVMCB_GameSlot6__FPc
// Start address: 0x1ae280
int8* zVMCB_GameSlot6(int8* dst)
{
	int32 count;
	// Line 816, Address: 0x1ae280, Func Offset: 0
	// Line 817, Address: 0x1ae290, Func Offset: 0x10
	// Line 819, Address: 0x1ae2b0, Func Offset: 0x30
	// Line 820, Address: 0x1ae2b4, Func Offset: 0x34
	// Func End, Address: 0x1ae2c4, Func Offset: 0x44
}

// zVMCB_GameSlot5__FPc
// Start address: 0x1ae2d0
int8* zVMCB_GameSlot5(int8* dst)
{
	int32 count;
	// Line 810, Address: 0x1ae2d0, Func Offset: 0
	// Line 811, Address: 0x1ae2e0, Func Offset: 0x10
	// Line 813, Address: 0x1ae300, Func Offset: 0x30
	// Line 814, Address: 0x1ae304, Func Offset: 0x34
	// Func End, Address: 0x1ae314, Func Offset: 0x44
}

// zVMCB_GameSlot4__FPc
// Start address: 0x1ae320
int8* zVMCB_GameSlot4(int8* dst)
{
	int32 count;
	// Line 804, Address: 0x1ae320, Func Offset: 0
	// Line 805, Address: 0x1ae330, Func Offset: 0x10
	// Line 807, Address: 0x1ae350, Func Offset: 0x30
	// Line 808, Address: 0x1ae354, Func Offset: 0x34
	// Func End, Address: 0x1ae364, Func Offset: 0x44
}

// zVMCB_GameSlot3__FPc
// Start address: 0x1ae370
int8* zVMCB_GameSlot3(int8* dst)
{
	int32 count;
	// Line 798, Address: 0x1ae370, Func Offset: 0
	// Line 799, Address: 0x1ae380, Func Offset: 0x10
	// Line 801, Address: 0x1ae3a0, Func Offset: 0x30
	// Line 802, Address: 0x1ae3a4, Func Offset: 0x34
	// Func End, Address: 0x1ae3b4, Func Offset: 0x44
}

// zVMCB_GameSlot2__FPc
// Start address: 0x1ae3c0
int8* zVMCB_GameSlot2(int8* dst)
{
	int32 count;
	// Line 792, Address: 0x1ae3c0, Func Offset: 0
	// Line 793, Address: 0x1ae3d0, Func Offset: 0x10
	// Line 795, Address: 0x1ae3f0, Func Offset: 0x30
	// Line 796, Address: 0x1ae3f4, Func Offset: 0x34
	// Func End, Address: 0x1ae404, Func Offset: 0x44
}

// zVMCB_GameSlot1__FPc
// Start address: 0x1ae410
int8* zVMCB_GameSlot1(int8* dst)
{
	int32 count;
	// Line 786, Address: 0x1ae410, Func Offset: 0
	// Line 787, Address: 0x1ae420, Func Offset: 0x10
	// Line 789, Address: 0x1ae440, Func Offset: 0x30
	// Line 790, Address: 0x1ae444, Func Offset: 0x34
	// Func End, Address: 0x1ae454, Func Offset: 0x44
}

// zVMCB_GameSlot0__FPc
// Start address: 0x1ae460
int8* zVMCB_GameSlot0(int8* dst)
{
	int32 count;
	// Line 780, Address: 0x1ae460, Func Offset: 0
	// Line 781, Address: 0x1ae470, Func Offset: 0x10
	// Line 783, Address: 0x1ae490, Func Offset: 0x30
	// Line 784, Address: 0x1ae494, Func Offset: 0x34
	// Func End, Address: 0x1ae4a4, Func Offset: 0x44
}

// zVMCB_Scene__FPc
// Start address: 0x1ae4b0
int8* zVMCB_Scene(int8* dst)
{
	int32 count;
	// Line 773, Address: 0x1ae4b0, Func Offset: 0
	// Line 774, Address: 0x1ae4bc, Func Offset: 0xc
	// Line 776, Address: 0x1ae4e8, Func Offset: 0x38
	// Line 777, Address: 0x1ae4ec, Func Offset: 0x3c
	// Func End, Address: 0x1ae4fc, Func Offset: 0x4c
}

// zVMCB_SoundFXVolume__FPc
// Start address: 0x1ae500
int8* zVMCB_SoundFXVolume(int8* dst)
{
	int32 count;
	// Line 766, Address: 0x1ae500, Func Offset: 0
	// Line 767, Address: 0x1ae508, Func Offset: 0x8
	// Line 766, Address: 0x1ae50c, Func Offset: 0xc
	// Line 767, Address: 0x1ae510, Func Offset: 0x10
	// Line 769, Address: 0x1ae580, Func Offset: 0x80
	// Line 770, Address: 0x1ae584, Func Offset: 0x84
	// Func End, Address: 0x1ae594, Func Offset: 0x94
}

// zVMCB_SoundMusicVolume__FPc
// Start address: 0x1ae5a0
int8* zVMCB_SoundMusicVolume(int8* dst)
{
	int32 count;
	// Line 760, Address: 0x1ae5a0, Func Offset: 0
	// Line 761, Address: 0x1ae5a8, Func Offset: 0x8
	// Line 760, Address: 0x1ae5ac, Func Offset: 0xc
	// Line 761, Address: 0x1ae5b0, Func Offset: 0x10
	// Line 763, Address: 0x1ae620, Func Offset: 0x80
	// Line 764, Address: 0x1ae624, Func Offset: 0x84
	// Func End, Address: 0x1ae634, Func Offset: 0x94
}

// zVMCB_PlayerChancesCount__FPc
// Start address: 0x1ae640
int8* zVMCB_PlayerChancesCount(int8* dst)
{
	int32 count;
	// Line 754, Address: 0x1ae640, Func Offset: 0
	// Line 755, Address: 0x1ae64c, Func Offset: 0xc
	// Line 757, Address: 0x1ae664, Func Offset: 0x24
	// Line 758, Address: 0x1ae668, Func Offset: 0x28
	// Func End, Address: 0x1ae678, Func Offset: 0x38
}

// zVMCB_PlayerScoobySnackCount_Int__FPc
// Start address: 0x1ae680
int8* zVMCB_PlayerScoobySnackCount_Int(int8* dst)
{
	int32 count;
	// Line 748, Address: 0x1ae680, Func Offset: 0
	// Line 749, Address: 0x1ae68c, Func Offset: 0xc
	// Line 751, Address: 0x1ae6a4, Func Offset: 0x24
	// Line 752, Address: 0x1ae6a8, Func Offset: 0x28
	// Func End, Address: 0x1ae6b8, Func Offset: 0x38
}

// zVarDefeatMasterMind__Fv
// Start address: 0x1ae6c0
void zVarDefeatMasterMind()
{
	// Line 739, Address: 0x1ae6c0, Func Offset: 0
	// Line 741, Address: 0x1ae6c8, Func Offset: 0x8
	// Func End, Address: 0x1ae6d0, Func Offset: 0x10
}

// zVarSetSnackGateValue__FUi
// Start address: 0x1ae6d0
void zVarSetSnackGateValue(uint32 amount)
{
	// Line 735, Address: 0x1ae6d0, Func Offset: 0
	// Func End, Address: 0x1ae6d8, Func Offset: 0x8
}

// zVarSetArea__FUi
// Start address: 0x1ae6e0
void zVarSetArea(uint32 sceneID)
{
	// Line 730, Address: 0x1ae6e0, Func Offset: 0
	// Func End, Address: 0x1ae6e8, Func Offset: 0x8
}

// zVarUnlockF001__Fv
// Start address: 0x1ae6f0
void zVarUnlockF001()
{
	// Line 724, Address: 0x1ae6f0, Func Offset: 0
	// Line 725, Address: 0x1ae6f4, Func Offset: 0x4
	// Func End, Address: 0x1ae6fc, Func Offset: 0xc
}

// zVarUnlockE001__Fv
// Start address: 0x1ae700
void zVarUnlockE001()
{
	// Line 719, Address: 0x1ae700, Func Offset: 0
	// Line 720, Address: 0x1ae704, Func Offset: 0x4
	// Func End, Address: 0x1ae70c, Func Offset: 0xc
}

// zVarUnlockS001__Fv
// Start address: 0x1ae710
void zVarUnlockS001()
{
	// Line 714, Address: 0x1ae710, Func Offset: 0
	// Line 715, Address: 0x1ae714, Func Offset: 0x4
	// Func End, Address: 0x1ae71c, Func Offset: 0xc
}

// zVarUnlockR001__Fv
// Start address: 0x1ae720
void zVarUnlockR001()
{
	// Line 709, Address: 0x1ae720, Func Offset: 0
	// Line 710, Address: 0x1ae724, Func Offset: 0x4
	// Func End, Address: 0x1ae72c, Func Offset: 0xc
}

// zVarGiveMap__Fv
// Start address: 0x1ae730
void zVarGiveMap()
{
	// Line 704, Address: 0x1ae730, Func Offset: 0
	// Line 705, Address: 0x1ae734, Func Offset: 0x4
	// Func End, Address: 0x1ae73c, Func Offset: 0xc
}

// zVarGameSlotInfo__Fi
// Start address: 0x1ae740
int8* zVarGameSlotInfo(int32 i)
{
	int8 ampm[32];
	int32 hour;
	int8 time[32];
	int8 date[32];
	// Line 657, Address: 0x1ae740, Func Offset: 0
	// Line 658, Address: 0x1ae758, Func Offset: 0x18
	// Line 657, Address: 0x1ae75c, Func Offset: 0x1c
	// Line 658, Address: 0x1ae760, Func Offset: 0x20
	// Line 659, Address: 0x1ae770, Func Offset: 0x30
	// Line 661, Address: 0x1ae774, Func Offset: 0x34
	// Line 659, Address: 0x1ae77c, Func Offset: 0x3c
	// Line 658, Address: 0x1ae780, Func Offset: 0x40
	// Line 659, Address: 0x1ae784, Func Offset: 0x44
	// Line 658, Address: 0x1ae788, Func Offset: 0x48
	// Line 661, Address: 0x1ae78c, Func Offset: 0x4c
	// Line 659, Address: 0x1ae794, Func Offset: 0x54
	// Line 664, Address: 0x1ae79c, Func Offset: 0x5c
	// Line 659, Address: 0x1ae7a8, Func Offset: 0x68
	// Line 664, Address: 0x1ae7b0, Func Offset: 0x70
	// Line 661, Address: 0x1ae7c0, Func Offset: 0x80
	// Line 664, Address: 0x1ae7c8, Func Offset: 0x88
	// Line 661, Address: 0x1ae7d4, Func Offset: 0x94
	// Line 664, Address: 0x1ae7d8, Func Offset: 0x98
	// Line 665, Address: 0x1ae7e4, Func Offset: 0xa4
	// Line 666, Address: 0x1ae7ec, Func Offset: 0xac
	// Line 669, Address: 0x1ae810, Func Offset: 0xd0
	// Line 670, Address: 0x1ae830, Func Offset: 0xf0
	// Line 671, Address: 0x1ae83c, Func Offset: 0xfc
	// Line 673, Address: 0x1ae848, Func Offset: 0x108
	// Line 674, Address: 0x1ae85c, Func Offset: 0x11c
	// Line 676, Address: 0x1ae868, Func Offset: 0x128
	// Line 679, Address: 0x1ae870, Func Offset: 0x130
	// Line 680, Address: 0x1ae880, Func Offset: 0x140
	// Line 681, Address: 0x1ae888, Func Offset: 0x148
	// Line 684, Address: 0x1ae88c, Func Offset: 0x14c
	// Line 685, Address: 0x1ae8b4, Func Offset: 0x174
	// Line 690, Address: 0x1ae8d0, Func Offset: 0x190
	// Line 692, Address: 0x1ae8e8, Func Offset: 0x1a8
	// Line 693, Address: 0x1ae900, Func Offset: 0x1c0
	// Line 696, Address: 0x1ae908, Func Offset: 0x1c8
	// Line 700, Address: 0x1ae914, Func Offset: 0x1d4
	// Line 699, Address: 0x1ae928, Func Offset: 0x1e8
	// Line 700, Address: 0x1ae92c, Func Offset: 0x1ec
	// Line 699, Address: 0x1ae930, Func Offset: 0x1f0
	// Line 700, Address: 0x1ae934, Func Offset: 0x1f4
	// Func End, Address: 0x1ae93c, Func Offset: 0x1fc
}

// zVarEntryCB_VibrationOn__Fv
// Start address: 0x1ae940
uint32 zVarEntryCB_VibrationOn()
{
	// Line 631, Address: 0x1ae940, Func Offset: 0
	// Line 632, Address: 0x1ae948, Func Offset: 0x8
	// Func End, Address: 0x1ae950, Func Offset: 0x10
}

// zVarEntryCB_MCAvailable__Fv
// Start address: 0x1ae950
uint32 zVarEntryCB_MCAvailable()
{
	// Line 598, Address: 0x1ae950, Func Offset: 0
	// Line 600, Address: 0x1ae958, Func Offset: 0x8
	// Line 603, Address: 0x1ae970, Func Offset: 0x20
	// Line 604, Address: 0x1ae984, Func Offset: 0x34
	// Line 605, Address: 0x1ae98c, Func Offset: 0x3c
	// Line 606, Address: 0x1ae99c, Func Offset: 0x4c
	// Line 609, Address: 0x1ae9a4, Func Offset: 0x54
	// Line 612, Address: 0x1ae9b4, Func Offset: 0x64
	// Line 613, Address: 0x1ae9c8, Func Offset: 0x78
	// Line 614, Address: 0x1ae9d0, Func Offset: 0x80
	// Line 615, Address: 0x1ae9e0, Func Offset: 0x90
	// Line 619, Address: 0x1ae9e8, Func Offset: 0x98
	// Line 620, Address: 0x1ae9ec, Func Offset: 0x9c
	// Func End, Address: 0x1ae9f8, Func Offset: 0xa8
}

// zVarEntryCB_PCSpecialLightningBoltStun__Fv
// Start address: 0x1aea00
uint32 zVarEntryCB_PCSpecialLightningBoltStun()
{
	// Line 585, Address: 0x1aea00, Func Offset: 0
	// Func End, Address: 0x1aea18, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialShovel__Fv
// Start address: 0x1aea20
uint32 zVarEntryCB_PCSpecialShovel()
{
	// Line 583, Address: 0x1aea20, Func Offset: 0
	// Func End, Address: 0x1aea38, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialUmbrella__Fv
// Start address: 0x1aea40
uint32 zVarEntryCB_PCSpecialUmbrella()
{
	// Line 581, Address: 0x1aea40, Func Offset: 0
	// Func End, Address: 0x1aea58, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialFootballHelmet__Fv
// Start address: 0x1aea60
uint32 zVarEntryCB_PCSpecialFootballHelmet()
{
	// Line 579, Address: 0x1aea60, Func Offset: 0
	// Func End, Address: 0x1aea78, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialLightningBolt__Fv
// Start address: 0x1aea80
uint32 zVarEntryCB_PCSpecialLightningBolt()
{
	// Line 577, Address: 0x1aea80, Func Offset: 0
	// Func End, Address: 0x1aea98, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialSpring__Fv
// Start address: 0x1aeaa0
uint32 zVarEntryCB_PCSpecialSpring()
{
	// Line 575, Address: 0x1aeaa0, Func Offset: 0
	// Func End, Address: 0x1aeab8, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialDivingHelmet__Fv
// Start address: 0x1aeac0
uint32 zVarEntryCB_PCSpecialDivingHelmet()
{
	// Line 573, Address: 0x1aeac0, Func Offset: 0
	// Func End, Address: 0x1aead8, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialFlowerPot__Fv
// Start address: 0x1aeae0
uint32 zVarEntryCB_PCSpecialFlowerPot()
{
	// Line 571, Address: 0x1aeae0, Func Offset: 0
	// Func End, Address: 0x1aeaf8, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialBlackKnight__Fv
// Start address: 0x1aeb00
uint32 zVarEntryCB_PCSpecialBlackKnight()
{
	// Line 569, Address: 0x1aeb00, Func Offset: 0
	// Func End, Address: 0x1aeb18, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialLampShade__Fv
// Start address: 0x1aeb20
uint32 zVarEntryCB_PCSpecialLampShade()
{
	// Line 567, Address: 0x1aeb20, Func Offset: 0
	// Func End, Address: 0x1aeb38, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialSlippers__Fv
// Start address: 0x1aeb40
uint32 zVarEntryCB_PCSpecialSlippers()
{
	// Line 565, Address: 0x1aeb40, Func Offset: 0
	// Func End, Address: 0x1aeb58, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialPlungers__Fv
// Start address: 0x1aeb60
uint32 zVarEntryCB_PCSpecialPlungers()
{
	// Line 563, Address: 0x1aeb60, Func Offset: 0
	// Func End, Address: 0x1aeb78, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialStickyBoots__Fv
// Start address: 0x1aeb80
uint32 zVarEntryCB_PCSpecialStickyBoots()
{
	// Line 561, Address: 0x1aeb80, Func Offset: 0
	// Func End, Address: 0x1aeb98, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialSoapBar__Fv
// Start address: 0x1aeba0
uint32 zVarEntryCB_PCSpecialSoapBar()
{
	// Line 559, Address: 0x1aeba0, Func Offset: 0
	// Func End, Address: 0x1aebb8, Func Offset: 0x18
}

// zVarEntryCB_PCSpecialBubbleGum__Fv
// Start address: 0x1aebc0
uint32 zVarEntryCB_PCSpecialBubbleGum()
{
	// Line 557, Address: 0x1aebc0, Func Offset: 0
	// Func End, Address: 0x1aebd8, Func Offset: 0x18
}

// zVarEntryCB_SndFXVol__Fv
// Start address: 0x1aebe0
uint32 zVarEntryCB_SndFXVol()
{
	float64 floatVol;
	// Line 535, Address: 0x1aebe0, Func Offset: 0
	// Line 538, Address: 0x1aebe4, Func Offset: 0x4
	// Line 535, Address: 0x1aebe8, Func Offset: 0x8
	// Line 538, Address: 0x1aebec, Func Offset: 0xc
	// Line 542, Address: 0x1aec1c, Func Offset: 0x3c
	// Line 546, Address: 0x1aec2c, Func Offset: 0x4c
	// Line 547, Address: 0x1aec44, Func Offset: 0x64
	// Func End, Address: 0x1aec50, Func Offset: 0x70
}

// zVarEntryCB_SndMusicVol__Fv
// Start address: 0x1aec50
uint32 zVarEntryCB_SndMusicVol()
{
	float64 floatVol;
	// Line 511, Address: 0x1aec50, Func Offset: 0
	// Line 516, Address: 0x1aec54, Func Offset: 0x4
	// Line 511, Address: 0x1aec58, Func Offset: 0x8
	// Line 516, Address: 0x1aec5c, Func Offset: 0xc
	// Line 520, Address: 0x1aec8c, Func Offset: 0x3c
	// Line 524, Address: 0x1aec9c, Func Offset: 0x4c
	// Line 525, Address: 0x1aecb4, Func Offset: 0x64
	// Func End, Address: 0x1aecc0, Func Offset: 0x70
}

// zVarEntryCB_SndMasterVol__Fv
// Start address: 0x1aecc0
uint32 zVarEntryCB_SndMasterVol()
{
	float64 floatVol;
	// Line 489, Address: 0x1aecc0, Func Offset: 0
	// Line 492, Address: 0x1aecc4, Func Offset: 0x4
	// Line 489, Address: 0x1aecc8, Func Offset: 0x8
	// Line 492, Address: 0x1aeccc, Func Offset: 0xc
	// Line 496, Address: 0x1aecfc, Func Offset: 0x3c
	// Line 500, Address: 0x1aed0c, Func Offset: 0x4c
	// Line 501, Address: 0x1aed24, Func Offset: 0x64
	// Func End, Address: 0x1aed30, Func Offset: 0x70
}

// zVarEntryCB_SndMode__Fv
// Start address: 0x1aed30
uint32 zVarEntryCB_SndMode()
{
	// Line 478, Address: 0x1aed30, Func Offset: 0
	// Line 479, Address: 0x1aed34, Func Offset: 0x4
	// Func End, Address: 0x1aed3c, Func Offset: 0xc
}

// zVarEntryCB_PCScoobySnacks__Fv
// Start address: 0x1aed40
uint32 zVarEntryCB_PCScoobySnacks()
{
	// Line 466, Address: 0x1aed40, Func Offset: 0
	// Line 467, Address: 0x1aed44, Func Offset: 0x4
	// Func End, Address: 0x1aed4c, Func Offset: 0xc
}

// zVarEntryCB_PCChances__Fv
// Start address: 0x1aed50
uint32 zVarEntryCB_PCChances()
{
	// Line 454, Address: 0x1aed50, Func Offset: 0
	// Line 455, Address: 0x1aed54, Func Offset: 0x4
	// Func End, Address: 0x1aed5c, Func Offset: 0xc
}

// zVarLoad__FP7xSerial
// Start address: 0x1aed60
void zVarLoad(xSerial* s)
{
	// Line 434, Address: 0x1aed60, Func Offset: 0
	// Line 436, Address: 0x1aed70, Func Offset: 0x10
	// Line 437, Address: 0x1aed78, Func Offset: 0x18
	// Line 438, Address: 0x1aed84, Func Offset: 0x24
	// Line 439, Address: 0x1aed90, Func Offset: 0x30
	// Line 440, Address: 0x1aed9c, Func Offset: 0x3c
	// Line 441, Address: 0x1aeda8, Func Offset: 0x48
	// Line 443, Address: 0x1aedb4, Func Offset: 0x54
	// Func End, Address: 0x1aedc4, Func Offset: 0x64
}

// zVarSave__FP7xSerial
// Start address: 0x1aedd0
void zVarSave(xSerial* s)
{
	// Line 423, Address: 0x1aedd0, Func Offset: 0
	// Line 425, Address: 0x1aeddc, Func Offset: 0xc
	// Line 426, Address: 0x1aedf4, Func Offset: 0x24
	// Line 427, Address: 0x1aee0c, Func Offset: 0x3c
	// Line 428, Address: 0x1aee24, Func Offset: 0x54
	// Line 429, Address: 0x1aee3c, Func Offset: 0x6c
	// Line 430, Address: 0x1aee54, Func Offset: 0x84
	// Line 432, Address: 0x1aee6c, Func Offset: 0x9c
	// Func End, Address: 0x1aee7c, Func Offset: 0xac
}

// zVarNewGame__Fv
// Start address: 0x1aee80
void zVarNewGame()
{
	// Line 406, Address: 0x1aee80, Func Offset: 0
	// Line 407, Address: 0x1aee84, Func Offset: 0x4
	// Line 408, Address: 0x1aee88, Func Offset: 0x8
	// Line 409, Address: 0x1aee8c, Func Offset: 0xc
	// Line 410, Address: 0x1aee90, Func Offset: 0x10
	// Line 411, Address: 0x1aee94, Func Offset: 0x14
	// Line 414, Address: 0x1aee98, Func Offset: 0x18
	// Func End, Address: 0x1aeea0, Func Offset: 0x20
}

// zVarInit__FP9zVarEntry
// Start address: 0x1aeea0
void zVarInit(zVarEntry* table)
{
	int32 i;
	// Line 389, Address: 0x1aeea0, Func Offset: 0
	// Line 390, Address: 0x1aeeb4, Func Offset: 0x14
	// Line 393, Address: 0x1aeeb8, Func Offset: 0x18
	// Line 394, Address: 0x1aeec0, Func Offset: 0x20
	// Line 393, Address: 0x1aeec4, Func Offset: 0x24
	// Line 394, Address: 0x1aeec8, Func Offset: 0x28
	// Line 395, Address: 0x1aeed4, Func Offset: 0x34
	// Func End, Address: 0x1aeee8, Func Offset: 0x48
}

// zVarMagicProcessText__FPcPc
// Start address: 0x1aeef0
void zVarMagicProcessText(int8* src, int8* dst)
{
	zVarMagicEntry* e;
	uint32 mvID;
	int8* mv;
	int8 magicVar[256];
	// Line 267, Address: 0x1aeef0, Func Offset: 0
	// Line 271, Address: 0x1aef08, Func Offset: 0x18
	// Line 272, Address: 0x1aef1c, Func Offset: 0x2c
	// Line 274, Address: 0x1aef54, Func Offset: 0x64
	// Line 277, Address: 0x1aef5c, Func Offset: 0x6c
	// Line 290, Address: 0x1aef78, Func Offset: 0x88
	// Line 292, Address: 0x1aef80, Func Offset: 0x90
	// Line 293, Address: 0x1aef8c, Func Offset: 0x9c
	// Line 300, Address: 0x1aefa8, Func Offset: 0xb8
	// Line 303, Address: 0x1aefac, Func Offset: 0xbc
	// Line 304, Address: 0x1aefbc, Func Offset: 0xcc
	// Line 308, Address: 0x1aefc0, Func Offset: 0xd0
	// Line 314, Address: 0x1aefc8, Func Offset: 0xd8
	// Line 317, Address: 0x1aefd0, Func Offset: 0xe0
	// Line 321, Address: 0x1aefdc, Func Offset: 0xec
	// Line 323, Address: 0x1aefe8, Func Offset: 0xf8
	// Line 325, Address: 0x1aeff0, Func Offset: 0x100
	// Line 326, Address: 0x1aeff4, Func Offset: 0x104
	// Line 328, Address: 0x1af004, Func Offset: 0x114
	// Line 332, Address: 0x1af00c, Func Offset: 0x11c
	// Line 334, Address: 0x1af018, Func Offset: 0x128
	// Line 337, Address: 0x1af024, Func Offset: 0x134
	// Line 338, Address: 0x1af028, Func Offset: 0x138
	// Func End, Address: 0x1af044, Func Offset: 0x154
}

