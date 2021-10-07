typedef struct iWaterTile;
typedef struct xWaterMotion;
typedef struct iWaterWave;
typedef struct xWaterTileSet;
typedef struct xGridBound;
typedef struct RxClusterDefinition;
typedef enum _zPlayerWallJumpState;
typedef struct xEntFrame;
typedef struct xModelBucket;
typedef struct tile_region;
typedef struct xEnt;
typedef struct tile_batch;
typedef struct water_motion_group;
typedef struct RwRaster;
typedef struct xBase;
typedef struct xEnvAsset;
typedef struct RpInterpolator;
typedef struct xModelInstance;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef struct facade_entity;
typedef struct xAnimTable;
typedef struct xMat4x3;
typedef struct RpWorld;
typedef struct xScene;
typedef struct RpGeometry;
typedef struct xJSPNodeTreeBranch;
typedef struct xLinkAsset;
typedef struct xWaterShading;
typedef struct xLightKit;
typedef struct RwCamera;
typedef enum RwFogType;
typedef struct zRewardsMgr;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct xCollis;
typedef struct xAnimTransition;
typedef struct RxIoSpec;
typedef struct xVec4;
typedef struct iEnvMatOrder;
typedef enum xCamOrientType;
typedef struct xAnimState;
typedef struct xSpline3;
typedef struct zAssetPickupTable;
typedef struct RpMorphTarget;
typedef struct zPlayerGlobals;
typedef struct _tagPadAnalog;
typedef struct RwBBox;
typedef struct xAnimFile;
typedef struct zEnt;
typedef struct zCutsceneMgr;
typedef struct xCamGroup;
typedef struct iWaterInstancedWaves;
typedef struct xEntCollis;
typedef struct RwMatrixTag;
typedef struct xVec3;
typedef struct RxPacket;
typedef struct RwPlane;
typedef struct zLasso;
typedef struct RpAtomic;
typedef struct zPlayerCarryInfo;
typedef struct RxOutputSpec;
typedef struct xSurface;
typedef struct xJSPNodeInfo;
typedef struct zPlayerSettings;
typedef struct xBaseAsset;
typedef struct xSphere;
typedef struct xVec2;
typedef struct xShadowSimplePoly;
typedef struct xAnimTransitionList;
typedef struct tile_quadtree;
typedef struct _class_0;
typedef struct xFFX;
typedef struct xCamOrientEuler;
typedef struct xWaterSettings;
typedef struct xEnv;
typedef struct xColor_tag;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct xUpdateCullEnt;
typedef struct xWaterEnvironment;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xGroup;
typedef struct gather_args;
typedef struct xCam;
typedef struct xRot;
typedef enum RxClusterValid;
typedef struct xJSPNodeTree;
typedef struct xCylinder;
typedef struct xCoef3;
typedef struct RpSector;
typedef struct _class_1;
typedef struct iEnv;
typedef struct _zPortal;
typedef struct xGroupAsset;
typedef struct _tagiPad;
typedef struct point_data;
typedef struct xAnimPhysicsData;
typedef struct xCamBlend;
typedef struct xBox;
typedef enum RwBlendFunction;
typedef struct xDynAsset;
typedef struct xAnimEffect;
typedef struct xShadowSimpleCache;
typedef struct xAnimMultiFileEntry;
typedef struct RwV2d;
typedef struct xMat3x3;
typedef struct xJSPNodeTreeLeaf;
typedef struct RxPipelineCluster;
typedef struct _class_2;
typedef struct xGrid;
typedef enum RxClusterValidityReq;
typedef struct xCamConfigCommon;
typedef struct RxClusterRef;
typedef struct xModelTag;
typedef struct xAnimActiveEffect;
typedef struct xFXFastRaster;
typedef struct xQCData;
typedef struct xAnimPlay;
typedef struct xEntBoulder;
typedef enum sceDemoEndReason;
typedef struct xCamera;
typedef struct xJSPHeader;
typedef struct _zEnv;
typedef struct xUpdateCullGroup;
typedef struct RpMaterialList;
typedef struct zEntHangable;
typedef struct _tagxPad;
typedef enum iSndHandle;
typedef struct xAnimSingle;
typedef struct RwFrame;
typedef struct RpLight;
typedef struct xJSPMiniLightTie;
typedef struct zSceneParameters;
typedef struct xGlobals;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBA;
typedef struct xPortalAsset;
typedef struct xEntDrive;
typedef struct xModelPool;
typedef struct xCamScreen;
typedef enum _zPlayerType;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpMaterial;
typedef struct xEntShadow;
typedef struct RxNodeMethods;
typedef struct zJumpParam;
typedef struct xModelPipe;
typedef enum RwCameraProjection;
typedef struct xBound;
typedef struct xClumpCollBSPTree;
typedef struct xLightKitLight;
typedef struct anim_coll_data;
typedef struct xJSPNodeLight;
typedef struct RwResEntry;
typedef struct RxPipeline;
typedef struct ocean_wave;
typedef struct xAnimMultiFile;
typedef struct zPlayer;
typedef enum xCamCoordType;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef struct xUpdateCullMgr;
typedef enum rxEmbeddedPacketState;
typedef struct analog_data;
typedef struct xClumpCollBSPBranchNode;
typedef struct zScene;
typedef struct RwV3d;
typedef struct zPlatform;
typedef struct zCheckPoint;
typedef struct xClumpCollBSPTriangle;
typedef struct RwSurfaceProperties;
typedef struct PS2DemoGlobals;
typedef struct RxPipelineNode;
typedef struct vidmode_data;
typedef struct xCoef;
typedef struct xMemPool;
typedef enum xSndEffect;
typedef struct RwSky2DVertex;
typedef struct _class_3;
typedef struct xFXCameraTexture;
typedef struct RwLLLink;
typedef struct RpTriangle;
typedef enum RpWorldRenderOrder;
typedef struct xCamCoordCylinder;
typedef struct RpMeshHeader;
typedef struct tri_data_0;
typedef struct xBBox;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct xQuat;
typedef struct RxPipelineNodeParam;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct RwTexDictionary;
typedef struct rxReq;
typedef enum _tagGameVidMode;
typedef struct xCamCoordSphere;
typedef struct tri_data_1;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntAsset;
typedef enum zGlobalDemoType;
typedef struct RxHeap;
typedef struct zGlobalSettings;
typedef struct RwSky2DVertexFields;
typedef struct RwLinkList;
typedef struct iFogParams;
typedef struct zPlayerLassoInfo;
typedef struct zLedgeGrabParams;
typedef struct RxNodeDefinition;
typedef enum _tagPadState;
typedef struct zGlobals;
typedef struct _class_4;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_0)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_3)(xEnt*, xScene*, float32, xEntFrame*);
typedef xBase*(*type_7)(uint32);
typedef void(*type_13)(xEnt*, xScene*, float32);
typedef uint32(*type_15)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef int8*(*type_16)(xBase*);
typedef void(*type_19)(xEnt*);
typedef int8*(*type_22)(uint32);
typedef uint32(*type_25)(void*, void*);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef void(*type_30)(xEnt*);
typedef void(*type_32)(void*);
typedef RpWorldSector*(*type_36)(RpWorldSector*);
typedef void(*type_39)(xEnt*, xVec3*);
typedef void(*type_43)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_62)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_71)(xEnt*);
typedef uint32(*type_72)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_73)(RwCamera*);
typedef RwCamera*(*type_77)(RwCamera*);
typedef uint32(*type_88)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_94)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_97)(RwResEntry*);
typedef int32(*type_98)(RxPipelineNode*, RxPipeline*);
typedef void(*type_101)(xAnimState*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_102)(RwObjectHasFrame*);
typedef void(*type_104)(RxPipelineNode*);
typedef void(*type_108)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_109)(RxPipelineNode*);
typedef void(*type_112)(RxNodeDefinition*);
typedef void(*type_115)(xAnimPlay*, xAnimState*, void*);
typedef int32(*type_116)(RxNodeDefinition*);
typedef int32(*type_119)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_123)(xMemPool*, void*);
typedef RpClump*(*type_124)(RpClump*, void*);

typedef uint8 type_1[3];
typedef RwV3d type_2[8];
typedef int8 type_4[32];
typedef RwFrustumPlane type_5[6];
typedef int8 type_6[16];
typedef water_motion_group type_8[16];
typedef uint32 type_9[20];
typedef uint32 type_10[8];
typedef uint32 type_11[4];
typedef uint16 type_12[3];
typedef uint32 type_14[20];
typedef int8 type_17[16];
typedef uint32 type_18[1];
typedef uint32 type_20[20];
typedef uint8 type_21[3];
typedef float32 type_23[4];
typedef uint32 type_24[4];
typedef int8 type_26[32];
typedef float32* type_27[2];
typedef float32 type_28[4];
typedef uint32 type_31[4096];
typedef float32 type_33[4];
typedef float32* type_34[2];
typedef xVec3 type_35[3];
typedef float32 type_37[4];
typedef float32* type_38[2];
typedef RxCluster type_40[1];
typedef float32 type_41[4];
typedef uint8 type_42[2];
typedef float32* type_44[2];
typedef xCam* type_45[32];
typedef float32 type_46[4];
typedef int8 type_47[16];
typedef float32 type_48[4];
typedef float32 type_49[2];
typedef float32 type_50[4];
typedef uint8 type_51[22];
typedef xModelTag type_52[2];
typedef uint8 type_53[22];
typedef xCamBlend* type_54[4];
typedef xCollis type_55[18];
typedef int32 type_56[141];
typedef xEntBoulder* type_57[2];
typedef float32 type_58[6];
typedef uint8 type_59[10];
typedef point_data type_60[4];
typedef xBase* type_61[141];
typedef float32 type_63[3];
typedef uint8 type_64[10];
typedef float32 type_65[3];
typedef uint32 type_66[2];
typedef float32 type_67[3];
typedef xVec4 type_68[6];
typedef RwTexCoords* type_69[8];
typedef float32 type_70[3];
typedef uint32 type_74[1];
typedef RpLight* type_75[2];
typedef xVec4 type_76[12];
typedef float32 type_78[4];
typedef RwFrame* type_79[2];
typedef xVec4 type_80[12];
typedef xVec3 type_81[5];
typedef float32 type_82[22];
typedef int8 type_83[32];
typedef uint16 type_84[24];
typedef uint8 type_85[5];
typedef xModelTag type_86[4];
typedef float32 type_87[22];
typedef xEnt* type_89[161];
typedef uint8 type_90[3];
typedef iWaterTile type_91[128];
typedef iWaterTile type_92[128][6];
typedef float32 type_93[16];
typedef xAnimMultiFileEntry type_95[1];
typedef int32 type_96[6];
typedef int8 type_99[127];
typedef xJSPMiniLightTie type_100[16];
typedef xVec3 type_103[4];
typedef int8 type_105[32];
typedef float32 type_106[4];
typedef int8 type_107[32];
typedef analog_data type_110[2];
typedef xModelInstance* type_111[11];
typedef uint32 type_113[59];
typedef uint8 type_114[4];
typedef _tagxPad* type_117[4];
typedef int8 type_118[4];
typedef float32 type_120[2];
typedef float32* type_121[6];
typedef float32 type_122[4];
typedef vidmode_data type_125[2];
typedef iWaterWave type_126[12];
typedef RwTexCoords* type_127[8];
typedef float32 type_128[12];
typedef <unknown fundamental type (0xa510)> type_129[4];
typedef xVec2 type_130[4];
typedef int8 type_131[128];
typedef RwSky2DVertex type_132[16];
typedef int8 type_133[128][6];
typedef xVec3 type_134[60];

struct iWaterTile
{
	float32 x;
	int32 flags;
	float32 z;
	int32 width;
};

struct xWaterMotion
{
	float32 lod_dist_min;
	float32 lod_dist_interval;
	int32 shimmer;
	int32 refract_glow;
	uint32 random_seed;
	float32 amplitude_min;
	float32 gravity;
	float32 wind_speed;
	float32 wind_dir;
	float32 scale_amplitude;
	float32 scale_speed;
	float32 scale_wave_length;
};

struct iWaterWave
{
	float32 phase;
	float32 amplitude;
	float32 frequency_x;
	float32 frequency_z;
};

