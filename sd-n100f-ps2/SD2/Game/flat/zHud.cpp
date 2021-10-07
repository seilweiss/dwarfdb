typedef struct xAnimSingle;
typedef struct RxPipelineCluster;
typedef struct zHudItem;
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
typedef struct xAnimPlay;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RwTexture;
typedef struct tag_xFile;
typedef struct RwTexCoords;
typedef struct RwResEntry;
typedef struct sceCdlFILE;
typedef struct _xEntFrame;
typedef struct xModelInstance;
typedef struct xCutsceneInfo;
typedef struct tag_iFile;
typedef struct xFontBox;
typedef enum eHudStatusSize;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwRaster;
typedef struct RxOutputSpec;
typedef struct RpWorld;
typedef enum RxClusterForcePresent;
typedef struct RpGeometry;
typedef struct RwTexDictionary;
typedef struct RwFrame;
typedef struct xAnimTable;
typedef struct _zHudElement;
typedef struct RxClusterRef;
typedef struct zHudModel;
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
typedef enum eHudDropShadowMode;
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
typedef struct xAnimFile;
typedef struct xCutscene;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct RxNodeMethods;
typedef struct p2EntHangableAsset;
typedef enum eHudElement;
typedef enum _tagRumbleType;
typedef struct _xVec3;
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
typedef enum eHudStatusColor;
typedef struct RxCluster;
typedef struct RpTriangle;
typedef struct rxHeapBlockHeader;
typedef struct _xCylinder;
typedef enum RxClusterValidityReq;
typedef struct iColor_tag;
typedef struct zShaggy1Globals;
typedef struct _xEnv;
typedef struct RwSky2DVertexFields;
typedef struct RwSphere;
typedef struct xCutsceneTime;
typedef struct RwCamera;
typedef struct iEnv;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCamShoulder;
typedef struct RxPacket;
typedef struct p2EntAsset;
typedef struct xCutsceneData;
typedef struct zCheckPoint;
typedef struct _xBox;
typedef enum RwTextureAddressMode;
typedef enum eHudStatusPos;
typedef enum eHudModel;
typedef struct iModelTag;
typedef struct RxPipelineNode;
typedef enum RwCameraProjection;
typedef struct RpCollSector;
typedef struct xModelPool;
typedef struct _tagxCamFollowAsset;
typedef struct xFFX;
typedef enum eHudInterpType;
typedef struct zGlobalGameStats;
typedef struct RwObjectHasFrame;
typedef struct xCamAsset;
typedef struct RpMeshHeader;
typedef struct RxPipelineNodeParam;
typedef struct xQCData;
typedef struct zHudStatusPos;
typedef enum _tagCamType;
typedef struct _xEntShadow;
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
typedef struct zHudStatusAng;
typedef struct _tagxPad;
typedef struct xCutsceneBreak;
typedef struct RwV2d;
typedef struct _tagxCamFrame;
typedef struct zScene;
typedef enum _tagPadState;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef enum eHudStatusAng;
typedef struct _xMat4x3;
typedef struct zHudColor;
typedef struct _tagiPad;
typedef struct RwSky2DVertex;
typedef struct _zPortal;
typedef enum RwTextureFilterMode;
typedef struct zPlayerStatic;
typedef struct _tagxCamStaticFollow;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct zHudStatusSize;
typedef struct zCutsceneZbuffer;
typedef struct _xQuat;
typedef struct RwFrustumPlane;
typedef enum RpWorldRenderOrder;
typedef struct iShadowCache;
typedef struct _xVec2;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct _zPlatform;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct RwLinkList;
typedef struct zHudFrame;
typedef struct _xRect;
typedef struct _tagxCamPath;
typedef struct zHudStatusColor;
typedef struct _xEntDrive;
typedef struct _tagp2CamStaticAsset;

typedef void(*type_0)(RxPipelineNode*);
typedef RpClump*(*type_3)(RpClump*, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipeline*);
typedef void(*type_6)(int32);
typedef RpWorldSector*(*type_8)(RpWorldSector*);
typedef uint32(*type_9)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_11)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_13)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_16)(RwResEntry*);
typedef RwCamera*(*type_23)(RwCamera*);
typedef void(*type_26)(_xEnt*, _xScene*, float32);
typedef RwCamera*(*type_28)(RwCamera*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef void(*type_36)(_xEnt*);
typedef void(*type_39)();
typedef void(*type_42)(_xScene*);
typedef void(*type_43)(_xEnt*);
typedef void(*type_44)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_46)(_xScene*, float32);
typedef uint32(*type_47)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_49)();
typedef void(*type_50)(_xEnt*, _xVec3*);
typedef xBase*(*type_53)(uint32);
typedef uint32(*type_55)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int8*(*type_60)(xBase*);
typedef int8*(*type_66)(uint32);
typedef void(*type_71)(_xEnt*, _xVec3*);
typedef void(*type_72)(xMemPool*, void*);
typedef int32(*type_79)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_84)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RwObjectHasFrame*(*type_87)(RwObjectHasFrame*);
typedef int32(*type_88)(RxNodeDefinition*);
typedef void(*type_91)(RxNodeDefinition*);
typedef int32(*type_97)(RxPipelineNode*);

