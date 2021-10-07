typedef struct RpWorld;
typedef struct xUpdateCullGroup;
typedef struct RxClusterDefinition;
typedef struct xEntShadow;
typedef struct xQuat;
typedef struct xAnimEffect;
typedef struct xAnimPlay;
typedef struct xEnv;
typedef struct RwCamera;
typedef struct xClumpCollBSPVertInfo;
typedef struct xGlobals;
typedef struct _rpPTankSkyBufferInfo;
typedef enum _tagPadState;
typedef struct xFFX;
typedef struct xAnimTransitionList;
typedef struct xVec3;
typedef struct anim_coll_data;
typedef struct RpInterpolator;
typedef struct xClumpCollBSPTree;
typedef enum RxNodeDefEditable;
typedef struct RwFrustumPlane;
typedef struct RwRaster;
typedef struct xJSPHeader;
typedef struct xCollis;
typedef struct xCamGroup;
typedef struct RpAtomic;
typedef struct xJSPNodeLight;
typedef struct xEntFrame;
typedef enum RwFogType;
typedef struct xGroup;
typedef struct xCamScreen;
typedef struct RpTie;
typedef struct rxHeapBlockHeader;
typedef struct xBox;
typedef struct xMat4x3;
typedef struct RxIoSpec;
typedef struct xModelInstance;
typedef struct xClumpCollBSPBranchNode;
typedef struct RwTexture;
typedef struct xClumpCollBSPTriangle;
typedef struct xDynAsset;
typedef struct RwBBox;
typedef struct zSceneParameters;
typedef struct xBound;
typedef struct xScene;
typedef struct iEnvMatOrder;
typedef struct xModelBucket;
typedef struct xVec4;
typedef struct RpLight;
typedef struct RxPacket;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct _zPortal;
typedef struct zPlayer;
typedef enum xCamCoordType;
typedef struct xAnimMultiFile;
typedef struct xUpdateCullMgr;
typedef struct _tagxPad;
typedef struct xAnimTransition;
typedef struct xAnimFile;
typedef struct RxOutputSpec;
typedef struct xFXHighDynamicRangeConfiguration;
typedef struct RwFrame;
typedef struct _rpPTankSkyClusterInfo;
typedef struct zScene;
typedef struct xAnimState;
typedef struct iEnv;
typedef struct xSurface;
typedef struct xPortalAsset;
typedef struct _class_0;
typedef struct xAnimPhysicsData;
typedef struct PS2DemoGlobals;
typedef struct xLightKit;
typedef struct xColor_tag;
typedef struct RwSphere;
typedef struct RpWorldSector;
typedef struct xCam;
typedef struct xUpdateCullEnt;
typedef struct xSphere;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwV3d;
typedef struct xJSPNodeInfo;
typedef enum RxClusterValid;
typedef struct RpSector;
typedef struct xEnt;
typedef struct xCylinder;
typedef struct xRot;
typedef struct xCamCoordCylinder;
typedef struct RpClump;
typedef struct _xFColor;
typedef struct RwV2d;
typedef struct _tagiPad;
typedef struct RpPTankSkyData;
typedef struct RxPipelineCluster;
typedef struct tri_data;
typedef enum RxClusterValidityReq;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct xBBox;
typedef struct xMat3x3;
typedef struct _rpPTankSkyTransformInfo;
typedef struct RwMatrixTag;
typedef struct interpolator;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct xLightKitLight;
typedef struct xJSPNodeTreeLeaf;
typedef struct xCamCoordSphere;
typedef struct RpVertexNormal;
typedef struct xCamBlend;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct xJSPNodeTree;
typedef struct xEntAsset;
typedef struct iFogParams;
typedef struct xLinkAsset;
typedef struct _class_1;
typedef struct xGrid;
typedef struct _class_2;
typedef struct xEntCollis;
typedef struct RpMaterial;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct xGridBound;
typedef struct RwSkySplitBits128;
typedef struct xAnimTable;
typedef struct xBase;
typedef struct xGroupAsset;
typedef struct RwResEntry;
typedef struct xAnimMultiFileEntry;
typedef struct xVec2;
typedef struct xJSPNodeTreeBranch;
typedef struct RwObjectHasFrame;
typedef struct xQCData;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimActiveEffect;
typedef struct RwSplitBits;
typedef struct RwSurfaceProperties;
typedef struct analog_data;
typedef struct _zEnv;
typedef enum iSndHandle;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct xEnvAsset;
typedef struct xFXFastRaster;
typedef struct xShadowSimplePoly;
typedef struct xAnimMultiFileBase;
typedef struct xModelPool;
typedef enum xCamOrientType;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RpMeshHeader;
typedef struct RwSky2DVertex;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct xModelPipe;
typedef struct RxPipelineNodeParam;
typedef struct xCamOrientEuler;
typedef struct zEnt;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct xShadowSimpleCache;
typedef struct RwTexDictionary;
typedef struct _class_3;
typedef struct rxReq;
typedef struct downsample_pass_info;
typedef struct xMemPool;
typedef struct xBaseAsset;
typedef struct RwTexCoords;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct RwSky2DVertexFields;
typedef struct RwLinkList;
typedef struct xJSPMiniLightTie;
typedef struct xCamConfigCommon;
typedef struct RxNodeDefinition;
typedef struct _class_4;
typedef enum sceDemoEndReason;
typedef struct RpTriangle;
typedef struct xCamera;
typedef struct xFXCameraTexture;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RwObject;

