typedef struct _zEnt;
typedef struct RwMatrixTag;
typedef struct _xEnv;
typedef struct iEnv;
typedef struct RxPipeline;
typedef struct xAnimFile;
typedef struct _xEnt;
typedef struct RxClusterDefinition;
typedef struct rxHeapBlockHeader;
typedef struct _tagxRumble;
typedef struct zGlobalGameStats;
typedef struct _xVec3;
typedef struct _tagxCam;
typedef struct xAnimSingle;
typedef struct RxOutputSpec;
typedef struct RpWorld;
typedef struct xAnimEffect;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCamShoulder;
typedef struct _zEntHangable;
typedef struct RxPacket;
typedef struct xAnimTransitionList;
typedef struct _xBox;
typedef struct RwSphere;
typedef struct xAnimTable;
typedef struct xModelPool;
typedef struct st_XSAVEGAME_DATA;
typedef struct xSurface;
typedef struct RxPipelineNode;
typedef struct _zEnv;
typedef struct xBase;
typedef struct p2BaseAsset;
typedef struct p2EnvAsset;
typedef struct RpLight;
typedef struct _tagxCamFollowAsset;
typedef struct xModelInstance;
typedef struct zJumpParam;
typedef struct xCamAsset;
typedef struct RpCollSector;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RwCameraProjection;
typedef struct zGlobals;
typedef struct xQCData;
typedef enum RwTextureAddressMode;
typedef struct RwFrame;
typedef struct xCutsceneTime;
typedef struct xCutsceneData;
typedef struct RxPipelineNodeParam;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwObjectHasFrame;
typedef struct RpMeshHeader;
typedef struct xFFX;
typedef struct RpMaterial;
typedef struct _tagxPad;
typedef struct xMemPool;
typedef enum _tagCamType;
typedef struct RxNodeDefinition;
typedef struct RwTexture;
typedef struct _xBBox;
typedef struct zPortalAsset;
typedef struct RxPipelineCluster;
typedef struct zAssetPickupTable;
typedef struct _xEntShadow;
typedef struct RpAtomic;
typedef struct _tagxCamStatic;
typedef struct RpTriangle;
typedef enum _tagRumbleType;
typedef struct _zCutsceneMgr;
typedef struct RwRGBA;
typedef struct _xEntFrame;
typedef struct rxHeapFreeBlock;
typedef struct RpWorldSector;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct xCutscene;
typedef struct xAnimTransition;
typedef struct zPlayerStatic;
typedef struct zScene;
typedef enum RxClusterValidityReq;
typedef struct RwLLLink;
typedef struct RxPipelineRequiresCluster;
typedef struct _tagxCamFrame;
typedef struct RpPolygon;
typedef struct RwRaster;
typedef struct xCutsceneInfo;
typedef struct RwRGBAReal;
typedef struct RwResEntry;
typedef struct RwV3d;
typedef struct RwCamera;
typedef struct _tagxCamShoulderAsset;
typedef struct xAnimState;
typedef enum _tagTransType;
typedef struct p2EntHangableAsset;
typedef struct RpMorphTarget;
typedef struct RpVertexNormal;
typedef struct p2LinkAsset;
typedef struct _xMat4x3;
typedef struct iColor_tag;
typedef struct RwV2d;
typedef struct _tagxCamStaticFollow;
typedef struct _zPlatform;
typedef struct xCutsceneBreak;
typedef enum RxClusterValid;
typedef struct _xScene;
typedef struct _xQuat;
typedef struct _zPortal;
typedef struct RwTexDictionary;
typedef enum RwTextureFilterMode;
typedef struct iShadowCache;
typedef struct RwObject;
typedef struct RpClump;
typedef struct RwFrustumPlane;
typedef enum RpWorldRenderOrder;
typedef struct _xVec4;
typedef struct p2EntAsset;
typedef struct RwBBox;
typedef struct zCutsceneZbuffer;
typedef struct _tagxCamPath;
typedef struct RwPlane;
typedef struct _tagp2CamStaticAsset;
typedef struct RwLinkList;
typedef struct _xRot;
typedef struct rxReq;
typedef struct _xBound;
typedef enum RwFogType;
typedef struct xAnimPlay;
typedef enum RxClusterForcePresent;
typedef struct zPlayerGlobals;
typedef struct tag_xFile;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct _xEntDrive;
typedef enum RxNodeDefEditable;
typedef struct _tagCamInfo;
typedef struct zCutsceneZbufferHack;
typedef struct sceCdlFILE;
typedef struct _tagp2CamStaticFollowAsset;
typedef enum _tagPadState;
typedef struct _xEntCollis;
typedef struct RpMaterialList;
typedef struct RxIoSpec;
typedef struct tag_iFile;
typedef struct _tagiPad;
typedef struct _iCollis;
typedef struct iModelTag;
typedef struct _tagxCamFollow;
typedef struct RpSector;
typedef enum eGameMode;
typedef struct RxNodeMethods;
typedef struct _xCollis;
typedef struct zShaggy1Globals;
typedef struct RxHeap;
typedef struct _tagxCamPathAsset;
typedef struct _xSphere;
typedef struct _tagPadAnalog;
typedef struct zCutsceneMgrAsset;
typedef struct RxCluster;
typedef struct RwSurfaceProperties;
typedef struct iFogParams;
typedef struct zCheckPoint;
typedef struct _xCylinder;

