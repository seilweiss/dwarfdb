typedef struct _xEnt;
typedef struct zPlayerGlobals;
typedef struct RxPacket;
typedef struct xSurface;
typedef struct xModelPool;
typedef struct xAnimSingle;
typedef struct RpGeometry;
typedef struct xParCmdTex;
typedef struct _xVec2;
typedef struct tag_xFile;
typedef struct RwObjectHasFrame;
typedef enum RwTextureAddressMode;
typedef struct RpVertexNormal;
typedef struct RpMaterialList;
typedef struct zParEmitterAsset;
typedef struct iFogParams;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct zCutsceneZbufferHack;
typedef struct RpAtomic;
typedef struct xPar;
typedef struct _zEnt;
typedef struct xQCData;
typedef struct _tagxRumble;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xAnimTable;
typedef struct xParGroup;
typedef struct _tagEmitSphere;
typedef struct RpMaterial;
typedef struct _zParEmitterCustomSettings;
typedef struct xFFX;
typedef struct _tagEmitOffsetPoint;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zPortalAsset;
typedef struct _xCollis;
typedef struct RpSector;
typedef struct xAnimEffect;
typedef struct _tagxCam;
typedef struct tag_iFile;
typedef struct RxPipelineNodeParam;
typedef struct _tagxCamShoulder;
typedef struct _xMat3x3;
typedef struct zParCmd;
typedef struct xAnimTransition;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwResEntry;
typedef struct _xBBox;
typedef struct _xEnv;
typedef struct _zParEmitter;
typedef struct zGroupAsset;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct RxNodeDefinition;
typedef struct zAssetPickupTable;
typedef struct _xEntShadow;
typedef struct xAnimState;
typedef struct _zVolume;
typedef struct zParSys;
typedef struct RxPipelineCluster;
typedef struct xSerial;
typedef struct p2EntHangableAsset;
typedef struct iEnv;
typedef struct RwMatrixTag;
typedef struct RpClump;
typedef struct _tagxCamFollowAsset;
typedef struct zVolumeAsset;
typedef struct zScene;
typedef struct _zCutsceneMgr;
typedef struct RpPolygon;
typedef struct xCamAsset;
typedef struct zShaggy1Globals;
typedef struct _xEntFrame;
typedef struct RpWorld;
typedef struct _tagEmitRect;
typedef struct xBase;
typedef struct zCutsceneMgrAsset;
typedef struct rxHeapBlockHeader;
typedef struct RwRaster;
typedef struct _xMat2x2;
typedef struct RpLight;
typedef struct RwRGBAReal;
typedef struct RwCamera;
typedef struct rxHeapFreeBlock;
typedef struct xParCmd;
typedef struct xCutscene;
typedef struct _zPortal;
typedef struct RpTriangle;
typedef enum _tagCamType;
typedef struct zCheckPoint;
typedef struct _xMat4x3;
typedef struct RxClusterDefinition;
typedef struct RxPipeline;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef enum _tagRumbleType;
typedef struct RwV2d;
typedef struct RwFrame;
typedef struct _tagxCamStatic;
typedef struct RwTexDictionary;
typedef struct zGlobalGameStats;
typedef struct xModelInstance;
typedef struct _zEntHangable;
typedef struct _xQuat;
typedef struct _tagEmitLine;
typedef enum RwTextureFilterMode;
typedef struct p2EntAsset;
typedef struct RwObject;
typedef struct p2LinkAsset;
typedef struct RwFrustumPlane;
typedef struct RpCollSector;
typedef enum RxClusterValid;
typedef struct _tagxCamFrame;
typedef struct iShadowCache;
typedef struct _xBound;
typedef struct RpMeshHeader;
typedef struct _xVec4;
typedef struct zJumpParam;
typedef struct xCutsceneData;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimActiveEffect;
typedef struct xCutsceneTime;
typedef struct xMemPool;
typedef struct _tagxCamShoulderAsset;
typedef struct _xVec3;
typedef enum _tagTransType;
typedef struct _zGroup;
typedef struct RwPlane;
typedef struct _tagxCamStaticFollow;
typedef struct zGlobals;
typedef struct RwLinkList;
typedef struct RwTexture;
typedef struct _xRot;
typedef struct _tagxPad;
typedef struct xAnimFile;
typedef struct _xScene;
typedef struct RpWorldSector;
typedef struct xParCmdAsset;
typedef struct xAnimTransitionList;
typedef struct RpInterpolator;
typedef struct rxReq;
typedef struct RwTexCoords;
typedef enum RwFogType;
typedef struct zPlayerStatic;
typedef struct RxOutputSpec;
typedef struct _tagxCamPath;
typedef enum RxClusterForcePresent;
typedef struct _tagp2CamStaticAsset;
typedef struct _iCollis;
typedef struct _xEntCollis;
typedef struct RxClusterRef;
typedef struct zParSysAsset;
typedef enum RxNodeDefEditable;
typedef struct _zPlatform;
typedef struct xCutsceneBreak;
typedef struct RxIoSpec;
typedef struct p2BaseAsset;
typedef struct _xSphere;
typedef struct RxNodeMethods;
typedef enum _tagPadState;
typedef struct _xEntDrive;
typedef struct _zParGroup;
typedef struct _tagCamInfo;
typedef enum RpWorldRenderOrder;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagiPad;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct _xCylinder;
typedef struct zCutsceneZbuffer;
typedef struct iModelTag;
typedef struct _tagxCamFollow;
typedef struct RxCluster;
typedef struct _tagEmitCircle;
typedef struct _tagPadAnalog;
typedef struct _xBox;
typedef struct _tagEmitVolume;
typedef struct RwSphere;
typedef struct _tagxCamPathAsset;
typedef enum RwCameraProjection;
typedef enum rxEmbeddedPacketState;

