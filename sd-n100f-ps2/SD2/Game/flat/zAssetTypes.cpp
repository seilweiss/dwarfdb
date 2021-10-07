typedef struct _zEnt;
typedef struct _xEnt;
typedef struct RpWorldSector;
typedef enum RwTextureFilterMode;
typedef struct xBase;
typedef struct xAnimTable;
typedef struct tag_iFile;
typedef struct xAnimState;
typedef struct _xEnv;
typedef struct RxPipelineCluster;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineNode;
typedef struct zAssetAnimFile;
typedef enum RxClusterValid;
typedef struct RwStreamUnion;
typedef struct RwObject;
typedef struct _tagxCamFollow;
typedef struct RpWorld;
typedef struct zAssetAnimState;
typedef struct RpGeometry;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct RwTexDictionary;
typedef struct p2LinkAsset;
typedef enum RwStreamAccessType;
typedef struct RwRGBA;
typedef struct xAnimEffect;
typedef struct _zCutsceneMgr;
typedef struct zAssetAnimTable;
typedef struct RwCamera;
typedef struct RpAtomic;
typedef struct RpVertexNormal;
typedef struct RwV3d;
typedef struct _xEntShadow;
typedef struct RpMaterialList;
typedef struct RwStream;
typedef struct RpMorphTarget;
typedef struct zCutsceneMgrAsset;
typedef struct RwResEntry;
typedef struct RwPlane;
typedef struct RxNodeDefinition;
typedef struct xAnimActiveEffect;
typedef struct xSurface;
typedef struct zPlayerGlobals;
typedef struct _tagxCamPathAsset;
typedef struct _xMat4x3;
typedef struct iEnv;
typedef struct RxPacket;
typedef struct xCutscene;
typedef struct RwTexture;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct RwLinkList;
typedef struct RxClusterDefinition;
typedef struct xAnimPlay;
typedef struct _zEntHangable;
typedef enum _tagRumbleType;
typedef struct zCutsceneZbufferHack;
typedef struct iShadowCache;
typedef struct RxPipelineRequiresCluster;
typedef struct iFogParams;
typedef struct zAssetPickupTable;
typedef enum RwFogType;
typedef struct RwLLLink;
typedef struct rxReq;
typedef struct p2EntHangableAsset;
typedef struct _xQuat;
typedef struct RwStreamMemory;
typedef struct xModelInstance;
typedef struct RpClump;
typedef struct p2BaseAsset;
typedef struct p2EntAsset;
typedef struct RpLight;
typedef struct xAnimTransitionList;
typedef struct RwFrustumPlane;
typedef struct RxPipelineNodeTopSortData;
typedef struct _tagxCam;
typedef struct RwTexCoords;
typedef struct RxOutputSpec;
typedef struct RpPolygon;
typedef struct xAnimFile;
typedef struct _tagxCamShoulder;
typedef struct RwFrame;
typedef struct iModelTag;
typedef enum RxClusterForcePresent;
typedef struct RwBBox;
typedef struct xModelPool;
typedef struct _xVec4;
typedef struct xAnimTransition;
typedef struct RpTriangle;
typedef struct _xBound;
typedef struct RxClusterRef;
typedef struct _xVec3;
typedef struct _xScene;
typedef struct xMemPool;
typedef enum RxNodeDefEditable;
typedef struct zShaggy1Globals;
typedef struct _tagxCamFollowAsset;
typedef struct RxPipeline;
typedef struct xCutsceneData;
typedef struct _xEntFrame;
typedef struct xCutsceneTime;
typedef struct xAnimSingle;
typedef struct _xRot;
typedef struct xCamAsset;
typedef struct RxIoSpec;
typedef struct zCheckPoint;
typedef struct RwMemory;
typedef enum _tagCamType;
typedef struct RwStreamFile;
typedef struct RxNodeMethods;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobalGameStats;
typedef struct RpCollSector;
typedef struct RwMatrixTag;
typedef struct _xEntCollis;
typedef struct _tagxCamStatic;
typedef struct RpMeshHeader;
typedef struct RwSurfaceProperties;
typedef struct RwChunkHeaderInfo;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct _iCollis;
typedef struct _tagxRumble;
typedef struct zJumpParam;
typedef struct xCutsceneInfo;
typedef struct _tagxCamFrame;
typedef struct zAnimFxSound;
typedef enum RxClusterValidityReq;
typedef struct _xCollis;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct zGlobals;
typedef struct zPortalAsset;
typedef struct RpInterpolator;
typedef enum rxEmbeddedPacketState;
typedef struct RwSphere;
typedef struct _tagxCamStaticFollow;
typedef struct xCutsceneBreak;
typedef struct _tagxPad;
typedef enum RwTextureAddressMode;
typedef struct _xSphere;
typedef enum _tagPadState;
typedef struct zScene;
typedef struct _tagiPad;
typedef struct RxPipelineNodeParam;
typedef struct _zPortal;
typedef struct _xCylinder;
typedef struct zPlayerStatic;
typedef struct zCutsceneZbuffer;
typedef struct _tagxCamPath;
typedef struct _tagp2CamStaticAsset;
typedef struct RwStreamCustom;
typedef struct zAssetAnimEffect;
typedef struct xQCData;
typedef struct _xBox;
typedef struct _tagPadAnalog;
typedef struct _zPlatform;
typedef struct xFFX;
typedef enum RwCameraProjection;
typedef enum RpWorldRenderOrder;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct _xBBox;
typedef struct st_PACKER_ASSETTYPE;
typedef enum RwStreamType;
typedef struct tag_xFile;
typedef struct sceCdlFILE;
typedef struct RwV2d;
typedef struct _xEntDrive;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_1)(xAnimTransition*, xAnimSingle*, void*);
typedef void*(*type_3)(void*, uint32, void*, uint32, uint32*);
typedef RpClump*(*type_4)(RpClump*, void*);
typedef int32(*type_6)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void*(*type_9)(void*, uint32, void*, void*, uint32, uint32*);
typedef RpWorldSector*(*type_10)(RpWorldSector*);
typedef int32(*type_15)(void*, uint32, void*, int32);
typedef void*(*type_21)(void*, uint32, void*, int32*, int32*);
typedef uint32(*type_24)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_28)(void*, uint32, void*);
typedef void(*type_29)(int32);
typedef int32(*type_31)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_32)(uint32);
typedef void(*type_35)(void*, uint32);
typedef int32(*type_37)(RxNodeDefinition*);
typedef int8*(*type_38)(xBase*);
typedef void(*type_40)(void*, uint32, void*, int8*);
typedef RpAtomic*(*type_41)(RpAtomic*);
typedef void(*type_42)(RxNodeDefinition*);
typedef int8*(*type_43)(uint32);
typedef int32(*type_44)(RxPipelineNode*);
typedef void*(*type_45)(uint32, int8*);
typedef RwCamera*(*type_46)(RwCamera*);
typedef void(*type_47)(RwResEntry*);
typedef void(*type_48)(RxPipelineNode*);
typedef RwCamera*(*type_50)(RwCamera*);
typedef void(*type_61)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_62)(xMemPool*, void*);
typedef void(*type_66)(_xEnt*, _xScene*, float32);
typedef void(*type_70)(_xEnt*);
typedef void(*type_74)(_xEnt*);
typedef void(*type_75)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef RwTexture*(*type_76)(RwTexture*, void*);
typedef void(*type_78)(_xEnt*, _xVec3*);
typedef int32(*type_79)(void*);
typedef uint32(*type_81)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef uint32(*type_87)(void*, void*, uint32);
typedef uint32(*type_89)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_91)(void*, void*, uint32);
typedef void(*type_92)(_xEnt*, _xVec3*);
typedef int32(*type_98)(void*, uint32);
typedef xAnimTable*(*type_100)();

