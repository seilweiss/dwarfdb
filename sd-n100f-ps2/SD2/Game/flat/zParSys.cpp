typedef struct zParSys;
typedef struct _xEnt;
typedef struct RxPacket;
typedef struct zParSysInfo;
typedef struct _zEnt;
typedef struct RpGeometry;
typedef struct p2EntAsset;
typedef struct _tagxCam;
typedef struct zCutsceneMgrAsset;
typedef struct xParCmdTex;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct _tagxCamShoulder;
typedef struct _tagxRumble;
typedef struct RwObjectHasFrame;
typedef struct _xVec3;
typedef struct xCutscene;
typedef enum RwTextureAddressMode;
typedef struct RpVertexNormal;
typedef struct xAnimActiveEffect;
typedef struct RpMaterialList;
typedef struct _zParGroup;
typedef struct zCheckPoint;
typedef struct _tagEmitSphere;
typedef struct RpAtomic;
typedef struct RxPipelineNode;
typedef struct RpMorphTarget;
typedef struct zCutsceneZbufferHack;
typedef struct xAnimPlay;
typedef struct xParGroup;
typedef struct RpMaterial;
typedef struct zPortalAsset;
typedef struct tag_iFile;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xCollis;
typedef struct RpSector;
typedef struct xSerial;
typedef struct _tagxCamFollowAsset;
typedef struct xSurface;
typedef struct RxPipelineNodeParam;
typedef struct zGlobalGameStats;
typedef struct xCamAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct xParCmd;
typedef struct RwResEntry;
typedef struct zScene;
typedef struct _zEntHangable;
typedef struct zParCmd;
typedef struct _xEnv;
typedef struct xAnimFile;
typedef struct xQCData;
typedef struct zAssetPickupTable;
typedef struct xBase;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct RxNodeDefinition;
typedef struct xPar;
typedef struct xAnimTransitionList;
typedef enum _tagCamType;
typedef struct xFFX;
typedef struct RxPipelineCluster;
typedef struct iEnv;
typedef struct _tagEmitRect;
typedef struct RpClump;
typedef struct RpPolygon;
typedef struct zJumpParam;
typedef struct _xBBox;
typedef struct RpWorld;
typedef struct xAnimTransition;
typedef struct rxHeapBlockHeader;
typedef struct RwRaster;
typedef struct xCutsceneTime;
typedef struct RpLight;
typedef struct RwRGBAReal;
typedef struct xModelInstance;
typedef struct RwCamera;
typedef struct _tagxCamStatic;
typedef struct rxHeapFreeBlock;
typedef struct _xEntShadow;
typedef struct RpTriangle;
typedef struct xAnimSingle;
typedef struct zGlobals;
typedef enum _tagRumbleType;
typedef struct _xMat4x3;
typedef struct iModelTag;
typedef struct RxClusterDefinition;
typedef struct RxPipeline;
typedef enum RxClusterValidityReq;
typedef struct _xEntFrame;
typedef struct xModelPool;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimState;
typedef struct _tagxPad;
typedef struct RwV2d;
typedef struct RwFrame;
typedef struct _tagxCamFrame;
typedef struct RwTexDictionary;
typedef struct _zPortal;
typedef struct _xQuat;
typedef struct _tagEmitLine;
typedef struct _tagxCamShoulderAsset;
typedef struct _iCollis;
typedef enum _tagTransType;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef struct RwFrustumPlane;
typedef struct RpCollSector;
typedef struct p2LinkAsset;
typedef struct _tagxCamStaticFollow;
typedef struct zPlayerStatic;
typedef enum RxClusterValid;
typedef struct xCutsceneData;
typedef struct _zCutsceneMgr;
typedef struct zParSysAsset;
typedef struct xMemPool;
typedef struct RpMeshHeader;
typedef struct _xVec4;
typedef struct xParCmdAsset;
typedef struct xAnimEffect;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimTable;
typedef struct RwMatrixTag;
typedef struct RwPlane;
typedef struct zParEmitterAsset;
typedef struct iShadowCache;
typedef struct RwTexture;
typedef struct RwLinkList;
typedef struct _zPlatform;
typedef struct _xRot;
typedef struct xCutsceneBreak;
typedef struct _tagEmitVolume;
typedef struct RpWorldSector;
typedef struct _tagxCamPath;
typedef struct RpInterpolator;
typedef struct _tagp2CamStaticAsset;
typedef struct rxReq;
typedef struct _xScene;
typedef struct RwTexCoords;
typedef enum RwFogType;
typedef struct _xBound;
typedef struct RxOutputSpec;
typedef struct zCutsceneZbuffer;
typedef enum RxClusterForcePresent;
typedef struct _tagEmitOffsetPoint;
typedef struct RxClusterRef;
typedef struct p2EntHangableAsset;
typedef enum RxNodeDefEditable;
typedef struct _xEntDrive;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RxIoSpec;
typedef enum _tagPadState;
typedef struct p2BaseAsset;
typedef struct _xEntCollis;
typedef struct zPlayerGlobals;
typedef struct _xSphere;
typedef struct RxNodeMethods;
typedef struct _tagxCamFollow;
typedef struct _tagiPad;
typedef enum RpWorldRenderOrder;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct _xCylinder;
typedef struct _tagEmitCircle;
typedef struct _tagxCamPathAsset;
typedef struct RxCluster;
typedef struct _tagPadAnalog;
typedef struct _xBox;
typedef struct iFogParams;
typedef struct RwSphere;
typedef struct zShaggy1Globals;
typedef enum RwCameraProjection;
typedef enum rxEmbeddedPacketState;
typedef struct tag_xFile;

