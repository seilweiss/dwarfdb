typedef struct xAnimState;
typedef struct RpWorld;
typedef struct RxClusterDefinition;
typedef struct xVec3;
typedef struct xEntBoulder;
typedef struct config;
typedef struct xEnv;
typedef struct xAnimFile;
typedef struct xClumpCollBSPVertInfo;
typedef enum _tagPadState;
typedef struct xSpline3;
typedef struct RpInterpolator;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef struct xClumpCollBSPTree;
typedef struct xJSPHeader;
typedef struct zEntHangable;
typedef struct xCollis;
typedef struct xEnt;
typedef struct xJSPNodeLight;
typedef enum RwFogType;
typedef struct RpTie;
typedef struct RwMatrixTag;
typedef struct rxHeapBlockHeader;
typedef struct xShadowSimplePoly;
typedef struct xBox;
typedef struct xAnimTransitionList;
typedef struct zLasso;
typedef struct RpAtomic;
typedef struct RxIoSpec;
typedef struct xModelInstance;
typedef struct xClumpCollBSPBranchNode;
typedef struct xCamConfigFollow;
typedef struct xVec4;
typedef struct RwBBox;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimTransition;
typedef enum _zPlayerType;
typedef struct xScene;
typedef struct zone_data_0;
typedef struct RwRaster;
typedef struct xUpdateCullEnt;
typedef struct iEnv;
typedef struct xLinkAsset;
typedef struct iEnvMatOrder;
typedef struct xCamScreen;
typedef struct RxPacket;
typedef struct RpLight;
typedef struct xMat4x3;
typedef struct xGroup;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct zEnt;
typedef enum xCamCoordType;
typedef struct xLightKit;
typedef struct RxOutputSpec;
typedef struct zBossCam_Binary;
typedef struct RwCamera;
typedef struct RwFrame;
typedef struct xCoef3;
typedef struct xGroupAsset;
typedef struct xAnimPhysicsData;
typedef struct _class_0;
typedef struct zScene;
typedef struct xBase;
typedef struct xAnimEffect;
typedef struct xPortalAsset;
typedef struct xShadowSimpleCache;
typedef struct _class_1;
typedef struct xAnimMultiFileEntry;
typedef struct xEntFrame;
typedef struct xCam;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct zCheckPoint;
typedef struct xSphere;
typedef struct RxCluster;
typedef struct xEntCollis;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xModelTag;
typedef enum RxClusterValid;
typedef struct RwV3d;
typedef struct xAnimActiveEffect;
typedef struct xJSPNodeInfo;
typedef struct _anon0;
typedef struct RpSector;
typedef struct analog_data;
typedef struct xCylinder;
typedef struct xRot;
typedef struct xAnimPlay;
typedef enum sceDemoEndReason;
typedef struct xCamera;
typedef struct xCamCoordCylinder;
typedef struct xFFX;
typedef enum iSndHandle;
typedef struct xAnimSingle;
typedef struct RwV2d;
typedef struct RpClump;
typedef struct xUpdateCullGroup;
typedef struct _tagiPad;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct xMat3x3;
typedef struct RpGeometry;
typedef struct xAnimMultiFileBase;
typedef struct xGlobals;
typedef struct RxClusterRef;
typedef struct zPlatform;
typedef struct xBBox;
typedef struct xAnimTable;
typedef struct xEntDrive;
typedef struct xCamGroup;
typedef struct xDynAsset;
typedef struct zSceneParameters;
typedef struct xModelPool;
typedef struct xEntShadow;
typedef struct RpMaterialList;
typedef struct xModelPipe;
typedef struct xLightKitLight;
typedef struct RpMorphTarget;
typedef struct anim_coll_data;
typedef struct xJSPNodeTreeLeaf;
typedef struct xCamCoordSphere;
typedef struct xBound;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct zPlayer;
typedef struct _zPortal;
typedef struct xCamBlend;
typedef struct RwRGBA;
typedef struct xJSPNodeTree;
typedef struct iFogParams;
typedef struct _tagxPad;
typedef struct xAnimMultiFile;
typedef struct xUpdateCullMgr;
typedef struct xGrid;
typedef struct RpMaterial;
typedef enum zGlobalDemoType;
typedef struct RxNodeMethods;
typedef struct zGlobalSettings;
typedef enum RwCameraProjection;
typedef struct xGridBound;
typedef struct PS2DemoGlobals;
typedef struct zPlayerLassoInfo;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct xVec2;
typedef struct zJumpParam;
typedef struct xJSPNodeTreeBranch;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef struct zLedgeGrabParams;
typedef enum xSndEffect;
typedef enum rxEmbeddedPacketState;
typedef struct xCoef;
typedef struct xQCData;
typedef struct zRewardsMgr;
typedef struct RwSurfaceProperties;
typedef struct xEntAsset;
typedef struct tri_data_0;
typedef struct xSurface;
typedef struct zGlobals;
typedef struct RxPipelineNode;
typedef enum _zPlayerWallJumpState;
typedef struct zCutsceneMgr;
typedef struct xQuat;
typedef struct xEnvAsset;
typedef enum xCamOrientType;
typedef struct RwLLLink;
typedef struct zAssetPickupTable;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct zPlayerGlobals;
typedef struct tri_data_1;
typedef struct RxPipelineNodeParam;
typedef struct xCamOrientEuler;
typedef struct zPlayerCarryInfo;
typedef struct RwTexDictionary;
typedef struct _class_2;
typedef struct zPlayerSettings;
typedef struct rxReq;
typedef struct xModelBucket;
typedef struct xBaseAsset;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct zone_data_1;
typedef struct _zEnv;
typedef struct RwLinkList;
typedef struct _class_3;
typedef struct xJSPMiniLightTie;
typedef struct xCamConfigCommon;
typedef struct _class_4;
typedef struct RxNodeDefinition;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef uint32(*type_11)(void*, void*);
typedef void(*type_12)(xEnt*);
typedef void(*type_15)(void*);
typedef void(*type_16)(xEnt*, xVec3*);
typedef void(*type_18)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef void(*type_30)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_32)(xEnt*);
typedef RpWorldSector*(*type_33)(RpWorldSector*);
typedef void(*type_36)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_38)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_39)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_42)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_44)(uint32);
typedef int8*(*type_49)(xBase*);
typedef int8*(*type_52)(uint32);
typedef uint32(*type_58)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_60)(RwCamera*);
typedef void(*type_61)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef RwCamera*(*type_63)(RwCamera*);
typedef void(*type_64)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_68)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_69)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_74)(RwResEntry*);
typedef int32(*type_75)(RxPipelineNode*, RxPipeline*);
typedef void(*type_76)(xAnimPlay*, xAnimState*, void*);
typedef RwObjectHasFrame*(*type_77)(RwObjectHasFrame*);
typedef void(*type_79)(RxPipelineNode*);
typedef int32(*type_84)(RxPipelineNode*);
typedef void(*type_87)(RxNodeDefinition*);
typedef int32(*type_88)(RxNodeDefinition*);
typedef int32(*type_91)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_93)(zBossCam_Binary*, float32, void*);
typedef RpClump*(*type_95)(RpClump*, void*);
typedef void(*type_96)(xMemPool*, void*);

