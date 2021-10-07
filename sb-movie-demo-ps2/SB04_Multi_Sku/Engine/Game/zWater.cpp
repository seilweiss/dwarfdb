typedef struct xEnt;
typedef struct xGridBound;
typedef struct zEnt;
typedef struct RxClusterDefinition;
typedef struct xEntCollis;
typedef struct RpWorld;
typedef struct xIniValue;
typedef struct motion_config;
typedef struct xLinkAsset;
typedef struct xAnimTransition;
typedef struct xBase;
typedef struct xLightKit;
typedef struct zWaterBody;
typedef struct analog_data;
typedef struct xSurface;
typedef struct xVec3;
typedef struct xAnimState;
typedef struct xDynAsset;
typedef struct RpInterpolator;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef struct zScene;
typedef struct xMat4x3;
typedef struct xClumpCollBSPVertInfo;
typedef struct xModelInstance;
typedef struct xJSPHeader;
typedef struct xAnimFile;
typedef struct xClumpCollBSPTree;
typedef struct xFFX;
typedef enum RwFogType;
typedef struct RpTie;
typedef struct xWaterShading;
typedef struct rxHeapBlockHeader;
typedef struct zSceneParameters;
typedef struct xUpdateCullMgr;
typedef struct xWaterWave;
typedef struct xBox;
typedef struct xJSPNodeLight;
typedef struct RxIoSpec;
typedef struct wave_config;
typedef struct xVec4;
typedef struct xEnv;
typedef struct xIniFile;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct RwBBox;
typedef struct xClumpCollBSPBranchNode;
typedef struct xAnimTransitionList;
typedef struct zPlayerSettings;
typedef struct xEnvAsset;
typedef struct pointer_asset;
typedef struct RwRaster;
typedef struct xShadowSimpleCache;
typedef struct xClumpCollBSPTriangle;
typedef struct iEnvMatOrder;
typedef struct RxPacket;
typedef struct RwPlane;
typedef struct RpLight;
typedef struct xEntBoulder;
typedef struct xEntShadow;
typedef struct RxOutputSpec;
typedef struct xGroup;
typedef struct xWaterMotion;
typedef struct xIniSection;
typedef struct xSpline3;
typedef struct RwFrame;
typedef struct xLightKitLight;
typedef struct asset_type;
typedef struct anim_coll_data;
typedef struct xUpdateCullEnt;
typedef struct zEntHangable;
typedef struct xAnimTable;
typedef struct xSphere;
typedef struct xEntFrame;
typedef struct _class_0;
typedef struct xAnimPhysicsData;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct _class_1;
typedef struct xWaterSettings;
typedef struct xAnimEffect;
typedef struct RxCluster;
typedef struct zLasso;
typedef struct xGroupAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xRot;
typedef enum RxClusterValid;
typedef struct xAnimMultiFileEntry;
typedef struct xCylinder;
typedef struct RpSector;
typedef struct xJSPNodeInfo;
typedef struct RwV3d;
typedef struct xModelTag;
typedef enum _zPlayerType;
typedef struct xAnimActiveEffect;
typedef enum RwBlendFunction;
typedef struct xAnimPlay;
typedef struct RwV2d;
typedef struct xMat3x3;
typedef struct iFogParams;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct xCoef3;
typedef struct RpGeometry;
typedef struct RpClump;
typedef struct xCamGroup;
typedef enum iSndHandle;
typedef struct RxClusterRef;
typedef struct xWaterEnvironment;
typedef struct xAnimSingle;
typedef struct xCamera;
typedef struct xUpdateCullGroup;
typedef struct xAnimMultiFileBase;
typedef struct zCheckPoint;
typedef struct _zEnv;
typedef struct xCamScreen;
typedef enum sceDemoEndReason;
typedef struct RwCamera;
typedef struct xEntAsset;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct xModelPool;
typedef struct xCollis;
typedef enum _tagPadState;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct xModelPipe;
typedef struct xJSPNodeTreeLeaf;
typedef struct xJSPNodeTree;
typedef struct xBaseAsset;
typedef struct xBound;
typedef struct xAnimMultiFile;
typedef struct zPlatform;
typedef struct RpMaterial;
typedef struct xGlobals;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct xScene;
typedef struct _zPortal;
typedef struct xVec2;
typedef struct RwResEntry;
typedef struct _tagPadAnalog;
typedef struct xEntDrive;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xJSPNodeTreeBranch;
typedef struct xMemPool;
typedef struct xPortalAsset;
typedef enum xSndEffect;
typedef struct RwSurfaceProperties;
typedef struct zJumpParam;
typedef struct RxPipelineNode;
typedef struct zPlayer;
typedef struct _tagxPad;
typedef enum zGlobalDemoType;
typedef struct zGlobalSettings;
typedef struct xBBox;
typedef struct PS2DemoGlobals;
typedef struct RwLLLink;
typedef struct zPlayerLassoInfo;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct xQuat;
typedef struct zLedgeGrabParams;
typedef struct _class_2;
typedef struct xWaterTileSet;
typedef struct RxPipeline;
typedef struct _tagiPad;
typedef struct zCutsceneMgr;
typedef struct xCoef;
typedef struct RxPipelineNodeTopSortData;
typedef struct zRewardsMgr;
typedef struct zAssetPickupTable;
typedef struct zGlobals;
typedef enum _zPlayerWallJumpState;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct tri_data_0;
typedef struct rxReq;
typedef struct xGrid;
typedef struct tri_data_1;
typedef struct xShadowSimplePoly;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelBucket;
typedef struct RxHeap;
typedef struct zPlayerGlobals;
typedef struct RwLinkList;
typedef struct iEnv;
typedef struct xQCData;
typedef struct RxNodeDefinition;
typedef struct zPlayerCarryInfo;
typedef struct xJSPMiniLightTie;
typedef struct RpTriangle;
typedef struct _class_3;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_3)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_5)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_7)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_10)(xEnt*);
typedef uint32(*type_15)(void*, void*);
typedef xBase*(*type_16)(uint32);
typedef int8*(*type_17)(xBase*);
typedef void(*type_21)(void*);
typedef int8*(*type_23)(uint32);
typedef RpAtomic*(*type_28)(RpAtomic*);
typedef RpWorldSector*(*type_37)(RpWorldSector*);
typedef void(*type_51)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef uint32(*type_52)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_58)(RwCamera*);
typedef uint32(*type_60)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_62)(RwCamera*);
typedef void(*type_69)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_70)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_73)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_74)(RwResEntry*);
typedef int32(*type_75)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_77)(RwObjectHasFrame*);
typedef void(*type_78)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_79)(RxPipelineNode*);
typedef void(*type_80)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_82)(xAnimPlay*, xAnimState*, void*);
typedef int32(*type_84)(RxPipelineNode*);
typedef void(*type_86)(RxNodeDefinition*);
typedef void(*type_87)(xEnt*, xScene*, float32);
typedef int32(*type_89)(RxNodeDefinition*);
typedef void(*type_90)(xEnt*);
typedef int32(*type_93)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_96)(xMemPool*, void*);
typedef RpClump*(*type_97)(RpClump*, void*);
typedef void(*type_100)(xEnt*);
typedef void(*type_106)(xEnt*, xVec3*);

