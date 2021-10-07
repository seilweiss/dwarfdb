typedef struct FakeEntityInfo;
typedef struct _tagxPad;
typedef struct _xBBox;
typedef struct xCutscene;
typedef struct zAssetPickupTable;
typedef struct xCutsceneMphFrame;
typedef struct RpVertexNormal;
typedef struct RxPipelineNode;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct _xEnt;
typedef struct RxPipeline;
typedef struct xAnimSingle;
typedef struct RpMorphTarget;
typedef struct xBase;
typedef struct xCutsceneData;
typedef struct _xEntDrive;
typedef struct _zPortal;
typedef struct _tagCamInfo;
typedef struct _xEntShadow;
typedef struct _zCutsceneMgr;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RpMaterial;
typedef struct zPlayerStatic;
typedef struct RwRGBAReal;
typedef struct xAnimTable;
typedef struct RpSector;
typedef struct RxPipelineCluster;
typedef struct _tagxRumble;
typedef struct zCutsceneZbuffer;
typedef struct iEnv;
typedef struct rxHeapBlockHeader;
typedef struct RpGeometry;
typedef struct RwLLLink;
typedef struct _xEntFrame;
typedef enum RxClusterValid;
typedef struct RwResEntry;
typedef struct xAnimEffect;
typedef struct RpWorld;
typedef struct zScene;
typedef struct xAnimTransition;
typedef struct RwV3d;
typedef struct _tagxCamFollow;
typedef struct rxHeapFreeBlock;
typedef struct _zEnt;
typedef struct RwRaster;
typedef struct _zPlatform;
typedef struct xCutsceneAnimHdr;
typedef struct _xMat4x3;
typedef struct xAnimState;
typedef struct RwCamera;
typedef struct RpClump;
typedef struct xModelInstance;
typedef struct RwV2d;
typedef struct p2BaseAsset;
typedef struct xCutsceneInfo;
typedef struct RpLight;
typedef struct RpPolygon;
typedef struct p2LinkAsset;
typedef struct p2EntHangableAsset;
typedef struct RxNodeDefinition;
typedef struct RxPacket;
typedef struct tag_xFile;
typedef struct iModelTag;
typedef struct RwFrame;
typedef struct RxClusterDefinition;
typedef struct zPortalAsset;
typedef struct _tagxCamPathAsset;
typedef enum RwTextureFilterMode;
typedef struct xModelPool;
typedef struct RpTriangle;
typedef struct _xQuat;
typedef struct RxPipelineRequiresCluster;
typedef struct zCutsceneZbufferHack;
typedef enum XFILE_READSECTOR_STATUS;
typedef struct RwTexDictionary;
typedef struct RwObject;
typedef struct rxReq;
typedef struct iFogParams;
typedef struct RwRGBA;
typedef struct xAnimPlay;
typedef struct iShadowCache;
typedef struct _iCollis;
typedef struct xCutsceneTime;
typedef enum _tagRumbleType;
typedef struct _xVec4;
typedef struct RwFrustumPlane;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct _tagxCam;
typedef struct _xVec3;
typedef struct RwPlane;
typedef struct RwMatrixTag;
typedef struct _tagxCamShoulder;
typedef enum RxClusterForcePresent;
typedef struct RwBBox;
typedef struct tag_iFile;
typedef struct p2EntAsset;
typedef struct sceCdlFILE;
typedef struct RwLinkList;
typedef struct xMorphTargetFile;
typedef struct RpCollSector;
typedef struct _xRot;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RpMeshHeader;
typedef struct _tagxCamFollowAsset;
typedef struct RwTexture;
typedef enum RwFogType;
typedef struct xCamAsset;
typedef struct _xBound;
typedef struct xAnimActiveEffect;
typedef struct zCutsceneMgrAsset;
typedef struct zPlayerGlobals;
typedef struct RxIoSpec;
typedef struct xSurface;
typedef struct _xScene;
typedef struct xMemPool;
typedef struct RwTexCoords;
typedef enum _tagCamType;
typedef struct st_xST_XASSETINFO;
typedef struct RxNodeMethods;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpWorldSector;
typedef struct xAnimFile;
typedef struct RpInterpolator;
typedef struct _tagxCamStatic;
typedef struct RxHeap;
typedef struct xAnimTransitionList;
typedef struct _xCollis;
typedef struct _zEntHangable;
typedef struct _xEntCollis;
typedef struct RxCluster;
typedef struct xCutsceneBreak;
typedef struct zShaggy1Globals;
typedef struct _tagxCamFrame;
typedef enum RxClusterValidityReq;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef enum rxEmbeddedPacketState;
typedef struct _xSphere;
typedef struct zCheckPoint;
typedef struct RwSurfaceProperties;
typedef struct _tagxCamStaticFollow;
typedef struct iSndCutsceneCallbackInfo;
typedef struct zGlobalGameStats;
typedef struct _xCylinder;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineNodeParam;
typedef struct _xEnv;
typedef enum _tagPadState;
typedef struct RwSphere;
typedef struct _xBox;
typedef struct _tagiPad;
typedef struct zJumpParam;
typedef struct _tagxCamPath;
typedef enum RwTextureAddressMode;
typedef struct _tagp2CamStaticAsset;
typedef struct zGlobals;
typedef enum RwCameraProjection;
typedef struct xQCData;
typedef struct RwObjectHasFrame;
typedef struct _tagPadAnalog;
typedef struct xFFX;

typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef xBase*(*type_4)(uint32);
typedef int8*(*type_6)(xBase*);
typedef int32(*type_9)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_11)(uint32);
typedef uint32(*type_12)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_13)(RpAtomic*);
typedef int32(*type_20)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_22)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_23)(iSndCutsceneCallbackInfo*);
typedef int32(*type_27)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_29)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_31)(RxNodeDefinition*);
typedef void(*type_36)(RxNodeDefinition*);
typedef int32(*type_41)(RxPipelineNode*);
typedef RwCamera*(*type_43)(RwCamera*);
typedef RpWorldSector*(*type_44)(RpWorldSector*);
typedef void(*type_46)(RxPipelineNode*);
typedef RwCamera*(*type_50)(RwCamera*);
typedef void(*type_53)(int32);
typedef void(*type_63)(RwResEntry*);
typedef void(*type_65)(int32);
typedef void(*type_70)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_74)(xMemPool*, void*);
typedef void(*type_76)(_xEnt*, _xScene*, float32);
typedef void(*type_80)(_xEnt*);
typedef void(*type_84)(_xEnt*);
typedef void(*type_85)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_87)(_xEnt*, _xVec3*);
typedef uint32(*type_89)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RpClump*(*type_100)(RpClump*, void*);
typedef void(*type_101)(_xEnt*, _xVec3*);
typedef void(*type_111)(_xEnt*);

