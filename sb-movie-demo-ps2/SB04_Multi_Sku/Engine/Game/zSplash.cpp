typedef struct xEnt;
typedef struct xAnimTransitionList;
typedef struct xVec3;
typedef struct bubble_emitter;
typedef struct RxClusterDefinition;
typedef struct xMat4x3;
typedef struct render_state;
typedef struct xIniValue;
typedef struct _class_0;
typedef struct xCam;
typedef struct splash_planner;
typedef struct chain_config;
typedef struct xIniSection;
typedef struct tri_data_0;
typedef struct RpAtomic;
typedef struct RwTexture;
typedef struct RpInterpolator;
typedef struct xDynAsset;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef struct xAnimFile;
typedef struct chain_emitter;
typedef struct chain_link;
typedef struct xBound;
typedef struct xJSPHeader;
typedef struct ptank_pool__pos_color_size;
typedef struct RwV3d;
typedef struct xJSPNodeInfo;
typedef struct ptank_pool;
typedef enum RwFogType;
typedef struct _class_1;
typedef struct RpTie;
typedef struct zPlayer;
typedef struct xScene;
typedef struct rxHeapBlockHeader;
typedef struct plume_config;
typedef struct xEnv;
typedef struct _tagxPad;
typedef struct xUpdateCullMgr;
typedef struct RxIoSpec;
typedef struct xModelInstance;
typedef struct zScene;
typedef struct xCamCoordCylinder;
typedef enum zGlobalDemoType;
typedef struct xModelBucket;
typedef struct xVec4;
typedef struct bubble_config;
typedef struct zGlobalSettings;
typedef struct RwBBox;
typedef struct type_mapping;
typedef struct RpClump;
typedef struct xLightKitLight;
typedef struct RpWorld;
typedef struct PS2DemoGlobals;
typedef struct mist_particle;
typedef struct xAnimMultiFile;
typedef struct _tagiPad;
typedef struct xAnimTransition;
typedef struct splash_emitter;
typedef struct RwRaster;
typedef struct xEntAsset;
typedef struct xClumpCollBSPTree;
typedef struct zPlayerLassoInfo;
typedef struct xAnimState;
typedef struct RxPacket;
typedef struct xSurface;
typedef struct plume_particle;
typedef struct RwPlane;
typedef struct xUpdateCullEnt;
typedef struct xBBox;
typedef struct zLedgeGrabParams;
typedef struct xLinkAsset;
typedef struct RxOutputSpec;
typedef struct xCoef;
typedef struct xAnimPhysicsData;
typedef struct _class_2;
typedef struct xEntCollis;
typedef struct zRewardsMgr;
typedef struct xEntFrame;
typedef struct plume_emitter;
typedef struct xCamGroup;
typedef struct xAnimTable;
typedef struct RpLight;
typedef struct xColor_tag;
typedef struct zGlobals;
typedef struct xSphere;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct xBase;
typedef struct tri_data_1;
typedef struct xVec2;
typedef struct xJSPNodeTreeLeaf;
typedef struct ring_particle;
typedef enum _zPlayerWallJumpState;
typedef struct xCamCoordSphere;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _class_3;
typedef struct xCamBlend;
typedef struct xClumpCollBSPBranchNode;
typedef enum RxClusterValid;
typedef struct xUpdateCullGroup;
typedef struct xJSPNodeTree;
typedef struct xLightKit;
typedef struct iFogParams;
typedef struct RpSector;
typedef struct xRot;
typedef struct xCylinder;
typedef struct xCollis;
typedef struct ptank_pool__color_mat;
typedef struct xJSPNodeLight;
typedef struct _zEnv;
typedef struct _class_4;
typedef struct xCoef3;
typedef struct xGrid;
typedef struct xBox;
typedef struct xParticleBatchSystem;
typedef struct xEnvAsset;
typedef struct RwV2d;
typedef struct RxPipelineCluster;
typedef struct xGridBound;
typedef struct xMat3x3;
typedef enum RxClusterValidityReq;
typedef struct zAssetPickupTable;
typedef struct RwMatrixTag;
typedef struct RpGeometry;
typedef struct zPlayerGlobals;
typedef struct RxClusterRef;
typedef struct zEnt;
typedef struct zCutsceneMgr;
typedef struct xJSPNodeTreeBranch;
typedef struct xShadowSimplePoly;
typedef struct xQCData;
typedef struct zPlayerCarryInfo;
typedef struct RpMaterialList;
typedef struct zPlayerSettings;
typedef struct RwFrame;
typedef struct _class_5;
typedef struct RpMorphTarget;
typedef struct analog_data;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct _zPortal;
typedef struct RwRGBA;
typedef struct xIniFile;
typedef struct _class_6;
typedef struct streak_particle;
typedef struct xGroupAsset;
typedef struct _class_7;
typedef enum xCamOrientType;
typedef struct xShadowSimpleCache;
typedef struct SwimEmitter;
typedef struct RpMaterial;
typedef struct xAnimEffect;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct xAnimMultiFileEntry;
typedef enum type_enum;
typedef struct RwResEntry;
typedef struct xModelTag;
typedef struct xAnimActiveEffect;
typedef struct iEnvMatOrder;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimPlay;
typedef struct xPortalAsset;
typedef struct zJumpParam;
typedef struct xCamOrientEuler;
typedef struct zSceneParameters;
typedef struct xFFX;
typedef struct xEntBoulder;
typedef struct _class_8;
typedef struct _class_9;
typedef struct RwSurfaceProperties;
typedef struct xSpline3;
typedef struct xAnimSingle;
typedef struct zEntHangable;
typedef struct RxPipelineNode;
typedef struct xBaseAsset;
typedef struct xAnimMultiFileBase;
typedef struct xModelPool;
typedef struct zPlatform;
typedef struct zLasso;
typedef struct xEntShadow;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef enum iSndHandle;
typedef struct xModelPipe;
typedef enum _zPlayerType;
typedef struct anim_coll_data;
typedef struct RxPipeline;
typedef struct iEnv;
typedef struct xCamConfigCommon;
typedef struct RxPipelineNodeTopSortData;
typedef struct xJSPMiniLightTie;
typedef struct _class_10;
typedef enum ptank_group_type;
typedef struct xGroup;
typedef struct xMemPool;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct zCheckPoint;
typedef struct rxReq;
typedef struct xClumpCollBSPVertInfo;
typedef enum _tagPadState;
typedef struct HIFastIMLockStruct;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef enum sceDemoEndReason;
typedef struct splash_config;
typedef struct RwLinkList;
typedef struct xCamera;
typedef struct xClumpCollBSPTriangle;
typedef struct RwCamera;
typedef struct xGlobals;
typedef struct xCamScreen;
typedef struct RxNodeDefinition;
typedef enum xCamCoordType;
typedef enum xSndEffect;
typedef struct _tagPadAnalog;
typedef struct xQuat;
typedef struct RpTriangle;
typedef struct _class_11;
typedef struct xEntDrive;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_3)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_11)(uint8*, int32, ptank_pool&, float32, void*);
typedef xBase*(*type_12)(uint32);
typedef int8*(*type_13)(xBase*);
typedef void(*type_15)(xAnimPlay*, xAnimState*, void*);
typedef int8*(*type_16)(uint32);
typedef void(*type_18)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_19)(xAnimTransition*, xAnimSingle*, void*);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef void(*type_24)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_27)(xEnt*, xScene*, float32, xEntFrame*);
typedef RpWorldSector*(*type_28)(RpWorldSector*);
typedef void(*type_32)(xEnt*, xScene*, float32);
typedef void(*type_34)(void*);
typedef uint32(*type_35)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_38)(xEnt*);
typedef int32(*type_42)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_43)(xEnt*);
typedef int32(*type_45)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_51)(xEnt*, xVec3*);
typedef RwCamera*(*type_57)(RwCamera*);
typedef RwCamera*(*type_61)(RwCamera*);
typedef void(*type_62)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_69)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_71)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_76)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_77)(RwResEntry*);
typedef int32(*type_79)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_83)(RwObjectHasFrame*);
typedef uint32(*type_85)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_86)(RxPipelineNode*);
typedef uint32(*type_88)(void*, void*);
typedef int32(*type_92)(RxPipelineNode*);
typedef void(*type_95)(RxNodeDefinition*);
typedef int32(*type_96)(RxNodeDefinition*);
typedef int32(*type_100)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_106)(RpClump*, void*);
typedef void(*type_107)(xMemPool*, void*);
typedef int32(*type_111)(uint8*, int32, ptank_pool&, float32, void*);

