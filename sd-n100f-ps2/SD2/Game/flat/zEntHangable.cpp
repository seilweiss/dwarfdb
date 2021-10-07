typedef struct _xEnt;
typedef struct xParGroup;
typedef enum RwTextureAddressMode;
typedef struct xCamAsset;
typedef struct RxPipeline;
typedef struct xModelPool;
typedef struct _xBound;
typedef struct _xScene;
typedef struct xAnimState;
typedef struct _zEnt;
typedef struct zPortalAsset;
typedef struct RxPipelineNode;
typedef struct _xEntFrame;
typedef struct sceCdlFILE;
typedef struct xModelInstance;
typedef struct zCutsceneZbufferHack;
typedef struct _tagxRumble;
typedef struct xBase;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _tagxCamStatic;
typedef struct _xBox;
typedef struct _xEnv;
typedef struct _zEntHangable;
typedef struct xParCmdTex;
typedef struct zParEmitterAsset;
typedef struct RxPipelineNodeParam;
typedef struct _iCollis;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpCollSector;
typedef struct _zParEmitterCustomSettings;
typedef struct tag_iFile;
typedef struct p2EntHangableAsset;
typedef enum RwCameraProjection;
typedef struct RpMeshHeader;
typedef struct RxNodeDefinition;
typedef struct RpMaterial;
typedef struct _zParEmitter;
typedef struct _xEntCollis;
typedef struct RwObjectHasFrame;
typedef struct _tagxCamFrame;
typedef struct RxPipelineCluster;
typedef struct xAnimEffect;
typedef struct _tagEmitCircle;
typedef struct RwTexture;
typedef struct iEnv;
typedef struct _tagxCamShoulderAsset;
typedef struct RwCamera;
typedef struct tag_xFile;
typedef enum _tagTransType;
typedef struct xAnimActiveEffect;
typedef struct RwLLLink;
typedef struct rxHeapBlockHeader;
typedef struct RpWorld;
typedef struct xCutsceneInfo;
typedef struct RpAtomic;
typedef struct _zCutsceneMgr;
typedef struct RwRGBAReal;
typedef struct p2EntAsset;
typedef struct rxHeapFreeBlock;
typedef struct xAnimPlay;
typedef struct _xMat3x3;
typedef struct _tagxCamStaticFollow;
typedef struct RpTriangle;
typedef struct _xVec3;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct zCutsceneMgrAsset;
typedef struct RpWorldSector;
typedef struct RwRGBA;
typedef struct _xCollis;
typedef struct RxClusterDefinition;
typedef struct xCutscene;
typedef struct _tagxCam;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct xSerial;
typedef struct RpLight;
typedef struct xAnimFile;
typedef enum _tagRumbleType;
typedef struct RpPolygon;
typedef struct RwFrame;
typedef struct p2LinkAsset;
typedef struct xAnimTransitionList;
typedef struct _tagEmitSphere;
typedef struct RwV3d;
typedef struct RwResEntry;
typedef struct RwRaster;
typedef struct RpVertexNormal;
typedef struct RpMorphTarget;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef struct xAnimTransition;
typedef struct _xMat4x3;
typedef enum RxClusterValid;
typedef struct _tagxCamPath;
typedef struct _tagp2CamStaticAsset;
typedef struct xAnimSingle;
typedef struct RwPlane;
typedef struct xMemPool;
typedef struct xCutsceneTime;
typedef struct zShaggy1Globals;
typedef struct RwTexDictionary;
typedef struct _tagEmitRect;
typedef struct _xQuat;
typedef struct RwLinkList;
typedef struct RpClump;
typedef struct RxPacket;
typedef enum RpWorldRenderOrder;
typedef struct zCheckPoint;
typedef struct RwFrustumPlane;
typedef struct xQCData;
typedef struct xFFX;
typedef struct _xVec4;
typedef struct _xEntDrive;
typedef struct RwBBox;
typedef struct rxReq;
typedef struct _tagCamInfo;
typedef struct zGlobalGameStats;
typedef enum RwFogType;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct xCutsceneData;
typedef struct _xBBox;
typedef struct _xRot;
typedef struct _xEntShadow;
typedef struct _tagEmitLine;
typedef struct RxOutputSpec;
typedef struct xAnimTable;
typedef struct _tagxCamFollow;
typedef struct zAssetPickupTable;
typedef enum RxClusterForcePresent;
typedef struct zJumpParam;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct p2BaseAsset;
typedef struct RpGeometry;
typedef struct zGlobals;
typedef struct RxIoSpec;
typedef struct iModelTag;
typedef struct _tagxCamPathAsset;
typedef struct RpMaterialList;
typedef struct xCutsceneBreak;
typedef struct xPar;
typedef struct _tagxPad;
typedef struct RxNodeMethods;
typedef struct iFogParams;
typedef struct RpSector;
typedef struct _tagEmitVolume;
typedef struct zScene;
typedef enum _tagPadState;
typedef struct xParCmdAsset;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RwSurfaceProperties;
typedef struct _tagiPad;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct _zPortal;
typedef struct _tagxCamShoulder;
typedef struct zPlayerStatic;
typedef struct iShadowCache;
typedef struct RxCluster;
typedef struct zCutsceneZbuffer;
typedef struct _xSphere;
typedef struct _tagxCamFollowAsset;
typedef struct _tagEmitOffsetPoint;
typedef struct RwSphere;
typedef struct _zPlatform;
typedef struct _tagPadAnalog;
typedef enum rxEmbeddedPacketState;
typedef struct _xCylinder;
typedef enum _tagCamType;

