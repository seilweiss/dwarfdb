typedef struct xModelBlur;
typedef struct xAnimEffect;
typedef struct RxClusterDefinition;
typedef struct zJumpParam;
typedef struct xJSPNodeLight;
typedef struct xBase;
typedef struct xShadowSimpleCache;
typedef struct xAnimFile;
typedef struct activity_data;
typedef struct xMat4x3;
typedef struct RwCamera;
typedef struct xAnimActiveEffect;
typedef struct path_node;
typedef struct config_data;
typedef struct xEntShadow;
typedef struct xBound;
typedef struct RpInterpolator;
typedef struct xModelInstance;
typedef enum RxNodeDefEditable;
typedef struct RwFrustumPlane;
typedef struct xSpline3;
typedef struct zEntHangable;
typedef struct xGlobals;
typedef enum iSndHandle;
typedef struct RpAtomic;
typedef struct anim_coll_data;
typedef struct zPlatform;
typedef struct xVec2;
typedef struct xScene;
typedef struct xAnimPlay;
typedef enum RwFogType;
typedef struct RwRaster;
typedef struct RpTie;
typedef struct xAnimSingle;
typedef struct rxHeapBlockHeader;
typedef struct xGrid;
typedef struct _class_0;
typedef struct xUpdateCullMgr;
typedef struct xVec3;
typedef struct xCamGroup;
typedef struct interpolator;
typedef struct xAnimTransition;
typedef struct xEntCollis;
typedef struct xEntFrame;
typedef struct RxIoSpec;
typedef struct xGridBound;
typedef struct xModelTag;
typedef struct xEnvAsset;
typedef struct _tagPadAnalog;
typedef struct xAnimMultiFileBase;
typedef struct xCamScreen;
typedef struct xJSPNodeTreeBranch;
typedef struct xVec4;
typedef struct xEntDrive;
typedef struct zCutsceneMgr;
typedef struct RwBBox;
typedef struct xDynAsset;
typedef struct zSceneParameters;
typedef struct xFFX;
typedef struct RpWorld;
typedef struct xFRect;
typedef struct xUpdateCullEnt;
typedef struct RxPacket;
typedef struct zAssetPickupTable;
typedef struct RwPlane;
typedef struct xEnt;
typedef struct RxOutputSpec;
typedef struct iEnvMatOrder;
typedef struct zPlayer;
typedef struct _zPortal;
typedef struct _tagxPad;
typedef struct xEntBoulder;
typedef struct zScene;
typedef enum zGlobalDemoType;
typedef struct xAnimMultiFile;
typedef struct xPortalAsset;
typedef struct xColor_tag;
typedef struct RwSphere;
typedef struct RpWorldSector;
typedef struct zGlobalSettings;
typedef struct xSphere;
typedef struct PS2DemoGlobals;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xUpdateCullGroup;
typedef enum RxClusterValid;
typedef struct xJSPNodeInfo;
typedef struct xAnimState;
typedef struct zPlayerLassoInfo;
typedef struct xBaseAsset;
typedef struct xModelPipe;
typedef struct RpSector;
typedef struct xRot;
typedef struct xCylinder;
typedef struct _tagiPad;
typedef struct zLedgeGrabParams;
typedef struct xModelPool;
typedef struct xFXFastRaster;
typedef struct xCoef;
typedef struct zRewardsMgr;
typedef struct xBox;
typedef struct xJSPNodeTree;
typedef struct _xFColor;
typedef enum xSndEffect;
typedef struct RwV2d;
typedef struct iEnv;
typedef struct RxPipelineCluster;
typedef struct zGlobals;
typedef struct xAnimTable;
typedef struct xMat3x3;
typedef enum RxClusterValidityReq;
typedef struct xEnv;
typedef struct RpGeometry;
typedef struct card_data;
typedef enum _zPlayerWallJumpState;
typedef struct RxClusterRef;
typedef struct xLightKit;
typedef struct xMemPool;
typedef struct tri_data_0;
typedef struct tri_data_1;
typedef struct xJSPNodeTreeLeaf;
typedef struct xCollis;
typedef struct xCoef3;
typedef struct RpMaterialList;
typedef struct RwFrame;
typedef struct RpLight;
typedef struct RpMorphTarget;
typedef struct xQCData;
typedef struct RpVertexNormal;
typedef struct xQuat;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct xAnimTransitionList;
typedef struct zPlayerGlobals;
typedef struct xGroupAsset;
typedef struct xJSPHeader;
typedef struct zEnt;
typedef struct xEntAsset;
typedef struct xJSPMiniLightTie;
typedef struct RwMatrixTag;
typedef struct RpMaterial;
typedef struct zPlayerCarryInfo;
typedef struct _class_1;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct zPlayerSettings;
typedef struct xFXCameraTexture;
typedef struct RwResEntry;
typedef struct xClumpCollBSPVertInfo;
typedef struct xLinkAsset;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef struct analog_data;
typedef enum rxEmbeddedPacketState;
typedef struct xClumpCollBSPTree;
typedef struct RwV3d;
typedef struct xLightKitLight;
typedef struct RwSurfaceProperties;
typedef struct xAnimPhysicsData;
typedef struct _zEnv;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineNode;
typedef struct xSurface;
typedef struct xClumpCollBSPTriangle;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct xShadowSimplePoly;
typedef struct xModelBucket;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct _class_2;
typedef struct xGroup;
typedef struct zLasso;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct xBBox;
typedef struct rxReq;
typedef enum _zPlayerType;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct iFogParams;
typedef struct RxHeap;
typedef struct xCamera;
typedef struct RwLinkList;
typedef enum sceDemoEndReason;
typedef struct zCheckPoint;
typedef struct RxNodeDefinition;
typedef enum _tagPadState;
typedef struct xAnimMultiFileEntry;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef xBase*(*type_6)(uint32);
typedef uint32(*type_11)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int8*(*type_12)(xBase*);
typedef int8*(*type_13)(uint32);
typedef RpAtomic*(*type_17)(RpAtomic*);
typedef uint32(*type_21)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_22)(RpWorldSector*);
typedef void(*type_27)(void*);
typedef void(*type_29)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_38)(xAnimPlay*, xAnimState*, void*);
typedef void(*type_40)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RwCamera*(*type_44)(RwCamera*);
typedef RwCamera*(*type_45)(RwCamera*);
typedef void(*type_48)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_49)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_53)(xEnt*, xScene*, float32);
typedef uint32(*type_54)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_57)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_58)(xEnt*);
typedef void(*type_59)(RwResEntry*);
typedef int32(*type_60)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_62)(RwObjectHasFrame*);
typedef uint32(*type_66)(void*, void*);
typedef void(*type_67)(RxPipelineNode*);
typedef int32(*type_73)(RxPipelineNode*);
typedef void(*type_75)(xEnt*);
typedef void(*type_77)(RxNodeDefinition*);
typedef int32(*type_83)(RxNodeDefinition*);
typedef void(*type_85)(xEnt*, xVec3*);
typedef int32(*type_88)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_91)(RpClump*, void*);
typedef void(*type_92)(xMemPool*, void*);
typedef void(*type_104)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_105)(xBase*, xBase*, uint32, float32*, xBase*, uint32);

