typedef struct xSurface;
typedef struct RxClusterDefinition;
typedef struct xAnimTable;
typedef struct _zPortal;
typedef struct xVec3;
typedef struct xLightKit;
typedef struct dust_particle;
typedef struct xBase;
typedef struct xAnimPhysicsData;
typedef struct xEnt;
typedef struct xCamGroup;
typedef struct xColor_tag;
typedef struct xModelBucket;
typedef struct xScene;
typedef struct RpInterpolator;
typedef struct zEnt;
typedef struct xModelInstance;
typedef struct xGroupAsset;
typedef struct zDustRingEmitter;
typedef struct xVec2;
typedef struct ptank_pool__pos_color_size_rot_uv2;
typedef enum RxNodeDefEditable;
typedef struct RwFrustumPlane;
typedef struct activity_data;
typedef struct iEnv;
typedef struct zScene;
typedef struct iEnvMatOrder;
typedef struct xJSPNodeTree;
typedef struct xCollis;
typedef struct xUpdateCullMgr;
typedef enum RwFogType;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct _zEnv;
typedef struct xVec4;
typedef struct zJumpParam;
typedef struct RxIoSpec;
typedef struct xCamOrientEuler;
typedef struct xJSPNodeTreeBranch;
typedef struct _class_0;
typedef struct zPlayerSettings;
typedef struct xEnvAsset;
typedef struct RpAtomic;
typedef struct RwBBox;
typedef struct RpWorld;
typedef struct ring_chain_data;
typedef struct zEntHangable;
typedef struct xJSPNodeTreeLeaf;
typedef struct xJSPNodeInfo;
typedef struct xAnimTransition;
typedef struct xBaseAsset;
typedef struct RwRaster;
typedef struct xMat4x3;
typedef struct xEntBoulder;
typedef struct xAnimState;
typedef struct RxPacket;
typedef struct RwTexture;
typedef struct RwPlane;
typedef struct zPlatform;
typedef struct xShadowSimplePoly;
typedef struct RxOutputSpec;
typedef struct xSpline3;
typedef struct zSceneParameters;
typedef struct xAnimFile;
typedef struct config_type;
typedef struct xCam;
typedef struct RwMatrixTag;
typedef struct zCutsceneMgr;
typedef struct xSphere;
typedef struct xCamBlend;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct zLasso;
typedef enum ptank_group_type;
typedef struct xCamConfigCommon;
typedef struct _class_1;
typedef struct xJSPMiniLightTie;
typedef struct xRot;
typedef struct ptank_pool;
typedef struct xAnimTransitionList;
typedef struct zAssetPickupTable;
typedef struct xEnv;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RxClusterValid;
typedef struct xCylinder;
typedef struct RpSector;
typedef struct RpLight;
typedef enum _zPlayerType;
typedef struct xLightKitLight;
typedef struct xBox;
typedef struct xShadowSimpleCache;
typedef struct _class_2;
typedef struct xUpdateCullEnt;
typedef struct xEntFrame;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwV2d;
typedef struct xMat3x3;
typedef enum _tagPadState;
typedef struct xCoef3;
typedef struct xLinkAsset;
typedef struct xGroup;
typedef struct RxPipelineCluster;
typedef struct xEntCollis;
typedef struct xClumpCollBSPTree;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct xJSPHeader;
typedef struct zPlayer;
typedef struct RxClusterRef;
typedef struct xAnimEffect;
typedef struct xJSPNodeLight;
typedef struct xAnimMultiFileEntry;
typedef struct zCheckPoint;
typedef struct xClumpCollBSPBranchNode;
typedef struct xFFX;
typedef struct xModelTag;
typedef struct xPortalAsset;
typedef struct xAnimActiveEffect;
typedef struct RpMaterialList;
typedef struct xClumpCollBSPTriangle;
typedef struct RwFrame;
typedef struct ptank_pool__pos_color_size_rot;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xCamScreen;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct _tagPadAnalog;
typedef enum xCamCoordType;
typedef enum sceDemoEndReason;
typedef struct RwCamera;
typedef struct xAnimSingle;
typedef struct xCamera;
typedef struct render_state;
typedef struct xEntShadow;
typedef enum iSndHandle;
typedef struct xUpdateCullGroup;
typedef struct xAnimMultiFileBase;
typedef struct xModelPool;
typedef struct _class_3;
typedef struct xGlobals;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef struct anim_coll_data;
typedef enum RwCameraProjection;
typedef struct RwV3d;
typedef struct xEntDrive;
typedef struct RwResEntry;
typedef struct xModelPipe;
typedef struct xDynAsset;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xEntAsset;
typedef struct xCamCoordCylinder;
typedef struct RpClump;
typedef struct xAnimMultiFile;
typedef struct xBound;
typedef struct RwSurfaceProperties;
typedef struct _tagiPad;
typedef struct _tagxPad;
typedef struct RxPipelineNode;
typedef enum zGlobalDemoType;
typedef struct xBBox;
typedef struct zGlobalSettings;
typedef struct PS2DemoGlobals;
typedef struct zPlayerLassoInfo;
typedef struct RwLLLink;
typedef struct zLedgeGrabParams;
typedef enum RpWorldRenderOrder;
typedef struct xMemPool;
typedef struct RpMeshHeader;
typedef struct xCoef;
typedef struct zRewardsMgr;
typedef struct xCamCoordSphere;
typedef struct RxPipeline;
typedef enum xSndEffect;
typedef struct RxPipelineNodeTopSortData;
typedef struct iFogParams;
typedef struct xParticleBatchSystem;
typedef struct zGlobals;
typedef enum _zPlayerWallJumpState;
typedef struct xGrid;
typedef struct tri_data_0;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct xGridBound;
typedef struct rxReq;
typedef struct tri_data_1;
typedef struct xQuat;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct xQCData;
typedef struct RxHeap;
typedef struct zPlayerGlobals;
typedef struct RwLinkList;
typedef struct analog_data;
typedef struct zPlayerCarryInfo;
typedef struct RxNodeDefinition;
typedef struct _class_4;
typedef struct RpTriangle;
typedef enum xCamOrientType;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_1)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_2)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_3)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_7)(xEnt*, xScene*, float32);
typedef uint32(*type_10)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_14)(xEnt*);
typedef int32(*type_18)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_24)(xEnt*);
typedef RpAtomic*(*type_28)(RpAtomic*);
typedef void(*type_33)(xEnt*, xVec3*);
typedef int32(*type_34)(uint8*, int32, ptank_pool&, float32, void*);
typedef RpWorldSector*(*type_35)(RpWorldSector*);
typedef uint32(*type_38)(void*, void*);
typedef xBase*(*type_41)(uint32);
typedef void(*type_42)(void*);
typedef void(*type_43)(xEnt*, xScene*, float32, xEntFrame*);
typedef int8*(*type_44)(xBase*);
typedef int8*(*type_48)(uint32);
typedef void(*type_56)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_57)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_63)(RwCamera*);
typedef RwCamera*(*type_68)(RwCamera*);
typedef uint32(*type_70)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_76)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_79)(RwResEntry*);
typedef int32(*type_80)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_83)(RwObjectHasFrame*);
typedef void(*type_85)(RxPipelineNode*);
typedef void(*type_87)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef int32(*type_90)(RxPipelineNode*);
typedef void(*type_92)(RxNodeDefinition*);
typedef int32(*type_93)(RxNodeDefinition*);
typedef int32(*type_99)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_100)(xMemPool*, void*);
typedef void(*type_101)(xAnimPlay*, xAnimState*, void*);
typedef RpClump*(*type_105)(RpClump*, void*);
typedef int32(*type_107)(uint8*, int32, ptank_pool&, float32, void*);