typedef RwV3d type_0[8];
typedef int8 type_1[16];
typedef xEntBoulder* type_2[2];
typedef float32 type_3[6];
typedef uint8 type_4[10];
typedef RwFrustumPlane type_5[6];
typedef float32 type_6[3];
typedef uint8 type_7[10];
typedef uint32 type_8[2];
typedef float32 type_9[3];
typedef uint16 type_10[3];
typedef float32 type_13[3];
typedef xVec3 type_14[3];
typedef int8 type_17[16];
typedef uint8 type_19[2];
typedef xJSPMiniLightTie type_20[16];
typedef uint32 type_21[4];
typedef xVec3 type_22[5];
typedef RpLight* type_23[2];
typedef uint8 type_24[5];
typedef RwFrame* type_26[2];
typedef float32 type_27[2];
typedef xModelTag type_28[4];
typedef uint8 type_29[3];
typedef xEnt* type_31[161];
typedef RxCluster type_34[1];
typedef xCollis type_35[18];
typedef int8 type_37[4];
typedef float32 type_40[4];
typedef uint32 type_41[59];
typedef xModelInstance* type_43[11];
typedef int8 type_45[16];
typedef uint8 type_46[22];
typedef uint8 type_47[4];
typedef uint32 type_48[1];
typedef uint8 type_50[22];
typedef float32 type_51[4];
typedef xVec4 type_53[12];
typedef RwTexCoords* type_54[8];
typedef float32 type_55[3];
typedef xVec4 type_56[12];
typedef int8 type_57[32];
typedef float32 type_59[16];
typedef xAnimMultiFileEntry type_62[1];
typedef xVec3 type_65[4];
typedef int8 type_66[127];
typedef float32 type_67[22];
typedef float32 type_70[22];
typedef float32 type_71[4];
typedef xVec3 type_72[60];
typedef uint32 type_73[4];
typedef _tagxPad* type_78[4];
typedef int8 type_80[32];
typedef float32 type_81[2];
typedef int8 type_82[32];
typedef uint32 type_83[20];
typedef uint32 type_85[8];
typedef uint32 type_86[20];
typedef uint32 type_89[20];
typedef analog_data type_90[2];
typedef uint8 type_92[3];
typedef int8 type_94[32];
typedef RwTexCoords* type_97[8];
typedef int8 type_98[128];
typedef int8 type_99[128][6];
typedef xCam* type_100[32];
typedef int32 type_101[141];
typedef int8 type_102[32];
typedef xBase* type_103[141];
typedef xModelTag type_104[2];
typedef xCamBlend* type_105[4];

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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xEntBoulder
{
};