typedef void(*type_1)(_xEnt*);
typedef void(*type_3)(void*, xParGroup*);
typedef void(*type_4)(int32);
typedef void(*type_5)(_xEnt*, _xVec3*);
typedef RpAtomic*(*type_7)(RpAtomic*);
typedef RwObjectHasFrame*(*type_9)(RwObjectHasFrame*);
typedef int32(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_14)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int32(*type_15)(RxNodeDefinition*);
typedef xBase*(*type_17)(uint32);
typedef uint32(*type_18)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_20)(zParCmd*, xParGroup*, float32);
typedef int8*(*type_21)(xBase*);
typedef void(*type_22)(RxNodeDefinition*);
typedef int8*(*type_24)(uint32);
typedef int32(*type_26)(RxPipelineNode*);
typedef RpWorldSector*(*type_30)(RpWorldSector*);
typedef void(*type_36)(RxPipelineNode*);
typedef RwCamera*(*type_41)(RwCamera*);
typedef int32(*type_50)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_51)(RwCamera*);
typedef uint32(*type_59)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_64)(xMemPool*, void*);
typedef void(*type_73)(RwResEntry*);
typedef uint32(*type_80)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_84)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_87)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_95)(_xEnt*, _xScene*, float32);
typedef void(*type_98)(_xEnt*);
typedef uint32(*type_99)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_100)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_101)(_xEnt*, _xVec3*);
typedef RpClump*(*type_102)(RpClump*, void*);

typedef uint32 type_0[2];
typedef uint8 type_2[2];
typedef int8 type_6[16];
typedef uint8 type_8[8];
typedef int8 type_11[128];
typedef zParSysInfo type_12[7];
typedef _xCollis type_13[18];
typedef uint8 type_16[22];
typedef uint8 type_19[22];
typedef uint8 type_23[8];
typedef uint8 type_25[8];
typedef uint16 type_27[3];
typedef uint8 type_28[8];
typedef uint8 type_29[4];
typedef int8 type_31[16];
typedef uint8 type_32[4];
typedef uint8 type_33[8];
typedef float32 type_34[4];
typedef RpLight* type_35[2];
typedef iModelTag type_37[4];
typedef uint16 type_38[3];
typedef int8 type_39[16];
typedef uint8 type_40[4];
typedef float32 type_42[4];
typedef uint32 type_43[43];
typedef RwFrame* type_44[2];
typedef float32 type_45[4];
typedef xBase* type_46[43];
typedef uint8 type_47[2];
typedef uint8 type_48[3];
typedef uint8 type_49[3];
typedef uint8 type_52[2];
typedef _xVec4 type_53[8];
typedef RxCluster type_54[1];
typedef uint8 type_55[3];
typedef int8 type_56[128];
typedef int8 type_57[128][6];
typedef uint8 type_58[2];
typedef float32 type_60[15];
typedef uint32 type_61[4];
typedef float32 type_62[15];
typedef float32 type_63[4];
typedef uint32 type_65[15];
typedef _xVec3 type_66[2];
typedef float32 type_67[4];
typedef float32 type_68[4];
typedef float32 type_69[4];
typedef int8 type_70[32];
typedef _xQuat type_71[2];
typedef float32 type_72[4];
typedef _xVec3 type_74[4];
typedef float32 type_75[4];
typedef float32 type_76[4];
typedef RwTexCoords* type_77[8];
typedef int8 type_78[32];
typedef float32 type_79[3];
typedef int8 type_81[32];
typedef float32 type_82[3];
typedef uint8 type_83[3];
typedef zGlobalGameStats type_85[30];
typedef uint32 type_86[2];
typedef RwTexCoords* type_88[8];
typedef zGlobalGameStats type_89[13];
typedef _zEnt* type_90[10];
typedef uint32 type_91[1];
typedef uint8 type_92[3];
typedef zGlobalGameStats type_93[4];
typedef int32 type_94[2];
typedef int8 type_96[16];
typedef int32 type_97[2];
typedef RwFrustumPlane type_103[6];
typedef zCutsceneZbuffer type_104[4];
typedef RwV3d type_105[8];
typedef uint32 type_106[2];
typedef uint32 type_107[2];
typedef uint32 type_108[2];
typedef float32 type_109[2];