typedef zCutsceneZbuffer type_2[4];
typedef zGlobalGameStats type_5[30];
typedef int8 type_8[16];
typedef zGlobalGameStats type_11[13];
typedef _zEnt* type_12[10];
typedef uint32 type_13[1];
typedef uint8 type_14[8];
typedef RxCluster type_16[1];
typedef int8 type_17[128];
typedef uint8 type_18[3];
typedef zGlobalGameStats type_19[4];
typedef int32 type_20[2];
typedef uint32 type_22[2];
typedef float32 type_23[2];
typedef int32 type_25[2];
typedef uint8 type_26[22];
typedef uint32 type_27[4];
typedef uint32 type_30[2];
typedef uint8 type_33[22];
typedef uint32 type_34[43];
typedef uint32 type_36[2];
typedef xBase* type_39[43];
typedef int8 type_49[16];
typedef int8 type_51[32];
typedef int8 type_52[16];
typedef _xVec3 type_53[4];
typedef RpLight* type_54[2];
typedef uint32 type_55[2];
typedef RwFrame* type_56[2];
typedef uint16 type_57[3];
typedef uint8 type_58[3];
typedef float32 type_59[4];
typedef uint16 type_60[3];
typedef float32 type_63[15];
typedef float32 type_64[4];
typedef float32 type_65[15];
typedef float32 type_67[4];
typedef uint32 type_68[15];
typedef int8 type_69[32];
typedef uint8 type_71[2];
typedef uint16 type_72[2];
typedef int8 type_73[32];
typedef st_PACKER_ASSETTYPE type_77[56];
typedef _xVec3 type_80[2];
typedef uint8 type_82[3];
typedef _xQuat type_83[2];
typedef RwTexCoords* type_84[8];
typedef iModelTag type_85[4];
typedef int8 type_86[16];
typedef _xVec4 type_88[8];
typedef uint32(*type_90)(uint32, xAnimActiveEffect*, xAnimSingle*, void*)[2];
typedef RwFrustumPlane type_93[6];
typedef RwTexCoords* type_94[8];
typedef int8 type_95[128];
typedef float32 type_96[4];
typedef int8 type_97[128][6];
typedef RwV3d type_99[8];
typedef float32 type_101[4];
typedef _xCollis type_102[18];
typedef xAnimTable*(*type_103)()[22];
typedef float32 type_104[4];
typedef int8 type_105[32];
typedef float32 type_106[4];
typedef float32 type_107[4];
typedef uint8 type_108[8];
typedef uint32 type_109[2];
typedef float32 type_110[4];
typedef uint8 type_111[8];
typedef float32 type_112[3];
typedef uint8 type_113[8];
typedef uint8 type_114[3];
typedef float32 type_115[3];
typedef uint8 type_116[8];

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct zAssetAnimFile
{
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 NumAnims[2];
	void** RawData;
	int32 Physics;
	int32 StartPose;
	int32 EndPose;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwStreamUnion
{
	union
	{
		RwStreamMemory memory;
		RwStreamFile file;
		RwStreamCustom custom;
	};
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct zAssetAnimState
{
	uint32 StateID;
	uint32 FileIndex;
	uint32 EffectCount;
	uint32 EffectOffset;
	float32 Speed;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct zAssetAnimTable
{
	uint32 Magic;
	uint32 NumRaw;
	uint32 NumFiles;
	uint32 NumStates;
	uint32 ConstructFunc;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RpSector
{
	int32 type;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct rxReq
{
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwMemory
{
	uint8* start;
	uint32 length;
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

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _tagxCamStatic
{
	uint32 unused;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwChunkHeaderInfo
{
	uint32 type;
	uint32 length;
	uint32 version;
	uint32 buildNum;
	int32 isComplex;
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

struct _iCollis
{
	int32 unknown;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct zAnimFxSound
{
	uint32 ID;
	float32 vol;
	float32 pitch;
	uint32 priority;
	uint32 flags;
	float32 radius;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct _tagiPad
{
	int32 port;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
};

struct zAssetAnimEffect
{
	uint32 StateID;
	float32 StartTime;
	float32 EndTime;
	uint32 Flags;
	uint32 EffectType;
	uint32 UserDataSize;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _zPlatform
{
};

struct xFFX
{
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
};

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

st_PACKER_ASSETTYPE assetTypeHandlers[56];
xAnimTable*(*tableFuncList)()[22];
uint32(*effectFuncList)(uint32, xAnimActiveEffect*, xAnimSingle*, void*)[2];
uint32 gxAnimUseGrowAlloc;
void*(*FindAssetCB)(uint32, int8*);
RwTexture*(*TexCB)(RwTexture*, void*);
zGlobals globals;

void MovePoint_Unload(void* userdata);
void Anim_Unload();
void* ATBL_Read(uint32 assetid, void* indata, uint32* outsize);
void* FindAssetCB(uint32 ID);
uint32 soundEffectCB(uint32 cbenum, xAnimActiveEffect* acteffect, void* object);
uint32 dummyEffectCB();
void TextureRW3_Unload(void* userdata);
void* RWTX_Read(void* indata, uint32 insize, uint32* outsize);
RwTexture* TexCB(RwTexture* texture, void* data);
void BSP_Unload();
void* BSP_Read(uint32 assetid, void* indata, uint32 insize, uint32* outsize);
void Model_Unload(void* userdata);
void* Model_Read(void* indata, uint32 insize, uint32* outsize);
void zAssetShutdown();
void zAssetStartup();

// MovePoint_Unload__FPvUi
// Start address: 0x1881f0
void MovePoint_Unload(void* userdata)
{
	// Line 686, Address: 0x1881f0, Func Offset: 0
	// Func End, Address: 0x1881f8, Func Offset: 0x8
}

// Anim_Unload__FPvUi
// Start address: 0x188200
void Anim_Unload()
{
	// Line 632, Address: 0x188200, Func Offset: 0
	// Func End, Address: 0x188208, Func Offset: 0x8
}

// ATBL_Read__FPvUiPvUiPUi
// Start address: 0x188210
void* ATBL_Read(uint32 assetid, void* indata, uint32* outsize)
{
	xAnimEffect* effect;
	zAssetAnimEffect* zaEffect;
	xAnimState* state;
	xAnimFile* foundFile;
	int8 tmpstr[32];
	xAnimFile** fList;
	zAssetAnimState* zaState;
	zAssetAnimFile* zaFile;
	void** zaRaw;
	zAssetAnimTable* zaTbl;
	uint8* zaBytes;
	xAnimTransition* atran;
	xAnimState* astate;
	uint32 tmpsize;
	uint32 debugNum;
	uint32 j;
	uint32 i;
	// Line 449, Address: 0x188210, Func Offset: 0
	// Line 450, Address: 0x188240, Func Offset: 0x30
	// Line 465, Address: 0x188244, Func Offset: 0x34
	// Line 466, Address: 0x188248, Func Offset: 0x38
	// Line 463, Address: 0x18824c, Func Offset: 0x3c
	// Line 464, Address: 0x188250, Func Offset: 0x40
	// Line 462, Address: 0x188258, Func Offset: 0x48
	// Line 465, Address: 0x18825c, Func Offset: 0x4c
	// Line 466, Address: 0x188264, Func Offset: 0x54
	// Line 469, Address: 0x188268, Func Offset: 0x58
	// Line 470, Address: 0x188278, Func Offset: 0x68
	// Line 473, Address: 0x1882a0, Func Offset: 0x90
	// Line 474, Address: 0x1882ac, Func Offset: 0x9c
	// Line 475, Address: 0x1882b8, Func Offset: 0xa8
	// Line 476, Address: 0x1882c8, Func Offset: 0xb8
	// Line 477, Address: 0x1882d8, Func Offset: 0xc8
	// Line 478, Address: 0x1882e4, Func Offset: 0xd4
	// Line 479, Address: 0x1882f0, Func Offset: 0xe0
	// Line 480, Address: 0x1882fc, Func Offset: 0xec
	// Line 481, Address: 0x18830c, Func Offset: 0xfc
	// Line 480, Address: 0x188310, Func Offset: 0x100
	// Line 481, Address: 0x188314, Func Offset: 0x104
	// Line 484, Address: 0x188328, Func Offset: 0x118
	// Line 485, Address: 0x188334, Func Offset: 0x124
	// Line 486, Address: 0x18834c, Func Offset: 0x13c
	// Line 489, Address: 0x188370, Func Offset: 0x160
	// Line 490, Address: 0x188378, Func Offset: 0x168
	// Line 491, Address: 0x18837c, Func Offset: 0x16c
	// Line 490, Address: 0x188384, Func Offset: 0x174
	// Line 491, Address: 0x188388, Func Offset: 0x178
	// Line 492, Address: 0x188390, Func Offset: 0x180
	// Line 493, Address: 0x1883d4, Func Offset: 0x1c4
	// Line 497, Address: 0x1883ec, Func Offset: 0x1dc
	// Line 500, Address: 0x1883f4, Func Offset: 0x1e4
	// Line 505, Address: 0x188418, Func Offset: 0x208
	// Line 506, Address: 0x188434, Func Offset: 0x224
	// Line 509, Address: 0x188440, Func Offset: 0x230
	// Line 510, Address: 0x18844c, Func Offset: 0x23c
	// Line 512, Address: 0x188468, Func Offset: 0x258
	// Line 513, Address: 0x188474, Func Offset: 0x264
	// Line 514, Address: 0x1884a8, Func Offset: 0x298
	// Line 520, Address: 0x1884c0, Func Offset: 0x2b0
	// Line 521, Address: 0x1884d0, Func Offset: 0x2c0
	// Line 528, Address: 0x1884d8, Func Offset: 0x2c8
	// Line 534, Address: 0x1884ec, Func Offset: 0x2dc
	// Line 537, Address: 0x188510, Func Offset: 0x300
	// Line 538, Address: 0x18851c, Func Offset: 0x30c
	// Line 544, Address: 0x18853c, Func Offset: 0x32c
	// Line 547, Address: 0x188544, Func Offset: 0x334
	// Line 548, Address: 0x188560, Func Offset: 0x350
	// Line 549, Address: 0x188590, Func Offset: 0x380
	// Line 550, Address: 0x1885d0, Func Offset: 0x3c0
	// Line 551, Address: 0x1885d8, Func Offset: 0x3c8
	// Line 552, Address: 0x1885f4, Func Offset: 0x3e4
	// Line 555, Address: 0x1885f8, Func Offset: 0x3e8
	// Line 556, Address: 0x1885fc, Func Offset: 0x3ec
	// Line 555, Address: 0x188600, Func Offset: 0x3f0
	// Line 556, Address: 0x188608, Func Offset: 0x3f8
	// Line 570, Address: 0x188618, Func Offset: 0x408
	// Line 569, Address: 0x18861c, Func Offset: 0x40c
	// Line 572, Address: 0x188620, Func Offset: 0x410
	// Line 573, Address: 0x188628, Func Offset: 0x418
	// Line 574, Address: 0x18863c, Func Offset: 0x42c
	// Line 575, Address: 0x188640, Func Offset: 0x430
	// Line 576, Address: 0x188644, Func Offset: 0x434
	// Line 580, Address: 0x188650, Func Offset: 0x440
	// Line 583, Address: 0x188658, Func Offset: 0x448
	// Line 581, Address: 0x18865c, Func Offset: 0x44c
	// Line 582, Address: 0x188668, Func Offset: 0x458
	// Line 583, Address: 0x18866c, Func Offset: 0x45c
	// Line 585, Address: 0x188678, Func Offset: 0x468
	// Line 586, Address: 0x18867c, Func Offset: 0x46c
	// Line 590, Address: 0x188688, Func Offset: 0x478
	// Line 591, Address: 0x188694, Func Offset: 0x484
	// Line 593, Address: 0x1886a0, Func Offset: 0x490
	// Line 594, Address: 0x1886b0, Func Offset: 0x4a0
	// Line 596, Address: 0x1886b4, Func Offset: 0x4a4
	// Line 597, Address: 0x1886bc, Func Offset: 0x4ac
	// Line 598, Address: 0x1886c4, Func Offset: 0x4b4
	// Line 606, Address: 0x1886ec, Func Offset: 0x4dc
	// Line 608, Address: 0x1886fc, Func Offset: 0x4ec
	// Line 610, Address: 0x188700, Func Offset: 0x4f0
	// Line 608, Address: 0x188704, Func Offset: 0x4f4
	// Line 610, Address: 0x18870c, Func Offset: 0x4fc
	// Line 611, Address: 0x188724, Func Offset: 0x514
	// Line 614, Address: 0x188738, Func Offset: 0x528
	// Line 616, Address: 0x18873c, Func Offset: 0x52c
	// Line 614, Address: 0x188740, Func Offset: 0x530
	// Line 616, Address: 0x188744, Func Offset: 0x534
	// Line 617, Address: 0x188748, Func Offset: 0x538
	// Line 616, Address: 0x18874c, Func Offset: 0x53c
	// Line 622, Address: 0x188750, Func Offset: 0x540
	// Func End, Address: 0x188780, Func Offset: 0x570
}

// FindAssetCB__FUiPc
// Start address: 0x188780
void* FindAssetCB(uint32 ID)
{
	uint32 size;
	// Line 443, Address: 0x188780, Func Offset: 0
	// Line 445, Address: 0x188788, Func Offset: 0x8
	// Line 446, Address: 0x188790, Func Offset: 0x10
	// Func End, Address: 0x18879c, Func Offset: 0x1c
}

// soundEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x1887a0
uint32 soundEffectCB(uint32 cbenum, xAnimActiveEffect* acteffect, void* object)
{
	zAnimFxSound* snd;
	_xEnt* ent_tmp;
	int32 vil_result;
	uint32 vil_SID;
	uint32 sndhandle;
	// Line 388, Address: 0x1887a0, Func Offset: 0
	// Line 397, Address: 0x1887bc, Func Offset: 0x1c
	// Line 390, Address: 0x1887c8, Func Offset: 0x28
	// Line 397, Address: 0x1887cc, Func Offset: 0x2c
	// Line 398, Address: 0x1887d4, Func Offset: 0x34
	// Line 409, Address: 0x1887d8, Func Offset: 0x38
	// Line 410, Address: 0x1887e8, Func Offset: 0x48
	// Line 411, Address: 0x1887f8, Func Offset: 0x58
	// Line 416, Address: 0x188808, Func Offset: 0x68
	// Line 420, Address: 0x188818, Func Offset: 0x78
	// Line 429, Address: 0x188848, Func Offset: 0xa8
	// Line 430, Address: 0x188854, Func Offset: 0xb4
	// Line 433, Address: 0x18885c, Func Offset: 0xbc
	// Line 434, Address: 0x188860, Func Offset: 0xc0
	// Func End, Address: 0x18887c, Func Offset: 0xdc
}

// dummyEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x188880
uint32 dummyEffectCB()
{
	// Line 385, Address: 0x188880, Func Offset: 0
	// Func End, Address: 0x188888, Func Offset: 0x8
}

// TextureRW3_Unload__FPvUi
// Start address: 0x188890
void TextureRW3_Unload(void* userdata)
{
	RwTexture* tex;
	// Line 332, Address: 0x188890, Func Offset: 0
	// Line 342, Address: 0x188894, Func Offset: 0x4
	// Line 344, Address: 0x18889c, Func Offset: 0xc
	// Line 345, Address: 0x1888a0, Func Offset: 0x10
	// Line 350, Address: 0x1888a8, Func Offset: 0x18
	// Func End, Address: 0x1888b4, Func Offset: 0x24
}

// RWTX_Read__FPvUiPvUiPUi
// Start address: 0x1888c0
void* RWTX_Read(void* indata, uint32 insize, uint32* outsize)
{
	RwTexture* tex;
	RwStream* stream;
	RwMemory rwmem;
	RwTexDictionary* txd;
	// Line 258, Address: 0x1888c0, Func Offset: 0
	// Line 269, Address: 0x1888e0, Func Offset: 0x20
	// Line 272, Address: 0x1888e8, Func Offset: 0x28
	// Line 274, Address: 0x1888ec, Func Offset: 0x2c
	// Line 275, Address: 0x188904, Func Offset: 0x44
	// Line 282, Address: 0x18890c, Func Offset: 0x4c
	// Line 283, Address: 0x188924, Func Offset: 0x64
	// Line 287, Address: 0x188930, Func Offset: 0x70
	// Line 290, Address: 0x188938, Func Offset: 0x78
	// Line 291, Address: 0x188944, Func Offset: 0x84
	// Line 292, Address: 0x188950, Func Offset: 0x90
	// Line 301, Address: 0x188958, Func Offset: 0x98
	// Line 302, Address: 0x188968, Func Offset: 0xa8
	// Line 303, Address: 0x188974, Func Offset: 0xb4
	// Line 307, Address: 0x18897c, Func Offset: 0xbc
	// Line 310, Address: 0x188984, Func Offset: 0xc4
	// Line 311, Address: 0x18898c, Func Offset: 0xcc
	// Line 315, Address: 0x188994, Func Offset: 0xd4
	// Line 319, Address: 0x188998, Func Offset: 0xd8
	// Line 322, Address: 0x18899c, Func Offset: 0xdc
	// Line 315, Address: 0x1889a0, Func Offset: 0xe0
	// Line 319, Address: 0x1889ac, Func Offset: 0xec
	// Line 322, Address: 0x1889b4, Func Offset: 0xf4
	// Line 323, Address: 0x1889b8, Func Offset: 0xf8
	// Line 326, Address: 0x1889c0, Func Offset: 0x100
	// Line 328, Address: 0x1889c4, Func Offset: 0x104
	// Line 329, Address: 0x1889c8, Func Offset: 0x108
	// Func End, Address: 0x1889e4, Func Offset: 0x124
}

// TexCB__FP9RwTexturePv
// Start address: 0x1889f0
RwTexture* TexCB(RwTexture* texture, void* data)
{
	RwTexture** texFound;
	// Line 242, Address: 0x1889f0, Func Offset: 0
	// Line 243, Address: 0x1889fc, Func Offset: 0xc
	// Line 246, Address: 0x188a00, Func Offset: 0x10
	// Func End, Address: 0x188a08, Func Offset: 0x18
}

// BSP_Unload__FPvUi
// Start address: 0x188a10
void BSP_Unload()
{
	// Line 234, Address: 0x188a10, Func Offset: 0
	// Func End, Address: 0x188a20, Func Offset: 0x10
}

// BSP_Read__FPvUiPvUiPUi
// Start address: 0x188a20
void* BSP_Read(uint32 assetid, void* indata, uint32 insize, uint32* outsize)
{
	RpWorld* bsp;
	RwChunkHeaderInfo chunkHeaderInfo;
	RwMemory rwmem;
	RwStream* stream;
	// Line 154, Address: 0x188a20, Func Offset: 0
	// Line 169, Address: 0x188a38, Func Offset: 0x18
	// Line 177, Address: 0x188a48, Func Offset: 0x28
	// Line 169, Address: 0x188a50, Func Offset: 0x30
	// Line 173, Address: 0x188a54, Func Offset: 0x34
	// Line 174, Address: 0x188a58, Func Offset: 0x38
	// Line 177, Address: 0x188a5c, Func Offset: 0x3c
	// Line 178, Address: 0x188a68, Func Offset: 0x48
	// Line 179, Address: 0x188a70, Func Offset: 0x50
	// Line 183, Address: 0x188a7c, Func Offset: 0x5c
	// Line 189, Address: 0x188a98, Func Offset: 0x78
	// Line 193, Address: 0x188aa4, Func Offset: 0x84
	// Line 194, Address: 0x188aa8, Func Offset: 0x88
	// Line 198, Address: 0x188ab0, Func Offset: 0x90
	// Line 199, Address: 0x188abc, Func Offset: 0x9c
	// Line 201, Address: 0x188ac4, Func Offset: 0xa4
	// Line 204, Address: 0x188ad0, Func Offset: 0xb0
	// Line 213, Address: 0x188adc, Func Offset: 0xbc
	// Line 215, Address: 0x188b04, Func Offset: 0xe4
	// Line 221, Address: 0x188b08, Func Offset: 0xe8
	// Line 215, Address: 0x188b0c, Func Offset: 0xec
	// Line 222, Address: 0x188b10, Func Offset: 0xf0
	// Func End, Address: 0x188b2c, Func Offset: 0x10c
}

// Model_Unload__FPvUi
// Start address: 0x188b30
void Model_Unload(void* userdata)
{
	// Line 139, Address: 0x188b30, Func Offset: 0
	// Line 144, Address: 0x188b34, Func Offset: 0x4
	// Line 145, Address: 0x188b3c, Func Offset: 0xc
	// Line 146, Address: 0x188b44, Func Offset: 0x14
	// Func End, Address: 0x188b50, Func Offset: 0x20
}

// Model_Read__FPvUiPvUiPUi
// Start address: 0x188b50
void* Model_Read(void* indata, uint32 insize, uint32* outsize)
{
	RpAtomic* model;
	// Line 121, Address: 0x188b50, Func Offset: 0
	// Line 131, Address: 0x188b60, Func Offset: 0x10
	// Line 132, Address: 0x188b6c, Func Offset: 0x1c
	// Line 134, Address: 0x188b74, Func Offset: 0x24
	// Func End, Address: 0x188b84, Func Offset: 0x34
}

// zAssetShutdown__Fv
// Start address: 0x188b90
void zAssetShutdown()
{
	// Line 109, Address: 0x188b90, Func Offset: 0
	// Func End, Address: 0x188b98, Func Offset: 0x8
}

// zAssetStartup__Fv
// Start address: 0x188ba0
void zAssetStartup()
{
	// Line 105, Address: 0x188ba0, Func Offset: 0
	// Func End, Address: 0x188bac, Func Offset: 0xc
}

