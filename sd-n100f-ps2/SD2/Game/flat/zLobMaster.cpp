typedef struct xCutsceneInfo;
typedef struct RxPacket;
typedef enum _tagPadState;
typedef struct _xEnt;
typedef struct zEntProjectile;
typedef struct xCutsceneData;
typedef struct st_ZPRJ_CAT_GRAVBALL;
typedef struct zLobMasterAsset;
typedef struct _tagxCamPath;
typedef struct xFFX;
typedef struct RpClump;
typedef enum en_ZPRJ_CATEGORY;
typedef struct zScene;
typedef struct zPortalAsset;
typedef struct _xBBox;
typedef struct RwObjectHasFrame;
typedef struct _tagp2CamStaticAsset;
typedef enum RwTextureAddressMode;
typedef struct _tagxCam;
typedef struct st_ZPRJ_CAT_BOUNCEBALL;
typedef struct xAnimPlay;
typedef struct _tagiPad;
typedef struct RpCollSector;
typedef struct RxPipelineNode;
typedef struct xSpline3;
typedef struct zGustAsset;
typedef struct _xCollis;
typedef struct _xEntShadow;
typedef struct _zPlatform;
typedef struct RpMeshHeader;
typedef struct st_ZPRJ_CATEGORY_FUNCS;
typedef struct _zEntHangable;
typedef struct xBase;
typedef struct st_LOBMASTER_DATA;
typedef struct _iCollis;
typedef struct xAnimFile;
typedef struct RxPipeline;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xCutsceneBreak;
typedef struct st_ZPRJ_TYPERECORD;
typedef struct RpWorldSector;
typedef enum en_ZPRJ_CATDATA_FORM;
typedef struct xAnimSingle;
typedef struct RxPipelineNodeParam;
typedef struct xAnimEffect;
typedef struct xCutsceneTime;
typedef struct st_CAT_AIMGRAV;
typedef struct _xMat3x3;
typedef struct _xEntFrame;
typedef struct RxPipelineNodeTopSortData;
typedef struct p2EntHangableAsset;
typedef struct _xVec3;
typedef struct zAssetPickupTable;
typedef struct _zVolume;
typedef struct st_LOBMASTER_DEPOT;
typedef struct xAnimTransitionList;
typedef struct _zMovePoint;
typedef struct RxNodeDefinition;
typedef struct xAnimTable;
typedef struct st_LOBMASTER_CONFIG;
typedef struct _xEnv;
typedef struct RpWorld;
typedef struct _tagPadAnalog;
typedef struct xSerial;
typedef struct RxPipelineCluster;
typedef struct _xEntDrive;
typedef struct _tagCamInfo;
typedef struct xModelPool;
typedef struct _tagp2CamStaticFollowAsset;
typedef enum en_ZPRJ_CATAIM_FORM;
typedef struct iEnv;
typedef struct _tagxPad;
typedef struct RpGeometry;
typedef struct rxHeapBlockHeader;
typedef struct RwRaster;
typedef struct RwLLLink;
typedef struct zCutsceneZbuffer;
typedef struct xModelInstance;
typedef struct RwRGBAReal;
typedef struct RpVertexNormal;
typedef struct RwCamera;
typedef struct rxHeapFreeBlock;
typedef struct _zEnt;
typedef struct xMemPool;
typedef struct RpAtomic;
typedef struct xAnimActiveEffect;
typedef struct p2BaseAsset;
typedef struct RpSector;
typedef struct _tagxCamFollow;
typedef struct RpMorphTarget;
typedef struct _xMat4x3;
typedef struct RpMaterialList;
typedef struct _tagxRumble;
typedef struct RxClusterDefinition;
typedef struct _zPortal;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterial;
typedef struct RwV2d;
typedef struct RpLight;
typedef struct iShadowCache;
typedef struct RwResEntry;
typedef struct zGustData;
typedef struct RwTexDictionary;
typedef struct RwFrame;
typedef struct RwV3d;
typedef struct _xQuat;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct _tagxCamPathAsset;
typedef enum en_ZPRJ_STATES;
typedef struct _zGust;
typedef enum RwTextureFilterMode;
typedef struct p2EntAsset;
typedef struct tag_xFile;
typedef struct RwObject;
typedef struct RwFrustumPlane;
typedef struct zCutsceneZbufferHack;
typedef struct RpPolygon;
typedef struct sceCdlFILE;
typedef enum RxClusterValid;
typedef struct xCoef3;
typedef struct xAnimTransition;
typedef struct st_ZPRJ_CATEGORY_PROPS;
typedef struct _xVec4;
typedef enum en_LOBMASTER_PARAMID;
typedef struct st_ZPRJ_CAT_PICKUP;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct iFogParams;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RpTriangle;
typedef struct tag_iFile;
typedef struct RwPlane;
typedef enum en_PROJECTILE_EVENT;
typedef struct _tagxCamShoulder;
typedef struct RwLinkList;
typedef struct RwTexture;
typedef struct p2LinkAsset;
typedef struct ST_CAT_AIMDATA;
typedef struct _xRot;
typedef enum _tagRumbleType;
typedef struct _zCutsceneMgr;
typedef struct zShaggy1Globals;
typedef struct zCutsceneMgrAsset;
typedef struct xCamAsset;
typedef struct rxReq;
typedef struct st_ZPRJ_CATDATA;
typedef enum en_LOB_POWERUP_TYPE;
typedef struct st_ZPRJ_LINKNODE;
typedef enum RwFogType;
typedef struct _tagxCamFollowAsset;
typedef struct _xEntCollis;
typedef struct xCutscene;
typedef struct zCheckPoint;
typedef struct RwTexCoords;
typedef struct st_LOBMASTER_QUEUE;
typedef struct RxOutputSpec;
typedef struct st_ZPRJ_COMMON;
typedef enum RxClusterForcePresent;
typedef enum _tagCamType;
typedef enum en_LOB_MASTER_TYPE;
typedef struct zGlobalGameStats;
typedef struct RxClusterRef;
typedef struct xCoef;
typedef struct _tagxCamStatic;
typedef enum RxNodeDefEditable;
typedef struct p2MovePointAsset;
typedef struct _xMovePoint;
typedef struct RxIoSpec;
typedef struct RpInterpolator;
typedef struct zJumpParam;
typedef struct _tagxCamFrame;
typedef struct _xSphere;
typedef struct RxNodeMethods;
typedef struct st_ZPRJ_CAT_ARROW;
typedef struct zGlobals;
typedef struct RwSurfaceProperties;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct _tagxCamStaticFollow;
typedef struct RxHeap;
typedef struct _xCylinder;
typedef struct iModelTag;
typedef struct RxCluster;
typedef struct st_ENODE;
typedef struct st_CAT_AIMARROW;
typedef struct _xBox;
typedef struct xQCData;
typedef struct zPlayerStatic;
typedef struct RwSphere;
typedef enum RpWorldRenderOrder;
typedef enum RwCameraProjection;
typedef enum rxEmbeddedPacketState;

typedef int32(*type_1)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_2)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_6)(zEntProjectile*, int32);
typedef RpClump*(*type_10)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_14)(RwObjectHasFrame*);
typedef int32(*type_18)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_20)(zEntProjectile*);
typedef RpWorldSector*(*type_21)(RpWorldSector*);
typedef void(*type_23)(zEntProjectile*);
typedef int32(*type_25)(RxNodeDefinition*);
typedef int32(*type_27)(zEntProjectile*, float32, zScene*, _xEntFrame*);
typedef xBase*(*type_31)(uint32);
typedef int32(*type_32)(zEntProjectile*, float32, zScene*, _xEntFrame*);
typedef void(*type_33)(RxNodeDefinition*);
typedef int32(*type_35)(zEntProjectile*, en_PROJECTILE_EVENT, void*);
typedef int8*(*type_36)(xBase*);
typedef int32(*type_38)(zEntProjectile*);
typedef int8*(*type_39)(uint32);
typedef int32(*type_42)(RxPipelineNode*);
typedef int32(*type_43)(zEntProjectile*, ST_CAT_AIMDATA*, int32);
typedef int32(*type_46)(zEntProjectile*, zScene*, float32);
typedef uint32(*type_48)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_49)(RpAtomic*);
typedef void(*type_50)(RxPipelineNode*);
typedef RwCamera*(*type_52)(RwCamera*);
typedef int32(*type_55)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_56)(RwCamera*);
typedef void(*type_62)(int32);
typedef uint32(*type_64)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_71)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_72)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_77)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_78)(RwResEntry*);
typedef void(*type_80)(_xEnt*, _xScene*, float32);
typedef void(*type_82)(_xEnt*);
typedef void(*type_85)(_xEnt*);
typedef void(*type_86)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_91)(_xEnt*, _xVec3*);
typedef void(*type_92)(xMemPool*, void*);
typedef void(*type_101)(_xEnt*, _xVec3*);
typedef int32(*type_109)(zEntProjectile*, en_PROJECTILE_EVENT, void*);

