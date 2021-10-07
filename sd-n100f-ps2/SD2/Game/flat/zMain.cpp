typedef struct _xEnt;
typedef struct xAnimPlay;
typedef struct RwCamera;
typedef struct _zPortal;
typedef struct _xQuat;
typedef struct RwV3d;
typedef struct zPortalAsset;
typedef enum RpWorldRenderOrder;
typedef struct _xEnv;
typedef struct RwTexDictionary;
typedef struct RwRGBA;
typedef struct rxHeapFreeBlock;
typedef struct RpClump;
typedef struct RxPipelineNode;
typedef struct xAnimFile;
typedef struct _xVec3;
typedef struct RwPlane;
typedef struct RwResEntry;
typedef struct xAnimSingle;
typedef struct xAnimEffect;
typedef struct _zEnt;
typedef struct _xMat4x3;
typedef struct RwLinkList;
typedef struct RwFrustumPlane;
typedef struct zPlayerGlobals;
typedef struct xModelPool;
typedef struct xSurface;
typedef struct _tagxCamPath;
typedef struct xAnimTransitionList;
typedef struct RxNodeDefinition;
typedef struct _xVec4;
typedef struct _tagp2CamStaticAsset;
typedef struct RwBBox;
typedef struct RxPacket;
typedef struct xAnimTable;
typedef struct _tagxCam;
typedef struct RxClusterDefinition;
typedef struct _xEntShadow;
typedef enum _tagPadState;
typedef struct xModelInstance;
typedef struct zCutsceneZbufferHack;
typedef struct RpCollSector;
typedef enum RxClusterValid;
typedef struct RpWorldSector;
typedef struct RxPipelineCluster;
typedef struct RpMeshHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct xIniValue;
typedef struct _tagiPad;
typedef struct xCutsceneData;
typedef struct _zHipDepend;
typedef struct RxPipeline;
typedef enum RwFogType;
typedef struct rxReq;
typedef struct _xRot;
typedef struct xFontBox;
typedef struct zScene;
typedef struct RwTexCoords;
typedef struct RwTexture;
typedef struct iShadowCache;
typedef struct xMemPool;
typedef struct RpWorld;
typedef struct RpGeometry;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwRaster;
typedef struct xAnimActiveEffect;
typedef struct RxOutputSpec;
typedef struct tag_iFile;
typedef enum RxClusterForcePresent;
typedef struct _tagCamInfo;
typedef struct RpAtomic;
typedef struct p2EntAsset;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagPadAnalog;
typedef struct p2LinkAsset;
typedef struct RpMorphTarget;
typedef struct _zCutsceneMgr;
typedef struct RwFrame;
typedef struct zShaggy1Globals;
typedef struct RxClusterRef;
typedef struct xBase;
typedef enum RxNodeDefEditable;
typedef struct RpSector;
typedef struct xIniSection;
typedef struct RpVertexNormal;
typedef struct RpMaterialList;
typedef struct _tagxPad;
typedef struct zCutsceneMgrAsset;
typedef struct tag_xFile;
typedef struct xCutscene;
typedef struct _tagxCamFollow;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RxIoSpec;
typedef struct sceCdlFILE;
typedef struct zCheckPoint;
typedef struct RpMaterial;
typedef struct RwLLLink;
typedef struct _xEntFrame;
typedef struct _tagxRumble;
typedef struct xAnimTransition;
typedef struct RxNodeMethods;
typedef struct xAnimState;
typedef struct zGlobalGameStats;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _zEntHangable;
typedef struct RwSurfaceProperties;
typedef struct _tagxCamPathAsset;
typedef struct RpLight;
typedef struct p2EntHangableAsset;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct xIniFile;
typedef struct _xSphere;
typedef struct RpTriangle;
typedef struct RpPolygon;
typedef struct _xEntCollis;
typedef struct xCutsceneBreak;
typedef struct RxCluster;
typedef struct zJumpParam;
typedef struct rxHeapBlockHeader;
typedef struct xCutsceneTime;
typedef struct _xEntDrive;
typedef enum RxClusterValidityReq;
typedef struct RwSphere;
typedef struct _xCylinder;
typedef struct iEnv;
typedef struct _tagxCamShoulder;
typedef struct zGlobals;
typedef enum rxEmbeddedPacketState;
typedef struct _xCollis;
typedef enum _tagRumbleType;
typedef enum RwTextureAddressMode;
typedef struct _xBox;
typedef struct _tagxCamFollowAsset;
typedef struct xCamAsset;
typedef struct zAssetPickupTable;
typedef enum RwCameraProjection;
typedef enum _tagCamType;
typedef struct RxPipelineNodeParam;
typedef struct zPlayerStatic;
typedef struct RwObjectHasFrame;
typedef struct xCutsceneInfo;
typedef struct iFogParams;
typedef struct p2BaseAsset;
typedef struct iColor_tag;
typedef struct _tagxCamStatic;
typedef struct RpInterpolator;
typedef struct _zPlatform;
typedef struct iModelTag;
typedef struct RwRGBAReal;
typedef struct xQCData;
typedef struct _tagxCamFrame;
typedef struct xFFX;
typedef struct RwV2d;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct _xBBox;
typedef struct _tagxCamStaticFollow;
typedef struct st_SERIAL_PERCID_SIZE;
typedef struct zCutsceneZbuffer;
typedef struct _iCollis;
typedef enum RwTextureFilterMode;
typedef struct RwObject;

