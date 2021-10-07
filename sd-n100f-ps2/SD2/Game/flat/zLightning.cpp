typedef struct _xEnt;
typedef struct RxPipelineNodeParam;
typedef struct _xBBox;
typedef struct zAssetPickupTable;
typedef struct xAnimState;
typedef struct RxNodeDefinition;
typedef struct _xMat4x3;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobals;
typedef struct _tagLightning;
typedef struct xBase;
typedef struct _xBox;
typedef struct _tagxCamPath;
typedef struct zPortalAsset;
typedef struct xAnimPlay;
typedef struct rxHeapBlockHeader;
typedef enum RpWorldRenderOrder;
typedef struct _tagxCam;
typedef struct xCutsceneBreak;
typedef struct xPar;
typedef struct RxPipelineNode;
typedef struct _tagPadAnalog;
typedef struct _tagLightningAdd;
typedef struct rxHeapFreeBlock;
typedef struct _tagxPad;
typedef struct _tagp2CamStaticAsset;
typedef struct xCutsceneTime;
typedef struct RwMatrixTag;
typedef struct _xEntFrame;
typedef struct _zEnt;
typedef struct xAnimFile;
typedef enum RwCameraProjection;
typedef struct RpCollSector;
typedef struct _tagEmitVolume;
typedef struct xAnimSingle;
typedef struct RpMeshHeader;
typedef struct RwLLLink;
typedef struct xAnimEffect;
typedef struct RxClusterDefinition;
typedef struct RwObjectHasFrame;
typedef struct zScene;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct xParCmdAsset;
typedef struct _xCollis;
typedef struct RxPipeline;
typedef struct RwRGBAReal;
typedef struct xAnimTransitionList;
typedef struct _xEnv;
typedef struct RwRGBA;
typedef struct xAnimTable;
typedef struct RpWorldSector;
typedef struct _zPortal;
typedef struct _zCutsceneMgr;
typedef struct _tagxRumble;
typedef struct zPlayerStatic;
typedef struct xModelPool;
typedef struct RwV2d;
typedef struct _xMat3x3;
typedef struct zCutsceneZbuffer;
typedef enum _tagLightningType;
typedef struct _xEntShadow;
typedef struct RxPipelineCluster;
typedef struct _tagCamInfo;
typedef struct xModelInstance;
typedef enum RxClusterValid;
typedef struct RpWorld;
typedef struct _xEntDrive;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RpGeometry;
typedef struct xMemPool;
typedef struct _tagEmitOffsetPoint;
typedef struct p2LinkAsset;
typedef struct xAnimActiveEffect;
typedef enum RwTextureFilterMode;
typedef struct _zPlatform;
typedef struct _zParEmitter;
typedef struct RwObject;
typedef struct _tagxCamFollow;
typedef struct RpAtomic;
typedef struct RpVertexNormal;
typedef struct RwRaster;
typedef struct RpMaterialList;
typedef struct RpMorphTarget;
typedef struct iShadowCache;
typedef struct _tagLightningLine;
typedef struct xParGroup;
typedef struct RwCamera;
typedef struct RpSector;
typedef struct RwV3d;
typedef struct RpMaterial;
typedef struct RxPacket;
typedef struct p2EntAsset;
typedef struct RwResEntry;
typedef struct RwPlane;
typedef struct RxColorUnion;
typedef struct zCutsceneZbufferHack;
typedef struct RwLinkList;
typedef struct xParCmdTex;
typedef struct zParEmitterAsset;
typedef struct rxReq;
typedef struct _tagxCamPathAsset;
typedef enum _tagRumbleType;
typedef struct RwTexDictionary;
typedef struct _zParEmitterCustomSettings;
typedef struct xAnimTransition;
typedef struct tag_iFile;
typedef struct _xScene;
typedef struct _xQuat;
typedef struct _xBound;
typedef struct _tagLightningRot;
typedef struct RpLight;
typedef struct RpPolygon;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef struct _tagEmitCircle;
typedef enum RwFogType;
typedef enum RxClusterForcePresent;
typedef struct RwFrustumPlane;
typedef struct RpTriangle;
typedef struct RwTexCoords;
typedef struct _tagxCamShoulder;
typedef struct tag_xFile;
typedef struct _xVec4;
typedef struct p2EntHangableAsset;
typedef struct RwBBox;
typedef struct RxObjSpace3DVertex;
typedef struct RxClusterRef;
typedef struct iEnv;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef enum RxNodeDefEditable;
typedef struct _xVec3;
typedef struct RwTexture;
typedef struct zCutsceneMgrAsset;
typedef struct xSurface;
typedef struct zPlayerGlobals;
typedef struct _xEntCollis;
typedef struct _xRot;
typedef struct RxIoSpec;
typedef struct xCutscene;
typedef struct _tagxCamFollowAsset;
typedef struct xCamAsset;
typedef struct RxNodeMethods;
typedef struct _tagEmitSphere;
typedef enum _tagCamType;
typedef struct RwFrame;
typedef struct RxHeap;
typedef struct _zEntHangable;
typedef struct iFogParams;
typedef struct _tagxCamStatic;
typedef struct RwSurfaceProperties;
typedef struct p2BaseAsset;
typedef struct RxCluster;
typedef struct _tagEmitRect;
typedef struct zShaggy1Globals;
typedef struct _tagxCamFrame;
typedef struct RpInterpolator;
typedef enum rxEmbeddedPacketState;
typedef struct zCheckPoint;
typedef struct RwSphere;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct zGlobalGameStats;
typedef struct _tagxCamStaticFollow;
typedef struct _xSphere;
typedef struct iModelTag;
typedef struct _iCollis;
typedef struct xFFX;
typedef struct xCutsceneData;
typedef enum _tagPadState;
typedef struct _tagEmitLine;
typedef enum RwTextureAddressMode;
typedef struct xQCData;
typedef struct _tagiPad;
typedef struct _xCylinder;
typedef struct zJumpParam;

