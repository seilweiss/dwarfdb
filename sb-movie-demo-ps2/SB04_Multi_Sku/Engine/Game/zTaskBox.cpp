typedef struct _class_0;
typedef struct xBase;
typedef struct RxClusterDefinition;
typedef struct ztaskbox;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct xModelAssetInfo;
typedef struct xAnimPlay;
typedef struct RwFrame;
typedef struct xLightKitLight;
typedef struct xQuat;
typedef struct xAnimTransitionList;
typedef struct RpInterpolator;
typedef struct xVec3;
typedef enum RxNodeDefEditable;
typedef struct xLinkAsset;
typedef struct base;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct tri_data;
typedef struct RxIoSpec;
typedef struct xGroup;
typedef struct RpLight;
typedef struct RwBBox;
typedef struct talk_callback;
typedef struct RpWorld;
typedef struct RwRaster;
typedef struct xModelInstance;
typedef struct _class_1;
typedef struct xModelBucket;
typedef struct RxPacket;
typedef struct xMat4x3;
typedef struct xAnimMultiFile;
typedef struct RxOutputSpec;
typedef struct xAnimTransition;
typedef struct xEnt;
typedef struct xDynAsset;
typedef struct xAnimState;
typedef struct xJSPNodeTree;
typedef struct xEntAsset;
typedef struct xSurface;
typedef struct xEnv;
typedef struct xLightKit;
typedef struct xAnimPhysicsData;
typedef struct xScene;
typedef struct xJSPNodeTreeBranch;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef enum answer_enum;
typedef struct _class_2;
typedef struct xSphere;
typedef struct xEntCollis;
typedef struct RxCluster;
typedef struct xCollis;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntFrame;
typedef enum RxClusterValid;
typedef struct asset_type_0;
typedef struct xJSPNodeTreeLeaf;
typedef struct RpSector;
typedef struct xCylinder;
typedef struct xRot;
typedef struct xSerial;
typedef struct xFactoryInst;
typedef struct xGrid;
typedef struct xAnimTable;
typedef struct callback_0;
typedef struct xBox;
typedef struct callback_1;
typedef struct xQCData;
typedef struct RxPipelineCluster;
typedef struct xMat3x3;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct xModelAssetParam;
typedef struct xAnimFile;
typedef struct xJSPMiniLightTie;
typedef struct RwMatrixTag;
typedef struct RpMaterialList;
typedef struct ztalkbox;
typedef struct RpMorphTarget;
typedef struct xShadowSimplePoly;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPTree;
typedef struct xJSPNodeLight;
typedef struct xEntNPCAsset;
typedef struct _class_3;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef struct xClumpCollBSPBranchNode;
typedef struct xBaseAsset;
typedef struct _class_4;
typedef struct xClumpCollBSPTriangle;
typedef struct RwResEntry;
typedef struct xShadowSimpleCache;
typedef struct xAnimMultiFileEntry;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct RwV3d;
typedef struct xMovePoint;
typedef struct RyzMemData;
typedef struct xAnimActiveEffect;
typedef struct iEnvMatOrder;
typedef struct RwSurfaceProperties;
typedef struct _class_5;
typedef struct RxPipelineNode;
typedef struct xFFX;
typedef enum iSndHandle;
typedef struct xAnimSingle;
typedef struct ztextbox;
typedef struct xBBox;
typedef struct xJSPHeader;
typedef struct xJSPNodeInfo;
typedef struct xEntNPCAssetIN;
typedef struct xAnimMultiFileBase;
typedef struct RwLLLink;
typedef struct xModelPool;
typedef enum RpWorldRenderOrder;
typedef struct xGroupAsset;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct xEntShadow;
typedef struct xModelPipe;
typedef struct iEnv;
typedef struct _class_6;
typedef struct anim_coll_data;
typedef struct xMemPool;
typedef struct RxPipelineNodeParam;
typedef struct xGridBound;
typedef struct RwTexDictionary;
typedef struct xBound;
typedef struct rxReq;
typedef struct RwTexCoords;
typedef struct _anon0;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct _anon1;
typedef struct asset_type_1;
typedef struct RwLinkList;
typedef struct RxNodeDefinition;
typedef enum state_enum;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef xBase*(*type_1)(uint32);
typedef int8*(*type_4)(xBase*);
typedef int8*(*type_5)(uint32);
typedef void(*type_6)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef void(*type_13)(xAnimPlay*, xAnimState*, void*);
typedef void(*type_15)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_16)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_17)(RpWorldSector*);
typedef void(*type_19)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_20)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_21)(xEnt*, xScene*, float32);
typedef uint32(*type_22)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_23)(xEnt*);
typedef void(*type_25)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_26)(xEnt*);
typedef void(*type_30)(xEnt*, xVec3*);
typedef uint32(*type_35)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_37)(RwResEntry*);
typedef int32(*type_38)(RxPipelineNode*, RxPipeline*);
typedef void(*type_39)(xEnt*, xVec3*, xMat4x3*);
typedef RwObjectHasFrame*(*type_40)(RwObjectHasFrame*);
typedef void(*type_41)(RxPipelineNode*);
typedef int32(*type_44)(RxPipelineNode*);
typedef uint32(*type_46)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_47)(RxNodeDefinition*);
typedef int32(*type_49)(RxNodeDefinition*);
typedef int32(*type_50)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_51)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef RpClump*(*type_52)(RpClump*, void*);
typedef void(*type_53)(xMemPool*, void*);

