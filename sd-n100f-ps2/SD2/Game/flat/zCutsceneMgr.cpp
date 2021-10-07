typedef struct zPlayerStatic;
typedef struct _zCutsceneMgr;
typedef struct xModelInstance;
typedef struct _tagxCam;
typedef struct _xEnt;
typedef struct _xVec3;
typedef struct _xCylinder;
typedef struct xAnimEffect;
typedef struct RxPipelineNode;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _zParEmitter;
typedef struct RxPipelineNodeParam;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimActiveEffect;
typedef struct xSerial;
typedef struct xMemPool;
typedef struct xBase;
typedef struct zParEmitterAsset;
typedef struct zScene;
typedef struct _tagxRumble;
typedef struct _xEnv;
typedef struct xParGroup;
typedef struct xSurface;
typedef struct RxNodeDefinition;
typedef struct _xBox;
typedef struct _zPlatform;
typedef struct RxPipelineCluster;
typedef struct xAnimSingle;
typedef struct RpCollSector;
typedef struct zCutsceneZbufferHack;
typedef struct _xMat4x3;
typedef struct xQCData;
typedef struct zCutsceneBoundHack;
typedef struct tag_iFile;
typedef struct RpMeshHeader;
typedef struct _xScene;
typedef struct _tagxCamPath;
typedef enum RwCameraProjection;
typedef struct xFFX;
typedef struct xParCmdTex;
typedef struct _tagp2CamStaticAsset;
typedef struct rxHeapBlockHeader;
typedef struct _tagEmitLine;
typedef struct xAnimTable;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterial;
typedef struct RwObjectHasFrame;
typedef struct RwRGBAReal;
typedef struct RwLLLink;
typedef struct _xBBox;
typedef struct sceCdlFILE;
typedef struct _zEnt;
typedef struct _zPortal;
typedef struct xAnimTransition;
typedef struct RwTexture;
typedef struct RxClusterDefinition;
typedef struct tag_xFile;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct _xEntShadow;
typedef struct xCutsceneInfo;
typedef struct RpAtomic;
typedef struct zPortalAsset;
typedef struct xAnimState;
typedef struct RpTriangle;
typedef struct RpWorldSector;
typedef struct RwV2d;
typedef struct _xEntFrame;
typedef struct RwRGBA;
typedef struct _zEntHangable;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct xPar;
typedef enum _tagRumbleType;
typedef struct _tagCamInfo;
typedef struct zCutsceneMgrAsset;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RpPolygon;
typedef struct p2EntHangableAsset;
typedef enum RwTextureFilterMode;
typedef struct xCutscene;
typedef struct xParCmdAsset;
typedef struct _tagEmitVolume;
typedef enum RxClusterValid;
typedef struct RwV3d;
typedef struct RwResEntry;
typedef struct RwObject;
typedef struct RpVertexNormal;
typedef struct RwRaster;
typedef struct RpMorphTarget;
typedef struct _tagxCamFollow;
typedef struct RwCamera;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct zPlayerGlobals;
typedef struct p2LinkAsset;
typedef struct RwPlane;
typedef struct RxPacket;
typedef struct RwLinkList;
typedef struct iShadowCache;
typedef struct RwTexDictionary;
typedef struct _tagEmitOffsetPoint;
typedef struct _tagxCamPathAsset;
typedef struct zCutSceneNames;
typedef struct _xQuat;
typedef struct RpClump;
typedef struct rxReq;
typedef struct xCutsceneTime;
typedef struct iFogParams;
typedef enum RpWorldRenderOrder;
typedef enum RwFogType;
typedef struct _iCollis;
typedef struct p2EntAsset;
typedef struct RwFrustumPlane;
typedef struct _xEntDrive;
typedef struct xAnimPlay;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct RxOutputSpec;
typedef enum RxClusterForcePresent;
typedef struct zShaggy1Globals;
typedef struct _tagxCamShoulder;
typedef struct _xBound;
typedef struct xCutsceneData;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct xAnimFile;
typedef struct _xRot;
typedef struct zCheckPoint;
typedef struct xAnimTransitionList;
typedef struct _xCollis;
typedef struct _tagxCamFollowAsset;
typedef struct iModelTag;
typedef struct RxIoSpec;
typedef struct xCamAsset;
typedef struct xModelPool;
typedef struct _tagEmitCircle;
typedef struct RpWorld;
typedef struct zGlobalGameStats;
typedef struct RpGeometry;
typedef struct RxNodeMethods;
typedef struct iEnv;
typedef enum _tagCamType;
typedef struct _xEntCollis;
typedef struct RwFrame;
typedef struct p2BaseAsset;
typedef struct RpMaterialList;
typedef struct RpSector;
typedef struct RwSurfaceProperties;
typedef enum _tagPadState;
typedef struct RxHeap;
typedef struct xCutsceneBreak;
typedef struct zJumpParam;
typedef struct _tagxCamStatic;
typedef struct RwMatrixTag;
typedef struct RxCluster;
typedef struct _tagiPad;
typedef struct RpLight;
typedef struct _tagEmitSphere;
typedef struct zGlobals;
typedef struct _tagxCamFrame;
typedef struct _tagxPad;
typedef enum rxEmbeddedPacketState;
typedef struct _tagxCamShoulderAsset;
typedef struct RwSphere;
typedef enum _tagTransType;
typedef struct _xSphere;
typedef struct zCutsceneZbuffer;
typedef struct _tagPadAnalog;
typedef struct zAssetPickupTable;
typedef struct _tagxCamStaticFollow;
typedef enum RwTextureAddressMode;
typedef struct _tagEmitRect;