typedef uint32(*type_4)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_6)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_7)(void*, xParGroup*);
typedef int32(*type_8)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_10)(int32);
typedef int32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_17)(_xEnt*, _xScene*, float32);
typedef xBase*(*type_18)(uint32);
typedef int8*(*type_24)(xBase*);
typedef int32(*type_25)(RxNodeDefinition*);
typedef void(*type_27)(_xEnt*);
typedef int8*(*type_30)(uint32);
typedef void(*type_32)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_33)(RxNodeDefinition*);
typedef void(*type_36)(_xEnt*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_42)(_xEnt*, _xVec3*);
typedef int32(*type_43)(RxPipelineNode*);
typedef uint32(*type_49)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_51)(RxPipelineNode*);
typedef int32(*type_54)(RxPipelineNode*, RxPipeline*);
typedef void(*type_59)(_xEnt*, _xVec3*);
typedef uint32(*type_60)(RxPipelineNode*, uint32, uint32, void*);
typedef RwCamera*(*type_62)(RwCamera*);
typedef RwCamera*(*type_68)(RwCamera*);
typedef void(*type_71)(xMemPool*, void*);
typedef void(*type_73)(RwResEntry*);
typedef RpClump*(*type_76)(RpClump*, void*);
typedef void(*type_82)(_zEntHangable*, _xScene*, float32);
typedef RpWorldSector*(*type_88)(RpWorldSector*);
typedef int32(*type_92)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_98)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_100)(RpAtomic*);

