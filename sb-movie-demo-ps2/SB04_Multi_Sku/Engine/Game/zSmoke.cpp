typedef struct xAnimState;
typedef struct RxClusterDefinition;
typedef enum _zPlayerWallJumpState;
typedef struct xUpdateCullEnt;
typedef struct ptank_pool__pos_color_size_uv2;
typedef struct _zPortal;
typedef struct xAnimSingle;
typedef struct xEnt;
typedef struct xBase;
typedef struct tri_data_0;
typedef struct xAnimTable;
typedef struct _class_0;
typedef struct xDynAsset;
typedef struct zSmokeEmitter;
typedef struct xModelInstance;
typedef struct RpInterpolator;
typedef struct _tagxPad;
typedef struct xMemPool;
typedef struct zScene;
typedef enum RxNodeDefEditable;
typedef struct RwFrustumPlane;
typedef struct xUpdateCullGroup;
typedef struct xPortalAsset;
typedef struct xLightKitLight;
typedef enum xCamOrientType;
typedef struct xCoef3;
typedef enum xSndEffect;
typedef struct xCollis;
typedef struct xJSPHeader;
typedef struct RwV3d;
typedef struct xAnimPlay;
typedef enum RwFogType;
typedef struct xJSPNodeInfo;
typedef struct zRewardsMgr;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct xModelPool;
typedef struct xVec3;
typedef struct xAnimEffect;
typedef struct RxIoSpec;
typedef struct xCamGroup;
typedef struct xVec4;
typedef struct xEntAsset;
typedef struct zAssetPickupTable;
typedef struct RpAtomic;
typedef struct zPlayerGlobals;
typedef struct RwBBox;
typedef struct zEnt;
typedef struct zCutsceneMgr;
typedef struct RpWorld;
typedef struct xAnimFile;
typedef struct iEnvMatOrder;
typedef struct RpClump;
typedef struct RwRaster;
typedef struct smoke_type;
typedef struct xMat4x3;
typedef struct _tagiPad;
typedef struct RxPacket;
typedef struct xClumpCollBSPTree;
typedef struct RwPlane;
typedef struct xCamOrientEuler;
typedef struct xQuat;
typedef struct zSmokeSphereVolume;
typedef struct zPlayerCarryInfo;
typedef struct RxOutputSpec;
typedef struct xBBox;
typedef struct xAnimTransitionList;
typedef struct _class_1;
typedef struct zPlayerSettings;
typedef struct PS2DemoGlobals;
typedef struct xLinkAsset;
typedef struct RwTexture;
typedef struct tri_data_1;
typedef struct zSmokeGenom;
typedef struct xSphere;
typedef struct xColor_tag;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct xCam;
typedef struct RxCluster;
typedef struct xLightKit;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xJSPNodeTreeLeaf;
typedef struct xRot;
typedef enum RxClusterValid;
typedef struct xCylinder;
typedef struct xGroupAsset;
typedef struct xBaseAsset;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpSector;
typedef struct xJSPNodeTree;
typedef struct xModelBucket;
typedef struct xCamBlend;
typedef struct xBound;
typedef enum ptank_group_type;
typedef struct xJSPNodeLight;
typedef struct xUpdateCullMgr;
typedef struct xBox;
typedef struct xSurface;
typedef struct iEnv;
typedef struct xAnimMultiFile;
typedef struct xCamConfigCommon;
typedef struct xGrid;
typedef struct xAnimTransition;
typedef struct _class_2;
typedef struct RwV2d;
typedef struct xMat3x3;
typedef struct xEntCollis;
typedef struct RxPipelineCluster;
typedef struct xScene;
typedef enum RxClusterValidityReq;
typedef struct xGridBound;
typedef struct RpGeometry;
typedef struct xAnimPhysicsData;
typedef struct _class_3;
typedef struct RxClusterRef;
typedef struct zJumpParam;
typedef struct xEntFrame;
typedef struct xVec2;
typedef struct _zEnv;
typedef struct xEntBoulder;
typedef struct xJSPNodeTreeBranch;
typedef struct zSceneParameters;
typedef struct zEntHangable;
typedef struct xQCData;
typedef struct xSpline3;
typedef struct xFFX;
typedef struct RpMaterialList;
typedef struct RwFrame;
typedef struct RpLight;
typedef struct RpMorphTarget;
typedef struct zPlatform;
typedef struct smoke_particle;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct analog_data;
typedef struct zLasso;
typedef struct xEnvAsset;
typedef struct asset_type;
typedef struct xCamScreen;
typedef enum _zPlayerType;
typedef struct RwMatrixTag;
typedef struct ptank_pool;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef struct RwCamera;
typedef enum RwCameraProjection;
typedef enum xCamCoordType;
typedef struct render_state;
typedef struct xShadowSimplePoly;
typedef struct xGroup;
typedef struct RwResEntry;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct zCheckPoint;
typedef struct zPlayer;
typedef struct RwSurfaceProperties;
typedef struct _class_4;
typedef struct RxPipelineNode;
typedef struct xCamCoordCylinder;
typedef struct xShadowSimpleCache;
typedef enum sceDemoEndReason;
typedef struct xCamera;
typedef struct xAnimMultiFileEntry;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct xGlobals;
typedef struct xModelTag;
typedef struct RxPipeline;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeTopSortData;
typedef struct xJSPMiniLightTie;
typedef struct xEnv;
typedef struct xEntDrive;
typedef struct xParticleBatchSystem;
typedef struct RxPipelineNodeParam;
typedef struct xCamCoordSphere;
typedef enum iSndHandle;
typedef struct RwTexDictionary;
typedef struct iFogParams;
typedef struct rxReq;
typedef struct xAnimMultiFileBase;
typedef struct xClumpCollBSPVertInfo;
typedef enum _tagPadState;
typedef struct RwTexCoords;
typedef struct xEntShadow;
typedef struct RxPipelineRequiresCluster;
typedef enum zGlobalDemoType;
typedef struct RxHeap;
typedef struct zGlobalSettings;
typedef struct anim_coll_data;
typedef struct xModelPipe;
typedef struct RwLinkList;
typedef struct zPlayerLassoInfo;
typedef struct zLedgeGrabParams;
typedef struct xClumpCollBSPTriangle;
typedef struct xCoef;
typedef struct _class_5;
typedef struct RxNodeDefinition;
typedef struct RpTriangle;
typedef struct _tagPadAnalog;
typedef struct zGlobals;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef uint32(*type_0)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_9)(void*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_15)(xAnimPlay*, xAnimState*, void*);
typedef void(*type_17)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef RpAtomic*(*type_20)(RpAtomic*);
typedef RpWorldSector*(*type_23)(RpWorldSector*);
typedef xBase*(*type_28)(uint32);
typedef uint32(*type_33)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_35)(xEnt*, xScene*, float32, xEntCollis*);
typedef int8*(*type_36)(xBase*);
typedef void(*type_37)(xEnt*, xScene*, float32, xEntFrame*);
typedef int8*(*type_42)(uint32);
typedef void(*type_49)(xEnt*, xScene*, float32);
typedef uint32(*type_53)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_55)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_56)(xEnt*);
typedef uint32(*type_57)(void*, void*);
typedef RwCamera*(*type_58)(RwCamera*);
typedef RwCamera*(*type_59)(RwCamera*);
typedef int32(*type_63)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_64)(xEnt*);
typedef void(*type_72)(xEnt*, xVec3*);
typedef uint32(*type_73)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_76)(RwResEntry*);
typedef int32(*type_77)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_78)(RwObjectHasFrame*);
typedef void(*type_79)(RxPipelineNode*);
typedef int32(*type_84)(RxPipelineNode*);
typedef void(*type_87)(RxNodeDefinition*);
typedef int32(*type_90)(RxNodeDefinition*);
typedef void(*type_91)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_92)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_95)(xMemPool*, void*);
typedef RpClump*(*type_97)(RpClump*, void*);
typedef int32(*type_102)(uint8*, int32, ptank_pool&, float32, void*);

