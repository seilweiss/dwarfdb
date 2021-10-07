typedef struct xEntCollis;
typedef struct activity_data;
typedef struct xJSPHeader;
typedef struct RxClusterDefinition;
typedef struct zParticleAsset;
typedef struct zParticleGeneratorWaterfall;
typedef struct xAnimMultiFile;
typedef struct xMat4x3;
typedef struct xAnimTransition;
typedef struct asset_data_0;
typedef struct _class_0;
typedef struct RpAtomic;
typedef struct zParticleLocator;
typedef struct particle_instance_0;
typedef struct xDynAsset;
typedef struct zParticleSystemWaterfall;
typedef struct xAnimState;
typedef struct xBase;
typedef struct xBox;
typedef struct xEntAsset;
typedef struct xSurface;
typedef struct xGrid;
typedef struct RpInterpolator;
typedef struct xQuat;
typedef enum RxNodeDefEditable;
typedef struct zParticleSystemWaterfallSplash;
typedef struct xEnt;
typedef struct xAnimPhysicsData;
typedef struct xGridBound;
typedef struct relative_ordering;
typedef struct xScene;
typedef struct zParticleGeneratorWaterfallMist;
typedef struct _class_1;
typedef struct xModelBucket;
typedef struct zParticleGeneratorWaterfallSplash;
typedef struct xFFX;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct xVec3;
typedef struct zParticleGenerator;
typedef struct xEntFrame;
typedef struct RxIoSpec;
typedef struct iEnvMatOrder;
typedef struct volume_circle_data;
typedef struct RpLight;
typedef struct xModelInstance;
typedef struct RwBBox;
typedef struct particle_instance_1;
typedef struct RpWorld;
typedef struct RwFrame;
typedef struct xLightKit;
typedef struct RwRaster;
typedef struct xJSPNodeTree;
typedef struct RxPacket;
typedef struct _class_2;
typedef struct xCollis;
typedef struct RxOutputSpec;
typedef struct xVec4;
typedef struct render_state;
typedef struct xJSPNodeTreeBranch;
typedef struct RwTexture;
typedef struct xAnimFile;
typedef struct RwMatrixTag;
typedef struct volume_line_data;
typedef struct xJSPNodeTreeLeaf;
typedef struct xColor_tag;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct motion_none_data;
typedef struct iEnv;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zParticleSystemWaterfallMist;
typedef struct xSphere;
typedef struct _anon0;
typedef enum RxClusterValid;
typedef struct xShadowSimplePoly;
typedef struct RpSector;
typedef struct xAnimTransitionList;
typedef struct asset_data_1;
typedef struct xCylinder;
typedef struct ptank_pool;
typedef struct _anon1;
typedef struct xJSPMiniLightTie;
typedef struct xRot;
typedef struct motion_spiral_data;
typedef struct RxPipelineCluster;
typedef struct _class_3;
typedef struct _anon2;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct xLinkAsset;
typedef struct xMat3x3;
typedef struct xShadowSimpleCache;
typedef struct xAnimEffect;
typedef struct xAnimMultiFileEntry;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEnv;
typedef struct RpMaterialList;
typedef struct volume_model_data;
typedef struct RpMorphTarget;
typedef struct xVec2;
typedef struct xClumpCollBSPTree;
typedef struct xAnimActiveEffect;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct xJSPNodeLight;
typedef struct xAnimPlay;
typedef struct ptank_pool__pos_color_size_rot;
typedef struct xLightKitLight;
typedef struct xClumpCollBSPBranchNode;
typedef enum iSndHandle;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPTriangle;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef struct xParticleBatchSystem;
typedef struct particle_instance_2;
typedef struct xAnimMultiFileBase;
typedef struct xModelPool;
typedef struct RwResEntry;
typedef struct motion_data;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xEntShadow;
typedef struct _anon3;
typedef struct _class_4;
typedef struct RwV3d;
typedef struct xModelPipe;
typedef struct volume_data;
typedef struct ptank_pool__pos_color_size;
typedef struct anim_coll_data;
typedef struct RwSurfaceProperties;
typedef struct attach_fixed_data;
typedef struct _anon4;
typedef struct xJSPNodeInfo;
typedef struct RxPipelineNode;
typedef struct RwLLLink;
typedef struct RpClump;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct attach_entity_data;
typedef struct xAnimTable;
typedef struct RxPipeline;
typedef struct xBBox;
typedef struct RxPipelineNodeTopSortData;
typedef struct xMemPool;
typedef struct xParticleBatchGroup;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct rxReq;
typedef struct xBaseAsset;
typedef struct _anon5;
typedef struct RwTexCoords;
typedef struct xBound;
typedef struct RxPipelineRequiresCluster;
typedef struct zParticleSystem;
typedef struct attach_entity_tag_data;
typedef struct RxHeap;
typedef struct asset_data_2;
typedef struct _anon6;
typedef struct volume_point_data;
typedef struct RwLinkList;
typedef struct tri_data;
typedef enum ptank_group_type;
typedef struct RxNodeDefinition;
typedef struct xQCData;
typedef struct RpTriangle;
typedef struct attach_data;
typedef struct volume_sphere_data;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_0)(xMemPool*, void*);
typedef void(*type_1)(xAnimPlay*, xAnimState*, void*);
typedef int32(*type_2)(uint8*, int32, ptank_pool&, float32, void*);
typedef int8*(*type_3)(xBase*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_5)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_7)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_8)(uint32);
typedef void(*type_9)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_10)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_13)(xEnt*, xScene*, float32);
typedef uint32(*type_16)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef RpAtomic*(*type_17)(RpAtomic*);
typedef void(*type_18)(xEnt*);
typedef RpWorldSector*(*type_19)(RpWorldSector*);
typedef void(*type_21)(xEnt*);
typedef void(*type_23)(xEnt*, xVec3*);
typedef int32(*type_25)(uint8*, int32, ptank_pool&, float32, void*);
typedef xBase*(*type_30)(uint32);
typedef void(*type_31)(xEnt*, xVec3*, xMat4x3*);
typedef uint32(*type_35)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_37)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_38)(uint8*, int32, ptank_pool&, float32, void*);
typedef int32(*type_39)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_40)(RwResEntry*);
typedef int32(*type_41)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);
typedef void(*type_44)(RxPipelineNode*);
typedef int32(*type_48)(RxPipelineNode*);
typedef void(*type_49)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_50)(RxNodeDefinition*);
typedef int32(*type_52)(RxNodeDefinition*);
typedef int32(*type_54)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_55)(RpClump*, void*);

typedef uint16 type_6[3];
typedef RpLight* type_11[2];
typedef RwFrame* type_12[2];
typedef uint32 type_14[4];
typedef uint8 type_15[3];
typedef RxCluster type_20[1];
typedef xVec3 type_22[3];
typedef uint8 type_24[2];
typedef float32 type_26[2];
typedef RwTexCoords* type_27[8];
typedef xCollis type_28[18];
typedef float32 type_29[3];
typedef float32 type_32[4];
typedef float32 type_33[16];
typedef xJSPMiniLightTie type_34[16];
typedef uint32 type_36[1];
typedef int8 type_43[4];
typedef int8 type_45[32];
typedef xAnimMultiFileEntry type_46[1];
typedef int8 type_47[32];
typedef xVec3 type_51[4];
typedef int8 type_53[16];
typedef RwTexCoords* type_56[8];
typedef float32 type_57[2];
typedef int8 type_58[16];

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

struct activity_data
{
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zParticleAsset : xDynAsset
{
	uint8 flags;
	uint8 attach_flags;
	uint8 motion_flags;
	uint8 volume_flags;
	float32 rate;
	uint32 texture;
	uint8 attach_type;
	uint8 motion_type;
	uint8 volume_type;
	uint8 system_type;
	xVec3 location;
	_class_0 axis;
	attach_data attach;
	motion_data motion;
	volume_data volume;
};

struct zParticleGeneratorWaterfall : zParticleGenerator
{
	zParticleSystemWaterfall* system;
	xEnt* attach_to;
	float32 emitted;
	zParticleLocator locator;
	int32 batch_id;
	xVec3 vel_dir;

	void deactivate();
	void activate();
	void reset();
	void create(zParticleSystemWaterfall& system, zParticleAsset& asset);
	void update(float32 dt);
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct asset_data_0
{
	uint32 flags;
	float32 width_min;
	float32 width_max;
	float32 vel_min;
	float32 vel_max;
	_class_2 vel_dir;
	float32 vel_dir_vary;
	float32 height_start_min;
	float32 height_start_max;
	float32 height_vel;
	float32 height_accel;
	float32 height_max;
	float32 intensity_min;
	float32 intensity_max;
	xColor_tag color;
	float32 gravity;
	float32 kill_yoffset;
};

struct _class_0
{
	float32 yaw;
	float32 pitch;
	float32 roll;
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

struct zParticleLocator
{
	activity_data* activity;