struct config
{
	zone_data_1 zone_rest;
	zone_data_1 zone_above;
	zone_data_1 zone_below;
	float32 move_speed;
	float32 turn_speed;
	float32 stick_speed;
	float32 stick_yaw_vel;
	float32 max_yaw_vel;
	float32 margin_angle;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct zEntHangable
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
		_class_3 tuv;
		tri_data_1 tri;
	};
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

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	_class_0 anim_coll;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xCamConfigFollow
{
	zone_data_0 zone_rest;
	zone_data_0 zone_above;
	zone_data_0 zone_below;
	float32 speed_zone_offset;
	float32 speed_zone_face;
	float32 speed_move_orbit;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
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

struct zone_data_0
{
	xVec3 offset;
	xVec3 face;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
};

struct xCamScreen
{
	RwCamera* icam;
	float32 fov;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

enum xCamCoordType
{
	XCAM_COORD_INVALID = 0xffffffff,
	XCAM_COORD_CART,
	XCAM_COORD_CYLINDER,
	XCAM_COORD_SPHERE,
	XCAM_COORD_MAX
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zBossCam_Binary : xCam
{
	zPlayer* owner;
	xVec3 cam_loc;
	xQuat cam_dir;
	void(*fun_moveover)(zBossCam_Binary*, float32, void*);
	void* ctxt_moveover;
	config cfg;
	int32 camera;
	xVec3* s1;
	xVec3* s2;
	float32 s2_radius;
	xVec2 stick_offset;

	void move_to_rest();
	void update(float32 dt);
	void attach(zPlayer* new_owner);
	void start();
	void create();
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
};

struct _class_0
{
	xVec3* verts;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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
	_class_2 coord;
	_class_4 orient;
	xCamConfigCommon cfg_common;
	int32 group_index;
	int32 group_flags;
	xCamBlend* blender;
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

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
};

struct xSphere
{
	xVec3 center;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
};

struct _anon0
{
};

struct RpSector
{
	int32 type;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct xCamCoordCylinder
{
	xVec3 origin;
	float32 dist;
	float32 height;
	float32 theta;
};

struct xFFX
{
};

enum iSndHandle
{
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct _tagiPad
{
	int32 port;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimMultiFileBase
{
	uint32 Count;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zPlatform
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct anim_coll_data
{
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct xCamCoordSphere
{
	xVec3 origin;
	float32 dist;
	xQuat dir;
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

struct xCamBlend : xCam
{
	xCam* src;
	xCam* dst;
	float32 time;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct xGrid
{
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

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct zPlayerLassoInfo
{
	float32 dist;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	zLasso lasso;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xCoef
{
	float32 a[4];
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

struct zRewardsMgr
{
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
};

struct xSurface
{
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND,
	k_WALLJUMP_STUCK,
	k_WALLJUMP_FALL
};

struct zCutsceneMgr
{
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

enum xCamOrientType
{
	XCAM_ORIENT_INVALID = 0xffffffff,
	XCAM_ORIENT_QUAT,
	XCAM_ORIENT_EULER,
	XCAM_ORIENT_MAX
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zAssetPickupTable
{
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xCamOrientEuler
{
	float32 yaw;
	float32 pitch;
	float32 roll;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _class_2
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

struct rxReq
{
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct zone_data_1
{
	float32 distance;
	float32 height;
	float32 height_focus;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_3
{
	float32 t;
	float32 u;
	float32 v;
};

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
};

struct xCamConfigCommon
{
	uint8 priority;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 blend_time;
};

struct _class_4
{
	union
	{
		xQuat quat;
		xCamOrientEuler euler;
	};
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
_anon0 __vt__15zBossCam_Binary;
xVec3 m_UnitAxisX;
zGlobals globals;

void move_to_rest();
void update(float32 dt);
void attach(zPlayer* new_owner);
void start();
void create();

// move_to_rest__15zBossCam_BinaryFv
// Start address: 0x471d70
void zBossCam_Binary::move_to_rest()
{
	xVec3 toTarget;
	xVec3 look_loc;
	xMat3x3 look_mat;
	// Line 272, Address: 0x471d70, Func Offset: 0
	// Line 275, Address: 0x471d88, Func Offset: 0x18
	// Line 276, Address: 0x471d90, Func Offset: 0x20
	// Line 275, Address: 0x471d94, Func Offset: 0x24
	// Line 276, Address: 0x471da4, Func Offset: 0x34
	// Line 275, Address: 0x471da8, Func Offset: 0x38
	// Line 277, Address: 0x471dac, Func Offset: 0x3c
	// Line 278, Address: 0x471dbc, Func Offset: 0x4c
	// Line 277, Address: 0x471dc4, Func Offset: 0x54
	// Line 278, Address: 0x471dc8, Func Offset: 0x58
	// Line 279, Address: 0x471dd0, Func Offset: 0x60
	// Line 292, Address: 0x471dd4, Func Offset: 0x64
	// Line 279, Address: 0x471dd8, Func Offset: 0x68
	// Line 286, Address: 0x471de4, Func Offset: 0x74
	// Line 287, Address: 0x471de8, Func Offset: 0x78
	// Line 292, Address: 0x471dec, Func Offset: 0x7c
	// Line 279, Address: 0x471df0, Func Offset: 0x80
	// Line 280, Address: 0x471e04, Func Offset: 0x94
	// Line 281, Address: 0x471e2c, Func Offset: 0xbc
	// Line 286, Address: 0x471e4c, Func Offset: 0xdc
	// Line 287, Address: 0x471e58, Func Offset: 0xe8
	// Line 289, Address: 0x471e60, Func Offset: 0xf0
	// Line 287, Address: 0x471e64, Func Offset: 0xf4
	// Line 288, Address: 0x471e70, Func Offset: 0x100
	// Line 290, Address: 0x471e74, Func Offset: 0x104
	// Line 288, Address: 0x471e78, Func Offset: 0x108
	// Line 289, Address: 0x471e80, Func Offset: 0x110
	// Line 291, Address: 0x471e84, Func Offset: 0x114
	// Line 289, Address: 0x471e88, Func Offset: 0x118
	// Line 290, Address: 0x471e90, Func Offset: 0x120
	// Line 291, Address: 0x471e9c, Func Offset: 0x12c
	// Line 292, Address: 0x471ea4, Func Offset: 0x134
	// Line 293, Address: 0x471eac, Func Offset: 0x13c
	// Line 294, Address: 0x471eb8, Func Offset: 0x148
	// Line 297, Address: 0x471ec4, Func Offset: 0x154
	// Line 298, Address: 0x471ed0, Func Offset: 0x160
	// Line 297, Address: 0x471ed4, Func Offset: 0x164
	// Line 298, Address: 0x471ee8, Func Offset: 0x178
	// Line 299, Address: 0x471ef0, Func Offset: 0x180
	// Line 300, Address: 0x471f08, Func Offset: 0x198
	// Line 301, Address: 0x471f20, Func Offset: 0x1b0
	// Func End, Address: 0x471f38, Func Offset: 0x1c8
}

// update__15zBossCam_BinaryFR6xScenef
// Start address: 0x471f40
void zBossCam_Binary::update(float32 dt)
{
	xVec3& A;
	xVec3& B;
	xVec3& C;
	xVec3 CA;
	float32 dCA;
	float32 yaw_end;
	float32 dyaw1;
	float32 dyaw2;
	float32 fov;
	float32 max_dyaw;
	float32 sstick;
	analog_data& stick;
	float32 yaw_diff;
	float32 max_yaw_diff;
	float32 d;
	float32 h;
	float32 hf;
	float32 s;
	float32 s;
	xVec3 end_loc;
	float32 sloc;
	xVec3 heading;
	xQuat end_dir;
	xMat3x3 mat;
	// Line 119, Address: 0x471f40, Func Offset: 0
	// Line 128, Address: 0x471f44, Func Offset: 0x4
	// Line 119, Address: 0x471f48, Func Offset: 0x8
	// Line 128, Address: 0x471f4c, Func Offset: 0xc
	// Line 119, Address: 0x471f50, Func Offset: 0x10
	// Line 122, Address: 0x471f64, Func Offset: 0x24
	// Line 119, Address: 0x471f68, Func Offset: 0x28
	// Line 123, Address: 0x471f8c, Func Offset: 0x4c
	// Line 124, Address: 0x471f90, Func Offset: 0x50
	// Line 128, Address: 0x471f94, Func Offset: 0x54
	// Line 129, Address: 0x471fd4, Func Offset: 0x94
	// Line 128, Address: 0x471fdc, Func Offset: 0x9c
	// Line 129, Address: 0x471fe4, Func Offset: 0xa4
	// Line 128, Address: 0x471fe8, Func Offset: 0xa8
	// Line 129, Address: 0x471fec, Func Offset: 0xac
	// Line 128, Address: 0x471ff0, Func Offset: 0xb0
	// Line 129, Address: 0x471ff4, Func Offset: 0xb4
	// Line 130, Address: 0x471ff8, Func Offset: 0xb8
	// Line 135, Address: 0x472014, Func Offset: 0xd4
	// Line 139, Address: 0x472044, Func Offset: 0x104
	// Line 141, Address: 0x47206c, Func Offset: 0x12c
	// Line 146, Address: 0x472078, Func Offset: 0x138
	// Line 149, Address: 0x4720b0, Func Offset: 0x170
	// Line 146, Address: 0x4720bc, Func Offset: 0x17c
	// Line 149, Address: 0x4720c0, Func Offset: 0x180
	// Line 150, Address: 0x4720e0, Func Offset: 0x1a0
	// Line 149, Address: 0x4720e4, Func Offset: 0x1a4
	// Line 150, Address: 0x4720e8, Func Offset: 0x1a8
	// Line 151, Address: 0x47211c, Func Offset: 0x1dc
	// Line 150, Address: 0x47212c, Func Offset: 0x1ec
	// Line 151, Address: 0x472134, Func Offset: 0x1f4
	// Line 152, Address: 0x472178, Func Offset: 0x238
	// Line 151, Address: 0x472180, Func Offset: 0x240
	// Line 152, Address: 0x472184, Func Offset: 0x244
	// Line 153, Address: 0x4721b4, Func Offset: 0x274
	// Line 152, Address: 0x4721b8, Func Offset: 0x278
	// Line 153, Address: 0x4721bc, Func Offset: 0x27c
	// Line 152, Address: 0x4721c0, Func Offset: 0x280
	// Line 153, Address: 0x4721c8, Func Offset: 0x288
	// Line 154, Address: 0x4721d8, Func Offset: 0x298
	// Line 153, Address: 0x4721dc, Func Offset: 0x29c
	// Line 154, Address: 0x4721e4, Func Offset: 0x2a4
	// Line 153, Address: 0x4721ec, Func Offset: 0x2ac
	// Line 154, Address: 0x4721f0, Func Offset: 0x2b0
	// Line 157, Address: 0x47220c, Func Offset: 0x2cc
	// Line 161, Address: 0x472230, Func Offset: 0x2f0
	// Line 163, Address: 0x47223c, Func Offset: 0x2fc
	// Line 165, Address: 0x47224c, Func Offset: 0x30c
	// Line 168, Address: 0x472258, Func Offset: 0x318
	// Line 169, Address: 0x47225c, Func Offset: 0x31c
	// Line 172, Address: 0x472264, Func Offset: 0x324
	// Line 181, Address: 0x47226c, Func Offset: 0x32c
	// Line 182, Address: 0x47227c, Func Offset: 0x33c
	// Line 181, Address: 0x472280, Func Offset: 0x340
	// Line 182, Address: 0x472284, Func Offset: 0x344
	// Line 181, Address: 0x472288, Func Offset: 0x348
	// Line 185, Address: 0x47228c, Func Offset: 0x34c
	// Line 181, Address: 0x472298, Func Offset: 0x358
	// Line 185, Address: 0x4722a4, Func Offset: 0x364
	// Line 189, Address: 0x4722a8, Func Offset: 0x368
	// Line 185, Address: 0x4722b0, Func Offset: 0x370
	// Line 189, Address: 0x4722b8, Func Offset: 0x378
	// Line 185, Address: 0x4722bc, Func Offset: 0x37c
	// Line 186, Address: 0x4722cc, Func Offset: 0x38c
	// Line 185, Address: 0x4722d0, Func Offset: 0x390
	// Line 189, Address: 0x4722dc, Func Offset: 0x39c
	// Line 190, Address: 0x4722f8, Func Offset: 0x3b8
	// Line 189, Address: 0x4722fc, Func Offset: 0x3bc
	// Line 190, Address: 0x472310, Func Offset: 0x3d0
	// Line 189, Address: 0x472314, Func Offset: 0x3d4
	// Line 190, Address: 0x472318, Func Offset: 0x3d8
	// Line 191, Address: 0x47231c, Func Offset: 0x3dc
	// Line 199, Address: 0x47232c, Func Offset: 0x3ec
	// Line 200, Address: 0x472344, Func Offset: 0x404
	// Line 209, Address: 0x472350, Func Offset: 0x410
	// Line 210, Address: 0x472354, Func Offset: 0x414
	// Line 211, Address: 0x47235c, Func Offset: 0x41c
	// Line 209, Address: 0x472360, Func Offset: 0x420
	// Line 211, Address: 0x472364, Func Offset: 0x424
	// Line 212, Address: 0x472368, Func Offset: 0x428
	// Line 210, Address: 0x47236c, Func Offset: 0x42c
	// Line 211, Address: 0x472378, Func Offset: 0x438
	// Line 212, Address: 0x472384, Func Offset: 0x444
	// Line 216, Address: 0x472390, Func Offset: 0x450
	// Line 225, Address: 0x4723f8, Func Offset: 0x4b8
	// Line 216, Address: 0x4723fc, Func Offset: 0x4bc
	// Line 225, Address: 0x472408, Func Offset: 0x4c8
	// Line 240, Address: 0x472418, Func Offset: 0x4d8
	// Line 225, Address: 0x47241c, Func Offset: 0x4dc
	// Line 240, Address: 0x472428, Func Offset: 0x4e8
	// Line 225, Address: 0x47242c, Func Offset: 0x4ec
	// Line 234, Address: 0x472430, Func Offset: 0x4f0
	// Line 235, Address: 0x472438, Func Offset: 0x4f8
	// Line 234, Address: 0x47243c, Func Offset: 0x4fc
	// Line 235, Address: 0x472450, Func Offset: 0x510
	// Line 236, Address: 0x472464, Func Offset: 0x524
	// Line 240, Address: 0x472470, Func Offset: 0x530
	// Line 247, Address: 0x472498, Func Offset: 0x558
	// Line 240, Address: 0x4724a0, Func Offset: 0x560
	// Line 247, Address: 0x4724a8, Func Offset: 0x568
	// Line 240, Address: 0x4724b0, Func Offset: 0x570
	// Line 246, Address: 0x4724d4, Func Offset: 0x594
	// Line 240, Address: 0x4724d8, Func Offset: 0x598
	// Line 246, Address: 0x4724e4, Func Offset: 0x5a4
	// Line 247, Address: 0x4724ec, Func Offset: 0x5ac
	// Line 258, Address: 0x4724f8, Func Offset: 0x5b8
	// Line 259, Address: 0x472504, Func Offset: 0x5c4
	// Line 258, Address: 0x472508, Func Offset: 0x5c8
	// Line 259, Address: 0x47251c, Func Offset: 0x5dc
	// Line 261, Address: 0x472524, Func Offset: 0x5e4
	// Line 262, Address: 0x47253c, Func Offset: 0x5fc
	// Line 264, Address: 0x472558, Func Offset: 0x618
	// Line 265, Address: 0x472560, Func Offset: 0x620
	// Line 268, Address: 0x472570, Func Offset: 0x630
	// Line 132, Address: 0x47258c, Func Offset: 0x64c
	// Line 268, Address: 0x4725a4, Func Offset: 0x664
	// Line 132, Address: 0x4725a8, Func Offset: 0x668
	// Line 268, Address: 0x4725ac, Func Offset: 0x66c
	// Line 132, Address: 0x4725b4, Func Offset: 0x674
	// Line 268, Address: 0x4725c8, Func Offset: 0x688
	// Line 132, Address: 0x4725e0, Func Offset: 0x6a0
	// Line 268, Address: 0x4725e4, Func Offset: 0x6a4
	// Line 132, Address: 0x4725f0, Func Offset: 0x6b0
	// Line 268, Address: 0x4725f8, Func Offset: 0x6b8
	// Line 133, Address: 0x472600, Func Offset: 0x6c0
	// Line 134, Address: 0x47260c, Func Offset: 0x6cc
	// Line 268, Address: 0x472614, Func Offset: 0x6d4
	// Line 132, Address: 0x472634, Func Offset: 0x6f4
	// Line 151, Address: 0x47263c, Func Offset: 0x6fc
	// Line 268, Address: 0x472640, Func Offset: 0x700
	// Line 151, Address: 0x472648, Func Offset: 0x708
	// Line 268, Address: 0x472674, Func Offset: 0x734
	// Line 151, Address: 0x47267c, Func Offset: 0x73c
	// Line 268, Address: 0x472694, Func Offset: 0x754
	// Line 152, Address: 0x47269c, Func Offset: 0x75c
	// Line 268, Address: 0x4726bc, Func Offset: 0x77c
	// Line 152, Address: 0x4726c4, Func Offset: 0x784
	// Line 268, Address: 0x4726dc, Func Offset: 0x79c
	// Line 159, Address: 0x4726ec, Func Offset: 0x7ac
	// Line 268, Address: 0x4726f0, Func Offset: 0x7b0
	// Line 160, Address: 0x472700, Func Offset: 0x7c0
	// Line 268, Address: 0x472708, Func Offset: 0x7c8
	// Line 162, Address: 0x472718, Func Offset: 0x7d8
	// Line 268, Address: 0x47271c, Func Offset: 0x7dc
	// Line 162, Address: 0x47272c, Func Offset: 0x7ec
	// Line 166, Address: 0x472734, Func Offset: 0x7f4
	// Line 268, Address: 0x472740, Func Offset: 0x800
	// Line 177, Address: 0x472750, Func Offset: 0x810
	// Line 268, Address: 0x472754, Func Offset: 0x814
	// Line 189, Address: 0x472774, Func Offset: 0x834
	// Line 268, Address: 0x4727a0, Func Offset: 0x860
	// Line 189, Address: 0x4727a8, Func Offset: 0x868
	// Line 268, Address: 0x4727c0, Func Offset: 0x880
	// Line 193, Address: 0x4727c4, Func Offset: 0x884
	// Line 268, Address: 0x4727c8, Func Offset: 0x888
	// Line 193, Address: 0x4727cc, Func Offset: 0x88c
	// Line 268, Address: 0x4727d8, Func Offset: 0x898
	// Line 203, Address: 0x472808, Func Offset: 0x8c8
	// Line 204, Address: 0x472814, Func Offset: 0x8d4
	// Line 205, Address: 0x472820, Func Offset: 0x8e0
	// Line 206, Address: 0x472828, Func Offset: 0x8e8
	// Line 268, Address: 0x472830, Func Offset: 0x8f0
	// Line 249, Address: 0x47283c, Func Offset: 0x8fc
	// Line 252, Address: 0x472840, Func Offset: 0x900
	// Line 268, Address: 0x472844, Func Offset: 0x904
	// Line 249, Address: 0x47284c, Func Offset: 0x90c
	// Line 268, Address: 0x472850, Func Offset: 0x910
	// Line 249, Address: 0x472854, Func Offset: 0x914
	// Line 268, Address: 0x47285c, Func Offset: 0x91c
	// Line 249, Address: 0x472868, Func Offset: 0x928
	// Line 252, Address: 0x472870, Func Offset: 0x930
	// Line 268, Address: 0x472874, Func Offset: 0x934
	// Line 252, Address: 0x472888, Func Offset: 0x948
	// Line 268, Address: 0x472890, Func Offset: 0x950
	// Line 254, Address: 0x4728ac, Func Offset: 0x96c
	// Line 268, Address: 0x4728b0, Func Offset: 0x970
	// Line 255, Address: 0x4728b8, Func Offset: 0x978
	// Line 268, Address: 0x4728c8, Func Offset: 0x988
	// Func End, Address: 0x47291c, Func Offset: 0x9dc
}

// attach__15zBossCam_BinaryFP7zPlayer
// Start address: 0x472920
void zBossCam_Binary::attach(zPlayer* new_owner)
{
	// Line 105, Address: 0x472920, Func Offset: 0
	// Func End, Address: 0x472928, Func Offset: 0x8
}

// start__15zBossCam_BinaryFv
// Start address: 0x472930
void zBossCam_Binary::start()
{
	// Line 74, Address: 0x472930, Func Offset: 0
	// Line 79, Address: 0x472934, Func Offset: 0x4
	// Line 74, Address: 0x472938, Func Offset: 0x8
	// Line 79, Address: 0x472940, Func Offset: 0x10
	// Line 81, Address: 0x472948, Func Offset: 0x18
	// Line 83, Address: 0x47294c, Func Offset: 0x1c
	// Line 89, Address: 0x472954, Func Offset: 0x24
	// Line 90, Address: 0x472994, Func Offset: 0x64
	// Func End, Address: 0x4729a4, Func Offset: 0x74
}

// create__15zBossCam_BinaryFv
// Start address: 0x4729b0
void zBossCam_Binary::create()
{
	// Line 54, Address: 0x4729b0, Func Offset: 0
	// Line 55, Address: 0x4729bc, Func Offset: 0xc
	// Line 57, Address: 0x4729c4, Func Offset: 0x14
	// Line 60, Address: 0x4729c8, Func Offset: 0x18
	// Line 58, Address: 0x4729cc, Func Offset: 0x1c
	// Line 61, Address: 0x4729d0, Func Offset: 0x20
	// Line 60, Address: 0x4729d4, Func Offset: 0x24
	// Line 61, Address: 0x4729d8, Func Offset: 0x28
	// Line 64, Address: 0x4729dc, Func Offset: 0x2c
	// Line 65, Address: 0x4729e0, Func Offset: 0x30
	// Line 70, Address: 0x4729e8, Func Offset: 0x38
	// Func End, Address: 0x4729f8, Func Offset: 0x48
}

