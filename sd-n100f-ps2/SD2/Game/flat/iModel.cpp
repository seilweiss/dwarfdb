typedef struct RxPipeline;
typedef struct RpAtomic;
typedef struct RpHAnimHierarchy;
typedef struct xCutsceneInfo;
typedef struct xMemPool;
typedef struct xAnimEffect;
typedef struct RpMorphTarget;
typedef struct RwMatrixTag;
typedef struct RxPipelineNode;
typedef struct _xCollis;
typedef struct zJumpParam;
typedef struct RwFreeList;
typedef struct RpPolygon;
typedef struct xCutsceneData;
typedef struct _xSphere;
typedef struct xAnimActiveEffect;
typedef struct zGlobals;
typedef struct RwV3d;
typedef struct xModelInstance;
typedef struct xBase;
typedef struct RpHAnimNodeInfo;
typedef struct RwRaster;
typedef enum RwTextureFilterMode;
typedef struct _xEnt;
typedef struct RpVertexNormal;
typedef struct RwCamera;
typedef struct RxPipelineCluster;
typedef struct rxHeapBlockHeader;
typedef struct zAssetPickupTable;
typedef struct _xVec3;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct RwObject;
typedef struct _zEnt;
typedef struct _tagxPad;
typedef struct zPortalAsset;
typedef struct RwTexCoords;
typedef struct p2LinkAsset;
typedef enum RxClusterValid;
typedef struct RwStreamUnion;
typedef struct xAnimSingle;
typedef struct xCutsceneBreak;
typedef struct xModelPool;
typedef struct _xMat4x3;
typedef struct xAnimTable;
typedef struct xCutsceneTime;
typedef struct RwRGBA;
typedef struct RwFreeBlock;
typedef struct RpHAnimAnimation;
typedef struct rxHeapFreeBlock;
typedef enum RwStreamAccessType;
typedef struct xSurface;
typedef struct RpHAnimAtomicGlobalVars;
typedef struct RwResEntry;
typedef struct RpClump;
typedef struct RwFrame;
typedef struct _tagxCamFollow;
typedef struct RwStream;
typedef struct RpGeometry;
typedef struct zScene;
typedef struct xAnimPlay;
typedef struct RpSkin;
typedef struct RwPlane;
typedef struct xFFX;
typedef enum _tagRumbleType;
typedef enum RpWorldRenderOrder;
typedef struct RwTexDictionary;
typedef struct zPlayerStatic;
typedef struct _zCutsceneMgr;
typedef struct xAnimTransition;
typedef struct RwLinkList;
typedef struct _xQuat;
typedef struct xQCData;
typedef struct RxNodeDefinition;
typedef struct xAnimState;
typedef struct RxPacket;
typedef struct _zPortal;
typedef struct RxClusterDefinition;
typedef struct RwFrustumPlane;
typedef struct RpHAnimInterpolatorInfo;
typedef struct zCutsceneZbuffer;
typedef struct _xEntShadow;
typedef struct _tagxCamPathAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct RwBBox;
typedef struct _xBBox;
typedef struct rxReq;
typedef struct _xVec4;
typedef enum RwFogType;
typedef struct iModelTag;
typedef struct RpCollSector;
typedef struct _zPlatform;
typedef struct RwStreamMemory;
typedef struct RpWorldSector;
typedef struct RpMeshHeader;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct _xEntFrame;
typedef struct RwTexture;
typedef struct _xEnv;
typedef enum RxClusterForcePresent;
typedef struct RpWorld;
typedef struct _xRot;
typedef struct _tagxCam;
typedef struct iEnv;
typedef struct _tagxCamShoulder;
typedef struct p2EntHangableAsset;
typedef struct tag_xFile;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct sceCdlFILE;
typedef struct zCutsceneZbufferHack;
typedef struct RxIoSpec;
typedef struct _tagxCamFollowAsset;
typedef struct RpSector;
typedef struct tag_iFile;
typedef struct RwStreamFile;
typedef struct xCamAsset;
typedef struct RpMaterialList;
typedef struct RwMemory;
typedef struct RxNodeMethods;
typedef struct RpMaterial;
typedef struct RwLLLink;
typedef enum _tagCamType;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _tagxRumble;
typedef struct RwSurfaceProperties;
typedef struct iShadowCache;
typedef struct iFogParams;
typedef struct zPlayerGlobals;
typedef struct RxHeap;
typedef struct RpLight;
typedef struct p2BaseAsset;
typedef struct p2EntAsset;
typedef struct _tagxCamStatic;
typedef struct RxCluster;
typedef struct zCutsceneMgrAsset;
typedef struct RpTriangle;
typedef struct xCutscene;
typedef struct xAnimFile;
typedef struct _xScene;
typedef enum RxClusterValidityReq;
typedef struct xAnimTransitionList;
typedef struct RwSphere;
typedef enum _tagPadState;
typedef struct _tagxCamFrame;
typedef struct RwMatrixWeights;
typedef struct _xBound;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct _tagiPad;
typedef struct _xCylinder;
typedef enum RwTextureAddressMode;
typedef struct _tagxCamStaticFollow;
typedef struct _zEntHangable;
typedef struct zShaggy1Globals;
typedef struct _iCollis;
typedef struct RxPipelineNodeParam;
typedef struct _xBox;
typedef struct _tagPadAnalog;
typedef struct _xEntCollis;
typedef enum RwCameraProjection;
typedef struct RwObjectHasFrame;
typedef struct zCheckPoint;
typedef struct RwStreamCustom;
typedef struct zGlobalGameStats;
typedef struct _tagxCamPath;
typedef struct _tagp2CamStaticAsset;
typedef struct RpInterpolator;
typedef struct RwRGBAReal;
typedef enum RwStreamType;
typedef struct RwV2d;
typedef struct _xEntDrive;