	void restart();
	void scene_enter();
};

struct particle_instance_0
{
	float32 age;
	float32 age_rate;
	float32 x;
	float32 y;
	float32 z;
	float32 w;
	float32 dx;
	float32 dy;
	float32 dz;
	float32 dw;
	xColor_tag color;
	float32 rot;
	float32 rot_vel;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct zParticleSystemWaterfall : zParticleSystem
{
	xParticleBatchGroup batch_group;

	void update(float32 dt);
	void scene_enter();
	zParticleGenerator* create_generator(zParticleAsset& asset);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct xSurface
{
};

struct xGrid
{
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zParticleSystemWaterfallSplash : zParticleSystem
{
	xParticleBatchGroup batch_group;

	void update(float32 dt);
	void scene_enter();
	zParticleGenerator* create_generator(zParticleAsset& asset);
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

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
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

struct relative_ordering
{
	int32 other;
	uint8 before_other;
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

struct zParticleGeneratorWaterfallMist : zParticleGenerator
{
	zParticleSystemWaterfallMist* system;
	xEnt* attach_to;
	float32 emitted;
	zParticleLocator locator;
	int32 batch_id;

	void deactivate();
	void activate();
	void reset();
	void create(zParticleSystemWaterfallMist& system, zParticleAsset& asset);
	void update(float32 dt);
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
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

struct zParticleGeneratorWaterfallSplash : zParticleGenerator
{
	zParticleSystemWaterfallSplash* system;
	xEnt* attach_to;
	float32 emitted;
	zParticleLocator locator;
	int32 batch_id;

	void deactivate();
	void activate();
	void reset();
	void create(zParticleSystemWaterfallSplash& system, zParticleAsset& asset);
	void update(float32 dt);
};

struct xFFX
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

struct zParticleGenerator : xBase
{
	zParticleAsset* asset;
	int32 flags;

	void perturb_dir(xVec3& dir, float32 angle);
	xEnt* get_attach_entity(zParticleAsset& asset);
	void event_handler(xBase* to, uint32 event);
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

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
};

struct volume_circle_data
{
	float32 radius;
	float32 arc_length;
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
	_class_3 anim_coll;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct particle_instance_1
{
	float32 age;
	float32 age_rate;
	float32 x;
	float32 y;
	float32 z;
	float32 w;
	float32 dx;
	float32 dy;
	float32 dz;
	float32 dw;
	float32 ay;
	float32 ymin;
	xColor_tag color;
	float32 rot;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
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

struct _class_2
{
	float32 yaw;
	float32 pitch;
	float32 roll;
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
		tri_data tri;
	};
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct render_state
{
	RwTexture* texture;
	uint32 src_blend;
	uint32 dst_blend;
	int32 flags;
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

struct volume_line_data
{
	uint8 flags;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 radius;
	float32 length;
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
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

struct motion_none_data
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

struct zParticleSystemWaterfallMist : zParticleSystem
{
	xParticleBatchGroup batch_group;

	void update(float32 dt);
	void scene_enter();
	zParticleGenerator* create_generator(zParticleAsset& asset);
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct _anon0
{
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct RpSector
{
	int32 type;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct asset_data_1
{
	float32 life_min;
	float32 life_max;
	float32 size_birth;
	float32 size_death;
	float32 size_vary;
	float32 vel_min;
	float32 vel_max;
	float32 vel_pitch_max;
	float32 rot_vel_min;
	float32 rot_vel_max;
	float32 intensity_min;
	float32 intensity_max;
	xColor_tag color;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct ptank_pool
{
	render_state rs;
	uint32 order_group;
	int32 order_index;
	uint32 used;
	RpAtomic* ptank;
};

struct _anon1
{
};

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct motion_spiral_data
{
	uint8 flags;
	uint8 points;
	uint8 pad1;
	uint8 pad2;
	float32 radius_inner;
	float32 radius_outer;
	float32 duration;
	float32 frequency;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _class_3
{
	xVec3* verts;
};

struct _anon2
{
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint16 Flags;
	uint16 Probability;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct volume_model_data
{
	uint8 flags;
	uint8 exclude;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
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

struct ptank_pool__pos_color_size_rot : ptank_pool
{
	xVec3* pos;
	xColor_tag* color;
	xVec2* size;
	float32* rot;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xClumpCollBSPTriangle
{
	_class_4 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

struct particle_instance_2
{
	xVec3 loc;
	float32 width;
	xColor_tag color;
	xVec3 vel;
	float32 pad1;
	float32 pad2;
	float32 gravity;
	float32 ymin;
	float32 height;
	float32 height_vel;
	float32 height_accel;
	float32 height_max;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct motion_data
{
	union
	{
		motion_none_data none;
		motion_spiral_data spiral;
	};
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

struct _anon3
{
};

struct _class_4
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

struct volume_data
{
	union
	{
		volume_point_data point;
		volume_sphere_data sphere;
		volume_circle_data circle;
		volume_line_data line;
		volume_model_data model;
	};
};

struct ptank_pool__pos_color_size : ptank_pool
{
	xVec3* pos;
	xColor_tag* color;
	xVec2* size;
};

struct anim_coll_data
{
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct attach_fixed_data
{
};

struct _anon4
{
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct attach_entity_data
{
	uint32 entity;
	uint8 bone;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
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

struct xParticleBatchGroup
{
	uint8* elements;
	int32 elements_size;
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

struct rxReq
{
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _anon5
{
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct zParticleSystem
{
	int32 type;
	int32 need;
	zParticleGenerator** generators;
	int32 generators_size;
	int32 generators_active;

	void destroy_generator();
	void scene_exit();
	void setup();
	void reset();
	void pre_render();
	void render();
	relative_ordering* get_ordering(int32& size);
	void scene_enter();
	void update();
};

struct attach_entity_tag_data
{
	uint32 entity;
	xVec3 tag;
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

struct asset_data_2
{
	float32 life_min;
	float32 life_max;
	float32 size_birth;
	float32 size_death;
	float32 size_vary;
	float32 vel_min;
	float32 vel_max;
	float32 vel_pitch_min;
	float32 vel_pitch_max;
	float32 intensity_min;
	float32 intensity_max;
	xColor_tag color;
	float32 gravity;
	float32 kill_yoffset;
};

struct _anon6
{
};

struct volume_point_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

struct attach_data
{
	union
	{
		attach_fixed_data fixed;
		attach_entity_data entity;
		attach_entity_tag_data entity_tag;
	};
};

struct volume_sphere_data
{
	float32 radius;
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
_anon6 __vt__33zParticleGeneratorWaterfallSplash;
int32(*update_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32 _rpPTankAtomicDataOffset;
_anon1 __vt__18zParticleGenerator;
uint32 gActiveHeap;
int32(*update_particles)(uint8*, int32, ptank_pool&, float32, void*);
_anon4 __vt__31zParticleGeneratorWaterfallMist;
int32(*update_particles)(uint8*, int32, ptank_pool&, float32, void*);
xColor_tag g_WHITE;
_anon2 __vt__27zParticleGeneratorWaterfall;
_anon5 __vt__30zParticleSystemWaterfallSplash;
_anon3 __vt__28zParticleSystemWaterfallMist;
_anon0 __vt__24zParticleSystemWaterfall;

void deactivate();
void activate();
void reset();
void create(zParticleSystemWaterfallSplash& system, zParticleAsset& asset);
void update(float32 dt);
int32 update_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 get_asset_size();
void update(float32 dt);
void scene_enter();
zParticleGenerator* create_generator(zParticleAsset& asset);
void deactivate();
void activate();
void reset();
void create(zParticleSystemWaterfallMist& system, zParticleAsset& asset);
void update(float32 dt);
int32 update_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 get_asset_size();
void update(float32 dt);
void scene_enter();
zParticleGenerator* create_generator(zParticleAsset& asset);
void deactivate();
void activate();
void reset();
void create(zParticleSystemWaterfall& system, zParticleAsset& asset);
void update(float32 dt);
int32 update_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 get_asset_size();
void update(float32 dt);
void scene_enter();
zParticleGenerator* create_generator(zParticleAsset& asset);

// deactivate__33zParticleGeneratorWaterfallSplashFv
// Start address: 0x495a40
void zParticleGeneratorWaterfallSplash::deactivate()
{
	// Line 878, Address: 0x495a40, Func Offset: 0
	// Line 879, Address: 0x495a4c, Func Offset: 0xc
	// Line 880, Address: 0x495a54, Func Offset: 0x14
	// Line 881, Address: 0x495a5c, Func Offset: 0x1c
	// Func End, Address: 0x495a6c, Func Offset: 0x2c
}

// activate__33zParticleGeneratorWaterfallSplashFv
// Start address: 0x495a70
void zParticleGeneratorWaterfallSplash::activate()
{
	// Line 871, Address: 0x495a70, Func Offset: 0
	// Line 872, Address: 0x495a7c, Func Offset: 0xc
	// Line 874, Address: 0x495a84, Func Offset: 0x14
	// Line 875, Address: 0x495a94, Func Offset: 0x24
	// Func End, Address: 0x495aa4, Func Offset: 0x34
}

// reset__33zParticleGeneratorWaterfallSplashFv
// Start address: 0x495ab0
void zParticleGeneratorWaterfallSplash::reset()
{
	// Line 861, Address: 0x495ab0, Func Offset: 0
	// Line 862, Address: 0x495abc, Func Offset: 0xc
	// Line 864, Address: 0x495ac4, Func Offset: 0x14
	// Line 865, Address: 0x495ad0, Func Offset: 0x20
	// Line 866, Address: 0x495ad8, Func Offset: 0x28
	// Line 868, Address: 0x495ae8, Func Offset: 0x38
	// Func End, Address: 0x495b14, Func Offset: 0x64
}

// create__33zParticleGeneratorWaterfallSplashFR30zParticleSystemWaterfallSplashR14zParticleAsset
// Start address: 0x495b20
void zParticleGeneratorWaterfallSplash::create(zParticleSystemWaterfallSplash& system, zParticleAsset& asset)
{
	xParticleBatchSystem batch;
	// Line 836, Address: 0x495b20, Func Offset: 0
	// Line 837, Address: 0x495b3c, Func Offset: 0x1c
	// Line 839, Address: 0x495b44, Func Offset: 0x24
	// Line 841, Address: 0x495b50, Func Offset: 0x30
	// Line 845, Address: 0x495b5c, Func Offset: 0x3c
	// Line 846, Address: 0x495b68, Func Offset: 0x48
	// Line 855, Address: 0x495b84, Func Offset: 0x64
	// Line 847, Address: 0x495b88, Func Offset: 0x68
	// Line 855, Address: 0x495b8c, Func Offset: 0x6c
	// Line 847, Address: 0x495b90, Func Offset: 0x70
	// Line 848, Address: 0x495b94, Func Offset: 0x74
	// Line 854, Address: 0x495b98, Func Offset: 0x78
	// Line 848, Address: 0x495b9c, Func Offset: 0x7c
	// Line 849, Address: 0x495ba0, Func Offset: 0x80
	// Line 850, Address: 0x495ba8, Func Offset: 0x88
	// Line 851, Address: 0x495bb0, Func Offset: 0x90
	// Line 850, Address: 0x495bb4, Func Offset: 0x94
	// Line 851, Address: 0x495bb8, Func Offset: 0x98
	// Line 852, Address: 0x495bbc, Func Offset: 0x9c
	// Line 853, Address: 0x495bc0, Func Offset: 0xa0
	// Line 852, Address: 0x495bc4, Func Offset: 0xa4
	// Line 853, Address: 0x495bc8, Func Offset: 0xa8
	// Line 855, Address: 0x495bcc, Func Offset: 0xac
	// Line 857, Address: 0x495bd8, Func Offset: 0xb8
	// Line 858, Address: 0x495be8, Func Offset: 0xc8
	// Func End, Address: 0x495c00, Func Offset: 0xe0
}

// update__33zParticleGeneratorWaterfallSplashFf
// Start address: 0x495c00
void zParticleGeneratorWaterfallSplash::update(float32 dt)
{
	int32 emit;
	asset_data_2& a;
	xMat4x3& mat;
	float32 life_min;
	float32 life_delta;
	float32 size_birth;
	float32 size_death;
	float32 size_vary;
	float32 ay;
	float32 ymin;
	float32 intensity_min;
	float32 intensity_delta;
	float32 red;
	float32 green;
	float32 blue;
	uint8 alpha;
	float32 vel_min;
	float32 vel_delta;
	float32 vel_pitch_min;
	float32 vel_pitch_delta;
	xVec3 center;
	float32 cx;
	float32 cz;
	uint8* mem;
	int32 have;
	particle_instance_1* p;
	particle_instance_1* endp;
	float32 scale;
	float32 intensity;
	float32 vel;
	float32 vel_pitch;
	float32 dx;
	float32 dz;
	float32 dist2;
	float32 cp;
	// Line 750, Address: 0x495c00, Func Offset: 0
	// Line 751, Address: 0x495c54, Func Offset: 0x54
	// Line 753, Address: 0x495c60, Func Offset: 0x60
	// Line 755, Address: 0x495c68, Func Offset: 0x68
	// Line 756, Address: 0x495c84, Func Offset: 0x84
	// Line 757, Address: 0x495c90, Func Offset: 0x90
	// Line 758, Address: 0x495c98, Func Offset: 0x98
	// Line 759, Address: 0x495ca0, Func Offset: 0xa0
	// Line 762, Address: 0x495ca4, Func Offset: 0xa4
	// Line 759, Address: 0x495ca8, Func Offset: 0xa8
	// Line 761, Address: 0x495cb4, Func Offset: 0xb4
	// Line 762, Address: 0x495cb8, Func Offset: 0xb8
	// Line 770, Address: 0x495cc0, Func Offset: 0xc0
	// Line 769, Address: 0x495cc4, Func Offset: 0xc4
	// Line 770, Address: 0x495cc8, Func Offset: 0xc8
	// Line 768, Address: 0x495ccc, Func Offset: 0xcc
	// Line 771, Address: 0x495cd0, Func Offset: 0xd0
	// Line 764, Address: 0x495cd4, Func Offset: 0xd4
	// Line 765, Address: 0x495cd8, Func Offset: 0xd8
	// Line 769, Address: 0x495ce4, Func Offset: 0xe4
	// Line 766, Address: 0x495cec, Func Offset: 0xec
	// Line 769, Address: 0x495cf0, Func Offset: 0xf0
	// Line 773, Address: 0x495cf4, Func Offset: 0xf4
	// Line 769, Address: 0x495cf8, Func Offset: 0xf8
	// Line 770, Address: 0x495cfc, Func Offset: 0xfc
	// Line 768, Address: 0x495d04, Func Offset: 0x104
	// Line 772, Address: 0x495d0c, Func Offset: 0x10c
	// Line 765, Address: 0x495d10, Func Offset: 0x110
	// Line 767, Address: 0x495d14, Func Offset: 0x114
	// Line 772, Address: 0x495d18, Func Offset: 0x118
	// Line 765, Address: 0x495d20, Func Offset: 0x120
	// Line 773, Address: 0x495d24, Func Offset: 0x124
	// Line 774, Address: 0x495d58, Func Offset: 0x158
	// Line 773, Address: 0x495d5c, Func Offset: 0x15c
	// Line 774, Address: 0x495d6c, Func Offset: 0x16c
	// Line 775, Address: 0x495da0, Func Offset: 0x1a0
	// Line 774, Address: 0x495da4, Func Offset: 0x1a4
	// Line 775, Address: 0x495db4, Func Offset: 0x1b4
	// Line 776, Address: 0x495de8, Func Offset: 0x1e8
	// Line 775, Address: 0x495dec, Func Offset: 0x1ec
	// Line 783, Address: 0x495df0, Func Offset: 0x1f0
	// Line 775, Address: 0x495df4, Func Offset: 0x1f4
	// Line 778, Address: 0x495df8, Func Offset: 0x1f8
	// Line 777, Address: 0x495dfc, Func Offset: 0x1fc
	// Line 783, Address: 0x495e00, Func Offset: 0x200
	// Line 775, Address: 0x495e04, Func Offset: 0x204
	// Line 778, Address: 0x495e0c, Func Offset: 0x20c
	// Line 780, Address: 0x495e18, Func Offset: 0x218
	// Line 778, Address: 0x495e1c, Func Offset: 0x21c
	// Line 780, Address: 0x495e28, Func Offset: 0x228
	// Line 783, Address: 0x495e30, Func Offset: 0x230
	// Line 784, Address: 0x495e38, Func Offset: 0x238
	// Line 787, Address: 0x495e44, Func Offset: 0x244
	// Line 833, Address: 0x495e4c, Func Offset: 0x24c
	// Line 790, Address: 0x495e6c, Func Offset: 0x26c
	// Line 833, Address: 0x495e70, Func Offset: 0x270
	// Line 790, Address: 0x495e78, Func Offset: 0x278
	// Line 833, Address: 0x495e7c, Func Offset: 0x27c
	// Line 793, Address: 0x495e88, Func Offset: 0x288
	// Line 833, Address: 0x495e8c, Func Offset: 0x28c
	// Line 796, Address: 0x495e90, Func Offset: 0x290
	// Line 793, Address: 0x495e94, Func Offset: 0x294
	// Line 796, Address: 0x495e98, Func Offset: 0x298
	// Line 833, Address: 0x495ea4, Func Offset: 0x2a4
	// Line 803, Address: 0x495ec8, Func Offset: 0x2c8
	// Line 833, Address: 0x495f14, Func Offset: 0x314
	// Line 805, Address: 0x495f24, Func Offset: 0x324
	// Line 806, Address: 0x495f68, Func Offset: 0x368
	// Line 833, Address: 0x495f6c, Func Offset: 0x36c
	// Line 807, Address: 0x495f74, Func Offset: 0x374
	// Line 833, Address: 0x495f7c, Func Offset: 0x37c
	// Line 812, Address: 0x495f9c, Func Offset: 0x39c
	// Line 813, Address: 0x495fc8, Func Offset: 0x3c8
	// Line 812, Address: 0x495fd4, Func Offset: 0x3d4
	// Line 813, Address: 0x495fe0, Func Offset: 0x3e0
	// Line 814, Address: 0x49601c, Func Offset: 0x41c
	// Line 815, Address: 0x496064, Func Offset: 0x464
	// Line 833, Address: 0x4960ac, Func Offset: 0x4ac
	// Line 818, Address: 0x4960b8, Func Offset: 0x4b8
	// Line 833, Address: 0x4960c4, Func Offset: 0x4c4
	// Line 818, Address: 0x4960cc, Func Offset: 0x4cc
	// Line 833, Address: 0x49610c, Func Offset: 0x50c
	// Line 820, Address: 0x49611c, Func Offset: 0x51c
	// Line 833, Address: 0x496154, Func Offset: 0x554
	// Line 821, Address: 0x496164, Func Offset: 0x564
	// Line 824, Address: 0x496190, Func Offset: 0x590
	// Line 821, Address: 0x496194, Func Offset: 0x594
	// Line 824, Address: 0x496198, Func Offset: 0x598
	// Line 833, Address: 0x49619c, Func Offset: 0x59c
	// Line 821, Address: 0x4961a0, Func Offset: 0x5a0
	// Line 824, Address: 0x4961a4, Func Offset: 0x5a4
	// Line 821, Address: 0x4961ac, Func Offset: 0x5ac
	// Line 822, Address: 0x4961b0, Func Offset: 0x5b0
	// Line 833, Address: 0x4961b4, Func Offset: 0x5b4
	// Line 822, Address: 0x4961b8, Func Offset: 0x5b8
	// Line 823, Address: 0x4961c4, Func Offset: 0x5c4
	// Line 824, Address: 0x4961cc, Func Offset: 0x5cc
	// Line 833, Address: 0x4961d0, Func Offset: 0x5d0
	// Line 824, Address: 0x4961e4, Func Offset: 0x5e4
	// Line 833, Address: 0x4961e8, Func Offset: 0x5e8
	// Line 825, Address: 0x4961f0, Func Offset: 0x5f0
	// Line 833, Address: 0x4961f4, Func Offset: 0x5f4
	// Line 825, Address: 0x4961fc, Func Offset: 0x5fc
	// Line 826, Address: 0x496200, Func Offset: 0x600
	// Line 828, Address: 0x496204, Func Offset: 0x604
	// Line 826, Address: 0x496208, Func Offset: 0x608
	// Line 827, Address: 0x49620c, Func Offset: 0x60c
	// Line 833, Address: 0x496210, Func Offset: 0x610
	// Line 828, Address: 0x496214, Func Offset: 0x614
	// Line 833, Address: 0x496218, Func Offset: 0x618
	// Line 824, Address: 0x496244, Func Offset: 0x644
	// Line 833, Address: 0x496248, Func Offset: 0x648
	// Func End, Address: 0x49629c, Func Offset: 0x69c
}

// update_particles__30zParticleSystemWaterfallSplashFPUciR10ptank_poolfPv
// Start address: 0x4962a0
int32 update_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot& pool;
	particle_instance_1* p;
	particle_instance_1* end;
	float32 t;
	float32 age;
	float32 y;
	float32 w;
	xVec4 v;
	// Line 683, Address: 0x4962a0, Func Offset: 0
	// Line 686, Address: 0x4962a4, Func Offset: 0x4
	// Line 683, Address: 0x4962a8, Func Offset: 0x8
	// Line 686, Address: 0x4962ac, Func Offset: 0xc
	// Line 683, Address: 0x4962b0, Func Offset: 0x10
	// Line 686, Address: 0x4962b4, Func Offset: 0x14
	// Line 683, Address: 0x4962b8, Func Offset: 0x18
	// Line 684, Address: 0x4962cc, Func Offset: 0x2c
	// Line 683, Address: 0x4962d0, Func Offset: 0x30
	// Line 686, Address: 0x4962d4, Func Offset: 0x34
	// Line 683, Address: 0x4962d8, Func Offset: 0x38
	// Line 686, Address: 0x4962dc, Func Offset: 0x3c
	// Line 683, Address: 0x4962e0, Func Offset: 0x40
	// Line 688, Address: 0x4962e8, Func Offset: 0x48
	// Line 691, Address: 0x4962fc, Func Offset: 0x5c
	// Line 693, Address: 0x496300, Func Offset: 0x60
	// Line 691, Address: 0x49630c, Func Offset: 0x6c
	// Line 692, Address: 0x496314, Func Offset: 0x74
	// Line 693, Address: 0x49631c, Func Offset: 0x7c
	// Line 695, Address: 0x496328, Func Offset: 0x88
	// Line 696, Address: 0x49632c, Func Offset: 0x8c
	// Line 697, Address: 0x4963b0, Func Offset: 0x110
	// Line 706, Address: 0x4963b8, Func Offset: 0x118
	// Line 700, Address: 0x4963bc, Func Offset: 0x11c
	// Line 703, Address: 0x4963c0, Func Offset: 0x120
	// Line 704, Address: 0x4963d0, Func Offset: 0x130
	// Line 703, Address: 0x4963d8, Func Offset: 0x138
	// Line 704, Address: 0x4963e8, Func Offset: 0x148
	// Line 706, Address: 0x4963f0, Func Offset: 0x150
	// Line 709, Address: 0x49640c, Func Offset: 0x16c
	// Line 710, Address: 0x496410, Func Offset: 0x170
	// Line 711, Address: 0x496494, Func Offset: 0x1f4
	// Line 712, Address: 0x49649c, Func Offset: 0x1fc
	// Line 720, Address: 0x4964a0, Func Offset: 0x200
	// Line 719, Address: 0x4964a4, Func Offset: 0x204
	// Line 717, Address: 0x4964a8, Func Offset: 0x208
	// Line 716, Address: 0x4964ac, Func Offset: 0x20c
	// Line 718, Address: 0x4964b4, Func Offset: 0x214
	// Line 716, Address: 0x4964bc, Func Offset: 0x21c
	// Line 718, Address: 0x4964c4, Func Offset: 0x224
	// Line 716, Address: 0x4964cc, Func Offset: 0x22c
	// Line 718, Address: 0x4964d0, Func Offset: 0x230
	// Line 720, Address: 0x4964d4, Func Offset: 0x234
	// Line 723, Address: 0x49651c, Func Offset: 0x27c
	// Line 724, Address: 0x496650, Func Offset: 0x3b0
	// Line 727, Address: 0x49665c, Func Offset: 0x3bc
	// Line 731, Address: 0x496664, Func Offset: 0x3c4
	// Line 732, Address: 0x496684, Func Offset: 0x3e4
	// Line 735, Address: 0x496690, Func Offset: 0x3f0
	// Line 736, Address: 0x4966b4, Func Offset: 0x414
	// Line 739, Address: 0x49674c, Func Offset: 0x4ac
	// Line 742, Address: 0x496758, Func Offset: 0x4b8
	// Line 743, Address: 0x49675c, Func Offset: 0x4bc
	// Line 745, Address: 0x496768, Func Offset: 0x4c8
	// Line 746, Address: 0x496778, Func Offset: 0x4d8
	// Line 745, Address: 0x496790, Func Offset: 0x4f0
	// Line 746, Address: 0x496798, Func Offset: 0x4f8
	// Line 745, Address: 0x4967a4, Func Offset: 0x504
	// Line 746, Address: 0x4967a8, Func Offset: 0x508
	// Line 745, Address: 0x4967ac, Func Offset: 0x50c
	// Line 746, Address: 0x4967b4, Func Offset: 0x514
	// Func End, Address: 0x4967bc, Func Offset: 0x51c
}

// get_asset_size__30zParticleSystemWaterfallSplashCFv
// Start address: 0x4967c0
int32 get_asset_size()
{
	// Line 678, Address: 0x4967c0, Func Offset: 0
	// Func End, Address: 0x4967c8, Func Offset: 0x8
}

// update__30zParticleSystemWaterfallSplashFf
// Start address: 0x4967d0
void zParticleSystemWaterfallSplash::update(float32 dt)
{
	// Line 671, Address: 0x4967d0, Func Offset: 0
	// Line 672, Address: 0x4967e4, Func Offset: 0x14
	// Line 673, Address: 0x496820, Func Offset: 0x50
	// Func End, Address: 0x496850, Func Offset: 0x80
}

// scene_enter__30zParticleSystemWaterfallSplashFv
// Start address: 0x496850
void zParticleSystemWaterfallSplash::scene_enter()
{
	// Line 667, Address: 0x496850, Func Offset: 0
	// Func End, Address: 0x496858, Func Offset: 0x8
}

// create_generator__30zParticleSystemWaterfallSplashFR14zParticleAsset
// Start address: 0x496860
zParticleGenerator* zParticleSystemWaterfallSplash::create_generator(zParticleAsset& asset)
{
	// Line 659, Address: 0x496860, Func Offset: 0
	// Line 660, Address: 0x496864, Func Offset: 0x4
	// Line 659, Address: 0x496868, Func Offset: 0x8
	// Line 660, Address: 0x496880, Func Offset: 0x20
	// Line 661, Address: 0x4968a0, Func Offset: 0x40
	// Line 662, Address: 0x4968b0, Func Offset: 0x50
	// Line 663, Address: 0x4968b4, Func Offset: 0x54
	// Func End, Address: 0x4968cc, Func Offset: 0x6c
}

// deactivate__31zParticleGeneratorWaterfallMistFv
// Start address: 0x4968d0
void zParticleGeneratorWaterfallMist::deactivate()
{
	// Line 605, Address: 0x4968d0, Func Offset: 0
	// Line 606, Address: 0x4968dc, Func Offset: 0xc
	// Line 607, Address: 0x4968e4, Func Offset: 0x14
	// Line 608, Address: 0x4968ec, Func Offset: 0x1c
	// Func End, Address: 0x4968fc, Func Offset: 0x2c
}

// activate__31zParticleGeneratorWaterfallMistFv
// Start address: 0x496900
void zParticleGeneratorWaterfallMist::activate()
{
	// Line 598, Address: 0x496900, Func Offset: 0
	// Line 599, Address: 0x49690c, Func Offset: 0xc
	// Line 601, Address: 0x496914, Func Offset: 0x14
	// Line 602, Address: 0x496924, Func Offset: 0x24
	// Func End, Address: 0x496934, Func Offset: 0x34
}

// reset__31zParticleGeneratorWaterfallMistFv
// Start address: 0x496940
void zParticleGeneratorWaterfallMist::reset()
{
	// Line 588, Address: 0x496940, Func Offset: 0
	// Line 589, Address: 0x49694c, Func Offset: 0xc
	// Line 591, Address: 0x496954, Func Offset: 0x14
	// Line 592, Address: 0x496960, Func Offset: 0x20
	// Line 593, Address: 0x496968, Func Offset: 0x28
	// Line 595, Address: 0x496978, Func Offset: 0x38
	// Func End, Address: 0x4969a4, Func Offset: 0x64
}

// create__31zParticleGeneratorWaterfallMistFR28zParticleSystemWaterfallMistR14zParticleAsset
// Start address: 0x4969b0
void zParticleGeneratorWaterfallMist::create(zParticleSystemWaterfallMist& system, zParticleAsset& asset)
{
	xParticleBatchSystem batch;
	// Line 563, Address: 0x4969b0, Func Offset: 0
	// Line 564, Address: 0x4969cc, Func Offset: 0x1c
	// Line 566, Address: 0x4969d4, Func Offset: 0x24
	// Line 568, Address: 0x4969e0, Func Offset: 0x30
	// Line 572, Address: 0x4969ec, Func Offset: 0x3c
	// Line 573, Address: 0x4969f8, Func Offset: 0x48
	// Line 582, Address: 0x496a14, Func Offset: 0x64
	// Line 574, Address: 0x496a18, Func Offset: 0x68
	// Line 582, Address: 0x496a1c, Func Offset: 0x6c
	// Line 574, Address: 0x496a20, Func Offset: 0x70
	// Line 575, Address: 0x496a24, Func Offset: 0x74
	// Line 581, Address: 0x496a28, Func Offset: 0x78
	// Line 575, Address: 0x496a2c, Func Offset: 0x7c
	// Line 576, Address: 0x496a30, Func Offset: 0x80
	// Line 577, Address: 0x496a38, Func Offset: 0x88
	// Line 578, Address: 0x496a40, Func Offset: 0x90
	// Line 577, Address: 0x496a44, Func Offset: 0x94
	// Line 578, Address: 0x496a48, Func Offset: 0x98
	// Line 579, Address: 0x496a4c, Func Offset: 0x9c
	// Line 580, Address: 0x496a50, Func Offset: 0xa0
	// Line 579, Address: 0x496a54, Func Offset: 0xa4
	// Line 580, Address: 0x496a58, Func Offset: 0xa8
	// Line 582, Address: 0x496a5c, Func Offset: 0xac
	// Line 584, Address: 0x496a68, Func Offset: 0xb8
	// Line 585, Address: 0x496a78, Func Offset: 0xc8
	// Func End, Address: 0x496a90, Func Offset: 0xe0
}

// update__31zParticleGeneratorWaterfallMistFf
// Start address: 0x496a90
void zParticleGeneratorWaterfallMist::update(float32 dt)
{
	int32 emit;
	asset_data_1& a;
	float32 life_min;
	float32 life_delta;
	float32 size_birth;
	float32 size_death;
	float32 size_vary;
	float32 intensity_min;
	float32 intensity_delta;
	float32 red;
	float32 green;
	float32 blue;
	uint8 alpha;
	float32 rot_vel_min;
	float32 rot_vel_delta;
	float32 vel_min;
	float32 vel_delta;
	float32 vel_pitch_delta;
	xVec3 center;
	float32 cx;
	float32 cz;
	uint8* mem;
	int32 have;
	particle_instance_0* p;
	particle_instance_0* endp;
	float32 scale;
	float32 intensity;
	float32 vel;
	float32 vel_pitch;
	float32 dx;
	float32 dz;
	float32 dist2;
	float32 cp;
	// Line 478, Address: 0x496a90, Func Offset: 0
	// Line 479, Address: 0x496ae4, Func Offset: 0x54
	// Line 481, Address: 0x496af0, Func Offset: 0x60
	// Line 483, Address: 0x496af8, Func Offset: 0x68
	// Line 484, Address: 0x496b14, Func Offset: 0x84
	// Line 485, Address: 0x496b20, Func Offset: 0x90
	// Line 486, Address: 0x496b28, Func Offset: 0x98
	// Line 487, Address: 0x496b30, Func Offset: 0xa0
	// Line 492, Address: 0x496b34, Func Offset: 0xa4
	// Line 487, Address: 0x496b3c, Func Offset: 0xac
	// Line 489, Address: 0x496b48, Func Offset: 0xb8
	// Line 495, Address: 0x496b4c, Func Offset: 0xbc
	// Line 498, Address: 0x496b50, Func Offset: 0xc0
	// Line 496, Address: 0x496b54, Func Offset: 0xc4
	// Line 489, Address: 0x496b58, Func Offset: 0xc8
	// Line 497, Address: 0x496b5c, Func Offset: 0xcc
	// Line 491, Address: 0x496b60, Func Offset: 0xd0
	// Line 492, Address: 0x496b64, Func Offset: 0xd4
	// Line 493, Address: 0x496b68, Func Offset: 0xd8
	// Line 495, Address: 0x496b6c, Func Offset: 0xdc
	// Line 497, Address: 0x496b74, Func Offset: 0xe4
	// Line 492, Address: 0x496b78, Func Offset: 0xe8
	// Line 497, Address: 0x496b7c, Func Offset: 0xec
	// Line 494, Address: 0x496b80, Func Offset: 0xf0
	// Line 492, Address: 0x496b84, Func Offset: 0xf4
	// Line 498, Address: 0x496b88, Func Offset: 0xf8
	// Line 499, Address: 0x496bbc, Func Offset: 0x12c
	// Line 498, Address: 0x496bc0, Func Offset: 0x130
	// Line 499, Address: 0x496bd0, Func Offset: 0x140
	// Line 500, Address: 0x496c04, Func Offset: 0x174
	// Line 499, Address: 0x496c08, Func Offset: 0x178
	// Line 500, Address: 0x496c18, Func Offset: 0x188
	// Line 501, Address: 0x496c4c, Func Offset: 0x1bc
	// Line 500, Address: 0x496c50, Func Offset: 0x1c0
	// Line 509, Address: 0x496c54, Func Offset: 0x1c4
	// Line 500, Address: 0x496c58, Func Offset: 0x1c8
	// Line 503, Address: 0x496c5c, Func Offset: 0x1cc
	// Line 500, Address: 0x496c64, Func Offset: 0x1d4
	// Line 509, Address: 0x496c68, Func Offset: 0x1d8
	// Line 500, Address: 0x496c6c, Func Offset: 0x1dc
	// Line 502, Address: 0x496c70, Func Offset: 0x1e0
	// Line 503, Address: 0x496c74, Func Offset: 0x1e4
	// Line 504, Address: 0x496c7c, Func Offset: 0x1ec
	// Line 505, Address: 0x496c80, Func Offset: 0x1f0
	// Line 503, Address: 0x496c8c, Func Offset: 0x1fc
	// Line 505, Address: 0x496c98, Func Offset: 0x208
	// Line 506, Address: 0x496ca0, Func Offset: 0x210
	// Line 505, Address: 0x496ca4, Func Offset: 0x214
	// Line 506, Address: 0x496ca8, Func Offset: 0x218
	// Line 509, Address: 0x496cac, Func Offset: 0x21c
	// Line 510, Address: 0x496cb4, Func Offset: 0x224
	// Line 513, Address: 0x496cc0, Func Offset: 0x230
	// Line 560, Address: 0x496cc8, Func Offset: 0x238
	// Line 516, Address: 0x496ce8, Func Offset: 0x258
	// Line 560, Address: 0x496cec, Func Offset: 0x25c
	// Line 516, Address: 0x496cf4, Func Offset: 0x264
	// Line 560, Address: 0x496cf8, Func Offset: 0x268
	// Line 519, Address: 0x496d04, Func Offset: 0x274
	// Line 560, Address: 0x496d08, Func Offset: 0x278
	// Line 522, Address: 0x496d0c, Func Offset: 0x27c
	// Line 519, Address: 0x496d10, Func Offset: 0x280
	// Line 522, Address: 0x496d14, Func Offset: 0x284
	// Line 560, Address: 0x496d18, Func Offset: 0x288
	// Line 522, Address: 0x496d1c, Func Offset: 0x28c
	// Line 519, Address: 0x496d20, Func Offset: 0x290
	// Line 522, Address: 0x496d24, Func Offset: 0x294
	// Line 560, Address: 0x496d28, Func Offset: 0x298
	// Line 525, Address: 0x496d3c, Func Offset: 0x2ac
	// Line 560, Address: 0x496d40, Func Offset: 0x2b0
	// Line 529, Address: 0x496d50, Func Offset: 0x2c0
	// Line 560, Address: 0x496d9c, Func Offset: 0x30c
	// Line 531, Address: 0x496dac, Func Offset: 0x31c
	// Line 532, Address: 0x496df0, Func Offset: 0x360
	// Line 560, Address: 0x496df4, Func Offset: 0x364
	// Line 533, Address: 0x496dfc, Func Offset: 0x36c
	// Line 560, Address: 0x496e04, Func Offset: 0x374
	// Line 535, Address: 0x496e14, Func Offset: 0x384
	// Line 536, Address: 0x496e40, Func Offset: 0x3b0
	// Line 535, Address: 0x496e4c, Func Offset: 0x3bc
	// Line 536, Address: 0x496e58, Func Offset: 0x3c8
	// Line 537, Address: 0x496e94, Func Offset: 0x404
	// Line 538, Address: 0x496edc, Func Offset: 0x44c
	// Line 560, Address: 0x496f24, Func Offset: 0x494
	// Line 542, Address: 0x496f30, Func Offset: 0x4a0
	// Line 560, Address: 0x496f34, Func Offset: 0x4a4
	// Line 542, Address: 0x496f3c, Func Offset: 0x4ac
	// Line 543, Address: 0x496f7c, Func Offset: 0x4ec
	// Line 542, Address: 0x496f80, Func Offset: 0x4f0
	// Line 560, Address: 0x496f88, Func Offset: 0x4f8
	// Line 543, Address: 0x496f90, Func Offset: 0x500
	// Line 544, Address: 0x496fbc, Func Offset: 0x52c
	// Line 543, Address: 0x496fc0, Func Offset: 0x530
	// Line 560, Address: 0x496fcc, Func Offset: 0x53c
	// Line 545, Address: 0x496fd4, Func Offset: 0x544
	// Line 560, Address: 0x496fd8, Func Offset: 0x548
	// Line 547, Address: 0x496fe8, Func Offset: 0x558
	// Line 560, Address: 0x497020, Func Offset: 0x590
	// Line 548, Address: 0x497030, Func Offset: 0x5a0
	// Line 551, Address: 0x49705c, Func Offset: 0x5cc
	// Line 560, Address: 0x497060, Func Offset: 0x5d0
	// Line 551, Address: 0x497064, Func Offset: 0x5d4
	// Line 560, Address: 0x497068, Func Offset: 0x5d8
	// Line 550, Address: 0x49706c, Func Offset: 0x5dc
	// Line 548, Address: 0x497070, Func Offset: 0x5e0
	// Line 549, Address: 0x497074, Func Offset: 0x5e4
	// Line 551, Address: 0x497078, Func Offset: 0x5e8
	// Line 549, Address: 0x497080, Func Offset: 0x5f0
	// Line 550, Address: 0x49708c, Func Offset: 0x5fc
	// Line 551, Address: 0x497094, Func Offset: 0x604
	// Line 560, Address: 0x497098, Func Offset: 0x608
	// Line 551, Address: 0x4970ac, Func Offset: 0x61c
	// Line 560, Address: 0x4970b0, Func Offset: 0x620
	// Line 552, Address: 0x4970b8, Func Offset: 0x628
	// Line 560, Address: 0x4970bc, Func Offset: 0x62c
	// Line 552, Address: 0x4970c4, Func Offset: 0x634
	// Line 553, Address: 0x4970c8, Func Offset: 0x638
	// Line 555, Address: 0x4970cc, Func Offset: 0x63c
	// Line 553, Address: 0x4970d0, Func Offset: 0x640
	// Line 554, Address: 0x4970d4, Func Offset: 0x644
	// Line 560, Address: 0x4970d8, Func Offset: 0x648
	// Line 555, Address: 0x4970dc, Func Offset: 0x64c
	// Line 560, Address: 0x4970e0, Func Offset: 0x650
	// Line 545, Address: 0x497110, Func Offset: 0x680
	// Line 551, Address: 0x497120, Func Offset: 0x690
	// Line 560, Address: 0x497128, Func Offset: 0x698
	// Func End, Address: 0x49717c, Func Offset: 0x6ec
}

// update_particles__28zParticleSystemWaterfallMistFPUciR10ptank_poolfPv
// Start address: 0x497180
int32 update_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot& pool;
	particle_instance_0* p;
	particle_instance_0* end;
	float32 t;
	float32 age;
	xVec4 v;
	float32 t2;
	float32 alpha;
	// Line 410, Address: 0x497180, Func Offset: 0
	// Line 417, Address: 0x497184, Func Offset: 0x4
	// Line 410, Address: 0x497188, Func Offset: 0x8
	// Line 417, Address: 0x49718c, Func Offset: 0xc
	// Line 410, Address: 0x497190, Func Offset: 0x10
	// Line 417, Address: 0x497194, Func Offset: 0x14
	// Line 410, Address: 0x497198, Func Offset: 0x18
	// Line 417, Address: 0x49719c, Func Offset: 0x1c
	// Line 410, Address: 0x4971a0, Func Offset: 0x20
	// Line 417, Address: 0x4971a4, Func Offset: 0x24
	// Line 410, Address: 0x4971a8, Func Offset: 0x28
	// Line 411, Address: 0x4971b4, Func Offset: 0x34
	// Line 410, Address: 0x4971b8, Func Offset: 0x38
	// Line 417, Address: 0x4971bc, Func Offset: 0x3c
	// Line 410, Address: 0x4971c0, Func Offset: 0x40
	// Line 417, Address: 0x4971c4, Func Offset: 0x44
	// Line 410, Address: 0x4971c8, Func Offset: 0x48
	// Line 419, Address: 0x4971d0, Func Offset: 0x50
	// Line 422, Address: 0x4971e4, Func Offset: 0x64
	// Line 424, Address: 0x4971e8, Func Offset: 0x68
	// Line 422, Address: 0x4971f4, Func Offset: 0x74
	// Line 423, Address: 0x4971fc, Func Offset: 0x7c
	// Line 424, Address: 0x497204, Func Offset: 0x84
	// Line 426, Address: 0x497210, Func Offset: 0x90
	// Line 427, Address: 0x497214, Func Offset: 0x94
	// Line 428, Address: 0x497290, Func Offset: 0x110
	// Line 439, Address: 0x497298, Func Offset: 0x118
	// Line 435, Address: 0x49729c, Func Offset: 0x11c
	// Line 431, Address: 0x4972a0, Func Offset: 0x120
	// Line 435, Address: 0x4972a4, Func Offset: 0x124
	// Line 436, Address: 0x4972ac, Func Offset: 0x12c
	// Line 435, Address: 0x4972b4, Func Offset: 0x134
	// Line 437, Address: 0x4972b8, Func Offset: 0x138
	// Line 435, Address: 0x4972bc, Func Offset: 0x13c
	// Line 437, Address: 0x4972c0, Func Offset: 0x140
	// Line 436, Address: 0x4972c4, Func Offset: 0x144
	// Line 435, Address: 0x4972cc, Func Offset: 0x14c
	// Line 437, Address: 0x4972d0, Func Offset: 0x150
	// Line 438, Address: 0x4972d4, Func Offset: 0x154
	// Line 437, Address: 0x4972d8, Func Offset: 0x158
	// Line 438, Address: 0x4972e0, Func Offset: 0x160
	// Line 439, Address: 0x4972e4, Func Offset: 0x164
	// Line 440, Address: 0x4972e8, Func Offset: 0x168
	// Line 438, Address: 0x4972ec, Func Offset: 0x16c
	// Line 439, Address: 0x4972f4, Func Offset: 0x174
	// Line 438, Address: 0x4972fc, Func Offset: 0x17c
	// Line 439, Address: 0x497300, Func Offset: 0x180
	// Line 440, Address: 0x497304, Func Offset: 0x184
	// Line 443, Address: 0x49734c, Func Offset: 0x1cc
	// Line 444, Address: 0x497480, Func Offset: 0x300
	// Line 447, Address: 0x49748c, Func Offset: 0x30c
	// Line 451, Address: 0x497494, Func Offset: 0x314
	// Line 458, Address: 0x497498, Func Offset: 0x318
	// Line 451, Address: 0x49749c, Func Offset: 0x31c
	// Line 458, Address: 0x4974a0, Func Offset: 0x320
	// Line 451, Address: 0x4974b4, Func Offset: 0x334
	// Line 459, Address: 0x4974bc, Func Offset: 0x33c
	// Line 451, Address: 0x4974c0, Func Offset: 0x340
	// Line 459, Address: 0x4974c4, Func Offset: 0x344
	// Line 451, Address: 0x4974c8, Func Offset: 0x348
	// Line 458, Address: 0x4974cc, Func Offset: 0x34c
	// Line 451, Address: 0x4974d0, Func Offset: 0x350
	// Line 457, Address: 0x4974d4, Func Offset: 0x354
	// Line 458, Address: 0x4974d8, Func Offset: 0x358
	// Line 451, Address: 0x4974dc, Func Offset: 0x35c
	// Line 452, Address: 0x4974e0, Func Offset: 0x360
	// Line 458, Address: 0x4974e4, Func Offset: 0x364
	// Line 452, Address: 0x4974ec, Func Offset: 0x36c
	// Line 458, Address: 0x4974f4, Func Offset: 0x374
	// Line 454, Address: 0x4974f8, Func Offset: 0x378
	// Line 459, Address: 0x497500, Func Offset: 0x380
	// Line 454, Address: 0x497504, Func Offset: 0x384
	// Line 459, Address: 0x49751c, Func Offset: 0x39c
	// Line 460, Address: 0x497524, Func Offset: 0x3a4
	// Line 465, Address: 0x4975b0, Func Offset: 0x430
	// Line 464, Address: 0x4975b4, Func Offset: 0x434
	// Line 465, Address: 0x4975b8, Func Offset: 0x438
	// Line 464, Address: 0x4975bc, Func Offset: 0x43c
	// Line 465, Address: 0x4975c4, Func Offset: 0x444
	// Line 464, Address: 0x4975cc, Func Offset: 0x44c
	// Line 465, Address: 0x4975d4, Func Offset: 0x454
	// Line 466, Address: 0x497600, Func Offset: 0x480
	// Line 467, Address: 0x497630, Func Offset: 0x4b0
	// Line 469, Address: 0x49763c, Func Offset: 0x4bc
	// Line 470, Address: 0x497640, Func Offset: 0x4c0
	// Line 471, Address: 0x497644, Func Offset: 0x4c4
	// Line 473, Address: 0x497650, Func Offset: 0x4d0
	// Line 474, Address: 0x497660, Func Offset: 0x4e0
	// Line 473, Address: 0x497678, Func Offset: 0x4f8
	// Line 474, Address: 0x497680, Func Offset: 0x500
	// Line 473, Address: 0x49768c, Func Offset: 0x50c
	// Line 474, Address: 0x497690, Func Offset: 0x510
	// Line 473, Address: 0x497694, Func Offset: 0x514
	// Line 474, Address: 0x497698, Func Offset: 0x518
	// Func End, Address: 0x4976a0, Func Offset: 0x520
}

// get_asset_size__28zParticleSystemWaterfallMistCFv
// Start address: 0x4976a0
int32 get_asset_size()
{
	// Line 398, Address: 0x4976a0, Func Offset: 0
	// Func End, Address: 0x4976a8, Func Offset: 0x8
}

// update__28zParticleSystemWaterfallMistFf
// Start address: 0x4976b0
void zParticleSystemWaterfallMist::update(float32 dt)
{
	// Line 391, Address: 0x4976b0, Func Offset: 0
	// Line 392, Address: 0x4976c4, Func Offset: 0x14
	// Line 393, Address: 0x497700, Func Offset: 0x50
	// Func End, Address: 0x497730, Func Offset: 0x80
}

// scene_enter__28zParticleSystemWaterfallMistFv
// Start address: 0x497730
void zParticleSystemWaterfallMist::scene_enter()
{
	// Line 387, Address: 0x497730, Func Offset: 0
	// Func End, Address: 0x497738, Func Offset: 0x8
}

// create_generator__28zParticleSystemWaterfallMistFR14zParticleAsset
// Start address: 0x497740
zParticleGenerator* zParticleSystemWaterfallMist::create_generator(zParticleAsset& asset)
{
	// Line 379, Address: 0x497740, Func Offset: 0
	// Line 380, Address: 0x497744, Func Offset: 0x4
	// Line 379, Address: 0x497748, Func Offset: 0x8
	// Line 380, Address: 0x497760, Func Offset: 0x20
	// Line 381, Address: 0x497780, Func Offset: 0x40
	// Line 382, Address: 0x497790, Func Offset: 0x50
	// Line 383, Address: 0x497794, Func Offset: 0x54
	// Func End, Address: 0x4977ac, Func Offset: 0x6c
}

// deactivate__27zParticleGeneratorWaterfallFv
// Start address: 0x4977b0
void zParticleGeneratorWaterfall::deactivate()
{
	// Line 228, Address: 0x4977b0, Func Offset: 0
	// Line 229, Address: 0x4977bc, Func Offset: 0xc
	// Line 230, Address: 0x4977c4, Func Offset: 0x14
	// Line 231, Address: 0x4977cc, Func Offset: 0x1c
	// Func End, Address: 0x4977dc, Func Offset: 0x2c
}

// activate__27zParticleGeneratorWaterfallFv
// Start address: 0x4977e0
void zParticleGeneratorWaterfall::activate()
{
	// Line 221, Address: 0x4977e0, Func Offset: 0
	// Line 222, Address: 0x4977ec, Func Offset: 0xc
	// Line 224, Address: 0x4977f4, Func Offset: 0x14
	// Line 225, Address: 0x497804, Func Offset: 0x24
	// Func End, Address: 0x497814, Func Offset: 0x34
}

// reset__27zParticleGeneratorWaterfallFv
// Start address: 0x497820
void zParticleGeneratorWaterfall::reset()
{
	// Line 211, Address: 0x497820, Func Offset: 0
	// Line 212, Address: 0x49782c, Func Offset: 0xc
	// Line 214, Address: 0x497834, Func Offset: 0x14
	// Line 215, Address: 0x497840, Func Offset: 0x20
	// Line 216, Address: 0x497848, Func Offset: 0x28
	// Line 218, Address: 0x497858, Func Offset: 0x38
	// Func End, Address: 0x497884, Func Offset: 0x64
}

// create__27zParticleGeneratorWaterfallFR24zParticleSystemWaterfallR14zParticleAsset
// Start address: 0x497890
void zParticleGeneratorWaterfall::create(zParticleSystemWaterfall& system, zParticleAsset& asset)
{
	xParticleBatchSystem batch;
	asset_data_0& a;
	float32 yaw;
	float32 pitch;
	// Line 180, Address: 0x497890, Func Offset: 0
	// Line 181, Address: 0x4978b8, Func Offset: 0x28
	// Line 183, Address: 0x4978c0, Func Offset: 0x30
	// Line 185, Address: 0x4978cc, Func Offset: 0x3c
	// Line 189, Address: 0x4978d8, Func Offset: 0x48
	// Line 190, Address: 0x4978e4, Func Offset: 0x54
	// Line 199, Address: 0x497900, Func Offset: 0x70
	// Line 191, Address: 0x497904, Func Offset: 0x74
	// Line 199, Address: 0x497908, Func Offset: 0x78
	// Line 191, Address: 0x49790c, Func Offset: 0x7c
	// Line 192, Address: 0x497910, Func Offset: 0x80
	// Line 198, Address: 0x497914, Func Offset: 0x84
	// Line 192, Address: 0x497918, Func Offset: 0x88
	// Line 193, Address: 0x49791c, Func Offset: 0x8c
	// Line 194, Address: 0x497924, Func Offset: 0x94
	// Line 195, Address: 0x49792c, Func Offset: 0x9c
	// Line 194, Address: 0x497930, Func Offset: 0xa0
	// Line 195, Address: 0x497934, Func Offset: 0xa4
	// Line 196, Address: 0x497938, Func Offset: 0xa8
	// Line 197, Address: 0x49793c, Func Offset: 0xac
	// Line 196, Address: 0x497940, Func Offset: 0xb0
	// Line 197, Address: 0x497944, Func Offset: 0xb4
	// Line 199, Address: 0x497948, Func Offset: 0xb8
	// Line 202, Address: 0x497954, Func Offset: 0xc4
	// Line 203, Address: 0x49795c, Func Offset: 0xcc
	// Line 204, Address: 0x497974, Func Offset: 0xe4
	// Line 205, Address: 0x497988, Func Offset: 0xf8
	// Line 207, Address: 0x4979a0, Func Offset: 0x110
	// Line 208, Address: 0x4979b0, Func Offset: 0x120
	// Func End, Address: 0x4979d4, Func Offset: 0x144
}

// update__27zParticleGeneratorWaterfallFf
// Start address: 0x4979e0
void zParticleGeneratorWaterfall::update(float32 dt)
{
	int32 emit;
	asset_data_0& a;
	xMat4x3& mat;
	xVec3 vel_dir;
	float32 width_min;
	float32 width_delta;
	float32 vel_min;
	float32 vel_delta;
	float32 vel_dir_vary;
	float32 intensity_min;
	float32 intensity_delta;
	float32 red;
	float32 green;
	float32 blue;
	uint8 alpha;
	float32 gravity;
	float32 ymin;
	float32 height_start_min;
	float32 height_start_delta;
	float32 height_vel;
	float32 height_accel;
	float32 height_max;
	uint8* mem;
	int32 have;
	particle_instance_2* p;
	particle_instance_2* endp;
	float32 intensity;
	// Line 94, Address: 0x4979e0, Func Offset: 0
	// Line 95, Address: 0x497a34, Func Offset: 0x54
	// Line 97, Address: 0x497a40, Func Offset: 0x60
	// Line 99, Address: 0x497a48, Func Offset: 0x68
	// Line 100, Address: 0x497a64, Func Offset: 0x84
	// Line 101, Address: 0x497a70, Func Offset: 0x90
	// Line 103, Address: 0x497a78, Func Offset: 0x98
	// Line 106, Address: 0x497a7c, Func Offset: 0x9c
	// Line 103, Address: 0x497a80, Func Offset: 0xa0
	// Line 105, Address: 0x497a8c, Func Offset: 0xac
	// Line 106, Address: 0x497a90, Func Offset: 0xb0
	// Line 111, Address: 0x497a98, Func Offset: 0xb8
	// Line 112, Address: 0x497aa8, Func Offset: 0xc8
	// Line 114, Address: 0x497afc, Func Offset: 0x11c
	// Line 117, Address: 0x497b18, Func Offset: 0x138
	// Line 119, Address: 0x497b24, Func Offset: 0x144
	// Line 121, Address: 0x497b28, Func Offset: 0x148
	// Line 122, Address: 0x497b2c, Func Offset: 0x14c
	// Line 117, Address: 0x497b30, Func Offset: 0x150
	// Line 123, Address: 0x497b3c, Func Offset: 0x15c
	// Line 119, Address: 0x497b40, Func Offset: 0x160
	// Line 122, Address: 0x497b44, Func Offset: 0x164
	// Line 120, Address: 0x497b48, Func Offset: 0x168
	// Line 117, Address: 0x497b4c, Func Offset: 0x16c
	// Line 119, Address: 0x497b50, Func Offset: 0x170
	// Line 123, Address: 0x497b54, Func Offset: 0x174
	// Line 124, Address: 0x497b88, Func Offset: 0x1a8
	// Line 123, Address: 0x497b8c, Func Offset: 0x1ac
	// Line 124, Address: 0x497b94, Func Offset: 0x1b4
	// Line 125, Address: 0x497bc8, Func Offset: 0x1e8
	// Line 124, Address: 0x497bcc, Func Offset: 0x1ec
	// Line 125, Address: 0x497bd4, Func Offset: 0x1f4
	// Line 126, Address: 0x497c08, Func Offset: 0x228
	// Line 125, Address: 0x497c0c, Func Offset: 0x22c
	// Line 132, Address: 0x497c14, Func Offset: 0x234
	// Line 127, Address: 0x497c18, Func Offset: 0x238
	// Line 125, Address: 0x497c1c, Func Offset: 0x23c
	// Line 133, Address: 0x497c20, Func Offset: 0x240
	// Line 128, Address: 0x497c24, Func Offset: 0x244
	// Line 132, Address: 0x497c30, Func Offset: 0x250
	// Line 133, Address: 0x497c3c, Func Offset: 0x25c
	// Line 134, Address: 0x497c40, Func Offset: 0x260
	// Line 127, Address: 0x497c44, Func Offset: 0x264
	// Line 134, Address: 0x497c48, Func Offset: 0x268
	// Line 128, Address: 0x497c4c, Func Offset: 0x26c
	// Line 132, Address: 0x497c54, Func Offset: 0x274
	// Line 135, Address: 0x497c60, Func Offset: 0x280
	// Line 138, Address: 0x497c64, Func Offset: 0x284
	// Line 141, Address: 0x497c7c, Func Offset: 0x29c
	// Line 142, Address: 0x497c90, Func Offset: 0x2b0
	// Line 144, Address: 0x497c98, Func Offset: 0x2b8
	// Line 147, Address: 0x497ca0, Func Offset: 0x2c0
	// Line 144, Address: 0x497cb0, Func Offset: 0x2d0
	// Line 147, Address: 0x497cb4, Func Offset: 0x2d4
	// Line 150, Address: 0x497cbc, Func Offset: 0x2dc
	// Line 152, Address: 0x497cc8, Func Offset: 0x2e8
	// Line 153, Address: 0x497d00, Func Offset: 0x320
	// Line 157, Address: 0x497d08, Func Offset: 0x328
	// Line 152, Address: 0x497d0c, Func Offset: 0x32c
	// Line 153, Address: 0x497d10, Func Offset: 0x330
	// Line 152, Address: 0x497d14, Func Offset: 0x334
	// Line 153, Address: 0x497d18, Func Offset: 0x338
	// Line 152, Address: 0x497d1c, Func Offset: 0x33c
	// Line 157, Address: 0x497d20, Func Offset: 0x340
	// Line 154, Address: 0x497d24, Func Offset: 0x344
	// Line 153, Address: 0x497d28, Func Offset: 0x348
	// Line 157, Address: 0x497d2c, Func Offset: 0x34c
	// Line 153, Address: 0x497d30, Func Offset: 0x350
	// Line 158, Address: 0x497d34, Func Offset: 0x354
	// Line 153, Address: 0x497d38, Func Offset: 0x358
	// Line 154, Address: 0x497d40, Func Offset: 0x360
	// Line 157, Address: 0x497d44, Func Offset: 0x364
	// Line 158, Address: 0x497d50, Func Offset: 0x370
	// Line 159, Address: 0x497d58, Func Offset: 0x378
	// Line 161, Address: 0x497dbc, Func Offset: 0x3dc
	// Line 162, Address: 0x497df4, Func Offset: 0x414
	// Line 161, Address: 0x497e00, Func Offset: 0x420
	// Line 162, Address: 0x497e08, Func Offset: 0x428
	// Line 163, Address: 0x497e40, Func Offset: 0x460
	// Line 164, Address: 0x497e84, Func Offset: 0x4a4
	// Line 165, Address: 0x497ecc, Func Offset: 0x4ec
	// Line 169, Address: 0x497ed0, Func Offset: 0x4f0
	// Line 170, Address: 0x497f1c, Func Offset: 0x53c
	// Line 171, Address: 0x497f24, Func Offset: 0x544
	// Line 172, Address: 0x497f2c, Func Offset: 0x54c
	// Line 173, Address: 0x497f34, Func Offset: 0x554
	// Line 175, Address: 0x497f40, Func Offset: 0x560
	// Line 176, Address: 0x497f44, Func Offset: 0x564
	// Line 177, Address: 0x497f50, Func Offset: 0x570
	// Func End, Address: 0x497fa4, Func Offset: 0x5c4
}

// update_particles__24zParticleSystemWaterfallFPUciR10ptank_poolfPv
// Start address: 0x497fb0
int32 update_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size& pool;
	particle_instance_2* p;
	particle_instance_2* end;
	xVec4 v;
	// Line 41, Address: 0x497fb0, Func Offset: 0
	// Line 44, Address: 0x497fb4, Func Offset: 0x4
	// Line 41, Address: 0x497fb8, Func Offset: 0x8
	// Line 42, Address: 0x497fd4, Func Offset: 0x24
	// Line 41, Address: 0x497fd8, Func Offset: 0x28
	// Line 44, Address: 0x497fdc, Func Offset: 0x2c
	// Line 41, Address: 0x497fe0, Func Offset: 0x30
	// Line 44, Address: 0x497fe4, Func Offset: 0x34
	// Line 41, Address: 0x497fe8, Func Offset: 0x38
	// Line 46, Address: 0x497fec, Func Offset: 0x3c
	// Line 48, Address: 0x498000, Func Offset: 0x50
	// Line 49, Address: 0x49801c, Func Offset: 0x6c
	// Line 50, Address: 0x49802c, Func Offset: 0x7c
	// Line 51, Address: 0x498040, Func Offset: 0x90
	// Line 52, Address: 0x498054, Func Offset: 0xa4
	// Line 53, Address: 0x498064, Func Offset: 0xb4
	// Line 56, Address: 0x498068, Func Offset: 0xb8
	// Line 58, Address: 0x498098, Func Offset: 0xe8
	// Line 59, Address: 0x49809c, Func Offset: 0xec
	// Line 60, Address: 0x498130, Func Offset: 0x180
	// Line 63, Address: 0x498138, Func Offset: 0x188
	// Line 64, Address: 0x49814c, Func Offset: 0x19c
	// Line 69, Address: 0x498160, Func Offset: 0x1b0
	// Line 67, Address: 0x498168, Func Offset: 0x1b8
	// Line 68, Address: 0x49816c, Func Offset: 0x1bc
	// Line 69, Address: 0x498170, Func Offset: 0x1c0
	// Line 70, Address: 0x498174, Func Offset: 0x1c4
	// Line 67, Address: 0x498178, Func Offset: 0x1c8
	// Line 68, Address: 0x49817c, Func Offset: 0x1cc
	// Line 70, Address: 0x498180, Func Offset: 0x1d0
	// Line 71, Address: 0x498198, Func Offset: 0x1e8
	// Line 73, Address: 0x4981e4, Func Offset: 0x234
	// Line 74, Address: 0x4982e8, Func Offset: 0x338
	// Line 77, Address: 0x4982f4, Func Offset: 0x344
	// Line 81, Address: 0x4982fc, Func Offset: 0x34c
	// Line 82, Address: 0x498318, Func Offset: 0x368
	// Line 83, Address: 0x49833c, Func Offset: 0x38c
	// Line 86, Address: 0x498350, Func Offset: 0x3a0
	// Line 87, Address: 0x498354, Func Offset: 0x3a4
	// Line 89, Address: 0x49835c, Func Offset: 0x3ac
	// Line 90, Address: 0x498370, Func Offset: 0x3c0
	// Func End, Address: 0x49839c, Func Offset: 0x3ec
}

// get_asset_size__24zParticleSystemWaterfallCFv
// Start address: 0x4983a0
int32 get_asset_size()
{
	// Line 36, Address: 0x4983a0, Func Offset: 0
	// Func End, Address: 0x4983a8, Func Offset: 0x8
}

// update__24zParticleSystemWaterfallFf
// Start address: 0x4983b0
void zParticleSystemWaterfall::update(float32 dt)
{
	// Line 29, Address: 0x4983b0, Func Offset: 0
	// Line 30, Address: 0x4983c4, Func Offset: 0x14
	// Line 31, Address: 0x498400, Func Offset: 0x50
	// Func End, Address: 0x498430, Func Offset: 0x80
}

// scene_enter__24zParticleSystemWaterfallFv
// Start address: 0x498430
void zParticleSystemWaterfall::scene_enter()
{
	// Line 25, Address: 0x498430, Func Offset: 0
	// Func End, Address: 0x498438, Func Offset: 0x8
}

// create_generator__24zParticleSystemWaterfallFR14zParticleAsset
// Start address: 0x498440
zParticleGenerator* zParticleSystemWaterfall::create_generator(zParticleAsset& asset)
{
	// Line 17, Address: 0x498440, Func Offset: 0
	// Line 18, Address: 0x498444, Func Offset: 0x4
	// Line 17, Address: 0x498448, Func Offset: 0x8
	// Line 18, Address: 0x498460, Func Offset: 0x20
	// Line 19, Address: 0x498480, Func Offset: 0x40
	// Line 20, Address: 0x498490, Func Offset: 0x50
	// Line 21, Address: 0x498494, Func Offset: 0x54
	// Func End, Address: 0x4984ac, Func Offset: 0x6c
}