struct xWaterTileSet
{
	float32 y;
	int32 gridx;
	int32 gridz;
	int32 sizex;
	int32 sizez;
	uint32 bitfield[1];
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

struct tile_region
{
	uint8 lod;
	uint8 repeat_power;
	uint8 flags;
	uint8 pad1;
	uint16 gridx;
	uint16 gridz;
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

struct tile_batch
{
	int32 flags;
	xWaterTileSet* tileset;
	tile_quadtree qtree;
	int32 tiles_size;
	xSphere bound;
	float32 plane_y;
	xWaterShading shading;
	facade_entity* refract_ents;
	int32 refract_ents_size;
	facade_entity* reflect_ents;
	int32 reflect_ents_size;
	iWaterTile itiles[128][6];
	int32 itiles_used[6];
	int32 min_lod;
	int32 max_lod;
	int32 itiles_used_total;
};

struct water_motion_group
{
	int32 flags;
	float32* mesh[6];
	tile_batch* batches;
	int32 batches_size;
	float32 update_dt;
	iWaterWave waves[12];
	float32 wave_speeds[12];
	float32 max_height;
	float32 lod_dist_min;
	float32 lod_dist_interval;
	float32 lod_scale;
	int32 shimmer;
	int32 refract_glow;
	int32 tiles_used;
	int32 min_lod;
	int32 max_lod;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
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
	_class_1 anim_coll;
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

struct facade_entity
{
	int32 flags;
	xEnt* ent;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xWaterShading
{
	xVec3 light_dir;
	float32 color_mul_red;
	float32 color_mul_green;
	float32 color_mul_blue;
	float32 light_ambient;
	float32 light_diffuse;
	float32 light_transmissive;
	float32 refraction_index;
	float32 reflectance_min;
	float32 reflect_intensity;
	float32 reflect_magnitude;
	float32 refract_min;
	float32 refract_max;
	float32 refract_dist_min;
	float32 refract_dist_max;
	float32 refract_ymax;
	RwBlendFunction blend_src;
	RwBlendFunction blend_dst;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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
		_class_4 tuv;
		tri_data_1 tri;
	};
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
};

enum xCamOrientType
{
	XCAM_ORIENT_INVALID = 0xffffffff,
	XCAM_ORIENT_QUAT,
	XCAM_ORIENT_EULER,
	XCAM_ORIENT_MAX
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

struct zAssetPickupTable
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct zCutsceneMgr
{
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

struct iWaterInstancedWaves
{
	float32 startcos[4];
	float32 startsin[4];
	float32 dxcos[4];
	float32 dxsin[4];
	float32 dzcos[4];
	float32 dzsin[4];
	float32 xfreq[4];
	float32 zfreq[4];
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	uint8 pad[3];
	void* moprops;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct tile_quadtree
{
	float32 plane_y;
	float32 scale;
	int32 rootx;
	int32 rootz;
	int32 tree_depth;
	uint8** levels;
	tile_region* region;
	tile_region* end_region;
	xVec4* frust_planes;
	float32 lod_dist_min;
	float32 lod_dist_scale;
	int32 min_tess_level_sum;
	xVec3 cam_loc;

	void gather_regions_recur(int32 depth, int32 ix, int32 iz, gather_args& args);
	int32 gather_regions(tile_region* regions, int32 max_regions, float32 lod_dist_min, float32 lod_dist_scale, int32 min_tess_level_sum, xVec3& cam_loc, xVec4* frust_planes);
	void create(xWaterTileSet& tileset, float32 scale);
};

struct _class_0
{
	union
	{
		xVec3 cart;
		xCamCoordCylinder cylinder;
		xCamCoordSphere sphere;
	};
};

struct xFFX
{
};

struct xCamOrientEuler
{
	float32 yaw;
	float32 pitch;
	float32 roll;
};

struct xWaterSettings
{
	uint8 allow_overfill;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xWaterEnvironment
{
	xEnt** refract_ents;
	int32 refract_ents_size;
	xEnt** reflect_ents;
	int32 reflect_ents_size;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct gather_args
{
	point_data point[4];
	int32 lod_min;
	int32 lod_max;
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
	_class_0 coord;
	_class_2 orient;
	xCamConfigCommon cfg_common;
	int32 group_index;
	int32 group_flags;
	xCamBlend* blender;
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

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RpSector
{
	int32 type;
};

struct _class_1
{
	xVec3* verts;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _tagiPad
{
	int32 port;
};

struct point_data
{
	uint8 clip_flags;
	uint8 lod;
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
};

struct xCamBlend : xCam
{
	xCam* src;
	xCam* dst;
	float32 time;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _class_2
{
	union
	{
		xQuat quat;
		xCamOrientEuler euler;
	};
};

struct xGrid
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xCamConfigCommon
{
	uint8 priority;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 blend_time;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct xFXFastRaster
{
	RwRaster* src;
	RwRaster* dst;
	uint32 fbmsk;
	uint32 test;
	uint32 old_alpha_1;
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

struct xEntBoulder
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct zEntHangable
{
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

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct anim_coll_data
{
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct ocean_wave
{
	float32 amplitude;
	float32 phase;
	float32 frequency;
	float32 dir;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
};

enum xCamCoordType
{
	XCAM_COORD_INVALID = 0xffffffff,
	XCAM_COORD_CART,
	XCAM_COORD_CYLINDER,
	XCAM_COORD_SPHERE,
	XCAM_COORD_MAX
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct zPlatform
{
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
};

struct xClumpCollBSPTriangle
{
	_class_3 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct vidmode_data
{
	int32 refract_width;
	int32 refract_height;
	int32 reflect_width;
	int32 reflect_height;
	float32 uscale;
	float32 vscale;
};

struct xCoef
{
	float32 a[4];
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

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct _class_3
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xCamCoordCylinder
{
	xVec3 origin;
	float32 dist;
	float32 height;
	float32 theta;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct rxReq
{
};

enum _tagGameVidMode
{
	eGameVidModeNTSC,
	eGameVidModePAL
};

struct xCamCoordSphere
{
	xVec3 origin;
	float32 dist;
	xQuat dir;
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
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

struct _class_4
{
	float32 t;
	float32 u;
	float32 v;
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
water_motion_group motion_groups[16];
int32 motion_groups_size;
xMat4x3 current_cam_mat;
uint8 allocation_ship_sailed;
float32 tile_width;
xVec4 current_frustum_planes[6];
xVec2 blur_offsets[4];
xFXCameraTexture refract_tv;
xFXCameraTexture reflect_tv;
xMat4x3 uvscale_mat;
uint8 downloaded_frustum_planes;
uint32 skydome_old_test;
uint32 skydome_old_blend_mode;
int32 skydome_model_alpha;
uint32 gActiveHeap;
uint32 ourGlobals[4096];
_tagGameVidMode gVidMode;
zGlobals globals;
xMat4x3 g_I3;
void(*xSkyDome_EmptyRender)(xEnt*);
uint8 HDR_brightening;
xGlobals* xglobals;
uint32 lastSetFBMSK;
<unknown fundamental type (0xa510)>* _rwDMAGateSlot;
long32 skyTest_1;
xColor_tag g_WHITE;
xColor_tag g_BLACK;

void gather_regions_recur(int32 depth, int32 ix, int32 iz, gather_args& args);
void downsample_level(uint8* out_nodes, uint8* in_nodes, int32 in_depth);
void load_tileset(uint8* nodes, int32 depth, xWaterTileSet& tileset);
int32 gather_regions(tile_region* regions, int32 max_regions, float32 lod_dist_min, float32 lod_dist_scale, int32 min_tess_level_sum, xVec3& cam_loc, xVec4* frust_planes);
void create(xWaterTileSet& tileset, float32 scale);
void xWaterSetBodyVisibility(int32 body_id, uint8 visible);
int32 xWaterAddBody(int32 motion_type, xWaterSettings& settings, xWaterShading& shading, xWaterEnvironment& env, xWaterTileSet* tileset);
int32 xWaterAddMotion(xWaterMotion& motion);
void xWaterDestroyTileSet(xWaterTileSet* tileset);
xWaterTileSet* xWaterCreateTileSet(RpAtomic* atomic, xMat4x3& mat);
void xWaterRender();
void xWaterUpdate(float32 dt);
void xWaterSceneExit();
void xWaterPostSetup();
void xWaterSceneEnter();
void setup_water_entity(tile_batch& batch, facade_entity& ent, uint8 refract);
void setup_water_atomic(RpAtomic* atomic, xMat4x3& mat);
void transform_atomic_vertices(RpAtomic* atomic, xMat4x3& mat);
void render_batch_pipeline(water_motion_group& motion_group, tile_batch& batch);
void render_tile_lod(water_motion_group& motion_group, tile_batch& batch, int32 lod, xMat4x3& shade_view_mat);
void get_lod_blend_range(float32& dist_min, float32& dist_max, int32 lod, float32 lod_dist_min, float32 lod_dist_interval);
void refresh_motion_group(water_motion_group& motion_group);
void gather_batch_tiles(water_motion_group& motion_group, tile_batch& batch);
void refresh_heightmaps(water_motion_group& motion_group, int32 min_lod, int32 max_lod);
void downsample_mesh(float32* By, float32* Ay, int32 subdiv_level);
float32* create_mesh(float32* out, float32* in, int32 in_subdiv);
void wrap_mesh(float32* out, float32* in, int32 in_subdiv);
void prune_odds(float32* out, float32* in, int32 in_subdiv);
void triangle_render_1bit(uint8* bits, int32 stride, float32 Ax, float32 Ay, float32 Bx, float32 By, float32 Cx, float32 Cy);
uint8 render_facades(water_motion_group& motion_group, xMat4x3& shade_view_mat, xMat4x3& cam_mat, xVec2& view_window, float32 plane_y, xSphere& bound_sphere, facade_entity* refract_ents, int32 refract_ents_size, facade_entity* reflect_ents, int32 reflect_ents_size);
int32 render_reflect_skydomes(water_motion_group& motion_group, facade_entity* ents, int32 ents_size, xMat4x3& mat);
int32 render_refract_skydomes(facade_entity* ents, int32 ents_size);
void render_model_now(xModelInstance& model, int32 flags, xMat4x3* transform_mat);
void heightmap_animate_waves(float32* Ay_out, float32* Nx_out, float32* Ny_out, float32* Nz_out, int32 subdiv_level, float32 scale, iWaterWave* waves);
void convert_wave(iWaterWave& wave, float32 wave_length, float32 dir);
void generate_random_ocean_wave(ocean_wave& w, xWaterMotion& motion);

// gather_regions_recur__Q220@unnamed@xWater_cpp@13tile_quadtreeCFiiiRCQ320@unnamed@xWater_cpp@13tile_quadtree11gather_args
// Start address: 0x489e60
void tile_quadtree::gather_regions_recur(int32 depth, int32 ix, int32 iz, gather_args& args)
{
	int32 level;
	int32 clip_union;
	int32 width;
	int32 tesselevel;
	int32 cdepth;
	int32 clevel;
	int32 cwidth;
	int32 cix;
	int32 ciz;
	int32 center_ix;
	int32 center_iz;
	int32 left_clip_flags;
	int32 right_clip_flags;
	int32 top_clip_flags;
	int32 bottom_clip_flags;
	int32 left_lod;
	int32 right_lod;
	int32 top_lod;
	int32 bottom_lod;
	float32 x;
	float32 z;
	float32 dxz;
	float32 half_dxz;
	gather_args cargs;
	int32 cclip_inter;
	// Line 4413, Address: 0x489e60, Func Offset: 0
	// Line 4414, Address: 0x489e64, Func Offset: 0x4
	// Line 4413, Address: 0x489e68, Func Offset: 0x8
	// Line 4414, Address: 0x489e9c, Func Offset: 0x3c
	// Line 4413, Address: 0x489ea0, Func Offset: 0x40
	// Line 4414, Address: 0x489ea4, Func Offset: 0x44
	// Line 4413, Address: 0x489ea8, Func Offset: 0x48
	// Line 4421, Address: 0x489ec4, Func Offset: 0x64
	// Line 4413, Address: 0x489ec8, Func Offset: 0x68
	// Line 4414, Address: 0x489ecc, Func Offset: 0x6c
	// Line 4413, Address: 0x489ed0, Func Offset: 0x70
	// Line 4421, Address: 0x489ed4, Func Offset: 0x74
	// Line 4413, Address: 0x489ed8, Func Offset: 0x78
	// Line 4414, Address: 0x489ee8, Func Offset: 0x88
	// Line 4425, Address: 0x489eec, Func Offset: 0x8c
	// Line 4428, Address: 0x489ef4, Func Offset: 0x94
	// Line 4441, Address: 0x489ef8, Func Offset: 0x98
	// Line 4428, Address: 0x489efc, Func Offset: 0x9c
	// Line 4441, Address: 0x489f00, Func Offset: 0xa0
	// Line 4433, Address: 0x489f08, Func Offset: 0xa8
	// Line 4428, Address: 0x489f0c, Func Offset: 0xac
	// Line 4441, Address: 0x489f10, Func Offset: 0xb0
	// Line 4433, Address: 0x489f30, Func Offset: 0xd0
	// Line 4441, Address: 0x489f34, Func Offset: 0xd4
	// Line 4443, Address: 0x489f5c, Func Offset: 0xfc
	// Line 4445, Address: 0x489f78, Func Offset: 0x118
	// Line 4449, Address: 0x489f94, Func Offset: 0x134
	// Line 4453, Address: 0x489fac, Func Offset: 0x14c
	// Line 4455, Address: 0x489fb0, Func Offset: 0x150
	// Line 4454, Address: 0x489fb4, Func Offset: 0x154
	// Line 4453, Address: 0x489fb8, Func Offset: 0x158
	// Line 4468, Address: 0x489fc0, Func Offset: 0x160
	// Line 4456, Address: 0x489fc4, Func Offset: 0x164
	// Line 4455, Address: 0x489fc8, Func Offset: 0x168
	// Line 4456, Address: 0x489fcc, Func Offset: 0x16c
	// Line 4455, Address: 0x489fd0, Func Offset: 0x170
	// Line 4469, Address: 0x489fd4, Func Offset: 0x174
	// Line 4456, Address: 0x489fd8, Func Offset: 0x178
	// Line 4463, Address: 0x489fdc, Func Offset: 0x17c
	// Line 4469, Address: 0x489fe0, Func Offset: 0x180
	// Line 4456, Address: 0x489fe4, Func Offset: 0x184
	// Line 4469, Address: 0x489ff4, Func Offset: 0x194
	// Line 4456, Address: 0x489ff8, Func Offset: 0x198
	// Line 4459, Address: 0x48a000, Func Offset: 0x1a0
	// Line 4469, Address: 0x48a004, Func Offset: 0x1a4
	// Line 4472, Address: 0x48a008, Func Offset: 0x1a8
	// Line 4463, Address: 0x48a010, Func Offset: 0x1b0
	// Line 4458, Address: 0x48a014, Func Offset: 0x1b4
	// Line 4463, Address: 0x48a018, Func Offset: 0x1b8
	// Line 4459, Address: 0x48a01c, Func Offset: 0x1bc
	// Line 4458, Address: 0x48a020, Func Offset: 0x1c0
	// Line 4459, Address: 0x48a024, Func Offset: 0x1c4
	// Line 4463, Address: 0x48a028, Func Offset: 0x1c8
	// Line 4460, Address: 0x48a040, Func Offset: 0x1e0
	// Line 4463, Address: 0x48a044, Func Offset: 0x1e4
	// Line 4469, Address: 0x48a04c, Func Offset: 0x1ec
	// Line 4468, Address: 0x48a050, Func Offset: 0x1f0
	// Line 4469, Address: 0x48a054, Func Offset: 0x1f4
	// Line 4461, Address: 0x48a058, Func Offset: 0x1f8
	// Line 4460, Address: 0x48a05c, Func Offset: 0x1fc
	// Line 4469, Address: 0x48a060, Func Offset: 0x200
	// Line 4468, Address: 0x48a064, Func Offset: 0x204
	// Line 4461, Address: 0x48a070, Func Offset: 0x210
	// Line 4468, Address: 0x48a074, Func Offset: 0x214
	// Line 4472, Address: 0x48a088, Func Offset: 0x228
	// Line 4468, Address: 0x48a08c, Func Offset: 0x22c
	// Line 4472, Address: 0x48a09c, Func Offset: 0x23c
	// Line 4473, Address: 0x48a200, Func Offset: 0x3a0
	// Line 4472, Address: 0x48a27c, Func Offset: 0x41c
	// Line 4473, Address: 0x48a294, Func Offset: 0x434
	// Line 4476, Address: 0x48a2b0, Func Offset: 0x450
	// Line 4478, Address: 0x48a2c0, Func Offset: 0x460
	// Line 4480, Address: 0x48a2d0, Func Offset: 0x470
	// Line 4483, Address: 0x48a2ec, Func Offset: 0x48c
	// Line 4485, Address: 0x48a300, Func Offset: 0x4a0
	// Line 4487, Address: 0x48a310, Func Offset: 0x4b0
	// Line 4490, Address: 0x48a31c, Func Offset: 0x4bc
	// Line 4492, Address: 0x48a32c, Func Offset: 0x4cc
	// Line 4494, Address: 0x48a33c, Func Offset: 0x4dc
	// Line 4497, Address: 0x48a348, Func Offset: 0x4e8
	// Line 4499, Address: 0x48a35c, Func Offset: 0x4fc
	// Line 4501, Address: 0x48a368, Func Offset: 0x508
	// Line 4509, Address: 0x48a374, Func Offset: 0x514
	// Line 4511, Address: 0x48a37c, Func Offset: 0x51c
	// Line 4513, Address: 0x48a38c, Func Offset: 0x52c
	// Line 4516, Address: 0x48a394, Func Offset: 0x534
	// Line 4518, Address: 0x48a39c, Func Offset: 0x53c
	// Line 4515, Address: 0x48a3a0, Func Offset: 0x540
	// Line 4517, Address: 0x48a3ac, Func Offset: 0x54c
	// Line 4518, Address: 0x48a3b0, Func Offset: 0x550
	// Line 4519, Address: 0x48a3b4, Func Offset: 0x554
	// Line 4516, Address: 0x48a3b8, Func Offset: 0x558
	// Line 4520, Address: 0x48a3bc, Func Offset: 0x55c
	// Line 4515, Address: 0x48a3c0, Func Offset: 0x560
	// Line 4520, Address: 0x48a3c4, Func Offset: 0x564
	// Line 4521, Address: 0x48a3c8, Func Offset: 0x568
	// Line 4522, Address: 0x48a3d0, Func Offset: 0x570
	// Line 4521, Address: 0x48a3d4, Func Offset: 0x574
	// Line 4522, Address: 0x48a3d8, Func Offset: 0x578
	// Line 4521, Address: 0x48a3e0, Func Offset: 0x580
	// Line 4522, Address: 0x48a3e4, Func Offset: 0x584
	// Line 4521, Address: 0x48a3e8, Func Offset: 0x588
	// Line 4522, Address: 0x48a3ec, Func Offset: 0x58c
	// Line 4528, Address: 0x48a504, Func Offset: 0x6a4
	// Line 4530, Address: 0x48a510, Func Offset: 0x6b0
	// Line 4532, Address: 0x48a528, Func Offset: 0x6c8
	// Line 4536, Address: 0x48a530, Func Offset: 0x6d0
	// Line 4534, Address: 0x48a534, Func Offset: 0x6d4
	// Line 4539, Address: 0x48a538, Func Offset: 0x6d8
	// Line 4537, Address: 0x48a53c, Func Offset: 0x6dc
	// Line 4534, Address: 0x48a540, Func Offset: 0x6e0
	// Line 4536, Address: 0x48a544, Func Offset: 0x6e4
	// Line 4535, Address: 0x48a548, Func Offset: 0x6e8
	// Line 4537, Address: 0x48a54c, Func Offset: 0x6ec
	// Line 4538, Address: 0x48a550, Func Offset: 0x6f0
	// Line 4539, Address: 0x48a554, Func Offset: 0x6f4
	// Line 4536, Address: 0x48a558, Func Offset: 0x6f8
	// Line 4534, Address: 0x48a55c, Func Offset: 0x6fc
	// Line 4539, Address: 0x48a560, Func Offset: 0x700
	// Line 4540, Address: 0x48a564, Func Offset: 0x704
	// Line 4536, Address: 0x48a568, Func Offset: 0x708
	// Line 4540, Address: 0x48a56c, Func Offset: 0x70c
	// Line 4541, Address: 0x48a570, Func Offset: 0x710
	// Line 4540, Address: 0x48a574, Func Offset: 0x714
	// Line 4541, Address: 0x48a578, Func Offset: 0x718
	// Line 4540, Address: 0x48a580, Func Offset: 0x720
	// Line 4541, Address: 0x48a584, Func Offset: 0x724
	// Line 4540, Address: 0x48a588, Func Offset: 0x728
	// Line 4541, Address: 0x48a58c, Func Offset: 0x72c
	// Line 4547, Address: 0x48a6a0, Func Offset: 0x840
	// Line 4549, Address: 0x48a6ac, Func Offset: 0x84c
	// Line 4551, Address: 0x48a6c0, Func Offset: 0x860
	// Line 4557, Address: 0x48a6c8, Func Offset: 0x868
	// Line 4553, Address: 0x48a6cc, Func Offset: 0x86c
	// Line 4558, Address: 0x48a6d0, Func Offset: 0x870
	// Line 4555, Address: 0x48a6d4, Func Offset: 0x874
	// Line 4558, Address: 0x48a6d8, Func Offset: 0x878
	// Line 4557, Address: 0x48a6dc, Func Offset: 0x87c
	// Line 4553, Address: 0x48a6e0, Func Offset: 0x880
	// Line 4554, Address: 0x48a6e4, Func Offset: 0x884
	// Line 4555, Address: 0x48a6e8, Func Offset: 0x888
	// Line 4556, Address: 0x48a6ec, Func Offset: 0x88c
	// Line 4558, Address: 0x48a6f0, Func Offset: 0x890
	// Line 4557, Address: 0x48a6f4, Func Offset: 0x894
	// Line 4559, Address: 0x48a6f8, Func Offset: 0x898
	// Line 4557, Address: 0x48a6fc, Func Offset: 0x89c
	// Line 4559, Address: 0x48a700, Func Offset: 0x8a0
	// Line 4560, Address: 0x48a704, Func Offset: 0x8a4
	// Line 4559, Address: 0x48a708, Func Offset: 0x8a8
	// Line 4560, Address: 0x48a70c, Func Offset: 0x8ac
	// Line 4559, Address: 0x48a714, Func Offset: 0x8b4
	// Line 4560, Address: 0x48a718, Func Offset: 0x8b8
	// Line 4559, Address: 0x48a71c, Func Offset: 0x8bc
	// Line 4560, Address: 0x48a720, Func Offset: 0x8c0
	// Line 4566, Address: 0x48a834, Func Offset: 0x9d4
	// Line 4568, Address: 0x48a840, Func Offset: 0x9e0
	// Line 4570, Address: 0x48a858, Func Offset: 0x9f8
	// Line 4576, Address: 0x48a860, Func Offset: 0xa00
	// Line 4572, Address: 0x48a864, Func Offset: 0xa04
	// Line 4574, Address: 0x48a868, Func Offset: 0xa08
	// Line 4576, Address: 0x48a870, Func Offset: 0xa10
	// Line 4572, Address: 0x48a874, Func Offset: 0xa14
	// Line 4573, Address: 0x48a878, Func Offset: 0xa18
	// Line 4575, Address: 0x48a87c, Func Offset: 0xa1c
	// Line 4577, Address: 0x48a880, Func Offset: 0xa20
	// Line 4576, Address: 0x48a884, Func Offset: 0xa24
	// Line 4578, Address: 0x48a888, Func Offset: 0xa28
	// Line 4574, Address: 0x48a88c, Func Offset: 0xa2c
	// Line 4578, Address: 0x48a890, Func Offset: 0xa30
	// Line 4579, Address: 0x48a8a0, Func Offset: 0xa40
	// Line 4578, Address: 0x48a8a4, Func Offset: 0xa44
	// Line 4579, Address: 0x48a8a8, Func Offset: 0xa48
	// Line 4578, Address: 0x48a8b0, Func Offset: 0xa50
	// Line 4579, Address: 0x48a8b4, Func Offset: 0xa54
	// Line 4578, Address: 0x48a8b8, Func Offset: 0xa58
	// Line 4579, Address: 0x48a8bc, Func Offset: 0xa5c
	// Line 4478, Address: 0x48a9d0, Func Offset: 0xb70
	// Line 4579, Address: 0x48a9e4, Func Offset: 0xb84
	// Line 4478, Address: 0x48aa0c, Func Offset: 0xbac
	// Line 4579, Address: 0x48aa34, Func Offset: 0xbd4
	// Line 4478, Address: 0x48aa3c, Func Offset: 0xbdc
	// Line 4579, Address: 0x48aa54, Func Offset: 0xbf4
	// Line 4478, Address: 0x48aa7c, Func Offset: 0xc1c
	// Line 4579, Address: 0x48aaa4, Func Offset: 0xc44
	// Line 4478, Address: 0x48aaac, Func Offset: 0xc4c
	// Line 4579, Address: 0x48aac4, Func Offset: 0xc64
	// Line 4478, Address: 0x48aaec, Func Offset: 0xc8c
	// Line 4579, Address: 0x48ab14, Func Offset: 0xcb4
	// Line 4478, Address: 0x48ab1c, Func Offset: 0xcbc
	// Line 4480, Address: 0x48ab40, Func Offset: 0xce0
	// Line 4579, Address: 0x48ab64, Func Offset: 0xd04
	// Line 4480, Address: 0x48ab68, Func Offset: 0xd08
	// Line 4579, Address: 0x48ab94, Func Offset: 0xd34
	// Line 4480, Address: 0x48ab98, Func Offset: 0xd38
	// Line 4579, Address: 0x48aba0, Func Offset: 0xd40
	// Line 4480, Address: 0x48abac, Func Offset: 0xd4c
	// Line 4579, Address: 0x48abb0, Func Offset: 0xd50
	// Line 4480, Address: 0x48abd4, Func Offset: 0xd74
	// Line 4485, Address: 0x48abe4, Func Offset: 0xd84
	// Line 4579, Address: 0x48abf8, Func Offset: 0xd98
	// Line 4485, Address: 0x48ac1c, Func Offset: 0xdbc
	// Line 4579, Address: 0x48ac40, Func Offset: 0xde0
	// Line 4485, Address: 0x48ac48, Func Offset: 0xde8
	// Line 4579, Address: 0x48ac68, Func Offset: 0xe08
	// Line 4485, Address: 0x48ac80, Func Offset: 0xe20
	// Line 4579, Address: 0x48ac98, Func Offset: 0xe38
	// Line 4485, Address: 0x48aca0, Func Offset: 0xe40
	// Line 4579, Address: 0x48acc0, Func Offset: 0xe60
	// Line 4485, Address: 0x48acd8, Func Offset: 0xe78
	// Line 4579, Address: 0x48acf0, Func Offset: 0xe90
	// Line 4485, Address: 0x48acf8, Func Offset: 0xe98
	// Line 4487, Address: 0x48ad3c, Func Offset: 0xedc
	// Line 4579, Address: 0x48ad5c, Func Offset: 0xefc
	// Line 4487, Address: 0x48ad60, Func Offset: 0xf00
	// Line 4579, Address: 0x48ad78, Func Offset: 0xf18
	// Line 4487, Address: 0x48ad7c, Func Offset: 0xf1c
	// Line 4579, Address: 0x48ad84, Func Offset: 0xf24
	// Line 4487, Address: 0x48ad90, Func Offset: 0xf30
	// Line 4579, Address: 0x48ad94, Func Offset: 0xf34
	// Line 4487, Address: 0x48adbc, Func Offset: 0xf5c
	// Line 4492, Address: 0x48adc8, Func Offset: 0xf68
	// Line 4579, Address: 0x48ade0, Func Offset: 0xf80
	// Line 4492, Address: 0x48adf8, Func Offset: 0xf98
	// Line 4579, Address: 0x48ae10, Func Offset: 0xfb0
	// Line 4492, Address: 0x48ae18, Func Offset: 0xfb8
	// Line 4579, Address: 0x48ae3c, Func Offset: 0xfdc
	// Line 4492, Address: 0x48ae54, Func Offset: 0xff4
	// Line 4579, Address: 0x48ae6c, Func Offset: 0x100c
	// Line 4492, Address: 0x48ae74, Func Offset: 0x1014
	// Line 4579, Address: 0x48ae98, Func Offset: 0x1038
	// Line 4492, Address: 0x48aeb0, Func Offset: 0x1050
	// Line 4579, Address: 0x48aec8, Func Offset: 0x1068
	// Line 4492, Address: 0x48aed0, Func Offset: 0x1070
	// Line 4494, Address: 0x48af14, Func Offset: 0x10b4
	// Line 4579, Address: 0x48af28, Func Offset: 0x10c8
	// Line 4494, Address: 0x48af2c, Func Offset: 0x10cc
	// Line 4579, Address: 0x48af40, Func Offset: 0x10e0
	// Line 4494, Address: 0x48af44, Func Offset: 0x10e4
	// Line 4579, Address: 0x48af4c, Func Offset: 0x10ec
	// Line 4494, Address: 0x48af58, Func Offset: 0x10f8
	// Line 4579, Address: 0x48af5c, Func Offset: 0x10fc
	// Line 4494, Address: 0x48af84, Func Offset: 0x1124
	// Line 4499, Address: 0x48af90, Func Offset: 0x1130
	// Line 4579, Address: 0x48afa8, Func Offset: 0x1148
	// Line 4499, Address: 0x48afc0, Func Offset: 0x1160
	// Line 4579, Address: 0x48afd8, Func Offset: 0x1178
	// Line 4499, Address: 0x48afe0, Func Offset: 0x1180
	// Line 4579, Address: 0x48affc, Func Offset: 0x119c
	// Line 4499, Address: 0x48b014, Func Offset: 0x11b4
	// Line 4579, Address: 0x48b02c, Func Offset: 0x11cc
	// Line 4499, Address: 0x48b034, Func Offset: 0x11d4
	// Line 4579, Address: 0x48b050, Func Offset: 0x11f0
	// Line 4499, Address: 0x48b068, Func Offset: 0x1208
	// Line 4579, Address: 0x48b080, Func Offset: 0x1220
	// Line 4499, Address: 0x48b088, Func Offset: 0x1228
	// Line 4501, Address: 0x48b0ac, Func Offset: 0x124c
	// Line 4579, Address: 0x48b0c4, Func Offset: 0x1264
	// Line 4501, Address: 0x48b0c8, Func Offset: 0x1268
	// Line 4579, Address: 0x48b0e0, Func Offset: 0x1280
	// Line 4501, Address: 0x48b0e4, Func Offset: 0x1284
	// Line 4579, Address: 0x48b0ec, Func Offset: 0x128c
	// Line 4501, Address: 0x48b0f8, Func Offset: 0x1298
	// Line 4579, Address: 0x48b0fc, Func Offset: 0x129c
	// Line 4501, Address: 0x48b124, Func Offset: 0x12c4
	// Line 4579, Address: 0x48b130, Func Offset: 0x12d0
	// Line 4522, Address: 0x48b13c, Func Offset: 0x12dc
	// Line 4579, Address: 0x48b140, Func Offset: 0x12e0
	// Line 4523, Address: 0x48b184, Func Offset: 0x1324
	// Line 4579, Address: 0x48b194, Func Offset: 0x1334
	// Line 4541, Address: 0x48b1c8, Func Offset: 0x1368
	// Line 4579, Address: 0x48b1cc, Func Offset: 0x136c
	// Line 4542, Address: 0x48b210, Func Offset: 0x13b0
	// Line 4579, Address: 0x48b220, Func Offset: 0x13c0
	// Line 4560, Address: 0x48b254, Func Offset: 0x13f4
	// Line 4579, Address: 0x48b258, Func Offset: 0x13f8
	// Line 4561, Address: 0x48b29c, Func Offset: 0x143c
	// Line 4579, Address: 0x48b2ac, Func Offset: 0x144c
	// Line 4580, Address: 0x48b32c, Func Offset: 0x14cc
	// Line 4584, Address: 0x48b344, Func Offset: 0x14e4
	// Line 4588, Address: 0x48b35c, Func Offset: 0x14fc
	// Line 4589, Address: 0x48b368, Func Offset: 0x1508
	// Line 4590, Address: 0x48b370, Func Offset: 0x1510
	// Line 4591, Address: 0x48b37c, Func Offset: 0x151c
	// Line 4592, Address: 0x48b388, Func Offset: 0x1528
	// Line 4593, Address: 0x48b38c, Func Offset: 0x152c
	// Line 4595, Address: 0x48b394, Func Offset: 0x1534
	// Line 4596, Address: 0x48b39c, Func Offset: 0x153c
	// Line 4594, Address: 0x48b3ac, Func Offset: 0x154c
	// Line 4596, Address: 0x48b3b8, Func Offset: 0x1558
	// Func End, Address: 0x48b418, Func Offset: 0x15b8
}

// downsample_level__Q220@unnamed@xWater_cpp@13tile_quadtreeFPUcPCUci
// Start address: 0x48b420
void downsample_level(uint8* out_nodes, uint8* in_nodes, int32 in_depth)
{
	int32 out_depth;
	int32 out_width;
	int32 iz;
	int32 ix;
	uint8 in_node;
	int32 union_flag;
	int32 out_sum;
	int32 out_union;
	int32 out_inter;
	// Line 4289, Address: 0x48b420, Func Offset: 0
	// Line 4290, Address: 0x48b424, Func Offset: 0x4
	// Line 4289, Address: 0x48b428, Func Offset: 0x8
	// Line 4291, Address: 0x48b42c, Func Offset: 0xc
	// Line 4289, Address: 0x48b430, Func Offset: 0x10
	// Line 4291, Address: 0x48b434, Func Offset: 0x14
	// Line 4289, Address: 0x48b438, Func Offset: 0x18
	// Line 4295, Address: 0x48b43c, Func Offset: 0x1c
	// Line 4289, Address: 0x48b440, Func Offset: 0x20
	// Line 4295, Address: 0x48b450, Func Offset: 0x30
	// Line 4303, Address: 0x48b464, Func Offset: 0x44
	// Line 4331, Address: 0x48b470, Func Offset: 0x50
	// Line 4297, Address: 0x48b49c, Func Offset: 0x7c
	// Line 4331, Address: 0x48b4a0, Func Offset: 0x80
	// Line 4305, Address: 0x48b4b4, Func Offset: 0x94
	// Line 4331, Address: 0x48b4b8, Func Offset: 0x98
	// Line 4310, Address: 0x48b4c4, Func Offset: 0xa4
	// Line 4331, Address: 0x48b4c8, Func Offset: 0xa8
	// Line 4315, Address: 0x48b4d4, Func Offset: 0xb4
	// Line 4331, Address: 0x48b4d8, Func Offset: 0xb8
	// Line 4320, Address: 0x48b4e8, Func Offset: 0xc8
	// Line 4331, Address: 0x48b4ec, Func Offset: 0xcc
	// Line 4330, Address: 0x48b504, Func Offset: 0xe4
	// Line 4331, Address: 0x48b508, Func Offset: 0xe8
	// Line 4330, Address: 0x48b50c, Func Offset: 0xec
	// Line 4331, Address: 0x48b510, Func Offset: 0xf0
	// Line 4332, Address: 0x48b530, Func Offset: 0x110
	// Line 4333, Address: 0x48b540, Func Offset: 0x120
	// Func End, Address: 0x48b564, Func Offset: 0x144
}

// load_tileset__Q220@unnamed@xWater_cpp@13tile_quadtreeFPUciRC13xWaterTileSet
// Start address: 0x48b570
void load_tileset(uint8* nodes, int32 depth, xWaterTileSet& tileset)
{
	int32 stride;
	uint8* bits;
	int32 endix;
	int32 endiz;
	int32 iz;
	int32 ix;
	uint32 ixmod32;
	// Line 4261, Address: 0x48b570, Func Offset: 0
	// Line 4266, Address: 0x48b574, Func Offset: 0x4
	// Line 4261, Address: 0x48b578, Func Offset: 0x8
	// Line 4266, Address: 0x48b590, Func Offset: 0x20
	// Line 4270, Address: 0x48b5ac, Func Offset: 0x3c
	// Line 4273, Address: 0x48b5c8, Func Offset: 0x58
	// Line 4272, Address: 0x48b5cc, Func Offset: 0x5c
	// Line 4274, Address: 0x48b5d0, Func Offset: 0x60
	// Line 4283, Address: 0x48b5d8, Func Offset: 0x68
	// Line 4281, Address: 0x48b5dc, Func Offset: 0x6c
	// Line 4276, Address: 0x48b5e4, Func Offset: 0x74
	// Line 4278, Address: 0x48b5f8, Func Offset: 0x88
	// Line 4281, Address: 0x48b5fc, Func Offset: 0x8c
	// Line 4284, Address: 0x48b620, Func Offset: 0xb0
	// Line 4285, Address: 0x48b630, Func Offset: 0xc0
	// Line 4286, Address: 0x48b640, Func Offset: 0xd0
	// Func End, Address: 0x48b668, Func Offset: 0xf8
}

// gather_regions__Q220@unnamed@xWater_cpp@13tile_quadtreeCFPQ220@unnamed@xWater_cpp@11tile_regioniffiRC5xVec3PC5xVec4
// Start address: 0x48b670
int32 tile_quadtree::gather_regions(tile_region* regions, int32 max_regions, float32 lod_dist_min, float32 lod_dist_scale, int32 min_tess_level_sum, xVec3& cam_loc, xVec4* frust_planes)
{
	int32 width;
	float32 x;
	float32 z;
	float32 dxz;
	gather_args args;
	// Line 4227, Address: 0x48b670, Func Offset: 0
	// Line 4229, Address: 0x48b674, Func Offset: 0x4
	// Line 4227, Address: 0x48b678, Func Offset: 0x8
	// Line 4233, Address: 0x48b67c, Func Offset: 0xc
	// Line 4227, Address: 0x48b680, Func Offset: 0x10
	// Line 4233, Address: 0x48b684, Func Offset: 0x14
	// Line 4227, Address: 0x48b688, Func Offset: 0x18
	// Line 4233, Address: 0x48b68c, Func Offset: 0x1c
	// Line 4228, Address: 0x48b698, Func Offset: 0x28
	// Line 4237, Address: 0x48b69c, Func Offset: 0x2c
	// Line 4229, Address: 0x48b6a0, Func Offset: 0x30
	// Line 4243, Address: 0x48b6a4, Func Offset: 0x34
	// Line 4229, Address: 0x48b6a8, Func Offset: 0x38
	// Line 4230, Address: 0x48b6b0, Func Offset: 0x40
	// Line 4231, Address: 0x48b6b4, Func Offset: 0x44
	// Line 4232, Address: 0x48b6b8, Func Offset: 0x48
	// Line 4233, Address: 0x48b6bc, Func Offset: 0x4c
	// Line 4234, Address: 0x48b6c8, Func Offset: 0x58
	// Line 4239, Address: 0x48b6cc, Func Offset: 0x5c
	// Line 4243, Address: 0x48b6d0, Func Offset: 0x60
	// Line 4239, Address: 0x48b6d4, Func Offset: 0x64
	// Line 4237, Address: 0x48b6d8, Func Offset: 0x68
	// Line 4243, Address: 0x48b6e0, Func Offset: 0x70
	// Line 4239, Address: 0x48b6e4, Func Offset: 0x74
	// Line 4237, Address: 0x48b6e8, Func Offset: 0x78
	// Line 4239, Address: 0x48b6ec, Func Offset: 0x7c
	// Line 4240, Address: 0x48b6f4, Func Offset: 0x84
	// Line 4239, Address: 0x48b6f8, Func Offset: 0x88
	// Line 4240, Address: 0x48b6fc, Func Offset: 0x8c
	// Line 4243, Address: 0x48b704, Func Offset: 0x94
	// Line 4244, Address: 0x48b824, Func Offset: 0x1b4
	// Line 4243, Address: 0x48b8ac, Func Offset: 0x23c
	// Line 4244, Address: 0x48b8c4, Func Offset: 0x254
	// Line 4245, Address: 0x48b8e0, Func Offset: 0x270
	// Line 4246, Address: 0x48ba10, Func Offset: 0x3a0
	// Line 4245, Address: 0x48ba98, Func Offset: 0x428
	// Line 4246, Address: 0x48bab0, Func Offset: 0x440
	// Line 4247, Address: 0x48bacc, Func Offset: 0x45c
	// Line 4248, Address: 0x48bbfc, Func Offset: 0x58c
	// Line 4247, Address: 0x48bc84, Func Offset: 0x614
	// Line 4248, Address: 0x48bc9c, Func Offset: 0x62c
	// Line 4249, Address: 0x48bcb4, Func Offset: 0x644
	// Line 4250, Address: 0x48bde4, Func Offset: 0x774
	// Line 4249, Address: 0x48be6c, Func Offset: 0x7fc
	// Line 4250, Address: 0x48be84, Func Offset: 0x814
	// Line 4251, Address: 0x48bea0, Func Offset: 0x830
	// Line 4250, Address: 0x48beac, Func Offset: 0x83c
	// Line 4251, Address: 0x48beb0, Func Offset: 0x840
	// Line 4254, Address: 0x48c008, Func Offset: 0x998
	// Line 4257, Address: 0x48c02c, Func Offset: 0x9bc
	// Line 4255, Address: 0x48c064, Func Offset: 0x9f4
	// Line 4257, Address: 0x48c074, Func Offset: 0xa04
	// Line 4258, Address: 0x48c084, Func Offset: 0xa14
	// Func End, Address: 0x48c098, Func Offset: 0xa28
}

// create__Q220@unnamed@xWater_cpp@13tile_quadtreeFRC13xWaterTileSetf
// Start address: 0x48c0a0
void tile_quadtree::create(xWaterTileSet& tileset, float32 scale)
{
	int32 total_nodes;
	int32 depth;
	uint8* nodes;
	int32 depth;
	int32 depth;
	// Line 4182, Address: 0x48c0a0, Func Offset: 0
	// Line 4191, Address: 0x48c0a4, Func Offset: 0x4
	// Line 4182, Address: 0x48c0a8, Func Offset: 0x8
	// Line 4184, Address: 0x48c0ac, Func Offset: 0xc
	// Line 4182, Address: 0x48c0b0, Func Offset: 0x10
	// Line 4191, Address: 0x48c0b4, Func Offset: 0x14
	// Line 4182, Address: 0x48c0b8, Func Offset: 0x18
	// Line 4183, Address: 0x48c0c4, Func Offset: 0x24
	// Line 4186, Address: 0x48c0c8, Func Offset: 0x28
	// Line 4187, Address: 0x48c0cc, Func Offset: 0x2c
	// Line 4191, Address: 0x48c0d0, Func Offset: 0x30
	// Line 4184, Address: 0x48c0d4, Func Offset: 0x34
	// Line 4186, Address: 0x48c0dc, Func Offset: 0x3c
	// Line 4187, Address: 0x48c0e0, Func Offset: 0x40
	// Line 4191, Address: 0x48c0e4, Func Offset: 0x44
	// Line 4192, Address: 0x48c120, Func Offset: 0x80
	// Line 4193, Address: 0x48c168, Func Offset: 0xc8
	// Line 4198, Address: 0x48c174, Func Offset: 0xd4
	// Line 4199, Address: 0x48c178, Func Offset: 0xd8
	// Line 4203, Address: 0x48c17c, Func Offset: 0xdc
	// Line 4202, Address: 0x48c1c8, Func Offset: 0x128
	// Line 4203, Address: 0x48c1d0, Func Offset: 0x130
	// Line 4202, Address: 0x48c1dc, Func Offset: 0x13c
	// Line 4203, Address: 0x48c1e4, Func Offset: 0x144
	// Line 4202, Address: 0x48c1ec, Func Offset: 0x14c
	// Line 4203, Address: 0x48c1f4, Func Offset: 0x154
	// Line 4202, Address: 0x48c1fc, Func Offset: 0x15c
	// Line 4203, Address: 0x48c204, Func Offset: 0x164
	// Line 4202, Address: 0x48c20c, Func Offset: 0x16c
	// Line 4203, Address: 0x48c214, Func Offset: 0x174
	// Line 4202, Address: 0x48c21c, Func Offset: 0x17c
	// Line 4203, Address: 0x48c224, Func Offset: 0x184
	// Line 4202, Address: 0x48c22c, Func Offset: 0x18c
	// Line 4203, Address: 0x48c234, Func Offset: 0x194
	// Line 4202, Address: 0x48c23c, Func Offset: 0x19c
	// Line 4203, Address: 0x48c240, Func Offset: 0x1a0
	// Line 4202, Address: 0x48c244, Func Offset: 0x1a4
	// Line 4203, Address: 0x48c248, Func Offset: 0x1a8
	// Line 4202, Address: 0x48c26c, Func Offset: 0x1cc
	// Line 4203, Address: 0x48c270, Func Offset: 0x1d0
	// Line 4202, Address: 0x48c274, Func Offset: 0x1d4
	// Line 4203, Address: 0x48c278, Func Offset: 0x1d8
	// Line 4204, Address: 0x48c290, Func Offset: 0x1f0
	// Line 4207, Address: 0x48c2a0, Func Offset: 0x200
	// Line 4209, Address: 0x48c2bc, Func Offset: 0x21c
	// Line 4213, Address: 0x48c2d4, Func Offset: 0x234
	// Line 4212, Address: 0x48c2d8, Func Offset: 0x238
	// Line 4213, Address: 0x48c2dc, Func Offset: 0x23c
	// Line 4214, Address: 0x48c2e0, Func Offset: 0x240
	// Line 4213, Address: 0x48c2e4, Func Offset: 0x244
	// Line 4212, Address: 0x48c2e8, Func Offset: 0x248
	// Line 4213, Address: 0x48c2f0, Func Offset: 0x250
	// Line 4214, Address: 0x48c2f4, Func Offset: 0x254
	// Line 4217, Address: 0x48c308, Func Offset: 0x268
	// Line 4220, Address: 0x48c324, Func Offset: 0x284
	// Line 4222, Address: 0x48c330, Func Offset: 0x290
	// Func End, Address: 0x48c380, Func Offset: 0x2e0
}

// xWaterSetBodyVisibility__Fib
// Start address: 0x48c380
void xWaterSetBodyVisibility(int32 body_id, uint8 visible)
{
	tile_batch& batch;
	// Line 4168, Address: 0x48c380, Func Offset: 0
	// Line 4170, Address: 0x48c3b4, Func Offset: 0x34
	// Line 4171, Address: 0x48c3d0, Func Offset: 0x50
	// Line 4172, Address: 0x48c3dc, Func Offset: 0x5c
	// Func End, Address: 0x48c3e4, Func Offset: 0x64
}

// xWaterAddBody__FiRC14xWaterSettingsRC13xWaterShadingRC17xWaterEnvironmentPC13xWaterTileSetPCc
// Start address: 0x48c3f0
int32 xWaterAddBody(int32 motion_type, xWaterSettings& settings, xWaterShading& shading, xWaterEnvironment& env, xWaterTileSet* tileset)
{
	water_motion_group& motion_group;
	int32 batch_index;
	tile_batch& batch;
	// Line 4086, Address: 0x48c3f0, Func Offset: 0
	// Line 4089, Address: 0x48c3f4, Func Offset: 0x4
	// Line 4086, Address: 0x48c3f8, Func Offset: 0x8
	// Line 4089, Address: 0x48c3fc, Func Offset: 0xc
	// Line 4086, Address: 0x48c400, Func Offset: 0x10
	// Line 4089, Address: 0x48c420, Func Offset: 0x30
	// Line 4086, Address: 0x48c424, Func Offset: 0x34
	// Line 4089, Address: 0x48c428, Func Offset: 0x38
	// Line 4086, Address: 0x48c42c, Func Offset: 0x3c
	// Line 4089, Address: 0x48c430, Func Offset: 0x40
	// Line 4086, Address: 0x48c434, Func Offset: 0x44
	// Line 4089, Address: 0x48c438, Func Offset: 0x48
	// Line 4092, Address: 0x48c44c, Func Offset: 0x5c
	// Line 4095, Address: 0x48c458, Func Offset: 0x68
	// Line 4096, Address: 0x48c45c, Func Offset: 0x6c
	// Line 4097, Address: 0x48c460, Func Offset: 0x70
	// Line 4101, Address: 0x48c464, Func Offset: 0x74
	// Line 4096, Address: 0x48c468, Func Offset: 0x78
	// Line 4097, Address: 0x48c470, Func Offset: 0x80
	// Line 4096, Address: 0x48c478, Func Offset: 0x88
	// Line 4101, Address: 0x48c47c, Func Offset: 0x8c
	// Line 4105, Address: 0x48c4a8, Func Offset: 0xb8
	// Line 4101, Address: 0x48c4b4, Func Offset: 0xc4
	// Line 4105, Address: 0x48c4b8, Func Offset: 0xc8
	// Line 4106, Address: 0x48c4d8, Func Offset: 0xe8
	// Line 4093, Address: 0x48c554, Func Offset: 0x164
	// Line 4106, Address: 0x48c55c, Func Offset: 0x16c
	// Line 4093, Address: 0x48c564, Func Offset: 0x174
	// Line 4106, Address: 0x48c574, Func Offset: 0x184
	// Line 4102, Address: 0x48c588, Func Offset: 0x198
	// Line 4106, Address: 0x48c594, Func Offset: 0x1a4
	// Line 4107, Address: 0x48c5a4, Func Offset: 0x1b4
	// Line 4106, Address: 0x48c5ac, Func Offset: 0x1bc
	// Line 4107, Address: 0x48c5b0, Func Offset: 0x1c0
	// Line 4106, Address: 0x48c5c4, Func Offset: 0x1d4
	// Line 4107, Address: 0x48c5c8, Func Offset: 0x1d8
	// Line 4109, Address: 0x48c640, Func Offset: 0x250
	// Line 4111, Address: 0x48c650, Func Offset: 0x260
	// Line 4112, Address: 0x48c660, Func Offset: 0x270
	// Line 4116, Address: 0x48c664, Func Offset: 0x274
	// Line 4115, Address: 0x48c668, Func Offset: 0x278
	// Line 4116, Address: 0x48c66c, Func Offset: 0x27c
	// Line 4112, Address: 0x48c670, Func Offset: 0x280
	// Line 4115, Address: 0x48c678, Func Offset: 0x288
	// Line 4116, Address: 0x48c67c, Func Offset: 0x28c
	// Line 4118, Address: 0x48c6c8, Func Offset: 0x2d8
	// Line 4116, Address: 0x48c6cc, Func Offset: 0x2dc
	// Line 4119, Address: 0x48c6d0, Func Offset: 0x2e0
	// Line 4118, Address: 0x48c6d8, Func Offset: 0x2e8
	// Line 4119, Address: 0x48c6dc, Func Offset: 0x2ec
	// Line 4124, Address: 0x48c728, Func Offset: 0x338
	// Line 4119, Address: 0x48c72c, Func Offset: 0x33c
	// Line 4124, Address: 0x48c730, Func Offset: 0x340
	// Line 4125, Address: 0x48c734, Func Offset: 0x344
	// Func End, Address: 0x48c764, Func Offset: 0x374
}

// xWaterAddMotion__FRC12xWaterMotionPCc
// Start address: 0x48c770
int32 xWaterAddMotion(xWaterMotion& motion)
{
	int32 motion_type;
	water_motion_group& motion_group;
	// Line 4050, Address: 0x48c770, Func Offset: 0
	// Line 4054, Address: 0x48c774, Func Offset: 0x4
	// Line 4050, Address: 0x48c778, Func Offset: 0x8
	// Line 4054, Address: 0x48c77c, Func Offset: 0xc
	// Line 4050, Address: 0x48c780, Func Offset: 0x10
	// Line 4065, Address: 0x48c784, Func Offset: 0x14
	// Line 4050, Address: 0x48c788, Func Offset: 0x18
	// Line 4065, Address: 0x48c78c, Func Offset: 0x1c
	// Line 4050, Address: 0x48c790, Func Offset: 0x20
	// Line 4053, Address: 0x48c7b0, Func Offset: 0x40
	// Line 4055, Address: 0x48c7b4, Func Offset: 0x44
	// Line 4054, Address: 0x48c7b8, Func Offset: 0x48
	// Line 4055, Address: 0x48c7bc, Func Offset: 0x4c
	// Line 4054, Address: 0x48c7c0, Func Offset: 0x50
	// Line 4055, Address: 0x48c7c4, Func Offset: 0x54
	// Line 4054, Address: 0x48c7c8, Func Offset: 0x58
	// Line 4059, Address: 0x48c7d8, Func Offset: 0x68
	// Line 4065, Address: 0x48c7dc, Func Offset: 0x6c
	// Line 4071, Address: 0x48c7e8, Func Offset: 0x78
	// Line 4073, Address: 0x48c8d0, Func Offset: 0x160
	// Line 4074, Address: 0x48c8d4, Func Offset: 0x164
	// Func End, Address: 0x48c904, Func Offset: 0x194
}

// xWaterDestroyTileSet__FP13xWaterTileSet
// Start address: 0x48c910
void xWaterDestroyTileSet(xWaterTileSet* tileset)
{
	// Line 4045, Address: 0x48c910, Func Offset: 0
	// Func End, Address: 0x48c920, Func Offset: 0x10
}

// xWaterCreateTileSet__FP8RpAtomicRC7xMat4x3
// Start address: 0x48c920
xWaterTileSet* xWaterCreateTileSet(RpAtomic* atomic, xMat4x3& mat)
{
	RwFrame* frame;
	RpGeometry* geom;
	RpMorphTarget* mt;
	xVec3* vert;
	RpTriangle* tri;
	int32 vert_size;
	int32 tri_size;
	xMat4x3& ltm;
	xVec3 wv;
	float32 y;
	float32 xmin;
	float32 xmax;
	float32 zmin;
	float32 zmax;
	xVec3* v;
	xVec3* endv;
	float32 scale;
	float32 iscale;
	int32 gridx;
	int32 gridz;
	int32 sizex;
	int32 sizez;
	int32 stride;
	xWaterTileSet* tileset;
	RpTriangle* t;
	RpTriangle* endt;
	float32 tx0;
	float32 tz0;
	float32 tx1;
	float32 tz1;
	// Line 3949, Address: 0x48c920, Func Offset: 0
	// Line 3951, Address: 0x48c964, Func Offset: 0x44
	// Line 3949, Address: 0x48c968, Func Offset: 0x48
	// Line 3954, Address: 0x48c96c, Func Offset: 0x4c
	// Line 3959, Address: 0x48c970, Func Offset: 0x50
	// Line 3955, Address: 0x48c974, Func Offset: 0x54
	// Line 3951, Address: 0x48c978, Func Offset: 0x58
	// Line 3956, Address: 0x48c97c, Func Offset: 0x5c
	// Line 3953, Address: 0x48c980, Func Offset: 0x60
	// Line 3959, Address: 0x48c984, Func Offset: 0x64
	// Line 3962, Address: 0x48c98c, Func Offset: 0x6c
	// Line 3969, Address: 0x48c9e0, Func Offset: 0xc0
	// Line 3971, Address: 0x48c9e4, Func Offset: 0xc4
	// Line 3966, Address: 0x48c9e8, Func Offset: 0xc8
	// Line 3971, Address: 0x48c9ec, Func Offset: 0xcc
	// Line 3969, Address: 0x48c9f0, Func Offset: 0xd0
	// Line 3971, Address: 0x48c9f4, Func Offset: 0xd4
	// Line 3966, Address: 0x48c9f8, Func Offset: 0xd8
	// Line 3971, Address: 0x48c9fc, Func Offset: 0xdc
	// Line 3969, Address: 0x48ca04, Func Offset: 0xe4
	// Line 3972, Address: 0x48ca08, Func Offset: 0xe8
	// Line 3974, Address: 0x48ca10, Func Offset: 0xf0
	// Line 3976, Address: 0x48ca64, Func Offset: 0x144
	// Line 3977, Address: 0x48ca78, Func Offset: 0x158
	// Line 3978, Address: 0x48ca8c, Func Offset: 0x16c
	// Line 3979, Address: 0x48caa0, Func Offset: 0x180
	// Line 3980, Address: 0x48cab0, Func Offset: 0x190
	// Line 3983, Address: 0x48cac0, Func Offset: 0x1a0
	// Line 3984, Address: 0x48cadc, Func Offset: 0x1bc
	// Line 3985, Address: 0x48caec, Func Offset: 0x1cc
	// Line 3986, Address: 0x48cafc, Func Offset: 0x1dc
	// Line 3987, Address: 0x48cb0c, Func Offset: 0x1ec
	// Line 3988, Address: 0x48cb1c, Func Offset: 0x1fc
	// Line 3987, Address: 0x48cb30, Func Offset: 0x210
	// Line 3988, Address: 0x48cb34, Func Offset: 0x214
	// Line 3990, Address: 0x48cb64, Func Offset: 0x244
	// Line 3993, Address: 0x48cba4, Func Offset: 0x284
	// Line 3994, Address: 0x48cbb0, Func Offset: 0x290
	// Line 3996, Address: 0x48cbb8, Func Offset: 0x298
	// Line 3997, Address: 0x48cc20, Func Offset: 0x300
	// Line 3999, Address: 0x48cc24, Func Offset: 0x304
	// Line 3997, Address: 0x48cc28, Func Offset: 0x308
	// Line 3999, Address: 0x48cc30, Func Offset: 0x310
	// Line 3997, Address: 0x48cc38, Func Offset: 0x318
	// Line 3999, Address: 0x48cc3c, Func Offset: 0x31c
	// Line 3998, Address: 0x48cc44, Func Offset: 0x324
	// Line 3997, Address: 0x48cc48, Func Offset: 0x328
	// Line 3998, Address: 0x48cc4c, Func Offset: 0x32c
	// Line 3999, Address: 0x48cc60, Func Offset: 0x340
	// Line 4000, Address: 0x48ccb0, Func Offset: 0x390
	// Line 4002, Address: 0x48ccb4, Func Offset: 0x394
	// Line 4001, Address: 0x48ccb8, Func Offset: 0x398
	// Line 4000, Address: 0x48ccbc, Func Offset: 0x39c
	// Line 4002, Address: 0x48ccc0, Func Offset: 0x3a0
	// Line 4001, Address: 0x48ccd0, Func Offset: 0x3b0
	// Line 4000, Address: 0x48ccd4, Func Offset: 0x3b4
	// Line 4001, Address: 0x48ccd8, Func Offset: 0x3b8
	// Line 4002, Address: 0x48ccdc, Func Offset: 0x3bc
	// Line 4005, Address: 0x48cd2c, Func Offset: 0x40c
	// Line 4007, Address: 0x48cd58, Func Offset: 0x438
	// Line 4009, Address: 0x48cd68, Func Offset: 0x448
	// Line 4010, Address: 0x48cd6c, Func Offset: 0x44c
	// Func End, Address: 0x48cdb0, Func Offset: 0x490
}

// xWaterRender__Fv
// Start address: 0x48cdb0
void xWaterRender()
{
	// Line 3933, Address: 0x48cdb0, Func Offset: 0
	// Line 3936, Address: 0x48cddc, Func Offset: 0x2c
	// Line 3940, Address: 0x48cfd8, Func Offset: 0x228
	// Func End, Address: 0x48d040, Func Offset: 0x290
}

// xWaterUpdate__Ff
// Start address: 0x48d040
void xWaterUpdate(float32 dt)
{
	water_motion_group* mg;
	water_motion_group* endmg;
	// Line 3926, Address: 0x48d040, Func Offset: 0
	// Line 3927, Address: 0x48d050, Func Offset: 0x10
	// Line 3926, Address: 0x48d054, Func Offset: 0x14
	// Line 3927, Address: 0x48d058, Func Offset: 0x18
	// Line 3926, Address: 0x48d05c, Func Offset: 0x1c
	// Line 3927, Address: 0x48d06c, Func Offset: 0x2c
	// Line 3928, Address: 0x48d088, Func Offset: 0x48
	// Line 3929, Address: 0x48d090, Func Offset: 0x50
	// Line 3930, Address: 0x48d130, Func Offset: 0xf0
	// Line 3929, Address: 0x48d140, Func Offset: 0x100
	// Line 3930, Address: 0x48d168, Func Offset: 0x128
	// Line 3929, Address: 0x48d170, Func Offset: 0x130
	// Line 3930, Address: 0x48d188, Func Offset: 0x148
	// Func End, Address: 0x48d1b0, Func Offset: 0x170
}

// xWaterSceneExit__Fv
// Start address: 0x48d1b0
void xWaterSceneExit()
{
	// Line 3920, Address: 0x48d1b0, Func Offset: 0
	// Line 3921, Address: 0x48d1b4, Func Offset: 0x4
	// Line 3920, Address: 0x48d1b8, Func Offset: 0x8
	// Line 3921, Address: 0x48d1bc, Func Offset: 0xc
	// Line 3922, Address: 0x48d1c4, Func Offset: 0x14
	// Line 3923, Address: 0x48d1d0, Func Offset: 0x20
	// Func End, Address: 0x48d1dc, Func Offset: 0x2c
}

// xWaterPostSetup__Fv
// Start address: 0x48d1e0
void xWaterPostSetup()
{
	// Line 3914, Address: 0x48d1e0, Func Offset: 0
	// Line 3917, Address: 0x48d1e4, Func Offset: 0x4
	// Func End, Address: 0x48d1ec, Func Offset: 0xc
}

// xWaterSceneEnter__Fv
// Start address: 0x48d1f0
void xWaterSceneEnter()
{
	vidmode_data& vd;
	vidmode_data viddata[2];
	// Line 3869, Address: 0x48d1f0, Func Offset: 0
	// Line 3873, Address: 0x48d1f4, Func Offset: 0x4
	// Line 3869, Address: 0x48d1f8, Func Offset: 0x8
	// Line 3872, Address: 0x48d1fc, Func Offset: 0xc
	// Line 3869, Address: 0x48d200, Func Offset: 0x10
	// Line 3873, Address: 0x48d204, Func Offset: 0x14
	// Line 3872, Address: 0x48d208, Func Offset: 0x18
	// Line 3870, Address: 0x48d20c, Func Offset: 0x1c
	// Line 3872, Address: 0x48d210, Func Offset: 0x20
	// Line 3873, Address: 0x48d218, Func Offset: 0x28
	// Line 3898, Address: 0x48d23c, Func Offset: 0x4c
	// Line 3899, Address: 0x48d244, Func Offset: 0x54
	// Line 3898, Address: 0x48d24c, Func Offset: 0x5c
	// Line 3899, Address: 0x48d250, Func Offset: 0x60
	// Line 3898, Address: 0x48d258, Func Offset: 0x68
	// Line 3899, Address: 0x48d268, Func Offset: 0x78
	// Line 3900, Address: 0x48d278, Func Offset: 0x88
	// Line 3901, Address: 0x48d298, Func Offset: 0xa8
	// Line 3902, Address: 0x48d2a8, Func Offset: 0xb8
	// Line 3901, Address: 0x48d2ac, Func Offset: 0xbc
	// Line 3902, Address: 0x48d2b0, Func Offset: 0xc0
	// Line 3901, Address: 0x48d2bc, Func Offset: 0xcc
	// Line 3902, Address: 0x48d2c0, Func Offset: 0xd0
	// Line 3903, Address: 0x48d2c8, Func Offset: 0xd8
	// Line 3906, Address: 0x48d2cc, Func Offset: 0xdc
	// Line 3903, Address: 0x48d2d0, Func Offset: 0xe0
	// Line 3901, Address: 0x48d2d4, Func Offset: 0xe4
	// Line 3903, Address: 0x48d2d8, Func Offset: 0xe8
	// Line 3902, Address: 0x48d2e0, Func Offset: 0xf0
	// Line 3903, Address: 0x48d2e4, Func Offset: 0xf4
	// Line 3904, Address: 0x48d2ec, Func Offset: 0xfc
	// Line 3903, Address: 0x48d2f0, Func Offset: 0x100
	// Line 3904, Address: 0x48d2f4, Func Offset: 0x104
	// Line 3910, Address: 0x48d304, Func Offset: 0x114
	// Line 3875, Address: 0x48d30c, Func Offset: 0x11c
	// Line 3910, Address: 0x48d318, Func Offset: 0x128
	// Func End, Address: 0x48d328, Func Offset: 0x138
}

// setup_water_entity__20@unnamed@xWater_cpp@FRQ220@unnamed@xWater_cpp@10tile_batchRQ220@unnamed@xWater_cpp@13facade_entityb
// Start address: 0x48d330
void setup_water_entity(tile_batch& batch, facade_entity& ent, uint8 refract)
{
	int32 sortorder;
	int32 lockY;
	int32 lockXZ;
	xMat4x3& model_mat;
	xMat4x3 flip_mat;
	xMat4x3 result_mat;
	// Line 3555, Address: 0x48d330, Func Offset: 0
	// Line 3557, Address: 0x48d334, Func Offset: 0x4
	// Line 3555, Address: 0x48d338, Func Offset: 0x8
	// Line 3557, Address: 0x48d358, Func Offset: 0x28
	// Line 3561, Address: 0x48d368, Func Offset: 0x38
	// Line 3563, Address: 0x48d374, Func Offset: 0x44
	// Line 3565, Address: 0x48d390, Func Offset: 0x60
	// Line 3580, Address: 0x48d3a8, Func Offset: 0x78
	// Line 3589, Address: 0x48d3b0, Func Offset: 0x80
	// Line 3577, Address: 0x48d4e0, Func Offset: 0x1b0
	// Line 3589, Address: 0x48d4e8, Func Offset: 0x1b8
	// Line 3584, Address: 0x48d4ec, Func Offset: 0x1bc
	// Line 3589, Address: 0x48d500, Func Offset: 0x1d0
	// Line 3584, Address: 0x48d508, Func Offset: 0x1d8
	// Line 3589, Address: 0x48d50c, Func Offset: 0x1dc
	// Line 3584, Address: 0x48d514, Func Offset: 0x1e4
	// Line 3589, Address: 0x48d518, Func Offset: 0x1e8
	// Line 3585, Address: 0x48d520, Func Offset: 0x1f0
	// Line 3589, Address: 0x48d524, Func Offset: 0x1f4
	// Line 3590, Address: 0x48d5d8, Func Offset: 0x2a8
	// Line 3591, Address: 0x48d5e4, Func Offset: 0x2b4
	// Func End, Address: 0x48d5fc, Func Offset: 0x2cc
}

// setup_water_atomic__20@unnamed@xWater_cpp@FP8RpAtomicRC7xMat4x3
// Start address: 0x48d600
void setup_water_atomic(RpAtomic* atomic, xMat4x3& mat)
{
	xVec3& center;
	float32 max_scale2;
	RpMaterialList* matlist;
	RxPipeline* atmpipe;
	RxPipeline* matpipe;
	int32 i;
	// Line 3510, Address: 0x48d600, Func Offset: 0
	// Line 3512, Address: 0x48d630, Func Offset: 0x30
	// Line 3514, Address: 0x48d64c, Func Offset: 0x4c
	// Line 3515, Address: 0x48d654, Func Offset: 0x54
	// Line 3516, Address: 0x48d658, Func Offset: 0x58
	// Line 3518, Address: 0x48d6b4, Func Offset: 0xb4
	// Line 3519, Address: 0x48d6cc, Func Offset: 0xcc
	// Line 3516, Address: 0x48d6d4, Func Offset: 0xd4
	// Line 3519, Address: 0x48d6d8, Func Offset: 0xd8
	// Line 3516, Address: 0x48d6dc, Func Offset: 0xdc
	// Line 3520, Address: 0x48d6e4, Func Offset: 0xe4
	// Line 3521, Address: 0x48d6f0, Func Offset: 0xf0
	// Line 3522, Address: 0x48d6fc, Func Offset: 0xfc
	// Line 3523, Address: 0x48d700, Func Offset: 0x100
	// Line 3524, Address: 0x48d70c, Func Offset: 0x10c
	// Line 3525, Address: 0x48d710, Func Offset: 0x110
	// Line 3526, Address: 0x48d72c, Func Offset: 0x12c
	// Line 3527, Address: 0x48d744, Func Offset: 0x144
	// Line 3530, Address: 0x48d764, Func Offset: 0x164
	// Line 3531, Address: 0x48d768, Func Offset: 0x168
	// Line 3532, Address: 0x48d77c, Func Offset: 0x17c
	// Line 3536, Address: 0x48d78c, Func Offset: 0x18c
	// Line 3537, Address: 0x48d798, Func Offset: 0x198
	// Line 3538, Address: 0x48d7a4, Func Offset: 0x1a4
	// Line 3539, Address: 0x48d7a8, Func Offset: 0x1a8
	// Line 3540, Address: 0x48d7bc, Func Offset: 0x1bc
	// Line 3541, Address: 0x48d7e0, Func Offset: 0x1e0
	// Func End, Address: 0x48d800, Func Offset: 0x200
}

// transform_atomic_vertices__20@unnamed@xWater_cpp@FP8RpAtomicRC7xMat4x3
// Start address: 0x48d800
void transform_atomic_vertices(RpAtomic* atomic, xMat4x3& mat)
{
	RpGeometry* geom;
	RpMorphTarget* mt;
	xVec3* verts;
	int32 verts_size;
	xVec3* v;
	xVec3* endv;
	// Line 3490, Address: 0x48d800, Func Offset: 0
	// Line 3491, Address: 0x48d814, Func Offset: 0x14
	// Line 3492, Address: 0x48d818, Func Offset: 0x18
	// Line 3495, Address: 0x48d830, Func Offset: 0x30
	// Line 3496, Address: 0x48d834, Func Offset: 0x34
	// Line 3501, Address: 0x48d840, Func Offset: 0x40
	// Line 3502, Address: 0x48d850, Func Offset: 0x50
	// Line 3503, Address: 0x48d858, Func Offset: 0x58
	// Line 3505, Address: 0x48d8b4, Func Offset: 0xb4
	// Line 3506, Address: 0x48d8b8, Func Offset: 0xb8
	// Line 3507, Address: 0x48d8c0, Func Offset: 0xc0
	// Func End, Address: 0x48d8d4, Func Offset: 0xd4
}

// render_batch_pipeline__20@unnamed@xWater_cpp@FRQ220@unnamed@xWater_cpp@18water_motion_groupRQ220@unnamed@xWater_cpp@10tile_batch
// Start address: 0x48d8e0
void render_batch_pipeline(water_motion_group& motion_group, tile_batch& batch)
{
	xMat4x3 shade_view_mat;
	xVec2 shade_view_window;
	int32 lod;
	// Line 3293, Address: 0x48d8e0, Func Offset: 0
	// Line 3310, Address: 0x48d8e4, Func Offset: 0x4
	// Line 3293, Address: 0x48d8e8, Func Offset: 0x8
	// Line 3310, Address: 0x48d8ec, Func Offset: 0xc
	// Line 3293, Address: 0x48d8f0, Func Offset: 0x10
	// Line 3310, Address: 0x48d8f4, Func Offset: 0x14
	// Line 3293, Address: 0x48d8f8, Func Offset: 0x18
	// Line 3310, Address: 0x48d8fc, Func Offset: 0x1c
	// Line 3293, Address: 0x48d900, Func Offset: 0x20
	// Line 3310, Address: 0x48d904, Func Offset: 0x24
	// Line 3293, Address: 0x48d908, Func Offset: 0x28
	// Line 3310, Address: 0x48d90c, Func Offset: 0x2c
	// Line 3293, Address: 0x48d910, Func Offset: 0x30
	// Line 3310, Address: 0x48d914, Func Offset: 0x34
	// Line 3293, Address: 0x48d918, Func Offset: 0x38
	// Line 3310, Address: 0x48d91c, Func Offset: 0x3c
	// Line 3293, Address: 0x48d920, Func Offset: 0x40
	// Line 3310, Address: 0x48d924, Func Offset: 0x44
	// Line 3293, Address: 0x48d928, Func Offset: 0x48
	// Line 3310, Address: 0x48d92c, Func Offset: 0x4c
	// Line 3293, Address: 0x48d930, Func Offset: 0x50
	// Line 3310, Address: 0x48d934, Func Offset: 0x54
	// Line 3313, Address: 0x48d980, Func Offset: 0xa0
	// Line 3310, Address: 0x48d988, Func Offset: 0xa8
	// Line 3313, Address: 0x48da2c, Func Offset: 0x14c
	// Line 3325, Address: 0x48da58, Func Offset: 0x178
	// Line 3326, Address: 0x48da60, Func Offset: 0x180
	// Line 3330, Address: 0x48da70, Func Offset: 0x190
	// Line 3333, Address: 0x48da80, Func Offset: 0x1a0
	// Line 3343, Address: 0x48dadc, Func Offset: 0x1fc
	// Line 3344, Address: 0x48dae0, Func Offset: 0x200
	// Line 3348, Address: 0x48daf4, Func Offset: 0x214
	// Line 3404, Address: 0x48db00, Func Offset: 0x220
	// Line 3406, Address: 0x48db18, Func Offset: 0x238
	// Line 3409, Address: 0x48db24, Func Offset: 0x244
	// Line 3410, Address: 0x48db34, Func Offset: 0x254
	// Line 3420, Address: 0x48db44, Func Offset: 0x264
	// Line 3326, Address: 0x48db50, Func Offset: 0x270
	// Line 3420, Address: 0x48db54, Func Offset: 0x274
	// Line 3349, Address: 0x48db64, Func Offset: 0x284
	// Line 3420, Address: 0x48db6c, Func Offset: 0x28c
	// Line 3406, Address: 0x48db80, Func Offset: 0x2a0
	// Line 3420, Address: 0x48db8c, Func Offset: 0x2ac
	// Func End, Address: 0x48dbcc, Func Offset: 0x2ec
}

// render_tile_lod__20@unnamed@xWater_cpp@FRQ220@unnamed@xWater_cpp@18water_motion_groupRQ220@unnamed@xWater_cpp@10tile_batchiRC7xMat4x3
// Start address: 0x48dbd0
void render_tile_lod(water_motion_group& motion_group, tile_batch& batch, int32 lod, xMat4x3& shade_view_mat)
{
	int32 width;
	float32 dxz;
	int32 width_in_meshes;
	float32 mesh_world_width;
	int32 field_stride;
	float32 lod_blend_dist_min;
	float32 lod_blend_dist_max;
	iWaterTile* itiles;
	iWaterTile* tiles;
	float32* mesh;
	int32 i;
	int32 j;
	int32 tiles_used;
	int32 k;
	int32 endk;
	iWaterTile& itile;
	float32 x;
	float32 z;
	int32 repeat_unit_width;
	int32 repeats;
	float32 repeat_width;
	int32 m;
	int32 n;
	iWaterTile& tile;
	// Line 3186, Address: 0x48dbd0, Func Offset: 0
	// Line 3191, Address: 0x48dbd4, Func Offset: 0x4
	// Line 3186, Address: 0x48dbd8, Func Offset: 0x8
	// Line 3191, Address: 0x48dc0c, Func Offset: 0x3c
	// Line 3186, Address: 0x48dc10, Func Offset: 0x40
	// Line 3191, Address: 0x48dc14, Func Offset: 0x44
	// Line 3186, Address: 0x48dc18, Func Offset: 0x48
	// Line 3191, Address: 0x48dc1c, Func Offset: 0x4c
	// Line 3186, Address: 0x48dc20, Func Offset: 0x50
	// Line 3195, Address: 0x48dc24, Func Offset: 0x54
	// Line 3186, Address: 0x48dc28, Func Offset: 0x58
	// Line 3192, Address: 0x48dc40, Func Offset: 0x70
	// Line 3186, Address: 0x48dc44, Func Offset: 0x74
	// Line 3195, Address: 0x48dc4c, Func Offset: 0x7c
	// Line 3191, Address: 0x48dc50, Func Offset: 0x80
	// Line 3195, Address: 0x48dc54, Func Offset: 0x84
	// Line 3192, Address: 0x48dc58, Func Offset: 0x88
	// Line 3195, Address: 0x48dc68, Func Offset: 0x98
	// Line 3198, Address: 0x48dc7c, Func Offset: 0xac
	// Line 3202, Address: 0x48dc80, Func Offset: 0xb0
	// Line 3198, Address: 0x48dc94, Func Offset: 0xc4
	// Line 3199, Address: 0x48dc98, Func Offset: 0xc8
	// Line 3198, Address: 0x48dc9c, Func Offset: 0xcc
	// Line 3199, Address: 0x48dca0, Func Offset: 0xd0
	// Line 3198, Address: 0x48dcac, Func Offset: 0xdc
	// Line 3199, Address: 0x48dcb0, Func Offset: 0xe0
	// Line 3202, Address: 0x48dcb4, Func Offset: 0xe4
	// Line 3205, Address: 0x48dcbc, Func Offset: 0xec
	// Line 3206, Address: 0x48dcc4, Func Offset: 0xf4
	// Line 3205, Address: 0x48dcc8, Func Offset: 0xf8
	// Line 3206, Address: 0x48dcd0, Func Offset: 0x100
	// Line 3208, Address: 0x48dce0, Func Offset: 0x110
	// Line 3209, Address: 0x48dcec, Func Offset: 0x11c
	// Line 3211, Address: 0x48dd58, Func Offset: 0x188
	// Line 3276, Address: 0x48dd74, Func Offset: 0x1a4
	// Line 3211, Address: 0x48dd78, Func Offset: 0x1a8
	// Line 3276, Address: 0x48dd7c, Func Offset: 0x1ac
	// Line 3278, Address: 0x48dd98, Func Offset: 0x1c8
	// Line 3287, Address: 0x48dda0, Func Offset: 0x1d0
	// Line 3211, Address: 0x48ddbc, Func Offset: 0x1ec
	// Line 3287, Address: 0x48ddc0, Func Offset: 0x1f0
	// Line 3220, Address: 0x48ddc8, Func Offset: 0x1f8
	// Line 3287, Address: 0x48ddcc, Func Offset: 0x1fc
	// Line 3224, Address: 0x48de14, Func Offset: 0x244
	// Line 3287, Address: 0x48de18, Func Offset: 0x248
	// Line 3225, Address: 0x48de3c, Func Offset: 0x26c
	// Line 3287, Address: 0x48de40, Func Offset: 0x270
	// Line 3242, Address: 0x48de44, Func Offset: 0x274
	// Line 3287, Address: 0x48de48, Func Offset: 0x278
	// Line 3242, Address: 0x48de50, Func Offset: 0x280
	// Line 3240, Address: 0x48de54, Func Offset: 0x284
	// Line 3241, Address: 0x48de58, Func Offset: 0x288
	// Line 3242, Address: 0x48de5c, Func Offset: 0x28c
	// Line 3287, Address: 0x48de60, Func Offset: 0x290
	// Line 3243, Address: 0x48de70, Func Offset: 0x2a0
	// Line 3244, Address: 0x48de74, Func Offset: 0x2a4
	// Line 3287, Address: 0x48de78, Func Offset: 0x2a8
	// Line 3244, Address: 0x48de80, Func Offset: 0x2b0
	// Line 3287, Address: 0x48de8c, Func Offset: 0x2bc
	// Line 3246, Address: 0x48de98, Func Offset: 0x2c8
	// Line 3287, Address: 0x48dea0, Func Offset: 0x2d0
	// Line 3248, Address: 0x48deac, Func Offset: 0x2dc
	// Line 3287, Address: 0x48deb0, Func Offset: 0x2e0
	// Line 3250, Address: 0x48ded4, Func Offset: 0x304
	// Line 3252, Address: 0x48ded8, Func Offset: 0x308
	// Line 3253, Address: 0x48dedc, Func Offset: 0x30c
	// Line 3287, Address: 0x48dee0, Func Offset: 0x310
	// Line 3253, Address: 0x48dee4, Func Offset: 0x314
	// Line 3287, Address: 0x48dee8, Func Offset: 0x318
	// Line 3253, Address: 0x48def4, Func Offset: 0x324
	// Line 3287, Address: 0x48defc, Func Offset: 0x32c
	// Line 3265, Address: 0x48df14, Func Offset: 0x344
	// Line 3287, Address: 0x48df18, Func Offset: 0x348
	// Line 3261, Address: 0x48df84, Func Offset: 0x3b4
	// Line 3287, Address: 0x48df88, Func Offset: 0x3b8
	// Line 3261, Address: 0x48df90, Func Offset: 0x3c0
	// Line 3287, Address: 0x48df94, Func Offset: 0x3c4
	// Line 3261, Address: 0x48df98, Func Offset: 0x3c8
	// Line 3287, Address: 0x48dfa0, Func Offset: 0x3d0
	// Line 3261, Address: 0x48dfa4, Func Offset: 0x3d4
	// Line 3287, Address: 0x48dfb0, Func Offset: 0x3e0
	// Line 3271, Address: 0x48dfe4, Func Offset: 0x414
	// Line 3287, Address: 0x48dfe8, Func Offset: 0x418
	// Line 3271, Address: 0x48dff0, Func Offset: 0x420
	// Line 3287, Address: 0x48dff4, Func Offset: 0x424
	// Line 3271, Address: 0x48dff8, Func Offset: 0x428
	// Line 3287, Address: 0x48e000, Func Offset: 0x430
	// Line 3271, Address: 0x48e004, Func Offset: 0x434
	// Line 3287, Address: 0x48e010, Func Offset: 0x440
	// Func End, Address: 0x48e090, Func Offset: 0x4c0
}

// get_lod_blend_range__20@unnamed@xWater_cpp@FRfRfiff
// Start address: 0x48e090
void get_lod_blend_range(float32& dist_min, float32& dist_max, int32 lod, float32 lod_dist_min, float32 lod_dist_interval)
{
	float32 lod_range;
	float32 dist_center;
	// Line 3130, Address: 0x48e090, Func Offset: 0
	// Line 3131, Address: 0x48e0a4, Func Offset: 0x14
	// Line 3134, Address: 0x48e0d4, Func Offset: 0x44
	// Line 3131, Address: 0x48e0d8, Func Offset: 0x48
	// Line 3134, Address: 0x48e0dc, Func Offset: 0x4c
	// Line 3136, Address: 0x48e0ec, Func Offset: 0x5c
	// Line 3134, Address: 0x48e0f0, Func Offset: 0x60
	// Line 3136, Address: 0x48e0f4, Func Offset: 0x64
	// Line 3141, Address: 0x48e108, Func Offset: 0x78
	// Line 3142, Address: 0x48e124, Func Offset: 0x94
	// Line 3162, Address: 0x48e128, Func Offset: 0x98
	// Func End, Address: 0x48e130, Func Offset: 0xa0
}

// refresh_motion_group__20@unnamed@xWater_cpp@FRQ220@unnamed@xWater_cpp@18water_motion_group
// Start address: 0x48e130
void refresh_motion_group(water_motion_group& motion_group)
{
	tile_batch* batch;
	tile_batch* end_batch;
	int32 lod;
	int32 width_in_meshes;
	// Line 2964, Address: 0x48e130, Func Offset: 0
	// Line 2965, Address: 0x48e134, Func Offset: 0x4
	// Line 2964, Address: 0x48e138, Func Offset: 0x8
	// Line 2969, Address: 0x48e13c, Func Offset: 0xc
	// Line 2964, Address: 0x48e140, Func Offset: 0x10
	// Line 2965, Address: 0x48e150, Func Offset: 0x20
	// Line 2966, Address: 0x48e154, Func Offset: 0x24
	// Line 2967, Address: 0x48e158, Func Offset: 0x28
	// Line 2969, Address: 0x48e15c, Func Offset: 0x2c
	// Line 2971, Address: 0x48e16c, Func Offset: 0x3c
	// Line 2973, Address: 0x48e174, Func Offset: 0x44
	// Line 2982, Address: 0x48e184, Func Offset: 0x54
	// Line 2984, Address: 0x48e1a0, Func Offset: 0x70
	// Line 2989, Address: 0x48e1ac, Func Offset: 0x7c
	// Line 3001, Address: 0x48e1b8, Func Offset: 0x88
	// Line 3005, Address: 0x48e1dc, Func Offset: 0xac
	// Line 3006, Address: 0x48e1f4, Func Offset: 0xc4
	// Line 2979, Address: 0x48e23c, Func Offset: 0x10c
	// Line 3006, Address: 0x48e240, Func Offset: 0x110
	// Line 2985, Address: 0x48e268, Func Offset: 0x138
	// Line 3008, Address: 0x48e270, Func Offset: 0x140
	// Line 3009, Address: 0x48e27c, Func Offset: 0x14c
	// Func End, Address: 0x48e294, Func Offset: 0x164
}

// gather_batch_tiles__20@unnamed@xWater_cpp@FRQ220@unnamed@xWater_cpp@18water_motion_groupRQ220@unnamed@xWater_cpp@10tile_batch
// Start address: 0x48e2a0
void gather_batch_tiles(water_motion_group& motion_group, tile_batch& batch)
{
	tile_region* regions;
	int32 regions_used;
	tile_region* region;
	tile_region* end_region;
	int32 lod;
	int32 max_lod;
	iWaterTile& itile;
	// Line 2842, Address: 0x48e2a0, Func Offset: 0
	// Line 2868, Address: 0x48e2b8, Func Offset: 0x18
	// Line 2870, Address: 0x48e2c8, Func Offset: 0x28
	// Line 2871, Address: 0x48e2d8, Func Offset: 0x38
	// Line 2872, Address: 0x48e2dc, Func Offset: 0x3c
	// Line 2878, Address: 0x48e2e4, Func Offset: 0x44
	// Line 2873, Address: 0x48e2e8, Func Offset: 0x48
	// Line 2878, Address: 0x48e2ec, Func Offset: 0x4c
	// Line 2924, Address: 0x48e320, Func Offset: 0x80
	// Line 2925, Address: 0x48e328, Func Offset: 0x88
	// Line 2951, Address: 0x48e330, Func Offset: 0x90
	// Line 2934, Address: 0x48e338, Func Offset: 0x98
	// Line 2927, Address: 0x48e33c, Func Offset: 0x9c
	// Line 2934, Address: 0x48e340, Func Offset: 0xa0
	// Line 2935, Address: 0x48e344, Func Offset: 0xa4
	// Line 2941, Address: 0x48e358, Func Offset: 0xb8
	// Line 2943, Address: 0x48e368, Func Offset: 0xc8
	// Line 2945, Address: 0x48e378, Func Offset: 0xd8
	// Line 2951, Address: 0x48e384, Func Offset: 0xe4
	// Line 2949, Address: 0x48e38c, Func Offset: 0xec
	// Line 2945, Address: 0x48e390, Func Offset: 0xf0
	// Line 2949, Address: 0x48e398, Func Offset: 0xf8
	// Line 2951, Address: 0x48e39c, Func Offset: 0xfc
	// Line 2952, Address: 0x48e3a8, Func Offset: 0x108
	// Line 2954, Address: 0x48e3f0, Func Offset: 0x150
	// Line 2955, Address: 0x48e3fc, Func Offset: 0x15c
	// Line 2956, Address: 0x48e408, Func Offset: 0x168
	// Line 2958, Address: 0x48e418, Func Offset: 0x178
	// Line 2959, Address: 0x48e420, Func Offset: 0x180
	// Func End, Address: 0x48e478, Func Offset: 0x1d8
}

// refresh_heightmaps__20@unnamed@xWater_cpp@FRQ220@unnamed@xWater_cpp@18water_motion_groupii
// Start address: 0x48e480
void refresh_heightmaps(water_motion_group& motion_group, int32 min_lod, int32 max_lod)
{
	int32 lod;
	int32 subdiv_level;
	int32 width;
	float32* Ay[2];
	float32* Nx[2];
	float32* Ny[2];
	float32* Nz[2];
	float32* By_buffer;
	int32 val;
	float32* By;
	float32* mesh;
	// Line 2733, Address: 0x48e480, Func Offset: 0
	// Line 2738, Address: 0x48e484, Func Offset: 0x4
	// Line 2733, Address: 0x48e488, Func Offset: 0x8
	// Line 2739, Address: 0x48e48c, Func Offset: 0xc
	// Line 2733, Address: 0x48e490, Func Offset: 0x10
	// Line 2738, Address: 0x48e4bc, Func Offset: 0x3c
	// Line 2739, Address: 0x48e4c0, Func Offset: 0x40
	// Line 2740, Address: 0x48e4c4, Func Offset: 0x44
	// Line 2744, Address: 0x48e4e8, Func Offset: 0x68
	// Line 2745, Address: 0x48e4f0, Func Offset: 0x70
	// Line 2746, Address: 0x48e500, Func Offset: 0x80
	// Line 2747, Address: 0x48e510, Func Offset: 0x90
	// Line 2756, Address: 0x48e518, Func Offset: 0x98
	// Line 2748, Address: 0x48e528, Func Offset: 0xa8
	// Line 2747, Address: 0x48e52c, Func Offset: 0xac
	// Line 2749, Address: 0x48e534, Func Offset: 0xb4
	// Line 2750, Address: 0x48e538, Func Offset: 0xb8
	// Line 2748, Address: 0x48e53c, Func Offset: 0xbc
	// Line 2749, Address: 0x48e540, Func Offset: 0xc0
	// Line 2750, Address: 0x48e544, Func Offset: 0xc4
	// Line 2747, Address: 0x48e548, Func Offset: 0xc8
	// Line 2748, Address: 0x48e54c, Func Offset: 0xcc
	// Line 2749, Address: 0x48e558, Func Offset: 0xd8
	// Line 2750, Address: 0x48e564, Func Offset: 0xe4
	// Line 2756, Address: 0x48e56c, Func Offset: 0xec
	// Line 2762, Address: 0x48e57c, Func Offset: 0xfc
	// Line 2764, Address: 0x48e58c, Func Offset: 0x10c
	// Line 2774, Address: 0x48e590, Func Offset: 0x110
	// Line 2773, Address: 0x48e594, Func Offset: 0x114
	// Line 2774, Address: 0x48e598, Func Offset: 0x118
	// Line 2775, Address: 0x48e5a0, Func Offset: 0x120
	// Line 2776, Address: 0x48e5b0, Func Offset: 0x130
	// Line 2777, Address: 0x48e5c4, Func Offset: 0x144
	// Line 2778, Address: 0x48e5d8, Func Offset: 0x158
	// Line 2781, Address: 0x48e5ec, Func Offset: 0x16c
	// Line 2780, Address: 0x48e5f0, Func Offset: 0x170
	// Line 2783, Address: 0x48e5f4, Func Offset: 0x174
	// Line 2786, Address: 0x48e604, Func Offset: 0x184
	// Line 2791, Address: 0x48e610, Func Offset: 0x190
	// Line 2792, Address: 0x48e62c, Func Offset: 0x1ac
	// Line 2793, Address: 0x48e644, Func Offset: 0x1c4
	// Line 2794, Address: 0x48e65c, Func Offset: 0x1dc
	// Line 2796, Address: 0x48e674, Func Offset: 0x1f4
	// Line 2765, Address: 0x48e67c, Func Offset: 0x1fc
	// Line 2769, Address: 0x48e688, Func Offset: 0x208
	// Line 2796, Address: 0x48e68c, Func Offset: 0x20c
	// Line 2769, Address: 0x48e690, Func Offset: 0x210
	// Line 2796, Address: 0x48e694, Func Offset: 0x214
	// Line 2798, Address: 0x48e6a8, Func Offset: 0x228
	// Line 2799, Address: 0x48e6b0, Func Offset: 0x230
	// Line 2800, Address: 0x48e6b8, Func Offset: 0x238
	// Line 2801, Address: 0x48e6c0, Func Offset: 0x240
	// Func End, Address: 0x48e6f0, Func Offset: 0x270
}

// downsample_mesh__20@unnamed@xWater_cpp@FPfPCfi
// Start address: 0x48e6f0
void downsample_mesh(float32* By, float32* Ay, int32 subdiv_level)
{
	int32 width;
	int32 mask;
	int32 i;
	int32 row_mid;
	int32 mid;
	int32 row_up;
	int32 row_down;
	int32 j;
	int32 diag0;
	int32 diag1;
	int32 j;
	// Line 2657, Address: 0x48e6f0, Func Offset: 0
	// Line 2668, Address: 0x48e6f4, Func Offset: 0x4
	// Line 2657, Address: 0x48e6fc, Func Offset: 0xc
	// Line 2671, Address: 0x48e700, Func Offset: 0x10
	// Line 2698, Address: 0x48e710, Func Offset: 0x20
	// Line 2675, Address: 0x48e718, Func Offset: 0x28
	// Line 2677, Address: 0x48e724, Func Offset: 0x34
	// Line 2678, Address: 0x48e728, Func Offset: 0x38
	// Line 2677, Address: 0x48e72c, Func Offset: 0x3c
	// Line 2679, Address: 0x48e730, Func Offset: 0x40
	// Line 2678, Address: 0x48e734, Func Offset: 0x44
	// Line 2679, Address: 0x48e738, Func Offset: 0x48
	// Line 2677, Address: 0x48e73c, Func Offset: 0x4c
	// Line 2679, Address: 0x48e740, Func Offset: 0x50
	// Line 2682, Address: 0x48e758, Func Offset: 0x68
	// Line 2698, Address: 0x48e764, Func Offset: 0x74
	// Line 2696, Address: 0x48e768, Func Offset: 0x78
	// Line 2695, Address: 0x48e76c, Func Offset: 0x7c
	// Line 2696, Address: 0x48e770, Func Offset: 0x80
	// Line 2695, Address: 0x48e774, Func Offset: 0x84
	// Line 2696, Address: 0x48e778, Func Offset: 0x88
	// Line 2695, Address: 0x48e77c, Func Offset: 0x8c
	// Line 2698, Address: 0x48e780, Func Offset: 0x90
	// Line 2707, Address: 0x48e7a8, Func Offset: 0xb8
	// Line 2698, Address: 0x48e7b0, Func Offset: 0xc0
	// Line 2707, Address: 0x48e7b4, Func Offset: 0xc4
	// Line 2728, Address: 0x48e7bc, Func Offset: 0xcc
	// Line 2729, Address: 0x48e7d0, Func Offset: 0xe0
	// Line 2705, Address: 0x48e7dc, Func Offset: 0xec
	// Line 2729, Address: 0x48e7e0, Func Offset: 0xf0
	// Line 2705, Address: 0x48e7e8, Func Offset: 0xf8
	// Line 2729, Address: 0x48e7f8, Func Offset: 0x108
	// Line 2711, Address: 0x48e80c, Func Offset: 0x11c
	// Line 2714, Address: 0x48e810, Func Offset: 0x120
	// Line 2729, Address: 0x48e814, Func Offset: 0x124
	// Line 2719, Address: 0x48e81c, Func Offset: 0x12c
	// Line 2729, Address: 0x48e820, Func Offset: 0x130
	// Line 2719, Address: 0x48e82c, Func Offset: 0x13c
	// Line 2729, Address: 0x48e830, Func Offset: 0x140
	// Line 2719, Address: 0x48e83c, Func Offset: 0x14c
	// Line 2729, Address: 0x48e840, Func Offset: 0x150
	// Line 2719, Address: 0x48e84c, Func Offset: 0x15c
	// Line 2729, Address: 0x48e854, Func Offset: 0x164
	// Func End, Address: 0x48e894, Func Offset: 0x1a4
}

// create_mesh__20@unnamed@xWater_cpp@FPfPCfi
// Start address: 0x48e8a0
float32* create_mesh(float32* out, float32* in, int32 in_subdiv)
{
	int32 width;
	int32 width_in_meshes;
	int32 i;
	int32 j;
	// Line 2623, Address: 0x48e8a0, Func Offset: 0
	// Line 2624, Address: 0x48e8a4, Func Offset: 0x4
	// Line 2623, Address: 0x48e8a8, Func Offset: 0x8
	// Line 2624, Address: 0x48e8ac, Func Offset: 0xc
	// Line 2623, Address: 0x48e8b0, Func Offset: 0x10
	// Line 2626, Address: 0x48e8b4, Func Offset: 0x14
	// Line 2623, Address: 0x48e8b8, Func Offset: 0x18
	// Line 2626, Address: 0x48e8c0, Func Offset: 0x20
	// Line 2629, Address: 0x48e8c8, Func Offset: 0x28
	// Line 2630, Address: 0x48e8d8, Func Offset: 0x38
	// Line 2634, Address: 0x48e8e4, Func Offset: 0x44
	// Line 2632, Address: 0x48e8f4, Func Offset: 0x54
	// Line 2634, Address: 0x48e900, Func Offset: 0x60
	// Line 2632, Address: 0x48e904, Func Offset: 0x64
	// Line 2634, Address: 0x48e908, Func Offset: 0x68
	// Line 2636, Address: 0x48e998, Func Offset: 0xf8
	// Line 2637, Address: 0x48e9a8, Func Offset: 0x108
	// Line 2638, Address: 0x48e9b8, Func Offset: 0x118
	// Line 2639, Address: 0x48e9c0, Func Offset: 0x120
	// Line 2641, Address: 0x48e9cc, Func Offset: 0x12c
	// Line 2642, Address: 0x48ea60, Func Offset: 0x1c0
	// Line 2641, Address: 0x48ea64, Func Offset: 0x1c4
	// Line 2643, Address: 0x48ea68, Func Offset: 0x1c8
	// Line 2649, Address: 0x48ea70, Func Offset: 0x1d0
	// Line 2650, Address: 0x48ea78, Func Offset: 0x1d8
	// Line 2653, Address: 0x48ea7c, Func Offset: 0x1dc
	// Line 2654, Address: 0x48ea80, Func Offset: 0x1e0
	// Func End, Address: 0x48ea98, Func Offset: 0x1f8
}

// wrap_mesh__20@unnamed@xWater_cpp@FPfPCfi
// Start address: 0x48eaa0
void wrap_mesh(float32* out, float32* in, int32 in_subdiv)
{
	int32 in_mask;
	float32* out_endcol;
	int32 i;
	float32* row_in;
	int32 j;
	// Line 2603, Address: 0x48eaa0, Func Offset: 0
	// Line 2606, Address: 0x48eaa4, Func Offset: 0x4
	// Line 2603, Address: 0x48eaa8, Func Offset: 0x8
	// Line 2607, Address: 0x48eaac, Func Offset: 0xc
	// Line 2603, Address: 0x48eab0, Func Offset: 0x10
	// Line 2610, Address: 0x48eab4, Func Offset: 0x14
	// Line 2611, Address: 0x48eab8, Func Offset: 0x18
	// Line 2610, Address: 0x48eabc, Func Offset: 0x1c
	// Line 2614, Address: 0x48eac8, Func Offset: 0x28
	// Line 2615, Address: 0x48eb68, Func Offset: 0xc8
	// Line 2614, Address: 0x48eb6c, Func Offset: 0xcc
	// Line 2615, Address: 0x48eb80, Func Offset: 0xe0
	// Line 2614, Address: 0x48eb84, Func Offset: 0xe4
	// Line 2615, Address: 0x48eb8c, Func Offset: 0xec
	// Line 2617, Address: 0x48eb94, Func Offset: 0xf4
	// Line 2619, Address: 0x48eb98, Func Offset: 0xf8
	// Line 2617, Address: 0x48eb9c, Func Offset: 0xfc
	// Line 2619, Address: 0x48eba0, Func Offset: 0x100
	// Line 2620, Address: 0x48ebac, Func Offset: 0x10c
	// Func End, Address: 0x48ebb4, Func Offset: 0x114
}

// prune_odds__20@unnamed@xWater_cpp@FPfPCfi
// Start address: 0x48ebc0
void prune_odds(float32* out, float32* in, int32 in_subdiv)
{
	int32 in_width;
	int32 in_stride;
	int32 in_padding;
	int32 out_width;
	int32 out_padding;
	float32* end_row;
	float32* end;
	// Line 2530, Address: 0x48ebc0, Func Offset: 0
	// Line 2534, Address: 0x48ebc4, Func Offset: 0x4
	// Line 2530, Address: 0x48ebc8, Func Offset: 0x8
	// Line 2531, Address: 0x48ebcc, Func Offset: 0xc
	// Line 2534, Address: 0x48ebd0, Func Offset: 0x10
	// Line 2536, Address: 0x48ebd4, Func Offset: 0x14
	// Line 2531, Address: 0x48ebd8, Func Offset: 0x18
	// Line 2536, Address: 0x48ebdc, Func Offset: 0x1c
	// Line 2531, Address: 0x48ebe0, Func Offset: 0x20
	// Line 2536, Address: 0x48ebe4, Func Offset: 0x24
	// Line 2532, Address: 0x48ebec, Func Offset: 0x2c
	// Line 2539, Address: 0x48ebf4, Func Offset: 0x34
	// Line 2538, Address: 0x48ec04, Func Offset: 0x44
	// Line 2539, Address: 0x48ec08, Func Offset: 0x48
	// Line 2542, Address: 0x48ec0c, Func Offset: 0x4c
	// Line 2544, Address: 0x48ec14, Func Offset: 0x54
	// Line 2545, Address: 0x48ec18, Func Offset: 0x58
	// Line 2547, Address: 0x48ec28, Func Offset: 0x68
	// Line 2548, Address: 0x48ec2c, Func Offset: 0x6c
	// Line 2550, Address: 0x48ec30, Func Offset: 0x70
	// Line 2554, Address: 0x48ec38, Func Offset: 0x78
	// Func End, Address: 0x48ec40, Func Offset: 0x80
}

// triangle_render_1bit__20@unnamed@xWater_cpp@FPUciiiffffff
// Start address: 0x48ec40
void triangle_render_1bit(uint8* bits, int32 stride, float32 Ax, float32 Ay, float32 Bx, float32 By, float32 Cx, float32 Cy)
{
	int32 y;
	int32 ymid;
	int32 yend;
	int32 xmin;
	int32 xmax;
	int32 tri_type;
	float32 swap_temp;
	float32 ABx;
	float32 ABy;
	float32 ACx;
	float32 ACy;
	float32 BCx;
	float32 BCy;
	float32 iACy;
	float32 left;
	float32 dleft;
	float32 end_left;
	float32 right;
	float32 dright;
	float32 end_right;
	// Line 2265, Address: 0x48ec40, Func Offset: 0
	// Line 2267, Address: 0x48ec4c, Func Offset: 0xc
	// Line 2268, Address: 0x48ec50, Func Offset: 0x10
	// Line 2267, Address: 0x48ec54, Func Offset: 0x14
	// Line 2268, Address: 0x48ec58, Func Offset: 0x18
	// Line 2267, Address: 0x48ec5c, Func Offset: 0x1c
	// Line 2268, Address: 0x48ec60, Func Offset: 0x20
	// Line 2270, Address: 0x48ec64, Func Offset: 0x24
	// Line 2272, Address: 0x48ec70, Func Offset: 0x30
	// Line 2273, Address: 0x48ec74, Func Offset: 0x34
	// Line 2272, Address: 0x48ec78, Func Offset: 0x38
	// Line 2273, Address: 0x48ec7c, Func Offset: 0x3c
	// Line 2272, Address: 0x48ec80, Func Offset: 0x40
	// Line 2273, Address: 0x48ec84, Func Offset: 0x44
	// Line 2275, Address: 0x48ec88, Func Offset: 0x48
	// Line 2277, Address: 0x48ec94, Func Offset: 0x54
	// Line 2278, Address: 0x48ec98, Func Offset: 0x58
	// Line 2277, Address: 0x48ec9c, Func Offset: 0x5c
	// Line 2278, Address: 0x48eca0, Func Offset: 0x60
	// Line 2277, Address: 0x48eca4, Func Offset: 0x64
	// Line 2293, Address: 0x48ecb0, Func Offset: 0x70
	// Line 2295, Address: 0x48ecbc, Func Offset: 0x7c
	// Line 2296, Address: 0x48ecc0, Func Offset: 0x80
	// Line 2295, Address: 0x48ecc4, Func Offset: 0x84
	// Line 2296, Address: 0x48ecc8, Func Offset: 0x88
	// Line 2295, Address: 0x48eccc, Func Offset: 0x8c
	// Line 2298, Address: 0x48ecd0, Func Offset: 0x90
	// Line 2303, Address: 0x48ecd8, Func Offset: 0x98
	// Line 2305, Address: 0x48ed00, Func Offset: 0xc0
	// Line 2306, Address: 0x48ed04, Func Offset: 0xc4
	// Line 2305, Address: 0x48ed08, Func Offset: 0xc8
	// Line 2306, Address: 0x48ed0c, Func Offset: 0xcc
	// Line 2305, Address: 0x48ed10, Func Offset: 0xd0
	// Line 2306, Address: 0x48ed14, Func Offset: 0xd4
	// Line 2309, Address: 0x48ed18, Func Offset: 0xd8
	// Line 2310, Address: 0x48ed3c, Func Offset: 0xfc
	// Line 2313, Address: 0x48ed40, Func Offset: 0x100
	// Line 2334, Address: 0x48ed4c, Func Offset: 0x10c
	// Line 2337, Address: 0x48ed50, Func Offset: 0x110
	// Line 2333, Address: 0x48ed5c, Func Offset: 0x11c
	// Line 2337, Address: 0x48ed60, Func Offset: 0x120
	// Line 2333, Address: 0x48ed64, Func Offset: 0x124
	// Line 2334, Address: 0x48ed68, Func Offset: 0x128
	// Line 2337, Address: 0x48ed6c, Func Offset: 0x12c
	// Line 2335, Address: 0x48ed70, Func Offset: 0x130
	// Line 2341, Address: 0x48ed74, Func Offset: 0x134
	// Line 2343, Address: 0x48ed7c, Func Offset: 0x13c
	// Line 2349, Address: 0x48ed88, Func Offset: 0x148
	// Line 2344, Address: 0x48ed90, Func Offset: 0x150
	// Line 2343, Address: 0x48ed98, Func Offset: 0x158
	// Line 2344, Address: 0x48eda0, Func Offset: 0x160
	// Line 2346, Address: 0x48eda8, Func Offset: 0x168
	// Line 2347, Address: 0x48edac, Func Offset: 0x16c
	// Line 2349, Address: 0x48edb0, Func Offset: 0x170
	// Line 2363, Address: 0x48edb8, Func Offset: 0x178
	// Line 2355, Address: 0x48edc8, Func Offset: 0x188
	// Line 2351, Address: 0x48edcc, Func Offset: 0x18c
	// Line 2352, Address: 0x48ede4, Func Offset: 0x1a4
	// Line 2354, Address: 0x48edf0, Func Offset: 0x1b0
	// Line 2355, Address: 0x48edf8, Func Offset: 0x1b8
	// Line 2356, Address: 0x48ee0c, Func Offset: 0x1cc
	// Line 2358, Address: 0x48ee18, Func Offset: 0x1d8
	// Line 2360, Address: 0x48ee20, Func Offset: 0x1e0
	// Line 2361, Address: 0x48ee28, Func Offset: 0x1e8
	// Line 2363, Address: 0x48ee2c, Func Offset: 0x1ec
	// Line 2361, Address: 0x48ee34, Func Offset: 0x1f4
	// Line 2363, Address: 0x48ee3c, Func Offset: 0x1fc
	// Line 2367, Address: 0x48eedc, Func Offset: 0x29c
	// Line 2369, Address: 0x48eee0, Func Offset: 0x2a0
	// Line 2371, Address: 0x48eeec, Func Offset: 0x2ac
	// Line 2373, Address: 0x48eef4, Func Offset: 0x2b4
	// Line 2374, Address: 0x48ef00, Func Offset: 0x2c0
	// Line 2376, Address: 0x48ef1c, Func Offset: 0x2dc
	// Line 2377, Address: 0x48ef20, Func Offset: 0x2e0
	// Line 2375, Address: 0x48ef28, Func Offset: 0x2e8
	// Line 2378, Address: 0x48ef2c, Func Offset: 0x2ec
	// Line 2379, Address: 0x48ef34, Func Offset: 0x2f4
	// Line 2381, Address: 0x48ef40, Func Offset: 0x300
	// Line 2382, Address: 0x48ef4c, Func Offset: 0x30c
	// Line 2384, Address: 0x48ef68, Func Offset: 0x328
	// Line 2385, Address: 0x48ef6c, Func Offset: 0x32c
	// Line 2383, Address: 0x48ef74, Func Offset: 0x334
	// Line 2386, Address: 0x48ef78, Func Offset: 0x338
	// Line 2389, Address: 0x48ef80, Func Offset: 0x340
	// Line 2390, Address: 0x48ef8c, Func Offset: 0x34c
	// Line 2392, Address: 0x48efa8, Func Offset: 0x368
	// Line 2393, Address: 0x48efac, Func Offset: 0x36c
	// Line 2391, Address: 0x48efb4, Func Offset: 0x374
	// Line 2393, Address: 0x48efb8, Func Offset: 0x378
	// Line 2410, Address: 0x48efc8, Func Offset: 0x388
	// Line 2402, Address: 0x48efd8, Func Offset: 0x398
	// Line 2398, Address: 0x48efdc, Func Offset: 0x39c
	// Line 2399, Address: 0x48eff4, Func Offset: 0x3b4
	// Line 2401, Address: 0x48f000, Func Offset: 0x3c0
	// Line 2402, Address: 0x48f008, Func Offset: 0x3c8
	// Line 2403, Address: 0x48f01c, Func Offset: 0x3dc
	// Line 2405, Address: 0x48f028, Func Offset: 0x3e8
	// Line 2407, Address: 0x48f030, Func Offset: 0x3f0
	// Line 2408, Address: 0x48f038, Func Offset: 0x3f8
	// Line 2410, Address: 0x48f03c, Func Offset: 0x3fc
	// Line 2408, Address: 0x48f044, Func Offset: 0x404
	// Line 2410, Address: 0x48f04c, Func Offset: 0x40c
	// Line 2279, Address: 0x48f0ec, Func Offset: 0x4ac
	// Line 2289, Address: 0x48f0f0, Func Offset: 0x4b0
	// Line 2410, Address: 0x48f0f4, Func Offset: 0x4b4
	// Line 2289, Address: 0x48f0f8, Func Offset: 0x4b8
	// Line 2410, Address: 0x48f0fc, Func Offset: 0x4bc
	// Line 2281, Address: 0x48f100, Func Offset: 0x4c0
	// Line 2282, Address: 0x48f104, Func Offset: 0x4c4
	// Line 2289, Address: 0x48f108, Func Offset: 0x4c8
	// Line 2410, Address: 0x48f10c, Func Offset: 0x4cc
	// Line 2285, Address: 0x48f110, Func Offset: 0x4d0
	// Line 2410, Address: 0x48f114, Func Offset: 0x4d4
	// Line 2283, Address: 0x48f118, Func Offset: 0x4d8
	// Line 2289, Address: 0x48f11c, Func Offset: 0x4dc
	// Line 2410, Address: 0x48f120, Func Offset: 0x4e0
	// Line 2289, Address: 0x48f124, Func Offset: 0x4e4
	// Line 2410, Address: 0x48f128, Func Offset: 0x4e8
	// Line 2317, Address: 0x48f138, Func Offset: 0x4f8
	// Line 2410, Address: 0x48f13c, Func Offset: 0x4fc
	// Line 2319, Address: 0x48f148, Func Offset: 0x508
	// Line 2410, Address: 0x48f14c, Func Offset: 0x50c
	// Line 2320, Address: 0x48f150, Func Offset: 0x510
	// Line 2321, Address: 0x48f154, Func Offset: 0x514
	// Line 2410, Address: 0x48f15c, Func Offset: 0x51c
	// Line 2324, Address: 0x48f160, Func Offset: 0x520
	// Line 2410, Address: 0x48f164, Func Offset: 0x524
	// Line 2325, Address: 0x48f168, Func Offset: 0x528
	// Line 2410, Address: 0x48f16c, Func Offset: 0x52c
	// Line 2328, Address: 0x48f170, Func Offset: 0x530
	// Line 2410, Address: 0x48f174, Func Offset: 0x534
	// Line 2328, Address: 0x48f184, Func Offset: 0x544
	// Line 2410, Address: 0x48f188, Func Offset: 0x548
	// Line 2328, Address: 0x48f18c, Func Offset: 0x54c
	// Line 2410, Address: 0x48f190, Func Offset: 0x550
	// Line 2328, Address: 0x48f1a4, Func Offset: 0x564
	// Line 2410, Address: 0x48f1ac, Func Offset: 0x56c
	// Line 2328, Address: 0x48f1b4, Func Offset: 0x574
	// Line 2410, Address: 0x48f1b8, Func Offset: 0x578
	// Line 2328, Address: 0x48f1cc, Func Offset: 0x58c
	// Line 2410, Address: 0x48f1d4, Func Offset: 0x594
	// Line 2328, Address: 0x48f1e4, Func Offset: 0x5a4
	// Line 2410, Address: 0x48f1e8, Func Offset: 0x5a8
	// Line 2328, Address: 0x48f1f4, Func Offset: 0x5b4
	// Line 2410, Address: 0x48f1f8, Func Offset: 0x5b8
	// Line 2328, Address: 0x48f21c, Func Offset: 0x5dc
	// Line 2410, Address: 0x48f228, Func Offset: 0x5e8
	// Line 2328, Address: 0x48f234, Func Offset: 0x5f4
	// Line 2410, Address: 0x48f238, Func Offset: 0x5f8
	// Line 2329, Address: 0x48f240, Func Offset: 0x600
	// Line 2410, Address: 0x48f248, Func Offset: 0x608
	// Line 2328, Address: 0x48f250, Func Offset: 0x610
	// Line 2410, Address: 0x48f258, Func Offset: 0x618
	// Line 2328, Address: 0x48f260, Func Offset: 0x620
	// Line 2410, Address: 0x48f264, Func Offset: 0x624
	// Line 2363, Address: 0x48f278, Func Offset: 0x638
	// Line 2410, Address: 0x48f27c, Func Offset: 0x63c
	// Line 2363, Address: 0x48f288, Func Offset: 0x648
	// Line 2410, Address: 0x48f28c, Func Offset: 0x64c
	// Line 2363, Address: 0x48f294, Func Offset: 0x654
	// Line 2410, Address: 0x48f298, Func Offset: 0x658
	// Line 2363, Address: 0x48f2c0, Func Offset: 0x680
	// Line 2410, Address: 0x48f2c4, Func Offset: 0x684
	// Line 2413, Address: 0x48f2f8, Func Offset: 0x6b8
	// Line 2415, Address: 0x48f308, Func Offset: 0x6c8
	// Line 2410, Address: 0x48f320, Func Offset: 0x6e0
	// Line 2415, Address: 0x48f324, Func Offset: 0x6e4
	// Func End, Address: 0x48f340, Func Offset: 0x700
}

// render_facades__20@unnamed@xWater_cpp@FRCQ220@unnamed@xWater_cpp@18water_motion_groupR7xMat4x3RC7xMat4x3RC5xVec2ffRC7xSpherePQ220@unnamed@xWater_cpp@13facade_entityiPQ220@unnamed@xWater_cpp@13facade_entityi
// Start address: 0x48f340
uint8 render_facades(water_motion_group& motion_group, xMat4x3& shade_view_mat, xMat4x3& cam_mat, xVec2& view_window, float32 plane_y, xSphere& bound_sphere, facade_entity* refract_ents, int32 refract_ents_size, facade_entity* reflect_ents, int32 reflect_ents_size)
{
	xColor_tag fill_color;
	int32 reflect_alpha;
	RwCamera* world_cam;
	xMat4x3 flip_mat;
	// Line 2057, Address: 0x48f340, Func Offset: 0
	// Line 2058, Address: 0x48f344, Func Offset: 0x4
	// Line 2057, Address: 0x48f348, Func Offset: 0x8
	// Line 2058, Address: 0x48f394, Func Offset: 0x54
	// Line 2064, Address: 0x48f3b0, Func Offset: 0x70
	// Line 2072, Address: 0x48f3d8, Func Offset: 0x98
	// Line 2075, Address: 0x48f3e8, Func Offset: 0xa8
	// Line 2072, Address: 0x48f3ec, Func Offset: 0xac
	// Line 2075, Address: 0x48f408, Func Offset: 0xc8
	// Line 2076, Address: 0x48f410, Func Offset: 0xd0
	// Line 2078, Address: 0x48f450, Func Offset: 0x110
	// Line 2093, Address: 0x48f454, Func Offset: 0x114
	// Line 2078, Address: 0x48f458, Func Offset: 0x118
	// Line 2093, Address: 0x48f45c, Func Offset: 0x11c
	// Line 2096, Address: 0x48f46c, Func Offset: 0x12c
	// Line 2097, Address: 0x48f470, Func Offset: 0x130
	// Line 2096, Address: 0x48f474, Func Offset: 0x134
	// Line 2097, Address: 0x48f4a4, Func Offset: 0x164
	// Line 2096, Address: 0x48f4a8, Func Offset: 0x168
	// Line 2097, Address: 0x48f4ac, Func Offset: 0x16c
	// Line 2096, Address: 0x48f4b0, Func Offset: 0x170
	// Line 2097, Address: 0x48f4c0, Func Offset: 0x180
	// Line 2098, Address: 0x48f53c, Func Offset: 0x1fc
	// Line 2099, Address: 0x48f550, Func Offset: 0x210
	// Line 2098, Address: 0x48f554, Func Offset: 0x214
	// Line 2099, Address: 0x48f568, Func Offset: 0x228
	// Line 2098, Address: 0x48f56c, Func Offset: 0x22c
	// Line 2099, Address: 0x48f578, Func Offset: 0x238
	// Line 2100, Address: 0x48f588, Func Offset: 0x248
	// Line 2101, Address: 0x48f598, Func Offset: 0x258
	// Line 2103, Address: 0x48f5c0, Func Offset: 0x280
	// Line 2104, Address: 0x48f5c8, Func Offset: 0x288
	// Line 2105, Address: 0x48f5d4, Func Offset: 0x294
	// Line 2107, Address: 0x48f5dc, Func Offset: 0x29c
	// Line 2109, Address: 0x48f604, Func Offset: 0x2c4
	// Line 2110, Address: 0x48f664, Func Offset: 0x324
	// Line 2111, Address: 0x48f6b0, Func Offset: 0x370
	// Line 2114, Address: 0x48f6bc, Func Offset: 0x37c
	// Line 2116, Address: 0x48f6d0, Func Offset: 0x390
	// Line 2117, Address: 0x48f750, Func Offset: 0x410
	// Line 2118, Address: 0x48f768, Func Offset: 0x428
	// Line 2119, Address: 0x48f774, Func Offset: 0x434
	// Line 2118, Address: 0x48f778, Func Offset: 0x438
	// Line 2119, Address: 0x48f7a4, Func Offset: 0x464
	// Line 2120, Address: 0x48f7b8, Func Offset: 0x478
	// Line 2121, Address: 0x48f7c8, Func Offset: 0x488
	// Line 2123, Address: 0x48f7f0, Func Offset: 0x4b0
	// Line 2124, Address: 0x48f7f8, Func Offset: 0x4b8
	// Line 2125, Address: 0x48f804, Func Offset: 0x4c4
	// Line 2127, Address: 0x48f80c, Func Offset: 0x4cc
	// Line 2128, Address: 0x48f830, Func Offset: 0x4f0
	// Line 2129, Address: 0x48f838, Func Offset: 0x4f8
	// Line 2130, Address: 0x48f844, Func Offset: 0x504
	// Line 2131, Address: 0x48f89c, Func Offset: 0x55c
	// Line 2132, Address: 0x48f938, Func Offset: 0x5f8
	// Line 2133, Address: 0x48f940, Func Offset: 0x600
	// Line 2149, Address: 0x48f94c, Func Offset: 0x60c
	// Line 2151, Address: 0x48f968, Func Offset: 0x628
	// Line 2059, Address: 0x48f970, Func Offset: 0x630
	// Line 2104, Address: 0x48f97c, Func Offset: 0x63c
	// Line 2151, Address: 0x48f984, Func Offset: 0x644
	// Line 2124, Address: 0x48f9a4, Func Offset: 0x664
	// Line 2151, Address: 0x48f9ac, Func Offset: 0x66c
	// Line 2131, Address: 0x48f9bc, Func Offset: 0x67c
	// Line 2152, Address: 0x48f9c4, Func Offset: 0x684
	// Func End, Address: 0x48f9f8, Func Offset: 0x6b8
}

// render_reflect_skydomes__20@unnamed@xWater_cpp@FRCQ220@unnamed@xWater_cpp@18water_motion_groupR16xFXCameraTexturePQ220@unnamed@xWater_cpp@13facade_entityiRC7xMat4x3
// Start address: 0x48fa00
int32 render_reflect_skydomes(water_motion_group& motion_group, facade_entity* ents, int32 ents_size, xMat4x3& mat)
{
	int32 domes;
	facade_entity* end_ents;
	xEnt* ent;
	xModelInstance* model;
	RpAtomic* atomic;
	xMat4x3& entmat;
	xMat4x3 oldentmat;
	xVec3& local_center;
	xVec3& center;
	xVec3 oldcenter;
	// Line 1807, Address: 0x48fa00, Func Offset: 0
	// Line 1810, Address: 0x48fa04, Func Offset: 0x4
	// Line 1807, Address: 0x48fa08, Func Offset: 0x8
	// Line 1810, Address: 0x48fa20, Func Offset: 0x20
	// Line 1807, Address: 0x48fa24, Func Offset: 0x24
	// Line 1808, Address: 0x48fa44, Func Offset: 0x44
	// Line 1811, Address: 0x48fa48, Func Offset: 0x48
	// Line 1813, Address: 0x48fa74, Func Offset: 0x74
	// Line 1814, Address: 0x48fa78, Func Offset: 0x78
	// Line 1816, Address: 0x48fa8c, Func Offset: 0x8c
	// Line 1817, Address: 0x48fa98, Func Offset: 0x98
	// Line 1819, Address: 0x48fb10, Func Offset: 0x110
	// Line 1820, Address: 0x48fb40, Func Offset: 0x140
	// Line 1822, Address: 0x48fb50, Func Offset: 0x150
	// Line 1823, Address: 0x48fbb4, Func Offset: 0x1b4
	// Line 1826, Address: 0x48fbc0, Func Offset: 0x1c0
	// Line 1835, Address: 0x48fbc4, Func Offset: 0x1c4
	// Line 1829, Address: 0x48fbc8, Func Offset: 0x1c8
	// Line 1828, Address: 0x48fbcc, Func Offset: 0x1cc
	// Line 1827, Address: 0x48fbd0, Func Offset: 0x1d0
	// Line 1829, Address: 0x48fbd4, Func Offset: 0x1d4
	// Line 1835, Address: 0x48fbd8, Func Offset: 0x1d8
	// Line 1829, Address: 0x48fbdc, Func Offset: 0x1dc
	// Line 1831, Address: 0x48fbe0, Func Offset: 0x1e0
	// Line 1829, Address: 0x48fbe4, Func Offset: 0x1e4
	// Line 1832, Address: 0x48fbe8, Func Offset: 0x1e8
	// Line 1829, Address: 0x48fbec, Func Offset: 0x1ec
	// Line 1833, Address: 0x48fc00, Func Offset: 0x200
	// Line 1835, Address: 0x48fc14, Func Offset: 0x214
	// Line 1836, Address: 0x48fc1c, Func Offset: 0x21c
	// Line 1838, Address: 0x48fc6c, Func Offset: 0x26c
	// Line 1840, Address: 0x48fcd0, Func Offset: 0x2d0
	// Line 1841, Address: 0x48fcdc, Func Offset: 0x2dc
	// Line 1840, Address: 0x48fce8, Func Offset: 0x2e8
	// Line 1841, Address: 0x48fd68, Func Offset: 0x368
	// Line 1842, Address: 0x48fd74, Func Offset: 0x374
	// Line 1844, Address: 0x48fd78, Func Offset: 0x378
	// Line 1845, Address: 0x48fd84, Func Offset: 0x384
	// Line 1846, Address: 0x48fd98, Func Offset: 0x398
	// Line 1847, Address: 0x48fda4, Func Offset: 0x3a4
	// Line 1848, Address: 0x48fdc0, Func Offset: 0x3c0
	// Line 1849, Address: 0x48fdc4, Func Offset: 0x3c4
	// Func End, Address: 0x48fdf8, Func Offset: 0x3f8
}

// render_refract_skydomes__20@unnamed@xWater_cpp@FRCQ220@unnamed@xWater_cpp@18water_motion_groupR16xFXCameraTexturePQ220@unnamed@xWater_cpp@13facade_entityi
// Start address: 0x48fe00
int32 render_refract_skydomes(facade_entity* ents, int32 ents_size)
{
	int32 domes;
	facade_entity* end_ents;
	xEnt* ent;
	// Line 1785, Address: 0x48fe00, Func Offset: 0
	// Line 1787, Address: 0x48fe04, Func Offset: 0x4
	// Line 1785, Address: 0x48fe08, Func Offset: 0x8
	// Line 1787, Address: 0x48fe24, Func Offset: 0x24
	// Line 1788, Address: 0x48fe28, Func Offset: 0x28
	// Line 1790, Address: 0x48fe30, Func Offset: 0x30
	// Line 1791, Address: 0x48fe34, Func Offset: 0x34
	// Line 1798, Address: 0x48fe48, Func Offset: 0x48
	// Line 1799, Address: 0x48fe58, Func Offset: 0x58
	// Line 1802, Address: 0x48fe60, Func Offset: 0x60
	// Line 1795, Address: 0x48fe74, Func Offset: 0x74
	// Line 1802, Address: 0x48fe78, Func Offset: 0x78
	// Line 1795, Address: 0x48fe84, Func Offset: 0x84
	// Line 1802, Address: 0x48fe88, Func Offset: 0x88
	// Line 1796, Address: 0x48fe94, Func Offset: 0x94
	// Line 1802, Address: 0x48fe98, Func Offset: 0x98
	// Line 1794, Address: 0x48fed4, Func Offset: 0xd4
	// Line 1802, Address: 0x48fed8, Func Offset: 0xd8
	// Line 1794, Address: 0x48fee4, Func Offset: 0xe4
	// Line 1802, Address: 0x48feec, Func Offset: 0xec
	// Line 1794, Address: 0x48ff04, Func Offset: 0x104
	// Line 1802, Address: 0x48ff0c, Func Offset: 0x10c
	// Line 1794, Address: 0x48ff24, Func Offset: 0x124
	// Line 1802, Address: 0x48ff28, Func Offset: 0x128
	// Line 1795, Address: 0x48ff44, Func Offset: 0x144
	// Line 1802, Address: 0x48ff50, Func Offset: 0x150
	// Line 1796, Address: 0x48ff64, Func Offset: 0x164
	// Line 1802, Address: 0x48ff68, Func Offset: 0x168
	// Line 1803, Address: 0x48ffb4, Func Offset: 0x1b4
	// Func End, Address: 0x48ffd4, Func Offset: 0x1d4
}

// render_model_now__20@unnamed@xWater_cpp@FR14xModelInstanceiPC7xMat4x3
// Start address: 0x48ffe0
void render_model_now(xModelInstance& model, int32 flags, xMat4x3* transform_mat)
{
	xMat4x3 oldmat;
	xVec3 oldcenter;
	xModelInstance* submodel;
	RpAtomic* atomic;
	xMat4x3& mat;
	xVec3& center;
	xVec3& local_center;
	// Line 1654, Address: 0x48ffe0, Func Offset: 0
	// Line 1655, Address: 0x48ffe4, Func Offset: 0x4
	// Line 1654, Address: 0x48ffe8, Func Offset: 0x8
	// Line 1655, Address: 0x490014, Func Offset: 0x34
	// Line 1661, Address: 0x490038, Func Offset: 0x58
	// Line 1678, Address: 0x49004c, Func Offset: 0x6c
	// Line 1679, Address: 0x490050, Func Offset: 0x70
	// Line 1681, Address: 0x490054, Func Offset: 0x74
	// Line 1683, Address: 0x49005c, Func Offset: 0x7c
	// Line 1685, Address: 0x490060, Func Offset: 0x80
	// Line 1683, Address: 0x490064, Func Offset: 0x84
	// Line 1688, Address: 0x490070, Func Offset: 0x90
	// Line 1683, Address: 0x490078, Func Offset: 0x98
	// Line 1686, Address: 0x4900f8, Func Offset: 0x118
	// Line 1688, Address: 0x49010c, Func Offset: 0x12c
	// Line 1689, Address: 0x490114, Func Offset: 0x134
	// Line 1691, Address: 0x490164, Func Offset: 0x184
	// Line 1692, Address: 0x490174, Func Offset: 0x194
	// Line 1697, Address: 0x490188, Func Offset: 0x1a8
	// Line 1707, Address: 0x4901c4, Func Offset: 0x1e4
	// Line 1709, Address: 0x4901d0, Func Offset: 0x1f0
	// Line 1711, Address: 0x4901d8, Func Offset: 0x1f8
	// Line 1712, Address: 0x4901e4, Func Offset: 0x204
	// Line 1711, Address: 0x4901f0, Func Offset: 0x210
	// Line 1712, Address: 0x490270, Func Offset: 0x290
	// Line 1714, Address: 0x49027c, Func Offset: 0x29c
	// Line 1715, Address: 0x49028c, Func Offset: 0x2ac
	// Line 1730, Address: 0x4902a0, Func Offset: 0x2c0
	// Line 1731, Address: 0x4902ac, Func Offset: 0x2cc
	// Func End, Address: 0x4902dc, Func Offset: 0x2fc
}

// heightmap_animate_waves__20@unnamed@xWater_cpp@FPfPfPfPfifPC10iWaterWave
// Start address: 0x4902e0
void heightmap_animate_waves(float32* Ay_out, float32* Nx_out, float32* Ny_out, float32* Nz_out, int32 subdiv_level, float32 scale, iWaterWave* waves)
{
	int32 width;
	int32 stride;
	int32 drow;
	float32 dxz;
	float32 passz;
	float32 z;
	iWaterInstancedWaves* iwaves;
	float32* Ay;
	float32* Nx;
	float32* Ny;
	float32* Nz;
	int32 row_value_step;
	int32 start_row;
	int32 end_row;
	// Line 1103, Address: 0x4902e0, Func Offset: 0
	// Line 1135, Address: 0x4902e4, Func Offset: 0x4
	// Line 1103, Address: 0x4902e8, Func Offset: 0x8
	// Line 1136, Address: 0x4902ec, Func Offset: 0xc
	// Line 1103, Address: 0x4902f0, Func Offset: 0x10
	// Line 1135, Address: 0x490318, Func Offset: 0x38
	// Line 1103, Address: 0x49031c, Func Offset: 0x3c
	// Line 1136, Address: 0x490320, Func Offset: 0x40
	// Line 1103, Address: 0x490324, Func Offset: 0x44
	// Line 1136, Address: 0x490328, Func Offset: 0x48
	// Line 1140, Address: 0x49032c, Func Offset: 0x4c
	// Line 1103, Address: 0x490334, Func Offset: 0x54
	// Line 1141, Address: 0x490338, Func Offset: 0x58
	// Line 1136, Address: 0x49033c, Func Offset: 0x5c
	// Line 1103, Address: 0x490340, Func Offset: 0x60
	// Line 1141, Address: 0x490348, Func Offset: 0x68
	// Line 1146, Address: 0x49034c, Func Offset: 0x6c
	// Line 1103, Address: 0x490350, Func Offset: 0x70
	// Line 1141, Address: 0x490358, Func Offset: 0x78
	// Line 1140, Address: 0x49035c, Func Offset: 0x7c
	// Line 1142, Address: 0x490364, Func Offset: 0x84
	// Line 1143, Address: 0x490368, Func Offset: 0x88
	// Line 1142, Address: 0x49036c, Func Offset: 0x8c
	// Line 1146, Address: 0x490370, Func Offset: 0x90
	// Line 1147, Address: 0x490378, Func Offset: 0x98
	// Line 1146, Address: 0x49037c, Func Offset: 0x9c
	// Line 1147, Address: 0x490380, Func Offset: 0xa0
	// Line 1148, Address: 0x490394, Func Offset: 0xb4
	// Line 1149, Address: 0x4903b0, Func Offset: 0xd0
	// Line 1152, Address: 0x4903b8, Func Offset: 0xd8
	// Line 1153, Address: 0x4903bc, Func Offset: 0xdc
	// Line 1152, Address: 0x4903c0, Func Offset: 0xe0
	// Line 1153, Address: 0x4903c4, Func Offset: 0xe4
	// Line 1155, Address: 0x4903d4, Func Offset: 0xf4
	// Line 1156, Address: 0x4903dc, Func Offset: 0xfc
	// Line 1157, Address: 0x4903e8, Func Offset: 0x108
	// Line 1159, Address: 0x4903f0, Func Offset: 0x110
	// Line 1160, Address: 0x4903fc, Func Offset: 0x11c
	// Line 1164, Address: 0x490408, Func Offset: 0x128
	// Line 1167, Address: 0x490410, Func Offset: 0x130
	// Line 1166, Address: 0x490414, Func Offset: 0x134
	// Line 1167, Address: 0x490418, Func Offset: 0x138
	// Line 1171, Address: 0x490430, Func Offset: 0x150
	// Line 1178, Address: 0x490444, Func Offset: 0x164
	// Line 1172, Address: 0x490448, Func Offset: 0x168
	// Line 1173, Address: 0x49044c, Func Offset: 0x16c
	// Line 1174, Address: 0x490450, Func Offset: 0x170
	// Line 1175, Address: 0x490454, Func Offset: 0x174
	// Line 1178, Address: 0x490458, Func Offset: 0x178
	// Line 1180, Address: 0x490460, Func Offset: 0x180
	// Line 1233, Address: 0x490468, Func Offset: 0x188
	// Func End, Address: 0x4904a4, Func Offset: 0x1c4
}

// convert_wave__20@unnamed@xWater_cpp@FR10iWaterWaveff
// Start address: 0x4904b0
void convert_wave(iWaterWave& wave, float32 wave_length, float32 dir)
{
	float32 freq_scale;
	float32 xlen;
	float32 zlen;
	// Line 864, Address: 0x4904b0, Func Offset: 0
	// Line 866, Address: 0x4904b4, Func Offset: 0x4
	// Line 864, Address: 0x4904b8, Func Offset: 0x8
	// Line 866, Address: 0x4904bc, Func Offset: 0xc
	// Line 864, Address: 0x4904c0, Func Offset: 0x10
	// Line 866, Address: 0x4904c4, Func Offset: 0x14
	// Line 864, Address: 0x4904c8, Func Offset: 0x18
	// Line 866, Address: 0x4904dc, Func Offset: 0x2c
	// Line 865, Address: 0x4904e0, Func Offset: 0x30
	// Line 870, Address: 0x4904ec, Func Offset: 0x3c
	// Line 866, Address: 0x4904f0, Func Offset: 0x40
	// Line 870, Address: 0x4904fc, Func Offset: 0x4c
	// Line 871, Address: 0x490508, Func Offset: 0x58
	// Line 870, Address: 0x490510, Func Offset: 0x60
	// Line 871, Address: 0x490514, Func Offset: 0x64
	// Line 873, Address: 0x49052c, Func Offset: 0x7c
	// Line 882, Address: 0x490530, Func Offset: 0x80
	// Line 883, Address: 0x49053c, Func Offset: 0x8c
	// Line 882, Address: 0x490544, Func Offset: 0x94
	// Line 883, Address: 0x490548, Func Offset: 0x98
	// Line 885, Address: 0x490560, Func Offset: 0xb0
	// Line 893, Address: 0x490564, Func Offset: 0xb4
	// Line 877, Address: 0x49056c, Func Offset: 0xbc
	// Line 893, Address: 0x490580, Func Offset: 0xd0
	// Line 878, Address: 0x49058c, Func Offset: 0xdc
	// Line 879, Address: 0x490590, Func Offset: 0xe0
	// Line 893, Address: 0x490594, Func Offset: 0xe4
	// Line 879, Address: 0x490598, Func Offset: 0xe8
	// Line 893, Address: 0x49059c, Func Offset: 0xec
	// Line 879, Address: 0x4905a0, Func Offset: 0xf0
	// Line 893, Address: 0x4905a8, Func Offset: 0xf8
	// Line 889, Address: 0x4905b4, Func Offset: 0x104
	// Line 893, Address: 0x4905c8, Func Offset: 0x118
	// Line 890, Address: 0x4905d4, Func Offset: 0x124
	// Line 891, Address: 0x4905d8, Func Offset: 0x128
	// Line 893, Address: 0x4905dc, Func Offset: 0x12c
	// Line 891, Address: 0x4905e0, Func Offset: 0x130
	// Line 893, Address: 0x4905e4, Func Offset: 0x134
	// Line 891, Address: 0x4905e8, Func Offset: 0x138
	// Line 893, Address: 0x4905f0, Func Offset: 0x140
	// Func End, Address: 0x490618, Func Offset: 0x168
}

// generate_random_ocean_wave__20@unnamed@xWater_cpp@FRQ220@unnamed@xWater_cpp@10ocean_waveRC12xWaterMotion
// Start address: 0x490620
void generate_random_ocean_wave(ocean_wave& w, xWaterMotion& motion)
{
	float32 g;
	float32 freq_peak;
	float32 wind_dir;
	float32 maxf;
	int32 i;
	float32 f;
	float32 phi;
	float32 dir;
	float32 k;
	float32 freq;
	// Line 824, Address: 0x490620, Func Offset: 0
	// Line 827, Address: 0x490624, Func Offset: 0x4
	// Line 824, Address: 0x490628, Func Offset: 0x8
	// Line 827, Address: 0x49062c, Func Offset: 0xc
	// Line 824, Address: 0x490630, Func Offset: 0x10
	// Line 828, Address: 0x490634, Func Offset: 0x14
	// Line 824, Address: 0x490638, Func Offset: 0x18
	// Line 830, Address: 0x49063c, Func Offset: 0x1c
	// Line 824, Address: 0x490640, Func Offset: 0x20
	// Line 827, Address: 0x490644, Func Offset: 0x24
	// Line 824, Address: 0x490648, Func Offset: 0x28
	// Line 826, Address: 0x490668, Func Offset: 0x48
	// Line 828, Address: 0x49066c, Func Offset: 0x4c
	// Line 824, Address: 0x490670, Func Offset: 0x50
	// Line 827, Address: 0x49067c, Func Offset: 0x5c
	// Line 824, Address: 0x490688, Func Offset: 0x68
	// Line 830, Address: 0x490690, Func Offset: 0x70
	// Line 824, Address: 0x490694, Func Offset: 0x74
	// Line 827, Address: 0x490698, Func Offset: 0x78
	// Line 831, Address: 0x49069c, Func Offset: 0x7c
	// Line 834, Address: 0x4906d8, Func Offset: 0xb8
	// Line 837, Address: 0x49071c, Func Offset: 0xfc
	// Line 838, Address: 0x490770, Func Offset: 0x150
	// Line 839, Address: 0x4907bc, Func Offset: 0x19c
	// Line 844, Address: 0x490804, Func Offset: 0x1e4
	// Line 846, Address: 0x49080c, Func Offset: 0x1ec
	// Line 842, Address: 0x490810, Func Offset: 0x1f0
	// Line 843, Address: 0x49081c, Func Offset: 0x1fc
	// Line 839, Address: 0x490824, Func Offset: 0x204
	// Line 844, Address: 0x490828, Func Offset: 0x208
	// Line 839, Address: 0x49082c, Func Offset: 0x20c
	// Line 846, Address: 0x490830, Func Offset: 0x210
	// Line 843, Address: 0x490834, Func Offset: 0x214
	// Line 844, Address: 0x490838, Func Offset: 0x218
	// Line 846, Address: 0x49083c, Func Offset: 0x21c
	// Line 850, Address: 0x490a44, Func Offset: 0x424
	// Line 846, Address: 0x490a48, Func Offset: 0x428
	// Line 850, Address: 0x490a90, Func Offset: 0x470
	// Line 851, Address: 0x490a9c, Func Offset: 0x47c
	// Line 858, Address: 0x490ab8, Func Offset: 0x498
	// Line 853, Address: 0x490ac8, Func Offset: 0x4a8
	// Line 854, Address: 0x490acc, Func Offset: 0x4ac
	// Line 858, Address: 0x490ad0, Func Offset: 0x4b0
	// Line 861, Address: 0x490adc, Func Offset: 0x4bc
	// Func End, Address: 0x490b24, Func Offset: 0x504
}