typedef RpLight* type_0[2];
typedef RwFrame* type_2[2];
typedef float32 type_3[2];
typedef uint8 type_7[3];
typedef uint16 type_8[3];
typedef float32 type_9[16];
typedef int8 type_10[16];
typedef uint32 type_11[4];
typedef float32 type_14[4];
typedef RxCluster type_18[1];
typedef int8 type_24[16];
typedef RwTexCoords* type_27[8];
typedef float32 type_28[3];
typedef xVec3 type_29[3];
typedef uint8 type_31[2];
typedef uint32 type_32[6];
typedef float32 type_33[2];
typedef xJSPMiniLightTie type_34[16];
typedef xCollis type_36[18];
typedef int8 type_42[32];
typedef int8 type_43[32];
typedef int8 type_45[4];
typedef uint32 type_48[1];
typedef xAnimMultiFileEntry type_54[1];
typedef RwTexCoords* type_55[8];
typedef xVec3 type_56[4];

struct _class_0
{
	int8* skip;
	int8* noskip;
	int8* quit;
	int8* noquit;
	int8* yesno;
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

struct ztaskbox : xBase
{
	_class_1 flag;
	asset_type_0* asset;
	state_enum state;
	callback_1* cb;
	ztaskbox* current;

	void on_talk_stop();
	void set_state(state_enum state);
	void stop_talk();
	void start_talk(base* npc);
	void write(xSerial& s);
	void read(xSerial& s);
	void load(asset_type_0& a);
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint16 Flags;
	uint16 Probability;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xModelAssetInfo
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct base : xEnt, xFactoryInst
{
	int16 bound_bone;
	uint16 sound_id_offset;
	uint16 global_parameters_size;
	uint16 local_parameters_size;
	uint32 type;
	xModelAssetParam* global_parameters;
	xModelAssetParam* local_parameters;
	union
	{
		xMovePoint* movepoint;
		uint32 movepoint_asset_id;
	};
	xEntNPCAssetIN* npc_asset;
	xModelAssetInfo* model_asset;
	float32 shadow_strength;
	float32 shadow_cache_fudge_factor;
	xVec3 bound_offset;
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

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct talk_callback : callback_0
{
	ztaskbox* task;
	answer_enum answer;

	void on_start();
	void on_stop();
	void on_answer(answer_enum answer);
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

struct _class_1
{
	uint8 enabled : 8;
	uint8 running : 8;
	uint32 dummy : 16;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
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

enum answer_enum
{
	ANSWER_CONTINUE,
	ANSWER_YES,
	ANSWER_NO
};

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
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
		tri_data tri;
	};
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct asset_type_0 : xDynAsset
{
	uint8 persistent : 8;
	uint8 loop : 8;
	uint8 enable : 8;
	uint8 retry : 8;
	uint32 talk_box;
	uint32 next_task;
	uint32 stages[6];
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct RpSector
{
	int32 type;
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

struct xSerial
{
	uint32 idtag;
	int32 baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int32 warned;
	int32 curele;
	int32 bitidx;
	int32 bittally;
};

struct xFactoryInst : RyzMemData
{
	int32 itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xGrid
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

struct callback_0
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct callback_1
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xModelAssetParam
{
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct ztalkbox : xBase
{
	_class_6 flag;
	asset_type_1* asset;
	ztextbox* dialog_box;
	ztextbox* prompt_box;
	ztextbox* quit_box;
	_class_0 prompt;
	uint32 triggerPads;
	base* npc;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct st_SERIAL_CLIENTINFO
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct xEntNPCAsset
{
	int32 npcFlags;
	int32 npcModel;
	int32 npcProps;
	uint32 movepoint;
	uint32 taskWidgetPrime;
	uint32 taskWidgetSecond;
};

struct _class_3
{
	xVec3* verts;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _class_4
{
	ztaskbox* active;
};

struct xClumpCollBSPTriangle
{
	_class_5 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xMovePoint
{
};

struct RyzMemData
{
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _class_5
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
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

struct ztextbox
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
};

struct xEntNPCAssetIN : xEntNPCAsset
{
	uint32 navigation_mesh_id;
	uint32 settings;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
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

struct _class_6
{
	uint8 visible : 1;
};

struct anim_coll_data
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct rxReq
{
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _anon0
{
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

struct _anon1
{
};

struct asset_type_1
{
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

enum state_enum
{
	STATE_INVALID = 0xffffffff,
	STATE_BEGIN,
	STATE_DESCRIPTION,
	STATE_REMINDER,
	STATE_SUCCESS,
	STATE_FAILURE,
	STATE_END,
	MAX_STATE
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
talk_callback* tcb;
_class_4 shared;
_anon0 __vt__Q28ztaskbox13talk_callback;
_anon1 __vt__Q28ztalkbox8callback;
void(*cb_dispatch)(xBase*, xBase*, uint32, float32*, xBase*, uint32);

void cb_dispatch(xBase* to, uint32 event);
void on_talk_stop();
uint8 is_running();
void set_state(state_enum state);
void load(xBase& data, xDynAsset& asset);
void init();
void stop_talk();
void start_talk(base* npc);
void write(xSerial& s);
void read(xSerial& s);
void load(asset_type_0& a);
void on_start();
void on_stop();
void on_answer(answer_enum answer);

// cb_dispatch__8ztaskboxFP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x479fe0
void ztaskbox::cb_dispatch(xBase* to, uint32 event)
{
	ztaskbox& e;
	// Line 338, Address: 0x479fe0, Func Offset: 0
	// Line 343, Address: 0x479fe4, Func Offset: 0x4
	// Line 338, Address: 0x479fe8, Func Offset: 0x8
	// Line 343, Address: 0x479ff0, Func Offset: 0x10
	// Line 346, Address: 0x47a060, Func Offset: 0x80
	// Line 347, Address: 0x47a0a8, Func Offset: 0xc8
	// Line 349, Address: 0x47a0b0, Func Offset: 0xd0
	// Line 350, Address: 0x47a0bc, Func Offset: 0xdc
	// Line 352, Address: 0x47a0c4, Func Offset: 0xe4
	// Line 353, Address: 0x47a0d0, Func Offset: 0xf0
	// Line 355, Address: 0x47a0d8, Func Offset: 0xf8
	// Line 356, Address: 0x47a0f0, Func Offset: 0x110
	// Line 358, Address: 0x47a0fc, Func Offset: 0x11c
	// Line 359, Address: 0x47a128, Func Offset: 0x148
	// Line 361, Address: 0x47a134, Func Offset: 0x154
	// Line 372, Address: 0x47a160, Func Offset: 0x180
	// Line 346, Address: 0x47a168, Func Offset: 0x188
	// Line 372, Address: 0x47a16c, Func Offset: 0x18c
	// Line 346, Address: 0x47a178, Func Offset: 0x198
	// Line 372, Address: 0x47a190, Func Offset: 0x1b0
	// Line 373, Address: 0x47a1a0, Func Offset: 0x1c0
	// Func End, Address: 0x47a1b0, Func Offset: 0x1d0
}

// on_talk_stop__8ztaskboxFQ28ztalkbox11answer_enum
// Start address: 0x47a1b0
void ztaskbox::on_talk_stop()
{
	// Line 293, Address: 0x47a1b0, Func Offset: 0
	// Line 295, Address: 0x47a1b4, Func Offset: 0x4
	// Line 293, Address: 0x47a1b8, Func Offset: 0x8
	// Line 295, Address: 0x47a1bc, Func Offset: 0xc
	// Line 293, Address: 0x47a1c0, Func Offset: 0x10
	// Line 295, Address: 0x47a1c4, Func Offset: 0x14
	// Line 296, Address: 0x47a1d4, Func Offset: 0x24
	// Line 299, Address: 0x47a200, Func Offset: 0x50
	// Line 300, Address: 0x47a208, Func Offset: 0x58
	// Line 302, Address: 0x47a210, Func Offset: 0x60
	// Line 303, Address: 0x47a218, Func Offset: 0x68
	// Line 305, Address: 0x47a220, Func Offset: 0x70
	// Line 306, Address: 0x47a240, Func Offset: 0x90
	// Line 307, Address: 0x47a248, Func Offset: 0x98
	// Line 314, Address: 0x47a250, Func Offset: 0xa0
	// Line 318, Address: 0x47a26c, Func Offset: 0xbc
	// Line 319, Address: 0x47a284, Func Offset: 0xd4
	// Func End, Address: 0x47a294, Func Offset: 0xe4
}

// is_running__8ztaskboxCFv
// Start address: 0x47a2a0
uint8 is_running()
{
	// Line 275, Address: 0x47a2a0, Func Offset: 0
	// Line 278, Address: 0x47a2a4, Func Offset: 0x4
	// Line 281, Address: 0x47a2b8, Func Offset: 0x18
	// Func End, Address: 0x47a2c0, Func Offset: 0x20
}

// set_state__8ztaskboxFQ28ztaskbox10state_enum
// Start address: 0x47a2c0
void ztaskbox::set_state(state_enum state)
{
	// Line 244, Address: 0x47a2c0, Func Offset: 0
	// Line 248, Address: 0x47a2c4, Func Offset: 0x4
	// Line 244, Address: 0x47a2c8, Func Offset: 0x8
	// Line 246, Address: 0x47a2d0, Func Offset: 0x10
	// Line 248, Address: 0x47a2d8, Func Offset: 0x18
	// Line 251, Address: 0x47a2fc, Func Offset: 0x3c
	// Line 252, Address: 0x47a328, Func Offset: 0x68
	// Line 253, Address: 0x47a330, Func Offset: 0x70
	// Line 255, Address: 0x47a338, Func Offset: 0x78
	// Line 256, Address: 0x47a364, Func Offset: 0xa4
	// Line 257, Address: 0x47a36c, Func Offset: 0xac
	// Line 261, Address: 0x47a374, Func Offset: 0xb4
	// Line 262, Address: 0x47a3a0, Func Offset: 0xe0
	// Line 263, Address: 0x47a3a8, Func Offset: 0xe8
	// Line 265, Address: 0x47a3b0, Func Offset: 0xf0
	// Line 266, Address: 0x47a3dc, Func Offset: 0x11c
	// Line 267, Address: 0x47a3e4, Func Offset: 0x124
	// Line 269, Address: 0x47a3ec, Func Offset: 0x12c
	// Line 272, Address: 0x47a44c, Func Offset: 0x18c
	// Func End, Address: 0x47a45c, Func Offset: 0x19c
}

// load__8ztaskboxFR5xBaseR9xDynAssetUi
// Start address: 0x47a460
void ztaskbox::load(xBase& data, xDynAsset& asset)
{
	// Line 234, Address: 0x47a460, Func Offset: 0
	// Func End, Address: 0x47a468, Func Offset: 0x8
}

// init__8ztaskboxFv
// Start address: 0x47a470
void ztaskbox::init()
{
	int8 @4959;
	talk_callback tcb;
	// Line 227, Address: 0x47a470, Func Offset: 0
	// Line 228, Address: 0x47a47c, Func Offset: 0xc
	// Line 229, Address: 0x47a484, Func Offset: 0x14
	// Line 227, Address: 0x47a49c, Func Offset: 0x2c
	// Line 229, Address: 0x47a4a8, Func Offset: 0x38
	// Func End, Address: 0x47a4b0, Func Offset: 0x40
}

// stop_talk__8ztaskboxFv
// Start address: 0x47a4b0
void ztaskbox::stop_talk()
{
	ztalkbox* talk;
	// Line 136, Address: 0x47a4b0, Func Offset: 0
	// Line 137, Address: 0x47a4bc, Func Offset: 0xc
	// Line 138, Address: 0x47a4c4, Func Offset: 0x14
	// Line 139, Address: 0x47a4dc, Func Offset: 0x2c
	// Line 140, Address: 0x47a4f8, Func Offset: 0x48
	// Line 143, Address: 0x47a50c, Func Offset: 0x5c
	// Line 144, Address: 0x47a51c, Func Offset: 0x6c
	// Line 147, Address: 0x47a524, Func Offset: 0x74
	// Line 149, Address: 0x47a52c, Func Offset: 0x7c
	// Line 150, Address: 0x47a530, Func Offset: 0x80
	// Func End, Address: 0x47a53c, Func Offset: 0x8c
}

// start_talk__8ztaskboxFPQ24zNPC4base
// Start address: 0x47a540
void ztaskbox::start_talk(base* npc)
{
	ztalkbox* talk;
	// Line 108, Address: 0x47a540, Func Offset: 0
	// Line 109, Address: 0x47a560, Func Offset: 0x20
	// Line 110, Address: 0x47a568, Func Offset: 0x28
	// Line 112, Address: 0x47a570, Func Offset: 0x30
	// Line 113, Address: 0x47a578, Func Offset: 0x38
	// Line 114, Address: 0x47a584, Func Offset: 0x44
	// Line 116, Address: 0x47a58c, Func Offset: 0x4c
	// Line 117, Address: 0x47a5ac, Func Offset: 0x6c
	// Line 118, Address: 0x47a5bc, Func Offset: 0x7c
	// Line 122, Address: 0x47a5c4, Func Offset: 0x84
	// Line 123, Address: 0x47a5d4, Func Offset: 0x94
	// Line 126, Address: 0x47a5dc, Func Offset: 0x9c
	// Line 127, Address: 0x47a618, Func Offset: 0xd8
	// Line 129, Address: 0x47a620, Func Offset: 0xe0
	// Line 132, Address: 0x47a624, Func Offset: 0xe4
	// Line 129, Address: 0x47a628, Func Offset: 0xe8
	// Line 131, Address: 0x47a62c, Func Offset: 0xec
	// Line 132, Address: 0x47a634, Func Offset: 0xf4
	// Line 133, Address: 0x47a640, Func Offset: 0x100
	// Line 126, Address: 0x47a650, Func Offset: 0x110
	// Line 133, Address: 0x47a654, Func Offset: 0x114
	// Line 126, Address: 0x47a65c, Func Offset: 0x11c
	// Line 133, Address: 0x47a668, Func Offset: 0x128
	// Line 126, Address: 0x47a670, Func Offset: 0x130
	// Line 133, Address: 0x47a674, Func Offset: 0x134
	// Line 126, Address: 0x47a684, Func Offset: 0x144
	// Line 133, Address: 0x47a68c, Func Offset: 0x14c
	// Func End, Address: 0x47a6a8, Func Offset: 0x168
}

// write__8ztaskboxFR7xSerial
// Start address: 0x47a6b0
void ztaskbox::write(xSerial& s)
{
	// Line 104, Address: 0x47a6b0, Func Offset: 0
	// Func End, Address: 0x47a6c0, Func Offset: 0x10
}

// read__8ztaskboxFR7xSerial
// Start address: 0x47a6c0
void ztaskbox::read(xSerial& s)
{
	uint8 state;
	// Line 94, Address: 0x47a6c0, Func Offset: 0
	// Line 96, Address: 0x47a6cc, Func Offset: 0xc
	// Line 97, Address: 0x47a6d4, Func Offset: 0x14
	// Line 96, Address: 0x47a6d8, Func Offset: 0x18
	// Line 97, Address: 0x47a6dc, Func Offset: 0x1c
	// Line 98, Address: 0x47a6e4, Func Offset: 0x24
	// Line 99, Address: 0x47a6f0, Func Offset: 0x30
	// Func End, Address: 0x47a700, Func Offset: 0x40
}

// load__8ztaskboxFRCQ28ztaskbox10asset_type
// Start address: 0x47a700
void ztaskbox::load(asset_type_0& a)
{
	// Line 71, Address: 0x47a700, Func Offset: 0
	// Line 72, Address: 0x47a714, Func Offset: 0x14
	// Line 73, Address: 0x47a71c, Func Offset: 0x1c
	// Line 75, Address: 0x47a720, Func Offset: 0x20
	// Line 73, Address: 0x47a724, Func Offset: 0x24
	// Line 75, Address: 0x47a728, Func Offset: 0x28
	// Line 74, Address: 0x47a72c, Func Offset: 0x2c
	// Line 75, Address: 0x47a730, Func Offset: 0x30
	// Line 76, Address: 0x47a734, Func Offset: 0x34
	// Line 78, Address: 0x47a744, Func Offset: 0x44
	// Line 77, Address: 0x47a748, Func Offset: 0x48
	// Line 78, Address: 0x47a74c, Func Offset: 0x4c
	// Line 86, Address: 0x47a754, Func Offset: 0x54
	// Line 87, Address: 0x47a76c, Func Offset: 0x6c
	// Line 89, Address: 0x47a770, Func Offset: 0x70
	// Line 90, Address: 0x47a778, Func Offset: 0x78
	// Line 89, Address: 0x47a77c, Func Offset: 0x7c
	// Line 90, Address: 0x47a788, Func Offset: 0x88
	// Line 91, Address: 0x47a790, Func Offset: 0x90
	// Line 80, Address: 0x47a79c, Func Offset: 0x9c
	// Line 81, Address: 0x47a7a4, Func Offset: 0xa4
	// Line 80, Address: 0x47a7ac, Func Offset: 0xac
	// Line 91, Address: 0x47a7b4, Func Offset: 0xb4
	// Line 83, Address: 0x47a7bc, Func Offset: 0xbc
	// Line 91, Address: 0x47a7c4, Func Offset: 0xc4
	// Line 90, Address: 0x47a7c8, Func Offset: 0xc8
	// Line 91, Address: 0x47a7d4, Func Offset: 0xd4
	// Func End, Address: 0x47a7e4, Func Offset: 0xe4
}

// on_start__Q28ztaskbox13talk_callbackFv
// Start address: 0x47a7f0
void talk_callback::on_start()
{
	// Line 45, Address: 0x47a7f0, Func Offset: 0
	// Line 47, Address: 0x47a7f4, Func Offset: 0x4
	// Line 45, Address: 0x47a7f8, Func Offset: 0x8
	// Line 47, Address: 0x47a7fc, Func Offset: 0xc
	// Line 48, Address: 0x47a830, Func Offset: 0x40
	// Func End, Address: 0x47a83c, Func Offset: 0x4c
}

// on_stop__Q28ztaskbox13talk_callbackFv
// Start address: 0x47a840
void talk_callback::on_stop()
{
	// Line 52, Address: 0x47a840, Func Offset: 0
	// Func End, Address: 0x47a84c, Func Offset: 0xc
}

// on_answer__Q28ztaskbox13talk_callbackFQ28ztalkbox11answer_enum
// Start address: 0x47a850
void talk_callback::on_answer(answer_enum answer)
{
	// Line 57, Address: 0x47a850, Func Offset: 0
	// Func End, Address: 0x47a858, Func Offset: 0x8
}

