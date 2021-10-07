typedef struct _xScene;
typedef struct RpAtomic;
typedef struct RxPipelineCluster;
typedef struct xCutsceneData;
typedef struct RwCamera;
typedef struct RxPipelineRequiresCluster;
typedef struct RpClump;
typedef struct xAnimSingle;
typedef struct _xEnv;
typedef struct zUIAsset;
typedef struct xBase;
typedef struct rxReq;
typedef struct _tagxRumble;
typedef struct _xVec3;
typedef struct zGlobals;
typedef struct RwTexDictionary;
typedef enum RwFogType;
typedef struct _xEnt;
typedef struct _xQuat;
typedef struct _xBBox;
typedef enum RpWorldRenderOrder;
typedef struct zPortalAsset;
typedef struct xAnimState;
typedef struct _xMat4x3;
typedef struct zUIFontAsset;
typedef struct RwTexCoords;
typedef struct RwResEntry;
typedef struct _tagxPad;
typedef struct xCutsceneBreak;
typedef struct _zEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct _tagxCamPath;
typedef struct RxOutputSpec;
typedef struct _zUIFont;
typedef struct xCutsceneTime;
typedef struct _tagxCam;
typedef struct _tagp2CamStaticAsset;
typedef struct RwFrustumPlane;
typedef struct xSerial;
typedef struct _xEntShadow;
typedef enum RxClusterForcePresent;
typedef struct RwMatrixTag;
typedef struct zScene;
typedef struct _xVec4;
typedef struct xAnimPlay;
typedef struct RpCollSector;
typedef struct _xEntFrame;
typedef struct zAssetPickupTable;
typedef struct RwBBox;
typedef struct RpMeshHeader;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct xAnimFile;
typedef struct RxPipeline;
typedef struct RpWorldSector;
typedef struct _zPortal;
typedef struct _zCutsceneMgr;
typedef struct xAnimEffect;
typedef struct zPlayerStatic;
typedef struct _xCollis;
typedef struct _xRot;
typedef struct RxIoSpec;
typedef struct _zUI;
typedef struct RwTexture;
typedef struct xAnimTransitionList;
typedef struct RxClusterDefinition;
typedef struct zCutsceneZbuffer;
typedef struct xModelPool;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTable;
typedef struct RpWorld;
typedef struct RwRaster;
typedef struct RpGeometry;
typedef struct RxNodeMethods;
typedef struct xModelInstance;
typedef struct p2EntAsset;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef enum _tagRumbleType;
typedef struct p2LinkAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _zPlatform;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct xAnimActiveEffect;
typedef struct _xEntDrive;
typedef struct RpVertexNormal;
typedef struct RxNodeDefinition;
typedef struct RpMaterialList;
typedef struct RwFrame;
typedef struct xMemPool;
typedef struct RxHeap;
typedef struct RpSector;
typedef struct _tagxCamFollow;
typedef struct iShadowCache;
typedef struct RpMaterial;
typedef struct RxCluster;
typedef struct tag_xFile;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct RwLLLink;
typedef struct zCutsceneZbufferHack;
typedef enum RxClusterValidityReq;
typedef struct iColor_tag;
typedef struct RwSphere;
typedef struct _tagxCamPathAsset;
typedef struct tag_iFile;
typedef enum rxEmbeddedPacketState;
typedef struct RpLight;
typedef struct RxPacket;
typedef struct xAnimTransition;
typedef struct _xBound;
typedef struct RpPolygon;
typedef struct RpTriangle;
typedef struct _xSphere;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNode;
typedef struct zCutsceneMgrAsset;
typedef struct iEnv;
typedef struct _tagxCamShoulder;
typedef struct RxPipelineNodeParam;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct _xCylinder;
typedef struct p2EntHangableAsset;
typedef struct xCutscene;
typedef struct _zEntHangable;
typedef struct _xEntCollis;
typedef struct _tagxCamFollowAsset;
typedef struct xCamAsset;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _xBox;
typedef struct xFontBox;
typedef enum _tagCamType;
typedef struct RwRGBAReal;
typedef enum RwCameraProjection;
typedef struct iFogParams;
typedef struct RwObjectHasFrame;
typedef struct RwV2d;
typedef struct p2BaseAsset;
typedef struct zShaggy1Globals;
typedef enum _tagPadState;
typedef struct _tagxCamStatic;
typedef struct RwRGBA;
typedef struct RpInterpolator;
typedef struct _tagiPad;
typedef struct xFFX;
typedef struct zCheckPoint;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct _tagxCamFrame;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct zGlobalGameStats;
typedef struct iModelTag;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef struct _tagxCamStaticFollow;
typedef struct RwLinkList;
typedef struct _iCollis;
typedef struct xQCData;
typedef struct zJumpParam;

