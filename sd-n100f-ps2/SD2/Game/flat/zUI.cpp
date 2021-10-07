typedef struct RxPipelineCluster;
typedef struct RxPipelineRequiresCluster;
typedef struct RxPipeline;
typedef struct _tagxCam;
typedef struct _xRot;
typedef struct xAnimActiveEffect;
typedef struct rxReq;
typedef struct xBase;
typedef struct _tagxRumble;
typedef struct RpWorldSector;
typedef struct zCutsceneZbufferHack;
typedef enum RwFogType;
typedef struct xMemPool;
typedef struct _xEnt;
typedef struct _zEnt;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RwTexture;
typedef struct tag_xFile;
typedef struct RwTexCoords;
typedef struct RwResEntry;
typedef struct sceCdlFILE;
typedef struct _xEntFrame;
typedef struct xModelInstance;
typedef struct xAnimSingle;
typedef struct _zUI;
typedef struct xCutsceneInfo;
typedef struct tag_iFile;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwRaster;
typedef struct RxOutputSpec;
typedef struct RpWorld;
typedef enum RxClusterForcePresent;
typedef struct RpGeometry;
typedef struct RwTexDictionary;
typedef struct RwFrame;
typedef struct xAnimTable;
typedef struct RxClusterRef;
typedef struct RpAtomic;
typedef enum RxNodeDefEditable;
typedef struct RpVertexNormal;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct xAnimEffect;
typedef struct p2LinkAsset;
typedef struct xAnimTransition;
typedef struct _zCutsceneMgr;
typedef struct RpSector;
typedef struct RxIoSpec;
typedef struct RpMaterial;
typedef struct _xEntCollis;
typedef struct RxClusterDefinition;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct rxHeapFreeBlock;
typedef struct zCutsceneMgrAsset;
typedef struct _tagxCamFollow;
typedef struct xAnimState;
typedef struct xCutscene;
typedef struct zUIAsset;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct RxNodeMethods;
typedef struct _xVec3;
typedef struct zScene;
typedef struct p2EntHangableAsset;
typedef enum _tagRumbleType;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpClump;
typedef struct RwSurfaceProperties;
typedef struct RxNodeDefinition;
typedef struct _xCollis;
typedef struct _xSphere;
typedef struct RpLight;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct _tagxCamPathAsset;
typedef struct RpPolygon;
typedef struct _zEntHangable;
typedef struct RxCluster;
typedef struct RpTriangle;
typedef struct zSceneLevel;
typedef struct rxHeapBlockHeader;
typedef struct _xCylinder;
typedef enum RxClusterValidityReq;
typedef struct zShaggy1Globals;
typedef struct RwSky2DVertexFields;
typedef struct _xEnv;
typedef struct RwSphere;
typedef struct xCutsceneTime;
typedef struct iEnv;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCamShoulder;
typedef struct RxPacket;
typedef struct p2EntAsset;
typedef struct xCutsceneData;
typedef struct zCheckPoint;
typedef struct _xBox;
typedef enum RwTextureAddressMode;
typedef struct iModelTag;
typedef struct RxPipelineNode;
typedef enum RwCameraProjection;
typedef struct RpCollSector;
typedef struct xSerial;
typedef struct xModelPool;
typedef struct _tagxCamFollowAsset;
typedef struct xFFX;
typedef struct zGlobalGameStats;
typedef struct RwObjectHasFrame;
typedef struct xCamAsset;
typedef struct RpMeshHeader;
typedef struct xAnimPlay;
typedef struct RxPipelineNodeParam;
typedef struct xQCData;
typedef enum _tagCamType;
typedef struct _xEntShadow;
typedef struct xAnimFile;
typedef struct p2BaseAsset;
typedef struct iFogParams;
typedef struct _xBBox;
typedef struct zJumpParam;
typedef struct xAnimTransitionList;
typedef struct zAssetPickupTable;
typedef struct RwRGBA;
typedef struct _iCollis;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct RpInterpolator;
typedef struct _tagxCamStatic;
typedef struct zGlobals;
typedef struct RwRGBAReal;
typedef struct zPortalAsset;
typedef struct _tagxPad;
typedef struct xCutsceneBreak;
typedef struct RwCamera;
typedef struct RwV2d;
typedef struct _tagxCamFrame;
typedef enum _tagPadState;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct _xMat4x3;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _tagiPad;
typedef struct RwSky2DVertex;
typedef struct _zPortal;
typedef enum RwTextureFilterMode;
typedef struct zPlayerStatic;
typedef struct _tagxCamStaticFollow;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct zCutsceneZbuffer;
typedef struct _xQuat;
typedef struct RwFrustumPlane;
typedef enum RpWorldRenderOrder;
typedef struct iShadowCache;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct _zPlatform;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct RwLinkList;
typedef struct _xRect;
typedef struct _tagxCamPath;
typedef struct _xEntDrive;
typedef struct _tagp2CamStaticAsset;

typedef void(*type_0)(RxPipelineNode*);
typedef RpClump*(*type_2)(RpClump*, void*);
typedef int32(*type_3)(RxPipelineNode*, RxPipeline*);
typedef void(*type_6)(int32);
typedef RpWorldSector*(*type_8)(RpWorldSector*);
typedef uint32(*type_9)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_10)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_12)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_15)(RwResEntry*);
typedef RwCamera*(*type_22)(RwCamera*);
typedef void(*type_25)(_xEnt*, _xScene*, float32);
typedef RwCamera*(*type_27)(RwCamera*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef void(*type_36)(_xEnt*);
typedef xBase*(*type_38)(xBase*, zScene*, void*);
typedef void(*type_41)(_xEnt*);
typedef void(*type_42)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_43)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_44)(_xEnt*, _xVec3*);
typedef xBase*(*type_45)(uint32);
typedef uint32(*type_46)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int8*(*type_49)(xBase*);
typedef int8*(*type_55)(uint32);
typedef void(*type_59)(_xEnt*, _xVec3*);
typedef void(*type_60)(xMemPool*, void*);
typedef void(*type_63)(_zUI*, _xScene*, float32);
typedef int32(*type_66)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_69)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RwObjectHasFrame*(*type_70)(RwObjectHasFrame*);
typedef int32(*type_71)(RxNodeDefinition*);
typedef void(*type_75)(RxNodeDefinition*);
typedef int32(*type_81)(RxPipelineNode*);
typedef int32(*type_85)(void*, void*);
typedef int32(*type_106)(xBase*, xBase*, uint32, float32*, xBase*);

