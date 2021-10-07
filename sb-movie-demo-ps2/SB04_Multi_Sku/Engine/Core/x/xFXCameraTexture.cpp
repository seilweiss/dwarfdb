typedef struct xVec2;
typedef struct xAnimFile;
typedef struct xBase;
typedef struct RxClusterDefinition;
typedef struct xQuat;
typedef struct xAnimPlay;
typedef struct zPlayerLassoInfo;
typedef struct tri_data_0;
typedef struct xFXCameraTexture;
typedef struct RpAtomic;
typedef struct xScene;
typedef struct xAnimEffect;
typedef struct zLedgeGrabParams;
typedef struct xJSPNodeInfo;
typedef struct xFFX;
typedef struct sceGsZbuf;
typedef struct xCoef;
typedef struct xBaseAsset;
typedef struct RpInterpolator;
typedef struct xEnt;
typedef enum RxNodeDefEditable;
typedef struct RwFrustumPlane;
typedef struct xAnimTransitionList;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct xFRect;
typedef struct RwCamera;
typedef struct zRewardsMgr;
typedef enum RwFogType;
typedef struct RwRaster;
typedef struct RpTie;
typedef struct xEnv;
typedef struct rxHeapBlockHeader;
typedef struct tri_data_1;
typedef struct zGlobals;
typedef struct RxIoSpec;
typedef struct xJSPNodeTree;
typedef struct RwSky2DVertex;
typedef enum _zPlayerWallJumpState;
typedef struct _tagxPad;
typedef struct xCollis;
typedef struct xFXFastRaster;
typedef struct iEnv;
typedef struct RwBBox;
typedef struct RpWorld;
typedef struct xEntAsset;
typedef struct xJSPNodeTreeBranch;
typedef struct xVec4;
typedef struct xCoef3;
typedef struct xModelInstance;
typedef struct RxPacket;
typedef enum blend_mode;
typedef struct RwPlane;
typedef struct _class_0;
typedef struct _xFColor;
typedef struct xModelBucket;
typedef struct RxOutputSpec;
typedef struct xJSPNodeTreeLeaf;
typedef struct xEntCollis;
typedef struct PS2DemoGlobals;
typedef struct xAnimMultiFile;
typedef struct xAnimTransition;
typedef struct xLightKit;
typedef struct xEntFrame;
typedef struct xGroupAsset;
typedef struct xGrid;
typedef struct xAnimState;
typedef struct zAssetPickupTable;
typedef struct zPlayerGlobals;
typedef struct xAnimTable;
typedef struct xSurface;
typedef struct xAnimPhysicsData;
typedef struct zEnt;
typedef struct zCutsceneMgr;
typedef struct xQCData;
typedef struct xColor_tag;
typedef struct RwSphere;
typedef struct RpWorldSector;
typedef struct RwRect;
typedef struct xSphere;
typedef struct xJSPHeader;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RxClusterValid;
typedef struct RpSector;
typedef struct zPlayerCarryInfo;
typedef struct xBox;
typedef struct xJSPMiniLightTie;
typedef struct xCylinder;
typedef struct zPlayerSettings;
typedef struct _zPortal;
typedef struct analog_data;
typedef struct xRot;
typedef struct RpLight;
typedef struct RwV2d;
typedef struct RxPipelineCluster;
typedef struct iEnvMatOrder;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct xClumpCollBSPVertInfo;
typedef struct xMat3x3;
typedef struct xUpdateCullMgr;
typedef struct xShadowSimplePoly;
typedef struct RwFrame;
typedef struct _zEnv;
typedef struct xClumpCollBSPTree;
typedef struct xLightKitLight;
typedef struct RwMatrixTag;
typedef struct xJSPNodeLight;
typedef struct xEnvAsset;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct zSceneParameters;
typedef struct xClumpCollBSPTriangle;
typedef struct xUpdateCullEnt;
typedef struct xEntBoulder;
typedef struct xLinkAsset;
typedef struct xGroup;
typedef struct xSpline3;
typedef struct xShadowSimpleCache;
typedef struct RwTexture;
typedef struct RpMaterial;
typedef struct zEntHangable;
typedef struct _class_1;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct _class_2;
typedef struct zLasso;
typedef enum tcc_type;
typedef struct RwResEntry;
typedef struct xAnimMultiFileEntry;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xBBox;
typedef enum _zPlayerType;
typedef struct RwV3d;
typedef struct iFogParams;
typedef struct xAnimActiveEffect;
typedef struct xModelTag;
typedef struct xPortalAsset;
typedef struct RwSurfaceProperties;
typedef struct xCamGroup;
typedef struct xCamera;
typedef enum tfx_type;
typedef struct RxPipelineNode;
typedef struct xUpdateCullGroup;
typedef enum iSndHandle;
typedef enum sceDemoEndReason;
typedef struct RpClump;
typedef struct xCamScreen;
typedef struct zScene;
typedef struct xAnimSingle;
typedef struct zCheckPoint;
typedef enum _tagPadState;
typedef struct xEntShadow;
typedef struct xAnimMultiFileBase;
typedef struct RwLLLink;
typedef struct zJumpParam;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct xGridBound;
typedef struct xModelPool;
typedef struct anim_coll_data;
typedef enum filter_type;
typedef struct RxPipeline;
typedef struct xBound;
typedef struct RxPipelineNodeTopSortData;
typedef struct xModelPipe;
typedef struct zPlatform;
typedef struct xGlobals;
typedef struct RxPipelineNodeParam;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct RwTexDictionary;
typedef struct _tagPadAnalog;
typedef struct rxReq;
typedef struct xEntDrive;
typedef struct xMemPool;
typedef struct RwTexCoords;
typedef struct xDynAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct RwSky2DVertexFields;
typedef struct RwLinkList;
typedef enum xSndEffect;
typedef struct zPlayer;
typedef struct RxNodeDefinition;
typedef enum zGlobalDemoType;
typedef struct RpTriangle;
typedef struct zGlobalSettings;
typedef struct _tagiPad;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_0)(void*);
typedef void(*type_6)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_15)(xEnt*, xScene*, float32, xEntCollis*);
typedef RpAtomic*(*type_16)(RpAtomic*);
typedef void(*type_18)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_19)(xAnimPlay*, xAnimState*, void*);
typedef void(*type_21)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_22)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_23)(RpWorldSector*);
typedef void(*type_26)(xEnt*, xScene*, float32);
typedef uint32(*type_29)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_30)(xEnt*);
typedef void(*type_35)(xEnt*);
typedef uint32(*type_42)(void*, void*);
typedef void(*type_43)(xEnt*, xVec3*);
typedef xBase*(*type_46)(uint32);
typedef int8*(*type_50)(xBase*);
typedef int8*(*type_52)(uint32);
typedef RwCamera*(*type_53)(RwCamera*);
typedef RwCamera*(*type_58)(RwCamera*);
typedef void(*type_67)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_68)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_74)(RwResEntry*);
typedef int32(*type_75)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_77)(RwObjectHasFrame*);
typedef void(*type_80)(RxPipelineNode*);
typedef int32(*type_83)(RxPipelineNode*);
typedef uint32(*type_84)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_85)(RxNodeDefinition*);
typedef int32(*type_87)(RxNodeDefinition*);
typedef int32(*type_90)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_93)(RpClump*, void*);
typedef void(*type_94)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_102)(xMemPool*, void*);

typedef RwV3d type_1[8];
typedef uint8 type_2[22];
typedef RwFrustumPlane type_3[6];
typedef uint8 type_4[22];
typedef float32 type_5[4];
typedef uint16 type_7[3];
typedef uint32 type_8[4];
typedef xVec3 type_9[60];
typedef _tagxPad* type_10[4];
typedef uint32 type_11[20];
typedef uint32 type_12[8];
typedef uint32 type_13[4];
typedef uint32 type_14[20];
typedef uint32 type_17[4096];
typedef uint32 type_20[20];
typedef RxCluster type_24[1];
typedef float32 type_25[22];
typedef float32 type_27[22];
typedef int8 type_28[32];
typedef RwSky2DVertex type_31[4];
typedef int8 type_32[128];
typedef int8 type_33[128][6];
typedef RpLight* type_34[2];
typedef RwFrame* type_36[2];
typedef int8 type_37[16];
typedef int32 type_38[141];
typedef int32 type_39[12];
typedef xVec3 type_40[3];
typedef int8 type_41[32];
typedef xBase* type_44[141];
typedef analog_data type_45[2];
typedef RwTexCoords* type_47[8];
typedef xModelTag type_48[2];
typedef float32 type_49[16];
typedef float32 type_51[3];
typedef xEntBoulder* type_54[2];
typedef float32 type_55[6];
typedef uint8 type_56[10];
typedef xJSPMiniLightTie type_57[16];
typedef float32 type_59[3];
typedef uint8 type_60[10];
typedef uint8 type_61[2];
typedef uint32 type_62[2];
typedef float32 type_63[3];
typedef xCollis type_64[18];
typedef float32 type_65[2];
typedef float32 type_66[3];
typedef int8 type_69[16];
typedef xVec3 type_70[5];
typedef int8 type_71[4];
typedef float32 type_72[4];
typedef uint8 type_73[5];
typedef uint8 type_76[3];
typedef xModelTag type_78[4];
typedef xEnt* type_79[161];
typedef int8 type_81[32];
typedef int8 type_82[32];
typedef uint32 type_86[1];
typedef xVec4 type_88[12];
typedef float32 type_89[4];
typedef uint32 type_91[59];
typedef xModelInstance* type_92[11];
typedef uint8 type_95[4];
typedef xVec3 type_96[4];
typedef int8 type_97[16];
typedef RwTexCoords* type_98[8];
typedef xVec4 type_99[12];
typedef xAnimMultiFileEntry type_100[1];
typedef <unknown fundamental type (0xa510)> type_101[4];
typedef int8 type_103[32];
typedef float32 type_104[2];
typedef uint8 type_105[3];
typedef int8 type_106[127];

struct xVec2
{
	float32 x;
	float32 y;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct zPlayerLassoInfo
{
	float32 dist;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	zLasso lasso;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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

	void zbuffer_map_and_clear(RwRaster* fraster, RwRaster* zraster, uint32 fbmsk, int32 clear_flags);
	void get_subview(xMat4x3& ltm, xVec2& view_window, xVec2& view_offset, RwCamera* src_cam, xFRect& src_rect, xFRect& dst_rect);
	void setup_subview(RwCamera* src_cam, xFRect& src_rect, xFRect& dst_rect);
	void end_render();
	void begin_render(int32 clear_flags, uint32 fbmsk_write, uint32 fbmsk_finish, float32 near_plane, float32 far_plane);
	void destroy();
	uint8 create(int32 w, int32 h, uint8 need_zwrite, int32 bpp, int32 zbpp);
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint16 Flags;
	uint16 Probability;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
};

struct xFFX
{
};

struct sceGsZbuf
{
	struct
	{
		ulong32 ZBP : 9;
		ulong32 pad09 : 15;
		ulong32 PSM : 4;
		ulong32 pad28 : 4;
		ulong32 ZMSK : 1;
		ulong32 pad33 : 31;
	};
};

struct xCoef
{
	float32 a[4];
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xFRect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
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

struct zRewardsMgr
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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
		_class_0 tuv;
		tri_data_0 tri;
	};
};

struct xFXFastRaster
{
	RwRaster* src;
	RwRaster* dst;
	uint32 fbmsk;
	uint32 test;
	uint32 old_alpha_1;

