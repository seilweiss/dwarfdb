typedef struct xModelInstance;
typedef struct zReactiveAnimationData;
typedef struct asset_type;
typedef struct zSimpleMgr;
typedef struct xLightKitLight;
typedef struct RxClusterDefinition;
typedef struct xQuat;
typedef struct zEntSimpleObj;
typedef struct xModelPool;
typedef struct xAnimTransition;
typedef struct RwV3d;
typedef struct _zPortal;
typedef struct zReactiveGenre;
typedef struct analog_data;
typedef struct zPlayerSettings;
typedef struct RpInterpolator;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef struct xModelPipe;
typedef struct xAnimEffect;
typedef struct xBase;
typedef struct xAnimSingle;
typedef struct xJSPNodeTreeLeaf;
typedef struct xEntBoulder;
typedef enum RwFogType;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct xSpline3;
typedef struct xAnimPlay;
typedef struct xUpdateCullMgr;
typedef struct xJSPNodeTree;
typedef struct xClumpCollBSPBranchNode;
typedef struct xAnimMultiFile;
typedef struct RxIoSpec;
typedef struct asset_entry;
typedef struct xJSPNodeLight;
typedef struct xAnimFile;
typedef struct zEntHangable;
typedef struct xAnimState;
typedef struct RwBBox;
typedef struct RpWorld;
typedef struct xRay3;
typedef struct RwRaster;
typedef struct zLasso;
typedef struct RpAtomic;
typedef struct xVec4;
typedef struct property_set;
typedef struct xVec3;
typedef struct RxPacket;
typedef struct RwPlane;
typedef struct xAnimTable;
typedef struct xMat4x3;
typedef struct _zEnv;
typedef struct RxOutputSpec;
typedef enum xSndEffect;
typedef struct xMemPool;
typedef enum _zPlayerType;
typedef struct zSceneParameters;
typedef struct xUpdateCullEnt;
typedef struct xEntAsset;
typedef struct xJSPNodeTreeBranch;
typedef struct xEnt;
typedef struct RwMatrixTag;
typedef struct xGroup;
typedef struct xScene;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct xQCControl;
typedef struct xCoef3;
typedef struct xEntCollis;
typedef struct xBBox;
typedef struct xSphere;
typedef struct RxCluster;
typedef struct xGroupAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xGridIterator;
typedef struct xEntFrame;
typedef enum RxClusterValid;
typedef struct xDynAsset;
typedef struct RpSector;
typedef struct xGridBound;
typedef struct xLinkAsset;
typedef struct spawn_data;
typedef struct xCylinder;
typedef struct zCheckPoint;
typedef struct xGrid;
typedef struct xBound;
typedef struct xRot;
typedef struct xQCData;
typedef struct check_ray;
typedef struct xBox;
typedef struct xAnimTransitionList;
typedef struct RwV2d;
typedef struct xCollis;
typedef struct iFogParams;
typedef struct RxPipelineCluster;
typedef struct xBaseAsset;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct xCamGroup;
typedef struct xCamera;
typedef struct RxClusterRef;
typedef struct xMat3x3;
typedef struct check_bound;
typedef struct xUpdateCullGroup;
typedef struct iEnvMatOrder;
typedef enum sceDemoEndReason;
typedef struct RwCamera;
typedef struct xCamScreen;
typedef struct RpMaterialList;
typedef struct zPlatform;
typedef struct RwFrame;
typedef struct RpLight;
typedef struct RpMorphTarget;
typedef struct xShadowSimplePoly;
typedef struct tri_data_0;
typedef enum _tagPadState;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct zDestructible;
typedef struct RwRGBA;
typedef struct xJSPNodeInfo;
typedef struct xModelBucket;
typedef struct xTableAsset;
typedef struct xSurface;
typedef struct xAnimPhysicsData;
typedef struct xGlobals;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct iEnv;
typedef struct xEnvAsset;
typedef struct RwResEntry;
typedef struct xShadowSimpleCache;
typedef struct xLightKit;
typedef struct _tagPadAnalog;
typedef struct xVec2;
typedef enum zGlobalDemoType;
typedef struct RwTexture;
typedef struct RwObjectHasFrame;
typedef struct xEntDrive;
typedef struct xJSPMiniLightTie;
typedef struct xSimpleObjAsset;
typedef struct _class_0;
typedef enum rxEmbeddedPacketState;
typedef struct zGlobalSettings;
typedef struct zEnt;
typedef struct zPlayerLassoInfo;
typedef struct RwSurfaceProperties;
typedef struct zLedgeGrabParams;
typedef struct xCoef;
typedef struct RxPipelineNode;
typedef struct zScene;
typedef struct zPlayer;
typedef struct zRewardsMgr;
typedef struct _tagxPad;
typedef struct xClumpCollBSPVertInfo;
typedef struct xFFX;
typedef struct xJSPHeader;
typedef struct xClumpCollBSPTree;
typedef struct xPortalAsset;
typedef struct zJumpParam;
typedef struct zGlobals;
typedef struct PS2DemoGlobals;
typedef struct RwLLLink;
typedef enum _zPlayerWallJumpState;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct xEnv;
typedef struct _tagiPad;
typedef struct RxPipeline;
typedef struct xEntOpacity;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct xClumpCollBSPTriangle;
typedef struct xEntShadow;
typedef struct anim_coll_data;
typedef struct zCutsceneMgr;
typedef struct RxPipelineNodeParam;
typedef struct zAssetPickupTable;
typedef struct zPlayerGlobals;
typedef struct RwTexDictionary;
typedef struct tri_data_1;
typedef struct _class_1;
typedef struct rxReq;
typedef struct _class_2;
typedef struct xAnimMultiFileEntry;
typedef struct RwTexCoords;
typedef struct zPlayerCarryInfo;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimActiveEffect;
typedef struct RxHeap;
typedef struct xModelTag;
typedef enum iSndGroupHandle;
typedef struct RwLinkList;
typedef enum iSndHandle;
typedef struct RxNodeDefinition;
typedef enum zHitSource;
typedef struct xAnimMultiFileBase;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef uint32(*type_15)(xAnimTransition*, xAnimSingle*, void*);
typedef uint32(*type_24)(void*, void*);
typedef uint32(*type_26)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_30)(void*);
typedef void(*type_31)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_32)(RpAtomic*);
typedef void(*type_36)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef RpWorldSector*(*type_38)(RpWorldSector*);
typedef void(*type_41)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_44)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_46)(xAnimPlay*, xAnimState*, void*);
typedef xBase*(*type_47)(uint32);
typedef void(*type_48)(xEnt*, xScene*, float32);
typedef int8*(*type_49)(xBase*);
typedef uint32(*type_51)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_52)(xEnt*);
typedef int8*(*type_53)(uint32);
typedef void(*type_56)(xEnt*);
typedef void(*type_62)(xEnt*, xVec3*);
typedef RwCamera*(*type_63)(RwCamera*);
typedef uint32(*type_64)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_66)(RwCamera*);
typedef uint32(*type_68)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_71)(RwResEntry*);
typedef int32(*type_72)(RxPipelineNode*, RxPipeline*);
typedef void(*type_73)(xEnt*, xVec3*, xMat4x3*);
typedef RwObjectHasFrame*(*type_74)(RwObjectHasFrame*);
typedef void(*type_77)(RxPipelineNode*);
typedef int32(*type_81)(RxPipelineNode*);
typedef void(*type_83)(RxNodeDefinition*);
typedef int32(*type_86)(RxNodeDefinition*);
typedef int32(*type_93)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_100)(RpClump*, void*);
typedef void(*type_105)(xMemPool*, void*);
typedef void(*type_111)(xAnimPlay*, xAnimState*, void*);