typedef RwV3d type_0[8];
typedef xVec4 type_1[12];
typedef RwFrustumPlane type_2[6];
typedef uint32 type_3[59];
typedef xModelInstance* type_4[11];
typedef uint16 type_5[3];
typedef uint8 type_7[4];
typedef int8 type_8[16];
typedef activity_data* type_9[6];
typedef xVec4 type_10[12];
typedef uint32 type_14[4];
typedef int8 type_15[32];
typedef uint32 type_16[1];
typedef uint32 type_18[4096];
typedef xVec3 type_19[4];
typedef uint8 type_20[3];
typedef RxCluster type_23[1];
typedef float32 type_24[4];
typedef xAnimMultiFileEntry type_25[1];
typedef int8 type_26[127];
typedef float32 type_28[2];
typedef uint8 type_30[22];
typedef float32 type_31[4];
typedef xVec3 type_32[60];
typedef uint8 type_33[22];
typedef uint32 type_34[4];
typedef _tagxPad* type_35[4];
typedef uint32 type_36[20];
typedef uint32 type_37[8];
typedef uint32 type_39[20];
typedef RwTexCoords* type_41[8];
typedef float32 type_42[3];
typedef uint32 type_43[20];
typedef int8 type_46[32];
typedef float32 type_47[22];
typedef float32 type_50[22];
typedef RpLight* type_51[2];
typedef int8 type_52[128];
typedef int8 type_55[128][6];
typedef RwFrame* type_56[2];
typedef int8 type_61[16];
typedef int8 type_63[32];
typedef float32 type_64[16];
typedef int32 type_65[141];
typedef int8 type_68[32];
typedef xModelTag type_69[2];
typedef int8 type_70[32];
typedef xBase* type_71[141];
typedef xJSPMiniLightTie type_72[16];
typedef analog_data type_74[2];
typedef xEntBoulder* type_76[2];
typedef float32 type_78[4];
typedef float32 type_79[6];
typedef uint8 type_80[10];
typedef xVec3 type_81[3];
typedef float32 type_82[3];
typedef uint8 type_84[10];
typedef uint32 type_86[2];
typedef float32 type_87[3];
typedef float32 type_89[3];
typedef int8 type_90[4];
typedef RwTexCoords* type_93[8];
typedef path_node type_94[32];
typedef int8 type_95[16];
typedef xVec3 type_96[5];
typedef card_data type_97[32];
typedef xCollis type_98[18];
typedef uint8 type_99[5];
typedef xModelTag type_100[4];
typedef uint8 type_101[3];
typedef uint8 type_102[2];
typedef xEnt* type_103[161];
typedef float32 type_106[2];

struct xModelBlur
{
	activity_data* activity;