typedef int8*(*type_2)(uint32);
typedef void(*type_4)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_15)(xAnimPlay*, xAnimState*, void*);
typedef RpAtomic*(*type_16)(RpAtomic*);
typedef void(*type_19)(xAnimState*, xAnimSingle*, void*);
typedef uint32(*type_20)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_21)(RpWorldSector*);
typedef void(*type_30)(void*);
typedef xBase*(*type_34)(uint32);
typedef int8*(*type_36)(xBase*);
typedef RwCamera*(*type_40)(RwCamera*);
typedef RwCamera*(*type_44)(RwCamera*);
typedef void(*type_45)(xEnt*, xScene*, float32, xEntCollis*);
typedef void(*type_46)(xEnt*, xScene*, float32, xEntFrame*);
typedef void(*type_50)(xEnt*, xScene*, float32);
typedef uint32(*type_54)(xEnt*, xEnt*, xScene*, float32, xCollis*);
typedef uint32(*type_55)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_57)(xEnt*);
typedef void(*type_63)(RwResEntry*);
typedef int32(*type_64)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_65)(RwObjectHasFrame*);
typedef void(*type_67)(RxPipelineNode*);
typedef void(*type_69)(xEnt*);
typedef int32(*type_73)(RxPipelineNode*);
typedef uint32(*type_74)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_77)(RxNodeDefinition*);
typedef void(*type_79)(xEnt*, xVec3*);
typedef int32(*type_80)(RxNodeDefinition*);
typedef uint32(*type_81)(void*, void*);
typedef int32(*type_83)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_89)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef RpClump*(*type_90)(RpClump*, void*);
typedef void(*type_97)(xMemPool*, void*);
typedef void(*type_98)(xEnt*, xVec3*, xMat4x3*);