typedef void(*type_0)(RxPipelineNode*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef uint32(*type_2)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_3)(RxPipelineNode*, RxPipeline*);
typedef void(*type_7)(_xEnt*);
typedef uint32(*type_9)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_11)(RwCamera*);
typedef RpClump*(*type_15)(RpClump*, void*);
typedef void(*type_17)(RwResEntry*);
typedef RpWorldSector*(*type_22)(RpWorldSector*);
typedef xBase*(*type_28)(uint32);
typedef int8*(*type_32)(xBase*);
typedef int8*(*type_37)(uint32);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef uint32(*type_48)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_49)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_52)(int32);
typedef void(*type_64)(xMemPool*, void*);
typedef void(*type_67)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_73)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_74)(_xEnt*, _xScene*, float32);
typedef void(*type_79)(_xEnt*, _xVec3*);
typedef int32(*type_82)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_85)(_xEnt*);
typedef int32(*type_86)(RxNodeDefinition*);
typedef void(*type_89)(_xEnt*);
typedef void(*type_90)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_91)(RxNodeDefinition*);
typedef int32(*type_93)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_94)(RxPipelineNode*);
typedef void(*type_97)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_100)(RwObjectHasFrame*);
typedef void(*type_109)(_zUIFont*, _xScene*, float32);

