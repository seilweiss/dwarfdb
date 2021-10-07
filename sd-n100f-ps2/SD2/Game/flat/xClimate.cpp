typedef struct xAnimEffect;
typedef struct _tagxCamPath;
typedef struct _xEnt;
typedef struct _tagxPad;
typedef struct RxClusterDefinition;
typedef struct xCutsceneData;
typedef struct _tagp2CamStaticAsset;
typedef struct rxHeapBlockHeader;
typedef struct _zEnt;
typedef enum RpWorldRenderOrder;
typedef struct _tagxCam;
typedef struct RpClump;
typedef struct RxOutputSpec;
typedef struct zParEmitterAsset;
typedef struct xAnimTransitionList;
typedef struct _tagClimate;
typedef enum rxEmbeddedPacketState;
typedef struct _xCylinder;
typedef struct xAnimTable;
typedef struct RxPacket;
typedef struct zScene;
typedef struct xParGroup;
typedef struct RpCollSector;
typedef struct zAssetPickupTable;
typedef enum RwTextureAddressMode;
typedef struct zPortalAsset;
typedef struct _tagRain;
typedef struct RpMeshHeader;
typedef struct xCutsceneBreak;
typedef struct _xVec3;
typedef struct _tagEmitSphere;
typedef struct RxPipeline;
typedef struct RxPipelineNode;
typedef struct p2EnvAsset;
typedef struct _zPortal;
typedef struct xCutsceneTime;
typedef struct _zCutsceneMgr;
typedef struct zPlayerStatic;
typedef struct _xBox;
typedef struct xModelInstance;
typedef struct _xEntDrive;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimActiveEffect;
typedef struct _xCollis;
typedef struct xMemPool;
typedef struct RpWorldSector;
typedef struct RxPipelineNodeParam;
typedef struct _zParEmitter;
typedef struct xSurface;
typedef struct RxPipelineNodeTopSortData;
typedef enum RwCameraProjection;
typedef struct _xEnv;
typedef struct xModelPool;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct xFFX;
typedef struct RxNodeDefinition;
typedef struct xAnimSingle;
typedef enum _tagRumbleType;
typedef struct RpWorld;
typedef struct _zPlatform;
typedef struct RxPipelineCluster;
typedef struct xParCmdTex;
typedef struct RwObjectHasFrame;
typedef struct xBase;
typedef struct xQCData;
typedef struct RpGeometry;
typedef struct zCutsceneZbuffer;
typedef struct iEnv;
typedef struct xAnimPlay;
typedef struct _tagEmitRect;
typedef struct RpVertexNormal;
typedef struct RpAtomic;
typedef struct RpMaterialList;
typedef struct _tagxCamFollow;
typedef struct RwLLLink;
typedef struct _xEntShadow;
typedef struct RwRGBAReal;
typedef struct RpMorphTarget;
typedef struct _xMat3x3;
typedef struct RpMaterial;
typedef struct rxHeapFreeBlock;
typedef struct _xBBox;
typedef struct xAnimTransition;
typedef struct _tagWind;
typedef struct RpSector;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct RpLight;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct _tagxCamPathAsset;
typedef struct xAnimState;
typedef struct RwMatrixTag;
typedef struct RwV3d;
typedef struct xPar;
typedef struct RwFrame;
typedef struct tag_xFile;
typedef struct _xEntFrame;
typedef struct iFogParams;
typedef struct sceCdlFILE;
typedef struct zCutsceneZbufferHack;
typedef struct xCutsceneInfo;
typedef struct _tagEmitLine;
typedef struct RwCamera;
typedef enum RwTextureFilterMode;
typedef struct RpPolygon;
typedef struct RwRaster;
typedef struct RwObject;
typedef struct p2LinkAsset;
typedef struct p2EntHangableAsset;
typedef struct _xMat4x3;
typedef enum RxClusterValid;
typedef struct tag_iFile;
typedef struct RpTriangle;
typedef struct _tagxCamShoulder;
typedef struct RwRGBA;
typedef struct zPlayerGlobals;
typedef struct RwPlane;
typedef struct iModelTag;
typedef struct _xQuat;
typedef struct RwTexDictionary;
typedef struct RwLinkList;
typedef struct _tagxCamFollowAsset;
typedef struct zCutsceneMgrAsset;
typedef struct _tagxRumble;
typedef struct RwFrustumPlane;
typedef struct xCamAsset;
typedef struct _tagEmitVolume;
typedef struct xParCmdAsset;
typedef struct iShadowCache;
typedef struct _zParEmitterCustomSettings;
typedef struct _xVec4;
typedef struct xCutscene;
typedef enum _tagCamType;
typedef struct rxReq;
typedef enum RwFogType;
typedef struct p2EntAsset;
typedef struct _xScene;
typedef struct RwBBox;
typedef struct _xRot;
typedef struct RwTexCoords;
typedef struct RwTexture;
typedef struct _tagxCamStatic;
typedef enum RxClusterForcePresent;
typedef enum _tagPadState;
typedef struct zShaggy1Globals;
typedef struct _xBound;
typedef struct _tagEmitOffsetPoint;
typedef struct xAnimFile;
typedef struct _tagiPad;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct zCheckPoint;
typedef struct _tagxCamFrame;
typedef struct RpInterpolator;
typedef struct RxIoSpec;
typedef struct _tagxCamShoulderAsset;
typedef struct p2BaseAsset;
typedef enum _tagTransType;
typedef struct zGlobalGameStats;
typedef struct _iCollis;
typedef struct _zEntHangable;
typedef struct RxNodeMethods;
typedef struct _xEntCollis;
typedef struct _tagxCamStaticFollow;
typedef struct _tagPadAnalog;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct zJumpParam;
typedef struct RxCluster;
typedef struct _xSphere;
typedef struct _tagEmitCircle;
typedef struct zGlobals;
typedef struct RwSphere;