typedef float32 type_0[22];
typedef uint32 type_1[1];
typedef RwV3d type_2[8];
typedef float32 type_3[4];
typedef float32 type_4[2];
typedef xModelTag type_5[2];
typedef float32 type_6[4];
typedef RwFrustumPlane type_7[6];
typedef int8 type_8[128];
typedef int8 type_9[128][6];
typedef uint16 type_10[3];
typedef asset_entry type_11[0];
typedef xEntBoulder* type_12[2];
typedef float32 type_13[6];
typedef uint8 type_14[10];
typedef float32 type_16[3];
typedef uint8 type_17[10];
typedef int8 type_18[16];
typedef uint32 type_19[2];
typedef int8 type_20[32];
typedef float32 type_21[3];
typedef xAnimMultiFileEntry type_22[1];
typedef int32 type_23[141];
typedef float32 type_25[3];
typedef xBase* type_27[141];
typedef analog_data type_28[2];
typedef uint32 type_29[4];
typedef float32 type_33[4];
typedef int8 type_34[16];
typedef xVec3 type_35[5];
typedef uint8 type_39[5];
typedef RxCluster type_40[1];
typedef uint8 type_42[3];
typedef xModelTag type_43[4];
typedef xEnt* type_45[161];
typedef uint8 type_50[3];
typedef uint32 type_54[59];
typedef xModelInstance* type_55[11];
typedef RwTexCoords* type_57[8];
typedef uint8 type_58[4];
typedef int8 type_59[16];
typedef float32 type_60[3];
typedef xVec3 type_61[3];
typedef xVec4 type_65[12];
typedef xVec4 type_67[12];
typedef xCollis type_69[18];
typedef int8 type_70[32];
typedef float32 type_75[4];
typedef uint8 type_76[3];
typedef int8 type_78[32];
typedef xVec3 type_79[60];
typedef int8 type_80[32];
typedef int8 type_82[127];
typedef xModelBucket** type_84[2];
typedef uint32 type_85[20];
typedef uint32 type_87[8];
typedef RpAtomic* type_88[2];
typedef uint32 type_89[20];
typedef uint8 type_90[22];
typedef RpLight* type_91[2];
typedef uint8 type_92[2];
typedef xJSPMiniLightTie type_94[16];
typedef uint8 type_95[22];
typedef RwFrame* type_96[2];
typedef float32 type_97[2];
typedef uint32 type_98[20];
typedef uint32 type_99[4];
typedef _tagxPad* type_101[4];
typedef float32 type_102[16];
typedef RwTexCoords* type_103[8];
typedef int8 type_104[32];
typedef xVec3 type_106[4];
typedef int8 type_107[4];
typedef zEntSimpleObj* type_108[16];
typedef float32 type_109[4];
typedef float32 type_110[22];

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

struct zReactiveAnimationData
{
	int32 kill_flags;
	zEntSimpleObj* owner;
	zReactiveGenre* genre;
	iSndHandle sound_idle_handle;
};

struct asset_type : xTableAsset
{
	asset_entry entries[0];
};