typedef int8 type_0[128][6];
typedef uint8 type_3[2];
typedef uint8 type_4[8];
typedef uint8 type_5[2];
typedef float32 type_7[4];
typedef uint8 type_8[8];
typedef float32 type_9[4];
typedef uint8 type_11[8];
typedef float32 type_12[4];
typedef int8 type_13[32];
typedef uint8 type_15[8];
typedef int8 type_16[16];
typedef float32 type_17[4];
typedef uint32 type_19[2];
typedef float32 type_22[4];
typedef uint8 type_24[3];
typedef float32 type_26[3];
typedef _xVec3 type_28[2];
typedef uint8 type_29[3];
typedef float32 type_30[3];
typedef _xQuat type_34[2];
typedef zGlobalGameStats type_37[30];
typedef zGlobalGameStats type_40[13];
typedef _zEnt* type_41[10];
typedef uint32 type_44[1];
typedef zGlobalGameStats type_45[4];
typedef int32 type_47[2];
typedef int32 type_51[2];
typedef RpLight* type_53[2];
typedef RwFrame* type_54[2];
typedef _xVec3 type_57[4];
typedef _zGust* type_58[4];
typedef float32 type_59[4];
typedef uint8 type_60[22];
typedef RxCluster type_61[1];
typedef uint8 type_63[22];
typedef zCutsceneZbuffer type_65[4];
typedef uint16 type_66[3];
typedef uint8 type_67[3];
typedef int8 type_68[16];
typedef uint32 type_69[4];
typedef uint8 type_70[8];
typedef uint16 type_73[3];
typedef uint32 type_74[2];
typedef int8 type_75[128];
typedef uint32 type_76[2];
typedef uint32 type_79[2];
typedef uint32 type_81[2];
typedef int8 type_83[32];
typedef int8 type_84[32];
typedef int8 type_87[16];
typedef float32 type_88[2];
typedef float32 type_89[4];
typedef int8 type_90[16];
typedef float32 type_93[4];
typedef st_LOBMASTER_QUEUE type_94[5];
typedef RwTexCoords* type_95[8];
typedef uint8 type_96[2];
typedef uint8 type_97[3];
typedef float32 type_98[15];
typedef float32 type_99[15];
typedef iModelTag type_100[4];
typedef _xVec4 type_102[8];
typedef RwFrustumPlane type_103[6];
typedef RwTexCoords* type_104[8];
typedef uint32 type_105[15];
typedef uint32 type_106[43];
typedef RwV3d type_107[8];
typedef xBase* type_108[43];
typedef float32 type_110[4];
typedef _xCollis type_111[18];
typedef float32 type_112[4];
typedef float32 type_113[4];
typedef int8 type_114[128];

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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct zEntProjectile : _xEnt
{
	int32 flg_prop;
	int32 flg_categ;
	uint8 flg_chk;
	uint8 flg_pen;
	uint8 pad[2];
	void* owner;
	void* ownerContext;
	int32(*ownerNotify)(zEntProjectile*, en_PROJECTILE_EVENT, void*);
	int32(*ownerDoCollide)(zEntProjectile*, zScene*, float32);
	float32 tmr_alive;
	float32 tmr_curstate;
	_xVec3 pos_home;
	float32 tym_maxlife;
	float32 ds2_maxlife;
	st_ZPRJ_COMMON common;
	st_ZPRJ_CATDATA cat_data;
	void* xtradata;
	_xCollis* plyr_colrec;
	st_ZPRJ_LINKNODE linknode;
	en_ZPRJ_STATES state;
	int32 flg_stat;
	float32 pct_docol;
	float32 tmr_coldelay;
	en_ZPRJ_CATEGORY cat_proj;
	st_ZPRJ_TYPERECORD* ptype;
	float32 tmr_emit;
	_xEntFrame raw_frame;
	p2EntAsset raw_asset;
	_xEntShadow raw_shadow;
	zGustData raw_gust;
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

struct st_ZPRJ_CAT_GRAVBALL
{
	float32 acc_gravity;
};

struct zLobMasterAsset : p2BaseAsset
{
	int32 lobMasterType;
	uint32 projectileTypeID;
	_xVec3 pos_launch;
	_xVec3 rot_launch;
	float32 spd_launch;
	float32 spd_randPct;
	_xVec3 scl_model;
	int32 flg_enablers;
	float32 tym_maxlife;
	float32 dst_maxdist;
	uint32 aid_mvptID;
	int32 cnt_salvo;
	int32 cnt_ammo;
	float32 fac_arccoeff;
	int32 ang_debrisCone;
	int32 numBounce;
	int32 typ_powerup;
	float32 heavyFactor;
	_xVec3 tumbleRotation;
	float32 collideDelay;
	float32 atRestPeriod;
	uint32 mode;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct xFFX
{
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

enum en_ZPRJ_CATEGORY
{
	ZPRJ_CAT_UNKNOWN,
	ZPRJ_CAT_ARROW,
	ZPRJ_CAT_GRAVBALL,
	ZPRJ_CAT_BOUNCEBALL,
	ZPRJ_CAT_BUBSOAP,
	ZPRJ_CAT_BUBGUM,
	ZPRJ_CAT_BKAXE,
	ZPRJ_CAT_GGSHOCK,
	ZPRJ_CAT_RBSWORD,
	ZPRJ_CAT_MMFLASK,
	ZPRJ_CAT_PICKUP,
	ZPRJ_CAT_STDDEBRIS,
	ZPRJ_CAT_BANGDEBRIS,
	ZPRJ_CAT_NOMORE
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct st_ZPRJ_CAT_BOUNCEBALL : st_ZPRJ_CAT_GRAVBALL
{
	int32 atRest;
	float32 tym_atrest;
	int32 cnt_curBounce;
	int32 cnt_maxBounce;
	float32 fac_elastic;
	float32 pct_randKick;
	int32 skip_next_bounce;
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

struct _tagiPad
{
	int32 port;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	_xVec3* points;
	float32* time;
	_xVec3* p12;
	_xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
};

struct zGustAsset
{
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _zPlatform
{
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct st_ZPRJ_CATEGORY_FUNCS
{
	int32 flg_cback;
	int32(*attach)(zEntProjectile*);
	void(*detach)(zEntProjectile*);
	int32(*logix)(zEntProjectile*, float32, zScene*, _xEntFrame*);
	int32(*calcmove)(zEntProjectile*, float32, zScene*, _xEntFrame*);
	int32(*notify)(zEntProjectile*, en_PROJECTILE_EVENT, void*);
	int32(*render)(zEntProjectile*);
	int32(*aimer)(zEntProjectile*, ST_CAT_AIMDATA*, int32);
	int32(*collide)(zEntProjectile*, zScene*, float32);
	void(*dbgUpdate)(zEntProjectile*, int32);
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct st_LOBMASTER_DATA : xBase
{
	int32 flg_lmopts;
	float32 ang_debrisCone;
	int32 cnt_ammo;
	int32 cnt_salvo;
	_zMovePoint* nav_bullbase;
	_zMovePoint* nav_nextbull;
	_zMovePoint* nav_prevbull;
	int32 flg_suitcase;
	_xVec3 pos_altLaunch;
	_xVec3 dir_altLaunch;
	_xBound bnd_altLaunch;
	st_LOBMASTER_CONFIG cfg;
};

struct _iCollis
{
	int32 unknown;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct st_ZPRJ_TYPERECORD
{
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

enum en_ZPRJ_CATDATA_FORM
{
	ZPRJ_CDAT_ARROW,
	ZPRJ_CDAT_GRAVBALL,
	ZPRJ_CDAT_BOUNCE
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct st_CAT_AIMGRAV
{
	_xVec3 pos_src;
	_xVec3 pos_tgt;
	float32 fac_arcness;
	float32 acc_gravity;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct _zVolume
{
};

struct st_LOBMASTER_DEPOT
{
	st_LOBMASTER_DATA* raw_pool;
	int32 raw_cnt;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _zMovePoint : _xMovePoint
{
	uint32 unused;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct st_LOBMASTER_CONFIG
{
	zLobMasterAsset* rawass;
	_xVec3 dir_launch;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xSerial
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

enum en_ZPRJ_CATAIM_FORM
{
	ZPRJ_CAIM_ARROW,
	ZPRJ_CAIM_GRAVBALL
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct zGustData
{
	uint32 gust_on;
	_zGust* g[4];
	float32 lerp[4];
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

enum en_ZPRJ_STATES
{
	ZPRJ_STATE_UNUSED,
	ZPRJ_STATE_STANDBY,
	ZPRJ_STATE_ACTIVE,
	ZPRJ_STATE_DEAD
};

struct _zGust : xBase
{
	uint32 flags;
	zGustAsset* asset;
	_zVolume* volume;
	_zVolume* fx_volume;
	float32 debris_timer;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct st_ZPRJ_CATEGORY_PROPS
{
	int32 flg_props;
	uint8 flg_physics;
	uint8 flg_chk;
	uint8 flg_pen;
	uint8 pad;
	int32 flg_categ;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

enum en_LOBMASTER_PARAMID
{
	ZLOB_PARM_RAWASS,
	ZLOB_PARM_LOBFLAGS,
	ZLOB_PARM_LOBMASTERTYPE,
	ZLOB_PARM_PRJTYPEID,
	ZLOB_PARM_POS_LAUNCH,
	ZLOB_PARM_DIR_LAUNCH,
	ZLOB_PARM_SPD_LAUNCH,
	ZLOB_PARM_SPD_RANDPCT,
	ZLOB_PARM_SCL_MODEL,
	ZLOB_PARM_TYM_MAXLIFE,
	ZLOB_PARM_DST_MAXDIST,
	ZLOB_PARM_DEBRISANGLE,
	ZLOB_PARM_SALVO,
	ZLOB_PARM_AMMO,
	ZLOB_PARM_ARCFACTOR,
	ZLOB_PARM_HEAVYFACTOR,
	ZLOB_PARM_PAYLOAD,
	ZLOB_PARM_MVPTBULL,
	ZLOB_PARM_NUMBOUNCE,
	ZLOB_PARM_TUMBLE,
	ZLOB_PARM_COLLIDEDELAY,
	ZLOB_PARM_RESTPERIOD,
	ZLOB_PARM_NOMORE
};

struct st_ZPRJ_CAT_PICKUP
{
	int32 nada;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

enum en_PROJECTILE_EVENT
{
	ZPRJ_EVNT_ACTIVE,
	ZPRJ_EVNT_TRANSTATE,
	ZPRJ_EVNT_NEWTIME,
	ZPRJ_EVNT_ENDTIME,
	ZPRJ_EVNT_ABORT,
	ZPRJ_EVNT_HITPLYR,
	ZPRJ_EVNT_LAUNCH,
	ZPRJ_EVNT_INFLIGHT,
	ZPRJ_EVNT_ATREST,
	ZPRJ_EVNT_HITSTUFF,
	ZPRJ_EVNT_DETONATE,
	ZPRJ_EVNT_SELFDESTRUCT,
	ZPRJ_EVNT_DEATH,
	ZPRJ_EVNT_STARTRESTING,
	ZPRJ_EVNT_BOUNCE,
	ZPRJ_EVNT_VIL_BUILDUP,
	ZPRJ_EVNT_VIL_AFTERMATH,
	ZPRJ_EVNT_NOMORE
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct RwLinkList
{
	RwLLLink link;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct ST_CAT_AIMDATA
{
	en_ZPRJ_CATAIM_FORM idx_caim;
	float32 spd_base;
	_xVec3 dir_base;
	union
	{
		st_CAT_AIMARROW arrow;
		st_CAT_AIMGRAV grav;
	};
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct rxReq
{
};

struct st_ZPRJ_CATDATA
{
	en_ZPRJ_CATDATA_FORM idx_cdat;
	union
	{
		st_ZPRJ_CAT_ARROW arrow;
		st_ZPRJ_CAT_GRAVBALL gravball;
		st_ZPRJ_CAT_BOUNCEBALL bounce;
		st_ZPRJ_CAT_PICKUP pickup;
	};
};

enum en_LOB_POWERUP_TYPE
{
	ZLOB_PUPTYP_NOTHING,
	ZLOB_PUPTYP_DAMAGE,
	ZLOB_PUPTYP_ADDCHANCE,
	ZLOB_PUPTYP_ADDSCARE,
	ZLOB_PUPTYP_ADDGUM,
	ZLOB_PUPTYP_ADDSOAP,
	ZLOB_PUPTYP_ADDSNACK,
	ZLOB_PUPTYP_NOMORE
};

struct st_ZPRJ_LINKNODE
{
	st_ENODE node;
	zEntProjectile* backref;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct st_LOBMASTER_QUEUE
{
	int32 flg_stat;
	float32 tmr_delay;
	uint32 aid_lobber;
	_xVec3 pos_launch;
	_xVec3 dir_launch;
	int32 cnt_salvo;
	int32 idx_current;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct st_ZPRJ_COMMON
{
	_xVec3 vec_flex;
	_xMat3x3 mat_flex;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

enum en_LOB_MASTER_TYPE
{
	LOBMASTER_CUSTOM,
	LOBMASTER_ARROW,
	LOBMASTER_DEBRIS,
	LOBMASTER_PICKUP,
	LOBMASTER_NOMORE
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xCoef
{
	float32 a[4];
};

struct _tagxCamStatic
{
	uint32 unused;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct p2MovePointAsset : p2BaseAsset
{
	_xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
};

struct _xMovePoint : xBase
{
	p2MovePointAsset* asset;
	_xVec3* pos;
	_xMovePoint** nodes;
	_xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 flg_props;
	uint8 pad[2];
	float32 delay;
	xSpline3* spl;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct st_ZPRJ_CAT_ARROW
{
	float32 acc_gravity;
	int32 amStuck;
	_xEnt* ent_stuck;
	_xVec3 pos_stuck;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct st_ENODE
{
	st_ENODE* next;
	st_ENODE* prev;
};

struct st_CAT_AIMARROW
{
	_xVec3 pos_src;
	_xVec3 pos_tgt;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

int32 g_zlob_init;
st_LOBMASTER_DEPOT g_zlob_depot;
st_LOBMASTER_QUEUE g_zlob_queue[5];
_xVec3 g_Y3;
zGlobals globals;
int32(*ZLOB_legacy_notify)(zEntProjectile*, en_PROJECTILE_EVENT, void*);
int32(*ZLOB_elcb_event)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

int32 LPRJ_debris_prjmove(zEntProjectile* prj, float32 dt, _xEntFrame* frame);
int32 LPRJ_debris_logix(zEntProjectile* prj, float32 dt, _xEntFrame* frame);
int32 LPRJ_debris_attach(zEntProjectile* prj);
int32 ZLOB_randpos_fromBound(_xBound* bnd, int32 flg_ropts, _xVec3* pos_launch);
st_LOBMASTER_DATA* ZLOB_find_lobber(uint32 aid_lobm);
void ZLOB_grab_nextBull(st_LOBMASTER_DATA* lob);
int32 ZLOB_shoot_debris(st_LOBMASTER_DATA* lob, int32 nth, int32 total);
int32 ZLOB_shoot_arrow(st_LOBMASTER_DATA* lob);
int32 ZLOB_shoot_legacy(st_LOBMASTER_DATA* lob);
int32 ZLOB_legacy_notify(zEntProjectile* prj, en_PROJECTILE_EVENT event);
int32 ZLOB_shoot_one(st_LOBMASTER_DATA* lob, int32 nth, int32 total);
int32 ZLOB_doLaunch(st_LOBMASTER_DATA* lob);
int32 ZLOB_elcb_event(xBase* from, xBase* xb, uint32 toEvent);
int32 LCFG_getParam(st_LOBMASTER_CONFIG* cfg, en_LOBMASTER_PARAMID pid, void* vv);
void ZLOB_HEB_to_DIR(_xVec3* dir_result, _xVec3* rot_HPB);
void zLobMaster_timestep(float32 dt);
void zLobMaster_InitDep(st_LOBMASTER_DATA* lob);
void zLobMaster_Init(st_LOBMASTER_DATA* lob, p2BaseAsset* basset);
st_LOBMASTER_DATA* zLobMaster_getInst(st_LOBMASTER_DATA* pool, int32 idx);
st_LOBMASTER_DATA* zLobMaster_memPool(int32 cnt);
void zLobMaster_sceneFinish();
void zLobMaster_scenePrepare();
void zLobMaster_Shutdown();
void zLobMaster_Startup();

// LPRJ_debris_prjmove__FP14zEntProjectilefP6zSceneP10_xEntFrame
// Start address: 0x1b1910
int32 LPRJ_debris_prjmove(zEntProjectile* prj, float32 dt, _xEntFrame* frame)
{
	st_ZPRJ_CAT_BOUNCEBALL* bounce;
	// Line 2148, Address: 0x1b1910, Func Offset: 0
	// Line 2156, Address: 0x1b191c, Func Offset: 0xc
	// Line 2157, Address: 0x1b1930, Func Offset: 0x20
	// Line 2158, Address: 0x1b196c, Func Offset: 0x5c
	// Line 2169, Address: 0x1b1974, Func Offset: 0x64
	// Line 2170, Address: 0x1b1978, Func Offset: 0x68
	// Line 2171, Address: 0x1b1988, Func Offset: 0x78
	// Line 2172, Address: 0x1b1998, Func Offset: 0x88
	// Line 2173, Address: 0x1b19a0, Func Offset: 0x90
	// Line 2174, Address: 0x1b19b0, Func Offset: 0xa0
	// Line 2175, Address: 0x1b19b4, Func Offset: 0xa4
	// Line 2179, Address: 0x1b19c0, Func Offset: 0xb0
	// Line 2188, Address: 0x1b19e4, Func Offset: 0xd4
	// Line 2190, Address: 0x1b19f0, Func Offset: 0xe0
	// Line 2194, Address: 0x1b19fc, Func Offset: 0xec
	// Line 2193, Address: 0x1b1a04, Func Offset: 0xf4
	// Line 2194, Address: 0x1b1a08, Func Offset: 0xf8
	// Func End, Address: 0x1b1a10, Func Offset: 0x100
}

// LPRJ_debris_logix__FP14zEntProjectilefP6zSceneP10_xEntFrame
// Start address: 0x1b1a10
int32 LPRJ_debris_logix(zEntProjectile* prj, float32 dt, _xEntFrame* frame)
{
	float32 elastic;
	_xVec3 tmp_vec;
	_xVec3 vec_accum;
	st_ZPRJ_CAT_BOUNCEBALL* bounce;
	// Line 2036, Address: 0x1b1a10, Func Offset: 0
	// Line 2040, Address: 0x1b1a28, Func Offset: 0x18
	// Line 2036, Address: 0x1b1a2c, Func Offset: 0x1c
	// Line 2040, Address: 0x1b1a30, Func Offset: 0x20
	// Line 2045, Address: 0x1b1a54, Func Offset: 0x44
	// Line 2046, Address: 0x1b1a70, Func Offset: 0x60
	// Line 2049, Address: 0x1b1a78, Func Offset: 0x68
	// Line 2050, Address: 0x1b1a90, Func Offset: 0x80
	// Line 2051, Address: 0x1b1aa0, Func Offset: 0x90
	// Line 2052, Address: 0x1b1aac, Func Offset: 0x9c
	// Line 2055, Address: 0x1b1ab4, Func Offset: 0xa4
	// Line 2056, Address: 0x1b1ac4, Func Offset: 0xb4
	// Line 2055, Address: 0x1b1ac8, Func Offset: 0xb8
	// Line 2056, Address: 0x1b1ad0, Func Offset: 0xc0
	// Line 2057, Address: 0x1b1b0c, Func Offset: 0xfc
	// Line 2058, Address: 0x1b1b3c, Func Offset: 0x12c
	// Line 2059, Address: 0x1b1b48, Func Offset: 0x138
	// Line 2060, Address: 0x1b1b54, Func Offset: 0x144
	// Line 2068, Address: 0x1b1b5c, Func Offset: 0x14c
	// Line 2071, Address: 0x1b1b78, Func Offset: 0x168
	// Line 2074, Address: 0x1b1b9c, Func Offset: 0x18c
	// Line 2077, Address: 0x1b1ba4, Func Offset: 0x194
	// Line 2078, Address: 0x1b1bd0, Func Offset: 0x1c0
	// Line 2079, Address: 0x1b1bdc, Func Offset: 0x1cc
	// Line 2080, Address: 0x1b1be8, Func Offset: 0x1d8
	// Line 2081, Address: 0x1b1bf0, Func Offset: 0x1e0
	// Line 2092, Address: 0x1b1c78, Func Offset: 0x268
	// Line 2100, Address: 0x1b1cac, Func Offset: 0x29c
	// Line 2101, Address: 0x1b1cb0, Func Offset: 0x2a0
	// Line 2102, Address: 0x1b1ccc, Func Offset: 0x2bc
	// Line 2103, Address: 0x1b1cd8, Func Offset: 0x2c8
	// Line 2104, Address: 0x1b1ce0, Func Offset: 0x2d0
	// Line 2108, Address: 0x1b1cfc, Func Offset: 0x2ec
	// Line 2109, Address: 0x1b1d04, Func Offset: 0x2f4
	// Line 2110, Address: 0x1b1d0c, Func Offset: 0x2fc
	// Line 2115, Address: 0x1b1d14, Func Offset: 0x304
	// Line 2118, Address: 0x1b1d34, Func Offset: 0x324
	// Line 2119, Address: 0x1b1d40, Func Offset: 0x330
	// Line 2122, Address: 0x1b1d58, Func Offset: 0x348
	// Line 2125, Address: 0x1b1d5c, Func Offset: 0x34c
	// Line 2122, Address: 0x1b1d68, Func Offset: 0x358
	// Line 2125, Address: 0x1b1d70, Func Offset: 0x360
	// Line 2131, Address: 0x1b1d78, Func Offset: 0x368
	// Line 2132, Address: 0x1b1d80, Func Offset: 0x370
	// Line 2131, Address: 0x1b1d88, Func Offset: 0x378
	// Line 2132, Address: 0x1b1d8c, Func Offset: 0x37c
	// Line 2131, Address: 0x1b1d90, Func Offset: 0x380
	// Line 2132, Address: 0x1b1da0, Func Offset: 0x390
	// Line 2133, Address: 0x1b1db0, Func Offset: 0x3a0
	// Line 2135, Address: 0x1b1db4, Func Offset: 0x3a4
	// Line 2137, Address: 0x1b1dbc, Func Offset: 0x3ac
	// Line 2138, Address: 0x1b1dc8, Func Offset: 0x3b8
	// Line 2143, Address: 0x1b1dd4, Func Offset: 0x3c4
	// Line 2144, Address: 0x1b1dd8, Func Offset: 0x3c8
	// Func End, Address: 0x1b1df8, Func Offset: 0x3e8
}

// LPRJ_debris_attach__FP14zEntProjectile
// Start address: 0x1b1e00
int32 LPRJ_debris_attach(zEntProjectile* prj)
{
	st_ZPRJ_CAT_BOUNCEBALL* bounce;
	// Line 2023, Address: 0x1b1e00, Func Offset: 0
	// Line 2025, Address: 0x1b1e08, Func Offset: 0x8
	// Line 2026, Address: 0x1b1e10, Func Offset: 0x10
	// Line 2027, Address: 0x1b1e18, Func Offset: 0x18
	// Line 2028, Address: 0x1b1e20, Func Offset: 0x20
	// Line 2029, Address: 0x1b1e2c, Func Offset: 0x2c
	// Line 2032, Address: 0x1b1e30, Func Offset: 0x30
	// Func End, Address: 0x1b1e38, Func Offset: 0x38
}

// ZLOB_randpos_fromBound__FP7_xBoundiiiP6_xVec3
// Start address: 0x1b1e40
int32 ZLOB_randpos_fromBound(_xBound* bnd, int32 flg_ropts, _xVec3* pos_launch)
{
	int32 result;
	float32 rad;
	float32 hyt;
	_xVec3 rot_range;
	_xMat3x3 mat_rot;
	_xVec3 dirvec;
	_xVec3 vec_tmp;
	_xVec3 delta;
	// Line 1619, Address: 0x1b1e40, Func Offset: 0
	// Line 1621, Address: 0x1b1e64, Func Offset: 0x24
	// Line 1619, Address: 0x1b1e68, Func Offset: 0x28
	// Line 1621, Address: 0x1b1e6c, Func Offset: 0x2c
	// Line 1622, Address: 0x1b1e84, Func Offset: 0x44
	// Line 1624, Address: 0x1b1e88, Func Offset: 0x48
	// Line 1622, Address: 0x1b1e8c, Func Offset: 0x4c
	// Line 1621, Address: 0x1b1e90, Func Offset: 0x50
	// Line 1622, Address: 0x1b1e94, Func Offset: 0x54
	// Line 1621, Address: 0x1b1e98, Func Offset: 0x58
	// Line 1622, Address: 0x1b1e9c, Func Offset: 0x5c
	// Line 1623, Address: 0x1b1ea4, Func Offset: 0x64
	// Line 1624, Address: 0x1b1eac, Func Offset: 0x6c
	// Line 1623, Address: 0x1b1eb0, Func Offset: 0x70
	// Line 1622, Address: 0x1b1eb8, Func Offset: 0x78
	// Line 1623, Address: 0x1b1ec0, Func Offset: 0x80
	// Line 1624, Address: 0x1b1ec8, Func Offset: 0x88
	// Line 1625, Address: 0x1b1ecc, Func Offset: 0x8c
	// Line 1630, Address: 0x1b1ed4, Func Offset: 0x94
	// Line 1623, Address: 0x1b1ed8, Func Offset: 0x98
	// Line 1624, Address: 0x1b1ee0, Func Offset: 0xa0
	// Line 1625, Address: 0x1b1ee8, Func Offset: 0xa8
	// Line 1624, Address: 0x1b1eec, Func Offset: 0xac
	// Line 1625, Address: 0x1b1efc, Func Offset: 0xbc
	// Line 1630, Address: 0x1b1f0c, Func Offset: 0xcc
	// Line 1638, Address: 0x1b1f24, Func Offset: 0xe4
	// Line 1640, Address: 0x1b1f30, Func Offset: 0xf0
	// Line 1638, Address: 0x1b1f34, Func Offset: 0xf4
	// Line 1640, Address: 0x1b1f5c, Func Offset: 0x11c
	// Line 1642, Address: 0x1b1f64, Func Offset: 0x124
	// Line 1643, Address: 0x1b1f94, Func Offset: 0x154
	// Line 1644, Address: 0x1b2018, Func Offset: 0x1d8
	// Line 1652, Address: 0x1b2020, Func Offset: 0x1e0
	// Line 1653, Address: 0x1b202c, Func Offset: 0x1ec
	// Line 1652, Address: 0x1b2034, Func Offset: 0x1f4
	// Line 1653, Address: 0x1b2054, Func Offset: 0x214
	// Line 1656, Address: 0x1b2068, Func Offset: 0x228
	// Line 1658, Address: 0x1b20d8, Func Offset: 0x298
	// Line 1656, Address: 0x1b20e0, Func Offset: 0x2a0
	// Line 1658, Address: 0x1b20f0, Func Offset: 0x2b0
	// Line 1660, Address: 0x1b2104, Func Offset: 0x2c4
	// Line 1661, Address: 0x1b2120, Func Offset: 0x2e0
	// Line 1662, Address: 0x1b2128, Func Offset: 0x2e8
	// Line 1663, Address: 0x1b2130, Func Offset: 0x2f0
	// Line 1665, Address: 0x1b2148, Func Offset: 0x308
	// Line 1667, Address: 0x1b2164, Func Offset: 0x324
	// Line 1670, Address: 0x1b216c, Func Offset: 0x32c
	// Line 1671, Address: 0x1b2184, Func Offset: 0x344
	// Line 1677, Address: 0x1b2188, Func Offset: 0x348
	// Line 1679, Address: 0x1b2198, Func Offset: 0x358
	// Line 1683, Address: 0x1b21a8, Func Offset: 0x368
	// Line 1684, Address: 0x1b21d4, Func Offset: 0x394
	// Line 1685, Address: 0x1b21dc, Func Offset: 0x39c
	// Line 1691, Address: 0x1b21e4, Func Offset: 0x3a4
	// Line 1692, Address: 0x1b21f0, Func Offset: 0x3b0
	// Line 1693, Address: 0x1b2220, Func Offset: 0x3e0
	// Line 1694, Address: 0x1b2228, Func Offset: 0x3e8
	// Line 1695, Address: 0x1b2230, Func Offset: 0x3f0
	// Line 1696, Address: 0x1b2240, Func Offset: 0x400
	// Line 1697, Address: 0x1b2244, Func Offset: 0x404
	// Line 1698, Address: 0x1b2274, Func Offset: 0x434
	// Line 1699, Address: 0x1b227c, Func Offset: 0x43c
	// Line 1700, Address: 0x1b2284, Func Offset: 0x444
	// Line 1701, Address: 0x1b2294, Func Offset: 0x454
	// Line 1702, Address: 0x1b2298, Func Offset: 0x458
	// Line 1703, Address: 0x1b22c4, Func Offset: 0x484
	// Line 1702, Address: 0x1b22d4, Func Offset: 0x494
	// Line 1703, Address: 0x1b22dc, Func Offset: 0x49c
	// Line 1705, Address: 0x1b22e8, Func Offset: 0x4a8
	// Line 1708, Address: 0x1b22f4, Func Offset: 0x4b4
	// Line 1711, Address: 0x1b2304, Func Offset: 0x4c4
	// Line 1712, Address: 0x1b2310, Func Offset: 0x4d0
	// Line 1713, Address: 0x1b2334, Func Offset: 0x4f4
	// Line 1714, Address: 0x1b233c, Func Offset: 0x4fc
	// Line 1717, Address: 0x1b2370, Func Offset: 0x530
	// Line 1718, Address: 0x1b239c, Func Offset: 0x55c
	// Line 1719, Address: 0x1b23a4, Func Offset: 0x564
	// Line 1731, Address: 0x1b23ac, Func Offset: 0x56c
	// Line 1730, Address: 0x1b23b8, Func Offset: 0x578
	// Line 1732, Address: 0x1b23bc, Func Offset: 0x57c
	// Line 1734, Address: 0x1b23c8, Func Offset: 0x588
	// Line 1735, Address: 0x1b23f4, Func Offset: 0x5b4
	// Line 1736, Address: 0x1b2424, Func Offset: 0x5e4
	// Line 1739, Address: 0x1b242c, Func Offset: 0x5ec
	// Line 1740, Address: 0x1b245c, Func Offset: 0x61c
	// Line 1743, Address: 0x1b246c, Func Offset: 0x62c
	// Line 1744, Address: 0x1b2478, Func Offset: 0x638
	// Line 1745, Address: 0x1b24a0, Func Offset: 0x660
	// Line 1749, Address: 0x1b24c4, Func Offset: 0x684
	// Line 1750, Address: 0x1b24d4, Func Offset: 0x694
	// Line 1749, Address: 0x1b24d8, Func Offset: 0x698
	// Line 1751, Address: 0x1b24f4, Func Offset: 0x6b4
	// Line 1752, Address: 0x1b2524, Func Offset: 0x6e4
	// Line 1761, Address: 0x1b2554, Func Offset: 0x714
	// Line 1762, Address: 0x1b2558, Func Offset: 0x718
	// Func End, Address: 0x1b2584, Func Offset: 0x744
}

// ZLOB_find_lobber__FUi
// Start address: 0x1b2590
st_LOBMASTER_DATA* ZLOB_find_lobber(uint32 aid_lobm)
{
	int32 i;
	st_LOBMASTER_DEPOT* depot;
	st_LOBMASTER_DATA* lob;
	st_LOBMASTER_DATA* tmp_lob;
	// Line 1568, Address: 0x1b2590, Func Offset: 0
	// Line 1573, Address: 0x1b2594, Func Offset: 0x4
	// Line 1567, Address: 0x1b2598, Func Offset: 0x8
	// Line 1573, Address: 0x1b259c, Func Offset: 0xc
	// Line 1574, Address: 0x1b25a8, Func Offset: 0x18
	// Line 1575, Address: 0x1b25b0, Func Offset: 0x20
	// Line 1576, Address: 0x1b25bc, Func Offset: 0x2c
	// Line 1578, Address: 0x1b25c4, Func Offset: 0x34
	// Line 1580, Address: 0x1b25d0, Func Offset: 0x40
	// Line 1587, Address: 0x1b25e8, Func Offset: 0x58
	// Func End, Address: 0x1b25f0, Func Offset: 0x60
}

// ZLOB_grab_nextBull__FP17st_LOBMASTER_DATA
// Start address: 0x1b25f0
void ZLOB_grab_nextBull(st_LOBMASTER_DATA* lob)
{
	_xVec3 hdng;
	_zMovePoint* nav_tmp;
	// Line 1535, Address: 0x1b25f0, Func Offset: 0
	// Line 1538, Address: 0x1b25fc, Func Offset: 0xc
	// Line 1536, Address: 0x1b2600, Func Offset: 0x10
	// Line 1538, Address: 0x1b2604, Func Offset: 0x14
	// Line 1543, Address: 0x1b261c, Func Offset: 0x2c
	// Line 1548, Address: 0x1b2628, Func Offset: 0x38
	// Line 1549, Address: 0x1b2630, Func Offset: 0x40
	// Line 1550, Address: 0x1b2634, Func Offset: 0x44
	// Line 1552, Address: 0x1b263c, Func Offset: 0x4c
	// Line 1554, Address: 0x1b2648, Func Offset: 0x58
	// Line 1555, Address: 0x1b2650, Func Offset: 0x60
	// Line 1559, Address: 0x1b2658, Func Offset: 0x68
	// Line 1562, Address: 0x1b266c, Func Offset: 0x7c
	// Func End, Address: 0x1b267c, Func Offset: 0x8c
}

// ZLOB_shoot_debris__FP17st_LOBMASTER_DATAii
// Start address: 0x1b2680
int32 ZLOB_shoot_debris(st_LOBMASTER_DATA* lob, int32 nth, int32 total)
{
	_xMat3x3 mat_rot;
	_xVec3 ang;
	_xVec3 rot_tumble;
	_xVec3 dir_launch;
	_xVec3 pos_launch;
	float32 spd_launch;
	float32 spd_base;
	int32 flg_player;
	float32 ang_cone;
	float32 fval;
	st_ZPRJ_CAT_BOUNCEBALL* bounce;
	uint32 prjTypeID;
	zEntProjectile* prj;
	int32 result;
	// Line 1325, Address: 0x1b2680, Func Offset: 0
	// Line 1339, Address: 0x1b26b0, Func Offset: 0x30
	// Line 1329, Address: 0x1b26b4, Func Offset: 0x34
	// Line 1339, Address: 0x1b26b8, Func Offset: 0x38
	// Line 1340, Address: 0x1b26d0, Func Offset: 0x50
	// Line 1339, Address: 0x1b26dc, Func Offset: 0x5c
	// Line 1340, Address: 0x1b26e0, Func Offset: 0x60
	// Line 1339, Address: 0x1b26e4, Func Offset: 0x64
	// Line 1340, Address: 0x1b26e8, Func Offset: 0x68
	// Line 1342, Address: 0x1b26f0, Func Offset: 0x70
	// Line 1343, Address: 0x1b26f8, Func Offset: 0x78
	// Line 1344, Address: 0x1b2700, Func Offset: 0x80
	// Line 1340, Address: 0x1b2704, Func Offset: 0x84
	// Line 1342, Address: 0x1b270c, Func Offset: 0x8c
	// Line 1343, Address: 0x1b2718, Func Offset: 0x98
	// Line 1344, Address: 0x1b271c, Func Offset: 0x9c
	// Line 1347, Address: 0x1b2724, Func Offset: 0xa4
	// Line 1342, Address: 0x1b2728, Func Offset: 0xa8
	// Line 1343, Address: 0x1b2730, Func Offset: 0xb0
	// Line 1347, Address: 0x1b2738, Func Offset: 0xb8
	// Line 1343, Address: 0x1b2740, Func Offset: 0xc0
	// Line 1344, Address: 0x1b2748, Func Offset: 0xc8
	// Line 1347, Address: 0x1b275c, Func Offset: 0xdc
	// Line 1348, Address: 0x1b2764, Func Offset: 0xe4
	// Line 1349, Address: 0x1b2774, Func Offset: 0xf4
	// Line 1355, Address: 0x1b2784, Func Offset: 0x104
	// Line 1356, Address: 0x1b2810, Func Offset: 0x190
	// Line 1358, Address: 0x1b2814, Func Offset: 0x194
	// Line 1356, Address: 0x1b281c, Func Offset: 0x19c
	// Line 1358, Address: 0x1b2828, Func Offset: 0x1a8
	// Line 1359, Address: 0x1b2840, Func Offset: 0x1c0
	// Line 1362, Address: 0x1b2864, Func Offset: 0x1e4
	// Line 1364, Address: 0x1b2870, Func Offset: 0x1f0
	// Line 1369, Address: 0x1b2878, Func Offset: 0x1f8
	// Line 1364, Address: 0x1b287c, Func Offset: 0x1fc
	// Line 1370, Address: 0x1b2880, Func Offset: 0x200
	// Line 1369, Address: 0x1b288c, Func Offset: 0x20c
	// Line 1370, Address: 0x1b289c, Func Offset: 0x21c
	// Line 1380, Address: 0x1b28a0, Func Offset: 0x220
	// Line 1373, Address: 0x1b28a8, Func Offset: 0x228
	// Line 1377, Address: 0x1b28ac, Func Offset: 0x22c
	// Line 1378, Address: 0x1b28b0, Func Offset: 0x230
	// Line 1370, Address: 0x1b28b4, Func Offset: 0x234
	// Line 1391, Address: 0x1b28b8, Func Offset: 0x238
	// Line 1370, Address: 0x1b28bc, Func Offset: 0x23c
	// Line 1373, Address: 0x1b28c0, Func Offset: 0x240
	// Line 1374, Address: 0x1b28c4, Func Offset: 0x244
	// Line 1377, Address: 0x1b28d0, Func Offset: 0x250
	// Line 1378, Address: 0x1b28dc, Func Offset: 0x25c
	// Line 1379, Address: 0x1b28e0, Func Offset: 0x260
	// Line 1380, Address: 0x1b28e4, Func Offset: 0x264
	// Line 1381, Address: 0x1b28e8, Func Offset: 0x268
	// Line 1391, Address: 0x1b28ec, Func Offset: 0x26c
	// Line 1392, Address: 0x1b28f4, Func Offset: 0x274
	// Line 1393, Address: 0x1b290c, Func Offset: 0x28c
	// Line 1392, Address: 0x1b2918, Func Offset: 0x298
	// Line 1393, Address: 0x1b2944, Func Offset: 0x2c4
	// Line 1394, Address: 0x1b2950, Func Offset: 0x2d0
	// Line 1399, Address: 0x1b295c, Func Offset: 0x2dc
	// Line 1400, Address: 0x1b2974, Func Offset: 0x2f4
	// Line 1403, Address: 0x1b297c, Func Offset: 0x2fc
	// Line 1433, Address: 0x1b2980, Func Offset: 0x300
	// Line 1434, Address: 0x1b299c, Func Offset: 0x31c
	// Line 1435, Address: 0x1b29b8, Func Offset: 0x338
	// Line 1442, Address: 0x1b29bc, Func Offset: 0x33c
	// Line 1445, Address: 0x1b29d0, Func Offset: 0x350
	// Line 1442, Address: 0x1b29d4, Func Offset: 0x354
	// Line 1445, Address: 0x1b29f8, Func Offset: 0x378
	// Line 1451, Address: 0x1b2a08, Func Offset: 0x388
	// Line 1454, Address: 0x1b2a18, Func Offset: 0x398
	// Line 1456, Address: 0x1b2a30, Func Offset: 0x3b0
	// Line 1457, Address: 0x1b2a38, Func Offset: 0x3b8
	// Line 1459, Address: 0x1b2a40, Func Offset: 0x3c0
	// Line 1460, Address: 0x1b2a54, Func Offset: 0x3d4
	// Line 1461, Address: 0x1b2a5c, Func Offset: 0x3dc
	// Line 1467, Address: 0x1b2a68, Func Offset: 0x3e8
	// Line 1470, Address: 0x1b2a78, Func Offset: 0x3f8
	// Line 1471, Address: 0x1b2a9c, Func Offset: 0x41c
	// Line 1472, Address: 0x1b2aa4, Func Offset: 0x424
	// Line 1474, Address: 0x1b2ab0, Func Offset: 0x430
	// Line 1476, Address: 0x1b2adc, Func Offset: 0x45c
	// Line 1477, Address: 0x1b2b04, Func Offset: 0x484
	// Line 1478, Address: 0x1b2b0c, Func Offset: 0x48c
	// Line 1481, Address: 0x1b2b18, Func Offset: 0x498
	// Line 1480, Address: 0x1b2b1c, Func Offset: 0x49c
	// Line 1481, Address: 0x1b2b28, Func Offset: 0x4a8
	// Line 1483, Address: 0x1b2b40, Func Offset: 0x4c0
	// Line 1481, Address: 0x1b2b48, Func Offset: 0x4c8
	// Line 1483, Address: 0x1b2b6c, Func Offset: 0x4ec
	// Line 1484, Address: 0x1b2b74, Func Offset: 0x4f4
	// Line 1485, Address: 0x1b2ba4, Func Offset: 0x524
	// Line 1486, Address: 0x1b2bac, Func Offset: 0x52c
	// Line 1487, Address: 0x1b2bb4, Func Offset: 0x534
	// Line 1488, Address: 0x1b2bbc, Func Offset: 0x53c
	// Line 1492, Address: 0x1b2bc8, Func Offset: 0x548
	// Line 1493, Address: 0x1b2bdc, Func Offset: 0x55c
	// Line 1496, Address: 0x1b2be4, Func Offset: 0x564
	// Line 1505, Address: 0x1b2bf0, Func Offset: 0x570
	// Line 1506, Address: 0x1b2c0c, Func Offset: 0x58c
	// Line 1507, Address: 0x1b2c74, Func Offset: 0x5f4
	// Line 1506, Address: 0x1b2c78, Func Offset: 0x5f8
	// Line 1507, Address: 0x1b2c80, Func Offset: 0x600
	// Line 1506, Address: 0x1b2c84, Func Offset: 0x604
	// Line 1507, Address: 0x1b2c94, Func Offset: 0x614
	// Line 1509, Address: 0x1b2c9c, Func Offset: 0x61c
	// Line 1510, Address: 0x1b2cac, Func Offset: 0x62c
	// Line 1514, Address: 0x1b2cb8, Func Offset: 0x638
	// Line 1517, Address: 0x1b2cc0, Func Offset: 0x640
	// Line 1514, Address: 0x1b2cc8, Func Offset: 0x648
	// Line 1515, Address: 0x1b2cdc, Func Offset: 0x65c
	// Line 1516, Address: 0x1b2d04, Func Offset: 0x684
	// Line 1517, Address: 0x1b2d10, Func Offset: 0x690
	// Line 1520, Address: 0x1b2d18, Func Offset: 0x698
	// Line 1523, Address: 0x1b2d24, Func Offset: 0x6a4
	// Func End, Address: 0x1b2d58, Func Offset: 0x6d8
}

// ZLOB_shoot_arrow__FP17st_LOBMASTER_DATAii
// Start address: 0x1b2d60
int32 ZLOB_shoot_arrow(st_LOBMASTER_DATA* lob)
{
	_xVec3 pos_tgt;
	_xVec3 dir_launch;
	_xVec3 pos_launch;
	float32 tmp_rand;
	float32 spd_randPct;
	float32 spd_launch;
	float32 spd_base;
	uint32 prjTypeID;
	zEntProjectile* prj;
	int32 result;
	// Line 1227, Address: 0x1b2d60, Func Offset: 0
	// Line 1234, Address: 0x1b2d78, Func Offset: 0x18
	// Line 1235, Address: 0x1b2d8c, Func Offset: 0x2c
	// Line 1236, Address: 0x1b2d9c, Func Offset: 0x3c
	// Line 1239, Address: 0x1b2dac, Func Offset: 0x4c
	// Line 1256, Address: 0x1b2e34, Func Offset: 0xd4
	// Line 1252, Address: 0x1b2e38, Func Offset: 0xd8
	// Line 1254, Address: 0x1b2e3c, Func Offset: 0xdc
	// Line 1256, Address: 0x1b2e40, Func Offset: 0xe0
	// Line 1257, Address: 0x1b2e50, Func Offset: 0xf0
	// Line 1259, Address: 0x1b2e54, Func Offset: 0xf4
	// Line 1256, Address: 0x1b2e58, Func Offset: 0xf8
	// Line 1257, Address: 0x1b2e5c, Func Offset: 0xfc
	// Line 1256, Address: 0x1b2e64, Func Offset: 0x104
	// Line 1258, Address: 0x1b2e68, Func Offset: 0x108
	// Line 1257, Address: 0x1b2e70, Func Offset: 0x110
	// Line 1259, Address: 0x1b2e78, Func Offset: 0x118
	// Line 1257, Address: 0x1b2e80, Func Offset: 0x120
	// Line 1258, Address: 0x1b2e88, Func Offset: 0x128
	// Line 1259, Address: 0x1b2e98, Func Offset: 0x138
	// Line 1260, Address: 0x1b2ea0, Func Offset: 0x140
	// Line 1263, Address: 0x1b2eb0, Func Offset: 0x150
	// Line 1265, Address: 0x1b2ecc, Func Offset: 0x16c
	// Line 1267, Address: 0x1b2ee4, Func Offset: 0x184
	// Line 1266, Address: 0x1b2ee8, Func Offset: 0x188
	// Line 1265, Address: 0x1b2eec, Func Offset: 0x18c
	// Line 1267, Address: 0x1b2ef0, Func Offset: 0x190
	// Line 1265, Address: 0x1b2ef4, Func Offset: 0x194
	// Line 1266, Address: 0x1b2ef8, Func Offset: 0x198
	// Line 1267, Address: 0x1b2efc, Func Offset: 0x19c
	// Line 1269, Address: 0x1b2f0c, Func Offset: 0x1ac
	// Line 1270, Address: 0x1b2f24, Func Offset: 0x1c4
	// Line 1271, Address: 0x1b2f2c, Func Offset: 0x1cc
	// Line 1277, Address: 0x1b2f44, Func Offset: 0x1e4
	// Line 1279, Address: 0x1b2f54, Func Offset: 0x1f4
	// Line 1280, Address: 0x1b2f68, Func Offset: 0x208
	// Line 1281, Address: 0x1b2f70, Func Offset: 0x210
	// Line 1286, Address: 0x1b2f7c, Func Offset: 0x21c
	// Line 1291, Address: 0x1b2f88, Func Offset: 0x228
	// Line 1293, Address: 0x1b2f94, Func Offset: 0x234
	// Line 1291, Address: 0x1b2f98, Func Offset: 0x238
	// Line 1293, Address: 0x1b2fa0, Func Offset: 0x240
	// Line 1291, Address: 0x1b2fa4, Func Offset: 0x244
	// Line 1292, Address: 0x1b2fb8, Func Offset: 0x258
	// Line 1293, Address: 0x1b2fe4, Func Offset: 0x284
	// Line 1295, Address: 0x1b2fec, Func Offset: 0x28c
	// Line 1298, Address: 0x1b2ffc, Func Offset: 0x29c
	// Line 1299, Address: 0x1b3010, Func Offset: 0x2b0
	// Line 1300, Address: 0x1b3018, Func Offset: 0x2b8
	// Line 1307, Address: 0x1b3024, Func Offset: 0x2c4
	// Line 1310, Address: 0x1b302c, Func Offset: 0x2cc
	// Line 1307, Address: 0x1b3034, Func Offset: 0x2d4
	// Line 1308, Address: 0x1b3048, Func Offset: 0x2e8
	// Line 1309, Address: 0x1b3070, Func Offset: 0x310
	// Line 1310, Address: 0x1b307c, Func Offset: 0x31c
	// Line 1313, Address: 0x1b3084, Func Offset: 0x324
	// Line 1316, Address: 0x1b3090, Func Offset: 0x330
	// Func End, Address: 0x1b30a8, Func Offset: 0x348
}

// ZLOB_shoot_legacy__FP17st_LOBMASTER_DATAii
// Start address: 0x1b30b0
int32 ZLOB_shoot_legacy(st_LOBMASTER_DATA* lob)
{
	_xMat3x3 mat_rot;
	_xVec3 ang;
	float32 spd_base;
	st_CAT_AIMGRAV* grav;
	ST_CAT_AIMDATA aim;
	float32 fac_arc;
	_xVec3 pos_tgt;
	_xVec3 dir_launch;
	_xVec3 pos_launch;
	float32 tmp_rand;
	float32 spd_randPct;
	float32 spd_launch;
	_xVec3 rot_tumble;
	st_ZPRJ_CAT_BOUNCEBALL* bounce;
	float32 fval;
	uint32 prjTypeID;
	zEntProjectile* prj;
	int32 result;
	// Line 996, Address: 0x1b30b0, Func Offset: 0
	// Line 1003, Address: 0x1b30e4, Func Offset: 0x34
	// Line 999, Address: 0x1b30f0, Func Offset: 0x40
	// Line 1003, Address: 0x1b30f4, Func Offset: 0x44
	// Line 1004, Address: 0x1b30fc, Func Offset: 0x4c
	// Line 1005, Address: 0x1b310c, Func Offset: 0x5c
	// Line 1011, Address: 0x1b311c, Func Offset: 0x6c
	// Line 1012, Address: 0x1b31a8, Func Offset: 0xf8
	// Line 1017, Address: 0x1b31b4, Func Offset: 0x104
	// Line 1018, Address: 0x1b31c4, Func Offset: 0x114
	// Line 1019, Address: 0x1b31e8, Func Offset: 0x138
	// Line 1022, Address: 0x1b31ec, Func Offset: 0x13c
	// Line 1023, Address: 0x1b31fc, Func Offset: 0x14c
	// Line 1024, Address: 0x1b3204, Func Offset: 0x154
	// Line 1023, Address: 0x1b3210, Func Offset: 0x160
	// Line 1024, Address: 0x1b3214, Func Offset: 0x164
	// Line 1027, Address: 0x1b321c, Func Offset: 0x16c
	// Line 1026, Address: 0x1b3220, Func Offset: 0x170
	// Line 1027, Address: 0x1b3224, Func Offset: 0x174
	// Line 1029, Address: 0x1b322c, Func Offset: 0x17c
	// Line 1030, Address: 0x1b3234, Func Offset: 0x184
	// Line 1033, Address: 0x1b3248, Func Offset: 0x198
	// Line 1034, Address: 0x1b3258, Func Offset: 0x1a8
	// Line 1035, Address: 0x1b3260, Func Offset: 0x1b0
	// Line 1034, Address: 0x1b326c, Func Offset: 0x1bc
	// Line 1035, Address: 0x1b3270, Func Offset: 0x1c0
	// Line 1037, Address: 0x1b3278, Func Offset: 0x1c8
	// Line 1038, Address: 0x1b3280, Func Offset: 0x1d0
	// Line 1041, Address: 0x1b3294, Func Offset: 0x1e4
	// Line 1042, Address: 0x1b32a8, Func Offset: 0x1f8
	// Line 1041, Address: 0x1b32b0, Func Offset: 0x200
	// Line 1042, Address: 0x1b32b4, Func Offset: 0x204
	// Line 1043, Address: 0x1b32bc, Func Offset: 0x20c
	// Line 1044, Address: 0x1b32ec, Func Offset: 0x23c
	// Line 1046, Address: 0x1b32f4, Func Offset: 0x244
	// Line 1044, Address: 0x1b32fc, Func Offset: 0x24c
	// Line 1046, Address: 0x1b3300, Func Offset: 0x250
	// Line 1048, Address: 0x1b3308, Func Offset: 0x258
	// Line 1049, Address: 0x1b3314, Func Offset: 0x264
	// Line 1050, Address: 0x1b3328, Func Offset: 0x278
	// Line 1053, Address: 0x1b3330, Func Offset: 0x280
	// Line 1054, Address: 0x1b3338, Func Offset: 0x288
	// Line 1060, Address: 0x1b334c, Func Offset: 0x29c
	// Line 1061, Address: 0x1b335c, Func Offset: 0x2ac
	// Line 1062, Address: 0x1b336c, Func Offset: 0x2bc
	// Line 1063, Address: 0x1b339c, Func Offset: 0x2ec
	// Line 1067, Address: 0x1b33ac, Func Offset: 0x2fc
	// Line 1069, Address: 0x1b33b4, Func Offset: 0x304
	// Line 1072, Address: 0x1b33b8, Func Offset: 0x308
	// Line 1075, Address: 0x1b33c0, Func Offset: 0x310
	// Line 1076, Address: 0x1b33d0, Func Offset: 0x320
	// Line 1077, Address: 0x1b33d8, Func Offset: 0x328
	// Line 1088, Address: 0x1b33e0, Func Offset: 0x330
	// Line 1085, Address: 0x1b33e4, Func Offset: 0x334
	// Line 1086, Address: 0x1b33e8, Func Offset: 0x338
	// Line 1088, Address: 0x1b33ec, Func Offset: 0x33c
	// Line 1089, Address: 0x1b33fc, Func Offset: 0x34c
	// Line 1090, Address: 0x1b3408, Func Offset: 0x358
	// Line 1088, Address: 0x1b340c, Func Offset: 0x35c
	// Line 1090, Address: 0x1b3414, Func Offset: 0x364
	// Line 1089, Address: 0x1b3418, Func Offset: 0x368
	// Line 1090, Address: 0x1b3428, Func Offset: 0x378
	// Line 1095, Address: 0x1b343c, Func Offset: 0x38c
	// Line 1097, Address: 0x1b344c, Func Offset: 0x39c
	// Line 1098, Address: 0x1b3460, Func Offset: 0x3b0
	// Line 1099, Address: 0x1b3468, Func Offset: 0x3b8
	// Line 1102, Address: 0x1b3470, Func Offset: 0x3c0
	// Line 1107, Address: 0x1b3480, Func Offset: 0x3d0
	// Line 1119, Address: 0x1b348c, Func Offset: 0x3dc
	// Line 1121, Address: 0x1b3490, Func Offset: 0x3e0
	// Line 1123, Address: 0x1b349c, Func Offset: 0x3ec
	// Line 1121, Address: 0x1b34a0, Func Offset: 0x3f0
	// Line 1122, Address: 0x1b34a8, Func Offset: 0x3f8
	// Line 1121, Address: 0x1b34b0, Func Offset: 0x400
	// Line 1123, Address: 0x1b34b8, Func Offset: 0x408
	// Line 1121, Address: 0x1b34bc, Func Offset: 0x40c
	// Line 1122, Address: 0x1b34c8, Func Offset: 0x418
	// Line 1123, Address: 0x1b34fc, Func Offset: 0x44c
	// Line 1125, Address: 0x1b3504, Func Offset: 0x454
	// Line 1126, Address: 0x1b3514, Func Offset: 0x464
	// Line 1130, Address: 0x1b3544, Func Offset: 0x494
	// Line 1136, Address: 0x1b3558, Func Offset: 0x4a8
	// Line 1131, Address: 0x1b3564, Func Offset: 0x4b4
	// Line 1130, Address: 0x1b3568, Func Offset: 0x4b8
	// Line 1135, Address: 0x1b357c, Func Offset: 0x4cc
	// Line 1136, Address: 0x1b3580, Func Offset: 0x4d0
	// Line 1137, Address: 0x1b3584, Func Offset: 0x4d4
	// Line 1135, Address: 0x1b3588, Func Offset: 0x4d8
	// Line 1136, Address: 0x1b358c, Func Offset: 0x4dc
	// Line 1137, Address: 0x1b35a0, Func Offset: 0x4f0
	// Line 1138, Address: 0x1b35bc, Func Offset: 0x50c
	// Line 1140, Address: 0x1b35c8, Func Offset: 0x518
	// Line 1138, Address: 0x1b35d0, Func Offset: 0x520
	// Line 1139, Address: 0x1b35e4, Func Offset: 0x534
	// Line 1140, Address: 0x1b35ec, Func Offset: 0x53c
	// Line 1147, Address: 0x1b3608, Func Offset: 0x558
	// Line 1152, Address: 0x1b3618, Func Offset: 0x568
	// Line 1155, Address: 0x1b362c, Func Offset: 0x57c
	// Line 1156, Address: 0x1b3634, Func Offset: 0x584
	// Line 1159, Address: 0x1b3644, Func Offset: 0x594
	// Line 1160, Address: 0x1b3658, Func Offset: 0x5a8
	// Line 1161, Address: 0x1b3660, Func Offset: 0x5b0
	// Line 1166, Address: 0x1b366c, Func Offset: 0x5bc
	// Line 1167, Address: 0x1b367c, Func Offset: 0x5cc
	// Line 1173, Address: 0x1b3698, Func Offset: 0x5e8
	// Line 1175, Address: 0x1b36b0, Func Offset: 0x600
	// Line 1174, Address: 0x1b36b4, Func Offset: 0x604
	// Line 1173, Address: 0x1b36b8, Func Offset: 0x608
	// Line 1175, Address: 0x1b36bc, Func Offset: 0x60c
	// Line 1173, Address: 0x1b36c0, Func Offset: 0x610
	// Line 1174, Address: 0x1b36c4, Func Offset: 0x614
	// Line 1175, Address: 0x1b36d0, Func Offset: 0x620
	// Line 1177, Address: 0x1b36e0, Func Offset: 0x630
	// Line 1178, Address: 0x1b36f8, Func Offset: 0x648
	// Line 1179, Address: 0x1b3700, Func Offset: 0x650
	// Line 1192, Address: 0x1b371c, Func Offset: 0x66c
	// Line 1199, Address: 0x1b372c, Func Offset: 0x67c
	// Line 1200, Address: 0x1b373c, Func Offset: 0x68c
	// Line 1199, Address: 0x1b3744, Func Offset: 0x694
	// Line 1200, Address: 0x1b3748, Func Offset: 0x698
	// Line 1199, Address: 0x1b374c, Func Offset: 0x69c
	// Line 1200, Address: 0x1b3750, Func Offset: 0x6a0
	// Line 1202, Address: 0x1b3764, Func Offset: 0x6b4
	// Line 1203, Address: 0x1b3780, Func Offset: 0x6d0
	// Line 1204, Address: 0x1b379c, Func Offset: 0x6ec
	// Line 1206, Address: 0x1b37b4, Func Offset: 0x704
	// Line 1204, Address: 0x1b37bc, Func Offset: 0x70c
	// Line 1206, Address: 0x1b37c0, Func Offset: 0x710
	// Line 1209, Address: 0x1b37c8, Func Offset: 0x718
	// Line 1210, Address: 0x1b37d8, Func Offset: 0x728
	// Line 1215, Address: 0x1b37e4, Func Offset: 0x734
	// Line 1218, Address: 0x1b37ec, Func Offset: 0x73c
	// Line 1215, Address: 0x1b37f4, Func Offset: 0x744
	// Line 1216, Address: 0x1b3808, Func Offset: 0x758
	// Line 1217, Address: 0x1b3834, Func Offset: 0x784
	// Line 1218, Address: 0x1b3840, Func Offset: 0x790
	// Line 1221, Address: 0x1b3848, Func Offset: 0x798
	// Line 1224, Address: 0x1b3854, Func Offset: 0x7a4
	// Func End, Address: 0x1b3888, Func Offset: 0x7d8
}

// ZLOB_legacy_notify__FP14zEntProjectile19en_PROJECTILE_EVENTPv
// Start address: 0x1b3890
int32 ZLOB_legacy_notify(zEntProjectile* prj, en_PROJECTILE_EVENT event)
{
	float32 fval;
	st_LOBMASTER_DATA* lob;
	// Line 972, Address: 0x1b3890, Func Offset: 0
	// Line 973, Address: 0x1b389c, Func Offset: 0xc
	// Line 976, Address: 0x1b38a0, Func Offset: 0x10
	// Line 978, Address: 0x1b38b8, Func Offset: 0x28
	// Line 979, Address: 0x1b38c8, Func Offset: 0x38
	// Line 980, Address: 0x1b38d4, Func Offset: 0x44
	// Line 982, Address: 0x1b38ec, Func Offset: 0x5c
	// Line 983, Address: 0x1b38f8, Func Offset: 0x68
	// Line 993, Address: 0x1b3904, Func Offset: 0x74
	// Line 992, Address: 0x1b390c, Func Offset: 0x7c
	// Line 993, Address: 0x1b3910, Func Offset: 0x80
	// Func End, Address: 0x1b3918, Func Offset: 0x88
}

// ZLOB_shoot_one__FP17st_LOBMASTER_DATAii
// Start address: 0x1b3920
int32 ZLOB_shoot_one(st_LOBMASTER_DATA* lob, int32 nth, int32 total)
{
	en_LOB_MASTER_TYPE type;
	// Line 922, Address: 0x1b3920, Func Offset: 0
	// Line 928, Address: 0x1b3940, Func Offset: 0x20
	// Line 930, Address: 0x1b3954, Func Offset: 0x34
	// Line 933, Address: 0x1b3988, Func Offset: 0x68
	// Line 934, Address: 0x1b3994, Func Offset: 0x74
	// Line 936, Address: 0x1b399c, Func Offset: 0x7c
	// Line 937, Address: 0x1b39a8, Func Offset: 0x88
	// Line 939, Address: 0x1b39b0, Func Offset: 0x90
	// Line 940, Address: 0x1b39bc, Func Offset: 0x9c
	// Line 948, Address: 0x1b39c4, Func Offset: 0xa4
	// Line 953, Address: 0x1b39d0, Func Offset: 0xb0
	// Line 952, Address: 0x1b39e0, Func Offset: 0xc0
	// Line 953, Address: 0x1b39e4, Func Offset: 0xc4
	// Func End, Address: 0x1b39ec, Func Offset: 0xcc
}

// ZLOB_doLaunch__FP17st_LOBMASTER_DATA
// Start address: 0x1b39f0
int32 ZLOB_doLaunch(st_LOBMASTER_DATA* lob)
{
	en_LOB_MASTER_TYPE type;
	int32 salvo;
	int32 cnt;
	int32 rc;
	int32 i;
	// Line 878, Address: 0x1b39f0, Func Offset: 0
	// Line 885, Address: 0x1b3a08, Func Offset: 0x18
	// Line 882, Address: 0x1b3a14, Func Offset: 0x24
	// Line 883, Address: 0x1b3a18, Func Offset: 0x28
	// Line 885, Address: 0x1b3a1c, Func Offset: 0x2c
	// Line 886, Address: 0x1b3a24, Func Offset: 0x34
	// Line 887, Address: 0x1b3a34, Func Offset: 0x44
	// Line 888, Address: 0x1b3a44, Func Offset: 0x54
	// Line 892, Address: 0x1b3a58, Func Offset: 0x68
	// Line 895, Address: 0x1b3a64, Func Offset: 0x74
	// Line 896, Address: 0x1b3a84, Func Offset: 0x94
	// Line 899, Address: 0x1b3a88, Func Offset: 0x98
	// Line 900, Address: 0x1b3a98, Func Offset: 0xa8
	// Line 906, Address: 0x1b3aa4, Func Offset: 0xb4
	// Line 909, Address: 0x1b3ab8, Func Offset: 0xc8
	// Line 911, Address: 0x1b3b28, Func Offset: 0x138
	// Line 912, Address: 0x1b3b2c, Func Offset: 0x13c
	// Func End, Address: 0x1b3b44, Func Offset: 0x154
}

// ZLOB_elcb_event__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1b3b50
int32 ZLOB_elcb_event(xBase* from, xBase* xb, uint32 toEvent)
{
	int32 do_fromWidge;
	st_LOBMASTER_DATA* lob;
	// Line 744, Address: 0x1b3b50, Func Offset: 0
	// Line 751, Address: 0x1b3b60, Func Offset: 0x10
	// Line 746, Address: 0x1b3b64, Func Offset: 0x14
	// Line 751, Address: 0x1b3b68, Func Offset: 0x18
	// Line 759, Address: 0x1b3bc0, Func Offset: 0x70
	// Line 760, Address: 0x1b3c5c, Func Offset: 0x10c
	// Line 763, Address: 0x1b3c64, Func Offset: 0x114
	// Line 764, Address: 0x1b3c70, Func Offset: 0x120
	// Line 768, Address: 0x1b3c78, Func Offset: 0x128
	// Line 769, Address: 0x1b3c80, Func Offset: 0x130
	// Line 776, Address: 0x1b3c88, Func Offset: 0x138
	// Line 790, Address: 0x1b3cb0, Func Offset: 0x160
	// Line 795, Address: 0x1b3cb4, Func Offset: 0x164
	// Line 790, Address: 0x1b3cbc, Func Offset: 0x16c
	// Line 795, Address: 0x1b3cc0, Func Offset: 0x170
	// Line 790, Address: 0x1b3cc4, Func Offset: 0x174
	// Line 792, Address: 0x1b3cdc, Func Offset: 0x18c
	// Line 793, Address: 0x1b3ce0, Func Offset: 0x190
	// Line 795, Address: 0x1b3ce8, Func Offset: 0x198
	// Line 797, Address: 0x1b3cf0, Func Offset: 0x1a0
	// Line 798, Address: 0x1b3cf4, Func Offset: 0x1a4
	// Line 797, Address: 0x1b3cf8, Func Offset: 0x1a8
	// Line 799, Address: 0x1b3cfc, Func Offset: 0x1ac
	// Line 803, Address: 0x1b3d04, Func Offset: 0x1b4
	// Line 807, Address: 0x1b3d10, Func Offset: 0x1c0
	// Line 803, Address: 0x1b3d14, Func Offset: 0x1c4
	// Line 805, Address: 0x1b3d28, Func Offset: 0x1d8
	// Line 806, Address: 0x1b3d2c, Func Offset: 0x1dc
	// Line 808, Address: 0x1b3d34, Func Offset: 0x1e4
	// Line 814, Address: 0x1b3d3c, Func Offset: 0x1ec
	// Line 817, Address: 0x1b3d4c, Func Offset: 0x1fc
	// Line 818, Address: 0x1b3d50, Func Offset: 0x200
	// Line 819, Address: 0x1b3d54, Func Offset: 0x204
	// Line 818, Address: 0x1b3d58, Func Offset: 0x208
	// Line 820, Address: 0x1b3d5c, Func Offset: 0x20c
	// Line 847, Address: 0x1b3d64, Func Offset: 0x214
	// Line 851, Address: 0x1b3d74, Func Offset: 0x224
	// Line 853, Address: 0x1b3d7c, Func Offset: 0x22c
	// Line 860, Address: 0x1b3d8c, Func Offset: 0x23c
	// Line 862, Address: 0x1b3d9c, Func Offset: 0x24c
	// Line 865, Address: 0x1b3da4, Func Offset: 0x254
	// Line 871, Address: 0x1b3db0, Func Offset: 0x260
	// Line 870, Address: 0x1b3dbc, Func Offset: 0x26c
	// Line 871, Address: 0x1b3dc0, Func Offset: 0x270
	// Func End, Address: 0x1b3dc8, Func Offset: 0x278
}

// LCFG_getParam__FP19st_LOBMASTER_CONFIG20en_LOBMASTER_PARAMIDPv
// Start address: 0x1b3dd0
int32 LCFG_getParam(st_LOBMASTER_CONFIG* cfg, en_LOBMASTER_PARAMID pid, void* vv)
{
	int32 iv;
	int32 found;
	zLobMasterAsset* lmass;
	// Line 597, Address: 0x1b3dd0, Func Offset: 0
	// Line 598, Address: 0x1b3de0, Func Offset: 0x10
	// Line 603, Address: 0x1b3de4, Func Offset: 0x14
	// Line 606, Address: 0x1b3e10, Func Offset: 0x40
	// Line 609, Address: 0x1b3e18, Func Offset: 0x48
	// Line 610, Address: 0x1b3e28, Func Offset: 0x58
	// Line 612, Address: 0x1b3e2c, Func Offset: 0x5c
	// Line 613, Address: 0x1b3e38, Func Offset: 0x68
	// Line 615, Address: 0x1b3e3c, Func Offset: 0x6c
	// Line 616, Address: 0x1b3e44, Func Offset: 0x74
	// Line 618, Address: 0x1b3e48, Func Offset: 0x78
	// Line 619, Address: 0x1b3e50, Func Offset: 0x80
	// Line 621, Address: 0x1b3e54, Func Offset: 0x84
	// Line 622, Address: 0x1b3e5c, Func Offset: 0x8c
	// Line 624, Address: 0x1b3e60, Func Offset: 0x90
	// Line 625, Address: 0x1b3e68, Func Offset: 0x98
	// Line 627, Address: 0x1b3e6c, Func Offset: 0x9c
	// Line 628, Address: 0x1b3e74, Func Offset: 0xa4
	// Line 630, Address: 0x1b3e78, Func Offset: 0xa8
	// Line 633, Address: 0x1b3e88, Func Offset: 0xb8
	// Line 644, Address: 0x1b3e90, Func Offset: 0xc0
	// Line 650, Address: 0x1b3ecc, Func Offset: 0xfc
	// Line 651, Address: 0x1b3ed0, Func Offset: 0x100
	// Line 657, Address: 0x1b3ed8, Func Offset: 0x108
	// Line 660, Address: 0x1b3ee0, Func Offset: 0x110
	// Line 661, Address: 0x1b3ee4, Func Offset: 0x114
	// Line 663, Address: 0x1b3eec, Func Offset: 0x11c
	// Line 664, Address: 0x1b3f00, Func Offset: 0x130
	// Line 666, Address: 0x1b3f08, Func Offset: 0x138
	// Line 667, Address: 0x1b3f1c, Func Offset: 0x14c
	// Line 669, Address: 0x1b3f24, Func Offset: 0x154
	// Line 670, Address: 0x1b3f28, Func Offset: 0x158
	// Line 672, Address: 0x1b3f30, Func Offset: 0x160
	// Line 673, Address: 0x1b3f48, Func Offset: 0x178
	// Line 675, Address: 0x1b3f50, Func Offset: 0x180
	// Line 676, Address: 0x1b3f64, Func Offset: 0x194
	// Line 678, Address: 0x1b3f6c, Func Offset: 0x19c
	// Line 679, Address: 0x1b3f7c, Func Offset: 0x1ac
	// Line 680, Address: 0x1b3f80, Func Offset: 0x1b0
	// Line 684, Address: 0x1b3f88, Func Offset: 0x1b8
	// Line 686, Address: 0x1b3f90, Func Offset: 0x1c0
	// Line 687, Address: 0x1b3fa0, Func Offset: 0x1d0
	// Line 688, Address: 0x1b3fa4, Func Offset: 0x1d4
	// Line 690, Address: 0x1b3fac, Func Offset: 0x1dc
	// Line 692, Address: 0x1b3fb4, Func Offset: 0x1e4
	// Line 693, Address: 0x1b3fe4, Func Offset: 0x214
	// Line 695, Address: 0x1b3fec, Func Offset: 0x21c
	// Line 696, Address: 0x1b3ff0, Func Offset: 0x220
	// Line 698, Address: 0x1b3ff8, Func Offset: 0x228
	// Line 699, Address: 0x1b3ffc, Func Offset: 0x22c
	// Line 701, Address: 0x1b4004, Func Offset: 0x234
	// Line 702, Address: 0x1b4008, Func Offset: 0x238
	// Line 704, Address: 0x1b4010, Func Offset: 0x240
	// Line 705, Address: 0x1b4014, Func Offset: 0x244
	// Line 707, Address: 0x1b401c, Func Offset: 0x24c
	// Line 708, Address: 0x1b4020, Func Offset: 0x250
	// Line 710, Address: 0x1b4028, Func Offset: 0x258
	// Line 711, Address: 0x1b402c, Func Offset: 0x25c
	// Line 714, Address: 0x1b4034, Func Offset: 0x264
	// Line 715, Address: 0x1b403c, Func Offset: 0x26c
	// Line 718, Address: 0x1b4044, Func Offset: 0x274
	// Line 719, Address: 0x1b406c, Func Offset: 0x29c
	// Line 720, Address: 0x1b407c, Func Offset: 0x2ac
	// Line 721, Address: 0x1b4090, Func Offset: 0x2c0
	// Line 723, Address: 0x1b4098, Func Offset: 0x2c8
	// Line 724, Address: 0x1b409c, Func Offset: 0x2cc
	// Line 726, Address: 0x1b40a4, Func Offset: 0x2d4
	// Line 727, Address: 0x1b40a8, Func Offset: 0x2d8
	// Line 730, Address: 0x1b40b0, Func Offset: 0x2e0
	// Line 734, Address: 0x1b40b4, Func Offset: 0x2e4
	// Line 735, Address: 0x1b40b8, Func Offset: 0x2e8
	// Func End, Address: 0x1b40cc, Func Offset: 0x2fc
}

// ZLOB_HEB_to_DIR__FP6_xVec3P6_xVec3
// Start address: 0x1b40d0
void ZLOB_HEB_to_DIR(_xVec3* dir_result, _xVec3* rot_HPB)
{
	_xMat3x3 mat_rot;
	_xVec3 vec_aim;
	// Line 511, Address: 0x1b40d0, Func Offset: 0
	// Line 512, Address: 0x1b40dc, Func Offset: 0xc
	// Line 511, Address: 0x1b40e0, Func Offset: 0x10
	// Line 512, Address: 0x1b40e4, Func Offset: 0x14
	// Line 513, Address: 0x1b40f8, Func Offset: 0x28
	// Line 525, Address: 0x1b40fc, Func Offset: 0x2c
	// Line 513, Address: 0x1b4100, Func Offset: 0x30
	// Line 512, Address: 0x1b4104, Func Offset: 0x34
	// Line 513, Address: 0x1b4108, Func Offset: 0x38
	// Line 512, Address: 0x1b410c, Func Offset: 0x3c
	// Line 513, Address: 0x1b4110, Func Offset: 0x40
	// Line 525, Address: 0x1b4128, Func Offset: 0x58
	// Line 526, Address: 0x1b413c, Func Offset: 0x6c
	// Line 527, Address: 0x1b4144, Func Offset: 0x74
	// Line 531, Address: 0x1b4154, Func Offset: 0x84
	// Line 532, Address: 0x1b4168, Func Offset: 0x98
	// Line 535, Address: 0x1b4178, Func Offset: 0xa8
	// Line 536, Address: 0x1b418c, Func Offset: 0xbc
	// Line 539, Address: 0x1b419c, Func Offset: 0xcc
	// Line 542, Address: 0x1b41a8, Func Offset: 0xd8
	// Func End, Address: 0x1b41bc, Func Offset: 0xec
}

// zLobMaster_timestep__FP6zScenef
// Start address: 0x1b41c0
void zLobMaster_timestep(float32 dt)
{
	int32 i;
	st_LOBMASTER_DATA* lobber;
	// Line 345, Address: 0x1b41c0, Func Offset: 0
	// Line 351, Address: 0x1b41dc, Func Offset: 0x1c
	// Line 354, Address: 0x1b41e4, Func Offset: 0x24
	// Line 357, Address: 0x1b41f4, Func Offset: 0x34
	// Line 358, Address: 0x1b4218, Func Offset: 0x58
	// Line 361, Address: 0x1b4230, Func Offset: 0x70
	// Line 363, Address: 0x1b423c, Func Offset: 0x7c
	// Line 369, Address: 0x1b4244, Func Offset: 0x84
	// Line 370, Address: 0x1b424c, Func Offset: 0x8c
	// Line 376, Address: 0x1b4254, Func Offset: 0x94
	// Line 377, Address: 0x1b426c, Func Offset: 0xac
	// Line 379, Address: 0x1b4278, Func Offset: 0xb8
	// Line 380, Address: 0x1b4290, Func Offset: 0xd0
	// Line 386, Address: 0x1b429c, Func Offset: 0xdc
	// Line 390, Address: 0x1b42a4, Func Offset: 0xe4
	// Line 393, Address: 0x1b42b8, Func Offset: 0xf8
	// Line 395, Address: 0x1b42c4, Func Offset: 0x104
	// Line 398, Address: 0x1b42d8, Func Offset: 0x118
	// Func End, Address: 0x1b42f0, Func Offset: 0x130
}

// zLobMaster_InitDep__FP17st_LOBMASTER_DATAP6zScene
// Start address: 0x1b42f0
void zLobMaster_InitDep(st_LOBMASTER_DATA* lob)
{
	// Line 266, Address: 0x1b42f0, Func Offset: 0
	// Line 268, Address: 0x1b4300, Func Offset: 0x10
	// Line 271, Address: 0x1b4340, Func Offset: 0x50
	// Line 274, Address: 0x1b43bc, Func Offset: 0xcc
	// Line 279, Address: 0x1b43cc, Func Offset: 0xdc
	// Func End, Address: 0x1b43dc, Func Offset: 0xec
}

// zLobMaster_Init__FP17st_LOBMASTER_DATAP11p2BaseAsset
// Start address: 0x1b43e0
void zLobMaster_Init(st_LOBMASTER_DATA* lob, p2BaseAsset* basset)
{
	zLobMasterAsset* tmp_rawass;
	// Line 240, Address: 0x1b43e0, Func Offset: 0
	// Line 246, Address: 0x1b43f4, Func Offset: 0x14
	// Line 249, Address: 0x1b43fc, Func Offset: 0x1c
	// Line 252, Address: 0x1b4408, Func Offset: 0x28
	// Line 253, Address: 0x1b441c, Func Offset: 0x3c
	// Line 256, Address: 0x1b4420, Func Offset: 0x40
	// Line 259, Address: 0x1b447c, Func Offset: 0x9c
	// Line 263, Address: 0x1b448c, Func Offset: 0xac
	// Func End, Address: 0x1b44a0, Func Offset: 0xc0
}

// zLobMaster_getInst__FP17st_LOBMASTER_DATAi
// Start address: 0x1b44a0
st_LOBMASTER_DATA* zLobMaster_getInst(st_LOBMASTER_DATA* pool, int32 idx)
{
	// Line 223, Address: 0x1b44a0, Func Offset: 0
	// Line 224, Address: 0x1b44ac, Func Offset: 0xc
	// Func End, Address: 0x1b44b4, Func Offset: 0x14
}

// zLobMaster_memPool__Fi
// Start address: 0x1b44c0
st_LOBMASTER_DATA* zLobMaster_memPool(int32 cnt)
{
	st_LOBMASTER_DEPOT* depot;
	st_LOBMASTER_DATA* pool;
	// Line 196, Address: 0x1b44c0, Func Offset: 0
	// Line 201, Address: 0x1b44dc, Func Offset: 0x1c
	// Line 203, Address: 0x1b44ec, Func Offset: 0x2c
	// Line 205, Address: 0x1b4508, Func Offset: 0x48
	// Line 208, Address: 0x1b4518, Func Offset: 0x58
	// Line 209, Address: 0x1b451c, Func Offset: 0x5c
	// Line 211, Address: 0x1b4520, Func Offset: 0x60
	// Line 212, Address: 0x1b4524, Func Offset: 0x64
	// Func End, Address: 0x1b4540, Func Offset: 0x80
}

// zLobMaster_sceneFinish__Fv
// Start address: 0x1b4540
void zLobMaster_sceneFinish()
{
	st_LOBMASTER_DEPOT* depot;
	// Line 180, Address: 0x1b4540, Func Offset: 0
	// Line 183, Address: 0x1b4548, Func Offset: 0x8
	// Line 181, Address: 0x1b454c, Func Offset: 0xc
	// Line 183, Address: 0x1b4550, Func Offset: 0x10
	// Line 186, Address: 0x1b455c, Func Offset: 0x1c
	// Line 189, Address: 0x1b4568, Func Offset: 0x28
	// Func End, Address: 0x1b4574, Func Offset: 0x34
}

// zLobMaster_scenePrepare__Fv
// Start address: 0x1b4580
void zLobMaster_scenePrepare()
{
	st_LOBMASTER_DEPOT* depot;
	// Line 153, Address: 0x1b4580, Func Offset: 0
	// Line 167, Address: 0x1b4588, Func Offset: 0x8
	// Line 153, Address: 0x1b458c, Func Offset: 0xc
	// Line 167, Address: 0x1b4590, Func Offset: 0x10
	// Line 169, Address: 0x1b45a4, Func Offset: 0x24
	// Line 174, Address: 0x1b45b4, Func Offset: 0x34
	// Line 177, Address: 0x1b45c4, Func Offset: 0x44
	// Func End, Address: 0x1b45d4, Func Offset: 0x54
}

// zLobMaster_Shutdown__Fv
// Start address: 0x1b45e0
void zLobMaster_Shutdown()
{
	// Line 146, Address: 0x1b45e0, Func Offset: 0
	// Func End, Address: 0x1b45e8, Func Offset: 0x8
}

// zLobMaster_Startup__Fv
// Start address: 0x1b45f0
void zLobMaster_Startup()
{
	st_ZPRJ_CATEGORY_PROPS prop_bang;
	st_ZPRJ_CATEGORY_PROPS prop_debris;
	st_ZPRJ_CATEGORY_FUNCS fmap_debris;
	// Line 106, Address: 0x1b45f0, Func Offset: 0
	// Line 107, Address: 0x1b45f4, Func Offset: 0x4
	// Line 106, Address: 0x1b45f8, Func Offset: 0x8
	// Line 107, Address: 0x1b45fc, Func Offset: 0xc
	// Line 113, Address: 0x1b4610, Func Offset: 0x20
	// Line 107, Address: 0x1b461c, Func Offset: 0x2c
	// Line 118, Address: 0x1b4620, Func Offset: 0x30
	// Line 107, Address: 0x1b4624, Func Offset: 0x34
	// Line 118, Address: 0x1b462c, Func Offset: 0x3c
	// Line 113, Address: 0x1b4630, Func Offset: 0x40
	// Line 131, Address: 0x1b4638, Func Offset: 0x48
	// Line 113, Address: 0x1b463c, Func Offset: 0x4c
	// Line 118, Address: 0x1b4644, Func Offset: 0x54
	// Line 131, Address: 0x1b4654, Func Offset: 0x64
	// Line 132, Address: 0x1b465c, Func Offset: 0x6c
	// Line 136, Address: 0x1b4668, Func Offset: 0x78
	// Line 137, Address: 0x1b4674, Func Offset: 0x84
	// Line 140, Address: 0x1b4680, Func Offset: 0x90
	// Func End, Address: 0x1b468c, Func Offset: 0x9c
}