typedef float32 type_0[4];
typedef uint8 type_1[3];
typedef uint8 type_2[2];
typedef float32 type_3[4];
typedef RwV3d type_5[8];
typedef float32 type_9[3];
typedef float32 type_11[3];
typedef int8 type_13[16];
typedef float32 type_14[4];
typedef zCutsceneZbuffer type_15[4];
typedef zGlobalGameStats type_16[30];
typedef uint8 type_19[8];
typedef float32 type_20[2];
typedef zGlobalGameStats type_21[13];
typedef _zEnt* type_22[10];
typedef uint32 type_23[1];
typedef int8 type_26[128];
typedef zGlobalGameStats type_28[4];
typedef int32 type_29[2];
typedef uint8 type_31[3];
typedef uint32 type_34[2];
typedef int32 type_35[2];
typedef uint8 type_37[22];
typedef uint32 type_38[2];
typedef uint32 type_40[43];
typedef uint8 type_41[22];
typedef uint32 type_44[2];
typedef _xVec4 type_45[8];
typedef uint8 type_46[4];
typedef xBase* type_47[43];
typedef uint8 type_48[4];
typedef RwTexCoords* type_50[8];
typedef RpLight* type_52[2];
typedef RwFrame* type_53[2];
typedef uint8 type_55[3];
typedef RwTexCoords* type_56[8];
typedef uint32 type_57[2];
typedef RxCluster type_58[1];
typedef uint32 type_61[4];
typedef float32 type_63[4];
typedef int8 type_64[16];
typedef float32 type_65[4];
typedef float32 type_66[4];
typedef int8 type_67[16];
typedef uint32 type_69[2];
typedef uint8 type_70[2];
typedef _xCollis type_72[18];
typedef uint8 type_74[3];
typedef uint8 type_75[4];
typedef uint8 type_77[8];
typedef uint8 type_78[4];
typedef uint8 type_79[8];
typedef uint8 type_80[3];
typedef uint8 type_81[8];
typedef uint8 type_83[3];
typedef float32 type_84[15];
typedef uint8 type_85[8];
typedef _xVec3 type_86[2];
typedef float32 type_87[15];
typedef _xVec3 type_89[8];
typedef _xQuat type_90[2];
typedef uint32 type_91[15];
typedef uint8 type_93[2];
typedef int8 type_94[32];
typedef int8 type_95[32];
typedef uint8 type_96[3];
typedef iModelTag type_97[4];
typedef int8 type_99[16];
typedef float32 type_101[4];
typedef uint8 type_102[4];
typedef int8 type_103[128];
typedef int8 type_104[128][6];
typedef _xVec3 type_105[4];
typedef float32 type_106[4];
typedef uint16 type_107[3];
typedef float32 type_108[4];
typedef int8 type_109[32];
typedef uint16 type_110[3];
typedef float32 type_111[4];
typedef uint8 type_112[2];
typedef uint8 type_113[3];
typedef RwFrustumPlane type_114[6];

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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
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

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _iCollis
{
	int32 unknown;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
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

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagEmitSphere
{
	float32 radius;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwLinkList
{
	RwLLLink link;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct xFFX
{
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct rxReq
{
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpSector
{
	int32 type;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct st_SERIAL_CLIENTINFO
{
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _tagiPad
{
	int32 port;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _zPlatform
{
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

_zParEmitter* sCandleEmitter;
_zParEmitter* sCandleSmokeEmitter;
uint32 sChandelierHash;
_zParEmitter* sMountEmitter;
zGlobals globals;
int32(*zEntHangableEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntHangable_Update)(_zEntHangable*, _xScene*, float32);

void zEntHangable_FollowUpdate(_zEntHangable* ent);
void zEntHangable_SetShaggy(_zEntHangable* ent, _zEnt* shaggy);
void zEntHangable_Reset(_zEntHangable* ent);
void zEntHangable_Load(_zEntHangable* ent, xSerial* s);
void zEntHangable_Save(_zEntHangable* ent, xSerial* s);
void zEntHangable_SetMatrix(_zEntHangable* ent, float32 dt);
int32 zEntHangableEventCB(xBase* from, xBase* to, uint32 toEvent, xBase* toParamWidget);
void zEntHangable_Update(_zEntHangable* ent, float32 dt);
void zEntHangable_UpdateFX(_zEntHangable* ent);
void zEntHangable_Init(void* ent, void* asset);
void HangableSetup(_zEntHangable* ent, p2EntAsset* asset);
void zEntHangable_SetupFX();

// zEntHangable_FollowUpdate__FP13_zEntHangable
// Start address: 0x1a2050
void zEntHangable_FollowUpdate(_zEntHangable* ent)
{
	_xVec3* center;
	// Line 668, Address: 0x1a2050, Func Offset: 0
	// Line 673, Address: 0x1a205c, Func Offset: 0xc
	// Line 675, Address: 0x1a2060, Func Offset: 0x10
	// Line 678, Address: 0x1a2064, Func Offset: 0x14
	// Line 679, Address: 0x1a2068, Func Offset: 0x18
	// Line 680, Address: 0x1a206c, Func Offset: 0x1c
	// Line 673, Address: 0x1a2070, Func Offset: 0x20
	// Line 675, Address: 0x1a2074, Func Offset: 0x24
	// Line 684, Address: 0x1a2078, Func Offset: 0x28
	// Line 674, Address: 0x1a207c, Func Offset: 0x2c
	// Line 675, Address: 0x1a2080, Func Offset: 0x30
	// Line 676, Address: 0x1a2084, Func Offset: 0x34
	// Line 684, Address: 0x1a2088, Func Offset: 0x38
	// Line 678, Address: 0x1a208c, Func Offset: 0x3c
	// Line 681, Address: 0x1a2090, Func Offset: 0x40
	// Line 675, Address: 0x1a2094, Func Offset: 0x44
	// Line 681, Address: 0x1a2098, Func Offset: 0x48
	// Line 684, Address: 0x1a20a0, Func Offset: 0x50
	// Line 679, Address: 0x1a20a4, Func Offset: 0x54
	// Line 684, Address: 0x1a20a8, Func Offset: 0x58
	// Line 685, Address: 0x1a20b0, Func Offset: 0x60
	// Line 686, Address: 0x1a20bc, Func Offset: 0x6c
	// Line 687, Address: 0x1a20d0, Func Offset: 0x80
	// Line 688, Address: 0x1a20e4, Func Offset: 0x94
	// Line 692, Address: 0x1a20f8, Func Offset: 0xa8
	// Line 693, Address: 0x1a2104, Func Offset: 0xb4
	// Line 694, Address: 0x1a2110, Func Offset: 0xc0
	// Line 696, Address: 0x1a211c, Func Offset: 0xcc
	// Line 697, Address: 0x1a2130, Func Offset: 0xe0
	// Line 698, Address: 0x1a2144, Func Offset: 0xf4
	// Line 701, Address: 0x1a2158, Func Offset: 0x108
	// Line 702, Address: 0x1a2164, Func Offset: 0x114
	// Line 703, Address: 0x1a2178, Func Offset: 0x128
	// Line 704, Address: 0x1a2190, Func Offset: 0x140
	// Line 706, Address: 0x1a21a8, Func Offset: 0x158
	// Func End, Address: 0x1a21b0, Func Offset: 0x160
}

// zEntHangable_SetShaggy__FP13_zEntHangableP5_zEnt
// Start address: 0x1a21b0
void zEntHangable_SetShaggy(_zEntHangable* ent, _zEnt* shaggy)
{
	// Line 630, Address: 0x1a21b0, Func Offset: 0
	// Line 633, Address: 0x1a21b8, Func Offset: 0x8
	// Line 638, Address: 0x1a21c4, Func Offset: 0x14
	// Line 639, Address: 0x1a21c8, Func Offset: 0x18
	// Line 643, Address: 0x1a21d8, Func Offset: 0x28
	// Line 651, Address: 0x1a21dc, Func Offset: 0x2c
	// Line 639, Address: 0x1a21e0, Func Offset: 0x30
	// Line 651, Address: 0x1a21e4, Func Offset: 0x34
	// Line 639, Address: 0x1a21e8, Func Offset: 0x38
	// Line 640, Address: 0x1a21f0, Func Offset: 0x40
	// Line 643, Address: 0x1a21fc, Func Offset: 0x4c
	// Line 644, Address: 0x1a2204, Func Offset: 0x54
	// Line 645, Address: 0x1a220c, Func Offset: 0x5c
	// Line 646, Address: 0x1a2214, Func Offset: 0x64
	// Line 647, Address: 0x1a221c, Func Offset: 0x6c
	// Line 648, Address: 0x1a2230, Func Offset: 0x80
	// Line 651, Address: 0x1a2244, Func Offset: 0x94
	// Line 654, Address: 0x1a2268, Func Offset: 0xb8
	// Line 656, Address: 0x1a22f0, Func Offset: 0x140
	// Line 659, Address: 0x1a2304, Func Offset: 0x154
	// Line 660, Address: 0x1a2308, Func Offset: 0x158
	// Line 661, Address: 0x1a2324, Func Offset: 0x174
	// Line 663, Address: 0x1a2330, Func Offset: 0x180
	// Func End, Address: 0x1a2338, Func Offset: 0x188
}

// zEntHangable_Reset__FP13_zEntHangable
// Start address: 0x1a2340
void zEntHangable_Reset(_zEntHangable* ent)
{
	// Line 615, Address: 0x1a2340, Func Offset: 0
	// Line 617, Address: 0x1a2350, Func Offset: 0x10
	// Line 618, Address: 0x1a2358, Func Offset: 0x18
	// Line 621, Address: 0x1a2368, Func Offset: 0x28
	// Line 624, Address: 0x1a2370, Func Offset: 0x30
	// Line 625, Address: 0x1a237c, Func Offset: 0x3c
	// Func End, Address: 0x1a238c, Func Offset: 0x4c
}

// zEntHangable_Load__FP13_zEntHangableP7xSerial
// Start address: 0x1a2390
void zEntHangable_Load(_zEntHangable* ent, xSerial* s)
{
	// Line 607, Address: 0x1a2390, Func Offset: 0
	// Func End, Address: 0x1a2398, Func Offset: 0x8
}

// zEntHangable_Save__FP13_zEntHangableP7xSerial
// Start address: 0x1a23a0
void zEntHangable_Save(_zEntHangable* ent, xSerial* s)
{
	// Line 588, Address: 0x1a23a0, Func Offset: 0
	// Func End, Address: 0x1a23a8, Func Offset: 0x8
}

// zEntHangable_SetMatrix__FP13_zEntHangablef
// Start address: 0x1a23b0
void zEntHangable_SetMatrix(_zEntHangable* ent, float32 dt)
{
	_xVec3 rot;
	_xVec3* orot;
	_xVec3* pos;
	_xVec3* opos;
	int32 moving;
	float32 height;
	_xMat3x3 spinMat;
	_xMat4x3 tmpMat;
	// Line 444, Address: 0x1a23b0, Func Offset: 0
	// Line 454, Address: 0x1a23e0, Func Offset: 0x30
	// Line 455, Address: 0x1a2400, Func Offset: 0x50
	// Line 454, Address: 0x1a2404, Func Offset: 0x54
	// Line 455, Address: 0x1a2424, Func Offset: 0x74
	// Line 458, Address: 0x1a2430, Func Offset: 0x80
	// Line 459, Address: 0x1a2438, Func Offset: 0x88
	// Line 460, Address: 0x1a2440, Func Offset: 0x90
	// Line 461, Address: 0x1a244c, Func Offset: 0x9c
	// Line 462, Address: 0x1a246c, Func Offset: 0xbc
	// Line 461, Address: 0x1a2470, Func Offset: 0xc0
	// Line 462, Address: 0x1a2494, Func Offset: 0xe4
	// Line 465, Address: 0x1a249c, Func Offset: 0xec
	// Line 466, Address: 0x1a24b4, Func Offset: 0x104
	// Line 469, Address: 0x1a24c4, Func Offset: 0x114
	// Line 472, Address: 0x1a24cc, Func Offset: 0x11c
	// Line 469, Address: 0x1a24d0, Func Offset: 0x120
	// Line 474, Address: 0x1a24ec, Func Offset: 0x13c
	// Line 475, Address: 0x1a24f0, Func Offset: 0x140
	// Line 469, Address: 0x1a24fc, Func Offset: 0x14c
	// Line 472, Address: 0x1a251c, Func Offset: 0x16c
	// Line 473, Address: 0x1a2520, Func Offset: 0x170
	// Line 475, Address: 0x1a2534, Func Offset: 0x184
	// Line 477, Address: 0x1a253c, Func Offset: 0x18c
	// Line 478, Address: 0x1a2544, Func Offset: 0x194
	// Line 482, Address: 0x1a2548, Func Offset: 0x198
	// Line 477, Address: 0x1a254c, Func Offset: 0x19c
	// Line 478, Address: 0x1a2554, Func Offset: 0x1a4
	// Line 479, Address: 0x1a2564, Func Offset: 0x1b4
	// Line 482, Address: 0x1a2574, Func Offset: 0x1c4
	// Line 485, Address: 0x1a2578, Func Offset: 0x1c8
	// Line 488, Address: 0x1a260c, Func Offset: 0x25c
	// Line 491, Address: 0x1a2618, Func Offset: 0x268
	// Line 493, Address: 0x1a2628, Func Offset: 0x278
	// Line 498, Address: 0x1a2630, Func Offset: 0x280
	// Line 491, Address: 0x1a2634, Func Offset: 0x284
	// Line 493, Address: 0x1a2638, Func Offset: 0x288
	// Line 491, Address: 0x1a263c, Func Offset: 0x28c
	// Line 493, Address: 0x1a2640, Func Offset: 0x290
	// Line 494, Address: 0x1a2650, Func Offset: 0x2a0
	// Line 495, Address: 0x1a266c, Func Offset: 0x2bc
	// Line 498, Address: 0x1a2684, Func Offset: 0x2d4
	// Line 499, Address: 0x1a26a4, Func Offset: 0x2f4
	// Line 500, Address: 0x1a26b4, Func Offset: 0x304
	// Line 502, Address: 0x1a26cc, Func Offset: 0x31c
	// Line 500, Address: 0x1a26d0, Func Offset: 0x320
	// Line 502, Address: 0x1a26fc, Func Offset: 0x34c
	// Line 507, Address: 0x1a2764, Func Offset: 0x3b4
	// Line 506, Address: 0x1a2768, Func Offset: 0x3b8
	// Line 510, Address: 0x1a276c, Func Offset: 0x3bc
	// Line 507, Address: 0x1a2770, Func Offset: 0x3c0
	// Line 506, Address: 0x1a2774, Func Offset: 0x3c4
	// Line 508, Address: 0x1a2778, Func Offset: 0x3c8
	// Line 510, Address: 0x1a277c, Func Offset: 0x3cc
	// Line 511, Address: 0x1a2784, Func Offset: 0x3d4
	// Line 515, Address: 0x1a2814, Func Offset: 0x464
	// Line 514, Address: 0x1a2818, Func Offset: 0x468
	// Line 515, Address: 0x1a281c, Func Offset: 0x46c
	// Line 516, Address: 0x1a2824, Func Offset: 0x474
	// Line 518, Address: 0x1a282c, Func Offset: 0x47c
	// Line 520, Address: 0x1a2834, Func Offset: 0x484
	// Line 521, Address: 0x1a2840, Func Offset: 0x490
	// Line 524, Address: 0x1a284c, Func Offset: 0x49c
	// Line 531, Address: 0x1a2850, Func Offset: 0x4a0
	// Line 533, Address: 0x1a2864, Func Offset: 0x4b4
	// Line 537, Address: 0x1a2870, Func Offset: 0x4c0
	// Line 538, Address: 0x1a2874, Func Offset: 0x4c4
	// Line 537, Address: 0x1a287c, Func Offset: 0x4cc
	// Line 538, Address: 0x1a2880, Func Offset: 0x4d0
	// Line 540, Address: 0x1a2890, Func Offset: 0x4e0
	// Line 541, Address: 0x1a2894, Func Offset: 0x4e4
	// Line 543, Address: 0x1a2914, Func Offset: 0x564
	// Line 544, Address: 0x1a2918, Func Offset: 0x568
	// Line 547, Address: 0x1a2934, Func Offset: 0x584
	// Line 548, Address: 0x1a293c, Func Offset: 0x58c
	// Line 551, Address: 0x1a2944, Func Offset: 0x594
	// Line 552, Address: 0x1a2948, Func Offset: 0x598
	// Line 551, Address: 0x1a2950, Func Offset: 0x5a0
	// Line 552, Address: 0x1a2954, Func Offset: 0x5a4
	// Line 554, Address: 0x1a2964, Func Offset: 0x5b4
	// Line 555, Address: 0x1a297c, Func Offset: 0x5cc
	// Line 554, Address: 0x1a2980, Func Offset: 0x5d0
	// Line 557, Address: 0x1a2990, Func Offset: 0x5e0
	// Line 561, Address: 0x1a2998, Func Offset: 0x5e8
	// Line 562, Address: 0x1a299c, Func Offset: 0x5ec
	// Line 561, Address: 0x1a29a4, Func Offset: 0x5f4
	// Line 562, Address: 0x1a29a8, Func Offset: 0x5f8
	// Line 564, Address: 0x1a29b8, Func Offset: 0x608
	// Line 565, Address: 0x1a29bc, Func Offset: 0x60c
	// Line 569, Address: 0x1a2a3c, Func Offset: 0x68c
	// Line 570, Address: 0x1a2a40, Func Offset: 0x690
	// Line 575, Address: 0x1a2a44, Func Offset: 0x694
	// Func End, Address: 0x1a2a78, Func Offset: 0x6c8
}

// zEntHangableEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a2a80
int32 zEntHangableEventCB(xBase* from, xBase* to, uint32 toEvent, xBase* toParamWidget)
{
	_zEnt* follow;
	_zEnt* shagent;
	uint32 oldvisible;
	_zEntHangable* ent;
	// Line 312, Address: 0x1a2a80, Func Offset: 0
	// Line 316, Address: 0x1a2a9c, Func Offset: 0x1c
	// Line 317, Address: 0x1a2aac, Func Offset: 0x2c
	// Line 319, Address: 0x1a2ab8, Func Offset: 0x38
	// Line 322, Address: 0x1a2b2c, Func Offset: 0xac
	// Line 324, Address: 0x1a2b34, Func Offset: 0xb4
	// Line 328, Address: 0x1a2b3c, Func Offset: 0xbc
	// Line 329, Address: 0x1a2b44, Func Offset: 0xc4
	// Line 335, Address: 0x1a2b4c, Func Offset: 0xcc
	// Line 340, Address: 0x1a2b54, Func Offset: 0xd4
	// Line 341, Address: 0x1a2bd0, Func Offset: 0x150
	// Line 345, Address: 0x1a2bf0, Func Offset: 0x170
	// Line 349, Address: 0x1a2bf8, Func Offset: 0x178
	// Line 352, Address: 0x1a2c00, Func Offset: 0x180
	// Line 355, Address: 0x1a2c08, Func Offset: 0x188
	// Line 356, Address: 0x1a2c18, Func Offset: 0x198
	// Line 359, Address: 0x1a2c48, Func Offset: 0x1c8
	// Line 360, Address: 0x1a2c54, Func Offset: 0x1d4
	// Line 362, Address: 0x1a2c60, Func Offset: 0x1e0
	// Line 365, Address: 0x1a2ce0, Func Offset: 0x260
	// Line 371, Address: 0x1a2ce8, Func Offset: 0x268
	// Line 374, Address: 0x1a2cf0, Func Offset: 0x270
	// Line 378, Address: 0x1a2cf4, Func Offset: 0x274
	// Line 374, Address: 0x1a2cf8, Func Offset: 0x278
	// Line 379, Address: 0x1a2d00, Func Offset: 0x280
	// Line 382, Address: 0x1a2d08, Func Offset: 0x288
	// Line 387, Address: 0x1a2d14, Func Offset: 0x294
	// Line 390, Address: 0x1a2d1c, Func Offset: 0x29c
	// Line 391, Address: 0x1a2d48, Func Offset: 0x2c8
	// Line 398, Address: 0x1a2d50, Func Offset: 0x2d0
	// Line 404, Address: 0x1a2d78, Func Offset: 0x2f8
	// Line 406, Address: 0x1a2d90, Func Offset: 0x310
	// Line 410, Address: 0x1a2d9c, Func Offset: 0x31c
	// Line 411, Address: 0x1a2da4, Func Offset: 0x324
	// Line 412, Address: 0x1a2db8, Func Offset: 0x338
	// Line 416, Address: 0x1a2dc0, Func Offset: 0x340
	// Line 415, Address: 0x1a2dd8, Func Offset: 0x358
	// Line 416, Address: 0x1a2ddc, Func Offset: 0x35c
	// Func End, Address: 0x1a2de4, Func Offset: 0x364
}

// zEntHangable_Update__FP13_zEntHangableP7_xScenef
// Start address: 0x1a2df0
void zEntHangable_Update(_zEntHangable* ent, float32 dt)
{
	_xVec3 unitHang;
	// Line 195, Address: 0x1a2df0, Func Offset: 0
	// Line 196, Address: 0x1a2e14, Func Offset: 0x24
	// Line 197, Address: 0x1a2e40, Func Offset: 0x50
	// Line 199, Address: 0x1a2e54, Func Offset: 0x64
	// Line 201, Address: 0x1a2e60, Func Offset: 0x70
	// Line 202, Address: 0x1a2e68, Func Offset: 0x78
	// Line 203, Address: 0x1a2e74, Func Offset: 0x84
	// Line 206, Address: 0x1a2e78, Func Offset: 0x88
	// Line 213, Address: 0x1a2e84, Func Offset: 0x94
	// Line 217, Address: 0x1a2e9c, Func Offset: 0xac
	// Line 218, Address: 0x1a2eac, Func Offset: 0xbc
	// Line 223, Address: 0x1a2ebc, Func Offset: 0xcc
	// Line 228, Address: 0x1a2ee4, Func Offset: 0xf4
	// Line 233, Address: 0x1a2ef4, Func Offset: 0x104
	// Line 242, Address: 0x1a2efc, Func Offset: 0x10c
	// Line 241, Address: 0x1a2f00, Func Offset: 0x110
	// Line 246, Address: 0x1a2f04, Func Offset: 0x114
	// Line 247, Address: 0x1a2f0c, Func Offset: 0x11c
	// Line 246, Address: 0x1a2f10, Func Offset: 0x120
	// Line 242, Address: 0x1a2f14, Func Offset: 0x124
	// Line 246, Address: 0x1a2f18, Func Offset: 0x128
	// Line 247, Address: 0x1a2f1c, Func Offset: 0x12c
	// Line 246, Address: 0x1a2f20, Func Offset: 0x130
	// Line 242, Address: 0x1a2f30, Func Offset: 0x140
	// Line 243, Address: 0x1a2f34, Func Offset: 0x144
	// Line 246, Address: 0x1a2f38, Func Offset: 0x148
	// Line 247, Address: 0x1a2f4c, Func Offset: 0x15c
	// Line 248, Address: 0x1a2f54, Func Offset: 0x164
	// Line 267, Address: 0x1a2f60, Func Offset: 0x170
	// Line 248, Address: 0x1a2f6c, Func Offset: 0x17c
	// Line 269, Address: 0x1a2f74, Func Offset: 0x184
	// Line 255, Address: 0x1a2f7c, Func Offset: 0x18c
	// Line 248, Address: 0x1a2f80, Func Offset: 0x190
	// Line 250, Address: 0x1a2f8c, Func Offset: 0x19c
	// Line 252, Address: 0x1a2f94, Func Offset: 0x1a4
	// Line 255, Address: 0x1a2f9c, Func Offset: 0x1ac
	// Line 251, Address: 0x1a2fa0, Func Offset: 0x1b0
	// Line 255, Address: 0x1a2fa4, Func Offset: 0x1b4
	// Line 251, Address: 0x1a2fa8, Func Offset: 0x1b8
	// Line 255, Address: 0x1a2fac, Func Offset: 0x1bc
	// Line 256, Address: 0x1a2fb0, Func Offset: 0x1c0
	// Line 257, Address: 0x1a2fc0, Func Offset: 0x1d0
	// Line 260, Address: 0x1a2fd0, Func Offset: 0x1e0
	// Line 261, Address: 0x1a2fe8, Func Offset: 0x1f8
	// Line 260, Address: 0x1a2fec, Func Offset: 0x1fc
	// Line 261, Address: 0x1a2ffc, Func Offset: 0x20c
	// Line 262, Address: 0x1a3008, Func Offset: 0x218
	// Line 269, Address: 0x1a3010, Func Offset: 0x220
	// Line 262, Address: 0x1a3014, Func Offset: 0x224
	// Line 263, Address: 0x1a3020, Func Offset: 0x230
	// Line 267, Address: 0x1a3034, Func Offset: 0x244
	// Line 269, Address: 0x1a3058, Func Offset: 0x268
	// Line 270, Address: 0x1a3084, Func Offset: 0x294
	// Line 271, Address: 0x1a3088, Func Offset: 0x298
	// Line 272, Address: 0x1a308c, Func Offset: 0x29c
	// Line 276, Address: 0x1a3090, Func Offset: 0x2a0
	// Line 282, Address: 0x1a3094, Func Offset: 0x2a4
	// Line 276, Address: 0x1a3098, Func Offset: 0x2a8
	// Line 282, Address: 0x1a309c, Func Offset: 0x2ac
	// Line 276, Address: 0x1a30a0, Func Offset: 0x2b0
	// Line 277, Address: 0x1a30ac, Func Offset: 0x2bc
	// Line 278, Address: 0x1a30c0, Func Offset: 0x2d0
	// Line 281, Address: 0x1a30d4, Func Offset: 0x2e4
	// Line 282, Address: 0x1a3100, Func Offset: 0x310
	// Line 283, Address: 0x1a3108, Func Offset: 0x318
	// Line 286, Address: 0x1a3110, Func Offset: 0x320
	// Line 283, Address: 0x1a3118, Func Offset: 0x328
	// Line 284, Address: 0x1a313c, Func Offset: 0x34c
	// Line 286, Address: 0x1a3168, Func Offset: 0x378
	// Line 287, Address: 0x1a3170, Func Offset: 0x380
	// Func End, Address: 0x1a3198, Func Offset: 0x3a8
}

// zEntHangable_UpdateFX__FP13_zEntHangable
// Start address: 0x1a31a0
void zEntHangable_UpdateFX(_zEntHangable* ent)
{
	_xVec3 offset;
	int32 i;
	_zParEmitter* emitter;
	_zParEmitterCustomSettings info;
	_xVec3* local_offset;
	_xVec3 offset_rlii0006[8];
	// Line 138, Address: 0x1a31a0, Func Offset: 0
	// Line 139, Address: 0x1a31b8, Func Offset: 0x18
	// Line 138, Address: 0x1a31bc, Func Offset: 0x1c
	// Line 139, Address: 0x1a31c0, Func Offset: 0x20
	// Line 151, Address: 0x1a31f8, Func Offset: 0x58
	// Line 159, Address: 0x1a3208, Func Offset: 0x68
	// Line 163, Address: 0x1a321c, Func Offset: 0x7c
	// Line 164, Address: 0x1a322c, Func Offset: 0x8c
	// Line 173, Address: 0x1a3234, Func Offset: 0x94
	// Line 175, Address: 0x1a323c, Func Offset: 0x9c
	// Line 176, Address: 0x1a3248, Func Offset: 0xa8
	// Line 178, Address: 0x1a3250, Func Offset: 0xb0
	// Line 180, Address: 0x1a3258, Func Offset: 0xb8
	// Line 182, Address: 0x1a325c, Func Offset: 0xbc
	// Line 184, Address: 0x1a3260, Func Offset: 0xc0
	// Line 182, Address: 0x1a3268, Func Offset: 0xc8
	// Line 184, Address: 0x1a326c, Func Offset: 0xcc
	// Line 186, Address: 0x1a3274, Func Offset: 0xd4
	// Line 188, Address: 0x1a3278, Func Offset: 0xd8
	// Line 186, Address: 0x1a3280, Func Offset: 0xe0
	// Line 188, Address: 0x1a3290, Func Offset: 0xf0
	// Line 186, Address: 0x1a329c, Func Offset: 0xfc
	// Line 188, Address: 0x1a32bc, Func Offset: 0x11c
	// Line 189, Address: 0x1a32c4, Func Offset: 0x124
	// Line 190, Address: 0x1a32d4, Func Offset: 0x134
	// Func End, Address: 0x1a32f4, Func Offset: 0x154
}

// zEntHangable_Init__FPvPv
// Start address: 0x1a3300
void zEntHangable_Init(void* ent, void* asset)
{
	// Line 116, Address: 0x1a3300, Func Offset: 0
	// Line 117, Address: 0x1a3310, Func Offset: 0x10
	// Line 118, Address: 0x1a3350, Func Offset: 0x50
	// Func End, Address: 0x1a3364, Func Offset: 0x64
}

// HangableSetup__FP13_zEntHangableP10p2EntAsset
// Start address: 0x1a3370
void HangableSetup(_zEntHangable* ent, p2EntAsset* asset)
{
	_xMat3x3 hackMat;
	_xVec3* center;
	p2EntHangableAsset* hangAsset;
	// Line 46, Address: 0x1a3370, Func Offset: 0
	// Line 51, Address: 0x1a337c, Func Offset: 0xc
	// Line 52, Address: 0x1a3380, Func Offset: 0x10
	// Line 54, Address: 0x1a3384, Func Offset: 0x14
	// Line 53, Address: 0x1a3388, Func Offset: 0x18
	// Line 54, Address: 0x1a338c, Func Offset: 0x1c
	// Line 56, Address: 0x1a3394, Func Offset: 0x24
	// Line 55, Address: 0x1a3398, Func Offset: 0x28
	// Line 56, Address: 0x1a339c, Func Offset: 0x2c
	// Line 50, Address: 0x1a33a4, Func Offset: 0x34
	// Line 59, Address: 0x1a33a8, Func Offset: 0x38
	// Line 61, Address: 0x1a33ac, Func Offset: 0x3c
	// Line 79, Address: 0x1a33b0, Func Offset: 0x40
	// Line 81, Address: 0x1a33b4, Func Offset: 0x44
	// Line 62, Address: 0x1a33bc, Func Offset: 0x4c
	// Line 63, Address: 0x1a33c4, Func Offset: 0x54
	// Line 64, Address: 0x1a33d4, Func Offset: 0x64
	// Line 66, Address: 0x1a33dc, Func Offset: 0x6c
	// Line 67, Address: 0x1a33e4, Func Offset: 0x74
	// Line 68, Address: 0x1a33f4, Func Offset: 0x84
	// Line 70, Address: 0x1a33fc, Func Offset: 0x8c
	// Line 74, Address: 0x1a3408, Func Offset: 0x98
	// Line 75, Address: 0x1a340c, Func Offset: 0x9c
	// Line 76, Address: 0x1a3410, Func Offset: 0xa0
	// Line 77, Address: 0x1a3414, Func Offset: 0xa4
	// Line 78, Address: 0x1a3418, Func Offset: 0xa8
	// Line 79, Address: 0x1a341c, Func Offset: 0xac
	// Line 80, Address: 0x1a3420, Func Offset: 0xb0
	// Line 81, Address: 0x1a3424, Func Offset: 0xb4
	// Line 82, Address: 0x1a3428, Func Offset: 0xb8
	// Line 90, Address: 0x1a342c, Func Offset: 0xbc
	// Line 91, Address: 0x1a3444, Func Offset: 0xd4
	// Line 113, Address: 0x1a345c, Func Offset: 0xec
	// Func End, Address: 0x1a346c, Func Offset: 0xfc
}

// zEntHangable_SetupFX__Fv
// Start address: 0x1a3470
void zEntHangable_SetupFX()
{
	// Line 37, Address: 0x1a3470, Func Offset: 0
	// Line 38, Address: 0x1a3474, Func Offset: 0x4
	// Line 37, Address: 0x1a3478, Func Offset: 0x8
	// Line 38, Address: 0x1a347c, Func Offset: 0xc
	// Line 39, Address: 0x1a3488, Func Offset: 0x18
	// Line 40, Address: 0x1a3498, Func Offset: 0x28
	// Line 41, Address: 0x1a34a8, Func Offset: 0x38
	// Line 42, Address: 0x1a34b8, Func Offset: 0x48
	// Func End, Address: 0x1a34c4, Func Offset: 0x54
}

