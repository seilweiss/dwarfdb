typedef struct RwObject;
typedef struct zPlayerStatic;
typedef struct xBase;
typedef struct _zCutsceneMgr;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct xCutscene;
typedef struct xSurface;
typedef struct iEnv;
typedef struct xAnimEffect;
typedef struct _xMat4x3;
typedef enum RxClusterValid;
typedef struct rxHeapBlockHeader;
typedef struct zPortalAsset;
typedef struct RwCamera;
typedef struct xModelInstance;
typedef struct _zEnt;
typedef struct RwResEntry;
typedef struct xCutsceneInfo;
typedef struct xAnimActiveEffect;
typedef struct _tagxCamPath;
typedef struct xQCData;
typedef struct st_XSAVEGAME_DATA;
typedef struct xCutsceneData;
typedef struct _tagp2CamStaticAsset;
typedef struct xMemPool;
typedef struct _tagxCam;
typedef struct rxHeapFreeBlock;
typedef struct RwV3d;
typedef struct zScene;
typedef struct _tagxRumble;
typedef struct RwTexDictionary;
typedef struct xFFX;
typedef struct RwPlane;
typedef struct _zEntHangable;
typedef enum en_SAVEGAME_MODE;
typedef struct RpClump;
typedef struct xAnimSingle;
typedef struct _zPlatform;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef struct _xQuat;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct _xBBox;
typedef struct xAnimTable;
typedef struct _xEnt;
typedef enum RpWorldRenderOrder;
typedef struct xCutsceneBreak;
typedef struct p2EntHangableAsset;
typedef struct RxPacket;
typedef struct RxClusterDefinition;
typedef struct xCutsceneTime;
typedef struct RwFrustumPlane;
typedef struct _xEntShadow;
typedef struct RxPipelineCluster;
typedef struct _xVec3;
typedef struct RpCollSector;
typedef struct RxPipelineRequiresCluster;
typedef enum en_XSGASYNC_STATUS;
typedef struct RwBBox;
typedef struct RpMeshHeader;
typedef struct _xVec4;
typedef enum RwFogType;
typedef struct _xScene;
typedef struct rxReq;
typedef struct _xEntDrive;
typedef struct p2EntAsset;
typedef struct xAnimTransition;
typedef struct _xEntFrame;
typedef struct RxPipeline;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RwTexCoords;
typedef struct _zPortal;
typedef struct RwTexture;
typedef struct RpWorldSector;
typedef struct RxPipelineNodeTopSortData;
typedef struct zSaveLoadUI;
typedef struct xAnimState;
typedef struct zCutsceneZbuffer;
typedef struct RxOutputSpec;
typedef struct _xRot;
typedef enum RxClusterForcePresent;
typedef struct RwRaster;
typedef struct _tagxCamFollow;
typedef struct st_XSAVEGAME_READCONTEXT;
typedef struct p2LinkAsset;
typedef enum _tagRumbleType;
typedef struct RpWorld;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RpGeometry;
typedef struct zSaveLoadGame;
typedef struct RpVertexNormal;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct RwFrame;
typedef struct RxIoSpec;
typedef struct iSndVol;
typedef struct RpMorphTarget;
typedef struct _tagxCamPathAsset;
typedef struct RpMaterial;
typedef struct zPlayerGlobals;
typedef struct RpSector;
typedef struct iShadowCache;
typedef struct RxNodeMethods;
typedef struct xSndGlobals;
typedef struct tag_xFile;
typedef struct iFogParams;
typedef struct zCutsceneZbufferHack;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct sceCdlFILE;
typedef struct RwLLLink;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct tag_iFile;
typedef struct RxHeap;
typedef struct _tagxCamShoulder;
typedef struct RpPolygon;
typedef struct RxCluster;
typedef struct xSndVoiceInfo;
typedef struct RpLight;
typedef struct _xBound;
typedef struct _xSphere;
typedef struct xAnimPlay;
typedef enum RxClusterValidityReq;
typedef struct RpTriangle;
typedef struct _tagxCamFollowAsset;
typedef struct RwSphere;
typedef struct _xCollis;
typedef struct zShaggy1Globals;
typedef struct xCamAsset;
typedef struct zCutsceneMgrAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimFile;
typedef struct _xCylinder;
typedef struct _iCollis;
typedef enum RwTextureAddressMode;
typedef enum _tagCamType;
typedef struct zCheckPoint;
typedef struct xAnimTransitionList;
typedef struct iSndInfo;
typedef struct _xEntCollis;
typedef struct iModelTag;
typedef struct xModelPool;
typedef struct zGlobalGameStats;
typedef struct _xBox;
typedef struct _tagxCamStatic;
typedef struct RxPipelineNodeParam;
typedef struct _xEnv;
typedef enum RwCameraProjection;
typedef struct RwObjectHasFrame;
typedef struct zAssetPickupTable;
typedef struct _tagxCamFrame;
typedef enum _tagPadState;
typedef struct zJumpParam;
typedef struct _tagxCamShoulderAsset;
typedef struct _tagiPad;
typedef enum _tagTransType;
typedef struct RwRGBAReal;
typedef struct p2BaseAsset;
typedef struct zGlobals;
typedef struct RpInterpolator;
typedef struct _tagxCamStaticFollow;
typedef struct _tagxPad;
typedef struct RwV2d;
typedef struct _tagPadAnalog;
typedef struct xSndVol;
typedef enum RwTextureFilterMode;

typedef int32(*type_7)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef uint32(*type_10)(RxPipelineNode*, uint32, uint32, void*);
typedef xBase*(*type_11)(uint32);
typedef RwCamera*(*type_12)(RwCamera*);
typedef void(*type_13)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int32(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_17)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_18)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_20)(RxNodeDefinition*);
typedef RwCamera*(*type_21)(RwCamera*);
typedef int8*(*type_22)(xBase*);
typedef void(*type_25)(RxNodeDefinition*);
typedef int32(*type_27)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef void(*type_32)(RwResEntry*);
typedef int32(*type_33)(RxPipelineNode*);
typedef int8*(*type_34)(uint32);
typedef void(*type_37)(RxPipelineNode*);
typedef RpClump*(*type_38)(RpClump*, void*);
typedef int32(*type_43)(RxPipelineNode*, RxPipeline*);
typedef int32(*type_44)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_46)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
typedef uint32(*type_50)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_51)(RpWorldSector*);
typedef RpAtomic*(*type_63)(RpAtomic*);
typedef void(*type_64)(int32);
typedef void(*type_69)(xMemPool*, void*);
typedef void(*type_77)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_84)(_xEnt*, _xScene*, float32);
typedef void(*type_88)(_xEnt*);
typedef void(*type_90)(_xEnt*);
typedef void(*type_93)(_xEnt*, _xVec3*);
typedef int32(*type_95)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
typedef RwObjectHasFrame*(*type_101)(RwObjectHasFrame*);
typedef int32(*type_103)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef void(*type_111)(_xEnt*, _xVec3*);
typedef int32(*type_112)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);

