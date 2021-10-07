typedef struct RpMaterial;
typedef enum RwTextureAddressMode;
typedef struct xSndVoiceInfo;
typedef struct RpGeometry;
typedef struct iEnv;
typedef struct xAnimTable;
typedef struct xAnimEffect;
typedef struct _tagxCam;
typedef struct RwV3d;
typedef struct _xEntShadow;
typedef struct xBase;
typedef struct zCutsceneZbufferHack;
typedef struct RwLLLink;
typedef struct RwObjectHasFrame;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct RpSector;
typedef struct RpWorld;
typedef struct _zEnt;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimSingle;
typedef struct _xEnv;
typedef struct xAnimState;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct _xVec3;
typedef struct iShadowCache;
typedef struct RpLight;
typedef struct xModelInstance;
typedef struct p2BaseAsset;
typedef struct RpPolygon;
typedef struct _xMat4x3;
typedef struct RxNodeDefinition;
typedef struct RpTriangle;
typedef struct p2EntHangableAsset;
typedef struct _tagxCamPath;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct iModelTag;
typedef struct _tagp2CamStaticAsset;
typedef struct RxPipeline;
typedef struct p2EntAsset;
typedef enum _tagRumbleType;
typedef struct xModelPool;
typedef struct RwRaster;
typedef struct _zCutsceneMgr;
typedef struct zAssetPickupTable;
typedef struct rxHeapBlockHeader;
typedef struct xCutsceneBreak;
typedef struct RwCamera;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct zCutsceneMgrAsset;
typedef struct xAnimPlay;
typedef struct rxHeapFreeBlock;
typedef struct xCutscene;
typedef struct _xEnt;
typedef struct RwRGBAReal;
typedef struct RpAtomic;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RxClusterDefinition;
typedef struct _xEntFrame;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct RwTexDictionary;
typedef struct xSndVol;
typedef struct _xQuat;
typedef struct _xEntDrive;
typedef struct RpCollSector;
typedef struct _tagCamInfo;
typedef struct xMemPool;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct iSndFileInfo;
typedef struct _iCollis;
typedef struct RpMeshHeader;
typedef struct RwMatrixTag;
typedef enum RwTextureFilterMode;
typedef struct xAnimActiveEffect;
typedef struct RwFrustumPlane;
typedef struct _xVec4;
typedef enum RxClusterValid;
typedef struct RwObject;
typedef struct _xEntCollis;
typedef struct _tagxCamFollow;
typedef struct RwTexture;
typedef struct RwBBox;
typedef struct zShaggy1Globals;
typedef struct xCutsceneTime;
typedef struct RwRGBA;
typedef struct _xRot;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct xAnimFile;
typedef struct tag_xFile;
typedef struct RwPlane;
typedef struct RwResEntry;
typedef struct zCheckPoint;
typedef struct RpWorldSector;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct RwLinkList;
typedef struct xAnimTransitionList;
typedef struct _tagxCamPathAsset;
typedef struct RxPacket;
typedef struct _xCollis;
typedef struct tag_iFile;
typedef struct zGlobalGameStats;
typedef struct _tagxRumble;
typedef struct RpMorphTarget;
typedef struct p2LinkAsset;
typedef struct iFogParams;
typedef struct _zEntHangable;
typedef struct rxReq;
typedef enum RwFogType;
typedef struct iSndCutsceneCallbackInfo;
typedef struct RpVertexNormal;
typedef struct _tagxCamShoulder;
typedef struct RxOutputSpec;
typedef struct zJumpParam;
typedef enum RxClusterForcePresent;
typedef struct xCutsceneData;
typedef enum _tagPadState;
typedef struct RxClusterRef;
typedef struct zGlobals;
typedef struct iSndVol;
typedef enum RxNodeDefEditable;
typedef struct _tagxCamFollowAsset;
typedef enum RpWorldRenderOrder;
typedef struct zPortalAsset;
typedef struct xCamAsset;
typedef struct _tagiPad;
typedef struct _tagxPad;
typedef struct RxIoSpec;
typedef struct xSndGlobals;
typedef struct xQCData;
typedef struct _xSphere;
typedef enum _tagCamType;
typedef struct zScene;
typedef struct xFFX;
typedef struct RxNodeMethods;
typedef struct _xBBox;
typedef struct _zPortal;
typedef struct zPlayerStatic;
typedef struct _tagPadAnalog;
typedef struct _tagxCamStatic;
typedef struct _xCylinder;
typedef struct RwSurfaceProperties;
typedef struct zCutsceneZbuffer;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct _tagxCamFrame;
typedef struct _xBox;
typedef struct _zPlatform;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct RwSphere;
typedef struct RpMaterialList;
typedef enum RwCameraProjection;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCamStaticFollow;
typedef struct iSndInfo;