struct zParSys : xBase
{
	zParSysAsset* tasset;
	uint32 cmdCount;
	zParCmd* cmd;
	zParSys* parent;
	_zParGroup* group;
	uint8 visible;
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

struct zParSysInfo
{
	int32 type;
	void(*func)(void*, xParGroup*);
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _zParGroup : xParGroup
{
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct _tagEmitSphere
{
	float32 radius;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpSector
{
	int32 type;
};

struct xSerial
{
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xParCmd
{
	uint32 flag;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct zParCmd : xParCmd
{
	xParCmdAsset* tasset;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xFFX
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct _tagxCamStatic
{
	uint32 unused;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RwV2d
{
	float32 x;
	float32 y;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

struct _iCollis
{
	int32 unknown;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct zParSysAsset : p2BaseAsset
{
	uint32 type;
	uint32 parentParSysID;
	uint32 textureID;
	uint8 parFlags;
	uint8 priority;
	uint16 maxPar;
	uint8 renderFunc;
	uint8 renderSrcBlendMode;
	uint8 renderDstBlendMode;
	uint8 cmdCount;
	uint32 cmdSize;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct RwLinkList
{
	RwLLLink link;
};

struct _zPlatform
{
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct rxReq
{
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct _tagiPad
{
	int32 port;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

zParSysInfo sParSysInfo[7];
zGlobals globals;
uint32 gActiveHeap;
int32(*zParSysEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

void zParSysRender(xBase* b);
void zParGroupUpdateR(zParSys* s, _zParGroup* g, float32 dt);
void zParSysUpdate(xBase* to, float32 dt);
int32 zParSysEventCB(xBase* to, uint32 toEvent);
void zParSysExit(zParSys* t);
void zParSysSetup(zParSys* t);
void zParSysInit(xBase* b, zParSysAsset* tasset);
void zParSysInit(void* b, void* tasset);

// zParSysRender__FP5xBase
// Start address: 0x1d28c0
void zParSysRender(xBase* b)
{
	zParSys* s;
	_zParGroup* g;
	// Line 396, Address: 0x1d28c0, Func Offset: 0
	// Line 399, Address: 0x1d28cc, Func Offset: 0xc
	// Line 403, Address: 0x1d28d0, Func Offset: 0x10
	// Line 405, Address: 0x1d28dc, Func Offset: 0x1c
	// Line 406, Address: 0x1d28e0, Func Offset: 0x20
	// Line 408, Address: 0x1d28e8, Func Offset: 0x28
	// Line 414, Address: 0x1d2924, Func Offset: 0x64
	// Line 415, Address: 0x1d2930, Func Offset: 0x70
	// Line 416, Address: 0x1d293c, Func Offset: 0x7c
	// Line 417, Address: 0x1d2948, Func Offset: 0x88
	// Line 420, Address: 0x1d2958, Func Offset: 0x98
	// Line 421, Address: 0x1d295c, Func Offset: 0x9c
	// Line 422, Address: 0x1d2968, Func Offset: 0xa8
	// Func End, Address: 0x1d297c, Func Offset: 0xbc
}

// zParGroupUpdateR__FP7zParSysP10_zParGroupf
// Start address: 0x1d2980
void zParGroupUpdateR(zParSys* s, _zParGroup* g, float32 dt)
{
	void(*func)(zParCmd*, xParGroup*, float32);
	zParCmd* cmd;
	int32 i;
	// Line 348, Address: 0x1d2980, Func Offset: 0
	// Line 352, Address: 0x1d29a4, Func Offset: 0x24
	// Line 353, Address: 0x1d29b8, Func Offset: 0x38
	// Line 356, Address: 0x1d2a38, Func Offset: 0xb8
	// Line 359, Address: 0x1d2a48, Func Offset: 0xc8
	// Line 361, Address: 0x1d2a50, Func Offset: 0xd0
	// Line 364, Address: 0x1d2a58, Func Offset: 0xd8
	// Line 366, Address: 0x1d2a6c, Func Offset: 0xec
	// Line 367, Address: 0x1d2a74, Func Offset: 0xf4
	// Line 369, Address: 0x1d2a7c, Func Offset: 0xfc
	// Line 372, Address: 0x1d2a8c, Func Offset: 0x10c
	// Line 374, Address: 0x1d2aa0, Func Offset: 0x120
	// Func End, Address: 0x1d2ac8, Func Offset: 0x148
}

// zParSysUpdate__FP5xBaseP7_xScenef
// Start address: 0x1d2ad0
void zParSysUpdate(xBase* to, float32 dt)
{
	_zParGroup* g;
	zParSys* parent;
	zParSys* s;
	// Line 309, Address: 0x1d2ad0, Func Offset: 0
	// Line 319, Address: 0x1d2af4, Func Offset: 0x24
	// Line 314, Address: 0x1d2af8, Func Offset: 0x28
	// Line 320, Address: 0x1d2b00, Func Offset: 0x30
	// Line 323, Address: 0x1d2b08, Func Offset: 0x38
	// Line 326, Address: 0x1d2b14, Func Offset: 0x44
	// Line 327, Address: 0x1d2b1c, Func Offset: 0x4c
	// Line 337, Address: 0x1d2b98, Func Offset: 0xc8
	// Line 338, Address: 0x1d2ba4, Func Offset: 0xd4
	// Line 342, Address: 0x1d2c00, Func Offset: 0x130
	// Line 343, Address: 0x1d2c0c, Func Offset: 0x13c
	// Line 344, Address: 0x1d2c10, Func Offset: 0x140
	// Line 345, Address: 0x1d2c18, Func Offset: 0x148
	// Func End, Address: 0x1d2c40, Func Offset: 0x170
}

// zParSysEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1d2c40
int32 zParSysEventCB(xBase* to, uint32 toEvent)
{
	zParSys* t;
	// Line 261, Address: 0x1d2c40, Func Offset: 0
	// Line 268, Address: 0x1d2c4c, Func Offset: 0xc
	// Line 272, Address: 0x1d2c88, Func Offset: 0x48
	// Line 273, Address: 0x1d2d00, Func Offset: 0xc0
	// Line 276, Address: 0x1d2d08, Func Offset: 0xc8
	// Line 277, Address: 0x1d2d0c, Func Offset: 0xcc
	// Line 278, Address: 0x1d2d18, Func Offset: 0xd8
	// Line 279, Address: 0x1d2d20, Func Offset: 0xe0
	// Line 282, Address: 0x1d2d28, Func Offset: 0xe8
	// Line 283, Address: 0x1d2d2c, Func Offset: 0xec
	// Line 284, Address: 0x1d2d38, Func Offset: 0xf8
	// Line 285, Address: 0x1d2d40, Func Offset: 0x100
	// Line 288, Address: 0x1d2d48, Func Offset: 0x108
	// Line 289, Address: 0x1d2d54, Func Offset: 0x114
	// Line 290, Address: 0x1d2d5c, Func Offset: 0x11c
	// Line 293, Address: 0x1d2d64, Func Offset: 0x124
	// Line 294, Address: 0x1d2d70, Func Offset: 0x130
	// Line 299, Address: 0x1d2d78, Func Offset: 0x138
	// Line 298, Address: 0x1d2d80, Func Offset: 0x140
	// Line 299, Address: 0x1d2d84, Func Offset: 0x144
	// Func End, Address: 0x1d2d8c, Func Offset: 0x14c
}

// zParSysExit__FP7zParSys
// Start address: 0x1d2d90
void zParSysExit(zParSys* t)
{
	// Line 202, Address: 0x1d2d90, Func Offset: 0
	// Line 205, Address: 0x1d2da0, Func Offset: 0x10
	// Line 207, Address: 0x1d2dac, Func Offset: 0x1c
	// Line 208, Address: 0x1d2db4, Func Offset: 0x24
	// Line 210, Address: 0x1d2dbc, Func Offset: 0x2c
	// Func End, Address: 0x1d2dcc, Func Offset: 0x3c
}

// zParSysSetup__FP7zParSys
// Start address: 0x1d2dd0
void zParSysSetup(zParSys* t)
{
	// Line 170, Address: 0x1d2dd0, Func Offset: 0
	// Line 171, Address: 0x1d2de0, Func Offset: 0x10
	// Line 173, Address: 0x1d2de8, Func Offset: 0x18
	// Line 175, Address: 0x1d2df4, Func Offset: 0x24
	// Line 176, Address: 0x1d2e00, Func Offset: 0x30
	// Line 179, Address: 0x1d2e0c, Func Offset: 0x3c
	// Func End, Address: 0x1d2e1c, Func Offset: 0x4c
}

// zParSysInit__FP5xBaseP12zParSysAsset
// Start address: 0x1d2e20
void zParSysInit(xBase* b, zParSysAsset* tasset)
{
	int32 i;
	int32 i;
	uint8* cmdPtr;
	zParSys* t;
	// Line 78, Address: 0x1d2e20, Func Offset: 0
	// Line 83, Address: 0x1d2e40, Func Offset: 0x20
	// Line 92, Address: 0x1d2e48, Func Offset: 0x28
	// Line 93, Address: 0x1d2e54, Func Offset: 0x34
	// Line 95, Address: 0x1d2e58, Func Offset: 0x38
	// Line 96, Address: 0x1d2e64, Func Offset: 0x44
	// Line 98, Address: 0x1d2e7c, Func Offset: 0x5c
	// Line 101, Address: 0x1d2e80, Func Offset: 0x60
	// Line 107, Address: 0x1d2e90, Func Offset: 0x70
	// Line 111, Address: 0x1d2e98, Func Offset: 0x78
	// Line 113, Address: 0x1d2ea4, Func Offset: 0x84
	// Line 115, Address: 0x1d2eb0, Func Offset: 0x90
	// Line 118, Address: 0x1d2eb8, Func Offset: 0x98
	// Line 122, Address: 0x1d2ebc, Func Offset: 0x9c
	// Line 123, Address: 0x1d2ec0, Func Offset: 0xa0
	// Line 126, Address: 0x1d2ecc, Func Offset: 0xac
	// Line 127, Address: 0x1d2edc, Func Offset: 0xbc
	// Line 128, Address: 0x1d2ee8, Func Offset: 0xc8
	// Line 129, Address: 0x1d2ef8, Func Offset: 0xd8
	// Line 132, Address: 0x1d2f10, Func Offset: 0xf0
	// Line 134, Address: 0x1d2f20, Func Offset: 0x100
	// Line 135, Address: 0x1d2f28, Func Offset: 0x108
	// Line 136, Address: 0x1d2f34, Func Offset: 0x114
	// Line 138, Address: 0x1d2f3c, Func Offset: 0x11c
	// Line 139, Address: 0x1d2f54, Func Offset: 0x134
	// Line 140, Address: 0x1d2f60, Func Offset: 0x140
	// Line 145, Address: 0x1d2f78, Func Offset: 0x158
	// Line 150, Address: 0x1d2f7c, Func Offset: 0x15c
	// Line 152, Address: 0x1d2f90, Func Offset: 0x170
	// Line 154, Address: 0x1d2fa8, Func Offset: 0x188
	// Line 157, Address: 0x1d2fbc, Func Offset: 0x19c
	// Line 158, Address: 0x1d3070, Func Offset: 0x250
	// Line 160, Address: 0x1d3078, Func Offset: 0x258
	// Line 165, Address: 0x1d3090, Func Offset: 0x270
	// Line 167, Address: 0x1d30b4, Func Offset: 0x294
	// Func End, Address: 0x1d30d4, Func Offset: 0x2b4
}

// zParSysInit__FPvPv
// Start address: 0x1d30e0
void zParSysInit(void* b, void* tasset)
{
	// Line 74, Address: 0x1d30e0, Func Offset: 0
	// Func End, Address: 0x1d30e8, Func Offset: 0x8
}