typedef zSaveLoadUI type_0[49];
typedef _xQuat type_1[2];
typedef int8 type_2[32];
typedef RxCluster type_3[1];
typedef int8 type_4[128];
typedef int8 type_5[128][6];
typedef int8 type_6[32];
typedef int8 type_8[64];
typedef _xCollis type_9[18];
typedef uint32 type_14[4];
typedef float32 type_15[4];
typedef float32 type_19[4];
typedef uint8 type_23[8];
typedef float32 type_24[4];
typedef int8 type_26[32];
typedef int8 type_28[16];
typedef uint8 type_29[8];
typedef uint32 type_30[2];
typedef float32 type_31[4];
typedef uint8 type_35[8];
typedef float32 type_36[4];
typedef uint8 type_39[3];
typedef uint8 type_40[8];
typedef float32 type_41[3];
typedef uint8 type_42[22];
typedef float32 type_45[3];
typedef uint8 type_47[22];
typedef zGlobalGameStats type_48[30];
typedef uint8 type_49[3];
typedef zGlobalGameStats type_52[13];
typedef _zEnt* type_53[10];
typedef uint32 type_54[1];
typedef zGlobalGameStats type_55[4];
typedef int32 type_56[2];
typedef int32 type_57[2];
typedef int8 type_58[32];
typedef int8 type_59[32];
typedef int8 type_60[64];
typedef zSaveLoadGame type_61[3];
typedef int8 type_62[64];
typedef _xVec3 type_65[4];
typedef float32 type_66[2];
typedef zCutsceneZbuffer type_67[4];
typedef int8 type_68[16];
typedef uint8 type_70[8];
typedef int8 type_71[128];
typedef uint32 type_72[2];
typedef uint8 type_73[3];
typedef xSndVoiceInfo type_74[48];
typedef uint32 type_75[2];
typedef uint16 type_76[3];
typedef uint32 type_78[2];
typedef uint32 type_79[43];
typedef uint32 type_80[2];
typedef uint16 type_81[3];
typedef xBase* type_82[43];
typedef RwFrustumPlane type_83[6];
typedef int8 type_85[32];
typedef int8 type_86[32];
typedef RwV3d type_87[8];
typedef int8 type_89[16];
typedef int8 type_91[16];
typedef float32 type_92[4];
typedef float32 type_94[4];
typedef float32 type_96[4];
typedef int8 type_97[64];
typedef uint8 type_98[3];
typedef uint8 type_99[2];
typedef int8 type_100[32];
typedef RpLight* type_102[2];
typedef float32 type_104[15];
typedef RwFrame* type_105[2];
typedef _xVec4 type_106[8];
typedef float32 type_107[15];
typedef RwTexCoords* type_108[8];
typedef iModelTag type_109[4];
typedef uint32 type_110[15];
typedef _xVec3 type_113[2];
typedef RwTexCoords* type_114[8];
typedef int8 type_115[32];
typedef float32 type_116[4];

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct st_XSAVEGAME_DATA
{
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xFFX
{
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
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

struct _zPlatform
{
};

struct RwLinkList
{
	RwLLLink link;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

enum en_XSGASYNC_STATUS
{
	XSG_ASTAT_NOOP,
	XSG_ASTAT_INPROG,
	XSG_ASTAT_SUCCESS,
	XSG_ASTAT_FAILED
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct rxReq
{
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct zSaveLoadUI
{
	uint32 entry;
	uint32 nameID;
	int8* name;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct st_XSAVEGAME_READCONTEXT
{
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

struct zSaveLoadGame
{
	int8 label[64];
	int8 date[32];
	int32 progress;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct iSndVol
{
	int16 volL;
	int16 volR;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct RpSector
{
	int32 type;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct _iCollis
{
	int32 unknown;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

struct _tagiPad
{
	int32 port;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xSndVol
{
	float32 volL;
	float32 volR;
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

uint32 saveSuccess;
float32 time_elapsed;
float32 time_last;
float32 time_current;
long32 t0;
long32 t1;
int32 currentCard;
int32 currentGame;
int32 promptSel;
int32 badCard;
int32 sAvailable;
int32 sNeeded;
float32 dontPoll;
int8 currSceneStr[32];
int8 sceneRead[32];
zSaveLoadUI zSaveLoadUITable[49];
zSaveLoadGame zSaveLoadGameTable[3];
zGlobals globals;
xSndGlobals gSnd;
int32(*xSGT_LoadPrefsCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSGT_LoadLoadCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, uint32, int32);
int32(*xSGT_SaveProcPrefsCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSGT_SaveInfoPrefsCB)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
int32(*xSGT_SaveProcCB)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
int32(*xSGT_SaveInfoCB)(void*, st_XSAVEGAME_DATA*, int32*, int32*);
uint32 gFrameCount;
uint32 gScreenDump;

uint32 zSaveLoad_slotIsEmpty(uint32 i);
int32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSGT_SaveInfoPrefsCB(int32* need, int32* most);
int32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int32 xSGT_SaveInfoCB(int32* need, int32* most);
void zSaveLoad_DispatchCB(uint32 dispatchEvent, float32* toParam);
uint32 zSaveLoad_SaveLoop();
uint32 zSaveLoad_LoadLoop();
int32 zSaveLoad_LoadGame();
int32 zSaveLoad_SaveGame();
int32 zSaveLoad_GameSelect(int32 mode);
void zSaveLoad_BuildName(int8* name_txt, int32 idx);
int32 zSaveLoad_CardPick(int32 mode);
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber);
int32 zSaveLoad_CardCheckSlotEmpty(int32 cardNumber, int32 gameNumber);
int32 zSaveLoad_CardCheckGames(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckSpace(int32 cardNumber, int32 mode);
int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 num, int32 game);
int32 zSaveLoad_CardCheckGamesSingle(int32 num);
int32 zSaveLoad_CardCheckSpaceSingle(int32 num);
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num);
int32 zSaveLoad_CardCheckFormattedSingle(int32 num);
int32 zSaveLoad_CardCheckSingle(int32 num);
int32 zSaveLoad_CardPromptFormat(int32 mode);
int32 zSaveLoad_CardPrompt(int32 mode);
int32 CardtoTgt(int32 card);
int32 format(int32 num, int32 mode);
int32 zSaveLoad_getMCneeded();
int32 zSaveLoad_getMCavailable();
int32 zSaveLoad_getcard();
int32 zSaveLoad_getgame();
void zSaveLoad_Tick();

// zSaveLoad_slotIsEmpty__FUi
// Start address: 0x1cd6b0
uint32 zSaveLoad_slotIsEmpty(uint32 i)
{
	// Line 2360, Address: 0x1cd6b0, Func Offset: 0
	// Line 2356, Address: 0x1cd6d0, Func Offset: 0x20
	// Line 2360, Address: 0x1cd6d4, Func Offset: 0x24
	// Line 2356, Address: 0x1cd6d8, Func Offset: 0x28
	// Line 2360, Address: 0x1cd6dc, Func Offset: 0x2c
	// Line 2363, Address: 0x1cd6e4, Func Offset: 0x34
	// Line 2360, Address: 0x1cd6e8, Func Offset: 0x38
	// Line 2363, Address: 0x1cd6f0, Func Offset: 0x40
	// Func End, Address: 0x1cd6f8, Func Offset: 0x48
}

// xSGT_LoadPrefsCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1cd700
int32 xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	// Line 2315, Address: 0x1cd700, Func Offset: 0
	// Line 2327, Address: 0x1cd714, Func Offset: 0x14
	// Line 2330, Address: 0x1cd738, Func Offset: 0x38
	// Line 2333, Address: 0x1cd74c, Func Offset: 0x4c
	// Line 2336, Address: 0x1cd760, Func Offset: 0x60
	// Line 2339, Address: 0x1cd774, Func Offset: 0x74
	// Line 2342, Address: 0x1cd788, Func Offset: 0x88
	// Line 2346, Address: 0x1cd7a4, Func Offset: 0xa4
	// Line 2347, Address: 0x1cd7b0, Func Offset: 0xb0
	// Line 2349, Address: 0x1cd7c4, Func Offset: 0xc4
	// Line 2353, Address: 0x1cd7cc, Func Offset: 0xcc
	// Line 2352, Address: 0x1cd7dc, Func Offset: 0xdc
	// Line 2353, Address: 0x1cd7e0, Func Offset: 0xe0
	// Func End, Address: 0x1cd7e8, Func Offset: 0xe8
}

// xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1cd7f0
int32 xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	int32 compdiff;
	int8 bigbuf[32];
	// Line 2283, Address: 0x1cd7f0, Func Offset: 0
	// Line 2284, Address: 0x1cd804, Func Offset: 0x14
	// Line 2283, Address: 0x1cd808, Func Offset: 0x18
	// Line 2284, Address: 0x1cd80c, Func Offset: 0x1c
	// Line 2288, Address: 0x1cd824, Func Offset: 0x34
	// Line 2295, Address: 0x1cd828, Func Offset: 0x38
	// Line 2284, Address: 0x1cd830, Func Offset: 0x40
	// Line 2295, Address: 0x1cd834, Func Offset: 0x44
	// Line 2299, Address: 0x1cd858, Func Offset: 0x68
	// Line 2300, Address: 0x1cd874, Func Offset: 0x84
	// Line 2306, Address: 0x1cd878, Func Offset: 0x88
	// Line 2307, Address: 0x1cd880, Func Offset: 0x90
	// Line 2310, Address: 0x1cd890, Func Offset: 0xa0
	// Line 2311, Address: 0x1cd894, Func Offset: 0xa4
	// Line 2310, Address: 0x1cd8a8, Func Offset: 0xb8
	// Line 2311, Address: 0x1cd8b0, Func Offset: 0xc0
	// Func End, Address: 0x1cd8b8, Func Offset: 0xc8
}

// xSGT_SaveProcPrefsCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1cd8c0
int32 xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 sum;
	int32 amy;
	// Line 2249, Address: 0x1cd8c0, Func Offset: 0
	// Line 2256, Address: 0x1cd8d4, Func Offset: 0x14
	// Line 2249, Address: 0x1cd8e4, Func Offset: 0x24
	// Line 2256, Address: 0x1cd8e8, Func Offset: 0x28
	// Line 2257, Address: 0x1cd900, Func Offset: 0x40
	// Line 2259, Address: 0x1cd904, Func Offset: 0x44
	// Line 2260, Address: 0x1cd918, Func Offset: 0x58
	// Line 2262, Address: 0x1cd91c, Func Offset: 0x5c
	// Line 2263, Address: 0x1cd930, Func Offset: 0x70
	// Line 2265, Address: 0x1cd934, Func Offset: 0x74
	// Line 2268, Address: 0x1cd948, Func Offset: 0x88
	// Line 2266, Address: 0x1cd94c, Func Offset: 0x8c
	// Line 2268, Address: 0x1cd950, Func Offset: 0x90
	// Line 2269, Address: 0x1cd960, Func Offset: 0xa0
	// Line 2271, Address: 0x1cd964, Func Offset: 0xa4
	// Line 2272, Address: 0x1cd97c, Func Offset: 0xbc
	// Line 2276, Address: 0x1cd980, Func Offset: 0xc0
	// Line 2277, Address: 0x1cd984, Func Offset: 0xc4
	// Func End, Address: 0x1cd9a0, Func Offset: 0xe0
}

// xSGT_SaveInfoPrefsCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x1cd9a0
int32 xSGT_SaveInfoPrefsCB(int32* need, int32* most)
{
	// Line 2240, Address: 0x1cd9a0, Func Offset: 0
	// Line 2241, Address: 0x1cd9a8, Func Offset: 0x8
	// Line 2245, Address: 0x1cd9ac, Func Offset: 0xc
	// Line 2241, Address: 0x1cd9b0, Func Offset: 0x10
	// Line 2246, Address: 0x1cd9b4, Func Offset: 0x14
	// Func End, Address: 0x1cd9bc, Func Offset: 0x1c
}

// xSGT_SaveProcCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1cd9c0
int32 xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int32 sum;
	int32 amy;
	// Line 2211, Address: 0x1cd9c0, Func Offset: 0
	// Line 2218, Address: 0x1cd9d8, Func Offset: 0x18
	// Line 2220, Address: 0x1cda0c, Func Offset: 0x4c
	// Line 2223, Address: 0x1cda2c, Func Offset: 0x6c
	// Line 2226, Address: 0x1cda30, Func Offset: 0x70
	// Line 2227, Address: 0x1cda34, Func Offset: 0x74
	// Func End, Address: 0x1cda50, Func Offset: 0x90
}

// xSGT_SaveInfoCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x1cda50
int32 xSGT_SaveInfoCB(int32* need, int32* most)
{
	int32 slen;
	// Line 2188, Address: 0x1cda50, Func Offset: 0
	// Line 2200, Address: 0x1cda60, Func Offset: 0x10
	// Line 2201, Address: 0x1cda74, Func Offset: 0x24
	// Line 2202, Address: 0x1cda78, Func Offset: 0x28
	// Line 2206, Address: 0x1cda7c, Func Offset: 0x2c
	// Line 2202, Address: 0x1cda80, Func Offset: 0x30
	// Line 2207, Address: 0x1cda88, Func Offset: 0x38
	// Func End, Address: 0x1cda9c, Func Offset: 0x4c
}

// zSaveLoad_DispatchCB__FUiPf
// Start address: 0x1cdaa0
void zSaveLoad_DispatchCB(uint32 dispatchEvent, float32* toParam)
{
	// Line 2141, Address: 0x1cdaa0, Func Offset: 0
	// Line 2145, Address: 0x1cdac8, Func Offset: 0x28
	// Line 2147, Address: 0x1cdacc, Func Offset: 0x2c
	// Line 2155, Address: 0x1cdad4, Func Offset: 0x34
	// Line 2157, Address: 0x1cdad8, Func Offset: 0x38
	// Line 2160, Address: 0x1cdae0, Func Offset: 0x40
	// Line 2162, Address: 0x1cdaec, Func Offset: 0x4c
	// Line 2165, Address: 0x1cdaf4, Func Offset: 0x54
	// Line 2167, Address: 0x1cdb00, Func Offset: 0x60
	// Line 2170, Address: 0x1cdb08, Func Offset: 0x68
	// Line 2181, Address: 0x1cdb10, Func Offset: 0x70
	// Func End, Address: 0x1cdb18, Func Offset: 0x78
}

// zSaveLoad_SaveLoop__Fv
// Start address: 0x1cdb20
uint32 zSaveLoad_SaveLoop()
{
	int32 tmp;
	int32 state;
	// Line 2019, Address: 0x1cdb20, Func Offset: 0
	// Line 2020, Address: 0x1cdb40, Func Offset: 0x20
	// Line 2022, Address: 0x1cdb94, Func Offset: 0x74
	// Line 2029, Address: 0x1cdb98, Func Offset: 0x78
	// Line 2022, Address: 0x1cdb9c, Func Offset: 0x7c
	// Line 2029, Address: 0x1cdba0, Func Offset: 0x80
	// Line 2034, Address: 0x1cdbac, Func Offset: 0x8c
	// Line 2051, Address: 0x1cdbf4, Func Offset: 0xd4
	// Line 2053, Address: 0x1cdbf8, Func Offset: 0xd8
	// Line 2057, Address: 0x1cdc00, Func Offset: 0xe0
	// Line 2058, Address: 0x1cdc0c, Func Offset: 0xec
	// Line 2059, Address: 0x1cdc18, Func Offset: 0xf8
	// Line 2060, Address: 0x1cdc20, Func Offset: 0x100
	// Line 2061, Address: 0x1cdc2c, Func Offset: 0x10c
	// Line 2063, Address: 0x1cdc34, Func Offset: 0x114
	// Line 2065, Address: 0x1cdc38, Func Offset: 0x118
	// Line 2069, Address: 0x1cdc40, Func Offset: 0x120
	// Line 2070, Address: 0x1cdc4c, Func Offset: 0x12c
	// Line 2075, Address: 0x1cdc74, Func Offset: 0x154
	// Line 2077, Address: 0x1cdc78, Func Offset: 0x158
	// Line 2080, Address: 0x1cdc80, Func Offset: 0x160
	// Line 2082, Address: 0x1cdc88, Func Offset: 0x168
	// Line 2089, Address: 0x1cdcd4, Func Offset: 0x1b4
	// Line 2092, Address: 0x1cdcdc, Func Offset: 0x1bc
	// Line 2093, Address: 0x1cdce8, Func Offset: 0x1c8
	// Line 2096, Address: 0x1cdcf0, Func Offset: 0x1d0
	// Line 2101, Address: 0x1cdcf8, Func Offset: 0x1d8
	// Line 2105, Address: 0x1cdd00, Func Offset: 0x1e0
	// Line 2109, Address: 0x1cdd14, Func Offset: 0x1f4
	// Line 2110, Address: 0x1cdd1c, Func Offset: 0x1fc
	// Line 2112, Address: 0x1cdd24, Func Offset: 0x204
	// Line 2115, Address: 0x1cdd2c, Func Offset: 0x20c
	// Line 2116, Address: 0x1cdd38, Func Offset: 0x218
	// Line 2119, Address: 0x1cdd40, Func Offset: 0x220
	// Line 2120, Address: 0x1cdd8c, Func Offset: 0x26c
	// Line 2129, Address: 0x1cdd90, Func Offset: 0x270
	// Line 2135, Address: 0x1cdd9c, Func Offset: 0x27c
	// Line 2136, Address: 0x1cdda0, Func Offset: 0x280
	// Func End, Address: 0x1cddbc, Func Offset: 0x29c
}

// zSaveLoad_LoadLoop__Fv
// Start address: 0x1cddc0
uint32 zSaveLoad_LoadLoop()
{
	int32 tmp;
	int32 state;
	// Line 1889, Address: 0x1cddc0, Func Offset: 0
	// Line 1892, Address: 0x1cdddc, Func Offset: 0x1c
	// Line 1896, Address: 0x1cde30, Func Offset: 0x70
	// Line 1900, Address: 0x1cde38, Func Offset: 0x78
	// Line 1916, Address: 0x1cde80, Func Offset: 0xc0
	// Line 1920, Address: 0x1cde94, Func Offset: 0xd4
	// Line 1924, Address: 0x1cde9c, Func Offset: 0xdc
	// Line 1925, Address: 0x1cdea8, Func Offset: 0xe8
	// Line 1928, Address: 0x1cdedc, Func Offset: 0x11c
	// Line 1929, Address: 0x1cdee0, Func Offset: 0x120
	// Line 1931, Address: 0x1cdee8, Func Offset: 0x128
	// Line 1933, Address: 0x1cdeec, Func Offset: 0x12c
	// Line 1937, Address: 0x1cdef4, Func Offset: 0x134
	// Line 1938, Address: 0x1cdef8, Func Offset: 0x138
	// Line 1941, Address: 0x1cdf00, Func Offset: 0x140
	// Line 1944, Address: 0x1cdf04, Func Offset: 0x144
	// Line 1948, Address: 0x1cdf0c, Func Offset: 0x14c
	// Line 1949, Address: 0x1cdf18, Func Offset: 0x158
	// Line 1956, Address: 0x1cdf40, Func Offset: 0x180
	// Line 1959, Address: 0x1cdf48, Func Offset: 0x188
	// Line 1961, Address: 0x1cdf50, Func Offset: 0x190
	// Line 1968, Address: 0x1cdf9c, Func Offset: 0x1dc
	// Line 1971, Address: 0x1cdfa4, Func Offset: 0x1e4
	// Line 1972, Address: 0x1cdfb0, Func Offset: 0x1f0
	// Line 1976, Address: 0x1cdfb8, Func Offset: 0x1f8
	// Line 1980, Address: 0x1cdfc0, Func Offset: 0x200
	// Line 1985, Address: 0x1cdfd4, Func Offset: 0x214
	// Line 1986, Address: 0x1cdfdc, Func Offset: 0x21c
	// Line 1989, Address: 0x1cdfe4, Func Offset: 0x224
	// Line 1992, Address: 0x1cdfec, Func Offset: 0x22c
	// Line 1993, Address: 0x1ce03c, Func Offset: 0x27c
	// Line 2002, Address: 0x1ce040, Func Offset: 0x280
	// Line 2005, Address: 0x1ce04c, Func Offset: 0x28c
	// Line 2013, Address: 0x1ce060, Func Offset: 0x2a0
	// Line 2005, Address: 0x1ce070, Func Offset: 0x2b0
	// Line 2013, Address: 0x1ce08c, Func Offset: 0x2cc
	// Func End, Address: 0x1ce094, Func Offset: 0x2d4
}

// zSaveLoad_LoadGame__Fv
// Start address: 0x1ce0a0
int32 zSaveLoad_LoadGame()
{
	int32 use_tgt;
	en_XSGASYNC_STATUS asstat;
	int32 rc;
	int32 teststat;
	int32 success;
	// Line 1800, Address: 0x1ce0a0, Func Offset: 0
	// Line 1806, Address: 0x1ce0c0, Func Offset: 0x20
	// Line 1801, Address: 0x1ce0c4, Func Offset: 0x24
	// Line 1802, Address: 0x1ce0c8, Func Offset: 0x28
	// Line 1806, Address: 0x1ce0cc, Func Offset: 0x2c
	// Line 1808, Address: 0x1ce0d8, Func Offset: 0x38
	// Line 1811, Address: 0x1ce108, Func Offset: 0x68
	// Line 1814, Address: 0x1ce114, Func Offset: 0x74
	// Line 1816, Address: 0x1ce120, Func Offset: 0x80
	// Line 1822, Address: 0x1ce12c, Func Offset: 0x8c
	// Line 1825, Address: 0x1ce144, Func Offset: 0xa4
	// Line 1830, Address: 0x1ce160, Func Offset: 0xc0
	// Line 1833, Address: 0x1ce16c, Func Offset: 0xcc
	// Line 1835, Address: 0x1ce174, Func Offset: 0xd4
	// Line 1837, Address: 0x1ce180, Func Offset: 0xe0
	// Line 1839, Address: 0x1ce188, Func Offset: 0xe8
	// Line 1840, Address: 0x1ce194, Func Offset: 0xf4
	// Line 1842, Address: 0x1ce1ac, Func Offset: 0x10c
	// Line 1843, Address: 0x1ce1b4, Func Offset: 0x114
	// Line 1845, Address: 0x1ce1bc, Func Offset: 0x11c
	// Line 1867, Address: 0x1ce1ec, Func Offset: 0x14c
	// Line 1868, Address: 0x1ce1f4, Func Offset: 0x154
	// Line 1869, Address: 0x1ce1fc, Func Offset: 0x15c
	// Line 1873, Address: 0x1ce208, Func Offset: 0x168
	// Line 1875, Address: 0x1ce224, Func Offset: 0x184
	// Line 1877, Address: 0x1ce230, Func Offset: 0x190
	// Line 1878, Address: 0x1ce240, Func Offset: 0x1a0
	// Line 1883, Address: 0x1ce244, Func Offset: 0x1a4
	// Func End, Address: 0x1ce268, Func Offset: 0x1c8
}

// zSaveLoad_SaveGame__Fv
// Start address: 0x1ce270
int32 zSaveLoad_SaveGame()
{
	int8* area;
	int8 label[64];
	uint32 progress;
	int32 use_tgt;
	en_XSGASYNC_STATUS asstat;
	int32 rc;
	int32 teststat;
	int32 success;
	// Line 1677, Address: 0x1ce270, Func Offset: 0
	// Line 1687, Address: 0x1ce298, Func Offset: 0x28
	// Line 1678, Address: 0x1ce29c, Func Offset: 0x2c
	// Line 1679, Address: 0x1ce2a0, Func Offset: 0x30
	// Line 1687, Address: 0x1ce2a4, Func Offset: 0x34
	// Line 1689, Address: 0x1ce2b0, Func Offset: 0x40
	// Line 1692, Address: 0x1ce2e0, Func Offset: 0x70
	// Line 1694, Address: 0x1ce2ec, Func Offset: 0x7c
	// Line 1696, Address: 0x1ce2fc, Func Offset: 0x8c
	// Line 1701, Address: 0x1ce308, Func Offset: 0x98
	// Line 1703, Address: 0x1ce318, Func Offset: 0xa8
	// Line 1707, Address: 0x1ce33c, Func Offset: 0xcc
	// Line 1713, Address: 0x1ce360, Func Offset: 0xf0
	// Line 1717, Address: 0x1ce36c, Func Offset: 0xfc
	// Line 1719, Address: 0x1ce374, Func Offset: 0x104
	// Line 1720, Address: 0x1ce384, Func Offset: 0x114
	// Line 1733, Address: 0x1ce39c, Func Offset: 0x12c
	// Line 1735, Address: 0x1ce3b4, Func Offset: 0x144
	// Line 1738, Address: 0x1ce3c0, Func Offset: 0x150
	// Line 1739, Address: 0x1ce3c8, Func Offset: 0x158
	// Line 1740, Address: 0x1ce3d4, Func Offset: 0x164
	// Line 1743, Address: 0x1ce3ec, Func Offset: 0x17c
	// Line 1747, Address: 0x1ce3f8, Func Offset: 0x188
	// Line 1751, Address: 0x1ce404, Func Offset: 0x194
	// Line 1752, Address: 0x1ce40c, Func Offset: 0x19c
	// Line 1755, Address: 0x1ce414, Func Offset: 0x1a4
	// Line 1780, Address: 0x1ce444, Func Offset: 0x1d4
	// Line 1781, Address: 0x1ce44c, Func Offset: 0x1dc
	// Line 1782, Address: 0x1ce454, Func Offset: 0x1e4
	// Line 1787, Address: 0x1ce460, Func Offset: 0x1f0
	// Line 1789, Address: 0x1ce47c, Func Offset: 0x20c
	// Line 1791, Address: 0x1ce488, Func Offset: 0x218
	// Line 1792, Address: 0x1ce498, Func Offset: 0x228
	// Line 1796, Address: 0x1ce49c, Func Offset: 0x22c
	// Func End, Address: 0x1ce4c8, Func Offset: 0x258
}

// zSaveLoad_GameSelect__Fi
// Start address: 0x1ce4d0
int32 zSaveLoad_GameSelect(int32 mode)
{
	int32 i;
	int32 use_tgt;
	st_XSAVEGAME_DATA* svinst;
	int32 done;
	// Line 1500, Address: 0x1ce4d0, Func Offset: 0
	// Line 1504, Address: 0x1ce4fc, Func Offset: 0x2c
	// Line 1502, Address: 0x1ce528, Func Offset: 0x58
	// Line 1506, Address: 0x1ce538, Func Offset: 0x68
	// Line 1508, Address: 0x1ce540, Func Offset: 0x70
	// Line 1509, Address: 0x1ce544, Func Offset: 0x74
	// Line 1518, Address: 0x1ce548, Func Offset: 0x78
	// Line 1520, Address: 0x1ce554, Func Offset: 0x84
	// Line 1522, Address: 0x1ce560, Func Offset: 0x90
	// Line 1523, Address: 0x1ce578, Func Offset: 0xa8
	// Line 1526, Address: 0x1ce598, Func Offset: 0xc8
	// Line 1528, Address: 0x1ce5a0, Func Offset: 0xd0
	// Line 1531, Address: 0x1ce5a8, Func Offset: 0xd8
	// Line 1528, Address: 0x1ce5ac, Func Offset: 0xdc
	// Line 1531, Address: 0x1ce5b0, Func Offset: 0xe0
	// Line 1540, Address: 0x1ce5b8, Func Offset: 0xe8
	// Line 1542, Address: 0x1ce5cc, Func Offset: 0xfc
	// Line 1543, Address: 0x1ce5d8, Func Offset: 0x108
	// Line 1545, Address: 0x1ce5f0, Func Offset: 0x120
	// Line 1546, Address: 0x1ce600, Func Offset: 0x130
	// Line 1548, Address: 0x1ce610, Func Offset: 0x140
	// Line 1552, Address: 0x1ce618, Func Offset: 0x148
	// Line 1553, Address: 0x1ce630, Func Offset: 0x160
	// Line 1554, Address: 0x1ce648, Func Offset: 0x178
	// Line 1558, Address: 0x1ce658, Func Offset: 0x188
	// Line 1561, Address: 0x1ce664, Func Offset: 0x194
	// Line 1558, Address: 0x1ce668, Func Offset: 0x198
	// Line 1561, Address: 0x1ce670, Func Offset: 0x1a0
	// Line 1563, Address: 0x1ce67c, Func Offset: 0x1ac
	// Line 1565, Address: 0x1ce688, Func Offset: 0x1b8
	// Line 1566, Address: 0x1ce6a0, Func Offset: 0x1d0
	// Line 1569, Address: 0x1ce6a8, Func Offset: 0x1d8
	// Line 1570, Address: 0x1ce6c0, Func Offset: 0x1f0
	// Line 1573, Address: 0x1ce6d8, Func Offset: 0x208
	// Line 1576, Address: 0x1ce6dc, Func Offset: 0x20c
	// Line 1579, Address: 0x1ce6e4, Func Offset: 0x214
	// Line 1580, Address: 0x1ce6ec, Func Offset: 0x21c
	// Line 1584, Address: 0x1ce728, Func Offset: 0x258
	// Line 1585, Address: 0x1ce738, Func Offset: 0x268
	// Line 1588, Address: 0x1ce740, Func Offset: 0x270
	// Line 1590, Address: 0x1ce750, Func Offset: 0x280
	// Line 1591, Address: 0x1ce7b8, Func Offset: 0x2e8
	// Line 1594, Address: 0x1ce7c4, Func Offset: 0x2f4
	// Line 1596, Address: 0x1ce7cc, Func Offset: 0x2fc
	// Line 1597, Address: 0x1ce880, Func Offset: 0x3b0
	// Line 1599, Address: 0x1ce88c, Func Offset: 0x3bc
	// Line 1603, Address: 0x1ce8ac, Func Offset: 0x3dc
	// Line 1602, Address: 0x1ce8b0, Func Offset: 0x3e0
	// Line 1604, Address: 0x1ce8b4, Func Offset: 0x3e4
	// Line 1606, Address: 0x1ce8bc, Func Offset: 0x3ec
	// Line 1610, Address: 0x1ce8c0, Func Offset: 0x3f0
	// Line 1613, Address: 0x1ce8c8, Func Offset: 0x3f8
	// Line 1614, Address: 0x1ce8ec, Func Offset: 0x41c
	// Line 1616, Address: 0x1ce8f8, Func Offset: 0x428
	// Line 1621, Address: 0x1ce924, Func Offset: 0x454
	// Line 1620, Address: 0x1ce928, Func Offset: 0x458
	// Line 1622, Address: 0x1ce92c, Func Offset: 0x45c
	// Line 1624, Address: 0x1ce934, Func Offset: 0x464
	// Line 1628, Address: 0x1ce938, Func Offset: 0x468
	// Line 1631, Address: 0x1ce940, Func Offset: 0x470
	// Line 1633, Address: 0x1ce94c, Func Offset: 0x47c
	// Line 1634, Address: 0x1ce974, Func Offset: 0x4a4
	// Line 1636, Address: 0x1ce980, Func Offset: 0x4b0
	// Line 1640, Address: 0x1ce9a0, Func Offset: 0x4d0
	// Line 1639, Address: 0x1ce9a4, Func Offset: 0x4d4
	// Line 1641, Address: 0x1ce9a8, Func Offset: 0x4d8
	// Line 1643, Address: 0x1ce9b0, Func Offset: 0x4e0
	// Line 1650, Address: 0x1ce9b4, Func Offset: 0x4e4
	// Line 1654, Address: 0x1ce9bc, Func Offset: 0x4ec
	// Line 1653, Address: 0x1ce9c0, Func Offset: 0x4f0
	// Line 1654, Address: 0x1ce9c4, Func Offset: 0x4f4
	// Line 1663, Address: 0x1ce9c8, Func Offset: 0x4f8
	// Line 1665, Address: 0x1ce9e0, Func Offset: 0x510
	// Line 1667, Address: 0x1ce9ec, Func Offset: 0x51c
	// Line 1668, Address: 0x1ce9f8, Func Offset: 0x528
	// Line 1670, Address: 0x1cea10, Func Offset: 0x540
	// Line 1672, Address: 0x1cea48, Func Offset: 0x578
	// Line 1674, Address: 0x1cea4c, Func Offset: 0x57c
	// Func End, Address: 0x1cea7c, Func Offset: 0x5ac
}

// zSaveLoad_BuildName__FPci
// Start address: 0x1cea80
void zSaveLoad_BuildName(int8* name_txt, int32 idx)
{
	int32 i;
	int32 counter;
	int8 current_name[64];
	int8 desired[64];
	// Line 1465, Address: 0x1cea80, Func Offset: 0
	// Line 1472, Address: 0x1cea88, Func Offset: 0x8
	// Line 1465, Address: 0x1cea8c, Func Offset: 0xc
	// Line 1472, Address: 0x1cea90, Func Offset: 0x10
	// Line 1465, Address: 0x1cea94, Func Offset: 0x14
	// Line 1472, Address: 0x1cea98, Func Offset: 0x18
	// Line 1465, Address: 0x1cea9c, Func Offset: 0x1c
	// Line 1472, Address: 0x1ceaa4, Func Offset: 0x24
	// Line 1465, Address: 0x1ceab0, Func Offset: 0x30
	// Line 1472, Address: 0x1ceab4, Func Offset: 0x34
	// Line 1475, Address: 0x1ceb24, Func Offset: 0xa4
	// Line 1474, Address: 0x1ceb28, Func Offset: 0xa8
	// Line 1475, Address: 0x1ceb2c, Func Offset: 0xac
	// Line 1477, Address: 0x1ceb34, Func Offset: 0xb4
	// Line 1479, Address: 0x1ceb8c, Func Offset: 0x10c
	// Line 1483, Address: 0x1ceba0, Func Offset: 0x120
	// Line 1484, Address: 0x1ceba4, Func Offset: 0x124
	// Line 1485, Address: 0x1ceba8, Func Offset: 0x128
	// Line 1487, Address: 0x1cebb8, Func Offset: 0x138
	// Line 1490, Address: 0x1cebc0, Func Offset: 0x140
	// Line 1491, Address: 0x1cebdc, Func Offset: 0x15c
	// Line 1495, Address: 0x1cebe4, Func Offset: 0x164
	// Line 1497, Address: 0x1cebec, Func Offset: 0x16c
	// Func End, Address: 0x1cec0c, Func Offset: 0x18c
}

// zSaveLoad_CardPick__Fi
// Start address: 0x1cec10
int32 zSaveLoad_CardPick(int32 mode)
{
	int32 done;
	// Line 1359, Address: 0x1cec10, Func Offset: 0
	// Line 1362, Address: 0x1cec38, Func Offset: 0x28
	// Line 1363, Address: 0x1cec48, Func Offset: 0x38
	// Line 1366, Address: 0x1cec4c, Func Offset: 0x3c
	// Line 1361, Address: 0x1cec50, Func Offset: 0x40
	// Line 1366, Address: 0x1cec54, Func Offset: 0x44
	// Line 1367, Address: 0x1cec94, Func Offset: 0x84
	// Line 1370, Address: 0x1ceccc, Func Offset: 0xbc
	// Line 1373, Address: 0x1cecd4, Func Offset: 0xc4
	// Line 1375, Address: 0x1cece4, Func Offset: 0xd4
	// Line 1376, Address: 0x1ced48, Func Offset: 0x138
	// Line 1379, Address: 0x1ced68, Func Offset: 0x158
	// Line 1381, Address: 0x1ced70, Func Offset: 0x160
	// Line 1385, Address: 0x1ced78, Func Offset: 0x168
	// Line 1384, Address: 0x1ced7c, Func Offset: 0x16c
	// Line 1386, Address: 0x1ced80, Func Offset: 0x170
	// Line 1389, Address: 0x1ced88, Func Offset: 0x178
	// Line 1390, Address: 0x1cee38, Func Offset: 0x228
	// Line 1395, Address: 0x1cee78, Func Offset: 0x268
	// Line 1394, Address: 0x1cee7c, Func Offset: 0x26c
	// Line 1396, Address: 0x1cee80, Func Offset: 0x270
	// Line 1400, Address: 0x1cee88, Func Offset: 0x278
	// Line 1402, Address: 0x1cee90, Func Offset: 0x280
	// Line 1406, Address: 0x1cee98, Func Offset: 0x288
	// Line 1405, Address: 0x1cee9c, Func Offset: 0x28c
	// Line 1407, Address: 0x1ceea0, Func Offset: 0x290
	// Line 1410, Address: 0x1ceea8, Func Offset: 0x298
	// Line 1411, Address: 0x1ceed0, Func Offset: 0x2c0
	// Line 1416, Address: 0x1cef10, Func Offset: 0x300
	// Line 1415, Address: 0x1cef14, Func Offset: 0x304
	// Line 1417, Address: 0x1cef18, Func Offset: 0x308
	// Line 1421, Address: 0x1cef20, Func Offset: 0x310
	// Line 1422, Address: 0x1cef24, Func Offset: 0x314
	// Line 1424, Address: 0x1cef30, Func Offset: 0x320
	// Line 1427, Address: 0x1cef38, Func Offset: 0x328
	// Line 1426, Address: 0x1cef3c, Func Offset: 0x32c
	// Line 1428, Address: 0x1cef40, Func Offset: 0x330
	// Line 1435, Address: 0x1cef48, Func Offset: 0x338
	// Line 1436, Address: 0x1cef50, Func Offset: 0x340
	// Line 1439, Address: 0x1cef68, Func Offset: 0x358
	// Line 1441, Address: 0x1cef98, Func Offset: 0x388
	// Line 1443, Address: 0x1cefac, Func Offset: 0x39c
	// Line 1447, Address: 0x1cefc4, Func Offset: 0x3b4
	// Func End, Address: 0x1ceff0, Func Offset: 0x3e0
}

// zSaveLoad_CardCheckSlotOverwrite__Fii
// Start address: 0x1ceff0
int32 zSaveLoad_CardCheckSlotOverwrite(int32 cardNumber, int32 gameNumber)
{
	// Line 1334, Address: 0x1ceff0, Func Offset: 0
	// Line 1337, Address: 0x1cf004, Func Offset: 0x14
	// Line 1339, Address: 0x1cf00c, Func Offset: 0x1c
	// Line 1340, Address: 0x1cf068, Func Offset: 0x78
	// Line 1343, Address: 0x1cf070, Func Offset: 0x80
	// Line 1344, Address: 0x1cf0e8, Func Offset: 0xf8
	// Line 1346, Address: 0x1cf100, Func Offset: 0x110
	// Line 1353, Address: 0x1cf10c, Func Offset: 0x11c
	// Line 1354, Address: 0x1cf164, Func Offset: 0x174
	// Line 1356, Address: 0x1cf168, Func Offset: 0x178
	// Func End, Address: 0x1cf17c, Func Offset: 0x18c
}

// zSaveLoad_CardCheckSlotEmpty__Fii
// Start address: 0x1cf180
int32 zSaveLoad_CardCheckSlotEmpty(int32 cardNumber, int32 gameNumber)
{
	// Line 1314, Address: 0x1cf180, Func Offset: 0
	// Line 1316, Address: 0x1cf19c, Func Offset: 0x1c
	// Line 1318, Address: 0x1cf1bc, Func Offset: 0x3c
	// Line 1319, Address: 0x1cf1d4, Func Offset: 0x54
	// Line 1322, Address: 0x1cf1dc, Func Offset: 0x5c
	// Line 1323, Address: 0x1cf240, Func Offset: 0xc0
	// Line 1325, Address: 0x1cf258, Func Offset: 0xd8
	// Line 1327, Address: 0x1cf264, Func Offset: 0xe4
	// Line 1329, Address: 0x1cf278, Func Offset: 0xf8
	// Line 1330, Address: 0x1cf27c, Func Offset: 0xfc
	// Func End, Address: 0x1cf298, Func Offset: 0x118
}

// zSaveLoad_CardCheckGames__Fii
// Start address: 0x1cf2a0
int32 zSaveLoad_CardCheckGames(int32 cardNumber, int32 mode)
{
	int32 tmp;
	// Line 1280, Address: 0x1cf2a0, Func Offset: 0
	// Line 1282, Address: 0x1cf2cc, Func Offset: 0x2c
	// Line 1284, Address: 0x1cf2fc, Func Offset: 0x5c
	// Line 1286, Address: 0x1cf304, Func Offset: 0x64
	// Line 1287, Address: 0x1cf30c, Func Offset: 0x6c
	// Line 1288, Address: 0x1cf330, Func Offset: 0x90
	// Line 1293, Address: 0x1cf338, Func Offset: 0x98
	// Line 1294, Address: 0x1cf420, Func Offset: 0x180
	// Line 1297, Address: 0x1cf438, Func Offset: 0x198
	// Line 1300, Address: 0x1cf444, Func Offset: 0x1a4
	// Line 1301, Address: 0x1cf460, Func Offset: 0x1c0
	// Line 1302, Address: 0x1cf464, Func Offset: 0x1c4
	// Func End, Address: 0x1cf490, Func Offset: 0x1f0
}

// zSaveLoad_CardCheckSpace__Fii
// Start address: 0x1cf490
int32 zSaveLoad_CardCheckSpace(int32 cardNumber, int32 mode)
{
	int32 tmp;
	// Line 1257, Address: 0x1cf490, Func Offset: 0
	// Line 1259, Address: 0x1cf4bc, Func Offset: 0x2c
	// Line 1261, Address: 0x1cf4ec, Func Offset: 0x5c
	// Line 1263, Address: 0x1cf4f4, Func Offset: 0x64
	// Line 1264, Address: 0x1cf4fc, Func Offset: 0x6c
	// Line 1265, Address: 0x1cf520, Func Offset: 0x90
	// Line 1270, Address: 0x1cf528, Func Offset: 0x98
	// Line 1271, Address: 0x1cf610, Func Offset: 0x180
	// Line 1273, Address: 0x1cf628, Func Offset: 0x198
	// Line 1275, Address: 0x1cf634, Func Offset: 0x1a4
	// Line 1276, Address: 0x1cf650, Func Offset: 0x1c0
	// Line 1277, Address: 0x1cf654, Func Offset: 0x1c4
	// Func End, Address: 0x1cf680, Func Offset: 0x1f0
}

// zSaveLoad_CardCheckSlotEmpty_hasGame__Fii
// Start address: 0x1cf680
int32 zSaveLoad_CardCheckSlotEmpty_hasGame(int32 num, int32 game)
{
	int32 tgtslot;
	int32 rc;
	int32 tgtmax;
	int32 tgtcnt;
	st_XSAVEGAME_DATA* ldinst;
	// Line 1113, Address: 0x1cf680, Func Offset: 0
	// Line 1117, Address: 0x1cf69c, Func Offset: 0x1c
	// Line 1126, Address: 0x1cf6ac, Func Offset: 0x2c
	// Line 1130, Address: 0x1cf6bc, Func Offset: 0x3c
	// Line 1136, Address: 0x1cf6e4, Func Offset: 0x64
	// Line 1138, Address: 0x1cf72c, Func Offset: 0xac
	// Line 1141, Address: 0x1cf734, Func Offset: 0xb4
	// Line 1147, Address: 0x1cf73c, Func Offset: 0xbc
	// Line 1149, Address: 0x1cf744, Func Offset: 0xc4
	// Line 1150, Address: 0x1cf74c, Func Offset: 0xcc
	// Line 1152, Address: 0x1cf750, Func Offset: 0xd0
	// Line 1154, Address: 0x1cf75c, Func Offset: 0xdc
	// Line 1164, Address: 0x1cf7a8, Func Offset: 0x128
	// Line 1165, Address: 0x1cf7b4, Func Offset: 0x134
	// Line 1168, Address: 0x1cf7b8, Func Offset: 0x138
	// Func End, Address: 0x1cf7d4, Func Offset: 0x154
}

// zSaveLoad_CardCheckGamesSingle__Fi
// Start address: 0x1cf7e0
int32 zSaveLoad_CardCheckGamesSingle(int32 num)
{
	int32 tgtslot;
	int32 rc;
	int32 tgtmax;
	int32 tgtcnt;
	st_XSAVEGAME_DATA* ldinst;
	// Line 1037, Address: 0x1cf7e0, Func Offset: 0
	// Line 1042, Address: 0x1cf7f4, Func Offset: 0x14
	// Line 1051, Address: 0x1cf804, Func Offset: 0x24
	// Line 1055, Address: 0x1cf814, Func Offset: 0x34
	// Line 1060, Address: 0x1cf83c, Func Offset: 0x5c
	// Line 1062, Address: 0x1cf874, Func Offset: 0x94
	// Line 1065, Address: 0x1cf87c, Func Offset: 0x9c
	// Line 1071, Address: 0x1cf884, Func Offset: 0xa4
	// Line 1073, Address: 0x1cf88c, Func Offset: 0xac
	// Line 1074, Address: 0x1cf894, Func Offset: 0xb4
	// Line 1076, Address: 0x1cf898, Func Offset: 0xb8
	// Line 1078, Address: 0x1cf8a4, Func Offset: 0xc4
	// Line 1088, Address: 0x1cf8e0, Func Offset: 0x100
	// Line 1089, Address: 0x1cf8ec, Func Offset: 0x10c
	// Line 1090, Address: 0x1cf8f0, Func Offset: 0x110
	// Func End, Address: 0x1cf908, Func Offset: 0x128
}

// zSaveLoad_CardCheckSpaceSingle__Fi
// Start address: 0x1cf910
int32 zSaveLoad_CardCheckSpaceSingle(int32 num)
{
	int32 tgtslot;
	int32 rc;
	int32 tgtmax;
	int32 tgtcnt;
	st_XSAVEGAME_DATA* ldinst;
	// Line 959, Address: 0x1cf910, Func Offset: 0
	// Line 964, Address: 0x1cf924, Func Offset: 0x14
	// Line 973, Address: 0x1cf934, Func Offset: 0x24
	// Line 977, Address: 0x1cf944, Func Offset: 0x34
	// Line 983, Address: 0x1cf96c, Func Offset: 0x5c
	// Line 984, Address: 0x1cf978, Func Offset: 0x68
	// Line 988, Address: 0x1cf980, Func Offset: 0x70
	// Line 994, Address: 0x1cf988, Func Offset: 0x78
	// Line 996, Address: 0x1cf990, Func Offset: 0x80
	// Line 997, Address: 0x1cf998, Func Offset: 0x88
	// Line 999, Address: 0x1cf99c, Func Offset: 0x8c
	// Line 1001, Address: 0x1cf9a8, Func Offset: 0x98
	// Line 1011, Address: 0x1cf9b4, Func Offset: 0xa4
	// Line 1012, Address: 0x1cf9c0, Func Offset: 0xb0
	// Line 1014, Address: 0x1cf9c4, Func Offset: 0xb4
	// Func End, Address: 0x1cf9dc, Func Offset: 0xcc
}

// zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi
// Start address: 0x1cf9e0
int32 zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int32 num)
{
	int32 rc;
	// Line 912, Address: 0x1cf9e0, Func Offset: 0
	// Line 915, Address: 0x1cf9f4, Func Offset: 0x14
	// Line 917, Address: 0x1cf9fc, Func Offset: 0x1c
	// Line 919, Address: 0x1cfa0c, Func Offset: 0x2c
	// Line 921, Address: 0x1cfa14, Func Offset: 0x34
	// Line 948, Address: 0x1cfa20, Func Offset: 0x40
	// Line 953, Address: 0x1cfa68, Func Offset: 0x88
	// Line 956, Address: 0x1cfa74, Func Offset: 0x94
	// Func End, Address: 0x1cfa88, Func Offset: 0xa8
}

// zSaveLoad_CardCheckFormattedSingle__Fi
// Start address: 0x1cfa90
int32 zSaveLoad_CardCheckFormattedSingle(int32 num)
{
	int32 tgtslot;
	int32 rc;
	int32 tgtmax;
	int32 tgtcnt;
	st_XSAVEGAME_DATA* ldinst;
	// Line 833, Address: 0x1cfa90, Func Offset: 0
	// Line 837, Address: 0x1cfaa4, Func Offset: 0x14
	// Line 846, Address: 0x1cfab4, Func Offset: 0x24
	// Line 850, Address: 0x1cfac4, Func Offset: 0x34
	// Line 856, Address: 0x1cfaec, Func Offset: 0x5c
	// Line 860, Address: 0x1cfaf8, Func Offset: 0x68
	// Line 861, Address: 0x1cfb00, Func Offset: 0x70
	// Line 863, Address: 0x1cfb04, Func Offset: 0x74
	// Line 866, Address: 0x1cfb0c, Func Offset: 0x7c
	// Line 875, Address: 0x1cfb14, Func Offset: 0x84
	// Line 878, Address: 0x1cfb1c, Func Offset: 0x8c
	// Line 882, Address: 0x1cfb24, Func Offset: 0x94
	// Line 885, Address: 0x1cfb2c, Func Offset: 0x9c
	// Line 888, Address: 0x1cfb34, Func Offset: 0xa4
	// Line 892, Address: 0x1cfb3c, Func Offset: 0xac
	// Line 893, Address: 0x1cfb44, Func Offset: 0xb4
	// Line 907, Address: 0x1cfb4c, Func Offset: 0xbc
	// Line 908, Address: 0x1cfb58, Func Offset: 0xc8
	// Line 909, Address: 0x1cfb5c, Func Offset: 0xcc
	// Func End, Address: 0x1cfb74, Func Offset: 0xe4
}

// zSaveLoad_CardCheckSingle__Fi
// Start address: 0x1cfb80
int32 zSaveLoad_CardCheckSingle(int32 num)
{
	int32 tgtslot;
	int32 tgtmax;
	int32 tgtcnt;
	st_XSAVEGAME_DATA* ldinst;
	// Line 779, Address: 0x1cfb80, Func Offset: 0
	// Line 781, Address: 0x1cfb94, Func Offset: 0x14
	// Line 790, Address: 0x1cfba4, Func Offset: 0x24
	// Line 794, Address: 0x1cfbb0, Func Offset: 0x30
	// Line 800, Address: 0x1cfbd8, Func Offset: 0x58
	// Line 801, Address: 0x1cfbe0, Func Offset: 0x60
	// Line 809, Address: 0x1cfbe8, Func Offset: 0x68
	// Line 811, Address: 0x1cfbf4, Func Offset: 0x74
	// Line 814, Address: 0x1cfbfc, Func Offset: 0x7c
	// Line 823, Address: 0x1cfc08, Func Offset: 0x88
	// Line 824, Address: 0x1cfc10, Func Offset: 0x90
	// Line 831, Address: 0x1cfc14, Func Offset: 0x94
	// Func End, Address: 0x1cfc2c, Func Offset: 0xac
}

// zSaveLoad_CardPromptFormat__Fi
// Start address: 0x1cfc30
int32 zSaveLoad_CardPromptFormat(int32 mode)
{
	// Line 642, Address: 0x1cfc30, Func Offset: 0
	// Line 643, Address: 0x1cfc50, Func Offset: 0x20
	// Line 646, Address: 0x1cfc94, Func Offset: 0x64
	// Line 647, Address: 0x1cfcc4, Func Offset: 0x94
	// Line 648, Address: 0x1cfcf8, Func Offset: 0xc8
	// Line 649, Address: 0x1cfd0c, Func Offset: 0xdc
	// Line 652, Address: 0x1cfd14, Func Offset: 0xe4
	// Line 653, Address: 0x1cfd1c, Func Offset: 0xec
	// Line 655, Address: 0x1cfd58, Func Offset: 0x128
	// Line 657, Address: 0x1cfd68, Func Offset: 0x138
	// Line 659, Address: 0x1cfd98, Func Offset: 0x168
	// Line 660, Address: 0x1cfd9c, Func Offset: 0x16c
	// Func End, Address: 0x1cfdc0, Func Offset: 0x190
}

// zSaveLoad_CardPrompt__Fi
// Start address: 0x1cfdc0
int32 zSaveLoad_CardPrompt(int32 mode)
{
	// Line 616, Address: 0x1cfdc0, Func Offset: 0
	// Line 617, Address: 0x1cfdd4, Func Offset: 0x14
	// Line 619, Address: 0x1cfe18, Func Offset: 0x58
	// Line 622, Address: 0x1cfe4c, Func Offset: 0x8c
	// Line 623, Address: 0x1cfe80, Func Offset: 0xc0
	// Line 624, Address: 0x1cfeb0, Func Offset: 0xf0
	// Line 625, Address: 0x1cfeb8, Func Offset: 0xf8
	// Line 628, Address: 0x1cfec0, Func Offset: 0x100
	// Line 630, Address: 0x1cfec8, Func Offset: 0x108
	// Line 633, Address: 0x1cfee0, Func Offset: 0x120
	// Line 635, Address: 0x1cff14, Func Offset: 0x154
	// Line 636, Address: 0x1cff20, Func Offset: 0x160
	// Line 638, Address: 0x1cff34, Func Offset: 0x174
	// Line 639, Address: 0x1cff38, Func Offset: 0x178
	// Func End, Address: 0x1cff50, Func Offset: 0x190
}

// CardtoTgt__Fi
// Start address: 0x1cff50
int32 CardtoTgt(int32 card)
{
	int32 tgtmax;
	int32 tgtcnt;
	st_XSAVEGAME_DATA* ldinst;
	// Line 546, Address: 0x1cff50, Func Offset: 0
	// Line 548, Address: 0x1cff60, Func Offset: 0x10
	// Line 556, Address: 0x1cff70, Func Offset: 0x20
	// Line 559, Address: 0x1cff7c, Func Offset: 0x2c
	// Line 565, Address: 0x1cffa4, Func Offset: 0x54
	// Line 566, Address: 0x1cffac, Func Offset: 0x5c
	// Line 573, Address: 0x1cffb4, Func Offset: 0x64
	// Line 574, Address: 0x1cffbc, Func Offset: 0x6c
	// Line 581, Address: 0x1cffc4, Func Offset: 0x74
	// Line 582, Address: 0x1cffcc, Func Offset: 0x7c
	// Line 589, Address: 0x1cffd0, Func Offset: 0x80
	// Func End, Address: 0x1cffe4, Func Offset: 0x94
}

// format__Fii
// Start address: 0x1cfff0
int32 format(int32 num, int32 mode)
{
	int32 tgtslot;
	int32 rc;
	int32 tgtmax;
	int32 tgtcnt;
	// Line 415, Address: 0x1cfff0, Func Offset: 0
	// Line 418, Address: 0x1d0008, Func Offset: 0x18
	// Line 415, Address: 0x1d000c, Func Offset: 0x1c
	// Line 418, Address: 0x1d0014, Func Offset: 0x24
	// Line 426, Address: 0x1d0044, Func Offset: 0x54
	// Line 429, Address: 0x1d0054, Func Offset: 0x64
	// Line 435, Address: 0x1d0078, Func Offset: 0x88
	// Line 436, Address: 0x1d0080, Func Offset: 0x90
	// Line 439, Address: 0x1d008c, Func Offset: 0x9c
	// Line 441, Address: 0x1d00ac, Func Offset: 0xbc
	// Line 442, Address: 0x1d00b4, Func Offset: 0xc4
	// Line 444, Address: 0x1d014c, Func Offset: 0x15c
	// Line 447, Address: 0x1d0154, Func Offset: 0x164
	// Line 453, Address: 0x1d015c, Func Offset: 0x16c
	// Line 456, Address: 0x1d0164, Func Offset: 0x174
	// Line 459, Address: 0x1d016c, Func Offset: 0x17c
	// Line 461, Address: 0x1d0188, Func Offset: 0x198
	// Line 464, Address: 0x1d0190, Func Offset: 0x1a0
	// Line 467, Address: 0x1d01bc, Func Offset: 0x1cc
	// Line 468, Address: 0x1d01c4, Func Offset: 0x1d4
	// Line 471, Address: 0x1d01d0, Func Offset: 0x1e0
	// Line 473, Address: 0x1d01f0, Func Offset: 0x200
	// Line 474, Address: 0x1d01f8, Func Offset: 0x208
	// Line 478, Address: 0x1d028c, Func Offset: 0x29c
	// Line 488, Address: 0x1d0294, Func Offset: 0x2a4
	// Line 493, Address: 0x1d02b4, Func Offset: 0x2c4
	// Line 495, Address: 0x1d02b8, Func Offset: 0x2c8
	// Func End, Address: 0x1d02d8, Func Offset: 0x2e8
}

// zSaveLoad_getMCneeded__Fv
// Start address: 0x1d02e0
int32 zSaveLoad_getMCneeded()
{
	// Line 407, Address: 0x1d02e0, Func Offset: 0
	// Func End, Address: 0x1d02e8, Func Offset: 0x8
}

// zSaveLoad_getMCavailable__Fv
// Start address: 0x1d02f0
int32 zSaveLoad_getMCavailable()
{
	// Line 403, Address: 0x1d02f0, Func Offset: 0
	// Func End, Address: 0x1d02f8, Func Offset: 0x8
}

// zSaveLoad_getcard__Fv
// Start address: 0x1d0300
int32 zSaveLoad_getcard()
{
	// Line 399, Address: 0x1d0300, Func Offset: 0
	// Func End, Address: 0x1d0308, Func Offset: 0x8
}

// zSaveLoad_getgame__Fv
// Start address: 0x1d0310
int32 zSaveLoad_getgame()
{
	// Line 395, Address: 0x1d0310, Func Offset: 0
	// Func End, Address: 0x1d0318, Func Offset: 0x8
}

// zSaveLoad_Tick__Fv
// Start address: 0x1d0320
void zSaveLoad_Tick()
{
	// Line 235, Address: 0x1d0320, Func Offset: 0
	// Line 242, Address: 0x1d032c, Func Offset: 0xc
	// Line 243, Address: 0x1d0348, Func Offset: 0x28
	// Line 242, Address: 0x1d034c, Func Offset: 0x2c
	// Line 243, Address: 0x1d0354, Func Offset: 0x34
	// Line 242, Address: 0x1d0358, Func Offset: 0x38
	// Line 243, Address: 0x1d035c, Func Offset: 0x3c
	// Line 245, Address: 0x1d0360, Func Offset: 0x40
	// Line 243, Address: 0x1d0368, Func Offset: 0x48
	// Line 245, Address: 0x1d036c, Func Offset: 0x4c
	// Line 247, Address: 0x1d037c, Func Offset: 0x5c
	// Line 257, Address: 0x1d0388, Func Offset: 0x68
	// Line 261, Address: 0x1d0390, Func Offset: 0x70
	// Line 257, Address: 0x1d0394, Func Offset: 0x74
	// Line 259, Address: 0x1d039c, Func Offset: 0x7c
	// Line 261, Address: 0x1d03a0, Func Offset: 0x80
	// Line 262, Address: 0x1d03a4, Func Offset: 0x84
	// Line 267, Address: 0x1d03b0, Func Offset: 0x90
	// Line 268, Address: 0x1d03bc, Func Offset: 0x9c
	// Line 271, Address: 0x1d03dc, Func Offset: 0xbc
	// Line 273, Address: 0x1d03e4, Func Offset: 0xc4
	// Line 275, Address: 0x1d03ec, Func Offset: 0xcc
	// Line 280, Address: 0x1d03f4, Func Offset: 0xd4
	// Line 285, Address: 0x1d0410, Func Offset: 0xf0
	// Line 286, Address: 0x1d0420, Func Offset: 0x100
	// Line 290, Address: 0x1d0428, Func Offset: 0x108
	// Line 291, Address: 0x1d0434, Func Offset: 0x114
	// Line 294, Address: 0x1d0440, Func Offset: 0x120
	// Line 300, Address: 0x1d0448, Func Offset: 0x128
	// Line 305, Address: 0x1d0450, Func Offset: 0x130
	// Line 307, Address: 0x1d0458, Func Offset: 0x138
	// Line 308, Address: 0x1d0464, Func Offset: 0x144
	// Line 310, Address: 0x1d046c, Func Offset: 0x14c
	// Line 311, Address: 0x1d047c, Func Offset: 0x15c
	// Line 313, Address: 0x1d0484, Func Offset: 0x164
	// Line 315, Address: 0x1d048c, Func Offset: 0x16c
	// Line 317, Address: 0x1d0498, Func Offset: 0x178
	// Func End, Address: 0x1d04ac, Func Offset: 0x18c
}

