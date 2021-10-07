typedef struct _tagxPad;
typedef enum RxClusterValidityReq;
typedef struct iShadowCache;
typedef struct _zEnt;
typedef struct RxPipelineCluster;
typedef struct RpWorldSector;
typedef struct _zMovePoint;
typedef struct _tagxCam;
typedef struct xAnimSingle;
typedef struct xBase;
typedef struct zPortalAsset;
typedef struct RwSphere;
typedef struct RxClusterDefinition;
typedef struct _xCylinder;
typedef struct rxHeapBlockHeader;
typedef struct xAnimTable;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct xSpline3;
typedef struct RpWorld;
typedef struct zAssetPickupTable;
typedef struct xSerial;
typedef struct RxPacket;
typedef struct RpGeometry;
typedef struct p2EntAsset;
typedef struct _xEnv;
typedef struct xAnimEffect;
typedef struct _xMat4x3;
typedef struct _xVec3;
typedef struct xAnimTransition;
typedef enum RwTextureAddressMode;
typedef struct iEnv;
typedef struct _xScene;
typedef struct _zCutsceneMgr;
typedef struct xCutscene;
typedef struct RpAtomic;
typedef struct zPlayerStatic;
typedef struct _xBox;
typedef struct RxPipelineNode;
typedef struct RpCollSector;
typedef struct RpMorphTarget;
typedef struct p2LinkAsset;
typedef struct RpMeshHeader;
typedef struct xCutsceneInfo;
typedef struct _xEnt;
typedef struct xAnimState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _tagxCamPath;
typedef struct _xBound;
typedef enum RwCameraProjection;
typedef struct zScene;
typedef struct RxPipeline;
typedef struct RpSector;
typedef struct xCutsceneData;
typedef struct _tagp2CamStaticAsset;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct _xEntFrame;
typedef struct RwResEntry;
typedef struct _xMovePoint;
typedef enum _tagRumbleType;
typedef struct _zEntHangable;
typedef struct _zPlatform;
typedef struct RpLight;
typedef struct p2MovePointAsset;
typedef struct RwV3d;
typedef struct RwObjectHasFrame;
typedef struct RwLLLink;
typedef struct RxNodeDefinition;
typedef struct RwFrame;
typedef struct xCutsceneBreak;
typedef struct p2EntHangableAsset;
typedef struct xCutsceneTime;
typedef struct RpClump;
typedef struct xCoef3;
typedef struct _zPortal;
typedef struct RwRGBAReal;
typedef struct _xEntCollis;
typedef struct RpVertexNormal;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterialList;
typedef struct _xEntDrive;
typedef struct _tagCamInfo;
typedef struct RpTriangle;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct xModelInstance;
typedef struct xMemPool;
typedef struct RpMaterial;
typedef struct RxPipelineRequiresCluster;
typedef struct zCutsceneZbuffer;
typedef struct RwV2d;
typedef struct _tagxCamFollow;
typedef struct RwCamera;
typedef struct _xCollis;
typedef struct RwRaster;
typedef struct xAnimActiveEffect;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef struct _iCollis;
typedef struct xAnimPlay;
typedef enum RxClusterValid;
typedef struct RpPolygon;
typedef struct zPlayerGlobals;
typedef struct _tagxCamPathAsset;
typedef struct xSurface;
typedef struct RwRGBA;
typedef struct RwTexDictionary;
typedef struct p2BaseAsset;
typedef struct _xQuat;
typedef struct xAnimFile;
typedef struct tag_xFile;
typedef struct RwPlane;
typedef struct xCoef;
typedef struct iFogParams;
typedef struct zCutsceneZbufferHack;
typedef struct xAnimTransitionList;
typedef struct sceCdlFILE;
typedef struct _tagxRumble;
typedef struct RwLinkList;
typedef struct RwFrustumPlane;
typedef struct _xVec4;
typedef struct iModelTag;
typedef struct RwBBox;
typedef struct tag_iFile;
typedef struct xModelPool;
typedef struct _tagxCamShoulder;
typedef struct RpInterpolator;
typedef struct rxReq;
typedef struct RwTexCoords;
typedef enum RwFogType;
typedef struct _xRot;
typedef struct xQCData;
typedef struct RwTexture;
typedef struct _tagxCamFollowAsset;
typedef struct xFFX;
typedef enum _tagPadState;
typedef struct zShaggy1Globals;
typedef struct xCamAsset;
typedef struct zCutsceneMgrAsset;
typedef enum RxClusterForcePresent;
typedef struct _xBBox;
typedef struct _tagiPad;
typedef struct RxClusterRef;
typedef enum _tagCamType;
typedef struct zCheckPoint;
typedef enum RxNodeDefEditable;
typedef struct _xEntShadow;
typedef struct RwMatrixTag;
typedef struct RxIoSpec;
typedef struct zGlobalGameStats;
typedef struct _tagxCamStatic;
typedef struct _tagPadAnalog;
typedef struct RxNodeMethods;
typedef enum RpWorldRenderOrder;
typedef struct _xRay3;
typedef struct RwSurfaceProperties;
typedef struct _tagxCamFrame;
typedef struct zJumpParam;
typedef struct RxHeap;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct _xSphere;
typedef struct RxCluster;
typedef struct zGlobals;
typedef struct _tagxCamStaticFollow;