typedef uint32(*type_8)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_9)(RwCamera*);
typedef int32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_14)(uint32);
typedef RpClump*(*type_15)(RpClump*, void*);
typedef int32(*type_16)(RxNodeDefinition*);
typedef void(*type_17)();
typedef int8*(*type_18)(xBase*);
typedef void(*type_19)(RxNodeDefinition*);
typedef void(*type_20)(RwResEntry*);
typedef int8*(*type_21)(uint32);
typedef int32(*type_22)(RxPipelineNode*);
typedef void(*type_24)(RxPipelineNode*);
typedef RpWorldSector*(*type_27)(RpWorldSector*);
typedef int32(*type_29)(RxPipelineNode*, RxPipeline*);
typedef void(*type_32)(int32);
typedef uint32(*type_40)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_47)(RpAtomic*);
typedef RwCamera*(*type_48)(RwCamera*);
typedef void(*type_54)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_59)(_xEnt*, _xScene*, float32);
typedef uint32(*type_62)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_63)(_xEnt*);
typedef void(*type_65)(_xEnt*);
typedef void(*type_67)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_71)(_xEnt*, _xVec3*);
typedef uint32(*type_76)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_82)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_85)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_88)(RwObjectHasFrame*);
typedef void(*type_94)(xMemPool*, void*);

typedef int32 type_0[2];
typedef RxCluster type_1[1];
typedef uint8 type_2[2];
typedef float32 type_3[12];
typedef int8 type_4[16];
typedef float32 type_5[16];
typedef float32 type_6[16];
typedef int32 type_7[2];
typedef uint32 type_10[4];
typedef int8 type_11[16];
typedef uint8 type_13[3];
typedef _xVec3 type_23[2];
typedef _xQuat type_25[2];
typedef uint8 type_26[3];
typedef zCutsceneZbuffer type_28[4];
typedef uint32 type_30[2];
typedef float32 type_31[15];
typedef float32 type_33[15];
typedef float32 type_34[16];
typedef float32 type_35[12];
typedef uint32 type_36[2];
typedef float32 type_37[16];
typedef uint8 type_38[3];
typedef uint32 type_39[15];
typedef uint32 type_41[2];
typedef _xVec3 type_42[4];
typedef uint32 type_43[2];
typedef int8 type_44[128];
typedef int8 type_45[32];
typedef uint32 type_46[2];
typedef _zHipDepend type_49[1];
typedef int8 type_50[32];
typedef int8 type_51[256];
typedef uint8 type_52[3];
typedef st_SERIAL_PERCID_SIZE type_53[2];
typedef int8 type_55[16];
typedef uint8 type_56[8];
typedef float32 type_57[16];
typedef float32 type_58[16];
typedef int8 type_60[256];
typedef float32 type_61[4];
typedef uint16 type_64[3];
typedef uint8 type_66[22];
typedef uint16 type_68[3];
typedef uint8 type_69[22];
typedef RwFrustumPlane type_70[6];
typedef iModelTag type_72[4];
typedef int8 type_73[256];
typedef uint32 type_74[43];
typedef RwV3d type_75[8];
typedef float32 type_77[2];
typedef int8 type_78[256];
typedef float32 type_79[16];
typedef xBase* type_80[43];
typedef float32 type_81[16];
typedef int8 type_83[128];
typedef int8 type_84[128][6];
typedef RpLight* type_86[2];
typedef float32 type_87[4];
typedef RwFrame* type_89[2];
typedef RwTexCoords* type_90[8];
typedef float32 type_91[4];
typedef float32 type_92[4];
typedef int8 type_93[32];
typedef float32 type_95[16];
typedef float32 type_96[16];
typedef float32 type_97[4];
typedef _xCollis type_98[18];
typedef float32 type_99[4];
typedef float32 type_100[4];
typedef float32 type_101[3];
typedef int8 type_102[16];
typedef uint8 type_103[8];
typedef float32 type_104[3];
typedef int8 type_105[271];
typedef uint8 type_106[8];
typedef _xVec4 type_107[8];
typedef RwTexCoords* type_108[8];
typedef zGlobalGameStats type_109[30];
typedef float32 type_110[4];
typedef uint8 type_111[8];
typedef zGlobalGameStats type_112[13];
typedef _zEnt* type_113[10];
typedef float32 type_114[4];
typedef uint32 type_115[1];
typedef uint8 type_116[8];
typedef zGlobalGameStats type_117[4];

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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xIniValue
{
	int8* tok;
	int8* val;
};