typedef uint32(*type_0)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_2)(int32);
typedef void(*type_3)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_4)(void*, xParGroup*);
typedef RpAtomic*(*type_5)(RpAtomic*);
typedef uint32(*type_8)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwObjectHasFrame*(*type_9)(RwObjectHasFrame*);
typedef int32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_18)(RxNodeDefinition*);
typedef xBase*(*type_22)(uint32);
typedef uint32(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef int8*(*type_26)(xBase*);
typedef void(*type_28)(RxNodeDefinition*);
typedef int8*(*type_31)(uint32);
typedef int32(*type_33)(RxPipelineNode*);
typedef RpWorldSector*(*type_37)(RpWorldSector*);
typedef void(*type_40)(RxPipelineNode*);
typedef RwCamera*(*type_43)(RwCamera*);
typedef int32(*type_46)(RxPipelineNode*, RxPipeline*);
typedef RwCamera*(*type_47)(RwCamera*);
typedef uint32(*type_53)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_58)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_62)(xMemPool*, void*);
typedef void(*type_66)(RwResEntry*);
typedef void(*type_69)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_74)(_xEnt*, _xScene*, float32);
typedef void(*type_79)(_xEnt*);
typedef void(*type_85)(_xEnt*);
typedef void(*type_93)(_xEnt*, _xVec3*);
typedef int32(*type_95)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpClump*(*type_100)(RpClump*, void*);
typedef void(*type_113)(_xEnt*, _xVec3*);

