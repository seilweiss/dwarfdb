typedef struct _tagxCam;
typedef struct RwMatrixTag;
typedef struct xCutsceneTime;
typedef struct RwFrame;
typedef struct xCutsceneBreak;
typedef struct _xEntFrame;
typedef struct _xEnt;
typedef struct zScene;
typedef struct zPlayerStatic;
typedef struct xAnimEffect;
typedef struct _zCutsceneMgr;
typedef struct RpLight;
typedef struct RxCluster;
typedef struct RxHeap;
typedef struct RpPolygon;
typedef struct RxClusterRef;
typedef struct rxHeapBlockHeader;
typedef struct RpTriangle;
typedef struct _xEnv;
typedef struct _xSphere;
typedef struct xAnimActiveEffect;
typedef enum RxClusterValidityReq;
typedef struct _zPortal;
typedef struct RxPipelineCluster;
typedef struct xModelPool;
typedef struct _xVec3;
typedef struct xMemPool;
typedef struct RxPipeline;
typedef struct RwSky2DVertexFields;
typedef struct RwSphere;
typedef struct RxClusterDefinition;
typedef struct zCutsceneZbuffer;
typedef struct _xMat4x3;
typedef struct RxOutputSpec;
typedef struct _zPlatform;
typedef struct xModelInstance;
typedef enum rxEmbeddedPacketState;
typedef struct xBase;
typedef struct _tagxCamPath;
typedef struct xAnimSingle;
typedef struct RxPacket;
typedef struct _xEntShadow;
typedef struct _xCylinder;
typedef enum _tagRumbleType;
typedef enum RwTextureAddressMode;
typedef struct _tagp2CamStaticAsset;
typedef struct _xCollis;
typedef struct RxPipelineNode;
typedef struct xAnimTable;
typedef struct _zEnt;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct iShadowCache;
typedef struct _xBox;
typedef struct iEnv;
typedef struct RpCollSector;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct RxPipelineNodeTopSortData;
typedef enum RwCameraProjection;
typedef struct RpWorld;
typedef struct zPortalAsset;
typedef struct RpMeshHeader;
typedef struct RpMaterial;
typedef struct RwObjectHasFrame;
typedef struct tag_xFile;
typedef struct zCutsceneZbufferHack;
typedef struct RxNodeDefinition;
typedef struct p2EntAsset;
typedef struct xAnimState;
typedef struct sceCdlFILE;
typedef struct _xEntDrive;
typedef struct _tagCamInfo;
typedef struct RwTexture;
typedef struct iFogParams;
typedef struct iColor_tag;
typedef struct RpAtomic;
typedef struct p2BaseAsset;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct tag_iFile;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct p2LinkAsset;
typedef struct RwLLLink;
typedef struct _xBound;
typedef struct RwRGBA;
typedef struct _xScene;
typedef struct _tagxCamFollow;
typedef struct rxHeapFreeBlock;
typedef struct RpInterpolator;
typedef struct RwRGBAReal;
typedef struct RwTexCoords;
typedef struct RpWorldSector;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct RwResEntry;
typedef struct RpMorphTarget;
typedef struct RwV3d;
typedef struct RwRaster;
typedef struct zCutsceneMgrAsset;
typedef struct xCutsceneInfo;
typedef struct xCutscene;
typedef struct RpVertexNormal;
typedef struct RwCamera;
typedef struct RwSky2DVertex;
typedef struct _tagxCamPathAsset;
typedef struct _xEntCollis;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef struct _tagxRumble;
typedef enum RxClusterValid;
typedef struct p2EntHangableAsset;
typedef struct RwTexDictionary;
typedef struct RpClump;
typedef struct _tagxCamShoulder;
typedef struct xAnimPlay;
typedef struct RwPlane;
typedef struct zShaggy1Globals;
typedef struct _xQuat;
typedef enum RpWorldRenderOrder;
typedef struct RwLinkList;
typedef struct _xFadeData;
typedef struct RwFrustumPlane;
typedef struct _zEntHangable;
typedef struct xAnimFile;
typedef enum _tagPadState;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct xAnimTransitionList;
typedef struct _tagxCamFollowAsset;
typedef struct rxReq;
typedef struct _tagiPad;
typedef enum RwFogType;
typedef struct xCamAsset;
typedef struct zCheckPoint;
typedef struct zGlobalGameStats;
typedef struct _xRot;
typedef enum _tagCamType;
typedef enum RxClusterForcePresent;
typedef enum RwVideoModeFlag;
typedef struct iModelTag;
typedef struct _tagxCamStatic;
typedef struct RpGeometry;
typedef struct _tagPadAnalog;
typedef enum RxNodeDefEditable;
typedef struct xFFX;
typedef struct xCutsceneData;
typedef struct _tagxPad;
typedef struct RxIoSpec;
typedef struct RpMaterialList;
typedef struct zGlobals;
typedef struct zJumpParam;
typedef struct _tagxCamFrame;
typedef struct xQCData;
typedef struct RpSector;
typedef struct RxNodeMethods;
typedef struct _xBBox;
typedef struct _iCollis;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct RwVideoMode;
typedef struct zAssetPickupTable;
typedef struct _tagxCamStaticFollow;
typedef struct RwSurfaceProperties;