typedef float32 type_1[3];
typedef uint8 type_4[3];
typedef float32 type_5[3];
typedef zGlobalGameStats type_7[30];
typedef zCutsceneZbuffer type_11[4];
typedef zGlobalGameStats type_13[13];
typedef uint32 type_14[2];
typedef _zEnt* type_16[10];
typedef zGlobalGameStats type_17[4];
typedef uint32 type_18[1];
typedef int8 type_19[16];
typedef int8 type_20[128];
typedef uint8 type_21[3];
typedef int32 type_23[2];
typedef uint8 type_24[8];
typedef int8 type_26[32];
typedef int32 type_28[2];
typedef uint32 type_29[2];
typedef uint8 type_30[22];
typedef int8 type_31[32];
typedef uint32 type_32[43];
typedef zSceneLevel type_33[14];
typedef uint32 type_34[2];
typedef uint8 type_37[22];
typedef xBase* type_39[43];
typedef uint32 type_40[2];
typedef float32 type_47[4];
typedef int8 type_48[16];
typedef uint32 type_50[2];
typedef int8 type_51[16];
typedef uint16 type_52[3];
typedef RwFrustumPlane type_53[6];
typedef uint16 type_54[3];
typedef RwV3d type_56[8];
typedef _zUI* type_57[768];
typedef float32 type_58[2];
typedef RwSky2DVertex type_61[4];
typedef float32 type_62[15];
typedef float32 type_64[15];
typedef uint32 type_65[15];
typedef _xCollis type_67[18];
typedef float32 type_68[4];
typedef int8 type_72[256];
typedef uint8 type_73[8];
typedef uint8 type_74[8];
typedef RpLight* type_76[2];
typedef uint8 type_77[8];
typedef RwTexCoords* type_78[8];
typedef int8 type_79[5];
typedef RwFrame* type_80[2];
typedef uint8 type_82[8];
typedef <unknown fundamental type (0xa510)> type_83[4];
typedef iModelTag type_84[4];
typedef int8 type_86[16];
typedef uint16 type_87[2];
typedef float32 type_88[4];
typedef uint8 type_89[3];
typedef float32 type_90[4];
typedef RwTexCoords* type_91[8];
typedef float32 type_92[2];
typedef float32 type_93[2];
typedef uint8 type_94[2];
typedef int8 type_95[128];
typedef int8 type_96[128][6];
typedef float32 type_97[2];
typedef _xVec4 type_98[8];
typedef uint16 type_99[6];
typedef RxCluster type_100[1];
typedef float32 type_101[2];
typedef float32 type_102[4];
typedef uint32 type_103[4];
typedef float32 type_104[4];
typedef int8 type_105[32];
typedef float32 type_107[4];
typedef int8 type_108[256];
typedef uint8 type_109[3];
typedef _xVec3 type_110[2];
typedef float32 type_111[4];
typedef _xVec3 type_112[4];
typedef float32 type_113[4];
typedef _xQuat type_114[2];

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _tagxCam : xBase
{
	uint32 valid_flags;
	_tagCamType cam_type;
	uint32 flags;
	_xMat4x3 mat;
	_xQuat rot;
	float32 fov;
	float32 trans_time;
	_tagTransType trans_type;
	_xVec3 view_offset;
	_tagCamInfo u;
	xCamAsset* asset;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct rxReq
{
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RpWorldSector
{
	int32 type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	RwTexCoords* texCoords[8];
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpCollSector* colSectorRoot;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xEnt : xBase
{
	p2EntAsset* asset;
	uint8 flags;
	uint8 subType;
	uint8 pflags;
	uint8 moreFlags;
	uint8 pad0[3];
	uint8 num_ffx;
	uint16 idx;
	uint16 num_updates;
	float32 material_alpha;
	float32 fade_tmr;
	uint8 collType;
	uint8 collLev;
	uint8 chkby;
	uint8 penby;
	xModelInstance* model;
	void(*update)(_xEnt*, _xScene*, float32);
	void(*bupdate)(_xEnt*, _xVec3*);
	void(*move)(_xEnt*, _xScene*, float32, _xEntFrame*);
	void(*render)(_xEnt*);
	_xEntFrame* frame;
	_xEntCollis* collis;
	_xBound bound;
	float32 updateTimer;
	float32 updateAcc;
	void(*updateTimerFunc)(_xEnt*);
	void(*transl)(_xEnt*, _xVec3*);
	iShadowCache ishadow;
	xSurface* surf;
	xFFX* ffx;
	_xEnt* driver;
	_xEntShadow* ent_shadow;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct _xBound
{
	uint8 type;
	uint8 pad[3];
	union
	{
		_xSphere sph;
		_xBBox box;
		_xCylinder cyl;
	};
	_xMat4x3* mat;
	xQCData qcd;
};

struct _xScene
{
	uint16 flags;
	uint16 num_ents;
	uint16 num_trigs;
	uint16 num_stats;
	uint16 num_dyns;
	uint16 num_npcs;
	uint16 num_act_ents;
	uint16 num_nact_ents;
	float32 gravity;
	float32 drag;
	float32 friction;
	uint16 num_ents_allocd;
	uint16 num_trigs_allocd;
	uint16 num_stats_allocd;
	uint16 num_dyns_allocd;
	uint16 num_npcs_allocd;
	_xEnt** trigs;
	_xEnt** stats;
	_xEnt** dyns;
	_xEnt** npcs;
	_xEnt** act_ents;
	_xEnt** nact_ents;
	_xEnv* env;
	xMemPool mempool;
	xBase*(*resolvID)(uint32);
	int8*(*base2Name)(xBase*);
	int8*(*id2Name)(uint32);
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	int32 refCount;
	RwTextureFilterMode filtering;
	RwTextureAddressMode addressingU;
	RwTextureAddressMode addressingV;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct _xEntFrame
{
	_xMat4x3 mat;
	_xMat4x3 dmat;
	_xVec3 oldpos;
	_xVec3 oldvel;
	_xRot oldrot;
	_xRot drot;
	_xRot rot;
	_xVec3 dpos;
	_xVec3 dvel;
	_xVec3 vel;
	uint32 mode;
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	void* Object;
	uint16 Flags;
	uint8 BoneCount;
	uint8 BoneIndex;
	uint8* BoneRemap;
	RwMatrixTag* Mat;
	_xVec3 Scale;
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
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	float32 LastTime;
	_xVec3 LastTranslation;
	float32 LastYaw;
	uint32 pad;
	_xQuat LastQuat;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
};

struct _zUI : _zEnt
{
	zUIAsset* sasset;
	uint32 uiFlags;
	uint32 uiButton;
};

struct xCutsceneInfo
{
	uint32 Magic;
	uint32 AssetID;
	uint32 NumData;
	uint32 NumTime;
	uint32 MaxModel;
	uint32 MaxBufEven;
	uint32 MaxBufOdd;
	uint32 HeaderSize;
	uint32 VisCount;
	uint32 VisSize;
	uint32 BreakCount;
	uint32 pad;
	int8 SoundLeft[16];
	int8 SoundRight[16];
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	RwSurfaceProperties surfaceProps;
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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
	RwSurfaceProperties ignoredSurfaceProps;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _tagCamInfo
{
	union
	{
		_tagxCamFollow f;
		_tagxCamStatic s;
		_tagxCamShoulder sh;
		_tagxCamPath p;
		_tagxCamStaticFollow sf;
	};
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct p2LinkAsset
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct RpSector
{
	int32 type;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct _xEntCollis
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
	uint8 trig_idx;
	uint8 idx;
	_xCollis colls[18];
	void(*post)(_xEnt*, _xScene*, float32, _xEntCollis*);
	uint32(*depenq)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
	uint8 trigs_cur[8];
	uint8 trigs_prev[8];
	uint8 trigs_entered[8];
	uint8 trigs_exited[8];
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zPlayerGlobals
{
	_zEnt ent;
	uint32 Visible;
	uint32 Health;
	int32 Speed;
	int32 Sneak;
	int32 Teeter;
	int32 CanSlip;
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
	uint32 HeadbuttHit;
	float32 ScareTimer;
	xBase* ScareSource;
	uint32 ScareShaggy;
	float32 CowerTimer;
	float32 DamageTimer;
	float32 ControlOffTimer;
	float32 HelmetTimer;
	uint32 WorldDisguise;
	uint32 Bounced;
	float32 FallDeathTimer;
	float32 HeadbuttVel;
	float32 HeadbuttTimer;
	uint32 SpecialReceived;
	_xEnt* MountChimney;
	float32 MountChimOldY;
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
	_zEnt* FireTarget;
	_zEnt* DamageSource;
	uint32 ControlOn;
	uint32 ControlOnEvent;
	uint32 AutoMoveSpeed;
	float32 AutoMoveDist;
	_xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	_zEnt* Diggable;
	float32 DigTimer;
	zShaggy1Globals Shaggy1;
	_zEnt* Shaggy8Call;
	float32 Shaggy8CallTimer;
	_zEntHangable* HangFound;
	_zEntHangable* HangEnt;
	_zEntHangable* HangEntLast;
	_xVec3 HangPivot;
	_xVec3 HangVel;
	float32 HangLength;
	_xVec3 HangStartPos;
	float32 HangStartLerp;
	iModelTag HangPawTag[4];
	float32 HangPawOffset;
	float32 HangElapsed;
	float32 Jump_CurrGravity;
	float32 Jump_HoldTimer;
	float32 Jump_ChangeTimer;
	int32 Jump_CanDouble;
	int32 Jump_CanFloat;
	int32 Jump_SpringboardStart;
	_zPlatform* Jump_Springboard;
	int32 cheat_mode;
	uint32 Inv_Clue;
	uint32 Inv_Key;
	uint32 Inv_Chances;
	uint32 Inv_ScoobySnacks;
	uint32 Inv_Specials;
	uint32 Inv_Mtokens[1];
	int32 Inv_Ammo[2];
	int32 Inv_AmmoMax[2];
	iModelTag BubbleTag;
	_xEntDrive drv;
	xSurface* floor_surf;
	_xVec3 floor_norm;
	int32 slope;
	_xCollis earc_coll;
	_xSphere head_sph;
	iModelTag center_tag;
	iModelTag head_tag;
	uint32 TongueFlags[2];
	_xVec3 RootUp;
	_xVec3 RootUpTarget;
	zPlayerStatic s;
	zCheckPoint cp;
};

struct xSurface : xBase
{
	uint32 idx;
	uint32 type;
	union
	{
		uint32 mat_idx;
		_xEnt* ent;
		void* obj;
	};
	float32 friction;
	uint8 state;
	uint8 pad[3];
	void* moprops;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	uint32* TimeChunkOffs;
	uint32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	uint32 Waiting;
	void* RawBuf;
	void* AlignBuf;
	float32 Time;
	float32 CamTime;
	uint32 PlayIndex;
	uint32 Ready;
	int32 DataLoading;
	uint32 GotData;
	uint32 ShutDownWait;
	float32 PlaybackSpeed;
	uint32 Opened;
	tag_xFile File;
	uint32 CurrSector;
	void* MemBuf;
	void* MemCurr;
	uint32 SndStarted;
	uint32 SndNumChannel;
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
};

struct zUIAsset : p2EntAsset
{
	uint32 uiFlags;
	uint16 dim[2];
	uint32 textureID;
	float32 uva[2];
	float32 uvb[2];
	float32 uvc[2];
	float32 uvd[2];
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct zScene : _xScene
{
	uint32 sceneID;
	_zPortal* pendingPortal;
	union
	{
		uint32 num_ents;
		uint32 num_base;
	};
	union
	{
		xBase** base;
		_zEnt** ents;
	};
	uint32 baseCount[43];
	xBase* baseList[43];
	uint32 num_bubbles;
	_zEnt** bubbles;
};

struct p2EntHangableAsset
{
	uint32 flags;
	float32 pivotOffset;
	float32 leverArm;
	float32 gravity;
	float32 accel;
	float32 decay;
	float32 grabDelay;
	float32 stopDecel;
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _xCollis
{
	uint32 flags;
	uint32 oid;
	void* optr;
	float32 dist;
	_xVec3 norm;
	_xVec3 tohit;
	_xVec3 depen;
	_xVec3 hdng;
	_iCollis ixtra;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _zEntHangable : _zEnt
{
	p2EntHangableAsset* hangInfo;
	_xVec3 pivot;
	_xVec3 endpos;
	_xVec3 vel;
	_xVec3 swingplane;
	float32 grabTimer;
	float32 spin;
	uint32 state;
	_zEnt* shaggy;
	int32 enabled;
	_zEnt* follow;
	int32 moving;
	float32 candle_timer;
	int32 candle_state;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct zSceneLevel
{
	int8* desc;
	int8 name;
	int32 index;
	uint32 totalClues;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zShaggy1Globals
{
	_zEnt* GrabTry;
	_zEnt* Grab;
	float32 GrabRot;
	float32 GrabOffset;
	float32 GrabTimer;
	_xVec3 ReleaseTrans;
	_xVec3 HangTrans;
	_xVec3 LastDelta;
	uint32 ThrowEnded;
	float32 ExtraTransY;
	_xVec3 ThrowPos;
	_xVec3 ThrowVel;
	uint32 CatchMe;
	uint32 CatchYou;
	_zEnt* HangTarget;
	float32 ThrowTimer;
	_xVec3 HangStart;
	_xVec3 HangRelative;
	uint32 SetDown;
	uint32 GrabOn;
	uint32 ThrowState;
	float32 ThrowRot;
	float32 CatchHeight;
	float32 CatchVel;
	xBase* ThrowTgt;
	float32 ThrowTgtAngle;
	float32 ThrowTgtPeak;
	float32 ThrowTgtOffset;
	uint32 ThrowTgtAdjust;
	_xVec3 ThrowTgtVec;
	float32 ThrowTgtSpeed;
	float32 ThrowAccel;
	_zEnt* Hangable[10];
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	RpLight* light[2];
	RwFrame* light_frame[2];
	int32 memlvl;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct p2EntAsset : p2BaseAsset
{
	uint8 flags;
	uint8 subtype;
	uint8 pflags;
	uint8 moreFlags;
	uint32 surfaceID;
	_xVec3 ang;
	_xVec3 pos;
	_xVec3 scale;
	float32 redMult;
	float32 greenMult;
	float32 blueMult;
	float32 seeThru;
	float32 seeThruSpeed;
	uint32 modelInfoID;
	uint32 animListID;
};

struct xCutsceneData
{
	uint32 DataType;
	uint32 AssetID;
	uint32 ChunkSize;
	union
	{
		uint32 FileOffset;
		void* DataPtr;
	};
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct xFFX
{
};

struct zGlobalGameStats
{
	float32 gameTime;
	uint32 visited;
	float32 levelTime;
	float32 levelTime_sum;
	float32 areaTime;
	float32 areaTime_sum;
	float32 roomTime;
	float32 roomTime_sum;
	float32 timeRunning;
	float32 timeRunning_sum;
	float32 timeWalking;
	float32 timeWalking_sum;
	uint32 scares;
	uint32 scares_sum;
	uint32 deaths;
	uint32 deaths_sum;
	uint32 singleJumps;
	uint32 singleJumps_sum;
	uint32 doubleJumps;
	uint32 doubleJumps_sum;
	uint32 gumShot;
	uint32 gumShot_sum;
	uint32 gumHit;
	uint32 gumHit_sum;
	uint32 gumEmpty;
	uint32 gumEmpty_sum;
	uint32 soapShot;
	uint32 soapShot_sum;
	uint32 soapHit;
	uint32 soapHit_sum;
	uint32 soapEmpty;
	uint32 soapEmpty_sum;
	uint32 food;
	uint32 food_sum;
	uint32 snackBoxes;
	uint32 snackBoxes_sum;
	uint32 enemyKills;
	uint32 enemyKills_sum;
	uint32 enemyCount;
	uint32 enemyCount_sum;
	uint32 specials;
	uint32 specials_tot;
	uint32 tokens;
	uint32 tokens_tot;
	uint32 snacks;
	uint32 snacks_tot;
	uint32 chances;
	uint32 chances_tot;
	uint32 keys;
	uint32 keys_tot;
	uint32 clues;
	uint32 clues_tot;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct xCamAsset : p2BaseAsset
{
	_xVec3 pos;
	_xVec3 at;
	_xVec3 up;
	_xVec3 right;
	_xVec3 view_offset;
	int16 offset_start_frames;
	int16 offset_end_frames;
	float32 fov;
	float32 trans_time;
	_tagTransType trans_type;
	uint32 flags;
	float32 fade_up;
	float32 fade_down;
	union
	{
		_tagxCamFollowAsset cam_follow;
		_tagxCamShoulderAsset cam_shoulder;
		_tagp2CamStaticAsset cam_static;
		_tagxCamPathAsset cam_path;
		_tagp2CamStaticFollowAsset cam_staticFollow;
	};
	uint32 valid_flags;
	uint32 markerid[2];
	uint8 cam_type;
	uint8 pad[3];
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	uint16 NumSingle;
	uint16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	_xVec3 Translate[2];
	uint32 pad1;
	_xQuat Quat[2];
	float32 Yaw;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	uint32 pad2;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

enum _tagCamType
{
	eCamType_Follow,
	eCamType_FollowWithOffset,
	eCamType_Static,
	eCamType_Path,
	eCamType_StaticFollow,
	eCamType_Shoulder,
	eCamType_Total
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	float32 PhysBase[4];
	float32 PhysDelta[4];
	uint16 BoneCount;
	uint8 NumAnims[2];
	void** RawData;
	void* Physics;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _iCollis
{
	int32 unknown;
};

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
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

struct _tagxCamStatic
{
	uint32 unused;
};

struct zGlobals
{
	_tagxCamFrame camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	int32 profile;
	_zCutsceneMgr* cmgr;
	int8 profFunc[128][6];
	zScene* sceneCur;
	zScene* scenePreload;
	int32 sceneFirst;
	int8 sceneStart[32];
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long32 fog_t0;
	long32 fog_t1;
	zGlobalGameStats stats;
	zGlobalGameStats areaStats[30];
	zGlobalGameStats levelStats[13];
	zGlobalGameStats worldStats[4];
	int32 option_vibration;
	float32 update_dt;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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
	_tagxRumble rumble_head;
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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
	uint16 renderFrame;
	uint16 pad;
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _tagxCamFrame
{
	RwCamera* lo_cam;
	_tagxCam orig_cam;
	_tagxCam hi_cam;
	_xVec4 frustplane[8];
	_tagxCam* t_cam;
	float32 t_time;
	float32 g_time;
	_xEnv* env;
	_xVec3* target_pos;
	_xMat4x3* target_frame;
	_xVec3 pre_align_dir;
	_tagxCam** cameras;
	uint32 total_cameras;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

enum _tagTransType
{
	eTransType_None,
	eTransType_Interp1,
	eTransType_Interp2,
	eTransType_Interp3,
	eTransType_Interp4,
	eTransType_Linear,
	eTransType_Interp1Rev,
	eTransType_Interp2Rev,
	eTransType_Interp3Rev,
	eTransType_Interp4Rev,
	eTransType_Total
};

struct _xMat4x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
	_xVec3 pos;
	uint32 pad3;
};

struct st_SERIAL_CLIENTINFO
{
};

struct _tagiPad
{
	int32 port;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

enum RwTextureFilterMode
{
	rwFILTERNAFILTERMODE,
	rwFILTERNEAREST,
	rwFILTERLINEAR,
	rwFILTERMIPNEAREST,
	rwFILTERMIPLINEAR,
	rwFILTERLINEARMIPNEAREST,
	rwFILTERLINEARMIPLINEAR,
	rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct zPlayerStatic
{
	uint16 AnalogMin;
	uint16 AnalogMax;
	float32 SpeedSneak[4];
	float32 SpeedWalk[4];
	float32 SpeedRun[4];
	float32 SpeedAir[4];
	float32 SpeedHotsauce[4];
	float32 AnimSneak[3];
	float32 AnimWalk[3];
	float32 Gravity;
	float32 JumpGravity;
	float32 GravSmooth;
	float32 FloatSpeed;
	float32 ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Double;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Toss;
	float32 HeadbuttSpeedMin;
	float32 HeadbuttSpeedMax;
	float32 HeadbuttAccel;
	float32 HeadbuttTimeMin;
	float32 HeadbuttTimeMax;
	float32 HeadbuttTurn;
	float32 FireDelay;
	float32 FireRepeat;
	float32 FirePress;
	float32 FireTargetYaw;
	float32 FireTargetPitch;
	float32 FireTargetDist;
	float32 FireTargetRadius;
	float32 FireTrack;
	float32 FireGumSpeed;
	float32 FireSoapSpeed;
	float32 FireGumTimer;
	float32 FireSoapTimer;
	uint32 Initial_Specials;
	uint32 TakeDamage;
	float32 StartSlideAngle;
	float32 StopSlideAngle;
	float32 RotMatchMaxAngle;
	float32 RotMatchMatchTime;
	float32 RotMatchRelaxTime;
	uint16 AmmoCapacityGum;
	uint16 AmmoCapacitySoap;
	uint16 AmmoSceneGum;
	uint16 AmmoSceneSoap;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct _zPlatform
{
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _xRect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct _xEntDrive
{
	uint32 flags;
	float32 otm;
	float32 otmr;
	float32 os;
	float32 tm;
	float32 tmr;
	float32 s;
	_xEnt* odriver;
	_xEnt* driver;
	_xEnt* driven;
	_xVec3 op;
	_xVec3 p;
	_xVec3 q;
	float32 yaw;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

uint32 sSortedCount;
_zUI* sSorted[768];
RwSky2DVertex Vertex[4];
uint16 Index[6];
uint32 cKeyUIid1off;
uint32 cKeyUIid2off;
uint32 cKeyUIid3off;
uint32 cKeyUIid4off;
uint32 cKeyUIid1on;
uint32 cKeyUIid2on;
uint32 cKeyUIid3on;
uint32 cKeyUIid4on;
zSceneLevel sLevelTable2[14];
float32 ushift;
float32 gFontWiggleTime;
zGlobals globals;
int32(*iRenderQSort_Face)(void*, void*);
xBase*(*zUIRenderIteratorInsert)(xBase*, zScene*, void*);
int32(*zUIEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zUI_Update)(_zUI*, _xScene*, float32);

int32 zUIEventCB(xBase* to, uint32 toEvent);
void zUI_Render(_xEnt* ent);
void zUIRenderAll();
int32 iRenderQSort_Face(void* arg1, void* arg2);
xBase* zUIRenderIteratorInsert(xBase* b);
void zUI_Update(_zUI* ent, _xScene* sc, float32 dt);
void zUI_PreUpdate(_zUI* ent);
void zUI_Reset(_zUI* ent);
void zUI_Load(_zUI* ent, xSerial* s);
void zUI_Save(_zUI* ent, xSerial* s);
void zUI_Init(_zUI* ent, p2EntAsset* asset);
void zUI_Init(void* ent, void* asset);

// zUIEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1ab140
int32 zUIEventCB(xBase* to, uint32 toEvent)
{
	int8 uiName[256];
	int32 j;
	int32 i;
	int8 uiName[256];
	int32 j;
	int32 i;
	int8 level;
	_zUI* s;
	// Line 723, Address: 0x1ab140, Func Offset: 0
	// Line 731, Address: 0x1ab160, Func Offset: 0x20
	// Line 723, Address: 0x1ab164, Func Offset: 0x24
	// Line 731, Address: 0x1ab168, Func Offset: 0x28
	// Line 734, Address: 0x1ab1c4, Func Offset: 0x84
	// Line 735, Address: 0x1ab1cc, Func Offset: 0x8c
	// Line 738, Address: 0x1ab1d4, Func Offset: 0x94
	// Line 739, Address: 0x1ab1dc, Func Offset: 0x9c
	// Line 742, Address: 0x1ab1e4, Func Offset: 0xa4
	// Line 743, Address: 0x1ab20c, Func Offset: 0xcc
	// Line 746, Address: 0x1ab214, Func Offset: 0xd4
	// Line 751, Address: 0x1ab220, Func Offset: 0xe0
	// Line 746, Address: 0x1ab228, Func Offset: 0xe8
	// Line 753, Address: 0x1ab230, Func Offset: 0xf0
	// Line 755, Address: 0x1ab234, Func Offset: 0xf4
	// Line 759, Address: 0x1ab238, Func Offset: 0xf8
	// Line 762, Address: 0x1ab250, Func Offset: 0x110
	// Line 764, Address: 0x1ab264, Func Offset: 0x124
	// Line 765, Address: 0x1ab274, Func Offset: 0x134
	// Line 766, Address: 0x1ab2e4, Func Offset: 0x1a4
	// Line 769, Address: 0x1ab2e8, Func Offset: 0x1a8
	// Line 773, Address: 0x1ab2f8, Func Offset: 0x1b8
	// Line 775, Address: 0x1ab308, Func Offset: 0x1c8
	// Line 778, Address: 0x1ab310, Func Offset: 0x1d0
	// Line 784, Address: 0x1ab32c, Func Offset: 0x1ec
	// Line 786, Address: 0x1ab334, Func Offset: 0x1f4
	// Line 788, Address: 0x1ab338, Func Offset: 0x1f8
	// Line 792, Address: 0x1ab340, Func Offset: 0x200
	// Line 796, Address: 0x1ab358, Func Offset: 0x218
	// Line 798, Address: 0x1ab36c, Func Offset: 0x22c
	// Line 799, Address: 0x1ab37c, Func Offset: 0x23c
	// Line 800, Address: 0x1ab380, Func Offset: 0x240
	// Line 801, Address: 0x1ab390, Func Offset: 0x250
	// Line 803, Address: 0x1ab3a0, Func Offset: 0x260
	// Line 806, Address: 0x1ab3a8, Func Offset: 0x268
	// Line 809, Address: 0x1ab3b4, Func Offset: 0x274
	// Line 810, Address: 0x1ab3c4, Func Offset: 0x284
	// Line 811, Address: 0x1ab3cc, Func Offset: 0x28c
	// Line 814, Address: 0x1ab3d4, Func Offset: 0x294
	// Line 817, Address: 0x1ab3e8, Func Offset: 0x2a8
	// Line 818, Address: 0x1ab3f8, Func Offset: 0x2b8
	// Line 819, Address: 0x1ab404, Func Offset: 0x2c4
	// Line 822, Address: 0x1ab40c, Func Offset: 0x2cc
	// Line 823, Address: 0x1ab414, Func Offset: 0x2d4
	// Line 824, Address: 0x1ab424, Func Offset: 0x2e4
	// Line 827, Address: 0x1ab42c, Func Offset: 0x2ec
	// Line 828, Address: 0x1ab438, Func Offset: 0x2f8
	// Line 838, Address: 0x1ab448, Func Offset: 0x308
	// Line 837, Address: 0x1ab468, Func Offset: 0x328
	// Line 838, Address: 0x1ab46c, Func Offset: 0x32c
	// Func End, Address: 0x1ab474, Func Offset: 0x334
}

// zUI_Render__FP5_xEnt
// Start address: 0x1ab480
void zUI_Render(_xEnt* ent)
{
	_xRect win1;
	_xVec3* pos;
	_xVec3 relto;
	_xVec3 relfrom;
	_xVec3 to;
	_xVec3 from;
	float32 cooz;
	float32 cz;
	float32 z;
	float32 pulse_w;
	float32 wave;
	float32 pulse_h;
	float32 pulse_w;
	float32 wave;
	float32 y2;
	float32 x2;
	float32 y1;
	float32 x1;
	float32 v4;
	float32 u4;
	float32 v3;
	float32 u3;
	float32 v2;
	float32 u2;
	float32 v1;
	float32 u1;
	RwCamera* camera;
	uint8 a;
	uint8 b;
	uint8 g;
	uint8 r;
	RwRaster* raster;
	RwTexture* texture;
	_zUI* ui;
	uint32 hack_token2;
	uint32 hack_token1;
	int8 init;
	int8 init;
	uint32 hack_pulse3;
	uint32 hack_pulse2;
	uint32 hack_pulse1;
	int8 init;
	int8 init;
	int8 init;
	// Line 488, Address: 0x1ab480, Func Offset: 0
	// Line 494, Address: 0x1ab4c8, Func Offset: 0x48
	// Line 496, Address: 0x1ab4d8, Func Offset: 0x58
	// Line 505, Address: 0x1ab53c, Func Offset: 0xbc
	// Line 509, Address: 0x1ab544, Func Offset: 0xc4
	// Line 513, Address: 0x1ab554, Func Offset: 0xd4
	// Line 522, Address: 0x1ab564, Func Offset: 0xe4
	// Line 525, Address: 0x1ab574, Func Offset: 0xf4
	// Line 526, Address: 0x1ab57c, Func Offset: 0xfc
	// Line 528, Address: 0x1ab584, Func Offset: 0x104
	// Line 529, Address: 0x1ab588, Func Offset: 0x108
	// Line 531, Address: 0x1ab590, Func Offset: 0x110
	// Line 544, Address: 0x1ab598, Func Offset: 0x118
	// Line 562, Address: 0x1ab59c, Func Offset: 0x11c
	// Line 539, Address: 0x1ab5a4, Func Offset: 0x124
	// Line 563, Address: 0x1ab5a8, Func Offset: 0x128
	// Line 562, Address: 0x1ab5b0, Func Offset: 0x130
	// Line 563, Address: 0x1ab5b4, Func Offset: 0x134
	// Line 537, Address: 0x1ab5c0, Func Offset: 0x140
	// Line 539, Address: 0x1ab5c4, Func Offset: 0x144
	// Line 562, Address: 0x1ab5c8, Func Offset: 0x148
	// Line 544, Address: 0x1ab5cc, Func Offset: 0x14c
	// Line 545, Address: 0x1ab5d0, Func Offset: 0x150
	// Line 546, Address: 0x1ab5d4, Func Offset: 0x154
	// Line 547, Address: 0x1ab5d8, Func Offset: 0x158
	// Line 562, Address: 0x1ab5dc, Func Offset: 0x15c
	// Line 548, Address: 0x1ab5e0, Func Offset: 0x160
	// Line 549, Address: 0x1ab5e4, Func Offset: 0x164
	// Line 550, Address: 0x1ab5e8, Func Offset: 0x168
	// Line 551, Address: 0x1ab5ec, Func Offset: 0x16c
	// Line 564, Address: 0x1ab5f0, Func Offset: 0x170
	// Line 562, Address: 0x1ab5f4, Func Offset: 0x174
	// Line 563, Address: 0x1ab5f8, Func Offset: 0x178
	// Line 564, Address: 0x1ab608, Func Offset: 0x188
	// Line 565, Address: 0x1ab640, Func Offset: 0x1c0
	// Line 564, Address: 0x1ab644, Func Offset: 0x1c4
	// Line 565, Address: 0x1ab65c, Func Offset: 0x1dc
	// Line 567, Address: 0x1ab698, Func Offset: 0x218
	// Line 565, Address: 0x1ab69c, Func Offset: 0x21c
	// Line 567, Address: 0x1ab6ac, Func Offset: 0x22c
	// Line 565, Address: 0x1ab6b0, Func Offset: 0x230
	// Line 567, Address: 0x1ab6bc, Func Offset: 0x23c
	// Line 568, Address: 0x1ab6dc, Func Offset: 0x25c
	// Line 569, Address: 0x1ab704, Func Offset: 0x284
	// Line 572, Address: 0x1ab72c, Func Offset: 0x2ac
	// Line 576, Address: 0x1ab758, Func Offset: 0x2d8
	// Line 577, Address: 0x1ab77c, Func Offset: 0x2fc
	// Line 578, Address: 0x1ab798, Func Offset: 0x318
	// Line 579, Address: 0x1ab7a4, Func Offset: 0x324
	// Line 580, Address: 0x1ab7a8, Func Offset: 0x328
	// Line 581, Address: 0x1ab7ac, Func Offset: 0x32c
	// Line 582, Address: 0x1ab7b0, Func Offset: 0x330
	// Line 585, Address: 0x1ab7b4, Func Offset: 0x334
	// Line 586, Address: 0x1ab7dc, Func Offset: 0x35c
	// Line 588, Address: 0x1ab804, Func Offset: 0x384
	// Line 592, Address: 0x1ab820, Func Offset: 0x3a0
	// Line 596, Address: 0x1ab844, Func Offset: 0x3c4
	// Line 592, Address: 0x1ab848, Func Offset: 0x3c8
	// Line 596, Address: 0x1ab84c, Func Offset: 0x3cc
	// Line 594, Address: 0x1ab850, Func Offset: 0x3d0
	// Line 596, Address: 0x1ab854, Func Offset: 0x3d4
	// Line 594, Address: 0x1ab858, Func Offset: 0x3d8
	// Line 596, Address: 0x1ab85c, Func Offset: 0x3dc
	// Line 597, Address: 0x1ab870, Func Offset: 0x3f0
	// Line 605, Address: 0x1ab874, Func Offset: 0x3f4
	// Line 607, Address: 0x1ab87c, Func Offset: 0x3fc
	// Line 606, Address: 0x1ab884, Func Offset: 0x404
	// Line 607, Address: 0x1ab888, Func Offset: 0x408
	// Line 609, Address: 0x1ab88c, Func Offset: 0x40c
	// Line 616, Address: 0x1ab894, Func Offset: 0x414
	// Line 609, Address: 0x1ab898, Func Offset: 0x418
	// Line 610, Address: 0x1ab89c, Func Offset: 0x41c
	// Line 611, Address: 0x1ab8a0, Func Offset: 0x420
	// Line 612, Address: 0x1ab8a4, Func Offset: 0x424
	// Line 613, Address: 0x1ab8a8, Func Offset: 0x428
	// Line 614, Address: 0x1ab8ac, Func Offset: 0x42c
	// Line 615, Address: 0x1ab8b0, Func Offset: 0x430
	// Line 616, Address: 0x1ab8b4, Func Offset: 0x434
	// Line 618, Address: 0x1ab8c4, Func Offset: 0x444
	// Line 619, Address: 0x1ab8c8, Func Offset: 0x448
	// Line 620, Address: 0x1ab8cc, Func Offset: 0x44c
	// Line 621, Address: 0x1ab8d0, Func Offset: 0x450
	// Line 622, Address: 0x1ab8d4, Func Offset: 0x454
	// Line 623, Address: 0x1ab8d8, Func Offset: 0x458
	// Line 624, Address: 0x1ab8dc, Func Offset: 0x45c
	// Line 625, Address: 0x1ab8e0, Func Offset: 0x460
	// Line 627, Address: 0x1ab8f0, Func Offset: 0x470
	// Line 628, Address: 0x1ab8f4, Func Offset: 0x474
	// Line 629, Address: 0x1ab8f8, Func Offset: 0x478
	// Line 630, Address: 0x1ab8fc, Func Offset: 0x47c
	// Line 631, Address: 0x1ab900, Func Offset: 0x480
	// Line 632, Address: 0x1ab904, Func Offset: 0x484
	// Line 633, Address: 0x1ab908, Func Offset: 0x488
	// Line 634, Address: 0x1ab90c, Func Offset: 0x48c
	// Line 636, Address: 0x1ab91c, Func Offset: 0x49c
	// Line 637, Address: 0x1ab920, Func Offset: 0x4a0
	// Line 638, Address: 0x1ab924, Func Offset: 0x4a4
	// Line 639, Address: 0x1ab928, Func Offset: 0x4a8
	// Line 640, Address: 0x1ab92c, Func Offset: 0x4ac
	// Line 641, Address: 0x1ab930, Func Offset: 0x4b0
	// Line 642, Address: 0x1ab934, Func Offset: 0x4b4
	// Line 643, Address: 0x1ab938, Func Offset: 0x4b8
	// Line 650, Address: 0x1ab944, Func Offset: 0x4c4
	// Line 652, Address: 0x1ab9dc, Func Offset: 0x55c
	// Line 654, Address: 0x1aba74, Func Offset: 0x5f4
	// Line 656, Address: 0x1abb0c, Func Offset: 0x68c
	// Line 659, Address: 0x1abba8, Func Offset: 0x728
	// Line 660, Address: 0x1abbb0, Func Offset: 0x730
	// Line 661, Address: 0x1abbbc, Func Offset: 0x73c
	// Line 662, Address: 0x1abbc8, Func Offset: 0x748
	// Line 663, Address: 0x1abbd4, Func Offset: 0x754
	// Line 664, Address: 0x1abbe0, Func Offset: 0x760
	// Line 665, Address: 0x1abbec, Func Offset: 0x76c
	// Line 668, Address: 0x1abbf8, Func Offset: 0x778
	// Line 671, Address: 0x1abc14, Func Offset: 0x794
	// Line 675, Address: 0x1abc1c, Func Offset: 0x79c
	// Line 682, Address: 0x1abc28, Func Offset: 0x7a8
	// Line 683, Address: 0x1abc3c, Func Offset: 0x7bc
	// Line 682, Address: 0x1abc44, Func Offset: 0x7c4
	// Line 683, Address: 0x1abc48, Func Offset: 0x7c8
	// Line 682, Address: 0x1abc4c, Func Offset: 0x7cc
	// Line 683, Address: 0x1abc50, Func Offset: 0x7d0
	// Line 689, Address: 0x1abc58, Func Offset: 0x7d8
	// Line 683, Address: 0x1abc68, Func Offset: 0x7e8
	// Line 687, Address: 0x1abc70, Func Offset: 0x7f0
	// Line 689, Address: 0x1abc74, Func Offset: 0x7f4
	// Line 695, Address: 0x1abd58, Func Offset: 0x8d8
	// Line 689, Address: 0x1abd5c, Func Offset: 0x8dc
	// Line 701, Address: 0x1abd6c, Func Offset: 0x8ec
	// Line 695, Address: 0x1abd74, Func Offset: 0x8f4
	// Line 698, Address: 0x1abd78, Func Offset: 0x8f8
	// Line 689, Address: 0x1abd7c, Func Offset: 0x8fc
	// Line 695, Address: 0x1abd80, Func Offset: 0x900
	// Line 698, Address: 0x1abd84, Func Offset: 0x904
	// Line 701, Address: 0x1abd88, Func Offset: 0x908
	// Line 689, Address: 0x1abd90, Func Offset: 0x910
	// Line 695, Address: 0x1abd94, Func Offset: 0x914
	// Line 698, Address: 0x1abd98, Func Offset: 0x918
	// Line 701, Address: 0x1abd9c, Func Offset: 0x91c
	// Line 695, Address: 0x1abda0, Func Offset: 0x920
	// Line 698, Address: 0x1abdc0, Func Offset: 0x940
	// Line 701, Address: 0x1abde4, Func Offset: 0x964
	// Line 704, Address: 0x1abdf0, Func Offset: 0x970
	// Line 707, Address: 0x1abdf8, Func Offset: 0x978
	// Line 709, Address: 0x1abe04, Func Offset: 0x984
	// Func End, Address: 0x1abe50, Func Offset: 0x9d0
}

// zUIRenderAll__Fv
// Start address: 0x1abe50
void zUIRenderAll()
{
	int32 i;
	// Line 396, Address: 0x1abe50, Func Offset: 0
	// Line 397, Address: 0x1abe64, Func Offset: 0x14
	// Line 398, Address: 0x1abe78, Func Offset: 0x28
	// Line 397, Address: 0x1abe7c, Func Offset: 0x2c
	// Line 398, Address: 0x1abe80, Func Offset: 0x30
	// Line 399, Address: 0x1abe98, Func Offset: 0x48
	// Line 402, Address: 0x1abea0, Func Offset: 0x50
	// Line 403, Address: 0x1abeb0, Func Offset: 0x60
	// Line 404, Address: 0x1abec4, Func Offset: 0x74
	// Line 407, Address: 0x1abed8, Func Offset: 0x88
	// Line 408, Address: 0x1abee8, Func Offset: 0x98
	// Line 411, Address: 0x1abf04, Func Offset: 0xb4
	// Line 415, Address: 0x1abf10, Func Offset: 0xc0
	// Line 421, Address: 0x1abf20, Func Offset: 0xd0
	// Line 424, Address: 0x1abf34, Func Offset: 0xe4
	// Line 425, Address: 0x1abf3c, Func Offset: 0xec
	// Line 429, Address: 0x1abf44, Func Offset: 0xf4
	// Line 434, Address: 0x1abf54, Func Offset: 0x104
	// Line 436, Address: 0x1abf6c, Func Offset: 0x11c
	// Line 438, Address: 0x1abf74, Func Offset: 0x124
	// Line 441, Address: 0x1abf7c, Func Offset: 0x12c
	// Line 444, Address: 0x1abf84, Func Offset: 0x134
	// Line 441, Address: 0x1abf88, Func Offset: 0x138
	// Line 445, Address: 0x1abf8c, Func Offset: 0x13c
	// Line 448, Address: 0x1abfa0, Func Offset: 0x150
	// Func End, Address: 0x1abfb8, Func Offset: 0x168
}

// iRenderQSort_Face__FPCvPCv
// Start address: 0x1abfc0
int32 iRenderQSort_Face(void* arg1, void* arg2)
{
	// Line 385, Address: 0x1abfc0, Func Offset: 0
	// Line 386, Address: 0x1abfe8, Func Offset: 0x28
	// Line 389, Address: 0x1abff0, Func Offset: 0x30
	// Line 392, Address: 0x1ac008, Func Offset: 0x48
	// Func End, Address: 0x1ac010, Func Offset: 0x50
}

// zUIRenderIteratorInsert__FP5xBaseP6zScenePv
// Start address: 0x1ac010
xBase* zUIRenderIteratorInsert(xBase* b)
{
	// Line 350, Address: 0x1ac010, Func Offset: 0
	// Line 356, Address: 0x1ac020, Func Offset: 0x10
	// Line 350, Address: 0x1ac024, Func Offset: 0x14
	// Line 357, Address: 0x1ac038, Func Offset: 0x28
	// Func End, Address: 0x1ac040, Func Offset: 0x30
}

// zUI_Update__FP4_zUIP7_xScenef
// Start address: 0x1ac040
void zUI_Update(_zUI* ent, _xScene* sc, float32 dt)
{
	// Line 258, Address: 0x1ac040, Func Offset: 0
	// Line 260, Address: 0x1ac04c, Func Offset: 0xc
	// Line 265, Address: 0x1ac054, Func Offset: 0x14
	// Line 268, Address: 0x1ac060, Func Offset: 0x20
	// Line 269, Address: 0x1ac068, Func Offset: 0x28
	// Line 270, Address: 0x1ac078, Func Offset: 0x38
	// Line 271, Address: 0x1ac080, Func Offset: 0x40
	// Line 272, Address: 0x1ac088, Func Offset: 0x48
	// Line 273, Address: 0x1ac098, Func Offset: 0x58
	// Line 274, Address: 0x1ac0a0, Func Offset: 0x60
	// Line 275, Address: 0x1ac0a8, Func Offset: 0x68
	// Line 276, Address: 0x1ac0b8, Func Offset: 0x78
	// Line 277, Address: 0x1ac0c0, Func Offset: 0x80
	// Line 278, Address: 0x1ac0c8, Func Offset: 0x88
	// Line 279, Address: 0x1ac0d8, Func Offset: 0x98
	// Line 281, Address: 0x1ac0e0, Func Offset: 0xa0
	// Line 282, Address: 0x1ac0e8, Func Offset: 0xa8
	// Line 283, Address: 0x1ac0f8, Func Offset: 0xb8
	// Line 284, Address: 0x1ac100, Func Offset: 0xc0
	// Line 285, Address: 0x1ac108, Func Offset: 0xc8
	// Line 286, Address: 0x1ac118, Func Offset: 0xd8
	// Line 288, Address: 0x1ac120, Func Offset: 0xe0
	// Line 289, Address: 0x1ac128, Func Offset: 0xe8
	// Line 290, Address: 0x1ac138, Func Offset: 0xf8
	// Line 291, Address: 0x1ac13c, Func Offset: 0xfc
	// Line 292, Address: 0x1ac144, Func Offset: 0x104
	// Line 293, Address: 0x1ac14c, Func Offset: 0x10c
	// Line 294, Address: 0x1ac15c, Func Offset: 0x11c
	// Line 295, Address: 0x1ac160, Func Offset: 0x120
	// Line 296, Address: 0x1ac168, Func Offset: 0x128
	// Line 297, Address: 0x1ac170, Func Offset: 0x130
	// Line 298, Address: 0x1ac180, Func Offset: 0x140
	// Line 299, Address: 0x1ac188, Func Offset: 0x148
	// Line 300, Address: 0x1ac190, Func Offset: 0x150
	// Line 301, Address: 0x1ac1a0, Func Offset: 0x160
	// Line 303, Address: 0x1ac1a8, Func Offset: 0x168
	// Line 304, Address: 0x1ac1b4, Func Offset: 0x174
	// Line 305, Address: 0x1ac1c4, Func Offset: 0x184
	// Line 306, Address: 0x1ac1cc, Func Offset: 0x18c
	// Line 307, Address: 0x1ac1d8, Func Offset: 0x198
	// Line 308, Address: 0x1ac1e8, Func Offset: 0x1a8
	// Line 309, Address: 0x1ac1f0, Func Offset: 0x1b0
	// Line 310, Address: 0x1ac1fc, Func Offset: 0x1bc
	// Line 311, Address: 0x1ac20c, Func Offset: 0x1cc
	// Line 312, Address: 0x1ac214, Func Offset: 0x1d4
	// Line 313, Address: 0x1ac220, Func Offset: 0x1e0
	// Line 315, Address: 0x1ac22c, Func Offset: 0x1ec
	// Line 330, Address: 0x1ac23c, Func Offset: 0x1fc
	// Func End, Address: 0x1ac24c, Func Offset: 0x20c
}

// zUI_PreUpdate__FP4_zUIP7_xScenef
// Start address: 0x1ac250
void zUI_PreUpdate(_zUI* ent)
{
	// Line 193, Address: 0x1ac250, Func Offset: 0
	// Line 191, Address: 0x1ac254, Func Offset: 0x4
	// Line 193, Address: 0x1ac258, Func Offset: 0x8
	// Line 203, Address: 0x1ac298, Func Offset: 0x48
	// Line 204, Address: 0x1ac2a4, Func Offset: 0x54
	// Line 205, Address: 0x1ac2ac, Func Offset: 0x5c
	// Line 206, Address: 0x1ac2b4, Func Offset: 0x64
	// Line 207, Address: 0x1ac2bc, Func Offset: 0x6c
	// Line 208, Address: 0x1ac2c4, Func Offset: 0x74
	// Line 209, Address: 0x1ac2cc, Func Offset: 0x7c
	// Line 210, Address: 0x1ac2d4, Func Offset: 0x84
	// Line 211, Address: 0x1ac2dc, Func Offset: 0x8c
	// Line 212, Address: 0x1ac2e4, Func Offset: 0x94
	// Line 213, Address: 0x1ac2ec, Func Offset: 0x9c
	// Line 216, Address: 0x1ac2f8, Func Offset: 0xa8
	// Line 217, Address: 0x1ac30c, Func Offset: 0xbc
	// Line 219, Address: 0x1ac318, Func Offset: 0xc8
	// Line 220, Address: 0x1ac32c, Func Offset: 0xdc
	// Line 223, Address: 0x1ac338, Func Offset: 0xe8
	// Line 224, Address: 0x1ac34c, Func Offset: 0xfc
	// Line 226, Address: 0x1ac358, Func Offset: 0x108
	// Line 227, Address: 0x1ac36c, Func Offset: 0x11c
	// Line 229, Address: 0x1ac378, Func Offset: 0x128
	// Line 230, Address: 0x1ac38c, Func Offset: 0x13c
	// Line 232, Address: 0x1ac398, Func Offset: 0x148
	// Line 233, Address: 0x1ac3ac, Func Offset: 0x15c
	// Line 236, Address: 0x1ac3b8, Func Offset: 0x168
	// Line 237, Address: 0x1ac3d0, Func Offset: 0x180
	// Line 239, Address: 0x1ac3dc, Func Offset: 0x18c
	// Line 240, Address: 0x1ac3f4, Func Offset: 0x1a4
	// Line 242, Address: 0x1ac400, Func Offset: 0x1b0
	// Line 243, Address: 0x1ac418, Func Offset: 0x1c8
	// Line 245, Address: 0x1ac424, Func Offset: 0x1d4
	// Line 246, Address: 0x1ac43c, Func Offset: 0x1ec
	// Line 250, Address: 0x1ac448, Func Offset: 0x1f8
	// Line 252, Address: 0x1ac454, Func Offset: 0x204
	// Line 255, Address: 0x1ac460, Func Offset: 0x210
	// Func End, Address: 0x1ac468, Func Offset: 0x218
}

// zUI_Reset__FP4_zUI
// Start address: 0x1ac470
void zUI_Reset(_zUI* ent)
{
	// Line 171, Address: 0x1ac470, Func Offset: 0
	// Line 173, Address: 0x1ac47c, Func Offset: 0xc
	// Line 175, Address: 0x1ac484, Func Offset: 0x14
	// Line 176, Address: 0x1ac488, Func Offset: 0x18
	// Line 178, Address: 0x1ac494, Func Offset: 0x24
	// Line 181, Address: 0x1ac498, Func Offset: 0x28
	// Line 184, Address: 0x1ac4a4, Func Offset: 0x34
	// Line 185, Address: 0x1ac4a8, Func Offset: 0x38
	// Func End, Address: 0x1ac4b8, Func Offset: 0x48
}

// zUI_Load__FP4_zUIP7xSerial
// Start address: 0x1ac4c0
void zUI_Load(_zUI* ent, xSerial* s)
{
	// Line 164, Address: 0x1ac4c0, Func Offset: 0
	// Func End, Address: 0x1ac4c8, Func Offset: 0x8
}

// zUI_Save__FP4_zUIP7xSerial
// Start address: 0x1ac4d0
void zUI_Save(_zUI* ent, xSerial* s)
{
	// Line 145, Address: 0x1ac4d0, Func Offset: 0
	// Func End, Address: 0x1ac4d8, Func Offset: 0x8
}

// zUI_Init__FP4_zUIP10p2EntAsset
// Start address: 0x1ac4e0
void zUI_Init(_zUI* ent, p2EntAsset* asset)
{
	zUIAsset* sasset;
	// Line 82, Address: 0x1ac4e0, Func Offset: 0
	// Line 84, Address: 0x1ac4f0, Func Offset: 0x10
	// Line 93, Address: 0x1ac504, Func Offset: 0x24
	// Line 94, Address: 0x1ac508, Func Offset: 0x28
	// Line 95, Address: 0x1ac50c, Func Offset: 0x2c
	// Line 100, Address: 0x1ac510, Func Offset: 0x30
	// Line 102, Address: 0x1ac518, Func Offset: 0x38
	// Line 95, Address: 0x1ac520, Func Offset: 0x40
	// Line 98, Address: 0x1ac528, Func Offset: 0x48
	// Line 100, Address: 0x1ac52c, Func Offset: 0x4c
	// Line 101, Address: 0x1ac530, Func Offset: 0x50
	// Line 102, Address: 0x1ac534, Func Offset: 0x54
	// Line 104, Address: 0x1ac538, Func Offset: 0x58
	// Line 105, Address: 0x1ac544, Func Offset: 0x64
	// Line 107, Address: 0x1ac54c, Func Offset: 0x6c
	// Line 110, Address: 0x1ac558, Func Offset: 0x78
	// Line 114, Address: 0x1ac560, Func Offset: 0x80
	// Line 115, Address: 0x1ac570, Func Offset: 0x90
	// Line 118, Address: 0x1ac574, Func Offset: 0x94
	// Line 123, Address: 0x1ac57c, Func Offset: 0x9c
	// Line 124, Address: 0x1ac590, Func Offset: 0xb0
	// Line 125, Address: 0x1ac5a0, Func Offset: 0xc0
	// Line 126, Address: 0x1ac5b0, Func Offset: 0xd0
	// Line 127, Address: 0x1ac5c0, Func Offset: 0xe0
	// Line 128, Address: 0x1ac5d0, Func Offset: 0xf0
	// Line 129, Address: 0x1ac5e0, Func Offset: 0x100
	// Line 130, Address: 0x1ac5f0, Func Offset: 0x110
	// Line 132, Address: 0x1ac600, Func Offset: 0x120
	// Func End, Address: 0x1ac614, Func Offset: 0x134
}

// zUI_Init__FPvPv
// Start address: 0x1ac620
void zUI_Init(void* ent, void* asset)
{
	// Line 78, Address: 0x1ac620, Func Offset: 0
	// Func End, Address: 0x1ac628, Func Offset: 0x8
}

