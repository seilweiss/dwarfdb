typedef struct xCylinder;
typedef struct RwV3d;
typedef struct xModelBucket;
typedef struct xGroup;
typedef struct xMemPool;
typedef struct sphericalEmitter;
typedef struct RpInterpolator;
typedef struct xAnimPhysicsData;
typedef struct RpAtomic;
typedef struct xMat3x3;
typedef enum RxNodeDefEditable;
typedef struct xEntDrive;
typedef struct RpLight;
typedef struct iFogParams;
typedef struct xBox;
typedef struct xSurface;
typedef struct xJSPNodeTreeLeaf;
typedef struct xAnimFile;
typedef struct xAnimTable;
typedef struct xVec3;
typedef struct xUpdateCullMgr;
typedef enum RwFogType;
typedef struct RpTie;
typedef struct sphericalEmitterAsset;
typedef struct rxHeapBlockHeader;
typedef struct xJSPNodeTree;
typedef struct xClumpCollBSPBranchNode;
typedef struct xModelInstance;
typedef struct RxIoSpec;
typedef struct xFFX;
typedef struct xJSPNodeLight;
typedef struct _tagiPad;
typedef struct xLightKit;
typedef struct xEntAsset;
typedef struct RwBBox;
typedef struct RpWorld;
typedef struct RwRaster;
typedef struct RxPacket;
typedef struct xAnimTransition;
typedef struct xEnt;
typedef struct _zEnv;
typedef struct xLightKitLight;
typedef struct RxOutputSpec;
typedef struct xAnimState;
typedef struct xBBox;
typedef struct xUpdateCullEnt;
typedef struct xEnvAsset;
typedef struct xJSPNodeTreeBranch;
typedef struct effectAsset;
typedef struct RwMatrixTag;
typedef struct RwSphere;
typedef struct RpWorldSector;
typedef struct mblur_data;
typedef struct _tagxPad;
typedef struct effect;
typedef struct jump;
typedef struct xBase;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct boxEmitterAsset;
typedef enum RxClusterValid;
typedef struct xAnimTransitionList;
typedef struct RpSector;
typedef struct xUpdateCullGroup;
typedef struct tri_data_0;
typedef struct xBound;
typedef struct xGrid;
typedef struct RxPipelineCluster;
typedef struct xCamGroup;
typedef enum RxClusterValidityReq;
typedef struct xScene;
typedef struct RpGeometry;
typedef struct xCollis;
typedef struct _class_0;
typedef struct iEnvMatOrder;
typedef struct RxClusterRef;
typedef struct xEntCollis;
typedef struct xGridBound;
typedef struct zSlideCam;
typedef struct xEntFrame;
typedef enum sceDemoEndReason;
typedef struct xVec2;
typedef struct xCamScreen;
typedef struct xDynAsset;
typedef struct emitterBase;
typedef struct xAnimEffect;
typedef struct xJSPHeader;
typedef struct xAnimMultiFileEntry;
typedef struct xLinkAsset;
typedef struct xClumpCollBSPTriangle;
typedef struct xQCData;
typedef struct RpMaterialList;
typedef struct analog_data;
typedef struct RwFrame;
typedef struct RpMorphTarget;
typedef struct xJSPNodeInfo;
typedef struct xAnimActiveEffect;
typedef struct boxEmitter;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct xAnimPlay;
typedef struct RwRGBA;
typedef struct xPortalAsset;
typedef struct zScene;
typedef struct _zPortal;
typedef struct xBaseAsset;
typedef struct xOneLinerManager;
typedef struct tri_data_1;
typedef struct xAnimSingle;
typedef struct xGlobals;
typedef struct RpMaterial;
typedef struct iEnv;
typedef struct RxNodeMethods;
typedef struct xGroupAsset;
typedef struct _anon0;
typedef struct xAnimMultiFileBase;
typedef struct xShadowSimplePoly;
typedef struct xModelPool;
typedef struct RwResEntry;
typedef struct xModelPipe;
typedef struct xJSPMiniLightTie;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct RwSurfaceProperties;
typedef struct zPlayer;
typedef struct zSceneParameters;
typedef struct activity_data;
typedef struct xAnimMultiFile;
typedef struct _class_1;
typedef struct RxPipelineNode;
typedef struct xClumpCollBSPVertInfo;
typedef struct xShadowSimpleCache;
typedef struct PS2DemoGlobals;
typedef struct xClumpCollBSPTree;
typedef struct xQuat;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct xModelBlur;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct xMat4x3;
typedef enum iSndHandle;
typedef struct Incredimeter;
typedef struct _anon1;
typedef struct RxPipelineNodeParam;
typedef enum _tagPadState;
typedef struct RwTexDictionary;
typedef struct _anon2;
typedef struct xEnv;
typedef struct rxReq;
typedef struct BossMeter;
typedef struct xVec4;
typedef struct _class_2;
typedef struct _anon3;
typedef struct RwTexCoords;
typedef struct xModelAssetParam;
typedef struct FamilyMeter;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntShadow;
typedef struct RxHeap;
typedef struct anim_coll_data;
typedef struct zEnt;
typedef struct RwLinkList;
typedef struct _tagPadAnalog;
typedef struct RxNodeDefinition;
typedef struct config_data;
typedef struct RpTriangle;
typedef struct xRot;
typedef struct xSphere;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;
typedef struct RxClusterDefinition;