typedef RpAtomic*(*type_2)(RpAtomic*);
typedef RpWorldSector*(*type_7)(RpWorldSector*);
typedef uint32(*type_15)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_22)(uint32);
typedef int32(*type_25)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int8*(*type_26)(xBase*);
typedef int8*(*type_29)(uint32);
typedef int32(*type_32)(RxNodeDefinition*);
typedef uint32(*type_35)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_37)(int32);
typedef void(*type_41)(RxNodeDefinition*);
typedef RwObjectHasFrame*(*type_44)(RwObjectHasFrame*);
typedef void(*type_50)(xMemPool*, void*);
typedef int32(*type_51)(RxPipelineNode*);
typedef void(*type_54)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_58)(RxPipelineNode*);
typedef void(*type_62)(_xEnt*, _xScene*, float32);
typedef int32(*type_64)(RxPipelineNode*, RxPipeline*);
typedef void(*type_65)(_xEnt*);
typedef void(*type_69)(_xEnt*);
typedef void(*type_71)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef RwCamera*(*type_73)(RwCamera*);
typedef uint32(*type_74)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_76)(_xEnt*, _xVec3*);
typedef RwCamera*(*type_77)(RwCamera*);
typedef uint32(*type_78)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_79)(RwResEntry*);
typedef RpClump*(*type_80)(RpClump*, void*);
typedef int32(*type_82)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_83)();
typedef void(*type_85)(_xEnt*, _xVec3*);

