typedef struct _xScene;
typedef struct RwV3d;
typedef enum RxClusterValidityReq;
typedef struct _xBound;
typedef struct RwLLLink;
typedef struct RxPipelineCluster;
typedef struct _tagxCam;
typedef struct RwRaster;
typedef struct xAnimTransitionList;
typedef struct xModelInstance;
typedef struct xAnimTable;
typedef struct xAnimFile;
typedef struct _tagxCamFrame;
typedef struct zScene;
typedef struct _xRay3;
typedef struct _xEntFrame;
typedef struct RwSphere;
typedef struct RxClusterDefinition;
typedef struct RpSector;
typedef struct rxHeapBlockHeader;
typedef struct _xMat3x3;
typedef struct _tagxRumble;
typedef struct _zPlatform;
typedef struct RwFrame;
typedef struct _xEnt;
typedef struct xBase;
typedef struct _xVec3;
typedef struct RxOutputSpec;
typedef struct RpClump;
typedef enum rxEmbeddedPacketState;
typedef struct iModelTag;
typedef struct RxPacket;
typedef struct xAnimTransition;
typedef struct _tagxCamPathAsset;
typedef struct xModelPool;
typedef struct RpLight;
typedef enum RwTextureAddressMode;
typedef struct _xSphere;
typedef struct _zPortal;
typedef struct RpPolygon;
typedef struct xAnimSingle;
typedef struct RxPipelineNode;
typedef struct RpTriangle;
typedef struct xAnimPlay;
typedef struct p2MarkerAsset;
typedef struct RpAtomic;
typedef struct _xVec2;
typedef struct zPortalAsset;
typedef struct tag_xFile;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xEntCollis;
typedef struct RxPipeline;
typedef struct xAnimState;
typedef struct RxPipelineNodeParam;
typedef struct _xEnv;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct zCutsceneZbufferHack;
typedef struct RxPipelineNodeTopSortData;
typedef struct p2EntHangableAsset;
typedef struct _zEnt;
typedef struct _xCylinder;
typedef struct iEnv;
typedef struct _tagxCamShoulder;
typedef struct RxNodeDefinition;
typedef struct tag_iFile;
typedef struct RwMatrixTag;
typedef struct _xBox;
typedef struct _xCollis;
typedef struct _tagxCamFollowAsset;
typedef struct xAnimEffect;
typedef enum _tagRumbleType;
typedef struct xCamAsset;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct RpCollSector;
typedef struct RpWorld;
typedef enum RwCameraProjection;
typedef struct _zCutsceneMgr;
typedef struct zPlayerGlobals;
typedef struct zCutsceneMgrAsset;
typedef struct xSurface;
typedef struct RpMeshHeader;
typedef enum _tagCamType;
typedef struct RpMaterial;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct iFogParams;
typedef struct RwTexture;
typedef struct xCutscene;
typedef struct p2EntAsset;
typedef struct p2LinkAsset;
typedef struct _zEntHangable;
typedef struct xAnimActiveEffect;
typedef struct p2BaseAsset;
typedef struct _xMat4x3;
typedef struct xMemPool;
typedef struct RwRGBA;
typedef struct _tagxCamStatic;
typedef struct RpInterpolator;
typedef enum RwTextureFilterMode;
typedef struct RwTexCoords;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct RpWorldSector;
typedef struct RwResEntry;
typedef struct xQCData;
typedef struct RpMorphTarget;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct zShaggy1Globals;
typedef struct RwPlane;
typedef struct RwCamera;
typedef struct xFFX;
typedef struct xCutsceneData;
typedef struct RwLinkList;
typedef struct RpVertexNormal;
typedef struct xCutsceneTime;
typedef struct _tagxCamStaticFollow;
typedef struct _xBBox;
typedef struct _iCollis;
typedef struct zCheckPoint;
typedef struct _xEntShadow;
typedef struct rxReq;
typedef enum RwFogType;
typedef struct RwTexDictionary;
typedef struct zGlobalGameStats;
typedef struct _xQuat;
typedef enum RpWorldRenderOrder;
typedef struct zAssetPickupTable;
typedef enum RxClusterForcePresent;
typedef struct RwFrustumPlane;
typedef struct _xVec4;
typedef struct _tagxCamPath;
typedef struct _tagp2CamStaticAsset;
typedef struct RwBBox;
typedef struct zJumpParam;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef enum _tagPadState;
typedef struct RxIoSpec;
typedef struct _xRot;
typedef struct zGlobals;
typedef struct _tagiPad;
typedef struct _tagxPad;
typedef struct RxNodeMethods;
typedef struct xCutsceneBreak;
typedef struct iShadowCache;
typedef struct RpGeometry;
typedef struct RwSurfaceProperties;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct RxHeap;
typedef struct _tagPadAnalog;
typedef struct zPlayerStatic;
typedef struct RpMaterialList;
typedef struct RxCluster;
typedef struct _xEntDrive;
typedef struct _tagxCamFollow;
typedef struct zCutsceneZbuffer;

typedef void(*type_1)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_3)(_xEnt*);
typedef RpAtomic*(*type_8)(RpAtomic*);
typedef void(*type_9)(_xEnt*, _xScene*, float32);
typedef RpWorldSector*(*type_12)(RpWorldSector*);
typedef void(*type_14)(_xEnt*);
typedef int32(*type_20)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_21)(_xEnt*);
typedef void(*type_23)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_24)(int32);
typedef int32(*type_29)(RxNodeDefinition*);
typedef void(*type_35)(_xEnt*, _xVec3*);
typedef void(*type_40)(RxNodeDefinition*);
typedef uint32(*type_43)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_45)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_46)(RxPipelineNode*);
typedef void(*type_52)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_55)(RwObjectHasFrame*);
typedef void(*type_56)(_xEnt*, _xVec3*);
typedef int32(*type_57)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_62)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_65)(xMemPool*, void*);
typedef uint32(*type_66)(RxPipelineNode*, uint32, uint32, void*);
typedef xBase*(*type_69)(uint32);
typedef int8*(*type_72)(xBase*);
typedef void(*type_75)(RwResEntry*);
typedef int8*(*type_79)(uint32);
typedef uint32(*type_80)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_82)(RwCamera*);
typedef RwCamera*(*type_85)(RwCamera*);
typedef RpClump*(*type_87)(RpClump*, void*);