typedef RwV3d type_0[8];
typedef RwFrustumPlane type_4[6];
typedef int8 type_5[128];
typedef int8 type_6[128][6];
typedef analog_data type_8[2];
typedef uint16 type_9[3];
typedef uint8 type_11[3];
typedef float32 type_12[2];
typedef int8* type_13[3];
typedef int8 type_15[32];
typedef int32 type_16[141];
typedef xModelTag type_17[2];
typedef xBase* type_19[141];
typedef xEntBoulder* type_20[2];
typedef float32 type_21[6];
typedef uint8 type_22[10];
typedef uint32 type_23[4];
typedef float32 type_25[3];
typedef int8 type_26[16];
typedef uint8 type_27[10];
typedef uint32 type_29[2];
typedef xCam* type_30[32];
typedef xVec3 type_31[3];
typedef float32 type_32[3];
typedef float32 type_36[3];
typedef RxCluster type_37[1];
typedef float32 type_39[2];
typedef xCamBlend* type_40[4];
typedef xVec3 type_45[5];
typedef int8 type_46[16];
typedef uint8 type_47[2];
typedef uint8 type_49[5];
typedef xModelTag type_50[4];
typedef xCollis type_51[18];
typedef float32 type_52[16];
typedef uint8 type_53[3];
typedef float32 type_54[2];
typedef xEnt* type_55[161];
typedef float32 type_58[3];
typedef ring_chain_data type_59[2];
typedef RwTexCoords* type_60[8];
typedef RpLight* type_61[2];
typedef xJSPMiniLightTie type_62[16];
typedef RwFrame* type_64[2];
typedef float32 type_65[4];
typedef xModelInstance* type_66[11];
typedef uint32 type_67[59];
typedef uint8 type_69[4];
typedef uint32 type_71[1];
typedef int8 type_72[16];
typedef float32 type_73[4];
typedef xVec4 type_74[12];
typedef int8 type_75[4];
typedef int8 type_77[32];
typedef xVec4 type_78[12];
typedef xVec3 type_81[4];
typedef xAnimMultiFileEntry type_82[1];
typedef uint8 type_84[22];
typedef int8 type_86[32];
typedef uint8 type_88[22];
typedef int8 type_89[32];
typedef int8 type_91[127];
typedef float32 type_94[4];
typedef xVec3 type_95[60];
typedef float32 type_96[2];
typedef xVec2 type_97[8];
typedef xVec2 type_98[8][2];
typedef uint32 type_102[4];
typedef _tagxPad* type_103[4];
typedef uint32 type_104[20];
typedef uint32 type_106[8];
typedef RwTexCoords* type_108[8];
typedef uint32 type_109[20];
typedef float32 type_110[22];
typedef uint32 type_111[20];
typedef float32 type_112[22];
typedef int8 type_113[32];