typedef float32 type_4[4];
typedef uint8 type_5[8];
typedef uint8 type_6[8];
typedef float32 type_8[4];
typedef uint8 type_10[8];
typedef iModelTag type_12[4];
typedef int8 type_13[16];
typedef uint8 type_14[8];
typedef uint8 type_16[2];
typedef uint8 type_18[22];
typedef uint8 type_19[22];
typedef uint8 type_20[3];
typedef uint32 type_21[2];
typedef int8 type_23[128];
typedef int8 type_24[128][6];
typedef uint16 type_25[2];
typedef uint8 type_26[3];
typedef int8 type_27[512];
typedef _xVec3 type_29[2];
typedef float32 type_30[4];
typedef float32 type_31[2];
typedef uint8 type_33[3];
typedef float32 type_34[4];
typedef _xQuat type_35[2];
typedef float32 type_36[2];
typedef int8 type_38[32];
typedef float32 type_39[4];
typedef int8 type_40[32];
typedef float32 type_41[2];
typedef int8 type_43[32];
typedef uint8 type_44[3];
typedef float32 type_45[4];
typedef float32 type_46[2];
typedef float32 type_47[4];
typedef float32 type_50[3];
typedef _xVec3 type_51[4];
typedef float32 type_53[3];
typedef zGlobalGameStats type_54[30];
typedef float32 type_55[4];
typedef int8 type_56[16];
typedef zCutsceneZbuffer type_57[4];
typedef zGlobalGameStats type_58[13];
typedef uint8 type_59[8];
typedef _zEnt* type_60[10];
typedef uint32 type_61[1];
typedef int8 type_62[128];
typedef zGlobalGameStats type_63[4];
typedef int32 type_65[2];
typedef uint8 type_66[4];
typedef uint32 type_68[2];
typedef int32 type_69[2];
typedef uint8 type_70[4];
typedef uint16 type_71[3];
typedef uint16 type_72[3];
typedef uint32 type_75[43];
typedef uint32 type_76[2];
typedef uint16 type_77[4];
typedef uint16 type_78[2];
typedef uint32 type_80[2];
typedef xBase* type_81[43];
typedef uint16 type_83[2];
typedef RwFrustumPlane type_84[6];
typedef RwV3d type_87[8];
typedef int8 type_88[16];
typedef int8 type_92[16];
typedef uint32 type_95[2];
typedef float32 type_96[2];
typedef RpLight* type_98[2];
typedef RwFrame* type_99[2];
typedef float32 type_101[15];
typedef RwTexCoords* type_102[8];
typedef float32 type_103[15];
typedef uint32 type_104[15];
typedef RxCluster type_105[1];
typedef uint32 type_106[4];
typedef RwTexCoords* type_107[8];
typedef _xVec4 type_108[8];
typedef _xCollis type_110[18];
typedef float32 type_111[4];

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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct rxReq
{
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct zUIFontAsset : zUIAsset
{
	uint16 uiFontFlags;
	uint8 mode;
	uint8 fontID;
	uint32 textAssetID;
	uint8 bcolor[4];
	uint8 color[4];
	uint16 inset[4];
	uint16 space[2];
	uint16 cdim[2];
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _zUIFont : _zUI
{
	zUIFontAsset* fasset;
	uint16 uiFontFlags;
	uint16 uiFontHackFlags;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _zUI : _zEnt
{
	zUIAsset* sasset;
	uint32 uiFlags;
	uint32 uiButton;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _zPlatform
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpSector
{
	int32 type;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct st_SERIAL_CLIENTINFO
{
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _tagiPad
{
	int32 port;
};

struct xFFX
{
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _iCollis
{
	int32 unknown;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

float32 gFontWiggle;
zGlobals globals;
int32(*zUIFontEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zUIFont_Update)(_zUIFont*, _xScene*, float32);
void(*zUIFont_Render)(_xEnt*);

void zUIFont_Render(_xEnt* e);
int32 zUIFontEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zUIFont_Update(_zUIFont* ent, _xScene* sc, float32 dt);
void zUIFont_PreUpdate(_zUIFont* ent);
void zUIFont_Load(_zUIFont* ent, xSerial* s);
void zUIFont_Save(_zUIFont* ent, xSerial* s);
void zUIFont_Init(_zUIFont* ent, p2EntAsset* asset);
void zUIFont_Init(void* ent, void* asset);

// zUIFont_Render__FP5_xEnt
// Start address: 0x1ac630
void zUIFont_Render(_xEnt* e)
{
	int8 processedText[512];
	int8* text;
	uint32 jflags;
	xFontBox* b;
	iColor_tag c;
	_zUIFont* ent;
	// Line 440, Address: 0x1ac630, Func Offset: 0
	// Line 445, Address: 0x1ac64c, Func Offset: 0x1c
	// Line 455, Address: 0x1ac65c, Func Offset: 0x2c
	// Line 456, Address: 0x1ac660, Func Offset: 0x30
	// Line 457, Address: 0x1ac664, Func Offset: 0x34
	// Line 458, Address: 0x1ac668, Func Offset: 0x38
	// Line 455, Address: 0x1ac66c, Func Offset: 0x3c
	// Line 456, Address: 0x1ac674, Func Offset: 0x44
	// Line 457, Address: 0x1ac67c, Func Offset: 0x4c
	// Line 458, Address: 0x1ac684, Func Offset: 0x54
	// Line 462, Address: 0x1ac68c, Func Offset: 0x5c
	// Line 464, Address: 0x1ac69c, Func Offset: 0x6c
	// Line 467, Address: 0x1ac6a8, Func Offset: 0x78
	// Line 470, Address: 0x1ac6b8, Func Offset: 0x88
	// Line 473, Address: 0x1ac6c8, Func Offset: 0x98
	// Line 477, Address: 0x1ac6cc, Func Offset: 0x9c
	// Line 482, Address: 0x1ac6d8, Func Offset: 0xa8
	// Line 485, Address: 0x1ac6e8, Func Offset: 0xb8
	// Line 488, Address: 0x1ac6f8, Func Offset: 0xc8
	// Line 492, Address: 0x1ac6fc, Func Offset: 0xcc
	// Line 498, Address: 0x1ac708, Func Offset: 0xd8
	// Line 503, Address: 0x1ac718, Func Offset: 0xe8
	// Line 510, Address: 0x1ac794, Func Offset: 0x164
	// Line 514, Address: 0x1ac79c, Func Offset: 0x16c
	// Line 519, Address: 0x1ac808, Func Offset: 0x1d8
	// Line 527, Address: 0x1ac8d4, Func Offset: 0x2a4
	// Line 525, Address: 0x1ac8dc, Func Offset: 0x2ac
	// Line 528, Address: 0x1ac8e0, Func Offset: 0x2b0
	// Line 529, Address: 0x1ac8e4, Func Offset: 0x2b4
	// Line 530, Address: 0x1ac8e8, Func Offset: 0x2b8
	// Line 527, Address: 0x1ac8ec, Func Offset: 0x2bc
	// Line 528, Address: 0x1ac8f4, Func Offset: 0x2c4
	// Line 527, Address: 0x1ac8f8, Func Offset: 0x2c8
	// Line 528, Address: 0x1ac8fc, Func Offset: 0x2cc
	// Line 529, Address: 0x1ac904, Func Offset: 0x2d4
	// Line 530, Address: 0x1ac90c, Func Offset: 0x2dc
	// Line 534, Address: 0x1ac914, Func Offset: 0x2e4
	// Line 538, Address: 0x1ac980, Func Offset: 0x350
	// Line 540, Address: 0x1ac990, Func Offset: 0x360
	// Line 541, Address: 0x1ac99c, Func Offset: 0x36c
	// Line 542, Address: 0x1ac9a4, Func Offset: 0x374
	// Line 543, Address: 0x1ac9ac, Func Offset: 0x37c
	// Line 545, Address: 0x1ac9b4, Func Offset: 0x384
	// Line 549, Address: 0x1ac9c0, Func Offset: 0x390
	// Line 553, Address: 0x1ac9d0, Func Offset: 0x3a0
	// Line 560, Address: 0x1ac9d8, Func Offset: 0x3a8
	// Line 562, Address: 0x1ac9e4, Func Offset: 0x3b4
	// Line 564, Address: 0x1ac9f0, Func Offset: 0x3c0
	// Line 568, Address: 0x1aca3c, Func Offset: 0x40c
	// Line 569, Address: 0x1aca40, Func Offset: 0x410
	// Line 573, Address: 0x1aca48, Func Offset: 0x418
	// Line 577, Address: 0x1aca4c, Func Offset: 0x41c
	// Line 579, Address: 0x1aca54, Func Offset: 0x424
	// Line 583, Address: 0x1aca58, Func Offset: 0x428
	// Line 595, Address: 0x1aca64, Func Offset: 0x434
	// Func End, Address: 0x1aca84, Func Offset: 0x454
}

// zUIFontEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1aca90
int32 zUIFontEventCB(xBase* from, xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	_zUIFont* s;
	int32 rval;
	// Line 353, Address: 0x1aca90, Func Offset: 0
	// Line 363, Address: 0x1acaa0, Func Offset: 0x10
	// Line 354, Address: 0x1acaa4, Func Offset: 0x14
	// Line 363, Address: 0x1acaa8, Func Offset: 0x18
	// Line 367, Address: 0x1acae0, Func Offset: 0x50
	// Line 371, Address: 0x1acaec, Func Offset: 0x5c
	// Line 379, Address: 0x1acb1c, Func Offset: 0x8c
	// Line 386, Address: 0x1acb2c, Func Offset: 0x9c
	// Line 389, Address: 0x1acb34, Func Offset: 0xa4
	// Line 392, Address: 0x1acb40, Func Offset: 0xb0
	// Line 400, Address: 0x1acb6c, Func Offset: 0xdc
	// Line 407, Address: 0x1acb7c, Func Offset: 0xec
	// Line 410, Address: 0x1acb84, Func Offset: 0xf4
	// Line 411, Address: 0x1acbac, Func Offset: 0x11c
	// Line 414, Address: 0x1acbb4, Func Offset: 0x124
	// Line 415, Address: 0x1acbbc, Func Offset: 0x12c
	// Line 418, Address: 0x1acbc4, Func Offset: 0x134
	// Line 419, Address: 0x1acbd4, Func Offset: 0x144
	// Line 422, Address: 0x1acbdc, Func Offset: 0x14c
	// Line 427, Address: 0x1acbe8, Func Offset: 0x158
	// Line 428, Address: 0x1acbec, Func Offset: 0x15c
	// Func End, Address: 0x1acc00, Func Offset: 0x170
}

// zUIFont_Update__FP8_zUIFontP7_xScenef
// Start address: 0x1acc00
void zUIFont_Update(_zUIFont* ent, _xScene* sc, float32 dt)
{
	_zUI* ui;
	// Line 250, Address: 0x1acc00, Func Offset: 0
	// Line 253, Address: 0x1acc10, Func Offset: 0x10
	// Line 260, Address: 0x1acc18, Func Offset: 0x18
	// Line 264, Address: 0x1acc24, Func Offset: 0x24
	// Line 265, Address: 0x1acc2c, Func Offset: 0x2c
	// Line 268, Address: 0x1acc3c, Func Offset: 0x3c
	// Line 269, Address: 0x1acc6c, Func Offset: 0x6c
	// Line 270, Address: 0x1acca0, Func Offset: 0xa0
	// Line 272, Address: 0x1accac, Func Offset: 0xac
	// Line 273, Address: 0x1accb4, Func Offset: 0xb4
	// Line 274, Address: 0x1accbc, Func Offset: 0xbc
	// Line 277, Address: 0x1acccc, Func Offset: 0xcc
	// Line 278, Address: 0x1accfc, Func Offset: 0xfc
	// Line 279, Address: 0x1acd30, Func Offset: 0x130
	// Line 281, Address: 0x1acd3c, Func Offset: 0x13c
	// Line 282, Address: 0x1acd44, Func Offset: 0x144
	// Line 283, Address: 0x1acd4c, Func Offset: 0x14c
	// Line 284, Address: 0x1acd5c, Func Offset: 0x15c
	// Line 285, Address: 0x1acd64, Func Offset: 0x164
	// Line 286, Address: 0x1acd6c, Func Offset: 0x16c
	// Line 287, Address: 0x1acd7c, Func Offset: 0x17c
	// Line 289, Address: 0x1acd84, Func Offset: 0x184
	// Line 290, Address: 0x1acd8c, Func Offset: 0x18c
	// Line 291, Address: 0x1acd9c, Func Offset: 0x19c
	// Line 292, Address: 0x1acda4, Func Offset: 0x1a4
	// Line 293, Address: 0x1acdac, Func Offset: 0x1ac
	// Line 294, Address: 0x1acdbc, Func Offset: 0x1bc
	// Line 296, Address: 0x1acdc4, Func Offset: 0x1c4
	// Line 297, Address: 0x1acdcc, Func Offset: 0x1cc
	// Line 298, Address: 0x1acddc, Func Offset: 0x1dc
	// Line 299, Address: 0x1acde0, Func Offset: 0x1e0
	// Line 300, Address: 0x1acde8, Func Offset: 0x1e8
	// Line 301, Address: 0x1acdf0, Func Offset: 0x1f0
	// Line 302, Address: 0x1ace00, Func Offset: 0x200
	// Line 303, Address: 0x1ace04, Func Offset: 0x204
	// Line 304, Address: 0x1ace0c, Func Offset: 0x20c
	// Line 305, Address: 0x1ace14, Func Offset: 0x214
	// Line 306, Address: 0x1ace24, Func Offset: 0x224
	// Line 307, Address: 0x1ace2c, Func Offset: 0x22c
	// Line 308, Address: 0x1ace34, Func Offset: 0x234
	// Line 309, Address: 0x1ace44, Func Offset: 0x244
	// Line 311, Address: 0x1ace4c, Func Offset: 0x24c
	// Line 312, Address: 0x1ace58, Func Offset: 0x258
	// Line 313, Address: 0x1ace68, Func Offset: 0x268
	// Line 314, Address: 0x1ace70, Func Offset: 0x270
	// Line 315, Address: 0x1ace7c, Func Offset: 0x27c
	// Line 316, Address: 0x1ace8c, Func Offset: 0x28c
	// Line 317, Address: 0x1ace94, Func Offset: 0x294
	// Line 318, Address: 0x1acea0, Func Offset: 0x2a0
	// Line 319, Address: 0x1aceb0, Func Offset: 0x2b0
	// Line 320, Address: 0x1aceb8, Func Offset: 0x2b8
	// Line 321, Address: 0x1acec4, Func Offset: 0x2c4
	// Line 323, Address: 0x1aced0, Func Offset: 0x2d0
	// Line 339, Address: 0x1acee0, Func Offset: 0x2e0
	// Func End, Address: 0x1acef4, Func Offset: 0x2f4
}

// zUIFont_PreUpdate__FP8_zUIFontP7_xScenef
// Start address: 0x1acf00
void zUIFont_PreUpdate(_zUIFont* ent)
{
	_zUI* ui;
	// Line 185, Address: 0x1acf00, Func Offset: 0
	// Line 183, Address: 0x1acf04, Func Offset: 0x4
	// Line 185, Address: 0x1acf08, Func Offset: 0x8
	// Line 196, Address: 0x1acf48, Func Offset: 0x48
	// Line 197, Address: 0x1acf54, Func Offset: 0x54
	// Line 198, Address: 0x1acf5c, Func Offset: 0x5c
	// Line 199, Address: 0x1acf64, Func Offset: 0x64
	// Line 200, Address: 0x1acf6c, Func Offset: 0x6c
	// Line 201, Address: 0x1acf74, Func Offset: 0x74
	// Line 202, Address: 0x1acf7c, Func Offset: 0x7c
	// Line 203, Address: 0x1acf84, Func Offset: 0x84
	// Line 204, Address: 0x1acf8c, Func Offset: 0x8c
	// Line 205, Address: 0x1acf94, Func Offset: 0x94
	// Line 206, Address: 0x1acf9c, Func Offset: 0x9c
	// Line 209, Address: 0x1acfa8, Func Offset: 0xa8
	// Line 210, Address: 0x1acfbc, Func Offset: 0xbc
	// Line 212, Address: 0x1acfc8, Func Offset: 0xc8
	// Line 213, Address: 0x1acfdc, Func Offset: 0xdc
	// Line 216, Address: 0x1acfe8, Func Offset: 0xe8
	// Line 217, Address: 0x1acffc, Func Offset: 0xfc
	// Line 219, Address: 0x1ad008, Func Offset: 0x108
	// Line 220, Address: 0x1ad01c, Func Offset: 0x11c
	// Line 222, Address: 0x1ad028, Func Offset: 0x128
	// Line 223, Address: 0x1ad03c, Func Offset: 0x13c
	// Line 225, Address: 0x1ad048, Func Offset: 0x148
	// Line 226, Address: 0x1ad05c, Func Offset: 0x15c
	// Line 229, Address: 0x1ad068, Func Offset: 0x168
	// Line 230, Address: 0x1ad080, Func Offset: 0x180
	// Line 232, Address: 0x1ad08c, Func Offset: 0x18c
	// Line 233, Address: 0x1ad0a4, Func Offset: 0x1a4
	// Line 235, Address: 0x1ad0b0, Func Offset: 0x1b0
	// Line 236, Address: 0x1ad0c8, Func Offset: 0x1c8
	// Line 238, Address: 0x1ad0d4, Func Offset: 0x1d4
	// Line 239, Address: 0x1ad0ec, Func Offset: 0x1ec
	// Line 243, Address: 0x1ad0f8, Func Offset: 0x1f8
	// Line 245, Address: 0x1ad104, Func Offset: 0x204
	// Line 248, Address: 0x1ad110, Func Offset: 0x210
	// Func End, Address: 0x1ad118, Func Offset: 0x218
}

// zUIFont_Load__FP8_zUIFontP7xSerial
// Start address: 0x1ad120
void zUIFont_Load(_zUIFont* ent, xSerial* s)
{
	// Line 158, Address: 0x1ad120, Func Offset: 0
	// Func End, Address: 0x1ad128, Func Offset: 0x8
}

// zUIFont_Save__FP8_zUIFontP7xSerial
// Start address: 0x1ad130
void zUIFont_Save(_zUIFont* ent, xSerial* s)
{
	// Line 137, Address: 0x1ad130, Func Offset: 0
	// Func End, Address: 0x1ad138, Func Offset: 0x8
}

// zUIFont_Init__FP8_zUIFontP10p2EntAsset
// Start address: 0x1ad140
void zUIFont_Init(_zUIFont* ent, p2EntAsset* asset)
{
	// Line 62, Address: 0x1ad140, Func Offset: 0
	// Line 64, Address: 0x1ad158, Func Offset: 0x18
	// Line 66, Address: 0x1ad160, Func Offset: 0x20
	// Line 68, Address: 0x1ad16c, Func Offset: 0x2c
	// Line 67, Address: 0x1ad170, Func Offset: 0x30
	// Line 68, Address: 0x1ad174, Func Offset: 0x34
	// Line 69, Address: 0x1ad17c, Func Offset: 0x3c
	// Line 71, Address: 0x1ad188, Func Offset: 0x48
	// Line 72, Address: 0x1ad194, Func Offset: 0x54
	// Line 75, Address: 0x1ad1a0, Func Offset: 0x60
	// Line 78, Address: 0x1ad1a4, Func Offset: 0x64
	// Line 75, Address: 0x1ad1ac, Func Offset: 0x6c
	// Line 78, Address: 0x1ad1b4, Func Offset: 0x74
	// Line 81, Address: 0x1ad1ec, Func Offset: 0xac
	// Line 82, Address: 0x1ad1f0, Func Offset: 0xb0
	// Line 100, Address: 0x1ad204, Func Offset: 0xc4
	// Line 104, Address: 0x1ad230, Func Offset: 0xf0
	// Line 105, Address: 0x1ad238, Func Offset: 0xf8
	// Line 112, Address: 0x1ad244, Func Offset: 0x104
	// Line 113, Address: 0x1ad24c, Func Offset: 0x10c
	// Line 114, Address: 0x1ad250, Func Offset: 0x110
	// Line 112, Address: 0x1ad254, Func Offset: 0x114
	// Line 113, Address: 0x1ad258, Func Offset: 0x118
	// Line 114, Address: 0x1ad260, Func Offset: 0x120
	// Line 115, Address: 0x1ad268, Func Offset: 0x128
	// Line 116, Address: 0x1ad270, Func Offset: 0x130
	// Line 123, Address: 0x1ad278, Func Offset: 0x138
	// Func End, Address: 0x1ad290, Func Offset: 0x150
}

// zUIFont_Init__FPvPv
// Start address: 0x1ad290
void zUIFont_Init(void* ent, void* asset)
{
	// Line 58, Address: 0x1ad290, Func Offset: 0
	// Func End, Address: 0x1ad298, Func Offset: 0x8
}

