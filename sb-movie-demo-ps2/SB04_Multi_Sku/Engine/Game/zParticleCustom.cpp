typedef struct xClumpCollBSPVertInfo;
typedef struct xBase;
typedef struct xQuat;
typedef enum _tagPadState;
typedef struct dust_particle;
typedef struct RxClusterDefinition;
typedef struct xEntCollis;
typedef struct xAnimEffect;
typedef struct xEnt;
typedef struct xClumpCollBSPTree;
typedef struct xAnimMultiFileEntry;
typedef struct xUpdateCullEnt;
typedef struct xJSPHeader;
typedef struct xCollis;
typedef struct xLightKit;
typedef struct zCheckPoint;
typedef struct RpInterpolator;
typedef struct xVec3;
typedef struct RpAtomic;
typedef struct RwFrustumPlane;
typedef enum RxNodeDefEditable;
typedef struct xJSPNodeLight;
typedef struct xModelInstance;
typedef struct xMat4x3;
typedef struct xModelTag;
typedef struct glint_particle;
typedef struct xAnimFile;
typedef struct xBox;
typedef struct xAnimActiveEffect;
typedef struct xColor_tag;
typedef enum RwFogType;
typedef struct xFFX;
typedef struct RpTie;
typedef struct xClumpCollBSPBranchNode;
typedef struct xVec2;
typedef struct rxHeapBlockHeader;
typedef struct xPortalAsset;
typedef struct ptank_pool;
typedef struct xAnimPlay;
typedef enum sceDemoEndReason;
typedef struct RxIoSpec;
typedef struct xAnimTransition;
typedef struct xClumpCollBSPTriangle;
typedef struct xLightKitLight;
typedef struct xCamera;
typedef enum iSndHandle;
typedef struct pebble_particle;
typedef struct xScene;
typedef struct RwBBox;
typedef struct xAnimTable;
typedef struct xUpdateCullGroup;
typedef struct iEnvMatOrder;
typedef struct xAnimSingle;
typedef struct RpWorld;
typedef struct RwCamera;
typedef struct RpLight;
typedef struct RwRaster;
typedef struct _tagPadAnalog;
typedef struct xCamScreen;
typedef struct xGlobals;
typedef struct xVec4;
typedef enum xCamCoordType;
typedef struct xSpline3;
typedef struct xShadowSimpleCache;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct xModelPool;
typedef struct xEntAsset;
typedef struct RwPlane;
typedef struct RwFrame;
typedef struct xEntShadow;
typedef struct RxOutputSpec;
typedef struct zPlatform;
typedef struct xCamGroup;
typedef struct xEntDrive;
typedef struct _class_0;
typedef struct spark_particle;
typedef struct xGroup;
typedef struct anim_coll_data;
typedef struct render_state;
typedef struct xCam;
typedef struct xModelPipe;
typedef struct RwTexture;
typedef struct xEntFrame;
typedef struct fire_smoke_particle;
typedef struct RpWorldSector;
typedef struct RwSphere;
typedef struct zJumpParam;
typedef struct zEnt;
typedef struct RwV3d;
typedef struct xJSPNodeInfo;
typedef struct xSphere;
typedef struct xBound;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RxClusterValid;
typedef struct RpSector;
typedef struct zEntHangable;
typedef struct zScene;
typedef struct xAnimMultiFile;
typedef struct xCylinder;
typedef struct xDynAsset;
typedef struct zSceneParameters;
typedef struct zPlayer;
typedef struct xUpdateCullMgr;
typedef struct _tagxPad;
typedef struct xCamCoordCylinder;
typedef struct ptank_pool__pos_color_size_uv2;
typedef struct ptank_pool__pos_color_size;
typedef struct xRot;
typedef struct RpClump;
typedef struct xAnimState;
typedef struct _tagiPad;
typedef struct _zPortal;
typedef struct RwV2d;
typedef enum zGlobalDemoType;
typedef struct RxPipelineCluster;
typedef struct PS2DemoGlobals;
typedef struct xBBox;
typedef struct zGlobalSettings;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct zCutsceneMgr;
typedef struct xLinkAsset;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xMemPool;
typedef struct zPlayerLassoInfo;
typedef enum xSndEffect;
typedef struct zAssetPickupTable;
typedef struct zLedgeGrabParams;
typedef struct xCoef;
typedef struct zRewardsMgr;
typedef struct xJSPNodeTreeLeaf;
typedef struct RpMaterialList;
typedef struct xEntBoulder;
typedef struct xCamCoordSphere;
typedef struct RpMorphTarget;
typedef struct tri_data_0;
typedef struct xCamBlend;
typedef struct xJSPNodeTree;
typedef struct iFogParams;
typedef struct RpVertexNormal;
typedef struct zGlobals;
typedef struct _class_1;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct ptank_pool__color_mat;
typedef struct xSurface;
typedef enum _zPlayerWallJumpState;
typedef struct xGrid;
typedef struct tri_data_1;
typedef struct xAnimTransitionList;
typedef struct RwMatrixTag;
typedef struct xCoef3;
typedef struct xGridBound;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct xParticleBatchSystem;
typedef struct xJSPNodeTreeBranch;
typedef struct RwResEntry;
typedef struct xQCData;
typedef struct zPlayerGlobals;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef struct analog_data;
typedef struct xModelBucket;
typedef struct iEnv;
typedef struct RwSurfaceProperties;
typedef struct zPlayerCarryInfo;
typedef struct zPlayerSettings;
typedef struct RxPipelineNode;
typedef struct _class_2;
typedef struct xEnvAsset;
typedef struct xGroupAsset;
typedef struct xAnimPhysicsData;
typedef enum xCamOrientType;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct xCamOrientEuler;
typedef struct xParticleBatchGroup;
typedef struct _zEnv;
typedef struct _class_3;
typedef struct RxPipelineNodeParam;
typedef struct RwTexDictionary;
typedef struct xEnv;
typedef struct xBaseAsset;
typedef struct rxReq;
typedef struct xShadowSimplePoly;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct zLasso;
typedef struct RwLinkList;
typedef struct xJSPMiniLightTie;
typedef struct xCamConfigCommon;
typedef struct _class_4;
typedef enum ptank_group_type;
typedef enum _zPlayerType;
typedef struct RxNodeDefinition;
typedef struct _class_5;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef void(*type_6)(xEnt*, xScene*, float32, xEntCollis*);
typedef uint32(*type_8)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef void(*type_9)(xEnt*, xVec3*, xMat4x3*);
typedef int32(*type_12)(uint8*, int32, ptank_pool&, float32, void*);
typedef int32(*type_13)(uint8*, int32, ptank_pool&, float32, void*);
typedef int32(*type_14)(uint8*, int32, ptank_pool&, float32, void*);
typedef uint32(*type_20)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef RpWorldSector*(*type_27)(RpWorldSector*);
typedef uint32(*type_33)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_34)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_35)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef int32(*type_38)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_42)(uint32);
typedef void(*type_44)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int8*(*type_45)(xBase*);
typedef void(*type_51)(xAnimPlay*, xAnimState*, void*);
typedef int8*(*type_52)(uint32);
typedef void(*type_54)(void*);
typedef RwCamera*(*type_55)(RwCamera*);
typedef RwCamera*(*type_56)(RwCamera*);
typedef uint32(*type_64)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_65)(uint8*, int32, ptank_pool&, float32, void*);
typedef void(*type_67)(RwResEntry*);
typedef int32(*type_68)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_69)(RwObjectHasFrame*);
typedef void(*type_70)(RxPipelineNode*);
typedef void(*type_72)(xEnt*, xScene*, float32, xEntFrame*);
typedef int32(*type_76)(RxPipelineNode*);
typedef void(*type_77)(RxNodeDefinition*);
typedef void(*type_78)(xEnt*, xScene*, float32);
typedef int32(*type_81)(RxNodeDefinition*);
typedef void(*type_83)(xEnt*);
typedef int32(*type_84)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_88)(RpClump*, void*);
typedef void(*type_92)(xEnt*);
typedef uint32(*type_99)(void*, void*);
typedef void(*type_101)(xMemPool*, void*);
typedef void(*type_102)(xEnt*, xVec3*);