typedef RpClump*(*type_3)(RpClump*, void*);
typedef void(*type_5)(_xEnt*);
typedef void(*type_11)(_xEnt*, _xVec3*);
typedef int32(*type_18)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpWorldSector*(*type_19)(RpWorldSector*);
typedef uint32(*type_20)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_22)(RxNodeDefinition*);
typedef xBase*(*type_25)(uint32);
typedef void(*type_26)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int8*(*type_29)(xBase*);
typedef void(*type_30)(RxNodeDefinition*);
typedef uint32(*type_31)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int8*(*type_33)(uint32);
typedef void(*type_35)(void*, xParGroup*);
typedef RwObjectHasFrame*(*type_37)(RwObjectHasFrame*);
typedef int32(*type_38)(RxPipelineNode*);
typedef RpAtomic*(*type_40)(RpAtomic*);
typedef void(*type_45)(RxPipelineNode*);
typedef uint32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_55)(RxPipelineNode*, RxPipeline*);
typedef void(*type_56)(xMemPool*, void*);
typedef void(*type_58)(int32);
typedef RwCamera*(*type_69)(RwCamera*);
typedef uint32(*type_71)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_77)(RwCamera*);
typedef void(*type_82)(RwResEntry*);
typedef void(*type_94)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_99)(_xEnt*, _xScene*, float32);
typedef int32(*type_101)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_104)(_xEnt*);
typedef void(*type_110)(_xEnt*, _xVec3*);