typedef xCamBlend* type_0[4];
typedef RwV3d type_1[8];
typedef RwFrustumPlane type_3[6];
typedef uint16 type_5[3];
typedef xVec4 type_6[12];
typedef int8 type_7[16];
typedef xFXCameraTexture type_8[5];
typedef xVec4 type_9[12];
typedef int8 type_10[32];
typedef xJSPMiniLightTie type_11[16];
typedef RpLight* type_12[2];
typedef xVec3 type_13[4];
typedef uint32 type_14[4];
typedef RwFrame* type_17[2];
typedef uint32 type_18[4096];
typedef int8 type_22[127];
typedef RxCluster type_23[1];
typedef int8 type_24[4];
typedef xVec2 type_25[2];
typedef float32 type_26[2];
typedef RwSky2DVertex type_27[4];
typedef xVec2 type_28[4];
typedef _tagxPad* type_29[4];
typedef uint32 type_31[4];
typedef uint8 type_32[22];
typedef uint8 type_33[22];
typedef RwTexCoords* type_35[8];
typedef void* type_37[2];
typedef float32 type_38[3];
typedef _rpPTankSkyClusterInfo type_39[5];
typedef float32 type_41[16];
typedef uint8 type_42[2];
typedef <unknown fundamental type (0xa510)>* type_43[5];
typedef xFXCameraTexture type_47[5];
typedef float32 type_48[2];
typedef int8 type_49[128];
typedef int8 type_51[128][6];
typedef float32 type_52[22];
typedef _rpPTankSkyBufferInfo type_53[2];
typedef float32 type_56[22];
typedef RwSplitBits type_58[4];
typedef RwSkySplitBits128 type_59[5];
typedef float32 type_60[4];
typedef int8 type_61[32];
typedef ulong32 type_62[5];
typedef int32 type_66[141];
typedef int8 type_68[32];
typedef int8 type_70[32];
typedef xBase* type_71[141];
typedef int8 type_72[16];
typedef xVec3 type_75[3];
typedef uint32 type_76[1];
typedef ulong32 type_78[2];
typedef analog_data type_82[2];
typedef downsample_pass_info type_84[5];
typedef uint8 type_85[3];
typedef uint32 type_86[2];
typedef xVec2 type_87[2];
typedef uint8 type_88[4];
typedef xAnimMultiFileEntry type_91[1];
typedef RwTexCoords* type_92[8];
typedef xCollis type_93[18];
typedef int8 type_94[16];
typedef int32 type_95[9];
typedef <unknown fundamental type (0xa510)> type_96[4];
typedef xCam* type_99[32];
typedef downsample_pass_info type_100[5];
typedef RwResEntry* type_101[2];
typedef void* type_102[9];
typedef void* type_103[9][2];

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

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xClumpCollBSPVertInfo
{
	uint16 atomIndex;
	uint16 meshVertIndex;
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

struct _rpPTankSkyBufferInfo
{
	RwSkySplitBits128 callTag;
	uint32 refCnt;
	uint32 clrCnt;
	uint32 limit;
	uint32 start;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xFFX
{
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct anim_coll_data
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

struct xClumpCollBSPTree
{
	int32 numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	int32 numTriangles;
	xClumpCollBSPTriangle* triangles;
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
		_class_1 tuv;
		tri_data tri;
	};
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

struct xJSPNodeLight
{
	RpAtomic* atomic;
	int32 lightCount;
	RpTie dummyTie;
	RpWorldSector dummySector;
	xJSPMiniLightTie dummyLightTie[16];
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct xCamScreen
{
	RwCamera* icam;
	float32 fov;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xClumpCollBSPBranchNode
{
	uint32 leftInfo;
	uint32 rightInfo;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	uint8 flags;
	uint8 detailed_info_cache_index;
	uint16 matIndex;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct iEnvMatOrder
{
	uint16 jspIndex;
	uint16 nodeIndex;
	int32 matGroup;
	RpAtomic* atomic;
	xJSPNodeInfo* nodeInfo;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xFXHighDynamicRangeConfiguration
{
	int32 glow;
	int32 darken;
	int32 downsamples;
	float32 overbrighten;
	float32 overbrighten_decay;
	uint8 blur_faster;
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

struct _rpPTankSkyClusterInfo
{
	uint32 cluster;
	uint32 batchSize;
	uint32 constSize;
	uint32 batchUnpack;
	uint32 constUnpack;
	uint32 cmd;
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

struct xSurface
{
};

struct xPortalAsset : xBaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xAnimPhysicsData
{
	xVec3* tranTable;
	float32* yawTable;
	int32 tranCount;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
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

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct _xFColor
{
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _tagiPad
{
	int32 port;
};

struct RpPTankSkyData
{
	_rpPTankSkyBufferInfo buffers[2];
	RwSkySplitBits128 clusterTags[5];
	ulong32 clusterStrides[5];
	ulong32 alpha;
	ulong32 clamp;
	ulong32 test;
	ulong32 tex1;
	int32 fastPipe;
	int32 refillDMApacket;
	int32 frameBuffering;
	int32 frameIdx;
	int32 bufferedFrame;
	uint32 instFlag[2];
	uint8 vuStride[4];
	void* vuCode;
	_rpPTankSkyTransformInfo* transformInfo;
	int32 clusterConst[9];
	uint32 maxBatches;
	uint32 tagBatchSize;
	uint32 dataBatchSize;
	uint32 tagConstSize;
	uint32 dataConstSize;
	RwResEntry* resEntry[2];
	void* clusters[9][2];
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct tri_data
{
	uint32 index;
	float32 r;
	float32 d;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct _rpPTankSkyTransformInfo
{
	ulong32 prim;
	ulong32 regs;
	uint32 batchSize;
	uint32 offset;
	uint32 numClusters;
	void* vuCode[2];
	_rpPTankSkyClusterInfo clusters[5];
	uint32 pad;
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

struct interpolator
{
	int32 value;
	float32 start;
	float32 end;
	float32 current;
	float32 t;
	float32 trate;
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

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xJSPNodeTreeLeaf
{
	int32 nodeIndex;
	int32 leafCount;
	RwBBox box;
};

struct xCamCoordSphere
{
	xVec3 origin;
	float32 dist;
	xQuat dir;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xCamBlend : xCam
{
	xCam* src;
	xCam* dst;
	float32 time;
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

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _class_1
{
	float32 t;
	float32 u;
	float32 v;
};

struct xGrid
{
};

struct _class_2
{
	xVec3* verts;
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

struct RwSkySplitBits128
{
	union
	{
		<unknown fundamental type (0xa510)> field128;
		ulong32 field_64[2];
		RwSplitBits field_32[4];
	};
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xVec2
{
	float32 x;
	float32 y;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSplitBits
{
	union
	{
		float32 nReal;
		int32 nInt;
		uint32 nUInt;
	};
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

enum iSndHandle
{
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

struct xFXFastRaster
{
	RwRaster* src;
	RwRaster* dst;
	uint32 fbmsk;
	uint32 test;
	uint32 old_alpha_1;
};

struct xShadowSimplePoly
{
	xVec3 vert[3];
	xVec3 norm;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct xModelPipe
{
	uint32 Flags;
	uint8 Layer;
	uint8 AlphaDiscard;
	uint16 PipePad;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xCamOrientEuler
{
	float32 yaw;
	float32 pitch;
	float32 roll;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct rxReq
{
};

struct downsample_pass_info
{
	xVec2* offset;
	int32 resamples;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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
	union
	{
		xQuat quat;
		xCamOrientEuler euler;
	};
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

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
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
uint8 HDR_brightening;
float32 overbrighten;
float32 overbrighten_decay;
int32 downsamples;
uint8 blur_faster;
float32 colorize_red;
float32 colorize_green;
float32 colorize_blue;
float32 colorize_alpha;
uint8 enabled;
int32 background_glow_normal;
int32 background_darken_normal;
interpolator background_glow;
interpolator background_darken;
int32 saved_alpha_test;
<unknown fundamental type (0xa510)>* blur_packet[5];
xVec2 diagonal_00_11_offsets[2];
xVec2 diagonal_01_10_offsets[2];
xVec2 square_offsets[4];
downsample_pass_info downsample_passes_fast[5];
downsample_pass_info downsample_passes_slow[5];
xFXCameraTexture blurbuffer[5];
RwRaster* backbuffer_raster;
xFXCameraTexture downbuffer[5];
int32 old_alpha_test;
int32 our_alpha_test;
int32 _rpPTankAtomicDataOffset;
<unknown fundamental type (0xa510)>* _rwDMAGateSlot;
xColor_tag g_WHITE;
uint32 ourGlobals[4096];
xColor_tag g_BLACK;
xGlobals* xglobals;
xColor_tag g_MAGENTA;
uint32 FB_YRES;
uint32 FB_XRES;

void xFXHighDynamicRangeSetBackgroundDefault(int32 glow, int32 darken, uint8 apply);
void xFXHighDynamicRangeResetGlowClamp();
void xFXHighDynamicRangeSetGlowClamp(int32 glow_min, uint8 dest_test);
void xFXHighDynamicRangeGetConfiguration(xFXHighDynamicRangeConfiguration& configuration);
void xFXHighDynamicRangeSetConfiguration(xFXHighDynamicRangeConfiguration& configuration);
int32 xFXHighDynamicRangeGetBackgroundGlow();
void xFXHighDynamicRangeUpdate(float32 dt);
void xFXHighDynamicRangeTunePalette(RwRaster* raster, float32 base_alpha, uint8 additive);
void xFXHighDynamicRangeRestorePtank(RpAtomic* ptank, uint32 oldtest);
uint32 xFXHighDynamicRangeBrightenPtank(RpAtomic* ptank, uint8 bright);
void xFXHighDynamicRangeRender();
void xFXHighDynamicRangeStartRender();
void xFXHighDynamicRangeReset();
void xFXHighDynamicRangeSceneExit();
void xFXHighDynamicRangeSceneEnter();
void xFXHighDynamicRangeInit();

// xFXHighDynamicRangeSetBackgroundDefault__Fiib
// Start address: 0x46d840
void xFXHighDynamicRangeSetBackgroundDefault(int32 glow, int32 darken, uint8 apply)
{
	// Line 2485, Address: 0x46d840, Func Offset: 0
	// Line 2486, Address: 0x46d878, Func Offset: 0x38
	// Line 2487, Address: 0x46d8b8, Func Offset: 0x78
	// Line 2492, Address: 0x46d8c0, Func Offset: 0x80
	// Line 2489, Address: 0x46d8c8, Func Offset: 0x88
	// Line 2492, Address: 0x46d8cc, Func Offset: 0x8c
	// Line 2490, Address: 0x46d920, Func Offset: 0xe0
	// Line 2492, Address: 0x46d924, Func Offset: 0xe4
	// Func End, Address: 0x46d944, Func Offset: 0x104
}

// xFXHighDynamicRangeResetGlowClamp__Fv
// Start address: 0x46d950
void xFXHighDynamicRangeResetGlowClamp()
{
	int32 alpha_test;
	// Line 2395, Address: 0x46d950, Func Offset: 0
	// Line 2398, Address: 0x46d954, Func Offset: 0x4
	// Line 2395, Address: 0x46d958, Func Offset: 0x8
	// Line 2398, Address: 0x46d95c, Func Offset: 0xc
	// Line 2406, Address: 0x46d964, Func Offset: 0x14
	// Line 2407, Address: 0x46d968, Func Offset: 0x18
	// Line 2412, Address: 0x46d974, Func Offset: 0x24
	// Func End, Address: 0x46d980, Func Offset: 0x30
}

// xFXHighDynamicRangeSetGlowClamp__Fib
// Start address: 0x46d980
void xFXHighDynamicRangeSetGlowClamp(int32 glow_min, uint8 dest_test)
{
	// Line 2382, Address: 0x46d980, Func Offset: 0
	// Line 2384, Address: 0x46d984, Func Offset: 0x4
	// Line 2382, Address: 0x46d988, Func Offset: 0x8
	// Line 2384, Address: 0x46d994, Func Offset: 0x14
	// Line 2385, Address: 0x46d9d4, Func Offset: 0x54
	// Line 2390, Address: 0x46d9e0, Func Offset: 0x60
	// Line 2391, Address: 0x46d9f4, Func Offset: 0x74
	// Line 2392, Address: 0x46da00, Func Offset: 0x80
	// Func End, Address: 0x46da14, Func Offset: 0x94
}

// xFXHighDynamicRangeGetConfiguration__FR32xFXHighDynamicRangeConfiguration
// Start address: 0x46da20
void xFXHighDynamicRangeGetConfiguration(xFXHighDynamicRangeConfiguration& configuration)
{
	// Line 2369, Address: 0x46da20, Func Offset: 0
	// Line 2370, Address: 0x46da28, Func Offset: 0x8
	// Line 2369, Address: 0x46da2c, Func Offset: 0xc
	// Line 2370, Address: 0x46da30, Func Offset: 0x10
	// Line 2371, Address: 0x46da38, Func Offset: 0x18
	// Line 2372, Address: 0x46da40, Func Offset: 0x20
	// Line 2373, Address: 0x46da48, Func Offset: 0x28
	// Line 2374, Address: 0x46da50, Func Offset: 0x30
	// Line 2375, Address: 0x46da54, Func Offset: 0x34
	// Func End, Address: 0x46da5c, Func Offset: 0x3c
}

// xFXHighDynamicRangeSetConfiguration__FRC32xFXHighDynamicRangeConfiguration
// Start address: 0x46da60
void xFXHighDynamicRangeSetConfiguration(xFXHighDynamicRangeConfiguration& configuration)
{
	// Line 2362, Address: 0x46da60, Func Offset: 0
	// Line 2360, Address: 0x46da64, Func Offset: 0x4
	// Line 2363, Address: 0x46da68, Func Offset: 0x8
	// Line 2361, Address: 0x46da6c, Func Offset: 0xc
	// Line 2358, Address: 0x46da70, Func Offset: 0x10
	// Line 2359, Address: 0x46da78, Func Offset: 0x18
	// Line 2362, Address: 0x46da80, Func Offset: 0x20
	// Line 2360, Address: 0x46da84, Func Offset: 0x24
	// Line 2363, Address: 0x46da88, Func Offset: 0x28
	// Line 2361, Address: 0x46da8c, Func Offset: 0x2c
	// Line 2358, Address: 0x46da90, Func Offset: 0x30
	// Line 2365, Address: 0x46da94, Func Offset: 0x34
	// Func End, Address: 0x46da9c, Func Offset: 0x3c
}

// xFXHighDynamicRangeGetBackgroundGlow__Fv
// Start address: 0x46daa0
int32 xFXHighDynamicRangeGetBackgroundGlow()
{
	// Line 2348, Address: 0x46daa0, Func Offset: 0
	// Line 2349, Address: 0x46daa4, Func Offset: 0x4
	// Func End, Address: 0x46daac, Func Offset: 0xc
}

// xFXHighDynamicRangeUpdate__Ff
// Start address: 0x46dab0
void xFXHighDynamicRangeUpdate(float32 dt)
{
	// Line 2328, Address: 0x46dab0, Func Offset: 0
	// Line 2329, Address: 0x46dab8, Func Offset: 0x8
	// Line 2330, Address: 0x46db88, Func Offset: 0xd8
	// Line 2339, Address: 0x46dc4c, Func Offset: 0x19c
	// Func End, Address: 0x46dc54, Func Offset: 0x1a4
}

// xFXHighDynamicRangeTunePalette__FP8RwRasterfb
// Start address: 0x46dc60
void xFXHighDynamicRangeTunePalette(RwRaster* raster, float32 base_alpha, uint8 additive)
{
	int32 format;
	int32 palette_size;
	float32 min_alpha;
	xColor_tag* start_color;
	xColor_tag* color;
	xColor_tag* end_color;
	// Line 1311, Address: 0x46dc60, Func Offset: 0
	// Line 1312, Address: 0x46dc88, Func Offset: 0x28
	// Line 1313, Address: 0x46dc90, Func Offset: 0x30
	// Line 1317, Address: 0x46dc9c, Func Offset: 0x3c
	// Line 1319, Address: 0x46dca8, Func Offset: 0x48
	// Line 1320, Address: 0x46dcb4, Func Offset: 0x54
	// Line 1322, Address: 0x46dcb8, Func Offset: 0x58
	// Line 1323, Address: 0x46dcc8, Func Offset: 0x68
	// Line 1322, Address: 0x46dccc, Func Offset: 0x6c
	// Line 1323, Address: 0x46dcd0, Func Offset: 0x70
	// Line 1322, Address: 0x46dcd4, Func Offset: 0x74
	// Line 1323, Address: 0x46dcd8, Func Offset: 0x78
	// Line 1325, Address: 0x46dd00, Func Offset: 0xa0
	// Line 1329, Address: 0x46dd60, Func Offset: 0x100
	// Line 1333, Address: 0x46dd6c, Func Offset: 0x10c
	// Line 1335, Address: 0x46dd70, Func Offset: 0x110
	// Line 1337, Address: 0x46dd78, Func Offset: 0x118
	// Line 1340, Address: 0x46dd80, Func Offset: 0x120
	// Line 1341, Address: 0x46dd9c, Func Offset: 0x13c
	// Line 1342, Address: 0x46ddac, Func Offset: 0x14c
	// Line 1345, Address: 0x46ddb0, Func Offset: 0x150
	// Line 1351, Address: 0x46ddbc, Func Offset: 0x15c
	// Line 1345, Address: 0x46ddd4, Func Offset: 0x174
	// Line 1351, Address: 0x46dde0, Func Offset: 0x180
	// Line 1348, Address: 0x46dde8, Func Offset: 0x188
	// Line 1351, Address: 0x46de2c, Func Offset: 0x1cc
	// Line 1352, Address: 0x46de44, Func Offset: 0x1e4
	// Line 1354, Address: 0x46de50, Func Offset: 0x1f0
	// Line 1378, Address: 0x46de5c, Func Offset: 0x1fc
	// Line 1318, Address: 0x46de64, Func Offset: 0x204
	// Line 1378, Address: 0x46de78, Func Offset: 0x218
	// Func End, Address: 0x46de9c, Func Offset: 0x23c
}

// xFXHighDynamicRangeRestorePtank__FP8RpAtomicUi
// Start address: 0x46dea0
void xFXHighDynamicRangeRestorePtank(RpAtomic* ptank, uint32 oldtest)
{
	// Line 1307, Address: 0x46dea0, Func Offset: 0
	// Line 1308, Address: 0x46deb8, Func Offset: 0x18
	// Func End, Address: 0x46dec0, Func Offset: 0x20
}

// xFXHighDynamicRangeBrightenPtank__FP8RpAtomicb
// Start address: 0x46dec0
uint32 xFXHighDynamicRangeBrightenPtank(RpAtomic* ptank, uint8 bright)
{
	RpPTankSkyData* sky_ptank_data;
	uint32 oldtest;
	// Line 1278, Address: 0x46dec0, Func Offset: 0
	// Line 1284, Address: 0x46ded0, Func Offset: 0x10
	// Line 1290, Address: 0x46ded8, Func Offset: 0x18
	// Line 1291, Address: 0x46df2c, Func Offset: 0x6c
	// Line 1297, Address: 0x46df34, Func Offset: 0x74
	// Line 1301, Address: 0x46df4c, Func Offset: 0x8c
	// Func End, Address: 0x46df54, Func Offset: 0x94
}

// xFXHighDynamicRangeRender__FP8RwCamera
// Start address: 0x46df60
void xFXHighDynamicRangeRender()
{
	xFXFastRaster fr;
	int32 i;
	int32 j;
	RwRaster* backbuffer_raster;
	uint32 msb;
	uint32 lsb;
	float32 u;
	float32 v;
	_xFColor colorize;
	float32 overbrighten;
	float32 alpha;
	float32 resample_alpha;
	int32 resamples;
	RwRaster* final_raster;
	float32 darken_alpha;
	// Line 1085, Address: 0x46df60, Func Offset: 0
	// Line 1089, Address: 0x46df94, Func Offset: 0x34
	// Line 1092, Address: 0x46dfa4, Func Offset: 0x44
	// Line 1089, Address: 0x46dfa8, Func Offset: 0x48
	// Line 1092, Address: 0x46dfac, Func Offset: 0x4c
	// Line 1093, Address: 0x46dfb8, Func Offset: 0x58
	// Line 1094, Address: 0x46dfc8, Func Offset: 0x68
	// Line 1097, Address: 0x46dfd8, Func Offset: 0x78
	// Line 1101, Address: 0x46dfe0, Func Offset: 0x80
	// Line 1104, Address: 0x46dfec, Func Offset: 0x8c
	// Line 1109, Address: 0x46dff8, Func Offset: 0x98
	// Line 1110, Address: 0x46e008, Func Offset: 0xa8
	// Line 1111, Address: 0x46e00c, Func Offset: 0xac
	// Line 1110, Address: 0x46e014, Func Offset: 0xb4
	// Line 1111, Address: 0x46e018, Func Offset: 0xb8
	// Line 1116, Address: 0x46e020, Func Offset: 0xc0
	// Line 1117, Address: 0x46e034, Func Offset: 0xd4
	// Line 1120, Address: 0x46e048, Func Offset: 0xe8
	// Line 1121, Address: 0x46e05c, Func Offset: 0xfc
	// Line 1122, Address: 0x46e074, Func Offset: 0x114
	// Line 1124, Address: 0x46e080, Func Offset: 0x120
	// Line 1125, Address: 0x46e0ac, Func Offset: 0x14c
	// Line 1124, Address: 0x46e0b0, Func Offset: 0x150
	// Line 1125, Address: 0x46e0b4, Func Offset: 0x154
	// Line 1124, Address: 0x46e0b8, Func Offset: 0x158
	// Line 1125, Address: 0x46e0c0, Func Offset: 0x160
	// Line 1124, Address: 0x46e0c4, Func Offset: 0x164
	// Line 1125, Address: 0x46e0c8, Func Offset: 0x168
	// Line 1124, Address: 0x46e0cc, Func Offset: 0x16c
	// Line 1125, Address: 0x46e0d4, Func Offset: 0x174
	// Line 1141, Address: 0x46e0dc, Func Offset: 0x17c
	// Line 1142, Address: 0x46e0e4, Func Offset: 0x184
	// Line 1143, Address: 0x46e0f8, Func Offset: 0x198
	// Line 1149, Address: 0x46e114, Func Offset: 0x1b4
	// Line 1150, Address: 0x46e134, Func Offset: 0x1d4
	// Line 1151, Address: 0x46e148, Func Offset: 0x1e8
	// Line 1152, Address: 0x46e15c, Func Offset: 0x1fc
	// Line 1154, Address: 0x46e164, Func Offset: 0x204
	// Line 1157, Address: 0x46e174, Func Offset: 0x214
	// Line 1158, Address: 0x46e17c, Func Offset: 0x21c
	// Line 1159, Address: 0x46e1d0, Func Offset: 0x270
	// Line 1158, Address: 0x46e1d4, Func Offset: 0x274
	// Line 1159, Address: 0x46e1d8, Func Offset: 0x278
	// Line 1158, Address: 0x46e1dc, Func Offset: 0x27c
	// Line 1159, Address: 0x46e1e4, Func Offset: 0x284
	// Line 1158, Address: 0x46e1e8, Func Offset: 0x288
	// Line 1159, Address: 0x46e1f0, Func Offset: 0x290
	// Line 1158, Address: 0x46e1f8, Func Offset: 0x298
	// Line 1159, Address: 0x46e1fc, Func Offset: 0x29c
	// Line 1163, Address: 0x46e204, Func Offset: 0x2a4
	// Line 1164, Address: 0x46e214, Func Offset: 0x2b4
	// Line 1166, Address: 0x46e23c, Func Offset: 0x2dc
	// Line 1167, Address: 0x46e268, Func Offset: 0x308
	// Line 1166, Address: 0x46e26c, Func Offset: 0x30c
	// Line 1167, Address: 0x46e278, Func Offset: 0x318
	// Line 1166, Address: 0x46e27c, Func Offset: 0x31c
	// Line 1167, Address: 0x46e29c, Func Offset: 0x33c
	// Line 1168, Address: 0x46e2a4, Func Offset: 0x344
	// Line 1167, Address: 0x46e2a8, Func Offset: 0x348
	// Line 1168, Address: 0x46e2ac, Func Offset: 0x34c
	// Line 1170, Address: 0x46e2b8, Func Offset: 0x358
	// Line 1171, Address: 0x46e2c0, Func Offset: 0x360
	// Line 1173, Address: 0x46e2d0, Func Offset: 0x370
	// Line 1175, Address: 0x46e308, Func Offset: 0x3a8
	// Line 1176, Address: 0x46e318, Func Offset: 0x3b8
	// Line 1179, Address: 0x46e328, Func Offset: 0x3c8
	// Line 1180, Address: 0x46e338, Func Offset: 0x3d8
	// Line 1181, Address: 0x46e350, Func Offset: 0x3f0
	// Line 1182, Address: 0x46e360, Func Offset: 0x400
	// Line 1185, Address: 0x46e374, Func Offset: 0x414
	// Line 1186, Address: 0x46e37c, Func Offset: 0x41c
	// Line 1187, Address: 0x46e38c, Func Offset: 0x42c
	// Line 1189, Address: 0x46e3a4, Func Offset: 0x444
	// Line 1190, Address: 0x46e3bc, Func Offset: 0x45c
	// Line 1192, Address: 0x46e3d0, Func Offset: 0x470
	// Line 1193, Address: 0x46e3e4, Func Offset: 0x484
	// Line 1195, Address: 0x46e3ec, Func Offset: 0x48c
	// Line 1198, Address: 0x46e3fc, Func Offset: 0x49c
	// Line 1199, Address: 0x46e404, Func Offset: 0x4a4
	// Line 1200, Address: 0x46e438, Func Offset: 0x4d8
	// Line 1199, Address: 0x46e43c, Func Offset: 0x4dc
	// Line 1200, Address: 0x46e44c, Func Offset: 0x4ec
	// Line 1199, Address: 0x46e450, Func Offset: 0x4f0
	// Line 1200, Address: 0x46e468, Func Offset: 0x508
	// Line 1203, Address: 0x46e470, Func Offset: 0x510
	// Line 1204, Address: 0x46e47c, Func Offset: 0x51c
	// Line 1206, Address: 0x46e48c, Func Offset: 0x52c
	// Line 1207, Address: 0x46e4c8, Func Offset: 0x568
	// Line 1206, Address: 0x46e4cc, Func Offset: 0x56c
	// Line 1207, Address: 0x46e4d8, Func Offset: 0x578
	// Line 1206, Address: 0x46e4dc, Func Offset: 0x57c
	// Line 1207, Address: 0x46e4fc, Func Offset: 0x59c
	// Line 1208, Address: 0x46e504, Func Offset: 0x5a4
	// Line 1210, Address: 0x46e518, Func Offset: 0x5b8
	// Line 1211, Address: 0x46e520, Func Offset: 0x5c0
	// Line 1212, Address: 0x46e52c, Func Offset: 0x5cc
	// Line 1211, Address: 0x46e534, Func Offset: 0x5d4
	// Line 1212, Address: 0x46e540, Func Offset: 0x5e0
	// Line 1220, Address: 0x46e54c, Func Offset: 0x5ec
	// Line 1222, Address: 0x46e578, Func Offset: 0x618
	// Line 1223, Address: 0x46e588, Func Offset: 0x628
	// Line 1227, Address: 0x46e5a0, Func Offset: 0x640
	// Line 1228, Address: 0x46e5e0, Func Offset: 0x680
	// Line 1230, Address: 0x46e5f4, Func Offset: 0x694
	// Line 1231, Address: 0x46e5fc, Func Offset: 0x69c
	// Line 1232, Address: 0x46e608, Func Offset: 0x6a8
	// Line 1241, Address: 0x46e610, Func Offset: 0x6b0
	// Line 1246, Address: 0x46e620, Func Offset: 0x6c0
	// Line 1247, Address: 0x46e624, Func Offset: 0x6c4
	// Line 1246, Address: 0x46e628, Func Offset: 0x6c8
	// Line 1247, Address: 0x46e634, Func Offset: 0x6d4
	// Line 1246, Address: 0x46e644, Func Offset: 0x6e4
	// Line 1247, Address: 0x46e65c, Func Offset: 0x6fc
	// Line 1248, Address: 0x46e664, Func Offset: 0x704
	// Line 1249, Address: 0x46e670, Func Offset: 0x710
	// Line 1254, Address: 0x46e684, Func Offset: 0x724
	// Line 1262, Address: 0x46e68c, Func Offset: 0x72c
	// Line 1264, Address: 0x46e6a4, Func Offset: 0x744
	// Line 1265, Address: 0x46e6b0, Func Offset: 0x750
	// Line 1268, Address: 0x46e6c8, Func Offset: 0x768
	// Line 1269, Address: 0x46e6d4, Func Offset: 0x774
	// Func End, Address: 0x46e70c, Func Offset: 0x7ac
}

// xFXHighDynamicRangeStartRender__Fv
// Start address: 0x46e710
void xFXHighDynamicRangeStartRender()
{
	xColor_tag color;
	xFXFastRaster fr;
	// Line 862, Address: 0x46e710, Func Offset: 0
	// Line 863, Address: 0x46e718, Func Offset: 0x8
	// Line 866, Address: 0x46e724, Func Offset: 0x14
	// Line 867, Address: 0x46e72c, Func Offset: 0x1c
	// Line 870, Address: 0x46e738, Func Offset: 0x28
	// Line 874, Address: 0x46e73c, Func Offset: 0x2c
	// Line 870, Address: 0x46e740, Func Offset: 0x30
	// Line 874, Address: 0x46e744, Func Offset: 0x34
	// Line 880, Address: 0x46e750, Func Offset: 0x40
	// Line 883, Address: 0x46e77c, Func Offset: 0x6c
	// Line 886, Address: 0x46e790, Func Offset: 0x80
	// Line 887, Address: 0x46e79c, Func Offset: 0x8c
	// Line 888, Address: 0x46e7b8, Func Offset: 0xa8
	// Line 887, Address: 0x46e7bc, Func Offset: 0xac
	// Line 888, Address: 0x46e7c8, Func Offset: 0xb8
	// Line 889, Address: 0x46e7d4, Func Offset: 0xc4
	// Line 892, Address: 0x46e7dc, Func Offset: 0xcc
	// Line 901, Address: 0x46e7ec, Func Offset: 0xdc
	// Line 905, Address: 0x46e844, Func Offset: 0x134
	// Line 881, Address: 0x46e854, Func Offset: 0x144
	// Line 905, Address: 0x46e858, Func Offset: 0x148
	// Line 881, Address: 0x46e85c, Func Offset: 0x14c
	// Line 905, Address: 0x46e860, Func Offset: 0x150
	// Line 882, Address: 0x46e868, Func Offset: 0x158
	// Line 905, Address: 0x46e870, Func Offset: 0x160
	// Func End, Address: 0x46e87c, Func Offset: 0x16c
}

// xFXHighDynamicRangeReset__Fv
// Start address: 0x46e880
void xFXHighDynamicRangeReset()
{
	// Line 855, Address: 0x46e880, Func Offset: 0
	// Line 857, Address: 0x46e88c, Func Offset: 0xc
	// Line 858, Address: 0x46e8a0, Func Offset: 0x20
	// Line 857, Address: 0x46e8a4, Func Offset: 0x24
	// Line 858, Address: 0x46e8a8, Func Offset: 0x28
	// Line 857, Address: 0x46e8b0, Func Offset: 0x30
	// Line 858, Address: 0x46e8b4, Func Offset: 0x34
	// Line 857, Address: 0x46e8b8, Func Offset: 0x38
	// Line 858, Address: 0x46e8c8, Func Offset: 0x48
	// Line 857, Address: 0x46e8d4, Func Offset: 0x54
	// Line 858, Address: 0x46e8d8, Func Offset: 0x58
	// Line 857, Address: 0x46e8e0, Func Offset: 0x60
	// Line 858, Address: 0x46e8ec, Func Offset: 0x6c
	// Line 859, Address: 0x46e900, Func Offset: 0x80
	// Func End, Address: 0x46e908, Func Offset: 0x88
}

// xFXHighDynamicRangeSceneExit__Fv
// Start address: 0x46e910
void xFXHighDynamicRangeSceneExit()
{
	// Line 851, Address: 0x46e910, Func Offset: 0
	// Func End, Address: 0x46e918, Func Offset: 0x8
}

// xFXHighDynamicRangeSceneEnter__Fv
// Start address: 0x46e920
void xFXHighDynamicRangeSceneEnter()
{
	// Line 838, Address: 0x46e920, Func Offset: 0
	// Func End, Address: 0x46e928, Func Offset: 0x8
}

// xFXHighDynamicRangeInit__Fv
// Start address: 0x46e930
void xFXHighDynamicRangeInit()
{
	int32 width;
	int32 height;
	int32 i;
	int32 awidth;
	// Line 791, Address: 0x46e930, Func Offset: 0
	// Line 792, Address: 0x46e934, Func Offset: 0x4
	// Line 791, Address: 0x46e938, Func Offset: 0x8
	// Line 801, Address: 0x46e948, Func Offset: 0x18
	// Line 791, Address: 0x46e94c, Func Offset: 0x1c
	// Line 817, Address: 0x46e958, Func Offset: 0x28
	// Line 791, Address: 0x46e95c, Func Offset: 0x2c
	// Line 817, Address: 0x46e960, Func Offset: 0x30
	// Line 792, Address: 0x46e964, Func Offset: 0x34
	// Line 817, Address: 0x46e968, Func Offset: 0x38
	// Line 797, Address: 0x46e96c, Func Offset: 0x3c
	// Line 800, Address: 0x46e970, Func Offset: 0x40
	// Line 797, Address: 0x46e974, Func Offset: 0x44
	// Line 817, Address: 0x46e978, Func Offset: 0x48
	// Line 798, Address: 0x46e97c, Func Offset: 0x4c
	// Line 800, Address: 0x46e980, Func Offset: 0x50
	// Line 798, Address: 0x46e984, Func Offset: 0x54
	// Line 801, Address: 0x46e988, Func Offset: 0x58
	// Line 811, Address: 0x46e990, Func Offset: 0x60
	// Line 817, Address: 0x46e99c, Func Offset: 0x6c
	// Line 811, Address: 0x46e9a0, Func Offset: 0x70
	// Line 817, Address: 0x46e9ac, Func Offset: 0x7c
	// Line 811, Address: 0x46e9b0, Func Offset: 0x80
	// Line 817, Address: 0x46e9bc, Func Offset: 0x8c
	// Line 811, Address: 0x46e9c0, Func Offset: 0x90
	// Line 817, Address: 0x46e9c4, Func Offset: 0x94
	// Line 803, Address: 0x46e9d4, Func Offset: 0xa4
	// Line 817, Address: 0x46e9dc, Func Offset: 0xac
	// Line 804, Address: 0x46e9e8, Func Offset: 0xb8
	// Line 817, Address: 0x46e9ec, Func Offset: 0xbc
	// Line 805, Address: 0x46e9f0, Func Offset: 0xc0
	// Line 817, Address: 0x46e9f4, Func Offset: 0xc4
	// Line 804, Address: 0x46e9f8, Func Offset: 0xc8
	// Line 817, Address: 0x46e9fc, Func Offset: 0xcc
	// Line 807, Address: 0x46ea10, Func Offset: 0xe0
	// Line 817, Address: 0x46ea24, Func Offset: 0xf4
	// Line 813, Address: 0x46ea30, Func Offset: 0x100
	// Line 817, Address: 0x46ea34, Func Offset: 0x104
	// Line 813, Address: 0x46ea38, Func Offset: 0x108
	// Line 817, Address: 0x46ea3c, Func Offset: 0x10c
	// Line 813, Address: 0x46ea40, Func Offset: 0x110
	// Line 817, Address: 0x46ea44, Func Offset: 0x114
	// Line 813, Address: 0x46ea48, Func Offset: 0x118
	// Line 817, Address: 0x46ea4c, Func Offset: 0x11c
	// Line 813, Address: 0x46ea50, Func Offset: 0x120
	// Line 817, Address: 0x46ea58, Func Offset: 0x128
	// Line 823, Address: 0x46ea80, Func Offset: 0x150
	// Line 817, Address: 0x46ea84, Func Offset: 0x154
	// Line 823, Address: 0x46ea88, Func Offset: 0x158
	// Line 817, Address: 0x46ea8c, Func Offset: 0x15c
	// Line 823, Address: 0x46eabc, Func Offset: 0x18c
	// Line 829, Address: 0x46eac4, Func Offset: 0x194
	// Line 833, Address: 0x46eb48, Func Offset: 0x218
	// Func End, Address: 0x46eb70, Func Offset: 0x240
}