typedef uint8 type_0[3];
typedef xModelTag type_1[4];
typedef xCollis type_2[18];
typedef RwV3d type_3[8];
typedef int8 type_4[16];
typedef xEnt* type_5[161];
typedef RwFrustumPlane type_7[6];
typedef uint16 type_10[3];
typedef float32 type_11[4];
typedef xJSPMiniLightTie type_15[16];
typedef RpLight* type_16[2];
typedef uint32 type_17[4];
typedef uint32 type_18[59];
typedef RwFrame* type_19[2];
typedef xModelInstance* type_21[11];
typedef uint32 type_23[1];
typedef uint8 type_24[4];
typedef float32 type_25[4];
typedef xVec4 type_26[12];
typedef xVec4 type_28[12];
typedef RxCluster type_29[1];
typedef int8 type_30[16];
typedef int8 type_31[32];
typedef int8 type_32[4];
typedef xAnimMultiFileEntry type_36[1];
typedef xVec3 type_37[4];
typedef uint8 type_39[22];
typedef int8 type_40[127];
typedef uint8 type_43[22];
typedef float32 type_46[4];
typedef RwTexCoords* type_47[8];
typedef xVec3 type_48[60];
typedef float32 type_49[2];
typedef float32 type_50[3];
typedef _tagxPad* type_53[4];
typedef uint32 type_57[20];
typedef uint32 type_58[8];
typedef uint32 type_59[4];
typedef uint32 type_60[20];
typedef float32 type_61[22];
typedef uint32 type_62[20];
typedef float32 type_63[22];
typedef int8 type_66[32];
typedef int8 type_71[32];
typedef int8 type_73[128];
typedef int8 type_74[32];
typedef int8 type_75[128][6];
typedef analog_data type_79[2];
typedef int8 type_80[32];
typedef uint8 type_82[3];
typedef xModelTag type_85[2];
typedef int8 type_86[16];
typedef int32 type_87[141];
typedef xEntBoulder* type_89[2];
typedef float32 type_90[6];
typedef uint8 type_91[10];
typedef xBase* type_93[141];
typedef RwTexCoords* type_94[8];
typedef float32 type_95[3];
typedef uint8 type_96[10];
typedef xVec3 type_97[3];
typedef uint32 type_98[2];
typedef float32 type_100[3];
typedef xCam* type_103[32];
typedef float32 type_104[3];
typedef float32 type_105[16];
typedef uint8 type_106[2];
typedef xVec3 type_107[5];
typedef xCamBlend* type_108[4];
typedef uint8 type_109[5];
typedef float32 type_110[2];

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct dust_particle
{
	float32 age;
	float32 age_rate;
	float32 size;
	float32 scale_yoffset;
	xVec3 loc;
	xVec3 vel;
	xColor_tag color;
	uint8 frame;
	uint8 pad1;
	int8 xflip;
	int8 yflip;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint16 Flags;
	uint16 Probability;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
		tri_data_1 tri;
	};
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct zCheckPoint
{
	xVec3 pos;
	float32 rot;
	uint32 initCamID;
	uint8* jsp_active;
	xSndEffect currentEffect;
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

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
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
	_class_5 anim_coll;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct xModelTag
{
	xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct glint_particle
{
	float32 age;
	float32 age_rate;
	float32 length;
	float32 length_vel;
	float32 length_clamp;
	float32 width;
	xVec3 loc;
	xVec3 vel;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
	float32 leftValue;
	float32 rightValue;
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct ptank_pool
{
	render_state rs;
	uint32 order_group;
	int32 order_index;
	uint32 used;
	RpAtomic* ptank;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
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

enum iSndHandle
{
};

struct pebble_particle
{
	xVec3 loc;
	xVec3 vel;
	float32 size;
	float32 plane_y;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xCamScreen
{
	RwCamera* icam;
	float32 fov;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

enum xCamCoordType
{
	XCAM_COORD_INVALID = 0xffffffff,
	XCAM_COORD_CART,
	XCAM_COORD_CYLINDER,
	XCAM_COORD_SPHERE,
	XCAM_COORD_MAX
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

struct xAnimMultiFileBase
{
	uint32 Count;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct zPlatform
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

struct _class_0
{
	union
	{
		xClumpCollBSPVertInfo i;
		uint32 rawIdx;
		RwV3d* p;
	};
};

struct spark_particle
{
	float32 age;
	float32 age_rate;
	float32 size;
	xVec3 loc;
	xVec3 vel;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct anim_coll_data
{
};

struct render_state
{
	RwTexture* texture;
	uint32 src_blend;
	uint32 dst_blend;
	int32 flags;
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
	_class_3 coord;
	_class_4 orient;
	xCamConfigCommon cfg_common;
	int32 group_index;
	int32 group_flags;
	xCamBlend* blender;
};

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
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

struct fire_smoke_particle
{
	float32 age;
	float32 age_rate;
	float32 size;
	xVec3 loc;
	xVec3 vel;
	int8 xflip;
	int8 yflip;
	uint8 pad1;
	uint8 pad2;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct xJSPNodeInfo
{
	int32 originalMatIndex;
	uint16 nodeFlags;
	int16 sortOrder;
};

struct xSphere
{
	xVec3 center;
	float32 r;
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

struct RpSector
{
	int32 type;
};

struct zEntHangable
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
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

struct zPlayer : zEnt
{
	xVec3 trigLastFramePos;
	int32 zPlayerFlags;
	uint32 lorezModelID;
	xModelInstance* lorezModel;
	xModelInstance* hirezModel;
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

struct xCamCoordCylinder
{
	xVec3 origin;
	float32 dist;
	float32 height;
	float32 theta;
};

struct ptank_pool__pos_color_size_uv2 : ptank_pool
{
	xVec3* pos;
	xColor_tag* color;
	xVec2* size;
	xVec2* uv;
};

struct ptank_pool__pos_color_size : ptank_pool
{
	xVec3* pos;
	xColor_tag* color;
	xVec2* size;
};

struct xRot
{
	xVec3 axis;
	float32 angle;
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

struct _tagiPad
{
	int32 port;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RwV2d
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct zCutsceneMgr
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

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct zPlayerLassoInfo
{
	float32 dist;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	zLasso lasso;
};

enum xSndEffect
{
	xSndEffect_NONE,
	xSndEffect_CAVE,
	xSndEffect_MAX_TYPES
};

struct zAssetPickupTable
{
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

struct zRewardsMgr
{
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xEntBoulder
{
};

struct xCamCoordSphere
{
	xVec3 origin;
	float32 dist;
	xQuat dir;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float32 yaw;
	xCollis* coll;
	xMat4x3 trioldmat;
};

struct xCamBlend : xCam
{
	xCam* src;
	xCam* dst;
	float32 time;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _class_1
{
	int32 spark;
	int32 glint;
	int32 pebble;
	int32 dust;
	int32 fire_smoke;
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

struct ptank_pool__color_mat : ptank_pool
{
	xColor_tag* color;
	xMat4x3* mat;
};

struct xSurface
{
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

struct tri_data_1
{
	uint32 index;
	float32 r;
	float32 d;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _class_2
{
	float32 t;
	float32 u;
	float32 v;
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

struct xCamOrientEuler
{
	float32 yaw;
	float32 pitch;
	float32 roll;
};

struct xParticleBatchGroup
{
	uint8* elements;
	int32 elements_size;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct _class_3
{
	union
	{
		xVec3 cart;
		xCamCoordCylinder cylinder;
		xCamCoordSphere sphere;
	};
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct rxReq
{
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

struct RwLinkList
{
	RwLLLink link;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_MAXTYPES
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

struct _class_5
{
	xVec3* verts;
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
xParticleBatchGroup particle_batch_group;
_class_1 system_id;
float32 dust_vel_decay;
int32(*update_fire_smoke_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32(*update_dust_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32(*update_pebble_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32(*update_glint_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32(*update_spark_particles)(uint8*, int32, ptank_pool&, float32, void*);
int32 _rpPTankAtomicDataOffset;
zGlobals globals;

void zParticleCustomUpdate(float32 dt);
void zParticleCustomSceneEnter();
void zParticleCustomEmitFireSmoke(xVec3* loc, xVec3* vel, int32 amount, float32 life_min, float32 life_range, float32 size_min, float32 size_range, float32 dt);
int32 update_fire_smoke_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 update_dust_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 update_pebble_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 update_glint_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);
int32 update_spark_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt);

// zParticleCustomUpdate__Ff
// Start address: 0x4c4050
void zParticleCustomUpdate(float32 dt)
{
	// Line 871, Address: 0x4c4050, Func Offset: 0
	// Line 872, Address: 0x4c4054, Func Offset: 0x4
	// Line 871, Address: 0x4c405c, Func Offset: 0xc
	// Line 872, Address: 0x4c4060, Func Offset: 0x10
	// Line 874, Address: 0x4c406c, Func Offset: 0x1c
	// Func End, Address: 0x4c4078, Func Offset: 0x28
}

// zParticleCustomSceneEnter__Fv
// Start address: 0x4c4080
void zParticleCustomSceneEnter()
{
	// Line 841, Address: 0x4c4080, Func Offset: 0
	// Line 842, Address: 0x4c4088, Func Offset: 0x8
	// Line 844, Address: 0x4c4090, Func Offset: 0x10
	// Line 848, Address: 0x4c40f8, Func Offset: 0x78
	// Line 844, Address: 0x4c40fc, Func Offset: 0x7c
	// Line 848, Address: 0x4c4100, Func Offset: 0x80
	// Line 852, Address: 0x4c4164, Func Offset: 0xe4
	// Line 848, Address: 0x4c4168, Func Offset: 0xe8
	// Line 852, Address: 0x4c416c, Func Offset: 0xec
	// Line 857, Address: 0x4c41d0, Func Offset: 0x150
	// Line 852, Address: 0x4c41d4, Func Offset: 0x154
	// Line 857, Address: 0x4c41d8, Func Offset: 0x158
	// Line 861, Address: 0x4c4244, Func Offset: 0x1c4
	// Line 857, Address: 0x4c4248, Func Offset: 0x1c8
	// Line 861, Address: 0x4c424c, Func Offset: 0x1cc
	// Line 868, Address: 0x4c42bc, Func Offset: 0x23c
	// Func End, Address: 0x4c42c8, Func Offset: 0x248
}

// zParticleCustomEmitFireSmoke__FPC5xVec3PC5xVec3ifffff
// Start address: 0x4c42d0
void zParticleCustomEmitFireSmoke(xVec3* loc, xVec3* vel, int32 amount, float32 life_min, float32 life_range, float32 size_min, float32 size_range, float32 dt)
{
	float32 age;
	float32 dage;
	uint8* mem;
	int32 have;
	fire_smoke_particle* p;
	fire_smoke_particle* endp;
	// Line 797, Address: 0x4c42d0, Func Offset: 0
	// Line 798, Address: 0x4c42d4, Func Offset: 0x4
	// Line 797, Address: 0x4c42d8, Func Offset: 0x8
	// Line 798, Address: 0x4c42dc, Func Offset: 0xc
	// Line 797, Address: 0x4c42e0, Func Offset: 0x10
	// Line 798, Address: 0x4c4320, Func Offset: 0x50
	// Line 799, Address: 0x4c4324, Func Offset: 0x54
	// Line 797, Address: 0x4c4328, Func Offset: 0x58
	// Line 801, Address: 0x4c432c, Func Offset: 0x5c
	// Line 797, Address: 0x4c4330, Func Offset: 0x60
	// Line 801, Address: 0x4c4334, Func Offset: 0x64
	// Line 800, Address: 0x4c433c, Func Offset: 0x6c
	// Line 801, Address: 0x4c4348, Func Offset: 0x78
	// Line 803, Address: 0x4c4350, Func Offset: 0x80
	// Line 833, Address: 0x4c4358, Func Offset: 0x88
	// Line 806, Address: 0x4c4364, Func Offset: 0x94
	// Line 833, Address: 0x4c4368, Func Offset: 0x98
	// Line 806, Address: 0x4c4374, Func Offset: 0xa4
	// Line 833, Address: 0x4c4378, Func Offset: 0xa8
	// Line 810, Address: 0x4c4384, Func Offset: 0xb4
	// Line 833, Address: 0x4c4388, Func Offset: 0xb8
	// Line 810, Address: 0x4c438c, Func Offset: 0xbc
	// Line 833, Address: 0x4c4390, Func Offset: 0xc0
	// Line 811, Address: 0x4c439c, Func Offset: 0xcc
	// Line 833, Address: 0x4c43a0, Func Offset: 0xd0
	// Line 814, Address: 0x4c43b8, Func Offset: 0xe8
	// Line 833, Address: 0x4c43f0, Func Offset: 0x120
	// Line 816, Address: 0x4c43fc, Func Offset: 0x12c
	// Line 833, Address: 0x4c443c, Func Offset: 0x16c
	// Line 818, Address: 0x4c445c, Func Offset: 0x18c
	// Line 833, Address: 0x4c4460, Func Offset: 0x190
	// Line 818, Address: 0x4c4468, Func Offset: 0x198
	// Line 833, Address: 0x4c446c, Func Offset: 0x19c
	// Line 819, Address: 0x4c447c, Func Offset: 0x1ac
	// Line 820, Address: 0x4c4484, Func Offset: 0x1b4
	// Line 833, Address: 0x4c4488, Func Offset: 0x1b8
	// Line 820, Address: 0x4c448c, Func Offset: 0x1bc
	// Line 833, Address: 0x4c4490, Func Offset: 0x1c0
	// Line 823, Address: 0x4c4498, Func Offset: 0x1c8
	// Line 833, Address: 0x4c44a4, Func Offset: 0x1d4
	// Line 824, Address: 0x4c44a8, Func Offset: 0x1d8
	// Line 833, Address: 0x4c44ac, Func Offset: 0x1dc
	// Line 824, Address: 0x4c44b0, Func Offset: 0x1e0
	// Line 833, Address: 0x4c44b4, Func Offset: 0x1e4
	// Func End, Address: 0x4c4524, Func Offset: 0x254
}

// update_fire_smoke_particles__29@unnamed@zParticleCustom_cpp@FPUciR10ptank_poolfPv
// Start address: 0x4c4530
int32 update_fire_smoke_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size& _fptank_pool;
	int32 _fptank_used;
	xVec3* pool_pos;
	xColor_tag* pool_color;
	xVec2* pool_size;
	uint32 color;
	fire_smoke_particle* p;
	fire_smoke_particle* end;
	float32 age1;
	float32 t1;
	float32 size;
	xVec4 loc;
	float32 t2;
	float32 alpha;
	// Line 730, Address: 0x4c4530, Func Offset: 0
	// Line 746, Address: 0x4c4534, Func Offset: 0x4
	// Line 730, Address: 0x4c4538, Func Offset: 0x8
	// Line 746, Address: 0x4c453c, Func Offset: 0xc
	// Line 730, Address: 0x4c4540, Func Offset: 0x10
	// Line 746, Address: 0x4c4544, Func Offset: 0x14
	// Line 730, Address: 0x4c4548, Func Offset: 0x18
	// Line 731, Address: 0x4c455c, Func Offset: 0x2c
	// Line 730, Address: 0x4c4560, Func Offset: 0x30
	// Line 746, Address: 0x4c4564, Func Offset: 0x34
	// Line 730, Address: 0x4c4568, Func Offset: 0x38
	// Line 746, Address: 0x4c456c, Func Offset: 0x3c
	// Line 730, Address: 0x4c4570, Func Offset: 0x40
	// Line 731, Address: 0x4c457c, Func Offset: 0x4c
	// Line 747, Address: 0x4c458c, Func Offset: 0x5c
	// Line 749, Address: 0x4c45a0, Func Offset: 0x70
	// Line 752, Address: 0x4c45a4, Func Offset: 0x74
	// Line 749, Address: 0x4c45b0, Func Offset: 0x80
	// Line 751, Address: 0x4c45b8, Func Offset: 0x88
	// Line 752, Address: 0x4c45c0, Func Offset: 0x90
	// Line 754, Address: 0x4c45cc, Func Offset: 0x9c
	// Line 755, Address: 0x4c45d0, Func Offset: 0xa0
	// Line 756, Address: 0x4c4634, Func Offset: 0x104
	// Line 757, Address: 0x4c463c, Func Offset: 0x10c
	// Line 767, Address: 0x4c4640, Func Offset: 0x110
	// Line 756, Address: 0x4c4644, Func Offset: 0x114
	// Line 762, Address: 0x4c4648, Func Offset: 0x118
	// Line 760, Address: 0x4c4650, Func Offset: 0x120
	// Line 763, Address: 0x4c4654, Func Offset: 0x124
	// Line 760, Address: 0x4c465c, Func Offset: 0x12c
	// Line 762, Address: 0x4c4664, Func Offset: 0x134
	// Line 763, Address: 0x4c466c, Func Offset: 0x13c
	// Line 764, Address: 0x4c4678, Func Offset: 0x148
	// Line 765, Address: 0x4c4680, Func Offset: 0x150
	// Line 762, Address: 0x4c4684, Func Offset: 0x154
	// Line 764, Address: 0x4c4688, Func Offset: 0x158
	// Line 767, Address: 0x4c4694, Func Offset: 0x164
	// Line 768, Address: 0x4c46dc, Func Offset: 0x1ac
	// Line 772, Address: 0x4c4828, Func Offset: 0x2f8
	// Line 771, Address: 0x4c4848, Func Offset: 0x318
	// Line 773, Address: 0x4c484c, Func Offset: 0x31c
	// Line 772, Address: 0x4c4854, Func Offset: 0x324
	// Line 773, Address: 0x4c4858, Func Offset: 0x328
	// Line 772, Address: 0x4c4860, Func Offset: 0x330
	// Line 773, Address: 0x4c4870, Func Offset: 0x340
	// Line 774, Address: 0x4c487c, Func Offset: 0x34c
	// Line 775, Address: 0x4c4880, Func Offset: 0x350
	// Line 778, Address: 0x4c4890, Func Offset: 0x360
	// Line 775, Address: 0x4c4894, Func Offset: 0x364
	// Line 778, Address: 0x4c48a0, Func Offset: 0x370
	// Line 779, Address: 0x4c48b4, Func Offset: 0x384
	// Line 782, Address: 0x4c48e0, Func Offset: 0x3b0
	// Line 786, Address: 0x4c48e4, Func Offset: 0x3b4
	// Line 788, Address: 0x4c48f0, Func Offset: 0x3c0
	// Line 790, Address: 0x4c48f8, Func Offset: 0x3c8
	// Line 788, Address: 0x4c4904, Func Offset: 0x3d4
	// Line 790, Address: 0x4c4908, Func Offset: 0x3d8
	// Line 788, Address: 0x4c490c, Func Offset: 0x3dc
	// Line 790, Address: 0x4c4910, Func Offset: 0x3e0
	// Line 791, Address: 0x4c4914, Func Offset: 0x3e4
	// Line 790, Address: 0x4c4924, Func Offset: 0x3f4
	// Line 791, Address: 0x4c4928, Func Offset: 0x3f8
	// Line 790, Address: 0x4c4938, Func Offset: 0x408
	// Line 791, Address: 0x4c493c, Func Offset: 0x40c
	// Line 790, Address: 0x4c4944, Func Offset: 0x414
	// Line 791, Address: 0x4c4948, Func Offset: 0x418
	// Func End, Address: 0x4c4954, Func Offset: 0x424
}

// update_dust_particles__29@unnamed@zParticleCustom_cpp@FPUciR10ptank_poolfPv
// Start address: 0x4c4960
int32 update_dust_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size_uv2& _fptank_pool;
	int32 _fptank_used;
	xVec3* pool_pos;
	xColor_tag* pool_color;
	xVec2* pool_size;
	xVec2* pool_uv;
	float32 vel_decay;
	dust_particle* p;
	dust_particle* end;
	float32 t1;
	float32 size;
	xVec4 loc;
	float32 t2;
	float32 max_alpha;
	float32 alpha;
	float32 u;
	float32 v;
	// Line 587, Address: 0x4c4960, Func Offset: 0
	// Line 596, Address: 0x4c4964, Func Offset: 0x4
	// Line 587, Address: 0x4c4968, Func Offset: 0x8
	// Line 596, Address: 0x4c496c, Func Offset: 0xc
	// Line 587, Address: 0x4c4970, Func Offset: 0x10
	// Line 596, Address: 0x4c4974, Func Offset: 0x14
	// Line 587, Address: 0x4c4978, Func Offset: 0x18
	// Line 588, Address: 0x4c498c, Func Offset: 0x2c
	// Line 587, Address: 0x4c4990, Func Offset: 0x30
	// Line 596, Address: 0x4c4994, Func Offset: 0x34
	// Line 587, Address: 0x4c4998, Func Offset: 0x38
	// Line 596, Address: 0x4c499c, Func Offset: 0x3c
	// Line 587, Address: 0x4c49a0, Func Offset: 0x40
	// Line 588, Address: 0x4c49b0, Func Offset: 0x50
	// Line 591, Address: 0x4c49b4, Func Offset: 0x54
	// Line 588, Address: 0x4c49b8, Func Offset: 0x58
	// Line 597, Address: 0x4c49c8, Func Offset: 0x68
	// Line 599, Address: 0x4c49dc, Func Offset: 0x7c
	// Line 601, Address: 0x4c49e0, Func Offset: 0x80
	// Line 599, Address: 0x4c49ec, Func Offset: 0x8c
	// Line 600, Address: 0x4c49f4, Func Offset: 0x94
	// Line 601, Address: 0x4c49fc, Func Offset: 0x9c
	// Line 603, Address: 0x4c4a08, Func Offset: 0xa8
	// Line 604, Address: 0x4c4a0c, Func Offset: 0xac
	// Line 605, Address: 0x4c4a98, Func Offset: 0x138
	// Line 613, Address: 0x4c4aa0, Func Offset: 0x140
	// Line 608, Address: 0x4c4aa4, Func Offset: 0x144
	// Line 613, Address: 0x4c4aa8, Func Offset: 0x148
	// Line 609, Address: 0x4c4aac, Func Offset: 0x14c
	// Line 620, Address: 0x4c4ab0, Func Offset: 0x150
	// Line 608, Address: 0x4c4ab4, Func Offset: 0x154
	// Line 609, Address: 0x4c4ad4, Func Offset: 0x174
	// Line 610, Address: 0x4c4ae8, Func Offset: 0x188
	// Line 611, Address: 0x4c4afc, Func Offset: 0x19c
	// Line 615, Address: 0x4c4b10, Func Offset: 0x1b0
	// Line 611, Address: 0x4c4b14, Func Offset: 0x1b4
	// Line 617, Address: 0x4c4b18, Func Offset: 0x1b8
	// Line 616, Address: 0x4c4b1c, Func Offset: 0x1bc
	// Line 615, Address: 0x4c4b24, Func Offset: 0x1c4
	// Line 613, Address: 0x4c4b28, Func Offset: 0x1c8
	// Line 616, Address: 0x4c4b34, Func Offset: 0x1d4
	// Line 617, Address: 0x4c4b38, Func Offset: 0x1d8
	// Line 616, Address: 0x4c4b3c, Func Offset: 0x1dc
	// Line 618, Address: 0x4c4b44, Func Offset: 0x1e4
	// Line 620, Address: 0x4c4b48, Func Offset: 0x1e8
	// Line 621, Address: 0x4c4b90, Func Offset: 0x230
	// Line 623, Address: 0x4c4d10, Func Offset: 0x3b0
	// Line 627, Address: 0x4c4d18, Func Offset: 0x3b8
	// Line 628, Address: 0x4c4d4c, Func Offset: 0x3ec
	// Line 630, Address: 0x4c4d88, Func Offset: 0x428
	// Line 631, Address: 0x4c4d94, Func Offset: 0x434
	// Line 636, Address: 0x4c4de0, Func Offset: 0x480
	// Line 633, Address: 0x4c4de4, Func Offset: 0x484
	// Line 636, Address: 0x4c4df0, Func Offset: 0x490
	// Line 637, Address: 0x4c4df4, Func Offset: 0x494
	// Line 633, Address: 0x4c4df8, Func Offset: 0x498
	// Line 637, Address: 0x4c4e04, Func Offset: 0x4a4
	// Line 634, Address: 0x4c4e08, Func Offset: 0x4a8
	// Line 636, Address: 0x4c4e34, Func Offset: 0x4d4
	// Line 637, Address: 0x4c4e3c, Func Offset: 0x4dc
	// Line 636, Address: 0x4c4e44, Func Offset: 0x4e4
	// Line 637, Address: 0x4c4e4c, Func Offset: 0x4ec
	// Line 638, Address: 0x4c4e54, Func Offset: 0x4f4
	// Line 639, Address: 0x4c4e58, Func Offset: 0x4f8
	// Line 638, Address: 0x4c4e5c, Func Offset: 0x4fc
	// Line 639, Address: 0x4c4e60, Func Offset: 0x500
	// Line 641, Address: 0x4c4e6c, Func Offset: 0x50c
	// Line 642, Address: 0x4c4e70, Func Offset: 0x510
	// Line 646, Address: 0x4c4e74, Func Offset: 0x514
	// Line 648, Address: 0x4c4e80, Func Offset: 0x520
	// Line 650, Address: 0x4c4e84, Func Offset: 0x524
	// Line 648, Address: 0x4c4e88, Func Offset: 0x528
	// Line 650, Address: 0x4c4e90, Func Offset: 0x530
	// Line 648, Address: 0x4c4e94, Func Offset: 0x534
	// Line 650, Address: 0x4c4e98, Func Offset: 0x538
	// Line 648, Address: 0x4c4e9c, Func Offset: 0x53c
	// Line 650, Address: 0x4c4ea0, Func Offset: 0x540
	// Line 651, Address: 0x4c4ea4, Func Offset: 0x544
	// Line 650, Address: 0x4c4ebc, Func Offset: 0x55c
	// Line 651, Address: 0x4c4ec0, Func Offset: 0x560
	// Line 650, Address: 0x4c4ed0, Func Offset: 0x570
	// Line 651, Address: 0x4c4ed8, Func Offset: 0x578
	// Line 650, Address: 0x4c4ee0, Func Offset: 0x580
	// Line 651, Address: 0x4c4ee4, Func Offset: 0x584
	// Func End, Address: 0x4c4eec, Func Offset: 0x58c
}

// update_pebble_particles__29@unnamed@zParticleCustom_cpp@FPUciR10ptank_poolfPv
// Start address: 0x4c4ef0
int32 update_pebble_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size& _fptank_pool;
	int32 _fptank_used;
	xVec3* pool_pos;
	xColor_tag* pool_color;
	xVec2* pool_size;
	pebble_particle* p;
	pebble_particle* end;
	float32 oldy;
	float32 plane_y;
	float32 under;
	xVec4 loc;
	// Line 437, Address: 0x4c4ef0, Func Offset: 0
	// Line 445, Address: 0x4c4ef4, Func Offset: 0x4
	// Line 437, Address: 0x4c4ef8, Func Offset: 0x8
	// Line 438, Address: 0x4c4f14, Func Offset: 0x24
	// Line 437, Address: 0x4c4f18, Func Offset: 0x28
	// Line 445, Address: 0x4c4f1c, Func Offset: 0x2c
	// Line 437, Address: 0x4c4f20, Func Offset: 0x30
	// Line 445, Address: 0x4c4f24, Func Offset: 0x34
	// Line 437, Address: 0x4c4f28, Func Offset: 0x38
	// Line 438, Address: 0x4c4f38, Func Offset: 0x48
	// Line 446, Address: 0x4c4f48, Func Offset: 0x58
	// Line 451, Address: 0x4c4f7c, Func Offset: 0x8c
	// Line 448, Address: 0x4c4f84, Func Offset: 0x94
	// Line 451, Address: 0x4c4f88, Func Offset: 0x98
	// Line 452, Address: 0x4c4f9c, Func Offset: 0xac
	// Line 453, Address: 0x4c4fb4, Func Offset: 0xc4
	// Line 455, Address: 0x4c4fc8, Func Offset: 0xd8
	// Line 460, Address: 0x4c4fd4, Func Offset: 0xe4
	// Line 461, Address: 0x4c4fd8, Func Offset: 0xe8
	// Line 457, Address: 0x4c4fdc, Func Offset: 0xec
	// Line 461, Address: 0x4c4fe0, Func Offset: 0xf0
	// Line 462, Address: 0x4c4fe4, Func Offset: 0xf4
	// Line 464, Address: 0x4c4ff0, Func Offset: 0x100
	// Line 466, Address: 0x4c4ffc, Func Offset: 0x10c
	// Line 468, Address: 0x4c5008, Func Offset: 0x118
	// Line 469, Address: 0x4c500c, Func Offset: 0x11c
	// Line 470, Address: 0x4c5048, Func Offset: 0x158
	// Line 475, Address: 0x4c5050, Func Offset: 0x160
	// Line 477, Address: 0x4c5060, Func Offset: 0x170
	// Line 478, Address: 0x4c506c, Func Offset: 0x17c
	// Line 477, Address: 0x4c5070, Func Offset: 0x180
	// Line 480, Address: 0x4c5074, Func Offset: 0x184
	// Line 478, Address: 0x4c507c, Func Offset: 0x18c
	// Line 480, Address: 0x4c5080, Func Offset: 0x190
	// Line 477, Address: 0x4c5084, Func Offset: 0x194
	// Line 478, Address: 0x4c508c, Func Offset: 0x19c
	// Line 479, Address: 0x4c5098, Func Offset: 0x1a8
	// Line 480, Address: 0x4c50a4, Func Offset: 0x1b4
	// Line 481, Address: 0x4c50b4, Func Offset: 0x1c4
	// Line 484, Address: 0x4c50c0, Func Offset: 0x1d0
	// Line 487, Address: 0x4c50c8, Func Offset: 0x1d8
	// Line 490, Address: 0x4c50cc, Func Offset: 0x1dc
	// Line 495, Address: 0x4c50d0, Func Offset: 0x1e0
	// Line 494, Address: 0x4c50d8, Func Offset: 0x1e8
	// Line 496, Address: 0x4c50dc, Func Offset: 0x1ec
	// Line 495, Address: 0x4c50e0, Func Offset: 0x1f0
	// Line 497, Address: 0x4c50e8, Func Offset: 0x1f8
	// Line 495, Address: 0x4c50ec, Func Offset: 0x1fc
	// Line 498, Address: 0x4c50f0, Func Offset: 0x200
	// Line 495, Address: 0x4c50f4, Func Offset: 0x204
	// Line 494, Address: 0x4c50f8, Func Offset: 0x208
	// Line 495, Address: 0x4c50fc, Func Offset: 0x20c
	// Line 496, Address: 0x4c5100, Func Offset: 0x210
	// Line 498, Address: 0x4c5104, Func Offset: 0x214
	// Line 499, Address: 0x4c514c, Func Offset: 0x25c
	// Line 501, Address: 0x4c5298, Func Offset: 0x3a8
	// Line 502, Address: 0x4c529c, Func Offset: 0x3ac
	// Line 501, Address: 0x4c52a0, Func Offset: 0x3b0
	// Line 502, Address: 0x4c52a4, Func Offset: 0x3b4
	// Line 503, Address: 0x4c52b8, Func Offset: 0x3c8
	// Line 505, Address: 0x4c52c4, Func Offset: 0x3d4
	// Line 506, Address: 0x4c52c8, Func Offset: 0x3d8
	// Line 510, Address: 0x4c52cc, Func Offset: 0x3dc
	// Line 512, Address: 0x4c52d8, Func Offset: 0x3e8
	// Line 514, Address: 0x4c52e0, Func Offset: 0x3f0
	// Line 512, Address: 0x4c52e4, Func Offset: 0x3f4
	// Line 514, Address: 0x4c52e8, Func Offset: 0x3f8
	// Line 515, Address: 0x4c52fc, Func Offset: 0x40c
	// Func End, Address: 0x4c5334, Func Offset: 0x444
}

// update_glint_particles__29@unnamed@zParticleCustom_cpp@FPUciR10ptank_poolfPv
// Start address: 0x4c5340
int32 update_glint_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__color_mat& _fptank_pool;
	int32 _fptank_used;
	xColor_tag* pool_color;
	xMat4x3* pool_mat;
	xMat4x3& cam_mat;
	float32 Ax;
	float32 Ay;
	float32 Az;
	glint_particle* p;
	glint_particle* end;
	float32 age1;
	float32 t1;
	float32 length;
	float32 Vx;
	float32 Vy;
	float32 Vz;
	float32 Uscale;
	float32 Ux;
	float32 Uy;
	float32 Uz;
	xVec4 loc;
	float32 Rx;
	float32 Ry;
	float32 Rz;
	float32 Rscale;
	// Line 295, Address: 0x4c5340, Func Offset: 0
	// Line 298, Address: 0x4c5344, Func Offset: 0x4
	// Line 295, Address: 0x4c5348, Func Offset: 0x8
	// Line 296, Address: 0x4c5364, Func Offset: 0x24
	// Line 295, Address: 0x4c5368, Func Offset: 0x28
	// Line 308, Address: 0x4c536c, Func Offset: 0x2c
	// Line 295, Address: 0x4c5370, Func Offset: 0x30
	// Line 298, Address: 0x4c53a4, Func Offset: 0x64
	// Line 296, Address: 0x4c53a8, Func Offset: 0x68
	// Line 308, Address: 0x4c53b0, Func Offset: 0x70
	// Line 296, Address: 0x4c53bc, Func Offset: 0x7c
	// Line 308, Address: 0x4c53c0, Func Offset: 0x80
	// Line 298, Address: 0x4c53c4, Func Offset: 0x84
	// Line 299, Address: 0x4c53cc, Func Offset: 0x8c
	// Line 309, Address: 0x4c53d8, Func Offset: 0x98
	// Line 311, Address: 0x4c53f4, Func Offset: 0xb4
	// Line 314, Address: 0x4c53f8, Func Offset: 0xb8
	// Line 311, Address: 0x4c5404, Func Offset: 0xc4
	// Line 313, Address: 0x4c540c, Func Offset: 0xcc
	// Line 314, Address: 0x4c5414, Func Offset: 0xd4
	// Line 316, Address: 0x4c5420, Func Offset: 0xe0
	// Line 317, Address: 0x4c5424, Func Offset: 0xe4
	// Line 318, Address: 0x4c5480, Func Offset: 0x140
	// Line 321, Address: 0x4c5488, Func Offset: 0x148
	// Line 322, Address: 0x4c54a4, Func Offset: 0x164
	// Line 323, Address: 0x4c54b0, Func Offset: 0x170
	// Line 338, Address: 0x4c54b8, Func Offset: 0x178
	// Line 326, Address: 0x4c54bc, Func Offset: 0x17c
	// Line 338, Address: 0x4c54c8, Func Offset: 0x188
	// Line 329, Address: 0x4c54d0, Func Offset: 0x190
	// Line 339, Address: 0x4c54d8, Func Offset: 0x198
	// Line 329, Address: 0x4c54dc, Func Offset: 0x19c
	// Line 338, Address: 0x4c54e4, Func Offset: 0x1a4
	// Line 329, Address: 0x4c54e8, Func Offset: 0x1a8
	// Line 341, Address: 0x4c54f0, Func Offset: 0x1b0
	// Line 333, Address: 0x4c54f4, Func Offset: 0x1b4
	// Line 339, Address: 0x4c54f8, Func Offset: 0x1b8
	// Line 333, Address: 0x4c54fc, Func Offset: 0x1bc
	// Line 342, Address: 0x4c5500, Func Offset: 0x1c0
	// Line 333, Address: 0x4c5504, Func Offset: 0x1c4
	// Line 339, Address: 0x4c5508, Func Offset: 0x1c8
	// Line 341, Address: 0x4c550c, Func Offset: 0x1cc
	// Line 338, Address: 0x4c5510, Func Offset: 0x1d0
	// Line 339, Address: 0x4c551c, Func Offset: 0x1dc
	// Line 340, Address: 0x4c5530, Func Offset: 0x1f0
	// Line 339, Address: 0x4c5534, Func Offset: 0x1f4
	// Line 340, Address: 0x4c5538, Func Offset: 0x1f8
	// Line 342, Address: 0x4c5548, Func Offset: 0x208
	// Line 343, Address: 0x4c5590, Func Offset: 0x250
	// Line 354, Address: 0x4c5704, Func Offset: 0x3c4
	// Line 351, Address: 0x4c5708, Func Offset: 0x3c8
	// Line 354, Address: 0x4c570c, Func Offset: 0x3cc
	// Line 351, Address: 0x4c5710, Func Offset: 0x3d0
	// Line 354, Address: 0x4c5714, Func Offset: 0x3d4
	// Line 351, Address: 0x4c5718, Func Offset: 0x3d8
	// Line 354, Address: 0x4c571c, Func Offset: 0x3dc
	// Line 351, Address: 0x4c5720, Func Offset: 0x3e0
	// Line 354, Address: 0x4c5724, Func Offset: 0x3e4
	// Line 351, Address: 0x4c5728, Func Offset: 0x3e8
	// Line 354, Address: 0x4c572c, Func Offset: 0x3ec
	// Line 351, Address: 0x4c5730, Func Offset: 0x3f0
	// Line 357, Address: 0x4c5734, Func Offset: 0x3f4
	// Line 351, Address: 0x4c5738, Func Offset: 0x3f8
	// Line 357, Address: 0x4c573c, Func Offset: 0x3fc
	// Line 365, Address: 0x4c574c, Func Offset: 0x40c
	// Line 357, Address: 0x4c5758, Func Offset: 0x418
	// Line 363, Address: 0x4c575c, Func Offset: 0x41c
	// Line 364, Address: 0x4c5774, Func Offset: 0x434
	// Line 365, Address: 0x4c5780, Func Offset: 0x440
	// Line 367, Address: 0x4c578c, Func Offset: 0x44c
	// Line 368, Address: 0x4c5790, Func Offset: 0x450
	// Line 372, Address: 0x4c5794, Func Offset: 0x454
	// Line 374, Address: 0x4c57a0, Func Offset: 0x460
	// Line 376, Address: 0x4c57a8, Func Offset: 0x468
	// Line 374, Address: 0x4c57b8, Func Offset: 0x478
	// Line 377, Address: 0x4c57bc, Func Offset: 0x47c
	// Line 376, Address: 0x4c57d4, Func Offset: 0x494
	// Line 377, Address: 0x4c57d8, Func Offset: 0x498
	// Line 376, Address: 0x4c5800, Func Offset: 0x4c0
	// Line 377, Address: 0x4c5808, Func Offset: 0x4c8
	// Line 376, Address: 0x4c580c, Func Offset: 0x4cc
	// Line 377, Address: 0x4c5810, Func Offset: 0x4d0
	// Func End, Address: 0x4c5824, Func Offset: 0x4e4
}

// update_spark_particles__29@unnamed@zParticleCustom_cpp@FPUciR10ptank_poolfPv
// Start address: 0x4c5830
int32 update_spark_particles(uint8* mem, int32 count, ptank_pool& apool, float32 dt)
{
	ptank_pool__pos_color_size& _fptank_pool;
	int32 _fptank_used;
	xVec3* pool_pos;
	xColor_tag* pool_color;
	xVec2* pool_size;
	spark_particle* p;
	spark_particle* end;
	float32 age1;
	float32 t1;
	xVec4 loc;
	// Line 184, Address: 0x4c5830, Func Offset: 0
	// Line 195, Address: 0x4c5834, Func Offset: 0x4
	// Line 184, Address: 0x4c5838, Func Offset: 0x8
	// Line 195, Address: 0x4c583c, Func Offset: 0xc
	// Line 184, Address: 0x4c5840, Func Offset: 0x10
	// Line 195, Address: 0x4c5844, Func Offset: 0x14
	// Line 184, Address: 0x4c5848, Func Offset: 0x18
	// Line 185, Address: 0x4c585c, Func Offset: 0x2c
	// Line 184, Address: 0x4c5860, Func Offset: 0x30
	// Line 195, Address: 0x4c5864, Func Offset: 0x34
	// Line 184, Address: 0x4c5868, Func Offset: 0x38
	// Line 195, Address: 0x4c586c, Func Offset: 0x3c
	// Line 184, Address: 0x4c5870, Func Offset: 0x40
	// Line 185, Address: 0x4c5878, Func Offset: 0x48
	// Line 196, Address: 0x4c5888, Func Offset: 0x58
	// Line 198, Address: 0x4c589c, Func Offset: 0x6c
	// Line 201, Address: 0x4c58a0, Func Offset: 0x70
	// Line 198, Address: 0x4c58ac, Func Offset: 0x7c
	// Line 200, Address: 0x4c58b4, Func Offset: 0x84
	// Line 201, Address: 0x4c58bc, Func Offset: 0x8c
	// Line 203, Address: 0x4c58c8, Func Offset: 0x98
	// Line 204, Address: 0x4c58cc, Func Offset: 0x9c
	// Line 205, Address: 0x4c5910, Func Offset: 0xe0
	// Line 211, Address: 0x4c5918, Func Offset: 0xe8
	// Line 210, Address: 0x4c591c, Func Offset: 0xec
	// Line 211, Address: 0x4c5928, Func Offset: 0xf8
	// Line 216, Address: 0x4c5934, Func Offset: 0x104
	// Line 210, Address: 0x4c5938, Func Offset: 0x108
	// Line 214, Address: 0x4c5944, Func Offset: 0x114
	// Line 211, Address: 0x4c5948, Func Offset: 0x118
	// Line 212, Address: 0x4c5958, Func Offset: 0x128
	// Line 211, Address: 0x4c5960, Func Offset: 0x130
	// Line 214, Address: 0x4c5964, Func Offset: 0x134
	// Line 212, Address: 0x4c5968, Func Offset: 0x138
	// Line 216, Address: 0x4c5974, Func Offset: 0x144
	// Line 218, Address: 0x4c59bc, Func Offset: 0x18c
	// Line 226, Address: 0x4c5b64, Func Offset: 0x334
	// Line 227, Address: 0x4c5b7c, Func Offset: 0x34c
	// Line 226, Address: 0x4c5b80, Func Offset: 0x350
	// Line 227, Address: 0x4c5b84, Func Offset: 0x354
	// Line 228, Address: 0x4c5b8c, Func Offset: 0x35c
	// Line 227, Address: 0x4c5b90, Func Offset: 0x360
	// Line 228, Address: 0x4c5b9c, Func Offset: 0x36c
	// Line 230, Address: 0x4c5ba4, Func Offset: 0x374
	// Line 231, Address: 0x4c5ba8, Func Offset: 0x378
	// Line 235, Address: 0x4c5bac, Func Offset: 0x37c
	// Line 237, Address: 0x4c5bb8, Func Offset: 0x388
	// Line 239, Address: 0x4c5bc0, Func Offset: 0x390
	// Line 237, Address: 0x4c5bcc, Func Offset: 0x39c
	// Line 239, Address: 0x4c5bd0, Func Offset: 0x3a0
	// Line 237, Address: 0x4c5bd4, Func Offset: 0x3a4
	// Line 239, Address: 0x4c5bd8, Func Offset: 0x3a8
	// Line 240, Address: 0x4c5bdc, Func Offset: 0x3ac
	// Line 239, Address: 0x4c5bec, Func Offset: 0x3bc
	// Line 240, Address: 0x4c5bf0, Func Offset: 0x3c0
	// Line 239, Address: 0x4c5bfc, Func Offset: 0x3cc
	// Line 240, Address: 0x4c5c00, Func Offset: 0x3d0
	// Line 239, Address: 0x4c5c08, Func Offset: 0x3d8
	// Line 240, Address: 0x4c5c0c, Func Offset: 0x3dc
	// Func End, Address: 0x4c5c18, Func Offset: 0x3e8
}