typedef void(*type_4)(RxNodeDefinition*);
typedef int32(*type_10)(RxPipelineNode*);
typedef RpClump*(*type_12)(RpClump*, void*);
typedef void(*type_14)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_19)(RwObjectHasFrame*);
typedef xBase*(*type_21)(uint32);
typedef int32(*type_22)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_24)(RpWorldSector*);
typedef int8*(*type_26)(xBase*);
typedef int8*(*type_29)(uint32);
typedef uint32(*type_32)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_36)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_39)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_41)(RxNodeDefinition*);
typedef RpAtomic*(*type_43)(RpAtomic*);
typedef void(*type_48)(void*, xParGroup*);
typedef void(*type_52)(int32);
typedef RwCamera*(*type_54)(RwCamera*);
typedef void(*type_60)(RwResEntry*);
typedef RwCamera*(*type_62)(RwCamera*);
typedef void(*type_64)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_70)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_74)(_xEnt*, _xScene*, float32);
typedef void(*type_79)(_xEnt*);
typedef void(*type_84)(_xEnt*);
typedef void(*type_85)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_87)(xMemPool*, void*);
typedef int32(*type_88)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_89)(_xEnt*, _xVec3*);
typedef uint32(*type_93)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_102)(_xEnt*, _xVec3*);