typedef float32 type_1[3];
typedef uint8 type_2[3];
typedef float32 type_5[3];
typedef zGlobalGameStats type_7[30];
typedef zHudItem type_10[1];
typedef zCutsceneZbuffer type_12[4];
typedef zGlobalGameStats type_14[13];
typedef uint32 type_15[2];
typedef _zEnt* type_17[10];
typedef zGlobalGameStats type_18[4];
typedef uint32 type_19[1];
typedef int8 type_20[16];
typedef int8 type_21[128];
typedef uint8 type_22[3];
typedef int32 type_24[2];
typedef uint8 type_25[8];
typedef int8 type_27[32];
typedef int32 type_29[2];
typedef uint32 type_30[2];
typedef uint8 type_31[22];
typedef int8 type_32[32];
typedef uint32 type_33[43];
typedef uint32 type_34[2];
typedef uint8 type_37[22];
typedef zHudItem type_38[5];
typedef xBase* type_40[43];
typedef uint32 type_41[2];
typedef int8 type_45[256];
typedef int8 type_48[256];
typedef zHudModel type_51[42];
typedef int8 type_52[256];
typedef int8 type_54[256];
typedef zHudItem type_56[5];
typedef float32 type_57[4];
typedef zHudItem type_58[1];
typedef int8 type_59[16];
typedef uint32 type_61[2];
typedef int8 type_62[16];
typedef uint16 type_63[3];
typedef RwFrustumPlane type_64[6];
typedef uint16 type_65[3];
typedef RwV3d type_67[8];
typedef zHudItem type_68[1];
typedef int8 type_69[64];
typedef float32 type_70[2];
typedef RwSky2DVertex type_73[4];
typedef float32 type_74[15];
typedef zHudStatusPos type_75[10];
typedef float32 type_76[15];
typedef zHudStatusAng type_77[11];
typedef uint32 type_78[15];
typedef _xCollis type_80[18];
typedef float32 type_81[4];
typedef zHudItem type_82[7];
typedef zHudStatusSize type_83[9];
typedef uint32 type_85[4096];
typedef zHudStatusColor type_86[6];
typedef uint8 type_89[8];
typedef uint8 type_90[8];
typedef RpLight* type_92[2];
typedef uint8 type_93[8];
typedef RwTexCoords* type_94[8];
typedef RwFrame* type_95[2];
typedef zHudItem type_96[6];
typedef uint8 type_98[8];
typedef <unknown fundamental type (0xa510)> type_99[4];
typedef iModelTag type_100[4];
typedef int8 type_101[16];
typedef float32 type_102[4];
typedef uint8 type_103[3];
typedef zHudItem type_104[1];
typedef int8 type_105[256];
typedef float32 type_106[4];
typedef RwTexCoords* type_107[8];
typedef zHudItem type_108[6];
typedef uint8 type_109[2];
typedef int8 type_110[128];
typedef int8 type_111[128][6];
typedef _xVec4 type_112[8];
typedef RxCluster type_113[1];
typedef uint16 type_114[6];
typedef float32 type_115[4];
typedef uint32 type_116[4];
typedef float32 type_117[4];
typedef int8 type_118[32];
typedef _zHudElement type_119[10];
typedef float32 type_120[4];
typedef uint8 type_121[3];
typedef _xVec3 type_122[2];
typedef float32 type_123[4];
typedef _xVec3 type_124[4];
typedef float32 type_125[4];
typedef _xQuat type_126[2];

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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct zHudItem
{
	xModelInstance* model;
	xAnimTable* atbl;
	zHudFrame hframe;
	eHudStatusPos statusPos;
	eHudStatusSize statusSize;
	eHudStatusAng statusAng;
	eHudStatusColor statusColor;
	int8 text[64];
	int32 statusFX;
	float32 shake;
	zHudStatusPos zHudStatusPosTable[10];
	zHudStatusAng zHudStatusAngTable[11];
	zHudStatusSize zHudStatusSizeTable[9];
	zHudStatusColor zHudStatusColorTable[6];
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

struct xFontBox
{
	int32 flags;
	float32 x;
	float32 y;
	float32 w;
	float32 h;
	uint32 font;
	iColor_tag color;
	iColor_tag saved_color;
	float32 draw_width;
	float32 draw_height;
	float32 x_spacing;
	float32 y_spacing;
	float32 depth;
	float32 inset_left;
	float32 inset_right;
	float32 inset_top;
	float32 inset_bottom;
	int8* text;
	iColor_tag backdrop_color;
};

enum eHudStatusSize
{
	eHudStatusSizeDefault,
	eHudStatusSizeZero,
	eHudStatusSizeSmall,
	eHudStatusSizeBig,
	eHudStatusSizeSquash,
	eHudStatusSizeZeroHoriz,
	eHudStatusSizeZeroVert,
	eHudStatusSizeHyper,
	eHudStatusSizeHyperReverse,
	eHudStatusSizeCount
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

struct _zHudElement
{
	eHudElement hudType;
	void(*hudInit)();
	void(*hudSetup)(_xScene*);
	void(*hudUpdate)(_xScene*, float32);
	void(*hudRender)();
	uint32 count;
	int8 text[256];
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct zHudModel
{
	eHudModel type;
	int8* modelName;
	uint32 modelNameID;
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

enum eHudDropShadowMode
{
	DROPSHADOW_NONE,
	DROPSHADOW_NORMAL
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

enum eHudElement
{
	eHudPlayerStatus,
	eHudChances,
	eHudSnacks,
	eHudGum,
	eHudSoap,
	eHudMessage,
	eHudGameStats,
	eHudSoapbox,
	eHudGumpack,
	eHudHealthbar,
	eHudCount
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

enum eHudStatusColor
{
	eHudStatusColorSolid,
	eHudStatusColorTransparent,
	eHudStatusColorLightBlue,
	eHudStatusColorOpaque1,
	eHudStatusColorOpaque2,
	eHudStatusColorOpaque3,
	eHudStatusColorCount
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

enum eHudStatusPos
{
	eHudStatusPosOnScreen,
	eHudStatusPosOffScreenDefault,
	eHudStatusPosOffScreenAlternate1,
	eHudStatusPosOffScreenAlternate2,
	eHudStatusPosNudgeUp,
	eHudStatusPosNudgeDown,
	eHudStatusPosNudgeLeft,
	eHudStatusPosNudgeRight,
	eHudStatusPosMiddleOfScreen,
	eHudStatusPosOnScreenAlt1,
	eHudStatusPosCount
};

enum eHudModel
{
	eHudModelBubblegumPiece,
	eHudModelBubblegumPack,
	eHudModelBubblegumMachine,
	eHudModelPinkBunnySlippers,
	eHudModelBarSoap,
	eHudModelBoxSoap,
	eHudModelBubblePowerUp,
	eHudModelLampShade,
	eHudModelFlowerPot,
	eHudModelPlungerSuctionCup,
	eHudModelBlackKnightHelmut,
	eHudModelSpring,
	eHudModelDivingHelmut,
	eHudModelSkull,
	eHudModelLightingBolt,
	eHudModelFootballHelmut,
	eHudModelUmbrella_closed,
	eHudModelUmbrella_open,
	eHudModelShovel,
	eHudModelIndividualScoobySnack,
	eHudModelScoobyCollar,
	eHudModelMagnifyingGlass,
	eHudModelHotSauce,
	eHudModelSphere,
	eHudModelHead0,
	eHudModelHead1,
	eHudModelHead2,
	eHudModelHead3,
	eHudModelHead4,
	eHudModelHead5,
	eHudModelSandwich1,
	eHudModelSandwich2,
	eHudModelSandwich3,
	eHudModelSandwich4,
	eHudModelSandwich5,
	eHudModelEnemyIcon,
	eHudModelClue,
	eHudModel_err,
	eHudModelBubblegumPiece2,
	eHudModelBubblegumPiece3,
	eHudModelBubblegumPiece4,
	eHudModelBubblegumPiece5,
	eHudModelCount
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

enum eHudInterpType
{
	eHudInterpTypeLinear,
	eHudInterpTypeDecel,
	eHudInterpTypeAccel,
	eHudInterpTypeCount
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

struct zHudStatusPos
{
	float32 x;
	float32 y;
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

struct zHudStatusAng
{
	float32 x;
	float32 y;
	float32 z;
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

enum eHudStatusAng
{
	eHudStatusAngStop,
	eHudStatusAngIdle,
	eHudStatusAngIdleReverse,
	eHudStatusAngSlow,
	eHudStatusAngSlowReverse,
	eHudStatusAngFast,
	eHudStatusAngFastReverse,
	eHudStatusAngHyper,
	eHudStatusAngHyperReverse,
	eHudStatusAngTest1,
	eHudStatusAngTest2,
	eHudStatusAngCount
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

struct zHudColor
{
	float32 rm;
	float32 gm;
	float32 bm;
	float32 a;
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

struct zHudStatusSize
{
	float32 x;
	float32 y;
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

struct _xVec2
{
	float32 x;
	float32 y;
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

struct zHudFrame
{
	_xVec3 pos;
	_xVec3 size;
	_xVec3 ang;
	_xVec3 dang;
	zHudColor color;
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

struct zHudStatusColor
{
	float32 rm;
	float32 gm;
	float32 bm;
	float32 a;
	eHudInterpType interp;
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

int32 sShakeSnackCounter;
float32 widthAspect;
float32 heightAspect;
int32 sHudGameStatsTimer;
float32 tmpRoomTime;
float32 sHudStatusAngX;
float32 sHudStatusAngY;
float32 sHudStatusAngZ;
float32 sHudDisplayTimer_plrStatus;
float32 sHudDisplayTimer_snacks;
float32 sHudDisplayTimer_gum;
float32 sHudDisplayTimer_soap;
float32 sHudDisplayTimer_healthBar;
uint32 oldHealthCnt;
uint32 oldHealthCnt2;
uint32 oldSnackCnt;
int32 oldGumCnt;
int32 oldGumCnt2;
int32 oldSoapCnt;
int32 oldSoapCnt2;
float32 sHudDisplayTimer_allSnacksArea;
float32 sHudDisplayTimer_saveDone;
RwSky2DVertex Vert[4];
uint16 Idx[6];
zHudModel zHudModelTable[42];
zHudItem sHudSnackArray[1];
zHudItem sHudChancesArray[1];
zHudItem sHudGumArray[5];
zHudItem sHudSoapArray[6];
zHudItem sHudSoapboxArray[1];
zHudItem sHudGumpackArray[1];
zHudItem sHudPlayerStatusArray[6];
zHudItem sHudHealthbarArray[5];
zHudItem sHudGameStatsArray[7];
_zHudElement sHudElements[10];
xFontBox* fontBox;
iColor_tag clr;
iColor_tag clrDropShadow;
float32 dynOffset;
int32 sStatInit;
zGlobals globals;
uint32 ourGlobals[4096];

void zHudInterp2d(float32 dt, float32* srcx, float32* srcy, float32 dstx, float32 dsty, float32 speed, int32 type);
void zHudInterp1d(float32 dt, float32* src, float32 dst, float32 speed, int32 type);
void zHudHide();
void zHudShow();
uint32 zHudModelGetID(uint32 modelEnum);
void zHud_sceneReset();
void zHud_UIRender(int8* asset, float32 xPos, float32 yPos, float32 w, float32 h, uint8 alpha);
void zHud_DrawText(float32 x, float32 y, float32 w, float32 h, int8* s, int32 just, float32 size, uint8 alpha, eHudDropShadowMode shadow);
void zHudElementsCB_GameStatsRender();
void zHudElementsCB_GameStatsUpdate(float32 dt);
void zHudElementsCB_GameStatsSetup();
void zHudElementsCB_GameStatsInit();
void zHudElementsCB_HealthbarRender();
void zHudElementsCB_HealthbarUpdate(float32 dt);
void zHudElementsCB_HealthbarSetup();
void zHudElementsCB_HealthbarInit();
void zHudElementsCB_GumpackRender();
void zHudElementsCB_GumpackUpdate(float32 dt);
void zHudElementsCB_GumpackSetup();
void zHudElementsCB_GumpackInit();
void zHudElementsCB_SoapboxRender();
void zHudElementsCB_SoapboxUpdate(float32 dt);
void zHudElementsCB_SoapboxSetup();
void zHudElementsCB_SoapboxInit();
void zHudElementsCB_MessageRender();
void zHudElementsCB_MessageUpdate();
void zHudElementsCB_MessageSetup();
void zHudElementsCB_MessageInit();
void zHudElementsCB_SoapRender();
void zHudElementsCB_SoapUpdate(float32 dt);
void zHudElementsCB_SoapSetup();
void zHudElementsCB_SoapInit();
void zHudElementsCB_GumRender();
void zHudElementsCB_GumUpdate(float32 dt);
void zHudElementsCB_GumSetup();
void zHudElementsCB_GumInit();
void zHudElementsCB_SnacksRender();
void zHudShowSaveSuccess();
void zHudShowAllSnacksArea();
void zHud_showSnackSpecial();
void zHud_showSnack();
void zHud_ShakeSnackCounter();
void zHudElementsCB_SnacksUpdate(float32 dt);
void zHudElementsCB_SnacksSetup();
void zHudElementsCB_SnacksInit();
void zHudElementsCB_ChancesRender();
void zHudElementsCB_ChancesUpdate(float32 dt);
void zHudElementsCB_ChancesSetup();
void zHudElementsCB_ChancesInit();
void zHudElementsCB_PlayerStatusRender();
void zHud_showHealthandStatus();
void zHudElementsCB_PlayerStatusUpdate(float32 dt);
void zHudElementsCB_PlayerStatusSetup();
void zHudElementsCB_PlayerStatusInit();
void zHud_Render();
void zHud_Update(_xScene* sc, float32 dt);
void zHud_Setup(_xScene* sc);
void zHud_Init();

// zHudInterp2d__FfPfPffffi
// Start address: 0x1c55c0
void zHudInterp2d(float32 dt, float32* srcx, float32* srcy, float32 dstx, float32 dsty, float32 speed, int32 type)
{
	float32 d2;
	_xVec2 tNorm;
	_xVec2 t;
	float32 dy;
	float32 dx;
	// Line 4677, Address: 0x1c55c0, Func Offset: 0
	// Line 4679, Address: 0x1c55e4, Func Offset: 0x24
	// Line 4677, Address: 0x1c55ec, Func Offset: 0x2c
	// Line 4679, Address: 0x1c55f4, Func Offset: 0x34
	// Line 4677, Address: 0x1c55f8, Func Offset: 0x38
	// Line 4679, Address: 0x1c5608, Func Offset: 0x48
	// Line 4681, Address: 0x1c5610, Func Offset: 0x50
	// Line 4684, Address: 0x1c5638, Func Offset: 0x78
	// Line 4688, Address: 0x1c563c, Func Offset: 0x7c
	// Line 4683, Address: 0x1c5644, Func Offset: 0x84
	// Line 4690, Address: 0x1c5648, Func Offset: 0x88
	// Line 4688, Address: 0x1c564c, Func Offset: 0x8c
	// Line 4689, Address: 0x1c5650, Func Offset: 0x90
	// Line 4684, Address: 0x1c5654, Func Offset: 0x94
	// Line 4688, Address: 0x1c5658, Func Offset: 0x98
	// Line 4690, Address: 0x1c5660, Func Offset: 0xa0
	// Line 4688, Address: 0x1c5664, Func Offset: 0xa4
	// Line 4689, Address: 0x1c5668, Func Offset: 0xa8
	// Line 4690, Address: 0x1c5670, Func Offset: 0xb0
	// Line 4692, Address: 0x1c56fc, Func Offset: 0x13c
	// Line 4696, Address: 0x1c5724, Func Offset: 0x164
	// Line 4697, Address: 0x1c5768, Func Offset: 0x1a8
	// Line 4696, Address: 0x1c576c, Func Offset: 0x1ac
	// Line 4697, Address: 0x1c5774, Func Offset: 0x1b4
	// Line 4698, Address: 0x1c57bc, Func Offset: 0x1fc
	// Line 4703, Address: 0x1c57c4, Func Offset: 0x204
	// Line 4704, Address: 0x1c5820, Func Offset: 0x260
	// Line 4703, Address: 0x1c5824, Func Offset: 0x264
	// Line 4704, Address: 0x1c5828, Func Offset: 0x268
	// Line 4705, Address: 0x1c5888, Func Offset: 0x2c8
	// Line 4708, Address: 0x1c5890, Func Offset: 0x2d0
	// Line 4709, Address: 0x1c58a4, Func Offset: 0x2e4
	// Line 4708, Address: 0x1c58a8, Func Offset: 0x2e8
	// Line 4709, Address: 0x1c58b0, Func Offset: 0x2f0
	// Line 4710, Address: 0x1c58fc, Func Offset: 0x33c
	// Line 4709, Address: 0x1c5900, Func Offset: 0x340
	// Line 4710, Address: 0x1c5908, Func Offset: 0x348
	// Line 4720, Address: 0x1c595c, Func Offset: 0x39c
	// Line 4723, Address: 0x1c5964, Func Offset: 0x3a4
	// Line 4724, Address: 0x1c5968, Func Offset: 0x3a8
	// Line 4728, Address: 0x1c596c, Func Offset: 0x3ac
	// Func End, Address: 0x1c59a0, Func Offset: 0x3e0
}

// zHudInterp1d__FfPfffi
// Start address: 0x1c59a0
void zHudInterp1d(float32 dt, float32* src, float32 dst, float32 speed, int32 type)
{
	float32 diff;
	// Line 4630, Address: 0x1c59a0, Func Offset: 0
	// Line 4631, Address: 0x1c59bc, Func Offset: 0x1c
	// Line 4633, Address: 0x1c59c0, Func Offset: 0x20
	// Line 4635, Address: 0x1c59dc, Func Offset: 0x3c
	// Line 4639, Address: 0x1c5a00, Func Offset: 0x60
	// Line 4640, Address: 0x1c5a10, Func Offset: 0x70
	// Line 4642, Address: 0x1c5a48, Func Offset: 0xa8
	// Line 4643, Address: 0x1c5a7c, Func Offset: 0xdc
	// Line 4646, Address: 0x1c5a84, Func Offset: 0xe4
	// Line 4647, Address: 0x1c5abc, Func Offset: 0x11c
	// Line 4660, Address: 0x1c5ac4, Func Offset: 0x124
	// Line 4663, Address: 0x1c5ac8, Func Offset: 0x128
	// Func End, Address: 0x1c5ae8, Func Offset: 0x148
}

// zHudHide__Fv
// Start address: 0x1c5af0
void zHudHide()
{
	// Line 4614, Address: 0x1c5af0, Func Offset: 0
	// Line 4615, Address: 0x1c5af4, Func Offset: 0x4
	// Line 4616, Address: 0x1c5af8, Func Offset: 0x8
	// Line 4617, Address: 0x1c5afc, Func Offset: 0xc
	// Line 4619, Address: 0x1c5b00, Func Offset: 0x10
	// Func End, Address: 0x1c5b08, Func Offset: 0x18
}

// zHudShow__Fv
// Start address: 0x1c5b10
void zHudShow()
{
	// Line 4604, Address: 0x1c5b10, Func Offset: 0
	// Line 4605, Address: 0x1c5b18, Func Offset: 0x8
	// Line 4608, Address: 0x1c5b1c, Func Offset: 0xc
	// Line 4606, Address: 0x1c5b20, Func Offset: 0x10
	// Line 4609, Address: 0x1c5b28, Func Offset: 0x18
	// Func End, Address: 0x1c5b30, Func Offset: 0x20
}

// zHudModelGetID__FUi
// Start address: 0x1c5b30
uint32 zHudModelGetID(uint32 modelEnum)
{
	int32 i;
	// Line 4555, Address: 0x1c5b38, Func Offset: 0x8
	// Line 4557, Address: 0x1c5b40, Func Offset: 0x10
	// Line 4558, Address: 0x1c5b4c, Func Offset: 0x1c
	// Line 4559, Address: 0x1c5b64, Func Offset: 0x34
	// Line 4563, Address: 0x1c5b70, Func Offset: 0x40
	// Line 4564, Address: 0x1c5b74, Func Offset: 0x44
	// Func End, Address: 0x1c5b7c, Func Offset: 0x4c
}

// zHud_sceneReset__Fv
// Start address: 0x1c5b80
void zHud_sceneReset()
{
	// Line 4528, Address: 0x1c5b80, Func Offset: 0
	// Func End, Address: 0x1c5b88, Func Offset: 0x8
}

// zHud_UIRender__FPcffffUc
// Start address: 0x1c5b90
void zHud_UIRender(int8* asset, float32 xPos, float32 yPos, float32 w, float32 h, uint8 alpha)
{
	float32 cooz;
	float32 cz;
	float32 z;
	float32 y2;
	float32 x2;
	RwCamera* camera;
	uint8 b;
	uint8 g;
	uint8 r;
	RwRaster* raster;
	RwTexture* texture;
	// Line 4413, Address: 0x1c5b90, Func Offset: 0
	// Line 4415, Address: 0x1c5bc4, Func Offset: 0x34
	// Line 4416, Address: 0x1c5bd8, Func Offset: 0x48
	// Line 4418, Address: 0x1c5be0, Func Offset: 0x50
	// Line 4419, Address: 0x1c5be4, Func Offset: 0x54
	// Line 4421, Address: 0x1c5bec, Func Offset: 0x5c
	// Line 4430, Address: 0x1c5bf4, Func Offset: 0x64
	// Line 4447, Address: 0x1c5bfc, Func Offset: 0x6c
	// Line 4427, Address: 0x1c5c00, Func Offset: 0x70
	// Line 4457, Address: 0x1c5c04, Func Offset: 0x74
	// Line 4459, Address: 0x1c5c0c, Func Offset: 0x7c
	// Line 4458, Address: 0x1c5c14, Func Offset: 0x84
	// Line 4459, Address: 0x1c5c18, Func Offset: 0x88
	// Line 4461, Address: 0x1c5c1c, Func Offset: 0x8c
	// Line 4462, Address: 0x1c5c28, Func Offset: 0x98
	// Line 4463, Address: 0x1c5c2c, Func Offset: 0x9c
	// Line 4464, Address: 0x1c5c30, Func Offset: 0xa0
	// Line 4468, Address: 0x1c5c34, Func Offset: 0xa4
	// Line 4465, Address: 0x1c5c38, Func Offset: 0xa8
	// Line 4466, Address: 0x1c5c3c, Func Offset: 0xac
	// Line 4467, Address: 0x1c5c40, Func Offset: 0xb0
	// Line 4468, Address: 0x1c5c44, Func Offset: 0xb4
	// Line 4470, Address: 0x1c5c54, Func Offset: 0xc4
	// Line 4471, Address: 0x1c5c58, Func Offset: 0xc8
	// Line 4472, Address: 0x1c5c5c, Func Offset: 0xcc
	// Line 4473, Address: 0x1c5c60, Func Offset: 0xd0
	// Line 4474, Address: 0x1c5c64, Func Offset: 0xd4
	// Line 4475, Address: 0x1c5c68, Func Offset: 0xd8
	// Line 4476, Address: 0x1c5c6c, Func Offset: 0xdc
	// Line 4477, Address: 0x1c5c70, Func Offset: 0xe0
	// Line 4479, Address: 0x1c5c80, Func Offset: 0xf0
	// Line 4480, Address: 0x1c5c84, Func Offset: 0xf4
	// Line 4481, Address: 0x1c5c88, Func Offset: 0xf8
	// Line 4482, Address: 0x1c5c8c, Func Offset: 0xfc
	// Line 4483, Address: 0x1c5c90, Func Offset: 0x100
	// Line 4484, Address: 0x1c5c94, Func Offset: 0x104
	// Line 4485, Address: 0x1c5c98, Func Offset: 0x108
	// Line 4486, Address: 0x1c5c9c, Func Offset: 0x10c
	// Line 4488, Address: 0x1c5cac, Func Offset: 0x11c
	// Line 4489, Address: 0x1c5cb0, Func Offset: 0x120
	// Line 4490, Address: 0x1c5cb4, Func Offset: 0x124
	// Line 4491, Address: 0x1c5cb8, Func Offset: 0x128
	// Line 4492, Address: 0x1c5cbc, Func Offset: 0x12c
	// Line 4493, Address: 0x1c5cc0, Func Offset: 0x130
	// Line 4494, Address: 0x1c5cc4, Func Offset: 0x134
	// Line 4495, Address: 0x1c5cc8, Func Offset: 0x138
	// Line 4502, Address: 0x1c5cd4, Func Offset: 0x144
	// Line 4504, Address: 0x1c5d6c, Func Offset: 0x1dc
	// Line 4506, Address: 0x1c5e04, Func Offset: 0x274
	// Line 4508, Address: 0x1c5e9c, Func Offset: 0x30c
	// Line 4511, Address: 0x1c5f38, Func Offset: 0x3a8
	// Line 4512, Address: 0x1c5f40, Func Offset: 0x3b0
	// Line 4513, Address: 0x1c5f4c, Func Offset: 0x3bc
	// Line 4514, Address: 0x1c5f58, Func Offset: 0x3c8
	// Line 4515, Address: 0x1c5f64, Func Offset: 0x3d4
	// Line 4516, Address: 0x1c5f70, Func Offset: 0x3e0
	// Line 4517, Address: 0x1c5f7c, Func Offset: 0x3ec
	// Line 4520, Address: 0x1c5f88, Func Offset: 0x3f8
	// Line 4522, Address: 0x1c5fa4, Func Offset: 0x414
	// Func End, Address: 0x1c5fcc, Func Offset: 0x43c
}

// zHud_DrawText__FffffPcifUc18eHudDropShadowMode
// Start address: 0x1c5fd0
void zHud_DrawText(float32 x, float32 y, float32 w, float32 h, int8* s, int32 just, float32 size, uint8 alpha, eHudDropShadowMode shadow)
{
	float32 drawSizeY;
	float32 drawSizeX;
	// Line 4331, Address: 0x1c5fd0, Func Offset: 0
	// Line 4341, Address: 0x1c5ff8, Func Offset: 0x28
	// Line 4331, Address: 0x1c5ffc, Func Offset: 0x2c
	// Line 4341, Address: 0x1c6000, Func Offset: 0x30
	// Line 4331, Address: 0x1c6004, Func Offset: 0x34
	// Line 4341, Address: 0x1c6008, Func Offset: 0x38
	// Line 4342, Address: 0x1c600c, Func Offset: 0x3c
	// Line 4348, Address: 0x1c6010, Func Offset: 0x40
	// Line 4342, Address: 0x1c601c, Func Offset: 0x4c
	// Line 4348, Address: 0x1c6030, Func Offset: 0x60
	// Line 4350, Address: 0x1c6038, Func Offset: 0x68
	// Line 4351, Address: 0x1c603c, Func Offset: 0x6c
	// Line 4354, Address: 0x1c6040, Func Offset: 0x70
	// Line 4358, Address: 0x1c604c, Func Offset: 0x7c
	// Line 4359, Address: 0x1c6084, Func Offset: 0xb4
	// Line 4360, Address: 0x1c6090, Func Offset: 0xc0
	// Line 4361, Address: 0x1c60a0, Func Offset: 0xd0
	// Line 4362, Address: 0x1c60b0, Func Offset: 0xe0
	// Line 4363, Address: 0x1c60bc, Func Offset: 0xec
	// Line 4365, Address: 0x1c60c8, Func Offset: 0xf8
	// Line 4366, Address: 0x1c60d0, Func Offset: 0x100
	// Line 4371, Address: 0x1c60d8, Func Offset: 0x108
	// Line 4372, Address: 0x1c60f8, Func Offset: 0x128
	// Line 4371, Address: 0x1c60fc, Func Offset: 0x12c
	// Line 4372, Address: 0x1c6104, Func Offset: 0x134
	// Line 4373, Address: 0x1c610c, Func Offset: 0x13c
	// Line 4374, Address: 0x1c611c, Func Offset: 0x14c
	// Line 4375, Address: 0x1c612c, Func Offset: 0x15c
	// Line 4376, Address: 0x1c6138, Func Offset: 0x168
	// Line 4378, Address: 0x1c6144, Func Offset: 0x174
	// Line 4379, Address: 0x1c614c, Func Offset: 0x17c
	// Line 4380, Address: 0x1c6154, Func Offset: 0x184
	// Func End, Address: 0x1c6188, Func Offset: 0x1b8
}

// zHudElementsCB_GameStatsRender__Fv
// Start address: 0x1c6190
void zHudElementsCB_GameStatsRender()
{
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	int32 i;
	// Line 4160, Address: 0x1c6190, Func Offset: 0
	// Line 4161, Address: 0x1c61b4, Func Offset: 0x24
	// Line 4164, Address: 0x1c61e0, Func Offset: 0x50
	// Line 4168, Address: 0x1c61ec, Func Offset: 0x5c
	// Line 4172, Address: 0x1c6208, Func Offset: 0x78
	// Line 4176, Address: 0x1c6214, Func Offset: 0x84
	// Line 4180, Address: 0x1c6258, Func Offset: 0xc8
	// Line 4184, Address: 0x1c6270, Func Offset: 0xe0
	// Line 4189, Address: 0x1c628c, Func Offset: 0xfc
	// Line 4190, Address: 0x1c6290, Func Offset: 0x100
	// Line 4184, Address: 0x1c6294, Func Offset: 0x104
	// Line 4189, Address: 0x1c62e4, Func Offset: 0x154
	// Line 4190, Address: 0x1c62fc, Func Offset: 0x16c
	// Line 4194, Address: 0x1c6314, Func Offset: 0x184
	// Line 4196, Address: 0x1c6328, Func Offset: 0x198
	// Line 4197, Address: 0x1c632c, Func Offset: 0x19c
	// Line 4198, Address: 0x1c6330, Func Offset: 0x1a0
	// Line 4200, Address: 0x1c6334, Func Offset: 0x1a4
	// Line 4203, Address: 0x1c6338, Func Offset: 0x1a8
	// Line 4206, Address: 0x1c634c, Func Offset: 0x1bc
	// Line 4211, Address: 0x1c6360, Func Offset: 0x1d0
	// Line 4214, Address: 0x1c6380, Func Offset: 0x1f0
	// Line 4216, Address: 0x1c6390, Func Offset: 0x200
	// Func End, Address: 0x1c63bc, Func Offset: 0x22c
}

// zHudElementsCB_GameStatsUpdate__FP7_xScenef
// Start address: 0x1c63c0
void zHudElementsCB_GameStatsUpdate(float32 dt)
{
	float32 total;
	float32 collected;
	int32 i;
	iColor_tag black;
	iColor_tag clear;
	// Line 3793, Address: 0x1c63c0, Func Offset: 0
	// Line 3797, Address: 0x1c63dc, Func Offset: 0x1c
	// Line 3801, Address: 0x1c63f0, Func Offset: 0x30
	// Line 3809, Address: 0x1c63fc, Func Offset: 0x3c
	// Line 3812, Address: 0x1c6404, Func Offset: 0x44
	// Line 3814, Address: 0x1c640c, Func Offset: 0x4c
	// Line 3813, Address: 0x1c6414, Func Offset: 0x54
	// Line 3814, Address: 0x1c6418, Func Offset: 0x58
	// Line 3812, Address: 0x1c641c, Func Offset: 0x5c
	// Line 3813, Address: 0x1c6420, Func Offset: 0x60
	// Line 3814, Address: 0x1c6424, Func Offset: 0x64
	// Line 3817, Address: 0x1c6434, Func Offset: 0x74
	// Line 3827, Address: 0x1c6440, Func Offset: 0x80
	// Line 3830, Address: 0x1c6450, Func Offset: 0x90
	// Line 3836, Address: 0x1c6454, Func Offset: 0x94
	// Line 3840, Address: 0x1c645c, Func Offset: 0x9c
	// Line 3841, Address: 0x1c647c, Func Offset: 0xbc
	// Line 3843, Address: 0x1c6488, Func Offset: 0xc8
	// Line 3844, Address: 0x1c648c, Func Offset: 0xcc
	// Line 3861, Address: 0x1c6494, Func Offset: 0xd4
	// Line 3862, Address: 0x1c64b4, Func Offset: 0xf4
	// Line 3865, Address: 0x1c64bc, Func Offset: 0xfc
	// Line 3869, Address: 0x1c64c4, Func Offset: 0x104
	// Line 3873, Address: 0x1c64d4, Func Offset: 0x114
	// Line 3878, Address: 0x1c64e0, Func Offset: 0x120
	// Line 3882, Address: 0x1c6508, Func Offset: 0x148
	// Line 3888, Address: 0x1c652c, Func Offset: 0x16c
	// Line 3891, Address: 0x1c6534, Func Offset: 0x174
	// Line 3897, Address: 0x1c6558, Func Offset: 0x198
	// Line 3900, Address: 0x1c6560, Func Offset: 0x1a0
	// Line 3906, Address: 0x1c6584, Func Offset: 0x1c4
	// Line 3909, Address: 0x1c658c, Func Offset: 0x1cc
	// Line 3915, Address: 0x1c65b0, Func Offset: 0x1f0
	// Line 3926, Address: 0x1c65b8, Func Offset: 0x1f8
	// Line 3938, Address: 0x1c65dc, Func Offset: 0x21c
	// Line 3941, Address: 0x1c65e0, Func Offset: 0x220
	// Line 3945, Address: 0x1c6610, Func Offset: 0x250
	// Line 3949, Address: 0x1c662c, Func Offset: 0x26c
	// Line 3952, Address: 0x1c6634, Func Offset: 0x274
	// Line 3956, Address: 0x1c6650, Func Offset: 0x290
	// Line 3959, Address: 0x1c6658, Func Offset: 0x298
	// Line 3963, Address: 0x1c6674, Func Offset: 0x2b4
	// Line 3967, Address: 0x1c6690, Func Offset: 0x2d0
	// Line 3980, Address: 0x1c66ac, Func Offset: 0x2ec
	// Line 3982, Address: 0x1c66b0, Func Offset: 0x2f0
	// Line 3985, Address: 0x1c66e0, Func Offset: 0x320
	// Line 3989, Address: 0x1c66fc, Func Offset: 0x33c
	// Line 3994, Address: 0x1c6718, Func Offset: 0x358
	// Line 3997, Address: 0x1c6720, Func Offset: 0x360
	// Line 4001, Address: 0x1c673c, Func Offset: 0x37c
	// Line 4015, Address: 0x1c6758, Func Offset: 0x398
	// Line 4018, Address: 0x1c678c, Func Offset: 0x3cc
	// Line 4022, Address: 0x1c67a8, Func Offset: 0x3e8
	// Line 4024, Address: 0x1c67b0, Func Offset: 0x3f0
	// Line 4036, Address: 0x1c67cc, Func Offset: 0x40c
	// Line 4052, Address: 0x1c67d0, Func Offset: 0x410
	// Line 4056, Address: 0x1c6800, Func Offset: 0x440
	// Line 4057, Address: 0x1c6830, Func Offset: 0x470
	// Line 4062, Address: 0x1c6860, Func Offset: 0x4a0
	// Line 4064, Address: 0x1c6880, Func Offset: 0x4c0
	// Line 4068, Address: 0x1c6888, Func Offset: 0x4c8
	// Line 4069, Address: 0x1c68b8, Func Offset: 0x4f8
	// Line 4074, Address: 0x1c68e8, Func Offset: 0x528
	// Line 4076, Address: 0x1c6908, Func Offset: 0x548
	// Line 4080, Address: 0x1c6910, Func Offset: 0x550
	// Line 4081, Address: 0x1c6940, Func Offset: 0x580
	// Line 4086, Address: 0x1c6970, Func Offset: 0x5b0
	// Line 4088, Address: 0x1c6990, Func Offset: 0x5d0
	// Line 4097, Address: 0x1c6998, Func Offset: 0x5d8
	// Line 4104, Address: 0x1c69ec, Func Offset: 0x62c
	// Line 4107, Address: 0x1c69f0, Func Offset: 0x630
	// Line 4111, Address: 0x1c69f4, Func Offset: 0x634
	// Line 4107, Address: 0x1c69f8, Func Offset: 0x638
	// Line 4111, Address: 0x1c69fc, Func Offset: 0x63c
	// Line 4107, Address: 0x1c6a00, Func Offset: 0x640
	// Line 4108, Address: 0x1c6a0c, Func Offset: 0x64c
	// Line 4109, Address: 0x1c6a20, Func Offset: 0x660
	// Line 4111, Address: 0x1c6a34, Func Offset: 0x674
	// Line 4158, Address: 0x1c6a3c, Func Offset: 0x67c
	// Func End, Address: 0x1c6a5c, Func Offset: 0x69c
}

// zHudElementsCB_GameStatsSetup__FP7_xScene
// Start address: 0x1c6a60
void zHudElementsCB_GameStatsSetup()
{
	int32 i;
	// Line 3666, Address: 0x1c6a64, Func Offset: 0x4
	// Line 3669, Address: 0x1c6a6c, Func Offset: 0xc
	// Line 3672, Address: 0x1c6a84, Func Offset: 0x24
	// Line 3671, Address: 0x1c6a88, Func Offset: 0x28
	// Line 3672, Address: 0x1c6a8c, Func Offset: 0x2c
	// Line 3671, Address: 0x1c6a90, Func Offset: 0x30
	// Line 3672, Address: 0x1c6a94, Func Offset: 0x34
	// Line 3673, Address: 0x1c6ab4, Func Offset: 0x54
	// Line 3676, Address: 0x1c6abc, Func Offset: 0x5c
	// Line 3679, Address: 0x1c6ae8, Func Offset: 0x88
	// Line 3680, Address: 0x1c6af0, Func Offset: 0x90
	// Line 3681, Address: 0x1c6b18, Func Offset: 0xb8
	// Line 3684, Address: 0x1c6b20, Func Offset: 0xc0
	// Line 3685, Address: 0x1c6b28, Func Offset: 0xc8
	// Line 3686, Address: 0x1c6b50, Func Offset: 0xf0
	// Line 3689, Address: 0x1c6b58, Func Offset: 0xf8
	// Line 3690, Address: 0x1c6b60, Func Offset: 0x100
	// Line 3693, Address: 0x1c6b8c, Func Offset: 0x12c
	// Line 3695, Address: 0x1c6b90, Func Offset: 0x130
	// Line 3700, Address: 0x1c6bb8, Func Offset: 0x158
	// Line 3699, Address: 0x1c6bbc, Func Offset: 0x15c
	// Line 3700, Address: 0x1c6bc0, Func Offset: 0x160
	// Line 3699, Address: 0x1c6bc4, Func Offset: 0x164
	// Line 3700, Address: 0x1c6bc8, Func Offset: 0x168
	// Line 3701, Address: 0x1c6be8, Func Offset: 0x188
	// Line 3706, Address: 0x1c6bf0, Func Offset: 0x190
	// Line 3705, Address: 0x1c6bf4, Func Offset: 0x194
	// Line 3706, Address: 0x1c6bf8, Func Offset: 0x198
	// Line 3705, Address: 0x1c6bfc, Func Offset: 0x19c
	// Line 3706, Address: 0x1c6c00, Func Offset: 0x1a0
	// Line 3707, Address: 0x1c6c20, Func Offset: 0x1c0
	// Line 3710, Address: 0x1c6c28, Func Offset: 0x1c8
	// Line 3711, Address: 0x1c6c30, Func Offset: 0x1d0
	// Line 3712, Address: 0x1c6c34, Func Offset: 0x1d4
	// Line 3714, Address: 0x1c6c3c, Func Offset: 0x1dc
	// Line 3715, Address: 0x1c6c48, Func Offset: 0x1e8
	// Line 3716, Address: 0x1c6c4c, Func Offset: 0x1ec
	// Line 3718, Address: 0x1c6c54, Func Offset: 0x1f4
	// Line 3719, Address: 0x1c6c5c, Func Offset: 0x1fc
	// Line 3722, Address: 0x1c6c64, Func Offset: 0x204
	// Line 3724, Address: 0x1c6c68, Func Offset: 0x208
	// Line 3728, Address: 0x1c6c94, Func Offset: 0x234
	// Line 3730, Address: 0x1c6c9c, Func Offset: 0x23c
	// Line 3734, Address: 0x1c6ca4, Func Offset: 0x244
	// Line 3736, Address: 0x1c6cac, Func Offset: 0x24c
	// Line 3740, Address: 0x1c6cb4, Func Offset: 0x254
	// Line 3742, Address: 0x1c6cbc, Func Offset: 0x25c
	// Line 3746, Address: 0x1c6cc4, Func Offset: 0x264
	// Line 3747, Address: 0x1c6ccc, Func Offset: 0x26c
	// Line 3753, Address: 0x1c6cd0, Func Offset: 0x270
	// Line 3754, Address: 0x1c6cd4, Func Offset: 0x274
	// Line 3757, Address: 0x1c6cd8, Func Offset: 0x278
	// Line 3755, Address: 0x1c6cdc, Func Offset: 0x27c
	// Line 3757, Address: 0x1c6ce0, Func Offset: 0x280
	// Line 3758, Address: 0x1c6ce8, Func Offset: 0x288
	// Line 3759, Address: 0x1c6cec, Func Offset: 0x28c
	// Line 3761, Address: 0x1c6cf0, Func Offset: 0x290
	// Line 3762, Address: 0x1c6cf8, Func Offset: 0x298
	// Line 3763, Address: 0x1c6cfc, Func Offset: 0x29c
	// Line 3764, Address: 0x1c6d00, Func Offset: 0x2a0
	// Line 3766, Address: 0x1c6d08, Func Offset: 0x2a8
	// Line 3767, Address: 0x1c6d0c, Func Offset: 0x2ac
	// Line 3768, Address: 0x1c6d10, Func Offset: 0x2b0
	// Line 3769, Address: 0x1c6d14, Func Offset: 0x2b4
	// Line 3772, Address: 0x1c6d18, Func Offset: 0x2b8
	// Line 3773, Address: 0x1c6d20, Func Offset: 0x2c0
	// Line 3774, Address: 0x1c6d28, Func Offset: 0x2c8
	// Line 3775, Address: 0x1c6d2c, Func Offset: 0x2cc
	// Line 3778, Address: 0x1c6d30, Func Offset: 0x2d0
	// Line 3788, Address: 0x1c6d34, Func Offset: 0x2d4
	// Line 3778, Address: 0x1c6d3c, Func Offset: 0x2dc
	// Line 3779, Address: 0x1c6d40, Func Offset: 0x2e0
	// Line 3782, Address: 0x1c6d48, Func Offset: 0x2e8
	// Line 3783, Address: 0x1c6d50, Func Offset: 0x2f0
	// Line 3786, Address: 0x1c6d58, Func Offset: 0x2f8
	// Line 3788, Address: 0x1c6d60, Func Offset: 0x300
	// Line 3790, Address: 0x1c6d68, Func Offset: 0x308
	// Func End, Address: 0x1c6d70, Func Offset: 0x310
}

// zHudElementsCB_GameStatsInit__Fv
// Start address: 0x1c6d70
void zHudElementsCB_GameStatsInit()
{
	xAnimFile* afile;
	uint32 size;
	void* buff;
	int32 i;
	// Line 3603, Address: 0x1c6d70, Func Offset: 0
	// Line 3606, Address: 0x1c6d94, Func Offset: 0x24
	// Line 3607, Address: 0x1c6e28, Func Offset: 0xb8
	// Line 3608, Address: 0x1c6e34, Func Offset: 0xc4
	// Line 3609, Address: 0x1c6ec8, Func Offset: 0x158
	// Line 3610, Address: 0x1c6ecc, Func Offset: 0x15c
	// Line 3611, Address: 0x1c6f6c, Func Offset: 0x1fc
	// Line 3617, Address: 0x1c6f70, Func Offset: 0x200
	// Line 3625, Address: 0x1c6f78, Func Offset: 0x208
	// Line 3629, Address: 0x1c6fa4, Func Offset: 0x234
	// Line 3630, Address: 0x1c6fbc, Func Offset: 0x24c
	// Line 3634, Address: 0x1c6fc4, Func Offset: 0x254
	// Line 3635, Address: 0x1c6fdc, Func Offset: 0x26c
	// Line 3637, Address: 0x1c6fe4, Func Offset: 0x274
	// Line 3642, Address: 0x1c7000, Func Offset: 0x290
	// Line 3643, Address: 0x1c7008, Func Offset: 0x298
	// Line 3646, Address: 0x1c7024, Func Offset: 0x2b4
	// Line 3647, Address: 0x1c7038, Func Offset: 0x2c8
	// Line 3648, Address: 0x1c7068, Func Offset: 0x2f8
	// Line 3649, Address: 0x1c707c, Func Offset: 0x30c
	// Line 3656, Address: 0x1c7094, Func Offset: 0x324
	// Line 3657, Address: 0x1c7098, Func Offset: 0x328
	// Line 3660, Address: 0x1c70a8, Func Offset: 0x338
	// Func End, Address: 0x1c70c8, Func Offset: 0x358
}

// zHudElementsCB_HealthbarRender__Fv
// Start address: 0x1c70d0
void zHudElementsCB_HealthbarRender()
{
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	int32 i;
	// Line 3558, Address: 0x1c70d0, Func Offset: 0
	// Line 3559, Address: 0x1c710c, Func Offset: 0x3c
	// Line 3563, Address: 0x1c7118, Func Offset: 0x48
	// Line 3567, Address: 0x1c7134, Func Offset: 0x64
	// Line 3572, Address: 0x1c7150, Func Offset: 0x80
	// Line 3573, Address: 0x1c7154, Func Offset: 0x84
	// Line 3567, Address: 0x1c7158, Func Offset: 0x88
	// Line 3572, Address: 0x1c71a8, Func Offset: 0xd8
	// Line 3573, Address: 0x1c71c0, Func Offset: 0xf0
	// Line 3577, Address: 0x1c71d8, Func Offset: 0x108
	// Line 3579, Address: 0x1c71ec, Func Offset: 0x11c
	// Line 3580, Address: 0x1c71f0, Func Offset: 0x120
	// Line 3581, Address: 0x1c71f4, Func Offset: 0x124
	// Line 3583, Address: 0x1c71f8, Func Offset: 0x128
	// Line 3586, Address: 0x1c71fc, Func Offset: 0x12c
	// Line 3589, Address: 0x1c7210, Func Offset: 0x140
	// Line 3594, Address: 0x1c7224, Func Offset: 0x154
	// Line 3595, Address: 0x1c7244, Func Offset: 0x174
	// Line 3596, Address: 0x1c7248, Func Offset: 0x178
	// Line 3598, Address: 0x1c7258, Func Offset: 0x188
	// Func End, Address: 0x1c727c, Func Offset: 0x1ac
}

// zHudElementsCB_HealthbarUpdate__FP7_xScenef
// Start address: 0x1c7280
void zHudElementsCB_HealthbarUpdate(float32 dt)
{
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 num;
	// Line 3293, Address: 0x1c7280, Func Offset: 0
	// Line 3295, Address: 0x1c7294, Func Offset: 0x14
	// Line 3293, Address: 0x1c7298, Func Offset: 0x18
	// Line 3295, Address: 0x1c729c, Func Offset: 0x1c
	// Line 3296, Address: 0x1c72a8, Func Offset: 0x28
	// Line 3303, Address: 0x1c72d4, Func Offset: 0x54
	// Line 3306, Address: 0x1c72f0, Func Offset: 0x70
	// Line 3315, Address: 0x1c72fc, Func Offset: 0x7c
	// Line 3337, Address: 0x1c7304, Func Offset: 0x84
	// Line 3328, Address: 0x1c7308, Func Offset: 0x88
	// Line 3330, Address: 0x1c7330, Func Offset: 0xb0
	// Line 3328, Address: 0x1c7374, Func Offset: 0xf4
	// Line 3333, Address: 0x1c7378, Func Offset: 0xf8
	// Line 3330, Address: 0x1c737c, Func Offset: 0xfc
	// Line 3333, Address: 0x1c7380, Func Offset: 0x100
	// Line 3330, Address: 0x1c7384, Func Offset: 0x104
	// Line 3333, Address: 0x1c7388, Func Offset: 0x108
	// Line 3335, Address: 0x1c7398, Func Offset: 0x118
	// Line 3340, Address: 0x1c73b0, Func Offset: 0x130
	// Line 3337, Address: 0x1c73b4, Func Offset: 0x134
	// Line 3340, Address: 0x1c73b8, Func Offset: 0x138
	// Line 3337, Address: 0x1c73bc, Func Offset: 0x13c
	// Line 3340, Address: 0x1c73c0, Func Offset: 0x140
	// Line 3343, Address: 0x1c73d0, Func Offset: 0x150
	// Line 3350, Address: 0x1c73e0, Func Offset: 0x160
	// Line 3352, Address: 0x1c73f4, Func Offset: 0x174
	// Line 3353, Address: 0x1c73f8, Func Offset: 0x178
	// Line 3357, Address: 0x1c7400, Func Offset: 0x180
	// Line 3362, Address: 0x1c7420, Func Offset: 0x1a0
	// Line 3363, Address: 0x1c7430, Func Offset: 0x1b0
	// Line 3366, Address: 0x1c7450, Func Offset: 0x1d0
	// Line 3373, Address: 0x1c7458, Func Offset: 0x1d8
	// Line 3374, Address: 0x1c7460, Func Offset: 0x1e0
	// Line 3377, Address: 0x1c7484, Func Offset: 0x204
	// Line 3379, Address: 0x1c748c, Func Offset: 0x20c
	// Line 3380, Address: 0x1c749c, Func Offset: 0x21c
	// Line 3385, Address: 0x1c74a0, Func Offset: 0x220
	// Line 3387, Address: 0x1c74ec, Func Offset: 0x26c
	// Line 3385, Address: 0x1c74f0, Func Offset: 0x270
	// Line 3391, Address: 0x1c74fc, Func Offset: 0x27c
	// Line 3395, Address: 0x1c7524, Func Offset: 0x2a4
	// Line 3397, Address: 0x1c754c, Func Offset: 0x2cc
	// Line 3399, Address: 0x1c7550, Func Offset: 0x2d0
	// Line 3406, Address: 0x1c7574, Func Offset: 0x2f4
	// Line 3410, Address: 0x1c757c, Func Offset: 0x2fc
	// Line 3416, Address: 0x1c75a0, Func Offset: 0x320
	// Line 3429, Address: 0x1c75a8, Func Offset: 0x328
	// Line 3441, Address: 0x1c75cc, Func Offset: 0x34c
	// Line 3444, Address: 0x1c75d0, Func Offset: 0x350
	// Line 3448, Address: 0x1c7608, Func Offset: 0x388
	// Line 3452, Address: 0x1c7624, Func Offset: 0x3a4
	// Line 3455, Address: 0x1c762c, Func Offset: 0x3ac
	// Line 3459, Address: 0x1c7648, Func Offset: 0x3c8
	// Line 3462, Address: 0x1c7650, Func Offset: 0x3d0
	// Line 3466, Address: 0x1c766c, Func Offset: 0x3ec
	// Line 3469, Address: 0x1c7674, Func Offset: 0x3f4
	// Line 3473, Address: 0x1c7690, Func Offset: 0x410
	// Line 3477, Address: 0x1c76ac, Func Offset: 0x42c
	// Line 3492, Address: 0x1c76c8, Func Offset: 0x448
	// Line 3495, Address: 0x1c76f8, Func Offset: 0x478
	// Line 3499, Address: 0x1c7714, Func Offset: 0x494
	// Line 3504, Address: 0x1c7730, Func Offset: 0x4b0
	// Line 3507, Address: 0x1c7738, Func Offset: 0x4b8
	// Line 3511, Address: 0x1c7754, Func Offset: 0x4d4
	// Line 3526, Address: 0x1c7770, Func Offset: 0x4f0
	// Line 3529, Address: 0x1c7790, Func Offset: 0x510
	// Line 3533, Address: 0x1c77ac, Func Offset: 0x52c
	// Line 3535, Address: 0x1c77b4, Func Offset: 0x534
	// Line 3547, Address: 0x1c77d0, Func Offset: 0x550
	// Line 3548, Address: 0x1c77e4, Func Offset: 0x564
	// Line 3549, Address: 0x1c77f8, Func Offset: 0x578
	// Line 3552, Address: 0x1c780c, Func Offset: 0x58c
	// Line 3553, Address: 0x1c7818, Func Offset: 0x598
	// Line 3554, Address: 0x1c7820, Func Offset: 0x5a0
	// Line 3556, Address: 0x1c7830, Func Offset: 0x5b0
	// Func End, Address: 0x1c784c, Func Offset: 0x5cc
}

// zHudElementsCB_HealthbarSetup__FP7_xScene
// Start address: 0x1c7850
void zHudElementsCB_HealthbarSetup()
{
	xAnimSingle* asing;
	xAnimPlay* aplay;
	int32 i;
	// Line 3201, Address: 0x1c7850, Func Offset: 0
	// Line 3202, Address: 0x1c7860, Func Offset: 0x10
	// Line 3207, Address: 0x1c786c, Func Offset: 0x1c
	// Line 3202, Address: 0x1c7874, Func Offset: 0x24
	// Line 3210, Address: 0x1c7878, Func Offset: 0x28
	// Line 3227, Address: 0x1c7884, Func Offset: 0x34
	// Line 3231, Address: 0x1c788c, Func Offset: 0x3c
	// Line 3210, Address: 0x1c7894, Func Offset: 0x44
	// Line 3211, Address: 0x1c789c, Func Offset: 0x4c
	// Line 3210, Address: 0x1c78a0, Func Offset: 0x50
	// Line 3213, Address: 0x1c78a4, Func Offset: 0x54
	// Line 3217, Address: 0x1c78a8, Func Offset: 0x58
	// Line 3218, Address: 0x1c78ac, Func Offset: 0x5c
	// Line 3236, Address: 0x1c78b0, Func Offset: 0x60
	// Line 3210, Address: 0x1c78b4, Func Offset: 0x64
	// Line 3213, Address: 0x1c78b8, Func Offset: 0x68
	// Line 3210, Address: 0x1c78c0, Func Offset: 0x70
	// Line 3236, Address: 0x1c78c4, Func Offset: 0x74
	// Line 3239, Address: 0x1c78c8, Func Offset: 0x78
	// Line 3242, Address: 0x1c78cc, Func Offset: 0x7c
	// Line 3210, Address: 0x1c78d0, Func Offset: 0x80
	// Line 3211, Address: 0x1c78d4, Func Offset: 0x84
	// Line 3213, Address: 0x1c78d8, Func Offset: 0x88
	// Line 3223, Address: 0x1c78dc, Func Offset: 0x8c
	// Line 3239, Address: 0x1c78e0, Func Offset: 0x90
	// Line 3213, Address: 0x1c78e4, Func Offset: 0x94
	// Line 3215, Address: 0x1c78ec, Func Offset: 0x9c
	// Line 3217, Address: 0x1c78f0, Func Offset: 0xa0
	// Line 3218, Address: 0x1c78f4, Func Offset: 0xa4
	// Line 3220, Address: 0x1c78f8, Func Offset: 0xa8
	// Line 3221, Address: 0x1c78fc, Func Offset: 0xac
	// Line 3223, Address: 0x1c7900, Func Offset: 0xb0
	// Line 3224, Address: 0x1c7904, Func Offset: 0xb4
	// Line 3225, Address: 0x1c7908, Func Offset: 0xb8
	// Line 3227, Address: 0x1c790c, Func Offset: 0xbc
	// Line 3228, Address: 0x1c7910, Func Offset: 0xc0
	// Line 3229, Address: 0x1c7914, Func Offset: 0xc4
	// Line 3231, Address: 0x1c7918, Func Offset: 0xc8
	// Line 3232, Address: 0x1c791c, Func Offset: 0xcc
	// Line 3233, Address: 0x1c7920, Func Offset: 0xd0
	// Line 3235, Address: 0x1c7924, Func Offset: 0xd4
	// Line 3236, Address: 0x1c7928, Func Offset: 0xd8
	// Line 3237, Address: 0x1c792c, Func Offset: 0xdc
	// Line 3239, Address: 0x1c7930, Func Offset: 0xe0
	// Line 3240, Address: 0x1c7934, Func Offset: 0xe4
	// Line 3241, Address: 0x1c7938, Func Offset: 0xe8
	// Line 3242, Address: 0x1c793c, Func Offset: 0xec
	// Line 3244, Address: 0x1c7940, Func Offset: 0xf0
	// Line 3245, Address: 0x1c7944, Func Offset: 0xf4
	// Line 3246, Address: 0x1c7948, Func Offset: 0xf8
	// Line 3247, Address: 0x1c794c, Func Offset: 0xfc
	// Line 3251, Address: 0x1c7950, Func Offset: 0x100
	// Line 3252, Address: 0x1c7954, Func Offset: 0x104
	// Line 3253, Address: 0x1c7958, Func Offset: 0x108
	// Line 3254, Address: 0x1c795c, Func Offset: 0x10c
	// Line 3257, Address: 0x1c7960, Func Offset: 0x110
	// Line 3258, Address: 0x1c7968, Func Offset: 0x118
	// Line 3261, Address: 0x1c7970, Func Offset: 0x120
	// Line 3262, Address: 0x1c7978, Func Offset: 0x128
	// Line 3263, Address: 0x1c7980, Func Offset: 0x130
	// Line 3266, Address: 0x1c7988, Func Offset: 0x138
	// Line 3267, Address: 0x1c7990, Func Offset: 0x140
	// Line 3270, Address: 0x1c7998, Func Offset: 0x148
	// Line 3274, Address: 0x1c79a0, Func Offset: 0x150
	// Line 3275, Address: 0x1c79a8, Func Offset: 0x158
	// Line 3277, Address: 0x1c79b0, Func Offset: 0x160
	// Line 3278, Address: 0x1c79b4, Func Offset: 0x164
	// Line 3279, Address: 0x1c79b8, Func Offset: 0x168
	// Line 3281, Address: 0x1c79bc, Func Offset: 0x16c
	// Line 3283, Address: 0x1c79d4, Func Offset: 0x184
	// Line 3287, Address: 0x1c79d8, Func Offset: 0x188
	// Line 3289, Address: 0x1c79e8, Func Offset: 0x198
	// Func End, Address: 0x1c79fc, Func Offset: 0x1ac
}

// zHudElementsCB_HealthbarInit__Fv
// Start address: 0x1c7a00
void zHudElementsCB_HealthbarInit()
{
	xAnimFile* afile;
	uint32 size;
	void* buff;
	int32 i;
	// Line 3122, Address: 0x1c7a00, Func Offset: 0
	// Line 3137, Address: 0x1c7a24, Func Offset: 0x24
	// Line 3140, Address: 0x1c7ab8, Func Offset: 0xb8
	// Line 3146, Address: 0x1c7ae4, Func Offset: 0xe4
	// Line 3154, Address: 0x1c7aec, Func Offset: 0xec
	// Line 3157, Address: 0x1c7b2c, Func Offset: 0x12c
	// Line 3158, Address: 0x1c7b44, Func Offset: 0x144
	// Line 3161, Address: 0x1c7b4c, Func Offset: 0x14c
	// Line 3162, Address: 0x1c7b64, Func Offset: 0x164
	// Line 3165, Address: 0x1c7b6c, Func Offset: 0x16c
	// Line 3166, Address: 0x1c7b84, Func Offset: 0x184
	// Line 3169, Address: 0x1c7b8c, Func Offset: 0x18c
	// Line 3170, Address: 0x1c7ba4, Func Offset: 0x1a4
	// Line 3173, Address: 0x1c7bac, Func Offset: 0x1ac
	// Line 3177, Address: 0x1c7bc8, Func Offset: 0x1c8
	// Line 3178, Address: 0x1c7bd0, Func Offset: 0x1d0
	// Line 3181, Address: 0x1c7bec, Func Offset: 0x1ec
	// Line 3182, Address: 0x1c7c00, Func Offset: 0x200
	// Line 3183, Address: 0x1c7c30, Func Offset: 0x230
	// Line 3184, Address: 0x1c7c44, Func Offset: 0x244
	// Line 3191, Address: 0x1c7c5c, Func Offset: 0x25c
	// Line 3192, Address: 0x1c7c60, Func Offset: 0x260
	// Line 3196, Address: 0x1c7c70, Func Offset: 0x270
	// Func End, Address: 0x1c7c90, Func Offset: 0x290
}

// zHudElementsCB_GumpackRender__Fv
// Start address: 0x1c7c90
void zHudElementsCB_GumpackRender()
{
	int8 str[256];
	RwRGBA colgum;
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	zHudItem* item;
	// Line 3064, Address: 0x1c7c90, Func Offset: 0
	// Line 3065, Address: 0x1c7c9c, Func Offset: 0xc
	// Line 3064, Address: 0x1c7ca4, Func Offset: 0x14
	// Line 3070, Address: 0x1c7ca8, Func Offset: 0x18
	// Line 3064, Address: 0x1c7cac, Func Offset: 0x1c
	// Line 3070, Address: 0x1c7cb0, Func Offset: 0x20
	// Line 3075, Address: 0x1c7cbc, Func Offset: 0x2c
	// Line 3070, Address: 0x1c7cc0, Func Offset: 0x30
	// Line 3076, Address: 0x1c7ce8, Func Offset: 0x58
	// Line 3070, Address: 0x1c7cec, Func Offset: 0x5c
	// Line 3075, Address: 0x1c7d0c, Func Offset: 0x7c
	// Line 3076, Address: 0x1c7d14, Func Offset: 0x84
	// Line 3070, Address: 0x1c7d1c, Func Offset: 0x8c
	// Line 3075, Address: 0x1c7d34, Func Offset: 0xa4
	// Line 3076, Address: 0x1c7d44, Func Offset: 0xb4
	// Line 3080, Address: 0x1c7d54, Func Offset: 0xc4
	// Line 3082, Address: 0x1c7d68, Func Offset: 0xd8
	// Line 3083, Address: 0x1c7d6c, Func Offset: 0xdc
	// Line 3084, Address: 0x1c7d70, Func Offset: 0xe0
	// Line 3086, Address: 0x1c7d74, Func Offset: 0xe4
	// Line 3092, Address: 0x1c7d78, Func Offset: 0xe8
	// Line 3096, Address: 0x1c7d8c, Func Offset: 0xfc
	// Line 3100, Address: 0x1c7da8, Func Offset: 0x118
	// Line 3103, Address: 0x1c7dac, Func Offset: 0x11c
	// Line 3100, Address: 0x1c7db8, Func Offset: 0x128
	// Line 3103, Address: 0x1c7dbc, Func Offset: 0x12c
	// Line 3100, Address: 0x1c7dc0, Func Offset: 0x130
	// Line 3103, Address: 0x1c7dc4, Func Offset: 0x134
	// Line 3100, Address: 0x1c7dc8, Func Offset: 0x138
	// Line 3103, Address: 0x1c7df0, Func Offset: 0x160
	// Line 3107, Address: 0x1c7dfc, Func Offset: 0x16c
	// Line 3110, Address: 0x1c7e14, Func Offset: 0x184
	// Line 3112, Address: 0x1c7e44, Func Offset: 0x1b4
	// Line 3113, Address: 0x1c7e7c, Func Offset: 0x1ec
	// Line 3117, Address: 0x1c7ec0, Func Offset: 0x230
	// Func End, Address: 0x1c7ed8, Func Offset: 0x248
}

// zHudElementsCB_GumpackUpdate__FP7_xScenef
// Start address: 0x1c7ee0
void zHudElementsCB_GumpackUpdate(float32 dt)
{
	zHudItem* item;
	// Line 2840, Address: 0x1c7ee0, Func Offset: 0
	// Line 2842, Address: 0x1c7eec, Func Offset: 0xc
	// Line 2844, Address: 0x1c7ef4, Func Offset: 0x14
	// Line 2840, Address: 0x1c7ef8, Func Offset: 0x18
	// Line 2844, Address: 0x1c7efc, Func Offset: 0x1c
	// Line 2850, Address: 0x1c7f10, Func Offset: 0x30
	// Line 2852, Address: 0x1c7f14, Func Offset: 0x34
	// Line 2856, Address: 0x1c7f1c, Func Offset: 0x3c
	// Line 2860, Address: 0x1c7f20, Func Offset: 0x40
	// Line 2865, Address: 0x1c7f54, Func Offset: 0x74
	// Line 2868, Address: 0x1c7f5c, Func Offset: 0x7c
	// Line 2874, Address: 0x1c7f60, Func Offset: 0x80
	// Line 2876, Address: 0x1c7f74, Func Offset: 0x94
	// Line 2877, Address: 0x1c7f78, Func Offset: 0x98
	// Line 2881, Address: 0x1c7f80, Func Offset: 0xa0
	// Line 2885, Address: 0x1c7fa0, Func Offset: 0xc0
	// Line 2887, Address: 0x1c7fa4, Func Offset: 0xc4
	// Line 2893, Address: 0x1c7fac, Func Offset: 0xcc
	// Line 2896, Address: 0x1c7fb0, Func Offset: 0xd0
	// Line 2898, Address: 0x1c7fb8, Func Offset: 0xd8
	// Line 2899, Address: 0x1c7fc8, Func Offset: 0xe8
	// Line 2906, Address: 0x1c7fcc, Func Offset: 0xec
	// Line 2910, Address: 0x1c7ff4, Func Offset: 0x114
	// Line 2917, Address: 0x1c801c, Func Offset: 0x13c
	// Line 2921, Address: 0x1c8024, Func Offset: 0x144
	// Line 2928, Address: 0x1c8048, Func Offset: 0x168
	// Line 2941, Address: 0x1c8050, Func Offset: 0x170
	// Line 2956, Address: 0x1c8074, Func Offset: 0x194
	// Line 2960, Address: 0x1c80a4, Func Offset: 0x1c4
	// Line 2964, Address: 0x1c80c0, Func Offset: 0x1e0
	// Line 2967, Address: 0x1c80c8, Func Offset: 0x1e8
	// Line 2971, Address: 0x1c80e4, Func Offset: 0x204
	// Line 2974, Address: 0x1c80ec, Func Offset: 0x20c
	// Line 2978, Address: 0x1c8108, Func Offset: 0x228
	// Line 2982, Address: 0x1c8124, Func Offset: 0x244
	// Line 2997, Address: 0x1c8140, Func Offset: 0x260
	// Line 3000, Address: 0x1c8170, Func Offset: 0x290
	// Line 3004, Address: 0x1c818c, Func Offset: 0x2ac
	// Line 3009, Address: 0x1c81a8, Func Offset: 0x2c8
	// Line 3012, Address: 0x1c81b0, Func Offset: 0x2d0
	// Line 3016, Address: 0x1c81c8, Func Offset: 0x2e8
	// Line 3032, Address: 0x1c81e0, Func Offset: 0x300
	// Line 3035, Address: 0x1c8208, Func Offset: 0x328
	// Line 3039, Address: 0x1c8224, Func Offset: 0x344
	// Line 3041, Address: 0x1c822c, Func Offset: 0x34c
	// Line 3054, Address: 0x1c8248, Func Offset: 0x368
	// Line 3055, Address: 0x1c825c, Func Offset: 0x37c
	// Line 3056, Address: 0x1c8270, Func Offset: 0x390
	// Line 3059, Address: 0x1c8284, Func Offset: 0x3a4
	// Line 3060, Address: 0x1c8290, Func Offset: 0x3b0
	// Line 3062, Address: 0x1c8298, Func Offset: 0x3b8
	// Func End, Address: 0x1c82ac, Func Offset: 0x3cc
}

// zHudElementsCB_GumpackSetup__FP7_xScene
// Start address: 0x1c82b0
void zHudElementsCB_GumpackSetup()
{
	xAnimSingle* asing;
	xAnimPlay* aplay;
	zHudItem* item;
	// Line 2752, Address: 0x1c82b0, Func Offset: 0
	// Line 2753, Address: 0x1c82b8, Func Offset: 0x8
	// Line 2754, Address: 0x1c82c0, Func Offset: 0x10
	// Line 2760, Address: 0x1c82c8, Func Offset: 0x18
	// Line 2761, Address: 0x1c82d0, Func Offset: 0x20
	// Line 2753, Address: 0x1c82d4, Func Offset: 0x24
	// Line 2802, Address: 0x1c82d8, Func Offset: 0x28
	// Line 2761, Address: 0x1c82dc, Func Offset: 0x2c
	// Line 2762, Address: 0x1c82e0, Func Offset: 0x30
	// Line 2764, Address: 0x1c82e8, Func Offset: 0x38
	// Line 2765, Address: 0x1c82ec, Func Offset: 0x3c
	// Line 2767, Address: 0x1c82f4, Func Offset: 0x44
	// Line 2768, Address: 0x1c82fc, Func Offset: 0x4c
	// Line 2770, Address: 0x1c8304, Func Offset: 0x54
	// Line 2771, Address: 0x1c830c, Func Offset: 0x5c
	// Line 2773, Address: 0x1c8310, Func Offset: 0x60
	// Line 2774, Address: 0x1c8314, Func Offset: 0x64
	// Line 2777, Address: 0x1c8318, Func Offset: 0x68
	// Line 2775, Address: 0x1c831c, Func Offset: 0x6c
	// Line 2777, Address: 0x1c8320, Func Offset: 0x70
	// Line 2778, Address: 0x1c8328, Func Offset: 0x78
	// Line 2779, Address: 0x1c832c, Func Offset: 0x7c
	// Line 2781, Address: 0x1c8330, Func Offset: 0x80
	// Line 2782, Address: 0x1c8334, Func Offset: 0x84
	// Line 2783, Address: 0x1c8340, Func Offset: 0x90
	// Line 2785, Address: 0x1c8344, Func Offset: 0x94
	// Line 2786, Address: 0x1c8348, Func Offset: 0x98
	// Line 2787, Address: 0x1c834c, Func Offset: 0x9c
	// Line 2788, Address: 0x1c8350, Func Offset: 0xa0
	// Line 2802, Address: 0x1c8358, Func Offset: 0xa8
	// Line 2790, Address: 0x1c8364, Func Offset: 0xb4
	// Line 2791, Address: 0x1c8368, Func Offset: 0xb8
	// Line 2792, Address: 0x1c836c, Func Offset: 0xbc
	// Line 2802, Address: 0x1c8370, Func Offset: 0xc0
	// Line 2793, Address: 0x1c8374, Func Offset: 0xc4
	// Line 2796, Address: 0x1c8378, Func Offset: 0xc8
	// Line 2797, Address: 0x1c837c, Func Offset: 0xcc
	// Line 2798, Address: 0x1c8380, Func Offset: 0xd0
	// Line 2802, Address: 0x1c8384, Func Offset: 0xd4
	// Line 2804, Address: 0x1c8398, Func Offset: 0xe8
	// Line 2805, Address: 0x1c83a0, Func Offset: 0xf0
	// Line 2806, Address: 0x1c83a4, Func Offset: 0xf4
	// Line 2809, Address: 0x1c83ac, Func Offset: 0xfc
	// Line 2810, Address: 0x1c83b4, Func Offset: 0x104
	// Line 2814, Address: 0x1c83bc, Func Offset: 0x10c
	// Line 2815, Address: 0x1c83c4, Func Offset: 0x114
	// Line 2816, Address: 0x1c83cc, Func Offset: 0x11c
	// Line 2819, Address: 0x1c83d4, Func Offset: 0x124
	// Line 2820, Address: 0x1c83dc, Func Offset: 0x12c
	// Line 2823, Address: 0x1c83e4, Func Offset: 0x134
	// Line 2827, Address: 0x1c83ec, Func Offset: 0x13c
	// Line 2828, Address: 0x1c83f4, Func Offset: 0x144
	// Line 2830, Address: 0x1c83fc, Func Offset: 0x14c
	// Line 2832, Address: 0x1c8400, Func Offset: 0x150
	// Line 2831, Address: 0x1c8404, Func Offset: 0x154
	// Line 2832, Address: 0x1c840c, Func Offset: 0x15c
	// Line 2833, Address: 0x1c8410, Func Offset: 0x160
	// Line 2838, Address: 0x1c8428, Func Offset: 0x178
	// Func End, Address: 0x1c8434, Func Offset: 0x184
}

// zHudElementsCB_GumpackInit__Fv
// Start address: 0x1c8440
void zHudElementsCB_GumpackInit()
{
	xAnimFile* afile;
	uint32 size;
	void* buff;
	// Line 2713, Address: 0x1c8440, Func Offset: 0
	// Line 2715, Address: 0x1c8458, Func Offset: 0x18
	// Line 2716, Address: 0x1c84ec, Func Offset: 0xac
	// Line 2729, Address: 0x1c84f8, Func Offset: 0xb8
	// Line 2732, Address: 0x1c8514, Func Offset: 0xd4
	// Line 2733, Address: 0x1c851c, Func Offset: 0xdc
	// Line 2736, Address: 0x1c8534, Func Offset: 0xf4
	// Line 2737, Address: 0x1c8548, Func Offset: 0x108
	// Line 2738, Address: 0x1c8578, Func Offset: 0x138
	// Line 2739, Address: 0x1c858c, Func Offset: 0x14c
	// Line 2750, Address: 0x1c85a8, Func Offset: 0x168
	// Func End, Address: 0x1c85bc, Func Offset: 0x17c
}

// zHudElementsCB_SoapboxRender__Fv
// Start address: 0x1c85c0
void zHudElementsCB_SoapboxRender()
{
	int8 str[256];
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	zHudItem* item;
	// Line 2662, Address: 0x1c85c0, Func Offset: 0
	// Line 2663, Address: 0x1c85cc, Func Offset: 0xc
	// Line 2668, Address: 0x1c85d4, Func Offset: 0x14
	// Line 2662, Address: 0x1c85d8, Func Offset: 0x18
	// Line 2668, Address: 0x1c85dc, Func Offset: 0x1c
	// Line 2673, Address: 0x1c85e8, Func Offset: 0x28
	// Line 2668, Address: 0x1c85ec, Func Offset: 0x2c
	// Line 2674, Address: 0x1c8614, Func Offset: 0x54
	// Line 2668, Address: 0x1c8618, Func Offset: 0x58
	// Line 2673, Address: 0x1c8630, Func Offset: 0x70
	// Line 2674, Address: 0x1c8638, Func Offset: 0x78
	// Line 2668, Address: 0x1c863c, Func Offset: 0x7c
	// Line 2674, Address: 0x1c8640, Func Offset: 0x80
	// Line 2668, Address: 0x1c8644, Func Offset: 0x84
	// Line 2673, Address: 0x1c865c, Func Offset: 0x9c
	// Line 2674, Address: 0x1c866c, Func Offset: 0xac
	// Line 2678, Address: 0x1c867c, Func Offset: 0xbc
	// Line 2680, Address: 0x1c8690, Func Offset: 0xd0
	// Line 2681, Address: 0x1c8694, Func Offset: 0xd4
	// Line 2682, Address: 0x1c8698, Func Offset: 0xd8
	// Line 2684, Address: 0x1c869c, Func Offset: 0xdc
	// Line 2687, Address: 0x1c86a0, Func Offset: 0xe0
	// Line 2690, Address: 0x1c86b4, Func Offset: 0xf4
	// Line 2695, Address: 0x1c86c8, Func Offset: 0x108
	// Line 2698, Address: 0x1c86e8, Func Offset: 0x128
	// Line 2701, Address: 0x1c8700, Func Offset: 0x140
	// Line 2703, Address: 0x1c8730, Func Offset: 0x170
	// Line 2704, Address: 0x1c8768, Func Offset: 0x1a8
	// Line 2709, Address: 0x1c87a8, Func Offset: 0x1e8
	// Func End, Address: 0x1c87bc, Func Offset: 0x1fc
}

// zHudElementsCB_SoapboxUpdate__FP7_xScenef
// Start address: 0x1c87c0
void zHudElementsCB_SoapboxUpdate(float32 dt)
{
	zHudItem* item;
	// Line 2447, Address: 0x1c87c0, Func Offset: 0
	// Line 2449, Address: 0x1c87cc, Func Offset: 0xc
	// Line 2451, Address: 0x1c87d4, Func Offset: 0x14
	// Line 2447, Address: 0x1c87d8, Func Offset: 0x18
	// Line 2451, Address: 0x1c87dc, Func Offset: 0x1c
	// Line 2457, Address: 0x1c87f0, Func Offset: 0x30
	// Line 2459, Address: 0x1c87f4, Func Offset: 0x34
	// Line 2463, Address: 0x1c87fc, Func Offset: 0x3c
	// Line 2466, Address: 0x1c8800, Func Offset: 0x40
	// Line 2469, Address: 0x1c8834, Func Offset: 0x74
	// Line 2472, Address: 0x1c883c, Func Offset: 0x7c
	// Line 2476, Address: 0x1c8840, Func Offset: 0x80
	// Line 2478, Address: 0x1c8854, Func Offset: 0x94
	// Line 2481, Address: 0x1c8858, Func Offset: 0x98
	// Line 2487, Address: 0x1c8874, Func Offset: 0xb4
	// Line 2493, Address: 0x1c887c, Func Offset: 0xbc
	// Line 2502, Address: 0x1c8880, Func Offset: 0xc0
	// Line 2506, Address: 0x1c88a8, Func Offset: 0xe8
	// Line 2513, Address: 0x1c88d0, Func Offset: 0x110
	// Line 2517, Address: 0x1c88d8, Func Offset: 0x118
	// Line 2533, Address: 0x1c88fc, Func Offset: 0x13c
	// Line 2537, Address: 0x1c8904, Func Offset: 0x144
	// Line 2552, Address: 0x1c8928, Func Offset: 0x168
	// Line 2556, Address: 0x1c8958, Func Offset: 0x198
	// Line 2560, Address: 0x1c8974, Func Offset: 0x1b4
	// Line 2563, Address: 0x1c897c, Func Offset: 0x1bc
	// Line 2567, Address: 0x1c8998, Func Offset: 0x1d8
	// Line 2570, Address: 0x1c89a0, Func Offset: 0x1e0
	// Line 2574, Address: 0x1c89bc, Func Offset: 0x1fc
	// Line 2578, Address: 0x1c89d8, Func Offset: 0x218
	// Line 2593, Address: 0x1c89f4, Func Offset: 0x234
	// Line 2596, Address: 0x1c8a24, Func Offset: 0x264
	// Line 2600, Address: 0x1c8a40, Func Offset: 0x280
	// Line 2605, Address: 0x1c8a5c, Func Offset: 0x29c
	// Line 2608, Address: 0x1c8a64, Func Offset: 0x2a4
	// Line 2612, Address: 0x1c8a7c, Func Offset: 0x2bc
	// Line 2628, Address: 0x1c8a94, Func Offset: 0x2d4
	// Line 2631, Address: 0x1c8ac4, Func Offset: 0x304
	// Line 2635, Address: 0x1c8ae0, Func Offset: 0x320
	// Line 2637, Address: 0x1c8ae8, Func Offset: 0x328
	// Line 2652, Address: 0x1c8b04, Func Offset: 0x344
	// Line 2653, Address: 0x1c8b18, Func Offset: 0x358
	// Line 2654, Address: 0x1c8b2c, Func Offset: 0x36c
	// Line 2657, Address: 0x1c8b40, Func Offset: 0x380
	// Line 2658, Address: 0x1c8b4c, Func Offset: 0x38c
	// Line 2660, Address: 0x1c8b54, Func Offset: 0x394
	// Func End, Address: 0x1c8b68, Func Offset: 0x3a8
}

// zHudElementsCB_SoapboxSetup__FP7_xScene
// Start address: 0x1c8b70
void zHudElementsCB_SoapboxSetup()
{
	xAnimSingle* asing;
	xAnimPlay* aplay;
	zHudItem* item;
	// Line 2358, Address: 0x1c8b70, Func Offset: 0
	// Line 2359, Address: 0x1c8b78, Func Offset: 0x8
	// Line 2360, Address: 0x1c8b80, Func Offset: 0x10
	// Line 2365, Address: 0x1c8b88, Func Offset: 0x18
	// Line 2366, Address: 0x1c8b90, Func Offset: 0x20
	// Line 2359, Address: 0x1c8b94, Func Offset: 0x24
	// Line 2366, Address: 0x1c8b98, Func Offset: 0x28
	// Line 2367, Address: 0x1c8b9c, Func Offset: 0x2c
	// Line 2369, Address: 0x1c8ba8, Func Offset: 0x38
	// Line 2370, Address: 0x1c8bb0, Func Offset: 0x40
	// Line 2372, Address: 0x1c8bbc, Func Offset: 0x4c
	// Line 2373, Address: 0x1c8bc4, Func Offset: 0x54
	// Line 2375, Address: 0x1c8bcc, Func Offset: 0x5c
	// Line 2376, Address: 0x1c8bd4, Func Offset: 0x64
	// Line 2378, Address: 0x1c8bd8, Func Offset: 0x68
	// Line 2379, Address: 0x1c8bdc, Func Offset: 0x6c
	// Line 2382, Address: 0x1c8be0, Func Offset: 0x70
	// Line 2380, Address: 0x1c8be4, Func Offset: 0x74
	// Line 2382, Address: 0x1c8be8, Func Offset: 0x78
	// Line 2383, Address: 0x1c8bf0, Func Offset: 0x80
	// Line 2384, Address: 0x1c8bf4, Func Offset: 0x84
	// Line 2386, Address: 0x1c8bf8, Func Offset: 0x88
	// Line 2387, Address: 0x1c8bfc, Func Offset: 0x8c
	// Line 2388, Address: 0x1c8c08, Func Offset: 0x98
	// Line 2390, Address: 0x1c8c0c, Func Offset: 0x9c
	// Line 2391, Address: 0x1c8c14, Func Offset: 0xa4
	// Line 2392, Address: 0x1c8c18, Func Offset: 0xa8
	// Line 2393, Address: 0x1c8c1c, Func Offset: 0xac
	// Line 2406, Address: 0x1c8c24, Func Offset: 0xb4
	// Line 2395, Address: 0x1c8c28, Func Offset: 0xb8
	// Line 2396, Address: 0x1c8c2c, Func Offset: 0xbc
	// Line 2397, Address: 0x1c8c30, Func Offset: 0xc0
	// Line 2398, Address: 0x1c8c34, Func Offset: 0xc4
	// Line 2401, Address: 0x1c8c38, Func Offset: 0xc8
	// Line 2402, Address: 0x1c8c3c, Func Offset: 0xcc
	// Line 2403, Address: 0x1c8c40, Func Offset: 0xd0
	// Line 2406, Address: 0x1c8c44, Func Offset: 0xd4
	// Line 2409, Address: 0x1c8c70, Func Offset: 0x100
	// Line 2410, Address: 0x1c8c78, Func Offset: 0x108
	// Line 2411, Address: 0x1c8c7c, Func Offset: 0x10c
	// Line 2415, Address: 0x1c8c84, Func Offset: 0x114
	// Line 2416, Address: 0x1c8c8c, Func Offset: 0x11c
	// Line 2421, Address: 0x1c8c94, Func Offset: 0x124
	// Line 2422, Address: 0x1c8c9c, Func Offset: 0x12c
	// Line 2423, Address: 0x1c8ca4, Func Offset: 0x134
	// Line 2426, Address: 0x1c8cac, Func Offset: 0x13c
	// Line 2427, Address: 0x1c8cb4, Func Offset: 0x144
	// Line 2430, Address: 0x1c8cbc, Func Offset: 0x14c
	// Line 2434, Address: 0x1c8cc4, Func Offset: 0x154
	// Line 2435, Address: 0x1c8ccc, Func Offset: 0x15c
	// Line 2437, Address: 0x1c8cd4, Func Offset: 0x164
	// Line 2439, Address: 0x1c8cd8, Func Offset: 0x168
	// Line 2438, Address: 0x1c8cdc, Func Offset: 0x16c
	// Line 2439, Address: 0x1c8ce4, Func Offset: 0x174
	// Line 2440, Address: 0x1c8ce8, Func Offset: 0x178
	// Line 2445, Address: 0x1c8d00, Func Offset: 0x190
	// Func End, Address: 0x1c8d0c, Func Offset: 0x19c
}

// zHudElementsCB_SoapboxInit__Fv
// Start address: 0x1c8d10
void zHudElementsCB_SoapboxInit()
{
	xAnimFile* afile;
	uint32 size;
	void* buff;
	// Line 2319, Address: 0x1c8d10, Func Offset: 0
	// Line 2321, Address: 0x1c8d28, Func Offset: 0x18
	// Line 2322, Address: 0x1c8dbc, Func Offset: 0xac
	// Line 2335, Address: 0x1c8dc8, Func Offset: 0xb8
	// Line 2338, Address: 0x1c8de4, Func Offset: 0xd4
	// Line 2339, Address: 0x1c8dec, Func Offset: 0xdc
	// Line 2342, Address: 0x1c8e04, Func Offset: 0xf4
	// Line 2343, Address: 0x1c8e18, Func Offset: 0x108
	// Line 2344, Address: 0x1c8e48, Func Offset: 0x138
	// Line 2345, Address: 0x1c8e5c, Func Offset: 0x14c
	// Line 2356, Address: 0x1c8e78, Func Offset: 0x168
	// Func End, Address: 0x1c8e8c, Func Offset: 0x17c
}

// zHudElementsCB_MessageRender__Fv
// Start address: 0x1c8e90
void zHudElementsCB_MessageRender()
{
	// Line 2315, Address: 0x1c8e90, Func Offset: 0
	// Func End, Address: 0x1c8e98, Func Offset: 0x8
}

// zHudElementsCB_MessageUpdate__FP7_xScenef
// Start address: 0x1c8ea0
void zHudElementsCB_MessageUpdate()
{
	// Line 2312, Address: 0x1c8ea0, Func Offset: 0
	// Func End, Address: 0x1c8ea8, Func Offset: 0x8
}

// zHudElementsCB_MessageSetup__FP7_xScene
// Start address: 0x1c8eb0
void zHudElementsCB_MessageSetup()
{
	// Line 2309, Address: 0x1c8eb0, Func Offset: 0
	// Func End, Address: 0x1c8eb8, Func Offset: 0x8
}

// zHudElementsCB_MessageInit__Fv
// Start address: 0x1c8ec0
void zHudElementsCB_MessageInit()
{
	// Line 2306, Address: 0x1c8ec0, Func Offset: 0
	// Func End, Address: 0x1c8ec8, Func Offset: 0x8
}

// zHudElementsCB_SoapRender__Fv
// Start address: 0x1c8ed0
void zHudElementsCB_SoapRender()
{
	RwRGBA colsoap;
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	int32 i;
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	// Line 2207, Address: 0x1c8ed0, Func Offset: 0
	// Line 2223, Address: 0x1c8ef0, Func Offset: 0x20
	// Line 2207, Address: 0x1c8ef4, Func Offset: 0x24
	// Line 2223, Address: 0x1c8ef8, Func Offset: 0x28
	// Line 2228, Address: 0x1c8f08, Func Offset: 0x38
	// Line 2223, Address: 0x1c8f0c, Func Offset: 0x3c
	// Line 2228, Address: 0x1c8f28, Func Offset: 0x58
	// Line 2229, Address: 0x1c8f30, Func Offset: 0x60
	// Line 2223, Address: 0x1c8f38, Func Offset: 0x68
	// Line 2229, Address: 0x1c8f3c, Func Offset: 0x6c
	// Line 2223, Address: 0x1c8f40, Func Offset: 0x70
	// Line 2228, Address: 0x1c8f6c, Func Offset: 0x9c
	// Line 2229, Address: 0x1c8f7c, Func Offset: 0xac
	// Line 2233, Address: 0x1c8f8c, Func Offset: 0xbc
	// Line 2235, Address: 0x1c8fa0, Func Offset: 0xd0
	// Line 2236, Address: 0x1c8fa4, Func Offset: 0xd4
	// Line 2237, Address: 0x1c8fa8, Func Offset: 0xd8
	// Line 2239, Address: 0x1c8fac, Func Offset: 0xdc
	// Line 2242, Address: 0x1c8fb0, Func Offset: 0xe0
	// Line 2245, Address: 0x1c8fc4, Func Offset: 0xf4
	// Line 2250, Address: 0x1c8fd8, Func Offset: 0x108
	// Line 2255, Address: 0x1c9010, Func Offset: 0x140
	// Line 2259, Address: 0x1c901c, Func Offset: 0x14c
	// Line 2262, Address: 0x1c9038, Func Offset: 0x168
	// Line 2267, Address: 0x1c9054, Func Offset: 0x184
	// Line 2268, Address: 0x1c9058, Func Offset: 0x188
	// Line 2262, Address: 0x1c905c, Func Offset: 0x18c
	// Line 2267, Address: 0x1c90ac, Func Offset: 0x1dc
	// Line 2268, Address: 0x1c90c4, Func Offset: 0x1f4
	// Line 2272, Address: 0x1c90dc, Func Offset: 0x20c
	// Line 2274, Address: 0x1c90f0, Func Offset: 0x220
	// Line 2275, Address: 0x1c90f4, Func Offset: 0x224
	// Line 2276, Address: 0x1c90f8, Func Offset: 0x228
	// Line 2278, Address: 0x1c90fc, Func Offset: 0x22c
	// Line 2281, Address: 0x1c9100, Func Offset: 0x230
	// Line 2288, Address: 0x1c9114, Func Offset: 0x244
	// Line 2292, Address: 0x1c9148, Func Offset: 0x278
	// Line 2295, Address: 0x1c914c, Func Offset: 0x27c
	// Line 2292, Address: 0x1c9158, Func Offset: 0x288
	// Line 2295, Address: 0x1c915c, Func Offset: 0x28c
	// Line 2292, Address: 0x1c9160, Func Offset: 0x290
	// Line 2295, Address: 0x1c9164, Func Offset: 0x294
	// Line 2292, Address: 0x1c9168, Func Offset: 0x298
	// Line 2295, Address: 0x1c9190, Func Offset: 0x2c0
	// Line 2296, Address: 0x1c919c, Func Offset: 0x2cc
	// Line 2297, Address: 0x1c91a0, Func Offset: 0x2d0
	// Line 2301, Address: 0x1c91b0, Func Offset: 0x2e0
	// Func End, Address: 0x1c91d8, Func Offset: 0x308
}

// zHudElementsCB_SoapUpdate__FP7_xScenef
// Start address: 0x1c91e0
void zHudElementsCB_SoapUpdate(float32 dt)
{
	int32 i;
	int32 i;
	int32 i;
	int32 num;
	// Line 1939, Address: 0x1c91e0, Func Offset: 0
	// Line 1941, Address: 0x1c91f0, Func Offset: 0x10
	// Line 1939, Address: 0x1c91f4, Func Offset: 0x14
	// Line 1941, Address: 0x1c91f8, Func Offset: 0x18
	// Line 1946, Address: 0x1c920c, Func Offset: 0x2c
	// Line 1947, Address: 0x1c922c, Func Offset: 0x4c
	// Line 1950, Address: 0x1c9234, Func Offset: 0x54
	// Line 1951, Address: 0x1c923c, Func Offset: 0x5c
	// Line 1950, Address: 0x1c9240, Func Offset: 0x60
	// Line 1951, Address: 0x1c9250, Func Offset: 0x70
	// Line 1954, Address: 0x1c9284, Func Offset: 0xa4
	// Line 1959, Address: 0x1c928c, Func Offset: 0xac
	// Line 1963, Address: 0x1c92a8, Func Offset: 0xc8
	// Line 1969, Address: 0x1c92b0, Func Offset: 0xd0
	// Line 1976, Address: 0x1c92c8, Func Offset: 0xe8
	// Line 1982, Address: 0x1c92d0, Func Offset: 0xf0
	// Line 1983, Address: 0x1c92f0, Func Offset: 0x110
	// Line 1986, Address: 0x1c9358, Func Offset: 0x178
	// Line 1987, Address: 0x1c937c, Func Offset: 0x19c
	// Line 1990, Address: 0x1c93a0, Func Offset: 0x1c0
	// Line 1999, Address: 0x1c93a8, Func Offset: 0x1c8
	// Line 2001, Address: 0x1c93bc, Func Offset: 0x1dc
	// Line 2002, Address: 0x1c93c0, Func Offset: 0x1e0
	// Line 2006, Address: 0x1c93c8, Func Offset: 0x1e8
	// Line 2010, Address: 0x1c93e8, Func Offset: 0x208
	// Line 2012, Address: 0x1c9408, Func Offset: 0x228
	// Line 2018, Address: 0x1c9410, Func Offset: 0x230
	// Line 2021, Address: 0x1c942c, Func Offset: 0x24c
	// Line 2023, Address: 0x1c9434, Func Offset: 0x254
	// Line 2024, Address: 0x1c9444, Func Offset: 0x264
	// Line 2028, Address: 0x1c944c, Func Offset: 0x26c
	// Line 2032, Address: 0x1c9454, Func Offset: 0x274
	// Line 2034, Address: 0x1c947c, Func Offset: 0x29c
	// Line 2036, Address: 0x1c9480, Func Offset: 0x2a0
	// Line 2043, Address: 0x1c94a4, Func Offset: 0x2c4
	// Line 2047, Address: 0x1c94ac, Func Offset: 0x2cc
	// Line 2054, Address: 0x1c94d0, Func Offset: 0x2f0
	// Line 2067, Address: 0x1c94d8, Func Offset: 0x2f8
	// Line 2080, Address: 0x1c94fc, Func Offset: 0x31c
	// Line 2083, Address: 0x1c9500, Func Offset: 0x320
	// Line 2087, Address: 0x1c9530, Func Offset: 0x350
	// Line 2091, Address: 0x1c954c, Func Offset: 0x36c
	// Line 2094, Address: 0x1c9554, Func Offset: 0x374
	// Line 2098, Address: 0x1c9570, Func Offset: 0x390
	// Line 2101, Address: 0x1c9578, Func Offset: 0x398
	// Line 2105, Address: 0x1c9594, Func Offset: 0x3b4
	// Line 2109, Address: 0x1c95b0, Func Offset: 0x3d0
	// Line 2122, Address: 0x1c95cc, Func Offset: 0x3ec
	// Line 2125, Address: 0x1c95d0, Func Offset: 0x3f0
	// Line 2128, Address: 0x1c9608, Func Offset: 0x428
	// Line 2132, Address: 0x1c9624, Func Offset: 0x444
	// Line 2137, Address: 0x1c9640, Func Offset: 0x460
	// Line 2140, Address: 0x1c9648, Func Offset: 0x468
	// Line 2144, Address: 0x1c9664, Func Offset: 0x484
	// Line 2149, Address: 0x1c9680, Func Offset: 0x4a0
	// Line 2156, Address: 0x1c9688, Func Offset: 0x4a8
	// Line 2170, Address: 0x1c96a8, Func Offset: 0x4c8
	// Line 2173, Address: 0x1c96dc, Func Offset: 0x4fc
	// Line 2177, Address: 0x1c96f8, Func Offset: 0x518
	// Line 2179, Address: 0x1c9700, Func Offset: 0x520
	// Line 2183, Address: 0x1c971c, Func Offset: 0x53c
	// Line 2187, Address: 0x1c9724, Func Offset: 0x544
	// Line 2194, Address: 0x1c973c, Func Offset: 0x55c
	// Line 2197, Address: 0x1c9740, Func Offset: 0x560
	// Line 2198, Address: 0x1c9754, Func Offset: 0x574
	// Line 2199, Address: 0x1c9768, Func Offset: 0x588
	// Line 2202, Address: 0x1c977c, Func Offset: 0x59c
	// Line 2203, Address: 0x1c9790, Func Offset: 0x5b0
	// Line 2205, Address: 0x1c97a0, Func Offset: 0x5c0
	// Func End, Address: 0x1c97b8, Func Offset: 0x5d8
}

// zHudElementsCB_SoapSetup__FP7_xScene
// Start address: 0x1c97c0
void zHudElementsCB_SoapSetup()
{
	int32 i;
	// Line 1790, Address: 0x1c97c0, Func Offset: 0
	// Line 1791, Address: 0x1c97c8, Func Offset: 0x8
	// Line 1798, Address: 0x1c97d0, Func Offset: 0x10
	// Line 1790, Address: 0x1c97dc, Func Offset: 0x1c
	// Line 1798, Address: 0x1c97e0, Func Offset: 0x20
	// Line 1799, Address: 0x1c97e4, Func Offset: 0x24
	// Line 1798, Address: 0x1c97e8, Func Offset: 0x28
	// Line 1799, Address: 0x1c97ec, Func Offset: 0x2c
	// Line 1801, Address: 0x1c97f4, Func Offset: 0x34
	// Line 1802, Address: 0x1c9800, Func Offset: 0x40
	// Line 1804, Address: 0x1c9808, Func Offset: 0x48
	// Line 1805, Address: 0x1c9810, Func Offset: 0x50
	// Line 1807, Address: 0x1c9818, Func Offset: 0x58
	// Line 1808, Address: 0x1c9820, Func Offset: 0x60
	// Line 1810, Address: 0x1c9824, Func Offset: 0x64
	// Line 1811, Address: 0x1c982c, Func Offset: 0x6c
	// Line 1813, Address: 0x1c9830, Func Offset: 0x70
	// Line 1814, Address: 0x1c9834, Func Offset: 0x74
	// Line 1817, Address: 0x1c9838, Func Offset: 0x78
	// Line 1815, Address: 0x1c983c, Func Offset: 0x7c
	// Line 1817, Address: 0x1c9840, Func Offset: 0x80
	// Line 1818, Address: 0x1c9848, Func Offset: 0x88
	// Line 1819, Address: 0x1c984c, Func Offset: 0x8c
	// Line 1821, Address: 0x1c9850, Func Offset: 0x90
	// Line 1822, Address: 0x1c9854, Func Offset: 0x94
	// Line 1823, Address: 0x1c9860, Func Offset: 0xa0
	// Line 1825, Address: 0x1c9864, Func Offset: 0xa4
	// Line 1826, Address: 0x1c986c, Func Offset: 0xac
	// Line 1827, Address: 0x1c9870, Func Offset: 0xb0
	// Line 1828, Address: 0x1c9874, Func Offset: 0xb4
	// Line 1830, Address: 0x1c987c, Func Offset: 0xbc
	// Line 1831, Address: 0x1c9880, Func Offset: 0xc0
	// Line 1832, Address: 0x1c9884, Func Offset: 0xc4
	// Line 1833, Address: 0x1c9888, Func Offset: 0xc8
	// Line 1836, Address: 0x1c988c, Func Offset: 0xcc
	// Line 1837, Address: 0x1c9890, Func Offset: 0xd0
	// Line 1838, Address: 0x1c9894, Func Offset: 0xd4
	// Line 1841, Address: 0x1c9898, Func Offset: 0xd8
	// Line 1854, Address: 0x1c989c, Func Offset: 0xdc
	// Line 1841, Address: 0x1c98a4, Func Offset: 0xe4
	// Line 1842, Address: 0x1c98a8, Func Offset: 0xe8
	// Line 1845, Address: 0x1c98b0, Func Offset: 0xf0
	// Line 1846, Address: 0x1c98b4, Func Offset: 0xf4
	// Line 1847, Address: 0x1c98b8, Func Offset: 0xf8
	// Line 1850, Address: 0x1c98bc, Func Offset: 0xfc
	// Line 1851, Address: 0x1c98c4, Func Offset: 0x104
	// Line 1858, Address: 0x1c98cc, Func Offset: 0x10c
	// Line 1862, Address: 0x1c9910, Func Offset: 0x150
	// Line 1863, Address: 0x1c991c, Func Offset: 0x15c
	// Line 1864, Address: 0x1c9928, Func Offset: 0x168
	// Line 1867, Address: 0x1c9930, Func Offset: 0x170
	// Line 1871, Address: 0x1c9938, Func Offset: 0x178
	// Line 1872, Address: 0x1c9944, Func Offset: 0x184
	// Line 1873, Address: 0x1c9950, Func Offset: 0x190
	// Line 1875, Address: 0x1c9958, Func Offset: 0x198
	// Line 1879, Address: 0x1c9960, Func Offset: 0x1a0
	// Line 1880, Address: 0x1c9968, Func Offset: 0x1a8
	// Line 1881, Address: 0x1c9974, Func Offset: 0x1b4
	// Line 1883, Address: 0x1c997c, Func Offset: 0x1bc
	// Line 1887, Address: 0x1c9984, Func Offset: 0x1c4
	// Line 1888, Address: 0x1c998c, Func Offset: 0x1cc
	// Line 1889, Address: 0x1c9994, Func Offset: 0x1d4
	// Line 1891, Address: 0x1c999c, Func Offset: 0x1dc
	// Line 1895, Address: 0x1c99a4, Func Offset: 0x1e4
	// Line 1896, Address: 0x1c99b0, Func Offset: 0x1f0
	// Line 1897, Address: 0x1c99b8, Func Offset: 0x1f8
	// Line 1898, Address: 0x1c99c0, Func Offset: 0x200
	// Line 1904, Address: 0x1c99c4, Func Offset: 0x204
	// Line 1906, Address: 0x1c99c8, Func Offset: 0x208
	// Line 1907, Address: 0x1c99d0, Func Offset: 0x210
	// Line 1908, Address: 0x1c99d4, Func Offset: 0x214
	// Line 1909, Address: 0x1c99d8, Func Offset: 0x218
	// Line 1910, Address: 0x1c99e0, Func Offset: 0x220
	// Line 1911, Address: 0x1c99e4, Func Offset: 0x224
	// Line 1912, Address: 0x1c99e8, Func Offset: 0x228
	// Line 1914, Address: 0x1c99ec, Func Offset: 0x22c
	// Line 1913, Address: 0x1c99f0, Func Offset: 0x230
	// Line 1914, Address: 0x1c99f4, Func Offset: 0x234
	// Line 1915, Address: 0x1c99fc, Func Offset: 0x23c
	// Line 1916, Address: 0x1c9a00, Func Offset: 0x240
	// Line 1917, Address: 0x1c9a04, Func Offset: 0x244
	// Line 1919, Address: 0x1c9a0c, Func Offset: 0x24c
	// Line 1920, Address: 0x1c9a10, Func Offset: 0x250
	// Line 1923, Address: 0x1c9a14, Func Offset: 0x254
	// Line 1924, Address: 0x1c9a18, Func Offset: 0x258
	// Line 1925, Address: 0x1c9a1c, Func Offset: 0x25c
	// Line 1926, Address: 0x1c9a20, Func Offset: 0x260
	// Line 1929, Address: 0x1c9a28, Func Offset: 0x268
	// Line 1935, Address: 0x1c9a2c, Func Offset: 0x26c
	// Line 1929, Address: 0x1c9a34, Func Offset: 0x274
	// Line 1930, Address: 0x1c9a38, Func Offset: 0x278
	// Line 1933, Address: 0x1c9a40, Func Offset: 0x280
	// Line 1934, Address: 0x1c9a48, Func Offset: 0x288
	// Line 1935, Address: 0x1c9a50, Func Offset: 0x290
	// Line 1937, Address: 0x1c9a58, Func Offset: 0x298
	// Func End, Address: 0x1c9a60, Func Offset: 0x2a0
}

// zHudElementsCB_SoapInit__Fv
// Start address: 0x1c9a60
void zHudElementsCB_SoapInit()
{
	// Line 1777, Address: 0x1c9a60, Func Offset: 0
	// Line 1779, Address: 0x1c9a78, Func Offset: 0x18
	// Line 1780, Address: 0x1c9b0c, Func Offset: 0xac
	// Line 1781, Address: 0x1c9b18, Func Offset: 0xb8
	// Line 1784, Address: 0x1c9bac, Func Offset: 0x14c
	// Line 1787, Address: 0x1c9bc0, Func Offset: 0x160
	// Func End, Address: 0x1c9bd4, Func Offset: 0x174
}

// zHudElementsCB_GumRender__Fv
// Start address: 0x1c9be0
void zHudElementsCB_GumRender()
{
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	int32 i;
	// Line 1719, Address: 0x1c9be0, Func Offset: 0
	// Line 1721, Address: 0x1c9c00, Func Offset: 0x20
	// Line 1723, Address: 0x1c9c2c, Func Offset: 0x4c
	// Line 1727, Address: 0x1c9c38, Func Offset: 0x58
	// Line 1738, Address: 0x1c9c54, Func Offset: 0x74
	// Line 1743, Address: 0x1c9c70, Func Offset: 0x90
	// Line 1744, Address: 0x1c9c74, Func Offset: 0x94
	// Line 1738, Address: 0x1c9c78, Func Offset: 0x98
	// Line 1743, Address: 0x1c9cc8, Func Offset: 0xe8
	// Line 1744, Address: 0x1c9ce0, Func Offset: 0x100
	// Line 1748, Address: 0x1c9cf8, Func Offset: 0x118
	// Line 1750, Address: 0x1c9d0c, Func Offset: 0x12c
	// Line 1751, Address: 0x1c9d10, Func Offset: 0x130
	// Line 1752, Address: 0x1c9d14, Func Offset: 0x134
	// Line 1754, Address: 0x1c9d18, Func Offset: 0x138
	// Line 1757, Address: 0x1c9d1c, Func Offset: 0x13c
	// Line 1760, Address: 0x1c9d30, Func Offset: 0x150
	// Line 1765, Address: 0x1c9d44, Func Offset: 0x164
	// Line 1766, Address: 0x1c9d64, Func Offset: 0x184
	// Line 1767, Address: 0x1c9d68, Func Offset: 0x188
	// Line 1773, Address: 0x1c9d78, Func Offset: 0x198
	// Func End, Address: 0x1c9d9c, Func Offset: 0x1bc
}

// zHudElementsCB_GumUpdate__FP7_xScenef
// Start address: 0x1c9da0
void zHudElementsCB_GumUpdate(float32 dt)
{
	int32 i;
	int32 i;
	int32 num;
	// Line 1456, Address: 0x1c9da0, Func Offset: 0
	// Line 1458, Address: 0x1c9db4, Func Offset: 0x14
	// Line 1456, Address: 0x1c9db8, Func Offset: 0x18
	// Line 1458, Address: 0x1c9dbc, Func Offset: 0x1c
	// Line 1464, Address: 0x1c9dd0, Func Offset: 0x30
	// Line 1466, Address: 0x1c9dec, Func Offset: 0x4c
	// Line 1469, Address: 0x1c9df4, Func Offset: 0x54
	// Line 1470, Address: 0x1c9dfc, Func Offset: 0x5c
	// Line 1469, Address: 0x1c9e00, Func Offset: 0x60
	// Line 1470, Address: 0x1c9e10, Func Offset: 0x70
	// Line 1473, Address: 0x1c9e4c, Func Offset: 0xac
	// Line 1478, Address: 0x1c9e54, Func Offset: 0xb4
	// Line 1480, Address: 0x1c9e6c, Func Offset: 0xcc
	// Line 1486, Address: 0x1c9e74, Func Offset: 0xd4
	// Line 1490, Address: 0x1c9e7c, Func Offset: 0xdc
	// Line 1495, Address: 0x1c9e88, Func Offset: 0xe8
	// Line 1501, Address: 0x1c9e9c, Func Offset: 0xfc
	// Line 1503, Address: 0x1c9eac, Func Offset: 0x10c
	// Line 1505, Address: 0x1c9eb4, Func Offset: 0x114
	// Line 1508, Address: 0x1c9ebc, Func Offset: 0x11c
	// Line 1509, Address: 0x1c9ec8, Func Offset: 0x128
	// Line 1517, Address: 0x1c9ed8, Func Offset: 0x138
	// Line 1519, Address: 0x1c9eec, Func Offset: 0x14c
	// Line 1520, Address: 0x1c9ef0, Func Offset: 0x150
	// Line 1524, Address: 0x1c9ef8, Func Offset: 0x158
	// Line 1528, Address: 0x1c9f18, Func Offset: 0x178
	// Line 1530, Address: 0x1c9f34, Func Offset: 0x194
	// Line 1536, Address: 0x1c9f3c, Func Offset: 0x19c
	// Line 1539, Address: 0x1c9f54, Func Offset: 0x1b4
	// Line 1541, Address: 0x1c9f5c, Func Offset: 0x1bc
	// Line 1542, Address: 0x1c9f6c, Func Offset: 0x1cc
	// Line 1546, Address: 0x1c9f74, Func Offset: 0x1d4
	// Line 1551, Address: 0x1c9f7c, Func Offset: 0x1dc
	// Line 1554, Address: 0x1c9fb0, Func Offset: 0x210
	// Line 1557, Address: 0x1c9fb8, Func Offset: 0x218
	// Line 1561, Address: 0x1c9fc0, Func Offset: 0x220
	// Line 1565, Address: 0x1c9fe8, Func Offset: 0x248
	// Line 1572, Address: 0x1ca00c, Func Offset: 0x26c
	// Line 1576, Address: 0x1ca014, Func Offset: 0x274
	// Line 1583, Address: 0x1ca038, Func Offset: 0x298
	// Line 1597, Address: 0x1ca040, Func Offset: 0x2a0
	// Line 1609, Address: 0x1ca064, Func Offset: 0x2c4
	// Line 1612, Address: 0x1ca068, Func Offset: 0x2c8
	// Line 1616, Address: 0x1ca098, Func Offset: 0x2f8
	// Line 1620, Address: 0x1ca0b4, Func Offset: 0x314
	// Line 1623, Address: 0x1ca0bc, Func Offset: 0x31c
	// Line 1627, Address: 0x1ca0d8, Func Offset: 0x338
	// Line 1630, Address: 0x1ca0e0, Func Offset: 0x340
	// Line 1634, Address: 0x1ca0fc, Func Offset: 0x35c
	// Line 1638, Address: 0x1ca118, Func Offset: 0x378
	// Line 1651, Address: 0x1ca134, Func Offset: 0x394
	// Line 1653, Address: 0x1ca138, Func Offset: 0x398
	// Line 1656, Address: 0x1ca168, Func Offset: 0x3c8
	// Line 1660, Address: 0x1ca180, Func Offset: 0x3e0
	// Line 1665, Address: 0x1ca198, Func Offset: 0x3f8
	// Line 1668, Address: 0x1ca1a0, Func Offset: 0x400
	// Line 1672, Address: 0x1ca1b8, Func Offset: 0x418
	// Line 1687, Address: 0x1ca1d0, Func Offset: 0x430
	// Line 1690, Address: 0x1ca1f0, Func Offset: 0x450
	// Line 1694, Address: 0x1ca20c, Func Offset: 0x46c
	// Line 1696, Address: 0x1ca214, Func Offset: 0x474
	// Line 1708, Address: 0x1ca230, Func Offset: 0x490
	// Line 1709, Address: 0x1ca244, Func Offset: 0x4a4
	// Line 1710, Address: 0x1ca258, Func Offset: 0x4b8
	// Line 1713, Address: 0x1ca26c, Func Offset: 0x4cc
	// Line 1714, Address: 0x1ca278, Func Offset: 0x4d8
	// Line 1715, Address: 0x1ca280, Func Offset: 0x4e0
	// Line 1717, Address: 0x1ca290, Func Offset: 0x4f0
	// Func End, Address: 0x1ca2ac, Func Offset: 0x50c
}

// zHudElementsCB_GumSetup__FP7_xScene
// Start address: 0x1ca2b0
void zHudElementsCB_GumSetup()
{
	xAnimSingle* asing;
	xAnimPlay* aplay;
	int32 i;
	// Line 1371, Address: 0x1ca2b0, Func Offset: 0
	// Line 1372, Address: 0x1ca2c0, Func Offset: 0x10
	// Line 1378, Address: 0x1ca2cc, Func Offset: 0x1c
	// Line 1372, Address: 0x1ca2d4, Func Offset: 0x24
	// Line 1381, Address: 0x1ca2d8, Func Offset: 0x28
	// Line 1382, Address: 0x1ca2e0, Func Offset: 0x30
	// Line 1384, Address: 0x1ca2ec, Func Offset: 0x3c
	// Line 1385, Address: 0x1ca2f4, Func Offset: 0x44
	// Line 1387, Address: 0x1ca2fc, Func Offset: 0x4c
	// Line 1388, Address: 0x1ca304, Func Offset: 0x54
	// Line 1390, Address: 0x1ca308, Func Offset: 0x58
	// Line 1391, Address: 0x1ca310, Func Offset: 0x60
	// Line 1393, Address: 0x1ca314, Func Offset: 0x64
	// Line 1394, Address: 0x1ca318, Func Offset: 0x68
	// Line 1397, Address: 0x1ca31c, Func Offset: 0x6c
	// Line 1395, Address: 0x1ca320, Func Offset: 0x70
	// Line 1397, Address: 0x1ca324, Func Offset: 0x74
	// Line 1398, Address: 0x1ca32c, Func Offset: 0x7c
	// Line 1399, Address: 0x1ca330, Func Offset: 0x80
	// Line 1401, Address: 0x1ca334, Func Offset: 0x84
	// Line 1402, Address: 0x1ca338, Func Offset: 0x88
	// Line 1405, Address: 0x1ca344, Func Offset: 0x94
	// Line 1403, Address: 0x1ca348, Func Offset: 0x98
	// Line 1405, Address: 0x1ca34c, Func Offset: 0x9c
	// Line 1406, Address: 0x1ca350, Func Offset: 0xa0
	// Line 1407, Address: 0x1ca354, Func Offset: 0xa4
	// Line 1408, Address: 0x1ca358, Func Offset: 0xa8
	// Line 1410, Address: 0x1ca360, Func Offset: 0xb0
	// Line 1411, Address: 0x1ca364, Func Offset: 0xb4
	// Line 1412, Address: 0x1ca368, Func Offset: 0xb8
	// Line 1413, Address: 0x1ca36c, Func Offset: 0xbc
	// Line 1417, Address: 0x1ca370, Func Offset: 0xc0
	// Line 1418, Address: 0x1ca374, Func Offset: 0xc4
	// Line 1419, Address: 0x1ca378, Func Offset: 0xc8
	// Line 1420, Address: 0x1ca37c, Func Offset: 0xcc
	// Line 1423, Address: 0x1ca380, Func Offset: 0xd0
	// Line 1393, Address: 0x1ca384, Func Offset: 0xd4
	// Line 1405, Address: 0x1ca388, Func Offset: 0xd8
	// Line 1423, Address: 0x1ca390, Func Offset: 0xe0
	// Line 1424, Address: 0x1ca394, Func Offset: 0xe4
	// Line 1427, Address: 0x1ca39c, Func Offset: 0xec
	// Line 1428, Address: 0x1ca3a4, Func Offset: 0xf4
	// Line 1429, Address: 0x1ca3ac, Func Offset: 0xfc
	// Line 1432, Address: 0x1ca3b4, Func Offset: 0x104
	// Line 1433, Address: 0x1ca3bc, Func Offset: 0x10c
	// Line 1436, Address: 0x1ca3c4, Func Offset: 0x114
	// Line 1440, Address: 0x1ca3cc, Func Offset: 0x11c
	// Line 1441, Address: 0x1ca3d4, Func Offset: 0x124
	// Line 1443, Address: 0x1ca3dc, Func Offset: 0x12c
	// Line 1444, Address: 0x1ca3e0, Func Offset: 0x130
	// Line 1445, Address: 0x1ca3e4, Func Offset: 0x134
	// Line 1446, Address: 0x1ca3e8, Func Offset: 0x138
	// Line 1451, Address: 0x1ca400, Func Offset: 0x150
	// Line 1453, Address: 0x1ca410, Func Offset: 0x160
	// Func End, Address: 0x1ca424, Func Offset: 0x174
}

// zHudElementsCB_GumInit__Fv
// Start address: 0x1ca430
void zHudElementsCB_GumInit()
{
	xAnimFile* afile;
	uint32 size;
	void* buff;
	int32 i;
	// Line 1322, Address: 0x1ca430, Func Offset: 0
	// Line 1324, Address: 0x1ca450, Func Offset: 0x20
	// Line 1325, Address: 0x1ca4e0, Func Offset: 0xb0
	// Line 1327, Address: 0x1ca4ec, Func Offset: 0xbc
	// Line 1328, Address: 0x1ca580, Func Offset: 0x150
	// Line 1329, Address: 0x1ca584, Func Offset: 0x154
	// Line 1330, Address: 0x1ca618, Func Offset: 0x1e8
	// Line 1331, Address: 0x1ca61c, Func Offset: 0x1ec
	// Line 1332, Address: 0x1ca6b0, Func Offset: 0x280
	// Line 1333, Address: 0x1ca6b4, Func Offset: 0x284
	// Line 1334, Address: 0x1ca748, Func Offset: 0x318
	// Line 1338, Address: 0x1ca750, Func Offset: 0x320
	// Line 1348, Address: 0x1ca758, Func Offset: 0x328
	// Line 1351, Address: 0x1ca774, Func Offset: 0x344
	// Line 1352, Address: 0x1ca77c, Func Offset: 0x34c
	// Line 1355, Address: 0x1ca794, Func Offset: 0x364
	// Line 1356, Address: 0x1ca7a8, Func Offset: 0x378
	// Line 1357, Address: 0x1ca7d8, Func Offset: 0x3a8
	// Line 1358, Address: 0x1ca7ec, Func Offset: 0x3bc
	// Line 1365, Address: 0x1ca804, Func Offset: 0x3d4
	// Line 1366, Address: 0x1ca808, Func Offset: 0x3d8
	// Line 1369, Address: 0x1ca818, Func Offset: 0x3e8
	// Func End, Address: 0x1ca834, Func Offset: 0x404
}

// zHudElementsCB_SnacksRender__Fv
// Start address: 0x1ca840
void zHudElementsCB_SnacksRender()
{
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	int8 str[256];
	// Line 1276, Address: 0x1ca840, Func Offset: 0
	// Line 1280, Address: 0x1ca854, Func Offset: 0x14
	// Line 1276, Address: 0x1ca858, Func Offset: 0x18
	// Line 1280, Address: 0x1ca85c, Func Offset: 0x1c
	// Line 1281, Address: 0x1ca888, Func Offset: 0x48
	// Line 1282, Address: 0x1ca8a0, Func Offset: 0x60
	// Line 1288, Address: 0x1ca8f0, Func Offset: 0xb0
	// Line 1293, Address: 0x1ca900, Func Offset: 0xc0
	// Line 1288, Address: 0x1ca904, Func Offset: 0xc4
	// Line 1294, Address: 0x1ca924, Func Offset: 0xe4
	// Line 1288, Address: 0x1ca928, Func Offset: 0xe8
	// Line 1293, Address: 0x1ca94c, Func Offset: 0x10c
	// Line 1288, Address: 0x1ca954, Func Offset: 0x114
	// Line 1294, Address: 0x1ca958, Func Offset: 0x118
	// Line 1288, Address: 0x1ca960, Func Offset: 0x120
	// Line 1293, Address: 0x1ca974, Func Offset: 0x134
	// Line 1294, Address: 0x1ca984, Func Offset: 0x144
	// Line 1298, Address: 0x1ca994, Func Offset: 0x154
	// Line 1300, Address: 0x1ca9a8, Func Offset: 0x168
	// Line 1301, Address: 0x1ca9ac, Func Offset: 0x16c
	// Line 1302, Address: 0x1ca9b0, Func Offset: 0x170
	// Line 1304, Address: 0x1ca9b4, Func Offset: 0x174
	// Line 1307, Address: 0x1ca9b8, Func Offset: 0x178
	// Line 1310, Address: 0x1ca9cc, Func Offset: 0x18c
	// Line 1315, Address: 0x1ca9e0, Func Offset: 0x1a0
	// Line 1317, Address: 0x1caa00, Func Offset: 0x1c0
	// Func End, Address: 0x1caa1c, Func Offset: 0x1dc
}

// zHudShowSaveSuccess__Fv
// Start address: 0x1caa20
void zHudShowSaveSuccess()
{
	// Line 1272, Address: 0x1caa20, Func Offset: 0
	// Line 1273, Address: 0x1caa24, Func Offset: 0x4
	// Func End, Address: 0x1caa2c, Func Offset: 0xc
}

// zHudShowAllSnacksArea__Fv
// Start address: 0x1caa30
void zHudShowAllSnacksArea()
{
	// Line 1264, Address: 0x1caa30, Func Offset: 0
	// Line 1267, Address: 0x1caa38, Func Offset: 0x8
	// Func End, Address: 0x1caa40, Func Offset: 0x10
}

// zHud_showSnackSpecial__Fv
// Start address: 0x1caa40
void zHud_showSnackSpecial()
{
	// Line 1259, Address: 0x1caa40, Func Offset: 0
	// Line 1260, Address: 0x1caa44, Func Offset: 0x4
	// Func End, Address: 0x1caa4c, Func Offset: 0xc
}

// zHud_showSnack__Fv
// Start address: 0x1caa50
void zHud_showSnack()
{
	// Line 1254, Address: 0x1caa50, Func Offset: 0
	// Line 1255, Address: 0x1caa54, Func Offset: 0x4
	// Func End, Address: 0x1caa5c, Func Offset: 0xc
}

// zHud_ShakeSnackCounter__Fv
// Start address: 0x1caa60
void zHud_ShakeSnackCounter()
{
	// Line 1244, Address: 0x1caa60, Func Offset: 0
	// Line 1249, Address: 0x1caa68, Func Offset: 0x8
	// Line 1250, Address: 0x1caa70, Func Offset: 0x10
	// Func End, Address: 0x1caa78, Func Offset: 0x18
}

// zHudElementsCB_SnacksUpdate__FP7_xScenef
// Start address: 0x1caa80
void zHudElementsCB_SnacksUpdate(float32 dt)
{
	int32 i;
	zHudItem* item;
	// Line 1026, Address: 0x1caa80, Func Offset: 0
	// Line 1028, Address: 0x1caa94, Func Offset: 0x14
	// Line 1031, Address: 0x1caaa0, Func Offset: 0x20
	// Line 1032, Address: 0x1caab4, Func Offset: 0x34
	// Line 1034, Address: 0x1caabc, Func Offset: 0x3c
	// Line 1037, Address: 0x1caac0, Func Offset: 0x40
	// Line 1042, Address: 0x1caae0, Func Offset: 0x60
	// Line 1045, Address: 0x1caae8, Func Offset: 0x68
	// Line 1050, Address: 0x1caaf0, Func Offset: 0x70
	// Line 1055, Address: 0x1caaf8, Func Offset: 0x78
	// Line 1056, Address: 0x1cab04, Func Offset: 0x84
	// Line 1058, Address: 0x1cab10, Func Offset: 0x90
	// Line 1060, Address: 0x1cab18, Func Offset: 0x98
	// Line 1062, Address: 0x1cab24, Func Offset: 0xa4
	// Line 1064, Address: 0x1cab28, Func Offset: 0xa8
	// Line 1062, Address: 0x1cab30, Func Offset: 0xb0
	// Line 1064, Address: 0x1cab34, Func Offset: 0xb4
	// Line 1065, Address: 0x1cab44, Func Offset: 0xc4
	// Line 1071, Address: 0x1cab48, Func Offset: 0xc8
	// Line 1075, Address: 0x1cab70, Func Offset: 0xf0
	// Line 1082, Address: 0x1cab94, Func Offset: 0x114
	// Line 1086, Address: 0x1cab9c, Func Offset: 0x11c
	// Line 1093, Address: 0x1cabc4, Func Offset: 0x144
	// Line 1097, Address: 0x1cabcc, Func Offset: 0x14c
	// Line 1104, Address: 0x1cabf4, Func Offset: 0x174
	// Line 1117, Address: 0x1cabfc, Func Offset: 0x17c
	// Line 1134, Address: 0x1cac20, Func Offset: 0x1a0
	// Line 1138, Address: 0x1cac50, Func Offset: 0x1d0
	// Line 1142, Address: 0x1cac6c, Func Offset: 0x1ec
	// Line 1145, Address: 0x1cac74, Func Offset: 0x1f4
	// Line 1149, Address: 0x1cac90, Func Offset: 0x210
	// Line 1152, Address: 0x1cac98, Func Offset: 0x218
	// Line 1156, Address: 0x1cacb4, Func Offset: 0x234
	// Line 1160, Address: 0x1cacd0, Func Offset: 0x250
	// Line 1176, Address: 0x1cacec, Func Offset: 0x26c
	// Line 1179, Address: 0x1cad1c, Func Offset: 0x29c
	// Line 1183, Address: 0x1cad38, Func Offset: 0x2b8
	// Line 1201, Address: 0x1cad54, Func Offset: 0x2d4
	// Line 1204, Address: 0x1cad74, Func Offset: 0x2f4
	// Line 1208, Address: 0x1cad90, Func Offset: 0x310
	// Line 1211, Address: 0x1cad98, Func Offset: 0x318
	// Line 1223, Address: 0x1cadb4, Func Offset: 0x334
	// Line 1224, Address: 0x1cadc8, Func Offset: 0x348
	// Line 1225, Address: 0x1caddc, Func Offset: 0x35c
	// Line 1228, Address: 0x1cadf0, Func Offset: 0x370
	// Line 1230, Address: 0x1cadfc, Func Offset: 0x37c
	// Line 1231, Address: 0x1cae04, Func Offset: 0x384
	// Line 1230, Address: 0x1cae14, Func Offset: 0x394
	// Line 1231, Address: 0x1cae1c, Func Offset: 0x39c
	// Line 1238, Address: 0x1cae28, Func Offset: 0x3a8
	// Func End, Address: 0x1cae40, Func Offset: 0x3c0
}

// zHudElementsCB_SnacksSetup__FP7_xScene
// Start address: 0x1cae40
void zHudElementsCB_SnacksSetup()
{
	// Line 958, Address: 0x1cae40, Func Offset: 0
	// Line 964, Address: 0x1cae48, Func Offset: 0x8
	// Line 965, Address: 0x1cae58, Func Offset: 0x18
	// Line 967, Address: 0x1cae60, Func Offset: 0x20
	// Line 968, Address: 0x1cae68, Func Offset: 0x28
	// Line 970, Address: 0x1cae6c, Func Offset: 0x2c
	// Line 971, Address: 0x1cae74, Func Offset: 0x34
	// Line 973, Address: 0x1cae7c, Func Offset: 0x3c
	// Line 974, Address: 0x1cae84, Func Offset: 0x44
	// Line 976, Address: 0x1cae88, Func Offset: 0x48
	// Line 977, Address: 0x1cae8c, Func Offset: 0x4c
	// Line 980, Address: 0x1cae90, Func Offset: 0x50
	// Line 978, Address: 0x1cae98, Func Offset: 0x58
	// Line 980, Address: 0x1cae9c, Func Offset: 0x5c
	// Line 981, Address: 0x1caea0, Func Offset: 0x60
	// Line 982, Address: 0x1caea4, Func Offset: 0x64
	// Line 985, Address: 0x1caea8, Func Offset: 0x68
	// Line 984, Address: 0x1caeac, Func Offset: 0x6c
	// Line 985, Address: 0x1caeb0, Func Offset: 0x70
	// Line 986, Address: 0x1caeb8, Func Offset: 0x78
	// Line 988, Address: 0x1caebc, Func Offset: 0x7c
	// Line 989, Address: 0x1caec4, Func Offset: 0x84
	// Line 990, Address: 0x1caec8, Func Offset: 0x88
	// Line 991, Address: 0x1caecc, Func Offset: 0x8c
	// Line 993, Address: 0x1caed4, Func Offset: 0x94
	// Line 994, Address: 0x1caed8, Func Offset: 0x98
	// Line 995, Address: 0x1caedc, Func Offset: 0x9c
	// Line 996, Address: 0x1caee0, Func Offset: 0xa0
	// Line 1000, Address: 0x1caee4, Func Offset: 0xa4
	// Line 1001, Address: 0x1caee8, Func Offset: 0xa8
	// Line 1002, Address: 0x1caef0, Func Offset: 0xb0
	// Line 1003, Address: 0x1caef4, Func Offset: 0xb4
	// Line 1006, Address: 0x1caef8, Func Offset: 0xb8
	// Line 1007, Address: 0x1caf00, Func Offset: 0xc0
	// Line 1010, Address: 0x1caf08, Func Offset: 0xc8
	// Line 1011, Address: 0x1caf0c, Func Offset: 0xcc
	// Line 1012, Address: 0x1caf10, Func Offset: 0xd0
	// Line 1015, Address: 0x1caf14, Func Offset: 0xd4
	// Line 1016, Address: 0x1caf1c, Func Offset: 0xdc
	// Line 1019, Address: 0x1caf24, Func Offset: 0xe4
	// Line 1020, Address: 0x1caf2c, Func Offset: 0xec
	// Line 1021, Address: 0x1caf34, Func Offset: 0xf4
	// Line 1022, Address: 0x1caf3c, Func Offset: 0xfc
	// Line 1024, Address: 0x1caf40, Func Offset: 0x100
	// Func End, Address: 0x1caf48, Func Offset: 0x108
}

// zHudElementsCB_SnacksInit__Fv
// Start address: 0x1caf50
void zHudElementsCB_SnacksInit()
{
	// Line 950, Address: 0x1caf54, Func Offset: 0x4
	// Line 952, Address: 0x1caf60, Func Offset: 0x10
	// Line 953, Address: 0x1caff4, Func Offset: 0xa4
	// Line 955, Address: 0x1caffc, Func Offset: 0xac
	// Func End, Address: 0x1cb008, Func Offset: 0xb8
}

// zHudElementsCB_ChancesRender__Fv
// Start address: 0x1cb010
void zHudElementsCB_ChancesRender()
{
	// Line 945, Address: 0x1cb010, Func Offset: 0
	// Func End, Address: 0x1cb018, Func Offset: 0x8
}

// zHudElementsCB_ChancesUpdate__FP7_xScenef
// Start address: 0x1cb020
void zHudElementsCB_ChancesUpdate(float32 dt)
{
	zHudItem* item;
	// Line 783, Address: 0x1cb020, Func Offset: 0
	// Line 786, Address: 0x1cb02c, Func Offset: 0xc
	// Line 783, Address: 0x1cb030, Func Offset: 0x10
	// Line 786, Address: 0x1cb034, Func Offset: 0x14
	// Line 789, Address: 0x1cb038, Func Offset: 0x18
	// Line 793, Address: 0x1cb064, Func Offset: 0x44
	// Line 800, Address: 0x1cb084, Func Offset: 0x64
	// Line 814, Address: 0x1cb08c, Func Offset: 0x6c
	// Line 830, Address: 0x1cb0ac, Func Offset: 0x8c
	// Line 834, Address: 0x1cb0dc, Func Offset: 0xbc
	// Line 838, Address: 0x1cb0f8, Func Offset: 0xd8
	// Line 841, Address: 0x1cb100, Func Offset: 0xe0
	// Line 845, Address: 0x1cb11c, Func Offset: 0xfc
	// Line 848, Address: 0x1cb124, Func Offset: 0x104
	// Line 852, Address: 0x1cb140, Func Offset: 0x120
	// Line 856, Address: 0x1cb15c, Func Offset: 0x13c
	// Line 872, Address: 0x1cb178, Func Offset: 0x158
	// Line 875, Address: 0x1cb1a8, Func Offset: 0x188
	// Line 879, Address: 0x1cb1c4, Func Offset: 0x1a4
	// Line 897, Address: 0x1cb1e0, Func Offset: 0x1c0
	// Line 898, Address: 0x1cb1f4, Func Offset: 0x1d4
	// Line 899, Address: 0x1cb208, Func Offset: 0x1e8
	// Line 901, Address: 0x1cb21c, Func Offset: 0x1fc
	// Func End, Address: 0x1cb230, Func Offset: 0x210
}

// zHudElementsCB_ChancesSetup__FP7_xScene
// Start address: 0x1cb230
void zHudElementsCB_ChancesSetup()
{
	// Line 744, Address: 0x1cb230, Func Offset: 0
	// Line 745, Address: 0x1cb240, Func Offset: 0x10
	// Line 747, Address: 0x1cb248, Func Offset: 0x18
	// Line 748, Address: 0x1cb250, Func Offset: 0x20
	// Line 750, Address: 0x1cb254, Func Offset: 0x24
	// Line 751, Address: 0x1cb258, Func Offset: 0x28
	// Line 754, Address: 0x1cb25c, Func Offset: 0x2c
	// Line 752, Address: 0x1cb260, Func Offset: 0x30
	// Line 754, Address: 0x1cb264, Func Offset: 0x34
	// Line 755, Address: 0x1cb26c, Func Offset: 0x3c
	// Line 756, Address: 0x1cb270, Func Offset: 0x40
	// Line 758, Address: 0x1cb274, Func Offset: 0x44
	// Line 759, Address: 0x1cb278, Func Offset: 0x48
	// Line 760, Address: 0x1cb284, Func Offset: 0x54
	// Line 764, Address: 0x1cb288, Func Offset: 0x58
	// Line 765, Address: 0x1cb28c, Func Offset: 0x5c
	// Line 766, Address: 0x1cb294, Func Offset: 0x64
	// Line 769, Address: 0x1cb298, Func Offset: 0x68
	// Line 770, Address: 0x1cb2a0, Func Offset: 0x70
	// Line 773, Address: 0x1cb2a8, Func Offset: 0x78
	// Line 774, Address: 0x1cb2ac, Func Offset: 0x7c
	// Line 775, Address: 0x1cb2b0, Func Offset: 0x80
	// Line 778, Address: 0x1cb2b4, Func Offset: 0x84
	// Line 779, Address: 0x1cb2bc, Func Offset: 0x8c
	// Line 781, Address: 0x1cb2c0, Func Offset: 0x90
	// Func End, Address: 0x1cb2c8, Func Offset: 0x98
}

// zHudElementsCB_ChancesInit__Fv
// Start address: 0x1cb2d0
void zHudElementsCB_ChancesInit()
{
	// Line 736, Address: 0x1cb2d0, Func Offset: 0
	// Func End, Address: 0x1cb2d8, Func Offset: 0x8
}

// zHudElementsCB_PlayerStatusRender__Fv
// Start address: 0x1cb2e0
void zHudElementsCB_PlayerStatusRender()
{
	_xMat4x3 frame;
	_xVec3 to;
	_xVec3 from;
	_xRect r;
	int32 i;
	// Line 678, Address: 0x1cb2e0, Func Offset: 0
	// Line 688, Address: 0x1cb308, Func Offset: 0x28
	// Line 689, Address: 0x1cb36c, Func Offset: 0x8c
	// Line 691, Address: 0x1cb388, Func Offset: 0xa8
	// Line 695, Address: 0x1cb390, Func Offset: 0xb0
	// Line 698, Address: 0x1cb3ac, Func Offset: 0xcc
	// Line 703, Address: 0x1cb3c8, Func Offset: 0xe8
	// Line 704, Address: 0x1cb3cc, Func Offset: 0xec
	// Line 698, Address: 0x1cb3d0, Func Offset: 0xf0
	// Line 703, Address: 0x1cb420, Func Offset: 0x140
	// Line 704, Address: 0x1cb438, Func Offset: 0x158
	// Line 708, Address: 0x1cb450, Func Offset: 0x170
	// Line 710, Address: 0x1cb464, Func Offset: 0x184
	// Line 711, Address: 0x1cb468, Func Offset: 0x188
	// Line 712, Address: 0x1cb46c, Func Offset: 0x18c
	// Line 714, Address: 0x1cb470, Func Offset: 0x190
	// Line 717, Address: 0x1cb474, Func Offset: 0x194
	// Line 720, Address: 0x1cb488, Func Offset: 0x1a8
	// Line 725, Address: 0x1cb49c, Func Offset: 0x1bc
	// Line 726, Address: 0x1cb4bc, Func Offset: 0x1dc
	// Line 727, Address: 0x1cb4c0, Func Offset: 0x1e0
	// Line 729, Address: 0x1cb4d0, Func Offset: 0x1f0
	// Func End, Address: 0x1cb4fc, Func Offset: 0x21c
}

// zHud_showHealthandStatus__Fv
// Start address: 0x1cb500
void zHud_showHealthandStatus()
{
	// Line 673, Address: 0x1cb500, Func Offset: 0
	// Line 675, Address: 0x1cb508, Func Offset: 0x8
	// Func End, Address: 0x1cb510, Func Offset: 0x10
}

// zHudElementsCB_PlayerStatusUpdate__FP7_xScenef
// Start address: 0x1cb510
void zHudElementsCB_PlayerStatusUpdate(float32 dt)
{
	int32 i;
	int32 i;
	uint32 num;
	// Line 449, Address: 0x1cb510, Func Offset: 0
	// Line 450, Address: 0x1cb520, Func Offset: 0x10
	// Line 449, Address: 0x1cb524, Func Offset: 0x14
	// Line 450, Address: 0x1cb528, Func Offset: 0x18
	// Line 451, Address: 0x1cb530, Func Offset: 0x20
	// Line 460, Address: 0x1cb564, Func Offset: 0x54
	// Line 462, Address: 0x1cb574, Func Offset: 0x64
	// Line 464, Address: 0x1cb57c, Func Offset: 0x6c
	// Line 467, Address: 0x1cb584, Func Offset: 0x74
	// Line 468, Address: 0x1cb590, Func Offset: 0x80
	// Line 475, Address: 0x1cb5a0, Func Offset: 0x90
	// Line 477, Address: 0x1cb5b4, Func Offset: 0xa4
	// Line 478, Address: 0x1cb5b8, Func Offset: 0xa8
	// Line 482, Address: 0x1cb5c0, Func Offset: 0xb0
	// Line 487, Address: 0x1cb5e0, Func Offset: 0xd0
	// Line 488, Address: 0x1cb5f0, Func Offset: 0xe0
	// Line 491, Address: 0x1cb618, Func Offset: 0x108
	// Line 498, Address: 0x1cb620, Func Offset: 0x110
	// Line 499, Address: 0x1cb628, Func Offset: 0x118
	// Line 502, Address: 0x1cb654, Func Offset: 0x144
	// Line 504, Address: 0x1cb65c, Func Offset: 0x14c
	// Line 505, Address: 0x1cb66c, Func Offset: 0x15c
	// Line 509, Address: 0x1cb674, Func Offset: 0x164
	// Line 513, Address: 0x1cb67c, Func Offset: 0x16c
	// Line 515, Address: 0x1cb6a4, Func Offset: 0x194
	// Line 517, Address: 0x1cb6a8, Func Offset: 0x198
	// Line 524, Address: 0x1cb6cc, Func Offset: 0x1bc
	// Line 528, Address: 0x1cb6d4, Func Offset: 0x1c4
	// Line 535, Address: 0x1cb6fc, Func Offset: 0x1ec
	// Line 548, Address: 0x1cb704, Func Offset: 0x1f4
	// Line 563, Address: 0x1cb728, Func Offset: 0x218
	// Line 567, Address: 0x1cb758, Func Offset: 0x248
	// Line 571, Address: 0x1cb774, Func Offset: 0x264
	// Line 574, Address: 0x1cb77c, Func Offset: 0x26c
	// Line 578, Address: 0x1cb798, Func Offset: 0x288
	// Line 581, Address: 0x1cb7a0, Func Offset: 0x290
	// Line 585, Address: 0x1cb7bc, Func Offset: 0x2ac
	// Line 589, Address: 0x1cb7d8, Func Offset: 0x2c8
	// Line 602, Address: 0x1cb7f4, Func Offset: 0x2e4
	// Line 604, Address: 0x1cb7f8, Func Offset: 0x2e8
	// Line 607, Address: 0x1cb828, Func Offset: 0x318
	// Line 611, Address: 0x1cb840, Func Offset: 0x330
	// Line 616, Address: 0x1cb858, Func Offset: 0x348
	// Line 619, Address: 0x1cb860, Func Offset: 0x350
	// Line 623, Address: 0x1cb878, Func Offset: 0x368
	// Line 639, Address: 0x1cb890, Func Offset: 0x380
	// Line 642, Address: 0x1cb8b0, Func Offset: 0x3a0
	// Line 646, Address: 0x1cb8cc, Func Offset: 0x3bc
	// Line 648, Address: 0x1cb8d4, Func Offset: 0x3c4
	// Line 659, Address: 0x1cb8f0, Func Offset: 0x3e0
	// Line 660, Address: 0x1cb904, Func Offset: 0x3f4
	// Line 661, Address: 0x1cb918, Func Offset: 0x408
	// Line 664, Address: 0x1cb92c, Func Offset: 0x41c
	// Line 665, Address: 0x1cb938, Func Offset: 0x428
	// Line 666, Address: 0x1cb940, Func Offset: 0x430
	// Line 669, Address: 0x1cb950, Func Offset: 0x440
	// Func End, Address: 0x1cb968, Func Offset: 0x458
}

// zHudElementsCB_PlayerStatusSetup__FP7_xScene
// Start address: 0x1cb970
void zHudElementsCB_PlayerStatusSetup()
{
	xAnimSingle* asing;
	xAnimPlay* aplay;
	int32 i;
	// Line 361, Address: 0x1cb970, Func Offset: 0
	// Line 362, Address: 0x1cb980, Func Offset: 0x10
	// Line 363, Address: 0x1cb988, Func Offset: 0x18
	// Line 368, Address: 0x1cb994, Func Offset: 0x24
	// Line 362, Address: 0x1cb99c, Func Offset: 0x2c
	// Line 371, Address: 0x1cb9a0, Func Offset: 0x30
	// Line 372, Address: 0x1cb9a8, Func Offset: 0x38
	// Line 374, Address: 0x1cb9b0, Func Offset: 0x40
	// Line 375, Address: 0x1cb9b8, Func Offset: 0x48
	// Line 377, Address: 0x1cb9c0, Func Offset: 0x50
	// Line 378, Address: 0x1cb9c8, Func Offset: 0x58
	// Line 380, Address: 0x1cb9d0, Func Offset: 0x60
	// Line 381, Address: 0x1cb9d8, Func Offset: 0x68
	// Line 383, Address: 0x1cb9dc, Func Offset: 0x6c
	// Line 384, Address: 0x1cb9e0, Func Offset: 0x70
	// Line 386, Address: 0x1cb9e4, Func Offset: 0x74
	// Line 387, Address: 0x1cb9e8, Func Offset: 0x78
	// Line 390, Address: 0x1cb9ec, Func Offset: 0x7c
	// Line 388, Address: 0x1cb9f0, Func Offset: 0x80
	// Line 390, Address: 0x1cb9f4, Func Offset: 0x84
	// Line 391, Address: 0x1cb9fc, Func Offset: 0x8c
	// Line 392, Address: 0x1cba00, Func Offset: 0x90
	// Line 394, Address: 0x1cba04, Func Offset: 0x94
	// Line 395, Address: 0x1cba08, Func Offset: 0x98
	// Line 398, Address: 0x1cba14, Func Offset: 0xa4
	// Line 396, Address: 0x1cba18, Func Offset: 0xa8
	// Line 398, Address: 0x1cba1c, Func Offset: 0xac
	// Line 399, Address: 0x1cba20, Func Offset: 0xb0
	// Line 400, Address: 0x1cba24, Func Offset: 0xb4
	// Line 401, Address: 0x1cba28, Func Offset: 0xb8
	// Line 403, Address: 0x1cba30, Func Offset: 0xc0
	// Line 404, Address: 0x1cba34, Func Offset: 0xc4
	// Line 405, Address: 0x1cba38, Func Offset: 0xc8
	// Line 406, Address: 0x1cba3c, Func Offset: 0xcc
	// Line 409, Address: 0x1cba40, Func Offset: 0xd0
	// Line 410, Address: 0x1cba44, Func Offset: 0xd4
	// Line 411, Address: 0x1cba48, Func Offset: 0xd8
	// Line 412, Address: 0x1cba4c, Func Offset: 0xdc
	// Line 415, Address: 0x1cba50, Func Offset: 0xe0
	// Line 383, Address: 0x1cba54, Func Offset: 0xe4
	// Line 398, Address: 0x1cba58, Func Offset: 0xe8
	// Line 415, Address: 0x1cba60, Func Offset: 0xf0
	// Line 416, Address: 0x1cba64, Func Offset: 0xf4
	// Line 419, Address: 0x1cba6c, Func Offset: 0xfc
	// Line 420, Address: 0x1cba74, Func Offset: 0x104
	// Line 421, Address: 0x1cba7c, Func Offset: 0x10c
	// Line 424, Address: 0x1cba84, Func Offset: 0x114
	// Line 425, Address: 0x1cba8c, Func Offset: 0x11c
	// Line 428, Address: 0x1cba94, Func Offset: 0x124
	// Line 432, Address: 0x1cba9c, Func Offset: 0x12c
	// Line 433, Address: 0x1cbaa4, Func Offset: 0x134
	// Line 435, Address: 0x1cbaac, Func Offset: 0x13c
	// Line 436, Address: 0x1cbab0, Func Offset: 0x140
	// Line 437, Address: 0x1cbab4, Func Offset: 0x144
	// Line 439, Address: 0x1cbab8, Func Offset: 0x148
	// Line 445, Address: 0x1cbad0, Func Offset: 0x160
	// Line 447, Address: 0x1cbae0, Func Offset: 0x170
	// Func End, Address: 0x1cbaf4, Func Offset: 0x184
}

// zHudElementsCB_PlayerStatusInit__Fv
// Start address: 0x1cbb00
void zHudElementsCB_PlayerStatusInit()
{
	xAnimFile* afile;
	uint32 size;
	void* buff;
	int32 i;
	// Line 287, Address: 0x1cbb00, Func Offset: 0
	// Line 289, Address: 0x1cbb24, Func Offset: 0x24
	// Line 290, Address: 0x1cbbb8, Func Offset: 0xb8
	// Line 291, Address: 0x1cbbc4, Func Offset: 0xc4
	// Line 292, Address: 0x1cbc58, Func Offset: 0x158
	// Line 293, Address: 0x1cbc5c, Func Offset: 0x15c
	// Line 294, Address: 0x1cbcf0, Func Offset: 0x1f0
	// Line 295, Address: 0x1cbcf4, Func Offset: 0x1f4
	// Line 296, Address: 0x1cbd88, Func Offset: 0x288
	// Line 297, Address: 0x1cbd8c, Func Offset: 0x28c
	// Line 298, Address: 0x1cbe20, Func Offset: 0x320
	// Line 299, Address: 0x1cbe24, Func Offset: 0x324
	// Line 300, Address: 0x1cbebc, Func Offset: 0x3bc
	// Line 306, Address: 0x1cbec0, Func Offset: 0x3c0
	// Line 314, Address: 0x1cbec8, Func Offset: 0x3c8
	// Line 316, Address: 0x1cbeec, Func Offset: 0x3ec
	// Line 317, Address: 0x1cbef0, Func Offset: 0x3f0
	// Line 318, Address: 0x1cbf08, Func Offset: 0x408
	// Line 321, Address: 0x1cbf10, Func Offset: 0x410
	// Line 322, Address: 0x1cbf28, Func Offset: 0x428
	// Line 325, Address: 0x1cbf30, Func Offset: 0x430
	// Line 326, Address: 0x1cbf48, Func Offset: 0x448
	// Line 329, Address: 0x1cbf50, Func Offset: 0x450
	// Line 330, Address: 0x1cbf68, Func Offset: 0x468
	// Line 333, Address: 0x1cbf70, Func Offset: 0x470
	// Line 334, Address: 0x1cbf88, Func Offset: 0x488
	// Line 338, Address: 0x1cbf90, Func Offset: 0x490
	// Line 340, Address: 0x1cbfac, Func Offset: 0x4ac
	// Line 342, Address: 0x1cbfb0, Func Offset: 0x4b0
	// Line 343, Address: 0x1cbfb8, Func Offset: 0x4b8
	// Line 346, Address: 0x1cbfd4, Func Offset: 0x4d4
	// Line 347, Address: 0x1cbfe8, Func Offset: 0x4e8
	// Line 348, Address: 0x1cc018, Func Offset: 0x518
	// Line 349, Address: 0x1cc02c, Func Offset: 0x52c
	// Line 356, Address: 0x1cc044, Func Offset: 0x544
	// Line 357, Address: 0x1cc048, Func Offset: 0x548
	// Line 359, Address: 0x1cc058, Func Offset: 0x558
	// Func End, Address: 0x1cc078, Func Offset: 0x578
}

// zHud_Render__Fv
// Start address: 0x1cc080
void zHud_Render()
{
	int32 i;
	// Line 259, Address: 0x1cc080, Func Offset: 0
	// Line 266, Address: 0x1cc08c, Func Offset: 0xc
	// Line 259, Address: 0x1cc090, Func Offset: 0x10
	// Line 266, Address: 0x1cc094, Func Offset: 0x14
	// Line 275, Address: 0x1cc0ac, Func Offset: 0x2c
	// Line 277, Address: 0x1cc0b4, Func Offset: 0x34
	// Line 278, Address: 0x1cc0c0, Func Offset: 0x40
	// Line 277, Address: 0x1cc0c8, Func Offset: 0x48
	// Line 278, Address: 0x1cc0cc, Func Offset: 0x4c
	// Line 283, Address: 0x1cc0d4, Func Offset: 0x54
	// Func End, Address: 0x1cc0e8, Func Offset: 0x68
}

// zHud_Update__FP7_xScenef
// Start address: 0x1cc0f0
void zHud_Update(_xScene* sc, float32 dt)
{
	int32 i;
	// Line 212, Address: 0x1cc0f0, Func Offset: 0
	// Line 214, Address: 0x1cc114, Func Offset: 0x24
	// Line 216, Address: 0x1cc11c, Func Offset: 0x2c
	// Line 217, Address: 0x1cc12c, Func Offset: 0x3c
	// Line 220, Address: 0x1cc13c, Func Offset: 0x4c
	// Line 221, Address: 0x1cc15c, Func Offset: 0x6c
	// Line 223, Address: 0x1cc174, Func Offset: 0x84
	// Line 227, Address: 0x1cc1b4, Func Offset: 0xc4
	// Line 230, Address: 0x1cc1c8, Func Offset: 0xd8
	// Line 231, Address: 0x1cc1dc, Func Offset: 0xec
	// Line 234, Address: 0x1cc1f8, Func Offset: 0x108
	// Line 236, Address: 0x1cc230, Func Offset: 0x140
	// Line 237, Address: 0x1cc240, Func Offset: 0x150
	// Line 238, Address: 0x1cc244, Func Offset: 0x154
	// Line 239, Address: 0x1cc24c, Func Offset: 0x15c
	// Line 240, Address: 0x1cc268, Func Offset: 0x178
	// Line 242, Address: 0x1cc278, Func Offset: 0x188
	// Line 245, Address: 0x1cc27c, Func Offset: 0x18c
	// Line 242, Address: 0x1cc288, Func Offset: 0x198
	// Line 245, Address: 0x1cc290, Func Offset: 0x1a0
	// Line 247, Address: 0x1cc2c0, Func Offset: 0x1d0
	// Line 248, Address: 0x1cc2d0, Func Offset: 0x1e0
	// Line 249, Address: 0x1cc2d4, Func Offset: 0x1e4
	// Line 250, Address: 0x1cc2dc, Func Offset: 0x1ec
	// Line 251, Address: 0x1cc2f8, Func Offset: 0x208
	// Line 253, Address: 0x1cc308, Func Offset: 0x218
	// Line 255, Address: 0x1cc314, Func Offset: 0x224
	// Func End, Address: 0x1cc330, Func Offset: 0x240
}

// zHud_Setup__FP7_xScene
// Start address: 0x1cc330
void zHud_Setup(_xScene* sc)
{
	int32 i;
	// Line 202, Address: 0x1cc330, Func Offset: 0
	// Line 204, Address: 0x1cc34c, Func Offset: 0x1c
	// Line 206, Address: 0x1cc354, Func Offset: 0x24
	// Line 207, Address: 0x1cc360, Func Offset: 0x30
	// Line 209, Address: 0x1cc370, Func Offset: 0x40
	// Func End, Address: 0x1cc388, Func Offset: 0x58
}

// zHud_Init__Fv
// Start address: 0x1cc390
void zHud_Init()
{
	int32 i;
	// Line 172, Address: 0x1cc390, Func Offset: 0
	// Line 174, Address: 0x1cc39c, Func Offset: 0xc
	// Line 172, Address: 0x1cc3a0, Func Offset: 0x10
	// Line 174, Address: 0x1cc3a4, Func Offset: 0x14
	// Line 175, Address: 0x1cc3ac, Func Offset: 0x1c
	// Line 178, Address: 0x1cc3b8, Func Offset: 0x28
	// Line 179, Address: 0x1cc3c4, Func Offset: 0x34
	// Line 180, Address: 0x1cc3c8, Func Offset: 0x38
	// Line 181, Address: 0x1cc3cc, Func Offset: 0x3c
	// Line 183, Address: 0x1cc3d4, Func Offset: 0x44
	// Line 184, Address: 0x1cc3e0, Func Offset: 0x50
	// Line 185, Address: 0x1cc3e4, Func Offset: 0x54
	// Line 186, Address: 0x1cc3f0, Func Offset: 0x60
	// Line 190, Address: 0x1cc3f4, Func Offset: 0x64
	// Line 192, Address: 0x1cc41c, Func Offset: 0x8c
	// Line 194, Address: 0x1cc424, Func Offset: 0x94
	// Line 195, Address: 0x1cc430, Func Offset: 0xa0
	// Line 194, Address: 0x1cc438, Func Offset: 0xa8
	// Line 195, Address: 0x1cc43c, Func Offset: 0xac
	// Line 197, Address: 0x1cc444, Func Offset: 0xb4
	// Line 199, Address: 0x1cc448, Func Offset: 0xb8
	// Func End, Address: 0x1cc45c, Func Offset: 0xcc
}