typedef float32 type_0[4];
typedef float32 type_2[4];
typedef float32 type_4[4];
typedef int8 type_5[32];
typedef float32 type_6[4];
typedef float32 type_7[4];
typedef float32 type_10[4];
typedef float32 type_11[4];
typedef float32 type_13[3];
typedef float32 type_15[4];
typedef uint16 type_16[3];
typedef float32 type_17[3];
typedef float32 type_18[4];
typedef uint16 type_19[3];
typedef uint8 type_22[22];
typedef RwFrustumPlane type_25[6];
typedef zGlobalGameStats type_26[30];
typedef uint8 type_27[2];
typedef uint8 type_28[22];
typedef zCutsceneZbuffer type_30[4];
typedef int8 type_31[16];
typedef zGlobalGameStats type_32[13];
typedef _zEnt* type_33[10];
typedef uint32 type_34[1];
typedef RwV3d type_36[8];
typedef uint8 type_37[8];
typedef zGlobalGameStats type_38[4];
typedef int32 type_39[2];
typedef int8 type_41[128];
typedef int32 type_42[2];
typedef uint32 type_44[2];
typedef uint32 type_47[43];
typedef uint32 type_48[2];
typedef xBase* type_49[43];
typedef uint32 type_50[2];
typedef _xVec3 type_51[2];
typedef _xQuat type_53[2];
typedef RpLight* type_54[2];
typedef int8 type_58[16];
typedef RwFrame* type_59[2];
typedef RwTexCoords* type_60[8];
typedef int8 type_61[16];
typedef RxCluster type_63[1];
typedef uint32 type_64[2];
typedef _xCollis type_67[18];
typedef uint32 type_68[4];
typedef uint8 type_70[8];
typedef RwTexCoords* type_71[8];
typedef _xVec4 type_73[8];
typedef float32 type_74[15];
typedef uint8 type_76[8];
typedef uint8 type_77[3];
typedef float32 type_78[15];
typedef uint8 type_81[8];
typedef uint32 type_83[15];
typedef uint8 type_84[8];
typedef uint8 type_86[3];
typedef float32 type_88[2];
typedef iModelTag type_89[4];
typedef uint32 type_90[2];
typedef int8 type_91[16];
typedef uint8 type_92[3];
typedef int8 type_93[32];
typedef _xVec3 type_94[4];
typedef int8 type_95[32];
typedef int8 type_96[128];
typedef int8 type_97[128][6];
typedef uint8 type_98[3];

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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpSector
{
	int32 type;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct _zPlatform
{
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct p2MarkerAsset
{
	_xVec3 pos;
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

struct _xVec2
{
	float32 x;
	float32 y;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _tagxCamStatic
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RwLinkList
{
	RwLLLink link;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _iCollis
{
	int32 unknown;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct _tagiPad
{
	int32 port;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

_xVec3 sTargetPos;
_xVec3 sLastTargetPos;
_xVec3 sLastCamPos;
int32 sOnGround;
float32 sGroundHeight;
float32 sCurXOffset;
float32 sCurYOffset;
int32 sControllerStill;
float32 gCameraLastFov;
int32 sCamDebugInfoLevel;
uint32 sCamDebugFixInterp;
_xVec3 sDummyTargetPos;
_xMat4x3 sDummyTargetFrame;
int32 sDXLeft;
int32 sDXRight;
int32 sDYUp;
int32 sDYDown;
float32 sShoulderTimer;
zGlobals globals;
uint32 gActiveHeap;
void(*xCameraSeeThruCallback)(_xEnt*);
_xScene* g_xSceneCur;
_xVec3 gPlayerWaterPos;
int32 gPlayerHitWater;
_xVec3 gDeadScoobyPos;
int32 gDeadScooby;
_xMat4x3 g_I3;

_xMat4x3* xCameraGetCurMatrix(_tagxCamFrame* cam);
void xCameraTargetOnGround(int32 on_ground);
void xCameraPickInitial(_tagxCamFrame* cam, _tagxCam* c);
void xCameraPickInitial(_tagxCamFrame* cam, uint32 init_id);
void xCameraNext(_tagxCamFrame* cam, _tagxCam* trans_cam);
void xCameraInterpValid(_tagxCamFrame* cam, _tagTransType trans_type, float32 seconds);
_tagxCam* xCameraSetAsset(_tagxCamFrame* cam, xCamAsset* src, int32 idx);
_tagxCam* xCameraInit(_tagxCamFrame* cam, uint32 total);
void xCameraRemoveEnv(_tagxCamFrame* camera);
void xCameraAssignEnv(_tagxCamFrame* camera, _xEnv* env);
void xCameraSetTarget(_tagxCamFrame* cam, _xMat4x3* frame_target);
void xCameraSetTarget(_tagxCamFrame* cam, _xVec3* new_target);
void xCameraShowRaster(_tagxCamFrame* cam);
void xCameraEnd(_tagxCamFrame* cam, float32 seconds, int32 update_scrn_fx);
void xCameraUpdate(_tagxCamFrame* cam, float32 seconds);
void xCameraRunState(_tagxCamFrame* cam, float32 seconds);
void xCameraAdjustTargetPos(_tagxCamFrame* cam);
_tagxCam* xCameraShoulderState(_tagxCamFrame* cam, float32 seconds);
void xCameraSeeThruCallback(_xEnt* ent);
void ShoulderStateRealign(_tagxCamFrame* cam, _tagxCam* c);
void ShoulderStatePause(_tagxCamFrame* cam, _tagxCam* c, float32 seconds);
void ShoulderStateSwitch(_tagxCamFrame* cam, _tagxCam* c, int32 new_state);
int32 ShoulderGetDesiredPos(_tagxCam* c, _xVec3* pos, float32 x, float32 z);
_tagxCam* xCameraFollowState(_tagxCamFrame* cam, float32 seconds);
void GetPointOnLine(_xVec3* C, uint32 marker1id, uint32 marker2id, _xVec3* result);
void xCameraSetController(_tagxCamFrame* cam, float32 x, float32 y, float32 seconds);
void xCameraSetTargetDY(_tagxCamFrame* cam, float32 dy, float32 seconds);
void xCameraSetTargetDX(_tagxCamFrame* cam, float32 dx, float32 seconds);
_tagxCam* xCameraFollowWithOffsetState(_tagxCamFrame* cam, float32 seconds);
void xCameraBegin(_tagxCamFrame* cam, int32 clear);
void xCameraDestroy();
void xCameraCreate(_tagxCamFrame* cam, uint32 width, uint32 height);

// xCameraGetCurMatrix__FP13_tagxCamFrame
// Start address: 0x138f10
_xMat4x3* xCameraGetCurMatrix(_tagxCamFrame* cam)
{
	// Line 2853, Address: 0x138f10, Func Offset: 0
	// Func End, Address: 0x138f18, Func Offset: 0x8
}

// xCameraTargetOnGround__Fif
// Start address: 0x138f20
void xCameraTargetOnGround(int32 on_ground)
{
	// Line 2837, Address: 0x138f20, Func Offset: 0
	// Func End, Address: 0x138f28, Func Offset: 0x8
}

// xCameraPickInitial__FP13_tagxCamFrameP8_tagxCam
// Start address: 0x138f30
void xCameraPickInitial(_tagxCamFrame* cam, _tagxCam* c)
{
	// Line 2523, Address: 0x138f30, Func Offset: 0
	// Line 2528, Address: 0x138f3c, Func Offset: 0xc
	// Line 2523, Address: 0x138f44, Func Offset: 0x14
	// Line 2528, Address: 0x138f48, Func Offset: 0x18
	// Line 2533, Address: 0x138f64, Func Offset: 0x34
	// Line 2528, Address: 0x138f68, Func Offset: 0x38
	// Line 2529, Address: 0x138f9c, Func Offset: 0x6c
	// Line 2533, Address: 0x138fa8, Func Offset: 0x78
	// Line 2536, Address: 0x138fb0, Func Offset: 0x80
	// Line 2537, Address: 0x138fb4, Func Offset: 0x84
	// Line 2540, Address: 0x138fbc, Func Offset: 0x8c
	// Line 2542, Address: 0x138fc0, Func Offset: 0x90
	// Line 2540, Address: 0x138fc4, Func Offset: 0x94
	// Line 2542, Address: 0x138fc8, Func Offset: 0x98
	// Line 2544, Address: 0x139004, Func Offset: 0xd4
	// Line 2549, Address: 0x139018, Func Offset: 0xe8
	// Func End, Address: 0x13902c, Func Offset: 0xfc
}

// xCameraPickInitial__FP13_tagxCamFrameUi
// Start address: 0x139030
void xCameraPickInitial(_tagxCamFrame* cam, uint32 init_id)
{
	// Line 2508, Address: 0x139030, Func Offset: 0
	// Line 2511, Address: 0x139040, Func Offset: 0x10
	// Line 2514, Address: 0x139048, Func Offset: 0x18
	// Line 2517, Address: 0x13908c, Func Offset: 0x5c
	// Line 2519, Address: 0x139164, Func Offset: 0x134
	// Func End, Address: 0x139178, Func Offset: 0x148
}

// xCameraNext__FP13_tagxCamFrameP8_tagxCam
// Start address: 0x139180
void xCameraNext(_tagxCamFrame* cam, _tagxCam* trans_cam)
{
	_xMat3x3 from_new_src;
	_xQuat* dst_rot;
	_xQuat* src_rot;
	// Line 2361, Address: 0x139180, Func Offset: 0
	// Line 2370, Address: 0x13919c, Func Offset: 0x1c
	// Line 2373, Address: 0x1391b4, Func Offset: 0x34
	// Line 2374, Address: 0x1391bc, Func Offset: 0x3c
	// Line 2377, Address: 0x1391c4, Func Offset: 0x44
	// Line 2380, Address: 0x139210, Func Offset: 0x90
	// Line 2385, Address: 0x139238, Func Offset: 0xb8
	// Line 2389, Address: 0x139248, Func Offset: 0xc8
	// Line 2388, Address: 0x13924c, Func Offset: 0xcc
	// Line 2389, Address: 0x139250, Func Offset: 0xd0
	// Line 2394, Address: 0x139258, Func Offset: 0xd8
	// Line 2396, Address: 0x139264, Func Offset: 0xe4
	// Line 2407, Address: 0x13926c, Func Offset: 0xec
	// Line 2408, Address: 0x13927c, Func Offset: 0xfc
	// Line 2411, Address: 0x13928c, Func Offset: 0x10c
	// Line 2414, Address: 0x139298, Func Offset: 0x118
	// Line 2420, Address: 0x13929c, Func Offset: 0x11c
	// Line 2424, Address: 0x1392a0, Func Offset: 0x120
	// Line 2421, Address: 0x1392a8, Func Offset: 0x128
	// Line 2414, Address: 0x1392ac, Func Offset: 0x12c
	// Line 2424, Address: 0x139324, Func Offset: 0x1a4
	// Line 2425, Address: 0x13932c, Func Offset: 0x1ac
	// Line 2430, Address: 0x139338, Func Offset: 0x1b8
	// Line 2431, Address: 0x139344, Func Offset: 0x1c4
	// Line 2433, Address: 0x139350, Func Offset: 0x1d0
	// Line 2435, Address: 0x13939c, Func Offset: 0x21c
	// Line 2438, Address: 0x1393ac, Func Offset: 0x22c
	// Line 2435, Address: 0x1393b4, Func Offset: 0x234
	// Line 2438, Address: 0x1393d0, Func Offset: 0x250
	// Line 2448, Address: 0x1393d8, Func Offset: 0x258
	// Line 2451, Address: 0x1393f8, Func Offset: 0x278
	// Line 2452, Address: 0x1393fc, Func Offset: 0x27c
	// Line 2459, Address: 0x139400, Func Offset: 0x280
	// Line 2463, Address: 0x139404, Func Offset: 0x284
	// Func End, Address: 0x139420, Func Offset: 0x2a0
}

// xCameraInterpValid__FP13_tagxCamFrame13_tagTransTypef
// Start address: 0x139420
void xCameraInterpValid(_tagxCamFrame* cam, _tagTransType trans_type, float32 seconds)
{
	_xQuat dst_fm;
	_xQuat cur_fm;
	float32 t;
	_tagxCam* orig;
	_tagxCam* src;
	_tagxCam* dest;
	// Line 1980, Address: 0x139420, Func Offset: 0
	// Line 1991, Address: 0x13945c, Func Offset: 0x3c
	// Line 1999, Address: 0x139460, Func Offset: 0x40
	// Line 1990, Address: 0x139464, Func Offset: 0x44
	// Line 1999, Address: 0x139468, Func Offset: 0x48
	// Line 2001, Address: 0x139478, Func Offset: 0x58
	// Line 2002, Address: 0x139480, Func Offset: 0x60
	// Line 2005, Address: 0x139488, Func Offset: 0x68
	// Line 2009, Address: 0x139494, Func Offset: 0x74
	// Line 2013, Address: 0x1394b0, Func Offset: 0x90
	// Line 2012, Address: 0x1394b4, Func Offset: 0x94
	// Line 2015, Address: 0x1394b8, Func Offset: 0x98
	// Line 2019, Address: 0x1394c0, Func Offset: 0xa0
	// Line 2023, Address: 0x1394cc, Func Offset: 0xac
	// Line 2026, Address: 0x1394f0, Func Offset: 0xd0
	// Line 2027, Address: 0x1394f8, Func Offset: 0xd8
	// Line 2029, Address: 0x139500, Func Offset: 0xe0
	// Line 2030, Address: 0x139508, Func Offset: 0xe8
	// Line 2032, Address: 0x139510, Func Offset: 0xf0
	// Line 2033, Address: 0x139518, Func Offset: 0xf8
	// Line 2035, Address: 0x139520, Func Offset: 0x100
	// Line 2036, Address: 0x139528, Func Offset: 0x108
	// Line 2039, Address: 0x139530, Func Offset: 0x110
	// Line 2040, Address: 0x139540, Func Offset: 0x120
	// Line 2041, Address: 0x139548, Func Offset: 0x128
	// Line 2044, Address: 0x139550, Func Offset: 0x130
	// Line 2045, Address: 0x139560, Func Offset: 0x140
	// Line 2046, Address: 0x139568, Func Offset: 0x148
	// Line 2049, Address: 0x139570, Func Offset: 0x150
	// Line 2050, Address: 0x139580, Func Offset: 0x160
	// Line 2051, Address: 0x139588, Func Offset: 0x168
	// Line 2054, Address: 0x139590, Func Offset: 0x170
	// Line 2055, Address: 0x1395a0, Func Offset: 0x180
	// Line 2064, Address: 0x1395b0, Func Offset: 0x190
	// Line 2066, Address: 0x1395c0, Func Offset: 0x1a0
	// Line 2069, Address: 0x1395d0, Func Offset: 0x1b0
	// Line 2071, Address: 0x139600, Func Offset: 0x1e0
	// Line 2074, Address: 0x139610, Func Offset: 0x1f0
	// Line 2076, Address: 0x139640, Func Offset: 0x220
	// Line 2079, Address: 0x139650, Func Offset: 0x230
	// Line 2081, Address: 0x139680, Func Offset: 0x260
	// Line 2084, Address: 0x139690, Func Offset: 0x270
	// Line 2088, Address: 0x1396c0, Func Offset: 0x2a0
	// Line 2091, Address: 0x1396d4, Func Offset: 0x2b4
	// Line 2093, Address: 0x139704, Func Offset: 0x2e4
	// Line 2096, Address: 0x139718, Func Offset: 0x2f8
	// Line 2098, Address: 0x139748, Func Offset: 0x328
	// Line 2101, Address: 0x13975c, Func Offset: 0x33c
	// Line 2103, Address: 0x13978c, Func Offset: 0x36c
	// Line 2106, Address: 0x1397a0, Func Offset: 0x380
	// Line 2110, Address: 0x1397d0, Func Offset: 0x3b0
	// Line 2113, Address: 0x1397e0, Func Offset: 0x3c0
	// Line 2115, Address: 0x139870, Func Offset: 0x450
	// Line 2119, Address: 0x139880, Func Offset: 0x460
	// Line 2120, Address: 0x13989c, Func Offset: 0x47c
	// Line 2145, Address: 0x1398a8, Func Offset: 0x488
	// Line 2148, Address: 0x1398b0, Func Offset: 0x490
	// Line 2150, Address: 0x1398bc, Func Offset: 0x49c
	// Line 2152, Address: 0x139908, Func Offset: 0x4e8
	// Line 2155, Address: 0x139940, Func Offset: 0x520
	// Line 2157, Address: 0x139950, Func Offset: 0x530
	// Line 2195, Address: 0x13995c, Func Offset: 0x53c
	// Line 2196, Address: 0x139964, Func Offset: 0x544
	// Line 2198, Address: 0x1399b0, Func Offset: 0x590
	// Line 2199, Address: 0x1399b8, Func Offset: 0x598
	// Line 2202, Address: 0x1399f0, Func Offset: 0x5d0
	// Line 2203, Address: 0x1399fc, Func Offset: 0x5dc
	// Line 2205, Address: 0x139a08, Func Offset: 0x5e8
	// Line 2207, Address: 0x139a58, Func Offset: 0x638
	// Line 2208, Address: 0x139a90, Func Offset: 0x670
	// Line 2210, Address: 0x139ac8, Func Offset: 0x6a8
	// Line 2218, Address: 0x139b48, Func Offset: 0x728
	// Line 2221, Address: 0x139b58, Func Offset: 0x738
	// Line 2225, Address: 0x139b88, Func Offset: 0x768
	// Line 2294, Address: 0x139c18, Func Offset: 0x7f8
	// Func End, Address: 0x139c58, Func Offset: 0x838
}

// xCameraSetAsset__FP13_tagxCamFrameP9xCamAsseti
// Start address: 0x139c60
_tagxCam* xCameraSetAsset(_tagxCamFrame* cam, xCamAsset* src, int32 idx)
{
	_tagxCam* dst;
	// Line 1729, Address: 0x139c60, Func Offset: 0
	// Line 1735, Address: 0x139c78, Func Offset: 0x18
	// Line 1740, Address: 0x139c84, Func Offset: 0x24
	// Line 1735, Address: 0x139c8c, Func Offset: 0x2c
	// Line 1738, Address: 0x139c94, Func Offset: 0x34
	// Line 1739, Address: 0x139c98, Func Offset: 0x38
	// Line 1752, Address: 0x139c9c, Func Offset: 0x3c
	// Line 1739, Address: 0x139ca0, Func Offset: 0x40
	// Line 1740, Address: 0x139ca4, Func Offset: 0x44
	// Line 1741, Address: 0x139ca8, Func Offset: 0x48
	// Line 1742, Address: 0x139cb0, Func Offset: 0x50
	// Line 1744, Address: 0x139cb8, Func Offset: 0x58
	// Line 1745, Address: 0x139cc0, Func Offset: 0x60
	// Line 1746, Address: 0x139cd8, Func Offset: 0x78
	// Line 1747, Address: 0x139cf0, Func Offset: 0x90
	// Line 1748, Address: 0x139d08, Func Offset: 0xa8
	// Line 1749, Address: 0x139d20, Func Offset: 0xc0
	// Line 1752, Address: 0x139d28, Func Offset: 0xc8
	// Line 1754, Address: 0x139d30, Func Offset: 0xd0
	// Line 1760, Address: 0x139d34, Func Offset: 0xd4
	// Line 1766, Address: 0x139d3c, Func Offset: 0xdc
	// Line 1754, Address: 0x139d44, Func Offset: 0xe4
	// Line 1756, Address: 0x139d48, Func Offset: 0xe8
	// Line 1758, Address: 0x139d50, Func Offset: 0xf0
	// Line 1760, Address: 0x139d58, Func Offset: 0xf8
	// Line 1761, Address: 0x139d64, Func Offset: 0x104
	// Line 1762, Address: 0x139d6c, Func Offset: 0x10c
	// Line 1766, Address: 0x139d78, Func Offset: 0x118
	// Line 1770, Address: 0x139d7c, Func Offset: 0x11c
	// Line 1775, Address: 0x139da4, Func Offset: 0x144
	// Line 1777, Address: 0x139db4, Func Offset: 0x154
	// Line 1779, Address: 0x139dbc, Func Offset: 0x15c
	// Line 1785, Address: 0x139dc4, Func Offset: 0x164
	// Line 1791, Address: 0x139dc8, Func Offset: 0x168
	// Line 1785, Address: 0x139dd4, Func Offset: 0x174
	// Line 1787, Address: 0x139dd8, Func Offset: 0x178
	// Line 1789, Address: 0x139de0, Func Offset: 0x180
	// Line 1791, Address: 0x139de8, Func Offset: 0x188
	// Line 1794, Address: 0x139e00, Func Offset: 0x1a0
	// Line 1804, Address: 0x139e0c, Func Offset: 0x1ac
	// Line 1808, Address: 0x139e14, Func Offset: 0x1b4
	// Line 1816, Address: 0x139e18, Func Offset: 0x1b8
	// Line 1808, Address: 0x139e20, Func Offset: 0x1c0
	// Line 1810, Address: 0x139e24, Func Offset: 0x1c4
	// Line 1812, Address: 0x139e2c, Func Offset: 0x1cc
	// Line 1814, Address: 0x139e34, Func Offset: 0x1d4
	// Line 1816, Address: 0x139e3c, Func Offset: 0x1dc
	// Line 1822, Address: 0x139e44, Func Offset: 0x1e4
	// Line 1825, Address: 0x139e4c, Func Offset: 0x1ec
	// Line 1827, Address: 0x139e70, Func Offset: 0x210
	// Line 1837, Address: 0x139e7c, Func Offset: 0x21c
	// Line 1840, Address: 0x139e84, Func Offset: 0x224
	// Line 1841, Address: 0x139e8c, Func Offset: 0x22c
	// Line 1847, Address: 0x139e98, Func Offset: 0x238
	// Line 1850, Address: 0x139ea0, Func Offset: 0x240
	// Line 1851, Address: 0x139ea8, Func Offset: 0x248
	// Line 1855, Address: 0x139eb4, Func Offset: 0x254
	// Line 1861, Address: 0x139eb8, Func Offset: 0x258
	// Line 1863, Address: 0x139ebc, Func Offset: 0x25c
	// Line 1861, Address: 0x139ec8, Func Offset: 0x268
	// Line 1863, Address: 0x139ecc, Func Offset: 0x26c
	// Line 1861, Address: 0x139ed4, Func Offset: 0x274
	// Line 1863, Address: 0x139ed8, Func Offset: 0x278
	// Func End, Address: 0x139ee0, Func Offset: 0x280
}

// xCameraInit__FP13_tagxCamFrameUi
// Start address: 0x139ee0
_tagxCam* xCameraInit(_tagxCamFrame* cam, uint32 total)
{
	int32 i;
	_tagxCam* array;
	// Line 1701, Address: 0x139ee0, Func Offset: 0
	// Line 1704, Address: 0x139ef0, Func Offset: 0x10
	// Line 1701, Address: 0x139ef4, Func Offset: 0x14
	// Line 1704, Address: 0x139ef8, Func Offset: 0x18
	// Line 1705, Address: 0x139f1c, Func Offset: 0x3c
	// Line 1710, Address: 0x139f28, Func Offset: 0x48
	// Line 1704, Address: 0x139f2c, Func Offset: 0x4c
	// Line 1705, Address: 0x139f54, Func Offset: 0x74
	// Line 1707, Address: 0x139f58, Func Offset: 0x78
	// Line 1710, Address: 0x139f5c, Func Offset: 0x7c
	// Line 1712, Address: 0x139f70, Func Offset: 0x90
	// Line 1716, Address: 0x139f90, Func Offset: 0xb0
	// Line 1718, Address: 0x139fb0, Func Offset: 0xd0
	// Line 1716, Address: 0x13a054, Func Offset: 0x174
	// Line 1718, Address: 0x13a05c, Func Offset: 0x17c
	// Line 1719, Address: 0x13a060, Func Offset: 0x180
	// Line 1718, Address: 0x13a064, Func Offset: 0x184
	// Line 1719, Address: 0x13a074, Func Offset: 0x194
	// Line 1722, Address: 0x13a088, Func Offset: 0x1a8
	// Func End, Address: 0x13a0a0, Func Offset: 0x1c0
}

// xCameraRemoveEnv__FP13_tagxCamFrame
// Start address: 0x13a0a0
void xCameraRemoveEnv(_tagxCamFrame* camera)
{
	// Line 1648, Address: 0x13a0a0, Func Offset: 0
	// Func End, Address: 0x13a0b0, Func Offset: 0x10
}

// xCameraAssignEnv__FP13_tagxCamFrameP5_xEnv
// Start address: 0x13a0b0
void xCameraAssignEnv(_tagxCamFrame* camera, _xEnv* env)
{
	// Line 1638, Address: 0x13a0b0, Func Offset: 0
	// Line 1639, Address: 0x13a0b4, Func Offset: 0x4
	// Func End, Address: 0x13a0c4, Func Offset: 0x14
}

// xCameraSetTarget__FP13_tagxCamFrameP8_xMat4x3
// Start address: 0x13a0d0
void xCameraSetTarget(_tagxCamFrame* cam, _xMat4x3* frame_target)
{
	// Line 1630, Address: 0x13a0d0, Func Offset: 0
	// Func End, Address: 0x13a0d8, Func Offset: 0x8
}

// xCameraSetTarget__FP13_tagxCamFrameP6_xVec3
// Start address: 0x13a0e0
void xCameraSetTarget(_tagxCamFrame* cam, _xVec3* new_target)
{
	// Line 1619, Address: 0x13a0e0, Func Offset: 0
	// Line 1620, Address: 0x13a108, Func Offset: 0x28
	// Line 1621, Address: 0x13a10c, Func Offset: 0x2c
	// Line 1622, Address: 0x13a120, Func Offset: 0x40
	// Func End, Address: 0x13a128, Func Offset: 0x48
}

// xCameraShowRaster__FP13_tagxCamFrame
// Start address: 0x13a130
void xCameraShowRaster(_tagxCamFrame* cam)
{
	// Line 1610, Address: 0x13a130, Func Offset: 0
	// Func End, Address: 0x13a138, Func Offset: 0x8
}

// xCameraEnd__FP13_tagxCamFramefi
// Start address: 0x13a140
void xCameraEnd(_tagxCamFrame* cam, float32 seconds, int32 update_scrn_fx)
{
	// Line 1590, Address: 0x13a140, Func Offset: 0
	// Line 1594, Address: 0x13a14c, Func Offset: 0xc
	// Line 1595, Address: 0x13a154, Func Offset: 0x14
	// Line 1598, Address: 0x13a15c, Func Offset: 0x1c
	// Line 1604, Address: 0x13a164, Func Offset: 0x24
	// Func End, Address: 0x13a174, Func Offset: 0x34
}

// xCameraUpdate__FP13_tagxCamFramef
// Start address: 0x13a180
void xCameraUpdate(_tagxCamFrame* cam, float32 seconds)
{
	// Line 1445, Address: 0x13a180, Func Offset: 0
	// Line 1524, Address: 0x13a194, Func Offset: 0x14
	// Line 1531, Address: 0x13a1a4, Func Offset: 0x24
	// Line 1535, Address: 0x13a1c4, Func Offset: 0x44
	// Line 1548, Address: 0x13a1d0, Func Offset: 0x50
	// Line 1555, Address: 0x13a1dc, Func Offset: 0x5c
	// Line 1556, Address: 0x13a1e4, Func Offset: 0x64
	// Line 1583, Address: 0x13a1f0, Func Offset: 0x70
	// Line 1584, Address: 0x13a210, Func Offset: 0x90
	// Func End, Address: 0x13a224, Func Offset: 0xa4
}

// xCameraRunState__FP13_tagxCamFramef
// Start address: 0x13a230
void xCameraRunState(_tagxCamFrame* cam, float32 seconds)
{
	_tagxCam* c;
	// Line 1393, Address: 0x13a230, Func Offset: 0
	// Line 1394, Address: 0x13a25c, Func Offset: 0x2c
	// Line 1395, Address: 0x13a274, Func Offset: 0x44
	// Line 1397, Address: 0x13a280, Func Offset: 0x50
	// Line 1400, Address: 0x13a28c, Func Offset: 0x5c
	// Line 1403, Address: 0x13a2b8, Func Offset: 0x88
	// Line 1404, Address: 0x13a2c4, Func Offset: 0x94
	// Line 1407, Address: 0x13a2cc, Func Offset: 0x9c
	// Line 1408, Address: 0x13a2d8, Func Offset: 0xa8
	// Line 1411, Address: 0x13a2e0, Func Offset: 0xb0
	// Line 1412, Address: 0x13a2ec, Func Offset: 0xbc
	// Line 1415, Address: 0x13a2f4, Func Offset: 0xc4
	// Line 1416, Address: 0x13a35c, Func Offset: 0x12c
	// Line 1420, Address: 0x13a364, Func Offset: 0x134
	// Line 1423, Address: 0x13a36c, Func Offset: 0x13c
	// Line 1431, Address: 0x13a37c, Func Offset: 0x14c
	// Line 1433, Address: 0x13a508, Func Offset: 0x2d8
	// Func End, Address: 0x13a538, Func Offset: 0x308
}

// xCameraAdjustTargetPos__FP13_tagxCamFramef
// Start address: 0x13a540
void xCameraAdjustTargetPos(_tagxCamFrame* cam)
{
	_xVec3 cur_pos;
	_xVec3 desired_target_pos;
	_tagxCam* c;
	// Line 1332, Address: 0x13a540, Func Offset: 0
	// Line 1327, Address: 0x13a544, Func Offset: 0x4
	// Line 1332, Address: 0x13a548, Func Offset: 0x8
	// Line 1333, Address: 0x13a550, Func Offset: 0x10
	// Line 1336, Address: 0x13a554, Func Offset: 0x14
	// Line 1339, Address: 0x13a564, Func Offset: 0x24
	// Line 1342, Address: 0x13a584, Func Offset: 0x44
	// Line 1347, Address: 0x13a590, Func Offset: 0x50
	// Line 1352, Address: 0x13a5ac, Func Offset: 0x6c
	// Line 1360, Address: 0x13a5b4, Func Offset: 0x74
	// Line 1364, Address: 0x13a5bc, Func Offset: 0x7c
	// Line 1368, Address: 0x13a5c4, Func Offset: 0x84
	// Line 1369, Address: 0x13a5e8, Func Offset: 0xa8
	// Line 1370, Address: 0x13a698, Func Offset: 0x158
	// Line 1374, Address: 0x13a6a0, Func Offset: 0x160
	// Line 1378, Address: 0x13a6c4, Func Offset: 0x184
	// Line 1380, Address: 0x13a6d0, Func Offset: 0x190
	// Line 1384, Address: 0x13a6f4, Func Offset: 0x1b4
	// Line 1386, Address: 0x13a700, Func Offset: 0x1c0
	// Line 1388, Address: 0x13a724, Func Offset: 0x1e4
	// Func End, Address: 0x13a72c, Func Offset: 0x1ec
}

// xCameraShoulderState__FP13_tagxCamFramef
// Start address: 0x13a730
_tagxCam* xCameraShoulderState(_tagxCamFrame* cam, float32 seconds)
{
	_xCollis collis_env;
	_xRay3 ray;
	_xMat4x3 desired_pos_matrix;
	_xMat4x3 target_pos_matrix;
	_tagxCam* c;
	_xMat4x3 old_matrix;
	// Line 1089, Address: 0x13a730, Func Offset: 0
	// Line 1100, Address: 0x13a758, Func Offset: 0x28
	// Line 1101, Address: 0x13a768, Func Offset: 0x38
	// Line 1103, Address: 0x13a770, Func Offset: 0x40
	// Line 1107, Address: 0x13a774, Func Offset: 0x44
	// Line 1108, Address: 0x13a7a8, Func Offset: 0x78
	// Line 1110, Address: 0x13a7b4, Func Offset: 0x84
	// Line 1113, Address: 0x13a7e8, Func Offset: 0xb8
	// Line 1114, Address: 0x13aa40, Func Offset: 0x310
	// Line 1116, Address: 0x13aa48, Func Offset: 0x318
	// Line 1117, Address: 0x13aa54, Func Offset: 0x324
	// Line 1119, Address: 0x13aa5c, Func Offset: 0x32c
	// Line 1120, Address: 0x13aa68, Func Offset: 0x338
	// Line 1122, Address: 0x13aa70, Func Offset: 0x340
	// Line 1131, Address: 0x13abf0, Func Offset: 0x4c0
	// Line 1132, Address: 0x13ac00, Func Offset: 0x4d0
	// Line 1136, Address: 0x13ac10, Func Offset: 0x4e0
	// Line 1139, Address: 0x13ac1c, Func Offset: 0x4ec
	// Line 1150, Address: 0x13ac34, Func Offset: 0x504
	// Line 1139, Address: 0x13ac3c, Func Offset: 0x50c
	// Line 1150, Address: 0x13ac44, Func Offset: 0x514
	// Line 1139, Address: 0x13ac48, Func Offset: 0x518
	// Line 1141, Address: 0x13ac54, Func Offset: 0x524
	// Line 1150, Address: 0x13ac60, Func Offset: 0x530
	// Line 1153, Address: 0x13ac68, Func Offset: 0x538
	// Line 1158, Address: 0x13ac9c, Func Offset: 0x56c
	// Line 1159, Address: 0x13aca8, Func Offset: 0x578
	// Line 1158, Address: 0x13acb0, Func Offset: 0x580
	// Line 1159, Address: 0x13acb8, Func Offset: 0x588
	// Line 1160, Address: 0x13acbc, Func Offset: 0x58c
	// Line 1158, Address: 0x13acc4, Func Offset: 0x594
	// Line 1159, Address: 0x13acd0, Func Offset: 0x5a0
	// Line 1160, Address: 0x13acfc, Func Offset: 0x5cc
	// Line 1161, Address: 0x13ad08, Func Offset: 0x5d8
	// Line 1160, Address: 0x13ad0c, Func Offset: 0x5dc
	// Line 1161, Address: 0x13ad10, Func Offset: 0x5e0
	// Line 1162, Address: 0x13ad18, Func Offset: 0x5e8
	// Line 1165, Address: 0x13ad20, Func Offset: 0x5f0
	// Line 1166, Address: 0x13ad30, Func Offset: 0x600
	// Line 1168, Address: 0x13ad40, Func Offset: 0x610
	// Line 1171, Address: 0x13ad78, Func Offset: 0x648
	// Line 1172, Address: 0x13ad84, Func Offset: 0x654
	// Line 1171, Address: 0x13ad8c, Func Offset: 0x65c
	// Line 1172, Address: 0x13ad90, Func Offset: 0x660
	// Line 1173, Address: 0x13ada0, Func Offset: 0x670
	// Line 1176, Address: 0x13ada4, Func Offset: 0x674
	// Line 1179, Address: 0x13adb4, Func Offset: 0x684
	// Line 1183, Address: 0x13adbc, Func Offset: 0x68c
	// Line 1179, Address: 0x13adc4, Func Offset: 0x694
	// Line 1183, Address: 0x13adc8, Func Offset: 0x698
	// Line 1179, Address: 0x13add0, Func Offset: 0x6a0
	// Line 1180, Address: 0x13addc, Func Offset: 0x6ac
	// Line 1181, Address: 0x13adf4, Func Offset: 0x6c4
	// Line 1183, Address: 0x13ae0c, Func Offset: 0x6dc
	// Line 1184, Address: 0x13ae28, Func Offset: 0x6f8
	// Line 1188, Address: 0x13ae30, Func Offset: 0x700
	// Line 1193, Address: 0x13ae3c, Func Offset: 0x70c
	// Line 1196, Address: 0x13ae44, Func Offset: 0x714
	// Line 1201, Address: 0x13ae78, Func Offset: 0x748
	// Line 1202, Address: 0x13ae7c, Func Offset: 0x74c
	// Func End, Address: 0x13aea8, Func Offset: 0x778
}

// xCameraSeeThruCallback__FP5_xEnt
// Start address: 0x13af90
void xCameraSeeThruCallback(_xEnt* ent)
{
	// Line 1016, Address: 0x13af90, Func Offset: 0
	// Line 1017, Address: 0x13afe0, Func Offset: 0x50
	// Line 1018, Address: 0x13aff4, Func Offset: 0x64
	// Func End, Address: 0x13affc, Func Offset: 0x6c
}

// ShoulderStateRealign__FP13_tagxCamFrameP8_tagxCamf
// Start address: 0x13b000
void ShoulderStateRealign(_tagxCamFrame* cam, _tagxCam* c)
{
	_xVec3 target_with_y;
	float32 dp2;
	_xVec3 target_with_y;
	_xVec3 desired_pos;
	_xVec3 vec;
	float32 dp1;
	float32 rad_rot;
	_xMat3x3 rot_matrix;
	// Line 893, Address: 0x13b000, Func Offset: 0
	// Line 897, Address: 0x13b018, Func Offset: 0x18
	// Line 900, Address: 0x13b028, Func Offset: 0x28
	// Line 897, Address: 0x13b02c, Func Offset: 0x2c
	// Line 900, Address: 0x13b03c, Func Offset: 0x3c
	// Line 897, Address: 0x13b040, Func Offset: 0x40
	// Line 900, Address: 0x13b044, Func Offset: 0x44
	// Line 901, Address: 0x13b050, Func Offset: 0x50
	// Line 900, Address: 0x13b054, Func Offset: 0x54
	// Line 901, Address: 0x13b05c, Func Offset: 0x5c
	// Line 902, Address: 0x13b06c, Func Offset: 0x6c
	// Line 904, Address: 0x13b084, Func Offset: 0x84
	// Line 910, Address: 0x13b090, Func Offset: 0x90
	// Line 913, Address: 0x13b094, Func Offset: 0x94
	// Line 912, Address: 0x13b098, Func Offset: 0x98
	// Line 913, Address: 0x13b09c, Func Offset: 0x9c
	// Line 910, Address: 0x13b0a0, Func Offset: 0xa0
	// Line 911, Address: 0x13b0a4, Func Offset: 0xa4
	// Line 912, Address: 0x13b0a8, Func Offset: 0xa8
	// Line 913, Address: 0x13b0ac, Func Offset: 0xac
	// Line 916, Address: 0x13b0b4, Func Offset: 0xb4
	// Line 931, Address: 0x13b0c4, Func Offset: 0xc4
	// Line 932, Address: 0x13b0e4, Func Offset: 0xe4
	// Line 934, Address: 0x13b1ac, Func Offset: 0x1ac
	// Line 939, Address: 0x13b260, Func Offset: 0x260
	// Line 941, Address: 0x13b278, Func Offset: 0x278
	// Line 942, Address: 0x13b27c, Func Offset: 0x27c
	// Line 939, Address: 0x13b284, Func Offset: 0x284
	// Line 941, Address: 0x13b290, Func Offset: 0x290
	// Line 942, Address: 0x13b2a0, Func Offset: 0x2a0
	// Line 946, Address: 0x13b2d4, Func Offset: 0x2d4
	// Line 947, Address: 0x13b2d8, Func Offset: 0x2d8
	// Line 946, Address: 0x13b2dc, Func Offset: 0x2dc
	// Line 947, Address: 0x13b2e4, Func Offset: 0x2e4
	// Line 946, Address: 0x13b2e8, Func Offset: 0x2e8
	// Line 947, Address: 0x13b2f4, Func Offset: 0x2f4
	// Line 950, Address: 0x13b334, Func Offset: 0x334
	// Line 953, Address: 0x13b34c, Func Offset: 0x34c
	// Line 955, Address: 0x13b35c, Func Offset: 0x35c
	// Line 956, Address: 0x13b360, Func Offset: 0x360
	// Line 953, Address: 0x13b368, Func Offset: 0x368
	// Line 955, Address: 0x13b374, Func Offset: 0x374
	// Line 956, Address: 0x13b384, Func Offset: 0x384
	// Line 959, Address: 0x13b3b8, Func Offset: 0x3b8
	// Line 965, Address: 0x13b3c0, Func Offset: 0x3c0
	// Line 968, Address: 0x13b3cc, Func Offset: 0x3cc
	// Line 970, Address: 0x13b3d0, Func Offset: 0x3d0
	// Func End, Address: 0x13b3ec, Func Offset: 0x3ec
}

// ShoulderStatePause__FP13_tagxCamFrameP8_tagxCamf
// Start address: 0x13b3f0
void ShoulderStatePause(_tagxCamFrame* cam, _tagxCam* c, float32 seconds)
{
	_xVec3 desired_pos;
	// Line 827, Address: 0x13b3f0, Func Offset: 0
	// Line 832, Address: 0x13b410, Func Offset: 0x20
	// Line 833, Address: 0x13b414, Func Offset: 0x24
	// Line 834, Address: 0x13b418, Func Offset: 0x28
	// Line 838, Address: 0x13b478, Func Offset: 0x88
	// Line 839, Address: 0x13b498, Func Offset: 0xa8
	// Line 841, Address: 0x13b560, Func Offset: 0x170
	// Line 845, Address: 0x13b614, Func Offset: 0x224
	// Line 849, Address: 0x13b624, Func Offset: 0x234
	// Line 852, Address: 0x13b630, Func Offset: 0x240
	// Line 856, Address: 0x13b634, Func Offset: 0x244
	// Line 860, Address: 0x13b64c, Func Offset: 0x25c
	// Line 862, Address: 0x13b650, Func Offset: 0x260
	// Line 867, Address: 0x13b694, Func Offset: 0x2a4
	// Line 868, Address: 0x13b6bc, Func Offset: 0x2cc
	// Line 874, Address: 0x13b6c4, Func Offset: 0x2d4
	// Line 875, Address: 0x13b6c8, Func Offset: 0x2d8
	// Line 876, Address: 0x13b720, Func Offset: 0x330
	// Line 878, Address: 0x13b724, Func Offset: 0x334
	// Line 876, Address: 0x13b72c, Func Offset: 0x33c
	// Line 877, Address: 0x13b730, Func Offset: 0x340
	// Line 878, Address: 0x13b734, Func Offset: 0x344
	// Line 881, Address: 0x13b784, Func Offset: 0x394
	// Line 884, Address: 0x13b7a4, Func Offset: 0x3b4
	// Line 888, Address: 0x13b7d0, Func Offset: 0x3e0
	// Func End, Address: 0x13b7f4, Func Offset: 0x404
}

// ShoulderStateSwitch__FP13_tagxCamFrameP8_tagxCami
// Start address: 0x13b800
void ShoulderStateSwitch(_tagxCamFrame* cam, _tagxCam* c, int32 new_state)
{
	// Line 762, Address: 0x13b800, Func Offset: 0
	// Line 769, Address: 0x13b82c, Func Offset: 0x2c
	// Line 773, Address: 0x13b834, Func Offset: 0x34
	// Line 774, Address: 0x13b840, Func Offset: 0x40
	// Line 775, Address: 0x13b84c, Func Offset: 0x4c
	// Line 787, Address: 0x13b858, Func Offset: 0x58
	// Line 788, Address: 0x13b85c, Func Offset: 0x5c
	// Func End, Address: 0x13b864, Func Offset: 0x64
}

// ShoulderGetDesiredPos__FP13_tagxCamFrameP8_tagxCamP6_xVec3ff
// Start address: 0x13b870
int32 ShoulderGetDesiredPos(_tagxCam* c, _xVec3* pos, float32 x, float32 z)
{
	// Line 714, Address: 0x13b870, Func Offset: 0
	// Line 754, Address: 0x13b87c, Func Offset: 0xc
	// Line 714, Address: 0x13b880, Func Offset: 0x10
	// Line 715, Address: 0x13b894, Func Offset: 0x24
	// Line 716, Address: 0x13b8a4, Func Offset: 0x34
	// Line 717, Address: 0x13b8b8, Func Offset: 0x48
	// Line 755, Address: 0x13b8c8, Func Offset: 0x58
	// Func End, Address: 0x13b8d0, Func Offset: 0x60
}

// xCameraFollowState__FP13_tagxCamFramef
// Start address: 0x13b8d0
_tagxCam* xCameraFollowState(_tagxCamFrame* cam, float32 seconds)
{
	_xVec3 new_pos;
	_xVec3 preline_test_pos;
	float32 cpb;
	float32 cpa;
	int32 trans;
	_xVec3 tmp;
	_xMat3x3 mrot;
	_xVec3 dirvec;
	_xVec3 to_vec;
	_tagxCam* c;
	// Line 589, Address: 0x13b8d0, Func Offset: 0
	// Line 595, Address: 0x13b900, Func Offset: 0x30
	// Line 596, Address: 0x13b910, Func Offset: 0x40
	// Line 598, Address: 0x13b918, Func Offset: 0x48
	// Line 608, Address: 0x13b91c, Func Offset: 0x4c
	// Line 609, Address: 0x13b920, Func Offset: 0x50
	// Line 616, Address: 0x13b928, Func Offset: 0x58
	// Line 608, Address: 0x13b934, Func Offset: 0x64
	// Line 609, Address: 0x13b938, Func Offset: 0x68
	// Line 610, Address: 0x13b93c, Func Offset: 0x6c
	// Line 616, Address: 0x13b944, Func Offset: 0x74
	// Line 610, Address: 0x13b954, Func Offset: 0x84
	// Line 616, Address: 0x13b958, Func Offset: 0x88
	// Line 619, Address: 0x13b974, Func Offset: 0xa4
	// Line 622, Address: 0x13b984, Func Offset: 0xb4
	// Line 624, Address: 0x13b9a4, Func Offset: 0xd4
	// Line 622, Address: 0x13b9a8, Func Offset: 0xd8
	// Line 624, Address: 0x13b9ac, Func Offset: 0xdc
	// Line 627, Address: 0x13b9b0, Func Offset: 0xe0
	// Line 622, Address: 0x13b9b8, Func Offset: 0xe8
	// Line 624, Address: 0x13b9bc, Func Offset: 0xec
	// Line 622, Address: 0x13b9c0, Func Offset: 0xf0
	// Line 624, Address: 0x13b9c4, Func Offset: 0xf4
	// Line 627, Address: 0x13b9d4, Func Offset: 0x104
	// Line 645, Address: 0x13b9dc, Func Offset: 0x10c
	// Line 646, Address: 0x13b9e0, Func Offset: 0x110
	// Line 645, Address: 0x13b9e4, Func Offset: 0x114
	// Line 646, Address: 0x13b9ec, Func Offset: 0x11c
	// Line 645, Address: 0x13b9f0, Func Offset: 0x120
	// Line 646, Address: 0x13ba00, Func Offset: 0x130
	// Line 647, Address: 0x13ba08, Func Offset: 0x138
	// Line 655, Address: 0x13ba10, Func Offset: 0x140
	// Line 647, Address: 0x13ba18, Func Offset: 0x148
	// Line 648, Address: 0x13ba38, Func Offset: 0x168
	// Line 654, Address: 0x13ba44, Func Offset: 0x174
	// Line 648, Address: 0x13ba48, Func Offset: 0x178
	// Line 654, Address: 0x13ba4c, Func Offset: 0x17c
	// Line 648, Address: 0x13ba54, Func Offset: 0x184
	// Line 654, Address: 0x13ba5c, Func Offset: 0x18c
	// Line 655, Address: 0x13ba64, Func Offset: 0x194
	// Line 656, Address: 0x13ba6c, Func Offset: 0x19c
	// Line 664, Address: 0x13ba74, Func Offset: 0x1a4
	// Line 656, Address: 0x13ba7c, Func Offset: 0x1ac
	// Line 657, Address: 0x13ba9c, Func Offset: 0x1cc
	// Line 663, Address: 0x13baa8, Func Offset: 0x1d8
	// Line 657, Address: 0x13baac, Func Offset: 0x1dc
	// Line 663, Address: 0x13bab0, Func Offset: 0x1e0
	// Line 657, Address: 0x13bab8, Func Offset: 0x1e8
	// Line 663, Address: 0x13bac0, Func Offset: 0x1f0
	// Line 664, Address: 0x13bac8, Func Offset: 0x1f8
	// Line 665, Address: 0x13bad0, Func Offset: 0x200
	// Line 672, Address: 0x13bad8, Func Offset: 0x208
	// Line 665, Address: 0x13badc, Func Offset: 0x20c
	// Line 666, Address: 0x13bafc, Func Offset: 0x22c
	// Line 673, Address: 0x13bb08, Func Offset: 0x238
	// Line 666, Address: 0x13bb0c, Func Offset: 0x23c
	// Line 673, Address: 0x13bb14, Func Offset: 0x244
	// Line 674, Address: 0x13bb34, Func Offset: 0x264
	// Line 680, Address: 0x13bb38, Func Offset: 0x268
	// Line 681, Address: 0x13bb54, Func Offset: 0x284
	// Line 683, Address: 0x13bb5c, Func Offset: 0x28c
	// Line 681, Address: 0x13bb60, Func Offset: 0x290
	// Line 683, Address: 0x13bb64, Func Offset: 0x294
	// Line 684, Address: 0x13bb7c, Func Offset: 0x2ac
	// Line 685, Address: 0x13bb8c, Func Offset: 0x2bc
	// Line 687, Address: 0x13bb9c, Func Offset: 0x2cc
	// Line 688, Address: 0x13bbac, Func Offset: 0x2dc
	// Line 690, Address: 0x13bbbc, Func Offset: 0x2ec
	// Line 691, Address: 0x13bbcc, Func Offset: 0x2fc
	// Line 694, Address: 0x13bbdc, Func Offset: 0x30c
	// Line 698, Address: 0x13bbf8, Func Offset: 0x328
	// Line 699, Address: 0x13bc00, Func Offset: 0x330
	// Line 700, Address: 0x13bc14, Func Offset: 0x344
	// Line 703, Address: 0x13bc1c, Func Offset: 0x34c
	// Line 706, Address: 0x13bc34, Func Offset: 0x364
	// Line 707, Address: 0x13bc38, Func Offset: 0x368
	// Func End, Address: 0x13bc6c, Func Offset: 0x39c
}

// GetPointOnLine__FP6_xVec3UiUiP6_xVec3
// Start address: 0x13bc70
void GetPointOnLine(_xVec3* C, uint32 marker1id, uint32 marker2id, _xVec3* result)
{
	_xVec3 normAB;
	_xVec3 AB;
	p2MarkerAsset* m2;
	p2MarkerAsset* m1;
	float32 len;
	float32 r;
	// Line 531, Address: 0x13bc70, Func Offset: 0
	// Line 536, Address: 0x13bc8c, Func Offset: 0x1c
	// Line 538, Address: 0x13bca4, Func Offset: 0x34
	// Line 536, Address: 0x13bca8, Func Offset: 0x38
	// Line 538, Address: 0x13bcac, Func Offset: 0x3c
	// Line 547, Address: 0x13bcb4, Func Offset: 0x44
	// Line 548, Address: 0x13bcbc, Func Offset: 0x4c
	// Line 549, Address: 0x13bcc0, Func Offset: 0x50
	// Line 538, Address: 0x13bcc4, Func Offset: 0x54
	// Line 562, Address: 0x13bcc8, Func Offset: 0x58
	// Line 547, Address: 0x13bcd0, Func Offset: 0x60
	// Line 548, Address: 0x13bcd8, Func Offset: 0x68
	// Line 549, Address: 0x13bce8, Func Offset: 0x78
	// Line 558, Address: 0x13bcf8, Func Offset: 0x88
	// Line 562, Address: 0x13bd34, Func Offset: 0xc4
	// Line 566, Address: 0x13bd3c, Func Offset: 0xcc
	// Line 569, Address: 0x13bd4c, Func Offset: 0xdc
	// Line 571, Address: 0x13bd64, Func Offset: 0xf4
	// Line 572, Address: 0x13bd78, Func Offset: 0x108
	// Line 573, Address: 0x13bd80, Func Offset: 0x110
	// Line 575, Address: 0x13bd98, Func Offset: 0x128
	// Line 576, Address: 0x13bdac, Func Offset: 0x13c
	// Line 580, Address: 0x13bdb4, Func Offset: 0x144
	// Line 581, Address: 0x13bdc8, Func Offset: 0x158
	// Line 582, Address: 0x13bddc, Func Offset: 0x16c
	// Line 584, Address: 0x13bdf0, Func Offset: 0x180
	// Func End, Address: 0x13be10, Func Offset: 0x1a0
}

// xCameraSetController__FP13_tagxCamFramefff
// Start address: 0x13be10
void xCameraSetController(_tagxCamFrame* cam, float32 x, float32 y, float32 seconds)
{
	// Line 509, Address: 0x13be10, Func Offset: 0
	// Line 511, Address: 0x13be38, Func Offset: 0x28
	// Line 512, Address: 0x13be40, Func Offset: 0x30
	// Line 515, Address: 0x13be50, Func Offset: 0x40
	// Line 520, Address: 0x13bea4, Func Offset: 0x94
	// Line 524, Address: 0x13beac, Func Offset: 0x9c
	// Line 526, Address: 0x13beb8, Func Offset: 0xa8
	// Func End, Address: 0x13bed4, Func Offset: 0xc4
}

// xCameraSetTargetDY__FP13_tagxCamFrameff
// Start address: 0x13bee0
void xCameraSetTargetDY(_tagxCamFrame* cam, float32 dy, float32 seconds)
{
	_tagxCam* c;
	float32 end;
	float32 start;
	float32 desired;
	// Line 438, Address: 0x13bee0, Func Offset: 0
	// Line 439, Address: 0x13bee4, Func Offset: 0x4
	// Line 440, Address: 0x13bef0, Func Offset: 0x10
	// Line 442, Address: 0x13bef4, Func Offset: 0x14
	// Line 444, Address: 0x13bf04, Func Offset: 0x24
	// Line 445, Address: 0x13bf08, Func Offset: 0x28
	// Line 444, Address: 0x13bf0c, Func Offset: 0x2c
	// Line 446, Address: 0x13bf10, Func Offset: 0x30
	// Line 447, Address: 0x13bf18, Func Offset: 0x38
	// Line 449, Address: 0x13bf24, Func Offset: 0x44
	// Line 450, Address: 0x13bf30, Func Offset: 0x50
	// Line 458, Address: 0x13bf3c, Func Offset: 0x5c
	// Line 460, Address: 0x13bf74, Func Offset: 0x94
	// Line 462, Address: 0x13bf8c, Func Offset: 0xac
	// Line 463, Address: 0x13bf9c, Func Offset: 0xbc
	// Line 464, Address: 0x13bfa0, Func Offset: 0xc0
	// Line 465, Address: 0x13bfb8, Func Offset: 0xd8
	// Line 471, Address: 0x13bfc4, Func Offset: 0xe4
	// Line 472, Address: 0x13bfd4, Func Offset: 0xf4
	// Line 473, Address: 0x13bfd8, Func Offset: 0xf8
	// Line 474, Address: 0x13bff0, Func Offset: 0x110
	// Line 480, Address: 0x13bff8, Func Offset: 0x118
	// Line 481, Address: 0x13c014, Func Offset: 0x134
	// Line 482, Address: 0x13c018, Func Offset: 0x138
	// Line 483, Address: 0x13c034, Func Offset: 0x154
	// Line 485, Address: 0x13c038, Func Offset: 0x158
	// Line 487, Address: 0x13c050, Func Offset: 0x170
	// Line 488, Address: 0x13c078, Func Offset: 0x198
	// Line 490, Address: 0x13c088, Func Offset: 0x1a8
	// Line 492, Address: 0x13c090, Func Offset: 0x1b0
	// Line 494, Address: 0x13c0a4, Func Offset: 0x1c4
	// Line 495, Address: 0x13c0ac, Func Offset: 0x1cc
	// Line 497, Address: 0x13c0bc, Func Offset: 0x1dc
	// Line 498, Address: 0x13c0e4, Func Offset: 0x204
	// Line 500, Address: 0x13c0f4, Func Offset: 0x214
	// Line 501, Address: 0x13c0fc, Func Offset: 0x21c
	// Line 502, Address: 0x13c110, Func Offset: 0x230
	// Line 505, Address: 0x13c114, Func Offset: 0x234
	// Func End, Address: 0x13c11c, Func Offset: 0x23c
}

// xCameraSetTargetDX__FP13_tagxCamFrameff
// Start address: 0x13c120
void xCameraSetTargetDX(_tagxCamFrame* cam, float32 dx, float32 seconds)
{
	_tagxCam* c;
	float32 end;
	float32 start;
	float32 desired;
	// Line 361, Address: 0x13c120, Func Offset: 0
	// Line 362, Address: 0x13c124, Func Offset: 0x4
	// Line 363, Address: 0x13c130, Func Offset: 0x10
	// Line 365, Address: 0x13c134, Func Offset: 0x14
	// Line 367, Address: 0x13c144, Func Offset: 0x24
	// Line 368, Address: 0x13c148, Func Offset: 0x28
	// Line 367, Address: 0x13c14c, Func Offset: 0x2c
	// Line 369, Address: 0x13c150, Func Offset: 0x30
	// Line 370, Address: 0x13c158, Func Offset: 0x38
	// Line 372, Address: 0x13c164, Func Offset: 0x44
	// Line 373, Address: 0x13c170, Func Offset: 0x50
	// Line 382, Address: 0x13c17c, Func Offset: 0x5c
	// Line 384, Address: 0x13c1b4, Func Offset: 0x94
	// Line 386, Address: 0x13c1cc, Func Offset: 0xac
	// Line 387, Address: 0x13c1dc, Func Offset: 0xbc
	// Line 388, Address: 0x13c1e0, Func Offset: 0xc0
	// Line 389, Address: 0x13c1f8, Func Offset: 0xd8
	// Line 395, Address: 0x13c204, Func Offset: 0xe4
	// Line 396, Address: 0x13c214, Func Offset: 0xf4
	// Line 397, Address: 0x13c218, Func Offset: 0xf8
	// Line 398, Address: 0x13c230, Func Offset: 0x110
	// Line 404, Address: 0x13c238, Func Offset: 0x118
	// Line 405, Address: 0x13c254, Func Offset: 0x134
	// Line 406, Address: 0x13c258, Func Offset: 0x138
	// Line 407, Address: 0x13c274, Func Offset: 0x154
	// Line 409, Address: 0x13c278, Func Offset: 0x158
	// Line 411, Address: 0x13c290, Func Offset: 0x170
	// Line 412, Address: 0x13c2b8, Func Offset: 0x198
	// Line 414, Address: 0x13c2c8, Func Offset: 0x1a8
	// Line 416, Address: 0x13c2d0, Func Offset: 0x1b0
	// Line 418, Address: 0x13c2e4, Func Offset: 0x1c4
	// Line 419, Address: 0x13c2ec, Func Offset: 0x1cc
	// Line 421, Address: 0x13c2fc, Func Offset: 0x1dc
	// Line 422, Address: 0x13c324, Func Offset: 0x204
	// Line 424, Address: 0x13c334, Func Offset: 0x214
	// Line 425, Address: 0x13c33c, Func Offset: 0x21c
	// Line 426, Address: 0x13c350, Func Offset: 0x230
	// Line 429, Address: 0x13c354, Func Offset: 0x234
	// Func End, Address: 0x13c35c, Func Offset: 0x23c
}

// xCameraFollowWithOffsetState__FP13_tagxCamFramef
// Start address: 0x13c360
_tagxCam* xCameraFollowWithOffsetState(_tagxCamFrame* cam, float32 seconds)
{
	_xVec3 preline_test_pos;
	float32 cpb;
	float32 cpa;
	int32 trans;
	_xVec3 tmp;
	_xMat3x3 mrot;
	_xVec3 dirvec;
	_xVec3 to_vec;
	_tagxCam* c;
	// Line 222, Address: 0x13c360, Func Offset: 0
	// Line 228, Address: 0x13c390, Func Offset: 0x30
	// Line 229, Address: 0x13c3a0, Func Offset: 0x40
	// Line 231, Address: 0x13c3a8, Func Offset: 0x48
	// Line 242, Address: 0x13c3ac, Func Offset: 0x4c
	// Line 243, Address: 0x13c3b0, Func Offset: 0x50
	// Line 250, Address: 0x13c3b8, Func Offset: 0x58
	// Line 242, Address: 0x13c3c4, Func Offset: 0x64
	// Line 243, Address: 0x13c3c8, Func Offset: 0x68
	// Line 244, Address: 0x13c3cc, Func Offset: 0x6c
	// Line 250, Address: 0x13c3d4, Func Offset: 0x74
	// Line 244, Address: 0x13c3e4, Func Offset: 0x84
	// Line 250, Address: 0x13c3e8, Func Offset: 0x88
	// Line 253, Address: 0x13c404, Func Offset: 0xa4
	// Line 256, Address: 0x13c414, Func Offset: 0xb4
	// Line 258, Address: 0x13c434, Func Offset: 0xd4
	// Line 256, Address: 0x13c438, Func Offset: 0xd8
	// Line 258, Address: 0x13c43c, Func Offset: 0xdc
	// Line 263, Address: 0x13c440, Func Offset: 0xe0
	// Line 256, Address: 0x13c448, Func Offset: 0xe8
	// Line 258, Address: 0x13c44c, Func Offset: 0xec
	// Line 256, Address: 0x13c450, Func Offset: 0xf0
	// Line 258, Address: 0x13c454, Func Offset: 0xf4
	// Line 263, Address: 0x13c464, Func Offset: 0x104
	// Line 281, Address: 0x13c46c, Func Offset: 0x10c
	// Line 282, Address: 0x13c470, Func Offset: 0x110
	// Line 281, Address: 0x13c474, Func Offset: 0x114
	// Line 282, Address: 0x13c47c, Func Offset: 0x11c
	// Line 281, Address: 0x13c480, Func Offset: 0x120
	// Line 282, Address: 0x13c490, Func Offset: 0x130
	// Line 283, Address: 0x13c498, Func Offset: 0x138
	// Line 291, Address: 0x13c4a0, Func Offset: 0x140
	// Line 283, Address: 0x13c4a8, Func Offset: 0x148
	// Line 284, Address: 0x13c4c8, Func Offset: 0x168
	// Line 290, Address: 0x13c4d4, Func Offset: 0x174
	// Line 284, Address: 0x13c4d8, Func Offset: 0x178
	// Line 290, Address: 0x13c4dc, Func Offset: 0x17c
	// Line 284, Address: 0x13c4e4, Func Offset: 0x184
	// Line 290, Address: 0x13c4ec, Func Offset: 0x18c
	// Line 291, Address: 0x13c4f4, Func Offset: 0x194
	// Line 292, Address: 0x13c4fc, Func Offset: 0x19c
	// Line 300, Address: 0x13c504, Func Offset: 0x1a4
	// Line 292, Address: 0x13c50c, Func Offset: 0x1ac
	// Line 293, Address: 0x13c52c, Func Offset: 0x1cc
	// Line 299, Address: 0x13c538, Func Offset: 0x1d8
	// Line 293, Address: 0x13c53c, Func Offset: 0x1dc
	// Line 299, Address: 0x13c540, Func Offset: 0x1e0
	// Line 293, Address: 0x13c548, Func Offset: 0x1e8
	// Line 299, Address: 0x13c550, Func Offset: 0x1f0
	// Line 300, Address: 0x13c558, Func Offset: 0x1f8
	// Line 301, Address: 0x13c560, Func Offset: 0x200
	// Line 307, Address: 0x13c568, Func Offset: 0x208
	// Line 301, Address: 0x13c56c, Func Offset: 0x20c
	// Line 302, Address: 0x13c58c, Func Offset: 0x22c
	// Line 308, Address: 0x13c598, Func Offset: 0x238
	// Line 302, Address: 0x13c59c, Func Offset: 0x23c
	// Line 308, Address: 0x13c5a4, Func Offset: 0x244
	// Line 309, Address: 0x13c5c4, Func Offset: 0x264
	// Line 315, Address: 0x13c5c8, Func Offset: 0x268
	// Line 316, Address: 0x13c5e4, Func Offset: 0x284
	// Line 318, Address: 0x13c5ec, Func Offset: 0x28c
	// Line 316, Address: 0x13c5f0, Func Offset: 0x290
	// Line 318, Address: 0x13c5f4, Func Offset: 0x294
	// Line 320, Address: 0x13c60c, Func Offset: 0x2ac
	// Line 322, Address: 0x13c61c, Func Offset: 0x2bc
	// Line 324, Address: 0x13c62c, Func Offset: 0x2cc
	// Line 326, Address: 0x13c63c, Func Offset: 0x2dc
	// Line 328, Address: 0x13c64c, Func Offset: 0x2ec
	// Line 330, Address: 0x13c65c, Func Offset: 0x2fc
	// Line 334, Address: 0x13c66c, Func Offset: 0x30c
	// Line 337, Address: 0x13c688, Func Offset: 0x328
	// Line 338, Address: 0x13c690, Func Offset: 0x330
	// Line 341, Address: 0x13c698, Func Offset: 0x338
	// Line 345, Address: 0x13c6b0, Func Offset: 0x350
	// Line 346, Address: 0x13c6b4, Func Offset: 0x354
	// Func End, Address: 0x13c6e8, Func Offset: 0x388
}

// xCameraBegin__FP13_tagxCamFramei
// Start address: 0x13c6f0
void xCameraBegin(_tagxCamFrame* cam, int32 clear)
{
	// Line 165, Address: 0x13c6f0, Func Offset: 0
	// Line 181, Address: 0x13c700, Func Offset: 0x10
	// Line 184, Address: 0x13c708, Func Offset: 0x18
	// Line 189, Address: 0x13c714, Func Offset: 0x24
	// Line 190, Address: 0x13c720, Func Offset: 0x30
	// Func End, Address: 0x13c730, Func Offset: 0x40
}

// xCameraDestroy__FP13_tagxCamFrame
// Start address: 0x13c730
void xCameraDestroy()
{
	// Line 159, Address: 0x13c730, Func Offset: 0
	// Func End, Address: 0x13c738, Func Offset: 0x8
}

// xCameraCreate__FP13_tagxCamFrameUiUi
// Start address: 0x13c740
void xCameraCreate(_tagxCamFrame* cam, uint32 width, uint32 height)
{
	int32 first_time;
	int8 init;
	// Line 114, Address: 0x13c740, Func Offset: 0
	// Line 115, Address: 0x13c750, Func Offset: 0x10
	// Line 116, Address: 0x13c76c, Func Offset: 0x2c
	// Line 119, Address: 0x13c77c, Func Offset: 0x3c
	// Line 123, Address: 0x13c780, Func Offset: 0x40
	// Line 127, Address: 0x13c790, Func Offset: 0x50
	// Line 130, Address: 0x13c7a4, Func Offset: 0x64
	// Line 144, Address: 0x13c7a8, Func Offset: 0x68
	// Func End, Address: 0x13c7b8, Func Offset: 0x78
}