typedef int8*(*type_1)(uint32);
typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef void(*type_5)(iSndCutsceneCallbackInfo*);
typedef uint32(*type_12)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpAtomic*(*type_16)(RpAtomic*);
typedef int32(*type_20)(RxNodeDefinition*);
typedef RpWorldSector*(*type_21)(RpWorldSector*);
typedef void(*type_31)(RxNodeDefinition*);
typedef int32(*type_35)(RxPipelineNode*);
typedef void(*type_38)(RxPipelineNode*);
typedef void(*type_39)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef RwCamera*(*type_40)(RwCamera*);
typedef xBase*(*type_41)(uint32);
typedef RwCamera*(*type_44)(RwCamera*);
typedef void(*type_45)(_xEnt*, _xScene*, float32);
typedef int32(*type_46)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_47)(xBase*);
typedef void(*type_49)(_xEnt*);
typedef void(*type_50)(xMemPool*, void*);
typedef void(*type_52)(_xEnt*);
typedef uint32(*type_53)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_54)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_57)(_xEnt*, _xVec3*);
typedef void(*type_58)(int32);
typedef uint32(*type_59)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_61)(RwResEntry*);
typedef void(*type_69)(_xEnt*, _xVec3*);
typedef RpClump*(*type_74)(RpClump*, void*);
typedef uint32(*type_91)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);