typedef _xCollis type_1[18];
typedef int8 type_6[16];
typedef zCutsceneZbuffer type_7[4];
typedef uint8 type_10[4];
typedef uint8 type_12[8];
typedef uint8 type_13[8];
typedef uint8 type_14[4];
typedef int8 type_15[128];
typedef uint8 type_16[8];
typedef uint32 type_17[2];
typedef uint8 type_19[2];
typedef uint8 type_20[8];
typedef uint32 type_21[2];
typedef uint8 type_24[8];
typedef uint32 type_25[2];
typedef uint8 type_27[22];
typedef uint8 type_29[3];
typedef uint32 type_30[2];
typedef uint8 type_32[22];
typedef uint16 type_34[3];
typedef float32 type_35[3];
typedef uint8 type_36[4];
typedef uint8 type_38[3];
typedef RpLight* type_39[2];
typedef uint16 type_41[3];
typedef int8 type_42[16];
typedef RwFrame* type_44[2];
typedef int8 type_45[16];
typedef float32 type_48[2];
typedef uint8 type_49[2];
typedef RxCluster type_50[1];
typedef uint8 type_51[3];
typedef uint8 type_52[3];
typedef uint32 type_54[4];
typedef uint8 type_55[3];
typedef _xVec3 type_56[4];
typedef float32 type_57[15];
typedef _xVec4 type_59[8];
typedef uint8 type_60[3];
typedef float32 type_61[15];
typedef float32 type_63[4];
typedef iModelTag type_64[4];
typedef uint32 type_65[15];
typedef uint8 type_67[3];
typedef float32 type_68[4];
typedef RwTexCoords* type_70[8];
typedef int8 type_71[32];
typedef int8 type_72[32];
typedef uint32 type_73[43];
typedef xBase* type_75[43];
typedef int8 type_76[128];
typedef int8 type_77[128][6];
typedef RwTexCoords* type_78[8];
typedef float32 type_80[4];
typedef float32 type_81[4];
typedef uint8 type_82[4];
typedef float32 type_83[4];
typedef float32 type_84[4];
typedef uint8 type_86[4];
typedef float32 type_87[4];
typedef int8 type_88[32];
typedef uint8 type_89[2];
typedef int8 type_90[16];
typedef uint32 type_91[2];
typedef float32 type_92[4];
typedef float32 type_94[4];
typedef uint8 type_96[3];
typedef float32 type_97[3];
typedef float32 type_98[3];
typedef uint8 type_99[2];
typedef RwFrustumPlane type_101[6];
typedef zGlobalGameStats type_102[30];
typedef _xVec3 type_103[2];
typedef zGlobalGameStats type_104[13];
typedef _zEnt* type_105[10];
typedef uint32 type_106[1];
typedef RwV3d type_107[8];
typedef zGlobalGameStats type_108[4];
typedef _xQuat type_109[2];
typedef int32 type_110[2];
typedef float32 type_111[4];
typedef int32 type_112[2];

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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _xVec2
{
	float32 x;
	float32 y;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _tagEmitSphere
{
	float32 radius;
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

struct xFFX
{
};

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct zParCmd : xParCmd
{
	xParCmdAsset* tasset;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct zGroupAsset : p2BaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
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

struct _zVolume : xBase
{
	zVolumeAsset* asset;
};

struct zParSys : xBase
{
	zParSysAsset* tasset;
	uint32 cmdCount;
	zParCmd* cmd;
	zParSys* parent;
	_zParGroup* group;
	uint8 visible;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct xSerial
{
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
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

struct zVolumeAsset : p2BaseAsset
{
	uint32 flags;
	_xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct _xMat2x2
{
	_xVec2 right;
	_xVec2 up;
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

struct xParCmd
{
	uint32 flag;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _tagxCamStatic
{
	uint32 unused;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct _zGroup : xBase
{
	zGroupAsset* asset;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct rxReq
{
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct _iCollis
{
	int32 unknown;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _zPlatform
{
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct _zParGroup : xParGroup
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagp2CamStaticFollowAsset
{
	float32 rubber_band;
};

struct _tagiPad
{
	int32 port;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
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

struct _tagEmitVolume
{
	uint32 emit_volumeID;
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

_zParEmitterCustomSettings sSaveEmmiterSettings;
zGlobals globals;
int32(*zParEmitterEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

_zParEmitter* zParEmitterFind(int8* asset_name);
_zParEmitter* zParEmitterFind(uint32 asset_id);
void zParEmitterUpdate(xBase* to, float32 dt);
xPar* zParEmitterEmit(_zParEmitter* pe, float32 dt);
xPar* zParEmitterEmitCustom(_zParEmitter* p, float32 dt, _zParEmitterCustomSettings* info);
void zParEmitterEmitSphereEdge(xPar* p, zParEmitterAsset* a, float32 dt, int32 subtype);
void zParEmitterEmitCircle(xPar* p, zParEmitterAsset* a, float32 dt);
void zParEmitterEmitCircleEdge(xPar* p, zParEmitterAsset* a, float32 dt);
void zParEmitterAngleVariation(xPar* p, zParEmitterAsset* a);
int32 zParEmitterEventCB(xBase* to, uint32 toEvent);
void zParEmitterSetup(_zParEmitter* t);
void zParEmitterInit(xBase* b, zParEmitterAsset* tasset);
void zParEmitterInit(void* b, void* tasset);

// zParEmitterFind__FPc
// Start address: 0x1d5a60
_zParEmitter* zParEmitterFind(int8* asset_name)
{
	uint32 asset_id;
	// Line 1204, Address: 0x1d5a60, Func Offset: 0
	// Line 1205, Address: 0x1d5a68, Func Offset: 0x8
	// Line 1206, Address: 0x1d5a70, Func Offset: 0x10
	// Line 1207, Address: 0x1d5abc, Func Offset: 0x5c
	// Line 1206, Address: 0x1d5ac0, Func Offset: 0x60
	// Line 1207, Address: 0x1d5ac4, Func Offset: 0x64
	// Func End, Address: 0x1d5acc, Func Offset: 0x6c
}

// zParEmitterFind__FUi
// Start address: 0x1d5ad0
_zParEmitter* zParEmitterFind(uint32 asset_id)
{
	int32 i;
	_zParEmitter* pe;
	zScene* s;
	// Line 1185, Address: 0x1d5ad0, Func Offset: 0
	// Line 1186, Address: 0x1d5ad8, Func Offset: 0x8
	// Line 1187, Address: 0x1d5ae0, Func Offset: 0x10
	// Line 1191, Address: 0x1d5ae8, Func Offset: 0x18
	// Line 1193, Address: 0x1d5af4, Func Offset: 0x24
	// Line 1194, Address: 0x1d5b04, Func Offset: 0x34
	// Line 1197, Address: 0x1d5b0c, Func Offset: 0x3c
	// Line 1199, Address: 0x1d5b18, Func Offset: 0x48
	// Line 1200, Address: 0x1d5b1c, Func Offset: 0x4c
	// Func End, Address: 0x1d5b24, Func Offset: 0x54
}

// zParEmitterUpdate__FP5xBaseP7_xScenef
// Start address: 0x1d5b30
void zParEmitterUpdate(xBase* to, float32 dt)
{
	_zParEmitter* pe;
	// Line 1053, Address: 0x1d5b30, Func Offset: 0
	// Line 1058, Address: 0x1d5b44, Func Offset: 0x14
	// Line 1061, Address: 0x1d5b54, Func Offset: 0x24
	// Line 1063, Address: 0x1d5b64, Func Offset: 0x34
	// Line 1068, Address: 0x1d5b6c, Func Offset: 0x3c
	// Func End, Address: 0x1d5b80, Func Offset: 0x50
}

// zParEmitterEmit__FP12_zParEmitterf
// Start address: 0x1d5b80
xPar* zParEmitterEmit(_zParEmitter* pe, float32 dt)
{
	int32 i;
	uint32 get_rnd_group_idx;
	_zGroup* g;
	int32 marker;
	xBase* emitObj;
	int32 emitAgain;
	int32 attachGroupTotal;
	int32 attachGroupIndex;
	xBase* attachObject;
	int32 sanity;
	uint32 count;
	float32 size_birth;
	float32 life;
	xPar* p;
	zParSys* ps;
	zParEmitterAsset* a;
	xPar* last_p;
	// Line 751, Address: 0x1d5b80, Func Offset: 0
	// Line 752, Address: 0x1d5bd0, Func Offset: 0x50
	// Line 759, Address: 0x1d5bd4, Func Offset: 0x54
	// Line 755, Address: 0x1d5bdc, Func Offset: 0x5c
	// Line 759, Address: 0x1d5be4, Func Offset: 0x64
	// Line 761, Address: 0x1d5bf4, Func Offset: 0x74
	// Line 762, Address: 0x1d5bf8, Func Offset: 0x78
	// Line 763, Address: 0x1d5c08, Func Offset: 0x88
	// Line 765, Address: 0x1d5c10, Func Offset: 0x90
	// Line 771, Address: 0x1d5c1c, Func Offset: 0x9c
	// Line 773, Address: 0x1d5c24, Func Offset: 0xa4
	// Line 776, Address: 0x1d5c30, Func Offset: 0xb0
	// Line 780, Address: 0x1d5c3c, Func Offset: 0xbc
	// Line 783, Address: 0x1d5c5c, Func Offset: 0xdc
	// Line 788, Address: 0x1d5c64, Func Offset: 0xe4
	// Line 789, Address: 0x1d5c68, Func Offset: 0xe8
	// Line 790, Address: 0x1d5c6c, Func Offset: 0xec
	// Line 795, Address: 0x1d5c74, Func Offset: 0xf4
	// Line 797, Address: 0x1d5c84, Func Offset: 0x104
	// Line 798, Address: 0x1d5ca4, Func Offset: 0x124
	// Line 799, Address: 0x1d5cb4, Func Offset: 0x134
	// Line 804, Address: 0x1d5cc0, Func Offset: 0x140
	// Line 807, Address: 0x1d5cf4, Func Offset: 0x174
	// Line 815, Address: 0x1d5cf8, Func Offset: 0x178
	// Line 818, Address: 0x1d5d00, Func Offset: 0x180
	// Line 819, Address: 0x1d5d08, Func Offset: 0x188
	// Line 820, Address: 0x1d5d0c, Func Offset: 0x18c
	// Line 819, Address: 0x1d5d10, Func Offset: 0x190
	// Line 826, Address: 0x1d5d34, Func Offset: 0x1b4
	// Line 823, Address: 0x1d5d38, Func Offset: 0x1b8
	// Line 826, Address: 0x1d5d3c, Func Offset: 0x1bc
	// Line 828, Address: 0x1d5d44, Func Offset: 0x1c4
	// Line 832, Address: 0x1d5d58, Func Offset: 0x1d8
	// Line 834, Address: 0x1d5d68, Func Offset: 0x1e8
	// Line 835, Address: 0x1d5d74, Func Offset: 0x1f4
	// Line 839, Address: 0x1d5d78, Func Offset: 0x1f8
	// Line 841, Address: 0x1d5d90, Func Offset: 0x210
	// Line 843, Address: 0x1d5d9c, Func Offset: 0x21c
	// Line 841, Address: 0x1d5da0, Func Offset: 0x220
	// Line 843, Address: 0x1d5db0, Func Offset: 0x230
	// Line 846, Address: 0x1d5db8, Func Offset: 0x238
	// Line 849, Address: 0x1d5dc0, Func Offset: 0x240
	// Line 850, Address: 0x1d5dd8, Func Offset: 0x258
	// Line 853, Address: 0x1d5de0, Func Offset: 0x260
	// Line 856, Address: 0x1d5de8, Func Offset: 0x268
	// Line 857, Address: 0x1d5df4, Func Offset: 0x274
	// Line 860, Address: 0x1d5dfc, Func Offset: 0x27c
	// Line 861, Address: 0x1d5e14, Func Offset: 0x294
	// Line 862, Address: 0x1d5e1c, Func Offset: 0x29c
	// Line 865, Address: 0x1d5e20, Func Offset: 0x2a0
	// Line 866, Address: 0x1d5e2c, Func Offset: 0x2ac
	// Line 870, Address: 0x1d5e4c, Func Offset: 0x2cc
	// Line 873, Address: 0x1d5e54, Func Offset: 0x2d4
	// Line 875, Address: 0x1d5e5c, Func Offset: 0x2dc
	// Line 878, Address: 0x1d5e60, Func Offset: 0x2e0
	// Line 880, Address: 0x1d5e68, Func Offset: 0x2e8
	// Line 882, Address: 0x1d5e70, Func Offset: 0x2f0
	// Line 883, Address: 0x1d5e78, Func Offset: 0x2f8
	// Line 886, Address: 0x1d5e80, Func Offset: 0x300
	// Line 889, Address: 0x1d5e98, Func Offset: 0x318
	// Line 890, Address: 0x1d5ea4, Func Offset: 0x324
	// Line 894, Address: 0x1d5eac, Func Offset: 0x32c
	// Line 898, Address: 0x1d5ebc, Func Offset: 0x33c
	// Line 901, Address: 0x1d5ec4, Func Offset: 0x344
	// Line 902, Address: 0x1d5ed4, Func Offset: 0x354
	// Line 905, Address: 0x1d5ed8, Func Offset: 0x358
	// Line 907, Address: 0x1d5ee0, Func Offset: 0x360
	// Line 908, Address: 0x1d5ef0, Func Offset: 0x370
	// Line 911, Address: 0x1d5ef8, Func Offset: 0x378
	// Line 914, Address: 0x1d5efc, Func Offset: 0x37c
	// Line 916, Address: 0x1d5f18, Func Offset: 0x398
	// Line 917, Address: 0x1d5f30, Func Offset: 0x3b0
	// Line 916, Address: 0x1d5f38, Func Offset: 0x3b8
	// Line 917, Address: 0x1d5f44, Func Offset: 0x3c4
	// Line 918, Address: 0x1d5f54, Func Offset: 0x3d4
	// Line 922, Address: 0x1d5f58, Func Offset: 0x3d8
	// Line 924, Address: 0x1d5f74, Func Offset: 0x3f4
	// Line 928, Address: 0x1d5f98, Func Offset: 0x418
	// Line 930, Address: 0x1d5fa0, Func Offset: 0x420
	// Line 931, Address: 0x1d5fa4, Func Offset: 0x424
	// Line 932, Address: 0x1d5fa8, Func Offset: 0x428
	// Line 933, Address: 0x1d5fbc, Func Offset: 0x43c
	// Line 935, Address: 0x1d5fc4, Func Offset: 0x444
	// Line 937, Address: 0x1d5fd8, Func Offset: 0x458
	// Line 939, Address: 0x1d5fdc, Func Offset: 0x45c
	// Line 940, Address: 0x1d5fe4, Func Offset: 0x464
	// Line 941, Address: 0x1d5fec, Func Offset: 0x46c
	// Line 945, Address: 0x1d5ff4, Func Offset: 0x474
	// Line 947, Address: 0x1d5ffc, Func Offset: 0x47c
	// Line 948, Address: 0x1d6018, Func Offset: 0x498
	// Line 947, Address: 0x1d6034, Func Offset: 0x4b4
	// Line 948, Address: 0x1d603c, Func Offset: 0x4bc
	// Line 947, Address: 0x1d6060, Func Offset: 0x4e0
	// Line 948, Address: 0x1d6068, Func Offset: 0x4e8
	// Line 947, Address: 0x1d608c, Func Offset: 0x50c
	// Line 948, Address: 0x1d6094, Func Offset: 0x514
	// Line 952, Address: 0x1d60a4, Func Offset: 0x524
	// Line 956, Address: 0x1d60b0, Func Offset: 0x530
	// Line 959, Address: 0x1d60d8, Func Offset: 0x558
	// Line 960, Address: 0x1d6120, Func Offset: 0x5a0
	// Line 963, Address: 0x1d6128, Func Offset: 0x5a8
	// Line 964, Address: 0x1d6138, Func Offset: 0x5b8
	// Line 967, Address: 0x1d6140, Func Offset: 0x5c0
	// Line 968, Address: 0x1d6150, Func Offset: 0x5d0
	// Line 975, Address: 0x1d6158, Func Offset: 0x5d8
	// Line 976, Address: 0x1d61f0, Func Offset: 0x670
	// Line 979, Address: 0x1d61f8, Func Offset: 0x678
	// Line 980, Address: 0x1d62d0, Func Offset: 0x750
	// Line 983, Address: 0x1d62d8, Func Offset: 0x758
	// Line 984, Address: 0x1d62ec, Func Offset: 0x76c
	// Line 987, Address: 0x1d62f4, Func Offset: 0x774
	// Line 988, Address: 0x1d6308, Func Offset: 0x788
	// Line 991, Address: 0x1d6310, Func Offset: 0x790
	// Line 992, Address: 0x1d6324, Func Offset: 0x7a4
	// Line 996, Address: 0x1d632c, Func Offset: 0x7ac
	// Line 997, Address: 0x1d64f8, Func Offset: 0x978
	// Line 1000, Address: 0x1d6500, Func Offset: 0x980
	// Line 1007, Address: 0x1d65cc, Func Offset: 0xa4c
	// Line 1010, Address: 0x1d65d4, Func Offset: 0xa54
	// Line 1018, Address: 0x1d65fc, Func Offset: 0xa7c
	// Line 1023, Address: 0x1d6600, Func Offset: 0xa80
	// Line 1025, Address: 0x1d66a0, Func Offset: 0xb20
	// Line 1032, Address: 0x1d66b0, Func Offset: 0xb30
	// Line 1033, Address: 0x1d66c8, Func Offset: 0xb48
	// Line 1036, Address: 0x1d66d4, Func Offset: 0xb54
	// Line 1038, Address: 0x1d66d8, Func Offset: 0xb58
	// Line 1039, Address: 0x1d66e0, Func Offset: 0xb60
	// Func End, Address: 0x1d6734, Func Offset: 0xbb4
}

// zParEmitterEmitCustom__FP12_zParEmitterfP26_zParEmitterCustomSettings
// Start address: 0x1d6740
xPar* zParEmitterEmitCustom(_zParEmitter* p, float32 dt, _zParEmitterCustomSettings* info)
{
	xPar* emitted_par;
	_zParEmitterCustomSettings* s;
	zParEmitterAsset* pe;
	uint32 flags;
	// Line 563, Address: 0x1d6740, Func Offset: 0
	// Line 567, Address: 0x1d6764, Func Offset: 0x24
	// Line 573, Address: 0x1d6768, Func Offset: 0x28
	// Line 569, Address: 0x1d676c, Func Offset: 0x2c
	// Line 576, Address: 0x1d677c, Func Offset: 0x3c
	// Line 579, Address: 0x1d6788, Func Offset: 0x48
	// Line 580, Address: 0x1d6790, Func Offset: 0x50
	// Line 581, Address: 0x1d6798, Func Offset: 0x58
	// Line 582, Address: 0x1d67a0, Func Offset: 0x60
	// Line 583, Address: 0x1d67a8, Func Offset: 0x68
	// Line 584, Address: 0x1d67c0, Func Offset: 0x80
	// Line 585, Address: 0x1d67d8, Func Offset: 0x98
	// Line 588, Address: 0x1d67e0, Func Offset: 0xa0
	// Line 589, Address: 0x1d67e8, Func Offset: 0xa8
	// Line 592, Address: 0x1d6820, Func Offset: 0xe0
	// Line 593, Address: 0x1d6828, Func Offset: 0xe8
	// Line 594, Address: 0x1d6830, Func Offset: 0xf0
	// Line 595, Address: 0x1d6838, Func Offset: 0xf8
	// Line 596, Address: 0x1d6840, Func Offset: 0x100
	// Line 597, Address: 0x1d6848, Func Offset: 0x108
	// Line 599, Address: 0x1d6850, Func Offset: 0x110
	// Line 600, Address: 0x1d6858, Func Offset: 0x118
	// Line 601, Address: 0x1d6860, Func Offset: 0x120
	// Line 602, Address: 0x1d6868, Func Offset: 0x128
	// Line 609, Address: 0x1d6870, Func Offset: 0x130
	// Line 610, Address: 0x1d687c, Func Offset: 0x13c
	// Line 612, Address: 0x1d6884, Func Offset: 0x144
	// Line 613, Address: 0x1d6890, Func Offset: 0x150
	// Line 615, Address: 0x1d6898, Func Offset: 0x158
	// Line 616, Address: 0x1d68a4, Func Offset: 0x164
	// Line 618, Address: 0x1d68ac, Func Offset: 0x16c
	// Line 619, Address: 0x1d68b4, Func Offset: 0x174
	// Line 621, Address: 0x1d68b8, Func Offset: 0x178
	// Line 622, Address: 0x1d68c0, Func Offset: 0x180
	// Line 623, Address: 0x1d68c8, Func Offset: 0x188
	// Line 626, Address: 0x1d68e0, Func Offset: 0x1a0
	// Line 627, Address: 0x1d68ec, Func Offset: 0x1ac
	// Line 629, Address: 0x1d6904, Func Offset: 0x1c4
	// Line 631, Address: 0x1d6910, Func Offset: 0x1d0
	// Line 632, Address: 0x1d6918, Func Offset: 0x1d8
	// Line 633, Address: 0x1d6920, Func Offset: 0x1e0
	// Line 636, Address: 0x1d6928, Func Offset: 0x1e8
	// Line 638, Address: 0x1d6938, Func Offset: 0x1f8
	// Line 642, Address: 0x1d6940, Func Offset: 0x200
	// Line 643, Address: 0x1d6948, Func Offset: 0x208
	// Line 645, Address: 0x1d6960, Func Offset: 0x220
	// Line 646, Address: 0x1d6968, Func Offset: 0x228
	// Line 649, Address: 0x1d6970, Func Offset: 0x230
	// Line 653, Address: 0x1d6978, Func Offset: 0x238
	// Line 657, Address: 0x1d6998, Func Offset: 0x258
	// Line 661, Address: 0x1d69a4, Func Offset: 0x264
	// Line 665, Address: 0x1d69c4, Func Offset: 0x284
	// Line 666, Address: 0x1d69d0, Func Offset: 0x290
	// Line 668, Address: 0x1d69d8, Func Offset: 0x298
	// Line 669, Address: 0x1d69e0, Func Offset: 0x2a0
	// Line 671, Address: 0x1d69e8, Func Offset: 0x2a8
	// Line 672, Address: 0x1d69f0, Func Offset: 0x2b0
	// Line 674, Address: 0x1d69f8, Func Offset: 0x2b8
	// Line 675, Address: 0x1d6a00, Func Offset: 0x2c0
	// Line 677, Address: 0x1d6a08, Func Offset: 0x2c8
	// Line 678, Address: 0x1d6a10, Func Offset: 0x2d0
	// Line 683, Address: 0x1d6a18, Func Offset: 0x2d8
	// Line 686, Address: 0x1d6a20, Func Offset: 0x2e0
	// Line 689, Address: 0x1d6a28, Func Offset: 0x2e8
	// Line 690, Address: 0x1d6a30, Func Offset: 0x2f0
	// Line 691, Address: 0x1d6a38, Func Offset: 0x2f8
	// Line 692, Address: 0x1d6a40, Func Offset: 0x300
	// Line 693, Address: 0x1d6a48, Func Offset: 0x308
	// Line 694, Address: 0x1d6a60, Func Offset: 0x320
	// Line 695, Address: 0x1d6a78, Func Offset: 0x338
	// Line 696, Address: 0x1d6a90, Func Offset: 0x350
	// Line 699, Address: 0x1d6a98, Func Offset: 0x358
	// Line 700, Address: 0x1d6aa0, Func Offset: 0x360
	// Line 703, Address: 0x1d6ad8, Func Offset: 0x398
	// Line 704, Address: 0x1d6ae0, Func Offset: 0x3a0
	// Line 705, Address: 0x1d6ae8, Func Offset: 0x3a8
	// Line 706, Address: 0x1d6af0, Func Offset: 0x3b0
	// Line 707, Address: 0x1d6af8, Func Offset: 0x3b8
	// Line 708, Address: 0x1d6b00, Func Offset: 0x3c0
	// Line 709, Address: 0x1d6b08, Func Offset: 0x3c8
	// Line 710, Address: 0x1d6b10, Func Offset: 0x3d0
	// Line 711, Address: 0x1d6b18, Func Offset: 0x3d8
	// Line 712, Address: 0x1d6b20, Func Offset: 0x3e0
	// Line 715, Address: 0x1d6b28, Func Offset: 0x3e8
	// Line 716, Address: 0x1d6b2c, Func Offset: 0x3ec
	// Func End, Address: 0x1d6b54, Func Offset: 0x414
}

// zParEmitterEmitSphereEdge__FP4xParP16zParEmitterAssetfi
// Start address: 0x1d6b60
void zParEmitterEmitSphereEdge(xPar* p, zParEmitterAsset* a, float32 dt, int32 subtype)
{
	_xMat3x3 mat_rot;
	_xVec3 offset;
	_xVec3 dirvec;
	// Line 445, Address: 0x1d6b60, Func Offset: 0
	// Line 449, Address: 0x1d6b74, Func Offset: 0x14
	// Line 445, Address: 0x1d6b78, Func Offset: 0x18
	// Line 449, Address: 0x1d6b7c, Func Offset: 0x1c
	// Line 450, Address: 0x1d6b8c, Func Offset: 0x2c
	// Line 449, Address: 0x1d6b9c, Func Offset: 0x3c
	// Line 450, Address: 0x1d6ba0, Func Offset: 0x40
	// Line 449, Address: 0x1d6ba4, Func Offset: 0x44
	// Line 450, Address: 0x1d6ba8, Func Offset: 0x48
	// Line 451, Address: 0x1d6bb0, Func Offset: 0x50
	// Line 458, Address: 0x1d6bb8, Func Offset: 0x58
	// Line 450, Address: 0x1d6bbc, Func Offset: 0x5c
	// Line 451, Address: 0x1d6bc4, Func Offset: 0x64
	// Line 455, Address: 0x1d6be0, Func Offset: 0x80
	// Line 456, Address: 0x1d6bf8, Func Offset: 0x98
	// Line 458, Address: 0x1d6c18, Func Offset: 0xb8
	// Line 461, Address: 0x1d6c3c, Func Offset: 0xdc
	// Line 462, Address: 0x1d6c8c, Func Offset: 0x12c
	// Line 464, Address: 0x1d6c94, Func Offset: 0x134
	// Line 465, Address: 0x1d6cd0, Func Offset: 0x170
	// Line 468, Address: 0x1d6cd8, Func Offset: 0x178
	// Line 476, Address: 0x1d6d30, Func Offset: 0x1d0
	// Line 479, Address: 0x1d6d40, Func Offset: 0x1e0
	// Line 480, Address: 0x1d6d60, Func Offset: 0x200
	// Line 483, Address: 0x1d6d6c, Func Offset: 0x20c
	// Line 487, Address: 0x1d6d74, Func Offset: 0x214
	// Line 480, Address: 0x1d6d7c, Func Offset: 0x21c
	// Line 483, Address: 0x1d6d9c, Func Offset: 0x23c
	// Line 484, Address: 0x1d6dc4, Func Offset: 0x264
	// Line 487, Address: 0x1d6df4, Func Offset: 0x294
	// Line 490, Address: 0x1d6ec8, Func Offset: 0x368
	// Func End, Address: 0x1d6ee4, Func Offset: 0x384
}

// zParEmitterEmitCircle__FP4xParP16zParEmitterAssetf
// Start address: 0x1d6ef0
void zParEmitterEmitCircle(xPar* p, zParEmitterAsset* a, float32 dt)
{
	float32 dt_radius;
	_xVec2 vec2;
	_xMat2x2 rot_mat;
	float32 st;
	float32 ct;
	float32 rot_amount;
	// Line 309, Address: 0x1d6ef0, Func Offset: 0
	// Line 313, Address: 0x1d6f1c, Func Offset: 0x2c
	// Line 314, Address: 0x1d6f40, Func Offset: 0x50
	// Line 317, Address: 0x1d6f60, Func Offset: 0x70
	// Line 320, Address: 0x1d6f78, Func Offset: 0x88
	// Line 321, Address: 0x1d6f80, Func Offset: 0x90
	// Line 322, Address: 0x1d6f8c, Func Offset: 0x9c
	// Line 323, Address: 0x1d6f9c, Func Offset: 0xac
	// Line 324, Address: 0x1d6fa0, Func Offset: 0xb0
	// Line 322, Address: 0x1d6fac, Func Offset: 0xbc
	// Line 323, Address: 0x1d6fb0, Func Offset: 0xc0
	// Line 324, Address: 0x1d6fb8, Func Offset: 0xc8
	// Line 328, Address: 0x1d6fc0, Func Offset: 0xd0
	// Line 329, Address: 0x1d6fc8, Func Offset: 0xd8
	// Line 336, Address: 0x1d6fd8, Func Offset: 0xe8
	// Line 329, Address: 0x1d6fdc, Func Offset: 0xec
	// Line 331, Address: 0x1d6fe4, Func Offset: 0xf4
	// Line 333, Address: 0x1d6ff4, Func Offset: 0x104
	// Line 332, Address: 0x1d6ff8, Func Offset: 0x108
	// Line 331, Address: 0x1d7000, Func Offset: 0x110
	// Line 333, Address: 0x1d7008, Func Offset: 0x118
	// Line 334, Address: 0x1d7010, Func Offset: 0x120
	// Line 332, Address: 0x1d7014, Func Offset: 0x124
	// Line 334, Address: 0x1d701c, Func Offset: 0x12c
	// Line 336, Address: 0x1d7024, Func Offset: 0x134
	// Line 340, Address: 0x1d70f8, Func Offset: 0x208
	// Line 342, Address: 0x1d7114, Func Offset: 0x224
	// Line 343, Address: 0x1d7118, Func Offset: 0x228
	// Line 342, Address: 0x1d711c, Func Offset: 0x22c
	// Line 343, Address: 0x1d7124, Func Offset: 0x234
	// Line 344, Address: 0x1d7130, Func Offset: 0x240
	// Line 346, Address: 0x1d7140, Func Offset: 0x250
	// Func End, Address: 0x1d7170, Func Offset: 0x280
}

// zParEmitterEmitCircleEdge__FP4xParP16zParEmitterAssetf
// Start address: 0x1d7170
void zParEmitterEmitCircleEdge(xPar* p, zParEmitterAsset* a, float32 dt)
{
	float32 dt_radius;
	_xVec2 vec2;
	_xMat2x2 rot_mat;
	float32 st;
	float32 ct;
	float32 rot_amount;
	// Line 262, Address: 0x1d7170, Func Offset: 0
	// Line 266, Address: 0x1d7194, Func Offset: 0x24
	// Line 267, Address: 0x1d71b8, Func Offset: 0x48
	// Line 270, Address: 0x1d71d8, Func Offset: 0x68
	// Line 273, Address: 0x1d71f0, Func Offset: 0x80
	// Line 274, Address: 0x1d71f8, Func Offset: 0x88
	// Line 275, Address: 0x1d7204, Func Offset: 0x94
	// Line 276, Address: 0x1d7214, Func Offset: 0xa4
	// Line 277, Address: 0x1d7218, Func Offset: 0xa8
	// Line 275, Address: 0x1d7224, Func Offset: 0xb4
	// Line 276, Address: 0x1d7228, Func Offset: 0xb8
	// Line 277, Address: 0x1d7230, Func Offset: 0xc0
	// Line 281, Address: 0x1d7238, Func Offset: 0xc8
	// Line 291, Address: 0x1d7240, Func Offset: 0xd0
	// Line 281, Address: 0x1d7244, Func Offset: 0xd4
	// Line 283, Address: 0x1d7248, Func Offset: 0xd8
	// Line 284, Address: 0x1d7258, Func Offset: 0xe8
	// Line 287, Address: 0x1d725c, Func Offset: 0xec
	// Line 285, Address: 0x1d7260, Func Offset: 0xf0
	// Line 283, Address: 0x1d7264, Func Offset: 0xf4
	// Line 285, Address: 0x1d7268, Func Offset: 0xf8
	// Line 283, Address: 0x1d726c, Func Offset: 0xfc
	// Line 284, Address: 0x1d7270, Func Offset: 0x100
	// Line 287, Address: 0x1d7274, Func Offset: 0x104
	// Line 285, Address: 0x1d7278, Func Offset: 0x108
	// Line 287, Address: 0x1d727c, Func Offset: 0x10c
	// Line 285, Address: 0x1d7280, Func Offset: 0x110
	// Line 288, Address: 0x1d7284, Func Offset: 0x114
	// Line 286, Address: 0x1d7288, Func Offset: 0x118
	// Line 288, Address: 0x1d728c, Func Offset: 0x11c
	// Line 291, Address: 0x1d7294, Func Offset: 0x124
	// Line 295, Address: 0x1d7368, Func Offset: 0x1f8
	// Line 297, Address: 0x1d7384, Func Offset: 0x214
	// Line 298, Address: 0x1d7388, Func Offset: 0x218
	// Line 297, Address: 0x1d738c, Func Offset: 0x21c
	// Line 298, Address: 0x1d7394, Func Offset: 0x224
	// Line 299, Address: 0x1d73a0, Func Offset: 0x230
	// Line 301, Address: 0x1d73b0, Func Offset: 0x240
	// Func End, Address: 0x1d73d8, Func Offset: 0x268
}

// zParEmitterAngleVariation__FP4xParP16zParEmitterAsset
// Start address: 0x1d73e0
void zParEmitterAngleVariation(xPar* p, zParEmitterAsset* a)
{
	float32 ang[3];
	float32 ang_debrisCone;
	_xMat3x3 mat_rot;
	// Line 219, Address: 0x1d73e0, Func Offset: 0
	// Line 220, Address: 0x1d73f4, Func Offset: 0x14
	// Line 222, Address: 0x1d7410, Func Offset: 0x30
	// Line 225, Address: 0x1d7428, Func Offset: 0x48
	// Line 222, Address: 0x1d742c, Func Offset: 0x4c
	// Line 225, Address: 0x1d7430, Func Offset: 0x50
	// Line 222, Address: 0x1d7434, Func Offset: 0x54
	// Line 225, Address: 0x1d743c, Func Offset: 0x5c
	// Line 224, Address: 0x1d7440, Func Offset: 0x60
	// Line 225, Address: 0x1d7444, Func Offset: 0x64
	// Line 231, Address: 0x1d7450, Func Offset: 0x70
	// Line 232, Address: 0x1d746c, Func Offset: 0x8c
	// Line 233, Address: 0x1d7488, Func Offset: 0xa8
	// Line 235, Address: 0x1d74ac, Func Offset: 0xcc
	// Line 237, Address: 0x1d74c0, Func Offset: 0xe0
	// Line 239, Address: 0x1d74d0, Func Offset: 0xf0
	// Func End, Address: 0x1d74e8, Func Offset: 0x108
}

// zParEmitterEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1d74f0
int32 zParEmitterEventCB(xBase* to, uint32 toEvent)
{
	_zParEmitterCustomSettings fake_settings;
	_zParEmitter* t;
	// Line 178, Address: 0x1d74f0, Func Offset: 0
	// Line 185, Address: 0x1d74fc, Func Offset: 0xc
	// Line 189, Address: 0x1d752c, Func Offset: 0x3c
	// Line 190, Address: 0x1d754c, Func Offset: 0x5c
	// Line 193, Address: 0x1d7554, Func Offset: 0x64
	// Line 194, Address: 0x1d755c, Func Offset: 0x6c
	// Line 197, Address: 0x1d7564, Func Offset: 0x74
	// Line 198, Address: 0x1d7574, Func Offset: 0x84
	// Line 203, Address: 0x1d757c, Func Offset: 0x8c
	// Line 204, Address: 0x1d758c, Func Offset: 0x9c
	// Line 210, Address: 0x1d75a4, Func Offset: 0xb4
	// Line 209, Address: 0x1d75ac, Func Offset: 0xbc
	// Line 210, Address: 0x1d75b0, Func Offset: 0xc0
	// Func End, Address: 0x1d75b8, Func Offset: 0xc8
}

// zParEmitterSetup__FP12_zParEmitter
// Start address: 0x1d75c0
void zParEmitterSetup(_zParEmitter* t)
{
	// Line 105, Address: 0x1d75c0, Func Offset: 0
	// Line 107, Address: 0x1d75cc, Func Offset: 0xc
	// Line 113, Address: 0x1d75d4, Func Offset: 0x14
	// Func End, Address: 0x1d75dc, Func Offset: 0x1c
}

// zParEmitterInit__FP5xBaseP16zParEmitterAsset
// Start address: 0x1d75e0
void zParEmitterInit(xBase* b, zParEmitterAsset* tasset)
{
	_xEnt* ent;
	_zParEmitter* t;
	// Line 55, Address: 0x1d75e0, Func Offset: 0
	// Line 57, Address: 0x1d75f4, Func Offset: 0x14
	// Line 63, Address: 0x1d75fc, Func Offset: 0x1c
	// Line 64, Address: 0x1d7608, Func Offset: 0x28
	// Line 66, Address: 0x1d760c, Func Offset: 0x2c
	// Line 67, Address: 0x1d7618, Func Offset: 0x38
	// Line 69, Address: 0x1d7628, Func Offset: 0x48
	// Line 72, Address: 0x1d762c, Func Offset: 0x4c
	// Line 73, Address: 0x1d7634, Func Offset: 0x54
	// Line 77, Address: 0x1d763c, Func Offset: 0x5c
	// Line 80, Address: 0x1d7658, Func Offset: 0x78
	// Line 83, Address: 0x1d7660, Func Offset: 0x80
	// Line 90, Address: 0x1d767c, Func Offset: 0x9c
	// Line 91, Address: 0x1d7698, Func Offset: 0xb8
	// Line 94, Address: 0x1d76b4, Func Offset: 0xd4
	// Line 95, Address: 0x1d76c4, Func Offset: 0xe4
	// Line 96, Address: 0x1d76cc, Func Offset: 0xec
	// Line 97, Address: 0x1d76d4, Func Offset: 0xf4
	// Line 99, Address: 0x1d76d8, Func Offset: 0xf8
	// Func End, Address: 0x1d76ec, Func Offset: 0x10c
}

// zParEmitterInit__FPvPv
// Start address: 0x1d76f0
void zParEmitterInit(void* b, void* tasset)
{
	// Line 52, Address: 0x1d76f0, Func Offset: 0
	// Func End, Address: 0x1d76f8, Func Offset: 0x8
}

