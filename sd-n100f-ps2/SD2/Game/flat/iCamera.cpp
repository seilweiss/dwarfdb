typedef struct RwCamera;
typedef struct RpAtomic;
typedef struct RwMatrixTag;
typedef struct RpGeometry;
typedef struct _xVec4;
typedef struct zGlobals;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct _iCollis;
typedef struct RxCluster;
typedef struct zPortalAsset;
typedef struct xBase;
typedef struct RpSector;
typedef struct RxHeap;
typedef struct xAnimPlay;
typedef struct xSurface;
typedef struct _xBBox;
typedef struct RxClusterRef;
typedef struct RwRaster;
typedef struct rxHeapBlockHeader;
typedef struct _tagxPad;
typedef struct RpClump;
typedef struct _zEnt;
typedef struct xCutsceneBreak;
typedef enum RxClusterValidityReq;
typedef struct _tagxCamPathAsset;
typedef struct xAnimFile;
typedef struct RxPipelineCluster;
typedef struct xCutsceneTime;
typedef struct _xEntShadow;
typedef struct zScene;
typedef struct RwSphere;
typedef struct RwFrame;
typedef struct RpLight;
typedef struct xAnimSingle;
typedef struct RxClusterDefinition;
typedef struct _xEnt;
typedef struct xAnimEffect;
typedef struct RpPolygon;
typedef struct zAssetPickupTable;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimTransitionList;
typedef struct _xEntFrame;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct _xMat4x3;
typedef struct xAnimTable;
typedef struct _zPortal;
typedef struct _xSphere;
typedef struct iFogParams;
typedef struct _zCutsceneMgr;
typedef struct RxPipeline;
typedef struct zPlayerStatic;
typedef enum _tagRumbleType;
typedef enum RwTextureAddressMode;
typedef struct _xEnv;
typedef struct RwFrustumPlane;
typedef struct RxPipelineNode;
typedef struct iEnv;
typedef struct _tagxCam;
typedef struct zCutsceneZbuffer;
typedef struct _tagxCamShoulder;
typedef struct xModelPool;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xEntDrive;
typedef struct xAnimActiveEffect;
typedef struct _xCylinder;
typedef struct RxPipelineNodeParam;
typedef struct p2EntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct xMemPool;
typedef struct xModelInstance;
typedef struct _xCollis;
typedef struct _zPlatform;
typedef struct RxNodeDefinition;
typedef struct _tagxCamFollowAsset;
typedef struct xCamAsset;
typedef struct RpCollSector;
typedef struct _xBox;
typedef struct RpWorld;
typedef struct RpMeshHeader;
typedef struct iShadowCache;
typedef struct RpMaterial;
typedef enum _tagCamType;
typedef struct tag_xFile;
typedef struct rxHeapFreeBlock;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct RwTexture;
typedef enum RwCameraProjection;
typedef struct RwRGBAReal;
typedef struct zCutsceneZbufferHack;
typedef struct xAnimTransition;
typedef struct p2LinkAsset;
typedef struct RwObjectHasFrame;
typedef struct p2BaseAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct tag_iFile;
typedef struct _tagxCamStatic;
typedef struct RwRGBA;
typedef struct RwV2d;
typedef struct xAnimState;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct RpWorldSector;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RwResEntry;
typedef enum RwTextureFilterMode;
typedef struct _tagxCamFrame;
typedef struct RwObject;
typedef struct _tagxRumble;
typedef enum RxClusterValid;
typedef struct RpMorphTarget;
typedef struct _tagxCamShoulderAsset;
typedef struct zCutsceneMgrAsset;
typedef enum _tagTransType;
typedef struct zPlayerGlobals;
typedef struct RpVertexNormal;
typedef struct _zEntHangable;
typedef struct xCutscene;
typedef struct _tagxCamStaticFollow;
typedef struct RwPlane;
typedef struct _xEntCollis;
typedef struct p2EntHangableAsset;
typedef struct RwLinkList;
typedef enum _tagPadState;
typedef struct _xVec3;
typedef enum RpWorldRenderOrder;
typedef struct rxReq;
typedef struct _xQuat;
typedef struct _tagiPad;
typedef enum RwFogType;
typedef struct RwTexDictionary;
typedef struct _tagxCamPath;
typedef struct zShaggy1Globals;
typedef struct _tagp2CamStaticAsset;
typedef struct xCutsceneData;
typedef enum RxClusterForcePresent;
typedef struct xFFX;
typedef struct RwBBox;
typedef struct zCheckPoint;
typedef struct _tagPadAnalog;
typedef struct _xRot;
typedef enum RxNodeDefEditable;
typedef struct zGlobalGameStats;
typedef struct RxIoSpec;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct iModelTag;
typedef struct RxNodeMethods;
typedef struct RpMaterialList;
typedef struct zJumpParam;
typedef struct RwSurfaceProperties;
typedef struct xQCData;
typedef struct _tagxCamFollow;

