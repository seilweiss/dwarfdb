typedef struct xAnimState;
typedef struct RxClusterDefinition;
typedef struct xQuat;
typedef struct xAnimFile;
typedef struct zParticleGenerator;
typedef struct RpInterpolator;
typedef struct xJSPMiniLightTie;
typedef enum RxNodeDefEditable;
typedef struct xMat4x3;
typedef struct xEnt;
typedef struct volume_model_data;
typedef struct RwMatrixTag;
typedef struct xShadowSimplePoly;
typedef struct RpLight;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct zParticleAsset;
typedef struct xAnimTransitionList;
typedef struct xModelInstance;
typedef struct RxIoSpec;
typedef struct xLinkAsset;
typedef struct xVec3;
typedef struct zParticleSystem;
typedef struct xEnv;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwBBox;
typedef struct xAnimTransition;
typedef struct RpWorld;
typedef struct iEnv;
typedef struct RwRaster;
typedef struct xClumpCollBSPTree;
typedef struct xCollis;
typedef struct RxPacket;
typedef struct xLightKit;
typedef struct xJSPNodeLight;
typedef struct RpAtomic;
typedef struct RxOutputSpec;
typedef struct _class_0;
typedef struct xAnimPhysicsData;
typedef struct xClumpCollBSPBranchNode;
typedef struct xShadowSimpleCache;
typedef struct xAnimEffect;
typedef struct xAnimMultiFileEntry;
typedef struct xClumpCollBSPTriangle;
typedef struct xEntFrame;
typedef struct motion_data;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct xSphere;
typedef struct xEntCollis;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct volume_data;
typedef enum RxClusterValid;
typedef struct xAnimActiveEffect;
typedef struct RpSector;
typedef struct xAnimPlay;
typedef struct xCylinder;
typedef struct attach_fixed_data;
typedef struct xBase;
typedef struct xRot;
typedef struct xFFX;
typedef struct _class_1;
typedef struct xBox;
typedef struct xAnimSingle;
typedef enum iSndHandle;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct xAnimMultiFileBase;
typedef struct xJSPHeader;
typedef struct RwV3d;
typedef struct RxClusterRef;
typedef struct xJSPNodeInfo;
typedef struct xMat3x3;
typedef struct attach_entity_data;
typedef struct xModelPool;
typedef struct xEntShadow;
typedef struct xLightKitLight;
typedef struct xModelPipe;
typedef struct RpMaterialList;
typedef struct RpClump;
typedef struct RwFrame;
typedef struct iEnvMatOrder;
typedef struct RpMorphTarget;
typedef struct anim_coll_data;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct xBBox;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef struct xJSPNodeTreeLeaf;
typedef struct xAnimTable;
typedef struct attach_entity_tag_data;
typedef struct xJSPNodeTree;
typedef struct RwResEntry;
typedef struct volume_point_data;
typedef struct xMemPool;
typedef struct xBound;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xBaseAsset;
typedef struct xGrid;
typedef struct xEntAsset;
typedef struct RwSurfaceProperties;
typedef struct xGridBound;
typedef struct RxPipelineNode;
typedef struct volume_sphere_data;
typedef struct attach_data;
typedef struct _class_2;
typedef struct xJSPNodeTreeBranch;
typedef struct xQCData;
typedef struct xDynAsset;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct volume_circle_data;
typedef struct tri_data;
typedef struct xScene;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct rxReq;
typedef struct xModelBucket;
typedef struct xSurface;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct volume_line_data;
typedef struct RxHeap;
typedef struct motion_none_data;
typedef struct RwLinkList;
typedef struct _class_3;
typedef struct RxNodeDefinition;
typedef struct _anon0;
typedef struct RpTriangle;
typedef struct motion_spiral_data;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_1)(xEnt*);
typedef void(*type_3)(xEnt*, xVec3*);
typedef void(*type_4)(xEnt*, xScene*, float32);
typedef RpAtomic*(*type_7)(RpAtomic*);
typedef void(*type_9)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_10)(xEnt*);
typedef RpWorldSector*(*type_11)(RpWorldSector*);
typedef void(*type_15)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_17)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_18)(xEnt*, xVec3*, xMat4x3*);
typedef xBase*(*type_19)(uint32);
typedef uint32(*type_20)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int8*(*type_21)(xBase*);
typedef int8*(*type_24)(uint32);
typedef uint32(*type_28)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_29)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_33)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_35)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_36)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef uint32(*type_37)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_38)(RwResEntry*);
typedef int32(*type_39)(RxPipelineNode*, RxPipeline*);
typedef void(*type_40)(xAnimPlay*, xAnimState*, void*);
typedef RwObjectHasFrame*(*type_41)(RwObjectHasFrame*);
typedef void(*type_42)(RxPipelineNode*);
typedef int32(*type_47)(RxPipelineNode*);
typedef void(*type_48)(RxNodeDefinition*);
typedef int32(*type_49)(RxNodeDefinition*);
typedef int32(*type_50)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_52)(RpClump*, void*);
typedef void(*type_56)(xMemPool*, void*);
typedef int32(*type_57)(void*, void*);