typedef uint8 type_0[8];
typedef _xVec3 type_1[2];
typedef _xQuat type_3[2];
typedef int8 type_4[128];
typedef int8 type_5[128][6];
typedef uint8 type_6[22];
typedef uint8 type_8[3];
typedef uint16 type_9[3];
typedef uint8 type_10[22];
typedef uint16 type_11[3];
typedef float32 type_12[4];
typedef float32 type_13[4];
typedef RwFrustumPlane type_14[6];
typedef float32 type_16[4];
typedef int8 type_17[32];
typedef float32 type_18[4];
typedef RwV3d type_19[8];
typedef float32 type_20[4];
typedef float32 type_21[3];
typedef uint32 type_23[2];
typedef float32 type_24[3];
typedef uint8 type_27[3];
typedef uint8 type_28[3];
typedef zGlobalGameStats type_30[30];
typedef _xVec3 type_31[4];
typedef zGlobalGameStats type_33[13];
typedef _zEnt* type_34[10];
typedef uint32 type_36[1];
typedef RwSky2DVertex type_38[4];
typedef zGlobalGameStats type_39[4];
typedef zCutsceneZbuffer type_40[4];
typedef int32 type_42[2];
typedef RpLight* type_43[2];
typedef int8 type_45[16];
typedef int32 type_46[2];
typedef uint8 type_47[3];
typedef RwFrame* type_48[2];
typedef uint8 type_49[8];
typedef RwTexCoords* type_52[8];
typedef int8 type_53[128];
typedef uint16 type_55[4];
typedef <unknown fundamental type (0xa510)> type_56[4];
typedef uint32 type_57[2];
typedef uint32 type_59[2];
typedef uint32 type_60[43];
typedef uint32 type_61[2];
typedef xBase* type_63[43];
typedef float32 type_66[2];
typedef float32 type_67[4];
typedef RwTexCoords* type_68[8];
typedef RxCluster type_70[1];
typedef uint32 type_72[2];
typedef uint32 type_75[4];
typedef int8 type_81[16];
typedef int8 type_84[16];
typedef float32 type_86[4];
typedef float32 type_87[4];
typedef int8 type_88[32];
typedef float32 type_89[4];
typedef int8 type_90[32];
typedef _xCollis type_91[18];
typedef uint8 type_92[2];
typedef float32 type_93[15];
typedef iModelTag type_94[4];
typedef float32 type_95[15];
typedef uint8 type_96[8];
typedef uint32 type_97[15];
typedef uint8 type_98[8];
typedef uint8 type_99[8];
typedef _xVec4 type_100[8];
typedef int8 type_101[16];

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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _zPlatform
{
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLinkList
{
	RwLLLink link;
};

struct _xFadeData
{
	int32 active;
	int32 hold;
	iColor_tag src;
	iColor_tag dest;
	float32 time_passed;
	float32 time_total;
	void(*cb)();
	int32 fancy;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct rxReq
{
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODEFSAA0 = 0x8,
	rwVIDEOMODEFSAA1 = 0x10,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RpSector
{
	int32 type;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _iCollis
{
	int32 unknown;
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

struct RwVideoMode
{
	int32 width;
	int32 height;
	int32 depth;
	RwVideoModeFlag flags;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

_xFadeData mFade;
float32 mLetterboxO;
float32 mLetterboxTO;
_xMat4x3 g_I3;
iColor_tag g_BLACK;
int32 gGameState;
zGlobals globals;

int32 xScrFxIsFading();
int32 xScrFxIsLetterbox();
void xScrFxLetterbox(int32 enable);
void xScrFxFade(iColor_tag* base, iColor_tag* dest, float32 seconds, void(*callback)(), int32 hold);
void xScrFxUpdate(RwCamera* cam, float32 seconds);
void DrawScreenSizeRectangle();
void xScrFxInit();

// xScrFxIsFading__Fv
// Start address: 0x111f10
int32 xScrFxIsFading()
{
	// Line 533, Address: 0x111f10, Func Offset: 0
	// Line 534, Address: 0x111f14, Func Offset: 0x4
	// Func End, Address: 0x111f1c, Func Offset: 0xc
}

// xScrFxIsLetterbox__Fv
// Start address: 0x111f20
int32 xScrFxIsLetterbox()
{
	// Line 519, Address: 0x111f20, Func Offset: 0
	// Line 528, Address: 0x111f40, Func Offset: 0x20
	// Func End, Address: 0x111f48, Func Offset: 0x28
}

// xScrFxLetterbox__Fi
// Start address: 0x111f50
void xScrFxLetterbox(int32 enable)
{
	// Line 493, Address: 0x111f50, Func Offset: 0
	// Line 495, Address: 0x111f5c, Func Offset: 0xc
	// Line 496, Address: 0x111f6c, Func Offset: 0x1c
	// Line 498, Address: 0x111f70, Func Offset: 0x20
	// Line 506, Address: 0x111f78, Func Offset: 0x28
	// Line 509, Address: 0x111f80, Func Offset: 0x30
	// Line 511, Address: 0x111f84, Func Offset: 0x34
	// Func End, Address: 0x111f94, Func Offset: 0x44
}

// xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vii
// Start address: 0x111fa0
void xScrFxFade(iColor_tag* base, iColor_tag* dest, float32 seconds, void(*callback)(), int32 hold)
{
	// Line 458, Address: 0x111fa0, Func Offset: 0
	// Line 459, Address: 0x111fb0, Func Offset: 0x10
	// Line 460, Address: 0x111fd0, Func Offset: 0x30
	// Line 461, Address: 0x111ff0, Func Offset: 0x50
	// Line 462, Address: 0x111ff4, Func Offset: 0x54
	// Line 464, Address: 0x111ff8, Func Offset: 0x58
	// Line 465, Address: 0x112000, Func Offset: 0x60
	// Line 467, Address: 0x112008, Func Offset: 0x68
	// Line 469, Address: 0x11200c, Func Offset: 0x6c
	// Func End, Address: 0x112014, Func Offset: 0x74
}

// xScrFxUpdate__FP8RwCameraf
// Start address: 0x112020
void xScrFxUpdate(RwCamera* cam, float32 seconds)
{
	iColor_tag col;
	_xMat4x3 old_head;
	_xMat4x3 old;
	float32 sc;
	float32 sc;
	float32 dog_z;
	float32 dog_y;
	int32 entering_scene;
	float32 t;
	// Line 136, Address: 0x112020, Func Offset: 0
	// Line 138, Address: 0x112044, Func Offset: 0x24
	// Line 140, Address: 0x112104, Func Offset: 0xe4
	// Line 141, Address: 0x11210c, Func Offset: 0xec
	// Line 142, Address: 0x11211c, Func Offset: 0xfc
	// Line 143, Address: 0x112124, Func Offset: 0x104
	// Line 176, Address: 0x11212c, Func Offset: 0x10c
	// Line 178, Address: 0x112134, Func Offset: 0x114
	// Line 180, Address: 0x112144, Func Offset: 0x124
	// Line 183, Address: 0x112154, Func Offset: 0x134
	// Line 185, Address: 0x112164, Func Offset: 0x144
	// Line 186, Address: 0x112168, Func Offset: 0x148
	// Line 189, Address: 0x112170, Func Offset: 0x150
	// Line 190, Address: 0x11218c, Func Offset: 0x16c
	// Line 192, Address: 0x112194, Func Offset: 0x174
	// Line 193, Address: 0x1121a0, Func Offset: 0x180
	// Line 196, Address: 0x1121a4, Func Offset: 0x184
	// Line 193, Address: 0x1121b4, Func Offset: 0x194
	// Line 196, Address: 0x1121b8, Func Offset: 0x198
	// Line 199, Address: 0x1121c0, Func Offset: 0x1a0
	// Line 200, Address: 0x1121d0, Func Offset: 0x1b0
	// Line 202, Address: 0x1121dc, Func Offset: 0x1bc
	// Line 203, Address: 0x1121e0, Func Offset: 0x1c0
	// Line 205, Address: 0x1121ec, Func Offset: 0x1cc
	// Line 210, Address: 0x1121f4, Func Offset: 0x1d4
	// Line 214, Address: 0x112200, Func Offset: 0x1e0
	// Line 216, Address: 0x112214, Func Offset: 0x1f4
	// Line 224, Address: 0x112218, Func Offset: 0x1f8
	// Line 227, Address: 0x112228, Func Offset: 0x208
	// Line 228, Address: 0x112234, Func Offset: 0x214
	// Line 229, Address: 0x112240, Func Offset: 0x220
	// Line 230, Address: 0x11224c, Func Offset: 0x22c
	// Line 236, Address: 0x112258, Func Offset: 0x238
	// Line 238, Address: 0x11227c, Func Offset: 0x25c
	// Line 239, Address: 0x112284, Func Offset: 0x264
	// Line 246, Address: 0x11228c, Func Offset: 0x26c
	// Line 248, Address: 0x112294, Func Offset: 0x274
	// Line 249, Address: 0x11229c, Func Offset: 0x27c
	// Line 248, Address: 0x1122a0, Func Offset: 0x280
	// Line 256, Address: 0x1122a4, Func Offset: 0x284
	// Line 255, Address: 0x1122a8, Func Offset: 0x288
	// Line 251, Address: 0x1122ac, Func Offset: 0x28c
	// Line 256, Address: 0x1122b0, Func Offset: 0x290
	// Line 249, Address: 0x1122b4, Func Offset: 0x294
	// Line 250, Address: 0x1122b8, Func Offset: 0x298
	// Line 255, Address: 0x1122bc, Func Offset: 0x29c
	// Line 250, Address: 0x1122c0, Func Offset: 0x2a0
	// Line 251, Address: 0x1122c4, Func Offset: 0x2a4
	// Line 252, Address: 0x1122cc, Func Offset: 0x2ac
	// Line 253, Address: 0x1122d8, Func Offset: 0x2b8
	// Line 254, Address: 0x1122e4, Func Offset: 0x2c4
	// Line 257, Address: 0x1122ec, Func Offset: 0x2cc
	// Line 260, Address: 0x1122f4, Func Offset: 0x2d4
	// Line 269, Address: 0x1122f8, Func Offset: 0x2d8
	// Line 260, Address: 0x1122fc, Func Offset: 0x2dc
	// Line 261, Address: 0x112300, Func Offset: 0x2e0
	// Line 268, Address: 0x112304, Func Offset: 0x2e4
	// Line 262, Address: 0x112308, Func Offset: 0x2e8
	// Line 261, Address: 0x11230c, Func Offset: 0x2ec
	// Line 269, Address: 0x112310, Func Offset: 0x2f0
	// Line 261, Address: 0x112314, Func Offset: 0x2f4
	// Line 262, Address: 0x112318, Func Offset: 0x2f8
	// Line 263, Address: 0x11231c, Func Offset: 0x2fc
	// Line 268, Address: 0x112320, Func Offset: 0x300
	// Line 263, Address: 0x112324, Func Offset: 0x304
	// Line 264, Address: 0x112328, Func Offset: 0x308
	// Line 265, Address: 0x112330, Func Offset: 0x310
	// Line 266, Address: 0x11233c, Func Offset: 0x31c
	// Line 267, Address: 0x112348, Func Offset: 0x328
	// Line 275, Address: 0x112354, Func Offset: 0x334
	// Line 276, Address: 0x112368, Func Offset: 0x348
	// Line 277, Address: 0x112384, Func Offset: 0x364
	// Line 280, Address: 0x112388, Func Offset: 0x368
	// Line 277, Address: 0x11238c, Func Offset: 0x36c
	// Line 278, Address: 0x112394, Func Offset: 0x374
	// Line 280, Address: 0x1123a0, Func Offset: 0x380
	// Line 281, Address: 0x1123b4, Func Offset: 0x394
	// Line 282, Address: 0x1123cc, Func Offset: 0x3ac
	// Line 287, Address: 0x1123d0, Func Offset: 0x3b0
	// Line 282, Address: 0x1123d4, Func Offset: 0x3b4
	// Line 283, Address: 0x1123e0, Func Offset: 0x3c0
	// Line 287, Address: 0x1123ec, Func Offset: 0x3cc
	// Line 289, Address: 0x1123f4, Func Offset: 0x3d4
	// Line 290, Address: 0x1123fc, Func Offset: 0x3dc
	// Line 291, Address: 0x112408, Func Offset: 0x3e8
	// Line 292, Address: 0x11241c, Func Offset: 0x3fc
	// Line 295, Address: 0x112434, Func Offset: 0x414
	// Line 297, Address: 0x11243c, Func Offset: 0x41c
	// Line 306, Address: 0x112444, Func Offset: 0x424
	// Line 297, Address: 0x11244c, Func Offset: 0x42c
	// Line 298, Address: 0x112450, Func Offset: 0x430
	// Line 299, Address: 0x112458, Func Offset: 0x438
	// Line 300, Address: 0x112460, Func Offset: 0x440
	// Line 301, Address: 0x11246c, Func Offset: 0x44c
	// Line 302, Address: 0x112478, Func Offset: 0x458
	// Line 306, Address: 0x112480, Func Offset: 0x460
	// Line 307, Address: 0x112488, Func Offset: 0x468
	// Line 308, Address: 0x112494, Func Offset: 0x474
	// Line 310, Address: 0x1124a0, Func Offset: 0x480
	// Line 393, Address: 0x1124a8, Func Offset: 0x488
	// Line 400, Address: 0x1124b0, Func Offset: 0x490
	// Line 401, Address: 0x112504, Func Offset: 0x4e4
	// Line 402, Address: 0x112558, Func Offset: 0x538
	// Line 403, Address: 0x1125ac, Func Offset: 0x58c
	// Line 407, Address: 0x112600, Func Offset: 0x5e0
	// Line 413, Address: 0x11260c, Func Offset: 0x5ec
	// Line 415, Address: 0x112628, Func Offset: 0x608
	// Line 416, Address: 0x112638, Func Offset: 0x618
	// Line 418, Address: 0x112648, Func Offset: 0x628
	// Line 420, Address: 0x112650, Func Offset: 0x630
	// Line 422, Address: 0x112660, Func Offset: 0x640
	// Line 423, Address: 0x112670, Func Offset: 0x650
	// Line 424, Address: 0x112680, Func Offset: 0x660
	// Line 428, Address: 0x112684, Func Offset: 0x664
	// Line 431, Address: 0x1126a0, Func Offset: 0x680
	// Line 436, Address: 0x1126ac, Func Offset: 0x68c
	// Line 437, Address: 0x1126b4, Func Offset: 0x694
	// Func End, Address: 0x1126dc, Func Offset: 0x6bc
}

// DrawScreenSizeRectangle__Fv
// Start address: 0x1126e0
void DrawScreenSizeRectangle()
{
	RwVideoMode video_mode;
	uint16 indices[4];
	RwSky2DVertex v[4];
	// Line 88, Address: 0x1126e0, Func Offset: 0
	// Line 97, Address: 0x1126e8, Func Offset: 0x8
	// Line 100, Address: 0x1126fc, Func Offset: 0x1c
	// Line 101, Address: 0x112708, Func Offset: 0x28
	// Line 103, Address: 0x11270c, Func Offset: 0x2c
	// Line 105, Address: 0x112710, Func Offset: 0x30
	// Line 124, Address: 0x112714, Func Offset: 0x34
	// Line 118, Address: 0x112718, Func Offset: 0x38
	// Line 124, Address: 0x11271c, Func Offset: 0x3c
	// Line 105, Address: 0x112728, Func Offset: 0x48
	// Line 106, Address: 0x112730, Func Offset: 0x50
	// Line 107, Address: 0x112734, Func Offset: 0x54
	// Line 109, Address: 0x112738, Func Offset: 0x58
	// Line 110, Address: 0x11273c, Func Offset: 0x5c
	// Line 111, Address: 0x112748, Func Offset: 0x68
	// Line 113, Address: 0x11274c, Func Offset: 0x6c
	// Line 114, Address: 0x112750, Func Offset: 0x70
	// Line 115, Address: 0x112754, Func Offset: 0x74
	// Line 118, Address: 0x112758, Func Offset: 0x78
	// Line 119, Address: 0x112768, Func Offset: 0x88
	// Line 120, Address: 0x112778, Func Offset: 0x98
	// Line 121, Address: 0x112788, Func Offset: 0xa8
	// Line 124, Address: 0x112794, Func Offset: 0xb4
	// Line 125, Address: 0x11279c, Func Offset: 0xbc
	// Func End, Address: 0x1127a8, Func Offset: 0xc8
}

// xScrFxInit__Fv
// Start address: 0x1127b0
void xScrFxInit()
{
	// Line 61, Address: 0x1127b0, Func Offset: 0
	// Line 62, Address: 0x1127b4, Func Offset: 0x4
	// Line 61, Address: 0x1127b8, Func Offset: 0x8
	// Line 62, Address: 0x1127bc, Func Offset: 0xc
	// Line 64, Address: 0x1127cc, Func Offset: 0x1c
	// Line 65, Address: 0x1127d0, Func Offset: 0x20
	// Line 66, Address: 0x1127d4, Func Offset: 0x24
	// Func End, Address: 0x1127e0, Func Offset: 0x30
}