typedef void(*type_3)(void*, void*, void*);
typedef xBase*(*type_4)(uint32);
typedef int32(*type_5)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_7)(xBase*);
typedef void(*type_9)(_xEnt*);
typedef uint32(*type_11)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_12)(_xEnt*, _xVec3*);
typedef int8*(*type_13)(uint32);
typedef void(*type_18)(void*, void*);
typedef uint32(*type_20)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_21)(RwCamera*);
typedef int32(*type_23)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpHAnimAnimation*(*type_24)(RwStream*, RpHAnimAnimation*);
typedef int32(*type_25)(RxNodeDefinition*);
typedef RwCamera*(*type_27)(RwCamera*);
typedef void(*type_28)(RxNodeDefinition*);
typedef void(*type_30)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef RpClump*(*type_32)(RpClump*, void*);
typedef uint32(*type_33)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_34)(RxPipelineNode*);
typedef void(*type_35)(RwResEntry*);
typedef int32(*type_36)(RpHAnimAnimation*, RwStream*);
typedef void(*type_40)(RxPipelineNode*);
typedef uint32(*type_41)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_44)(RpHAnimAnimation*);
typedef RpWorldSector*(*type_48)(RpWorldSector*);
typedef void(*type_53)(xMemPool*, void*);
typedef void(*type_56)(RwMatrixTag*, void*);
typedef void(*type_57)(int32);
typedef void(*type_60)(void*, void*, void*, float32);
typedef RpAtomic*(*type_62)(RpAtomic*);
typedef void(*type_70)(void*, void*, void*, float32);
typedef int32(*type_72)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_87)(void*);
typedef RpHAnimHierarchy*(*type_89)(RpHAnimHierarchy*, void*);
typedef uint32(*type_92)(void*, void*, uint32);
typedef void(*type_95)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_98)(void*, void*, uint32);
typedef void(*type_99)(_xEnt*, _xScene*, float32);
typedef RpAtomic*(*type_103)(RpAtomic*, void*);
typedef void(*type_104)(_xEnt*);
typedef int32(*type_106)(void*, uint32);
typedef RpAtomic*(*type_109)(RpAtomic*, void*);
typedef void(*type_110)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_111)(RwObjectHasFrame*);

typedef float32 type_0[15];
typedef uint32 type_1[2];
typedef uint32 type_2[15];
typedef uint8 type_6[3];
typedef uint8 type_8[22];
typedef iModelTag type_10[4];
typedef uint8 type_14[22];
typedef RwTexCoords* type_15[8];
typedef RxCluster type_16[1];
typedef uint8 type_17[3];
typedef int8 type_19[16];
typedef uint32 type_22[4];
typedef _xCollis type_26[18];
typedef int8 type_29[128];
typedef int8 type_31[128][6];
typedef float32 type_37[4];
typedef float32 type_38[4];
typedef uint8 type_39[8];
typedef float32 type_42[4];
typedef uint8 type_43[8];
typedef float32 type_45[4];
typedef int8 type_46[32];
typedef uint8 type_47[8];
typedef float32 type_49[4];
typedef uint8 type_50[8];
typedef float32 type_51[4];
typedef float32 type_52[3];
typedef float32 type_54[3];
typedef uint8 type_55[3];
typedef float32 type_58[2];
typedef zGlobalGameStats type_59[30];
typedef int8 type_61[32];
typedef int8 type_63[16];
typedef int8 type_64[32];
typedef zGlobalGameStats type_65[13];
typedef zCutsceneZbuffer type_66[4];
typedef _zEnt* type_67[10];
typedef float32 type_68[4];
typedef uint32 type_69[1];
typedef uint8 type_71[8];
typedef zGlobalGameStats type_73[4];
typedef RwMatrixTag type_74[32];
typedef int32 type_75[2];
typedef int8 type_76[128];
typedef int32 type_77[2];
typedef uint32 type_78[2];
typedef uint32 type_79[2];
typedef uint32 type_80[43];
typedef uint32 type_81[2];
typedef RpAtomic* type_82[256];
typedef RpLight* type_83[2];
typedef xBase* type_84[43];
typedef _xVec3 type_85[4];
typedef RwFrame* type_86[2];
typedef uint16 type_88[3];
typedef uint16 type_90[3];
typedef uint8 type_91[3];
typedef RwFrustumPlane type_93[6];
typedef uint32 type_94[2];
typedef RwV3d type_96[8];
typedef _xVec4 type_97[8];
typedef float32 type_100[4];
typedef float32 type_101[4];
typedef int8 type_102[16];
typedef uint32 type_105[4096];
typedef int8 type_107[16];
typedef uint8 type_108[2];
typedef RwTexCoords* type_112[8];
typedef _xVec3 type_113[2];
typedef _xQuat type_114[2];
typedef float32 type_115[15];

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