typedef float32 type_0[22];
typedef xCollis type_1[18];
typedef RwV3d type_2[8];
typedef RwFrustumPlane type_4[6];
typedef int8 type_6[128];
typedef int8 type_8[128][6];
typedef uint16 type_9[3];
typedef int8 type_11[16];
typedef int8 type_12[32];
typedef uint8 type_13[3];
typedef xModelTag type_14[2];
typedef uint32 type_18[4];
typedef analog_data type_19[2];
typedef RpLight* type_20[2];
typedef xEntBoulder* type_22[2];
typedef float32 type_24[4];
typedef float32 type_25[6];
typedef uint8 type_26[10];
typedef xJSPMiniLightTie type_27[16];
typedef uint32 type_29[4096];
typedef uint8 type_30[2];
typedef RwFrame* type_31[2];
typedef float32 type_32[3];
typedef uint8 type_33[10];
typedef uint32 type_34[2];
typedef int8 type_35[256];
typedef float32 type_36[3];
typedef float32 type_38[2];
typedef int8 type_39[256];
typedef float32 type_40[3];
typedef RxCluster type_41[1];
typedef float32 type_42[16];
typedef int8 type_43[4];
typedef xVec3 type_44[4];
typedef xVec3 type_45[5];
typedef uint32 type_46[4];
typedef uint8 type_47[5];
typedef xModelTag type_48[4];
typedef uint8 type_49[3];
typedef xEnt* type_50[161];
typedef float32 type_53[3];
typedef uint32 type_54[1];
typedef RwTexCoords* type_55[8];
typedef float32 type_56[2];
typedef float32 type_57[4];
typedef int8 type_59[10];
typedef xVec4 type_61[12];
typedef xModelInstance* type_63[11];
typedef uint32 type_64[59];
typedef uint8 type_65[4];
typedef xAnimMultiFileEntry type_66[1];
typedef int8 type_67[64];
typedef xVec4 type_68[12];
typedef int8 type_71[32];
typedef int32 type_72[141];
typedef xBase* type_76[141];
typedef int8 type_81[32];
typedef int8 type_83[32];
typedef int8 type_85[127];
typedef int8 type_88[16];
typedef float32 type_91[4];
typedef uint8 type_92[22];
typedef xVec3 type_94[60];
typedef uint8 type_95[22];
typedef uint32 type_98[1];
typedef _tagxPad* type_99[4];
typedef uint32 type_101[20];
typedef uint32 type_102[8];
typedef RwTexCoords* type_103[8];
typedef uint32 type_104[20];
typedef xVec3 type_105[3];
typedef uint32 type_107[20];
typedef int8 type_108[32];
typedef int8 type_109[16];
typedef float32 type_110[22];

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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xIniValue
{
	int8* tok;
	int8* val;
};

