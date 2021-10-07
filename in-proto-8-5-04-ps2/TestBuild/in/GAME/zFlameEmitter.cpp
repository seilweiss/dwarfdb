typedef struct xCylinder;
typedef struct xBBox;
typedef struct xLightKit;
typedef struct zFlameEmitter;
typedef struct RpInterpolator;
typedef struct xModelInstance;
typedef struct xMat3x3;
typedef enum RxNodeDefEditable;
typedef struct xVec3;
typedef struct xAnimTable;
typedef struct xBox;
typedef struct xEnt;
typedef struct xOneLinerManager;
typedef struct RpAtomic;
typedef enum RwFogType;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct _class_0;
typedef struct RxIoSpec;
typedef struct xSurface;
typedef struct xEntAsset;
typedef struct xJSPNodeTreeBranch;
typedef struct xLightKitLight;
typedef struct xAnimTransition;
typedef struct property_set;
typedef struct zAssetPickupTable;
typedef struct tri_data_0;
typedef struct xAnimState;
typedef struct RwBBox;
typedef struct _tagxPad;
typedef struct RpWorld;
typedef struct xModelAssetParam;
typedef struct zCutsceneMgr;
typedef struct zPlayer;
typedef struct RwRaster;
typedef struct xAnimFile;
typedef struct xBound;
typedef struct xGlobals;
typedef struct RxPacket;
typedef struct xGroupAsset;
typedef struct xGrid;
typedef struct xCollis;
typedef struct zEnt;
typedef struct xCamGroup;
typedef struct RxOutputSpec;
typedef struct zGrapplePoint;
typedef struct xCamScreen;
typedef struct xGridBound;
typedef struct tri_data_1;
typedef struct zScene;
typedef struct xAnimTransitionList;
typedef struct activity_data;
typedef struct spawn_data;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct zSlideCam;
typedef struct RxCluster;
typedef struct iEnvMatOrder;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xQCData;
typedef enum RxClusterValid;
typedef struct RpSector;
typedef struct xBase;
typedef struct xModelPool;
typedef struct analog_data;
typedef struct _zPortal;
typedef struct xJSPNodeTree;
typedef struct xScene;
typedef struct xAnimPhysicsData;
typedef struct PS2DemoGlobals;
typedef struct xEntCollis;
typedef struct xJSPNodeInfo;
typedef struct xAnimEffect;
typedef struct xEntFrame;
typedef struct RxPipelineCluster;
typedef struct xAnimMultiFileEntry;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct zPlayerGlobals;
typedef struct _class_1;
typedef struct xModelPipe;
typedef struct xModelBlur;
typedef struct RxClusterRef;
typedef struct entry_data;
typedef struct xJSPNodeTreeLeaf;
typedef struct Incredimeter;
typedef struct xVec2;
typedef struct xAnimActiveEffect;
typedef struct asset_type;
typedef struct xLinkAsset;
typedef struct xFFX;
typedef struct xAnimPlay;
typedef struct handle;
typedef struct BossMeter;
typedef struct iEnv;
typedef struct RpMaterialList;
typedef struct RwFrame;
typedef struct RpLight;
typedef struct RpMorphTarget;
typedef struct _zEnv;
typedef struct xUpdateCullEnt;
typedef struct xAnimSingle;
typedef struct FamilyMeter;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct xGroup;
typedef struct RwRGBA;
typedef struct zSceneParameters;
typedef struct xAnimMultiFileBase;
typedef struct xJSPMiniLightTie;
typedef struct RwMatrixTag;
typedef struct xShadowSimplePoly;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef struct xJSPHeader;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwResEntry;
typedef struct config_data;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef struct xClumpCollBSPTree;
typedef struct xEnvAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimMultiFile;
typedef struct RwV3d;
typedef struct xJSPNodeLight;
typedef struct zCheckPoint;
typedef struct iFogParams;
typedef struct xUpdateCullGroup;
typedef struct xDynAsset;
typedef struct xMat4x3;
typedef struct RwSurfaceProperties;
typedef struct xClumpCollBSPBranchNode;
typedef struct xShadowSimpleCache;
typedef struct xModelBucket;
typedef struct RxPipelineNode;
typedef struct xClumpCollBSPTriangle;
typedef struct xMemPool;
typedef struct xQuat;
typedef enum _tagPadState;
typedef struct xEnv;
typedef struct RwLLLink;
typedef struct xUpdateCullMgr;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct xPortalAsset;
typedef struct RxPipeline;
typedef struct _class_2;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef enum iSndHandle;
typedef struct RxPipelineNodeParam;
typedef struct zGlobalSettings;
typedef struct RwTexDictionary;
typedef struct mblur_data;
typedef struct jump;
typedef struct xVec4;
typedef struct xEntShadow;
typedef struct _tagPadAnalog;
typedef struct rxReq;
typedef struct anim_coll_data;
typedef struct RwTexCoords;
typedef enum zGlobalDemoType;
typedef struct xBaseAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntDrive;
typedef struct RxHeap;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef struct zGlobals;
typedef struct xRot;
typedef struct RpTriangle;
typedef struct xSphere;
typedef struct _tagiPad;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;
typedef enum xSndEffect;
typedef struct RxClusterDefinition;
typedef enum sceDemoEndReason;