typedef void(*type_0)(_xEnt*);
typedef xBase*(*type_3)(uint32);
typedef void(*type_5)(_xEnt*, _xVec3*);
typedef int32(*type_8)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int8*(*type_10)(xBase*);
typedef uint32(*type_12)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(int32);
typedef int8*(*type_17)(uint32);
typedef void(*type_23)(RxNodeDefinition*);
typedef void(*type_24)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_27)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_31)(RxPipelineNode*);
typedef void(*type_38)(void*, xParGroup*);
typedef int32(*type_40)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_41)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_47)(RwObjectHasFrame*);
typedef uint32(*type_53)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_59)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_67)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_71)(RwCamera*);
typedef void(*type_75)(RwResEntry*);
typedef RwCamera*(*type_76)(RwCamera*);
typedef void(*type_77)(xMemPool*, void*);
typedef RpClump*(*type_86)(RpClump*, void*);
typedef void(*type_92)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef RpWorldSector*(*type_93)(RpWorldSector*);
typedef void(*type_94)(_xEnt*, _xScene*, float32);
typedef void(*type_97)(_xEnt*);
typedef RpAtomic*(*type_98)(RpAtomic*, void*);
typedef int32(*type_102)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_103)(RpAtomic*);
typedef void(*type_105)(_xEnt*, _xVec3*);