typedef RwCamera*(*type_1)(RwCamera*);
typedef uint32(*type_2)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RpAtomic*(*type_13)(RpAtomic*);
typedef RpWorldSector*(*type_14)(RpWorldSector*);
typedef int32(*type_23)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_27)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_29)(RxNodeDefinition*);
typedef xBase*(*type_33)(uint32);
typedef int32(*type_34)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_35)(RxNodeDefinition*);
typedef int8*(*type_37)(xBase*);
typedef int8*(*type_40)(uint32);
typedef void(*type_41)(xMemPool*, void*);
typedef int32(*type_42)(RxPipelineNode*);
typedef void(*type_44)(int32);
typedef void(*type_48)(RxPipelineNode*);
typedef uint32(*type_57)(xAnimTransition*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_60)(RwObjectHasFrame*);
typedef int32(*type_62)(RxPipelineNode*, RxPipeline*);
typedef void(*type_65)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_67)(_xEnt*, _xScene*, float32);
typedef void(*type_69)(_xEnt*, _xVec3*);
typedef uint32(*type_73)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_76)(_xEnt*);
typedef void(*type_79)(_xEnt*);
typedef void(*type_81)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_83)(RwResEntry*);
typedef RwCamera*(*type_84)(RwCamera*);
typedef void(*type_86)(_xEnt*, _xVec3*);
typedef RpClump*(*type_87)(RpClump*, void*);