typedef void(*type_1)(xMemPool*, void*);
typedef void(*type_3)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef RpWorldSector*(*type_13)(RpWorldSector*);
typedef xBase*(*type_20)(uint32);
typedef void(*type_21)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_23)(xEnt*, xScene*, float32, xEntFrame*);
typedef uint32(*type_24)(void*, void*);
typedef int8*(*type_25)(xBase*);
typedef void(*type_27)(xEnt*, xScene*, float32);
typedef void(*type_28)(void*);
typedef int8*(*type_29)(uint32);
typedef uint32(*type_32)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_33)(xEnt*);
typedef uint32(*type_38)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_40)(xEnt*);
typedef void(*type_45)(xEnt*, xVec3*);
typedef uint32(*type_48)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_49)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_51)(RwResEntry*);
typedef int32(*type_52)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_54)(RwObjectHasFrame*);
typedef void(*type_56)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_57)(RxPipelineNode*);
typedef int32(*type_64)(RxPipelineNode*);
typedef void(*type_66)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_67)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_68)(RxNodeDefinition*);
typedef void(*type_69)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef int32(*type_72)(RxNodeDefinition*);
typedef void(*type_73)(xAnimPlay*, xAnimState*, void*);
typedef int32(*type_74)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_76)(RpClump*, void*);