typedef void(*type_3)(_xEnt*);
typedef void(*type_5)(_xEnt*, _xVec3*);
typedef xBase*(*type_6)(uint32);
typedef int8*(*type_8)(xBase*);
typedef int8*(*type_11)(uint32);
typedef void(*type_18)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_21)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_25)(RxNodeDefinition*);
typedef uint32(*type_27)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_30)(RwObjectHasFrame*);
typedef void(*type_32)(RxNodeDefinition*);
typedef int32(*type_35)(RxPipelineNode*);
typedef int32(*type_39)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_40)(RxPipelineNode*);
typedef uint32(*type_43)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_46)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_51)(RwCamera*);
typedef void(*type_55)(xMemPool*, void*);
typedef uint32(*type_56)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_59)(RwCamera*);
typedef RpClump*(*type_67)(RpClump*, void*);
typedef void(*type_72)(RwResEntry*);
typedef void(*type_74)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef RpWorldSector*(*type_76)(RpWorldSector*);
typedef void(*type_78)(_xEnt*, _xScene*, float32);
typedef void(*type_81)(_xEnt*);
typedef void(*type_82)(int32);
typedef RpAtomic*(*type_85)(RpAtomic*);
typedef void(*type_89)(_xEnt*, _xVec3*);

typedef RwFrustumPlane type_0[6];
typedef int8 type_1[16];
typedef uint16 type_2[3];
typedef int8 type_4[16];
typedef RwV3d type_7[8];
typedef uint32 type_9[43];
typedef float32 type_10[4];
typedef _xVec3 type_12[2];
typedef xBase* type_13[43];
typedef RpLight* type_14[2];
typedef _xQuat type_15[2];
typedef _xCollis type_16[18];
typedef RwFrame* type_17[2];
typedef uint8 type_20[22];
typedef float32 type_22[15];
typedef uint8 type_23[22];
typedef uint8 type_24[8];
typedef float32 type_26[15];
typedef iModelTag type_28[4];
typedef uint8 type_29[8];
typedef uint32 type_31[15];
typedef uint8 type_33[8];
typedef uint8 type_34[8];
typedef int8 type_36[128];
typedef int8 type_37[128][6];
typedef RwTexCoords* type_38[8];
typedef uint8 type_41[3];
typedef uint8 type_42[3];
typedef int8 type_44[32];
typedef float32 type_45[4];
typedef RwTexCoords* type_47[8];
typedef float32 type_48[4];
typedef _xVec4 type_49[8];
typedef float32 type_50[4];
typedef int8 type_52[16];
typedef RxCluster type_53[1];
typedef float32 type_54[4];
typedef float32 type_57[4];
typedef uint32 type_58[4];
typedef float32 type_60[3];
typedef zGlobalGameStats type_61[30];
typedef float32 type_62[3];
typedef zGlobalGameStats type_63[13];
typedef _xVec3 type_64[4];
typedef zGlobalGameStats type_65[4];
typedef float32 type_66[2];
typedef _zEnt* type_68[10];
typedef uint32 type_69[1];
typedef uint8 type_70[3];
typedef int32 type_71[2];
typedef int32 type_73[2];
typedef uint32 type_75[2];
typedef uint8 type_77[3];
typedef int8 type_79[32];
typedef int8 type_80[32];
typedef zCutsceneZbuffer type_83[4];
typedef int8 type_84[16];
typedef uint8 type_86[8];
typedef int8 type_87[128];
typedef uint32 type_88[2];
typedef uint32 type_90[2];
typedef float32 type_91[4];
typedef uint32 type_92[2];
typedef float32 type_93[4];
typedef uint32 type_94[2];
typedef float32 type_95[4];
typedef uint8 type_96[2];
typedef uint16 type_97[3];

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct st_XSAVEGAME_DATA
{
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

struct _zEnv : xBase
{
	p2EnvAsset* easset;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xFFX
{
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct _tagxCamStatic
{
	uint32 unused;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct iColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct _zPlatform
{
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct rxReq
{
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct _tagiPad
{
	int32 port;
};

struct _iCollis
{
	int32 unknown;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct RpSector
{
	int32 type;
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

int32 sFirstBoot;
int32 logoTmr;
float32 time_elapsed;
float32 time_last;
float32 time_current;
uint32 sPlayerMarkerStartID;
uint32 sPlayerMarkerStartCamID;
uint32 s_dbloop_elaptick;
float32 s_dbloop_elapsec;
float32 s_dbloop_fps;
float32 sAttractMode_timer;
int32 promptSel;
int32 card;
int32 var;
int32 fullCard;
int32 sInMenu;
float32 holdTmr;
long32 t1;
eGameMode gGameMode;
uint32 gFrameCount;
uint32 gScreenDump;
zGlobals globals;
_zEnv* gCurEnv;

int32 zMenuIsFirstBoot();
void zMenuFMVPlay(int8* filename, uint32 buttons, float32 time);
uint32 zMenuGetBadCard();
int32 zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk);
uint32 zMenuLoop();
void zMenuSetup();
void zMenuExit();
void zMenuInit(uint32 theSceneID);
int32 zMenuRunning();

// zMenuIsFirstBoot__Fv
// Start address: 0x1320d0
int32 zMenuIsFirstBoot()
{
	// Line 667, Address: 0x1320d0, Func Offset: 0
	// Func End, Address: 0x1320d8, Func Offset: 0x8
}

// zMenuFMVPlay__FPcUif
// Start address: 0x1320e0
void zMenuFMVPlay(int8* filename, uint32 buttons, float32 time)
{
	// Line 649, Address: 0x1320e0, Func Offset: 0
	// Line 652, Address: 0x1320e8, Func Offset: 0x8
	// Line 659, Address: 0x1320f0, Func Offset: 0x10
	// Line 660, Address: 0x132100, Func Offset: 0x20
	// Line 661, Address: 0x132110, Func Offset: 0x30
	// Line 660, Address: 0x132114, Func Offset: 0x34
	// Line 661, Address: 0x132118, Func Offset: 0x38
	// Line 662, Address: 0x13211c, Func Offset: 0x3c
	// Func End, Address: 0x132128, Func Offset: 0x48
}

// zMenuGetBadCard__Fv
// Start address: 0x132130
uint32 zMenuGetBadCard()
{
	// Line 646, Address: 0x132130, Func Offset: 0
	// Func End, Address: 0x13213c, Func Offset: 0xc
}

// zMenuCardCheckStartup__FPiPi
// Start address: 0x132140
int32 zMenuCardCheckStartup(int32* bytesNeeded, int32* availOnDisk)
{
	int32 tgtslot;
	int32 rc;
	int32 tgtmax;
	int32 tgtcnt;
	st_XSAVEGAME_DATA* ldinst;
	// Line 525, Address: 0x132140, Func Offset: 0
	// Line 530, Address: 0x13215c, Func Offset: 0x1c
	// Line 539, Address: 0x13216c, Func Offset: 0x2c
	// Line 543, Address: 0x13217c, Func Offset: 0x3c
	// Line 548, Address: 0x1321a4, Func Offset: 0x64
	// Line 550, Address: 0x1321ac, Func Offset: 0x6c
	// Line 552, Address: 0x1321b8, Func Offset: 0x78
	// Line 556, Address: 0x1321c0, Func Offset: 0x80
	// Line 560, Address: 0x1321c8, Func Offset: 0x88
	// Line 561, Address: 0x1321e4, Func Offset: 0xa4
	// Line 564, Address: 0x1321ec, Func Offset: 0xac
	// Line 567, Address: 0x1321f4, Func Offset: 0xb4
	// Line 569, Address: 0x1321fc, Func Offset: 0xbc
	// Line 571, Address: 0x132208, Func Offset: 0xc8
	// Line 575, Address: 0x132210, Func Offset: 0xd0
	// Line 578, Address: 0x132218, Func Offset: 0xd8
	// Line 579, Address: 0x132234, Func Offset: 0xf4
	// Line 582, Address: 0x13223c, Func Offset: 0xfc
	// Line 590, Address: 0x132244, Func Offset: 0x104
	// Line 592, Address: 0x13224c, Func Offset: 0x10c
	// Line 594, Address: 0x132258, Func Offset: 0x118
	// Line 598, Address: 0x132260, Func Offset: 0x120
	// Line 601, Address: 0x132268, Func Offset: 0x128
	// Line 603, Address: 0x132284, Func Offset: 0x144
	// Line 606, Address: 0x13228c, Func Offset: 0x14c
	// Line 607, Address: 0x132294, Func Offset: 0x154
	// Line 618, Address: 0x132298, Func Offset: 0x158
	// Line 620, Address: 0x1322a4, Func Offset: 0x164
	// Line 622, Address: 0x1322a8, Func Offset: 0x168
	// Line 620, Address: 0x1322bc, Func Offset: 0x17c
	// Line 622, Address: 0x1322c0, Func Offset: 0x180
	// Func End, Address: 0x1322c8, Func Offset: 0x188
}

// zMenuLoop__Fv
// Start address: 0x1322d0
uint32 zMenuLoop()
{
	_xEnt* menu;
	xBase* title;
	int32 ss;
	int32 draw_black;
	int32 ostrich_delay;
	iColor_tag clear;
	iColor_tag black;
	// Line 166, Address: 0x1322d0, Func Offset: 0
	// Line 171, Address: 0x132300, Func Offset: 0x30
	// Line 173, Address: 0x132310, Func Offset: 0x40
	// Line 174, Address: 0x132318, Func Offset: 0x48
	// Line 176, Address: 0x132320, Func Offset: 0x50
	// Line 177, Address: 0x132328, Func Offset: 0x58
	// Line 180, Address: 0x132330, Func Offset: 0x60
	// Line 181, Address: 0x132338, Func Offset: 0x68
	// Line 182, Address: 0x132340, Func Offset: 0x70
	// Line 185, Address: 0x132348, Func Offset: 0x78
	// Line 189, Address: 0x132374, Func Offset: 0xa4
	// Line 190, Address: 0x132378, Func Offset: 0xa8
	// Line 191, Address: 0x13237c, Func Offset: 0xac
	// Line 185, Address: 0x132388, Func Offset: 0xb8
	// Line 191, Address: 0x13238c, Func Offset: 0xbc
	// Line 185, Address: 0x132390, Func Offset: 0xc0
	// Line 189, Address: 0x132398, Func Offset: 0xc8
	// Line 190, Address: 0x1323a0, Func Offset: 0xd0
	// Line 191, Address: 0x1323a4, Func Offset: 0xd4
	// Line 193, Address: 0x1323c8, Func Offset: 0xf8
	// Line 202, Address: 0x1323e0, Func Offset: 0x110
	// Line 204, Address: 0x1323f4, Func Offset: 0x124
	// Line 205, Address: 0x1323fc, Func Offset: 0x12c
	// Line 236, Address: 0x132418, Func Offset: 0x148
	// Line 237, Address: 0x132424, Func Offset: 0x154
	// Line 241, Address: 0x132440, Func Offset: 0x170
	// Line 248, Address: 0x132448, Func Offset: 0x178
	// Line 264, Address: 0x13246c, Func Offset: 0x19c
	// Line 281, Address: 0x13248c, Func Offset: 0x1bc
	// Line 306, Address: 0x1324ac, Func Offset: 0x1dc
	// Line 314, Address: 0x1324f8, Func Offset: 0x228
	// Line 315, Address: 0x132500, Func Offset: 0x230
	// Line 316, Address: 0x13250c, Func Offset: 0x23c
	// Line 317, Address: 0x132514, Func Offset: 0x244
	// Line 332, Address: 0x132538, Func Offset: 0x268
	// Line 335, Address: 0x132554, Func Offset: 0x284
	// Line 332, Address: 0x13255c, Func Offset: 0x28c
	// Line 333, Address: 0x132564, Func Offset: 0x294
	// Line 335, Address: 0x13256c, Func Offset: 0x29c
	// Line 337, Address: 0x13257c, Func Offset: 0x2ac
	// Line 347, Address: 0x132588, Func Offset: 0x2b8
	// Line 351, Address: 0x13259c, Func Offset: 0x2cc
	// Line 352, Address: 0x1325a4, Func Offset: 0x2d4
	// Line 351, Address: 0x1325ac, Func Offset: 0x2dc
	// Line 352, Address: 0x1325b0, Func Offset: 0x2e0
	// Line 355, Address: 0x1325c0, Func Offset: 0x2f0
	// Line 356, Address: 0x1325d8, Func Offset: 0x308
	// Line 358, Address: 0x1325ec, Func Offset: 0x31c
	// Line 359, Address: 0x132610, Func Offset: 0x340
	// Line 360, Address: 0x13261c, Func Offset: 0x34c
	// Line 362, Address: 0x132620, Func Offset: 0x350
	// Line 364, Address: 0x132634, Func Offset: 0x364
	// Line 367, Address: 0x132640, Func Offset: 0x370
	// Line 369, Address: 0x13268c, Func Offset: 0x3bc
	// Line 371, Address: 0x132694, Func Offset: 0x3c4
	// Line 374, Address: 0x132700, Func Offset: 0x430
	// Line 375, Address: 0x132708, Func Offset: 0x438
	// Line 377, Address: 0x13270c, Func Offset: 0x43c
	// Line 381, Address: 0x132714, Func Offset: 0x444
	// Line 382, Address: 0x13271c, Func Offset: 0x44c
	// Line 384, Address: 0x132720, Func Offset: 0x450
	// Line 385, Address: 0x132730, Func Offset: 0x460
	// Line 387, Address: 0x132734, Func Offset: 0x464
	// Line 391, Address: 0x132738, Func Offset: 0x468
	// Line 397, Address: 0x132740, Func Offset: 0x470
	// Line 398, Address: 0x13274c, Func Offset: 0x47c
	// Line 401, Address: 0x132768, Func Offset: 0x498
	// Line 407, Address: 0x132770, Func Offset: 0x4a0
	// Line 414, Address: 0x132778, Func Offset: 0x4a8
	// Line 416, Address: 0x13278c, Func Offset: 0x4bc
	// Line 419, Address: 0x132794, Func Offset: 0x4c4
	// Line 420, Address: 0x1327a0, Func Offset: 0x4d0
	// Line 423, Address: 0x1327ac, Func Offset: 0x4dc
	// Line 426, Address: 0x1327b4, Func Offset: 0x4e4
	// Line 429, Address: 0x1327bc, Func Offset: 0x4ec
	// Line 431, Address: 0x1327c4, Func Offset: 0x4f4
	// Line 434, Address: 0x1327cc, Func Offset: 0x4fc
	// Line 435, Address: 0x1327d4, Func Offset: 0x504
	// Line 436, Address: 0x1327e0, Func Offset: 0x510
	// Line 437, Address: 0x1327ec, Func Offset: 0x51c
	// Line 438, Address: 0x1327f8, Func Offset: 0x528
	// Line 445, Address: 0x132800, Func Offset: 0x530
	// Line 447, Address: 0x132808, Func Offset: 0x538
	// Line 448, Address: 0x132818, Func Offset: 0x548
	// Line 450, Address: 0x132820, Func Offset: 0x550
	// Line 451, Address: 0x132830, Func Offset: 0x560
	// Line 454, Address: 0x132838, Func Offset: 0x568
	// Line 456, Address: 0x132898, Func Offset: 0x5c8
	// Line 458, Address: 0x1328a0, Func Offset: 0x5d0
	// Line 459, Address: 0x1328a8, Func Offset: 0x5d8
	// Line 461, Address: 0x1328b0, Func Offset: 0x5e0
	// Line 463, Address: 0x1328b8, Func Offset: 0x5e8
	// Line 467, Address: 0x1328d0, Func Offset: 0x600
	// Func End, Address: 0x132904, Func Offset: 0x634
}

// zMenuSetup__Fv
// Start address: 0x132910
void zMenuSetup()
{
	// Line 134, Address: 0x132910, Func Offset: 0
	// Line 135, Address: 0x132918, Func Offset: 0x8
	// Line 136, Address: 0x132920, Func Offset: 0x10
	// Line 139, Address: 0x132930, Func Offset: 0x20
	// Line 142, Address: 0x132934, Func Offset: 0x24
	// Line 147, Address: 0x13293c, Func Offset: 0x2c
	// Line 148, Address: 0x132944, Func Offset: 0x34
	// Line 151, Address: 0x132954, Func Offset: 0x44
	// Line 154, Address: 0x132968, Func Offset: 0x58
	// Line 158, Address: 0x13297c, Func Offset: 0x6c
	// Line 160, Address: 0x132988, Func Offset: 0x78
	// Func End, Address: 0x132998, Func Offset: 0x88
}

// zMenuExit__Fv
// Start address: 0x1329a0
void zMenuExit()
{
	// Line 122, Address: 0x1329a0, Func Offset: 0
	// Line 123, Address: 0x1329a8, Func Offset: 0x8
	// Line 124, Address: 0x1329b0, Func Offset: 0x10
	// Line 125, Address: 0x1329c0, Func Offset: 0x20
	// Line 127, Address: 0x1329c8, Func Offset: 0x28
	// Line 128, Address: 0x1329d0, Func Offset: 0x30
	// Line 129, Address: 0x1329d8, Func Offset: 0x38
	// Line 130, Address: 0x1329dc, Func Offset: 0x3c
	// Func End, Address: 0x1329ec, Func Offset: 0x4c
}

// zMenuInit__FUi
// Start address: 0x1329f0
void zMenuInit(uint32 theSceneID)
{
	// Line 92, Address: 0x1329f0, Func Offset: 0
	// Line 93, Address: 0x1329fc, Func Offset: 0xc
	// Line 94, Address: 0x132a04, Func Offset: 0x14
	// Line 95, Address: 0x132a18, Func Offset: 0x28
	// Line 96, Address: 0x132a20, Func Offset: 0x30
	// Line 100, Address: 0x132a28, Func Offset: 0x38
	// Line 101, Address: 0x132a30, Func Offset: 0x40
	// Line 104, Address: 0x132a38, Func Offset: 0x48
	// Line 107, Address: 0x132a50, Func Offset: 0x60
	// Line 109, Address: 0x132a60, Func Offset: 0x70
	// Line 110, Address: 0x132a68, Func Offset: 0x78
	// Func End, Address: 0x132a78, Func Offset: 0x88
}

// zMenuRunning__Fv
// Start address: 0x132a80
int32 zMenuRunning()
{
	// Line 78, Address: 0x132a80, Func Offset: 0
	// Func End, Address: 0x132a88, Func Offset: 0x8
}