typedef RwV3d type_0[8];
typedef uint8 type_1[2];
typedef uint8 type_2[8];
typedef float32 type_3[4];
typedef uint8 type_5[8];
typedef iModelTag type_6[4];
typedef uint8 type_7[2];
typedef uint8 type_8[8];
typedef int8 type_9[16];
typedef _xVec3 type_11[16];
typedef _xVec3 type_13[16];
typedef uint32 type_15[2];
typedef uint8 type_16[4];
typedef uint8 type_17[3];
typedef _xVec3 type_18[2];
typedef uint8 type_20[3];
typedef int8 type_23[128];
typedef int8 type_25[128][6];
typedef _xQuat type_27[2];
typedef uint8 type_28[3];
typedef RxCluster type_30[1];
typedef float32 type_31[4];
typedef float32 type_33[4];
typedef uint32 type_34[4];
typedef int8 type_35[32];
typedef float32 type_37[4];
typedef uint8 type_38[2];
typedef uint8 type_40[22];
typedef float32 type_42[4];
typedef uint8 type_44[3];
typedef uint8 type_45[22];
typedef uint8 type_46[2];
typedef float32 type_47[4];
typedef _xVec3 type_49[4];
typedef float32 type_50[3];
typedef uint8 type_51[24];
typedef float32 type_53[3];
typedef float32 type_55[4];
typedef float32 type_56[4];
typedef uint8 type_57[3];
typedef zCutsceneZbuffer type_58[4];
typedef zGlobalGameStats type_59[30];
typedef zGlobalGameStats type_61[13];
typedef uint32 type_63[1];
typedef _zEnt* type_65[10];
typedef int8 type_66[128];
typedef zGlobalGameStats type_67[4];
typedef int32 type_68[2];
typedef float32 type_69[16];
typedef uint32 type_71[2];
typedef int32 type_72[2];
typedef uint16 type_73[3];
typedef uint32 type_75[2];
typedef uint16 type_76[3];
typedef uint32 type_77[43];
typedef uint32 type_78[2];
typedef xBase* type_80[43];
typedef uint8 type_81[4];
typedef uint8 type_82[4];
typedef int8 type_83[16];
typedef uint8 type_86[8];
typedef float32 type_90[2];
typedef uint8 type_91[3];
typedef int8 type_92[32];
typedef int8 type_94[32];
typedef uint32 type_95[2];
typedef _tagLightning* type_96[48];
typedef RpLight* type_97[2];
typedef RwFrame* type_98[2];
typedef int8 type_99[16];
typedef int8 type_100[16];
typedef RwTexCoords* type_101[8];
typedef uint8 type_103[4];
typedef RxObjSpace3DVertex type_104[128];
typedef uint8 type_105[4];
typedef _xVec4 type_106[8];
typedef uint8 type_107[3];
typedef _xCollis type_108[18];
typedef RwTexCoords* type_109[8];
typedef uint8 type_110[3];
typedef float32 type_111[4];
typedef float32 type_112[15];
typedef RwFrustumPlane type_113[6];
typedef float32 type_114[15];
typedef uint8 type_115[8];
typedef uint32 type_116[15];
typedef float32 type_117[4];

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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct _tagLightning
{
	_tagLightningType type;
	uint32 flags;
	_xVec3 base_point[16];
	_xVec3 point[16];
	int32 total_points;
	float32 arc_height;
	float32 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
	};
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 alpha_pad;
	float32 rand_radius;
	float32 time_left;
	float32 time_total;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float32 m_lifetime;
	uint8 m_c[4];
	_xVec3 m_pos;
	float32 m_size;
	_xVec3 m_vel;
	float32 m_sizeVel;
	uint8 m_flag;
	uint8 m_mode;
	uint8 m_texIdx[2];
	uint8 m_rotdeg[3];
	uint8 pad8;
	uint32 pad32;
	zParEmitterAsset* m_asset;
	float32 m_cvel[4];
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _tagLightningAdd
{
	_tagLightningType type;
	float32 setup_degrees;
	float32 move_degrees;
	float32 rot_radius;
	_xVec3* start;
	_xVec3* end;
	int32 total_points;
	float32 time;
	float32 arc_height;
	float32 thickness;
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 alpha_pad;
	float32 rand_radius;
	uint32 flags;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

enum _tagLightningType
{
	eLT_Line,
	eLT_Rotating,
	eLT_Total
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct _zPlatform
{
};

struct _zParEmitter : xBase
{
	zParEmitterAsset* tasset;
	xParGroup* group;
	uint8 emit_flags;
	uint8 emit_pad[3];
	float32 emit_interval_current;
	uint8 rot[3];
	iModelTag tag;
	void* attachTo;
	void* parSys;
	void* emit_volume;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _tagLightningLine
{
	float32 unused;
};

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int32 m_num_of_particles;
	uint8 m_alive;
	uint8 m_killWhenDead;
	uint8 m_active;
	uint8 m_visible;
	uint8 m_culled;
	uint8 m_priority;
	uint8 m_flags;
	uint8 m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	void(*draw)(void*, xParGroup*);
	xParCmdTex* m_cmdTex;
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

struct RpSector
{
	int32 type;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct RwLinkList
{
	RwLLLink link;
};

struct xParCmdTex : xParCmdAsset
{
	float32 x1;
	float32 y1;
	float32 x2;
	float32 y2;
	uint8 birthMode;
	uint8 rows;
	uint8 cols;
	uint8 unit_count;
	float32 unit_width;
	float32 unit_height;
};

struct zParEmitterAsset : p2BaseAsset
{
	uint8 emit_flags;
	uint8 emit_type;
	uint8 count;
	uint8 count_variation;
	float32 interval;
	union
	{
		_tagEmitCircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
	};
	uint32 attachToID;
	uint32 parSysID;
	_xVec3 pos;
	_xVec3 vel;
	float32 vel_angle_variation;
	uint8 color_birth[4];
	uint8 color_death[4];
	float32 size_birth;
	float32 size_birth_variation;
	float32 size_death;
	float32 life;
	float32 life_variation;
	uint8 pad_emit[2];
	uint8 cull_mode;
	float32 cull_dist_sqr;
	uint8 max_emit;
};

struct rxReq
{
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _zParEmitterCustomSettings
{
	uint32 custom_flags;
	uint8 count;
	uint8 count_variation;
	float32 interval;
	uint32 attachToID;
	_xVec3 pos;
	_xVec3 vel;
	float32 vel_angle_variation;
	uint8 color_birth[4];
	uint8 color_death[4];
	float32 size_birth;
	float32 size_birth_variation;
	float32 size_death;
	float32 life;
	float32 life_variation;
	uint8 rot[3];
	float32 xzcircle_radius;
	float32 emit_interval_current;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct _tagLightningRot
{
	float32 deg[16];
	float32 degrees;
	float32 height;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct _tagEmitSphere
{
	float32 radius;
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

struct _tagxCamStatic
{
	uint32 unused;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _iCollis
{
	int32 unknown;
};

struct xFFX
{
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

_tagLightning* sLightning[48];
uint8 cSparkColors[24];
zGlobals globals;
_tagxPad* gDebugPad;
uint32 gActiveHeap;

void zLightningModifyEndpoints(_tagLightning* l, _xVec3* start, _xVec3* end);
void zLightningKill(_tagLightning* l);
void zLightningRender();
void RenderLightning(_tagLightning* l);
void zLightningUpdate(float32 seconds);
void UpdateLightning(_tagLightning* l, float32 seconds);
_tagLightning* zLightningAdd(_tagLightningAdd* add);
void zLightningInit();

// zLightningModifyEndpoints__FP13_tagLightningP6_xVec3P6_xVec3
// Start address: 0x24acc0
void zLightningModifyEndpoints(_tagLightning* l, _xVec3* start, _xVec3* end)
{
	float32 scalar;
	float32 pos;
	int32 i;
	// Line 586, Address: 0x24acc0, Func Offset: 0
	// Line 589, Address: 0x24ace8, Func Offset: 0x28
	// Line 591, Address: 0x24acf4, Func Offset: 0x34
	// Line 590, Address: 0x24acf8, Func Offset: 0x38
	// Line 589, Address: 0x24ad08, Func Offset: 0x48
	// Line 591, Address: 0x24ad0c, Func Offset: 0x4c
	// Line 589, Address: 0x24ad10, Func Offset: 0x50
	// Line 591, Address: 0x24ad18, Func Offset: 0x58
	// Line 590, Address: 0x24ad20, Func Offset: 0x60
	// Line 591, Address: 0x24ad2c, Func Offset: 0x6c
	// Line 590, Address: 0x24ad30, Func Offset: 0x70
	// Line 591, Address: 0x24ad34, Func Offset: 0x74
	// Line 590, Address: 0x24ad38, Func Offset: 0x78
	// Line 593, Address: 0x24ad3c, Func Offset: 0x7c
	// Line 591, Address: 0x24ad40, Func Offset: 0x80
	// Line 590, Address: 0x24ad44, Func Offset: 0x84
	// Line 593, Address: 0x24ad48, Func Offset: 0x88
	// Line 594, Address: 0x24ad50, Func Offset: 0x90
	// Line 595, Address: 0x24ad60, Func Offset: 0xa0
	// Line 597, Address: 0x24ad68, Func Offset: 0xa8
	// Line 598, Address: 0x24ad78, Func Offset: 0xb8
	// Line 600, Address: 0x24ad94, Func Offset: 0xd4
	// Line 603, Address: 0x24ada8, Func Offset: 0xe8
	// Line 605, Address: 0x24add0, Func Offset: 0x110
	// Func End, Address: 0x24add8, Func Offset: 0x118
}

// zLightningKill__FP13_tagLightning
// Start address: 0x24ade0
void zLightningKill(_tagLightning* l)
{
	// Line 575, Address: 0x24ade0, Func Offset: 0
	// Line 576, Address: 0x24adec, Func Offset: 0xc
	// Func End, Address: 0x24adf4, Func Offset: 0x14
}

// zLightningRender__Fv
// Start address: 0x24ae00
void zLightningRender()
{
	int32 i;
	RwTexture* tex;
	// Line 539, Address: 0x24ae00, Func Offset: 0
	// Line 541, Address: 0x24ae08, Func Offset: 0x8
	// Line 539, Address: 0x24ae0c, Func Offset: 0xc
	// Line 541, Address: 0x24ae10, Func Offset: 0x10
	// Line 543, Address: 0x24ae28, Func Offset: 0x28
	// Line 546, Address: 0x24ae30, Func Offset: 0x30
	// Line 550, Address: 0x24ae40, Func Offset: 0x40
	// Line 552, Address: 0x24ae48, Func Offset: 0x48
	// Line 555, Address: 0x24ae68, Func Offset: 0x68
	// Line 557, Address: 0x24ae70, Func Offset: 0x70
	// Line 558, Address: 0x24ae80, Func Offset: 0x80
	// Func End, Address: 0x24ae94, Func Offset: 0x94
}

// RenderLightning__FP13_tagLightning
// Start address: 0x24aea0
void RenderLightning(_tagLightning* l)
{
	RwRGBA* _col;
	RwRGBA* _col;
	int32 i;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 oldthickness;
	RwRGBA* _col;
	RwRGBA* _col;
	int32 i;
	RwRGBA* _col;
	RwRGBA* _col;
	uint32 verts;
	uint8 alphau8;
	float32 alphaf;
	RxObjSpace3DVertex sStripVert[128];
	// Line 374, Address: 0x24aea0, Func Offset: 0
	// Line 380, Address: 0x24aeb8, Func Offset: 0x18
	// Line 381, Address: 0x24aec0, Func Offset: 0x20
	// Line 380, Address: 0x24aecc, Func Offset: 0x2c
	// Line 382, Address: 0x24aed8, Func Offset: 0x38
	// Line 390, Address: 0x24aee0, Func Offset: 0x40
	// Line 400, Address: 0x24aef8, Func Offset: 0x58
	// Line 390, Address: 0x24aefc, Func Offset: 0x5c
	// Line 382, Address: 0x24af00, Func Offset: 0x60
	// Line 386, Address: 0x24af04, Func Offset: 0x64
	// Line 390, Address: 0x24af08, Func Offset: 0x68
	// Line 391, Address: 0x24af14, Func Offset: 0x74
	// Line 392, Address: 0x24af18, Func Offset: 0x78
	// Line 393, Address: 0x24af1c, Func Offset: 0x7c
	// Line 407, Address: 0x24af20, Func Offset: 0x80
	// Line 393, Address: 0x24af2c, Func Offset: 0x8c
	// Line 398, Address: 0x24af44, Func Offset: 0xa4
	// Line 399, Address: 0x24af64, Func Offset: 0xc4
	// Line 400, Address: 0x24af68, Func Offset: 0xc8
	// Line 401, Address: 0x24af6c, Func Offset: 0xcc
	// Line 407, Address: 0x24af84, Func Offset: 0xe4
	// Line 410, Address: 0x24af8c, Func Offset: 0xec
	// Line 412, Address: 0x24af9c, Func Offset: 0xfc
	// Line 410, Address: 0x24afa0, Func Offset: 0x100
	// Line 412, Address: 0x24afac, Func Offset: 0x10c
	// Line 413, Address: 0x24afb4, Func Offset: 0x114
	// Line 415, Address: 0x24afc0, Func Offset: 0x120
	// Line 416, Address: 0x24afc8, Func Offset: 0x128
	// Line 418, Address: 0x24afcc, Func Offset: 0x12c
	// Line 424, Address: 0x24afd0, Func Offset: 0x130
	// Line 418, Address: 0x24afe4, Func Offset: 0x144
	// Line 424, Address: 0x24affc, Func Offset: 0x15c
	// Line 425, Address: 0x24b018, Func Offset: 0x178
	// Line 426, Address: 0x24b020, Func Offset: 0x180
	// Line 428, Address: 0x24b02c, Func Offset: 0x18c
	// Line 429, Address: 0x24b030, Func Offset: 0x190
	// Line 431, Address: 0x24b038, Func Offset: 0x198
	// Line 433, Address: 0x24b03c, Func Offset: 0x19c
	// Line 435, Address: 0x24b040, Func Offset: 0x1a0
	// Line 431, Address: 0x24b044, Func Offset: 0x1a4
	// Line 435, Address: 0x24b05c, Func Offset: 0x1bc
	// Line 439, Address: 0x24b064, Func Offset: 0x1c4
	// Line 441, Address: 0x24b070, Func Offset: 0x1d0
	// Line 447, Address: 0x24b088, Func Offset: 0x1e8
	// Line 449, Address: 0x24b0a0, Func Offset: 0x200
	// Line 450, Address: 0x24b0a8, Func Offset: 0x208
	// Line 458, Address: 0x24b0b0, Func Offset: 0x210
	// Line 459, Address: 0x24b0b8, Func Offset: 0x218
	// Line 458, Address: 0x24b0c4, Func Offset: 0x224
	// Line 460, Address: 0x24b0d0, Func Offset: 0x230
	// Line 461, Address: 0x24b0d8, Func Offset: 0x238
	// Line 462, Address: 0x24b0dc, Func Offset: 0x23c
	// Line 479, Address: 0x24b0f4, Func Offset: 0x254
	// Line 465, Address: 0x24b0f8, Func Offset: 0x258
	// Line 486, Address: 0x24b0fc, Func Offset: 0x25c
	// Line 462, Address: 0x24b104, Func Offset: 0x264
	// Line 469, Address: 0x24b110, Func Offset: 0x270
	// Line 470, Address: 0x24b130, Func Offset: 0x290
	// Line 471, Address: 0x24b134, Func Offset: 0x294
	// Line 472, Address: 0x24b138, Func Offset: 0x298
	// Line 477, Address: 0x24b154, Func Offset: 0x2b4
	// Line 478, Address: 0x24b174, Func Offset: 0x2d4
	// Line 479, Address: 0x24b178, Func Offset: 0x2d8
	// Line 480, Address: 0x24b17c, Func Offset: 0x2dc
	// Line 486, Address: 0x24b194, Func Offset: 0x2f4
	// Line 489, Address: 0x24b19c, Func Offset: 0x2fc
	// Line 491, Address: 0x24b1ac, Func Offset: 0x30c
	// Line 489, Address: 0x24b1b0, Func Offset: 0x310
	// Line 491, Address: 0x24b1bc, Func Offset: 0x31c
	// Line 492, Address: 0x24b1c4, Func Offset: 0x324
	// Line 494, Address: 0x24b1d0, Func Offset: 0x330
	// Line 495, Address: 0x24b1d8, Func Offset: 0x338
	// Line 497, Address: 0x24b1dc, Func Offset: 0x33c
	// Line 503, Address: 0x24b1e0, Func Offset: 0x340
	// Line 497, Address: 0x24b1f4, Func Offset: 0x354
	// Line 503, Address: 0x24b20c, Func Offset: 0x36c
	// Line 504, Address: 0x24b228, Func Offset: 0x388
	// Line 505, Address: 0x24b230, Func Offset: 0x390
	// Line 507, Address: 0x24b23c, Func Offset: 0x39c
	// Line 508, Address: 0x24b240, Func Offset: 0x3a0
	// Line 510, Address: 0x24b248, Func Offset: 0x3a8
	// Line 512, Address: 0x24b24c, Func Offset: 0x3ac
	// Line 514, Address: 0x24b250, Func Offset: 0x3b0
	// Line 510, Address: 0x24b254, Func Offset: 0x3b4
	// Line 514, Address: 0x24b26c, Func Offset: 0x3cc
	// Line 518, Address: 0x24b274, Func Offset: 0x3d4
	// Line 520, Address: 0x24b280, Func Offset: 0x3e0
	// Line 526, Address: 0x24b298, Func Offset: 0x3f8
	// Line 528, Address: 0x24b2b0, Func Offset: 0x410
	// Line 529, Address: 0x24b2b8, Func Offset: 0x418
	// Line 532, Address: 0x24b2c0, Func Offset: 0x420
	// Line 534, Address: 0x24b2c4, Func Offset: 0x424
	// Func End, Address: 0x24b2e0, Func Offset: 0x440
}

// zLightningUpdate__Ff
// Start address: 0x24b2e0
void zLightningUpdate(float32 seconds)
{
	int32 i;
	// Line 303, Address: 0x24b2e0, Func Offset: 0
	// Line 304, Address: 0x24b2fc, Func Offset: 0x1c
	// Line 306, Address: 0x24b304, Func Offset: 0x24
	// Line 307, Address: 0x24b320, Func Offset: 0x40
	// Line 308, Address: 0x24b328, Func Offset: 0x48
	// Line 309, Address: 0x24b338, Func Offset: 0x58
	// Func End, Address: 0x24b350, Func Offset: 0x70
}

// UpdateLightning__FP13_tagLightningf
// Start address: 0x24b350
void UpdateLightning(_tagLightning* l, float32 seconds)
{
	int32 col;
	int32 i;
	_zParEmitterCustomSettings info;
	_zParEmitter* e;
	float32 sc1;
	float32 sc2;
	_xVec3 vec;
	_xMat3x3 mat3;
	int32 i;
	float32 full;
	_xVec3 dir_euler;
	_xMat3x3 dirmat;
	_xVec3 dir;
	float32 sc1;
	int32 i;
	float32 full;
	// Line 177, Address: 0x24b350, Func Offset: 0
	// Line 179, Address: 0x24b37c, Func Offset: 0x2c
	// Line 181, Address: 0x24b390, Func Offset: 0x40
	// Line 184, Address: 0x24b39c, Func Offset: 0x4c
	// Line 186, Address: 0x24b3b8, Func Offset: 0x68
	// Line 190, Address: 0x24b3c8, Func Offset: 0x78
	// Line 192, Address: 0x24b3d4, Func Offset: 0x84
	// Line 194, Address: 0x24b3e0, Func Offset: 0x90
	// Line 192, Address: 0x24b3e8, Func Offset: 0x98
	// Line 194, Address: 0x24b3f0, Func Offset: 0xa0
	// Line 196, Address: 0x24b3f8, Func Offset: 0xa8
	// Line 197, Address: 0x24b410, Func Offset: 0xc0
	// Line 198, Address: 0x24b428, Func Offset: 0xd8
	// Line 200, Address: 0x24b444, Func Offset: 0xf4
	// Line 202, Address: 0x24b454, Func Offset: 0x104
	// Line 204, Address: 0x24b45c, Func Offset: 0x10c
	// Line 202, Address: 0x24b460, Func Offset: 0x110
	// Line 204, Address: 0x24b464, Func Offset: 0x114
	// Line 202, Address: 0x24b46c, Func Offset: 0x11c
	// Line 204, Address: 0x24b470, Func Offset: 0x120
	// Line 202, Address: 0x24b474, Func Offset: 0x124
	// Line 204, Address: 0x24b478, Func Offset: 0x128
	// Line 205, Address: 0x24b49c, Func Offset: 0x14c
	// Line 204, Address: 0x24b4a0, Func Offset: 0x150
	// Line 206, Address: 0x24b4a4, Func Offset: 0x154
	// Line 207, Address: 0x24b4bc, Func Offset: 0x16c
	// Line 208, Address: 0x24b4c4, Func Offset: 0x174
	// Line 212, Address: 0x24b4cc, Func Offset: 0x17c
	// Line 213, Address: 0x24b4d0, Func Offset: 0x180
	// Line 212, Address: 0x24b4d4, Func Offset: 0x184
	// Line 213, Address: 0x24b4d8, Func Offset: 0x188
	// Line 212, Address: 0x24b4dc, Func Offset: 0x18c
	// Line 213, Address: 0x24b518, Func Offset: 0x1c8
	// Line 215, Address: 0x24b520, Func Offset: 0x1d0
	// Line 218, Address: 0x24b52c, Func Offset: 0x1dc
	// Line 221, Address: 0x24b538, Func Offset: 0x1e8
	// Line 223, Address: 0x24b548, Func Offset: 0x1f8
	// Line 221, Address: 0x24b550, Func Offset: 0x200
	// Line 223, Address: 0x24b564, Func Offset: 0x214
	// Line 227, Address: 0x24b56c, Func Offset: 0x21c
	// Line 228, Address: 0x24b5a8, Func Offset: 0x258
	// Line 232, Address: 0x24b5b8, Func Offset: 0x268
	// Line 228, Address: 0x24b5c0, Func Offset: 0x270
	// Line 233, Address: 0x24b5cc, Func Offset: 0x27c
	// Line 235, Address: 0x24b5e0, Func Offset: 0x290
	// Line 236, Address: 0x24b5e8, Func Offset: 0x298
	// Line 235, Address: 0x24b5ec, Func Offset: 0x29c
	// Line 236, Address: 0x24b5f0, Func Offset: 0x2a0
	// Line 235, Address: 0x24b5f4, Func Offset: 0x2a4
	// Line 236, Address: 0x24b5fc, Func Offset: 0x2ac
	// Line 238, Address: 0x24b610, Func Offset: 0x2c0
	// Line 239, Address: 0x24b618, Func Offset: 0x2c8
	// Line 240, Address: 0x24b624, Func Offset: 0x2d4
	// Line 242, Address: 0x24b628, Func Offset: 0x2d8
	// Line 245, Address: 0x24b638, Func Offset: 0x2e8
	// Line 248, Address: 0x24b648, Func Offset: 0x2f8
	// Line 249, Address: 0x24b660, Func Offset: 0x310
	// Line 250, Address: 0x24b678, Func Offset: 0x328
	// Line 252, Address: 0x24b694, Func Offset: 0x344
	// Line 253, Address: 0x24b6a4, Func Offset: 0x354
	// Line 254, Address: 0x24b6b4, Func Offset: 0x364
	// Line 257, Address: 0x24b6c4, Func Offset: 0x374
	// Line 258, Address: 0x24b6d4, Func Offset: 0x384
	// Line 260, Address: 0x24b6f0, Func Offset: 0x3a0
	// Line 261, Address: 0x24b70c, Func Offset: 0x3bc
	// Line 267, Address: 0x24b710, Func Offset: 0x3c0
	// Line 269, Address: 0x24b720, Func Offset: 0x3d0
	// Line 272, Address: 0x24b734, Func Offset: 0x3e4
	// Line 273, Address: 0x24b74c, Func Offset: 0x3fc
	// Line 277, Address: 0x24b754, Func Offset: 0x404
	// Line 278, Address: 0x24b758, Func Offset: 0x408
	// Line 279, Address: 0x24b774, Func Offset: 0x424
	// Line 281, Address: 0x24b798, Func Offset: 0x448
	// Line 292, Address: 0x24b7a8, Func Offset: 0x458
	// Line 281, Address: 0x24b7b4, Func Offset: 0x464
	// Line 283, Address: 0x24b7b8, Func Offset: 0x468
	// Line 281, Address: 0x24b7c0, Func Offset: 0x470
	// Line 283, Address: 0x24b7c4, Func Offset: 0x474
	// Line 290, Address: 0x24b7cc, Func Offset: 0x47c
	// Line 285, Address: 0x24b7d0, Func Offset: 0x480
	// Line 283, Address: 0x24b7d4, Func Offset: 0x484
	// Line 285, Address: 0x24b7d8, Func Offset: 0x488
	// Line 283, Address: 0x24b7dc, Func Offset: 0x48c
	// Line 285, Address: 0x24b7e0, Func Offset: 0x490
	// Line 287, Address: 0x24b7e4, Func Offset: 0x494
	// Line 289, Address: 0x24b7ec, Func Offset: 0x49c
	// Line 285, Address: 0x24b7f4, Func Offset: 0x4a4
	// Line 287, Address: 0x24b7fc, Func Offset: 0x4ac
	// Line 289, Address: 0x24b808, Func Offset: 0x4b8
	// Line 292, Address: 0x24b810, Func Offset: 0x4c0
	// Line 297, Address: 0x24b818, Func Offset: 0x4c8
	// Func End, Address: 0x24b848, Func Offset: 0x4f8
}

// zLightningAdd__FP16_tagLightningAdd
// Start address: 0x24b850
_tagLightning* zLightningAdd(_tagLightningAdd* add)
{
	float32 scalar;
	float32 pos;
	int32 i;
	float32 currot;
	// Line 77, Address: 0x24b850, Func Offset: 0
	// Line 81, Address: 0x24b870, Func Offset: 0x20
	// Line 82, Address: 0x24b8d4, Func Offset: 0x84
	// Line 86, Address: 0x24b8d8, Func Offset: 0x88
	// Line 97, Address: 0x24b8e0, Func Offset: 0x90
	// Line 100, Address: 0x24b8e4, Func Offset: 0x94
	// Line 82, Address: 0x24b8e8, Func Offset: 0x98
	// Line 83, Address: 0x24b8ec, Func Offset: 0x9c
	// Line 84, Address: 0x24b8f8, Func Offset: 0xa8
	// Line 85, Address: 0x24b900, Func Offset: 0xb0
	// Line 86, Address: 0x24b908, Func Offset: 0xb8
	// Line 89, Address: 0x24b914, Func Offset: 0xc4
	// Line 91, Address: 0x24b91c, Func Offset: 0xcc
	// Line 92, Address: 0x24b924, Func Offset: 0xd4
	// Line 93, Address: 0x24b92c, Func Offset: 0xdc
	// Line 100, Address: 0x24b934, Func Offset: 0xe4
	// Line 106, Address: 0x24b950, Func Offset: 0x100
	// Line 107, Address: 0x24b958, Func Offset: 0x108
	// Line 116, Address: 0x24b960, Func Offset: 0x110
	// Line 119, Address: 0x24b970, Func Offset: 0x120
	// Line 120, Address: 0x24b974, Func Offset: 0x124
	// Line 119, Address: 0x24b978, Func Offset: 0x128
	// Line 120, Address: 0x24b984, Func Offset: 0x134
	// Line 123, Address: 0x24b988, Func Offset: 0x138
	// Line 120, Address: 0x24b98c, Func Offset: 0x13c
	// Line 119, Address: 0x24b994, Func Offset: 0x144
	// Line 121, Address: 0x24b998, Func Offset: 0x148
	// Line 120, Address: 0x24b99c, Func Offset: 0x14c
	// Line 123, Address: 0x24b9a0, Func Offset: 0x150
	// Line 119, Address: 0x24b9a4, Func Offset: 0x154
	// Line 123, Address: 0x24b9a8, Func Offset: 0x158
	// Line 119, Address: 0x24b9ac, Func Offset: 0x15c
	// Line 120, Address: 0x24b9b4, Func Offset: 0x164
	// Line 121, Address: 0x24b9b8, Func Offset: 0x168
	// Line 123, Address: 0x24b9bc, Func Offset: 0x16c
	// Line 120, Address: 0x24b9c0, Func Offset: 0x170
	// Line 121, Address: 0x24b9d8, Func Offset: 0x188
	// Line 123, Address: 0x24b9ec, Func Offset: 0x19c
	// Line 124, Address: 0x24b9f4, Func Offset: 0x1a4
	// Line 123, Address: 0x24b9f8, Func Offset: 0x1a8
	// Line 124, Address: 0x24b9fc, Func Offset: 0x1ac
	// Line 125, Address: 0x24ba0c, Func Offset: 0x1bc
	// Line 128, Address: 0x24ba10, Func Offset: 0x1c0
	// Line 134, Address: 0x24ba30, Func Offset: 0x1e0
	// Line 135, Address: 0x24ba34, Func Offset: 0x1e4
	// Line 141, Address: 0x24ba3c, Func Offset: 0x1ec
	// Line 143, Address: 0x24ba40, Func Offset: 0x1f0
	// Line 144, Address: 0x24ba50, Func Offset: 0x200
	// Line 148, Address: 0x24ba68, Func Offset: 0x218
	// Line 149, Address: 0x24ba70, Func Offset: 0x220
	// Line 148, Address: 0x24ba74, Func Offset: 0x224
	// Line 149, Address: 0x24ba8c, Func Offset: 0x23c
	// Line 151, Address: 0x24baa0, Func Offset: 0x250
	// Line 153, Address: 0x24bab0, Func Offset: 0x260
	// Line 157, Address: 0x24babc, Func Offset: 0x26c
	// Func End, Address: 0x24bad4, Func Offset: 0x284
}

// zLightningInit__Fv
// Start address: 0x24bae0
void zLightningInit()
{
	int32 i;
	// Line 34, Address: 0x24bae4, Func Offset: 0x4
	// Line 36, Address: 0x24baec, Func Offset: 0xc
	// Line 43, Address: 0x24bb1c, Func Offset: 0x3c
	// Func End, Address: 0x24bb24, Func Offset: 0x44
}