typedef uint8 type_0[22];
typedef uint8 type_2[22];
typedef uint16 type_4[3];
typedef uint32 type_5[4];
typedef float32 type_6[2];
typedef float32 type_7[3];
typedef int8 type_8[32];
typedef uint32 type_9[4];
typedef uint32 type_11[4096];
typedef xVec4 type_12[12];
typedef int8 type_14[32];
typedef float32 type_15[22];
typedef RxCluster type_16[1];
typedef float32 type_17[22];
typedef uint8 type_18[2];
typedef float32 type_19[2];
typedef int8 type_22[127];
typedef int32 type_26[140];
typedef xBase* type_30[140];
typedef analog_data type_31[2];
typedef RwTexCoords* type_34[8];
typedef uint8 type_35[3];
typedef _tagxPad* type_36[4];
typedef int8 type_37[16];
typedef uint32 type_39[1];
typedef float32 type_41[4];
typedef xVec3 type_42[3];
typedef float32 type_43[4];
typedef float32 type_44[4];
typedef xSphere type_46[5];
typedef xVec3 type_47[4];
typedef xAnimMultiFileEntry type_50[1];
typedef RpLight* type_53[2];
typedef RwFrame* type_55[2];
typedef int8 type_58[32];
typedef xCollis type_59[18];
typedef int8 type_60[128];
typedef int8 type_61[128][6];
typedef xJSPMiniLightTie type_62[16];
typedef int8 type_63[32];
typedef int8 type_65[16];
typedef int8 type_70[16];
typedef int8 type_71[32];
typedef int8 type_75[4];
typedef RwTexCoords* type_77[8];
typedef float32 type_78[16];
typedef uint16 type_79[4];
typedef xVec3 type_80[4];

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zFlameEmitter : xBase
{
	asset_type* asset;
	xMat4x3 mat;
	int32 flags;
	handle* flames;
	property_set props;
	uint32 flames_size;
	float32 oscil;

	void cb_dispatch(xBase* to, uint32 event);
	void create_flames(int32 flags);
	void fire_reset();
	void render_all();
	void update_all(float32 dt);
	void setup_all();
	void scene_exit();
	void scene_enter();
	void get_bounding_box(xBox& box);
	void load(xBase& data, xDynAsset& asset);
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
	_class_0 anim_coll;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimTable
{
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct xOneLinerManager
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct _class_0
{
	xVec3* verts;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xSurface
{
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
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

struct property_set
{
	float32 damage;
	float32 knockback;
};

struct zAssetPickupTable
{
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xModelAssetParam
{
};

struct zCutsceneMgr
{
};

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	xOneLinerManager* pOneLinerSys;
	Incredimeter* pIncredimeter;
	BossMeter* pBossMeter;
	FamilyMeter* pFamilyMeter;
	xScene* sc;
	xLightKit* lightKit;
	xMat4x3 lastmat;
	int32 brain_id;
	xVec3 lastDeltaPos;
	float32 update_dt;
	float32 last_update_dt;
	xVec3 update_motion;
	xVec3 previous_position;
	jump* currentJump;
	xVec3 predictRotate;
	xVec3 predictTranslate;
	float32 predictAngV;
	xVec3 predictCurrDir;
	float32 predictCurrVel;
	zSlideCam* slideCam;
	xJSPHeader* floor_jsp;
	xClumpCollBSPTriangle* floor_bspTriangle;
	xVec3 floorNorm;
	int32 slope;
	float32 floor_collision_timer;
	float32 floor_distance;
	xEnt* floor_entity;
	uint32 floor_oid;
	xSurface* floor_surface;
	xVec3 floor_pos;
	xVec3 floor_normal;
	xSphere extraSpheres[5];
	int32 numExtraSpheres;
	uint32 collisionFlags;
	uint8 currentIsNearLedge;
	uint8 currentIsNearLedgeValid;
	float32 depenetration_velocity;
	float32 fallingTime;
	float32 idleAnimationTimer;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	uint32 loaded_assetid;
	xEntDrive drv;
	float32 floorDist[4];
	float32 floorTimer[4];
	xVec3 floorSupp[4];
	uint16 parametersSize;
	xModelAssetParam* parameters;
	xEnt* reticleTarget;
	RpAtomic* reticleModel;
	float32 reticleRot;
	float32 reticleAlpha;
	xMat4x3 reticleMat;
	float32 deathTimer;
	uint8 deathStartedAnim;
	float32 idleSoundTimer;
	uint32 oldSlidePen;
	int32 zPlayerFlags;
	float32 collision_underneath_height;
	float32 collision_underneath_time;
	mblur_data* mblur;
	uint32* hitSoundsMap;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
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

struct xGlobals
{
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xGrid
{
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
		_class_1 tuv;
		tri_data_1 tri;
	};
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xCamGroup
{
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zGrapplePoint
{
};

struct xCamScreen
{
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	int32 num_base;
	xBase** base;
	uint32 num_update_base;
	xBase** update_base;
	int32 baseCount[140];
	xBase* baseList[140];
	_zEnv* zen;
	zSceneParameters* parameters;
	uint8 enableDrawing;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct activity_data
{
};

struct spawn_data
{
	uint32 flags;
	xVec3 loc;
	xVec3 up;
	float32 radius;
	float32 fuel;
	float32 heat;
	float32 heat_absorb;
	xEnt* driver;
	property_set* props;
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

struct zSlideCam
{
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

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpSector
{
	int32 type;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
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

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	zGlobalSettings g;
	int32 Teeter;
	float32 SlipFadeTimer;
	int32 Slide;
	float32 SlideTimer;
	int32 Stepping;
	int32 JumpState;
	int32 LastJumpState;
	float32 JumpTimer;
	uint32 LastProjectile;
	float32 ControlOffTimer;
	float32 ControlOnTime;
	float32 ForceSlipperyTimer;
	float32 ForceSlipperyFriction;
	float32 ShockRadius;
	float32 ShockRadiusOld;
	uint32 ControlOff;
	uint32 ControlOnEvent;
	zCheckPoint checkpoint;
	xVec3 turnToFace;
	zGrapplePoint* Grapple;
	uint8 bCheatMode;
	uint8 bHasBeenHit;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

struct xModelBlur
{
	activity_data* activity;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct entry_data
{
	union
	{
		entry_data* next_free_entry;
		void* value;
	};
	int32 type;
	uint16 searchid;
	uint16 owner_size;
	uint16 owner[4];
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct Incredimeter
{
};

struct xVec2
{
	float32 x;
	float32 y;
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

struct asset_type : xDynAsset
{
	uint32 flags;
	xVec3 loc;
	xVec3 dir;
	xVec3 scale;
	float32 heat_random;
	float32 damage;
	float32 knockback;
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

struct xFFX
{
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

struct handle
{
	entry_data* node;
};

struct BossMeter
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct FamilyMeter
{
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct config_data
{
	int32 flags;
	float32 radius;
	float32 color_red;
	float32 color_green;
	float32 color_blue;
	float32 color_alpha;
	float32 card_dist;
	float32 zbias;
	int32 max_card_renders;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

enum iSndHandle
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zGlobalSettings
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	uint32 TakeDamage;
	uint32 Initial_Specials;
	float32 DamageInvincibility;
	float32 Gravity;
	uint8 AttractModeDuringGameplay;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct mblur_data
{
	config_data cfg;
	xModelBlur blur;
};

struct jump
{
	zPlayer* player;
	xVec3 direction;
	xVec3 gravity_velocity;
	float32 time;
	float32 y;
	float32 last_y;
	float32 velocity;
	float32 fall_gravity;
	float32 fall_gravity_blend_time;
	float32 fall_gravity_final;
	float32 accelerate_up_time;
	float32 slow_time;
	float32 height;
	float32 time_to_apex;
	float32 fall_start_time;
	float32 minimum_time;
	float32 blurLife;
	float32 blurAlpha;
	float32 blurFadeInTime;
	float32 blurFadeOutTime;
	uint32 kButtonJump;
	uint8 need_button;
	uint8 stop_button;
	uint8 camera_track;
	int8* name;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct rxReq
{
};

struct anim_coll_data
{
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
};

struct xBaseAsset
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

struct zGlobals : xGlobals
{
	uint32 playerTag;
	uint8 playerLoaded;
	uint8 invertJoystick;
	uint8 invertCameraX;
	uint8 invertCameraY;
	float32 timeMultiplier;
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	int8 startDebugMode[32];
	uint32 noMovies;
	uint32 boundUpdateTime;
	uint8 draw_player_after_fx;
	uint8 bAllowMasterCheats;
	zGlobalDemoType demoType;
	zCutsceneMgr* DisabledCutsceneDoneMgr;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct _tagiPad
{
	int32 port;
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

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

int8 buffer[16];
int8 buffer[16];
float32 scale;
uint8 _enabled;
uint32 gActiveHeap;
uint32 ourGlobals[4096];
zGlobals globals;
void(*cb_dispatch)(xBase*, xBase*, uint32, float32*, xBase*, uint32);

void cb_dispatch(xBase* to, uint32 event);
void create_flames(int32 flags);
void fire_reset();
void render_all();
void update_all(float32 dt);
void setup_all();
void scene_exit();
void scene_enter();
void get_bounding_box(xBox& box);
void load(xBase& data, xDynAsset& asset);

// cb_dispatch__13zFlameEmitterFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2a7f70
void zFlameEmitter::cb_dispatch(xBase* to, uint32 event)
{
	zFlameEmitter& e;
	// Line 409, Address: 0x2a7f70, Func Offset: 0
	// Line 414, Address: 0x2a7f74, Func Offset: 0x4
	// Line 409, Address: 0x2a7f78, Func Offset: 0x8
	// Line 414, Address: 0x2a7f88, Func Offset: 0x18
	// Line 417, Address: 0x2a7ff8, Func Offset: 0x88
	// Line 418, Address: 0x2a8000, Func Offset: 0x90
	// Line 420, Address: 0x2a8008, Func Offset: 0x98
	// Line 421, Address: 0x2a8010, Func Offset: 0xa0
	// Line 423, Address: 0x2a8018, Func Offset: 0xa8
	// Line 427, Address: 0x2a80b0, Func Offset: 0x140
	// Line 431, Address: 0x2a8108, Func Offset: 0x198
	// Line 432, Address: 0x2a812c, Func Offset: 0x1bc
	// Line 434, Address: 0x2a8134, Func Offset: 0x1c4
	// Line 435, Address: 0x2a8158, Func Offset: 0x1e8
	// Line 437, Address: 0x2a8160, Func Offset: 0x1f0
	// Line 443, Address: 0x2a81b8, Func Offset: 0x248
	// Line 423, Address: 0x2a81c8, Func Offset: 0x258
	// Line 424, Address: 0x2a81d0, Func Offset: 0x260
	// Line 443, Address: 0x2a81d8, Func Offset: 0x268
	// Line 427, Address: 0x2a81e0, Func Offset: 0x270
	// Line 428, Address: 0x2a81e8, Func Offset: 0x278
	// Line 443, Address: 0x2a81f0, Func Offset: 0x280
	// Line 437, Address: 0x2a81f8, Func Offset: 0x288
	// Line 443, Address: 0x2a8208, Func Offset: 0x298
	// Func End, Address: 0x2a8220, Func Offset: 0x2b0
}

// create_flames__13zFlameEmitterFi
// Start address: 0x2a8220
void zFlameEmitter::create_flames(int32 flags)
{
	float32 radius;
	float32 width;
	uint32 ux;
	uint32 uz;
	spawn_data sd;
	xVec3& center;
	xVec3 dx;
	xVec3 dz;
	float32 hx;
	float32 hz;
	xVec3 corner;
	handle* temp_flames;
	handle* flame;
	uint32 ix;
	xVec3 v;
	uint32 iz;
	// Line 270, Address: 0x2a8220, Func Offset: 0
	// Line 271, Address: 0x2a8268, Func Offset: 0x48
	// Line 277, Address: 0x2a8280, Func Offset: 0x60
	// Line 279, Address: 0x2a828c, Func Offset: 0x6c
	// Line 280, Address: 0x2a82a4, Func Offset: 0x84
	// Line 281, Address: 0x2a82a8, Func Offset: 0x88
	// Line 280, Address: 0x2a82ac, Func Offset: 0x8c
	// Line 281, Address: 0x2a82b0, Func Offset: 0x90
	// Line 282, Address: 0x2a82b4, Func Offset: 0x94
	// Line 280, Address: 0x2a82bc, Func Offset: 0x9c
	// Line 282, Address: 0x2a82c0, Func Offset: 0xa0
	// Line 283, Address: 0x2a8308, Func Offset: 0xe8
	// Line 284, Address: 0x2a8310, Func Offset: 0xf0
	// Line 287, Address: 0x2a8318, Func Offset: 0xf8
	// Line 288, Address: 0x2a8330, Func Offset: 0x110
	// Line 289, Address: 0x2a8334, Func Offset: 0x114
	// Line 288, Address: 0x2a8338, Func Offset: 0x118
	// Line 289, Address: 0x2a8344, Func Offset: 0x124
	// Line 291, Address: 0x2a8398, Func Offset: 0x178
	// Line 294, Address: 0x2a83a8, Func Offset: 0x188
	// Line 296, Address: 0x2a83ac, Func Offset: 0x18c
	// Line 294, Address: 0x2a83b0, Func Offset: 0x190
	// Line 296, Address: 0x2a83b4, Func Offset: 0x194
	// Line 310, Address: 0x2a83e8, Func Offset: 0x1c8
	// Line 296, Address: 0x2a83ec, Func Offset: 0x1cc
	// Line 310, Address: 0x2a83f8, Func Offset: 0x1d8
	// Line 296, Address: 0x2a83fc, Func Offset: 0x1dc
	// Line 310, Address: 0x2a8408, Func Offset: 0x1e8
	// Line 296, Address: 0x2a840c, Func Offset: 0x1ec
	// Line 312, Address: 0x2a8414, Func Offset: 0x1f4
	// Line 315, Address: 0x2a8428, Func Offset: 0x208
	// Line 316, Address: 0x2a842c, Func Offset: 0x20c
	// Line 317, Address: 0x2a846c, Func Offset: 0x24c
	// Line 316, Address: 0x2a8474, Func Offset: 0x254
	// Line 317, Address: 0x2a8488, Func Offset: 0x268
	// Line 318, Address: 0x2a84b0, Func Offset: 0x290
	// Line 317, Address: 0x2a84b4, Func Offset: 0x294
	// Line 318, Address: 0x2a84c8, Func Offset: 0x2a8
	// Line 317, Address: 0x2a84cc, Func Offset: 0x2ac
	// Line 318, Address: 0x2a84dc, Func Offset: 0x2bc
	// Line 320, Address: 0x2a854c, Func Offset: 0x32c
	// Line 318, Address: 0x2a8550, Func Offset: 0x330
	// Line 320, Address: 0x2a855c, Func Offset: 0x33c
	// Line 326, Address: 0x2a8584, Func Offset: 0x364
	// Line 320, Address: 0x2a8588, Func Offset: 0x368
	// Line 326, Address: 0x2a85a0, Func Offset: 0x380
	// Line 320, Address: 0x2a85a4, Func Offset: 0x384
	// Line 326, Address: 0x2a85a8, Func Offset: 0x388
	// Line 320, Address: 0x2a85b0, Func Offset: 0x390
	// Line 326, Address: 0x2a85d4, Func Offset: 0x3b4
	// Line 320, Address: 0x2a85d8, Func Offset: 0x3b8
	// Line 326, Address: 0x2a85f8, Func Offset: 0x3d8
	// Line 327, Address: 0x2a8604, Func Offset: 0x3e4
	// Line 328, Address: 0x2a8608, Func Offset: 0x3e8
	// Line 330, Address: 0x2a863c, Func Offset: 0x41c
	// Line 331, Address: 0x2a8644, Func Offset: 0x424
	// Line 330, Address: 0x2a864c, Func Offset: 0x42c
	// Line 331, Address: 0x2a8650, Func Offset: 0x430
	// Line 340, Address: 0x2a8658, Func Offset: 0x438
	// Line 341, Address: 0x2a8664, Func Offset: 0x444
	// Line 340, Address: 0x2a8668, Func Offset: 0x448
	// Line 341, Address: 0x2a8670, Func Offset: 0x450
	// Line 340, Address: 0x2a8678, Func Offset: 0x458
	// Line 341, Address: 0x2a867c, Func Offset: 0x45c
	// Line 340, Address: 0x2a8680, Func Offset: 0x460
	// Line 341, Address: 0x2a8688, Func Offset: 0x468
	// Line 340, Address: 0x2a868c, Func Offset: 0x46c
	// Line 341, Address: 0x2a8690, Func Offset: 0x470
	// Line 340, Address: 0x2a8694, Func Offset: 0x474
	// Line 341, Address: 0x2a86a0, Func Offset: 0x480
	// Line 344, Address: 0x2a86a8, Func Offset: 0x488
	// Line 345, Address: 0x2a86c8, Func Offset: 0x4a8
	// Line 354, Address: 0x2a86d0, Func Offset: 0x4b0
	// Line 355, Address: 0x2a86e0, Func Offset: 0x4c0
	// Line 313, Address: 0x2a86ec, Func Offset: 0x4cc
	// Line 355, Address: 0x2a86f8, Func Offset: 0x4d8
	// Line 334, Address: 0x2a8724, Func Offset: 0x504
	// Line 355, Address: 0x2a8728, Func Offset: 0x508
	// Line 334, Address: 0x2a8738, Func Offset: 0x518
	// Line 355, Address: 0x2a873c, Func Offset: 0x51c
	// Line 334, Address: 0x2a874c, Func Offset: 0x52c
	// Line 355, Address: 0x2a8754, Func Offset: 0x534
	// Line 334, Address: 0x2a8784, Func Offset: 0x564
	// Line 355, Address: 0x2a8788, Func Offset: 0x568
	// Line 334, Address: 0x2a8790, Func Offset: 0x570
	// Line 355, Address: 0x2a8794, Func Offset: 0x574
	// Line 334, Address: 0x2a8798, Func Offset: 0x578
	// Line 355, Address: 0x2a879c, Func Offset: 0x57c
	// Line 335, Address: 0x2a87c0, Func Offset: 0x5a0
	// Line 355, Address: 0x2a87c4, Func Offset: 0x5a4
	// Line 335, Address: 0x2a87d4, Func Offset: 0x5b4
	// Line 355, Address: 0x2a87d8, Func Offset: 0x5b8
	// Line 335, Address: 0x2a87e8, Func Offset: 0x5c8
	// Line 355, Address: 0x2a87f0, Func Offset: 0x5d0
	// Line 335, Address: 0x2a8820, Func Offset: 0x600
	// Line 355, Address: 0x2a8824, Func Offset: 0x604
	// Line 335, Address: 0x2a882c, Func Offset: 0x60c
	// Line 355, Address: 0x2a8830, Func Offset: 0x610
	// Line 335, Address: 0x2a8834, Func Offset: 0x614
	// Line 355, Address: 0x2a8838, Func Offset: 0x618
	// Line 337, Address: 0x2a885c, Func Offset: 0x63c
	// Line 355, Address: 0x2a8860, Func Offset: 0x640
	// Line 338, Address: 0x2a8874, Func Offset: 0x654
	// Line 355, Address: 0x2a8880, Func Offset: 0x660
	// Line 350, Address: 0x2a889c, Func Offset: 0x67c
	// Line 355, Address: 0x2a88a0, Func Offset: 0x680
	// Line 352, Address: 0x2a88b0, Func Offset: 0x690
	// Line 355, Address: 0x2a88b4, Func Offset: 0x694
	// Func End, Address: 0x2a8910, Func Offset: 0x6f0
}

// fire_reset__13zFlameEmitterFv
// Start address: 0x2a8910
void zFlameEmitter::fire_reset()
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 234, Address: 0x2a8910, Func Offset: 0
	// Line 235, Address: 0x2a8918, Func Offset: 0x8
	// Line 237, Address: 0x2a8928, Func Offset: 0x18
	// Line 238, Address: 0x2a8930, Func Offset: 0x20
	// Line 239, Address: 0x2a8950, Func Offset: 0x40
	// Func End, Address: 0x2a8970, Func Offset: 0x60
}

// render_all__13zFlameEmitterFv
// Start address: 0x2a8970
void zFlameEmitter::render_all()
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 225, Address: 0x2a8970, Func Offset: 0
	// Line 226, Address: 0x2a8978, Func Offset: 0x8
	// Line 228, Address: 0x2a8988, Func Offset: 0x18
	// Line 229, Address: 0x2a8990, Func Offset: 0x20
	// Line 230, Address: 0x2a89b0, Func Offset: 0x40
	// Func End, Address: 0x2a89b8, Func Offset: 0x48
}

// update_all__13zFlameEmitterFf
// Start address: 0x2a89c0
void zFlameEmitter::update_all(float32 dt)
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 213, Address: 0x2a89c0, Func Offset: 0
	// Line 215, Address: 0x2a89c4, Func Offset: 0x4
	// Line 213, Address: 0x2a89c8, Func Offset: 0x8
	// Line 215, Address: 0x2a89dc, Func Offset: 0x1c
	// Line 216, Address: 0x2a89e0, Func Offset: 0x20
	// Line 219, Address: 0x2a89f0, Func Offset: 0x30
	// Line 220, Address: 0x2a8a60, Func Offset: 0xa0
	// Line 219, Address: 0x2a8a70, Func Offset: 0xb0
	// Line 220, Address: 0x2a8a98, Func Offset: 0xd8
	// Line 219, Address: 0x2a8aa0, Func Offset: 0xe0
	// Line 220, Address: 0x2a8ab8, Func Offset: 0xf8
	// Func End, Address: 0x2a8ad4, Func Offset: 0x114
}

// setup_all__13zFlameEmitterFv
// Start address: 0x2a8ae0
void zFlameEmitter::setup_all()
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 203, Address: 0x2a8ae0, Func Offset: 0
	// Line 205, Address: 0x2a8ae4, Func Offset: 0x4
	// Line 203, Address: 0x2a8ae8, Func Offset: 0x8
	// Line 205, Address: 0x2a8afc, Func Offset: 0x1c
	// Line 206, Address: 0x2a8b00, Func Offset: 0x20
	// Line 208, Address: 0x2a8b10, Func Offset: 0x30
	// Line 209, Address: 0x2a8b18, Func Offset: 0x38
	// Line 210, Address: 0x2a8bd8, Func Offset: 0xf8
	// Func End, Address: 0x2a8c0c, Func Offset: 0x12c
}

// scene_exit__13zFlameEmitterFv
// Start address: 0x2a8c10
void zFlameEmitter::scene_exit()
{
	zScene& scene;
	zFlameEmitter* it;
	zFlameEmitter* end;
	// Line 192, Address: 0x2a8c10, Func Offset: 0
	// Line 193, Address: 0x2a8c14, Func Offset: 0x4
	// Line 192, Address: 0x2a8c18, Func Offset: 0x8
	// Line 193, Address: 0x2a8c2c, Func Offset: 0x1c
	// Line 194, Address: 0x2a8c30, Func Offset: 0x20
	// Line 196, Address: 0x2a8c40, Func Offset: 0x30
	// Line 197, Address: 0x2a8c48, Func Offset: 0x38
	// Line 200, Address: 0x2a8cc8, Func Offset: 0xb8
	// Func End, Address: 0x2a8cfc, Func Offset: 0xec
}

// scene_enter__13zFlameEmitterFv
// Start address: 0x2a8d00
void zFlameEmitter::scene_enter()
{
	// Line 189, Address: 0x2a8d00, Func Offset: 0
	// Func End, Address: 0x2a8d08, Func Offset: 0x8
}

// get_bounding_box__13zFlameEmitterCFR4xBox
// Start address: 0x2a8d10
void zFlameEmitter::get_bounding_box(xBox& box)
{
	xBox obb;
	// Line 175, Address: 0x2a8d10, Func Offset: 0
	// Line 177, Address: 0x2a8d14, Func Offset: 0x4
	// Line 175, Address: 0x2a8d18, Func Offset: 0x8
	// Line 178, Address: 0x2a8d1c, Func Offset: 0xc
	// Line 179, Address: 0x2a8d20, Func Offset: 0x10
	// Line 180, Address: 0x2a8d24, Func Offset: 0x14
	// Line 178, Address: 0x2a8d28, Func Offset: 0x18
	// Line 177, Address: 0x2a8d2c, Func Offset: 0x1c
	// Line 179, Address: 0x2a8d30, Func Offset: 0x20
	// Line 177, Address: 0x2a8d34, Func Offset: 0x24
	// Line 180, Address: 0x2a8d3c, Func Offset: 0x2c
	// Line 177, Address: 0x2a8d40, Func Offset: 0x30
	// Line 180, Address: 0x2a8d44, Func Offset: 0x34
	// Line 177, Address: 0x2a8d48, Func Offset: 0x38
	// Line 178, Address: 0x2a8d4c, Func Offset: 0x3c
	// Line 179, Address: 0x2a8d54, Func Offset: 0x44
	// Line 177, Address: 0x2a8d58, Func Offset: 0x48
	// Line 179, Address: 0x2a8d5c, Func Offset: 0x4c
	// Line 177, Address: 0x2a8d60, Func Offset: 0x50
	// Line 179, Address: 0x2a8d64, Func Offset: 0x54
	// Line 178, Address: 0x2a8d6c, Func Offset: 0x5c
	// Line 179, Address: 0x2a8d70, Func Offset: 0x60
	// Line 178, Address: 0x2a8d74, Func Offset: 0x64
	// Line 179, Address: 0x2a8d78, Func Offset: 0x68
	// Line 178, Address: 0x2a8d7c, Func Offset: 0x6c
	// Line 180, Address: 0x2a8d88, Func Offset: 0x78
	// Line 181, Address: 0x2a8d90, Func Offset: 0x80
	// Func End, Address: 0x2a8d9c, Func Offset: 0x8c
}

// load__13zFlameEmitterFR5xBaseR9xDynAssetUi
// Start address: 0x2a8da0
void zFlameEmitter::load(xBase& data, xDynAsset& asset)
{
	// Line 159, Address: 0x2a8da0, Func Offset: 0
	// Line 161, Address: 0x2a8da4, Func Offset: 0x4
	// Line 159, Address: 0x2a8da8, Func Offset: 0x8
	// Line 161, Address: 0x2a8dbc, Func Offset: 0x1c
	// Line 162, Address: 0x2a8ebc, Func Offset: 0x11c
	// Func End, Address: 0x2a8ed4, Func Offset: 0x134
}