typedef void(*type_0)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_1)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_4)(xMemPool*, void*);
typedef void(*type_5)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpAtomic*(*type_15)(RpAtomic*);
typedef RpWorldSector*(*type_16)(RpWorldSector*);
typedef void(*type_19)(void*);
typedef void(*type_21)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_23)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_25)(xEnt*, xScene*, float32, xEntFrame*);
typedef xBase*(*type_26)(uint32);
typedef int8*(*type_29)(xBase*);
typedef void(*type_30)(xEnt*, xScene*, float32);
typedef uint32(*type_31)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_32)(xEnt*);
typedef int8*(*type_33)(uint32);
typedef uint32(*type_35)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_36)(xEnt*);
typedef void(*type_42)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_44)(xEnt*, xVec3*);
typedef uint32(*type_46)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_48)(RwResEntry*);
typedef int32(*type_49)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_50)(RwObjectHasFrame*);
typedef void(*type_51)(RxPipelineNode*);
typedef int32(*type_56)(RxPipelineNode*);
typedef uint32(*type_58)(void*, void*);
typedef void(*type_59)(RxNodeDefinition*);
typedef int32(*type_61)(RxNodeDefinition*);
typedef void(*type_62)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_65)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_67)(xAnimPlay*, xAnimState*, void*);
typedef RpClump*(*type_69)(RpClump*, void*);