typedef uint16 type_1[3];
typedef _xQuat type_2[2];
typedef RwFrustumPlane type_4[6];
typedef int8 type_6[128];
typedef int8 type_7[128][6];
typedef RwV3d type_9[8];
typedef float32 type_11[4];
typedef uint8 type_13[4];
typedef float32 type_16[4];
typedef uint8 type_18[4];
typedef uint8 type_19[3];
typedef _xCollis type_20[18];
typedef float32 type_21[4];
typedef int8 type_22[32];
typedef uint8 type_25[3];
typedef float32 type_26[4];
typedef zCutsceneZbuffer type_28[4];
typedef int8 type_29[128];
typedef float32 type_30[4];
typedef uint8 type_32[3];
typedef uint8 type_33[8];
typedef zCutSceneNames type_34[14];
typedef float32 type_35[3];
typedef uint8 type_36[22];
typedef uint8 type_37[8];
typedef float32 type_39[3];
typedef uint8 type_42[22];
typedef uint8 type_43[8];
typedef uint32 type_44[2];
typedef uint8 type_45[2];
typedef uint32 type_46[2];
typedef int8 type_48[16];
typedef zGlobalGameStats type_49[30];
typedef uint8 type_50[8];
typedef uint32 type_51[2];
typedef uint8 type_52[8];
typedef uint8 type_54[3];
typedef zGlobalGameStats type_55[13];
typedef _zEnt* type_56[10];
typedef uint32 type_57[2];
typedef uint32 type_58[1];
typedef RwTexCoords* type_60[8];
typedef zGlobalGameStats type_61[4];
typedef zCutsceneBoundHack type_62[12];
typedef int32 type_63[2];
typedef uint8 type_64[3];
typedef int32 type_65[2];
typedef RxCluster type_66[1];
typedef RwTexCoords* type_68[8];
typedef uint32 type_69[4];
typedef uint8 type_70[4];
typedef float32 type_72[2];
typedef zCutsceneZbufferHack type_73[5];
typedef int8 type_74[16];
typedef int8 type_78[64];
typedef int8 type_79[16];
typedef uint8 type_80[2];
typedef uint32 type_81[2];
typedef _xVec3 type_82[4];
typedef uint8 type_83[2];
typedef uint8 type_84[3];
typedef float32 type_85[4];
typedef float32 type_87[15];
typedef uint8 type_88[3];
typedef float32 type_89[15];
typedef float32 type_90[4];
typedef uint32 type_91[15];
typedef int8 type_95[32];
typedef float32 type_96[4];
typedef int8 type_99[32];
typedef float32 type_100[4];
typedef int8 type_101[16];
typedef float32 type_104[4];
typedef uint32 type_106[43];
typedef uint8 type_107[2];
typedef RpLight* type_108[2];
typedef xBase* type_109[43];
typedef RwFrame* type_110[2];
typedef iModelTag type_111[4];
typedef uint16 type_112[3];
typedef _xVec3 type_113[2];
typedef _xVec4 type_114[8];

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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _zPlatform
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct zCutsceneBoundHack
{
	int8* name;
	float32 radius;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
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

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct st_SERIAL_CLIENTINFO
{
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct RwLinkList
{
	RwLLLink link;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct zCutSceneNames
{
	int8 name[64];
	int32 played;
	int32 skipOK;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct rxReq
{
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _iCollis
{
	int32 unknown;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpSector
{
	int32 type;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct _tagiPad
{
	int32 port;
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

struct _tagEmitSphere
{
	float32 radius;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

zCutsceneZbufferHack zhacktable[5];
zCutsceneBoundHack boundHackTable[12];
zCutSceneNames zCutSceneNamesTable[14];
int32 gCutsceneSkipOK;
zGlobals globals;
RpAtomic*(*HackBoundCB)(RpAtomic*, void*);
int32(*zCutsceneMgrEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

uint32 zCutSceneNamesTable_getStatus(uint32 number);
void zCutsceneMgrUpdate(xBase* to, float32 dt);
void zCutsceneMgrUpdateFX(_zCutsceneMgr* t);
void zCutsceneMgrFinishLoad(xBase* to);
int32 zCutsceneMgrEventCB(xBase* to, uint32 toEvent);
void zCutSceneNamesTable_clearAll();
RpAtomic* HackBoundCB(RpAtomic* atomic, void* data);
void zCutsceneMgrLoad(xSerial* s);
void zCutsceneMgrSave(xSerial* s);
void zCutsceneMgrInit(void* b, void* tasset);

// zCutSceneNamesTable_getStatus__FUi
// Start address: 0x1d7700
uint32 zCutSceneNamesTable_getStatus(uint32 number)
{
	// Line 570, Address: 0x1d7700, Func Offset: 0
	// Line 573, Address: 0x1d771c, Func Offset: 0x1c
	// Func End, Address: 0x1d7724, Func Offset: 0x24
}

// zCutsceneMgrUpdate__FP5xBaseP7_xScenef
// Start address: 0x1d7730
void zCutsceneMgrUpdate(xBase* to, float32 dt)
{
	int32 i;
	int32 pauseValue;
	_zCutsceneMgr* t;
	// Line 444, Address: 0x1d7730, Func Offset: 0
	// Line 454, Address: 0x1d7750, Func Offset: 0x20
	// Line 455, Address: 0x1d7760, Func Offset: 0x30
	// Line 456, Address: 0x1d7770, Func Offset: 0x40
	// Line 457, Address: 0x1d77b0, Func Offset: 0x80
	// Line 458, Address: 0x1d77b4, Func Offset: 0x84
	// Line 460, Address: 0x1d77b8, Func Offset: 0x88
	// Line 463, Address: 0x1d77cc, Func Offset: 0x9c
	// Line 487, Address: 0x1d77d4, Func Offset: 0xa4
	// Line 492, Address: 0x1d77f4, Func Offset: 0xc4
	// Line 497, Address: 0x1d7874, Func Offset: 0x144
	// Line 505, Address: 0x1d7878, Func Offset: 0x148
	// Line 506, Address: 0x1d7888, Func Offset: 0x158
	// Line 507, Address: 0x1d78c8, Func Offset: 0x198
	// Line 508, Address: 0x1d78cc, Func Offset: 0x19c
	// Line 510, Address: 0x1d78d4, Func Offset: 0x1a4
	// Line 511, Address: 0x1d78e0, Func Offset: 0x1b0
	// Line 514, Address: 0x1d78f0, Func Offset: 0x1c0
	// Line 515, Address: 0x1d7904, Func Offset: 0x1d4
	// Line 518, Address: 0x1d7910, Func Offset: 0x1e0
	// Line 519, Address: 0x1d791c, Func Offset: 0x1ec
	// Line 525, Address: 0x1d7924, Func Offset: 0x1f4
	// Line 526, Address: 0x1d7968, Func Offset: 0x238
	// Line 537, Address: 0x1d796c, Func Offset: 0x23c
	// Line 540, Address: 0x1d797c, Func Offset: 0x24c
	// Line 542, Address: 0x1d79bc, Func Offset: 0x28c
	// Line 544, Address: 0x1d79d0, Func Offset: 0x2a0
	// Line 546, Address: 0x1d79d8, Func Offset: 0x2a8
	// Line 547, Address: 0x1d79e8, Func Offset: 0x2b8
	// Line 548, Address: 0x1d79f4, Func Offset: 0x2c4
	// Line 553, Address: 0x1d7a00, Func Offset: 0x2d0
	// Line 554, Address: 0x1d7a08, Func Offset: 0x2d8
	// Line 555, Address: 0x1d7a10, Func Offset: 0x2e0
	// Line 556, Address: 0x1d7a20, Func Offset: 0x2f0
	// Line 559, Address: 0x1d7a2c, Func Offset: 0x2fc
	// Line 560, Address: 0x1d7a40, Func Offset: 0x310
	// Line 563, Address: 0x1d7a4c, Func Offset: 0x31c
	// Func End, Address: 0x1d7a6c, Func Offset: 0x33c
}

// zCutsceneMgrUpdateFX__FP13_zCutsceneMgrf
// Start address: 0x1d7a70
void zCutsceneMgrUpdateFX(_zCutsceneMgr* t)
{
	_zParEmitter* e;
	int32 i;
	xCutscene* csn;
	zCutsceneMgrAsset* a;
	// Line 393, Address: 0x1d7a70, Func Offset: 0
	// Line 395, Address: 0x1d7a84, Func Offset: 0x14
	// Line 398, Address: 0x1d7a88, Func Offset: 0x18
	// Line 401, Address: 0x1d7a8c, Func Offset: 0x1c
	// Line 404, Address: 0x1d7a90, Func Offset: 0x20
	// Line 406, Address: 0x1d7a9c, Func Offset: 0x2c
	// Line 407, Address: 0x1d7aa4, Func Offset: 0x34
	// Line 410, Address: 0x1d7aac, Func Offset: 0x3c
	// Line 413, Address: 0x1d7abc, Func Offset: 0x4c
	// Line 418, Address: 0x1d7ad4, Func Offset: 0x64
	// Line 422, Address: 0x1d7adc, Func Offset: 0x6c
	// Line 425, Address: 0x1d7b08, Func Offset: 0x98
	// Line 429, Address: 0x1d7b14, Func Offset: 0xa4
	// Line 430, Address: 0x1d7b18, Func Offset: 0xa8
	// Line 431, Address: 0x1d7b28, Func Offset: 0xb8
	// Func End, Address: 0x1d7b40, Func Offset: 0xd0
}

// zCutsceneMgrFinishLoad__FP5xBase
// Start address: 0x1d7b40
void zCutsceneMgrFinishLoad(xBase* to)
{
	_zCutsceneMgr* t;
	// Line 338, Address: 0x1d7b40, Func Offset: 0
	// Line 344, Address: 0x1d7b50, Func Offset: 0x10
	// Line 345, Address: 0x1d7b5c, Func Offset: 0x1c
	// Line 346, Address: 0x1d7b64, Func Offset: 0x24
	// Line 348, Address: 0x1d7b74, Func Offset: 0x34
	// Line 351, Address: 0x1d7b80, Func Offset: 0x40
	// Line 352, Address: 0x1d7b94, Func Offset: 0x54
	// Line 354, Address: 0x1d7ba0, Func Offset: 0x60
	// Line 359, Address: 0x1d7ba8, Func Offset: 0x68
	// Line 360, Address: 0x1d7bb0, Func Offset: 0x70
	// Line 361, Address: 0x1d7bb8, Func Offset: 0x78
	// Func End, Address: 0x1d7bc8, Func Offset: 0x88
}

// zCutsceneMgrEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1d7bd0
int32 zCutsceneMgrEventCB(xBase* to, uint32 toEvent)
{
	int32 i;
	uint32 hackid;
	uint32 j;
	uint32 i;
	uint32 i;
	int32 i;
	_zCutsceneMgr* t;
	// Line 217, Address: 0x1d7bd0, Func Offset: 0
	// Line 224, Address: 0x1d7bf4, Func Offset: 0x24
	// Line 230, Address: 0x1d7c30, Func Offset: 0x60
	// Line 231, Address: 0x1d7c40, Func Offset: 0x70
	// Line 234, Address: 0x1d7c4c, Func Offset: 0x7c
	// Line 237, Address: 0x1d7c68, Func Offset: 0x98
	// Line 238, Address: 0x1d7c80, Func Offset: 0xb0
	// Line 239, Address: 0x1d7c84, Func Offset: 0xb4
	// Line 241, Address: 0x1d7c8c, Func Offset: 0xbc
	// Line 245, Address: 0x1d7ca0, Func Offset: 0xd0
	// Line 247, Address: 0x1d7cc0, Func Offset: 0xf0
	// Line 248, Address: 0x1d7ccc, Func Offset: 0xfc
	// Line 252, Address: 0x1d7cf0, Func Offset: 0x120
	// Line 253, Address: 0x1d7d14, Func Offset: 0x144
	// Line 254, Address: 0x1d7d1c, Func Offset: 0x14c
	// Line 260, Address: 0x1d7d3c, Func Offset: 0x16c
	// Line 261, Address: 0x1d7d44, Func Offset: 0x174
	// Line 262, Address: 0x1d7d50, Func Offset: 0x180
	// Line 263, Address: 0x1d7d60, Func Offset: 0x190
	// Line 264, Address: 0x1d7d74, Func Offset: 0x1a4
	// Line 271, Address: 0x1d7d80, Func Offset: 0x1b0
	// Line 275, Address: 0x1d7d94, Func Offset: 0x1c4
	// Line 271, Address: 0x1d7d98, Func Offset: 0x1c8
	// Line 275, Address: 0x1d7d9c, Func Offset: 0x1cc
	// Line 276, Address: 0x1d7db8, Func Offset: 0x1e8
	// Line 279, Address: 0x1d7dc8, Func Offset: 0x1f8
	// Line 284, Address: 0x1d7dd0, Func Offset: 0x200
	// Line 287, Address: 0x1d7dd8, Func Offset: 0x208
	// Line 290, Address: 0x1d7de0, Func Offset: 0x210
	// Line 291, Address: 0x1d7df4, Func Offset: 0x224
	// Line 292, Address: 0x1d7df8, Func Offset: 0x228
	// Line 294, Address: 0x1d7e08, Func Offset: 0x238
	// Line 298, Address: 0x1d7e18, Func Offset: 0x248
	// Line 299, Address: 0x1d7e1c, Func Offset: 0x24c
	// Line 300, Address: 0x1d7e28, Func Offset: 0x258
	// Line 301, Address: 0x1d7e40, Func Offset: 0x270
	// Line 302, Address: 0x1d7e50, Func Offset: 0x280
	// Line 303, Address: 0x1d7e58, Func Offset: 0x288
	// Line 305, Address: 0x1d7e70, Func Offset: 0x2a0
	// Line 309, Address: 0x1d7e78, Func Offset: 0x2a8
	// Line 316, Address: 0x1d7e80, Func Offset: 0x2b0
	// Line 322, Address: 0x1d7ea4, Func Offset: 0x2d4
	// Line 321, Address: 0x1d7ec4, Func Offset: 0x2f4
	// Line 322, Address: 0x1d7ec8, Func Offset: 0x2f8
	// Func End, Address: 0x1d7ed0, Func Offset: 0x300
}

// zCutSceneNamesTable_clearAll__Fv
// Start address: 0x1d7ed0
void zCutSceneNamesTable_clearAll()
{
	int32 i;
	// Line 197, Address: 0x1d7ed8, Func Offset: 0x8
	// Line 201, Address: 0x1d7ee0, Func Offset: 0x10
	// Line 197, Address: 0x1d7f1c, Func Offset: 0x4c
	// Line 201, Address: 0x1d7f24, Func Offset: 0x54
	// Line 202, Address: 0x1d7f2c, Func Offset: 0x5c
	// Line 203, Address: 0x1d7f40, Func Offset: 0x70
	// Func End, Address: 0x1d7f48, Func Offset: 0x78
}

// HackBoundCB__FP8RpAtomicPv
// Start address: 0x1d7f50
RpAtomic* HackBoundCB(RpAtomic* atomic, void* data)
{
	// Line 188, Address: 0x1d7f50, Func Offset: 0
	// Line 191, Address: 0x1d7f54, Func Offset: 0x4
	// Line 188, Address: 0x1d7f58, Func Offset: 0x8
	// Line 189, Address: 0x1d7f5c, Func Offset: 0xc
	// Line 190, Address: 0x1d7f64, Func Offset: 0x14
	// Line 192, Address: 0x1d7f70, Func Offset: 0x20
	// Func End, Address: 0x1d7f78, Func Offset: 0x28
}

// zCutsceneMgrLoad__FP13_zCutsceneMgrP7xSerial
// Start address: 0x1d7f80
void zCutsceneMgrLoad(xSerial* s)
{
	int32 i;
	// Line 171, Address: 0x1d7f80, Func Offset: 0
	// Line 174, Address: 0x1d7f9c, Func Offset: 0x1c
	// Line 177, Address: 0x1d7fa8, Func Offset: 0x28
	// Line 179, Address: 0x1d7fb4, Func Offset: 0x34
	// Line 183, Address: 0x1d7fc4, Func Offset: 0x44
	// Func End, Address: 0x1d7fdc, Func Offset: 0x5c
}

// zCutsceneMgrSave__FP13_zCutsceneMgrP7xSerial
// Start address: 0x1d7fe0
void zCutsceneMgrSave(xSerial* s)
{
	int32 i;
	// Line 143, Address: 0x1d7fe0, Func Offset: 0
	// Line 146, Address: 0x1d7ffc, Func Offset: 0x1c
	// Line 150, Address: 0x1d8008, Func Offset: 0x28
	// Line 151, Address: 0x1d8014, Func Offset: 0x34
	// Line 153, Address: 0x1d8028, Func Offset: 0x48
	// Line 154, Address: 0x1d803c, Func Offset: 0x5c
	// Line 158, Address: 0x1d804c, Func Offset: 0x6c
	// Func End, Address: 0x1d8064, Func Offset: 0x84
}

// zCutsceneMgrInit__FPvPv
// Start address: 0x1d8070
void zCutsceneMgrInit(void* b, void* tasset)
{
	// Line 95, Address: 0x1d8070, Func Offset: 0
	// Line 96, Address: 0x1d8084, Func Offset: 0x14
	// Line 97, Address: 0x1d80c0, Func Offset: 0x50
	// Func End, Address: 0x1d80d4, Func Offset: 0x64
}