typedef int8 type_0[32];
typedef uint8 type_3[2];
typedef uint8 type_4[8];
typedef uint8 type_5[8];
typedef iModelTag type_6[4];
typedef uint8 type_7[8];
typedef uint8 type_8[22];
typedef int8 type_9[16];
typedef float32 type_10[4];
typedef uint8 type_11[22];
typedef uint8 type_12[8];
typedef uint16 type_15[3];
typedef uint16 type_16[3];
typedef _xVec3 type_17[2];
typedef int8 type_18[128];
typedef int8 type_19[128][6];
typedef uint8 type_20[3];
typedef _xQuat type_21[2];
typedef float32 type_22[4];
typedef RwFrustumPlane type_24[6];
typedef float32 type_25[4];
typedef int8 type_26[32];
typedef float32 type_28[4];
typedef RwV3d type_30[8];
typedef float32 type_31[4];
typedef uint8 type_32[3];
typedef float32 type_36[4];
typedef uint8 type_38[3];
typedef float32 type_39[3];
typedef float32 type_43[3];
typedef _xVec3 type_45[4];
typedef zGlobalGameStats type_46[30];
typedef RpLight* type_47[2];
typedef int8 type_49[16];
typedef zCutsceneZbuffer type_50[4];
typedef zGlobalGameStats type_51[13];
typedef RwFrame* type_52[2];
typedef _zEnt* type_53[10];
typedef uint32 type_54[1];
typedef uint8 type_55[8];
typedef RwTexCoords* type_56[8];
typedef zGlobalGameStats type_58[4];
typedef int8 type_59[128];
typedef int32 type_61[2];
typedef int32 type_63[2];
typedef uint32 type_64[2];
typedef uint32 type_66[43];
typedef uint32 type_68[2];
typedef RxCluster type_70[1];
typedef xBase* type_71[43];
typedef uint32 type_72[2];
typedef RwTexCoords* type_74[8];
typedef uint32 type_75[4];
typedef _xVec4 type_77[8];
typedef int8 type_78[16];
typedef int8 type_80[16];
typedef float32 type_82[2];
typedef uint32 type_85[2];
typedef float32 type_88[15];
typedef float32 type_89[15];
typedef uint32 type_90[15];
typedef uint32 type_91[2];
typedef uint8 type_92[3];
typedef float32 type_93[4];
typedef _xCollis type_94[18];
typedef float32 type_95[4];
typedef float32 type_96[4];
typedef int8 type_97[32];

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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct _iCollis
{
	int32 unknown;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct RpSector
{
	int32 type;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct _zPlatform
{
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RwLinkList
{
	RwLLLink link;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct rxReq
{
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _tagiPad
{
	int32 port;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

float32 sCameraNearClip;
float32 sCameraFarClip;
float32 xCameraLastFov;
RwCamera* globalCamera;
zGlobals globals;

void iCameraUpdateFog(RwCamera* cam, long32 t);
void iCameraSetFogParams(iFogParams* fp, float32 time);
void iCameraSetNearFarClip(float32 near, float32 far);
void iCameraRemoveEnv(RwCamera* camera, iEnv* env_geom);
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom);
void iCameraSetFOV(RwCamera* cam, float32 fov);
void iCameraUpdatePos(RwCamera* cam, _xMat4x3* pos);
void iCameraFrustumPlanes(RwCamera* cam, _xVec4* frustplane);
void iCameraShowRaster(RwCamera* cam);
void iCameraEnd(RwCamera* cam);
void iCameraBegin(RwCamera* cam, int32 clear);
void iCameraDestroy(RwCamera* camera);
RwCamera* iCameraCreate(int32 width, int32 height);

// iCameraUpdateFog__FP8RwCameral
// Start address: 0x1382d0
void iCameraUpdateFog(RwCamera* cam, long32 t)
{
	uint32 bite_me;
	float32 a;
	iFogParams* fb;
	iFogParams* fa;
	iFogParams* fp;
	// Line 469, Address: 0x1382d0, Func Offset: 0
	// Line 472, Address: 0x1382fc, Func Offset: 0x2c
	// Line 469, Address: 0x138304, Func Offset: 0x34
	// Line 476, Address: 0x138308, Func Offset: 0x38
	// Line 472, Address: 0x138310, Func Offset: 0x40
	// Line 473, Address: 0x138314, Func Offset: 0x44
	// Line 476, Address: 0x138318, Func Offset: 0x48
	// Line 478, Address: 0x138320, Func Offset: 0x50
	// Line 479, Address: 0x13832c, Func Offset: 0x5c
	// Line 480, Address: 0x138338, Func Offset: 0x68
	// Line 481, Address: 0x138340, Func Offset: 0x70
	// Line 484, Address: 0x13834c, Func Offset: 0x7c
	// Line 487, Address: 0x138354, Func Offset: 0x84
	// Line 488, Address: 0x13835c, Func Offset: 0x8c
	// Line 489, Address: 0x138388, Func Offset: 0xb8
	// Line 494, Address: 0x1383e8, Func Offset: 0x118
	// Line 495, Address: 0x1383f0, Func Offset: 0x120
	// Line 501, Address: 0x1383f8, Func Offset: 0x128
	// Line 502, Address: 0x138410, Func Offset: 0x140
	// Line 503, Address: 0x138428, Func Offset: 0x158
	// Line 505, Address: 0x138440, Func Offset: 0x170
	// Line 508, Address: 0x138444, Func Offset: 0x174
	// Line 505, Address: 0x138448, Func Offset: 0x178
	// Line 508, Address: 0x138454, Func Offset: 0x184
	// Line 509, Address: 0x1384a0, Func Offset: 0x1d0
	// Line 510, Address: 0x1384f0, Func Offset: 0x220
	// Line 509, Address: 0x1384f4, Func Offset: 0x224
	// Line 510, Address: 0x1384f8, Func Offset: 0x228
	// Line 511, Address: 0x138544, Func Offset: 0x274
	// Line 510, Address: 0x138548, Func Offset: 0x278
	// Line 511, Address: 0x13854c, Func Offset: 0x27c
	// Line 512, Address: 0x1385ac, Func Offset: 0x2dc
	// Line 515, Address: 0x1385b0, Func Offset: 0x2e0
	// Line 512, Address: 0x1385b4, Func Offset: 0x2e4
	// Line 515, Address: 0x1385bc, Func Offset: 0x2ec
	// Line 512, Address: 0x1385c4, Func Offset: 0x2f4
	// Line 515, Address: 0x1385c8, Func Offset: 0x2f8
	// Line 516, Address: 0x138604, Func Offset: 0x334
	// Line 515, Address: 0x138608, Func Offset: 0x338
	// Line 516, Address: 0x13860c, Func Offset: 0x33c
	// Line 517, Address: 0x138658, Func Offset: 0x388
	// Line 516, Address: 0x13865c, Func Offset: 0x38c
	// Line 517, Address: 0x138660, Func Offset: 0x390
	// Line 518, Address: 0x1386ac, Func Offset: 0x3dc
	// Line 517, Address: 0x1386b0, Func Offset: 0x3e0
	// Line 518, Address: 0x1386b4, Func Offset: 0x3e4
	// Line 521, Address: 0x138704, Func Offset: 0x434
	// Line 518, Address: 0x13870c, Func Offset: 0x43c
	// Line 521, Address: 0x138710, Func Offset: 0x440
	// Line 518, Address: 0x138714, Func Offset: 0x444
	// Line 521, Address: 0x138718, Func Offset: 0x448
	// Line 522, Address: 0x138720, Func Offset: 0x450
	// Line 523, Address: 0x138724, Func Offset: 0x454
	// Line 536, Address: 0x13878c, Func Offset: 0x4bc
	// Line 538, Address: 0x13879c, Func Offset: 0x4cc
	// Line 536, Address: 0x1387a4, Func Offset: 0x4d4
	// Line 538, Address: 0x1387b8, Func Offset: 0x4e8
	// Line 539, Address: 0x1387c0, Func Offset: 0x4f0
	// Line 540, Address: 0x1387cc, Func Offset: 0x4fc
	// Line 541, Address: 0x1387d8, Func Offset: 0x508
	// Line 542, Address: 0x1387e4, Func Offset: 0x514
	// Line 543, Address: 0x1387f0, Func Offset: 0x520
	// Line 544, Address: 0x1387f8, Func Offset: 0x528
	// Line 545, Address: 0x138804, Func Offset: 0x534
	// Func End, Address: 0x138838, Func Offset: 0x568
}

// iCameraSetFogParams__FP10iFogParamsf
// Start address: 0x138840
void iCameraSetFogParams(iFogParams* fp, float32 time)
{
	// Line 434, Address: 0x138840, Func Offset: 0
	// Line 437, Address: 0x138850, Func Offset: 0x10
	// Line 438, Address: 0x138864, Func Offset: 0x24
	// Line 440, Address: 0x138870, Func Offset: 0x30
	// Line 441, Address: 0x138878, Func Offset: 0x38
	// Line 443, Address: 0x1388a0, Func Offset: 0x60
	// Line 444, Address: 0x138910, Func Offset: 0xd0
	// Line 446, Address: 0x138978, Func Offset: 0x138
	// Line 448, Address: 0x138980, Func Offset: 0x140
	// Line 449, Address: 0x1389e8, Func Offset: 0x1a8
	// Line 450, Address: 0x138a4c, Func Offset: 0x20c
	// Line 451, Address: 0x138a54, Func Offset: 0x214
	// Line 450, Address: 0x138a60, Func Offset: 0x220
	// Line 451, Address: 0x138a64, Func Offset: 0x224
	// Line 462, Address: 0x138a80, Func Offset: 0x240
	// Func End, Address: 0x138a94, Func Offset: 0x254
}

// iCameraSetNearFarClip__Fff
// Start address: 0x138aa0
void iCameraSetNearFarClip(float32 near, float32 far)
{
	// Line 419, Address: 0x138aa0, Func Offset: 0
	// Line 420, Address: 0x138ac0, Func Offset: 0x20
	// Line 421, Address: 0x138ae0, Func Offset: 0x40
	// Func End, Address: 0x138ae8, Func Offset: 0x48
}

// iCameraRemoveEnv__FP8RwCameraP4iEnv
// Start address: 0x138af0
void iCameraRemoveEnv(RwCamera* camera, iEnv* env_geom)
{
	// Line 390, Address: 0x138af4, Func Offset: 0x4
	// Func End, Address: 0x138b00, Func Offset: 0x10
}

// iCameraAssignEnv__FP8RwCameraP4iEnv
// Start address: 0x138b00
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom)
{
	// Line 370, Address: 0x138b00, Func Offset: 0
	// Line 374, Address: 0x138b10, Func Offset: 0x10
	// Line 375, Address: 0x138b14, Func Offset: 0x14
	// Line 376, Address: 0x138b24, Func Offset: 0x24
	// Line 382, Address: 0x138b2c, Func Offset: 0x2c
	// Func End, Address: 0x138b3c, Func Offset: 0x3c
}

// iCameraSetFOV__FP8RwCameraf
// Start address: 0x138b40
void iCameraSetFOV(RwCamera* cam, float32 fov)
{
	RwV2d vw;
	float32 view_window;
	// Line 345, Address: 0x138b40, Func Offset: 0
	// Line 344, Address: 0x138b4c, Func Offset: 0xc
	// Line 345, Address: 0x138b50, Func Offset: 0x10
	// Line 344, Address: 0x138b58, Func Offset: 0x18
	// Line 345, Address: 0x138b5c, Func Offset: 0x1c
	// Line 344, Address: 0x138b60, Func Offset: 0x20
	// Line 345, Address: 0x138b64, Func Offset: 0x24
	// Line 355, Address: 0x138b8c, Func Offset: 0x4c
	// Line 354, Address: 0x138b98, Func Offset: 0x58
	// Line 355, Address: 0x138b9c, Func Offset: 0x5c
	// Line 363, Address: 0x138ba4, Func Offset: 0x64
	// Line 355, Address: 0x138bac, Func Offset: 0x6c
	// Line 363, Address: 0x138bc0, Func Offset: 0x80
	// Line 364, Address: 0x138bc8, Func Offset: 0x88
	// Func End, Address: 0x138bd8, Func Offset: 0x98
}

// iCameraUpdatePos__FP8RwCameraP8_xMat4x3
// Start address: 0x138be0
void iCameraUpdatePos(RwCamera* cam, _xMat4x3* pos)
{
	RwMatrixTag* m;
	RwFrame* f;
	// Line 267, Address: 0x138be0, Func Offset: 0
	// Line 274, Address: 0x138bf0, Func Offset: 0x10
	// Line 279, Address: 0x138bf4, Func Offset: 0x14
	// Line 276, Address: 0x138bf8, Func Offset: 0x18
	// Line 279, Address: 0x138bfc, Func Offset: 0x1c
	// Line 283, Address: 0x138c04, Func Offset: 0x24
	// Line 286, Address: 0x138c0c, Func Offset: 0x2c
	// Line 289, Address: 0x138c14, Func Offset: 0x34
	// Line 290, Address: 0x138c1c, Func Offset: 0x3c
	// Func End, Address: 0x138c30, Func Offset: 0x50
}

// iCameraFrustumPlanes__FP8RwCameraP6_xVec4
// Start address: 0x138c30
void iCameraFrustumPlanes(RwCamera* cam, _xVec4* frustplane)
{
	RwFrustumPlane* rwPlane;
	// Line 224, Address: 0x138c30, Func Offset: 0
	// Line 228, Address: 0x138c50, Func Offset: 0x20
	// Line 232, Address: 0x138c70, Func Offset: 0x40
	// Line 236, Address: 0x138c90, Func Offset: 0x60
	// Line 240, Address: 0x138cb0, Func Offset: 0x80
	// Line 244, Address: 0x138cd0, Func Offset: 0xa0
	// Line 248, Address: 0x138cf0, Func Offset: 0xc0
	// Line 252, Address: 0x138d10, Func Offset: 0xe0
	// Line 261, Address: 0x138d2c, Func Offset: 0xfc
	// Func End, Address: 0x138d34, Func Offset: 0x104
}

// iCameraShowRaster__FP8RwCamera
// Start address: 0x138d40
void iCameraShowRaster(RwCamera* cam)
{
	// Line 206, Address: 0x138d40, Func Offset: 0
	// Func End, Address: 0x138d4c, Func Offset: 0xc
}

// iCameraEnd__FP8RwCamera
// Start address: 0x138d50
void iCameraEnd(RwCamera* cam)
{
	// Line 195, Address: 0x138d50, Func Offset: 0
	// Func End, Address: 0x138d58, Func Offset: 0x8
}

// iCameraBegin__FP8RwCamerai
// Start address: 0x138d60
void iCameraBegin(RwCamera* cam, int32 clear)
{
	// Line 149, Address: 0x138d60, Func Offset: 0
	// Line 154, Address: 0x138d6c, Func Offset: 0xc
	// Line 156, Address: 0x138d74, Func Offset: 0x14
	// Line 159, Address: 0x138d88, Func Offset: 0x28
	// Line 160, Address: 0x138d94, Func Offset: 0x34
	// Line 164, Address: 0x138d9c, Func Offset: 0x3c
	// Line 169, Address: 0x138da4, Func Offset: 0x44
	// Line 172, Address: 0x138db0, Func Offset: 0x50
	// Line 173, Address: 0x138db8, Func Offset: 0x58
	// Func End, Address: 0x138dc8, Func Offset: 0x68
}

// iCameraDestroy__FP8RwCamera
// Start address: 0x138dd0
void iCameraDestroy(RwCamera* camera)
{
	RwFrame* frame;
	RwRaster* raster;
	// Line 103, Address: 0x138dd0, Func Offset: 0
	// Line 108, Address: 0x138de0, Func Offset: 0x10
	// Line 114, Address: 0x138de8, Func Offset: 0x18
	// Line 119, Address: 0x138df0, Func Offset: 0x20
	// Line 120, Address: 0x138df4, Func Offset: 0x24
	// Line 122, Address: 0x138dfc, Func Offset: 0x2c
	// Line 124, Address: 0x138e04, Func Offset: 0x34
	// Line 127, Address: 0x138e0c, Func Offset: 0x3c
	// Line 128, Address: 0x138e10, Func Offset: 0x40
	// Line 130, Address: 0x138e18, Func Offset: 0x48
	// Line 132, Address: 0x138e20, Func Offset: 0x50
	// Line 135, Address: 0x138e24, Func Offset: 0x54
	// Line 136, Address: 0x138e28, Func Offset: 0x58
	// Line 138, Address: 0x138e30, Func Offset: 0x60
	// Line 140, Address: 0x138e38, Func Offset: 0x68
	// Line 143, Address: 0x138e3c, Func Offset: 0x6c
	// Line 145, Address: 0x138e48, Func Offset: 0x78
	// Func End, Address: 0x138e5c, Func Offset: 0x8c
}

// iCameraCreate__Fii
// Start address: 0x138e60
RwCamera* iCameraCreate(int32 width, int32 height)
{
	RwCamera* camera;
	RwV2d vw;
	// Line 51, Address: 0x138e60, Func Offset: 0
	// Line 56, Address: 0x138e78, Func Offset: 0x18
	// Line 60, Address: 0x138e80, Func Offset: 0x20
	// Line 61, Address: 0x138e94, Func Offset: 0x34
	// Line 64, Address: 0x138ea8, Func Offset: 0x48
	// Line 61, Address: 0x138eb0, Func Offset: 0x50
	// Line 64, Address: 0x138eb4, Func Offset: 0x54
	// Line 74, Address: 0x138ec4, Func Offset: 0x64
	// Line 75, Address: 0x138ed0, Func Offset: 0x70
	// Line 78, Address: 0x138edc, Func Offset: 0x7c
	// Line 79, Address: 0x138ee4, Func Offset: 0x84
	// Line 80, Address: 0x138ee8, Func Offset: 0x88
	// Line 93, Address: 0x138ef4, Func Offset: 0x94
	// Line 94, Address: 0x138ef8, Func Offset: 0x98
	// Func End, Address: 0x138f10, Func Offset: 0xb0
}