typedef uint8 type_0[8];
typedef _xEnt type_1[8];
typedef uint8 type_3[3];
typedef uint8 type_5[8];
typedef uint32 type_7[2];
typedef int8 type_8[16];
typedef uint8 type_10[8];
typedef uint32 type_14[2];
typedef int8 type_15[128];
typedef int8 type_16[128][6];
typedef uint8 type_17[8];
typedef uint32 type_18[2];
typedef RxCluster type_19[1];
typedef float32 type_21[4];
typedef uint32 type_24[4];
typedef float32 type_25[4];
typedef uint8 type_26[3];
typedef int8 type_28[32];
typedef float32 type_30[4];
typedef RwMatrixTag type_32[65];
typedef RpLight* type_33[2];
typedef float32 type_34[4];
typedef float32 type_35[3];
typedef uint8 type_37[22];
typedef RwFrame* type_38[2];
typedef float32 type_39[4];
typedef uint16 type_40[3];
typedef uint8 type_42[22];
typedef float32 type_45[3];
typedef uint16 type_47[3];
typedef float32 type_48[4];
typedef float32 type_49[3];
typedef zCutsceneZbuffer type_51[4];
typedef zGlobalGameStats type_52[30];
typedef zGlobalGameStats type_54[13];
typedef _zEnt* type_55[10];
typedef uint32 type_56[1];
typedef zGlobalGameStats type_57[4];
typedef _xVec3 type_58[4];
typedef int32 type_59[2];
typedef float32 type_60[2];
typedef int32 type_61[2];
typedef int8 type_62[128];
typedef uint32 type_64[43];
typedef int8 type_66[16];
typedef uint8 type_67[3];
typedef xBase* type_68[43];
typedef uint8 type_69[8];
typedef int16* type_71[4];
typedef int8 type_72[16];
typedef int8 type_73[16];
typedef int8 type_75[32];
typedef int8 type_77[32];
typedef _xQuat type_78[65];
typedef RwTexCoords* type_79[8];
typedef _xVec3 type_81[65];
typedef uint32 type_82[2];
typedef int16 type_83[4];
typedef RwTexCoords* type_86[8];
typedef float32 type_88[4];
typedef float32 type_90[4];
typedef _xVec4 type_91[8];
typedef uint8 type_92[2];
typedef float32 type_93[15];
typedef RwFrustumPlane type_94[6];
typedef float32 type_95[15];
typedef uint32 type_96[15];
typedef uint8 type_97[3];
typedef RwMatrixTag type_98[65];
typedef RwV3d type_99[8];
typedef int16* type_102[4];
typedef _xVec3 type_103[2];
typedef float32 type_104[4];
typedef int16 type_105[4];
typedef _xQuat type_106[2];
typedef iModelTag type_107[4];
typedef _xCollis type_108[18];
typedef uint32 type_109[4096];
typedef uint32 type_110[2];