typedef float32 type_0[3];
typedef float32 type_3[3];
typedef zGlobalGameStats type_6[30];
typedef uint8 type_7[22];
typedef zCutsceneZbuffer type_8[4];
typedef uint8 type_9[3];
typedef zGlobalGameStats type_10[13];
typedef uint8 type_11[22];
typedef _zEnt* type_14[10];
typedef uint32 type_15[1];
typedef zGlobalGameStats type_17[4];
typedef RpLight* type_18[2];
typedef int32 type_19[2];
typedef uint32 type_22[2];
typedef RwFrame* type_23[2];
typedef int32 type_24[2];
typedef _xVec3 type_25[4];
typedef uint16 type_26[3];
typedef uint16 type_27[3];
typedef int8 type_28[16];
typedef uint32 type_29[2];
typedef uint32 type_30[43];
typedef uint32 type_32[2];
typedef xBase* type_33[43];
typedef float32 type_34[4];
typedef uint8 type_36[3];
typedef uint32 type_37[2];
typedef uint8 type_42[3];
typedef float32 type_43[2];
typedef uint32 type_48[2];
typedef RxCluster type_51[1];
typedef uint32 type_55[4];
typedef RwTexCoords* type_56[8];
typedef int8 type_60[16];
typedef uint8 type_62[8];
typedef int8 type_63[32];
typedef int8 type_64[128];
typedef int8 type_65[32];
typedef RwTexCoords* type_66[8];
typedef float32 type_67[4];
typedef float32 type_68[4];
typedef uint8 type_70[2];
typedef float32 type_71[4];
typedef iModelTag type_72[4];
typedef int8 type_73[16];
typedef _xCollis type_75[18];
typedef int8 type_76[16];
typedef _xVec3 type_77[2];
typedef uint8 type_78[8];
typedef uint8 type_79[8];
typedef int8 type_80[128];
typedef RwFrustumPlane type_81[6];
typedef int8 type_82[128][6];
typedef _xQuat type_83[2];
typedef uint8 type_84[8];
typedef xSndVoiceInfo type_85[48];
typedef RwV3d type_86[8];
typedef uint8 type_87[8];
typedef float32 type_88[4];
typedef float32 type_89[15];
typedef float32 type_90[4];
typedef float32 type_92[15];
typedef int8 type_93[32];
typedef float32 type_94[4];
typedef uint32 type_95[15];
typedef uint8 type_96[3];
typedef float32 type_97[4];
typedef float32 type_98[4];
typedef _xVec4 type_99[8];

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RpSector
{
	int32 type;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xSndVol
{
	float32 volL;
	float32 volR;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

struct iSndFileInfo
{
	uint32 assetID;
	uint16 flags;
	uint16 freq;
	uint32 lsn;
	uint16 offset;
	uint16 ID;
	uint32 size;
	uint32 hip_idx;
};

struct _iCollis
{
	int32 unknown;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _tagxCamFollow
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct iSndCutsceneCallbackInfo
{
	uint32 addr;
	uint32 id;
	uint32 seek;
	uint32 size;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct iSndVol
{
	int16 volL;
	int16 volR;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct _tagiPad
{
	int32 port;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct xFFX
{
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _zPlatform
{
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct iSndInfo
{
	uint32 flags;
	iSndVol vol;
	uint32 pitch;
};

xSndGlobals gSnd;
zGlobals globals;

void xSndCutsceneMode(void(*callback)(iSndCutsceneCallbackInfo*));
void xSndSetPitch(uint32 snd, float32 pitch);
void xSndStopChildren(uint32 pid);
void xSndParentDied(uint32 pid);
void xSndStop(uint32 snd);
void xSndPause(uint32 snd, uint32 pause);
void xSndStartStereo(uint32 id1, uint32 id2, float32 pitch);
uint32 xSndIsReady(uint32 id);
void xSndSetFrameFar(_xVec3* pos);
void xSndSetFrame(_xVec3* right, _xVec3* up, _xVec3* at, _xVec3* pos, float32 radius);
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, _xVec3* pos, float32 radius);
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, _xEnt* parent, float32 radius);
uint32 xSndPlay(uint32 id, float32 volL, float32 volR, float32 pitch, uint32 priority, uint32 flags, uint32 parentID);
void xSndExit();
void xSndUpdate(float32 time_elapsed);
void xSndStopAll();
void xSndPauseAll(uint32 pause_effects, uint32 pause_streams);
void xSndSetFXVol(float32 left, float32 right);
void xSndSetStreamVol(float32 left, float32 right);
void xSndSetMasterVol(float32 left, float32 right);
void xSndResume();
void xSndSuspend();
void xSndInit();

// xSndCutsceneMode__FPFP24iSndCutsceneCallbackInfo_v
// Start address: 0x19f700
void xSndCutsceneMode(void(*callback)(iSndCutsceneCallbackInfo*))
{
	// Line 541, Address: 0x19f700, Func Offset: 0
	// Func End, Address: 0x19f708, Func Offset: 0x8
}

// xSndSetPitch__FUif
// Start address: 0x19f710
void xSndSetPitch(uint32 snd, float32 pitch)
{
	// Line 524, Address: 0x19f710, Func Offset: 0
	// Func End, Address: 0x19f718, Func Offset: 0x8
}

// xSndStopChildren__FUi
// Start address: 0x19f720
void xSndStopChildren(uint32 pid)
{
	xSndVoiceInfo* vp;
	uint32 i;
	// Line 501, Address: 0x19f720, Func Offset: 0
	// Line 503, Address: 0x19f734, Func Offset: 0x14
	// Line 505, Address: 0x19f740, Func Offset: 0x20
	// Line 506, Address: 0x19f744, Func Offset: 0x24
	// Line 507, Address: 0x19f760, Func Offset: 0x40
	// Line 508, Address: 0x19f768, Func Offset: 0x48
	// Line 509, Address: 0x19f774, Func Offset: 0x54
	// Line 510, Address: 0x19f778, Func Offset: 0x58
	// Line 511, Address: 0x19f788, Func Offset: 0x68
	// Func End, Address: 0x19f7a0, Func Offset: 0x80
}

// xSndParentDied__FUi
// Start address: 0x19f7a0
void xSndParentDied(uint32 pid)
{
	xSndVoiceInfo* vp;
	uint32 i;
	// Line 490, Address: 0x19f7a0, Func Offset: 0
	// Line 492, Address: 0x19f7a8, Func Offset: 0x8
	// Line 493, Address: 0x19f7ac, Func Offset: 0xc
	// Line 494, Address: 0x19f7b8, Func Offset: 0x18
	// Line 495, Address: 0x19f7c4, Func Offset: 0x24
	// Line 496, Address: 0x19f7c8, Func Offset: 0x28
	// Line 497, Address: 0x19f7d8, Func Offset: 0x38
	// Func End, Address: 0x19f7e0, Func Offset: 0x40
}

// xSndStop__FUi
// Start address: 0x19f7e0
void xSndStop(uint32 snd)
{
	// Line 482, Address: 0x19f7e0, Func Offset: 0
	// Func End, Address: 0x19f7e8, Func Offset: 0x8
}

// xSndPause__FUiUi
// Start address: 0x19f7f0
void xSndPause(uint32 snd, uint32 pause)
{
	// Line 462, Address: 0x19f7f0, Func Offset: 0
	// Func End, Address: 0x19f7f8, Func Offset: 0x8
}

// xSndStartStereo__FUiUif
// Start address: 0x19f800
void xSndStartStereo(uint32 id1, uint32 id2, float32 pitch)
{
	// Line 455, Address: 0x19f800, Func Offset: 0
	// Func End, Address: 0x19f808, Func Offset: 0x8
}

// xSndIsReady__FUi
// Start address: 0x19f810
uint32 xSndIsReady(uint32 id)
{
	// Line 446, Address: 0x19f810, Func Offset: 0
	// Func End, Address: 0x19f818, Func Offset: 0x8
}

// xSndSetFrameFar__FP6_xVec3
// Start address: 0x19f820
void xSndSetFrameFar(_xVec3* pos)
{
	// Line 438, Address: 0x19f820, Func Offset: 0
	// Line 439, Address: 0x19f83c, Func Offset: 0x1c
	// Func End, Address: 0x19f844, Func Offset: 0x24
}

// xSndSetFrame__FP6_xVec3P6_xVec3P6_xVec3P6_xVec3f
// Start address: 0x19f850
void xSndSetFrame(_xVec3* right, _xVec3* up, _xVec3* at, _xVec3* pos, float32 radius)
{
	// Line 423, Address: 0x19f850, Func Offset: 0
	// Line 432, Address: 0x19f854, Func Offset: 0x4
	// Line 423, Address: 0x19f858, Func Offset: 0x8
	// Line 432, Address: 0x19f860, Func Offset: 0x10
	// Line 423, Address: 0x19f864, Func Offset: 0x14
	// Line 424, Address: 0x19f878, Func Offset: 0x28
	// Line 425, Address: 0x19f890, Func Offset: 0x40
	// Line 427, Address: 0x19f8a8, Func Offset: 0x58
	// Line 432, Address: 0x19f8bc, Func Offset: 0x6c
	// Line 433, Address: 0x19f8e0, Func Offset: 0x90
	// Func End, Address: 0x19f8e8, Func Offset: 0x98
}

// xSndPlay3D__FUiffUiUiP6_xVec3f
// Start address: 0x19f8f0
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, _xVec3* pos, float32 radius)
{
	xSndVoiceInfo* vp;
	iSndFileInfo* ip;
	uint32 voice;
	// Line 354, Address: 0x19f8f0, Func Offset: 0
	// Line 363, Address: 0x19f930, Func Offset: 0x40
	// Line 364, Address: 0x19f93c, Func Offset: 0x4c
	// Line 373, Address: 0x19f944, Func Offset: 0x54
	// Line 380, Address: 0x19f94c, Func Offset: 0x5c
	// Line 382, Address: 0x19f95c, Func Offset: 0x6c
	// Line 383, Address: 0x19f964, Func Offset: 0x74
	// Line 387, Address: 0x19f968, Func Offset: 0x78
	// Line 388, Address: 0x19f974, Func Offset: 0x84
	// Line 389, Address: 0x19f980, Func Offset: 0x90
	// Line 392, Address: 0x19f988, Func Offset: 0x98
	// Line 393, Address: 0x19f99c, Func Offset: 0xac
	// Line 394, Address: 0x19f9a0, Func Offset: 0xb0
	// Line 395, Address: 0x19f9a4, Func Offset: 0xb4
	// Line 396, Address: 0x19f9a8, Func Offset: 0xb8
	// Line 405, Address: 0x19f9ac, Func Offset: 0xbc
	// Line 392, Address: 0x19f9b0, Func Offset: 0xc0
	// Line 396, Address: 0x19f9b4, Func Offset: 0xc4
	// Line 397, Address: 0x19f9b8, Func Offset: 0xc8
	// Line 398, Address: 0x19f9bc, Func Offset: 0xcc
	// Line 399, Address: 0x19f9c4, Func Offset: 0xd4
	// Line 400, Address: 0x19f9d4, Func Offset: 0xe4
	// Line 401, Address: 0x19f9d8, Func Offset: 0xe8
	// Line 402, Address: 0x19f9e4, Func Offset: 0xf4
	// Line 405, Address: 0x19f9e8, Func Offset: 0xf8
	// Line 406, Address: 0x19fa00, Func Offset: 0x110
	// Line 407, Address: 0x19fa04, Func Offset: 0x114
	// Line 406, Address: 0x19fa10, Func Offset: 0x120
	// Line 407, Address: 0x19fa20, Func Offset: 0x130
	// Line 408, Address: 0x19fa44, Func Offset: 0x154
	// Line 410, Address: 0x19fa48, Func Offset: 0x158
	// Line 408, Address: 0x19fa4c, Func Offset: 0x15c
	// Line 410, Address: 0x19fa50, Func Offset: 0x160
	// Line 411, Address: 0x19fa58, Func Offset: 0x168
	// Line 413, Address: 0x19fa60, Func Offset: 0x170
	// Func End, Address: 0x19fa8c, Func Offset: 0x19c
}

// xSndPlay3D__FUiffUiUiP5_xEntf
// Start address: 0x19fa90
uint32 xSndPlay3D(uint32 id, float32 vol, float32 pitch, uint32 priority, uint32 flags, _xEnt* parent, float32 radius)
{
	xSndVoiceInfo* vp;
	iSndFileInfo* ip;
	uint32 voice;
	// Line 283, Address: 0x19fa90, Func Offset: 0
	// Line 292, Address: 0x19fad0, Func Offset: 0x40
	// Line 293, Address: 0x19fad8, Func Offset: 0x48
	// Line 296, Address: 0x19fae0, Func Offset: 0x50
	// Line 297, Address: 0x19faec, Func Offset: 0x5c
	// Line 306, Address: 0x19faf4, Func Offset: 0x64
	// Line 313, Address: 0x19fafc, Func Offset: 0x6c
	// Line 315, Address: 0x19fb0c, Func Offset: 0x7c
	// Line 316, Address: 0x19fb14, Func Offset: 0x84
	// Line 320, Address: 0x19fb18, Func Offset: 0x88
	// Line 321, Address: 0x19fb24, Func Offset: 0x94
	// Line 322, Address: 0x19fb30, Func Offset: 0xa0
	// Line 325, Address: 0x19fb38, Func Offset: 0xa8
	// Line 326, Address: 0x19fb4c, Func Offset: 0xbc
	// Line 327, Address: 0x19fb50, Func Offset: 0xc0
	// Line 328, Address: 0x19fb54, Func Offset: 0xc4
	// Line 329, Address: 0x19fb58, Func Offset: 0xc8
	// Line 341, Address: 0x19fb5c, Func Offset: 0xcc
	// Line 342, Address: 0x19fb60, Func Offset: 0xd0
	// Line 341, Address: 0x19fb64, Func Offset: 0xd4
	// Line 342, Address: 0x19fb68, Func Offset: 0xd8
	// Line 325, Address: 0x19fb6c, Func Offset: 0xdc
	// Line 329, Address: 0x19fb70, Func Offset: 0xe0
	// Line 330, Address: 0x19fb74, Func Offset: 0xe4
	// Line 331, Address: 0x19fb78, Func Offset: 0xe8
	// Line 332, Address: 0x19fb80, Func Offset: 0xf0
	// Line 333, Address: 0x19fb90, Func Offset: 0x100
	// Line 334, Address: 0x19fb94, Func Offset: 0x104
	// Line 335, Address: 0x19fba0, Func Offset: 0x110
	// Line 339, Address: 0x19fba4, Func Offset: 0x114
	// Line 340, Address: 0x19fba8, Func Offset: 0x118
	// Line 341, Address: 0x19fbac, Func Offset: 0x11c
	// Line 342, Address: 0x19fbc8, Func Offset: 0x138
	// Line 343, Address: 0x19fbec, Func Offset: 0x15c
	// Line 345, Address: 0x19fbf0, Func Offset: 0x160
	// Line 343, Address: 0x19fbf4, Func Offset: 0x164
	// Line 345, Address: 0x19fbf8, Func Offset: 0x168
	// Line 346, Address: 0x19fc00, Func Offset: 0x170
	// Line 348, Address: 0x19fc08, Func Offset: 0x178
	// Func End, Address: 0x19fc34, Func Offset: 0x1a4
}

// xSndPlay__FUifffUiUiUi
// Start address: 0x19fc40
uint32 xSndPlay(uint32 id, float32 volL, float32 volR, float32 pitch, uint32 priority, uint32 flags, uint32 parentID)
{
	uint32 sceneID;
	xSndVoiceInfo* vp;
	iSndFileInfo* ip;
	uint32 voice;
	// Line 204, Address: 0x19fc40, Func Offset: 0
	// Line 213, Address: 0x19fc68, Func Offset: 0x28
	// Line 214, Address: 0x19fc74, Func Offset: 0x34
	// Line 213, Address: 0x19fc84, Func Offset: 0x44
	// Line 214, Address: 0x19fc94, Func Offset: 0x54
	// Line 221, Address: 0x19fce4, Func Offset: 0xa4
	// Line 222, Address: 0x19fcf8, Func Offset: 0xb8
	// Line 226, Address: 0x19fcfc, Func Offset: 0xbc
	// Line 227, Address: 0x19fd0c, Func Offset: 0xcc
	// Line 236, Address: 0x19fd14, Func Offset: 0xd4
	// Line 243, Address: 0x19fd1c, Func Offset: 0xdc
	// Line 245, Address: 0x19fd2c, Func Offset: 0xec
	// Line 246, Address: 0x19fd34, Func Offset: 0xf4
	// Line 250, Address: 0x19fd38, Func Offset: 0xf8
	// Line 251, Address: 0x19fd44, Func Offset: 0x104
	// Line 252, Address: 0x19fd50, Func Offset: 0x110
	// Line 255, Address: 0x19fd58, Func Offset: 0x118
	// Line 256, Address: 0x19fd6c, Func Offset: 0x12c
	// Line 258, Address: 0x19fd70, Func Offset: 0x130
	// Line 257, Address: 0x19fd74, Func Offset: 0x134
	// Line 258, Address: 0x19fd78, Func Offset: 0x138
	// Line 259, Address: 0x19fd90, Func Offset: 0x150
	// Line 271, Address: 0x19fd94, Func Offset: 0x154
	// Line 259, Address: 0x19fd98, Func Offset: 0x158
	// Line 260, Address: 0x19fd9c, Func Offset: 0x15c
	// Line 261, Address: 0x19fda0, Func Offset: 0x160
	// Line 262, Address: 0x19fda8, Func Offset: 0x168
	// Line 263, Address: 0x19fdac, Func Offset: 0x16c
	// Line 264, Address: 0x19fdb0, Func Offset: 0x170
	// Line 265, Address: 0x19fdc0, Func Offset: 0x180
	// Line 266, Address: 0x19fdc4, Func Offset: 0x184
	// Line 271, Address: 0x19fdd0, Func Offset: 0x190
	// Line 272, Address: 0x19fde0, Func Offset: 0x1a0
	// Line 273, Address: 0x19fde4, Func Offset: 0x1a4
	// Line 272, Address: 0x19fde8, Func Offset: 0x1a8
	// Line 273, Address: 0x19fdec, Func Offset: 0x1ac
	// Line 275, Address: 0x19fdf4, Func Offset: 0x1b4
	// Line 277, Address: 0x19fdfc, Func Offset: 0x1bc
	// Func End, Address: 0x19fe28, Func Offset: 0x1e8
}

// xSndExit__Fv
// Start address: 0x19fe30
void xSndExit()
{
	// Line 189, Address: 0x19fe30, Func Offset: 0
	// Func End, Address: 0x19fe38, Func Offset: 0x8
}

// xSndUpdate__Ff
// Start address: 0x19fe40
void xSndUpdate(float32 time_elapsed)
{
	float32 a;
	// Line 158, Address: 0x19fe40, Func Offset: 0
	// Line 160, Address: 0x19fe60, Func Offset: 0x20
	// Line 158, Address: 0x19fe64, Func Offset: 0x24
	// Line 159, Address: 0x19fe70, Func Offset: 0x30
	// Line 160, Address: 0x19fe7c, Func Offset: 0x3c
	// Line 159, Address: 0x19fe80, Func Offset: 0x40
	// Line 160, Address: 0x19fe84, Func Offset: 0x44
	// Line 161, Address: 0x19fe94, Func Offset: 0x54
	// Line 162, Address: 0x19fea4, Func Offset: 0x64
	// Line 163, Address: 0x19fec4, Func Offset: 0x84
	// Line 164, Address: 0x19fed4, Func Offset: 0x94
	// Line 165, Address: 0x19fedc, Func Offset: 0x9c
	// Line 166, Address: 0x19feec, Func Offset: 0xac
	// Line 167, Address: 0x19fef8, Func Offset: 0xb8
	// Line 168, Address: 0x19ff00, Func Offset: 0xc0
	// Line 167, Address: 0x19ff04, Func Offset: 0xc4
	// Line 168, Address: 0x19ff0c, Func Offset: 0xcc
	// Line 182, Address: 0x19ff18, Func Offset: 0xd8
	// Func End, Address: 0x19ff20, Func Offset: 0xe0
}

// xSndStopAll__Fv
// Start address: 0x19ff20
void xSndStopAll()
{
	uint32 i;
	// Line 140, Address: 0x19ff20, Func Offset: 0
	// Line 143, Address: 0x19ff34, Func Offset: 0x14
	// Line 144, Address: 0x19ff3c, Func Offset: 0x1c
	// Line 145, Address: 0x19ff4c, Func Offset: 0x2c
	// Line 146, Address: 0x19ff54, Func Offset: 0x34
	// Line 147, Address: 0x19ff58, Func Offset: 0x38
	// Line 148, Address: 0x19ff68, Func Offset: 0x48
	// Func End, Address: 0x19ff7c, Func Offset: 0x5c
}

// xSndPauseAll__FUiUi
// Start address: 0x19ff80
void xSndPauseAll(uint32 pause_effects, uint32 pause_streams)
{
	uint32 i;
	// Line 124, Address: 0x19ff80, Func Offset: 0
	// Line 127, Address: 0x19ffa4, Func Offset: 0x24
	// Line 128, Address: 0x19ffac, Func Offset: 0x2c
	// Line 129, Address: 0x19ffbc, Func Offset: 0x3c
	// Line 130, Address: 0x19ffc8, Func Offset: 0x48
	// Line 131, Address: 0x19ffdc, Func Offset: 0x5c
	// Line 132, Address: 0x19ffe8, Func Offset: 0x68
	// Line 133, Address: 0x19fff4, Func Offset: 0x74
	// Line 134, Address: 0x19fff8, Func Offset: 0x78
	// Line 135, Address: 0x1a0008, Func Offset: 0x88
	// Func End, Address: 0x1a0024, Func Offset: 0xa4
}

// xSndSetFXVol__Fff
// Start address: 0x1a0030
void xSndSetFXVol(float32 left, float32 right)
{
	// Line 117, Address: 0x1a0030, Func Offset: 0
	// Line 119, Address: 0x1a003c, Func Offset: 0xc
	// Func End, Address: 0x1a0044, Func Offset: 0x14
}

// xSndSetStreamVol__Fff
// Start address: 0x1a0050
void xSndSetStreamVol(float32 left, float32 right)
{
	// Line 109, Address: 0x1a0050, Func Offset: 0
	// Line 111, Address: 0x1a005c, Func Offset: 0xc
	// Func End, Address: 0x1a0064, Func Offset: 0x14
}

// xSndSetMasterVol__Fff
// Start address: 0x1a0070
void xSndSetMasterVol(float32 left, float32 right)
{
	// Line 101, Address: 0x1a0070, Func Offset: 0
	// Line 103, Address: 0x1a007c, Func Offset: 0xc
	// Func End, Address: 0x1a0084, Func Offset: 0x14
}

// xSndResume__Fv
// Start address: 0x1a0090
void xSndResume()
{
	// Line 93, Address: 0x1a0090, Func Offset: 0
	// Line 94, Address: 0x1a00a4, Func Offset: 0x14
	// Line 95, Address: 0x1a0108, Func Offset: 0x78
	// Func End, Address: 0x1a011c, Func Offset: 0x8c
}

// xSndSuspend__Fv
// Start address: 0x1a0120
void xSndSuspend()
{
	// Line 85, Address: 0x1a0120, Func Offset: 0
	// Line 86, Address: 0x1a013c, Func Offset: 0x1c
	// Line 87, Address: 0x1a01a0, Func Offset: 0x80
	// Line 88, Address: 0x1a027c, Func Offset: 0x15c
	// Func End, Address: 0x1a0294, Func Offset: 0x174
}

// xSndInit__Fv
// Start address: 0x1a02a0
void xSndInit()
{
	_xVec3 origin;
	xSndVoiceInfo* voice;
	uint32 i;
	// Line 54, Address: 0x1a02a0, Func Offset: 0
	// Line 59, Address: 0x1a02a8, Func Offset: 0x8
	// Line 61, Address: 0x1a02b0, Func Offset: 0x10
	// Line 62, Address: 0x1a02bc, Func Offset: 0x1c
	// Line 64, Address: 0x1a02c0, Func Offset: 0x20
	// Line 63, Address: 0x1a02c4, Func Offset: 0x24
	// Line 64, Address: 0x1a02c8, Func Offset: 0x28
	// Line 67, Address: 0x1a02dc, Func Offset: 0x3c
	// Line 68, Address: 0x1a02e8, Func Offset: 0x48
	// Line 69, Address: 0x1a02f0, Func Offset: 0x50
	// Line 70, Address: 0x1a02f8, Func Offset: 0x58
	// Line 73, Address: 0x1a02fc, Func Offset: 0x5c
	// Line 70, Address: 0x1a0300, Func Offset: 0x60
	// Line 73, Address: 0x1a0304, Func Offset: 0x64
	// Line 74, Address: 0x1a031c, Func Offset: 0x7c
	// Line 75, Address: 0x1a0334, Func Offset: 0x94
	// Line 79, Address: 0x1a0340, Func Offset: 0xa0
	// Line 80, Address: 0x1a0348, Func Offset: 0xa8
	// Func End, Address: 0x1a0354, Func Offset: 0xb4
}