struct zSimpleMgr
{
	xSphere worldBound;
	float32 noRenderDist;
	float32 lodDist0;
	float32 fadeDist;
	uint32 flags;
	xModelBucket** lodBucket[2];
	RpAtomic* lodAtomic[2];
	RwMatrixTag* mat;
	xModelInstance* model;
	zEntSimpleObj* ent;
	xLightKit* lkit;
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

struct zEntSimpleObj : zEnt
{
	xSimpleObjAsset* sasset;
	uint32 sflags;
	zReactiveAnimationData* reactiveAnimationData;
	zReactiveGenre* reactGenre;
	zSimpleMgr* smgrExtra;
	void* anim;
	float32 animTime;
	RwMatrixTag* fastMatList;
	zDestructible* destructible;
	zSimpleMgr* smgr;
	xEntOpacity opacity;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zReactiveGenre
{
	RpAtomic* model_static;
	RpAtomic* model_bound;
	RpAtomic* model_burnt;
	iSndGroupHandle sound_idle;
	iSndGroupHandle sound_move_through;
	iSndGroupHandle sound_hit;
	xAnimTable* table;
	xAnimState* anim_idle;
	xAnimState* anim_move_through;
	xAnimState* anim_hit;
	xAnimState* anim_burn;
	float32 lod_dist2;
	float32 burn_fuel;
	float32 burn_flame_size;
	float32 burn_emit_scale;
	float32 move_through_radius2;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
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

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct xEntBoulder
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct asset_entry
{
	uint32 model_static;
	uint32 model_bound;
	float32 lod_dist;
	uint32 anim_idle;
	uint32 anim_move_through;
	uint32 anim_hit;
	uint32 sound_idle;
	uint32 sound_move_through;
	uint32 sound_hit;
	uint32 model_burnt;
	uint32 anim_burn;
	float32 burn_fuel;
	float32 burn_flame_size;
	float32 burn_emit_scale;
	float32 move_through_radius;
};

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
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

struct zEntHangable
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct property_set
{
	float32 damage;
	float32 knockback;
	iSndGroupHandle sound_group;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
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

struct xQCControl
{
	float32 world_xmin;
	float32 world_ymin;
	float32 world_zmin;
	float32 world_xmax;
	float32 world_ymax;
	float32 world_zmax;
	float32 world_xsz;
	float32 world_ysz;
	float32 world_zsz;
	float32 scale_x;
	float32 scale_y;
	float32 scale_z;
	float32 center_x;
	float32 center_y;
	float32 center_z;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	uint32 delfound;
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

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct RpSector
{
	int32 type;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct spawn_data
{
	uint32 flags;
	xVec3 loc;
	xVec3 up;
	float32 radius;
	float32 fuel;
	float32 heat;
	float32 heat_absorb;
	xEnt* driver;
	property_set* props;
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
};

struct xGrid
{
	uint8 ingrid_id;
	uint8 pad[3];
	uint16 nx;
	uint16 nz;
	float32 minx;
	float32 minz;
	float32 maxx;
	float32 maxz;
	float32 csizex;
	float32 csizez;
	float32 inv_csizex;
	float32 inv_csizez;
	float32 maxr;
	xGridBound** cells;
	xGridBound* other;
	int32 iter_active;
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

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct check_ray
{
	zEntSimpleObj** hit;
	zEntSimpleObj** end_hit;
	xRay3& ray;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct check_bound
{
	zEntSimpleObj** hit;
	zEntSimpleObj** end_hit;
	xBound& bound;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
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

struct xCamScreen
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct zPlatform
{
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

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct tri_data_0
{
	uint32 index;
	float32 r;
	float32 d;
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

struct zDestructible
{
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct xTableAsset : xBaseAsset
{
	uint32 version;
	uint32 numRows;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xVec2
{
	float32 x;
	float32 y;
};

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
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

struct xJSPMiniLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
};

struct xSimpleObjAsset
{
	float32 animSpeed;
	uint32 initAnimState;
	uint8 collType;
	uint8 flags;
};

struct _class_0
{
	float32 t;
	float32 u;
	float32 v;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct zPlayerLassoInfo
{
	float32 dist;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	zLasso lasso;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xCoef
{
	float32 a[4];
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

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
};

struct zRewardsMgr
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
};

struct xFFX
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND,
	k_WALLJUMP_STUCK,
	k_WALLJUMP_FALL
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct _tagiPad
{
	int32 port;
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

struct xEntOpacity
{
	float32 delta_opacity;
	float32 delta_opacity_2;
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

struct anim_coll_data
{
};

struct zCutsceneMgr
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
};

struct _class_1
{
	xVec3* verts;
};

struct rxReq
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

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

enum iSndGroupHandle
{
};

struct RwLinkList
{
	RwLLLink link;
};

enum iSndHandle
{
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

enum zHitSource
{
	zHS_EVENT,
	zHS_GENERAL,
	zHS_PROJECTILE,
	zHS_EXPLOSION,
	zHS_LASER,
	zHS_ENERGY,
	zHS_FIRE,
	zHS_SURFACE,
	zHS_MELEE_HIGH,
	zHS_MELEE_MID,
	zHS_MELEE_LOW,
	zHS_MELEE_UP,
	zHS_MELEE_BACK,
	zHS_MELEE_DIZZY,
	zHS_THROW,
	zHS_WATER,
	zHS_DEATHPLANE,
	zHS_INCREDI,
	zHS_KNOCKBACK,
	zHS_LASERBEAM,
	zHS_INFINITE_FALL,
	zHS_COUNT,
	zHS_FORCE_INT = 0xffffffff
};

struct xAnimMultiFileBase
{
	uint32 Count;
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
int32 total_reactives;
zReactiveGenre* genres;
int32 genres_size;
zReactiveAnimationData* activities;
int32 activities_size;
int32 activities_used;
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
xGlobals* xglobals;
zGlobals globals;
uint32 gActiveHeap;
uint32(*AlwaysConditional)(xAnimTransition*, xAnimSingle*, void*);
void(*xAnimDefaultBeforeEnter)(xAnimPlay*, xAnimState*, void*);

void zReactiveAddExtraSimpleMgr(zEntSimpleObj& ent, zSimpleMgr* smgr);
void zReactivePreBucket(zEntSimpleObj& ent);
uint8 zReactiveNeedExtraModel(zEntSimpleObj& ent);
int32 zReactiveCountExtraModels(zEntSimpleObj** ents, uint32 size);
uint8 zReactiveSelectLOD(zEntSimpleObj& ent, float32 dist2);
void zReactiveDeactivate(zEntSimpleObj& ent, uint8 immediate);
void zReactiveDamage(zEntSimpleObj& ent, zHitSource hs, float32 damage);
int32 zReactiveHitTestSphere(zEntSimpleObj** hits, int32 max_hits, xSphere& sphere);
void zReactiveRender();
void zReactiveUpdate(float32 dt);
void zReactiveReset();
void zReactiveSceneEnter();
void apply_fire_damage(zEntSimpleObj& ent);
void play_anim(zEntSimpleObj& ent, xAnimState* state, float32 speed, uint8 force_restart);
uint8 update_activity(zReactiveAnimationData& react, float32 dt);
uint8 activate_entity(zEntSimpleObj& ent, zReactiveGenre& genre);
void setup_entities();
void load_genres();
void load_genre(zReactiveGenre& genre, asset_entry& entry);
xAnimState* add_anim_state(xAnimTable* table, uint32 id, int8* name, xAnimState* transitionTo, uint8 loop);
uint32 AlwaysConditional();

// zReactiveAddExtraSimpleMgr__FR13zEntSimpleObjP10zSimpleMgr
// Start address: 0x493f00
void zReactiveAddExtraSimpleMgr(zEntSimpleObj& ent, zSimpleMgr* smgr)
{
	zSimpleMgr* smgr_static;
	zSimpleMgr* smgr_burnt;
	uint32 visible;
	// Line 1137, Address: 0x493f00, Func Offset: 0
	// Line 1145, Address: 0x493f18, Func Offset: 0x18
	// Line 1150, Address: 0x493f1c, Func Offset: 0x1c
	// Line 1155, Address: 0x493f20, Func Offset: 0x20
	// Line 1153, Address: 0x493f24, Func Offset: 0x24
	// Line 1154, Address: 0x493f28, Func Offset: 0x28
	// Line 1150, Address: 0x493f2c, Func Offset: 0x2c
	// Line 1154, Address: 0x493f30, Func Offset: 0x30
	// Line 1155, Address: 0x493f34, Func Offset: 0x34
	// Line 1156, Address: 0x493f44, Func Offset: 0x44
	// Line 1157, Address: 0x493f54, Func Offset: 0x54
	// Line 1158, Address: 0x493f68, Func Offset: 0x68
	// Line 1159, Address: 0x493f7c, Func Offset: 0x7c
	// Line 1139, Address: 0x493f88, Func Offset: 0x88
	// Line 1142, Address: 0x493f8c, Func Offset: 0x8c
	// Line 1159, Address: 0x493f94, Func Offset: 0x94
	// Func End, Address: 0x493f9c, Func Offset: 0x9c
}

// zReactivePreBucket__FR13zEntSimpleObj
// Start address: 0x493fa0
void zReactivePreBucket(zEntSimpleObj& ent)
{
	// Line 1111, Address: 0x493fa0, Func Offset: 0
	// Line 1113, Address: 0x493fb4, Func Offset: 0x14
	// Line 1115, Address: 0x493fbc, Func Offset: 0x1c
	// Line 1117, Address: 0x493fd0, Func Offset: 0x30
	// Line 1124, Address: 0x493fd8, Func Offset: 0x38
	// Line 1126, Address: 0x494034, Func Offset: 0x94
	// Line 1119, Address: 0x494044, Func Offset: 0xa4
	// Line 1126, Address: 0x494048, Func Offset: 0xa8
	// Line 1119, Address: 0x494090, Func Offset: 0xf0
	// Line 1120, Address: 0x494094, Func Offset: 0xf4
	// Line 1119, Address: 0x49409c, Func Offset: 0xfc
	// Line 1126, Address: 0x4940a0, Func Offset: 0x100
	// Line 1124, Address: 0x4940cc, Func Offset: 0x12c
	// Line 1126, Address: 0x4940d0, Func Offset: 0x130
	// Func End, Address: 0x494114, Func Offset: 0x174
}

// zReactiveNeedExtraModel__FR13zEntSimpleObj
// Start address: 0x494120
uint8 zReactiveNeedExtraModel(zEntSimpleObj& ent)
{
	// Line 1107, Address: 0x494120, Func Offset: 0
	// Line 1108, Address: 0x494128, Func Offset: 0x8
	// Func End, Address: 0x494130, Func Offset: 0x10
}

// zReactiveCountExtraModels__FPP13zEntSimpleObjUi
// Start address: 0x494130
int32 zReactiveCountExtraModels(zEntSimpleObj** ents, uint32 size)
{
	int32 total;
	zEntSimpleObj** it;
	zEntSimpleObj** end;
	zEntSimpleObj& ent;
	// Line 1089, Address: 0x494130, Func Offset: 0
	// Line 1090, Address: 0x494138, Func Offset: 0x8
	// Line 1092, Address: 0x494140, Func Offset: 0x10
	// Line 1093, Address: 0x494144, Func Offset: 0x14
	// Line 1096, Address: 0x494154, Func Offset: 0x24
	// Line 1097, Address: 0x494164, Func Offset: 0x34
	// Line 1098, Address: 0x494168, Func Offset: 0x38
	// Line 1100, Address: 0x494178, Func Offset: 0x48
	// Func End, Address: 0x494180, Func Offset: 0x50
}

// zReactiveSelectLOD__FR13zEntSimpleObjf
// Start address: 0x494180
uint8 zReactiveSelectLOD(zEntSimpleObj& ent, float32 dist2)
{
	uint8 was_active;
	uint8 active;
	// Line 1035, Address: 0x494180, Func Offset: 0
	// Line 1044, Address: 0x494184, Func Offset: 0x4
	// Line 1035, Address: 0x494188, Func Offset: 0x8
	// Line 1036, Address: 0x494190, Func Offset: 0x10
	// Line 1044, Address: 0x494198, Func Offset: 0x18
	// Line 1036, Address: 0x49419c, Func Offset: 0x1c
	// Line 1044, Address: 0x4941a0, Func Offset: 0x20
	// Line 1053, Address: 0x4941b0, Func Offset: 0x30
	// Line 1054, Address: 0x4941c0, Func Offset: 0x40
	// Line 1056, Address: 0x4941c8, Func Offset: 0x48
	// Line 1062, Address: 0x4941d0, Func Offset: 0x50
	// Line 1064, Address: 0x4941d8, Func Offset: 0x58
	// Line 1065, Address: 0x494210, Func Offset: 0x90
	// Line 1059, Address: 0x49421c, Func Offset: 0x9c
	// Line 1058, Address: 0x494220, Func Offset: 0xa0
	// Line 1059, Address: 0x494224, Func Offset: 0xa4
	// Line 1065, Address: 0x49422c, Func Offset: 0xac
	// Line 1064, Address: 0x494250, Func Offset: 0xd0
	// Line 1069, Address: 0x494260, Func Offset: 0xe0
	// Line 1082, Address: 0x494268, Func Offset: 0xe8
	// Line 1069, Address: 0x49426c, Func Offset: 0xec
	// Line 1083, Address: 0x494278, Func Offset: 0xf8
	// Func End, Address: 0x494288, Func Offset: 0x108
}

// zReactiveDeactivate__FR13zEntSimpleObjb
// Start address: 0x494290
void zReactiveDeactivate(zEntSimpleObj& ent, uint8 immediate)
{
	// Line 1022, Address: 0x494290, Func Offset: 0
	// Line 1023, Address: 0x4942a8, Func Offset: 0x18
	// Line 1028, Address: 0x4942c0, Func Offset: 0x30
	// Line 1029, Address: 0x4942d4, Func Offset: 0x44
	// Line 1032, Address: 0x494434, Func Offset: 0x1a4
	// Line 1029, Address: 0x49443c, Func Offset: 0x1ac
	// Line 1032, Address: 0x494440, Func Offset: 0x1b0
	// Line 1029, Address: 0x494450, Func Offset: 0x1c0
	// Line 1032, Address: 0x494454, Func Offset: 0x1c4
	// Line 1031, Address: 0x494484, Func Offset: 0x1f4
	// Line 1032, Address: 0x494490, Func Offset: 0x200
	// Func End, Address: 0x4944a8, Func Offset: 0x218
}

// zReactiveDamage__FR13zEntSimpleObj10zHitSourcef
// Start address: 0x4944b0
void zReactiveDamage(zEntSimpleObj& ent, zHitSource hs, float32 damage)
{
	// Line 976, Address: 0x4944b0, Func Offset: 0
	// Line 979, Address: 0x4944b4, Func Offset: 0x4
	// Line 976, Address: 0x4944b8, Func Offset: 0x8
	// Line 979, Address: 0x4944c4, Func Offset: 0x14
	// Line 987, Address: 0x494510, Func Offset: 0x60
	// Line 988, Address: 0x494524, Func Offset: 0x74
	// Line 989, Address: 0x49452c, Func Offset: 0x7c
	// Line 992, Address: 0x494534, Func Offset: 0x84
	// Line 995, Address: 0x4945b8, Func Offset: 0x108
	// Line 992, Address: 0x4945e4, Func Offset: 0x134
	// Line 995, Address: 0x4945f8, Func Offset: 0x148
	// Func End, Address: 0x49460c, Func Offset: 0x15c
}

// zReactiveHitTestSphere__FPP13zEntSimpleObjiRC7xSphere
// Start address: 0x494610
int32 zReactiveHitTestSphere(zEntSimpleObj** hits, int32 max_hits, xSphere& sphere)
{
	xBound bound;
	// Line 925, Address: 0x494610, Func Offset: 0
	// Line 927, Address: 0x494614, Func Offset: 0x4
	// Line 925, Address: 0x494618, Func Offset: 0x8
	// Line 927, Address: 0x49461c, Func Offset: 0xc
	// Line 925, Address: 0x494620, Func Offset: 0x10
	// Line 927, Address: 0x494624, Func Offset: 0x14
	// Line 925, Address: 0x494628, Func Offset: 0x18
	// Line 927, Address: 0x49462c, Func Offset: 0x1c
	// Line 928, Address: 0x494664, Func Offset: 0x54
	// Line 929, Address: 0x4946c0, Func Offset: 0xb0
	// Func End, Address: 0x4946d4, Func Offset: 0xc4
}

// zReactiveRender__Fv
// Start address: 0x4946e0
void zReactiveRender()
{
	zReactiveAnimationData* act;
	zReactiveAnimationData* end_act;
	// Line 910, Address: 0x4946e0, Func Offset: 0
	// Line 911, Address: 0x4946f0, Func Offset: 0x10
	// Line 910, Address: 0x4946f4, Func Offset: 0x14
	// Line 911, Address: 0x4946f8, Func Offset: 0x18
	// Line 912, Address: 0x494700, Func Offset: 0x20
	// Line 913, Address: 0x494708, Func Offset: 0x28
	// Line 914, Address: 0x494728, Func Offset: 0x48
	// Func End, Address: 0x49473c, Func Offset: 0x5c
}

// zReactiveUpdate__Ff
// Start address: 0x494740
void zReactiveUpdate(float32 dt)
{
	zReactiveAnimationData* act;
	zReactiveAnimationData* end_act;
	// Line 898, Address: 0x494740, Func Offset: 0
	// Line 899, Address: 0x494754, Func Offset: 0x14
	// Line 898, Address: 0x494758, Func Offset: 0x18
	// Line 899, Address: 0x49475c, Func Offset: 0x1c
	// Line 900, Address: 0x494764, Func Offset: 0x24
	// Line 902, Address: 0x49476c, Func Offset: 0x2c
	// Line 903, Address: 0x494780, Func Offset: 0x40
	// Line 906, Address: 0x494784, Func Offset: 0x44
	// Line 907, Address: 0x494790, Func Offset: 0x50
	// Func End, Address: 0x4947b8, Func Offset: 0x78
}

// zReactiveReset__Fv
// Start address: 0x4947c0
void zReactiveReset()
{
	zReactiveAnimationData* act;
	zReactiveAnimationData* end_act;
	zScene& scene;
	zEntSimpleObj* it;
	zEntSimpleObj* end;
	// Line 872, Address: 0x4947c0, Func Offset: 0
	// Line 874, Address: 0x4947e8, Func Offset: 0x28
	// Line 872, Address: 0x4947ec, Func Offset: 0x2c
	// Line 874, Address: 0x4947f0, Func Offset: 0x30
	// Line 875, Address: 0x4947f8, Func Offset: 0x38
	// Line 878, Address: 0x49480c, Func Offset: 0x4c
	// Line 879, Address: 0x49498c, Func Offset: 0x1cc
	// Line 883, Address: 0x4949a0, Func Offset: 0x1e0
	// Line 880, Address: 0x4949a8, Func Offset: 0x1e8
	// Line 884, Address: 0x4949ac, Func Offset: 0x1ec
	// Line 886, Address: 0x4949bc, Func Offset: 0x1fc
	// Line 889, Address: 0x4949cc, Func Offset: 0x20c
	// Line 890, Address: 0x4949d0, Func Offset: 0x210
	// Line 892, Address: 0x4949d8, Func Offset: 0x218
	// Line 893, Address: 0x494a1c, Func Offset: 0x25c
	// Line 894, Address: 0x494ae0, Func Offset: 0x320
	// Line 895, Address: 0x494af0, Func Offset: 0x330
	// Line 878, Address: 0x494b08, Func Offset: 0x348
	// Line 895, Address: 0x494b0c, Func Offset: 0x34c
	// Line 893, Address: 0x494b38, Func Offset: 0x378
	// Line 895, Address: 0x494b3c, Func Offset: 0x37c
	// Func End, Address: 0x494b94, Func Offset: 0x3d4
}

// zReactiveSceneEnter__Fv
// Start address: 0x494ba0
void zReactiveSceneEnter()
{
	// Line 806, Address: 0x494ba0, Func Offset: 0
	// Line 807, Address: 0x494ba8, Func Offset: 0x8
	// Line 809, Address: 0x494bac, Func Offset: 0xc
	// Line 810, Address: 0x494bb4, Func Offset: 0x14
	// Line 813, Address: 0x494bc0, Func Offset: 0x20
	// Line 814, Address: 0x494bc8, Func Offset: 0x28
	// Line 864, Address: 0x494bcc, Func Offset: 0x2c
	// Func End, Address: 0x494bd8, Func Offset: 0x38
}

// apply_fire_damage__32@unnamed@zReactiveAnimation_cpp@FR13zEntSimpleObjf
// Start address: 0x494be0
void apply_fire_damage(zEntSimpleObj& ent)
{
	spawn_data fire_spawn;
	property_set fire_props;
	// Line 748, Address: 0x494be0, Func Offset: 0
	// Line 749, Address: 0x494bf0, Func Offset: 0x10
	// Line 751, Address: 0x494bf8, Func Offset: 0x18
	// Line 753, Address: 0x494c00, Func Offset: 0x20
	// Line 754, Address: 0x494c3c, Func Offset: 0x5c
	// Line 753, Address: 0x494c64, Func Offset: 0x84
	// Line 757, Address: 0x494c78, Func Offset: 0x98
	// Line 759, Address: 0x494c7c, Func Offset: 0x9c
	// Line 763, Address: 0x494c84, Func Offset: 0xa4
	// Line 757, Address: 0x494c88, Func Offset: 0xa8
	// Line 758, Address: 0x494c94, Func Offset: 0xb4
	// Line 759, Address: 0x494ca4, Func Offset: 0xc4
	// Line 763, Address: 0x494cbc, Func Offset: 0xdc
	// Line 768, Address: 0x494cc8, Func Offset: 0xe8
	// Line 771, Address: 0x494ccc, Func Offset: 0xec
	// Line 768, Address: 0x494cd0, Func Offset: 0xf0
	// Line 769, Address: 0x494cd8, Func Offset: 0xf8
	// Line 771, Address: 0x494cdc, Func Offset: 0xfc
	// Line 769, Address: 0x494ce0, Func Offset: 0x100
	// Line 770, Address: 0x494ce4, Func Offset: 0x104
	// Line 771, Address: 0x494cec, Func Offset: 0x10c
	// Line 772, Address: 0x494cf4, Func Offset: 0x114
	// Line 776, Address: 0x494cf8, Func Offset: 0x118
	// Line 772, Address: 0x494d00, Func Offset: 0x120
	// Line 773, Address: 0x494d04, Func Offset: 0x124
	// Line 776, Address: 0x494d0c, Func Offset: 0x12c
	// Line 774, Address: 0x494d10, Func Offset: 0x130
	// Line 775, Address: 0x494d14, Func Offset: 0x134
	// Line 776, Address: 0x494d18, Func Offset: 0x138
	// Line 779, Address: 0x494d20, Func Offset: 0x140
	// Line 780, Address: 0x494d48, Func Offset: 0x168
	// Func End, Address: 0x494d5c, Func Offset: 0x17c
}

// play_anim__32@unnamed@zReactiveAnimation_cpp@FR13zEntSimpleObjP10xAnimStatefb
// Start address: 0x494d60
void play_anim(zEntSimpleObj& ent, xAnimState* state, float32 speed, uint8 force_restart)
{
	xModelInstance* model;
	xAnimPlay* play;
	xAnimSingle* single;
	xAnimTransition* tran;
	float32 params[4];
	// Line 695, Address: 0x494d60, Func Offset: 0
	// Line 696, Address: 0x494d84, Func Offset: 0x24
	// Line 698, Address: 0x494d88, Func Offset: 0x28
	// Line 699, Address: 0x494d8c, Func Offset: 0x2c
	// Line 701, Address: 0x494d94, Func Offset: 0x34
	// Line 702, Address: 0x494d9c, Func Offset: 0x3c
	// Line 706, Address: 0x494da4, Func Offset: 0x44
	// Line 708, Address: 0x494dac, Func Offset: 0x4c
	// Line 710, Address: 0x494db8, Func Offset: 0x58
	// Line 712, Address: 0x494dc0, Func Offset: 0x60
	// Line 716, Address: 0x494dc4, Func Offset: 0x64
	// Line 713, Address: 0x494dc8, Func Offset: 0x68
	// Line 714, Address: 0x494dcc, Func Offset: 0x6c
	// Line 715, Address: 0x494dd0, Func Offset: 0x70
	// Line 716, Address: 0x494dd4, Func Offset: 0x74
	// Line 717, Address: 0x494dd8, Func Offset: 0x78
	// Line 718, Address: 0x494ddc, Func Offset: 0x7c
	// Line 719, Address: 0x494de4, Func Offset: 0x84
	// Line 722, Address: 0x494de8, Func Offset: 0x88
	// Line 719, Address: 0x494df0, Func Offset: 0x90
	// Line 722, Address: 0x494df4, Func Offset: 0x94
	// Line 723, Address: 0x494e18, Func Offset: 0xb8
	// Line 724, Address: 0x494e3c, Func Offset: 0xdc
	// Func End, Address: 0x494e6c, Func Offset: 0x10c
}

// update_activity__32@unnamed@zReactiveAnimation_cpp@FR22zReactiveAnimationDataf
// Start address: 0x494e70
uint8 update_activity(zReactiveAnimationData& react, float32 dt)
{
	zReactiveGenre& genre;
	zEntSimpleObj& ent;
	xAnimSingle* single;
	xAnimState* state;
	float32 time;
	float32 duration;
	float32 time_left;
	// Line 573, Address: 0x494e70, Func Offset: 0
	// Line 574, Address: 0x494e8c, Func Offset: 0x1c
	// Line 575, Address: 0x494e94, Func Offset: 0x24
	// Line 593, Address: 0x494e98, Func Offset: 0x28
	// Line 575, Address: 0x494e9c, Func Offset: 0x2c
	// Line 586, Address: 0x494ea0, Func Offset: 0x30
	// Line 587, Address: 0x494ea8, Func Offset: 0x38
	// Line 588, Address: 0x494eac, Func Offset: 0x3c
	// Line 589, Address: 0x494eb0, Func Offset: 0x40
	// Line 593, Address: 0x494eb8, Func Offset: 0x48
	// Line 595, Address: 0x494ed0, Func Offset: 0x60
	// Line 596, Address: 0x495030, Func Offset: 0x1c0
	// Line 600, Address: 0x49503c, Func Offset: 0x1cc
	// Line 606, Address: 0x495048, Func Offset: 0x1d8
	// Line 608, Address: 0x495054, Func Offset: 0x1e4
	// Line 611, Address: 0x495070, Func Offset: 0x200
	// Line 615, Address: 0x495094, Func Offset: 0x224
	// Line 616, Address: 0x4950a0, Func Offset: 0x230
	// Line 618, Address: 0x4950a8, Func Offset: 0x238
	// Line 604, Address: 0x4950ec, Func Offset: 0x27c
	// Line 618, Address: 0x495118, Func Offset: 0x2a8
	// Line 605, Address: 0x495120, Func Offset: 0x2b0
	// Line 619, Address: 0x495128, Func Offset: 0x2b8
	// Func End, Address: 0x495144, Func Offset: 0x2d4
}

// activate_entity__32@unnamed@zReactiveAnimation_cpp@FR13zEntSimpleObjR14zReactiveGenre
// Start address: 0x495150
uint8 activate_entity(zEntSimpleObj& ent, zReactiveGenre& genre)
{
	xModelInstance* model;
	xAnimPlay* play;
	// Line 440, Address: 0x495150, Func Offset: 0
	// Line 441, Address: 0x495168, Func Offset: 0x18
	// Line 442, Address: 0x495174, Func Offset: 0x24
	// Line 443, Address: 0x49517c, Func Offset: 0x2c
	// Line 444, Address: 0x495190, Func Offset: 0x40
	// Line 448, Address: 0x49519c, Func Offset: 0x4c
	// Line 449, Address: 0x4951b8, Func Offset: 0x68
	// Line 452, Address: 0x4951c0, Func Offset: 0x70
	// Line 454, Address: 0x4951c8, Func Offset: 0x78
	// Line 455, Address: 0x4951e4, Func Offset: 0x94
	// Line 458, Address: 0x4951ec, Func Offset: 0x9c
	// Line 459, Address: 0x4951f4, Func Offset: 0xa4
	// Line 463, Address: 0x4951fc, Func Offset: 0xac
	// Line 464, Address: 0x495200, Func Offset: 0xb0
	// Line 465, Address: 0x495218, Func Offset: 0xc8
	// Line 464, Address: 0x49521c, Func Offset: 0xcc
	// Line 465, Address: 0x495220, Func Offset: 0xd0
	// Line 464, Address: 0x495224, Func Offset: 0xd4
	// Line 465, Address: 0x495228, Func Offset: 0xd8
	// Line 466, Address: 0x495248, Func Offset: 0xf8
	// Line 467, Address: 0x495254, Func Offset: 0x104
	// Line 470, Address: 0x49525c, Func Offset: 0x10c
	// Line 474, Address: 0x495260, Func Offset: 0x110
	// Line 470, Address: 0x495264, Func Offset: 0x114
	// Line 471, Address: 0x495278, Func Offset: 0x128
	// Line 472, Address: 0x49527c, Func Offset: 0x12c
	// Line 473, Address: 0x495280, Func Offset: 0x130
	// Line 474, Address: 0x495284, Func Offset: 0x134
	// Line 480, Address: 0x495288, Func Offset: 0x138
	// Line 481, Address: 0x495294, Func Offset: 0x144
	// Line 483, Address: 0x4952a0, Func Offset: 0x150
	// Line 484, Address: 0x4952a4, Func Offset: 0x154
	// Line 485, Address: 0x4952a8, Func Offset: 0x158
	// Func End, Address: 0x4952c0, Func Offset: 0x170
}

// setup_entities__32@unnamed@zReactiveAnimation_cpp@Fv
// Start address: 0x4952c0
void setup_entities()
{
	int32 activities_size'69;
	int32 total;
	zScene& scene;
	zEntSimpleObj* it;
	zEntSimpleObj* end;
	// Line 363, Address: 0x4952c0, Func Offset: 0
	// Line 366, Address: 0x4952c4, Func Offset: 0x4
	// Line 363, Address: 0x4952c8, Func Offset: 0x8
	// Line 366, Address: 0x4952cc, Func Offset: 0xc
	// Line 367, Address: 0x4952d0, Func Offset: 0x10
	// Line 369, Address: 0x4952e0, Func Offset: 0x20
	// Line 378, Address: 0x4952e8, Func Offset: 0x28
	// Line 369, Address: 0x4952ec, Func Offset: 0x2c
	// Line 372, Address: 0x4952f0, Func Offset: 0x30
	// Line 373, Address: 0x495348, Func Offset: 0x88
	// Line 378, Address: 0x495350, Func Offset: 0x90
	// Line 379, Address: 0x495354, Func Offset: 0x94
	// Line 378, Address: 0x495358, Func Offset: 0x98
	// Line 380, Address: 0x495388, Func Offset: 0xc8
	// Line 381, Address: 0x495398, Func Offset: 0xd8
	// Line 384, Address: 0x49539c, Func Offset: 0xdc
	// Line 386, Address: 0x4953a4, Func Offset: 0xe4
	// Line 388, Address: 0x4953b0, Func Offset: 0xf0
	// Line 389, Address: 0x4953c8, Func Offset: 0x108
	// Line 372, Address: 0x4953d0, Func Offset: 0x110
	// Line 385, Address: 0x4953d8, Func Offset: 0x118
	// Line 387, Address: 0x4953e0, Func Offset: 0x120
	// Line 389, Address: 0x4953ec, Func Offset: 0x12c
	// Func End, Address: 0x4953f8, Func Offset: 0x138
}

// load_genres__32@unnamed@zReactiveAnimation_cpp@Fv
// Start address: 0x495400
void load_genres()
{
	int32 genres_size'75;
	int32 tables;
	int32 i;
	uint32 asset_size;
	asset_type* asset;
	zReactiveGenre* genre;
	int32 i;
	uint32 asset_size;
	asset_type* asset;
	int32 j;
	// Line 297, Address: 0x495400, Func Offset: 0
	// Line 298, Address: 0x495404, Func Offset: 0x4
	// Line 297, Address: 0x495408, Func Offset: 0x8
	// Line 298, Address: 0x49540c, Func Offset: 0xc
	// Line 297, Address: 0x495410, Func Offset: 0x10
	// Line 298, Address: 0x495424, Func Offset: 0x24
	// Line 301, Address: 0x495430, Func Offset: 0x30
	// Line 302, Address: 0x495434, Func Offset: 0x34
	// Line 301, Address: 0x495438, Func Offset: 0x38
	// Line 302, Address: 0x49543c, Func Offset: 0x3c
	// Line 311, Address: 0x49544c, Func Offset: 0x4c
	// Line 312, Address: 0x495454, Func Offset: 0x54
	// Line 305, Address: 0x49545c, Func Offset: 0x5c
	// Line 312, Address: 0x495468, Func Offset: 0x68
	// Line 313, Address: 0x495494, Func Offset: 0x94
	// Line 316, Address: 0x4954a8, Func Offset: 0xa8
	// Line 330, Address: 0x4954b8, Func Offset: 0xb8
	// Line 319, Address: 0x4954c0, Func Offset: 0xc0
	// Line 330, Address: 0x4954cc, Func Offset: 0xcc
	// Line 319, Address: 0x4954d8, Func Offset: 0xd8
	// Line 330, Address: 0x4954dc, Func Offset: 0xdc
	// Line 322, Address: 0x495504, Func Offset: 0x104
	// Line 324, Address: 0x495508, Func Offset: 0x108
	// Line 330, Address: 0x49550c, Func Offset: 0x10c
	// Func End, Address: 0x49555c, Func Offset: 0x15c
}

// load_genre__32@unnamed@zReactiveAnimation_cpp@FR14zReactiveGenreRCQ232@unnamed@zReactiveAnimation_cpp@11asset_entry
// Start address: 0x495560
void load_genre(zReactiveGenre& genre, asset_entry& entry)
{
	uint32 model_static_id;
	// Line 247, Address: 0x495560, Func Offset: 0
	// Line 250, Address: 0x495574, Func Offset: 0x14
	// Line 252, Address: 0x495584, Func Offset: 0x24
	// Line 254, Address: 0x495594, Func Offset: 0x34
	// Line 255, Address: 0x4955a4, Func Offset: 0x44
	// Line 256, Address: 0x4955b0, Func Offset: 0x50
	// Line 257, Address: 0x4955bc, Func Offset: 0x5c
	// Line 269, Address: 0x4955c8, Func Offset: 0x68
	// Line 257, Address: 0x4955cc, Func Offset: 0x6c
	// Line 269, Address: 0x4955d0, Func Offset: 0x70
	// Line 270, Address: 0x4955e0, Func Offset: 0x80
	// Line 271, Address: 0x495600, Func Offset: 0xa0
	// Line 272, Address: 0x495620, Func Offset: 0xc0
	// Line 276, Address: 0x495640, Func Offset: 0xe0
	// Line 283, Address: 0x495664, Func Offset: 0x104
	// Line 281, Address: 0x495668, Func Offset: 0x108
	// Line 282, Address: 0x49566c, Func Offset: 0x10c
	// Line 283, Address: 0x495670, Func Offset: 0x110
	// Line 280, Address: 0x495674, Func Offset: 0x114
	// Line 281, Address: 0x49567c, Func Offset: 0x11c
	// Line 282, Address: 0x495680, Func Offset: 0x120
	// Line 284, Address: 0x495684, Func Offset: 0x124
	// Line 283, Address: 0x495688, Func Offset: 0x128
	// Line 284, Address: 0x49568c, Func Offset: 0x12c
	// Line 286, Address: 0x495694, Func Offset: 0x134
	// Line 288, Address: 0x49569c, Func Offset: 0x13c
	// Line 294, Address: 0x4956b0, Func Offset: 0x150
	// Func End, Address: 0x4956c4, Func Offset: 0x164
}

// add_anim_state__32@unnamed@zReactiveAnimation_cpp@FP10xAnimTableUiPCcP10xAnimStateb
// Start address: 0x4956d0
xAnimState* add_anim_state(xAnimTable* table, uint32 id, int8* name, xAnimState* transitionTo, uint8 loop)
{
	void* anim_data;
	xAnimFile* afile;
	uint32 end;
	xAnimState* state;
	// Line 208, Address: 0x4956d0, Func Offset: 0
	// Line 209, Address: 0x4956f8, Func Offset: 0x28
	// Line 210, Address: 0x495700, Func Offset: 0x30
	// Line 211, Address: 0x495708, Func Offset: 0x38
	// Line 212, Address: 0x49571c, Func Offset: 0x4c
	// Line 213, Address: 0x495728, Func Offset: 0x58
	// Line 218, Address: 0x495730, Func Offset: 0x60
	// Line 222, Address: 0x495744, Func Offset: 0x74
	// Line 223, Address: 0x495754, Func Offset: 0x84
	// Line 226, Address: 0x495760, Func Offset: 0x90
	// Line 227, Address: 0x4957a4, Func Offset: 0xd4
	// Line 229, Address: 0x4957b4, Func Offset: 0xe4
	// Line 230, Address: 0x4957bc, Func Offset: 0xec
	// Line 232, Address: 0x4957f8, Func Offset: 0x128
	// Line 216, Address: 0x495804, Func Offset: 0x134
	// Line 233, Address: 0x495814, Func Offset: 0x144
	// Func End, Address: 0x495834, Func Offset: 0x164
}

// AlwaysConditional__32@unnamed@zReactiveAnimation_cpp@FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x495840
uint32 AlwaysConditional()
{
	// Line 161, Address: 0x495840, Func Offset: 0
	// Func End, Address: 0x495848, Func Offset: 0x8
}

