typedef struct xAnimTransition;
typedef struct xEnt;
typedef struct RpInterpolator;
typedef struct xGroup;
typedef struct xScene;
typedef struct RpAtomic;
typedef enum RxNodeDefEditable;
typedef struct xAnimState;
typedef struct xBox;
typedef struct iEnvMatOrder;
typedef struct xEntCollis;
typedef struct xBase;
typedef struct _class_0;
typedef struct xBound;
typedef struct xEntFrame;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct xVec3;
typedef struct xGrid;
typedef struct RxIoSpec;
typedef struct xBaseAsset;
typedef struct xAnimPhysicsData;
typedef struct xModelInstance;
typedef struct xJSPNodeTree;
typedef struct xAnimEffect;
typedef struct xAnimMultiFileEntry;
typedef struct RwBBox;
typedef struct xGridBound;
typedef struct RpWorld;
typedef struct xJSPNodeInfo;
typedef struct xJSPNodeTreeBranch;
typedef struct RwRaster;
typedef struct xCollis;
typedef struct RxPacket;
typedef struct xAnimFile;
typedef struct xAnimActiveEffect;
typedef struct xJSPNodeTreeLeaf;
typedef struct RxOutputSpec;
typedef struct xAnimTable;
typedef struct xQCData;
typedef struct xAnimPlay;
typedef struct tri_data;
typedef struct iEnv;
typedef struct xAnimSingle;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct RxCluster;
typedef struct xShadowSimplePoly;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimMultiFileBase;
typedef enum RxClusterValid;
typedef struct xModelPool;
typedef struct RpSector;
typedef struct xJSPMiniLightTie;
typedef struct xModelPipe;
typedef struct RpLight;
typedef struct xSurface;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct xJSPHeader;
typedef struct _class_1;
typedef struct RxClusterRef;
typedef struct xFFX;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimMultiFile;
typedef struct xShadowSimpleCache;
typedef struct xClumpCollBSPTree;
typedef struct xJSPNodeLight;
typedef struct RpMaterialList;
typedef struct xLightKit;
typedef struct RwFrame;
typedef struct RpMorphTarget;
typedef struct xClumpCollBSPBranchNode;
typedef struct xGroupAsset;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct xMat4x3;
typedef struct xClumpCollBSPTriangle;
typedef struct xMemPool;
typedef struct RwMatrixTag;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef struct xEnv;
typedef enum iSndHandle;
typedef struct _class_2;
typedef struct xSerial;
typedef struct RwResEntry;
typedef struct xEntShadow;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xQuat;
typedef struct RwV3d;
typedef struct xAnimTransitionList;
typedef struct anim_coll_data;
typedef struct xLinkAsset;
typedef struct xModelBucket;
typedef struct RwSurfaceProperties;
typedef struct RxPipelineNode;
typedef struct RpClump;
typedef struct xLightKitLight;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct xEntAsset;
typedef struct rxReq;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef struct xBBox;
typedef struct xRot;
typedef struct RpTriangle;
typedef struct xSphere;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;
typedef struct RxClusterDefinition;
typedef struct xCylinder;
typedef struct xMat3x3;

typedef void(*type_0)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_3)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_5)(xEnt*, xScene*, float32, xEntFrame*);
typedef xBase*(*type_6)(uint32);
typedef void(*type_8)(xMemPool*, void*);
typedef void(*type_9)(xEnt*);
typedef void(*type_11)(xEnt*, xScene*, float32);
typedef int8*(*type_12)(xBase*);
typedef uint32(*type_13)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_15)(xEnt*);
typedef int8*(*type_16)(uint32);
typedef RpAtomic*(*type_17)(RpAtomic*);
typedef RpWorldSector*(*type_18)(RpWorldSector*);
typedef void(*type_20)(xEnt*);
typedef uint32(*type_21)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_24)(xEnt*, xVec3*);
typedef void(*type_25)(xEnt*);
typedef void(*type_26)(xEnt*);
typedef uint32(*type_27)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_33)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_34)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_38)(xAnimPlay*, xAnimState*, void*);
typedef void(*type_39)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef uint32(*type_40)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_42)(RwResEntry*);
typedef int32(*type_43)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_44)(RwObjectHasFrame*);
typedef void(*type_45)(RxPipelineNode*);
typedef int32(*type_48)(RxPipelineNode*);
typedef void(*type_51)(xEnt*);
typedef void(*type_52)(RxNodeDefinition*);
typedef int32(*type_53)(RxNodeDefinition*);
typedef int32(*type_55)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_57)(RpClump*, void*);
typedef void(*type_60)(xEnt*);