struct motion_config
{
	int8 name[64];
	uint32 hash_id;
	int32 motion_type;
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
	_class_2 shading;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zWaterBody : xBase
{
	int32 motion_type;
	asset_type* asset;
	xEnt* body_ent;
	xEnt** refract_ents;
	int32 refract_ents_size;
	xEnt** reflect_ents;
	int32 reflect_ents_size;
	int32 body_id;
	uint8 visible;

	void cb_dispatch(xBase* to, uint32 event);
	void get_shading(xWaterShading& shading);
	xEnt** load_ents(int32& size, uint32 id, int8* type);
	xEnt** load_ents(xEnt** ents, xBase* base);
	int32 count_ents(xBase* base, int8* type, int32 depth);
	void setup();
	void update_all();
	void reset_all();
	void setup_all();
	void load(xBase& data, xDynAsset& asset);
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct xSurface
{
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

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xFFX
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

struct RpTie
{
	RwLLLink lAtomicInWorldSector;
	RpAtomic* apAtom;
	RwLLLink lWorldSectorInAtomic;
	RpWorldSector* worldSector;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct xWaterWave
{
	float32 phase;
	float32 amplitude;
	float32 frequency_x;
	float32 frequency_z;
	float32 speed;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct wave_config
{
	float32 phase;
	float32 amplitude;
	float32 wave_length;
	float32 speed;
	float32 dir;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct pointer_asset : xDynAsset
{
	xVec3 loc;
	float32 yaw;
	float32 pitch;
	float32 roll;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
};

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
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

struct xEntBoulder
{
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xIniSection
{
	int8* sec;
	int32 first;
	int32 count;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct asset_type : xDynAsset
{
	uint32 flags;
	uint32 motion_type;
	uint32 body;
	uint32 facade_refract;
	uint32 facade_reflect;
	uint32 light_dir;
};

struct anim_coll_data
{
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zEntHangable
{
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

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct _class_0
{
	xVec3* verts;
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
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

struct _class_1
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
};

struct xWaterSettings
{
	uint8 allow_overfill;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct RpSector
{
	int32 type;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct xCamGroup
{
};

enum iSndHandle
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xWaterEnvironment
{
	xEnt** refract_ents;
	int32 refract_ents_size;
	xEnt** reflect_ents;
	int32 reflect_ents_size;
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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCamScreen
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct zPlatform
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
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

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zPlayerLassoInfo
{
	float32 dist;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	zLasso lasso;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct _class_2
{
	float32 color_mul_red;
	float32 color_mul_green;
	float32 color_mul_blue;
	float32 light_ambient;
	float32 light_diffuse;
	float32 light_transmissive;
	float32 reflectance_min;
	float32 reflect_intensity;
	float32 reflect_magnitude;
	float32 refract_min;
	float32 refract_max;
	float32 refract_dist_min;
	float32 refract_dist_max;
	float32 refract_ymax;
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

struct _tagiPad
{
	int32 port;
};

struct zCutsceneMgr
{
};

struct xCoef
{
	float32 a[4];
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct zRewardsMgr
{
};

struct zAssetPickupTable
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND,
	k_WALLJUMP_STUCK,
	k_WALLJUMP_FALL
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
};

struct rxReq
{
};

struct xGrid
{
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct RwLinkList
{
	RwLLLink link;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

struct _class_3
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

float32 scale;
int8 buffer[16];
int8 buffer[16];
int8 ini_filename[10];
motion_config* motions;
int32 motions_size;
zGlobals globals;
uint32 gActiveHeap;
void(*stay_hidden_dammit)(xEnt*);
void(*cb_dispatch)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
uint32 ourGlobals[4096];

void zWaterSceneExit();
void zWaterSceneEnter();
void zWaterStartup();
void cb_dispatch(xBase* to, uint32 event);
void get_shading(xWaterShading& shading);
xEnt** load_ents(int32& size, uint32 id, int8* type);
xEnt** load_ents(xEnt** ents, xBase* base);
int32 count_ents(xBase* base, int8* type, int32 depth);
void setup();
void update_all();
void reset_all();
void setup_all();
void load(xBase& data, xDynAsset& asset);
void load_motion_configs();
void load_motion_config(motion_config& cfg, xIniValue* values, int32 values_size);
void stay_hidden_dammit(xEnt* ent);

// zWaterSceneExit__Fv
// Start address: 0x492300
void zWaterSceneExit()
{
	// Line 902, Address: 0x492300, Func Offset: 0
	// Func End, Address: 0x492308, Func Offset: 0x8
}

// zWaterSceneEnter__Fv
// Start address: 0x492310
void zWaterSceneEnter()
{
	// Line 891, Address: 0x492310, Func Offset: 0
	// Line 893, Address: 0x49233c, Func Offset: 0x2c
	// Line 891, Address: 0x492340, Func Offset: 0x30
	// Line 893, Address: 0x492344, Func Offset: 0x34
	// Line 897, Address: 0x492410, Func Offset: 0x100
	// Func End, Address: 0x492440, Func Offset: 0x130
}

// zWaterStartup__Fv
// Start address: 0x492440
void zWaterStartup()
{
	// Line 886, Address: 0x492440, Func Offset: 0
	// Func End, Address: 0x492448, Func Offset: 0x8
}

// cb_dispatch__10zWaterBodyFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x492450
void zWaterBody::cb_dispatch(xBase* to, uint32 event)
{
	zWaterBody& e;
	// Line 794, Address: 0x492450, Func Offset: 0
	// Line 799, Address: 0x492454, Func Offset: 0x4
	// Line 802, Address: 0x492474, Func Offset: 0x24
	// Line 803, Address: 0x492490, Func Offset: 0x40
	// Line 805, Address: 0x492498, Func Offset: 0x48
	// Line 808, Address: 0x4924b4, Func Offset: 0x64
	// Func End, Address: 0x4924c0, Func Offset: 0x70
}

// get_shading__10zWaterBodyCFR13xWaterShading
// Start address: 0x4924c0
void zWaterBody::get_shading(xWaterShading& shading)
{
	motion_config& cfg;
	float32 light_yaw;
	float32 light_pitch;
	// Line 765, Address: 0x4924c0, Func Offset: 0
	// Line 766, Address: 0x4924c4, Func Offset: 0x4
	// Line 769, Address: 0x4924c8, Func Offset: 0x8
	// Line 765, Address: 0x4924cc, Func Offset: 0xc
	// Line 766, Address: 0x4924e8, Func Offset: 0x28
	// Line 765, Address: 0x4924ec, Func Offset: 0x2c
	// Line 766, Address: 0x4924f0, Func Offset: 0x30
	// Line 765, Address: 0x4924f4, Func Offset: 0x34
	// Line 766, Address: 0x4924f8, Func Offset: 0x38
	// Line 769, Address: 0x4924fc, Func Offset: 0x3c
	// Line 766, Address: 0x492500, Func Offset: 0x40
	// Line 769, Address: 0x49250c, Func Offset: 0x4c
	// Line 770, Address: 0x492568, Func Offset: 0xa8
	// Line 788, Address: 0x492598, Func Offset: 0xd8
	// Line 789, Address: 0x49259c, Func Offset: 0xdc
	// Line 770, Address: 0x4925a0, Func Offset: 0xe0
	// Line 772, Address: 0x4925b4, Func Offset: 0xf4
	// Line 773, Address: 0x4925bc, Func Offset: 0xfc
	// Line 774, Address: 0x4925c4, Func Offset: 0x104
	// Line 775, Address: 0x4925cc, Func Offset: 0x10c
	// Line 776, Address: 0x4925d4, Func Offset: 0x114
	// Line 777, Address: 0x4925dc, Func Offset: 0x11c
	// Line 778, Address: 0x4925e4, Func Offset: 0x124
	// Line 779, Address: 0x4925ec, Func Offset: 0x12c
	// Line 780, Address: 0x4925f4, Func Offset: 0x134
	// Line 781, Address: 0x4925fc, Func Offset: 0x13c
	// Line 782, Address: 0x492604, Func Offset: 0x144
	// Line 783, Address: 0x49260c, Func Offset: 0x14c
	// Line 784, Address: 0x492614, Func Offset: 0x154
	// Line 785, Address: 0x49261c, Func Offset: 0x15c
	// Line 788, Address: 0x492624, Func Offset: 0x164
	// Line 790, Address: 0x492628, Func Offset: 0x168
	// Line 769, Address: 0x492630, Func Offset: 0x170
	// Line 790, Address: 0x492644, Func Offset: 0x184
	// Func End, Address: 0x49266c, Func Offset: 0x1ac
}

// load_ents__10zWaterBodyCFRiUiPCc
// Start address: 0x492670
xEnt** zWaterBody::load_ents(int32& size, uint32 id, int8* type)
{
	xBase* base;
	// Line 702, Address: 0x492670, Func Offset: 0
	// Line 703, Address: 0x492690, Func Offset: 0x20
	// Line 711, Address: 0x4926a0, Func Offset: 0x30
	// Line 723, Address: 0x4926a8, Func Offset: 0x38
	// Line 726, Address: 0x4926c0, Func Offset: 0x50
	// Line 727, Address: 0x4926d8, Func Offset: 0x68
	// Line 728, Address: 0x4926e8, Func Offset: 0x78
	// Line 711, Address: 0x492704, Func Offset: 0x94
	// Line 728, Address: 0x49270c, Func Offset: 0x9c
	// Line 715, Address: 0x492714, Func Offset: 0xa4
	// Line 729, Address: 0x492718, Func Offset: 0xa8
	// Func End, Address: 0x492734, Func Offset: 0xc4
}

// load_ents__10zWaterBodyCFPP4xEntP5xBase
// Start address: 0x492740
xEnt** zWaterBody::load_ents(xEnt** ents, xBase* base)
{
	xGroup* group;
	xBase** child;
	xBase** end_child;
	// Line 679, Address: 0x492740, Func Offset: 0
	// Line 680, Address: 0x492744, Func Offset: 0x4
	// Line 679, Address: 0x492748, Func Offset: 0x8
	// Line 680, Address: 0x492770, Func Offset: 0x30
	// Line 683, Address: 0x49277c, Func Offset: 0x3c
	// Line 684, Address: 0x492798, Func Offset: 0x58
	// Line 686, Address: 0x4927ac, Func Offset: 0x6c
	// Line 688, Address: 0x4927b4, Func Offset: 0x74
	// Line 689, Address: 0x492a48, Func Offset: 0x308
	// Line 690, Address: 0x492a68, Func Offset: 0x328
	// Line 688, Address: 0x492a7c, Func Offset: 0x33c
	// Line 690, Address: 0x492a80, Func Offset: 0x340
	// Line 688, Address: 0x492a8c, Func Offset: 0x34c
	// Line 690, Address: 0x492a90, Func Offset: 0x350
	// Line 688, Address: 0x492a9c, Func Offset: 0x35c
	// Line 690, Address: 0x492aa0, Func Offset: 0x360
	// Line 688, Address: 0x492aac, Func Offset: 0x36c
	// Line 690, Address: 0x492ab0, Func Offset: 0x370
	// Line 688, Address: 0x492abc, Func Offset: 0x37c
	// Line 690, Address: 0x492ac0, Func Offset: 0x380
	// Line 688, Address: 0x492acc, Func Offset: 0x38c
	// Line 690, Address: 0x492ad0, Func Offset: 0x390
	// Line 688, Address: 0x492adc, Func Offset: 0x39c
	// Line 690, Address: 0x492ae0, Func Offset: 0x3a0
	// Line 691, Address: 0x492aec, Func Offset: 0x3ac
	// Line 692, Address: 0x492af0, Func Offset: 0x3b0
	// Line 698, Address: 0x492af4, Func Offset: 0x3b4
	// Line 699, Address: 0x492af8, Func Offset: 0x3b8
	// Func End, Address: 0x492b28, Func Offset: 0x3e8
}

// count_ents__10zWaterBodyCFP5xBasePCci
// Start address: 0x492b30
int32 zWaterBody::count_ents(xBase* base, int8* type, int32 depth)
{
	xGroup* group;
	int32 total;
	xBase** child;
	xBase** end_child;
	// Line 647, Address: 0x492b30, Func Offset: 0
	// Line 648, Address: 0x492b34, Func Offset: 0x4
	// Line 647, Address: 0x492b38, Func Offset: 0x8
	// Line 648, Address: 0x492b5c, Func Offset: 0x2c
	// Line 654, Address: 0x492b68, Func Offset: 0x38
	// Line 655, Address: 0x492b7c, Func Offset: 0x4c
	// Line 661, Address: 0x492b88, Func Offset: 0x58
	// Line 663, Address: 0x492b90, Func Offset: 0x60
	// Line 664, Address: 0x492ba0, Func Offset: 0x70
	// Line 665, Address: 0x492bb0, Func Offset: 0x80
	// Line 671, Address: 0x492bb8, Func Offset: 0x88
	// Line 674, Address: 0x492bc8, Func Offset: 0x98
	// Line 676, Address: 0x492bd0, Func Offset: 0xa0
	// Func End, Address: 0x492bf4, Func Offset: 0xc4
}

// setup__10zWaterBodyFv
// Start address: 0x492c00
void zWaterBody::setup()
{
	xWaterSettings settings;
	xWaterShading shading;
	xWaterEnvironment env;
	xWaterTileSet* tileset;
	// Line 559, Address: 0x492c00, Func Offset: 0
	// Line 561, Address: 0x492c10, Func Offset: 0x10
	// Line 562, Address: 0x492c24, Func Offset: 0x24
	// Line 563, Address: 0x492c44, Func Offset: 0x44
	// Line 566, Address: 0x492c60, Func Offset: 0x60
	// Line 567, Address: 0x492cd8, Func Offset: 0xd8
	// Line 568, Address: 0x492d58, Func Offset: 0x158
	// Line 573, Address: 0x492dd8, Func Offset: 0x1d8
	// Line 580, Address: 0x492ddc, Func Offset: 0x1dc
	// Line 573, Address: 0x492de4, Func Offset: 0x1e4
	// Line 576, Address: 0x492df0, Func Offset: 0x1f0
	// Line 580, Address: 0x492e04, Func Offset: 0x204
	// Line 582, Address: 0x492e0c, Func Offset: 0x20c
	// Line 583, Address: 0x492e14, Func Offset: 0x214
	// Line 584, Address: 0x492e1c, Func Offset: 0x21c
	// Line 585, Address: 0x492e24, Func Offset: 0x224
	// Line 587, Address: 0x492e34, Func Offset: 0x234
	// Line 589, Address: 0x492e40, Func Offset: 0x240
	// Line 587, Address: 0x492e44, Func Offset: 0x244
	// Line 589, Address: 0x492e48, Func Offset: 0x248
	// Line 590, Address: 0x492e64, Func Offset: 0x264
	// Line 592, Address: 0x492e6c, Func Offset: 0x26c
	// Line 606, Address: 0x492e78, Func Offset: 0x278
	// Func End, Address: 0x492e8c, Func Offset: 0x28c
}

// update_all__10zWaterBodyFf
// Start address: 0x492e90
void zWaterBody::update_all()
{
	zScene& scene;
	zWaterBody* it;
	zWaterBody* end;
	// Line 505, Address: 0x492e90, Func Offset: 0
	// Line 507, Address: 0x492e94, Func Offset: 0x4
	// Line 505, Address: 0x492e98, Func Offset: 0x8
	// Line 507, Address: 0x492ea4, Func Offset: 0x14
	// Line 508, Address: 0x492ea8, Func Offset: 0x18
	// Line 510, Address: 0x492ec8, Func Offset: 0x38
	// Line 511, Address: 0x492ed0, Func Offset: 0x40
	// Line 512, Address: 0x492f18, Func Offset: 0x88
	// Func End, Address: 0x492f2c, Func Offset: 0x9c
}

// reset_all__10zWaterBodyFv
// Start address: 0x492f30
void zWaterBody::reset_all()
{
	zScene& scene;
	zWaterBody* it;
	zWaterBody* end;
	// Line 495, Address: 0x492f30, Func Offset: 0
	// Line 497, Address: 0x492f34, Func Offset: 0x4
	// Line 495, Address: 0x492f38, Func Offset: 0x8
	// Line 497, Address: 0x492f44, Func Offset: 0x14
	// Line 498, Address: 0x492f48, Func Offset: 0x18
	// Line 500, Address: 0x492f68, Func Offset: 0x38
	// Line 501, Address: 0x492f70, Func Offset: 0x40
	// Line 502, Address: 0x493160, Func Offset: 0x230
	// Func End, Address: 0x493174, Func Offset: 0x244
}

// setup_all__10zWaterBodyFv
// Start address: 0x493180
void zWaterBody::setup_all()
{
	zScene& scene;
	zWaterBody* it;
	zWaterBody* end;
	// Line 485, Address: 0x493180, Func Offset: 0
	// Line 487, Address: 0x493184, Func Offset: 0x4
	// Line 485, Address: 0x493188, Func Offset: 0x8
	// Line 487, Address: 0x493194, Func Offset: 0x14
	// Line 488, Address: 0x493198, Func Offset: 0x18
	// Line 490, Address: 0x4931b8, Func Offset: 0x38
	// Line 491, Address: 0x4931c0, Func Offset: 0x40
	// Line 492, Address: 0x4931e0, Func Offset: 0x60
	// Func End, Address: 0x4931f4, Func Offset: 0x74
}

// load__10zWaterBodyFR5xBaseR9xDynAssetUi
// Start address: 0x493200
void zWaterBody::load(xBase& data, xDynAsset& asset)
{
	// Line 479, Address: 0x493200, Func Offset: 0
	// Line 481, Address: 0x493214, Func Offset: 0x14
	// Line 482, Address: 0x4932d8, Func Offset: 0xd8
	// Func End, Address: 0x4932f8, Func Offset: 0xf8
}

// load_motion_configs__20@unnamed@zWater_cpp@Fv
// Start address: 0x493300
void load_motion_configs()
{
	void* mem;
	xIniFile* ini;
	xIniSection* sections;
	uint32 memsize;
	xIniSection* isec;
	xIniSection* end_isec;
	xIniSection* osec;
	motion_config* cfg;
	motion_config* end_cfg;
	xIniSection* sec;
	xIniValue* values;
	int32 values_size;
	// Line 326, Address: 0x493300, Func Offset: 0
	// Line 335, Address: 0x493304, Func Offset: 0x4
	// Line 326, Address: 0x493308, Func Offset: 0x8
	// Line 335, Address: 0x49330c, Func Offset: 0xc
	// Line 326, Address: 0x493310, Func Offset: 0x10
	// Line 335, Address: 0x493314, Func Offset: 0x14
	// Line 326, Address: 0x493318, Func Offset: 0x18
	// Line 335, Address: 0x49331c, Func Offset: 0x1c
	// Line 326, Address: 0x493320, Func Offset: 0x20
	// Line 331, Address: 0x493324, Func Offset: 0x24
	// Line 326, Address: 0x493328, Func Offset: 0x28
	// Line 335, Address: 0x49333c, Func Offset: 0x3c
	// Line 336, Address: 0x493348, Func Offset: 0x48
	// Line 338, Address: 0x493350, Func Offset: 0x50
	// Line 339, Address: 0x493360, Func Offset: 0x60
	// Line 341, Address: 0x493368, Func Offset: 0x68
	// Line 344, Address: 0x493388, Func Offset: 0x88
	// Line 341, Address: 0x49338c, Func Offset: 0x8c
	// Line 344, Address: 0x493390, Func Offset: 0x90
	// Line 347, Address: 0x4933a0, Func Offset: 0xa0
	// Line 349, Address: 0x4933b8, Func Offset: 0xb8
	// Line 352, Address: 0x4933c0, Func Offset: 0xc0
	// Line 356, Address: 0x4933d0, Func Offset: 0xd0
	// Line 358, Address: 0x4933e8, Func Offset: 0xe8
	// Line 357, Address: 0x4933ec, Func Offset: 0xec
	// Line 358, Address: 0x4933f0, Func Offset: 0xf0
	// Line 359, Address: 0x4933f8, Func Offset: 0xf8
	// Line 362, Address: 0x493408, Func Offset: 0x108
	// Line 365, Address: 0x49342c, Func Offset: 0x12c
	// Line 362, Address: 0x493430, Func Offset: 0x130
	// Line 365, Address: 0x493438, Func Offset: 0x138
	// Line 367, Address: 0x493450, Func Offset: 0x150
	// Line 369, Address: 0x49345c, Func Offset: 0x15c
	// Line 371, Address: 0x493464, Func Offset: 0x164
	// Line 372, Address: 0x49346c, Func Offset: 0x16c
	// Line 375, Address: 0x493478, Func Offset: 0x178
	// Line 373, Address: 0x49347c, Func Offset: 0x17c
	// Line 375, Address: 0x493480, Func Offset: 0x180
	// Line 373, Address: 0x493484, Func Offset: 0x184
	// Line 374, Address: 0x493488, Func Offset: 0x188
	// Line 373, Address: 0x49348c, Func Offset: 0x18c
	// Line 375, Address: 0x493494, Func Offset: 0x194
	// Line 376, Address: 0x4934a0, Func Offset: 0x1a0
	// Line 377, Address: 0x4934b0, Func Offset: 0x1b0
	// Line 379, Address: 0x4934bc, Func Offset: 0x1bc
	// Line 380, Address: 0x4934c0, Func Offset: 0x1c0
	// Line 381, Address: 0x4934c8, Func Offset: 0x1c8
	// Line 382, Address: 0x4934d8, Func Offset: 0x1d8
	// Line 383, Address: 0x4934e0, Func Offset: 0x1e0
	// Line 384, Address: 0x4934e8, Func Offset: 0x1e8
	// Line 385, Address: 0x4934f0, Func Offset: 0x1f0
	// Line 386, Address: 0x493500, Func Offset: 0x200
	// Func End, Address: 0x493554, Func Offset: 0x254
}

// load_motion_config__20@unnamed@zWater_cpp@FRQ220@unnamed@zWater_cpp@13motion_configPC9xIniValuei
// Start address: 0x493560
void load_motion_config(motion_config& cfg, xIniValue* values, int32 values_size)
{
	// Line 204, Address: 0x493560, Func Offset: 0
	// Line 205, Address: 0x493564, Func Offset: 0x4
	// Line 204, Address: 0x493568, Func Offset: 0x8
	// Line 205, Address: 0x49356c, Func Offset: 0xc
	// Line 204, Address: 0x493570, Func Offset: 0x10
	// Line 205, Address: 0x493584, Func Offset: 0x24
	// Line 206, Address: 0x4935d4, Func Offset: 0x74
	// Line 207, Address: 0x493624, Func Offset: 0xc4
	// Line 208, Address: 0x49366c, Func Offset: 0x10c
	// Line 209, Address: 0x4936b4, Func Offset: 0x154
	// Line 210, Address: 0x4936fc, Func Offset: 0x19c
	// Line 211, Address: 0x49374c, Func Offset: 0x1ec
	// Line 212, Address: 0x49379c, Func Offset: 0x23c
	// Line 213, Address: 0x4937ec, Func Offset: 0x28c
	// Line 214, Address: 0x49383c, Func Offset: 0x2dc
	// Line 215, Address: 0x49388c, Func Offset: 0x32c
	// Line 216, Address: 0x4938dc, Func Offset: 0x37c
	// Line 218, Address: 0x49392c, Func Offset: 0x3cc
	// Line 219, Address: 0x49397c, Func Offset: 0x41c
	// Line 220, Address: 0x4939cc, Func Offset: 0x46c
	// Line 221, Address: 0x493a1c, Func Offset: 0x4bc
	// Line 222, Address: 0x493a6c, Func Offset: 0x50c
	// Line 223, Address: 0x493abc, Func Offset: 0x55c
	// Line 224, Address: 0x493b0c, Func Offset: 0x5ac
	// Line 225, Address: 0x493b5c, Func Offset: 0x5fc
	// Line 226, Address: 0x493bac, Func Offset: 0x64c
	// Line 227, Address: 0x493bfc, Func Offset: 0x69c
	// Line 228, Address: 0x493c4c, Func Offset: 0x6ec
	// Line 229, Address: 0x493c9c, Func Offset: 0x73c
	// Line 230, Address: 0x493cec, Func Offset: 0x78c
	// Line 231, Address: 0x493d3c, Func Offset: 0x7dc
	// Line 233, Address: 0x493d90, Func Offset: 0x830
	// Line 234, Address: 0x493dac, Func Offset: 0x84c
	// Func End, Address: 0x493dc4, Func Offset: 0x864
}

// stay_hidden_dammit__20@unnamed@zWater_cpp@FP4xEnt
// Start address: 0x493dd0
void stay_hidden_dammit(xEnt* ent)
{
	// Line 151, Address: 0x493dd0, Func Offset: 0
	// Line 152, Address: 0x493e24, Func Offset: 0x54
	// Func End, Address: 0x493e2c, Func Offset: 0x5c
}