struct xSurface
{
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct dust_particle
{
	xVec3 loc;
	float32 size;
	xVec3 vel;
	float32 rot;
	float32 age;
	float32 age_rate;
	float32 dsize;
	xColor_tag color;
	float32 rot_vel;
	xVec2* uv;
	float32 pad1;
	float32 pad2;
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

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
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

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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
	_class_2 anim_coll;
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct zDustRingEmitter
{
	config_type* cfg;
	activity_data* data;

	void kickup(xVec3& center, float32 force, float32 dt);
	void deactivate();
	uint8 activate();
	void set_config(config_type* cfg);
	void create();
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct ptank_pool__pos_color_size_rot_uv2 : ptank_pool
{
	xVec3* pos;
	xColor_tag* color;
	xVec2* size;
	xVec2* uv;
	float32* rot;
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

struct activity_data
{
	zDustRingEmitter* owner;
	float32 emitted[2];
	float32 intensity_min;
	float32 intensity_delta;
	uint8 alpha;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
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

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
};

struct xJSPNodeTree
{
	int32 numBranchNodes;
	xJSPNodeTreeBranch* branchNodes;
	int32 numLeafNodes;
	xJSPNodeTreeLeaf* leafNodes;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xCamOrientEuler
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

struct _class_0
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

struct ring_chain_data
{
	float32 emit_rate;
	int32 type;
	int32 segments;
	float32 rot_vel;
	float32 rot_mag;
	float32 dcos;
	float32 dsin;
};

struct zEntHangable
{
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xEntBoulder
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct zPlatform
{
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct config_type
{
	float32 radius_inner;
	float32 radius_outer;
	float32 intensity;
	float32 alpha;
	float32 rate_scale;
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
	_class_1 orient;
	xCamConfigCommon cfg_common;
	int32 group_index;
	int32 group_flags;
	xCamBlend* blender;
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

struct zCutsceneMgr
{
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct xCamBlend : xCam
{
	xCam* src;
	xCam* dst;
	float32 time;
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

struct xCamConfigCommon
{
	uint8 priority;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 blend_time;
};

struct _class_1
{
	union
	{
		xQuat quat;
		xCamOrientEuler euler;
	};
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

struct ptank_pool
{
	render_state rs;
	uint32 order_group;
	int32 order_index;
	uint32 used;
	RpAtomic* ptank;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zAssetPickupTable
{
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct _class_2
{
	xVec3* verts;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
};

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xFFX
{
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	union
	{
		uint32 Handle;
		iSndHandle SndHandle;
	};
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xClumpCollBSPTriangle
{
	_class_3 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

struct ptank_pool__pos_color_size_rot : ptank_pool
{
	xVec3* pos;
	xColor_tag* color;
	xVec2* size;
	float32* rot;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xCamScreen
{
	RwCamera* icam;
	float32 fov;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

enum xCamCoordType
{
	XCAM_COORD_INVALID = 0xffffffff,
	XCAM_COORD_CART,
	XCAM_COORD_CYLINDER,
	XCAM_COORD_SPHERE,
	XCAM_COORD_MAX
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

struct render_state
{
	RwTexture* texture;
	uint32 src_blend;
	uint32 dst_blend;
	int32 flags;
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

enum iSndHandle
{
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct anim_coll_data
{
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
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

struct xCamCoordCylinder
{
	xVec3 origin;
	float32 dist;
	float32 height;
	float32 theta;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagiPad
{
	int32 port;
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

enum zGlobalDemoType
{
	zDT_NONE,
	zDT_E3,
	zDT_PUBLICITY,
	zDT_OPM,
	zDT_LAST
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xCoef
{
	float32 a[4];
};

struct zRewardsMgr
{
};

struct xCamCoordSphere
{
	xVec3 origin;
	float32 dist;
	xQuat dir;
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

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xGrid
{
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
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

struct rxReq
{
};

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct _class_4
{
	float32 t;
	float32 u;
	float32 v;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

enum xCamOrientType
{
	XCAM_ORIENT_INVALID = 0xffffffff,
	XCAM_ORIENT_QUAT,
	XCAM_ORIENT_EULER,
	XCAM_ORIENT_MAX
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
int8* ring_chain_labels[3];
ring_chain_data chain[2];
int32 texture_rows;
int32 texture_columns;
int32 dirt_system_id;
float32 ring_vel_decay;
xVec2* dirt_uvs;
uint8 refreshed_ring_chains;
float32 ring_chain_ang[2];
xVec2 ring_chain[8][2];
int32 activities_used;
activity_data* activities;
uint32 gActiveHeap;
zGlobals globals;
int32 _rpPTankAtomicDataOffset;
int32(*update_dust_particles_uv2)(uint8*, int32, ptank_pool&, float32, void*);
int32(*update_dust_particles)(uint8*, int32, ptank_pool&, float32, void*);

void kickup(xVec3& center, float32 force, float32 dt);
void deactivate();
uint8 activate();
void set_config(config_type* cfg);
void create();
void zDustRender();
void zDustUpdate(float32 dt);
void zDustReset();
void zDustSceneEnter();
void refresh_ring_chains();
int32 update_dust_particles_uv2(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 update_dust_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
void create_dirt_system();
void set_uv_frames(xVec2* uv, int32 rows, int32 columns);

// kickup__16zDustRingEmitterFRC5xVec3ff
// Start address: 0x472a00
void zDustRingEmitter::kickup(xVec3& center, float32 force, float32 dt)
{
	float32 cx;
	float32 cy;
	float32 cz;
	float32 radius_min;
	float32 radius_delta;
	float32 size_min;
	float32 size_delta;
	float32 vmag_min;
	float32 vmag_delta;
	float32 intensity_min;
	float32 intensity_delta;
	uint8 alpha;
	int32 dirt_frames;
	int32 i;
	int32 emit;
	uint8* mem;
	int32 have;
	dust_particle* p;
	dust_particle* endp;
	float32 dx;
	float32 dz;
	float32 rr;
	float32 rand_radius;
	float32 vmag;
	// Line 692, Address: 0x472a00, Func Offset: 0
	// Line 697, Address: 0x472a68, Func Offset: 0x68
	// Line 705, Address: 0x472a70, Func Offset: 0x70
	// Line 729, Address: 0x472a74, Func Offset: 0x74
	// Line 713, Address: 0x472a7c, Func Offset: 0x7c
	// Line 708, Address: 0x472a80, Func Offset: 0x80
	// Line 712, Address: 0x472a84, Func Offset: 0x84
	// Line 727, Address: 0x472a88, Func Offset: 0x88
	// Line 705, Address: 0x472a8c, Func Offset: 0x8c
	// Line 729, Address: 0x472a94, Func Offset: 0x94
	// Line 705, Address: 0x472a98, Func Offset: 0x98
	// Line 729, Address: 0x472a9c, Func Offset: 0x9c
	// Line 705, Address: 0x472aa0, Func Offset: 0xa0
	// Line 729, Address: 0x472aa4, Func Offset: 0xa4
	// Line 708, Address: 0x472aac, Func Offset: 0xac
	// Line 706, Address: 0x472ab8, Func Offset: 0xb8
	// Line 708, Address: 0x472abc, Func Offset: 0xbc
	// Line 710, Address: 0x472ac0, Func Offset: 0xc0
	// Line 713, Address: 0x472ad0, Func Offset: 0xd0
	// Line 710, Address: 0x472ad4, Func Offset: 0xd4
	// Line 713, Address: 0x472ae4, Func Offset: 0xe4
	// Line 710, Address: 0x472ae8, Func Offset: 0xe8
	// Line 727, Address: 0x472af0, Func Offset: 0xf0
	// Line 725, Address: 0x472af4, Func Offset: 0xf4
	// Line 712, Address: 0x472af8, Func Offset: 0xf8
	// Line 713, Address: 0x472afc, Func Offset: 0xfc
	// Line 712, Address: 0x472b00, Func Offset: 0x100
	// Line 723, Address: 0x472b04, Func Offset: 0x104
	// Line 727, Address: 0x472b08, Func Offset: 0x108
	// Line 713, Address: 0x472b0c, Func Offset: 0x10c
	// Line 712, Address: 0x472b10, Func Offset: 0x110
	// Line 707, Address: 0x472b14, Func Offset: 0x114
	// Line 724, Address: 0x472b18, Func Offset: 0x118
	// Line 707, Address: 0x472b1c, Func Offset: 0x11c
	// Line 724, Address: 0x472b20, Func Offset: 0x120
	// Line 732, Address: 0x472b24, Func Offset: 0x124
	// Line 734, Address: 0x472b84, Func Offset: 0x184
	// Line 735, Address: 0x472b94, Func Offset: 0x194
	// Line 737, Address: 0x472b9c, Func Offset: 0x19c
	// Line 742, Address: 0x472bac, Func Offset: 0x1ac
	// Line 744, Address: 0x472bb8, Func Offset: 0x1b8
	// Line 745, Address: 0x472bcc, Func Offset: 0x1cc
	// Line 748, Address: 0x472bd4, Func Offset: 0x1d4
	// Line 749, Address: 0x472be0, Func Offset: 0x1e0
	// Line 751, Address: 0x472be8, Func Offset: 0x1e8
	// Line 755, Address: 0x472bf4, Func Offset: 0x1f4
	// Line 758, Address: 0x472c28, Func Offset: 0x228
	// Line 759, Address: 0x472c7c, Func Offset: 0x27c
	// Line 763, Address: 0x472c80, Func Offset: 0x280
	// Line 764, Address: 0x472c88, Func Offset: 0x288
	// Line 766, Address: 0x472c94, Func Offset: 0x294
	// Line 765, Address: 0x472c9c, Func Offset: 0x29c
	// Line 771, Address: 0x472ca0, Func Offset: 0x2a0
	// Line 772, Address: 0x472ce4, Func Offset: 0x2e4
	// Line 774, Address: 0x472ce8, Func Offset: 0x2e8
	// Line 772, Address: 0x472cec, Func Offset: 0x2ec
	// Line 773, Address: 0x472cf0, Func Offset: 0x2f0
	// Line 777, Address: 0x472cf4, Func Offset: 0x2f4
	// Line 780, Address: 0x472cfc, Func Offset: 0x2fc
	// Line 781, Address: 0x472d34, Func Offset: 0x334
	// Line 780, Address: 0x472d38, Func Offset: 0x338
	// Line 781, Address: 0x472d60, Func Offset: 0x360
	// Line 782, Address: 0x472d94, Func Offset: 0x394
	// Line 781, Address: 0x472da0, Func Offset: 0x3a0
	// Line 782, Address: 0x472dac, Func Offset: 0x3ac
	// Line 785, Address: 0x472db8, Func Offset: 0x3b8
	// Line 787, Address: 0x472dc0, Func Offset: 0x3c0
	// Line 792, Address: 0x472e50, Func Offset: 0x450
	// Line 787, Address: 0x472e54, Func Offset: 0x454
	// Line 792, Address: 0x472e58, Func Offset: 0x458
	// Line 787, Address: 0x472e5c, Func Offset: 0x45c
	// Line 788, Address: 0x472e64, Func Offset: 0x464
	// Line 792, Address: 0x472e68, Func Offset: 0x468
	// Line 794, Address: 0x472e78, Func Offset: 0x478
	// Line 795, Address: 0x472e80, Func Offset: 0x480
	// Line 796, Address: 0x472ec8, Func Offset: 0x4c8
	// Line 795, Address: 0x472ecc, Func Offset: 0x4cc
	// Line 796, Address: 0x472ed4, Func Offset: 0x4d4
	// Line 797, Address: 0x472f14, Func Offset: 0x514
	// Line 796, Address: 0x472f18, Func Offset: 0x518
	// Line 797, Address: 0x472f1c, Func Offset: 0x51c
	// Line 796, Address: 0x472f20, Func Offset: 0x520
	// Line 797, Address: 0x472f2c, Func Offset: 0x52c
	// Line 799, Address: 0x472f34, Func Offset: 0x534
	// Line 801, Address: 0x472f48, Func Offset: 0x548
	// Line 802, Address: 0x472f4c, Func Offset: 0x54c
	// Line 803, Address: 0x472f54, Func Offset: 0x554
	// Line 802, Address: 0x472f58, Func Offset: 0x558
	// Line 803, Address: 0x472f68, Func Offset: 0x568
	// Line 815, Address: 0x472f80, Func Offset: 0x580
	// Line 755, Address: 0x472f90, Func Offset: 0x590
	// Line 815, Address: 0x472f9c, Func Offset: 0x59c
	// Line 755, Address: 0x472fa4, Func Offset: 0x5a4
	// Line 815, Address: 0x472fe0, Func Offset: 0x5e0
	// Line 755, Address: 0x472fe8, Func Offset: 0x5e8
	// Line 815, Address: 0x472fec, Func Offset: 0x5ec
	// Line 755, Address: 0x472ff4, Func Offset: 0x5f4
	// Line 815, Address: 0x473000, Func Offset: 0x600
	// Line 798, Address: 0x473004, Func Offset: 0x604
	// Line 815, Address: 0x473010, Func Offset: 0x610
	// Func End, Address: 0x473070, Func Offset: 0x670
}

// deactivate__16zDustRingEmitterFv
// Start address: 0x473070
void zDustRingEmitter::deactivate()
{
	// Line 681, Address: 0x473070, Func Offset: 0
	// Line 682, Address: 0x473074, Func Offset: 0x4
	// Line 687, Address: 0x47307c, Func Offset: 0xc
	// Line 688, Address: 0x4730f0, Func Offset: 0x80
	// Line 689, Address: 0x4730f4, Func Offset: 0x84
	// Func End, Address: 0x4730fc, Func Offset: 0x8c
}

// activate__16zDustRingEmitterFv
// Start address: 0x473100
uint8 zDustRingEmitter::activate()
{
	// Line 661, Address: 0x473100, Func Offset: 0
	// Line 662, Address: 0x47310c, Func Offset: 0xc
	// Line 666, Address: 0x473118, Func Offset: 0x18
	// Line 668, Address: 0x473124, Func Offset: 0x24
	// Line 675, Address: 0x47313c, Func Offset: 0x3c
	// Line 668, Address: 0x473154, Func Offset: 0x54
	// Line 669, Address: 0x47315c, Func Offset: 0x5c
	// Line 673, Address: 0x473164, Func Offset: 0x64
	// Line 675, Address: 0x47317c, Func Offset: 0x7c
	// Line 677, Address: 0x473234, Func Offset: 0x134
	// Line 675, Address: 0x473238, Func Offset: 0x138
	// Line 678, Address: 0x47323c, Func Offset: 0x13c
	// Func End, Address: 0x473244, Func Offset: 0x144
}

// set_config__16zDustRingEmitterFPCQ216zDustRingEmitter11config_type
// Start address: 0x473250
void zDustRingEmitter::set_config(config_type* cfg)
{
	// Line 644, Address: 0x473250, Func Offset: 0
	// Line 646, Address: 0x473258, Func Offset: 0x8
	// Line 647, Address: 0x473264, Func Offset: 0x14
	// Line 646, Address: 0x47327c, Func Offset: 0x2c
	// Line 647, Address: 0x473280, Func Offset: 0x30
	// Line 657, Address: 0x473340, Func Offset: 0xf0
	// Func End, Address: 0x473348, Func Offset: 0xf8
}

// create__16zDustRingEmitterFv
// Start address: 0x473350
void zDustRingEmitter::create()
{
	// Line 622, Address: 0x473350, Func Offset: 0
	// Func End, Address: 0x473358, Func Offset: 0x8
}

// zDustRender__Fv
// Start address: 0x473360
void zDustRender()
{
	// Line 610, Address: 0x473360, Func Offset: 0
	// Func End, Address: 0x473368, Func Offset: 0x8
}

// zDustUpdate__Ff
// Start address: 0x473370
void zDustUpdate(float32 dt)
{
	// Line 599, Address: 0x473370, Func Offset: 0
	// Line 600, Address: 0x473374, Func Offset: 0x4
	// Line 599, Address: 0x47337c, Func Offset: 0xc
	// Line 600, Address: 0x473380, Func Offset: 0x10
	// Line 601, Address: 0x47338c, Func Offset: 0x1c
	// Func End, Address: 0x473398, Func Offset: 0x28
}

// zDustReset__Fv
// Start address: 0x4733a0
void zDustReset()
{
	// Line 588, Address: 0x4733a0, Func Offset: 0
	// Line 590, Address: 0x4733b0, Func Offset: 0x10
	// Line 593, Address: 0x473410, Func Offset: 0x70
	// Line 590, Address: 0x473414, Func Offset: 0x74
	// Line 593, Address: 0x473418, Func Offset: 0x78
	// Line 596, Address: 0x473440, Func Offset: 0xa0
	// Func End, Address: 0x473454, Func Offset: 0xb4
}

// zDustSceneEnter__Fv
// Start address: 0x473460
void zDustSceneEnter()
{
	// Line 569, Address: 0x473460, Func Offset: 0
	// Line 570, Address: 0x47346c, Func Offset: 0xc
	// Line 572, Address: 0x473474, Func Offset: 0x14
	// Line 576, Address: 0x473488, Func Offset: 0x28
	// Line 572, Address: 0x47348c, Func Offset: 0x2c
	// Line 576, Address: 0x473490, Func Offset: 0x30
	// Line 585, Address: 0x473520, Func Offset: 0xc0
	// Func End, Address: 0x473534, Func Offset: 0xd4
}

// refresh_ring_chains__19@unnamed@zDust_cpp@Fv
// Start address: 0x473540
void refresh_ring_chains()
{
	float32 dt;
	int32 i;
	// Line 514, Address: 0x473540, Func Offset: 0
	// Line 516, Address: 0x473568, Func Offset: 0x28
	// Line 520, Address: 0x473574, Func Offset: 0x34
	// Line 518, Address: 0x473578, Func Offset: 0x38
	// Line 520, Address: 0x47357c, Func Offset: 0x3c
	// Line 525, Address: 0x473580, Func Offset: 0x40
	// Line 518, Address: 0x473588, Func Offset: 0x48
	// Line 525, Address: 0x47358c, Func Offset: 0x4c
	// Line 528, Address: 0x47359c, Func Offset: 0x5c
	// Line 530, Address: 0x4735a8, Func Offset: 0x68
	// Line 531, Address: 0x4735f8, Func Offset: 0xb8
	// Line 533, Address: 0x473610, Func Offset: 0xd0
	// Line 535, Address: 0x473670, Func Offset: 0x130
	// Line 533, Address: 0x473678, Func Offset: 0x138
	// Line 535, Address: 0x473680, Func Offset: 0x140
	// Line 536, Address: 0x473688, Func Offset: 0x148
	// Line 530, Address: 0x473690, Func Offset: 0x150
	// Line 536, Address: 0x473694, Func Offset: 0x154
	// Line 530, Address: 0x47369c, Func Offset: 0x15c
	// Line 536, Address: 0x4736c8, Func Offset: 0x188
	// Line 530, Address: 0x4736d0, Func Offset: 0x190
	// Line 536, Address: 0x4736e8, Func Offset: 0x1a8
	// Func End, Address: 0x47372c, Func Offset: 0x1ec
}

// update_dust_particles_uv2__19@unnamed@zDust_cpp@FPUciR10ptank_poolfPv
// Start address: 0x473730
int32 update_dust_particles_uv2(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot_uv2& pool;
	float32 vel_decay;
	dust_particle* p;
	dust_particle* end;
	float32 hsize;
	float32 t1;
	float32 t2;
	float32 alpha;
	// Line 427, Address: 0x473730, Func Offset: 0
	// Line 436, Address: 0x473734, Func Offset: 0x4
	// Line 427, Address: 0x473738, Func Offset: 0x8
	// Line 428, Address: 0x47374c, Func Offset: 0x1c
	// Line 427, Address: 0x473750, Func Offset: 0x20
	// Line 436, Address: 0x473754, Func Offset: 0x24
	// Line 427, Address: 0x473758, Func Offset: 0x28
	// Line 436, Address: 0x47375c, Func Offset: 0x2c
	// Line 427, Address: 0x473760, Func Offset: 0x30
	// Line 430, Address: 0x473768, Func Offset: 0x38
	// Line 438, Address: 0x47376c, Func Offset: 0x3c
	// Line 440, Address: 0x473774, Func Offset: 0x44
	// Line 442, Address: 0x473778, Func Offset: 0x48
	// Line 440, Address: 0x47377c, Func Offset: 0x4c
	// Line 442, Address: 0x473784, Func Offset: 0x54
	// Line 440, Address: 0x47378c, Func Offset: 0x5c
	// Line 442, Address: 0x473794, Func Offset: 0x64
	// Line 444, Address: 0x4737a0, Func Offset: 0x70
	// Line 445, Address: 0x4737a4, Func Offset: 0x74
	// Line 446, Address: 0x473838, Func Offset: 0x108
	// Line 450, Address: 0x473840, Func Offset: 0x110
	// Line 449, Address: 0x473844, Func Offset: 0x114
	// Line 450, Address: 0x47384c, Func Offset: 0x11c
	// Line 457, Address: 0x473850, Func Offset: 0x120
	// Line 449, Address: 0x473858, Func Offset: 0x128
	// Line 452, Address: 0x473864, Func Offset: 0x134
	// Line 450, Address: 0x473868, Func Offset: 0x138
	// Line 452, Address: 0x47386c, Func Offset: 0x13c
	// Line 457, Address: 0x473878, Func Offset: 0x148
	// Line 452, Address: 0x473880, Func Offset: 0x150
	// Line 453, Address: 0x473894, Func Offset: 0x164
	// Line 454, Address: 0x4738a8, Func Offset: 0x178
	// Line 455, Address: 0x4738c0, Func Offset: 0x190
	// Line 456, Address: 0x4738d4, Func Offset: 0x1a4
	// Line 457, Address: 0x4738f0, Func Offset: 0x1c0
	// Line 458, Address: 0x4738fc, Func Offset: 0x1cc
	// Line 459, Address: 0x473920, Func Offset: 0x1f0
	// Line 460, Address: 0x47393c, Func Offset: 0x20c
	// Line 462, Address: 0x473950, Func Offset: 0x220
	// Line 464, Address: 0x473998, Func Offset: 0x268
	// Line 465, Address: 0x473af8, Func Offset: 0x3c8
	// Line 468, Address: 0x473b04, Func Offset: 0x3d4
	// Line 471, Address: 0x473b0c, Func Offset: 0x3dc
	// Line 474, Address: 0x473b10, Func Offset: 0x3e0
	// Line 473, Address: 0x473b18, Func Offset: 0x3e8
	// Line 474, Address: 0x473b1c, Func Offset: 0x3ec
	// Line 473, Address: 0x473b20, Func Offset: 0x3f0
	// Line 474, Address: 0x473b24, Func Offset: 0x3f4
	// Line 471, Address: 0x473b30, Func Offset: 0x400
	// Line 474, Address: 0x473b34, Func Offset: 0x404
	// Line 475, Address: 0x473b5c, Func Offset: 0x42c
	// Line 476, Address: 0x473b68, Func Offset: 0x438
	// Line 477, Address: 0x473b78, Func Offset: 0x448
	// Line 478, Address: 0x473b90, Func Offset: 0x460
	// Line 480, Address: 0x473c20, Func Offset: 0x4f0
	// Line 481, Address: 0x473c40, Func Offset: 0x510
	// Line 482, Address: 0x473c4c, Func Offset: 0x51c
	// Line 484, Address: 0x473c58, Func Offset: 0x528
	// Line 485, Address: 0x473c70, Func Offset: 0x540
	// Line 488, Address: 0x473c88, Func Offset: 0x558
	// Line 489, Address: 0x473c94, Func Offset: 0x564
	// Line 490, Address: 0x473c98, Func Offset: 0x568
	// Line 492, Address: 0x473ca0, Func Offset: 0x570
	// Line 493, Address: 0x473cb4, Func Offset: 0x584
	// Func End, Address: 0x473cdc, Func Offset: 0x5ac
}

// update_dust_particles__19@unnamed@zDust_cpp@FPUciR10ptank_poolfPv
// Start address: 0x473ce0
int32 update_dust_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_rot& pool;
	float32 vel_decay;
	dust_particle* p;
	dust_particle* end;
	float32 hsize;
	float32 t1;
	float32 t2;
	float32 alpha;
	// Line 361, Address: 0x473ce0, Func Offset: 0
	// Line 370, Address: 0x473ce4, Func Offset: 0x4
	// Line 361, Address: 0x473ce8, Func Offset: 0x8
	// Line 362, Address: 0x473cfc, Func Offset: 0x1c
	// Line 361, Address: 0x473d00, Func Offset: 0x20
	// Line 370, Address: 0x473d04, Func Offset: 0x24
	// Line 361, Address: 0x473d08, Func Offset: 0x28
	// Line 370, Address: 0x473d0c, Func Offset: 0x2c
	// Line 361, Address: 0x473d10, Func Offset: 0x30
	// Line 364, Address: 0x473d18, Func Offset: 0x38
	// Line 372, Address: 0x473d1c, Func Offset: 0x3c
	// Line 374, Address: 0x473d24, Func Offset: 0x44
	// Line 376, Address: 0x473d28, Func Offset: 0x48
	// Line 374, Address: 0x473d2c, Func Offset: 0x4c
	// Line 376, Address: 0x473d34, Func Offset: 0x54
	// Line 374, Address: 0x473d3c, Func Offset: 0x5c
	// Line 376, Address: 0x473d44, Func Offset: 0x64
	// Line 378, Address: 0x473d50, Func Offset: 0x70
	// Line 379, Address: 0x473d54, Func Offset: 0x74
	// Line 380, Address: 0x473de8, Func Offset: 0x108
	// Line 384, Address: 0x473df0, Func Offset: 0x110
	// Line 383, Address: 0x473df4, Func Offset: 0x114
	// Line 384, Address: 0x473dfc, Func Offset: 0x11c
	// Line 391, Address: 0x473e00, Func Offset: 0x120
	// Line 383, Address: 0x473e08, Func Offset: 0x128
	// Line 386, Address: 0x473e14, Func Offset: 0x134
	// Line 384, Address: 0x473e18, Func Offset: 0x138
	// Line 386, Address: 0x473e1c, Func Offset: 0x13c
	// Line 391, Address: 0x473e28, Func Offset: 0x148
	// Line 386, Address: 0x473e30, Func Offset: 0x150
	// Line 387, Address: 0x473e44, Func Offset: 0x164
	// Line 388, Address: 0x473e58, Func Offset: 0x178
	// Line 389, Address: 0x473e70, Func Offset: 0x190
	// Line 390, Address: 0x473e84, Func Offset: 0x1a4
	// Line 391, Address: 0x473ea0, Func Offset: 0x1c0
	// Line 392, Address: 0x473eac, Func Offset: 0x1cc
	// Line 393, Address: 0x473ed0, Func Offset: 0x1f0
	// Line 394, Address: 0x473eec, Func Offset: 0x20c
	// Line 396, Address: 0x473f00, Func Offset: 0x220
	// Line 398, Address: 0x473f48, Func Offset: 0x268
	// Line 399, Address: 0x474080, Func Offset: 0x3a0
	// Line 402, Address: 0x47408c, Func Offset: 0x3ac
	// Line 405, Address: 0x474094, Func Offset: 0x3b4
	// Line 408, Address: 0x474098, Func Offset: 0x3b8
	// Line 407, Address: 0x4740a0, Func Offset: 0x3c0
	// Line 408, Address: 0x4740a4, Func Offset: 0x3c4
	// Line 407, Address: 0x4740a8, Func Offset: 0x3c8
	// Line 408, Address: 0x4740ac, Func Offset: 0x3cc
	// Line 405, Address: 0x4740b8, Func Offset: 0x3d8
	// Line 408, Address: 0x4740bc, Func Offset: 0x3dc
	// Line 409, Address: 0x4740e4, Func Offset: 0x404
	// Line 410, Address: 0x4740f0, Func Offset: 0x410
	// Line 411, Address: 0x474100, Func Offset: 0x420
	// Line 412, Address: 0x474118, Func Offset: 0x438
	// Line 414, Address: 0x4741a8, Func Offset: 0x4c8
	// Line 415, Address: 0x4741c8, Func Offset: 0x4e8
	// Line 416, Address: 0x4741d4, Func Offset: 0x4f4
	// Line 419, Address: 0x4741e0, Func Offset: 0x500
	// Line 420, Address: 0x4741ec, Func Offset: 0x50c
	// Line 421, Address: 0x4741f0, Func Offset: 0x510
	// Line 423, Address: 0x4741f8, Func Offset: 0x518
	// Line 424, Address: 0x47420c, Func Offset: 0x52c
	// Func End, Address: 0x474234, Func Offset: 0x554
}

// create_dirt_system__19@unnamed@zDust_cpp@Fv
// Start address: 0x474240
void create_dirt_system()
{
	int32 uvpairs;
	RwTexture* dirt_texture;
	xParticleBatchSystem system;
	// Line 273, Address: 0x474240, Func Offset: 0
	// Line 275, Address: 0x474244, Func Offset: 0x4
	// Line 273, Address: 0x474248, Func Offset: 0x8
	// Line 274, Address: 0x474250, Func Offset: 0x10
	// Line 275, Address: 0x474258, Func Offset: 0x18
	// Line 274, Address: 0x47425c, Func Offset: 0x1c
	// Line 275, Address: 0x474260, Func Offset: 0x20
	// Line 279, Address: 0x474268, Func Offset: 0x28
	// Line 281, Address: 0x47427c, Func Offset: 0x3c
	// Line 284, Address: 0x47428c, Func Offset: 0x4c
	// Line 285, Address: 0x4742a0, Func Offset: 0x60
	// Line 286, Address: 0x4742a4, Func Offset: 0x64
	// Line 287, Address: 0x4742a8, Func Offset: 0x68
	// Line 286, Address: 0x4742ac, Func Offset: 0x6c
	// Line 287, Address: 0x4742b0, Func Offset: 0x70
	// Line 291, Address: 0x4742b4, Func Offset: 0x74
	// Line 292, Address: 0x4742b8, Func Offset: 0x78
	// Line 291, Address: 0x4742bc, Func Offset: 0x7c
	// Line 288, Address: 0x4742c0, Func Offset: 0x80
	// Line 289, Address: 0x4742c4, Func Offset: 0x84
	// Line 292, Address: 0x4742c8, Func Offset: 0x88
	// Line 294, Address: 0x4742e8, Func Offset: 0xa8
	// Line 295, Address: 0x4742f8, Func Offset: 0xb8
	// Func End, Address: 0x474308, Func Offset: 0xc8
}

// set_uv_frames__19@unnamed@zDust_cpp@FP5xVec2ii
// Start address: 0x474310
void set_uv_frames(xVec2* uv, int32 rows, int32 columns)
{
	float32 du;
	float32 dv;
	float32 v;
	int32 row;
	float32 u;
	int32 col;
	// Line 257, Address: 0x474310, Func Offset: 0
	// Line 259, Address: 0x47431c, Func Offset: 0xc
	// Line 257, Address: 0x474320, Func Offset: 0x10
	// Line 259, Address: 0x474338, Func Offset: 0x28
	// Line 258, Address: 0x47433c, Func Offset: 0x2c
	// Line 259, Address: 0x474340, Func Offset: 0x30
	// Line 262, Address: 0x474348, Func Offset: 0x38
	// Line 268, Address: 0x474360, Func Offset: 0x50
	// Line 264, Address: 0x474364, Func Offset: 0x54
	// Line 268, Address: 0x474368, Func Offset: 0x58
	// Line 266, Address: 0x47436c, Func Offset: 0x5c
	// Line 264, Address: 0x474370, Func Offset: 0x60
	// Line 266, Address: 0x474374, Func Offset: 0x64
	// Line 268, Address: 0x47437c, Func Offset: 0x6c
	// Line 269, Address: 0x474388, Func Offset: 0x78
	// Line 270, Address: 0x474398, Func Offset: 0x88
	// Func End, Address: 0x4743a0, Func Offset: 0x90
}