typedef RwV3d type_1[8];
typedef xVec3 type_2[4];
typedef uint32 type_3[4];
typedef RwFrustumPlane type_5[6];
typedef _tagxPad* type_6[4];
typedef uint32 type_7[20];
typedef uint32 type_8[8];
typedef uint16 type_10[3];
typedef uint32 type_12[20];
typedef int8 type_13[4];
typedef uint32 type_14[20];
typedef float32 type_16[2];
typedef uint32 type_18[4];
typedef int8 type_19[32];
typedef uint8 type_21[22];
typedef uint8 type_22[22];
typedef RxCluster type_24[1];
typedef xCam* type_25[32];
typedef int8 type_26[128];
typedef int8 type_27[128][6];
typedef int32 type_29[141];
typedef int8 type_30[32];
typedef xCamBlend* type_31[4];
typedef xModelTag type_32[2];
typedef xBase* type_34[141];
typedef xEntBoulder* type_38[2];
typedef float32 type_39[6];
typedef uint8 type_40[10];
typedef int8 type_41[16];
typedef float32 type_43[22];
typedef float32 type_44[3];
typedef uint8 type_45[10];
typedef float32 type_46[3];
typedef uint32 type_47[2];
typedef float32 type_48[22];
typedef float32 type_50[3];
typedef RwTexCoords* type_51[8];
typedef int8 type_52[16];
typedef float32 type_54[3];
typedef xVec2 type_60[2];
typedef xVec3 type_61[5];
typedef RpLight* type_62[2];
typedef uint8 type_65[5];
typedef xModelTag type_66[4];
typedef RwFrame* type_67[2];
typedef uint8 type_68[3];
typedef xEnt* type_69[161];
typedef xVec3 type_70[3];
typedef analog_data type_71[2];
typedef uint8 type_74[3];
typedef uint8 type_75[2];
typedef float32 type_80[2];
typedef int8 type_81[32];
typedef int8 type_82[16];
typedef int8 type_83[32];
typedef xCollis type_85[18];
typedef xModelInstance* type_86[11];
typedef uint32 type_88[59];
typedef uint8 type_89[4];
typedef smoke_type type_93[32];
typedef xVec4 type_94[12];
typedef xVec4 type_96[12];
typedef int8 type_98[32];
typedef RwTexCoords* type_99[8];
typedef float32 type_100[16];
typedef uint32 type_101[1];
typedef float32 type_103[4];
typedef int8 type_104[127];
typedef float32 type_105[4];
typedef xVec2 type_106[2];
typedef xJSPMiniLightTie type_107[16];
typedef float32 type_108[4];
typedef xAnimMultiFileEntry type_109[1];
typedef xVec3 type_110[60];

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
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	void(*BeforeEnter)(xAnimPlay*, xAnimState*, void*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND,
	k_WALLJUMP_STUCK,
	k_WALLJUMP_FALL
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct ptank_pool__pos_color_size_uv2 : ptank_pool
{
	xVec3* pos;
	xColor_tag* color;
	xVec2* size;
	xVec2* uv;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	float32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
	xVec3 PhysDisp;
	float32 YawDisp;
	uint32 pad[1];
};

struct xEnt : xBase
{
	xEntAsset* asset;
	uint16 idx;
	uint8 flags;
	uint8 miscflags;
	uint8 subType;
	uint8 pflags;
	uint16 moreFlags;
	struct
	{
		uint8 _isCulled : 2;
		uint8 collisionEventReceived : 2;
	};
	uint8 driving_count;
	uint8 num_ffx;
	uint8 collType;
	uint8 collLev;
	uint8 chkby;
	uint8 penby;
	void(*visUpdate)(xEnt*);
	xModelInstance* model;
	xModelInstance* collModel;
	xModelInstance* camcollModel;
	void(*update)(xEnt*, xScene*, float32);
	void(*endUpdate)(xEnt*, xScene*, float32);
	void(*bupdate)(xEnt*, xVec3*);
	void(*move)(xEnt*, xScene*, float32, xEntFrame*);
	void(*render)(xEnt*);
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	void(*transl)(xEnt*, xVec3*, xMat4x3*);
	xFFX* ffx;
	xEnt* driver;
	xEnt* driven;
	int32 driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
};

struct xAnimTable
{
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
};

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct zSmokeEmitter : xBase
{
	int32 system_id;
	asset_type* asset;
	xMat4x3 emit_mat;
	float32 emitted;
	int32 flags;
	xVec3 vel_dir;
	int32 max_frame;
	float32 du;
	float32 dv;
	float32 age_rate_min;
	float32 age_rate_range;
	float32 dr;
	float32 dg;
	float32 db;
	float32 da;

	void update(float32 dt);
	void load(asset_type& a);
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	xModelPipe Pipe;
	uint8 InFrustum;
	uint8 TrueClip;
	int8 sortBias;
	uint8 modelpad;
	float32 RedMultiplier;
	float32 GreenMultiplier;
	float32 BlueMultiplier;
	float32 Alpha;
	float32 FadeStart;
	float32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	uint16 Flags;
	uint8 BoneCount;
	uint8 BoneIndex;
	uint8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	xBox animBound;
	xBox combinedAnimBound;
	uint32 modelID;
	uint32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_4 anim_coll;
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
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
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

struct zScene : xScene
{
	_zPortal* pendingPortal;
	int32 num_base;
	xBase** base;
	uint32 num_update_base;
	xBase** update_base;
	int32 baseCount[141];
	xBase* baseList[141];
	_zEnv* zen;
	zSceneParameters* parameters;
	uint8 enableDrawing;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

enum xCamOrientType
{
	XCAM_ORIENT_INVALID = 0xffffffff,
	XCAM_ORIENT_QUAT,
	XCAM_ORIENT_EULER,
	XCAM_ORIENT_MAX
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct xCollis
{
	uint32 flags;
	uint32 oid;
	void* optr;
	xModelInstance* mptr;
	float32 dist;
	float32 test_dist;
	xVec3 norm;
	xVec3 tohit;
	xVec3 depen;
	xVec3 hdng;
	union
	{
		_class_3 tuv;
		tri_data_1 tri;
	};
};

struct xJSPHeader
{
	int8 idtag[4];
	uint32 version;
	uint32 jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
	uint32 stripVecCount;
	RwV3d* stripVecList;
	uint16 vertDataFlags;
	uint16 vertDataStride;
	xJSPNodeTree* nodetree;
	xJSPNodeLight* nodelight;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	uint16 NumSingle;
	uint16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
};

struct zRewardsMgr
{
};

struct RpTie
{
	RwLLLink lAtomicInWorldSector;
	RpAtomic* apAtom;
	RwLLLink lWorldSectorInAtomic;
	RpWorldSector* worldSector;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xVec3
{
	union
	{
		RwV3d m_RwV3d;
		float32 x;
	};
	float32 y;
	float32 z;
	float32 a[3];
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint16 Flags;
	uint16 Probability;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xCamGroup
{
	xMat4x3 mat;
	xVec3 vel;
	float32 fov;
	float32 fov_default;
	int32 flags;
	xCam* primary;
	analog_data analog;
	xCam* owned[32];
	int32 size;
	int32 primary_index;
	int32 child_flags;
	int32 child_flags_mask;
	xCamBlend* blend_cam[4];
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xEntAsset : xBaseAsset
{
	uint8 flags;
	uint8 subtype;
	uint8 pflags;
	uint8 moreFlags;
	uint32 surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	float32 redMult;
	float32 greenMult;
	float32 blueMult;
	float32 seeThru;
	float32 seeThruSpeed;
	uint32 modelInfoID;
	uint32 animListID;
};

struct zAssetPickupTable
{
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

struct zPlayerGlobals
{
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings spongepat;
	xLightKit* pPlayerLightKit;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_spongepat;
	xModelInstance* model_car;
	uint32 Visible;
	int32 Speed;
	float32 SpeedMult;
	int32 Sneak;
	int32 Teeter;
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
	float32 ScareTimer;
	xBase* ScareSource;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 SundaeTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 DoMeleeCheck;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
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
	zEnt* FireTarget;
	uint32 PlayerIsFrozen;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float32 DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	xModelTag BubbleWandTag[2];
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl[2];
	float32 bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float32 HangLength;
	xVec3 HangStartPos;
	float32 HangStartLerp;
	xModelTag HangPawTag[4];
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int32 CanJump;
	int32 CanBubbleSpin;
	int32 CanBubbleBounce;
	int32 CanBubbleBash;
	int32 IsJumping;
	int32 IsDJumping;
	int32 IsBubbleSpinning;
	int32 IsBubbleBouncing;
	int32 IsBubbleBashing;
	int32 IsBubbleBowling;
	int32 WasDJumping;
	_zPlayerWallJumpState WallJumpState;
	int32 cheat_mode;
	zRewardsMgr* rewardsMgr;
	uint32 ManlinessPointsCurrentRange;
	uint32 InvManlinessPoints;
	uint32 InvManlinessPointsMultiplier;
	uint32 InvGoofyGoober;
	uint32 InvTreasureChest[20];
	uint32 InvTreasureChestMax[20];
	uint32 InvTreasureChestCurrentLevel;
	uint32 InvLevelPickups[20];
	uint32 InvLevelPickupsCurrentLevel;
	uint32 InvTreasureChestTotal;
	uint32 InvTreasureChestOpened;
	uint32 CurrentSkillLevel;
	uint32 InitialUnusedSkillPoints;
	int16 CurrentUnusedSkillPoints;
	int16 CurrentSpentSkillPoints;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int32 slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	uint32 TongueFlags[2];
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint checkpoint;
	uint32 SlideTrackSliding;
	uint32 SlideTrackCount;
	xEnt* SlideTrackEnt[161];
	uint32 SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float32 SlideTrackDecay;
	float32 SlideTrackLean;
	float32 SlideTrackLand;
	uint8* sb_model_indices;
	xModelInstance* sb_models[11];
	uint32 currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float32 PredictAngV;
	xVec3 PredictCurrDir;
	float32 PredictCurrVel;
	float32 KnockBackTimer;
	float32 KnockIntoAirTimer;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct zCutsceneMgr
{
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
};

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	uint8 NumAnims[2];
	void** RawData;
	xAnimPhysicsData* PhysicsData;
};

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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

struct smoke_type
{
	RwTexture* texture;
	int32 system_id;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct _tagiPad
{
	int32 port;
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xCamOrientEuler
{
	float32 yaw;
	float32 pitch;
	float32 roll;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct zSmokeSphereVolume
{
	xVec3 center;
	float32 radius;
	float32 size_min;
	float32 size_max;
	float32 life_min;
	float32 life_max;
	float32 vel_min;
	float32 vel_max;
	float32 growth;
	xVec3 vel_dir;
	float32 vel_dir_vary;
	float32 wind;
	xColor_tag color_birth;
	xColor_tag color_death;
	int32 texture_columns;
	int32 texture_rows;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	uint32 grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float32 minDist;
	float32 maxDist;
	float32 minHeight;
	float32 maxHeight;
	float32 maxCosAngle;
	float32 throwMinDist;
	float32 throwMaxDist;
	float32 throwHammerMinDist;
	float32 throwHammerMaxDist;
	float32 throwMinHeight;
	float32 throwMaxHeight;
	float32 throwMaxStack;
	float32 throwMaxCosAngle;
	float32 throwTargetRotRate;
	float32 targetRot;
	uint32 grabTarget;
	xVec3 grabOffset;
	float32 grabLerpMin;
	float32 grabLerpMax;
	float32 grabLerpLast;
	uint32 grabYclear;
	float32 throwGravity;
	float32 throwHeight;
	float32 throwDistance;
	float32 throwPowerAddDistance;
	float32 fruitFloorDecayMin;
	float32 fruitFloorDecayMax;
	float32 fruitFloorBounce;
	float32 fruitFloorFriction;
	float32 fruitCeilingBounce;
	float32 fruitWallBounce;
	float32 fruitLifetime;
	xEnt* patLauncher;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _class_1
{
	union
	{
		xVec3 cart;
		xCamCoordCylinder cylinder;
		xCamCoordSphere sphere;
	};
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	float32 MoveSpeed[6];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 AnimRun[3];
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float32 WallJumpVelocity;
	zLedgeGrabParams ledge;
	float32 spin_damp_xz;
	float32 spin_damp_y;
	uint8 talk_anims;
	uint8 talk_filter_size;
	uint8 talk_filter[4];
	uint32 Health;
	uint32 MaxHealth;
};

struct PS2DemoGlobals
{
	uint16 language;
	uint16 aspect;
	uint16 play_mode;
	uint16 inactive_timeout;
	uint16 gameplay_timeout;
	sceDemoEndReason exit_code;
	struct
	{
		uint32 FMV_playing : 1;
		uint32 more_padding : 31;
	};
	float32 bail_timer;
	float32 inactive_timer;
	float32 gameplay_timer;
	int8 subdir[16];
	uint16 quit;
	uint16 vmode;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct zSmokeGenom
{
	xVec3 loc;
	float32 size;
	float32 life;
	xVec3 vel;
	xVec2 uv[2];
	xColor_tag color;
	float32 growth;
	float32 wind;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
};

struct RpWorldSector
{
	int32 type;
	RpTriangle* triangles;
	RwV3d* vertices;
	RpVertexNormal* normals;
	RwTexCoords* texCoords[8];
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numTriangles;
	uint16 pad;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xCam
{
	xMat4x3 mat;
	float32 fov;
	int32 flags;
	uint32 owner;
	xCamGroup* group;
	analog_data analog;
	float32 motion_factor;
	xCamCoordType coord_type;
	xCamOrientType orient_type;
	_class_1 coord;
	_class_2 orient;
	xCamConfigCommon cfg_common;
	int32 group_index;
	int32 group_flags;
	xCamBlend* blender;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct RpSector
{
	int32 type;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	union
	{
		xModelInstance* List;
		xModelBucket** BackRef;
	};
	int32 ClipFlags;
	xModelPipe Pipe;
};

struct xCamBlend : xCam
{
	xCam* src;
	xCam* dst;
	float32 time;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	uint8 pad[3];
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum ptank_group_type
{
	PGT_COLOR_MAT,
	PGT_COLOR_MAT_UV2,
	PGT_POS_COLOR_SIZE,
	PGT_POS_COLOR_SIZE_UV2,
	PGT_POS_COLOR_SIZE_ROT,
	PGT_POS_COLOR_SIZE_ROT_UV2,
	MAX_PGT
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
};

struct xUpdateCullMgr
{
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xSurface
{
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	int32 jsp_count;
	uint32* jsp_aid;
	xJSPHeader** jsp_list;
	xBox* jsp_bound;
	int32* jsp_visibilityCount;
	int32 jspMatOrderCount;
	iEnvMatOrder* jspMatOrderList;
	RpLight* light[2];
	RwFrame* light_frame[2];
	int32 memlvl;
	uint16 numOpaque;
	uint16 numTransparent;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct xCamConfigCommon
{
	uint8 priority;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 blend_time;
};

struct xGrid
{
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

struct _class_2
{
	union
	{
		xQuat quat;
		xCamOrientEuler euler;
	};
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct xEntCollis
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
	uint8 idx;
	xCollis colls[18];
	void(*post)(xEnt*, xScene*, float32, xEntCollis*);
	uint32(*depenq)(xEnt*, xEnt*, xScene*, float32, xCollis*);
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xScene
{
	uint32 sceneID;
	uint16 flags;
	uint16 num_trigs;
	uint16 num_stats;
	uint16 num_dyns;
	uint16 num_npcs;
	uint16 num_act_ents;
	float32 gravity;
	float32 drag;
	float32 friction;
	uint16 num_ents_allocd;
	uint16 num_trigs_allocd;
	uint16 num_stats_allocd;
	uint16 num_dyns_allocd;
	uint16 num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnv* env;
	xMemPool mempool;
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xGridBound
{
	void* data;
	uint16 gx;
	uint16 gz;
	uint8 oversize;
	uint8 deleted;
	uint8 gpad;
	uint8 pad;
	xGrid* grid;
	xGridBound** head;
	xGridBound* next;
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
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
};

struct _class_3
{
	float32 t;
	float32 u;
	float32 v;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xEntFrame
{
	xMat4x3 mat;
	xMat4x3 oldmat;
	xVec3 oldvel;
	xRot oldrot;
	xRot drot;
	xRot rot;
	xVec3 dvel;
	xVec3 vel;
	uint32 mode;
	xVec3 dpos;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xEntBoulder
{
};

struct xJSPNodeTreeBranch
{
	uint16 leftNode;
	uint16 rightNode;
	uint8 leftType;
	uint8 rightType;
	uint16 coord;
	float32 leftValue;
	float32 rightValue;
};

struct zSceneParameters : xDynAsset
{
	uint32 idle03ExtraCount;
	xAnimFile** idle03Extras;
	uint32 idle04ExtraCount;
	xAnimFile** idle04Extras;
	uint8 bombCount;
	uint8 extraIdleDelay;
	uint8 hdrGlow;
	uint8 hdrDarken;
	uint32 uDefaultMusicHash;
	uint32 flags;
	float32 waterTileWidth;
	float32 lodFadeDistance;
	uint32 pad[4];
};

struct zEntHangable
{
};

struct xQCData
{
	int8 xmin;
	int8 ymin;
	int8 zmin;
	int8 zmin_dup;
	int8 xmax;
	int8 ymax;
	int8 zmax;
	int8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	xVec3* points;
	float32* time;
	xVec3* p12;
	xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct xFFX
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zPlatform
{
};

struct smoke_particle
{
	xVec3 loc;
	float32 size;
	xColor_tag color;
	xVec3 vel;
	xVec2 uv[2];
	float32 age;
	float32 age_rate;
	float32 growth;
	float32 wind;
	float32 dr;
	float32 dg;
	float32 db;
	float32 da;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct zLasso
{
	uint32 flags;
	float32 secsTotal;
	float32 secsLeft;
	float32 stRadius;
	float32 tgRadius;
	float32 crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float32 stSlack;
	float32 stSlackDist;
	float32 tgSlack;
	float32 tgSlackDist;
	float32 crSlack;
	float32 currDist;
	float32 lastDist;
	xVec3 lastRefs[5];
	uint8 reindex[5];
	uint8 pad[3];
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
	uint32 patTongue;
	RpAtomic* tipModel;
	xMat4x3* tipMatrix;
	float32 tipDelay;
	float32 tipLerp;
	xSpline3* spl;
	uint32 spldata[59];
};

struct xEnvAsset : xBaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	uint32 bspLightKit;
	uint32 objectLightKit;
	uint32 flags;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
	float32 loldHeight;
	xVec3 minBounds;
	xVec3 maxBounds;
};

struct asset_type : xDynAsset
{
	uint32 flags;
	_class_5 region;
	uint32 texture;
	uint16 texture_rows;
	uint16 texture_columns;
	float32 rate;
	float32 life_min;
	float32 life_max;
	float32 size_min;
	float32 size_max;
	float32 vel_min;
	float32 vel_max;
	float32 growth;
	xVec3 vel_dir;
	float32 vel_dir_vary;
	float32 wind;
	xColor_tag color_birth;
	xColor_tag color_death;
};

struct xCamScreen
{
	RwCamera* icam;
	float32 fov;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
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

struct ptank_pool
{
	render_state rs;
	uint32 order_group;
	int32 order_index;
	uint32 used;
	RpAtomic* ptank;
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
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum xCamCoordType
{
	XCAM_COORD_INVALID = 0xffffffff,
	XCAM_COORD_CART,
	XCAM_COORD_CYLINDER,
	XCAM_COORD_SPHERE,
	XCAM_COORD_MAX
};

struct render_state
{
	RwTexture* texture;
	uint32 src_blend;
	uint32 dst_blend;
	int32 flags;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
};

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _class_4
{
	xVec3* verts;
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

struct xCamCoordCylinder
{
	xVec3 origin;
	float32 dist;
	float32 height;
	float32 theta;
};

struct xShadowSimpleCache
{
	uint16 flags;
	uint8 alpha;
	uint8 pad;
	uint32 collPriority;
	xVec3 pos;
	xVec3 at;
	float32 tol_movement;
	float32 radiusOptional;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	float32 envHeight;
	float32 shadowHeight;
	union
	{
		uint32 raster;
		RwRaster* ptr_raster;
	};
	float32 dydx;
	float32 dydz;
	xVec3 corner[4];
	void* collSkipsItem;
};

enum sceDemoEndReason
{
	SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED,
	SCE_DEMO_ENDREASON_ATTRACT_COMPLETE,
	SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT,
	SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT,
	SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE,
	SCE_DEMO_ENDREASON_PLAYABLE_QUIT,
	SCE_DEMO_ENDREASON_NETCONFIG_REQUEST,
	SCE_DEMO_ENDREASON_NETCONFIG_COMPLETE
};

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	float32 fov;
	uint32 flags;
	float32 tmr;
	float32 tm_acc;
	float32 tm_dec;
	float32 ltmr;
	float32 ltm_acc;
	float32 ltm_dec;
	float32 dmin;
	float32 dmax;
	float32 dcur;
	float32 dgoal;
	float32 hmin;
	float32 hmax;
	float32 hcur;
	float32 hgoal;
	float32 pmin;
	float32 pmax;
	float32 pcur;
	float32 pgoal;
	float32 depv;
	float32 hepv;
	float32 pepv;
	float32 orn_epv;
	float32 yaw_epv;
	float32 pitch_epv;
	float32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float32 yaw_cur;
	float32 yaw_goal;
	float32 pitch_cur;
	float32 pitch_goal;
	float32 roll_cur;
	float32 roll_goal;
	float32 dct;
	float32 dcd;
	float32 dccv;
	float32 dcsv;
	float32 hct;
	float32 hcd;
	float32 hccv;
	float32 hcsv;
	float32 pct;
	float32 pcd;
	float32 pccv;
	float32 pcsv;
	float32 orn_ct;
	float32 orn_cd;
	float32 orn_ccv;
	float32 orn_csv;
	float32 yaw_ct;
	float32 yaw_cd;
	float32 yaw_ccv;
	float32 yaw_csv;
	float32 pitch_ct;
	float32 pitch_cd;
	float32 pitch_ccv;
	float32 pitch_csv;
	float32 roll_ct;
	float32 roll_cd;
	float32 roll_ccv;
	float32 roll_csv;
	xVec4 frustplane[12];
	float32 smoothOutwardSlidePos;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xGlobals
{
	xCamera oldSkoolCamera;
	xCamGroup* cam;
	xCamScreen* screen;
	xVec4 frustplane[12];
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	_tagxPad* pad[4];
	int32 profile;
	int8 profFunc[128][6];
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	int8 sceneStart[32];
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	int32 option_vibration;
	int32 option_subtitles;
	uint32 slowdown;
	float32 update_dt;
	int16 ForceCinematic;
	int16 ForceAllCinematics;
	int32 useHIPHOP;
	uint8 NoMusic;
	uint8 NoCutscenes;
	uint8 NoPadCheck;
	int8 currentActivePad;
	uint8 firstStartPressed;
	uint8 fromLauncher;
	uint8 FlashWIP;
	uint8 inLoadingScreen;
	uint8 LoadingScene;
	uint8 InitializingLoadingScreen;
	uint8 ForceMono;
	uint32 minVSyncCnt;
	uint8 dontShowPadMessageDuringLoadingOrCutScene;
	uint8 autoSaveFeature;
	int32 asyncLoadingScreen;
	int32 asyncLoadingFlags;
	int8 fromLauncherUser[32];
	zPlayer* ___player_ent_dont_use_directly;
	zScene* sceneCur;
	zScene* scenePreload;
	PS2DemoGlobals* PS2demo;
	int8 watermark[127];
	uint8 watermarkAlpha;
	float32 watermarkSize;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	union
	{
		uint32 Handle;
		iSndHandle SndHandle;
	};
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	xEnt* old_driver;
	xEnt* driver;
	xEnt* driven;
	xVec3 driven_pos_in_old_driver;
	xVec3 driven_pos_in_driver;
	xVec3 last_driven_pos;
	float32 yaw_in_driver;
	xVec3 dloc;
	tri_data_0 tri;
};

struct xParticleBatchSystem
{
	ptank_group_type pool_type;
	render_state rs;
	uint32 order_group;
	int32 order_index;
	int32 stride;
	int32(*update)(uint8*, int32, ptank_pool&, float32, void*);
	void* context;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xCamCoordSphere
{
	xVec3 origin;
	float32 dist;
	xQuat dir;
};

enum iSndHandle
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float32 dst_cast;
	float32 radius[2];
	struct
	{
		int32 flg_castOnOneDFF : 1;
		int32 flg_castOnAllDFF : 1;
		int32 flg_disableEnvCast : 1;
		int32 flg_shadowUnused : 29;
	};
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
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

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SundaeTime;
	float32 SundaeMult;
	uint32 InitialShinyCount;
	uint32 InitialSpatulaCount;
	int32 ShinyValuePurple;
	int32 ShinyValueBlue;
	int32 ShinyValueGreen;
	int32 ShinyValueYellow;
	int32 ShinyValueRed;
	int32 ShinyValueCombo0;
	int32 ShinyValueCombo1;
	int32 ShinyValueCombo2;
	int32 ShinyValueCombo3;
	int32 ShinyValueCombo4;
	int32 ShinyValueCombo5;
	int32 ShinyValueCombo6;
	int32 ShinyValueCombo7;
	int32 ShinyValueCombo8;
	int32 ShinyValueCombo9;
	int32 ShinyValueCombo10;
	int32 ShinyValueCombo11;
	int32 ShinyValueCombo12;
	int32 ShinyValueCombo13;
	int32 ShinyValueCombo14;
	int32 ShinyValueCombo15;
	float32 ComboTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 DamageTimeHit;
	float32 DamageTimeSurface;
	float32 DamageTimeEGen;
	float32 DamageSurfKnock;
	float32 DamageGiveHealthKnock;
	uint32 CheatSpongeball;
	uint32 CheatPlayerSwitch;
	uint32 CheatAlwaysPortal;
	uint32 CheatFlyToggle;
	uint32 FriendlySelectMode;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	float32 Gravity;
	float32 BBashTime;
	float32 BBashHeight;
	float32 BBashDelay;
	float32 BBashCVTime;
	float32 BBounceSpeed;
	float32 BBashGauntletDelay;
	float32 BBashGauntletBlastRadius;
	float32 BSpinMinFrame;
	float32 BSpinMaxFrame;
	float32 BSpinRadius;
	float32 BSpinReach;
	float32 BSpinReachUpgrade;
	float32 CartwheelDamageSize;
	float32 BubbleBowlTimeDelay;
	float32 BubbleBowlLaunchPosLeft;
	float32 BubbleBowlLaunchPosUp;
	float32 BubbleBowlLaunchPosAt;
	float32 BubbleBowlLaunchVelLeft;
	float32 BubbleBowlLaunchVelUp;
	float32 BubbleBowlLaunchVelAt;
	float32 BubbleBowlPercentIncrease;
	float32 BubbleBowlMinSpeed;
	float32 BubbleBowlMinRecoverTime;
	float32 SlideAccelVelMin;
	float32 SlideAccelVelMax;
	float32 SlideAccelStart;
	float32 SlideAccelEnd;
	float32 SlideAccelPlayerFwd;
	float32 SlideAccelPlayerBack;
	float32 SlideAccelPlayerSide;
	float32 SlideVelMaxStart;
	float32 SlideVelMaxEnd;
	float32 SlideVelMaxIncTime;
	float32 SlideVelMaxIncAccel;
	float32 SlideAirHoldTime;
	float32 SlideAirSlowTime;
	float32 SlideAirDblHoldTime;
	float32 SlideAirDblSlowTime;
	float32 SlideVelDblBoost;
	uint8 SlideApplyPhysics;
	uint8 PowerUp[10];
	uint8 InitialPowerUp[10];
	uint8 AttractModeDuringGameplay;
};

struct anim_coll_data
{
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zPlayerLassoInfo
{
	float32 dist;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	zLasso lasso;
};

struct zLedgeGrabParams
{
	float32 animGrab;
	float32 zdist;
	xVec3 tranTable[60];
	int32 tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float32 y0det;
	float32 dydet;
	float32 r0det;
	float32 drdet;
	float32 thdet;
	float32 rtime;
	float32 ttime;
	float32 tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int32 nrays;
	int32 rrand;
	float32 startrot;
	float32 endrot;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
};

struct xCoef
{
	float32 a[4];
};

struct _class_5
{
	uint32 attach_to;
	xVec3 loc;
	xVec3 dir;
	xVec3 scale;
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
	uint16 matIndex;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct zGlobals : xGlobals
{
	uint32 playerTag;
	uint32 playerLoaded;
	uint32 playerLoadOrder[8];
	uint8 invertJoystick;
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zCutsceneMgr* DisabledCutsceneDoneMgr;
	int8 startDebugMode[32];
	uint32 noMovies;
	uint32 boundUpdateTime;
	uint8 draw_player_after_fx;
	zGlobalDemoType demoType;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

int8 buffer[16];
int8 buffer[16];
float32 scale;
smoke_type types[32];
int32 types_size;
float32 wind_magnitude_time;
float32 wind_yaw_time;
float32 wind_pitch_time;
xVec3 wind_delta;
zGlobals globals;
int32(*update_particles)(uint8*, int32, ptank_pool&, float32, void*);
void(*cb_dispatch)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
int32 _rpPTankAtomicDataOffset;

void cb_dispatch(xBase* to, uint32 event);
void update(float32 dt);
void load(asset_type& a);
void load(xBase& data, xDynAsset& asset);
void zSmokeUpdate(float32 dt);
void zSmokeSceneExit();
void zSmokeSceneEnter();
void update_wind(float32 dt);
int32 update_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);

// cb_dispatch__13zSmokeEmitterFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x490b30
void zSmokeEmitter::cb_dispatch(xBase* to, uint32 event)
{
	zSmokeEmitter& e;
	// Line 692, Address: 0x490b30, Func Offset: 0
	// Line 695, Address: 0x490b4c, Func Offset: 0x1c
	// Line 696, Address: 0x490b54, Func Offset: 0x24
	// Line 698, Address: 0x490b5c, Func Offset: 0x2c
	// Line 699, Address: 0x490b6c, Func Offset: 0x3c
	// Line 702, Address: 0x490b70, Func Offset: 0x40
	// Func End, Address: 0x490b78, Func Offset: 0x48
}

// update__13zSmokeEmitterFf
// Start address: 0x490b80
void zSmokeEmitter::update(float32 dt)
{
	float32 rate;
	int32 emit;
	uint8* mem;
	int32 have;
	smoke_particle* p;
	smoke_particle* endp;
	int32 frame;
	// Line 559, Address: 0x490b80, Func Offset: 0
	// Line 564, Address: 0x490bc4, Func Offset: 0x44
	// Line 559, Address: 0x490bc8, Func Offset: 0x48
	// Line 564, Address: 0x490bcc, Func Offset: 0x4c
	// Line 559, Address: 0x490bd8, Func Offset: 0x58
	// Line 564, Address: 0x490bdc, Func Offset: 0x5c
	// Line 565, Address: 0x490be0, Func Offset: 0x60
	// Line 566, Address: 0x490bec, Func Offset: 0x6c
	// Line 568, Address: 0x490bf4, Func Offset: 0x74
	// Line 571, Address: 0x490c04, Func Offset: 0x84
	// Line 573, Address: 0x490c24, Func Offset: 0xa4
	// Line 574, Address: 0x490c38, Func Offset: 0xb8
	// Line 577, Address: 0x490c40, Func Offset: 0xc0
	// Line 578, Address: 0x490c54, Func Offset: 0xd4
	// Line 580, Address: 0x490c60, Func Offset: 0xe0
	// Line 582, Address: 0x490cbc, Func Offset: 0x13c
	// Line 583, Address: 0x490d10, Func Offset: 0x190
	// Line 584, Address: 0x490d34, Func Offset: 0x1b4
	// Line 587, Address: 0x490d50, Func Offset: 0x1d0
	// Line 588, Address: 0x490e00, Func Offset: 0x280
	// Line 587, Address: 0x490e04, Func Offset: 0x284
	// Line 588, Address: 0x490e08, Func Offset: 0x288
	// Line 591, Address: 0x490e58, Func Offset: 0x2d8
	// Line 592, Address: 0x490e5c, Func Offset: 0x2dc
	// Line 591, Address: 0x490e60, Func Offset: 0x2e0
	// Line 592, Address: 0x490e64, Func Offset: 0x2e4
	// Line 591, Address: 0x490e68, Func Offset: 0x2e8
	// Line 592, Address: 0x490e78, Func Offset: 0x2f8
	// Line 593, Address: 0x490f7c, Func Offset: 0x3fc
	// Line 595, Address: 0x490ff8, Func Offset: 0x478
	// Line 596, Address: 0x49100c, Func Offset: 0x48c
	// Line 599, Address: 0x491014, Func Offset: 0x494
	// Line 601, Address: 0x491020, Func Offset: 0x4a0
	// Line 599, Address: 0x491024, Func Offset: 0x4a4
	// Line 601, Address: 0x491028, Func Offset: 0x4a8
	// Line 599, Address: 0x49102c, Func Offset: 0x4ac
	// Line 601, Address: 0x49103c, Func Offset: 0x4bc
	// Line 602, Address: 0x491074, Func Offset: 0x4f4
	// Line 603, Address: 0x491090, Func Offset: 0x510
	// Line 605, Address: 0x4910a0, Func Offset: 0x520
	// Line 606, Address: 0x4910a4, Func Offset: 0x524
	// Line 607, Address: 0x4910b0, Func Offset: 0x530
	// Func End, Address: 0x4910f4, Func Offset: 0x574
}

// load__13zSmokeEmitterFRCQ213zSmokeEmitter10asset_type
// Start address: 0x491100
void zSmokeEmitter::load(asset_type& a)
{
	xMat3x3 dir_mat;
	// Line 518, Address: 0x491100, Func Offset: 0
	// Line 519, Address: 0x491110, Func Offset: 0x10
	// Line 522, Address: 0x491114, Func Offset: 0x14
	// Line 523, Address: 0x491120, Func Offset: 0x20
	// Line 524, Address: 0x491124, Func Offset: 0x24
	// Line 523, Address: 0x49112c, Func Offset: 0x2c
	// Line 524, Address: 0x491130, Func Offset: 0x30
	// Line 525, Address: 0x491134, Func Offset: 0x34
	// Line 528, Address: 0x491154, Func Offset: 0x54
	// Line 529, Address: 0x49123c, Func Offset: 0x13c
	// Line 528, Address: 0x491240, Func Offset: 0x140
	// Line 529, Address: 0x491244, Func Offset: 0x144
	// Line 534, Address: 0x49133c, Func Offset: 0x23c
	// Line 529, Address: 0x491340, Func Offset: 0x240
	// Line 530, Address: 0x49136c, Func Offset: 0x26c
	// Line 532, Address: 0x49137c, Func Offset: 0x27c
	// Line 534, Address: 0x491388, Func Offset: 0x288
	// Line 535, Address: 0x491394, Func Offset: 0x294
	// Line 536, Address: 0x4913b0, Func Offset: 0x2b0
	// Line 537, Address: 0x4913c0, Func Offset: 0x2c0
	// Line 538, Address: 0x491408, Func Offset: 0x308
	// Line 540, Address: 0x491450, Func Offset: 0x350
	// Line 542, Address: 0x491460, Func Offset: 0x360
	// Line 544, Address: 0x49147c, Func Offset: 0x37c
	// Line 545, Address: 0x4914e8, Func Offset: 0x3e8
	// Line 546, Address: 0x491554, Func Offset: 0x454
	// Line 547, Address: 0x4915c0, Func Offset: 0x4c0
	// Line 550, Address: 0x491628, Func Offset: 0x528
	// Func End, Address: 0x49163c, Func Offset: 0x53c
}

// load__13zSmokeEmitterFR5xBaseR9xDynAssetUi
// Start address: 0x491640
void zSmokeEmitter::load(xBase& data, xDynAsset& asset)
{
	// Line 514, Address: 0x491640, Func Offset: 0
	// Func End, Address: 0x491648, Func Offset: 0x8
}

// zSmokeUpdate__Ff
// Start address: 0x491650
void zSmokeUpdate(float32 dt)
{
	// Line 396, Address: 0x491650, Func Offset: 0
	// Line 397, Address: 0x491664, Func Offset: 0x14
	// Line 398, Address: 0x49166c, Func Offset: 0x1c
	// Line 399, Address: 0x4916b8, Func Offset: 0x68
	// Func End, Address: 0x4916e8, Func Offset: 0x98
}

// zSmokeSceneExit__Fv
// Start address: 0x4916f0
void zSmokeSceneExit()
{
	// Line 393, Address: 0x4916f0, Func Offset: 0
	// Func End, Address: 0x4916f8, Func Offset: 0x8
}

// zSmokeSceneEnter__Fv
// Start address: 0x491700
void zSmokeSceneEnter()
{
	// Line 384, Address: 0x491700, Func Offset: 0
	// Line 381, Address: 0x491704, Func Offset: 0x4
	// Line 384, Address: 0x491708, Func Offset: 0x8
	// Line 383, Address: 0x491710, Func Offset: 0x10
	// Line 384, Address: 0x491714, Func Offset: 0x14
	// Line 383, Address: 0x49171c, Func Offset: 0x1c
	// Line 384, Address: 0x491720, Func Offset: 0x20
	// Line 388, Address: 0x491724, Func Offset: 0x24
	// Func End, Address: 0x49172c, Func Offset: 0x2c
}

// update_wind__20@unnamed@zSmoke_cpp@Ff
// Start address: 0x491730
void update_wind(float32 dt)
{
	float32 magnitude;
	float32 yaw;
	float32 pitch;
	float32 t;
	// Line 280, Address: 0x491730, Func Offset: 0
	// Line 282, Address: 0x491734, Func Offset: 0x4
	// Line 280, Address: 0x491738, Func Offset: 0x8
	// Line 283, Address: 0x49173c, Func Offset: 0xc
	// Line 280, Address: 0x491740, Func Offset: 0x10
	// Line 282, Address: 0x491744, Func Offset: 0x14
	// Line 280, Address: 0x491748, Func Offset: 0x18
	// Line 283, Address: 0x49174c, Func Offset: 0x1c
	// Line 280, Address: 0x491750, Func Offset: 0x20
	// Line 282, Address: 0x49175c, Func Offset: 0x2c
	// Line 283, Address: 0x49176c, Func Offset: 0x3c
	// Line 282, Address: 0x491774, Func Offset: 0x44
	// Line 283, Address: 0x49177c, Func Offset: 0x4c
	// Line 285, Address: 0x4917a4, Func Offset: 0x74
	// Line 289, Address: 0x4917ac, Func Offset: 0x7c
	// Line 285, Address: 0x4917b0, Func Offset: 0x80
	// Line 289, Address: 0x4917bc, Func Offset: 0x8c
	// Line 290, Address: 0x4917c4, Func Offset: 0x94
	// Line 285, Address: 0x4917cc, Func Offset: 0x9c
	// Line 289, Address: 0x4917e0, Func Offset: 0xb0
	// Line 290, Address: 0x4917f0, Func Offset: 0xc0
	// Line 292, Address: 0x491814, Func Offset: 0xe4
	// Line 296, Address: 0x49182c, Func Offset: 0xfc
	// Line 297, Address: 0x491834, Func Offset: 0x104
	// Line 296, Address: 0x491838, Func Offset: 0x108
	// Line 297, Address: 0x49183c, Func Offset: 0x10c
	// Line 292, Address: 0x491840, Func Offset: 0x110
	// Line 296, Address: 0x491858, Func Offset: 0x128
	// Line 297, Address: 0x491868, Func Offset: 0x138
	// Line 299, Address: 0x49188c, Func Offset: 0x15c
	// Line 303, Address: 0x4918b8, Func Offset: 0x188
	// Line 304, Address: 0x4918d4, Func Offset: 0x1a4
	// Line 305, Address: 0x4918e8, Func Offset: 0x1b8
	// Line 306, Address: 0x4918ec, Func Offset: 0x1bc
	// Line 307, Address: 0x4918f0, Func Offset: 0x1c0
	// Line 308, Address: 0x4918f4, Func Offset: 0x1c4
	// Line 306, Address: 0x4918f8, Func Offset: 0x1c8
	// Line 307, Address: 0x491904, Func Offset: 0x1d4
	// Line 308, Address: 0x491910, Func Offset: 0x1e0
	// Line 319, Address: 0x491918, Func Offset: 0x1e8
	// Line 283, Address: 0x491928, Func Offset: 0x1f8
	// Line 319, Address: 0x491950, Func Offset: 0x220
	// Line 283, Address: 0x491958, Func Offset: 0x228
	// Line 319, Address: 0x491970, Func Offset: 0x240
	// Line 290, Address: 0x491978, Func Offset: 0x248
	// Line 319, Address: 0x491994, Func Offset: 0x264
	// Line 290, Address: 0x49199c, Func Offset: 0x26c
	// Line 319, Address: 0x4919b4, Func Offset: 0x284
	// Line 297, Address: 0x4919bc, Func Offset: 0x28c
	// Line 319, Address: 0x4919d8, Func Offset: 0x2a8
	// Line 297, Address: 0x4919e0, Func Offset: 0x2b0
	// Line 319, Address: 0x4919f8, Func Offset: 0x2c8
	// Func End, Address: 0x491a18, Func Offset: 0x2e8
}

// update_particles__20@unnamed@zSmoke_cpp@FPUciR10ptank_poolfPv
// Start address: 0x491a20
int32 update_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_uv2& pool;
	smoke_particle* p;
	smoke_particle* end;
	float32 oldsize;
	float32 t1;
	float32 t2;
	float32 alpha;
	// Line 156, Address: 0x491a20, Func Offset: 0
	// Line 159, Address: 0x491a24, Func Offset: 0x4
	// Line 156, Address: 0x491a28, Func Offset: 0x8
	// Line 159, Address: 0x491a2c, Func Offset: 0xc
	// Line 156, Address: 0x491a30, Func Offset: 0x10
	// Line 159, Address: 0x491a34, Func Offset: 0x14
	// Line 156, Address: 0x491a38, Func Offset: 0x18
	// Line 157, Address: 0x491a44, Func Offset: 0x24
	// Line 156, Address: 0x491a48, Func Offset: 0x28
	// Line 159, Address: 0x491a4c, Func Offset: 0x2c
	// Line 156, Address: 0x491a50, Func Offset: 0x30
	// Line 159, Address: 0x491a54, Func Offset: 0x34
	// Line 156, Address: 0x491a58, Func Offset: 0x38
	// Line 161, Address: 0x491a5c, Func Offset: 0x3c
	// Line 163, Address: 0x491a64, Func Offset: 0x44
	// Line 165, Address: 0x491a68, Func Offset: 0x48
	// Line 163, Address: 0x491a6c, Func Offset: 0x4c
	// Line 165, Address: 0x491a74, Func Offset: 0x54
	// Line 163, Address: 0x491a7c, Func Offset: 0x5c
	// Line 165, Address: 0x491a84, Func Offset: 0x64
	// Line 167, Address: 0x491a90, Func Offset: 0x70
	// Line 168, Address: 0x491a94, Func Offset: 0x74
	// Line 169, Address: 0x491b48, Func Offset: 0x128
	// Line 173, Address: 0x491b50, Func Offset: 0x130
	// Line 174, Address: 0x491b58, Func Offset: 0x138
	// Line 173, Address: 0x491b5c, Func Offset: 0x13c
	// Line 175, Address: 0x491b68, Func Offset: 0x148
	// Line 173, Address: 0x491b6c, Func Offset: 0x14c
	// Line 174, Address: 0x491b74, Func Offset: 0x154
	// Line 175, Address: 0x491b8c, Func Offset: 0x16c
	// Line 178, Address: 0x491ba4, Func Offset: 0x184
	// Line 179, Address: 0x491bb8, Func Offset: 0x198
	// Line 180, Address: 0x491bcc, Func Offset: 0x1ac
	// Line 183, Address: 0x491be0, Func Offset: 0x1c0
	// Line 182, Address: 0x491bec, Func Offset: 0x1cc
	// Line 183, Address: 0x491bf0, Func Offset: 0x1d0
	// Line 184, Address: 0x491bfc, Func Offset: 0x1dc
	// Line 186, Address: 0x491c44, Func Offset: 0x224
	// Line 187, Address: 0x491d78, Func Offset: 0x358
	// Line 190, Address: 0x491d84, Func Offset: 0x364
	// Line 193, Address: 0x491d8c, Func Offset: 0x36c
	// Line 196, Address: 0x491d90, Func Offset: 0x370
	// Line 197, Address: 0x491d98, Func Offset: 0x378
	// Line 196, Address: 0x491d9c, Func Offset: 0x37c
	// Line 197, Address: 0x491da0, Func Offset: 0x380
	// Line 196, Address: 0x491da4, Func Offset: 0x384
	// Line 197, Address: 0x491da8, Func Offset: 0x388
	// Line 196, Address: 0x491dac, Func Offset: 0x38c
	// Line 197, Address: 0x491db0, Func Offset: 0x390
	// Line 196, Address: 0x491dbc, Func Offset: 0x39c
	// Line 197, Address: 0x491dcc, Func Offset: 0x3ac
	// Line 198, Address: 0x491e08, Func Offset: 0x3e8
	// Line 197, Address: 0x491e0c, Func Offset: 0x3ec
	// Line 198, Address: 0x491e10, Func Offset: 0x3f0
	// Line 197, Address: 0x491e24, Func Offset: 0x404
	// Line 198, Address: 0x491e30, Func Offset: 0x410
	// Line 199, Address: 0x491e6c, Func Offset: 0x44c
	// Line 198, Address: 0x491e70, Func Offset: 0x450
	// Line 199, Address: 0x491e74, Func Offset: 0x454
	// Line 198, Address: 0x491e88, Func Offset: 0x468
	// Line 199, Address: 0x491e94, Func Offset: 0x474
	// Line 206, Address: 0x491ed0, Func Offset: 0x4b0
	// Line 199, Address: 0x491ee4, Func Offset: 0x4c4
	// Line 206, Address: 0x491ee8, Func Offset: 0x4c8
	// Line 207, Address: 0x491eec, Func Offset: 0x4cc
	// Line 202, Address: 0x491ef0, Func Offset: 0x4d0
	// Line 206, Address: 0x491ef4, Func Offset: 0x4d4
	// Line 199, Address: 0x491f08, Func Offset: 0x4e8
	// Line 207, Address: 0x491f0c, Func Offset: 0x4ec
	// Line 206, Address: 0x491f10, Func Offset: 0x4f0
	// Line 199, Address: 0x491f18, Func Offset: 0x4f8
	// Line 206, Address: 0x491f1c, Func Offset: 0x4fc
	// Line 207, Address: 0x491f20, Func Offset: 0x500
	// Line 208, Address: 0x491f30, Func Offset: 0x510
	// Line 209, Address: 0x491f68, Func Offset: 0x548
	// Line 208, Address: 0x491f70, Func Offset: 0x550
	// Line 209, Address: 0x491f78, Func Offset: 0x558
	// Line 208, Address: 0x491f7c, Func Offset: 0x55c
	// Line 209, Address: 0x491f80, Func Offset: 0x560
	// Line 211, Address: 0x491fc8, Func Offset: 0x5a8
	// Line 212, Address: 0x491fe8, Func Offset: 0x5c8
	// Line 213, Address: 0x491ff4, Func Offset: 0x5d4
	// Line 214, Address: 0x492008, Func Offset: 0x5e8
	// Line 216, Address: 0x49201c, Func Offset: 0x5fc
	// Line 217, Address: 0x492020, Func Offset: 0x600
	// Line 218, Address: 0x492024, Func Offset: 0x604
	// Line 219, Address: 0x492028, Func Offset: 0x608
	// Line 221, Address: 0x492030, Func Offset: 0x610
	// Line 222, Address: 0x492040, Func Offset: 0x620
	// Line 221, Address: 0x492058, Func Offset: 0x638
	// Line 222, Address: 0x492060, Func Offset: 0x640
	// Line 221, Address: 0x492064, Func Offset: 0x644
	// Line 222, Address: 0x49206c, Func Offset: 0x64c
	// Func End, Address: 0x492074, Func Offset: 0x654
}