typedef uint8 type_1[2];
typedef int8 type_2[16];
typedef uint16 type_4[3];
typedef float32 type_7[2];
typedef float32 type_10[3];
typedef uint32 type_14[4];
typedef RxCluster type_19[1];
typedef xVec3 type_22[3];
typedef uint32 type_23[1];
typedef uint8 type_28[3];
typedef xAnimMultiFileEntry type_29[1];
typedef xCollis type_30[18];
typedef RwTexCoords* type_31[8];
typedef RpLight* type_32[2];
typedef RwFrame* type_35[2];
typedef xJSPMiniLightTie type_36[16];
typedef int8 type_41[4];
typedef int8 type_46[32];
typedef int8 type_47[32];
typedef float32 type_49[16];
typedef xVec3 type_50[4];
typedef float32 type_54[4];
typedef int8 type_56[16];
typedef float32 type_58[2];
typedef RwTexCoords* type_59[8];

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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;

	uint32 get_any();
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct _class_0
{
	xVec3* verts;
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

struct xGrid
{
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
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

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	union
	{
		uint32 Handle;
		iSndHandle SndHandle;
	};
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RpSector
{
	int32 type;
};

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
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

struct xSurface
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

struct _class_1
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

struct xFFX
{
};

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

enum iSndHandle
{
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

struct xSerial
{
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct anim_coll_data
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct rxReq
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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

int8 buffer[16];
int8 buffer[16];
float32 scale;
void(*xEntVisibilityCullOff)(xEnt*);
void(*xEntVisibilityCullOn)(xEnt*);
void(*xEntHide)(xEnt*);
void(*xEntShow)(xEnt*);
uint32 gActiveHeap;
void(*xGroupEventCB)(xBase*, xBase*, uint32, float32*, xBase*, uint32);

uint32 get_any();
uint32 xGroupGetItem(xGroup* g, uint32 index);
xBase* xGroupGetItemPtr(xGroup* g, uint32 index);
uint32 xGroupGetCount(xGroup* g);
void xGroupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID);
void xGroupLoad(xGroup* ent, xSerial* s);
void xGroupSave(xGroup* ent, xSerial* s);
void xGroupSetup(xGroup* g);
void xGroupInit(void* b, void* asset);

// get_any__6xGroupFv
// Start address: 0x1cfee0
uint32 xGroup::get_any()
{
	uint32 id;
	// Line 342, Address: 0x1cfee0, Func Offset: 0
	// Line 344, Address: 0x1cfee8, Func Offset: 0x8
	// Line 348, Address: 0x1cfef4, Func Offset: 0x14
	// Line 351, Address: 0x1cfef8, Func Offset: 0x18
	// Line 348, Address: 0x1cff00, Func Offset: 0x20
	// Line 351, Address: 0x1cff08, Func Offset: 0x28
	// Line 354, Address: 0x1cff10, Func Offset: 0x30
	// Func End, Address: 0x1cff18, Func Offset: 0x38
}

// xGroupGetItem__FP6xGroupUi
// Start address: 0x1cff20
uint32 xGroupGetItem(xGroup* g, uint32 index)
{
	// Line 316, Address: 0x1cff20, Func Offset: 0
	// Line 317, Address: 0x1cff2c, Func Offset: 0xc
	// Func End, Address: 0x1cff34, Func Offset: 0x14
}

// xGroupGetItemPtr__FP6xGroupUi
// Start address: 0x1cff40
xBase* xGroupGetItemPtr(xGroup* g, uint32 index)
{
	// Line 289, Address: 0x1cff40, Func Offset: 0
	// Line 292, Address: 0x1cff54, Func Offset: 0x14
	// Line 299, Address: 0x1cff68, Func Offset: 0x28
	// Line 300, Address: 0x1cff94, Func Offset: 0x54
	// Func End, Address: 0x1cffa4, Func Offset: 0x64
}

// xGroupGetCount__FP6xGroup
// Start address: 0x1cffb0
uint32 xGroupGetCount(xGroup* g)
{
	// Line 271, Address: 0x1cffb0, Func Offset: 0
	// Line 272, Address: 0x1cffb4, Func Offset: 0x4
	// Func End, Address: 0x1cffbc, Func Offset: 0xc
}

// xGroupEventCB__FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x1cffc0
void xGroupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget, uint32 toParamWidgetID)
{
	xGroup* g;
	int32 rand;
	void(*entVisEventHandler)(xEnt*);
	int32 i;
	xBase* b;
	int32 i;
	xBase* b;
	// Line 161, Address: 0x1cffc0, Func Offset: 0
	// Line 168, Address: 0x1cffc4, Func Offset: 0x4
	// Line 161, Address: 0x1cffc8, Func Offset: 0x8
	// Line 168, Address: 0x1d0000, Func Offset: 0x40
	// Line 171, Address: 0x1d001c, Func Offset: 0x5c
	// Line 172, Address: 0x1d0028, Func Offset: 0x68
	// Line 174, Address: 0x1d0030, Func Offset: 0x70
	// Line 179, Address: 0x1d0034, Func Offset: 0x74
	// Line 180, Address: 0x1d0038, Func Offset: 0x78
	// Line 191, Address: 0x1d0048, Func Offset: 0x88
	// Line 203, Address: 0x1d007c, Func Offset: 0xbc
	// Line 206, Address: 0x1d00ac, Func Offset: 0xec
	// Line 207, Address: 0x1d00b0, Func Offset: 0xf0
	// Line 209, Address: 0x1d00b8, Func Offset: 0xf8
	// Line 210, Address: 0x1d00bc, Func Offset: 0xfc
	// Line 212, Address: 0x1d00c4, Func Offset: 0x104
	// Line 213, Address: 0x1d00c8, Func Offset: 0x108
	// Line 215, Address: 0x1d00d0, Func Offset: 0x110
	// Line 220, Address: 0x1d00d8, Func Offset: 0x118
	// Line 221, Address: 0x1d00f0, Func Offset: 0x130
	// Line 235, Address: 0x1d0104, Func Offset: 0x144
	// Line 237, Address: 0x1d0120, Func Offset: 0x160
	// Line 241, Address: 0x1d0128, Func Offset: 0x168
	// Line 244, Address: 0x1d013c, Func Offset: 0x17c
	// Line 261, Address: 0x1d0150, Func Offset: 0x190
	// Line 263, Address: 0x1d0168, Func Offset: 0x1a8
	// Line 182, Address: 0x1d0178, Func Offset: 0x1b8
	// Line 263, Address: 0x1d0188, Func Offset: 0x1c8
	// Line 225, Address: 0x1d01a0, Func Offset: 0x1e0
	// Line 263, Address: 0x1d01a4, Func Offset: 0x1e4
	// Line 226, Address: 0x1d01b0, Func Offset: 0x1f0
	// Line 263, Address: 0x1d01b4, Func Offset: 0x1f4
	// Line 228, Address: 0x1d01c4, Func Offset: 0x204
	// Line 231, Address: 0x1d01d0, Func Offset: 0x210
	// Line 263, Address: 0x1d01e8, Func Offset: 0x228
	// Line 251, Address: 0x1d020c, Func Offset: 0x24c
	// Line 263, Address: 0x1d0220, Func Offset: 0x260
	// Line 264, Address: 0x1d0230, Func Offset: 0x270
	// Func End, Address: 0x1d0260, Func Offset: 0x2a0
}

// xGroupLoad__FP6xGroupP7xSerial
// Start address: 0x1d0360
void xGroupLoad(xGroup* ent, xSerial* s)
{
	// Line 134, Address: 0x1d0360, Func Offset: 0
	// Func End, Address: 0x1d0368, Func Offset: 0x8
}

// xGroupSave__FP6xGroupP7xSerial
// Start address: 0x1d0370
void xGroupSave(xGroup* ent, xSerial* s)
{
	// Line 115, Address: 0x1d0370, Func Offset: 0
	// Func End, Address: 0x1d0378, Func Offset: 0x8
}

// xGroupSetup__FP6xGroup
// Start address: 0x1d0380
void xGroupSetup(xGroup* g)
{
	uint32 count;
	uint32 i;
	// Line 61, Address: 0x1d0380, Func Offset: 0
	// Line 68, Address: 0x1d039c, Func Offset: 0x1c
	// Line 70, Address: 0x1d03ac, Func Offset: 0x2c
	// Line 74, Address: 0x1d03b4, Func Offset: 0x34
	// Line 90, Address: 0x1d03c0, Func Offset: 0x40
	// Line 100, Address: 0x1d03cc, Func Offset: 0x4c
	// Line 76, Address: 0x1d03dc, Func Offset: 0x5c
	// Line 100, Address: 0x1d03e0, Func Offset: 0x60
	// Line 79, Address: 0x1d0410, Func Offset: 0x90
	// Line 100, Address: 0x1d0414, Func Offset: 0x94
	// Line 81, Address: 0x1d0430, Func Offset: 0xb0
	// Line 100, Address: 0x1d0434, Func Offset: 0xb4
	// Line 83, Address: 0x1d0460, Func Offset: 0xe0
	// Line 101, Address: 0x1d0470, Func Offset: 0xf0
	// Func End, Address: 0x1d0490, Func Offset: 0x110
}

// xGroupInit__FPvPv
// Start address: 0x1d0490
void xGroupInit(void* b, void* asset)
{
	// Line 30, Address: 0x1d0490, Func Offset: 0
	// Line 31, Address: 0x1d04a4, Func Offset: 0x14
	// Line 32, Address: 0x1d0520, Func Offset: 0x90
	// Func End, Address: 0x1d0534, Func Offset: 0xa4
}