typedef iModelTag type_0[4];
typedef RwFrustumPlane type_1[6];
typedef _xVec3 type_2[2];
typedef RwV3d type_4[8];
typedef uint8 type_6[3];
typedef uint8 type_7[3];
typedef _xQuat type_8[2];
typedef int8 type_9[16];
typedef uint8 type_10[22];
typedef uint32 type_12[2];
typedef uint8 type_13[22];
typedef uint8 type_14[3];
typedef int8 type_15[128];
typedef int8 type_16[128][6];
typedef uint8 type_17[3];
typedef float32 type_21[4];
typedef _xCollis type_23[18];
typedef float32 type_24[4];
typedef int8 type_27[32];
typedef float32 type_28[4];
typedef float32 type_32[4];
typedef uint8 type_34[8];
typedef float32 type_36[4];
typedef uint8 type_39[8];
typedef float32 type_41[3];
typedef uint8 type_42[8];
typedef uint8 type_43[4];
typedef float32 type_44[3];
typedef RpLight* type_46[2];
typedef uint8 type_47[8];
typedef uint8 type_48[4];
typedef RwFrame* type_50[2];
typedef zGlobalGameStats type_51[30];
typedef zGlobalGameStats type_52[13];
typedef uint32 type_53[1];
typedef _zEnt* type_54[10];
typedef zGlobalGameStats type_57[4];
typedef int32 type_59[2];
typedef uint8 type_60[3];
typedef int8 type_61[16];
typedef int32 type_62[2];
typedef zCutsceneZbuffer type_63[4];
typedef RxCluster type_64[1];
typedef uint8 type_65[4];
typedef uint16 type_66[3];
typedef uint8 type_67[8];
typedef uint32 type_68[43];
typedef uint8 type_70[2];
typedef int8 type_72[128];
typedef xBase* type_73[43];
typedef uint32 type_74[4];
typedef uint16 type_75[3];
typedef uint32 type_76[2];
typedef uint32 type_78[2];
typedef float32 type_79[2];
typedef uint32 type_80[2];
typedef float32 type_81[4];
typedef float32 type_83[4];
typedef uint8 type_84[2];
typedef uint8 type_85[3];
typedef _xVec3 type_86[4];
typedef uint32 type_87[2];
typedef int8 type_88[16];
typedef int8 type_89[16];
typedef uint8 type_90[3];
typedef float32 type_91[4];
typedef uint8 type_92[4];
typedef uint8 type_93[4];
typedef int8 type_95[32];
typedef RwTexCoords* type_96[8];
typedef int8 type_97[32];
typedef uint8 type_98[2];
typedef float32 type_100[15];
typedef uint8 type_102[3];
typedef float32 type_103[15];
typedef _xVec4 type_105[8];
typedef uint32 type_106[15];
typedef float32 type_107[4];
typedef RwTexCoords* type_108[8];
typedef float32 type_109[4];
typedef uint8 type_111[2];

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagClimate
{
	_tagRain rain;
	_tagWind wind;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct _tagRain
{
	int32 rain;
	float32 strength;
	_zParEmitter* rain_emitter;
	_zParEmitter* snow_emitter;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagEmitSphere
{
	float32 radius;
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

struct p2EnvAsset : p2BaseAsset
{
	uint32 bspAssetID;
	uint32 startCameraAssetID;
	uint32 climateFlags;
	float32 climateStrengthMin;
	float32 climateStrengthMax;
	float32 padF1;
	float32 padF2;
	float32 padF3;
	uint32 bspCollisionAssetID;
	uint32 bspFXAssetID;
	uint32 bspCameraAssetID;
	uint32 bspMapperID;
	uint32 bspMapperCollisionID;
	uint32 bspMapperFXID;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xFFX
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

struct _zPlatform
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct _tagWind
{
	float32 strength;
	float32 angle;
	_xVec3 dir;
};

struct RpSector
{
	int32 type;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwLinkList
{
	RwLLLink link;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct rxReq
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct _tagxCamStatic
{
	uint32 unused;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
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

struct _tagiPad
{
	int32 port;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _iCollis
{
	int32 unknown;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

_tagClimate* sClimate;
zGlobals globals;
_xMat4x3 g_I3;

void xClimateGetRealWindDir(_tagClimate* climate, _xVec3* vec);
void xClimateUpdate(_tagClimate* climate, float32 seconds);
void UpdateRain(_tagClimate* climate, float32 seconds);
void xClimateSetRain(float32 stre);
void xClimateSetSnow(float32 stre);
void xClimateInitAsset(_tagClimate* climate, p2EnvAsset* easset);
void xClimateInit(_tagClimate* climate);

// xClimateGetRealWindDir__FP11_tagClimateP6_xVec3
// Start address: 0x24a4f0
void xClimateGetRealWindDir(_tagClimate* climate, _xVec3* vec)
{
	// Line 400, Address: 0x24a4f0, Func Offset: 0
	// Line 401, Address: 0x24a500, Func Offset: 0x10
	// Line 402, Address: 0x24a504, Func Offset: 0x14
	// Line 403, Address: 0x24a510, Func Offset: 0x20
	// Func End, Address: 0x24a518, Func Offset: 0x28
}

// xClimateUpdate__FP11_tagClimatef
// Start address: 0x24a520
void xClimateUpdate(_tagClimate* climate, float32 seconds)
{
	// Line 385, Address: 0x24a520, Func Offset: 0
	// Func End, Address: 0x24a528, Func Offset: 0x8
}

// UpdateRain__FP11_tagClimatef
// Start address: 0x24a530
void UpdateRain(_tagClimate* climate, float32 seconds)
{
	float32 perc;
	int32 i;
	int32 total_snow_flakes;
	int32 i;
	int32 i;
	int32 i;
	int32 i;
	int32 total_rain_drops;
	_zParEmitterCustomSettings info;
	// Line 214, Address: 0x24a530, Func Offset: 0
	// Line 257, Address: 0x24a564, Func Offset: 0x34
	// Line 259, Address: 0x24a56c, Func Offset: 0x3c
	// Line 268, Address: 0x24a57c, Func Offset: 0x4c
	// Line 261, Address: 0x24a584, Func Offset: 0x54
	// Line 268, Address: 0x24a590, Func Offset: 0x60
	// Line 261, Address: 0x24a5a8, Func Offset: 0x78
	// Line 268, Address: 0x24a5ac, Func Offset: 0x7c
	// Line 261, Address: 0x24a5c0, Func Offset: 0x90
	// Line 268, Address: 0x24a5c4, Func Offset: 0x94
	// Line 261, Address: 0x24a5dc, Func Offset: 0xac
	// Line 268, Address: 0x24a5e0, Func Offset: 0xb0
	// Line 270, Address: 0x24a5ec, Func Offset: 0xbc
	// Line 272, Address: 0x24a5f0, Func Offset: 0xc0
	// Line 273, Address: 0x24a600, Func Offset: 0xd0
	// Line 274, Address: 0x24a610, Func Offset: 0xe0
	// Line 277, Address: 0x24a61c, Func Offset: 0xec
	// Line 278, Address: 0x24a634, Func Offset: 0x104
	// Line 277, Address: 0x24a638, Func Offset: 0x108
	// Line 278, Address: 0x24a644, Func Offset: 0x114
	// Line 277, Address: 0x24a648, Func Offset: 0x118
	// Line 278, Address: 0x24a650, Func Offset: 0x120
	// Line 279, Address: 0x24a658, Func Offset: 0x128
	// Line 281, Address: 0x24a668, Func Offset: 0x138
	// Line 279, Address: 0x24a66c, Func Offset: 0x13c
	// Line 281, Address: 0x24a688, Func Offset: 0x158
	// Line 282, Address: 0x24a694, Func Offset: 0x164
	// Line 284, Address: 0x24a6a4, Func Offset: 0x174
	// Line 286, Address: 0x24a6a8, Func Offset: 0x178
	// Line 289, Address: 0x24a6c4, Func Offset: 0x194
	// Line 290, Address: 0x24a6dc, Func Offset: 0x1ac
	// Line 289, Address: 0x24a6e0, Func Offset: 0x1b0
	// Line 290, Address: 0x24a6ec, Func Offset: 0x1bc
	// Line 289, Address: 0x24a6f4, Func Offset: 0x1c4
	// Line 290, Address: 0x24a6fc, Func Offset: 0x1cc
	// Line 291, Address: 0x24a704, Func Offset: 0x1d4
	// Line 293, Address: 0x24a714, Func Offset: 0x1e4
	// Line 291, Address: 0x24a718, Func Offset: 0x1e8
	// Line 293, Address: 0x24a734, Func Offset: 0x204
	// Line 294, Address: 0x24a740, Func Offset: 0x210
	// Line 296, Address: 0x24a750, Func Offset: 0x220
	// Line 298, Address: 0x24a758, Func Offset: 0x228
	// Line 302, Address: 0x24a798, Func Offset: 0x268
	// Line 303, Address: 0x24a7b0, Func Offset: 0x280
	// Line 302, Address: 0x24a7b4, Func Offset: 0x284
	// Line 303, Address: 0x24a7c0, Func Offset: 0x290
	// Line 302, Address: 0x24a7c8, Func Offset: 0x298
	// Line 303, Address: 0x24a7d0, Func Offset: 0x2a0
	// Line 304, Address: 0x24a7d8, Func Offset: 0x2a8
	// Line 306, Address: 0x24a7e8, Func Offset: 0x2b8
	// Line 304, Address: 0x24a7ec, Func Offset: 0x2bc
	// Line 306, Address: 0x24a808, Func Offset: 0x2d8
	// Line 307, Address: 0x24a814, Func Offset: 0x2e4
	// Line 310, Address: 0x24a824, Func Offset: 0x2f4
	// Line 313, Address: 0x24a82c, Func Offset: 0x2fc
	// Line 315, Address: 0x24a834, Func Offset: 0x304
	// Line 318, Address: 0x24a880, Func Offset: 0x350
	// Line 319, Address: 0x24a898, Func Offset: 0x368
	// Line 318, Address: 0x24a89c, Func Offset: 0x36c
	// Line 319, Address: 0x24a8a8, Func Offset: 0x378
	// Line 318, Address: 0x24a8b0, Func Offset: 0x380
	// Line 319, Address: 0x24a8b8, Func Offset: 0x388
	// Line 320, Address: 0x24a8c0, Func Offset: 0x390
	// Line 322, Address: 0x24a8d0, Func Offset: 0x3a0
	// Line 320, Address: 0x24a8d4, Func Offset: 0x3a4
	// Line 322, Address: 0x24a8f0, Func Offset: 0x3c0
	// Line 323, Address: 0x24a8fc, Func Offset: 0x3cc
	// Line 325, Address: 0x24a90c, Func Offset: 0x3dc
	// Line 329, Address: 0x24a914, Func Offset: 0x3e4
	// Line 336, Address: 0x24a920, Func Offset: 0x3f0
	// Line 340, Address: 0x24a924, Func Offset: 0x3f4
	// Line 329, Address: 0x24a92c, Func Offset: 0x3fc
	// Line 340, Address: 0x24a930, Func Offset: 0x400
	// Line 342, Address: 0x24a934, Func Offset: 0x404
	// Line 329, Address: 0x24a938, Func Offset: 0x408
	// Line 340, Address: 0x24a93c, Func Offset: 0x40c
	// Line 329, Address: 0x24a944, Func Offset: 0x414
	// Line 336, Address: 0x24a948, Func Offset: 0x418
	// Line 340, Address: 0x24a950, Func Offset: 0x420
	// Line 342, Address: 0x24a96c, Func Offset: 0x43c
	// Line 340, Address: 0x24a970, Func Offset: 0x440
	// Line 342, Address: 0x24a980, Func Offset: 0x450
	// Line 344, Address: 0x24a988, Func Offset: 0x458
	// Line 347, Address: 0x24a99c, Func Offset: 0x46c
	// Line 348, Address: 0x24a9c8, Func Offset: 0x498
	// Line 353, Address: 0x24a9e0, Func Offset: 0x4b0
	// Line 354, Address: 0x24a9e8, Func Offset: 0x4b8
	// Line 359, Address: 0x24a9ec, Func Offset: 0x4bc
	// Line 348, Address: 0x24a9f0, Func Offset: 0x4c0
	// Line 356, Address: 0x24a9fc, Func Offset: 0x4cc
	// Line 353, Address: 0x24aa00, Func Offset: 0x4d0
	// Line 348, Address: 0x24aa04, Func Offset: 0x4d4
	// Line 357, Address: 0x24aa08, Func Offset: 0x4d8
	// Line 348, Address: 0x24aa0c, Func Offset: 0x4dc
	// Line 353, Address: 0x24aa10, Func Offset: 0x4e0
	// Line 354, Address: 0x24aa18, Func Offset: 0x4e8
	// Line 356, Address: 0x24aa1c, Func Offset: 0x4ec
	// Line 357, Address: 0x24aa24, Func Offset: 0x4f4
	// Line 353, Address: 0x24aa28, Func Offset: 0x4f8
	// Line 354, Address: 0x24aa38, Func Offset: 0x508
	// Line 356, Address: 0x24aa3c, Func Offset: 0x50c
	// Line 357, Address: 0x24aa4c, Func Offset: 0x51c
	// Line 359, Address: 0x24aa58, Func Offset: 0x528
	// Line 360, Address: 0x24aa64, Func Offset: 0x534
	// Line 361, Address: 0x24aa74, Func Offset: 0x544
	// Line 362, Address: 0x24aa78, Func Offset: 0x548
	// Func End, Address: 0x24aab0, Func Offset: 0x580
}

// xClimateSetRain__Ff
// Start address: 0x24aab0
void xClimateSetRain(float32 stre)
{
	// Line 165, Address: 0x24aab0, Func Offset: 0
	// Line 166, Address: 0x24aac0, Func Offset: 0x10
	// Line 167, Address: 0x24aac4, Func Offset: 0x14
	// Func End, Address: 0x24aacc, Func Offset: 0x1c
}

// xClimateSetSnow__Ff
// Start address: 0x24aad0
void xClimateSetSnow(float32 stre)
{
	// Line 158, Address: 0x24aad0, Func Offset: 0
	// Line 159, Address: 0x24aadc, Func Offset: 0xc
	// Line 160, Address: 0x24aae0, Func Offset: 0x10
	// Func End, Address: 0x24aae8, Func Offset: 0x18
}

// xClimateInitAsset__FP11_tagClimateP10p2EnvAsset
// Start address: 0x24aaf0
void xClimateInitAsset(_tagClimate* climate, p2EnvAsset* easset)
{
	_tagWind* w;
	// Line 105, Address: 0x24aaf0, Func Offset: 0
	// Line 112, Address: 0x24ab0c, Func Offset: 0x1c
	// Line 117, Address: 0x24ab10, Func Offset: 0x20
	// Line 118, Address: 0x24ab14, Func Offset: 0x24
	// Line 116, Address: 0x24ab28, Func Offset: 0x38
	// Line 118, Address: 0x24ab2c, Func Offset: 0x3c
	// Line 122, Address: 0x24ab8c, Func Offset: 0x9c
	// Line 125, Address: 0x24ab98, Func Offset: 0xa8
	// Line 127, Address: 0x24ab9c, Func Offset: 0xac
	// Line 128, Address: 0x24aba4, Func Offset: 0xb4
	// Line 131, Address: 0x24abac, Func Offset: 0xbc
	// Line 132, Address: 0x24abb4, Func Offset: 0xc4
	// Line 133, Address: 0x24abd4, Func Offset: 0xe4
	// Line 134, Address: 0x24abe0, Func Offset: 0xf0
	// Line 135, Address: 0x24abe8, Func Offset: 0xf8
	// Line 138, Address: 0x24abf0, Func Offset: 0x100
	// Line 139, Address: 0x24abf4, Func Offset: 0x104
	// Line 140, Address: 0x24ac14, Func Offset: 0x124
	// Line 152, Address: 0x24ac24, Func Offset: 0x134
	// Func End, Address: 0x24ac40, Func Offset: 0x150
}

// xClimateInit__FP11_tagClimate
// Start address: 0x24ac40
void xClimateInit(_tagClimate* climate)
{
	// Line 83, Address: 0x24ac40, Func Offset: 0
	// Line 86, Address: 0x24ac4c, Func Offset: 0xc
	// Line 87, Address: 0x24ac54, Func Offset: 0x14
	// Line 89, Address: 0x24ac6c, Func Offset: 0x2c
	// Line 91, Address: 0x24ac70, Func Offset: 0x30
	// Line 89, Address: 0x24ac78, Func Offset: 0x38
	// Line 91, Address: 0x24ac80, Func Offset: 0x40
	// Line 93, Address: 0x24ac94, Func Offset: 0x54
	// Line 98, Address: 0x24aca4, Func Offset: 0x64
	// Func End, Address: 0x24acb4, Func Offset: 0x74
}