typedef RpClump*(*type_1)(RpClump*, void*);
typedef xBase*(*type_2)(uint32);
typedef int32(*type_4)(void*, _xVec3*, _zMovePoint*);
typedef RpWorldSector*(*type_5)(RpWorldSector*);
typedef int8*(*type_7)(xBase*);
typedef uint32(*type_8)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int8*(*type_9)(uint32);
typedef RpAtomic*(*type_16)(RpAtomic*);
typedef uint32(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_21)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_24)(RxNodeDefinition*);
typedef void(*type_28)(_xEnt*, _xScene*, float32);
typedef void(*type_31)(RxNodeDefinition*);
typedef RwObjectHasFrame*(*type_33)(RwObjectHasFrame*);
typedef void(*type_35)(_xEnt*);
typedef int32(*type_39)(RxPipelineNode*);
typedef void(*type_41)(_xEnt*);
typedef void(*type_42)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_43)(RxPipelineNode*);
typedef void(*type_47)(_xEnt*, _xVec3*);
typedef void(*type_51)(xMemPool*, void*);
typedef int32(*type_54)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_55)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwCamera*(*type_57)(RwCamera*);
typedef uint32(*type_59)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_60)(void*, _xVec3*, _zMovePoint*);
typedef RwCamera*(*type_63)(RwCamera*);
typedef int32(*type_64)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_65)(_xEnt*, _xVec3*);
typedef void(*type_67)(int32);
typedef void(*type_70)(RwResEntry*);
typedef int32(*type_84)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_0[15];
typedef uint32 type_3[15];
typedef RwFrustumPlane type_6[6];
typedef _xVec3 type_10[4];
typedef RwV3d type_11[8];
typedef uint8 type_12[22];
typedef uint8 type_13[22];
typedef int8 type_14[128];
typedef int8 type_15[128][6];
typedef uint8 type_17[3];
typedef float32 type_20[4];
typedef RpLight* type_22[2];
typedef float32 type_23[4];
typedef int8 type_25[32];
typedef float32 type_26[4];
typedef RwFrame* type_27[2];
typedef uint32 type_29[2];
typedef float32 type_30[4];
typedef int8 type_32[16];
typedef float32 type_34[4];
typedef uint8 type_36[3];
typedef float32 type_37[4];
typedef float32 type_38[3];
typedef float32 type_40[3];
typedef uint16 type_44[3];
typedef zGlobalGameStats type_45[30];
typedef float32 type_46[2];
typedef zGlobalGameStats type_48[13];
typedef _zEnt* type_49[10];
typedef uint32 type_50[1];
typedef zGlobalGameStats type_52[4];
typedef int32 type_53[2];
typedef int32 type_56[2];
typedef RxCluster type_58[1];
typedef uint32 type_61[4];
typedef uint16 type_62[3];
typedef float32 type_66[4];
typedef zCutsceneZbuffer type_68[4];
typedef int8 type_69[16];
typedef uint8 type_71[8];
typedef uint32 type_72[2];
typedef RwTexCoords* type_73[8];
typedef uint32 type_74[43];
typedef int8 type_75[128];
typedef float32 type_76[4];
typedef _xCollis type_77[18];
typedef uint32 type_78[2];
typedef xBase* type_79[43];
typedef float32 type_80[4];
typedef uint32 type_81[2];
typedef float32 type_82[4];
typedef uint32 type_83[2];
typedef uint8 type_85[8];
typedef uint8 type_86[2];
typedef uint8 type_87[8];
typedef int8 type_88[32];
typedef uint8 type_89[8];
typedef int8 type_90[32];
typedef uint8 type_91[8];
typedef int8 type_92[16];
typedef int8 type_93[16];
typedef uint8 type_94[3];
typedef uint8 type_95[2];
typedef _xVec3 type_96[2];
typedef _xQuat type_97[2];
typedef RwTexCoords* type_98[8];
typedef uint8 type_99[3];
typedef float32 type_100[15];
typedef iModelTag type_101[4];
typedef _xVec4 type_102[8];

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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct _zMovePoint : _xMovePoint
{
	uint32 unused;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	_xVec3* points;
	float32* time;
	_xVec3* p12;
	_xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct xSerial
{
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RpSector
{
	int32 type;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _xMovePoint : xBase
{
	p2MovePointAsset* asset;
	_xVec3* pos;
	_xMovePoint** nodes;
	_xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 flg_props;
	uint8 pad[2];
	float32 delay;
	xSpline3* spl;
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

struct _zPlatform
{
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

struct p2MovePointAsset : p2BaseAsset
{
	_xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct _iCollis
{
	int32 unknown;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct xCoef
{
	float32 a[4];
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct rxReq
{
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct xFFX
{
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _tagiPad
{
	int32 port;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct _tagxCamStatic
{
	uint32 unused;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

_zMovePoint* g_mvpt_list;
int32 g_mvpt_cnt;
zGlobals globals;
int32(*MVPT_dflt_chklos)(void*, _xVec3*, _zMovePoint*);
int32(*zMovePointEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

int32 MVPT_dflt_chklos(_xVec3* mypos, _zMovePoint* mvpt);
_zMovePoint* zMovePointFindNearest(int32 flg_opts, _xVec3* yourpos, float32 okdist, float32 nohope, void* yourdata, int32(*losfunc)(void*, _xVec3*, _zMovePoint*), int32* idx_resume, _zMovePoint** prev_best);
_zMovePoint* zMovePointFindNearest(int32 flg_opts, _xVec3* yourpos, void* yourdata, int32(*losfunc)(void*, _xVec3*, _zMovePoint*));
int32 zMovePointIsOn(_zMovePoint* m);
float32 zMovePointGetDelay(_zMovePoint* m);
_xVec3* zMovePointGetPos(_zMovePoint* m);
float32 zMovePointGetNext(_zMovePoint* current, _zMovePoint* prev, _zMovePoint** next, _xVec3* hdng);
int32 zMovePointEventCB(xBase* to, uint32 toEvent);
void zMovePointLoad(_zMovePoint* ent, xSerial* s);
void zMovePointSave(_zMovePoint* ent, xSerial* s);
_zMovePoint* zMovePoint_From_xAssetID(uint32 aid);
void zMovePointSetup(_zMovePoint* mvpt, zScene* scn);
_zMovePoint* zMovePoint_GetInst(int32 n);
void zMovePointInit(_zMovePoint* m, p2MovePointAsset* asset);
_zMovePoint* zMovePoint_GetMemPool(int32 cnt);

// MVPT_dflt_chklos__FPvP6_xVec3PC11_zMovePoint
// Start address: 0x19ca90
int32 MVPT_dflt_chklos(_xVec3* mypos, _zMovePoint* mvpt)
{
	_xCollis colrec;
	_xVec3 vec_tgt;
	_xRay3 ray_los;
	// Line 481, Address: 0x19ca90, Func Offset: 0
	// Line 482, Address: 0x19ca98, Func Offset: 0x8
	// Line 481, Address: 0x19ca9c, Func Offset: 0xc
	// Line 482, Address: 0x19caa0, Func Offset: 0x10
	// Line 483, Address: 0x19cab4, Func Offset: 0x24
	// Line 494, Address: 0x19cab8, Func Offset: 0x28
	// Line 482, Address: 0x19cac0, Func Offset: 0x30
	// Line 483, Address: 0x19cac8, Func Offset: 0x38
	// Line 482, Address: 0x19cad0, Func Offset: 0x40
	// Line 484, Address: 0x19cad4, Func Offset: 0x44
	// Line 483, Address: 0x19cadc, Func Offset: 0x4c
	// Line 484, Address: 0x19cae4, Func Offset: 0x54
	// Line 493, Address: 0x19cae8, Func Offset: 0x58
	// Line 483, Address: 0x19caf0, Func Offset: 0x60
	// Line 484, Address: 0x19caf8, Func Offset: 0x68
	// Line 493, Address: 0x19cb20, Func Offset: 0x90
	// Line 494, Address: 0x19cb3c, Func Offset: 0xac
	// Line 498, Address: 0x19cb6c, Func Offset: 0xdc
	// Line 499, Address: 0x19cb90, Func Offset: 0x100
	// Line 501, Address: 0x19cb9c, Func Offset: 0x10c
	// Line 506, Address: 0x19cba4, Func Offset: 0x114
	// Line 502, Address: 0x19cbac, Func Offset: 0x11c
	// Line 503, Address: 0x19cbb0, Func Offset: 0x120
	// Line 506, Address: 0x19cbb4, Func Offset: 0x124
	// Line 511, Address: 0x19cbc4, Func Offset: 0x134
	// Line 513, Address: 0x19cbc8, Func Offset: 0x138
	// Line 511, Address: 0x19cbd0, Func Offset: 0x140
	// Line 513, Address: 0x19cbd8, Func Offset: 0x148
	// Func End, Address: 0x19cbe0, Func Offset: 0x150
}

// zMovePointFindNearest__FiP6_xVec3ffPvPFPvP6_xVec3PC11_zMovePoint_iPiPP11_zMovePoint
// Start address: 0x19cbe0
_zMovePoint* zMovePointFindNearest(int32 flg_opts, _xVec3* yourpos, float32 okdist, float32 nohope, void* yourdata, int32(*losfunc)(void*, _xVec3*, _zMovePoint*), int32* idx_resume, _zMovePoint** prev_best)
{
	_xVec3 delta;
	float32 ds2_far;
	float32 ds2_best;
	float32 ds2_nohope;
	float32 ds2_ok;
	int32 rc;
	int32 suspend;
	int32 eidx;
	int32 sidx;
	int32 i;
	_zMovePoint* cur_best;
	_zMovePoint* da_mvpt;
	// Line 308, Address: 0x19cbe0, Func Offset: 0
	// Line 325, Address: 0x19cc1c, Func Offset: 0x3c
	// Line 308, Address: 0x19cc24, Func Offset: 0x44
	// Line 327, Address: 0x19cc30, Func Offset: 0x50
	// Line 325, Address: 0x19cc34, Func Offset: 0x54
	// Line 309, Address: 0x19cc44, Func Offset: 0x64
	// Line 327, Address: 0x19cc48, Func Offset: 0x68
	// Line 322, Address: 0x19cc60, Func Offset: 0x80
	// Line 327, Address: 0x19cc68, Func Offset: 0x88
	// Line 329, Address: 0x19cc70, Func Offset: 0x90
	// Line 323, Address: 0x19cc74, Func Offset: 0x94
	// Line 311, Address: 0x19cc78, Func Offset: 0x98
	// Line 329, Address: 0x19cc7c, Func Offset: 0x9c
	// Line 336, Address: 0x19cc80, Func Offset: 0xa0
	// Line 338, Address: 0x19cca0, Func Offset: 0xc0
	// Line 341, Address: 0x19ccb4, Func Offset: 0xd4
	// Line 342, Address: 0x19ccb8, Func Offset: 0xd8
	// Line 343, Address: 0x19ccc0, Func Offset: 0xe0
	// Line 347, Address: 0x19ccd0, Func Offset: 0xf0
	// Line 349, Address: 0x19ccdc, Func Offset: 0xfc
	// Line 350, Address: 0x19cd00, Func Offset: 0x120
	// Line 353, Address: 0x19cd10, Func Offset: 0x130
	// Line 354, Address: 0x19cd1c, Func Offset: 0x13c
	// Line 355, Address: 0x19cd20, Func Offset: 0x140
	// Line 356, Address: 0x19cd28, Func Offset: 0x148
	// Line 357, Address: 0x19cd38, Func Offset: 0x158
	// Line 356, Address: 0x19cd3c, Func Offset: 0x15c
	// Line 357, Address: 0x19cd64, Func Offset: 0x184
	// Line 359, Address: 0x19cd6c, Func Offset: 0x18c
	// Line 360, Address: 0x19cd78, Func Offset: 0x198
	// Line 362, Address: 0x19cd80, Func Offset: 0x1a0
	// Line 367, Address: 0x19cd98, Func Offset: 0x1b8
	// Line 371, Address: 0x19cda0, Func Offset: 0x1c0
	// Line 370, Address: 0x19cda4, Func Offset: 0x1c4
	// Line 377, Address: 0x19cda8, Func Offset: 0x1c8
	// Line 384, Address: 0x19cdf8, Func Offset: 0x218
	// Line 387, Address: 0x19ce04, Func Offset: 0x224
	// Line 390, Address: 0x19ce10, Func Offset: 0x230
	// Line 391, Address: 0x19ce28, Func Offset: 0x248
	// Line 394, Address: 0x19ce40, Func Offset: 0x260
	// Line 395, Address: 0x19ce5c, Func Offset: 0x27c
	// Line 398, Address: 0x19ce60, Func Offset: 0x280
	// Line 399, Address: 0x19ce98, Func Offset: 0x2b8
	// Line 400, Address: 0x19cea4, Func Offset: 0x2c4
	// Line 401, Address: 0x19cec4, Func Offset: 0x2e4
	// Line 404, Address: 0x19cee0, Func Offset: 0x300
	// Line 405, Address: 0x19ceec, Func Offset: 0x30c
	// Line 408, Address: 0x19cef4, Func Offset: 0x314
	// Line 412, Address: 0x19cf10, Func Offset: 0x330
	// Line 415, Address: 0x19cf38, Func Offset: 0x358
	// Line 420, Address: 0x19cf50, Func Offset: 0x370
	// Line 422, Address: 0x19cf5c, Func Offset: 0x37c
	// Line 423, Address: 0x19cf70, Func Offset: 0x390
	// Line 432, Address: 0x19cf78, Func Offset: 0x398
	// Line 427, Address: 0x19cf7c, Func Offset: 0x39c
	// Line 432, Address: 0x19cf80, Func Offset: 0x3a0
	// Line 434, Address: 0x19cfa0, Func Offset: 0x3c0
	// Line 438, Address: 0x19cfa8, Func Offset: 0x3c8
	// Line 440, Address: 0x19cfb8, Func Offset: 0x3d8
	// Line 446, Address: 0x19cfc8, Func Offset: 0x3e8
	// Line 449, Address: 0x19cfd4, Func Offset: 0x3f4
	// Line 450, Address: 0x19cfe8, Func Offset: 0x408
	// Line 451, Address: 0x19cff8, Func Offset: 0x418
	// Line 452, Address: 0x19d000, Func Offset: 0x420
	// Line 455, Address: 0x19d00c, Func Offset: 0x42c
	// Line 456, Address: 0x19d020, Func Offset: 0x440
	// Line 457, Address: 0x19d02c, Func Offset: 0x44c
	// Line 458, Address: 0x19d034, Func Offset: 0x454
	// Line 461, Address: 0x19d044, Func Offset: 0x464
	// Line 463, Address: 0x19d04c, Func Offset: 0x46c
	// Line 464, Address: 0x19d050, Func Offset: 0x470
	// Line 465, Address: 0x19d058, Func Offset: 0x478
	// Line 467, Address: 0x19d068, Func Offset: 0x488
	// Line 471, Address: 0x19d06c, Func Offset: 0x48c
	// Line 467, Address: 0x19d070, Func Offset: 0x490
	// Line 471, Address: 0x19d074, Func Offset: 0x494
	// Line 477, Address: 0x19d07c, Func Offset: 0x49c
	// Line 478, Address: 0x19d080, Func Offset: 0x4a0
	// Func End, Address: 0x19d0c8, Func Offset: 0x4e8
}

// zMovePointFindNearest__FiP6_xVec3PvPFPvP6_xVec3PC11_zMovePoint_i
// Start address: 0x19d0d0
_zMovePoint* zMovePointFindNearest(int32 flg_opts, _xVec3* yourpos, void* yourdata, int32(*losfunc)(void*, _xVec3*, _zMovePoint*))
{
	// Line 286, Address: 0x19d0d0, Func Offset: 0
	// Func End, Address: 0x19d0f4, Func Offset: 0x24
}

// zMovePointIsOn__FPC11_zMovePoint
// Start address: 0x19d100
int32 zMovePointIsOn(_zMovePoint* m)
{
	// Line 263, Address: 0x19d100, Func Offset: 0
	// Line 265, Address: 0x19d110, Func Offset: 0x10
	// Func End, Address: 0x19d118, Func Offset: 0x18
}

// zMovePointGetDelay__FPC11_zMovePoint
// Start address: 0x19d120
float32 zMovePointGetDelay(_zMovePoint* m)
{
	// Line 258, Address: 0x19d120, Func Offset: 0
	// Func End, Address: 0x19d128, Func Offset: 0x8
}

// zMovePointGetPos__FPC11_zMovePoint
// Start address: 0x19d130
_xVec3* zMovePointGetPos(_zMovePoint* m)
{
	// Line 239, Address: 0x19d130, Func Offset: 0
	// Func End, Address: 0x19d138, Func Offset: 0x8
}

// zMovePointGetNext__FPC11_zMovePointPC11_zMovePointPP11_zMovePointP6_xVec3
// Start address: 0x19d140
float32 zMovePointGetNext(_zMovePoint* current, _zMovePoint* prev, _zMovePoint** next, _xVec3* hdng)
{
	float32 dist;
	// Line 230, Address: 0x19d140, Func Offset: 0
	// Func End, Address: 0x19d148, Func Offset: 0x8
}

// zMovePointEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x19d150
int32 zMovePointEventCB(xBase* to, uint32 toEvent)
{
	_zMovePoint* m;
	// Line 192, Address: 0x19d150, Func Offset: 0
	// Line 197, Address: 0x19d154, Func Offset: 0x4
	// Line 205, Address: 0x19d188, Func Offset: 0x38
	// Line 209, Address: 0x19d190, Func Offset: 0x40
	// Line 212, Address: 0x19d198, Func Offset: 0x48
	// Line 217, Address: 0x19d1a0, Func Offset: 0x50
	// Line 216, Address: 0x19d1a4, Func Offset: 0x54
	// Line 217, Address: 0x19d1a8, Func Offset: 0x58
	// Func End, Address: 0x19d1b0, Func Offset: 0x60
}

// zMovePointLoad__FP11_zMovePointP7xSerial
// Start address: 0x19d1b0
void zMovePointLoad(_zMovePoint* ent, xSerial* s)
{
	// Line 166, Address: 0x19d1b0, Func Offset: 0
	// Func End, Address: 0x19d1b8, Func Offset: 0x8
}

// zMovePointSave__FP11_zMovePointP7xSerial
// Start address: 0x19d1c0
void zMovePointSave(_zMovePoint* ent, xSerial* s)
{
	// Line 147, Address: 0x19d1c0, Func Offset: 0
	// Func End, Address: 0x19d1c8, Func Offset: 0x8
}

// zMovePoint_From_xAssetID__FUi
// Start address: 0x19d1d0
_zMovePoint* zMovePoint_From_xAssetID(uint32 aid)
{
	int32 i;
	_zMovePoint* da_mvpt;
	// Line 119, Address: 0x19d1d0, Func Offset: 0
	// Line 115, Address: 0x19d1d8, Func Offset: 0x8
	// Line 119, Address: 0x19d1dc, Func Offset: 0xc
	// Line 122, Address: 0x19d1e4, Func Offset: 0x14
	// Line 125, Address: 0x19d1f4, Func Offset: 0x24
	// Line 127, Address: 0x19d1fc, Func Offset: 0x2c
	// Line 134, Address: 0x19d210, Func Offset: 0x40
	// Func End, Address: 0x19d218, Func Offset: 0x48
}

// zMovePointSetup__FP11_zMovePointP6zScene
// Start address: 0x19d220
void zMovePointSetup(_zMovePoint* mvpt, zScene* scn)
{
	// Line 108, Address: 0x19d220, Func Offset: 0
	// Func End, Address: 0x19d228, Func Offset: 0x8
}

// zMovePoint_GetInst__Fi
// Start address: 0x19d230
_zMovePoint* zMovePoint_GetInst(int32 n)
{
	// Line 102, Address: 0x19d230, Func Offset: 0
	// Line 103, Address: 0x19d248, Func Offset: 0x18
	// Func End, Address: 0x19d250, Func Offset: 0x20
}

// zMovePointInit__FP11_zMovePointP16p2MovePointAsset
// Start address: 0x19d250
void zMovePointInit(_zMovePoint* m, p2MovePointAsset* asset)
{
	// Line 70, Address: 0x19d250, Func Offset: 0
	// Line 74, Address: 0x19d264, Func Offset: 0x14
	// Line 76, Address: 0x19d26c, Func Offset: 0x1c
	// Line 78, Address: 0x19d278, Func Offset: 0x28
	// Line 79, Address: 0x19d284, Func Offset: 0x34
	// Line 80, Address: 0x19d294, Func Offset: 0x44
	// Line 81, Address: 0x19d29c, Func Offset: 0x4c
	// Line 89, Address: 0x19d2a0, Func Offset: 0x50
	// Func End, Address: 0x19d2b4, Func Offset: 0x64
}

// zMovePoint_GetMemPool__Fi
// Start address: 0x19d2c0
_zMovePoint* zMovePoint_GetMemPool(int32 cnt)
{
	// Line 59, Address: 0x19d2c0, Func Offset: 0
	// Line 60, Address: 0x19d2d0, Func Offset: 0x10
	// Line 62, Address: 0x19d2e0, Func Offset: 0x20
	// Line 64, Address: 0x19d300, Func Offset: 0x40
	// Line 66, Address: 0x19d304, Func Offset: 0x44
	// Line 65, Address: 0x19d30c, Func Offset: 0x4c
	// Line 66, Address: 0x19d310, Func Offset: 0x50
	// Func End, Address: 0x19d318, Func Offset: 0x58
}