	void render_cards(xFRect& src_rect, float32 xoff0, float32 yoff0, float32 xoff1, float32 yoff1);
	void render();
	uint8 update(float32 dt);
	void set_lifetime(float32 value, float32 time);
	void move(xVec3& center);
	void deactivate();
	uint8 activate(float32 lifetime, float32 alpha, config_data& cfg, xModelInstance* model);
	void create();
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
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

struct activity_data
{
	int32 index;
	xModelBlur* owner;
	config_data* cfg;
	xModelInstance* model;
	xVec3 center;
	path_node path[32];
	card_data cards[32];
	int32 path_start;
	int32 path_size;
	int32 cards_size;
	interpolator lifetime;
	interpolator alpha;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	union
	{
		uint32 Handle;
		iSndHandle SndHandle;
	};
};

struct path_node
{
	uint8 just_added;
	float32 age;
	xVec3 center;
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

struct zEntHangable
{
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

enum iSndHandle
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

struct anim_coll_data
{
};

struct zPlatform
{
};

struct xVec2
{
	float32 x;
	float32 y;
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

struct RpTie
{
	RwLLLink lAtomicInWorldSector;
	RpAtomic* apAtom;
	RwLLLink lWorldSectorInAtomic;
	RpWorldSector* worldSector;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xGrid
{
};

struct _class_0
{
	xVec3* verts;
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

struct xCamGroup
{
};

struct interpolator
{
	float32 value;
	float32 start;
	float32 end;
	float32 t;
	float32 trate;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xCamScreen
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct zCutsceneMgr
{
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct xFRect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct zAssetPickupTable
{
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
};

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xEntBoulder
{
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

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct zPlayerLassoInfo
{
	float32 dist;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	zLasso lasso;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
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

struct _tagiPad
{
	int32 port;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xFXFastRaster
{
	RwRaster* src;
	RwRaster* dst;
	uint32 fbmsk;
	uint32 test;
	uint32 old_alpha_1;
};

struct xCoef
{
	float32 a[4];
};

struct zRewardsMgr
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
};

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xAnimTable
{
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct card_data
{
	float32 alpha;
	xVec3 center;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
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

struct xFXCameraTexture
{
	RwCamera* cam;
	RwRaster* raster;
	RwRaster* bgraster;
	RpWorld* world;
	RwTexture* texture;
	uint32 vert_buffer_used;
	xColor_tag bgcolor;
	RwCamera* oldcam;
	RpWorld* oldworld;
	float32 rcz;
	float32 w;
	float32 h;
	RwRaster* zraster;
	int32 max_tw;
	int32 max_th;
	float32 old_near_plane;
	float32 old_far_plane;
	float32 old_znear;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xSurface
{
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct rxReq
{
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
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

struct RwLinkList
{
	RwLLLink link;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
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
uint8 sModelBlurEnabled;
xFXCameraTexture camtex;
activity_data* activity_buffer;
activity_data* activities[6];
int32 activities_used;
uint32 FB_YRES;
uint32 FB_XRES;
uint32 ourGlobals[4096];
uint32 lastSetFBMSK;
<unknown fundamental type (0xa510)>* _rwDMAGateSlot;
zGlobals globals;
uint32 gActiveHeap;
xColor_tag g_CLEAR;

void render_cards(xFRect& src_rect, float32 xoff0, float32 yoff0, float32 xoff1, float32 yoff1);
void render();
uint8 update(float32 dt);
void set_lifetime(float32 value, float32 time);
void move(xVec3& center);
void deactivate();
uint8 activate(float32 lifetime, float32 alpha, config_data& cfg, xModelInstance* model);
void create();
void render_enable(uint8 enabled);
void render_all();
void update_all(float32 dt);
void reset_all();
void scene_exit();
void scene_enter();

// render_cards__10xModelBlurFRC6xFRectffff
// Start address: 0x47c580
void xModelBlur::render_cards(xFRect& src_rect, float32 xoff0, float32 yoff0, float32 xoff1, float32 yoff1)
{
	RwRaster* draw_raster;
	xFXFastRaster fr;
	int32 maxu;
	int32 maxv;
	float32 radius;
	RwCamera* world_cam;
	xMat4x3& view_mat;
	xVec2& vw;
	_xFColor color;
	float32 zscale;
	float32 zbias;
	int32 i;
	card_data& card;
	xVec3 sp;
	float32 rz;
	float32 blitz;
	float32 cx;
	float32 cy;
	float32 x0;
	float32 y0;
	xFRect clip_src_rect;
	xFRect clip_dst_rect;
	// Line 679, Address: 0x47c580, Func Offset: 0
	// Line 682, Address: 0x47c5e8, Func Offset: 0x68
	// Line 690, Address: 0x47c5f4, Func Offset: 0x74
	// Line 691, Address: 0x47c600, Func Offset: 0x80
	// Line 692, Address: 0x47c60c, Func Offset: 0x8c
	// Line 697, Address: 0x47c62c, Func Offset: 0xac
	// Line 694, Address: 0x47c630, Func Offset: 0xb0
	// Line 697, Address: 0x47c634, Func Offset: 0xb4
	// Line 692, Address: 0x47c640, Func Offset: 0xc0
	// Line 694, Address: 0x47c648, Func Offset: 0xc8
	// Line 692, Address: 0x47c64c, Func Offset: 0xcc
	// Line 697, Address: 0x47c654, Func Offset: 0xd4
	// Line 699, Address: 0x47c65c, Func Offset: 0xdc
	// Line 700, Address: 0x47c66c, Func Offset: 0xec
	// Line 706, Address: 0x47c68c, Func Offset: 0x10c
	// Line 709, Address: 0x47c690, Func Offset: 0x110
	// Line 706, Address: 0x47c694, Func Offset: 0x114
	// Line 709, Address: 0x47c698, Func Offset: 0x118
	// Line 719, Address: 0x47c6c4, Func Offset: 0x144
	// Line 723, Address: 0x47c6c8, Func Offset: 0x148
	// Line 709, Address: 0x47c6cc, Func Offset: 0x14c
	// Line 718, Address: 0x47c6f8, Func Offset: 0x178
	// Line 719, Address: 0x47c6fc, Func Offset: 0x17c
	// Line 718, Address: 0x47c708, Func Offset: 0x188
	// Line 719, Address: 0x47c70c, Func Offset: 0x18c
	// Line 723, Address: 0x47c714, Func Offset: 0x194
	// Line 719, Address: 0x47c718, Func Offset: 0x198
	// Line 723, Address: 0x47c720, Func Offset: 0x1a0
	// Line 725, Address: 0x47c760, Func Offset: 0x1e0
	// Line 727, Address: 0x47c768, Func Offset: 0x1e8
	// Line 725, Address: 0x47c76c, Func Offset: 0x1ec
	// Line 728, Address: 0x47c770, Func Offset: 0x1f0
	// Line 732, Address: 0x47c77c, Func Offset: 0x1fc
	// Line 733, Address: 0x47c7d8, Func Offset: 0x258
	// Line 736, Address: 0x47c7e4, Func Offset: 0x264
	// Line 741, Address: 0x47c7f0, Func Offset: 0x270
	// Line 739, Address: 0x47c7f4, Func Offset: 0x274
	// Line 741, Address: 0x47c800, Func Offset: 0x280
	// Line 748, Address: 0x47c86c, Func Offset: 0x2ec
	// Line 742, Address: 0x47c870, Func Offset: 0x2f0
	// Line 748, Address: 0x47c874, Func Offset: 0x2f4
	// Line 747, Address: 0x47c878, Func Offset: 0x2f8
	// Line 741, Address: 0x47c87c, Func Offset: 0x2fc
	// Line 742, Address: 0x47c880, Func Offset: 0x300
	// Line 743, Address: 0x47c884, Func Offset: 0x304
	// Line 747, Address: 0x47c88c, Func Offset: 0x30c
	// Line 748, Address: 0x47c8a4, Func Offset: 0x324
	// Line 749, Address: 0x47c8cc, Func Offset: 0x34c
	// Line 748, Address: 0x47c8dc, Func Offset: 0x35c
	// Line 749, Address: 0x47c900, Func Offset: 0x380
	// Line 752, Address: 0x47c910, Func Offset: 0x390
	// Line 771, Address: 0x47c924, Func Offset: 0x3a4
	// Line 773, Address: 0x47c940, Func Offset: 0x3c0
	// Line 774, Address: 0x47c948, Func Offset: 0x3c8
	// Func End, Address: 0x47c9a0, Func Offset: 0x420
}

// render__10xModelBlurFv
// Start address: 0x47c9a0
void xModelBlur::render()
{
	uint32 oldFBMSK;
	RwRaster* draw_raster;
	xVec3& center;
	xVec3 view_center;
	RwCamera* world_cam;
	xMat4x3& view_mat;
	float32 rz;
	float32 screen_x;
	float32 screen_y;
	float32 screen_radius;
	xVec2& world_view_window;
	xFRect scr_rect;
	xFRect tex_rect;
	xFXFastRaster fr;
	_xFColor color;
	xModelInstance* m;
	float32 oldalpha;
	xModelInstance* m;
	float32 oldalpha;
	float32 xoff0;
	float32 xoff1;
	float32 yoff1;
	// Line 525, Address: 0x47c9a0, Func Offset: 0
	// Line 536, Address: 0x47c9e0, Func Offset: 0x40
	// Line 542, Address: 0x47c9f0, Func Offset: 0x50
	// Line 536, Address: 0x47c9f4, Func Offset: 0x54
	// Line 542, Address: 0x47c9f8, Func Offset: 0x58
	// Line 545, Address: 0x47ca04, Func Offset: 0x64
	// Line 553, Address: 0x47ca10, Func Offset: 0x70
	// Line 555, Address: 0x47ca14, Func Offset: 0x74
	// Line 557, Address: 0x47ca18, Func Offset: 0x78
	// Line 555, Address: 0x47ca1c, Func Offset: 0x7c
	// Line 553, Address: 0x47ca20, Func Offset: 0x80
	// Line 556, Address: 0x47ca24, Func Offset: 0x84
	// Line 557, Address: 0x47ca28, Func Offset: 0x88
	// Line 558, Address: 0x47ca7c, Func Offset: 0xdc
	// Line 562, Address: 0x47ca84, Func Offset: 0xe4
	// Line 558, Address: 0x47ca88, Func Offset: 0xe8
	// Line 562, Address: 0x47ca8c, Func Offset: 0xec
	// Line 560, Address: 0x47ca90, Func Offset: 0xf0
	// Line 562, Address: 0x47ca94, Func Offset: 0xf4
	// Line 561, Address: 0x47ca98, Func Offset: 0xf8
	// Line 559, Address: 0x47ca9c, Func Offset: 0xfc
	// Line 558, Address: 0x47caa0, Func Offset: 0x100
	// Line 561, Address: 0x47caa4, Func Offset: 0x104
	// Line 560, Address: 0x47caa8, Func Offset: 0x108
	// Line 561, Address: 0x47caac, Func Offset: 0x10c
	// Line 559, Address: 0x47cab0, Func Offset: 0x110
	// Line 565, Address: 0x47cab4, Func Offset: 0x114
	// Line 566, Address: 0x47cb00, Func Offset: 0x160
	// Line 567, Address: 0x47cb34, Func Offset: 0x194
	// Line 566, Address: 0x47cb38, Func Offset: 0x198
	// Line 567, Address: 0x47cb3c, Func Offset: 0x19c
	// Line 566, Address: 0x47cb48, Func Offset: 0x1a8
	// Line 567, Address: 0x47cb54, Func Offset: 0x1b4
	// Line 568, Address: 0x47cb88, Func Offset: 0x1e8
	// Line 567, Address: 0x47cb8c, Func Offset: 0x1ec
	// Line 568, Address: 0x47cb94, Func Offset: 0x1f4
	// Line 570, Address: 0x47cbd0, Func Offset: 0x230
	// Line 568, Address: 0x47cbd4, Func Offset: 0x234
	// Line 570, Address: 0x47cbd8, Func Offset: 0x238
	// Line 575, Address: 0x47cbec, Func Offset: 0x24c
	// Line 576, Address: 0x47cbf0, Func Offset: 0x250
	// Line 574, Address: 0x47cbf8, Func Offset: 0x258
	// Line 576, Address: 0x47cbfc, Func Offset: 0x25c
	// Line 577, Address: 0x47cc18, Func Offset: 0x278
	// Line 576, Address: 0x47cc1c, Func Offset: 0x27c
	// Line 577, Address: 0x47cc20, Func Offset: 0x280
	// Line 579, Address: 0x47cc40, Func Offset: 0x2a0
	// Line 577, Address: 0x47cc48, Func Offset: 0x2a8
	// Line 579, Address: 0x47cc4c, Func Offset: 0x2ac
	// Line 582, Address: 0x47cc5c, Func Offset: 0x2bc
	// Line 584, Address: 0x47cc70, Func Offset: 0x2d0
	// Line 590, Address: 0x47cc90, Func Offset: 0x2f0
	// Line 596, Address: 0x47cc98, Func Offset: 0x2f8
	// Line 597, Address: 0x47cca0, Func Offset: 0x300
	// Line 598, Address: 0x47ccb0, Func Offset: 0x310
	// Line 599, Address: 0x47ccc4, Func Offset: 0x324
	// Line 600, Address: 0x47ccdc, Func Offset: 0x33c
	// Line 601, Address: 0x47ccec, Func Offset: 0x34c
	// Line 602, Address: 0x47ccfc, Func Offset: 0x35c
	// Line 603, Address: 0x47cd08, Func Offset: 0x368
	// Line 604, Address: 0x47cd20, Func Offset: 0x380
	// Line 605, Address: 0x47cd2c, Func Offset: 0x38c
	// Line 604, Address: 0x47cd30, Func Offset: 0x390
	// Line 605, Address: 0x47cd34, Func Offset: 0x394
	// Line 618, Address: 0x47cd50, Func Offset: 0x3b0
	// Line 620, Address: 0x47cd64, Func Offset: 0x3c4
	// Line 622, Address: 0x47cd70, Func Offset: 0x3d0
	// Line 623, Address: 0x47cd74, Func Offset: 0x3d4
	// Line 624, Address: 0x47cd7c, Func Offset: 0x3dc
	// Line 625, Address: 0x47cd80, Func Offset: 0x3e0
	// Line 626, Address: 0x47cd8c, Func Offset: 0x3ec
	// Line 629, Address: 0x47cd94, Func Offset: 0x3f4
	// Line 631, Address: 0x47cda4, Func Offset: 0x404
	// Line 633, Address: 0x47cdb0, Func Offset: 0x410
	// Line 635, Address: 0x47cdc0, Func Offset: 0x420
	// Line 636, Address: 0x47cdc4, Func Offset: 0x424
	// Line 637, Address: 0x47cdcc, Func Offset: 0x42c
	// Line 638, Address: 0x47cdd0, Func Offset: 0x430
	// Line 640, Address: 0x47cde0, Func Offset: 0x440
	// Line 644, Address: 0x47cdec, Func Offset: 0x44c
	// Line 646, Address: 0x47cdf8, Func Offset: 0x458
	// Line 659, Address: 0x47ce3c, Func Offset: 0x49c
	// Line 646, Address: 0x47ce40, Func Offset: 0x4a0
	// Line 659, Address: 0x47ce44, Func Offset: 0x4a4
	// Line 646, Address: 0x47ce48, Func Offset: 0x4a8
	// Line 658, Address: 0x47ce4c, Func Offset: 0x4ac
	// Line 659, Address: 0x47ce50, Func Offset: 0x4b0
	// Line 658, Address: 0x47ce58, Func Offset: 0x4b8
	// Line 659, Address: 0x47ce5c, Func Offset: 0x4bc
	// Line 661, Address: 0x47ce90, Func Offset: 0x4f0
	// Line 662, Address: 0x47ce98, Func Offset: 0x4f8
	// Line 659, Address: 0x47cea4, Func Offset: 0x504
	// Line 661, Address: 0x47cea8, Func Offset: 0x508
	// Line 662, Address: 0x47ceb4, Func Offset: 0x514
	// Line 663, Address: 0x47cebc, Func Offset: 0x51c
	// Line 664, Address: 0x47cedc, Func Offset: 0x53c
	// Line 668, Address: 0x47ceec, Func Offset: 0x54c
	// Line 669, Address: 0x47cefc, Func Offset: 0x55c
	// Line 676, Address: 0x47cf04, Func Offset: 0x564
	// Func End, Address: 0x47cf48, Func Offset: 0x5a8
}

// update__10xModelBlurFf
// Start address: 0x47cf50
uint8 xModelBlur::update(float32 dt)
{
	int32 i;
	float32 lifetime;
	path_node& p;
	float32 card_dist;
	int32 max_card_renders;
	float32 alpha_scale;
	card_data* cards;
	int32 cards_size;
	float32 path_dist;
	path_node& p0;
	path_node& p1;
	xVec3& A;
	xVec3& B;
	float32 ABx;
	float32 ABy;
	float32 ABz;
	float32 idist;
	float32 age0;
	float32 dage;
	float32 dist;
	float32 t;
	float32 age;
	// Line 369, Address: 0x47cf50, Func Offset: 0
	// Line 372, Address: 0x47cf54, Func Offset: 0x4
	// Line 373, Address: 0x47cfc4, Func Offset: 0x74
	// Line 377, Address: 0x47d038, Func Offset: 0xe8
	// Line 380, Address: 0x47d058, Func Offset: 0x108
	// Line 381, Address: 0x47d0bc, Func Offset: 0x16c
	// Line 385, Address: 0x47d0c8, Func Offset: 0x178
	// Line 387, Address: 0x47d0d8, Func Offset: 0x188
	// Line 388, Address: 0x47d0f8, Func Offset: 0x1a8
	// Line 391, Address: 0x47d104, Func Offset: 0x1b4
	// Line 392, Address: 0x47d10c, Func Offset: 0x1bc
	// Line 393, Address: 0x47d110, Func Offset: 0x1c0
	// Line 394, Address: 0x47d118, Func Offset: 0x1c8
	// Line 396, Address: 0x47d124, Func Offset: 0x1d4
	// Line 406, Address: 0x47d130, Func Offset: 0x1e0
	// Line 409, Address: 0x47d160, Func Offset: 0x210
	// Line 413, Address: 0x47d168, Func Offset: 0x218
	// Line 377, Address: 0x47d18c, Func Offset: 0x23c
	// Line 413, Address: 0x47d190, Func Offset: 0x240
	// Line 377, Address: 0x47d194, Func Offset: 0x244
	// Line 413, Address: 0x47d198, Func Offset: 0x248
	// Line 400, Address: 0x47d1ac, Func Offset: 0x25c
	// Line 413, Address: 0x47d1b0, Func Offset: 0x260
	// Line 422, Address: 0x47d1b8, Func Offset: 0x268
	// Line 423, Address: 0x47d1bc, Func Offset: 0x26c
	// Line 424, Address: 0x47d1c0, Func Offset: 0x270
	// Line 413, Address: 0x47d1c4, Func Offset: 0x274
	// Line 418, Address: 0x47d1c8, Func Offset: 0x278
	// Line 424, Address: 0x47d1cc, Func Offset: 0x27c
	// Line 421, Address: 0x47d1d0, Func Offset: 0x280
	// Line 418, Address: 0x47d1d4, Func Offset: 0x284
	// Line 416, Address: 0x47d1d8, Func Offset: 0x288
	// Line 415, Address: 0x47d1dc, Func Offset: 0x28c
	// Line 418, Address: 0x47d1e0, Func Offset: 0x290
	// Line 424, Address: 0x47d1f0, Func Offset: 0x2a0
	// Line 434, Address: 0x47d1fc, Func Offset: 0x2ac
	// Line 439, Address: 0x47d204, Func Offset: 0x2b4
	// Line 434, Address: 0x47d208, Func Offset: 0x2b8
	// Line 439, Address: 0x47d20c, Func Offset: 0x2bc
	// Line 451, Address: 0x47d210, Func Offset: 0x2c0
	// Line 426, Address: 0x47d214, Func Offset: 0x2c4
	// Line 428, Address: 0x47d224, Func Offset: 0x2d4
	// Line 429, Address: 0x47d22c, Func Offset: 0x2dc
	// Line 428, Address: 0x47d230, Func Offset: 0x2e0
	// Line 429, Address: 0x47d234, Func Offset: 0x2e4
	// Line 428, Address: 0x47d238, Func Offset: 0x2e8
	// Line 429, Address: 0x47d23c, Func Offset: 0x2ec
	// Line 428, Address: 0x47d240, Func Offset: 0x2f0
	// Line 429, Address: 0x47d244, Func Offset: 0x2f4
	// Line 428, Address: 0x47d248, Func Offset: 0x2f8
	// Line 429, Address: 0x47d24c, Func Offset: 0x2fc
	// Line 428, Address: 0x47d250, Func Offset: 0x300
	// Line 429, Address: 0x47d254, Func Offset: 0x304
	// Line 428, Address: 0x47d258, Func Offset: 0x308
	// Line 432, Address: 0x47d25c, Func Offset: 0x30c
	// Line 429, Address: 0x47d260, Func Offset: 0x310
	// Line 432, Address: 0x47d264, Func Offset: 0x314
	// Line 431, Address: 0x47d268, Func Offset: 0x318
	// Line 432, Address: 0x47d26c, Func Offset: 0x31c
	// Line 433, Address: 0x47d284, Func Offset: 0x334
	// Line 432, Address: 0x47d288, Func Offset: 0x338
	// Line 433, Address: 0x47d28c, Func Offset: 0x33c
	// Line 434, Address: 0x47d2a0, Func Offset: 0x350
	// Line 437, Address: 0x47d2ac, Func Offset: 0x35c
	// Line 438, Address: 0x47d2b4, Func Offset: 0x364
	// Line 444, Address: 0x47d2b8, Func Offset: 0x368
	// Line 439, Address: 0x47d2bc, Func Offset: 0x36c
	// Line 442, Address: 0x47d2c0, Func Offset: 0x370
	// Line 440, Address: 0x47d2c4, Func Offset: 0x374
	// Line 443, Address: 0x47d2d0, Func Offset: 0x380
	// Line 444, Address: 0x47d2d4, Func Offset: 0x384
	// Line 446, Address: 0x47d2e0, Func Offset: 0x390
	// Line 448, Address: 0x47d2ec, Func Offset: 0x39c
	// Line 450, Address: 0x47d2f0, Func Offset: 0x3a0
	// Line 451, Address: 0x47d2f4, Func Offset: 0x3a4
	// Line 452, Address: 0x47d2fc, Func Offset: 0x3ac
	// Line 455, Address: 0x47d308, Func Offset: 0x3b8
	// Line 457, Address: 0x47d30c, Func Offset: 0x3bc
	// Line 455, Address: 0x47d314, Func Offset: 0x3c4
	// Line 456, Address: 0x47d31c, Func Offset: 0x3cc
	// Line 457, Address: 0x47d34c, Func Offset: 0x3fc
	// Line 458, Address: 0x47d354, Func Offset: 0x404
	// Line 459, Address: 0x47d370, Func Offset: 0x420
	// Line 485, Address: 0x47d378, Func Offset: 0x428
	// Line 488, Address: 0x47d38c, Func Offset: 0x43c
	// Line 489, Address: 0x47d39c, Func Offset: 0x44c
	// Func End, Address: 0x47d3a8, Func Offset: 0x458
}

// set_lifetime__10xModelBlurFff
// Start address: 0x47d3b0
void xModelBlur::set_lifetime(float32 value, float32 time)
{
	// Line 319, Address: 0x47d3b0, Func Offset: 0
	// Line 320, Address: 0x47d3f4, Func Offset: 0x44
	// Line 319, Address: 0x47d40c, Func Offset: 0x5c
	// Line 320, Address: 0x47d414, Func Offset: 0x64
	// Func End, Address: 0x47d41c, Func Offset: 0x6c
}

// move__10xModelBlurFRC5xVec3
// Start address: 0x47d420
void xModelBlur::move(xVec3& center)
{
	int32 second_index;
	xVec3& A;
	xVec3& B;
	float32 ABx;
	float32 ABy;
	float32 ABz;
	float32 min_dist;
	path_node& p;
	// Line 269, Address: 0x47d420, Func Offset: 0
	// Line 273, Address: 0x47d424, Func Offset: 0x4
	// Line 280, Address: 0x47d438, Func Offset: 0x18
	// Line 276, Address: 0x47d43c, Func Offset: 0x1c
	// Line 275, Address: 0x47d440, Func Offset: 0x20
	// Line 276, Address: 0x47d444, Func Offset: 0x24
	// Line 275, Address: 0x47d448, Func Offset: 0x28
	// Line 276, Address: 0x47d44c, Func Offset: 0x2c
	// Line 277, Address: 0x47d450, Func Offset: 0x30
	// Line 276, Address: 0x47d454, Func Offset: 0x34
	// Line 277, Address: 0x47d458, Func Offset: 0x38
	// Line 278, Address: 0x47d464, Func Offset: 0x44
	// Line 280, Address: 0x47d46c, Func Offset: 0x4c
	// Line 278, Address: 0x47d470, Func Offset: 0x50
	// Line 281, Address: 0x47d480, Func Offset: 0x60
	// Line 278, Address: 0x47d484, Func Offset: 0x64
	// Line 281, Address: 0x47d48c, Func Offset: 0x6c
	// Line 278, Address: 0x47d490, Func Offset: 0x70
	// Line 281, Address: 0x47d494, Func Offset: 0x74
	// Line 283, Address: 0x47d4a8, Func Offset: 0x88
	// Line 284, Address: 0x47d4ac, Func Offset: 0x8c
	// Line 289, Address: 0x47d4bc, Func Offset: 0x9c
	// Line 298, Address: 0x47d4d0, Func Offset: 0xb0
	// Line 296, Address: 0x47d4d8, Func Offset: 0xb8
	// Line 298, Address: 0x47d4dc, Func Offset: 0xbc
	// Line 293, Address: 0x47d4e0, Func Offset: 0xc0
	// Line 294, Address: 0x47d4f0, Func Offset: 0xd0
	// Line 295, Address: 0x47d504, Func Offset: 0xe4
	// Line 296, Address: 0x47d518, Func Offset: 0xf8
	// Line 297, Address: 0x47d51c, Func Offset: 0xfc
	// Line 298, Address: 0x47d520, Func Offset: 0x100
	// Line 300, Address: 0x47d52c, Func Offset: 0x10c
	// Line 301, Address: 0x47d538, Func Offset: 0x118
	// Func End, Address: 0x47d550, Func Offset: 0x130
}

// deactivate__10xModelBlurFv
// Start address: 0x47d550
void xModelBlur::deactivate()
{
	// Line 259, Address: 0x47d550, Func Offset: 0
	// Line 260, Address: 0x47d558, Func Offset: 0x8
	// Line 263, Address: 0x47d560, Func Offset: 0x10
	// Line 264, Address: 0x47d564, Func Offset: 0x14
	// Line 265, Address: 0x47d5b8, Func Offset: 0x68
	// Line 266, Address: 0x47d5bc, Func Offset: 0x6c
	// Func End, Address: 0x47d5c4, Func Offset: 0x74
}

// activate__10xModelBlurFffRCQ210xModelBlur11config_dataP14xModelInstance
// Start address: 0x47d5d0
uint8 xModelBlur::activate(float32 lifetime, float32 alpha, config_data& cfg, xModelInstance* model)
{
	// Line 236, Address: 0x47d5d0, Func Offset: 0
	// Line 237, Address: 0x47d5d4, Func Offset: 0x4
	// Line 239, Address: 0x47d5dc, Func Offset: 0xc
	// Line 241, Address: 0x47d5e0, Func Offset: 0x10
	// Line 239, Address: 0x47d5e4, Func Offset: 0x14
	// Line 240, Address: 0x47d5f4, Func Offset: 0x24
	// Line 241, Address: 0x47d608, Func Offset: 0x38
	// Line 243, Address: 0x47d614, Func Offset: 0x44
	// Line 244, Address: 0x47d620, Func Offset: 0x50
	// Line 245, Address: 0x47d628, Func Offset: 0x58
	// Line 255, Address: 0x47d640, Func Offset: 0x70
	// Line 245, Address: 0x47d644, Func Offset: 0x74
	// Line 247, Address: 0x47d648, Func Offset: 0x78
	// Line 248, Address: 0x47d650, Func Offset: 0x80
	// Line 249, Address: 0x47d658, Func Offset: 0x88
	// Line 250, Address: 0x47d660, Func Offset: 0x90
	// Line 251, Address: 0x47d668, Func Offset: 0x98
	// Line 252, Address: 0x47d670, Func Offset: 0xa0
	// Line 253, Address: 0x47d688, Func Offset: 0xb8
	// Line 256, Address: 0x47d6a0, Func Offset: 0xd0
	// Func End, Address: 0x47d6a8, Func Offset: 0xd8
}

// create__10xModelBlurFv
// Start address: 0x47d6b0
void xModelBlur::create()
{
	// Line 233, Address: 0x47d6b0, Func Offset: 0
	// Func End, Address: 0x47d6b8, Func Offset: 0x8
}

// render_enable__10xModelBlurFb
// Start address: 0x47d6c0
void xModelBlur::render_enable(uint8 enabled)
{
	// Line 211, Address: 0x47d6c0, Func Offset: 0
	// Func End, Address: 0x47d6c8, Func Offset: 0x8
}

// render_all__10xModelBlurFv
// Start address: 0x47d6d0
void xModelBlur::render_all()
{
	activity_data** activity;
	activity_data** end_activity;
	// Line 193, Address: 0x47d6d0, Func Offset: 0
	// Line 194, Address: 0x47d6e0, Func Offset: 0x10
	// Line 197, Address: 0x47d6ec, Func Offset: 0x1c
	// Line 198, Address: 0x47d700, Func Offset: 0x30
	// Line 200, Address: 0x47d70c, Func Offset: 0x3c
	// Line 205, Address: 0x47d720, Func Offset: 0x50
	// Line 206, Address: 0x47d730, Func Offset: 0x60
	// Func End, Address: 0x47d75c, Func Offset: 0x8c
}

// update_all__10xModelBlurFf
// Start address: 0x47d760
void xModelBlur::update_all(float32 dt)
{
	activity_data** activity;
	activity_data** end_activity;
	// Line 175, Address: 0x47d760, Func Offset: 0
	// Line 176, Address: 0x47d774, Func Offset: 0x14
	// Line 177, Address: 0x47d788, Func Offset: 0x28
	// Line 180, Address: 0x47d794, Func Offset: 0x34
	// Line 181, Address: 0x47d7a8, Func Offset: 0x48
	// Line 189, Address: 0x47d7ac, Func Offset: 0x4c
	// Line 190, Address: 0x47d7b8, Func Offset: 0x58
	// Line 186, Address: 0x47d7d4, Func Offset: 0x74
	// Line 190, Address: 0x47d7e8, Func Offset: 0x88
	// Func End, Address: 0x47d800, Func Offset: 0xa0
}

// reset_all__10xModelBlurFv
// Start address: 0x47d800
void xModelBlur::reset_all()
{
	int32 i;
	activity_data* activity;
	// Line 157, Address: 0x47d800, Func Offset: 0
	// Line 159, Address: 0x47d820, Func Offset: 0x20
	// Line 160, Address: 0x47d828, Func Offset: 0x28
	// Line 161, Address: 0x47d82c, Func Offset: 0x2c
	// Line 167, Address: 0x47d84c, Func Offset: 0x4c
	// Line 169, Address: 0x47d850, Func Offset: 0x50
	// Line 168, Address: 0x47d854, Func Offset: 0x54
	// Line 169, Address: 0x47d858, Func Offset: 0x58
	// Line 168, Address: 0x47d85c, Func Offset: 0x5c
	// Line 169, Address: 0x47d860, Func Offset: 0x60
	// Line 168, Address: 0x47d864, Func Offset: 0x64
	// Line 169, Address: 0x47d868, Func Offset: 0x68
	// Line 168, Address: 0x47d86c, Func Offset: 0x6c
	// Line 169, Address: 0x47d870, Func Offset: 0x70
	// Line 167, Address: 0x47d874, Func Offset: 0x74
	// Line 168, Address: 0x47d878, Func Offset: 0x78
	// Line 169, Address: 0x47d880, Func Offset: 0x80
	// Line 166, Address: 0x47d888, Func Offset: 0x88
	// Line 169, Address: 0x47d88c, Func Offset: 0x8c
	// Line 166, Address: 0x47d89c, Func Offset: 0x9c
	// Line 169, Address: 0x47d8a0, Func Offset: 0xa0
	// Line 166, Address: 0x47d8b0, Func Offset: 0xb0
	// Line 169, Address: 0x47d8b4, Func Offset: 0xb4
	// Line 166, Address: 0x47d8c4, Func Offset: 0xc4
	// Line 169, Address: 0x47d8c8, Func Offset: 0xc8
	// Line 166, Address: 0x47d8d8, Func Offset: 0xd8
	// Line 169, Address: 0x47d8dc, Func Offset: 0xdc
	// Line 172, Address: 0x47d8e8, Func Offset: 0xe8
	// Func End, Address: 0x47d8f0, Func Offset: 0xf0
}

// scene_exit__10xModelBlurFv
// Start address: 0x47d8f0
void xModelBlur::scene_exit()
{
	// Line 151, Address: 0x47d8f0, Func Offset: 0
	// Func End, Address: 0x47d8fc, Func Offset: 0xc
}

// scene_enter__10xModelBlurFv
// Start address: 0x47d900
void xModelBlur::scene_enter()
{
	activity_data* activity;
	// Line 132, Address: 0x47d900, Func Offset: 0
	// Line 133, Address: 0x47d904, Func Offset: 0x4
	// Line 132, Address: 0x47d910, Func Offset: 0x10
	// Line 133, Address: 0x47d914, Func Offset: 0x14
	// Line 134, Address: 0x47d928, Func Offset: 0x28
	// Line 136, Address: 0x47d940, Func Offset: 0x40
	// Line 134, Address: 0x47d944, Func Offset: 0x44
	// Line 136, Address: 0x47d948, Func Offset: 0x48
	// Line 134, Address: 0x47d94c, Func Offset: 0x4c
	// Line 136, Address: 0x47d958, Func Offset: 0x58
	// Line 134, Address: 0x47d95c, Func Offset: 0x5c
	// Line 136, Address: 0x47d978, Func Offset: 0x78
	// Line 140, Address: 0x47d980, Func Offset: 0x80
	// Line 136, Address: 0x47d984, Func Offset: 0x84
	// Line 140, Address: 0x47d988, Func Offset: 0x88
	// Line 142, Address: 0x47d98c, Func Offset: 0x8c
	// Line 141, Address: 0x47d990, Func Offset: 0x90
	// Line 142, Address: 0x47d998, Func Offset: 0x98
	// Line 141, Address: 0x47d9a4, Func Offset: 0xa4
	// Line 142, Address: 0x47d9a8, Func Offset: 0xa8
	// Line 141, Address: 0x47d9ac, Func Offset: 0xac
	// Line 142, Address: 0x47d9b0, Func Offset: 0xb0
	// Line 141, Address: 0x47d9b4, Func Offset: 0xb4
	// Line 142, Address: 0x47d9b8, Func Offset: 0xb8
	// Line 141, Address: 0x47d9bc, Func Offset: 0xbc
	// Line 139, Address: 0x47d9c0, Func Offset: 0xc0
	// Line 142, Address: 0x47d9c4, Func Offset: 0xc4
	// Line 139, Address: 0x47d9d4, Func Offset: 0xd4
	// Line 142, Address: 0x47d9d8, Func Offset: 0xd8
	// Line 139, Address: 0x47d9e8, Func Offset: 0xe8
	// Line 142, Address: 0x47d9ec, Func Offset: 0xec
	// Line 139, Address: 0x47d9fc, Func Offset: 0xfc
	// Line 142, Address: 0x47da00, Func Offset: 0x100
	// Line 139, Address: 0x47da10, Func Offset: 0x110
	// Line 142, Address: 0x47da14, Func Offset: 0x114
	// Line 144, Address: 0x47da20, Func Offset: 0x120
	// Line 147, Address: 0x47da24, Func Offset: 0x124
	// Func End, Address: 0x47da30, Func Offset: 0x130
}