struct _tagiPad
{
	int32 port;
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

struct _zHipDepend
{
	uint32 sceneID;
	uint32 dependID;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct rxReq
{
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct xFontBox
{
	int32 flags;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	uint32 font;
	iColor_tag color;
	iColor_tag saved_color;
	float32 draw_width;
	float32 draw_height;
	float32 x_spacing;
	float32 y_spacing;
	float32 depth;
	float32 inset_left;
	float32 inset_right;
	float32 inset_top;
	float32 inset_bottom;
	int8* text;
	iColor_tag backdrop_color;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpSector
{
	int32 type;
};

struct xIniSection
{
	int8* sec;
	int32 first;
	int32 count;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct _tagxCamFollow
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct xIniFile
{
	int32 NumValues;
	int32 NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	int8 name[256];
	int8 pathname[256];
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct _zPlatform
{
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct xFFX
{
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct st_SERIAL_PERCID_SIZE
{
	uint32 idtag;
	int32 needsize;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _iCollis
{
	int32 unknown;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

_zHipDepend sHipDependTable[1];
zGlobals globals;
int32 gBuildNumber;
uint32 gEE2BuildNumber;
int32 sShowMenuOnBoot;
st_SERIAL_PERCID_SIZE g_xser_sizeinfo[2];
_tagxPad* gDebugPad;
void(*zMainMemLvlChkCB)();

void zMainMemCardQueryPost(int32 bytesNeeded, int32 availOnDisk, int32 showMsg);
void zMainMemCardSpaceQuery();
void zMainFirstScreen(int32 mode);
void zMainCheckINI();
void zMainLoop();
void zMainMemLvlChkCB();
void zMainParseINIGlobals(xIniFile* ini);
void main();

// zMainMemCardQueryPost__Fiii
// Start address: 0x1159d0
void zMainMemCardQueryPost(int32 bytesNeeded, int32 availOnDisk, int32 showMsg)
{
	int8 strn[256];
	int8 str[256];
	int32 available;
	xFontBox* sTrcFullCardFontBox2;
	xFontBox* sTrcFullCardFontBox;
	RwRGBA bg;
	RwCamera* cam;
	// Line 1032, Address: 0x1159d0, Func Offset: 0
	// Line 1034, Address: 0x1159f0, Func Offset: 0x20
	// Line 1040, Address: 0x115a04, Func Offset: 0x34
	// Line 1034, Address: 0x115a14, Func Offset: 0x44
	// Line 1040, Address: 0x115a18, Func Offset: 0x48
	// Line 1041, Address: 0x115a38, Func Offset: 0x68
	// Line 1044, Address: 0x115a68, Func Offset: 0x98
	// Line 1045, Address: 0x115a78, Func Offset: 0xa8
	// Line 1046, Address: 0x115a88, Func Offset: 0xb8
	// Line 1053, Address: 0x115a90, Func Offset: 0xc0
	// Line 1056, Address: 0x115ad0, Func Offset: 0x100
	// Line 1062, Address: 0x115b10, Func Offset: 0x140
	// Line 1065, Address: 0x115b18, Func Offset: 0x148
	// Line 1068, Address: 0x115b24, Func Offset: 0x154
	// Line 1076, Address: 0x115b48, Func Offset: 0x178
	// Line 1079, Address: 0x115b54, Func Offset: 0x184
	// Line 1080, Address: 0x115b6c, Func Offset: 0x19c
	// Line 1081, Address: 0x115b84, Func Offset: 0x1b4
	// Line 1083, Address: 0x115ba4, Func Offset: 0x1d4
	// Line 1084, Address: 0x115bc0, Func Offset: 0x1f0
	// Line 1088, Address: 0x115bcc, Func Offset: 0x1fc
	// Line 1090, Address: 0x115bdc, Func Offset: 0x20c
	// Line 1093, Address: 0x115be8, Func Offset: 0x218
	// Line 1094, Address: 0x115c00, Func Offset: 0x230
	// Line 1095, Address: 0x115c18, Func Offset: 0x248
	// Line 1097, Address: 0x115c38, Func Offset: 0x268
	// Line 1098, Address: 0x115c58, Func Offset: 0x288
	// Line 1101, Address: 0x115c64, Func Offset: 0x294
	// Line 1105, Address: 0x115c6c, Func Offset: 0x29c
	// Line 1106, Address: 0x115c78, Func Offset: 0x2a8
	// Line 1111, Address: 0x115c98, Func Offset: 0x2c8
	// Line 1112, Address: 0x115ca4, Func Offset: 0x2d4
	// Line 1113, Address: 0x115cac, Func Offset: 0x2dc
	// Line 1114, Address: 0x115cb4, Func Offset: 0x2e4
	// Line 1119, Address: 0x115cbc, Func Offset: 0x2ec
	// Line 1120, Address: 0x115cc4, Func Offset: 0x2f4
	// Line 1122, Address: 0x115cd4, Func Offset: 0x304
	// Line 1125, Address: 0x115cdc, Func Offset: 0x30c
	// Func End, Address: 0x115d00, Func Offset: 0x330
}

// zMainMemCardSpaceQuery__Fv
// Start address: 0x115d00
void zMainMemCardSpaceQuery()
{
	int32 fullCard;
	int32 do_chk;
	int32 availOnDisk;
	int32 bytesNeeded;
	// Line 979, Address: 0x115d00, Func Offset: 0
	// Line 984, Address: 0x115d14, Func Offset: 0x14
	// Line 982, Address: 0x115d1c, Func Offset: 0x1c
	// Line 983, Address: 0x115d20, Func Offset: 0x20
	// Line 985, Address: 0x115d24, Func Offset: 0x24
	// Line 992, Address: 0x115d2c, Func Offset: 0x2c
	// Line 993, Address: 0x115d34, Func Offset: 0x34
	// Line 998, Address: 0x115d40, Func Offset: 0x40
	// Line 1007, Address: 0x115d48, Func Offset: 0x48
	// Line 1009, Address: 0x115d58, Func Offset: 0x58
	// Line 1014, Address: 0x115d68, Func Offset: 0x68
	// Line 1018, Address: 0x115d7c, Func Offset: 0x7c
	// Line 1019, Address: 0x115d9c, Func Offset: 0x9c
	// Line 1022, Address: 0x115dac, Func Offset: 0xac
	// Line 1025, Address: 0x115db0, Func Offset: 0xb0
	// Line 1028, Address: 0x115dc0, Func Offset: 0xc0
	// Func End, Address: 0x115dd8, Func Offset: 0xd8
}

// zMainFirstScreen__Fi
// Start address: 0x115de0
void zMainFirstScreen(int32 mode)
{
	xFontBox* b;
	int8 str[271];
	RwRGBA bg;
	RwCamera* cam;
	iColor_tag yellow;
	// Line 925, Address: 0x115de0, Func Offset: 0
	// Line 930, Address: 0x115df0, Func Offset: 0x10
	// Line 935, Address: 0x115dfc, Func Offset: 0x1c
	// Line 936, Address: 0x115e0c, Func Offset: 0x2c
	// Line 935, Address: 0x115e10, Func Offset: 0x30
	// Line 936, Address: 0x115e14, Func Offset: 0x34
	// Line 938, Address: 0x115e18, Func Offset: 0x38
	// Line 939, Address: 0x115e28, Func Offset: 0x48
	// Line 941, Address: 0x115e30, Func Offset: 0x50
	// Line 944, Address: 0x115e38, Func Offset: 0x58
	// Line 951, Address: 0x115e78, Func Offset: 0x98
	// Line 944, Address: 0x115e8c, Func Offset: 0xac
	// Line 951, Address: 0x115e9c, Func Offset: 0xbc
	// Line 952, Address: 0x115eb0, Func Offset: 0xd0
	// Line 953, Address: 0x115ebc, Func Offset: 0xdc
	// Line 954, Address: 0x115ed8, Func Offset: 0xf8
	// Line 955, Address: 0x115ef4, Func Offset: 0x114
	// Line 956, Address: 0x115f00, Func Offset: 0x120
	// Line 957, Address: 0x115f24, Func Offset: 0x144
	// Line 960, Address: 0x115f30, Func Offset: 0x150
	// Line 961, Address: 0x115f38, Func Offset: 0x158
	// Line 964, Address: 0x115f40, Func Offset: 0x160
	// Line 965, Address: 0x115f4c, Func Offset: 0x16c
	// Line 967, Address: 0x115f5c, Func Offset: 0x17c
	// Line 968, Address: 0x115f64, Func Offset: 0x184
	// Func End, Address: 0x115f78, Func Offset: 0x198
}

// zMainCheckINI__Fv
// Start address: 0x115f80
void zMainCheckINI()
{
	xIniFile* ini;
	uint32 size;
	void* buf;
	int8* str;
	// Line 852, Address: 0x115f80, Func Offset: 0
	// Line 859, Address: 0x115f8c, Func Offset: 0xc
	// Line 852, Address: 0x115f90, Func Offset: 0x10
	// Line 859, Address: 0x115f94, Func Offset: 0x14
	// Line 860, Address: 0x115fac, Func Offset: 0x2c
	// Line 861, Address: 0x115fb4, Func Offset: 0x34
	// Line 869, Address: 0x115fc0, Func Offset: 0x40
	// Line 872, Address: 0x115fdc, Func Offset: 0x5c
	// Line 873, Address: 0x115ff4, Func Offset: 0x74
	// Line 874, Address: 0x116008, Func Offset: 0x88
	// Line 880, Address: 0x116014, Func Offset: 0x94
	// Line 891, Address: 0x116034, Func Offset: 0xb4
	// Line 892, Address: 0x11605c, Func Offset: 0xdc
	// Line 893, Address: 0x116088, Func Offset: 0x108
	// Line 894, Address: 0x1160b4, Func Offset: 0x134
	// Line 895, Address: 0x1160e0, Func Offset: 0x160
	// Line 896, Address: 0x11610c, Func Offset: 0x18c
	// Line 899, Address: 0x116138, Func Offset: 0x1b8
	// Line 902, Address: 0x116144, Func Offset: 0x1c4
	// Line 916, Address: 0x11614c, Func Offset: 0x1cc
	// Func End, Address: 0x116164, Func Offset: 0x1e4
}

// zMainLoop__Fv
// Start address: 0x116170
void zMainLoop()
{
	uint32 newGameSceneID;
	float32 pdone;
	uint32 menuModeID;
	uint32 gameSceneID;
	int8 init;
	int8 init;
	// Line 578, Address: 0x116170, Func Offset: 0
	// Line 598, Address: 0x116188, Func Offset: 0x18
	// Line 604, Address: 0x116190, Func Offset: 0x20
	// Line 606, Address: 0x1161a0, Func Offset: 0x30
	// Line 609, Address: 0x1161b0, Func Offset: 0x40
	// Line 612, Address: 0x1161c0, Func Offset: 0x50
	// Line 614, Address: 0x1161cc, Func Offset: 0x5c
	// Line 625, Address: 0x1161dc, Func Offset: 0x6c
	// Line 628, Address: 0x116204, Func Offset: 0x94
	// Line 632, Address: 0x116214, Func Offset: 0xa4
	// Line 635, Address: 0x11621c, Func Offset: 0xac
	// Line 643, Address: 0x116224, Func Offset: 0xb4
	// Line 645, Address: 0x11622c, Func Offset: 0xbc
	// Line 647, Address: 0x11623c, Func Offset: 0xcc
	// Line 650, Address: 0x11624c, Func Offset: 0xdc
	// Line 653, Address: 0x11625c, Func Offset: 0xec
	// Line 655, Address: 0x116268, Func Offset: 0xf8
	// Line 665, Address: 0x116278, Func Offset: 0x108
	// Line 673, Address: 0x1162a0, Func Offset: 0x130
	// Line 678, Address: 0x1162b0, Func Offset: 0x140
	// Line 680, Address: 0x1162d4, Func Offset: 0x164
	// Line 687, Address: 0x11631c, Func Offset: 0x1ac
	// Line 689, Address: 0x116320, Func Offset: 0x1b0
	// Line 694, Address: 0x11632c, Func Offset: 0x1bc
	// Line 719, Address: 0x116344, Func Offset: 0x1d4
	// Line 720, Address: 0x11634c, Func Offset: 0x1dc
	// Line 721, Address: 0x116354, Func Offset: 0x1e4
	// Line 722, Address: 0x11635c, Func Offset: 0x1ec
	// Line 725, Address: 0x116364, Func Offset: 0x1f4
	// Line 728, Address: 0x116370, Func Offset: 0x200
	// Line 729, Address: 0x116378, Func Offset: 0x208
	// Line 730, Address: 0x116380, Func Offset: 0x210
	// Line 732, Address: 0x116388, Func Offset: 0x218
	// Line 733, Address: 0x116390, Func Offset: 0x220
	// Line 737, Address: 0x116398, Func Offset: 0x228
	// Line 745, Address: 0x1163a0, Func Offset: 0x230
	// Line 746, Address: 0x1163a8, Func Offset: 0x238
	// Line 749, Address: 0x1163b0, Func Offset: 0x240
	// Line 752, Address: 0x1163b8, Func Offset: 0x248
	// Line 753, Address: 0x1163c0, Func Offset: 0x250
	// Line 756, Address: 0x1163cc, Func Offset: 0x25c
	// Line 760, Address: 0x1163f4, Func Offset: 0x284
	// Line 773, Address: 0x1163fc, Func Offset: 0x28c
	// Line 812, Address: 0x116408, Func Offset: 0x298
	// Line 814, Address: 0x116410, Func Offset: 0x2a0
	// Line 822, Address: 0x116418, Func Offset: 0x2a8
	// Line 824, Address: 0x116420, Func Offset: 0x2b0
	// Line 825, Address: 0x116428, Func Offset: 0x2b8
	// Line 827, Address: 0x116430, Func Offset: 0x2c0
	// Func End, Address: 0x116438, Func Offset: 0x2c8
}

// zMainMemLvlChkCB__Fv
// Start address: 0x116440
void zMainMemLvlChkCB()
{
	// Line 566, Address: 0x116440, Func Offset: 0
	// Line 567, Address: 0x116448, Func Offset: 0x8
	// Line 568, Address: 0x116450, Func Offset: 0x10
	// Line 569, Address: 0x116458, Func Offset: 0x18
	// Func End, Address: 0x116464, Func Offset: 0x24
}

// zMainParseINIGlobals__FP8xIniFile
// Start address: 0x116470
void zMainParseINIGlobals(xIniFile* ini)
{
	float32 fbuf_Toss[16];
	float32 fbuf_Spring[16];
	float32 fbuf_Bounce[16];
	float32 fbuf_Double[16];
	float32 fbuf_Jump[16];
	float32 fbuf_AnimWalk[12];
	float32 fbuf_AnimSneak[12];
	float32 fbuf_SpeedHotsauce[16];
	float32 fbuf_SpeedAir[16];
	float32 fbuf_SpeedRun[16];
	float32 fbuf_SpeedWalk[16];
	float32 fbuf_SpeedSneak[16];
	// Line 395, Address: 0x116470, Func Offset: 0
	// Line 396, Address: 0x116480, Func Offset: 0x10
	// Line 397, Address: 0x1164a4, Func Offset: 0x34
	// Line 399, Address: 0x1164bc, Func Offset: 0x4c
	// Line 400, Address: 0x1164f8, Func Offset: 0x88
	// Line 401, Address: 0x116534, Func Offset: 0xc4
	// Line 402, Address: 0x116570, Func Offset: 0x100
	// Line 403, Address: 0x1165ac, Func Offset: 0x13c
	// Line 405, Address: 0x1165e8, Func Offset: 0x178
	// Line 406, Address: 0x116624, Func Offset: 0x1b4
	// Line 408, Address: 0x116660, Func Offset: 0x1f0
	// Line 409, Address: 0x116678, Func Offset: 0x208
	// Line 408, Address: 0x116680, Func Offset: 0x210
	// Line 409, Address: 0x116684, Func Offset: 0x214
	// Line 410, Address: 0x116694, Func Offset: 0x224
	// Line 409, Address: 0x11669c, Func Offset: 0x22c
	// Line 410, Address: 0x1166a0, Func Offset: 0x230
	// Line 411, Address: 0x1166b0, Func Offset: 0x240
	// Line 410, Address: 0x1166b8, Func Offset: 0x248
	// Line 411, Address: 0x1166bc, Func Offset: 0x24c
	// Line 412, Address: 0x1166cc, Func Offset: 0x25c
	// Line 411, Address: 0x1166d4, Func Offset: 0x264
	// Line 412, Address: 0x1166d8, Func Offset: 0x268
	// Line 414, Address: 0x1166e8, Func Offset: 0x278
	// Line 412, Address: 0x1166ec, Func Offset: 0x27c
	// Line 414, Address: 0x1166f0, Func Offset: 0x280
	// Line 415, Address: 0x116728, Func Offset: 0x2b8
	// Line 416, Address: 0x116764, Func Offset: 0x2f4
	// Line 417, Address: 0x1167a0, Func Offset: 0x330
	// Line 418, Address: 0x1167dc, Func Offset: 0x36c
	// Line 424, Address: 0x116818, Func Offset: 0x3a8
	// Line 425, Address: 0x116830, Func Offset: 0x3c0
	// Line 424, Address: 0x116838, Func Offset: 0x3c8
	// Line 425, Address: 0x11683c, Func Offset: 0x3cc
	// Line 426, Address: 0x11684c, Func Offset: 0x3dc
	// Line 425, Address: 0x116854, Func Offset: 0x3e4
	// Line 426, Address: 0x116858, Func Offset: 0x3e8
	// Line 427, Address: 0x116868, Func Offset: 0x3f8
	// Line 426, Address: 0x116870, Func Offset: 0x400
	// Line 427, Address: 0x116874, Func Offset: 0x404
	// Line 428, Address: 0x116884, Func Offset: 0x414
	// Line 427, Address: 0x11688c, Func Offset: 0x41c
	// Line 428, Address: 0x116890, Func Offset: 0x420
	// Line 429, Address: 0x1168a0, Func Offset: 0x430
	// Line 428, Address: 0x1168a8, Func Offset: 0x438
	// Line 429, Address: 0x1168ac, Func Offset: 0x43c
	// Line 432, Address: 0x1168bc, Func Offset: 0x44c
	// Line 429, Address: 0x1168c8, Func Offset: 0x458
	// Line 432, Address: 0x1168cc, Func Offset: 0x45c
	// Line 433, Address: 0x1168dc, Func Offset: 0x46c
	// Line 432, Address: 0x1168e8, Func Offset: 0x478
	// Line 433, Address: 0x1168ec, Func Offset: 0x47c
	// Line 434, Address: 0x1168fc, Func Offset: 0x48c
	// Line 433, Address: 0x116908, Func Offset: 0x498
	// Line 434, Address: 0x11690c, Func Offset: 0x49c
	// Line 436, Address: 0x11691c, Func Offset: 0x4ac
	// Line 434, Address: 0x116924, Func Offset: 0x4b4
	// Line 436, Address: 0x116928, Func Offset: 0x4b8
	// Line 437, Address: 0x116938, Func Offset: 0x4c8
	// Line 436, Address: 0x116940, Func Offset: 0x4d0
	// Line 437, Address: 0x116944, Func Offset: 0x4d4
	// Line 438, Address: 0x116954, Func Offset: 0x4e4
	// Line 437, Address: 0x116960, Func Offset: 0x4f0
	// Line 438, Address: 0x116964, Func Offset: 0x4f4
	// Line 439, Address: 0x116974, Func Offset: 0x504
	// Line 438, Address: 0x11697c, Func Offset: 0x50c
	// Line 439, Address: 0x116980, Func Offset: 0x510
	// Line 441, Address: 0x116990, Func Offset: 0x520
	// Line 439, Address: 0x116998, Func Offset: 0x528
	// Line 441, Address: 0x11699c, Func Offset: 0x52c
	// Line 442, Address: 0x1169a8, Func Offset: 0x538
	// Line 441, Address: 0x1169b0, Func Offset: 0x540
	// Line 442, Address: 0x1169b4, Func Offset: 0x544
	// Line 443, Address: 0x1169c4, Func Offset: 0x554
	// Line 442, Address: 0x1169cc, Func Offset: 0x55c
	// Line 443, Address: 0x1169d0, Func Offset: 0x560
	// Line 444, Address: 0x1169e0, Func Offset: 0x570
	// Line 443, Address: 0x1169e8, Func Offset: 0x578
	// Line 444, Address: 0x1169ec, Func Offset: 0x57c
	// Line 445, Address: 0x1169fc, Func Offset: 0x58c
	// Line 444, Address: 0x116a04, Func Offset: 0x594
	// Line 445, Address: 0x116a08, Func Offset: 0x598
	// Line 447, Address: 0x116a18, Func Offset: 0x5a8
	// Line 445, Address: 0x116a1c, Func Offset: 0x5ac
	// Line 447, Address: 0x116a20, Func Offset: 0x5b0
	// Line 448, Address: 0x116a34, Func Offset: 0x5c4
	// Line 449, Address: 0x116a4c, Func Offset: 0x5dc
	// Line 450, Address: 0x116a64, Func Offset: 0x5f4
	// Line 452, Address: 0x116a7c, Func Offset: 0x60c
	// Line 455, Address: 0x116a80, Func Offset: 0x610
	// Line 452, Address: 0x116a90, Func Offset: 0x620
	// Line 453, Address: 0x116a94, Func Offset: 0x624
	// Line 455, Address: 0x116a98, Func Offset: 0x628
	// Line 457, Address: 0x116aa4, Func Offset: 0x634
	// Line 458, Address: 0x116abc, Func Offset: 0x64c
	// Line 457, Address: 0x116ac4, Func Offset: 0x654
	// Line 458, Address: 0x116ac8, Func Offset: 0x658
	// Line 460, Address: 0x116ad8, Func Offset: 0x668
	// Line 458, Address: 0x116ae0, Func Offset: 0x670
	// Line 460, Address: 0x116ae4, Func Offset: 0x674
	// Line 461, Address: 0x116af4, Func Offset: 0x684
	// Line 460, Address: 0x116b00, Func Offset: 0x690
	// Line 461, Address: 0x116b04, Func Offset: 0x694
	// Line 462, Address: 0x116b14, Func Offset: 0x6a4
	// Line 461, Address: 0x116b20, Func Offset: 0x6b0
	// Line 462, Address: 0x116b24, Func Offset: 0x6b4
	// Line 465, Address: 0x116b38, Func Offset: 0x6c8
	// Line 469, Address: 0x116b48, Func Offset: 0x6d8
	// Line 465, Address: 0x116b4c, Func Offset: 0x6dc
	// Line 466, Address: 0x116b64, Func Offset: 0x6f4
	// Line 467, Address: 0x116b74, Func Offset: 0x704
	// Line 469, Address: 0x116b88, Func Offset: 0x718
	// Line 470, Address: 0x116b90, Func Offset: 0x720
	// Line 471, Address: 0x116b98, Func Offset: 0x728
	// Line 472, Address: 0x116ba0, Func Offset: 0x730
	// Line 473, Address: 0x116ba8, Func Offset: 0x738
	// Line 476, Address: 0x116bb0, Func Offset: 0x740
	// Line 477, Address: 0x116bc8, Func Offset: 0x758
	// Line 476, Address: 0x116bd8, Func Offset: 0x768
	// Line 477, Address: 0x116bdc, Func Offset: 0x76c
	// Line 478, Address: 0x116bec, Func Offset: 0x77c
	// Line 477, Address: 0x116bfc, Func Offset: 0x78c
	// Line 478, Address: 0x116c00, Func Offset: 0x790
	// Line 479, Address: 0x116c10, Func Offset: 0x7a0
	// Line 478, Address: 0x116c20, Func Offset: 0x7b0
	// Line 479, Address: 0x116c24, Func Offset: 0x7b4
	// Line 480, Address: 0x116c34, Func Offset: 0x7c4
	// Line 479, Address: 0x116c44, Func Offset: 0x7d4
	// Line 480, Address: 0x116c48, Func Offset: 0x7d8
	// Line 481, Address: 0x116c58, Func Offset: 0x7e8
	// Line 480, Address: 0x116c68, Func Offset: 0x7f8
	// Line 481, Address: 0x116c6c, Func Offset: 0x7fc
	// Line 482, Address: 0x116c7c, Func Offset: 0x80c
	// Line 481, Address: 0x116c8c, Func Offset: 0x81c
	// Line 482, Address: 0x116c90, Func Offset: 0x820
	// Line 483, Address: 0x116ca0, Func Offset: 0x830
	// Line 482, Address: 0x116cb0, Func Offset: 0x840
	// Line 483, Address: 0x116cb4, Func Offset: 0x844
	// Line 484, Address: 0x116cc4, Func Offset: 0x854
	// Line 483, Address: 0x116cd4, Func Offset: 0x864
	// Line 484, Address: 0x116cd8, Func Offset: 0x868
	// Line 485, Address: 0x116ce8, Func Offset: 0x878
	// Line 484, Address: 0x116cf8, Func Offset: 0x888
	// Line 485, Address: 0x116cfc, Func Offset: 0x88c
	// Line 486, Address: 0x116d0c, Func Offset: 0x89c
	// Line 485, Address: 0x116d1c, Func Offset: 0x8ac
	// Line 486, Address: 0x116d20, Func Offset: 0x8b0
	// Line 487, Address: 0x116d30, Func Offset: 0x8c0
	// Line 486, Address: 0x116d40, Func Offset: 0x8d0
	// Line 487, Address: 0x116d44, Func Offset: 0x8d4
	// Line 488, Address: 0x116d54, Func Offset: 0x8e4
	// Line 487, Address: 0x116d64, Func Offset: 0x8f4
	// Line 488, Address: 0x116d68, Func Offset: 0x8f8
	// Line 489, Address: 0x116d78, Func Offset: 0x908
	// Line 488, Address: 0x116d88, Func Offset: 0x918
	// Line 489, Address: 0x116d8c, Func Offset: 0x91c
	// Line 490, Address: 0x116d9c, Func Offset: 0x92c
	// Line 489, Address: 0x116dac, Func Offset: 0x93c
	// Line 490, Address: 0x116db0, Func Offset: 0x940
	// Line 514, Address: 0x116dc0, Func Offset: 0x950
	// Line 490, Address: 0x116dd0, Func Offset: 0x960
	// Line 514, Address: 0x116dd4, Func Offset: 0x964
	// Line 516, Address: 0x116de0, Func Offset: 0x970
	// Func End, Address: 0x116df8, Func Offset: 0x988
}

// 
// Start address: 0x116e00
void main()
{
	// Line 123, Address: 0x116e00, Func Offset: 0
	// Line 126, Address: 0x116e08, Func Offset: 0x8
	// Line 140, Address: 0x116e10, Func Offset: 0x10
	// Line 143, Address: 0x116e1c, Func Offset: 0x1c
	// Line 146, Address: 0x116e40, Func Offset: 0x40
	// Line 168, Address: 0x116e48, Func Offset: 0x48
	// Line 174, Address: 0x116e58, Func Offset: 0x58
	// Line 177, Address: 0x116e60, Func Offset: 0x60
	// Line 180, Address: 0x116e70, Func Offset: 0x70
	// Line 183, Address: 0x116e78, Func Offset: 0x78
	// Line 187, Address: 0x116e80, Func Offset: 0x80
	// Line 191, Address: 0x116e88, Func Offset: 0x88
	// Line 208, Address: 0x116e90, Func Offset: 0x90
	// Line 212, Address: 0x116e98, Func Offset: 0x98
	// Line 217, Address: 0x116ea0, Func Offset: 0xa0
	// Line 219, Address: 0x116eac, Func Offset: 0xac
	// Line 221, Address: 0x116eb8, Func Offset: 0xb8
	// Line 225, Address: 0x116ec4, Func Offset: 0xc4
	// Line 228, Address: 0x116ecc, Func Offset: 0xcc
	// Line 231, Address: 0x116ed8, Func Offset: 0xd8
	// Line 238, Address: 0x116ee0, Func Offset: 0xe0
	// Line 241, Address: 0x116ee8, Func Offset: 0xe8
	// Line 245, Address: 0x116ef0, Func Offset: 0xf0
	// Line 251, Address: 0x116ef8, Func Offset: 0xf8
	// Line 252, Address: 0x116f00, Func Offset: 0x100
	// Line 256, Address: 0x116f08, Func Offset: 0x108
	// Line 267, Address: 0x116f10, Func Offset: 0x110
	// Line 270, Address: 0x116f1c, Func Offset: 0x11c
	// Line 276, Address: 0x116f24, Func Offset: 0x124
	// Line 280, Address: 0x116f2c, Func Offset: 0x12c
	// Line 281, Address: 0x116f34, Func Offset: 0x134
	// Line 283, Address: 0x116f3c, Func Offset: 0x13c
	// Line 286, Address: 0x116f44, Func Offset: 0x144
	// Line 288, Address: 0x116f4c, Func Offset: 0x14c
	// Line 290, Address: 0x116f54, Func Offset: 0x154
	// Line 291, Address: 0x116f5c, Func Offset: 0x15c
	// Line 302, Address: 0x116f64, Func Offset: 0x164
	// Line 307, Address: 0x116f6c, Func Offset: 0x16c
	// Func End, Address: 0x116f7c, Func Offset: 0x17c
}