typedef xVec4 type_0[12];
typedef RwV3d type_1[8];
typedef int8* type_2[8];
typedef RwFrustumPlane type_4[6];
typedef xVec4 type_5[12];
typedef int8 type_6[32];
typedef int8 type_7[256];
typedef uint16 type_8[3];
typedef int8 type_9[256];
typedef int8 type_10[4];
typedef int8 type_14[127];
typedef uint32 type_17[4];
typedef float32 type_20[16];
typedef uint8 type_21[22];
typedef uint32 type_23[4096];
typedef uint8 type_25[22];
typedef float32 type_26[4];
typedef xVec3 type_29[60];
typedef uint32 type_30[4];
typedef RxCluster type_31[1];
typedef _tagxPad* type_33[4];
typedef uint32 type_36[20];
typedef uint32 type_37[8];
typedef uint32 type_39[20];
typedef float32 type_40[4];
typedef uint32 type_41[20];
typedef uint32 type_44[8];
typedef float32 type_46[22];
typedef chain_link type_47[8];
typedef xVec3 type_48[3];
typedef int8 type_49[32];
typedef float32 type_50[22];
typedef chain_link type_52[8];
typedef float32 type_53[3];
typedef RwTexCoords* type_54[8];
typedef uint8 type_55[3];
typedef uint8 type_56[2];
typedef int8 type_58[128];
typedef int8 type_59[128][6];
typedef float32 type_60[2];
typedef int32 type_63[141];
typedef int8 type_64[32];
typedef xCollis type_65[18];
typedef analog_data type_66[2];
typedef xBase* type_67[141];
typedef xModelTag type_68[2];
typedef uint8 type_70[3];
typedef xEntBoulder* type_72[2];
typedef float32 type_73[6];
typedef uint8 type_74[10];
typedef int8 type_75[16];
typedef float32 type_78[3];
typedef uint8 type_80[10];
typedef int8 type_81[64];
typedef uint32 type_82[2];
typedef float32 type_84[3];
typedef int8 type_87[32];
typedef float32 type_89[3];
typedef uint32 type_90[1];
typedef int8 type_91[32];
typedef xCam* type_93[32];
typedef float32 type_94[4];
typedef xVec3 type_97[5];
typedef int8 type_98[16];
typedef uint8 type_99[5];
typedef xCamBlend* type_101[4];
typedef xModelTag type_102[4];
typedef uint8 type_103[3];
typedef xEnt* type_104[161];
typedef xAnimMultiFileEntry type_105[1];
typedef xVec3 type_108[4];
typedef RwTexCoords* type_109[8];
typedef int8 type_110[11];
typedef uint32 type_112[59];
typedef xModelInstance* type_113[11];
typedef xJSPMiniLightTie type_114[16];
typedef RpLight* type_115[2];
typedef uint8 type_116[4];
typedef float32 type_117[2];
typedef RwFrame* type_118[2];
typedef int8 type_119[16];

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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct bubble_emitter
{
	float32 age;
	float32 age_rate;
	xVec3 center;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct render_state
{
	RwTexture* texture;
	uint32 src_blend;
	uint32 dst_blend;
	int32 flags;
};

struct xIniValue
{
	int8* tok;
	int8* val;
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
	_class_9 coord;
	_class_10 orient;
	xCamConfigCommon cfg_common;
	int32 group_index;
	int32 group_flags;
	xCamBlend* blender;
};

struct splash_planner
{
	int8 name[64];
	type_enum type;
	union
	{
		splash_config splash;
		plume_config plume;
		bubble_config bubble;
		chain_config chain;
	};
};

struct chain_config
{
	chain_link links[8];
	chain_link ordered_links[8];
	int32 links_size;
};

struct xIniSection
{
	int8* sec;
	int32 first;
	int32 count;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct chain_emitter
{
	chain_config* chain;
	xVec3 loc;
	float32 time;
	int32 next_link;
};

struct chain_link
{
	float32 time;
	int32 type;
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

struct ptank_pool__pos_color_size : ptank_pool
{
	xVec3* pos;
	xColor_tag* color;
	xVec2* size;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
};

struct ptank_pool
{
	render_state rs;
	uint32 order_group;
	int32 order_index;
	uint32 used;
	RpAtomic* ptank;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_1
{
	float32 emit_end;
	float32 rate;
	float32 emitted;
	float32 age_rate;
	float32 size_start;
	float32 size_delta;
	float32 size_vel;
	xColor_tag color;
	float32 y_vel;
	float32 y_accel;
};

struct RpTie
{
	RwLLLink lAtomicInWorldSector;
	RpAtomic* apAtom;
	RwLLLink lWorldSectorInAtomic;
	RpWorldSector* worldSector;
};

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct plume_config
{
	float32 emit_end;
	float32 rate;
	float32 radius;
	float32 life_min;
	float32 life_max;
	float32 vel_min;
	float32 vel_max;
	float32 vel_angle;
	float32 size_min;
	float32 size_max;
	float32 size_scale;
	float32 y_accel;
	xColor_tag color;
	plume_emitter initial;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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
	_class_6 anim_coll;
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

struct xCamCoordCylinder
{
	xVec3 origin;
	float32 dist;
	float32 height;
	float32 theta;
};

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct bubble_config
{
	float32 rate;
	float32 life;
	bubble_emitter initial;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct type_mapping
{
	int8* name;
	int32 type;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct mist_particle
{
	xVec3 loc;
	float32 size;
	float32 age;
	float32 age_rate;
	float32 y_vel;
	float32 y_accel;
	float32 size_vel;
	xColor_tag color;
	float32 alpha;
	float32 pad;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct _tagiPad
{
	int32 port;
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

struct splash_emitter
{
	float32 age;
	float32 age_rate;
	xVec3 center;
	float32 radius;
	float32 radius_vel;
	float32 dxz;
	float32 dxz_vel;
	float32 dy;
	float32 dy_vel;
	float32 dy_accel;
	float32 alpha_start;
	float32 alpha_delta;
	float32 u;
	_class_1 mist;
	_class_4 ring;
	_class_7 streak;
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zPlayerLassoInfo
{
	float32 dist;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	zLasso lasso;
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
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	void(*BeforeEnter)(xAnimPlay*, xAnimState*, void*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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

struct xSurface
{
};

struct plume_particle
{
	xVec3 loc;
	float32 size;
	float32 age;
	float32 age_rate;
	float32 y_accel;
	float32 size_vel;
	xVec3 vel;
	xColor_tag color;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xCoef
{
	float32 a[4];
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
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

struct zRewardsMgr
{
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

struct plume_emitter
{
	float32 emit_time;
	float32 emit_end;
	float32 emitted;
	float32 rate;
	xVec3 center;
	float32 radius;
	float32 vel_min;
	float32 vel_delta;
	float32 vel_angle;
	float32 size_min;
	float32 size_delta;
	float32 size_scale;
	float32 age_rate_min;
	float32 age_rate_delta;
	float32 y_accel;
	xColor_tag color;
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

struct xAnimTable
{
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
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

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
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

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct ring_particle
{
	xVec3 loc;
	float32 size;
	float32 age;
	float32 age_rate;
	float32 rx;
	float32 rz;
	float32 size_vel;
	xColor_tag color;
	float32 alpha;
	uint8 fade_in;
	uint8 pad[3];
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

struct xCamCoordSphere
{
	xVec3 origin;
	float32 dist;
	xQuat dir;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _class_3
{
	float32 rate;
	float32 size_min;
	float32 size_max;
	float32 size_scale;
	float32 life;
	float32 y_vel;
	float32 y_accel;
	xColor_tag color;
};

struct xCamBlend : xCam
{
	xCam* src;
	xCam* dst;
	float32 time;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct RpSector
{
	int32 type;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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
		_class_2 tuv;
		tri_data_0 tri;
	};
};

struct ptank_pool__color_mat : ptank_pool
{
	xColor_tag* color;
	xMat4x3* mat;
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct _class_4
{
	float32 emit_begin;
	float32 emit_end;
	float32 rate;
	float32 emitted;
	float32 age_rate_min;
	float32 age_rate_delta;
	float32 size_min;
	float32 size_delta;
	xColor_tag color;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xGrid
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zAssetPickupTable
{
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
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct zCutsceneMgr
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _class_5
{
	float32 emit_begin;
	float32 emit_end;
	float32 rate;
	float32 life_min;
	float32 life_max;
	float32 size_min;
	float32 size_max;
	xColor_tag color;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _class_6
{
	xVec3* verts;
};

struct streak_particle
{
	xVec3 loc;
	float32 width;
	float32 length;
	xVec3 vel;
	float32 age;
	float32 age_rate;
	float32 length_vel;
	float32 length_max;
	float32 y_accel;
	xColor_tag color;
	float32 alpha;
	float32 pad1;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _class_7
{
	float32 emit_end;
	float32 rate;
	float32 emitted;
	float32 age_rate_min;
	float32 age_rate_delta;
	float32 vel_min;
	float32 vel_delta;
	float32 width;
	float32 length;
	xColor_tag color;
	float32 y_accel;
};

enum xCamOrientType
{
	XCAM_ORIENT_INVALID = 0xffffffff,
	XCAM_ORIENT_QUAT,
	XCAM_ORIENT_EULER,
	XCAM_ORIENT_MAX
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

struct SwimEmitter
{
	float32 emit_time;
	float32 emit_end;
	float32 emitted;
	float32 rate;
	float32 radius;
	float32 vel_min;
	float32 vel_delta;
	float32 vel_angle;
	float32 size_min;
	float32 size_delta;
	float32 size_scale;
	float32 age_rate_min;
	float32 age_rate_delta;
	float32 y_accel;
	xColor_tag color;
	float32 age_rate;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint16 Flags;
	uint16 Probability;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

enum type_enum
{
	TYPE_SPLASH,
	TYPE_PLUME,
	TYPE_BUBBLE,
	TYPE_CHAIN,
	MAX_TYPE
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xCamOrientEuler
{
	float32 yaw;
	float32 pitch;
	float32 roll;
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

struct xFFX
{
};

struct xEntBoulder
{
};

struct _class_8
{
	float32 emit_end;
	float32 rate;
	float32 life_min;
	float32 life_max;
	float32 vel_min;
	float32 vel_max;
	float32 width;
	float32 length;
	float32 y_accel;
	xColor_tag color;
};

struct _class_9
{
	union
	{
		xVec3 cart;
		xCamCoordCylinder cylinder;
		xCamCoordSphere sphere;
	};
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct zEntHangable
{
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct zPlatform
{
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

enum iSndHandle
{
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
};

struct anim_coll_data
{
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

struct xCamConfigCommon
{
	uint8 priority;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 blend_time;
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

struct _class_10
{
	union
	{
		xQuat quat;
		xCamOrientEuler euler;
	};
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
};

struct rxReq
{
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

struct HIFastIMLockStruct
{
	<unknown fundamental type (0xa510)>* dmaPacket;
	int32 qwCount;
	int32 format;
	xVec3* pos;
	xVec2* uv;
	xColor_tag* color;
	int32 vertCount;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct splash_config
{
	_class_11 cone;
	_class_3 mist;
	_class_5 ring;
	_class_8 streak;
	splash_emitter initial;
};

struct RwLinkList
{
	RwLLLink link;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

struct xCamScreen
{
	RwCamera* icam;
	float32 fov;
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

enum xCamCoordType
{
	XCAM_COORD_INVALID = 0xffffffff,
	XCAM_COORD_CART,
	XCAM_COORD_CYLINDER,
	XCAM_COORD_SPHERE,
	XCAM_COORD_MAX
};

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

struct _class_11
{
	float32 life;
	float32 radius_birth;
	float32 radius_death;
	float32 dxz_birth;
	float32 dxz_death;
	float32 dy_birth;
	float32 dy_max;
	float32 dy_airtime;
	int32 alpha_birth;
	int32 alpha_death;
	uint32 sound_group_id;
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
	tri_data_1 tri;
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
int8 ini_filename[11];
int8* texture_key_names[8];
RwTexture* cone_texture;
splash_emitter* splash_emitters;
int32 splash_emitters_size;
plume_emitter* plume_emitters;
int32 plume_emitters_size;
bubble_emitter* bubble_emitters;
int32 bubble_emitters_size;
chain_emitter* chain_emitters;
int32 chain_emitters_size;
int32 mist_system_id;
int32 ring_system_id;
int32 streak_system_id;
int32 plume_system_id;
int32 trail_system_id;
int32 drips_system_id;
splash_planner* planners;
type_mapping* type_mappings;
int32 types_size;
uint32 texture_ids[8];
int32 cone_texture_repeats;
float32 old_zbias;
xColor_tag emitterColor;
uint32 gActiveHeap;
int32(*update_plume_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32(*update_ring_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32(*update_streak_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32(*update_mist_particles)(uint8*, int32, ptank_pool&, float32, void*);
xVec3 g_Z3;
uint32 ourGlobals[4096];
<unknown fundamental type (0xa510)> vu1DataXYZShift;
<unknown fundamental type (0xa510)> vu1DataXYZShift;
int32 _rpPTankAtomicDataOffset;
zGlobals globals;

void zSplashRender();
void zSplashUpdate(float32 dt);
void zSplashSceneExit();
void zSplashSceneEnter();
void render_cones();
void update_chain_emitters(float32 dt);
void update_plume_emitters(float32 dt);
int32 update_plume_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void update_splash_emitters(float32 dt);
int32 update_streak_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 update_ring_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 update_mist_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void emit_splash_internal(int32 type, xVec3& loc);
void refresh_plume(plume_config& cfg);
void refresh_splash(splash_config& cfg);

// zSplashRender__Fv
// Start address: 0x499190
void zSplashRender()
{
	// Line 2266, Address: 0x499190, Func Offset: 0
	// Line 2267, Address: 0x499198, Func Offset: 0x8
	// Line 2269, Address: 0x4991a4, Func Offset: 0x14
	// Line 2270, Address: 0x4991ac, Func Offset: 0x1c
	// Func End, Address: 0x4991b8, Func Offset: 0x28
}

// zSplashUpdate__Ff
// Start address: 0x4991c0
void zSplashUpdate(float32 dt)
{
	// Line 2255, Address: 0x4991c0, Func Offset: 0
	// Line 2256, Address: 0x4991cc, Func Offset: 0xc
	// Line 2259, Address: 0x4991d8, Func Offset: 0x18
	// Line 2260, Address: 0x4991e0, Func Offset: 0x20
	// Line 2261, Address: 0x4991e8, Func Offset: 0x28
	// Line 2262, Address: 0x4991f0, Func Offset: 0x30
	// Line 2261, Address: 0x4991f4, Func Offset: 0x34
	// Line 2262, Address: 0x4991f8, Func Offset: 0x38
	// Line 2263, Address: 0x499248, Func Offset: 0x88
	// Line 2262, Address: 0x499260, Func Offset: 0xa0
	// Line 2263, Address: 0x499264, Func Offset: 0xa4
	// Line 2262, Address: 0x49926c, Func Offset: 0xac
	// Line 2263, Address: 0x499270, Func Offset: 0xb0
	// Line 2262, Address: 0x499298, Func Offset: 0xd8
	// Line 2263, Address: 0x4992a0, Func Offset: 0xe0
	// Func End, Address: 0x4992b0, Func Offset: 0xf0
}

// zSplashSceneExit__Fv
// Start address: 0x4992b0
void zSplashSceneExit()
{
	// Line 2252, Address: 0x4992b0, Func Offset: 0
	// Func End, Address: 0x4992b8, Func Offset: 0x8
}

// zSplashSceneEnter__Fv
// Start address: 0x4992c0
void zSplashSceneEnter()
{
	splash_planner* plan;
	splash_planner* end_plan;
	// Line 2198, Address: 0x4992c0, Func Offset: 0
	// Line 2209, Address: 0x4992c4, Func Offset: 0x4
	// Line 2198, Address: 0x4992c8, Func Offset: 0x8
	// Line 2204, Address: 0x4992cc, Func Offset: 0xc
	// Line 2198, Address: 0x4992d0, Func Offset: 0x10
	// Line 2209, Address: 0x4992dc, Func Offset: 0x1c
	// Line 2199, Address: 0x4992e0, Func Offset: 0x20
	// Line 2200, Address: 0x4992e4, Func Offset: 0x24
	// Line 2201, Address: 0x4992e8, Func Offset: 0x28
	// Line 2202, Address: 0x4992ec, Func Offset: 0x2c
	// Line 2204, Address: 0x4992f0, Func Offset: 0x30
	// Line 2205, Address: 0x4992f4, Func Offset: 0x34
	// Line 2206, Address: 0x4992f8, Func Offset: 0x38
	// Line 2207, Address: 0x4992fc, Func Offset: 0x3c
	// Line 2208, Address: 0x499300, Func Offset: 0x40
	// Line 2211, Address: 0x499304, Func Offset: 0x44
	// Line 2213, Address: 0x49952c, Func Offset: 0x26c
	// Line 2215, Address: 0x499538, Func Offset: 0x278
	// Line 2216, Address: 0x499548, Func Offset: 0x288
	// Line 2215, Address: 0x499550, Func Offset: 0x290
	// Line 2216, Address: 0x499554, Func Offset: 0x294
	// Line 2217, Address: 0x49955c, Func Offset: 0x29c
	// Line 2216, Address: 0x499564, Func Offset: 0x2a4
	// Line 2217, Address: 0x499568, Func Offset: 0x2a8
	// Line 2218, Address: 0x499570, Func Offset: 0x2b0
	// Line 2217, Address: 0x499578, Func Offset: 0x2b8
	// Line 2218, Address: 0x49957c, Func Offset: 0x2bc
	// Line 2219, Address: 0x499584, Func Offset: 0x2c4
	// Line 2222, Address: 0x49958c, Func Offset: 0x2cc
	// Line 2226, Address: 0x499590, Func Offset: 0x2d0
	// Line 2222, Address: 0x499594, Func Offset: 0x2d4
	// Line 2226, Address: 0x499598, Func Offset: 0x2d8
	// Line 2227, Address: 0x4995b0, Func Offset: 0x2f0
	// Line 2229, Address: 0x4995b8, Func Offset: 0x2f8
	// Line 2231, Address: 0x4995ec, Func Offset: 0x32c
	// Line 2232, Address: 0x4995f0, Func Offset: 0x330
	// Line 2233, Address: 0x4995f8, Func Offset: 0x338
	// Line 2235, Address: 0x499600, Func Offset: 0x340
	// Line 2236, Address: 0x499608, Func Offset: 0x348
	// Line 2241, Address: 0x499610, Func Offset: 0x350
	// Line 2244, Address: 0x49973c, Func Offset: 0x47c
	// Line 2247, Address: 0x499750, Func Offset: 0x490
	// Func End, Address: 0x499768, Func Offset: 0x4a8
}

// render_cones__21@unnamed@zSplash_cpp@Fv
// Start address: 0x499770
void render_cones()
{
	HIFastIMLockStruct lock;
	xVec3* pos;
	xVec2* uv;
	uint32* color;
	float32 du;
	splash_emitter* splash;
	splash_emitter* end_splash;
	float32 cx;
	float32 cy;
	float32 cz;
	float32 radius;
	float32 dxz;
	float32 dy;
	uint32 splash_color;
	float32 u;
	float32 s;
	float32 c;
	float32 Ax;
	float32 Ay;
	float32 Az;
	float32 By;
	float32 Bz;
	xVec3* end_pos;
	float32 tempc;
	// Line 1566, Address: 0x499770, Func Offset: 0
	// Line 1567, Address: 0x49977c, Func Offset: 0xc
	// Line 1570, Address: 0x499788, Func Offset: 0x18
	// Line 1574, Address: 0x4997cc, Func Offset: 0x5c
	// Line 1570, Address: 0x4997d0, Func Offset: 0x60
	// Line 1574, Address: 0x4997d4, Func Offset: 0x64
	// Line 1570, Address: 0x4997d8, Func Offset: 0x68
	// Line 1574, Address: 0x4997f0, Func Offset: 0x80
	// Line 1570, Address: 0x4997f4, Func Offset: 0x84
	// Line 1574, Address: 0x4997f8, Func Offset: 0x88
	// Line 1570, Address: 0x499804, Func Offset: 0x94
	// Line 1574, Address: 0x49981c, Func Offset: 0xac
	// Line 1579, Address: 0x499824, Func Offset: 0xb4
	// Line 1582, Address: 0x499828, Func Offset: 0xb8
	// Line 1579, Address: 0x49982c, Func Offset: 0xbc
	// Line 1575, Address: 0x499830, Func Offset: 0xc0
	// Line 1579, Address: 0x499834, Func Offset: 0xc4
	// Line 1576, Address: 0x499838, Func Offset: 0xc8
	// Line 1579, Address: 0x49983c, Func Offset: 0xcc
	// Line 1577, Address: 0x499840, Func Offset: 0xd0
	// Line 1582, Address: 0x499844, Func Offset: 0xd4
	// Line 1579, Address: 0x499848, Func Offset: 0xd8
	// Line 1582, Address: 0x49984c, Func Offset: 0xdc
	// Line 1583, Address: 0x499864, Func Offset: 0xf4
	// Line 1616, Address: 0x49986c, Func Offset: 0xfc
	// Line 1610, Address: 0x499880, Func Offset: 0x110
	// Line 1616, Address: 0x499884, Func Offset: 0x114
	// Line 1590, Address: 0x499888, Func Offset: 0x118
	// Line 1604, Address: 0x499898, Func Offset: 0x128
	// Line 1590, Address: 0x49989c, Func Offset: 0x12c
	// Line 1592, Address: 0x4998a0, Func Offset: 0x130
	// Line 1590, Address: 0x4998a4, Func Offset: 0x134
	// Line 1586, Address: 0x4998b0, Func Offset: 0x140
	// Line 1590, Address: 0x4998b8, Func Offset: 0x148
	// Line 1587, Address: 0x4998bc, Func Offset: 0x14c
	// Line 1590, Address: 0x4998c0, Func Offset: 0x150
	// Line 1588, Address: 0x4998c4, Func Offset: 0x154
	// Line 1590, Address: 0x4998cc, Func Offset: 0x15c
	// Line 1595, Address: 0x499904, Func Offset: 0x194
	// Line 1591, Address: 0x499908, Func Offset: 0x198
	// Line 1592, Address: 0x49990c, Func Offset: 0x19c
	// Line 1595, Address: 0x499910, Func Offset: 0x1a0
	// Line 1597, Address: 0x499918, Func Offset: 0x1a8
	// Line 1598, Address: 0x49991c, Func Offset: 0x1ac
	// Line 1597, Address: 0x499924, Func Offset: 0x1b4
	// Line 1599, Address: 0x499934, Func Offset: 0x1c4
	// Line 1601, Address: 0x499938, Func Offset: 0x1c8
	// Line 1618, Address: 0x49993c, Func Offset: 0x1cc
	// Line 1602, Address: 0x49994c, Func Offset: 0x1dc
	// Line 1604, Address: 0x499950, Func Offset: 0x1e0
	// Line 1618, Address: 0x49995c, Func Offset: 0x1ec
	// Line 1604, Address: 0x499960, Func Offset: 0x1f0
	// Line 1618, Address: 0x499964, Func Offset: 0x1f4
	// Line 1608, Address: 0x49996c, Func Offset: 0x1fc
	// Line 1618, Address: 0x499970, Func Offset: 0x200
	// Line 1608, Address: 0x499974, Func Offset: 0x204
	// Line 1618, Address: 0x499978, Func Offset: 0x208
	// Line 1609, Address: 0x49997c, Func Offset: 0x20c
	// Line 1618, Address: 0x499980, Func Offset: 0x210
	// Line 1609, Address: 0x499984, Func Offset: 0x214
	// Line 1618, Address: 0x499988, Func Offset: 0x218
	// Line 1615, Address: 0x499998, Func Offset: 0x228
	// Line 1618, Address: 0x49999c, Func Offset: 0x22c
	// Line 1616, Address: 0x4999a4, Func Offset: 0x234
	// Line 1618, Address: 0x4999a8, Func Offset: 0x238
	// Line 1616, Address: 0x4999ac, Func Offset: 0x23c
	// Line 1618, Address: 0x4999b0, Func Offset: 0x240
	// Line 1617, Address: 0x4999b4, Func Offset: 0x244
	// Line 1618, Address: 0x4999b8, Func Offset: 0x248
	// Line 1614, Address: 0x4999bc, Func Offset: 0x24c
	// Line 1618, Address: 0x4999c0, Func Offset: 0x250
	// Line 1630, Address: 0x4999c8, Func Offset: 0x258
	// Line 1621, Address: 0x4999cc, Func Offset: 0x25c
	// Line 1622, Address: 0x4999d0, Func Offset: 0x260
	// Line 1623, Address: 0x4999dc, Func Offset: 0x26c
	// Line 1625, Address: 0x4999e0, Func Offset: 0x270
	// Line 1623, Address: 0x4999e4, Func Offset: 0x274
	// Line 1624, Address: 0x4999e8, Func Offset: 0x278
	// Line 1625, Address: 0x4999ec, Func Offset: 0x27c
	// Line 1626, Address: 0x4999f0, Func Offset: 0x280
	// Line 1627, Address: 0x4999fc, Func Offset: 0x28c
	// Line 1626, Address: 0x499a00, Func Offset: 0x290
	// Line 1627, Address: 0x499a04, Func Offset: 0x294
	// Line 1628, Address: 0x499a08, Func Offset: 0x298
	// Line 1627, Address: 0x499a0c, Func Offset: 0x29c
	// Line 1630, Address: 0x499a10, Func Offset: 0x2a0
	// Line 1632, Address: 0x499a18, Func Offset: 0x2a8
	// Line 1633, Address: 0x499a1c, Func Offset: 0x2ac
	// Line 1632, Address: 0x499a20, Func Offset: 0x2b0
	// Line 1633, Address: 0x499a24, Func Offset: 0x2b4
	// Line 1632, Address: 0x499a28, Func Offset: 0x2b8
	// Line 1635, Address: 0x499a30, Func Offset: 0x2c0
	// Line 1638, Address: 0x499a40, Func Offset: 0x2d0
	// Line 1641, Address: 0x499a4c, Func Offset: 0x2dc
	// Line 1642, Address: 0x499a6c, Func Offset: 0x2fc
	// Func End, Address: 0x499a7c, Func Offset: 0x30c
}

// update_chain_emitters__21@unnamed@zSplash_cpp@Ff
// Start address: 0x499a80
void update_chain_emitters(float32 dt)
{
	chain_emitter* e;
	chain_link* links;
	int32 links_size;
	chain_link* link;
	chain_link* end_link;
	// Line 1478, Address: 0x499a80, Func Offset: 0
	// Line 1479, Address: 0x499aa0, Func Offset: 0x20
	// Line 1478, Address: 0x499aa4, Func Offset: 0x24
	// Line 1479, Address: 0x499aa8, Func Offset: 0x28
	// Line 1481, Address: 0x499ac4, Func Offset: 0x44
	// Line 1489, Address: 0x499ad4, Func Offset: 0x54
	// Line 1484, Address: 0x499ad8, Func Offset: 0x58
	// Line 1483, Address: 0x499adc, Func Offset: 0x5c
	// Line 1489, Address: 0x499ae0, Func Offset: 0x60
	// Line 1491, Address: 0x499af0, Func Offset: 0x70
	// Line 1492, Address: 0x499b20, Func Offset: 0xa0
	// Line 1494, Address: 0x499b38, Func Offset: 0xb8
	// Line 1501, Address: 0x499b48, Func Offset: 0xc8
	// Line 1503, Address: 0x499b4c, Func Offset: 0xcc
	// Line 1504, Address: 0x499b78, Func Offset: 0xf8
	// Line 1497, Address: 0x499b8c, Func Offset: 0x10c
	// Line 1504, Address: 0x499b90, Func Offset: 0x110
	// Line 1497, Address: 0x499b98, Func Offset: 0x118
	// Line 1504, Address: 0x499b9c, Func Offset: 0x11c
	// Line 1498, Address: 0x499bcc, Func Offset: 0x14c
	// Line 1504, Address: 0x499bd8, Func Offset: 0x158
	// Func End, Address: 0x499bfc, Func Offset: 0x17c
}

// update_plume_emitters__21@unnamed@zSplash_cpp@Ff
// Start address: 0x499c00
void update_plume_emitters(float32 dt)
{
	plume_emitter* e;
	plume_emitter* ende;
	int32 emit;
	float32 cx;
	float32 cy;
	float32 cz;
	uint8* mem;
	int32 have;
	plume_particle* p;
	plume_particle* endp;
	float32 ang;
	float32 rr;
	float32 vel_mag;
	float32 vel_pitch;
	float32 vel_roll;
	// Line 1392, Address: 0x499c00, Func Offset: 0
	// Line 1393, Address: 0x499c44, Func Offset: 0x44
	// Line 1392, Address: 0x499c48, Func Offset: 0x48
	// Line 1393, Address: 0x499c4c, Func Offset: 0x4c
	// Line 1394, Address: 0x499c5c, Func Offset: 0x5c
	// Line 1396, Address: 0x499c64, Func Offset: 0x64
	// Line 1397, Address: 0x499c70, Func Offset: 0x70
	// Line 1399, Address: 0x499c80, Func Offset: 0x80
	// Line 1400, Address: 0x499c84, Func Offset: 0x84
	// Line 1399, Address: 0x499c88, Func Offset: 0x88
	// Line 1401, Address: 0x499d48, Func Offset: 0x148
	// Line 1404, Address: 0x499d50, Func Offset: 0x150
	// Line 1405, Address: 0x499d68, Func Offset: 0x168
	// Line 1406, Address: 0x499d74, Func Offset: 0x174
	// Line 1408, Address: 0x499d7c, Func Offset: 0x17c
	// Line 1410, Address: 0x499d90, Func Offset: 0x190
	// Line 1412, Address: 0x499d98, Func Offset: 0x198
	// Line 1453, Address: 0x499da0, Func Offset: 0x1a0
	// Line 1454, Address: 0x499da4, Func Offset: 0x1a4
	// Line 1455, Address: 0x499db0, Func Offset: 0x1b0
	// Line 1415, Address: 0x499dbc, Func Offset: 0x1bc
	// Line 1455, Address: 0x499dc0, Func Offset: 0x1c0
	// Line 1415, Address: 0x499dc8, Func Offset: 0x1c8
	// Line 1455, Address: 0x499dcc, Func Offset: 0x1cc
	// Line 1419, Address: 0x499dd8, Func Offset: 0x1d8
	// Line 1455, Address: 0x499ddc, Func Offset: 0x1dc
	// Line 1419, Address: 0x499de0, Func Offset: 0x1e0
	// Line 1455, Address: 0x499de4, Func Offset: 0x1e4
	// Line 1423, Address: 0x499df8, Func Offset: 0x1f8
	// Line 1455, Address: 0x499e00, Func Offset: 0x200
	// Line 1423, Address: 0x499e08, Func Offset: 0x208
	// Line 1455, Address: 0x499e44, Func Offset: 0x244
	// Line 1424, Address: 0x499e4c, Func Offset: 0x24c
	// Line 1455, Address: 0x499e50, Func Offset: 0x250
	// Line 1425, Address: 0x499e60, Func Offset: 0x260
	// Line 1455, Address: 0x499e68, Func Offset: 0x268
	// Line 1425, Address: 0x499e70, Func Offset: 0x270
	// Line 1455, Address: 0x499e98, Func Offset: 0x298
	// Line 1426, Address: 0x499ea4, Func Offset: 0x2a4
	// Line 1425, Address: 0x499eb0, Func Offset: 0x2b0
	// Line 1426, Address: 0x499eb4, Func Offset: 0x2b4
	// Line 1455, Address: 0x499eb8, Func Offset: 0x2b8
	// Line 1428, Address: 0x499ebc, Func Offset: 0x2bc
	// Line 1455, Address: 0x499ec4, Func Offset: 0x2c4
	// Line 1431, Address: 0x499ed0, Func Offset: 0x2d0
	// Line 1455, Address: 0x499ed8, Func Offset: 0x2d8
	// Line 1431, Address: 0x499ee0, Func Offset: 0x2e0
	// Line 1455, Address: 0x499f14, Func Offset: 0x314
	// Line 1431, Address: 0x499f18, Func Offset: 0x318
	// Line 1455, Address: 0x499f28, Func Offset: 0x328
	// Line 1432, Address: 0x499f30, Func Offset: 0x330
	// Line 1455, Address: 0x499f38, Func Offset: 0x338
	// Line 1432, Address: 0x499f40, Func Offset: 0x340
	// Line 1455, Address: 0x499f70, Func Offset: 0x370
	// Line 1432, Address: 0x499f74, Func Offset: 0x374
	// Line 1455, Address: 0x499f78, Func Offset: 0x378
	// Line 1433, Address: 0x499f80, Func Offset: 0x380
	// Line 1455, Address: 0x499f88, Func Offset: 0x388
	// Line 1433, Address: 0x499f90, Func Offset: 0x390
	// Line 1455, Address: 0x499fc0, Func Offset: 0x3c0
	// Line 1433, Address: 0x499fc4, Func Offset: 0x3c4
	// Line 1434, Address: 0x499fc8, Func Offset: 0x3c8
	// Line 1455, Address: 0x499fcc, Func Offset: 0x3cc
	// Line 1434, Address: 0x499fd4, Func Offset: 0x3d4
	// Line 1455, Address: 0x499fd8, Func Offset: 0x3d8
	// Line 1434, Address: 0x499fe0, Func Offset: 0x3e0
	// Line 1455, Address: 0x499fe4, Func Offset: 0x3e4
	// Line 1435, Address: 0x499fec, Func Offset: 0x3ec
	// Line 1455, Address: 0x499ff0, Func Offset: 0x3f0
	// Line 1436, Address: 0x499ffc, Func Offset: 0x3fc
	// Line 1437, Address: 0x49a000, Func Offset: 0x400
	// Line 1455, Address: 0x49a004, Func Offset: 0x404
	// Line 1438, Address: 0x49a00c, Func Offset: 0x40c
	// Line 1455, Address: 0x49a014, Func Offset: 0x414
	// Line 1441, Address: 0x49a020, Func Offset: 0x420
	// Line 1455, Address: 0x49a028, Func Offset: 0x428
	// Line 1441, Address: 0x49a030, Func Offset: 0x430
	// Line 1455, Address: 0x49a05c, Func Offset: 0x45c
	// Line 1441, Address: 0x49a060, Func Offset: 0x460
	// Line 1455, Address: 0x49a070, Func Offset: 0x470
	// Line 1445, Address: 0x49a0a0, Func Offset: 0x4a0
	// Line 1455, Address: 0x49a0a8, Func Offset: 0x4a8
	// Line 1445, Address: 0x49a0b0, Func Offset: 0x4b0
	// Line 1455, Address: 0x49a0dc, Func Offset: 0x4dc
	// Line 1445, Address: 0x49a0e0, Func Offset: 0x4e0
	// Line 1455, Address: 0x49a0f0, Func Offset: 0x4f0
	// Line 1447, Address: 0x49a0fc, Func Offset: 0x4fc
	// Line 1455, Address: 0x49a108, Func Offset: 0x508
	// Func End, Address: 0x49a178, Func Offset: 0x578
}

// update_plume_particles__21@unnamed@zSplash_cpp@FPUciR10ptank_poolfPv
// Start address: 0x49a180
int32 update_plume_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size& pool;
	plume_particle* p;
	plume_particle* end;
	float32 t1;
	float32 t2;
	float32 alpha;
	// Line 1337, Address: 0x49a180, Func Offset: 0
	// Line 1344, Address: 0x49a184, Func Offset: 0x4
	// Line 1337, Address: 0x49a188, Func Offset: 0x8
	// Line 1344, Address: 0x49a18c, Func Offset: 0xc
	// Line 1337, Address: 0x49a190, Func Offset: 0x10
	// Line 1344, Address: 0x49a194, Func Offset: 0x14
	// Line 1337, Address: 0x49a198, Func Offset: 0x18
	// Line 1338, Address: 0x49a1a4, Func Offset: 0x24
	// Line 1337, Address: 0x49a1a8, Func Offset: 0x28
	// Line 1344, Address: 0x49a1ac, Func Offset: 0x2c
	// Line 1337, Address: 0x49a1b0, Func Offset: 0x30
	// Line 1344, Address: 0x49a1b4, Func Offset: 0x34
	// Line 1337, Address: 0x49a1b8, Func Offset: 0x38
	// Line 1346, Address: 0x49a1bc, Func Offset: 0x3c
	// Line 1348, Address: 0x49a1c4, Func Offset: 0x44
	// Line 1351, Address: 0x49a1c8, Func Offset: 0x48
	// Line 1348, Address: 0x49a1cc, Func Offset: 0x4c
	// Line 1351, Address: 0x49a1d4, Func Offset: 0x54
	// Line 1348, Address: 0x49a1dc, Func Offset: 0x5c
	// Line 1351, Address: 0x49a1e4, Func Offset: 0x64
	// Line 1353, Address: 0x49a1f0, Func Offset: 0x70
	// Line 1354, Address: 0x49a1f4, Func Offset: 0x74
	// Line 1355, Address: 0x49a268, Func Offset: 0xe8
	// Line 1358, Address: 0x49a270, Func Offset: 0xf0
	// Line 1360, Address: 0x49a284, Func Offset: 0x104
	// Line 1361, Address: 0x49a298, Func Offset: 0x118
	// Line 1362, Address: 0x49a2ac, Func Offset: 0x12c
	// Line 1364, Address: 0x49a2c0, Func Offset: 0x140
	// Line 1366, Address: 0x49a2d4, Func Offset: 0x154
	// Line 1368, Address: 0x49a31c, Func Offset: 0x19c
	// Line 1369, Address: 0x49a428, Func Offset: 0x2a8
	// Line 1372, Address: 0x49a434, Func Offset: 0x2b4
	// Line 1375, Address: 0x49a43c, Func Offset: 0x2bc
	// Line 1378, Address: 0x49a440, Func Offset: 0x2c0
	// Line 1375, Address: 0x49a444, Func Offset: 0x2c4
	// Line 1378, Address: 0x49a448, Func Offset: 0x2c8
	// Line 1375, Address: 0x49a44c, Func Offset: 0x2cc
	// Line 1378, Address: 0x49a450, Func Offset: 0x2d0
	// Line 1375, Address: 0x49a454, Func Offset: 0x2d4
	// Line 1378, Address: 0x49a458, Func Offset: 0x2d8
	// Line 1375, Address: 0x49a45c, Func Offset: 0x2dc
	// Line 1378, Address: 0x49a460, Func Offset: 0x2e0
	// Line 1377, Address: 0x49a468, Func Offset: 0x2e8
	// Line 1379, Address: 0x49a46c, Func Offset: 0x2ec
	// Line 1375, Address: 0x49a470, Func Offset: 0x2f0
	// Line 1378, Address: 0x49a478, Func Offset: 0x2f8
	// Line 1375, Address: 0x49a47c, Func Offset: 0x2fc
	// Line 1378, Address: 0x49a480, Func Offset: 0x300
	// Line 1379, Address: 0x49a494, Func Offset: 0x314
	// Line 1378, Address: 0x49a49c, Func Offset: 0x31c
	// Line 1379, Address: 0x49a4a0, Func Offset: 0x320
	// Line 1380, Address: 0x49a4ac, Func Offset: 0x32c
	// Line 1381, Address: 0x49a538, Func Offset: 0x3b8
	// Line 1382, Address: 0x49a558, Func Offset: 0x3d8
	// Line 1384, Address: 0x49a564, Func Offset: 0x3e4
	// Line 1385, Address: 0x49a568, Func Offset: 0x3e8
	// Line 1386, Address: 0x49a56c, Func Offset: 0x3ec
	// Line 1388, Address: 0x49a578, Func Offset: 0x3f8
	// Line 1389, Address: 0x49a588, Func Offset: 0x408
	// Line 1388, Address: 0x49a5a0, Func Offset: 0x420
	// Line 1389, Address: 0x49a5a8, Func Offset: 0x428
	// Line 1388, Address: 0x49a5ac, Func Offset: 0x42c
	// Line 1389, Address: 0x49a5b4, Func Offset: 0x434
	// Func End, Address: 0x49a5bc, Func Offset: 0x43c
}

// update_splash_emitters__21@unnamed@zSplash_cpp@Ff
// Start address: 0x49a5c0
void update_splash_emitters(float32 dt)
{
	splash_emitter* e;
	splash_emitter* ende;
	float32 r0;
	float32 y0;
	float32 dyv;
	// Line 1293, Address: 0x49a5c0, Func Offset: 0
	// Line 1294, Address: 0x49a610, Func Offset: 0x50
	// Line 1293, Address: 0x49a614, Func Offset: 0x54
	// Line 1294, Address: 0x49a618, Func Offset: 0x58
	// Line 1295, Address: 0x49a630, Func Offset: 0x70
	// Line 1298, Address: 0x49a638, Func Offset: 0x78
	// Line 1299, Address: 0x49a63c, Func Offset: 0x7c
	// Line 1298, Address: 0x49a640, Func Offset: 0x80
	// Line 1299, Address: 0x49a648, Func Offset: 0x88
	// Line 1298, Address: 0x49a650, Func Offset: 0x90
	// Line 1299, Address: 0x49a65c, Func Offset: 0x9c
	// Line 1301, Address: 0x49a668, Func Offset: 0xa8
	// Line 1302, Address: 0x49a66c, Func Offset: 0xac
	// Line 1301, Address: 0x49a670, Func Offset: 0xb0
	// Line 1303, Address: 0x49a7f8, Func Offset: 0x238
	// Line 1313, Address: 0x49a800, Func Offset: 0x240
	// Line 1307, Address: 0x49a804, Func Offset: 0x244
	// Line 1310, Address: 0x49a80c, Func Offset: 0x24c
	// Line 1307, Address: 0x49a810, Func Offset: 0x250
	// Line 1313, Address: 0x49a814, Func Offset: 0x254
	// Line 1310, Address: 0x49a818, Func Offset: 0x258
	// Line 1307, Address: 0x49a81c, Func Offset: 0x25c
	// Line 1310, Address: 0x49a820, Func Offset: 0x260
	// Line 1311, Address: 0x49a82c, Func Offset: 0x26c
	// Line 1312, Address: 0x49a844, Func Offset: 0x284
	// Line 1313, Address: 0x49a84c, Func Offset: 0x28c
	// Line 1312, Address: 0x49a854, Func Offset: 0x294
	// Line 1313, Address: 0x49a858, Func Offset: 0x298
	// Line 1314, Address: 0x49a874, Func Offset: 0x2b4
	// Line 1315, Address: 0x49a880, Func Offset: 0x2c0
	// Line 1318, Address: 0x49a890, Func Offset: 0x2d0
	// Line 1321, Address: 0x49ac0c, Func Offset: 0x64c
	// Line 1323, Address: 0x49ac2c, Func Offset: 0x66c
	// Line 1333, Address: 0x49af54, Func Offset: 0x994
	// Line 1334, Address: 0x49af60, Func Offset: 0x9a0
	// Line 1318, Address: 0x49af70, Func Offset: 0x9b0
	// Line 1334, Address: 0x49af78, Func Offset: 0x9b8
	// Line 1323, Address: 0x49af94, Func Offset: 0x9d4
	// Line 1334, Address: 0x49af98, Func Offset: 0x9d8
	// Line 1326, Address: 0x49afa0, Func Offset: 0x9e0
	// Line 1334, Address: 0x49afa4, Func Offset: 0x9e4
	// Line 1327, Address: 0x49afac, Func Offset: 0x9ec
	// Line 1334, Address: 0x49afb0, Func Offset: 0x9f0
	// Line 1329, Address: 0x49afb8, Func Offset: 0x9f8
	// Line 1334, Address: 0x49afbc, Func Offset: 0x9fc
	// Line 1330, Address: 0x49afc4, Func Offset: 0xa04
	// Line 1334, Address: 0x49afd0, Func Offset: 0xa10
	// Line 1327, Address: 0x49afd4, Func Offset: 0xa14
	// Line 1334, Address: 0x49afd8, Func Offset: 0xa18
	// Line 1327, Address: 0x49afdc, Func Offset: 0xa1c
	// Line 1334, Address: 0x49afe8, Func Offset: 0xa28
	// Line 1327, Address: 0x49afec, Func Offset: 0xa2c
	// Line 1334, Address: 0x49aff4, Func Offset: 0xa34
	// Line 1327, Address: 0x49affc, Func Offset: 0xa3c
	// Line 1334, Address: 0x49b004, Func Offset: 0xa44
	// Line 1327, Address: 0x49b008, Func Offset: 0xa48
	// Line 1334, Address: 0x49b00c, Func Offset: 0xa4c
	// Line 1327, Address: 0x49b024, Func Offset: 0xa64
	// Line 1334, Address: 0x49b028, Func Offset: 0xa68
	// Line 1327, Address: 0x49b030, Func Offset: 0xa70
	// Line 1334, Address: 0x49b034, Func Offset: 0xa74
	// Line 1327, Address: 0x49b040, Func Offset: 0xa80
	// Line 1334, Address: 0x49b044, Func Offset: 0xa84
	// Line 1327, Address: 0x49b058, Func Offset: 0xa98
	// Line 1334, Address: 0x49b060, Func Offset: 0xaa0
	// Line 1327, Address: 0x49b068, Func Offset: 0xaa8
	// Line 1334, Address: 0x49b0a4, Func Offset: 0xae4
	// Line 1327, Address: 0x49b0ac, Func Offset: 0xaec
	// Line 1334, Address: 0x49b0b0, Func Offset: 0xaf0
	// Line 1327, Address: 0x49b0bc, Func Offset: 0xafc
	// Line 1334, Address: 0x49b0d0, Func Offset: 0xb10
	// Line 1327, Address: 0x49b0d4, Func Offset: 0xb14
	// Line 1334, Address: 0x49b0dc, Func Offset: 0xb1c
	// Line 1327, Address: 0x49b0e8, Func Offset: 0xb28
	// Line 1334, Address: 0x49b0f0, Func Offset: 0xb30
	// Line 1327, Address: 0x49b0f8, Func Offset: 0xb38
	// Line 1334, Address: 0x49b124, Func Offset: 0xb64
	// Line 1327, Address: 0x49b12c, Func Offset: 0xb6c
	// Line 1334, Address: 0x49b130, Func Offset: 0xb70
	// Line 1327, Address: 0x49b134, Func Offset: 0xb74
	// Line 1334, Address: 0x49b14c, Func Offset: 0xb8c
	// Line 1327, Address: 0x49b150, Func Offset: 0xb90
	// Line 1334, Address: 0x49b154, Func Offset: 0xb94
	// Line 1327, Address: 0x49b16c, Func Offset: 0xbac
	// Line 1334, Address: 0x49b174, Func Offset: 0xbb4
	// Line 1327, Address: 0x49b17c, Func Offset: 0xbbc
	// Line 1334, Address: 0x49b1a8, Func Offset: 0xbe8
	// Line 1327, Address: 0x49b1ac, Func Offset: 0xbec
	// Line 1334, Address: 0x49b1bc, Func Offset: 0xbfc
	// Line 1327, Address: 0x49b204, Func Offset: 0xc44
	// Line 1334, Address: 0x49b24c, Func Offset: 0xc8c
	// Func End, Address: 0x49b2d4, Func Offset: 0xd14
}

// update_streak_particles__21@unnamed@zSplash_cpp@FPUciR10ptank_poolfPv
// Start address: 0x49b2e0
int32 update_streak_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__color_mat& pool;
	xMat4x3& cam_mat;
	float32 ax;
	float32 ay;
	float32 az;
	streak_particle* p;
	streak_particle* end;
	float32 t;
	float32 mag;
	// Line 1162, Address: 0x49b2e0, Func Offset: 0
	// Line 1165, Address: 0x49b2e4, Func Offset: 0x4
	// Line 1162, Address: 0x49b2e8, Func Offset: 0x8
	// Line 1168, Address: 0x49b2ec, Func Offset: 0xc
	// Line 1162, Address: 0x49b2f0, Func Offset: 0x10
	// Line 1163, Address: 0x49b300, Func Offset: 0x20
	// Line 1162, Address: 0x49b304, Func Offset: 0x24
	// Line 1168, Address: 0x49b308, Func Offset: 0x28
	// Line 1162, Address: 0x49b30c, Func Offset: 0x2c
	// Line 1168, Address: 0x49b310, Func Offset: 0x30
	// Line 1162, Address: 0x49b314, Func Offset: 0x34
	// Line 1165, Address: 0x49b324, Func Offset: 0x44
	// Line 1166, Address: 0x49b330, Func Offset: 0x50
	// Line 1170, Address: 0x49b33c, Func Offset: 0x5c
	// Line 1172, Address: 0x49b344, Func Offset: 0x64
	// Line 1175, Address: 0x49b348, Func Offset: 0x68
	// Line 1172, Address: 0x49b34c, Func Offset: 0x6c
	// Line 1175, Address: 0x49b354, Func Offset: 0x74
	// Line 1172, Address: 0x49b35c, Func Offset: 0x7c
	// Line 1175, Address: 0x49b364, Func Offset: 0x84
	// Line 1177, Address: 0x49b370, Func Offset: 0x90
	// Line 1178, Address: 0x49b374, Func Offset: 0x94
	// Line 1179, Address: 0x49b408, Func Offset: 0x128
	// Line 1183, Address: 0x49b410, Func Offset: 0x130
	// Line 1186, Address: 0x49b424, Func Offset: 0x144
	// Line 1187, Address: 0x49b438, Func Offset: 0x158
	// Line 1188, Address: 0x49b44c, Func Offset: 0x16c
	// Line 1191, Address: 0x49b460, Func Offset: 0x180
	// Line 1193, Address: 0x49b474, Func Offset: 0x194
	// Line 1195, Address: 0x49b4bc, Func Offset: 0x1dc
	// Line 1196, Address: 0x49b598, Func Offset: 0x2b8
	// Line 1199, Address: 0x49b5a4, Func Offset: 0x2c4
	// Line 1202, Address: 0x49b5b0, Func Offset: 0x2d0
	// Line 1203, Address: 0x49b5c0, Func Offset: 0x2e0
	// Line 1205, Address: 0x49b5c8, Func Offset: 0x2e8
	// Line 1206, Address: 0x49b5d0, Func Offset: 0x2f0
	// Line 1205, Address: 0x49b5d4, Func Offset: 0x2f4
	// Line 1206, Address: 0x49b5d8, Func Offset: 0x2f8
	// Line 1205, Address: 0x49b5dc, Func Offset: 0x2fc
	// Line 1206, Address: 0x49b5e4, Func Offset: 0x304
	// Line 1205, Address: 0x49b5f0, Func Offset: 0x310
	// Line 1206, Address: 0x49b600, Func Offset: 0x320
	// Line 1236, Address: 0x49b640, Func Offset: 0x360
	// Line 1209, Address: 0x49b648, Func Offset: 0x368
	// Line 1206, Address: 0x49b64c, Func Offset: 0x36c
	// Line 1209, Address: 0x49b650, Func Offset: 0x370
	// Line 1210, Address: 0x49b668, Func Offset: 0x388
	// Line 1211, Address: 0x49b680, Func Offset: 0x3a0
	// Line 1214, Address: 0x49b69c, Func Offset: 0x3bc
	// Line 1211, Address: 0x49b6a0, Func Offset: 0x3c0
	// Line 1214, Address: 0x49b6ac, Func Offset: 0x3cc
	// Line 1212, Address: 0x49b6b0, Func Offset: 0x3d0
	// Line 1214, Address: 0x49b6c0, Func Offset: 0x3e0
	// Line 1230, Address: 0x49b6e8, Func Offset: 0x408
	// Line 1214, Address: 0x49b6ec, Func Offset: 0x40c
	// Line 1229, Address: 0x49b6f4, Func Offset: 0x414
	// Line 1230, Address: 0x49b6f8, Func Offset: 0x418
	// Line 1220, Address: 0x49b700, Func Offset: 0x420
	// Line 1229, Address: 0x49b710, Func Offset: 0x430
	// Line 1230, Address: 0x49b714, Func Offset: 0x434
	// Line 1236, Address: 0x49b730, Func Offset: 0x450
	// Line 1230, Address: 0x49b734, Func Offset: 0x454
	// Line 1236, Address: 0x49b738, Func Offset: 0x458
	// Line 1237, Address: 0x49b748, Func Offset: 0x468
	// Line 1236, Address: 0x49b74c, Func Offset: 0x46c
	// Line 1237, Address: 0x49b750, Func Offset: 0x470
	// Line 1238, Address: 0x49b760, Func Offset: 0x480
	// Line 1237, Address: 0x49b764, Func Offset: 0x484
	// Line 1238, Address: 0x49b768, Func Offset: 0x488
	// Line 1241, Address: 0x49b778, Func Offset: 0x498
	// Line 1242, Address: 0x49b77c, Func Offset: 0x49c
	// Line 1244, Address: 0x49b788, Func Offset: 0x4a8
	// Line 1245, Address: 0x49b79c, Func Offset: 0x4bc
	// Func End, Address: 0x49b7cc, Func Offset: 0x4ec
}

// update_ring_particles__21@unnamed@zSplash_cpp@FPUciR10ptank_poolfPv
// Start address: 0x49b7d0
int32 update_ring_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__color_mat& pool;
	ring_particle* p;
	ring_particle* end;
	float32 t;
	float32 rx;
	float32 rz;
	// Line 1057, Address: 0x49b7d0, Func Offset: 0
	// Line 1060, Address: 0x49b7d4, Func Offset: 0x4
	// Line 1057, Address: 0x49b7d8, Func Offset: 0x8
	// Line 1060, Address: 0x49b7dc, Func Offset: 0xc
	// Line 1057, Address: 0x49b7e0, Func Offset: 0x10
	// Line 1060, Address: 0x49b7e4, Func Offset: 0x14
	// Line 1057, Address: 0x49b7e8, Func Offset: 0x18
	// Line 1058, Address: 0x49b7f4, Func Offset: 0x24
	// Line 1057, Address: 0x49b7f8, Func Offset: 0x28
	// Line 1060, Address: 0x49b7fc, Func Offset: 0x2c
	// Line 1057, Address: 0x49b800, Func Offset: 0x30
	// Line 1060, Address: 0x49b804, Func Offset: 0x34
	// Line 1057, Address: 0x49b808, Func Offset: 0x38
	// Line 1062, Address: 0x49b80c, Func Offset: 0x3c
	// Line 1065, Address: 0x49b814, Func Offset: 0x44
	// Line 1068, Address: 0x49b818, Func Offset: 0x48
	// Line 1065, Address: 0x49b81c, Func Offset: 0x4c
	// Line 1068, Address: 0x49b824, Func Offset: 0x54
	// Line 1065, Address: 0x49b82c, Func Offset: 0x5c
	// Line 1068, Address: 0x49b834, Func Offset: 0x64
	// Line 1070, Address: 0x49b840, Func Offset: 0x70
	// Line 1071, Address: 0x49b844, Func Offset: 0x74
	// Line 1072, Address: 0x49b8d0, Func Offset: 0x100
	// Line 1075, Address: 0x49b8d8, Func Offset: 0x108
	// Line 1077, Address: 0x49b8ec, Func Offset: 0x11c
	// Line 1079, Address: 0x49b934, Func Offset: 0x164
	// Line 1080, Address: 0x49ba10, Func Offset: 0x240
	// Line 1083, Address: 0x49ba1c, Func Offset: 0x24c
	// Line 1086, Address: 0x49ba24, Func Offset: 0x254
	// Line 1088, Address: 0x49ba48, Func Offset: 0x278
	// Line 1091, Address: 0x49ba6c, Func Offset: 0x29c
	// Line 1092, Address: 0x49bac4, Func Offset: 0x2f4
	// Line 1095, Address: 0x49bad0, Func Offset: 0x300
	// Line 1100, Address: 0x49bb30, Func Offset: 0x360
	// Line 1095, Address: 0x49bb34, Func Offset: 0x364
	// Line 1098, Address: 0x49bb38, Func Offset: 0x368
	// Line 1100, Address: 0x49bb48, Func Offset: 0x378
	// Line 1101, Address: 0x49bb50, Func Offset: 0x380
	// Line 1100, Address: 0x49bb54, Func Offset: 0x384
	// Line 1101, Address: 0x49bb58, Func Offset: 0x388
	// Line 1102, Address: 0x49bb68, Func Offset: 0x398
	// Line 1104, Address: 0x49bb84, Func Offset: 0x3b4
	// Line 1105, Address: 0x49bb88, Func Offset: 0x3b8
	// Line 1106, Address: 0x49bb8c, Func Offset: 0x3bc
	// Line 1108, Address: 0x49bb98, Func Offset: 0x3c8
	// Line 1109, Address: 0x49bba8, Func Offset: 0x3d8
	// Line 1108, Address: 0x49bbc0, Func Offset: 0x3f0
	// Line 1109, Address: 0x49bbc8, Func Offset: 0x3f8
	// Line 1108, Address: 0x49bbcc, Func Offset: 0x3fc
	// Line 1109, Address: 0x49bbd4, Func Offset: 0x404
	// Func End, Address: 0x49bbdc, Func Offset: 0x40c
}

// update_mist_particles__21@unnamed@zSplash_cpp@FPUciR10ptank_poolfPv
// Start address: 0x49bbe0
int32 update_mist_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size& pool;
	mist_particle* p;
	mist_particle* end;
	float32 t;
	float32 dv;
	// Line 932, Address: 0x49bbe0, Func Offset: 0
	// Line 935, Address: 0x49bbe4, Func Offset: 0x4
	// Line 932, Address: 0x49bbe8, Func Offset: 0x8
	// Line 935, Address: 0x49bbec, Func Offset: 0xc
	// Line 932, Address: 0x49bbf0, Func Offset: 0x10
	// Line 935, Address: 0x49bbf4, Func Offset: 0x14
	// Line 932, Address: 0x49bbf8, Func Offset: 0x18
	// Line 933, Address: 0x49bc04, Func Offset: 0x24
	// Line 932, Address: 0x49bc08, Func Offset: 0x28
	// Line 935, Address: 0x49bc0c, Func Offset: 0x2c
	// Line 932, Address: 0x49bc10, Func Offset: 0x30
	// Line 935, Address: 0x49bc14, Func Offset: 0x34
	// Line 932, Address: 0x49bc18, Func Offset: 0x38
	// Line 937, Address: 0x49bc1c, Func Offset: 0x3c
	// Line 942, Address: 0x49bc24, Func Offset: 0x44
	// Line 945, Address: 0x49bc28, Func Offset: 0x48
	// Line 942, Address: 0x49bc2c, Func Offset: 0x4c
	// Line 945, Address: 0x49bc34, Func Offset: 0x54
	// Line 942, Address: 0x49bc3c, Func Offset: 0x5c
	// Line 945, Address: 0x49bc44, Func Offset: 0x64
	// Line 947, Address: 0x49bc50, Func Offset: 0x70
	// Line 948, Address: 0x49bc54, Func Offset: 0x74
	// Line 949, Address: 0x49bcc8, Func Offset: 0xe8
	// Line 956, Address: 0x49bcd0, Func Offset: 0xf0
	// Line 955, Address: 0x49bcd4, Func Offset: 0xf4
	// Line 956, Address: 0x49bcd8, Func Offset: 0xf8
	// Line 955, Address: 0x49bce8, Func Offset: 0x108
	// Line 956, Address: 0x49bcec, Func Offset: 0x10c
	// Line 957, Address: 0x49bd00, Func Offset: 0x120
	// Line 959, Address: 0x49bd0c, Func Offset: 0x12c
	// Line 961, Address: 0x49bd20, Func Offset: 0x140
	// Line 963, Address: 0x49bd68, Func Offset: 0x188
	// Line 964, Address: 0x49be78, Func Offset: 0x298
	// Line 967, Address: 0x49be84, Func Offset: 0x2a4
	// Line 970, Address: 0x49be8c, Func Offset: 0x2ac
	// Line 971, Address: 0x49be90, Func Offset: 0x2b0
	// Line 970, Address: 0x49be94, Func Offset: 0x2b4
	// Line 971, Address: 0x49be98, Func Offset: 0x2b8
	// Line 970, Address: 0x49be9c, Func Offset: 0x2bc
	// Line 971, Address: 0x49bea4, Func Offset: 0x2c4
	// Line 970, Address: 0x49bea8, Func Offset: 0x2c8
	// Line 971, Address: 0x49beac, Func Offset: 0x2cc
	// Line 970, Address: 0x49beb4, Func Offset: 0x2d4
	// Line 971, Address: 0x49bec4, Func Offset: 0x2e4
	// Line 973, Address: 0x49bf08, Func Offset: 0x328
	// Line 974, Address: 0x49bf28, Func Offset: 0x348
	// Line 976, Address: 0x49bf34, Func Offset: 0x354
	// Line 977, Address: 0x49bf38, Func Offset: 0x358
	// Line 978, Address: 0x49bf3c, Func Offset: 0x35c
	// Line 980, Address: 0x49bf48, Func Offset: 0x368
	// Line 981, Address: 0x49bf58, Func Offset: 0x378
	// Line 980, Address: 0x49bf70, Func Offset: 0x390
	// Line 981, Address: 0x49bf78, Func Offset: 0x398
	// Line 980, Address: 0x49bf7c, Func Offset: 0x39c
	// Line 981, Address: 0x49bf84, Func Offset: 0x3a4
	// Func End, Address: 0x49bf8c, Func Offset: 0x3ac
}

// emit_splash_internal__21@unnamed@zSplash_cpp@FiRC5xVec3
// Start address: 0x49bf90
void emit_splash_internal(int32 type, xVec3& loc)
{
	splash_planner& plan;
	// Line 880, Address: 0x49bf90, Func Offset: 0
	// Line 883, Address: 0x49bf94, Func Offset: 0x4
	// Line 880, Address: 0x49bf98, Func Offset: 0x8
	// Line 883, Address: 0x49bf9c, Func Offset: 0xc
	// Line 880, Address: 0x49bfa0, Func Offset: 0x10
	// Line 883, Address: 0x49bfa4, Func Offset: 0x14
	// Line 880, Address: 0x49bfa8, Func Offset: 0x18
	// Line 883, Address: 0x49bfac, Func Offset: 0x1c
	// Line 880, Address: 0x49bfb0, Func Offset: 0x20
	// Line 883, Address: 0x49bfb8, Func Offset: 0x28
	// Line 885, Address: 0x49bfc0, Func Offset: 0x30
	// Line 883, Address: 0x49bfc4, Func Offset: 0x34
	// Line 885, Address: 0x49bfc8, Func Offset: 0x38
	// Line 889, Address: 0x49bffc, Func Offset: 0x6c
	// Line 890, Address: 0x49c008, Func Offset: 0x78
	// Line 900, Address: 0x49c014, Func Offset: 0x84
	// Line 901, Address: 0x49c020, Func Offset: 0x90
	// Line 909, Address: 0x49c02c, Func Offset: 0x9c
	// Line 910, Address: 0x49c038, Func Offset: 0xa8
	// Line 918, Address: 0x49c044, Func Offset: 0xb4
	// Line 919, Address: 0x49c050, Func Offset: 0xc0
	// Line 928, Address: 0x49c058, Func Offset: 0xc8
	// Line 891, Address: 0x49c060, Func Offset: 0xd0
	// Line 928, Address: 0x49c064, Func Offset: 0xd4
	// Line 891, Address: 0x49c07c, Func Offset: 0xec
	// Line 928, Address: 0x49c080, Func Offset: 0xf0
	// Line 891, Address: 0x49c084, Func Offset: 0xf4
	// Line 928, Address: 0x49c088, Func Offset: 0xf8
	// Line 894, Address: 0x49c208, Func Offset: 0x278
	// Line 928, Address: 0x49c210, Func Offset: 0x280
	// Line 894, Address: 0x49c218, Func Offset: 0x288
	// Line 928, Address: 0x49c240, Func Offset: 0x2b0
	// Line 895, Address: 0x49c24c, Func Offset: 0x2bc
	// Line 928, Address: 0x49c264, Func Offset: 0x2d4
	// Line 897, Address: 0x49c26c, Func Offset: 0x2dc
	// Line 928, Address: 0x49c274, Func Offset: 0x2e4
	// Line 902, Address: 0x49c28c, Func Offset: 0x2fc
	// Line 928, Address: 0x49c290, Func Offset: 0x300
	// Line 906, Address: 0x49c348, Func Offset: 0x3b8
	// Line 928, Address: 0x49c350, Func Offset: 0x3c0
	// Line 911, Address: 0x49c368, Func Offset: 0x3d8
	// Line 928, Address: 0x49c36c, Func Offset: 0x3dc
	// Line 915, Address: 0x49c3a4, Func Offset: 0x414
	// Line 921, Address: 0x49c3ac, Func Offset: 0x41c
	// Line 928, Address: 0x49c3b0, Func Offset: 0x420
	// Line 920, Address: 0x49c3b8, Func Offset: 0x428
	// Line 928, Address: 0x49c3bc, Func Offset: 0x42c
	// Func End, Address: 0x49c408, Func Offset: 0x478
}

// refresh_plume__21@unnamed@zSplash_cpp@FRQ221@unnamed@zSplash_cpp@12plume_config
// Start address: 0x49c410
void refresh_plume(plume_config& cfg)
{
	plume_emitter& initial;
	// Line 580, Address: 0x49c410, Func Offset: 0
	// Line 587, Address: 0x49c414, Func Offset: 0x4
	// Line 581, Address: 0x49c418, Func Offset: 0x8
	// Line 587, Address: 0x49c41c, Func Offset: 0xc
	// Line 591, Address: 0x49c420, Func Offset: 0x10
	// Line 587, Address: 0x49c424, Func Offset: 0x14
	// Line 591, Address: 0x49c428, Func Offset: 0x18
	// Line 581, Address: 0x49c42c, Func Offset: 0x1c
	// Line 582, Address: 0x49c430, Func Offset: 0x20
	// Line 583, Address: 0x49c434, Func Offset: 0x24
	// Line 584, Address: 0x49c43c, Func Offset: 0x2c
	// Line 585, Address: 0x49c444, Func Offset: 0x34
	// Line 586, Address: 0x49c44c, Func Offset: 0x3c
	// Line 587, Address: 0x49c45c, Func Offset: 0x4c
	// Line 588, Address: 0x49c468, Func Offset: 0x58
	// Line 589, Address: 0x49c470, Func Offset: 0x60
	// Line 590, Address: 0x49c480, Func Offset: 0x70
	// Line 591, Address: 0x49c488, Func Offset: 0x78
	// Line 593, Address: 0x49c494, Func Offset: 0x84
	// Line 594, Address: 0x49c4a8, Func Offset: 0x98
	// Line 595, Address: 0x49c4b0, Func Offset: 0xa0
	// Line 596, Address: 0x49c4cc, Func Offset: 0xbc
	// Func End, Address: 0x49c4d4, Func Offset: 0xc4
}

// refresh_splash__21@unnamed@zSplash_cpp@FRQ221@unnamed@zSplash_cpp@13splash_config
// Start address: 0x49c4e0
void refresh_splash(splash_config& cfg)
{
	splash_emitter& initial;
	float32 ilife;
	float32 Y0;
	float32 Ym;
	float32 iT1;
	// Line 517, Address: 0x49c4e0, Func Offset: 0
	// Line 520, Address: 0x49c4ec, Func Offset: 0xc
	// Line 526, Address: 0x49c4f0, Func Offset: 0x10
	// Line 517, Address: 0x49c4f8, Func Offset: 0x18
	// Line 520, Address: 0x49c4fc, Func Offset: 0x1c
	// Line 535, Address: 0x49c500, Func Offset: 0x20
	// Line 521, Address: 0x49c504, Func Offset: 0x24
	// Line 522, Address: 0x49c508, Func Offset: 0x28
	// Line 535, Address: 0x49c50c, Func Offset: 0x2c
	// Line 536, Address: 0x49c510, Func Offset: 0x30
	// Line 522, Address: 0x49c518, Func Offset: 0x38
	// Line 523, Address: 0x49c51c, Func Offset: 0x3c
	// Line 524, Address: 0x49c530, Func Offset: 0x50
	// Line 525, Address: 0x49c538, Func Offset: 0x58
	// Line 526, Address: 0x49c54c, Func Offset: 0x6c
	// Line 527, Address: 0x49c55c, Func Offset: 0x7c
	// Line 528, Address: 0x49c574, Func Offset: 0x94
	// Line 532, Address: 0x49c578, Func Offset: 0x98
	// Line 531, Address: 0x49c57c, Func Offset: 0x9c
	// Line 534, Address: 0x49c584, Func Offset: 0xa4
	// Line 532, Address: 0x49c588, Func Offset: 0xa8
	// Line 534, Address: 0x49c590, Func Offset: 0xb0
	// Line 533, Address: 0x49c594, Func Offset: 0xb4
	// Line 535, Address: 0x49c59c, Func Offset: 0xbc
	// Line 536, Address: 0x49c5ac, Func Offset: 0xcc
	// Line 539, Address: 0x49c5cc, Func Offset: 0xec
	// Line 540, Address: 0x49c5d8, Func Offset: 0xf8
	// Line 541, Address: 0x49c5e0, Func Offset: 0x100
	// Line 542, Address: 0x49c5e4, Func Offset: 0x104
	// Line 543, Address: 0x49c5ec, Func Offset: 0x10c
	// Line 544, Address: 0x49c5fc, Func Offset: 0x11c
	// Line 545, Address: 0x49c60c, Func Offset: 0x12c
	// Line 546, Address: 0x49c618, Func Offset: 0x138
	// Line 547, Address: 0x49c638, Func Offset: 0x158
	// Line 548, Address: 0x49c640, Func Offset: 0x160
	// Line 551, Address: 0x49c648, Func Offset: 0x168
	// Line 552, Address: 0x49c654, Func Offset: 0x174
	// Line 553, Address: 0x49c660, Func Offset: 0x180
	// Line 554, Address: 0x49c668, Func Offset: 0x188
	// Line 555, Address: 0x49c66c, Func Offset: 0x18c
	// Line 557, Address: 0x49c678, Func Offset: 0x198
	// Line 558, Address: 0x49c68c, Func Offset: 0x1ac
	// Line 559, Address: 0x49c694, Func Offset: 0x1b4
	// Line 560, Address: 0x49c6a4, Func Offset: 0x1c4
	// Line 563, Address: 0x49c6c4, Func Offset: 0x1e4
	// Line 564, Address: 0x49c6d0, Func Offset: 0x1f0
	// Line 565, Address: 0x49c6d8, Func Offset: 0x1f8
	// Line 566, Address: 0x49c6dc, Func Offset: 0x1fc
	// Line 568, Address: 0x49c6e8, Func Offset: 0x208
	// Line 569, Address: 0x49c6fc, Func Offset: 0x21c
	// Line 570, Address: 0x49c704, Func Offset: 0x224
	// Line 571, Address: 0x49c714, Func Offset: 0x234
	// Line 572, Address: 0x49c71c, Func Offset: 0x23c
	// Line 573, Address: 0x49c724, Func Offset: 0x244
	// Line 574, Address: 0x49c72c, Func Offset: 0x24c
	// Line 575, Address: 0x49c748, Func Offset: 0x268
	// Func End, Address: 0x49c750, Func Offset: 0x270
}