struct FakeEntityInfo
{
	RpAtomic* model;
	xCutsceneAnimHdr* ahdr;
	float32 time;
	int16* v_array[4];
	int16 weight[4];
	float32 scale;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct xCutsceneMphFrame
{
	float32 Time;
	uint32 Flags;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RpSector
{
	int32 type;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct _zPlatform
{
};

struct xCutsceneAnimHdr
{
	uint32 RootIndex;
	float32 Translate[3];
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

enum XFILE_READSECTOR_STATUS
{
	XFILE_RDSTAT_NOOP,
	XFILE_RDSTAT_INPROG,
	XFILE_RDSTAT_DONE,
	XFILE_RDSTAT_FAIL
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct rxReq
{
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _iCollis
{
	int32 unknown;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct xMorphTargetFile
{
	uint32 Magic;
	uint16 NumTargets;
	uint16 NumVerts;
	uint32 Flags;
	float32 Scale;
	_xVec3 Center;
	float32 Radius;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct st_xST_XASSETINFO
{
	uint32 aid;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct iSndCutsceneCallbackInfo
{
	uint32 addr;
	uint32 id;
	uint32 seek;
	uint32 size;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _tagiPad
{
	int32 port;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xFFX
{
};

xCutscene sActiveCutscene;
uint32 sCutTocCount;
xCutsceneInfo* sCutTocInfo;
_xEnt sCutsceneFakeEntity[8];
void(*csAsyncReadCB)(int32);
void(*csDrawFakeEntity)(_xEnt*);
uint32 ourGlobals[4096];
_xMat4x3 g_I3;
float32 gCameraLastFov;
zGlobals globals;
uint8* giAnimScratch;
void(*SoundCutsceneCB)(iSndCutsceneCallbackInfo*);

void csAsyncReadCB();
void SoundCutsceneCB(iSndCutsceneCallbackInfo* info);
void* SoundGetData(xCutscene* csn, uint32 channel, uint32 chunk);
void xCutscene_Render(xCutscene* csn, _xEnt** alphaent, int32* alphacnt, float32* alphadist);
void csCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float32 time);
void csDrawFakeEntity(_xEnt* fakeent);
void xCutscene_SetCamera(xCutscene* csn);
int32 xCutscene_Update(xCutscene* csn, float32 dt);
int32 xCutscene_LoadStep(xCutscene* csn);
int32 xCutscene_LoadStart(xCutscene* csn);
int32 xCutscene_Destroy(xCutscene* csn);
xCutscene* xCutscene_Create(uint32 id);
void xCutscene_Init(void* toc);

// csAsyncReadCB__Fi
// Start address: 0x1d04b0
void csAsyncReadCB()
{
	// Line 999, Address: 0x1d04b0, Func Offset: 0
	// Line 1000, Address: 0x1d04b4, Func Offset: 0x4
	// Func End, Address: 0x1d04bc, Func Offset: 0xc
}

// SoundCutsceneCB__FP24iSndCutsceneCallbackInfo
// Start address: 0x1d04c0
void SoundCutsceneCB(iSndCutsceneCallbackInfo* info)
{
	void* data;
	uint32 channel;
	// Line 940, Address: 0x1d04c0, Func Offset: 0
	// Line 950, Address: 0x1d04d0, Func Offset: 0x10
	// Line 952, Address: 0x1d04f0, Func Offset: 0x30
	// Line 959, Address: 0x1d0504, Func Offset: 0x44
	// Line 960, Address: 0x1d0510, Func Offset: 0x50
	// Line 961, Address: 0x1d0520, Func Offset: 0x60
	// Line 962, Address: 0x1d0524, Func Offset: 0x64
	// Line 964, Address: 0x1d0528, Func Offset: 0x68
	// Line 965, Address: 0x1d0530, Func Offset: 0x70
	// Line 968, Address: 0x1d0534, Func Offset: 0x74
	// Line 990, Address: 0x1d0544, Func Offset: 0x84
	// Func End, Address: 0x1d0558, Func Offset: 0x98
}

// SoundGetData__FP9xCutsceneUiUi
// Start address: 0x1d0560
void* SoundGetData(xCutscene* csn, uint32 channel, uint32 chunk)
{
	uint32 channelIndex;
	uint32 numData;
	uint32 dataIndex;
	xCutsceneData* data;
	void* retdata;
	// Line 878, Address: 0x1d0560, Func Offset: 0
	// Line 880, Address: 0x1d057c, Func Offset: 0x1c
	// Line 881, Address: 0x1d0580, Func Offset: 0x20
	// Line 882, Address: 0x1d0588, Func Offset: 0x28
	// Line 883, Address: 0x1d058c, Func Offset: 0x2c
	// Line 882, Address: 0x1d0590, Func Offset: 0x30
	// Line 897, Address: 0x1d0594, Func Offset: 0x34
	// Line 895, Address: 0x1d0598, Func Offset: 0x38
	// Line 897, Address: 0x1d059c, Func Offset: 0x3c
	// Line 915, Address: 0x1d05a4, Func Offset: 0x44
	// Line 898, Address: 0x1d05a8, Func Offset: 0x48
	// Line 901, Address: 0x1d05b8, Func Offset: 0x58
	// Line 903, Address: 0x1d05c0, Func Offset: 0x60
	// Line 904, Address: 0x1d05c4, Func Offset: 0x64
	// Line 907, Address: 0x1d05c8, Func Offset: 0x68
	// Line 910, Address: 0x1d05d0, Func Offset: 0x70
	// Line 915, Address: 0x1d05d8, Func Offset: 0x78
	// Line 916, Address: 0x1d05dc, Func Offset: 0x7c
	// Line 917, Address: 0x1d05e0, Func Offset: 0x80
	// Line 915, Address: 0x1d05e4, Func Offset: 0x84
	// Line 917, Address: 0x1d05f0, Func Offset: 0x90
	// Line 920, Address: 0x1d05f8, Func Offset: 0x98
	// Line 922, Address: 0x1d0600, Func Offset: 0xa0
	// Line 931, Address: 0x1d0608, Func Offset: 0xa8
	// Line 932, Address: 0x1d060c, Func Offset: 0xac
	// Line 934, Address: 0x1d0628, Func Offset: 0xc8
	// Func End, Address: 0x1d0630, Func Offset: 0xd0
}

// xCutscene_Render__FP9xCutscenePP5_xEntPiPf
// Start address: 0x1d0630
void xCutscene_Render(xCutscene* csn, _xEnt** alphaent, int32* alphacnt, float32* alphadist)
{
	FakeEntityInfo* finfo;
	FakeEntityInfo* finfo;
	uint32 skipsize;
	int16 weight[4];
	int16* v_array[4];
	xMorphTargetFile* mphFile;
	xCutsceneMphFrame* mphFrame;
	uint32 numFrame;
	int32 matnum;
	RwTexture* tex;
	RpGeometry* geom;
	uint32 frameIndex;
	uint32 frameMax;
	uint32 frameMin;
	uint32 subIndex;
	uint32* currvis;
	uint32 viscnt;
	uint32 tempSize;
	_xVec3* camVec;
	RwMatrixTag animMat[65];
	RpAtomic* model;
	xCutsceneData* mphdata;
	xCutsceneData* data;
	uint32 backface;
	uint32 hasAlpha;
	uint32 fakeCount;
	uint32 visIdx;
	uint32 visFlags;
	uint32 mphIndex;
	uint32 animIndex;
	uint32 dataIndex;
	uint32 i;
	// Line 597, Address: 0x1d0630, Func Offset: 0
	// Line 600, Address: 0x1d0660, Func Offset: 0x30
	// Line 604, Address: 0x1d0668, Func Offset: 0x38
	// Line 609, Address: 0x1d0680, Func Offset: 0x50
	// Line 600, Address: 0x1d0688, Func Offset: 0x58
	// Line 610, Address: 0x1d068c, Func Offset: 0x5c
	// Line 611, Address: 0x1d069c, Func Offset: 0x6c
	// Line 604, Address: 0x1d06a0, Func Offset: 0x70
	// Line 609, Address: 0x1d06a4, Func Offset: 0x74
	// Line 604, Address: 0x1d06c0, Func Offset: 0x90
	// Line 612, Address: 0x1d06c4, Func Offset: 0x94
	// Line 614, Address: 0x1d06cc, Func Offset: 0x9c
	// Line 617, Address: 0x1d06e0, Func Offset: 0xb0
	// Line 623, Address: 0x1d0768, Func Offset: 0x138
	// Line 621, Address: 0x1d076c, Func Offset: 0x13c
	// Line 623, Address: 0x1d0770, Func Offset: 0x140
	// Line 624, Address: 0x1d0780, Func Offset: 0x150
	// Line 626, Address: 0x1d079c, Func Offset: 0x16c
	// Line 627, Address: 0x1d07a4, Func Offset: 0x174
	// Line 626, Address: 0x1d07a8, Func Offset: 0x178
	// Line 627, Address: 0x1d07ac, Func Offset: 0x17c
	// Line 628, Address: 0x1d07bc, Func Offset: 0x18c
	// Line 630, Address: 0x1d07c4, Func Offset: 0x194
	// Line 632, Address: 0x1d07d8, Func Offset: 0x1a8
	// Line 641, Address: 0x1d07e0, Func Offset: 0x1b0
	// Line 646, Address: 0x1d0820, Func Offset: 0x1f0
	// Line 650, Address: 0x1d0828, Func Offset: 0x1f8
	// Line 652, Address: 0x1d0838, Func Offset: 0x208
	// Line 654, Address: 0x1d083c, Func Offset: 0x20c
	// Line 656, Address: 0x1d0840, Func Offset: 0x210
	// Line 670, Address: 0x1d0858, Func Offset: 0x228
	// Line 659, Address: 0x1d085c, Func Offset: 0x22c
	// Line 658, Address: 0x1d0860, Func Offset: 0x230
	// Line 659, Address: 0x1d0864, Func Offset: 0x234
	// Line 658, Address: 0x1d0868, Func Offset: 0x238
	// Line 662, Address: 0x1d086c, Func Offset: 0x23c
	// Line 659, Address: 0x1d0870, Func Offset: 0x240
	// Line 662, Address: 0x1d0874, Func Offset: 0x244
	// Line 666, Address: 0x1d087c, Func Offset: 0x24c
	// Line 667, Address: 0x1d088c, Func Offset: 0x25c
	// Line 669, Address: 0x1d0890, Func Offset: 0x260
	// Line 670, Address: 0x1d08b4, Func Offset: 0x284
	// Line 674, Address: 0x1d08c8, Func Offset: 0x298
	// Line 675, Address: 0x1d08d8, Func Offset: 0x2a8
	// Line 676, Address: 0x1d08dc, Func Offset: 0x2ac
	// Line 677, Address: 0x1d08e4, Func Offset: 0x2b4
	// Line 680, Address: 0x1d08e8, Func Offset: 0x2b8
	// Line 683, Address: 0x1d0908, Func Offset: 0x2d8
	// Line 687, Address: 0x1d0920, Func Offset: 0x2f0
	// Line 690, Address: 0x1d0928, Func Offset: 0x2f8
	// Line 695, Address: 0x1d0944, Func Offset: 0x314
	// Line 698, Address: 0x1d0948, Func Offset: 0x318
	// Line 697, Address: 0x1d094c, Func Offset: 0x31c
	// Line 699, Address: 0x1d0958, Func Offset: 0x328
	// Line 701, Address: 0x1d0974, Func Offset: 0x344
	// Line 703, Address: 0x1d097c, Func Offset: 0x34c
	// Line 705, Address: 0x1d098c, Func Offset: 0x35c
	// Line 706, Address: 0x1d09a8, Func Offset: 0x378
	// Line 707, Address: 0x1d09ac, Func Offset: 0x37c
	// Line 709, Address: 0x1d09b8, Func Offset: 0x388
	// Line 710, Address: 0x1d09cc, Func Offset: 0x39c
	// Line 713, Address: 0x1d09d0, Func Offset: 0x3a0
	// Line 714, Address: 0x1d09d4, Func Offset: 0x3a4
	// Line 715, Address: 0x1d09d8, Func Offset: 0x3a8
	// Line 717, Address: 0x1d09e0, Func Offset: 0x3b0
	// Line 721, Address: 0x1d09fc, Func Offset: 0x3cc
	// Line 722, Address: 0x1d0a04, Func Offset: 0x3d4
	// Line 723, Address: 0x1d0a0c, Func Offset: 0x3dc
	// Line 726, Address: 0x1d0a24, Func Offset: 0x3f4
	// Line 729, Address: 0x1d0a38, Func Offset: 0x408
	// Line 733, Address: 0x1d0a3c, Func Offset: 0x40c
	// Line 729, Address: 0x1d0a40, Func Offset: 0x410
	// Line 730, Address: 0x1d0a44, Func Offset: 0x414
	// Line 733, Address: 0x1d0a48, Func Offset: 0x418
	// Line 729, Address: 0x1d0a4c, Func Offset: 0x41c
	// Line 730, Address: 0x1d0a6c, Func Offset: 0x43c
	// Line 733, Address: 0x1d0a70, Func Offset: 0x440
	// Line 730, Address: 0x1d0a74, Func Offset: 0x444
	// Line 733, Address: 0x1d0a90, Func Offset: 0x460
	// Line 734, Address: 0x1d0aa0, Func Offset: 0x470
	// Line 735, Address: 0x1d0ab4, Func Offset: 0x484
	// Line 738, Address: 0x1d0ac8, Func Offset: 0x498
	// Line 739, Address: 0x1d0acc, Func Offset: 0x49c
	// Line 738, Address: 0x1d0ad0, Func Offset: 0x4a0
	// Line 739, Address: 0x1d0ae0, Func Offset: 0x4b0
	// Line 740, Address: 0x1d0aec, Func Offset: 0x4bc
	// Line 742, Address: 0x1d0af0, Func Offset: 0x4c0
	// Line 743, Address: 0x1d0af8, Func Offset: 0x4c8
	// Line 744, Address: 0x1d0b00, Func Offset: 0x4d0
	// Line 742, Address: 0x1d0b0c, Func Offset: 0x4dc
	// Line 743, Address: 0x1d0b18, Func Offset: 0x4e8
	// Line 742, Address: 0x1d0b1c, Func Offset: 0x4ec
	// Line 743, Address: 0x1d0b20, Func Offset: 0x4f0
	// Line 744, Address: 0x1d0b28, Func Offset: 0x4f8
	// Line 747, Address: 0x1d0b5c, Func Offset: 0x52c
	// Line 748, Address: 0x1d0b70, Func Offset: 0x540
	// Line 750, Address: 0x1d0b80, Func Offset: 0x550
	// Line 752, Address: 0x1d0b8c, Func Offset: 0x55c
	// Line 753, Address: 0x1d0b98, Func Offset: 0x568
	// Line 754, Address: 0x1d0bb0, Func Offset: 0x580
	// Line 753, Address: 0x1d0bb4, Func Offset: 0x584
	// Line 754, Address: 0x1d0bb8, Func Offset: 0x588
	// Line 756, Address: 0x1d0bc0, Func Offset: 0x590
	// Line 757, Address: 0x1d0bc4, Func Offset: 0x594
	// Line 758, Address: 0x1d0bd0, Func Offset: 0x5a0
	// Line 767, Address: 0x1d0bd4, Func Offset: 0x5a4
	// Line 758, Address: 0x1d0bdc, Func Offset: 0x5ac
	// Line 759, Address: 0x1d0be8, Func Offset: 0x5b8
	// Line 760, Address: 0x1d0bf0, Func Offset: 0x5c0
	// Line 761, Address: 0x1d0bf8, Func Offset: 0x5c8
	// Line 762, Address: 0x1d0c00, Func Offset: 0x5d0
	// Line 763, Address: 0x1d0c08, Func Offset: 0x5d8
	// Line 764, Address: 0x1d0c10, Func Offset: 0x5e0
	// Line 765, Address: 0x1d0c18, Func Offset: 0x5e8
	// Line 766, Address: 0x1d0c20, Func Offset: 0x5f0
	// Line 767, Address: 0x1d0c28, Func Offset: 0x5f8
	// Line 769, Address: 0x1d0c34, Func Offset: 0x604
	// Line 770, Address: 0x1d0c4c, Func Offset: 0x61c
	// Line 773, Address: 0x1d0ca0, Func Offset: 0x670
	// Line 770, Address: 0x1d0ca4, Func Offset: 0x674
	// Line 771, Address: 0x1d0cb8, Func Offset: 0x688
	// Line 775, Address: 0x1d0cc8, Func Offset: 0x698
	// Line 777, Address: 0x1d0cd0, Func Offset: 0x6a0
	// Line 778, Address: 0x1d0cdc, Func Offset: 0x6ac
	// Line 786, Address: 0x1d0d04, Func Offset: 0x6d4
	// Line 789, Address: 0x1d0d0c, Func Offset: 0x6dc
	// Line 790, Address: 0x1d0d14, Func Offset: 0x6e4
	// Line 789, Address: 0x1d0d18, Func Offset: 0x6e8
	// Line 791, Address: 0x1d0d28, Func Offset: 0x6f8
	// Line 793, Address: 0x1d0d3c, Func Offset: 0x70c
	// Line 795, Address: 0x1d0d48, Func Offset: 0x718
	// Line 796, Address: 0x1d0d54, Func Offset: 0x724
	// Line 797, Address: 0x1d0d6c, Func Offset: 0x73c
	// Line 796, Address: 0x1d0d70, Func Offset: 0x740
	// Line 797, Address: 0x1d0d74, Func Offset: 0x744
	// Line 799, Address: 0x1d0d7c, Func Offset: 0x74c
	// Line 800, Address: 0x1d0d80, Func Offset: 0x750
	// Line 801, Address: 0x1d0d8c, Func Offset: 0x75c
	// Line 802, Address: 0x1d0d9c, Func Offset: 0x76c
	// Line 804, Address: 0x1d0da0, Func Offset: 0x770
	// Line 805, Address: 0x1d0db8, Func Offset: 0x788
	// Line 808, Address: 0x1d0e0c, Func Offset: 0x7dc
	// Line 805, Address: 0x1d0e10, Func Offset: 0x7e0
	// Line 806, Address: 0x1d0e24, Func Offset: 0x7f4
	// Line 810, Address: 0x1d0e34, Func Offset: 0x804
	// Line 813, Address: 0x1d0e3c, Func Offset: 0x80c
	// Line 814, Address: 0x1d0e48, Func Offset: 0x818
	// Line 823, Address: 0x1d0e54, Func Offset: 0x824
	// Line 824, Address: 0x1d0e58, Func Offset: 0x828
	// Line 825, Address: 0x1d0e5c, Func Offset: 0x82c
	// Line 824, Address: 0x1d0e60, Func Offset: 0x830
	// Line 825, Address: 0x1d0e64, Func Offset: 0x834
	// Line 826, Address: 0x1d0e70, Func Offset: 0x840
	// Line 829, Address: 0x1d0e78, Func Offset: 0x848
	// Line 832, Address: 0x1d0e90, Func Offset: 0x860
	// Line 833, Address: 0x1d0e94, Func Offset: 0x864
	// Line 835, Address: 0x1d0e98, Func Offset: 0x868
	// Line 836, Address: 0x1d0ea4, Func Offset: 0x874
	// Line 835, Address: 0x1d0eb0, Func Offset: 0x880
	// Line 837, Address: 0x1d0ec8, Func Offset: 0x898
	// Line 838, Address: 0x1d0ee0, Func Offset: 0x8b0
	// Func End, Address: 0x1d0f14, Func Offset: 0x8e4
}

// csCalcAnimMatrices__FP11RwMatrixTagP8RpAtomicP16xCutsceneAnimHdrf
// Start address: 0x1d0f20
void csCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float32 time)
{
	_xVec3* ttt;
	_xQuat* qqq;
	uint32 boneidx;
	uint32 numbone;
	_xVec3 tranresult[65];
	_xQuat quatresult[65];
	// Line 552, Address: 0x1d0f20, Func Offset: 0
	// Line 556, Address: 0x1d0f4c, Func Offset: 0x2c
	// Line 559, Address: 0x1d0f64, Func Offset: 0x44
	// Line 562, Address: 0x1d0f74, Func Offset: 0x54
	// Line 563, Address: 0x1d0f88, Func Offset: 0x68
	// Line 569, Address: 0x1d0f8c, Func Offset: 0x6c
	// Line 563, Address: 0x1d0f90, Func Offset: 0x70
	// Line 564, Address: 0x1d0f94, Func Offset: 0x74
	// Line 565, Address: 0x1d0f9c, Func Offset: 0x7c
	// Line 569, Address: 0x1d0fa0, Func Offset: 0x80
	// Line 570, Address: 0x1d0fb0, Func Offset: 0x90
	// Line 572, Address: 0x1d0fb4, Func Offset: 0x94
	// Line 573, Address: 0x1d0fbc, Func Offset: 0x9c
	// Line 574, Address: 0x1d0fcc, Func Offset: 0xac
	// Line 575, Address: 0x1d0fdc, Func Offset: 0xbc
	// Line 576, Address: 0x1d0fec, Func Offset: 0xcc
	// Line 577, Address: 0x1d0ff0, Func Offset: 0xd0
	// Line 578, Address: 0x1d0ff4, Func Offset: 0xd4
	// Line 579, Address: 0x1d0ff8, Func Offset: 0xd8
	// Line 581, Address: 0x1d1020, Func Offset: 0x100
	// Line 582, Address: 0x1d1024, Func Offset: 0x104
	// Line 583, Address: 0x1d1028, Func Offset: 0x108
	// Line 584, Address: 0x1d102c, Func Offset: 0x10c
	// Line 585, Address: 0x1d1050, Func Offset: 0x130
	// Line 587, Address: 0x1d1064, Func Offset: 0x144
	// Line 588, Address: 0x1d106c, Func Offset: 0x14c
	// Line 589, Address: 0x1d1074, Func Offset: 0x154
	// Line 590, Address: 0x1d1084, Func Offset: 0x164
	// Line 591, Address: 0x1d1094, Func Offset: 0x174
	// Line 593, Address: 0x1d10a4, Func Offset: 0x184
	// Func End, Address: 0x1d10cc, Func Offset: 0x1ac
}

// csDrawFakeEntity__FP5_xEnt
// Start address: 0x1d10d0
void csDrawFakeEntity(_xEnt* fakeent)
{
	FakeEntityInfo* finfo;
	RwMatrixTag animMat[65];
	// Line 528, Address: 0x1d10d0, Func Offset: 0
	// Line 530, Address: 0x1d10dc, Func Offset: 0xc
	// Line 533, Address: 0x1d10e0, Func Offset: 0x10
	// Line 536, Address: 0x1d10f4, Func Offset: 0x24
	// Line 537, Address: 0x1d1100, Func Offset: 0x30
	// Line 538, Address: 0x1d110c, Func Offset: 0x3c
	// Line 539, Address: 0x1d1128, Func Offset: 0x58
	// Line 540, Address: 0x1d1130, Func Offset: 0x60
	// Line 548, Address: 0x1d113c, Func Offset: 0x6c
	// Func End, Address: 0x1d114c, Func Offset: 0x7c
}

// xCutscene_SetCamera__FP9xCutscene
// Start address: 0x1d1150
void xCutscene_SetCamera(xCutscene* csn)
{
	float32 lerp;
	float32* auxdata;
	void* afile;
	xCutsceneAnimHdr* ahdr;
	_xVec3* tranresult;
	_xQuat* quatresult;
	_xMat4x3 camMat;
	float32 camFOV;
	uint32 i;
	uint32 camAux;
	uint32 dataIndex;
	xCutsceneData* data;
	// Line 448, Address: 0x1d1150, Func Offset: 0
	// Line 460, Address: 0x1d1180, Func Offset: 0x30
	// Line 457, Address: 0x1d1184, Func Offset: 0x34
	// Line 453, Address: 0x1d118c, Func Offset: 0x3c
	// Line 461, Address: 0x1d1190, Func Offset: 0x40
	// Line 460, Address: 0x1d1198, Func Offset: 0x48
	// Line 462, Address: 0x1d11a0, Func Offset: 0x50
	// Line 463, Address: 0x1d11a8, Func Offset: 0x58
	// Line 469, Address: 0x1d11b8, Func Offset: 0x68
	// Line 470, Address: 0x1d11bc, Func Offset: 0x6c
	// Line 465, Address: 0x1d11c0, Func Offset: 0x70
	// Line 470, Address: 0x1d11c4, Func Offset: 0x74
	// Line 472, Address: 0x1d11d0, Func Offset: 0x80
	// Line 471, Address: 0x1d11d4, Func Offset: 0x84
	// Line 472, Address: 0x1d11d8, Func Offset: 0x88
	// Line 473, Address: 0x1d11e8, Func Offset: 0x98
	// Line 475, Address: 0x1d1204, Func Offset: 0xb4
	// Line 476, Address: 0x1d1218, Func Offset: 0xc8
	// Line 477, Address: 0x1d1220, Func Offset: 0xd0
	// Line 478, Address: 0x1d122c, Func Offset: 0xdc
	// Line 479, Address: 0x1d1234, Func Offset: 0xe4
	// Line 480, Address: 0x1d1254, Func Offset: 0x104
	// Line 479, Address: 0x1d125c, Func Offset: 0x10c
	// Line 480, Address: 0x1d1260, Func Offset: 0x110
	// Line 479, Address: 0x1d1264, Func Offset: 0x114
	// Line 480, Address: 0x1d126c, Func Offset: 0x11c
	// Line 482, Address: 0x1d1280, Func Offset: 0x130
	// Line 483, Address: 0x1d128c, Func Offset: 0x13c
	// Line 486, Address: 0x1d1290, Func Offset: 0x140
	// Line 487, Address: 0x1d12ac, Func Offset: 0x15c
	// Line 488, Address: 0x1d12b0, Func Offset: 0x160
	// Line 487, Address: 0x1d12bc, Func Offset: 0x16c
	// Line 488, Address: 0x1d12c0, Func Offset: 0x170
	// Line 489, Address: 0x1d12c8, Func Offset: 0x178
	// Line 490, Address: 0x1d12e0, Func Offset: 0x190
	// Line 491, Address: 0x1d12f0, Func Offset: 0x1a0
	// Line 492, Address: 0x1d1300, Func Offset: 0x1b0
	// Line 495, Address: 0x1d1310, Func Offset: 0x1c0
	// Line 496, Address: 0x1d131c, Func Offset: 0x1cc
	// Line 497, Address: 0x1d1334, Func Offset: 0x1e4
	// Line 498, Address: 0x1d1338, Func Offset: 0x1e8
	// Line 500, Address: 0x1d1344, Func Offset: 0x1f4
	// Line 501, Address: 0x1d1348, Func Offset: 0x1f8
	// Line 502, Address: 0x1d1350, Func Offset: 0x200
	// Line 501, Address: 0x1d1354, Func Offset: 0x204
	// Line 503, Address: 0x1d1364, Func Offset: 0x214
	// Line 504, Address: 0x1d137c, Func Offset: 0x22c
	// Func End, Address: 0x1d13ac, Func Offset: 0x25c
}

// xCutscene_Update__FP9xCutscenef
// Start address: 0x1d13b0
int32 xCutscene_Update(xCutscene* csn, float32 dt)
{
	// Line 373, Address: 0x1d13b0, Func Offset: 0
	// Line 378, Address: 0x1d13c4, Func Offset: 0x14
	// Line 379, Address: 0x1d13d4, Func Offset: 0x24
	// Line 380, Address: 0x1d13e4, Func Offset: 0x34
	// Line 381, Address: 0x1d13f0, Func Offset: 0x40
	// Line 382, Address: 0x1d1400, Func Offset: 0x50
	// Line 384, Address: 0x1d1410, Func Offset: 0x60
	// Line 387, Address: 0x1d1418, Func Offset: 0x68
	// Line 390, Address: 0x1d142c, Func Offset: 0x7c
	// Line 392, Address: 0x1d14bc, Func Offset: 0x10c
	// Line 395, Address: 0x1d14d8, Func Offset: 0x128
	// Line 396, Address: 0x1d14f0, Func Offset: 0x140
	// Line 397, Address: 0x1d14f4, Func Offset: 0x144
	// Line 401, Address: 0x1d14fc, Func Offset: 0x14c
	// Line 402, Address: 0x1d1510, Func Offset: 0x160
	// Line 407, Address: 0x1d1518, Func Offset: 0x168
	// Line 408, Address: 0x1d1520, Func Offset: 0x170
	// Line 409, Address: 0x1d1524, Func Offset: 0x174
	// Line 412, Address: 0x1d1530, Func Offset: 0x180
	// Line 413, Address: 0x1d154c, Func Offset: 0x19c
	// Line 419, Address: 0x1d1594, Func Offset: 0x1e4
	// Line 420, Address: 0x1d1598, Func Offset: 0x1e8
	// Func End, Address: 0x1d15b0, Func Offset: 0x200
}

// xCutscene_LoadStep__FP9xCutscene
// Start address: 0x1d15b0
int32 xCutscene_LoadStep(xCutscene* csn)
{
	void* foundModel;
	uint32 tmpSize;
	uint32 skipAccum;
	XFILE_READSECTOR_STATUS cdstat;
	uint32 i;
	// Line 218, Address: 0x1d15b0, Func Offset: 0
	// Line 223, Address: 0x1d15c4, Func Offset: 0x14
	// Line 226, Address: 0x1d15d0, Func Offset: 0x20
	// Line 227, Address: 0x1d15d8, Func Offset: 0x28
	// Line 228, Address: 0x1d15e4, Func Offset: 0x34
	// Line 230, Address: 0x1d15ec, Func Offset: 0x3c
	// Line 237, Address: 0x1d15f0, Func Offset: 0x40
	// Line 239, Address: 0x1d15fc, Func Offset: 0x4c
	// Line 241, Address: 0x1d1604, Func Offset: 0x54
	// Line 245, Address: 0x1d161c, Func Offset: 0x6c
	// Line 252, Address: 0x1d1640, Func Offset: 0x90
	// Line 253, Address: 0x1d1648, Func Offset: 0x98
	// Line 252, Address: 0x1d164c, Func Offset: 0x9c
	// Line 253, Address: 0x1d1658, Func Offset: 0xa8
	// Line 254, Address: 0x1d166c, Func Offset: 0xbc
	// Line 253, Address: 0x1d1674, Func Offset: 0xc4
	// Line 256, Address: 0x1d167c, Func Offset: 0xcc
	// Line 259, Address: 0x1d1684, Func Offset: 0xd4
	// Line 260, Address: 0x1d168c, Func Offset: 0xdc
	// Line 264, Address: 0x1d1694, Func Offset: 0xe4
	// Line 260, Address: 0x1d1698, Func Offset: 0xe8
	// Line 269, Address: 0x1d16a0, Func Offset: 0xf0
	// Line 270, Address: 0x1d16ac, Func Offset: 0xfc
	// Line 271, Address: 0x1d16cc, Func Offset: 0x11c
	// Line 274, Address: 0x1d16fc, Func Offset: 0x14c
	// Line 276, Address: 0x1d1708, Func Offset: 0x158
	// Line 277, Address: 0x1d1710, Func Offset: 0x160
	// Line 278, Address: 0x1d1758, Func Offset: 0x1a8
	// Line 279, Address: 0x1d175c, Func Offset: 0x1ac
	// Line 277, Address: 0x1d1760, Func Offset: 0x1b0
	// Line 279, Address: 0x1d1768, Func Offset: 0x1b8
	// Line 282, Address: 0x1d1770, Func Offset: 0x1c0
	// Line 285, Address: 0x1d1788, Func Offset: 0x1d8
	// Line 286, Address: 0x1d1790, Func Offset: 0x1e0
	// Line 293, Address: 0x1d17a0, Func Offset: 0x1f0
	// Line 297, Address: 0x1d17a8, Func Offset: 0x1f8
	// Line 298, Address: 0x1d17b8, Func Offset: 0x208
	// Line 301, Address: 0x1d17c4, Func Offset: 0x214
	// Line 302, Address: 0x1d1840, Func Offset: 0x290
	// Line 307, Address: 0x1d184c, Func Offset: 0x29c
	// Line 309, Address: 0x1d1854, Func Offset: 0x2a4
	// Line 311, Address: 0x1d1860, Func Offset: 0x2b0
	// Line 312, Address: 0x1d186c, Func Offset: 0x2bc
	// Line 313, Address: 0x1d187c, Func Offset: 0x2cc
	// Line 315, Address: 0x1d18ac, Func Offset: 0x2fc
	// Line 317, Address: 0x1d18d8, Func Offset: 0x328
	// Line 318, Address: 0x1d18e0, Func Offset: 0x330
	// Line 320, Address: 0x1d190c, Func Offset: 0x35c
	// Line 324, Address: 0x1d1910, Func Offset: 0x360
	// Line 325, Address: 0x1d1914, Func Offset: 0x364
	// Line 326, Address: 0x1d1918, Func Offset: 0x368
	// Line 327, Address: 0x1d1920, Func Offset: 0x370
	// Line 328, Address: 0x1d1958, Func Offset: 0x3a8
	// Line 329, Address: 0x1d195c, Func Offset: 0x3ac
	// Line 327, Address: 0x1d1960, Func Offset: 0x3b0
	// Line 329, Address: 0x1d1968, Func Offset: 0x3b8
	// Line 335, Address: 0x1d1970, Func Offset: 0x3c0
	// Line 336, Address: 0x1d1980, Func Offset: 0x3d0
	// Line 337, Address: 0x1d1994, Func Offset: 0x3e4
	// Line 339, Address: 0x1d19d4, Func Offset: 0x424
	// Line 343, Address: 0x1d19dc, Func Offset: 0x42c
	// Line 344, Address: 0x1d19e8, Func Offset: 0x438
	// Line 345, Address: 0x1d19f8, Func Offset: 0x448
	// Line 346, Address: 0x1d1a00, Func Offset: 0x450
	// Line 349, Address: 0x1d1a18, Func Offset: 0x468
	// Line 351, Address: 0x1d1a1c, Func Offset: 0x46c
	// Func End, Address: 0x1d1a34, Func Offset: 0x484
}

// xCutscene_LoadStart__FP9xCutscene
// Start address: 0x1d1a40
int32 xCutscene_LoadStart(xCutscene* csn)
{
	// Line 205, Address: 0x1d1a40, Func Offset: 0
	// Line 209, Address: 0x1d1a54, Func Offset: 0x14
	// Line 210, Address: 0x1d1aa0, Func Offset: 0x60
	// Line 212, Address: 0x1d1aa8, Func Offset: 0x68
	// Line 214, Address: 0x1d1aac, Func Offset: 0x6c
	// Func End, Address: 0x1d1ac0, Func Offset: 0x80
}

// xCutscene_Destroy__FP9xCutscene
// Start address: 0x1d1ac0
int32 xCutscene_Destroy(xCutscene* csn)
{
	XFILE_READSECTOR_STATUS cdstat;
	uint32 i;
	// Line 137, Address: 0x1d1ac0, Func Offset: 0
	// Line 139, Address: 0x1d1ad4, Func Offset: 0x14
	// Line 142, Address: 0x1d1ad8, Func Offset: 0x18
	// Line 152, Address: 0x1d1ae4, Func Offset: 0x24
	// Line 154, Address: 0x1d1aec, Func Offset: 0x2c
	// Line 155, Address: 0x1d1af8, Func Offset: 0x38
	// Line 158, Address: 0x1d1afc, Func Offset: 0x3c
	// Line 166, Address: 0x1d1b04, Func Offset: 0x44
	// Line 167, Address: 0x1d1b10, Func Offset: 0x50
	// Line 169, Address: 0x1d1b2c, Func Offset: 0x6c
	// Line 175, Address: 0x1d1b38, Func Offset: 0x78
	// Line 177, Address: 0x1d1b44, Func Offset: 0x84
	// Line 179, Address: 0x1d1b5c, Func Offset: 0x9c
	// Line 181, Address: 0x1d1b68, Func Offset: 0xa8
	// Line 186, Address: 0x1d1b7c, Func Offset: 0xbc
	// Line 187, Address: 0x1d1b88, Func Offset: 0xc8
	// Line 188, Address: 0x1d1b90, Func Offset: 0xd0
	// Line 189, Address: 0x1d1b9c, Func Offset: 0xdc
	// Line 190, Address: 0x1d1ba4, Func Offset: 0xe4
	// Line 195, Address: 0x1d1ba8, Func Offset: 0xe8
	// Line 198, Address: 0x1d1bb0, Func Offset: 0xf0
	// Line 200, Address: 0x1d1bc0, Func Offset: 0x100
	// Line 201, Address: 0x1d1bc4, Func Offset: 0x104
	// Func End, Address: 0x1d1bdc, Func Offset: 0x11c
}

// xCutscene_Create__FUi
// Start address: 0x1d1be0
xCutscene* xCutscene_Create(uint32 id)
{
	uint32 maxload;
	xCutsceneInfo* cnfo;
	uint32 i;
	xCutscene* csn;
	// Line 85, Address: 0x1d1be0, Func Offset: 0
	// Line 90, Address: 0x1d1bf4, Func Offset: 0x14
	// Line 95, Address: 0x1d1bfc, Func Offset: 0x1c
	// Line 96, Address: 0x1d1c04, Func Offset: 0x24
	// Line 97, Address: 0x1d1c14, Func Offset: 0x34
	// Line 100, Address: 0x1d1c1c, Func Offset: 0x3c
	// Line 101, Address: 0x1d1c20, Func Offset: 0x40
	// Line 102, Address: 0x1d1c2c, Func Offset: 0x4c
	// Line 107, Address: 0x1d1c38, Func Offset: 0x58
	// Line 108, Address: 0x1d1c40, Func Offset: 0x60
	// Line 107, Address: 0x1d1c44, Func Offset: 0x64
	// Line 108, Address: 0x1d1c48, Func Offset: 0x68
	// Line 109, Address: 0x1d1c54, Func Offset: 0x74
	// Line 111, Address: 0x1d1c58, Func Offset: 0x78
	// Line 112, Address: 0x1d1c68, Func Offset: 0x88
	// Line 113, Address: 0x1d1c6c, Func Offset: 0x8c
	// Line 114, Address: 0x1d1c74, Func Offset: 0x94
	// Line 117, Address: 0x1d1c94, Func Offset: 0xb4
	// Line 118, Address: 0x1d1c98, Func Offset: 0xb8
	// Line 119, Address: 0x1d1ca0, Func Offset: 0xc0
	// Line 126, Address: 0x1d1ca8, Func Offset: 0xc8
	// Line 119, Address: 0x1d1cac, Func Offset: 0xcc
	// Line 120, Address: 0x1d1cb8, Func Offset: 0xd8
	// Line 121, Address: 0x1d1cd0, Func Offset: 0xf0
	// Line 122, Address: 0x1d1ce4, Func Offset: 0x104
	// Line 123, Address: 0x1d1cec, Func Offset: 0x10c
	// Line 126, Address: 0x1d1cf8, Func Offset: 0x118
	// Line 128, Address: 0x1d1d00, Func Offset: 0x120
	// Line 129, Address: 0x1d1d04, Func Offset: 0x124
	// Line 128, Address: 0x1d1d08, Func Offset: 0x128
	// Line 129, Address: 0x1d1d0c, Func Offset: 0x12c
	// Line 131, Address: 0x1d1d1c, Func Offset: 0x13c
	// Func End, Address: 0x1d1d34, Func Offset: 0x154
}

// xCutscene_Init__FPv
// Start address: 0x1d1d40
void xCutscene_Init(void* toc)
{
	// Line 74, Address: 0x1d1d40, Func Offset: 0
	// Line 75, Address: 0x1d1d50, Func Offset: 0x10
	// Line 76, Address: 0x1d1d64, Func Offset: 0x24
	// Line 77, Address: 0x1d1d6c, Func Offset: 0x2c
	// Line 78, Address: 0x1d1d70, Func Offset: 0x30
	// Line 79, Address: 0x1d1d78, Func Offset: 0x38
	// Line 80, Address: 0x1d1d7c, Func Offset: 0x3c
	// Line 79, Address: 0x1d1d80, Func Offset: 0x40
	// Line 80, Address: 0x1d1d84, Func Offset: 0x44
	// Line 82, Address: 0x1d1d88, Func Offset: 0x48
	// Func End, Address: 0x1d1d98, Func Offset: 0x58
}