struct RpHAnimHierarchy
{
	int32 flags;
	int32 numNodes;
	RpHAnimAnimation* pCurrentAnim;
	float32 currentTime;
	void* pNextFrame;
	RpHAnimHierarchy*(*pAnimCallBack)(RpHAnimHierarchy*, void*);
	void* pAnimCallBackData;
	float32 animCallBackTime;
	RpHAnimHierarchy*(*pAnimLoopCallBack)(RpHAnimHierarchy*, void*);
	void* pAnimLoopCallBackData;
	RwMatrixTag* pMatrixArray;
	void* pMatrixArrayUnaligned;
	RpHAnimNodeInfo* pNodeInfo;
	RwFrame* parentFrame;
	int32 maxKeyFrameSize;
	int32 currentKeyFrameSize;
	void(*keyFrameToMatrixCB)(RwMatrixTag*, void*);
	void(*keyFrameBlendCB)(void*, void*, void*, float32);
	void(*keyFrameInterpolateCB)(void*, void*, void*, float32);
	void(*keyFrameAddCB)(void*, void*, void*);
	RpHAnimHierarchy* parentHierarchy;
	int32 offsetInParent;
	int32 rootParentOffset;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RwFreeList
{
	void** freeListStack;
	void** freeListStackTop;
	RwFreeBlock* firstBlock;
	int32 blockSize;
	int32 entrySize;
	int32 alignmentMinusOne;
	int32 entriesPerBlock;
	int32 entriesAllocated;
	RwLLLink lFreeList;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RpHAnimNodeInfo
{
	int32 nodeID;
	int32 nodeIndex;
	int32 flags;
	RwFrame* pFrame;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwFreeBlock
{
	RwFreeBlock* nextBlock;
};

struct RpHAnimAnimation
{
	RpHAnimInterpolatorInfo* interpInfo;
	int32 numFrames;
	int32 flags;
	float32 duration;
	void* pFrames;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct RpHAnimAtomicGlobalVars
{
	int32 engineOffset;
	RwFreeList* HAnimFreeList;
	RwFreeList* HAnimAnimationFreeList;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int32 position;
	RwStreamUnion Type;
	int32 rwOwned;
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

struct RpSkin
{
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct xFFX
{
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct RwLinkList
{
	RwLLLink link;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RpHAnimInterpolatorInfo
{
	int32 typeID;
	int32 keyFrameSize;
	void(*keyFrameToMatrixCB)(RwMatrixTag*, void*);
	void(*keyFrameBlendCB)(void*, void*, void*, float32);
	void(*keyFrameInterpolateCB)(void*, void*, void*, float32);
	void(*keyFrameAddCB)(void*, void*, void*);
	void(*keyFrameMulRecipCB)(void*, void*);
	RpHAnimAnimation*(*keyFrameStreamReadCB)(RwStream*, RpHAnimAnimation*);
	int32(*keyFrameStreamWriteCB)(RpHAnimAnimation*, RwStream*);
	int32(*keyFrameStreamGetSizeCB)(RpHAnimAnimation*);
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct rxReq
{
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _zPlatform
{
};

struct RwStreamMemory
{
	uint32 position;
	uint32 nSize;
	uint8* memBlock;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RpSector
{
	int32 type;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RwStreamFile
{
	union
	{
		void* fpFile;
		void* constfpFile;
	};
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwMemory
{
	uint8* start;
	uint32 length;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct _tagxCamStatic
{
	uint32 unused;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RwMatrixWeights
{
	float32 w0;
	float32 w1;
	float32 w2;
	float32 w3;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagiPad
{
	int32 port;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

struct _iCollis
{
	int32 unknown;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwStreamCustom
{
	int32(*sfnclose)(void*);
	uint32(*sfnread)(void*, void*, uint32);
	int32(*sfnwrite)(void*, void*, uint32);
	int32(*sfnskip)(void*, uint32);
	void* data;
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

uint32 gLastAtomicCount;
RpAtomic* gLastAtomicList[256];
uint8* giAnimScratch;
uint32 ourGlobals[4096];
zGlobals globals;
RpHAnimAtomicGlobalVars RpHAnimAtomicGlobals;
RpAtomic*(*NextAtomicCallback)(RpAtomic*, void*);
RpAtomic*(*FindAtomicCallback)(RpAtomic*, void*);

void iModelTagEval(RpAtomic* model, iModelTag* tag, RwMatrixTag* mat, _xVec3* dest);
uint32 iModelTagSetup(iModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z);
uint32 iModelTagIndex(iModelTag* tag, RpAtomic* model, int32 v);
uint32 iModelTagInternal(iModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV);
uint32 iModelVertEval(RpAtomic* model, uint32 index, uint32 count, RwMatrixTag* mat, _xVec3* vert, _xVec3* dest);
uint32 iModelVertCount(RpAtomic* model);
int32 iModelCull(RpAtomic* model, RwMatrixTag* mat);
void iModelRender(RpAtomic* model, RwMatrixTag* mat);
void iModelAnimMatrices(RpAtomic* model, _xQuat* quat, _xVec3* tran, RwMatrixTag* mat);
void iModelQuatToMat(_xQuat* quat, _xVec3* tran, RwMatrixTag* mat);
uint32 iModelNumBones(RpAtomic* model);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data);
void iModelUnload(RpAtomic* userdata);
RpAtomic* iModelFileNew(void* buffer, uint32 size);
RpAtomic* FindAtomicCallback(RpAtomic* atomic);
void iModelInit();

// iModelTagEval__FP8RpAtomicP9iModelTagP11RwMatrixTagP6_xVec3
// Start address: 0x121460
void iModelTagEval(RpAtomic* model, iModelTag* tag, RwMatrixTag* mat, _xVec3* dest)
{
	// Line 1252, Address: 0x121460, Func Offset: 0
	// Line 1264, Address: 0x121494, Func Offset: 0x34
	// Line 1267, Address: 0x1214b0, Func Offset: 0x50
	// Line 1270, Address: 0x1216fc, Func Offset: 0x29c
	// Line 1276, Address: 0x121704, Func Offset: 0x2a4
	// Line 1278, Address: 0x121714, Func Offset: 0x2b4
	// Func End, Address: 0x121744, Func Offset: 0x2e4
}

// iModelTagSetup__FP9iModelTagP8RpAtomicfff
// Start address: 0x121750
uint32 iModelTagSetup(iModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z)
{
	// Line 1245, Address: 0x121750, Func Offset: 0
	// Func End, Address: 0x121758, Func Offset: 0x8
}

// iModelTagIndex__FP9iModelTagP8RpAtomici
// Start address: 0x121760
uint32 iModelTagIndex(iModelTag* tag, RpAtomic* model, int32 v)
{
	// Line 1232, Address: 0x121760, Func Offset: 0
	// Func End, Address: 0x121774, Func Offset: 0x14
}

// iModelTagInternal__FP9iModelTagP8RpAtomicfffi
// Start address: 0x121780
uint32 iModelTagInternal(iModelTag* tag, RpAtomic* model, float32 x, float32 y, float32 z, int32 closeV)
{
	RwMatrixWeights* wt;
	RpSkin* skin;
	float32 closeDistSqr;
	float32 distSqr;
	int32 numV;
	int32 v;
	RwV3d* vert;
	RpGeometry* geom;
	// Line 1154, Address: 0x121780, Func Offset: 0
	// Line 1155, Address: 0x121794, Func Offset: 0x14
	// Line 1158, Address: 0x121798, Func Offset: 0x18
	// Line 1156, Address: 0x1217ac, Func Offset: 0x2c
	// Line 1160, Address: 0x1217b4, Func Offset: 0x34
	// Line 1162, Address: 0x1217c8, Func Offset: 0x48
	// Line 1161, Address: 0x1217cc, Func Offset: 0x4c
	// Line 1162, Address: 0x1217d0, Func Offset: 0x50
	// Line 1163, Address: 0x1217d8, Func Offset: 0x58
	// Line 1167, Address: 0x121800, Func Offset: 0x80
	// Line 1169, Address: 0x121810, Func Offset: 0x90
	// Line 1168, Address: 0x121814, Func Offset: 0x94
	// Line 1171, Address: 0x121818, Func Offset: 0x98
	// Line 1173, Address: 0x121828, Func Offset: 0xa8
	// Line 1174, Address: 0x121830, Func Offset: 0xb0
	// Line 1175, Address: 0x121834, Func Offset: 0xb4
	// Line 1178, Address: 0x121838, Func Offset: 0xb8
	// Line 1179, Address: 0x121840, Func Offset: 0xc0
	// Line 1180, Address: 0x121848, Func Offset: 0xc8
	// Line 1181, Address: 0x12185c, Func Offset: 0xdc
	// Line 1182, Address: 0x121864, Func Offset: 0xe4
	// Line 1186, Address: 0x12186c, Func Offset: 0xec
	// Line 1202, Address: 0x121874, Func Offset: 0xf4
	// Line 1203, Address: 0x121880, Func Offset: 0x100
	// Line 1204, Address: 0x121888, Func Offset: 0x108
	// Line 1205, Address: 0x121890, Func Offset: 0x110
	// Line 1204, Address: 0x121894, Func Offset: 0x114
	// Line 1205, Address: 0x121898, Func Offset: 0x118
	// Line 1206, Address: 0x1218b0, Func Offset: 0x130
	// Line 1207, Address: 0x1218b8, Func Offset: 0x138
	// Line 1208, Address: 0x1218c0, Func Offset: 0x140
	// Line 1209, Address: 0x1218c8, Func Offset: 0x148
	// Line 1210, Address: 0x1218cc, Func Offset: 0x14c
	// Line 1215, Address: 0x1218d4, Func Offset: 0x154
	// Line 1216, Address: 0x1218d8, Func Offset: 0x158
	// Line 1217, Address: 0x1218dc, Func Offset: 0x15c
	// Line 1218, Address: 0x1218e0, Func Offset: 0x160
	// Line 1219, Address: 0x1218e4, Func Offset: 0x164
	// Line 1223, Address: 0x1218e8, Func Offset: 0x168
	// Line 1224, Address: 0x1218ec, Func Offset: 0x16c
	// Func End, Address: 0x121904, Func Offset: 0x184
}

// iModelVertEval__FP8RpAtomicUiUiP11RwMatrixTagP6_xVec3P6_xVec3
// Start address: 0x121910
uint32 iModelVertEval(RpAtomic* model, uint32 index, uint32 count, RwMatrixTag* mat, _xVec3* vert, _xVec3* dest)
{
	RpSkin* skin;
	uint32 numV;
	RpGeometry* geom;
	// Line 1100, Address: 0x121910, Func Offset: 0
	// Line 1107, Address: 0x121948, Func Offset: 0x38
	// Line 1101, Address: 0x12194c, Func Offset: 0x3c
	// Line 1107, Address: 0x121954, Func Offset: 0x44
	// Line 1109, Address: 0x12195c, Func Offset: 0x4c
	// Line 1112, Address: 0x121960, Func Offset: 0x50
	// Line 1113, Address: 0x121984, Func Offset: 0x74
	// Line 1116, Address: 0x12199c, Func Offset: 0x8c
	// Line 1117, Address: 0x1219a0, Func Offset: 0x90
	// Line 1116, Address: 0x1219ac, Func Offset: 0x9c
	// Line 1117, Address: 0x1219b4, Func Offset: 0xa4
	// Line 1133, Address: 0x1219c0, Func Offset: 0xb0
	// Line 1134, Address: 0x1219cc, Func Offset: 0xbc
	// Line 1137, Address: 0x1219d4, Func Offset: 0xc4
	// Line 1141, Address: 0x121c34, Func Offset: 0x324
	// Line 1147, Address: 0x121c3c, Func Offset: 0x32c
	// Line 1150, Address: 0x121c50, Func Offset: 0x340
	// Line 1151, Address: 0x121c58, Func Offset: 0x348
	// Func End, Address: 0x121c88, Func Offset: 0x378
}

// iModelVertCount__FP8RpAtomic
// Start address: 0x121c90
uint32 iModelVertCount(RpAtomic* model)
{
	// Line 873, Address: 0x121c90, Func Offset: 0
	// Line 874, Address: 0x121c94, Func Offset: 0x4
	// Func End, Address: 0x121c9c, Func Offset: 0xc
}

// iModelCull__FP8RpAtomicP11RwMatrixTag
// Start address: 0x121ca0
int32 iModelCull(RpAtomic* model, RwMatrixTag* mat)
{
	// Line 759, Address: 0x121ca0, Func Offset: 0
	// Line 760, Address: 0x121cb0, Func Offset: 0x10
	// Line 761, Address: 0x121cb4, Func Offset: 0x14
	// Line 762, Address: 0x121cb8, Func Offset: 0x18
	// Line 763, Address: 0x121cbc, Func Offset: 0x1c
	// Line 764, Address: 0x121cc0, Func Offset: 0x20
	// Line 765, Address: 0x121cc4, Func Offset: 0x24
	// Line 766, Address: 0x121cc8, Func Offset: 0x28
	// Line 767, Address: 0x121ccc, Func Offset: 0x2c
	// Line 768, Address: 0x121cd0, Func Offset: 0x30
	// Line 769, Address: 0x121cd4, Func Offset: 0x34
	// Line 770, Address: 0x121cd8, Func Offset: 0x38
	// Line 771, Address: 0x121cdc, Func Offset: 0x3c
	// Line 772, Address: 0x121ce0, Func Offset: 0x40
	// Line 773, Address: 0x121ce4, Func Offset: 0x44
	// Line 774, Address: 0x121ce8, Func Offset: 0x48
	// Line 775, Address: 0x121cec, Func Offset: 0x4c
	// Line 776, Address: 0x121cf0, Func Offset: 0x50
	// Line 777, Address: 0x121cf4, Func Offset: 0x54
	// Line 778, Address: 0x121cf8, Func Offset: 0x58
	// Line 779, Address: 0x121cfc, Func Offset: 0x5c
	// Line 780, Address: 0x121d00, Func Offset: 0x60
	// Line 781, Address: 0x121d04, Func Offset: 0x64
	// Line 782, Address: 0x121d08, Func Offset: 0x68
	// Line 783, Address: 0x121d0c, Func Offset: 0x6c
	// Line 784, Address: 0x121d10, Func Offset: 0x70
	// Line 785, Address: 0x121d14, Func Offset: 0x74
	// Line 786, Address: 0x121d18, Func Offset: 0x78
	// Line 787, Address: 0x121d1c, Func Offset: 0x7c
	// Line 788, Address: 0x121d20, Func Offset: 0x80
	// Line 789, Address: 0x121d24, Func Offset: 0x84
	// Line 790, Address: 0x121d28, Func Offset: 0x88
	// Line 791, Address: 0x121d2c, Func Offset: 0x8c
	// Line 792, Address: 0x121d30, Func Offset: 0x90
	// Line 793, Address: 0x121d34, Func Offset: 0x94
	// Line 794, Address: 0x121d38, Func Offset: 0x98
	// Line 795, Address: 0x121d3c, Func Offset: 0x9c
	// Line 796, Address: 0x121d40, Func Offset: 0xa0
	// Line 797, Address: 0x121d44, Func Offset: 0xa4
	// Line 798, Address: 0x121d48, Func Offset: 0xa8
	// Line 799, Address: 0x121d4c, Func Offset: 0xac
	// Line 800, Address: 0x121d50, Func Offset: 0xb0
	// Line 801, Address: 0x121d54, Func Offset: 0xb4
	// Line 802, Address: 0x121d58, Func Offset: 0xb8
	// Line 803, Address: 0x121d5c, Func Offset: 0xbc
	// Line 804, Address: 0x121d60, Func Offset: 0xc0
	// Line 805, Address: 0x121d64, Func Offset: 0xc4
	// Line 807, Address: 0x121d6c, Func Offset: 0xcc
	// Line 808, Address: 0x121d70, Func Offset: 0xd0
	// Line 809, Address: 0x121d74, Func Offset: 0xd4
	// Line 810, Address: 0x121d78, Func Offset: 0xd8
	// Line 811, Address: 0x121d7c, Func Offset: 0xdc
	// Line 812, Address: 0x121d80, Func Offset: 0xe0
	// Line 817, Address: 0x121d88, Func Offset: 0xe8
	// Line 819, Address: 0x121d90, Func Offset: 0xf0
	// Line 820, Address: 0x121d94, Func Offset: 0xf4
	// Func End, Address: 0x121d9c, Func Offset: 0xfc
}

// iModelRender__FP8RpAtomicP11RwMatrixTag
// Start address: 0x121da0
void iModelRender(RpAtomic* model, RwMatrixTag* mat)
{
	RwFrame* frame;
	RwMatrixTag* pAnimOldMatrix;
	// Line 691, Address: 0x121da0, Func Offset: 0
	// Line 692, Address: 0x121dbc, Func Offset: 0x1c
	// Line 696, Address: 0x121dec, Func Offset: 0x4c
	// Line 697, Address: 0x121df4, Func Offset: 0x54
	// Line 698, Address: 0x121df8, Func Offset: 0x58
	// Line 704, Address: 0x121dfc, Func Offset: 0x5c
	// Line 708, Address: 0x121e08, Func Offset: 0x68
	// Line 716, Address: 0x121e0c, Func Offset: 0x6c
	// Line 726, Address: 0x121e8c, Func Offset: 0xec
	// Line 735, Address: 0x121e98, Func Offset: 0xf8
	// Line 736, Address: 0x121ea0, Func Offset: 0x100
	// Line 738, Address: 0x121ea4, Func Offset: 0x104
	// Func End, Address: 0x121ec4, Func Offset: 0x124
}

// iModelAnimMatrices__FP8RpAtomicP6_xQuatP6_xVec3P11RwMatrixTag
// Start address: 0x121ed0
void iModelAnimMatrices(RpAtomic* model, _xQuat* quat, _xVec3* tran, RwMatrixTag* mat)
{
	RwMatrixTag* pMatrixArray;
	int32 numFrames;
	int32 i;
	int32 pCurrentFrameFlags;
	RpHAnimNodeInfo* pCurrentFrame;
	RwMatrixTag* pMatrixStackTop;
	RwMatrixTag matrixStack[32];
	RpHAnimHierarchy* pHierarchy;
	// Line 497, Address: 0x121ed0, Func Offset: 0
	// Line 499, Address: 0x121ef8, Func Offset: 0x28
	// Line 513, Address: 0x121f00, Func Offset: 0x30
	// Line 514, Address: 0x121f04, Func Offset: 0x34
	// Line 515, Address: 0x121f08, Func Offset: 0x38
	// Line 516, Address: 0x121f0c, Func Offset: 0x3c
	// Line 517, Address: 0x121f10, Func Offset: 0x40
	// Line 518, Address: 0x121f14, Func Offset: 0x44
	// Line 519, Address: 0x121f18, Func Offset: 0x48
	// Line 520, Address: 0x121f1c, Func Offset: 0x4c
	// Line 521, Address: 0x121f20, Func Offset: 0x50
	// Line 522, Address: 0x121f24, Func Offset: 0x54
	// Line 523, Address: 0x121f28, Func Offset: 0x58
	// Line 539, Address: 0x121f2c, Func Offset: 0x5c
	// Line 538, Address: 0x121f30, Func Offset: 0x60
	// Line 536, Address: 0x121f34, Func Offset: 0x64
	// Line 540, Address: 0x121f38, Func Offset: 0x68
	// Line 545, Address: 0x121f3c, Func Offset: 0x6c
	// Line 548, Address: 0x121f44, Func Offset: 0x74
	// Line 552, Address: 0x121f4c, Func Offset: 0x7c
	// Line 553, Address: 0x121f50, Func Offset: 0x80
	// Line 554, Address: 0x121f54, Func Offset: 0x84
	// Line 555, Address: 0x121f58, Func Offset: 0x88
	// Line 559, Address: 0x121f5c, Func Offset: 0x8c
	// Line 562, Address: 0x121f60, Func Offset: 0x90
	// Line 563, Address: 0x121fe0, Func Offset: 0x110
	// Line 564, Address: 0x122028, Func Offset: 0x158
	// Line 566, Address: 0x122034, Func Offset: 0x164
	// Line 569, Address: 0x122038, Func Offset: 0x168
	// Line 570, Address: 0x12203c, Func Offset: 0x16c
	// Line 571, Address: 0x122040, Func Offset: 0x170
	// Line 572, Address: 0x122044, Func Offset: 0x174
	// Line 576, Address: 0x122048, Func Offset: 0x178
	// Line 579, Address: 0x122050, Func Offset: 0x180
	// Line 580, Address: 0x122054, Func Offset: 0x184
	// Line 581, Address: 0x122058, Func Offset: 0x188
	// Line 582, Address: 0x12205c, Func Offset: 0x18c
	// Line 614, Address: 0x122060, Func Offset: 0x190
	// Line 611, Address: 0x122068, Func Offset: 0x198
	// Line 612, Address: 0x12206c, Func Offset: 0x19c
	// Line 613, Address: 0x122070, Func Offset: 0x1a0
	// Line 615, Address: 0x122074, Func Offset: 0x1a4
	// Line 616, Address: 0x122084, Func Offset: 0x1b4
	// Func End, Address: 0x12208c, Func Offset: 0x1bc
}

// iModelQuatToMat__FP6_xQuatP6_xVec3P11RwMatrixTag
// Start address: 0x122090
void iModelQuatToMat(_xQuat* quat, _xVec3* tran, RwMatrixTag* mat)
{
	// Line 303, Address: 0x122090, Func Offset: 0
	// Line 315, Address: 0x1220a4, Func Offset: 0x14
	// Line 316, Address: 0x1220b4, Func Offset: 0x24
	// Line 315, Address: 0x1220b8, Func Offset: 0x28
	// Line 316, Address: 0x1220bc, Func Offset: 0x2c
	// Line 317, Address: 0x1220c4, Func Offset: 0x34
	// Line 319, Address: 0x1220d0, Func Offset: 0x40
	// Line 320, Address: 0x1220d8, Func Offset: 0x48
	// Line 321, Address: 0x1220e0, Func Offset: 0x50
	// Line 322, Address: 0x1220e8, Func Offset: 0x58
	// Func End, Address: 0x122100, Func Offset: 0x70
}

// iModelNumBones__FP8RpAtomic
// Start address: 0x122100
uint32 iModelNumBones(RpAtomic* model)
{
	// Line 294, Address: 0x122100, Func Offset: 0
	// Line 296, Address: 0x122124, Func Offset: 0x24
	// Line 297, Address: 0x12212c, Func Offset: 0x2c
	// Line 299, Address: 0x122134, Func Offset: 0x34
	// Line 300, Address: 0x12213c, Func Offset: 0x3c
	// Func End, Address: 0x122144, Func Offset: 0x44
}

// iModelFile_RWMultiAtomic__FP8RpAtomic
// Start address: 0x122150
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model)
{
	RpAtomic* nextModel;
	RpClump* clump;
	// Line 283, Address: 0x122150, Func Offset: 0
	// Line 284, Address: 0x122154, Func Offset: 0x4
	// Line 286, Address: 0x122164, Func Offset: 0x14
	// Line 288, Address: 0x122168, Func Offset: 0x18
	// Line 287, Address: 0x122174, Func Offset: 0x24
	// Line 288, Address: 0x122178, Func Offset: 0x28
	// Line 289, Address: 0x122180, Func Offset: 0x30
	// Line 290, Address: 0x122188, Func Offset: 0x38
	// Func End, Address: 0x122194, Func Offset: 0x44
}

// NextAtomicCallback__FP8RpAtomicPv
// Start address: 0x1221a0
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
	RpAtomic** nextModel;
	// Line 271, Address: 0x1221a0, Func Offset: 0
	// Line 272, Address: 0x1221ac, Func Offset: 0xc
	// Line 273, Address: 0x1221b4, Func Offset: 0x14
	// Line 274, Address: 0x1221bc, Func Offset: 0x1c
	// Line 276, Address: 0x1221c0, Func Offset: 0x20
	// Line 277, Address: 0x1221c4, Func Offset: 0x24
	// Func End, Address: 0x1221cc, Func Offset: 0x2c
}

// iModelUnload__FP8RpAtomic
// Start address: 0x1221d0
void iModelUnload(RpAtomic* userdata)
{
	RwFrame* root;
	RwFrame* frame;
	RpClump* clump;
	// Line 234, Address: 0x1221d0, Func Offset: 0
	// Line 240, Address: 0x1221e4, Func Offset: 0x14
	// Line 245, Address: 0x1221e8, Func Offset: 0x18
	// Line 246, Address: 0x1221ec, Func Offset: 0x1c
	// Line 248, Address: 0x1221f4, Func Offset: 0x24
	// Line 249, Address: 0x1221fc, Func Offset: 0x2c
	// Line 250, Address: 0x122208, Func Offset: 0x38
	// Line 251, Address: 0x122214, Func Offset: 0x44
	// Line 255, Address: 0x122218, Func Offset: 0x48
	// Line 257, Address: 0x122228, Func Offset: 0x58
	// Func End, Address: 0x122240, Func Offset: 0x70
}

// iModelFileNew__FPvUi
// Start address: 0x122240
RpAtomic* iModelFileNew(void* buffer, uint32 size)
{
	RwMemory rwmem;
	// Line 218, Address: 0x122240, Func Offset: 0
	// Line 220, Address: 0x122250, Func Offset: 0x10
	// Line 221, Address: 0x122254, Func Offset: 0x14
	// Line 222, Address: 0x122258, Func Offset: 0x18
	// Line 223, Address: 0x1222f0, Func Offset: 0xb0
	// Func End, Address: 0x122304, Func Offset: 0xc4
}

// FindAtomicCallback__FP8RpAtomicPv
// Start address: 0x122310
RpAtomic* FindAtomicCallback(RpAtomic* atomic)
{
	RpSkin* pSkin;
	RpHAnimHierarchy* pHier;
	// Line 92, Address: 0x122310, Func Offset: 0
	// Line 94, Address: 0x122328, Func Offset: 0x18
	// Line 100, Address: 0x122354, Func Offset: 0x44
	// Line 103, Address: 0x122360, Func Offset: 0x50
	// Line 104, Address: 0x122370, Func Offset: 0x60
	// Line 114, Address: 0x122390, Func Offset: 0x80
	// Line 104, Address: 0x122394, Func Offset: 0x84
	// Line 114, Address: 0x122398, Func Offset: 0x88
	// Line 116, Address: 0x1223a0, Func Offset: 0x90
	// Line 119, Address: 0x1223b0, Func Offset: 0xa0
	// Line 121, Address: 0x1223b8, Func Offset: 0xa8
	// Line 156, Address: 0x1223c0, Func Offset: 0xb0
	// Line 157, Address: 0x1223c8, Func Offset: 0xb8
	// Line 160, Address: 0x1223d0, Func Offset: 0xc0
	// Line 161, Address: 0x1223e0, Func Offset: 0xd0
	// Line 165, Address: 0x1223fc, Func Offset: 0xec
	// Line 171, Address: 0x122404, Func Offset: 0xf4
	// Line 172, Address: 0x122408, Func Offset: 0xf8
	// Func End, Address: 0x122424, Func Offset: 0x114
}

// iModelInit__Fv
// Start address: 0x122430
void iModelInit()
{
	// Line 88, Address: 0x122430, Func Offset: 0
	// Func End, Address: 0x122438, Func Offset: 0x8
}