	void blit_scaled(float32 u, float32 v, _xFColor& color);
	void blit_scaled(float32 u, float32 v, xColor_tag color);
	void blit(xFRect& dst_rect, xFRect& src_rect, _xFColor& color, float32 z);
	void fill(xColor_tag color, uint8 alpha_blend);
	void set_test_cached(uint32 test);
	void set_destination(RwRaster* dst, uint32 fbmsk);
	void set_source(RwRaster* src, tcc_type tcc, tfx_type tfx, filter_type filter);
	void end_render();
	void begin_render();
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	_class_1 anim_coll;
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

enum blend_mode
{
	BLEND_INVALID = 0xffffffff,
	BLEND_AVERAGE,
	BLEND_AVERAGE_FIXED,
	BLEND_RAVERAGE,
	BLEND_RAVERAGE_FIXED,
	BLEND_ADDITIVE,
	BLEND_ADDITIVE_FIXED,
	BLEND_ADDITIVE_SCALE_FIXED,
	BLEND_COPY,
	BLEND_COPY_FIXED,
	BLEND_SUBTRACT,
	BLEND_SUBTRACT_FIXED,
	BLEND_SUBTRACT_SCALE_FIXED,
	MAX_BLEND
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xGrid
{
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

struct zAssetPickupTable
{
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

struct xAnimTable
{
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
};

struct xSurface
{
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct zCutsceneMgr
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

struct RwRect
{
	int32 x;
	int32 y;
	int32 w;
	int32 h;
};

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xEntBoulder
{
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct zEntHangable
{
};

struct _class_1
{
	xVec3* verts;
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

struct _class_2
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
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

enum tcc_type
{
	TCC_DEFAULT = 0xffffffff,
	TCC_RGB,
	TCC_RGBA
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	union
	{
		uint32 Handle;
		iSndHandle SndHandle;
	};
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xCamGroup
{
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

enum tfx_type
{
	TFX_DEFAULT = 0xffffffff,
	TFX_MODULATE,
	TFX_DECAL,
	TFX_HIGHLIGHT,
	TFX_HIGHLIGHT2
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

enum iSndHandle
{
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct xCamScreen
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct anim_coll_data
{
};

enum filter_type
{
	FILTER_NEAREST,
	FILTER_LINEAR,
	FILTER_DEFAULT = 0x1
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

struct zPlatform
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct rxReq
{
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

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct RwLinkList
{
	RwLLLink link;
};

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
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

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
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

int8 buffer[16];
int8 buffer[16];
float32 scale;
long32 old_skyZbuf_1;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
long32 skyZbuf_1;
long32 skyFrame_1;
long32 skyClamp_1;
long32 skyTest_1;
long32 skyXyoffset_1;
uint32 FB_YRES;
uint32 FB_XRES;
uint32 ourGlobals[4096];
uint32 lastSetFBMSK;
zGlobals globals;
uint32 lastSetFBMSK;
<unknown fundamental type (0xa510)>* _rwDMAGateSlot;

void blit_scaled(float32 u, float32 v, _xFColor& color);
void blit_scaled(float32 u, float32 v, xColor_tag color);
void blit(xFRect& dst_rect, xFRect& src_rect, _xFColor& color, float32 z);
void clear_z(RwRaster* dst, uint32 value);
void fill(RwRect& rect, xColor_tag color, float32 z);
void fill(xColor_tag color, uint8 alpha_blend);
void fill(RwRaster* dst, xColor_tag color, uint8 alpha_blend);
void set_scissor(int32 scax0, int32 scax1, int32 scay0, int32 scay1);
void set_clamp(int32 wms, int32 wmt, int32 minu, int32 maxu, int32 minv, int32 maxv);
void set_prmode(uint8 prmodecont, uint32 prmode);
void set_texa(int32 ta0, int32 aem, int32 ta1);
void set_blend_mode(blend_mode mode, float32 fixed_alpha);
void set_test(uint32 test);
uint32 get_full_blend_mode();
void set_full_blend_mode(uint32 full_mode);
void texflush();
void set_test_cached(uint32 test);
void set_destination(RwRaster* dst, uint32 fbmsk);
void set_source(RwRaster* src, tcc_type tcc, tfx_type tfx, filter_type filter);
void end_render();
void begin_render();
uint8 clip_rect(xFRect& dst_rect, RwRaster* dst_raster, xFRect& src_rect);
uint8 clip_rect(xFRect& dst_rect, RwRaster* dst_raster);
void zbuffer_unmap();
void zbuffer_map_and_clear(RwRaster* fraster, RwRaster* zraster, uint32 fbmsk, int32 clear_flags);
void get_subview(xMat4x3& ltm, xVec2& view_window, xVec2& view_offset, RwCamera* src_cam, xFRect& src_rect, xFRect& dst_rect);
void setup_subview(RwCamera* src_cam, xFRect& src_rect, xFRect& dst_rect);
void end_render();
void begin_render(int32 clear_flags, uint32 fbmsk_write, uint32 fbmsk_finish, float32 near_plane, float32 far_plane);
void destroy();
uint8 create(int32 w, int32 h, uint8 need_zwrite, int32 bpp, int32 zbpp);

// blit_scaled__13xFXFastRasterFffRC8_xFColor
// Start address: 0x46eb70
void xFXFastRaster::blit_scaled(float32 u, float32 v, _xFColor& color)
{
	float32 one'270;
	int32 min_dst_strips;
	int32 min_src_strips;
	uint32 msb;
	uint32 lsb;
	ulong32 stex0;
	int32 swidthpow;
	int32 sheightpow;
	int32 qwords_used;
	int32 actual_endx;
	int32 dx;
	int32 endx;
	<unknown fundamental type (0xa510)>* pkt;
	float32 one;
	int32 red;
	int32 green;
	int32 blue;
	int32 alpha;
	int32 y1;
	float32 uscale;
	float32 vscale;
	float32 t0;
	float32 t1;
	float32 s;
	float32 ds;
	int32 x;
	// Line 1688, Address: 0x46eb70, Func Offset: 0
	// Line 1700, Address: 0x46eb78, Func Offset: 0x8
	// Line 1688, Address: 0x46eb7c, Func Offset: 0xc
	// Line 1700, Address: 0x46ebb0, Func Offset: 0x40
	// Line 1688, Address: 0x46ebb4, Func Offset: 0x44
	// Line 1700, Address: 0x46ebb8, Func Offset: 0x48
	// Line 1703, Address: 0x46ebcc, Func Offset: 0x5c
	// Line 1704, Address: 0x46ebec, Func Offset: 0x7c
	// Line 1705, Address: 0x46ec00, Func Offset: 0x90
	// Line 1721, Address: 0x46ec08, Func Offset: 0x98
	// Line 1727, Address: 0x46ec14, Func Offset: 0xa4
	// Line 1722, Address: 0x46ec18, Func Offset: 0xa8
	// Line 1727, Address: 0x46ec1c, Func Offset: 0xac
	// Line 1722, Address: 0x46ec20, Func Offset: 0xb0
	// Line 1729, Address: 0x46ec24, Func Offset: 0xb4
	// Line 1722, Address: 0x46ec28, Func Offset: 0xb8
	// Line 1729, Address: 0x46ec30, Func Offset: 0xc0
	// Line 1723, Address: 0x46ec34, Func Offset: 0xc4
	// Line 1724, Address: 0x46ec3c, Func Offset: 0xcc
	// Line 1723, Address: 0x46ec40, Func Offset: 0xd0
	// Line 1724, Address: 0x46ec44, Func Offset: 0xd4
	// Line 1723, Address: 0x46ec48, Func Offset: 0xd8
	// Line 1724, Address: 0x46ec4c, Func Offset: 0xdc
	// Line 1729, Address: 0x46ec50, Func Offset: 0xe0
	// Line 1730, Address: 0x46ec54, Func Offset: 0xe4
	// Line 1731, Address: 0x46ec5c, Func Offset: 0xec
	// Line 1732, Address: 0x46ec60, Func Offset: 0xf0
	// Line 1733, Address: 0x46ec6c, Func Offset: 0xfc
	// Line 1735, Address: 0x46ec70, Func Offset: 0x100
	// Line 1739, Address: 0x46ec7c, Func Offset: 0x10c
	// Line 1735, Address: 0x46ec80, Func Offset: 0x110
	// Line 1739, Address: 0x46ec84, Func Offset: 0x114
	// Line 1743, Address: 0x46eca8, Func Offset: 0x138
	// Line 1739, Address: 0x46ecb4, Func Offset: 0x144
	// Line 1743, Address: 0x46ecb8, Func Offset: 0x148
	// Line 1748, Address: 0x46ecbc, Func Offset: 0x14c
	// Line 1749, Address: 0x46ed30, Func Offset: 0x1c0
	// Line 1750, Address: 0x46eda4, Func Offset: 0x234
	// Line 1751, Address: 0x46ee18, Func Offset: 0x2a8
	// Line 1752, Address: 0x46ee8c, Func Offset: 0x31c
	// Line 1766, Address: 0x46eed0, Func Offset: 0x360
	// Line 1752, Address: 0x46eed4, Func Offset: 0x364
	// Line 1758, Address: 0x46eee8, Func Offset: 0x378
	// Line 1754, Address: 0x46eef4, Func Offset: 0x384
	// Line 1758, Address: 0x46eef8, Func Offset: 0x388
	// Line 1759, Address: 0x46ef04, Func Offset: 0x394
	// Line 1760, Address: 0x46ef08, Func Offset: 0x398
	// Line 1754, Address: 0x46ef0c, Func Offset: 0x39c
	// Line 1758, Address: 0x46ef10, Func Offset: 0x3a0
	// Line 1754, Address: 0x46ef1c, Func Offset: 0x3ac
	// Line 1758, Address: 0x46ef20, Func Offset: 0x3b0
	// Line 1759, Address: 0x46ef28, Func Offset: 0x3b8
	// Line 1762, Address: 0x46ef2c, Func Offset: 0x3bc
	// Line 1759, Address: 0x46ef34, Func Offset: 0x3c4
	// Line 1761, Address: 0x46ef38, Func Offset: 0x3c8
	// Line 1759, Address: 0x46ef40, Func Offset: 0x3d0
	// Line 1761, Address: 0x46ef44, Func Offset: 0x3d4
	// Line 1762, Address: 0x46ef48, Func Offset: 0x3d8
	// Line 1760, Address: 0x46ef4c, Func Offset: 0x3dc
	// Line 1762, Address: 0x46ef50, Func Offset: 0x3e0
	// Line 1760, Address: 0x46ef60, Func Offset: 0x3f0
	// Line 1759, Address: 0x46ef68, Func Offset: 0x3f8
	// Line 1760, Address: 0x46ef6c, Func Offset: 0x3fc
	// Line 1762, Address: 0x46ef78, Func Offset: 0x408
	// Line 1780, Address: 0x46ef80, Func Offset: 0x410
	// Line 1771, Address: 0x46ef90, Func Offset: 0x420
	// Line 1780, Address: 0x46ef94, Func Offset: 0x424
	// Line 1771, Address: 0x46efb0, Func Offset: 0x440
	// Line 1778, Address: 0x46efb4, Func Offset: 0x444
	// Line 1780, Address: 0x46efb8, Func Offset: 0x448
	// Line 1772, Address: 0x46efbc, Func Offset: 0x44c
	// Line 1780, Address: 0x46efc0, Func Offset: 0x450
	// Line 1772, Address: 0x46efc4, Func Offset: 0x454
	// Line 1780, Address: 0x46efc8, Func Offset: 0x458
	// Line 1779, Address: 0x46efcc, Func Offset: 0x45c
	// Line 1780, Address: 0x46efd4, Func Offset: 0x464
	// Line 1775, Address: 0x46efdc, Func Offset: 0x46c
	// Line 1780, Address: 0x46efe0, Func Offset: 0x470
	// Line 1782, Address: 0x46f018, Func Offset: 0x4a8
	// Line 1805, Address: 0x46f024, Func Offset: 0x4b4
	// Line 1793, Address: 0x46f02c, Func Offset: 0x4bc
	// Line 1786, Address: 0x46f030, Func Offset: 0x4c0
	// Line 1793, Address: 0x46f034, Func Offset: 0x4c4
	// Line 1805, Address: 0x46f044, Func Offset: 0x4d4
	// Line 1786, Address: 0x46f050, Func Offset: 0x4e0
	// Line 1805, Address: 0x46f058, Func Offset: 0x4e8
	// Line 1785, Address: 0x46f064, Func Offset: 0x4f4
	// Line 1805, Address: 0x46f06c, Func Offset: 0x4fc
	// Line 1792, Address: 0x46f070, Func Offset: 0x500
	// Line 1805, Address: 0x46f074, Func Offset: 0x504
	// Line 1789, Address: 0x46f08c, Func Offset: 0x51c
	// Line 1805, Address: 0x46f090, Func Offset: 0x520
	// Func End, Address: 0x46f0e8, Func Offset: 0x578
}

// blit_scaled__13xFXFastRasterFff10xColor_tag
// Start address: 0x46f0f0
void xFXFastRaster::blit_scaled(float32 u, float32 v, xColor_tag color)
{
	_xFColor fcolor;
	// Line 1675, Address: 0x46f0f0, Func Offset: 0
	// Line 1676, Address: 0x46f0f4, Func Offset: 0x4
	// Line 1675, Address: 0x46f0fc, Func Offset: 0xc
	// Line 1676, Address: 0x46f100, Func Offset: 0x10
	// Line 1683, Address: 0x46f230, Func Offset: 0x140
	// Line 1684, Address: 0x46f23c, Func Offset: 0x14c
	// Func End, Address: 0x46f248, Func Offset: 0x158
}

// blit__13xFXFastRasterFRC6xFRectRC6xFRectRC8_xFColorf
// Start address: 0x46f250
void xFXFastRaster::blit(xFRect& dst_rect, xFRect& src_rect, _xFColor& color, float32 z)
{
	float32 one'352;
	int32 dst_x;
	int32 dst_w;
	int32 dst_y;
	int32 dst_h;
	int32 strip_shift;
	int32 strip_width;
	int32 strip_mask;
	int32 src_width;
	int32 shrinkify;
	int32 sw;
	int32 maxsw;
	int32 left_width;
	int32 right_width;
	int32 center_width;
	int32 center_strips;
	int32 left_strips;
	int32 right_strips;
	uint32 msb;
	uint32 lsb;
	ulong32 stex0;
	int32 swidthpow;
	int32 sheightpow;
	int32 qwords_used;
	<unknown fundamental type (0xa510)>* pkt;
	float32 one;
	int32 r;
	int32 g;
	int32 b;
	int32 a;
	int32 y1;
	float32 uscale;
	float32 vscale;
	float32 s0;
	float32 s1;
	float32 t0;
	float32 t1;
	float32 xsscale;
	int32 x;
	float32 s;
	uint32 uz;
	float32 ds;
	int32 strip;
	// Line 1524, Address: 0x46f250, Func Offset: 0
	// Line 1531, Address: 0x46f254, Func Offset: 0x4
	// Line 1524, Address: 0x46f258, Func Offset: 0x8
	// Line 1531, Address: 0x46f25c, Func Offset: 0xc
	// Line 1524, Address: 0x46f260, Func Offset: 0x10
	// Line 1545, Address: 0x46f264, Func Offset: 0x14
	// Line 1524, Address: 0x46f268, Func Offset: 0x18
	// Line 1531, Address: 0x46f26c, Func Offset: 0x1c
	// Line 1524, Address: 0x46f270, Func Offset: 0x20
	// Line 1532, Address: 0x46f274, Func Offset: 0x24
	// Line 1524, Address: 0x46f278, Func Offset: 0x28
	// Line 1533, Address: 0x46f27c, Func Offset: 0x2c
	// Line 1524, Address: 0x46f280, Func Offset: 0x30
	// Line 1545, Address: 0x46f290, Func Offset: 0x40
	// Line 1524, Address: 0x46f294, Func Offset: 0x44
	// Line 1545, Address: 0x46f298, Func Offset: 0x48
	// Line 1524, Address: 0x46f29c, Func Offset: 0x4c
	// Line 1545, Address: 0x46f2a0, Func Offset: 0x50
	// Line 1524, Address: 0x46f2a4, Func Offset: 0x54
	// Line 1545, Address: 0x46f2b0, Func Offset: 0x60
	// Line 1540, Address: 0x46f2b4, Func Offset: 0x64
	// Line 1541, Address: 0x46f2b8, Func Offset: 0x68
	// Line 1542, Address: 0x46f2bc, Func Offset: 0x6c
	// Line 1531, Address: 0x46f2c0, Func Offset: 0x70
	// Line 1545, Address: 0x46f2cc, Func Offset: 0x7c
	// Line 1532, Address: 0x46f2d0, Func Offset: 0x80
	// Line 1533, Address: 0x46f2dc, Func Offset: 0x8c
	// Line 1546, Address: 0x46f2e0, Func Offset: 0x90
	// Line 1533, Address: 0x46f2e4, Func Offset: 0x94
	// Line 1534, Address: 0x46f2ec, Func Offset: 0x9c
	// Line 1545, Address: 0x46f304, Func Offset: 0xb4
	// Line 1546, Address: 0x46f30c, Func Offset: 0xbc
	// Line 1552, Address: 0x46f318, Func Offset: 0xc8
	// Line 1553, Address: 0x46f328, Func Offset: 0xd8
	// Line 1554, Address: 0x46f348, Func Offset: 0xf8
	// Line 1560, Address: 0x46f354, Func Offset: 0x104
	// Line 1561, Address: 0x46f358, Func Offset: 0x108
	// Line 1562, Address: 0x46f360, Func Offset: 0x110
	// Line 1568, Address: 0x46f364, Func Offset: 0x114
	// Line 1569, Address: 0x46f368, Func Offset: 0x118
	// Line 1568, Address: 0x46f36c, Func Offset: 0x11c
	// Line 1569, Address: 0x46f370, Func Offset: 0x120
	// Line 1570, Address: 0x46f374, Func Offset: 0x124
	// Line 1572, Address: 0x46f37c, Func Offset: 0x12c
	// Line 1581, Address: 0x46f384, Func Offset: 0x134
	// Line 1582, Address: 0x46f388, Func Offset: 0x138
	// Line 1583, Address: 0x46f390, Func Offset: 0x140
	// Line 1582, Address: 0x46f394, Func Offset: 0x144
	// Line 1583, Address: 0x46f398, Func Offset: 0x148
	// Line 1589, Address: 0x46f39c, Func Offset: 0x14c
	// Line 1595, Address: 0x46f3ac, Func Offset: 0x15c
	// Line 1597, Address: 0x46f3b0, Func Offset: 0x160
	// Line 1590, Address: 0x46f3b4, Func Offset: 0x164
	// Line 1595, Address: 0x46f3bc, Func Offset: 0x16c
	// Line 1597, Address: 0x46f3d0, Func Offset: 0x180
	// Line 1590, Address: 0x46f3d4, Func Offset: 0x184
	// Line 1591, Address: 0x46f3dc, Func Offset: 0x18c
	// Line 1592, Address: 0x46f3e4, Func Offset: 0x194
	// Line 1591, Address: 0x46f3ec, Func Offset: 0x19c
	// Line 1592, Address: 0x46f3f4, Func Offset: 0x1a4
	// Line 1591, Address: 0x46f3f8, Func Offset: 0x1a8
	// Line 1592, Address: 0x46f3fc, Func Offset: 0x1ac
	// Line 1597, Address: 0x46f400, Func Offset: 0x1b0
	// Line 1601, Address: 0x46f408, Func Offset: 0x1b8
	// Line 1604, Address: 0x46f418, Func Offset: 0x1c8
	// Line 1609, Address: 0x46f41c, Func Offset: 0x1cc
	// Line 1601, Address: 0x46f424, Func Offset: 0x1d4
	// Line 1597, Address: 0x46f428, Func Offset: 0x1d8
	// Line 1601, Address: 0x46f42c, Func Offset: 0x1dc
	// Line 1604, Address: 0x46f440, Func Offset: 0x1f0
	// Line 1601, Address: 0x46f444, Func Offset: 0x1f4
	// Line 1604, Address: 0x46f448, Func Offset: 0x1f8
	// Line 1601, Address: 0x46f44c, Func Offset: 0x1fc
	// Line 1604, Address: 0x46f450, Func Offset: 0x200
	// Line 1609, Address: 0x46f454, Func Offset: 0x204
	// Line 1610, Address: 0x46f4bc, Func Offset: 0x26c
	// Line 1611, Address: 0x46f524, Func Offset: 0x2d4
	// Line 1612, Address: 0x46f58c, Func Offset: 0x33c
	// Line 1613, Address: 0x46f5f4, Func Offset: 0x3a4
	// Line 1616, Address: 0x46f644, Func Offset: 0x3f4
	// Line 1618, Address: 0x46f648, Func Offset: 0x3f8
	// Line 1620, Address: 0x46f64c, Func Offset: 0x3fc
	// Line 1619, Address: 0x46f650, Func Offset: 0x400
	// Line 1616, Address: 0x46f658, Func Offset: 0x408
	// Line 1622, Address: 0x46f65c, Func Offset: 0x40c
	// Line 1613, Address: 0x46f664, Func Offset: 0x414
	// Line 1618, Address: 0x46f66c, Func Offset: 0x41c
	// Line 1617, Address: 0x46f670, Func Offset: 0x420
	// Line 1618, Address: 0x46f674, Func Offset: 0x424
	// Line 1617, Address: 0x46f680, Func Offset: 0x430
	// Line 1620, Address: 0x46f68c, Func Offset: 0x43c
	// Line 1622, Address: 0x46f690, Func Offset: 0x440
	// Line 1617, Address: 0x46f694, Func Offset: 0x444
	// Line 1628, Address: 0x46f6ac, Func Offset: 0x45c
	// Line 1617, Address: 0x46f6b0, Func Offset: 0x460
	// Line 1618, Address: 0x46f6b4, Func Offset: 0x464
	// Line 1617, Address: 0x46f6b8, Func Offset: 0x468
	// Line 1620, Address: 0x46f6c0, Func Offset: 0x470
	// Line 1619, Address: 0x46f6c4, Func Offset: 0x474
	// Line 1620, Address: 0x46f6cc, Func Offset: 0x47c
	// Line 1621, Address: 0x46f6d0, Func Offset: 0x480
	// Line 1622, Address: 0x46f6d4, Func Offset: 0x484
	// Line 1621, Address: 0x46f6dc, Func Offset: 0x48c
	// Line 1622, Address: 0x46f6e0, Func Offset: 0x490
	// Line 1628, Address: 0x46f6e8, Func Offset: 0x498
	// Line 1621, Address: 0x46f6ec, Func Offset: 0x49c
	// Line 1628, Address: 0x46f6f0, Func Offset: 0x4a0
	// Line 1625, Address: 0x46f6f4, Func Offset: 0x4a4
	// Line 1621, Address: 0x46f6f8, Func Offset: 0x4a8
	// Line 1622, Address: 0x46f6fc, Func Offset: 0x4ac
	// Line 1628, Address: 0x46f704, Func Offset: 0x4b4
	// Line 1629, Address: 0x46f734, Func Offset: 0x4e4
	// Line 1641, Address: 0x46f740, Func Offset: 0x4f0
	// Line 1650, Address: 0x46f744, Func Offset: 0x4f4
	// Line 1642, Address: 0x46f748, Func Offset: 0x4f8
	// Line 1641, Address: 0x46f74c, Func Offset: 0x4fc
	// Line 1650, Address: 0x46f750, Func Offset: 0x500
	// Line 1644, Address: 0x46f75c, Func Offset: 0x50c
	// Line 1650, Address: 0x46f760, Func Offset: 0x510
	// Line 1644, Address: 0x46f790, Func Offset: 0x540
	// Line 1648, Address: 0x46f798, Func Offset: 0x548
	// Line 1650, Address: 0x46f79c, Func Offset: 0x54c
	// Line 1645, Address: 0x46f7a0, Func Offset: 0x550
	// Line 1650, Address: 0x46f7a4, Func Offset: 0x554
	// Line 1645, Address: 0x46f7a8, Func Offset: 0x558
	// Line 1650, Address: 0x46f7ac, Func Offset: 0x55c
	// Line 1649, Address: 0x46f7b8, Func Offset: 0x568
	// Line 1650, Address: 0x46f7c0, Func Offset: 0x570
	// Line 1647, Address: 0x46f7c8, Func Offset: 0x578
	// Line 1650, Address: 0x46f7cc, Func Offset: 0x57c
	// Line 1653, Address: 0x46f810, Func Offset: 0x5c0
	// Line 1672, Address: 0x46f818, Func Offset: 0x5c8
	// Line 1575, Address: 0x46f820, Func Offset: 0x5d0
	// Line 1578, Address: 0x46f828, Func Offset: 0x5d8
	// Line 1672, Address: 0x46f830, Func Offset: 0x5e0
	// Line 1632, Address: 0x46f834, Func Offset: 0x5e4
	// Line 1634, Address: 0x46f838, Func Offset: 0x5e8
	// Line 1672, Address: 0x46f83c, Func Offset: 0x5ec
	// Line 1632, Address: 0x46f840, Func Offset: 0x5f0
	// Line 1672, Address: 0x46f848, Func Offset: 0x5f8
	// Line 1632, Address: 0x46f84c, Func Offset: 0x5fc
	// Line 1631, Address: 0x46f860, Func Offset: 0x610
	// Line 1672, Address: 0x46f864, Func Offset: 0x614
	// Line 1631, Address: 0x46f86c, Func Offset: 0x61c
	// Line 1636, Address: 0x46f870, Func Offset: 0x620
	// Line 1672, Address: 0x46f874, Func Offset: 0x624
	// Line 1636, Address: 0x46f87c, Func Offset: 0x62c
	// Line 1632, Address: 0x46f88c, Func Offset: 0x63c
	// Line 1672, Address: 0x46f890, Func Offset: 0x640
	// Line 1634, Address: 0x46f8b0, Func Offset: 0x660
	// Line 1672, Address: 0x46f8b4, Func Offset: 0x664
	// Line 1635, Address: 0x46f8b8, Func Offset: 0x668
	// Line 1634, Address: 0x46f8bc, Func Offset: 0x66c
	// Line 1672, Address: 0x46f8c4, Func Offset: 0x674
	// Line 1656, Address: 0x46f8e4, Func Offset: 0x694
	// Line 1672, Address: 0x46f900, Func Offset: 0x6b0
	// Line 1660, Address: 0x46f908, Func Offset: 0x6b8
	// Line 1672, Address: 0x46f90c, Func Offset: 0x6bc
	// Line 1660, Address: 0x46f910, Func Offset: 0x6c0
	// Line 1672, Address: 0x46f91c, Func Offset: 0x6cc
	// Line 1660, Address: 0x46f920, Func Offset: 0x6d0
	// Line 1672, Address: 0x46f924, Func Offset: 0x6d4
	// Line 1655, Address: 0x46f92c, Func Offset: 0x6dc
	// Line 1672, Address: 0x46f930, Func Offset: 0x6e0
	// Line 1656, Address: 0x46f938, Func Offset: 0x6e8
	// Line 1672, Address: 0x46f93c, Func Offset: 0x6ec
	// Line 1655, Address: 0x46f94c, Func Offset: 0x6fc
	// Line 1672, Address: 0x46f950, Func Offset: 0x700
	// Line 1659, Address: 0x46f954, Func Offset: 0x704
	// Line 1672, Address: 0x46f958, Func Offset: 0x708
	// Func End, Address: 0x46f9b0, Func Offset: 0x760
}

// clear_z__13xFXFastRasterFP8RwRasterUi
// Start address: 0x46f9b0
void xFXFastRaster::clear_z(RwRaster* dst, uint32 value)
{
	sceGsZbuf& zbuf;
	int32 byte_depth;
	int32 buffer_size;
	int32 pages;
	int32 total_ysize;
	int32 strips;
	int32 ysize;
	int32 total_xsize;
	uint8 dithering;
	int32 qwords_used;
	<unknown fundamental type (0xa510)>* pkt;
	int32 y1;
	int32 x;
	int32 endx;
	// Line 1423, Address: 0x46f9b0, Func Offset: 0
	// Line 1424, Address: 0x46f9c0, Func Offset: 0x10
	// Line 1423, Address: 0x46f9c4, Func Offset: 0x14
	// Line 1427, Address: 0x46f9e4, Func Offset: 0x34
	// Line 1430, Address: 0x46f9fc, Func Offset: 0x4c
	// Line 1429, Address: 0x46fa00, Func Offset: 0x50
	// Line 1431, Address: 0x46fa04, Func Offset: 0x54
	// Line 1432, Address: 0x46fa08, Func Offset: 0x58
	// Line 1435, Address: 0x46fa10, Func Offset: 0x60
	// Line 1440, Address: 0x46fa14, Func Offset: 0x64
	// Line 1442, Address: 0x46fa34, Func Offset: 0x84
	// Line 1447, Address: 0x46fa44, Func Offset: 0x94
	// Line 1449, Address: 0x46fa64, Func Offset: 0xb4
	// Line 1450, Address: 0x46fa78, Func Offset: 0xc8
	// Line 1463, Address: 0x46fa8c, Func Offset: 0xdc
	// Line 1464, Address: 0x46fa94, Func Offset: 0xe4
	// Line 1466, Address: 0x46fa98, Func Offset: 0xe8
	// Line 1470, Address: 0x46faa0, Func Offset: 0xf0
	// Line 1466, Address: 0x46faa4, Func Offset: 0xf4
	// Line 1470, Address: 0x46faa8, Func Offset: 0xf8
	// Line 1473, Address: 0x46fac4, Func Offset: 0x114
	// Line 1470, Address: 0x46fac8, Func Offset: 0x118
	// Line 1473, Address: 0x46fad4, Func Offset: 0x124
	// Line 1479, Address: 0x46fadc, Func Offset: 0x12c
	// Line 1483, Address: 0x46faec, Func Offset: 0x13c
	// Line 1496, Address: 0x46fb20, Func Offset: 0x170
	// Line 1483, Address: 0x46fb24, Func Offset: 0x174
	// Line 1485, Address: 0x46fb30, Func Offset: 0x180
	// Line 1483, Address: 0x46fb34, Func Offset: 0x184
	// Line 1488, Address: 0x46fb40, Func Offset: 0x190
	// Line 1483, Address: 0x46fb44, Func Offset: 0x194
	// Line 1485, Address: 0x46fb48, Func Offset: 0x198
	// Line 1483, Address: 0x46fb4c, Func Offset: 0x19c
	// Line 1485, Address: 0x46fb50, Func Offset: 0x1a0
	// Line 1488, Address: 0x46fb54, Func Offset: 0x1a4
	// Line 1485, Address: 0x46fb58, Func Offset: 0x1a8
	// Line 1502, Address: 0x46fb74, Func Offset: 0x1c4
	// Line 1485, Address: 0x46fb78, Func Offset: 0x1c8
	// Line 1494, Address: 0x46fb7c, Func Offset: 0x1cc
	// Line 1485, Address: 0x46fb80, Func Offset: 0x1d0
	// Line 1492, Address: 0x46fb84, Func Offset: 0x1d4
	// Line 1485, Address: 0x46fb88, Func Offset: 0x1d8
	// Line 1488, Address: 0x46fb8c, Func Offset: 0x1dc
	// Line 1492, Address: 0x46fb94, Func Offset: 0x1e4
	// Line 1495, Address: 0x46fb9c, Func Offset: 0x1ec
	// Line 1502, Address: 0x46fba0, Func Offset: 0x1f0
	// Line 1499, Address: 0x46fbc4, Func Offset: 0x214
	// Line 1502, Address: 0x46fbcc, Func Offset: 0x21c
	// Line 1501, Address: 0x46fbdc, Func Offset: 0x22c
	// Line 1502, Address: 0x46fbe4, Func Offset: 0x234
	// Line 1505, Address: 0x46fc00, Func Offset: 0x250
	// Line 1506, Address: 0x46fc08, Func Offset: 0x258
	// Line 1507, Address: 0x46fc0c, Func Offset: 0x25c
	// Line 1505, Address: 0x46fc10, Func Offset: 0x260
	// Line 1506, Address: 0x46fc18, Func Offset: 0x268
	// Line 1507, Address: 0x46fc4c, Func Offset: 0x29c
	// Line 1509, Address: 0x46fc54, Func Offset: 0x2a4
	// Line 1515, Address: 0x46fc5c, Func Offset: 0x2ac
	// Line 1452, Address: 0x46fc64, Func Offset: 0x2b4
	// Line 1460, Address: 0x46fc68, Func Offset: 0x2b8
	// Line 1515, Address: 0x46fc6c, Func Offset: 0x2bc
	// Line 1453, Address: 0x46fc70, Func Offset: 0x2c0
	// Line 1461, Address: 0x46fc74, Func Offset: 0x2c4
	// Line 1515, Address: 0x46fc78, Func Offset: 0x2c8
	// Line 1452, Address: 0x46fc7c, Func Offset: 0x2cc
	// Line 1457, Address: 0x46fc80, Func Offset: 0x2d0
	// Line 1515, Address: 0x46fc84, Func Offset: 0x2d4
	// Line 1474, Address: 0x46fc98, Func Offset: 0x2e8
	// Line 1515, Address: 0x46fca0, Func Offset: 0x2f0
	// Line 1508, Address: 0x46fcb4, Func Offset: 0x304
	// Line 1515, Address: 0x46fcb8, Func Offset: 0x308
	// Line 1510, Address: 0x46fcc8, Func Offset: 0x318
	// Line 1515, Address: 0x46fccc, Func Offset: 0x31c
	// Func End, Address: 0x46fd0c, Func Offset: 0x35c
}

// fill__13xFXFastRasterFRC6RwRect10xColor_tagf
// Start address: 0x46fd10
void fill(RwRect& rect, xColor_tag color, float32 z)
{
	int32 strips;
	int32 qwords_used;
	int32 actual_endx;
	int32 dx;
	int32 endx;
	<unknown fundamental type (0xa510)>* pkt;
	int32 y0;
	int32 y1;
	int32 x;
	uint32 uz;
	// Line 1366, Address: 0x46fd10, Func Offset: 0
	// Line 1372, Address: 0x46fd4c, Func Offset: 0x3c
	// Line 1366, Address: 0x46fd50, Func Offset: 0x40
	// Line 1372, Address: 0x46fd5c, Func Offset: 0x4c
	// Line 1376, Address: 0x46fd6c, Func Offset: 0x5c
	// Line 1379, Address: 0x46fd78, Func Offset: 0x68
	// Line 1378, Address: 0x46fd84, Func Offset: 0x74
	// Line 1380, Address: 0x46fd8c, Func Offset: 0x7c
	// Line 1381, Address: 0x46fd98, Func Offset: 0x88
	// Line 1382, Address: 0x46fda4, Func Offset: 0x94
	// Line 1384, Address: 0x46fda8, Func Offset: 0x98
	// Line 1396, Address: 0x46fdb4, Func Offset: 0xa4
	// Line 1388, Address: 0x46fdb8, Func Offset: 0xa8
	// Line 1396, Address: 0x46fdbc, Func Offset: 0xac
	// Line 1388, Address: 0x46fdc0, Func Offset: 0xb0
	// Line 1396, Address: 0x46fdc4, Func Offset: 0xb4
	// Line 1388, Address: 0x46fdc8, Func Offset: 0xb8
	// Line 1396, Address: 0x46fdcc, Func Offset: 0xbc
	// Line 1388, Address: 0x46fdd0, Func Offset: 0xc0
	// Line 1396, Address: 0x46fdd4, Func Offset: 0xc4
	// Line 1388, Address: 0x46fdd8, Func Offset: 0xc8
	// Line 1396, Address: 0x46fddc, Func Offset: 0xcc
	// Line 1388, Address: 0x46fde0, Func Offset: 0xd0
	// Line 1396, Address: 0x46fde4, Func Offset: 0xd4
	// Line 1388, Address: 0x46fdf4, Func Offset: 0xe4
	// Line 1384, Address: 0x46fdf8, Func Offset: 0xe8
	// Line 1388, Address: 0x46fdfc, Func Offset: 0xec
	// Line 1392, Address: 0x46fe00, Func Offset: 0xf0
	// Line 1388, Address: 0x46fe04, Func Offset: 0xf4
	// Line 1392, Address: 0x46fe08, Func Offset: 0xf8
	// Line 1388, Address: 0x46fe0c, Func Offset: 0xfc
	// Line 1396, Address: 0x46fe10, Func Offset: 0x100
	// Line 1392, Address: 0x46fe14, Func Offset: 0x104
	// Line 1396, Address: 0x46fe18, Func Offset: 0x108
	// Line 1388, Address: 0x46fe1c, Func Offset: 0x10c
	// Line 1392, Address: 0x46fe20, Func Offset: 0x110
	// Line 1396, Address: 0x46fe24, Func Offset: 0x114
	// Line 1398, Address: 0x46fe50, Func Offset: 0x140
	// Line 1396, Address: 0x46fe54, Func Offset: 0x144
	// Line 1402, Address: 0x46fe68, Func Offset: 0x158
	// Line 1401, Address: 0x46fe6c, Func Offset: 0x15c
	// Line 1402, Address: 0x46fe70, Func Offset: 0x160
	// Line 1398, Address: 0x46fe74, Func Offset: 0x164
	// Line 1402, Address: 0x46fe78, Func Offset: 0x168
	// Line 1398, Address: 0x46fe7c, Func Offset: 0x16c
	// Line 1402, Address: 0x46fe84, Func Offset: 0x174
	// Line 1408, Address: 0x46feb4, Func Offset: 0x1a4
	// Line 1405, Address: 0x46feec, Func Offset: 0x1dc
	// Line 1408, Address: 0x46fef4, Func Offset: 0x1e4
	// Line 1407, Address: 0x46ff00, Func Offset: 0x1f0
	// Line 1408, Address: 0x46ff08, Func Offset: 0x1f8
	// Line 1409, Address: 0x46ff30, Func Offset: 0x220
	// Line 1420, Address: 0x46ff3c, Func Offset: 0x22c
	// Line 1412, Address: 0x46ff44, Func Offset: 0x234
	// Line 1414, Address: 0x46ff4c, Func Offset: 0x23c
	// Line 1412, Address: 0x46ff54, Func Offset: 0x244
	// Line 1414, Address: 0x46ff5c, Func Offset: 0x24c
	// Line 1412, Address: 0x46ff60, Func Offset: 0x250
	// Line 1420, Address: 0x46ff68, Func Offset: 0x258
	// Line 1414, Address: 0x46ff6c, Func Offset: 0x25c
	// Line 1420, Address: 0x46ff74, Func Offset: 0x264
	// Line 1414, Address: 0x46ff78, Func Offset: 0x268
	// Line 1420, Address: 0x46ff7c, Func Offset: 0x26c
	// Line 1412, Address: 0x46ff80, Func Offset: 0x270
	// Line 1420, Address: 0x46ff84, Func Offset: 0x274
	// Func End, Address: 0x46ffd0, Func Offset: 0x2c0
}

// fill__13xFXFastRasterF10xColor_tagb
// Start address: 0x46ffd0
void xFXFastRaster::fill(xColor_tag color, uint8 alpha_blend)
{
	// Line 1359, Address: 0x46ffd0, Func Offset: 0
	// Line 1360, Address: 0x46ffd8, Func Offset: 0x8
	// Line 1361, Address: 0x46ffe0, Func Offset: 0x10
	// Func End, Address: 0x46ffec, Func Offset: 0x1c
}

// fill__13xFXFastRasterFP8RwRaster10xColor_tagb
// Start address: 0x46fff0
void fill(RwRaster* dst, xColor_tag color, uint8 alpha_blend)
{
	int32 strips;
	int32 qwords_used;
	int32 actual_endx;
	int32 dx;
	int32 endx;
	<unknown fundamental type (0xa510)>* pkt;
	int32 y1;
	int32 x;
	// Line 1303, Address: 0x46fff0, Func Offset: 0
	// Line 1309, Address: 0x470038, Func Offset: 0x48
	// Line 1315, Address: 0x47004c, Func Offset: 0x5c
	// Line 1313, Address: 0x470050, Func Offset: 0x60
	// Line 1316, Address: 0x470054, Func Offset: 0x64
	// Line 1317, Address: 0x47005c, Func Offset: 0x6c
	// Line 1318, Address: 0x470060, Func Offset: 0x70
	// Line 1319, Address: 0x47006c, Func Offset: 0x7c
	// Line 1321, Address: 0x470070, Func Offset: 0x80
	// Line 1329, Address: 0x47007c, Func Offset: 0x8c
	// Line 1325, Address: 0x470080, Func Offset: 0x90
	// Line 1329, Address: 0x470084, Func Offset: 0x94
	// Line 1325, Address: 0x470088, Func Offset: 0x98
	// Line 1329, Address: 0x47008c, Func Offset: 0x9c
	// Line 1325, Address: 0x470090, Func Offset: 0xa0
	// Line 1333, Address: 0x470094, Func Offset: 0xa4
	// Line 1325, Address: 0x470098, Func Offset: 0xa8
	// Line 1333, Address: 0x47009c, Func Offset: 0xac
	// Line 1325, Address: 0x4700a0, Func Offset: 0xb0
	// Line 1333, Address: 0x4700a4, Func Offset: 0xb4
	// Line 1325, Address: 0x4700b0, Func Offset: 0xc0
	// Line 1333, Address: 0x4700b4, Func Offset: 0xc4
	// Line 1325, Address: 0x4700b8, Func Offset: 0xc8
	// Line 1333, Address: 0x4700bc, Func Offset: 0xcc
	// Line 1325, Address: 0x4700c0, Func Offset: 0xd0
	// Line 1333, Address: 0x4700c4, Func Offset: 0xd4
	// Line 1321, Address: 0x4700d4, Func Offset: 0xe4
	// Line 1325, Address: 0x4700d8, Func Offset: 0xe8
	// Line 1329, Address: 0x4700e0, Func Offset: 0xf0
	// Line 1333, Address: 0x4700e4, Func Offset: 0xf4
	// Line 1329, Address: 0x4700e8, Func Offset: 0xf8
	// Line 1333, Address: 0x4700ec, Func Offset: 0xfc
	// Line 1325, Address: 0x4700f0, Func Offset: 0x100
	// Line 1333, Address: 0x4700f4, Func Offset: 0x104
	// Line 1329, Address: 0x4700f8, Func Offset: 0x108
	// Line 1333, Address: 0x4700fc, Func Offset: 0x10c
	// Line 1344, Address: 0x470120, Func Offset: 0x130
	// Line 1333, Address: 0x470124, Func Offset: 0x134
	// Line 1338, Address: 0x47012c, Func Offset: 0x13c
	// Line 1333, Address: 0x470130, Func Offset: 0x140
	// Line 1335, Address: 0x470138, Func Offset: 0x148
	// Line 1344, Address: 0x47013c, Func Offset: 0x14c
	// Line 1341, Address: 0x47015c, Func Offset: 0x16c
	// Line 1344, Address: 0x470160, Func Offset: 0x170
	// Line 1341, Address: 0x470164, Func Offset: 0x174
	// Line 1343, Address: 0x470168, Func Offset: 0x178
	// Line 1344, Address: 0x470170, Func Offset: 0x180
	// Line 1345, Address: 0x470190, Func Offset: 0x1a0
	// Line 1356, Address: 0x47019c, Func Offset: 0x1ac
	// Line 1350, Address: 0x4701a4, Func Offset: 0x1b4
	// Line 1348, Address: 0x4701ac, Func Offset: 0x1bc
	// Line 1350, Address: 0x4701b0, Func Offset: 0x1c0
	// Line 1348, Address: 0x4701b4, Func Offset: 0x1c4
	// Line 1350, Address: 0x4701b8, Func Offset: 0x1c8
	// Line 1356, Address: 0x4701c0, Func Offset: 0x1d0
	// Func End, Address: 0x47020c, Func Offset: 0x21c
}

// set_scissor__13xFXFastRasterFiiii
// Start address: 0x470210
void xFXFastRaster::set_scissor(int32 scax0, int32 scax1, int32 scay0, int32 scay1)
{
	// Line 1290, Address: 0x470210, Func Offset: 0
	// Line 1292, Address: 0x470238, Func Offset: 0x28
	// Line 1295, Address: 0x470244, Func Offset: 0x34
	// Line 1294, Address: 0x470258, Func Offset: 0x48
	// Line 1295, Address: 0x47025c, Func Offset: 0x4c
	// Line 1294, Address: 0x470280, Func Offset: 0x70
	// Line 1295, Address: 0x470298, Func Offset: 0x88
	// Line 1294, Address: 0x4702a0, Func Offset: 0x90
	// Line 1298, Address: 0x4702a4, Func Offset: 0x94
	// Line 1295, Address: 0x4702a8, Func Offset: 0x98
	// Line 1298, Address: 0x4702ac, Func Offset: 0x9c
	// Line 1299, Address: 0x4702b0, Func Offset: 0xa0
	// Func End, Address: 0x4702cc, Func Offset: 0xbc
}

// set_clamp__13xFXFastRasterFiiiiii
// Start address: 0x4702d0
void xFXFastRaster::set_clamp(int32 wms, int32 wmt, int32 minu, int32 maxu, int32 minv, int32 maxv)
{
	// Line 1275, Address: 0x4702d0, Func Offset: 0
	// Line 1278, Address: 0x4702d4, Func Offset: 0x4
	// Line 1275, Address: 0x4702ec, Func Offset: 0x1c
	// Line 1278, Address: 0x4702f0, Func Offset: 0x20
	// Line 1280, Address: 0x4702fc, Func Offset: 0x2c
	// Line 1278, Address: 0x470300, Func Offset: 0x30
	// Line 1280, Address: 0x470330, Func Offset: 0x60
	// Line 1278, Address: 0x470334, Func Offset: 0x64
	// Line 1280, Address: 0x470338, Func Offset: 0x68
	// Line 1282, Address: 0x470340, Func Offset: 0x70
	// Line 1283, Address: 0x47035c, Func Offset: 0x8c
	// Line 1282, Address: 0x470360, Func Offset: 0x90
	// Line 1283, Address: 0x470364, Func Offset: 0x94
	// Line 1286, Address: 0x470368, Func Offset: 0x98
	// Line 1283, Address: 0x47036c, Func Offset: 0x9c
	// Line 1286, Address: 0x470374, Func Offset: 0xa4
	// Line 1287, Address: 0x470378, Func Offset: 0xa8
	// Func End, Address: 0x470384, Func Offset: 0xb4
}

// set_prmode__13xFXFastRasterFbUi
// Start address: 0x470390
void xFXFastRaster::set_prmode(uint8 prmodecont, uint32 prmode)
{
	// Line 1261, Address: 0x470390, Func Offset: 0
	// Line 1264, Address: 0x4703a8, Func Offset: 0x18
	// Line 1266, Address: 0x4703b4, Func Offset: 0x24
	// Line 1268, Address: 0x4703c0, Func Offset: 0x30
	// Line 1266, Address: 0x4703c4, Func Offset: 0x34
	// Line 1267, Address: 0x4703d0, Func Offset: 0x40
	// Line 1266, Address: 0x4703d4, Func Offset: 0x44
	// Line 1267, Address: 0x4703d8, Func Offset: 0x48
	// Line 1268, Address: 0x4703dc, Func Offset: 0x4c
	// Line 1266, Address: 0x4703e4, Func Offset: 0x54
	// Line 1267, Address: 0x4703e8, Func Offset: 0x58
	// Line 1268, Address: 0x4703ec, Func Offset: 0x5c
	// Line 1267, Address: 0x4703f0, Func Offset: 0x60
	// Line 1271, Address: 0x4703f4, Func Offset: 0x64
	// Line 1268, Address: 0x4703f8, Func Offset: 0x68
	// Line 1271, Address: 0x4703fc, Func Offset: 0x6c
	// Line 1272, Address: 0x470400, Func Offset: 0x70
	// Func End, Address: 0x470414, Func Offset: 0x84
}

// set_texa__13xFXFastRasterFiii
// Start address: 0x470420
void xFXFastRaster::set_texa(int32 ta0, int32 aem, int32 ta1)
{
	// Line 1248, Address: 0x470420, Func Offset: 0
	// Line 1251, Address: 0x470440, Func Offset: 0x20
	// Line 1254, Address: 0x47044c, Func Offset: 0x2c
	// Line 1253, Address: 0x470460, Func Offset: 0x40
	// Line 1254, Address: 0x470464, Func Offset: 0x44
	// Line 1253, Address: 0x47046c, Func Offset: 0x4c
	// Line 1254, Address: 0x470470, Func Offset: 0x50
	// Line 1253, Address: 0x470474, Func Offset: 0x54
	// Line 1254, Address: 0x470478, Func Offset: 0x58
	// Line 1253, Address: 0x47047c, Func Offset: 0x5c
	// Line 1254, Address: 0x470480, Func Offset: 0x60
	// Line 1253, Address: 0x470484, Func Offset: 0x64
	// Line 1254, Address: 0x47048c, Func Offset: 0x6c
	// Line 1253, Address: 0x470490, Func Offset: 0x70
	// Line 1254, Address: 0x470494, Func Offset: 0x74
	// Line 1253, Address: 0x470498, Func Offset: 0x78
	// Line 1257, Address: 0x47049c, Func Offset: 0x7c
	// Line 1254, Address: 0x4704a0, Func Offset: 0x80
	// Line 1257, Address: 0x4704a4, Func Offset: 0x84
	// Line 1258, Address: 0x4704a8, Func Offset: 0x88
	// Func End, Address: 0x4704c0, Func Offset: 0xa0
}

// set_blend_mode__13xFXFastRasterFQ213xFXFastRaster10blend_modef
// Start address: 0x4704c0
void set_blend_mode(blend_mode mode, float32 fixed_alpha)
{
	int32 func[12];
	// Line 1244, Address: 0x4704c0, Func Offset: 0
	// Func End, Address: 0x470548, Func Offset: 0x88
}

// set_test__13xFXFastRasterFUi
// Start address: 0x470550
void xFXFastRaster::set_test(uint32 test)
{
	// Line 1231, Address: 0x470550, Func Offset: 0
	// Line 1233, Address: 0x470554, Func Offset: 0x4
	// Line 1231, Address: 0x470558, Func Offset: 0x8
	// Line 1233, Address: 0x470564, Func Offset: 0x14
	// Line 1235, Address: 0x47056c, Func Offset: 0x1c
	// Line 1236, Address: 0x470570, Func Offset: 0x20
	// Line 1235, Address: 0x470574, Func Offset: 0x24
	// Line 1236, Address: 0x470588, Func Offset: 0x38
	// Line 1235, Address: 0x470590, Func Offset: 0x40
	// Line 1236, Address: 0x470594, Func Offset: 0x44
	// Line 1235, Address: 0x470598, Func Offset: 0x48
	// Line 1239, Address: 0x47059c, Func Offset: 0x4c
	// Line 1236, Address: 0x4705a0, Func Offset: 0x50
	// Line 1239, Address: 0x4705a4, Func Offset: 0x54
	// Line 1240, Address: 0x4705a8, Func Offset: 0x58
	// Func End, Address: 0x4705b8, Func Offset: 0x68
}

// get_full_blend_mode__13xFXFastRasterFv
// Start address: 0x4705c0
uint32 xFXFastRaster::get_full_blend_mode()
{
	uint32 full_mode;
	// Line 1224, Address: 0x4705c0, Func Offset: 0
	// Line 1226, Address: 0x4705c4, Func Offset: 0x4
	// Line 1224, Address: 0x4705c8, Func Offset: 0x8
	// Line 1226, Address: 0x4705cc, Func Offset: 0xc
	// Line 1227, Address: 0x4705d4, Func Offset: 0x14
	// Line 1228, Address: 0x4705d8, Func Offset: 0x18
	// Func End, Address: 0x4705e4, Func Offset: 0x24
}

// set_full_blend_mode__13xFXFastRasterFUi
// Start address: 0x4705f0
void xFXFastRaster::set_full_blend_mode(uint32 full_mode)
{
	// Line 1220, Address: 0x4705f4, Func Offset: 0x4
	// Func End, Address: 0x4705fc, Func Offset: 0xc
}

// texflush__13xFXFastRasterFv
// Start address: 0x470600
void xFXFastRaster::texflush()
{
	// Line 1160, Address: 0x470600, Func Offset: 0
	// Line 1163, Address: 0x470604, Func Offset: 0x4
	// Line 1160, Address: 0x470608, Func Offset: 0x8
	// Line 1163, Address: 0x47060c, Func Offset: 0xc
	// Line 1165, Address: 0x470614, Func Offset: 0x14
	// Line 1166, Address: 0x470630, Func Offset: 0x30
	// Line 1165, Address: 0x47063c, Func Offset: 0x3c
	// Line 1169, Address: 0x470640, Func Offset: 0x40
	// Line 1166, Address: 0x470644, Func Offset: 0x44
	// Line 1169, Address: 0x470648, Func Offset: 0x48
	// Line 1170, Address: 0x47064c, Func Offset: 0x4c
	// Func End, Address: 0x470658, Func Offset: 0x58
}

// set_test_cached__13xFXFastRasterFUi
// Start address: 0x470660
void xFXFastRaster::set_test_cached(uint32 test)
{
	// Line 1137, Address: 0x470660, Func Offset: 0
	// Line 1138, Address: 0x470670, Func Offset: 0x10
	// Line 1141, Address: 0x470674, Func Offset: 0x14
	// Line 1143, Address: 0x470680, Func Offset: 0x20
	// Line 1144, Address: 0x470684, Func Offset: 0x24
	// Line 1143, Address: 0x470688, Func Offset: 0x28
	// Line 1144, Address: 0x47069c, Func Offset: 0x3c
	// Line 1143, Address: 0x4706a4, Func Offset: 0x44
	// Line 1144, Address: 0x4706a8, Func Offset: 0x48
	// Line 1143, Address: 0x4706ac, Func Offset: 0x4c
	// Line 1147, Address: 0x4706b0, Func Offset: 0x50
	// Line 1144, Address: 0x4706b4, Func Offset: 0x54
	// Line 1147, Address: 0x4706b8, Func Offset: 0x58
	// Line 1148, Address: 0x4706bc, Func Offset: 0x5c
	// Func End, Address: 0x4706cc, Func Offset: 0x6c
}

// set_destination__13xFXFastRasterFP8RwRasterUi
// Start address: 0x4706d0
void xFXFastRaster::set_destination(RwRaster* dst, uint32 fbmsk)
{
	uint32 msb;
	uint32 lsb;
	uint32 daddr;
	uint32 dwidth;
	uint32 dformat;
	// Line 1112, Address: 0x4706d0, Func Offset: 0
	// Line 1119, Address: 0x4706f0, Func Offset: 0x20
	// Line 1112, Address: 0x4706f4, Func Offset: 0x24
	// Line 1119, Address: 0x4706f8, Func Offset: 0x28
	// Line 1114, Address: 0x4706fc, Func Offset: 0x2c
	// Line 1115, Address: 0x470700, Func Offset: 0x30
	// Line 1119, Address: 0x470704, Func Offset: 0x34
	// Line 1126, Address: 0x470710, Func Offset: 0x40
	// Line 1121, Address: 0x470718, Func Offset: 0x48
	// Line 1120, Address: 0x47071c, Func Offset: 0x4c
	// Line 1121, Address: 0x470720, Func Offset: 0x50
	// Line 1120, Address: 0x470724, Func Offset: 0x54
	// Line 1122, Address: 0x470728, Func Offset: 0x58
	// Line 1126, Address: 0x47072c, Func Offset: 0x5c
	// Line 1129, Address: 0x470734, Func Offset: 0x64
	// Line 1128, Address: 0x470748, Func Offset: 0x78
	// Line 1129, Address: 0x47074c, Func Offset: 0x7c
	// Line 1128, Address: 0x470758, Func Offset: 0x88
	// Line 1129, Address: 0x47075c, Func Offset: 0x8c
	// Line 1128, Address: 0x470774, Func Offset: 0xa4
	// Line 1129, Address: 0x470788, Func Offset: 0xb8
	// Line 1128, Address: 0x47078c, Func Offset: 0xbc
	// Line 1129, Address: 0x470790, Func Offset: 0xc0
	// Line 1130, Address: 0x470798, Func Offset: 0xc8
	// Line 1133, Address: 0x4707a0, Func Offset: 0xd0
	// Line 1130, Address: 0x4707a4, Func Offset: 0xd4
	// Line 1133, Address: 0x4707d4, Func Offset: 0x104
	// Line 1134, Address: 0x4707d8, Func Offset: 0x108
	// Func End, Address: 0x4707f8, Func Offset: 0x128
}

// set_source__13xFXFastRasterFP8RwRasterQ213xFXFastRaster8tcc_typeQ213xFXFastRaster8tfx_typeQ213xFXFastRaster11filter_type
// Start address: 0x470800
void xFXFastRaster::set_source(RwRaster* src, tcc_type tcc, tfx_type tfx, filter_type filter)
{
	uint32 msb;
	uint32 lsb;
	ulong32 stex0;
	// Line 1075, Address: 0x470800, Func Offset: 0
	// Line 1081, Address: 0x470828, Func Offset: 0x28
	// Line 1077, Address: 0x470830, Func Offset: 0x30
	// Line 1081, Address: 0x470834, Func Offset: 0x34
	// Line 1082, Address: 0x470840, Func Offset: 0x40
	// Line 1085, Address: 0x470844, Func Offset: 0x44
	// Line 1082, Address: 0x470848, Func Offset: 0x48
	// Line 1085, Address: 0x470850, Func Offset: 0x50
	// Line 1087, Address: 0x470858, Func Offset: 0x58
	// Line 1088, Address: 0x47085c, Func Offset: 0x5c
	// Line 1087, Address: 0x470860, Func Offset: 0x60
	// Line 1088, Address: 0x470864, Func Offset: 0x64
	// Line 1087, Address: 0x470868, Func Offset: 0x68
	// Line 1088, Address: 0x47086c, Func Offset: 0x6c
	// Line 1087, Address: 0x470870, Func Offset: 0x70
	// Line 1088, Address: 0x470884, Func Offset: 0x84
	// Line 1090, Address: 0x470888, Func Offset: 0x88
	// Line 1092, Address: 0x470894, Func Offset: 0x94
	// Line 1093, Address: 0x470898, Func Offset: 0x98
	// Line 1092, Address: 0x47089c, Func Offset: 0x9c
	// Line 1093, Address: 0x4708a0, Func Offset: 0xa0
	// Line 1092, Address: 0x4708a4, Func Offset: 0xa4
	// Line 1093, Address: 0x4708a8, Func Offset: 0xa8
	// Line 1092, Address: 0x4708ac, Func Offset: 0xac
	// Line 1093, Address: 0x4708c0, Func Offset: 0xc0
	// Line 1098, Address: 0x4708c4, Func Offset: 0xc4
	// Line 1100, Address: 0x4708d0, Func Offset: 0xd0
	// Line 1104, Address: 0x4708f4, Func Offset: 0xf4
	// Line 1105, Address: 0x4708f8, Func Offset: 0xf8
	// Line 1104, Address: 0x4708fc, Func Offset: 0xfc
	// Line 1105, Address: 0x470900, Func Offset: 0x100
	// Line 1103, Address: 0x470904, Func Offset: 0x104
	// Line 1100, Address: 0x470908, Func Offset: 0x108
	// Line 1105, Address: 0x47090c, Func Offset: 0x10c
	// Line 1103, Address: 0x470914, Func Offset: 0x114
	// Line 1105, Address: 0x470918, Func Offset: 0x118
	// Line 1103, Address: 0x47091c, Func Offset: 0x11c
	// Line 1105, Address: 0x470920, Func Offset: 0x120
	// Line 1108, Address: 0x470924, Func Offset: 0x124
	// Line 1103, Address: 0x470928, Func Offset: 0x128
	// Line 1104, Address: 0x470958, Func Offset: 0x158
	// Line 1105, Address: 0x47095c, Func Offset: 0x15c
	// Line 1108, Address: 0x470960, Func Offset: 0x160
	// Line 1109, Address: 0x470964, Func Offset: 0x164
	// Func End, Address: 0x470984, Func Offset: 0x184
}

// end_render__13xFXFastRasterFv
// Start address: 0x470990
void xFXFastRaster::end_render()
{
	uint32 oldtest;
	RwCamera* cam;
	int32 qwords_used;
	<unknown fundamental type (0xa510)>* pkt;
	uint32 alpha_1;
	// Line 1045, Address: 0x470990, Func Offset: 0
	// Line 1047, Address: 0x470994, Func Offset: 0x4
	// Line 1045, Address: 0x470998, Func Offset: 0x8
	// Line 1047, Address: 0x4709b0, Func Offset: 0x20
	// Line 1046, Address: 0x4709b4, Func Offset: 0x24
	// Line 1048, Address: 0x4709b8, Func Offset: 0x28
	// Line 1049, Address: 0x4709d8, Func Offset: 0x48
	// Line 1053, Address: 0x4709f8, Func Offset: 0x68
	// Line 1054, Address: 0x470a04, Func Offset: 0x74
	// Line 1055, Address: 0x470a08, Func Offset: 0x78
	// Line 1057, Address: 0x470a14, Func Offset: 0x84
	// Line 1061, Address: 0x470a18, Func Offset: 0x88
	// Line 1057, Address: 0x470a1c, Func Offset: 0x8c
	// Line 1061, Address: 0x470a20, Func Offset: 0x90
	// Line 1055, Address: 0x470a28, Func Offset: 0x98
	// Line 1061, Address: 0x470a2c, Func Offset: 0x9c
	// Line 1057, Address: 0x470a30, Func Offset: 0xa0
	// Line 1061, Address: 0x470a34, Func Offset: 0xa4
	// Line 1057, Address: 0x470a38, Func Offset: 0xa8
	// Line 1061, Address: 0x470a3c, Func Offset: 0xac
	// Line 1058, Address: 0x470a40, Func Offset: 0xb0
	// Line 1061, Address: 0x470a44, Func Offset: 0xb4
	// Line 1057, Address: 0x470a48, Func Offset: 0xb8
	// Line 1060, Address: 0x470a5c, Func Offset: 0xcc
	// Line 1057, Address: 0x470a60, Func Offset: 0xd0
	// Line 1059, Address: 0x470a68, Func Offset: 0xd8
	// Line 1058, Address: 0x470a6c, Func Offset: 0xdc
	// Line 1061, Address: 0x470a70, Func Offset: 0xe0
	// Line 1058, Address: 0x470a78, Func Offset: 0xe8
	// Line 1059, Address: 0x470a80, Func Offset: 0xf0
	// Line 1060, Address: 0x470a8c, Func Offset: 0xfc
	// Line 1061, Address: 0x470a98, Func Offset: 0x108
	// Line 1062, Address: 0x470a9c, Func Offset: 0x10c
	// Line 1066, Address: 0x470aa8, Func Offset: 0x118
	// Line 1069, Address: 0x470aac, Func Offset: 0x11c
	// Line 1070, Address: 0x470abc, Func Offset: 0x12c
	// Line 1072, Address: 0x470ac8, Func Offset: 0x138
	// Line 1063, Address: 0x470ad4, Func Offset: 0x144
	// Line 1072, Address: 0x470ad8, Func Offset: 0x148
	// Func End, Address: 0x470b14, Func Offset: 0x184
}

// begin_render__13xFXFastRasterFv
// Start address: 0x470b20
void xFXFastRaster::begin_render()
{
	// Line 1027, Address: 0x470b20, Func Offset: 0
	// Line 1029, Address: 0x470b24, Func Offset: 0x4
	// Line 1027, Address: 0x470b28, Func Offset: 0x8
	// Line 1028, Address: 0x470b2c, Func Offset: 0xc
	// Line 1029, Address: 0x470b34, Func Offset: 0x14
	// Line 1033, Address: 0x470b3c, Func Offset: 0x1c
	// Line 1035, Address: 0x470b48, Func Offset: 0x28
	// Line 1037, Address: 0x470b5c, Func Offset: 0x3c
	// Line 1035, Address: 0x470b60, Func Offset: 0x40
	// Line 1036, Address: 0x470b68, Func Offset: 0x48
	// Line 1035, Address: 0x470b74, Func Offset: 0x54
	// Line 1037, Address: 0x470b78, Func Offset: 0x58
	// Line 1036, Address: 0x470b7c, Func Offset: 0x5c
	// Line 1037, Address: 0x470b80, Func Offset: 0x60
	// Line 1038, Address: 0x470b84, Func Offset: 0x64
	// Line 1037, Address: 0x470b88, Func Offset: 0x68
	// Line 1038, Address: 0x470b94, Func Offset: 0x74
	// Line 1041, Address: 0x470ba0, Func Offset: 0x80
	// Line 1042, Address: 0x470ba8, Func Offset: 0x88
	// Func End, Address: 0x470bb4, Func Offset: 0x94
}

// clip_rect__13xFXFastRasterFR6xFRectP8RwRasterR6xFRect
// Start address: 0x470bc0
uint8 xFXFastRaster::clip_rect(xFRect& dst_rect, RwRaster* dst_raster, xFRect& src_rect)
{
	float32 oldx;
	float32 oldw;
	float32 oldy;
	float32 oldh;
	// Line 955, Address: 0x470bc0, Func Offset: 0
	// Line 956, Address: 0x470be4, Func Offset: 0x24
	// Line 957, Address: 0x470bec, Func Offset: 0x2c
	// Line 958, Address: 0x470bf4, Func Offset: 0x34
	// Line 960, Address: 0x470c08, Func Offset: 0x48
	// Line 961, Address: 0x470c14, Func Offset: 0x54
	// Line 962, Address: 0x470c3c, Func Offset: 0x7c
	// Line 963, Address: 0x470c48, Func Offset: 0x88
	// Line 964, Address: 0x470c68, Func Offset: 0xa8
	// Line 965, Address: 0x470c74, Func Offset: 0xb4
	// Line 966, Address: 0x470c9c, Func Offset: 0xdc
	// Line 967, Address: 0x470ca8, Func Offset: 0xe8
	// Line 968, Address: 0x470cc8, Func Offset: 0x108
	// Line 959, Address: 0x470cd4, Func Offset: 0x114
	// Line 969, Address: 0x470cd8, Func Offset: 0x118
	// Func End, Address: 0x470cfc, Func Offset: 0x13c
}

// clip_rect__13xFXFastRasterFR6xFRectP8RwRaster
// Start address: 0x470d00
uint8 xFXFastRaster::clip_rect(xFRect& dst_rect, RwRaster* dst_raster)
{
	int32 width;
	int32 height;
	int32 dst_x;
	int32 dst_w;
	int32 dst_y;
	int32 dst_h;
	int32 x;
	int32 y;
	int32 w;
	int32 h;
	// Line 933, Address: 0x470d00, Func Offset: 0
	// Line 934, Address: 0x470d08, Func Offset: 0x8
	// Line 930, Address: 0x470d0c, Func Offset: 0xc
	// Line 935, Address: 0x470d10, Func Offset: 0x10
	// Line 931, Address: 0x470d14, Func Offset: 0x14
	// Line 936, Address: 0x470d18, Func Offset: 0x18
	// Line 933, Address: 0x470d1c, Func Offset: 0x1c
	// Line 930, Address: 0x470d28, Func Offset: 0x28
	// Line 931, Address: 0x470d2c, Func Offset: 0x2c
	// Line 934, Address: 0x470d30, Func Offset: 0x30
	// Line 935, Address: 0x470d34, Func Offset: 0x34
	// Line 936, Address: 0x470d38, Func Offset: 0x38
	// Line 933, Address: 0x470d3c, Func Offset: 0x3c
	// Line 934, Address: 0x470d40, Func Offset: 0x40
	// Line 935, Address: 0x470d44, Func Offset: 0x44
	// Line 936, Address: 0x470d48, Func Offset: 0x48
	// Line 933, Address: 0x470d4c, Func Offset: 0x4c
	// Line 934, Address: 0x470d50, Func Offset: 0x50
	// Line 935, Address: 0x470d54, Func Offset: 0x54
	// Line 938, Address: 0x470d58, Func Offset: 0x58
	// Line 936, Address: 0x470d5c, Func Offset: 0x5c
	// Line 938, Address: 0x470d60, Func Offset: 0x60
	// Line 939, Address: 0x470d68, Func Offset: 0x68
	// Line 942, Address: 0x470de0, Func Offset: 0xe0
	// Line 944, Address: 0x470de8, Func Offset: 0xe8
	// Line 946, Address: 0x470df0, Func Offset: 0xf0
	// Line 948, Address: 0x470df8, Func Offset: 0xf8
	// Line 951, Address: 0x470e00, Func Offset: 0x100
	// Line 939, Address: 0x470e08, Func Offset: 0x108
	// Line 951, Address: 0x470e20, Func Offset: 0x120
	// Line 940, Address: 0x470e2c, Func Offset: 0x12c
	// Line 943, Address: 0x470e34, Func Offset: 0x134
	// Line 951, Address: 0x470e44, Func Offset: 0x144
	// Line 943, Address: 0x470e48, Func Offset: 0x148
	// Line 945, Address: 0x470e54, Func Offset: 0x154
	// Line 951, Address: 0x470e64, Func Offset: 0x164
	// Line 945, Address: 0x470e68, Func Offset: 0x168
	// Line 947, Address: 0x470e74, Func Offset: 0x174
	// Line 951, Address: 0x470e84, Func Offset: 0x184
	// Line 947, Address: 0x470e88, Func Offset: 0x188
	// Line 949, Address: 0x470e94, Func Offset: 0x194
	// Line 951, Address: 0x470ea4, Func Offset: 0x1a4
	// Line 949, Address: 0x470ea8, Func Offset: 0x1a8
	// Line 952, Address: 0x470eb4, Func Offset: 0x1b4
	// Func End, Address: 0x470ebc, Func Offset: 0x1bc
}

// zbuffer_unmap__16xFXCameraTextureFv
// Start address: 0x470ec0
void xFXCameraTexture::zbuffer_unmap()
{
	// Line 820, Address: 0x470ec0, Func Offset: 0
	// Line 832, Address: 0x470ec4, Func Offset: 0x4
	// Line 820, Address: 0x470ec8, Func Offset: 0x8
	// Line 832, Address: 0x470ecc, Func Offset: 0xc
	// Line 828, Address: 0x470ed0, Func Offset: 0x10
	// Line 832, Address: 0x470ed4, Func Offset: 0x14
	// Line 836, Address: 0x470edc, Func Offset: 0x1c
	// Line 840, Address: 0x470ef0, Func Offset: 0x30
	// Line 836, Address: 0x470ef4, Func Offset: 0x34
	// Line 841, Address: 0x470efc, Func Offset: 0x3c
	// Line 836, Address: 0x470f00, Func Offset: 0x40
	// Line 840, Address: 0x470f04, Func Offset: 0x44
	// Line 843, Address: 0x470f08, Func Offset: 0x48
	// Line 840, Address: 0x470f0c, Func Offset: 0x4c
	// Line 841, Address: 0x470f10, Func Offset: 0x50
	// Line 840, Address: 0x470f14, Func Offset: 0x54
	// Line 841, Address: 0x470f18, Func Offset: 0x58
	// Line 843, Address: 0x470f1c, Func Offset: 0x5c
	// Line 844, Address: 0x470f20, Func Offset: 0x60
	// Func End, Address: 0x470f2c, Func Offset: 0x6c
}

// zbuffer_map_and_clear__16xFXCameraTextureFP8RwRasterP8RwRasterUii
// Start address: 0x470f30
void xFXCameraTexture::zbuffer_map_and_clear(RwRaster* fraster, RwRaster* zraster, uint32 fbmsk, int32 clear_flags)
{
	int32 width;
	int32 height;
	uint32 fmsb;
	uint32 flsb;
	uint32 faddr;
	uint32 fwidth;
	uint32 fformat;
	uint32 zmsb;
	uint32 zlsb;
	uint32 zaddr;
	uint32 zformat;
	int32 qwords_used;
	// Line 592, Address: 0x470f30, Func Offset: 0
	// Line 610, Address: 0x470f70, Func Offset: 0x40
	// Line 600, Address: 0x470f74, Func Offset: 0x44
	// Line 610, Address: 0x470f78, Func Offset: 0x48
	// Line 600, Address: 0x470f7c, Func Offset: 0x4c
	// Line 602, Address: 0x470f80, Func Offset: 0x50
	// Line 603, Address: 0x470f88, Func Offset: 0x58
	// Line 610, Address: 0x470f90, Func Offset: 0x60
	// Line 615, Address: 0x470f9c, Func Offset: 0x6c
	// Line 612, Address: 0x470fa8, Func Offset: 0x78
	// Line 611, Address: 0x470fac, Func Offset: 0x7c
	// Line 612, Address: 0x470fb0, Func Offset: 0x80
	// Line 611, Address: 0x470fb4, Func Offset: 0x84
	// Line 613, Address: 0x470fb8, Func Offset: 0x88
	// Line 615, Address: 0x470fbc, Func Offset: 0x8c
	// Line 616, Address: 0x470fc4, Func Offset: 0x94
	// Line 618, Address: 0x470fc8, Func Offset: 0x98
	// Line 616, Address: 0x470fcc, Func Offset: 0x9c
	// Line 618, Address: 0x470fd8, Func Offset: 0xa8
	// Line 620, Address: 0x470fe0, Func Offset: 0xb0
	// Line 622, Address: 0x470fec, Func Offset: 0xbc
	// Line 624, Address: 0x470ff8, Func Offset: 0xc8
	// Line 628, Address: 0x471014, Func Offset: 0xe4
	// Line 629, Address: 0x471020, Func Offset: 0xf0
	// Line 628, Address: 0x471024, Func Offset: 0xf4
	// Line 629, Address: 0x471028, Func Offset: 0xf8
	// Line 626, Address: 0x47102c, Func Offset: 0xfc
	// Line 627, Address: 0x471030, Func Offset: 0x100
	// Line 628, Address: 0x471034, Func Offset: 0x104
	// Line 629, Address: 0x47103c, Func Offset: 0x10c
	// Line 637, Address: 0x471044, Func Offset: 0x114
	// Line 636, Address: 0x471058, Func Offset: 0x128
	// Line 637, Address: 0x47105c, Func Offset: 0x12c
	// Line 643, Address: 0x471070, Func Offset: 0x140
	// Line 637, Address: 0x471074, Func Offset: 0x144
	// Line 644, Address: 0x471088, Func Offset: 0x158
	// Line 645, Address: 0x471090, Func Offset: 0x160
	// Line 647, Address: 0x471094, Func Offset: 0x164
	// Line 658, Address: 0x4710a0, Func Offset: 0x170
	// Line 651, Address: 0x4710a4, Func Offset: 0x174
	// Line 658, Address: 0x4710ac, Func Offset: 0x17c
	// Line 651, Address: 0x4710b0, Func Offset: 0x180
	// Line 658, Address: 0x4710b4, Func Offset: 0x184
	// Line 651, Address: 0x4710bc, Func Offset: 0x18c
	// Line 658, Address: 0x4710c0, Func Offset: 0x190
	// Line 662, Address: 0x4710c8, Func Offset: 0x198
	// Line 658, Address: 0x4710cc, Func Offset: 0x19c
	// Line 662, Address: 0x4710d0, Func Offset: 0x1a0
	// Line 647, Address: 0x4710f0, Func Offset: 0x1c0
	// Line 662, Address: 0x4710f4, Func Offset: 0x1c4
	// Line 651, Address: 0x4710fc, Func Offset: 0x1cc
	// Line 654, Address: 0x471110, Func Offset: 0x1e0
	// Line 651, Address: 0x471114, Func Offset: 0x1e4
	// Line 659, Address: 0x47111c, Func Offset: 0x1ec
	// Line 654, Address: 0x471120, Func Offset: 0x1f0
	// Line 659, Address: 0x471124, Func Offset: 0x1f4
	// Line 660, Address: 0x471128, Func Offset: 0x1f8
	// Line 662, Address: 0x471130, Func Offset: 0x200
	// Line 654, Address: 0x471138, Func Offset: 0x208
	// Line 658, Address: 0x471140, Func Offset: 0x210
	// Line 659, Address: 0x471144, Func Offset: 0x214
	// Line 660, Address: 0x471148, Func Offset: 0x218
	// Line 664, Address: 0x47114c, Func Offset: 0x21c
	// Line 674, Address: 0x471154, Func Offset: 0x224
	// Line 676, Address: 0x471168, Func Offset: 0x238
	// Line 679, Address: 0x471178, Func Offset: 0x248
	// Line 681, Address: 0x471180, Func Offset: 0x250
	// Line 685, Address: 0x47118c, Func Offset: 0x25c
	// Line 687, Address: 0x471194, Func Offset: 0x264
	// Line 697, Address: 0x4711a0, Func Offset: 0x270
	// Line 699, Address: 0x4711ac, Func Offset: 0x27c
	// Line 700, Address: 0x4711c0, Func Offset: 0x290
	// Line 699, Address: 0x4711c4, Func Offset: 0x294
	// Line 701, Address: 0x4711cc, Func Offset: 0x29c
	// Line 699, Address: 0x4711d0, Func Offset: 0x2a0
	// Line 700, Address: 0x4711d4, Func Offset: 0x2a4
	// Line 703, Address: 0x4711d8, Func Offset: 0x2a8
	// Line 700, Address: 0x4711dc, Func Offset: 0x2ac
	// Line 701, Address: 0x4711e4, Func Offset: 0x2b4
	// Line 703, Address: 0x4711f0, Func Offset: 0x2c0
	// Line 817, Address: 0x4711f4, Func Offset: 0x2c4
	// Line 619, Address: 0x471208, Func Offset: 0x2d8
	// Line 817, Address: 0x471210, Func Offset: 0x2e0
	// Line 621, Address: 0x47121c, Func Offset: 0x2ec
	// Line 817, Address: 0x471224, Func Offset: 0x2f4
	// Line 622, Address: 0x471228, Func Offset: 0x2f8
	// Line 817, Address: 0x47122c, Func Offset: 0x2fc
	// Line 623, Address: 0x471234, Func Offset: 0x304
	// Line 667, Address: 0x47123c, Func Offset: 0x30c
	// Line 668, Address: 0x471240, Func Offset: 0x310
	// Line 817, Address: 0x471248, Func Offset: 0x318
	// Line 683, Address: 0x47124c, Func Offset: 0x31c
	// Line 817, Address: 0x471250, Func Offset: 0x320
	// Line 684, Address: 0x47125c, Func Offset: 0x32c
	// Line 817, Address: 0x471264, Func Offset: 0x334
	// Func End, Address: 0x471290, Func Offset: 0x360
}

// get_subview__16xFXCameraTextureCFR7xMat4x3R5xVec2R5xVec2P8RwCameraRC6xFRectRC6xFRect
// Start address: 0x471290
void xFXCameraTexture::get_subview(xMat4x3& ltm, xVec2& view_window, xVec2& view_offset, RwCamera* src_cam, xFRect& src_rect, xFRect& dst_rect)
{
	RwRaster* src_raster;
	xMat4x3& src_ltm;
	xVec2& src_view_window;
	xVec2& src_view_offset;
	float32 src_iwidth;
	float32 src_iheight;
	float32 dst_iwidth;
	float32 dst_iheight;
	float32 rw;
	float32 rh;
	float32 mx;
	float32 my;
	// Line 393, Address: 0x471290, Func Offset: 0
	// Line 408, Address: 0x471294, Func Offset: 0x4
	// Line 409, Address: 0x471298, Func Offset: 0x8
	// Line 408, Address: 0x47129c, Func Offset: 0xc
	// Line 433, Address: 0x4712a0, Func Offset: 0x10
	// Line 394, Address: 0x4712a4, Func Offset: 0x14
	// Line 446, Address: 0x4712a8, Func Offset: 0x18
	// Line 411, Address: 0x4712b0, Func Offset: 0x20
	// Line 408, Address: 0x4712b4, Func Offset: 0x24
	// Line 446, Address: 0x4712b8, Func Offset: 0x28
	// Line 410, Address: 0x4712bc, Func Offset: 0x2c
	// Line 411, Address: 0x4712c0, Func Offset: 0x30
	// Line 409, Address: 0x4712c4, Func Offset: 0x34
	// Line 433, Address: 0x4712c8, Func Offset: 0x38
	// Line 408, Address: 0x4712d0, Func Offset: 0x40
	// Line 410, Address: 0x4712d8, Func Offset: 0x48
	// Line 409, Address: 0x4712e0, Func Offset: 0x50
	// Line 411, Address: 0x4712e4, Func Offset: 0x54
	// Line 409, Address: 0x4712e8, Func Offset: 0x58
	// Line 411, Address: 0x4712ec, Func Offset: 0x5c
	// Line 433, Address: 0x4712f0, Func Offset: 0x60
	// Line 434, Address: 0x4712f4, Func Offset: 0x64
	// Line 447, Address: 0x4712f8, Func Offset: 0x68
	// Line 433, Address: 0x4712fc, Func Offset: 0x6c
	// Line 434, Address: 0x471308, Func Offset: 0x78
	// Line 446, Address: 0x47130c, Func Offset: 0x7c
	// Line 447, Address: 0x471314, Func Offset: 0x84
	// Line 434, Address: 0x471318, Func Offset: 0x88
	// Line 446, Address: 0x471320, Func Offset: 0x90
	// Line 447, Address: 0x471328, Func Offset: 0x98
	// Line 434, Address: 0x47132c, Func Offset: 0x9c
	// Line 446, Address: 0x471330, Func Offset: 0xa0
	// Line 434, Address: 0x47133c, Func Offset: 0xac
	// Line 446, Address: 0x471340, Func Offset: 0xb0
	// Line 447, Address: 0x471348, Func Offset: 0xb8
	// Line 446, Address: 0x471358, Func Offset: 0xc8
	// Line 447, Address: 0x47135c, Func Offset: 0xcc
	// Line 448, Address: 0x471364, Func Offset: 0xd4
	// Line 446, Address: 0x471370, Func Offset: 0xe0
	// Line 448, Address: 0x471374, Func Offset: 0xe4
	// Line 449, Address: 0x4713c8, Func Offset: 0x138
	// Line 450, Address: 0x4713e4, Func Offset: 0x154
	// Line 451, Address: 0x471400, Func Offset: 0x170
	// Line 454, Address: 0x47141c, Func Offset: 0x18c
	// Line 455, Address: 0x471424, Func Offset: 0x194
	// Line 456, Address: 0x471438, Func Offset: 0x1a8
	// Func End, Address: 0x471440, Func Offset: 0x1b0
}

// setup_subview__16xFXCameraTextureFP8RwCameraRC6xFRectRC6xFRect
// Start address: 0x471440
void xFXCameraTexture::setup_subview(RwCamera* src_cam, xFRect& src_rect, xFRect& dst_rect)
{
	xMat4x3 ltm;
	xVec2 view_window;
	xVec2 view_offset;
	// Line 320, Address: 0x471440, Func Offset: 0
	// Line 322, Address: 0x471464, Func Offset: 0x24
	// Line 323, Address: 0x471474, Func Offset: 0x34
	// Line 324, Address: 0x471480, Func Offset: 0x40
	// Line 325, Address: 0x47148c, Func Offset: 0x4c
	// Line 330, Address: 0x471498, Func Offset: 0x58
	// Line 332, Address: 0x4714b8, Func Offset: 0x78
	// Line 333, Address: 0x4714cc, Func Offset: 0x8c
	// Line 334, Address: 0x4714d8, Func Offset: 0x98
	// Line 335, Address: 0x4714e4, Func Offset: 0xa4
	// Func End, Address: 0x471500, Func Offset: 0xc0
}

// end_render__16xFXCameraTextureFv
// Start address: 0x471500
void xFXCameraTexture::end_render()
{
	// Line 233, Address: 0x471500, Func Offset: 0
	// Line 234, Address: 0x471510, Func Offset: 0x10
	// Line 235, Address: 0x47151c, Func Offset: 0x1c
	// Line 237, Address: 0x471528, Func Offset: 0x28
	// Line 240, Address: 0x471530, Func Offset: 0x30
	// Line 242, Address: 0x47153c, Func Offset: 0x3c
	// Line 243, Address: 0x471548, Func Offset: 0x48
	// Line 250, Address: 0x471560, Func Offset: 0x60
	// Line 252, Address: 0x47156c, Func Offset: 0x6c
	// Line 254, Address: 0x471584, Func Offset: 0x84
	// Line 255, Address: 0x471598, Func Offset: 0x98
	// Line 256, Address: 0x4715a0, Func Offset: 0xa0
	// Line 258, Address: 0x4715a8, Func Offset: 0xa8
	// Func End, Address: 0x4715d0, Func Offset: 0xd0
}

// begin_render__16xFXCameraTextureFiUiUiff
// Start address: 0x4715d0
void xFXCameraTexture::begin_render(int32 clear_flags, uint32 fbmsk_write, uint32 fbmsk_finish, float32 near_plane, float32 far_plane)
{
	// Line 159, Address: 0x4715d0, Func Offset: 0
	// Line 162, Address: 0x4715d4, Func Offset: 0x4
	// Line 159, Address: 0x4715d8, Func Offset: 0x8
	// Line 162, Address: 0x471604, Func Offset: 0x34
	// Line 163, Address: 0x471614, Func Offset: 0x44
	// Line 166, Address: 0x471620, Func Offset: 0x50
	// Line 164, Address: 0x471624, Func Offset: 0x54
	// Line 166, Address: 0x471628, Func Offset: 0x58
	// Line 164, Address: 0x47162c, Func Offset: 0x5c
	// Line 166, Address: 0x471634, Func Offset: 0x64
	// Line 167, Address: 0x47163c, Func Offset: 0x6c
	// Line 169, Address: 0x471644, Func Offset: 0x74
	// Line 176, Address: 0x47164c, Func Offset: 0x7c
	// Line 179, Address: 0x47165c, Func Offset: 0x8c
	// Line 176, Address: 0x471660, Func Offset: 0x90
	// Line 178, Address: 0x471664, Func Offset: 0x94
	// Line 179, Address: 0x47166c, Func Offset: 0x9c
	// Line 182, Address: 0x4716a0, Func Offset: 0xd0
	// Line 183, Address: 0x4716a8, Func Offset: 0xd8
	// Line 185, Address: 0x4716b8, Func Offset: 0xe8
	// Line 186, Address: 0x4716c0, Func Offset: 0xf0
	// Line 187, Address: 0x4716c8, Func Offset: 0xf8
	// Line 189, Address: 0x4716d4, Func Offset: 0x104
	// Line 191, Address: 0x4716ec, Func Offset: 0x11c
	// Line 192, Address: 0x4716f4, Func Offset: 0x124
	// Line 193, Address: 0x4716fc, Func Offset: 0x12c
	// Line 197, Address: 0x471708, Func Offset: 0x138
	// Line 211, Address: 0x471714, Func Offset: 0x144
	// Line 213, Address: 0x47172c, Func Offset: 0x15c
	// Line 216, Address: 0x471734, Func Offset: 0x164
	// Line 217, Address: 0x471740, Func Offset: 0x170
	// Line 223, Address: 0x471768, Func Offset: 0x198
	// Line 227, Address: 0x471778, Func Offset: 0x1a8
	// Line 228, Address: 0x471790, Func Offset: 0x1c0
	// Line 229, Address: 0x4718ec, Func Offset: 0x31c
	// Line 197, Address: 0x4718f4, Func Offset: 0x324
	// Line 229, Address: 0x4718f8, Func Offset: 0x328
	// Line 206, Address: 0x47190c, Func Offset: 0x33c
	// Line 229, Address: 0x471914, Func Offset: 0x344
	// Line 207, Address: 0x471920, Func Offset: 0x350
	// Line 229, Address: 0x471924, Func Offset: 0x354
	// Line 224, Address: 0x471934, Func Offset: 0x364
	// Line 229, Address: 0x47193c, Func Offset: 0x36c
	// Func End, Address: 0x471970, Func Offset: 0x3a0
}

// destroy__16xFXCameraTextureFv
// Start address: 0x471970
void xFXCameraTexture::destroy()
{
	RwFrame* tmpframe;
	// Line 125, Address: 0x471970, Func Offset: 0
	// Line 126, Address: 0x471988, Func Offset: 0x18
	// Line 127, Address: 0x471990, Func Offset: 0x20
	// Line 131, Address: 0x47199c, Func Offset: 0x2c
	// Line 132, Address: 0x4719a4, Func Offset: 0x34
	// Line 134, Address: 0x4719b0, Func Offset: 0x40
	// Line 137, Address: 0x4719b8, Func Offset: 0x48
	// Line 138, Address: 0x4719bc, Func Offset: 0x4c
	// Line 140, Address: 0x4719c4, Func Offset: 0x54
	// Line 142, Address: 0x4719cc, Func Offset: 0x5c
	// Line 144, Address: 0x4719dc, Func Offset: 0x6c
	// Line 146, Address: 0x4719e8, Func Offset: 0x78
	// Line 149, Address: 0x4719f4, Func Offset: 0x84
	// Line 150, Address: 0x4719fc, Func Offset: 0x8c
	// Line 152, Address: 0x471a04, Func Offset: 0x94
	// Line 153, Address: 0x471a08, Func Offset: 0x98
	// Line 155, Address: 0x471a0c, Func Offset: 0x9c
	// Func End, Address: 0x471a44, Func Offset: 0xd4
}

// create__16xFXCameraTextureFiibii
// Start address: 0x471a50
uint8 xFXCameraTexture::create(int32 w, int32 h, uint8 need_zwrite, int32 bpp, int32 zbpp)
{
	RwBBox bbox;
	RwV2d vw;
	// Line 38, Address: 0x471a50, Func Offset: 0
	// Line 39, Address: 0x471a8c, Func Offset: 0x3c
	// Line 42, Address: 0x471a90, Func Offset: 0x40
	// Line 40, Address: 0x471a94, Func Offset: 0x44
	// Line 42, Address: 0x471a98, Func Offset: 0x48
	// Line 40, Address: 0x471a9c, Func Offset: 0x4c
	// Line 41, Address: 0x471aa4, Func Offset: 0x54
	// Line 42, Address: 0x471aa8, Func Offset: 0x58
	// Line 44, Address: 0x471ab0, Func Offset: 0x60
	// Line 45, Address: 0x471ab4, Func Offset: 0x64
	// Line 44, Address: 0x471abc, Func Offset: 0x6c
	// Line 45, Address: 0x471ac0, Func Offset: 0x70
	// Line 44, Address: 0x471ac4, Func Offset: 0x74
	// Line 47, Address: 0x471ac8, Func Offset: 0x78
	// Line 48, Address: 0x471ae8, Func Offset: 0x98
	// Line 51, Address: 0x471af4, Func Offset: 0xa4
	// Line 52, Address: 0x471af8, Func Offset: 0xa8
	// Line 51, Address: 0x471afc, Func Offset: 0xac
	// Line 52, Address: 0x471b00, Func Offset: 0xb0
	// Line 51, Address: 0x471b04, Func Offset: 0xb4
	// Line 53, Address: 0x471b08, Func Offset: 0xb8
	// Line 51, Address: 0x471b0c, Func Offset: 0xbc
	// Line 52, Address: 0x471b14, Func Offset: 0xc4
	// Line 53, Address: 0x471b1c, Func Offset: 0xcc
	// Line 54, Address: 0x471b2c, Func Offset: 0xdc
	// Line 55, Address: 0x471b34, Func Offset: 0xe4
	// Line 57, Address: 0x471b3c, Func Offset: 0xec
	// Line 58, Address: 0x471b50, Func Offset: 0x100
	// Line 59, Address: 0x471b58, Func Offset: 0x108
	// Line 60, Address: 0x471b64, Func Offset: 0x114
	// Line 61, Address: 0x471b70, Func Offset: 0x120
	// Line 62, Address: 0x471b84, Func Offset: 0x134
	// Line 63, Address: 0x471b98, Func Offset: 0x148
	// Line 79, Address: 0x471ba8, Func Offset: 0x158
	// Line 80, Address: 0x471bc4, Func Offset: 0x174
	// Line 88, Address: 0x471bcc, Func Offset: 0x17c
	// Line 91, Address: 0x471be0, Func Offset: 0x190
	// Line 92, Address: 0x471bf0, Func Offset: 0x1a0
	// Line 96, Address: 0x471bf8, Func Offset: 0x1a8
	// Line 98, Address: 0x471c08, Func Offset: 0x1b8
	// Line 118, Address: 0x471c10, Func Offset: 0x1c0
	// Line 48, Address: 0x471c4c, Func Offset: 0x1fc
	// Line 118, Address: 0x471c54, Func Offset: 0x204
	// Line 54, Address: 0x471c5c, Func Offset: 0x20c
	// Line 118, Address: 0x471c64, Func Offset: 0x214
	// Line 63, Address: 0x471c6c, Func Offset: 0x21c
	// Line 118, Address: 0x471c74, Func Offset: 0x224
	// Line 80, Address: 0x471c7c, Func Offset: 0x22c
	// Line 118, Address: 0x471c84, Func Offset: 0x234
	// Line 89, Address: 0x471c8c, Func Offset: 0x23c
	// Line 118, Address: 0x471c94, Func Offset: 0x244
	// Line 93, Address: 0x471c9c, Func Offset: 0x24c
	// Line 108, Address: 0x471ca4, Func Offset: 0x254
	// Line 118, Address: 0x471cb0, Func Offset: 0x260
	// Line 110, Address: 0x471cd0, Func Offset: 0x280
	// Line 118, Address: 0x471cd8, Func Offset: 0x288
	// Line 119, Address: 0x471cf4, Func Offset: 0x2a4
	// Line 121, Address: 0x471d3c, Func Offset: 0x2ec
	// Line 122, Address: 0x471d40, Func Offset: 0x2f0
	// Func End, Address: 0x471d68, Func Offset: 0x318
}