typedef uint16 type_0[3];
typedef xVec3 type_2[3];
typedef uint8 type_5[2];
typedef uint32 type_6[4];
typedef float32 type_8[2];
typedef RxCluster type_12[1];
typedef xCollis type_13[18];
typedef xJSPMiniLightTie type_14[16];
typedef float32 type_16[4];
typedef int8 type_22[4];
typedef uint32 type_23[1];
typedef RwTexCoords* type_25[8];
typedef int8 type_26[16];
typedef float32 type_27[3];
typedef float32 type_30[16];
typedef xAnimMultiFileEntry type_31[1];
typedef int32 type_32[7];
typedef xVec3 type_34[4];
typedef float32 type_43[2];
typedef int8 type_44[16];
typedef int8 type_45[32];
typedef int8 type_46[32];
typedef RpLight* type_51[2];
typedef RwFrame* type_53[2];
typedef RwTexCoords* type_54[8];
typedef uint8 type_55[3];
typedef zParticleSystem** type_58[7];

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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct zParticleGenerator : xBase
{
	zParticleAsset* asset;
	int32 flags;

	void deactivate();
	void activate();
	void reset();
	void create(zParticleSystem& system, zParticleAsset& asset);
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

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct volume_model_data
{
	uint8 flags;
	uint8 exclude;
	uint8 pad1;
	uint8 pad2;
	float32 expand;
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
	_class_2 axis;
	attach_data attach;
	motion_data motion;
	volume_data volume;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct zParticleSystem
{
	int32 type;
	int32 need;
	zParticleGenerator** generators;
	int32 generators_size;
	int32 generators_active;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
		tri_data tri;
	};
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

struct motion_data
{
	union
	{
		motion_none_data none;
		motion_spiral_data spiral;
	};
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

struct xSphere
{
	xVec3 center;
	float32 r;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct RpSector
{
	int32 type;
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

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct attach_fixed_data
{
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

struct xRot
{
	xVec3 axis;
	float32 angle;
};

struct xFFX
{
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

enum iSndHandle
{
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct attach_entity_data
{
	uint32 entity;
	uint8 bone;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
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

struct attach_entity_tag_data
{
	uint32 entity;
	xVec3 tag;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct volume_point_data
{
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xGrid
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct volume_sphere_data
{
	float32 radius;
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

struct _class_2
{
	float32 yaw;
	float32 pitch;
	float32 roll;
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

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct volume_circle_data
{
	float32 radius;
	float32 arc_length;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xSurface
{
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

struct volume_line_data
{
	uint8 flags;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 radius;
	float32 length;
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

struct motion_none_data
{
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct _anon0
{
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
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
int32 max_system_asset_size;
zParticleSystem** systems;
zParticleSystem** system_handler_set[7];
int32 system_handler_set_size[7];
zParticleGenerator** generators;
int32 max_generators;
int32 generators_used;
_anon0 __vt__18zParticleGenerator;
void(*event_handler)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
uint32 gActiveHeap;
int32(*compare_generator_systems_function)(void*, void*);

void perturb_dir(xVec3& dir, float32 angle);
xEnt* get_attach_entity(zParticleAsset& asset);
void event_handler(xBase* to, uint32 event);
void deactivate();
void activate();
void reset();
void create(zParticleSystem& system, zParticleAsset& asset);
void zParticleRender();
void zParticlePreRender();
void zParticleUpdate(float32 dt);
void zParticleReset();
void zParticleSetup();
void zParticleSceneExit();
void zParticleSceneEnter();
void create_generators();
void sort_generators();
int32 compare_generator_systems_function(void* e1, void* e2);
void create_handler_sets();

// perturb_dir__18zParticleGeneratorFR5xVec3f
// Start address: 0x498690
void zParticleGenerator::perturb_dir(xVec3& dir, float32 angle)
{
	float32 rand_scale;
	float32 ang_min;
	xVec3 ang;
	xMat3x3 mat;
	// Line 417, Address: 0x498690, Func Offset: 0
	// Line 419, Address: 0x498694, Func Offset: 0x4
	// Line 417, Address: 0x498698, Func Offset: 0x8
	// Line 420, Address: 0x49869c, Func Offset: 0xc
	// Line 417, Address: 0x4986a0, Func Offset: 0x10
	// Line 419, Address: 0x4986a4, Func Offset: 0x14
	// Line 417, Address: 0x4986a8, Func Offset: 0x18
	// Line 420, Address: 0x4986b0, Func Offset: 0x20
	// Line 421, Address: 0x4986b4, Func Offset: 0x24
	// Line 417, Address: 0x4986b8, Func Offset: 0x28
	// Line 419, Address: 0x4986bc, Func Offset: 0x2c
	// Line 421, Address: 0x4986c0, Func Offset: 0x30
	// Line 428, Address: 0x498798, Func Offset: 0x108
	// Line 421, Address: 0x4987a0, Func Offset: 0x110
	// Line 428, Address: 0x4987a4, Func Offset: 0x114
	// Line 429, Address: 0x4987ac, Func Offset: 0x11c
	// Line 430, Address: 0x4987bc, Func Offset: 0x12c
	// Func End, Address: 0x4987d4, Func Offset: 0x144
}

// get_attach_entity__18zParticleGeneratorFRC14zParticleAsset
// Start address: 0x4987e0
xEnt* zParticleGenerator::get_attach_entity(zParticleAsset& asset)
{
	uint32 id;
	xEnt* ent;
	// Line 390, Address: 0x4987e0, Func Offset: 0
	// Line 392, Address: 0x4987e4, Func Offset: 0x4
	// Line 396, Address: 0x49880c, Func Offset: 0x2c
	// Line 398, Address: 0x498814, Func Offset: 0x34
	// Line 405, Address: 0x498818, Func Offset: 0x38
	// Line 406, Address: 0x498820, Func Offset: 0x40
	// Line 408, Address: 0x498828, Func Offset: 0x48
	// Line 411, Address: 0x498838, Func Offset: 0x58
	// Line 402, Address: 0x498850, Func Offset: 0x70
	// Line 407, Address: 0x49885c, Func Offset: 0x7c
	// Line 409, Address: 0x498864, Func Offset: 0x84
	// Line 414, Address: 0x498868, Func Offset: 0x88
	// Func End, Address: 0x498874, Func Offset: 0x94
}

// event_handler__18zParticleGeneratorFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x498880
void zParticleGenerator::event_handler(xBase* to, uint32 event)
{
	zParticleGenerator& gen;
	// Line 371, Address: 0x498880, Func Offset: 0
	// Line 375, Address: 0x498884, Func Offset: 0x4
	// Line 378, Address: 0x4988ac, Func Offset: 0x2c
	// Line 379, Address: 0x4988bc, Func Offset: 0x3c
	// Line 381, Address: 0x4988c4, Func Offset: 0x44
	// Line 382, Address: 0x4988d4, Func Offset: 0x54
	// Line 384, Address: 0x4988dc, Func Offset: 0x5c
	// Line 387, Address: 0x4988ec, Func Offset: 0x6c
	// Func End, Address: 0x4988f8, Func Offset: 0x78
}

// deactivate__18zParticleGeneratorFv
// Start address: 0x498900
void zParticleGenerator::deactivate()
{
	// Line 366, Address: 0x498900, Func Offset: 0
	// Line 367, Address: 0x49890c, Func Offset: 0xc
	// Func End, Address: 0x498914, Func Offset: 0x14
}

// activate__18zParticleGeneratorFv
// Start address: 0x498920
void zParticleGenerator::activate()
{
	// Line 361, Address: 0x498920, Func Offset: 0
	// Line 362, Address: 0x498928, Func Offset: 0x8
	// Func End, Address: 0x498930, Func Offset: 0x10
}

// reset__18zParticleGeneratorFv
// Start address: 0x498930
void zParticleGenerator::reset()
{
	// Line 353, Address: 0x498930, Func Offset: 0
	// Line 354, Address: 0x498944, Func Offset: 0x14
	// Line 356, Address: 0x498954, Func Offset: 0x24
	// Line 357, Address: 0x498964, Func Offset: 0x34
	// Func End, Address: 0x49896c, Func Offset: 0x3c
}

// create__18zParticleGeneratorFR15zParticleSystemR14zParticleAsset
// Start address: 0x498970
void zParticleGenerator::create(zParticleSystem& system, zParticleAsset& asset)
{
	// Line 341, Address: 0x498970, Func Offset: 0
	// Line 342, Address: 0x498990, Func Offset: 0x20
	// Line 343, Address: 0x498998, Func Offset: 0x28
	// Line 344, Address: 0x49899c, Func Offset: 0x2c
	// Line 346, Address: 0x4989a4, Func Offset: 0x34
	// Line 345, Address: 0x4989a8, Func Offset: 0x38
	// Line 346, Address: 0x4989ac, Func Offset: 0x3c
	// Line 347, Address: 0x4989b4, Func Offset: 0x44
	// Line 348, Address: 0x4989d8, Func Offset: 0x68
	// Line 349, Address: 0x4989e4, Func Offset: 0x74
	// Func End, Address: 0x4989fc, Func Offset: 0x8c
}

// zParticleRender__Fv
// Start address: 0x498a00
void zParticleRender()
{
	zParticleSystem** set;
	zParticleSystem** end_set;
	// Line 312, Address: 0x498a00, Func Offset: 0
	// Line 313, Address: 0x498a04, Func Offset: 0x4
	// Line 312, Address: 0x498a08, Func Offset: 0x8
	// Line 313, Address: 0x498a14, Func Offset: 0x14
	// Line 315, Address: 0x498a28, Func Offset: 0x28
	// Line 316, Address: 0x498a30, Func Offset: 0x30
	// Line 338, Address: 0x498a50, Func Offset: 0x50
	// Func End, Address: 0x498a64, Func Offset: 0x64
}

// zParticlePreRender__Fv
// Start address: 0x498a70
void zParticlePreRender()
{
	zParticleSystem** set;
	zParticleSystem** end_set;
	// Line 304, Address: 0x498a70, Func Offset: 0
	// Line 305, Address: 0x498a74, Func Offset: 0x4
	// Line 304, Address: 0x498a78, Func Offset: 0x8
	// Line 305, Address: 0x498a84, Func Offset: 0x14
	// Line 307, Address: 0x498a98, Func Offset: 0x28
	// Line 308, Address: 0x498aa0, Func Offset: 0x30
	// Line 309, Address: 0x498ac0, Func Offset: 0x50
	// Func End, Address: 0x498ad4, Func Offset: 0x64
}

// zParticleUpdate__Ff
// Start address: 0x498ae0
void zParticleUpdate(float32 dt)
{
	zParticleSystem** set;
	zParticleSystem** end_set;
	// Line 296, Address: 0x498ae0, Func Offset: 0
	// Line 297, Address: 0x498ae4, Func Offset: 0x4
	// Line 296, Address: 0x498ae8, Func Offset: 0x8
	// Line 297, Address: 0x498aec, Func Offset: 0xc
	// Line 296, Address: 0x498af0, Func Offset: 0x10
	// Line 297, Address: 0x498afc, Func Offset: 0x1c
	// Line 299, Address: 0x498b0c, Func Offset: 0x2c
	// Line 300, Address: 0x498b14, Func Offset: 0x34
	// Line 301, Address: 0x498b38, Func Offset: 0x58
	// Func End, Address: 0x498b50, Func Offset: 0x70
}

// zParticleReset__Fv
// Start address: 0x498b50
void zParticleReset()
{
	zParticleSystem** set;
	zParticleSystem** end_set;
	// Line 288, Address: 0x498b50, Func Offset: 0
	// Line 289, Address: 0x498b54, Func Offset: 0x4
	// Line 288, Address: 0x498b58, Func Offset: 0x8
	// Line 289, Address: 0x498b64, Func Offset: 0x14
	// Line 291, Address: 0x498b78, Func Offset: 0x28
	// Line 292, Address: 0x498b80, Func Offset: 0x30
	// Line 293, Address: 0x498ba0, Func Offset: 0x50
	// Func End, Address: 0x498bb4, Func Offset: 0x64
}

// zParticleSetup__Fv
// Start address: 0x498bc0
void zParticleSetup()
{
	zParticleSystem** set;
	zParticleSystem** end_set;
	// Line 259, Address: 0x498bc0, Func Offset: 0
	// Line 260, Address: 0x498bc4, Func Offset: 0x4
	// Line 259, Address: 0x498bc8, Func Offset: 0x8
	// Line 260, Address: 0x498bd4, Func Offset: 0x14
	// Line 262, Address: 0x498be8, Func Offset: 0x28
	// Line 263, Address: 0x498bf0, Func Offset: 0x30
	// Line 285, Address: 0x498c10, Func Offset: 0x50
	// Func End, Address: 0x498c24, Func Offset: 0x64
}

// zParticleSceneExit__Fv
// Start address: 0x498c30
void zParticleSceneExit()
{
	zParticleGenerator** gen;
	zParticleGenerator** end_gen;
	zParticleSystem** set;
	zParticleSystem** end_set;
	// Line 245, Address: 0x498c30, Func Offset: 0
	// Line 247, Address: 0x498c40, Func Offset: 0x10
	// Line 245, Address: 0x498c44, Func Offset: 0x14
	// Line 247, Address: 0x498c48, Func Offset: 0x18
	// Line 248, Address: 0x498c50, Func Offset: 0x20
	// Line 249, Address: 0x498c5c, Func Offset: 0x2c
	// Line 252, Address: 0x498c90, Func Offset: 0x60
	// Line 254, Address: 0x498ca8, Func Offset: 0x78
	// Line 255, Address: 0x498cb0, Func Offset: 0x80
	// Line 256, Address: 0x498cd0, Func Offset: 0xa0
	// Func End, Address: 0x498ce4, Func Offset: 0xb4
}

// zParticleSceneEnter__Fv
// Start address: 0x498cf0
void zParticleSceneEnter()
{
	zParticleSystem** sys;
	zParticleSystem** end_sys;
	int32 size;
	zParticleSystem** set;
	zParticleSystem** end_set;
	// Line 208, Address: 0x498cf0, Func Offset: 0
	// Line 209, Address: 0x498cfc, Func Offset: 0xc
	// Line 212, Address: 0x498d04, Func Offset: 0x14
	// Line 216, Address: 0x498d0c, Func Offset: 0x1c
	// Line 212, Address: 0x498d10, Func Offset: 0x20
	// Line 216, Address: 0x498d14, Func Offset: 0x24
	// Line 217, Address: 0x498d18, Func Offset: 0x28
	// Line 220, Address: 0x498d20, Func Offset: 0x30
	// Line 221, Address: 0x498d28, Func Offset: 0x38
	// Line 225, Address: 0x498d30, Func Offset: 0x40
	// Line 226, Address: 0x498d44, Func Offset: 0x54
	// Line 228, Address: 0x498d54, Func Offset: 0x64
	// Line 231, Address: 0x498d68, Func Offset: 0x78
	// Line 235, Address: 0x498d70, Func Offset: 0x80
	// Line 231, Address: 0x498d74, Func Offset: 0x84
	// Line 235, Address: 0x498d78, Func Offset: 0x88
	// Line 231, Address: 0x498d7c, Func Offset: 0x8c
	// Line 235, Address: 0x498d80, Func Offset: 0x90
	// Line 237, Address: 0x498d88, Func Offset: 0x98
	// Line 238, Address: 0x498d90, Func Offset: 0xa0
	// Line 241, Address: 0x498dc0, Func Offset: 0xd0
	// Line 242, Address: 0x498dc8, Func Offset: 0xd8
	// Func End, Address: 0x498ddc, Func Offset: 0xec
}

// create_generators__32@unnamed@zParticleGenerator_cpp@Fv
// Start address: 0x498de0
void create_generators()
{
	uint32 type;
	int32 asses;
	int32 total;
	int32 i;
	uint32 asset_size;
	zParticleAsset* asset;
	zParticleGenerator** gen;
	int32 i;
	zParticleAsset* asset;
	// Line 169, Address: 0x498de0, Func Offset: 0
	// Line 170, Address: 0x498de4, Func Offset: 0x4
	// Line 169, Address: 0x498de8, Func Offset: 0x8
	// Line 170, Address: 0x498dec, Func Offset: 0xc
	// Line 169, Address: 0x498df0, Func Offset: 0x10
	// Line 170, Address: 0x498dfc, Func Offset: 0x1c
	// Line 171, Address: 0x498e08, Func Offset: 0x28
	// Line 174, Address: 0x498e18, Func Offset: 0x38
	// Line 175, Address: 0x498e1c, Func Offset: 0x3c
	// Line 178, Address: 0x498e28, Func Offset: 0x48
	// Line 179, Address: 0x498e3c, Func Offset: 0x5c
	// Line 182, Address: 0x498e48, Func Offset: 0x68
	// Line 183, Address: 0x498e4c, Func Offset: 0x6c
	// Line 188, Address: 0x498e60, Func Offset: 0x80
	// Line 187, Address: 0x498e64, Func Offset: 0x84
	// Line 188, Address: 0x498e68, Func Offset: 0x88
	// Line 187, Address: 0x498e6c, Func Offset: 0x8c
	// Line 188, Address: 0x498e70, Func Offset: 0x90
	// Line 192, Address: 0x498e78, Func Offset: 0x98
	// Line 188, Address: 0x498e7c, Func Offset: 0x9c
	// Line 191, Address: 0x498e80, Func Offset: 0xa0
	// Line 192, Address: 0x498e84, Func Offset: 0xa4
	// Line 194, Address: 0x498e8c, Func Offset: 0xac
	// Line 195, Address: 0x498ea4, Func Offset: 0xc4
	// Line 200, Address: 0x498eb0, Func Offset: 0xd0
	// Line 201, Address: 0x498ec0, Func Offset: 0xe0
	// Line 202, Address: 0x498ed8, Func Offset: 0xf8
	// Line 203, Address: 0x498ee0, Func Offset: 0x100
	// Line 197, Address: 0x498ef0, Func Offset: 0x110
	// Line 203, Address: 0x498ef4, Func Offset: 0x114
	// Func End, Address: 0x498f44, Func Offset: 0x164
}

// sort_generators__32@unnamed@zParticleGenerator_cpp@Fv
// Start address: 0x498f50
void sort_generators()
{
	zParticleSystem** sys;
	zParticleSystem** end_sys;
	zParticleGenerator** first_gen;
	zParticleGenerator** last_gen;
	int32 system_type;
	zParticleGenerator** found_gen;
	// Line 141, Address: 0x498f50, Func Offset: 0
	// Line 143, Address: 0x498f54, Func Offset: 0x4
	// Line 141, Address: 0x498f58, Func Offset: 0x8
	// Line 143, Address: 0x498f5c, Func Offset: 0xc
	// Line 147, Address: 0x498f74, Func Offset: 0x24
	// Line 146, Address: 0x498f78, Func Offset: 0x28
	// Line 147, Address: 0x498f80, Func Offset: 0x30
	// Line 149, Address: 0x498f84, Func Offset: 0x34
	// Line 151, Address: 0x498f8c, Func Offset: 0x3c
	// Line 153, Address: 0x498f94, Func Offset: 0x44
	// Line 155, Address: 0x498fac, Func Offset: 0x5c
	// Line 157, Address: 0x498fb8, Func Offset: 0x68
	// Line 159, Address: 0x498fcc, Func Offset: 0x7c
	// Line 160, Address: 0x498fe0, Func Offset: 0x90
	// Line 161, Address: 0x498fe4, Func Offset: 0x94
	// Line 162, Address: 0x499000, Func Offset: 0xb0
	// Line 163, Address: 0x499004, Func Offset: 0xb4
	// Line 165, Address: 0x49900c, Func Offset: 0xbc
	// Line 166, Address: 0x499018, Func Offset: 0xc8
	// Func End, Address: 0x499024, Func Offset: 0xd4
}

// compare_generator_systems_function__32@unnamed@zParticleGenerator_cpp@FPCvPCv
// Start address: 0x499030
int32 compare_generator_systems_function(void* e1, void* e2)
{
	zParticleGenerator* g1;
	zParticleGenerator* g2;
	// Line 125, Address: 0x499030, Func Offset: 0
	// Line 126, Address: 0x499034, Func Offset: 0x4
	// Line 128, Address: 0x499048, Func Offset: 0x18
	// Line 130, Address: 0x49905c, Func Offset: 0x2c
	// Func End, Address: 0x499064, Func Offset: 0x34
}

// create_handler_sets__32@unnamed@zParticleGenerator_cpp@Fv
// Start address: 0x499070
void create_handler_sets()
{
	int32 total_size;
	int32 handler;
	int32 size;
	zParticleSystem** sys;
	zParticleSystem** end_sys;
	zParticleSystem** set;
	int32 handler;
	zParticleSystem** sys;
	zParticleSystem** end_sys;
	// Line 75, Address: 0x499070, Func Offset: 0
	// Line 81, Address: 0x499074, Func Offset: 0x4
	// Line 75, Address: 0x499078, Func Offset: 0x8
	// Line 77, Address: 0x49907c, Func Offset: 0xc
	// Line 78, Address: 0x499080, Func Offset: 0x10
	// Line 81, Address: 0x499088, Func Offset: 0x18
	// Line 80, Address: 0x499094, Func Offset: 0x24
	// Line 83, Address: 0x499098, Func Offset: 0x28
	// Line 86, Address: 0x4990a8, Func Offset: 0x38
	// Line 87, Address: 0x4990bc, Func Offset: 0x4c
	// Line 88, Address: 0x4990c0, Func Offset: 0x50
	// Line 91, Address: 0x4990d0, Func Offset: 0x60
	// Line 89, Address: 0x4990d4, Func Offset: 0x64
	// Line 91, Address: 0x4990d8, Func Offset: 0x68
	// Line 90, Address: 0x4990dc, Func Offset: 0x6c
	// Line 91, Address: 0x4990e0, Func Offset: 0x70
	// Line 93, Address: 0x4990e8, Func Offset: 0x78
	// Line 97, Address: 0x4990f0, Func Offset: 0x80
	// Line 101, Address: 0x499100, Func Offset: 0x90
	// Line 97, Address: 0x499104, Func Offset: 0x94
	// Line 101, Address: 0x499108, Func Offset: 0x98
	// Line 103, Address: 0x499114, Func Offset: 0xa4
	// Line 104, Address: 0x499118, Func Offset: 0xa8
	// Line 106, Address: 0x49911c, Func Offset: 0xac
	// Line 109, Address: 0x49912c, Func Offset: 0xbc
	// Line 114, Address: 0x49913c, Func Offset: 0xcc
	// Line 115, Address: 0x499150, Func Offset: 0xe0
	// Line 116, Address: 0x499160, Func Offset: 0xf0
	// Func End, Address: 0x499184, Func Offset: 0x114
}