typedef int8 type_2[128];
typedef int8 type_3[128][6];
typedef uint16 type_6[3];
typedef int8 type_7[16];
typedef int8 type_8[32];
typedef float32 type_9[3];
typedef float32 type_10[2];
typedef uint8 type_11[22];
typedef float32 type_12[4];
typedef uint32 type_13[4];
typedef uint8 type_14[22];
typedef RxCluster type_17[1];
typedef uint32 type_18[4];
typedef uint8 type_20[2];
typedef float32 type_22[2];
typedef float32 type_24[22];
typedef float32 type_27[22];
typedef RwTexCoords* type_28[8];
typedef int8 type_34[16];
typedef analog_data type_37[2];
typedef uint32 type_38[1];
typedef int32 type_39[140];
typedef xVec3 type_40[3];
typedef xVec4 type_41[12];
typedef xBase* type_43[140];
typedef int8 type_45[32];
typedef uint8 type_47[3];
typedef xAnimMultiFileEntry type_52[1];
typedef int8 type_53[32];
typedef int8 type_54[32];
typedef int8 type_55[127];
typedef xCollis type_57[18];
typedef RpLight* type_60[2];
typedef int8 type_63[16];
typedef RwFrame* type_64[2];
typedef xJSPMiniLightTie type_66[16];
typedef _tagxPad* type_68[4];
typedef RwTexCoords* type_70[8];
typedef int8 type_71[4];
typedef float32 type_72[4];
typedef float32 type_73[4];
typedef xSphere type_74[5];
typedef xVec3 type_75[4];
typedef float32 type_76[16];
typedef xVec3 type_77[4];

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct sphericalEmitter : emitterBase
{
	sphericalEmitterAsset* pAsset;
	float32 radiusSqrd;

	void UpdatePosition(xVec3& playerPos);
	uint8 GetIntensity(xVec3& playerPos, float32& intensity);
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

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xSurface
{
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
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

struct xAnimTable
{
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
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

struct sphericalEmitterAsset : xDynAsset
{
	uint32 effectID;
	float32 radius;
	xVec3 position;
	uint8 onlyRumbleOnY;
	uint8 fallOff;
	uint8 onlyOnFloor;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
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

struct xFFX
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

struct _tagiPad
{
	int32 port;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct effectAsset : xDynAsset
{
	float32 time;
	float32 intensity;
	uint32 id;
	uint8 priority;
	uint8 type;
	uint8 rumbleInPause;
	uint8 pad;
	float32 param1;
	float32 param2;
	float32 shakeMagnitude;
	float32 shakeCycleMax;
	float32 shakeRotationalMagnitude;
	uint8 shakeY;

	float32 GetIntensity(float32 currentTime, float32 totalTime);
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

struct mblur_data
{
	config_data cfg;
	xModelBlur blur;
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

struct effect : emitterBase
{

	uint8 GetIntensity(float32& intensity);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
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

struct boxEmitterAsset : xDynAsset
{
	uint32 effectID;
	xVec3 minCorner;
	xVec3 maxCorner;
	uint8 onlyOnFloor;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RpSector
{
	int32 type;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
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

struct xGrid
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xCamGroup
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _class_0
{
	xVec3* verts;
};

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct zSlideCam
{
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

struct xVec2
{
	float32 x;
	float32 y;
};

struct xCamScreen
{
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct emitterBase : xBase
{
	effectAsset* pEffectAsset;

	void SetIntensity(float32 intensity);
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct boxEmitter : emitterBase
{
	boxEmitterAsset* pAsset;

	uint8 GetIntensity(xVec3& playerPos, float32& intensity);
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xOneLinerManager
{
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct _anon0
{
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct activity_data
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct xModelBlur
{
	activity_data* activity;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

enum iSndHandle
{
};

struct Incredimeter
{
};

struct _anon1
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _anon2
{
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct rxReq
{
};

struct BossMeter
{
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct _anon3
{
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xModelAssetParam
{
};

struct FamilyMeter
{
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct anim_coll_data
{
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

int8 buffer[16];
int8 buffer[16];
float32 scale;
_anon0 __vt__Q27xRumble16sphericalEmitter;
xGlobals* xglobals;
void(*emitter_EventCB)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
_anon3 __vt__Q27xRumble11emitterBase;
_anon2 __vt__Q27xRumble10boxEmitter;
_anon1 __vt__Q27xRumble6effect;

void UpdatePosition(xVec3& playerPos);
uint8 GetIntensity(xVec3& playerPos, float32& intensity);
void Init(xBase& data, xDynAsset& asset);
uint8 GetIntensity(xVec3& playerPos, float32& intensity);
void Init(xBase& data, xDynAsset& asset);
void Init(xBase& data, xDynAsset& asset);
float32 GetIntensity(float32 currentTime, float32 totalTime);
void emitter_EventCB(xBase* to, uint32 toEvent, float32* toParam);

// UpdatePosition__Q27xRumble16sphericalEmitterCFRC5xVec3
// Start address: 0x2c3ea0
void sphericalEmitter::UpdatePosition(xVec3& playerPos)
{
	// Line 223, Address: 0x2c3ea0, Func Offset: 0
	// Line 224, Address: 0x2c3eb8, Func Offset: 0x18
	// Func End, Address: 0x2c3ec0, Func Offset: 0x20
}

// GetIntensity__Q27xRumble16sphericalEmitterCFRC5xVec3Rf
// Start address: 0x2c3ec0
uint8 sphericalEmitter::GetIntensity(xVec3& playerPos, float32& intensity)
{
	// Line 193, Address: 0x2c3ec0, Func Offset: 0
	// Line 194, Address: 0x2c3ec4, Func Offset: 0x4
	// Line 193, Address: 0x2c3ec8, Func Offset: 0x8
	// Line 194, Address: 0x2c3ecc, Func Offset: 0xc
	// Line 195, Address: 0x2c3ed4, Func Offset: 0x14
	// Line 194, Address: 0x2c3ed8, Func Offset: 0x18
	// Line 195, Address: 0x2c3f00, Func Offset: 0x40
	// Line 199, Address: 0x2c3f0c, Func Offset: 0x4c
	// Line 200, Address: 0x2c3f50, Func Offset: 0x90
	// Line 203, Address: 0x2c3f58, Func Offset: 0x98
	// Line 211, Address: 0x2c3f64, Func Offset: 0xa4
	// Line 213, Address: 0x2c3f70, Func Offset: 0xb0
	// Line 217, Address: 0x2c3fa0, Func Offset: 0xe0
	// Line 197, Address: 0x2c3fa8, Func Offset: 0xe8
	// Line 217, Address: 0x2c3fb0, Func Offset: 0xf0
	// Line 203, Address: 0x2c3fbc, Func Offset: 0xfc
	// Line 217, Address: 0x2c3fc0, Func Offset: 0x100
	// Line 203, Address: 0x2c3fc8, Func Offset: 0x108
	// Line 217, Address: 0x2c3fcc, Func Offset: 0x10c
	// Line 203, Address: 0x2c3fd4, Func Offset: 0x114
	// Line 217, Address: 0x2c3fd8, Func Offset: 0x118
	// Line 208, Address: 0x2c3fe0, Func Offset: 0x120
	// Line 217, Address: 0x2c3fe8, Func Offset: 0x128
	// Line 218, Address: 0x2c3ff8, Func Offset: 0x138
	// Func End, Address: 0x2c4000, Func Offset: 0x140
}

// Init__Q27xRumble16sphericalEmitterFR5xBaseR9xDynAssetUi
// Start address: 0x2c4000
void Init(xBase& data, xDynAsset& asset)
{
	// Line 174, Address: 0x2c4000, Func Offset: 0
	// Line 176, Address: 0x2c4014, Func Offset: 0x14
	// Line 177, Address: 0x2c4058, Func Offset: 0x58
	// Func End, Address: 0x2c406c, Func Offset: 0x6c
}

// GetIntensity__Q27xRumble10boxEmitterCFRC5xVec3Rf
// Start address: 0x2c4070
uint8 boxEmitter::GetIntensity(xVec3& playerPos, float32& intensity)
{
	// Line 155, Address: 0x2c4070, Func Offset: 0
	// Line 156, Address: 0x2c4078, Func Offset: 0x8
	// Line 160, Address: 0x2c4084, Func Offset: 0x14
	// Line 165, Address: 0x2c4144, Func Offset: 0xd4
	// Line 156, Address: 0x2c415c, Func Offset: 0xec
	// Line 165, Address: 0x2c4160, Func Offset: 0xf0
	// Line 158, Address: 0x2c4168, Func Offset: 0xf8
	// Line 165, Address: 0x2c4170, Func Offset: 0x100
	// Line 163, Address: 0x2c4184, Func Offset: 0x114
	// Line 165, Address: 0x2c4188, Func Offset: 0x118
	// Line 167, Address: 0x2c4190, Func Offset: 0x120
	// Func End, Address: 0x2c4198, Func Offset: 0x128
}

// Init__Q27xRumble10boxEmitterFR5xBaseR9xDynAssetUi
// Start address: 0x2c41a0
void Init(xBase& data, xDynAsset& asset)
{
	// Line 135, Address: 0x2c41a0, Func Offset: 0
	// Line 138, Address: 0x2c41b4, Func Offset: 0x14
	// Line 139, Address: 0x2c41ec, Func Offset: 0x4c
	// Func End, Address: 0x2c4200, Func Offset: 0x60
}

// Init__Q27xRumble6effectFR5xBaseR9xDynAssetUi
// Start address: 0x2c4200
void Init(xBase& data, xDynAsset& asset)
{
	// Line 103, Address: 0x2c4200, Func Offset: 0
	// Line 105, Address: 0x2c4214, Func Offset: 0x14
	// Line 106, Address: 0x2c423c, Func Offset: 0x3c
	// Func End, Address: 0x2c4250, Func Offset: 0x50
}

// GetIntensity__Q27xRumble11effectAssetCFff
// Start address: 0x2c4250
float32 effectAsset::GetIntensity(float32 currentTime, float32 totalTime)
{
	float32 pulsePeriod;
	// Line 62, Address: 0x2c4250, Func Offset: 0
	// Line 63, Address: 0x2c4254, Func Offset: 0x4
	// Line 65, Address: 0x2c4294, Func Offset: 0x44
	// Line 70, Address: 0x2c42a4, Func Offset: 0x54
	// Line 68, Address: 0x2c42a8, Func Offset: 0x58
	// Line 70, Address: 0x2c42ac, Func Offset: 0x5c
	// Line 68, Address: 0x2c42b4, Func Offset: 0x64
	// Line 70, Address: 0x2c42b8, Func Offset: 0x68
	// Line 77, Address: 0x2c434c, Func Offset: 0xfc
	// Line 82, Address: 0x2c43a0, Func Offset: 0x150
	// Line 90, Address: 0x2c43d8, Func Offset: 0x188
	// Line 96, Address: 0x2c440c, Func Offset: 0x1bc
	// Line 98, Address: 0x2c4410, Func Offset: 0x1c0
	// Func End, Address: 0x2c441c, Func Offset: 0x1cc
}

// emitter_EventCB__28@unnamed@xRumbleEmitter_cpp@FP5xBaseP5xBaseUiPCfP5xBaseUi
// Start address: 0x2c4420
void emitter_EventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	// Line 35, Address: 0x2c4420, Func Offset: 0
	// Line 36, Address: 0x2c4424, Func Offset: 0x4
	// Line 35, Address: 0x2c4428, Func Offset: 0x8
	// Line 36, Address: 0x2c4438, Func Offset: 0x18
	// Line 43, Address: 0x2c4454, Func Offset: 0x34
	// Line 44, Address: 0x2c44b8, Func Offset: 0x98
	// Line 52, Address: 0x2c44c0, Func Offset: 0xa0
	// Line 56, Address: 0x2c4524, Func Offset: 0x104
	// Func End, Address: 0x2c4538, Func Offset: 0x118
}
