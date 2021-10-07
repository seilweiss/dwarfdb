typedef struct _tagEmitCircle;
typedef struct RwMatrixTag;
typedef struct RxClusterDefinition;
typedef struct _zEntPickup;
typedef struct RwTexture;
typedef struct _xEnt;
typedef struct zGlobalGameStats;
typedef struct _xScene;
typedef struct rxHeapFreeBlock;
typedef struct xAnimState;
typedef struct _zEntHangable;
typedef struct _zParEmitter;
typedef struct p2EntAsset;
typedef struct _xEnv;
typedef struct RwRaster;
typedef struct RxNodeMethods;
typedef struct _tagxRumble;
typedef struct _xMat4x3;
typedef enum _tagGiveFXType;
typedef struct rxReq;
typedef struct xBase;
typedef struct _xVec3;
typedef struct RpAtomic;
typedef struct _zCounter;
typedef struct RwTexDictionary;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTable;
typedef struct xCutscene;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct zEntPickupWarpPoint;
typedef struct RwFrame;
typedef struct RxNodeDefinition;
typedef struct RwRGBA;
typedef struct xModelPool;
typedef struct xAnimEffect;
typedef struct _tagxCamPath;
typedef struct zJumpParam;
typedef struct xCutsceneInfo;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct _xBound;
typedef struct RpCollSector;
typedef struct RxHeap;
typedef struct _tagp2CamStaticAsset;
typedef struct _tagxCam;
typedef struct _zUI;
typedef struct xCutsceneData;
typedef struct xModelInstance;
typedef struct _xEntFrame;
typedef struct RxCluster;
typedef struct xAnimActiveEffect;
typedef struct RpMeshHeader;
typedef struct _tagEmitSphere;
typedef struct zUIAsset;
typedef struct RpMaterial;
typedef struct xSerial;
typedef struct zGlobals;
typedef struct RxClusterRef;
typedef struct rxHeapBlockHeader;
typedef struct RwResEntry;
typedef struct zCounterAsset;
typedef struct xAnimPlay;
typedef struct zPortalAsset;
typedef struct p2EntHangableAsset;
typedef enum RxClusterValidityReq;
typedef struct RpMorphTarget;
typedef struct RxPipelineCluster;
typedef struct xCutsceneBreak;
typedef struct _zEnt;
typedef struct _tagxPad;
typedef struct RwSphere;
typedef struct xCutsceneTime;
typedef struct RxPipeline;
typedef struct zScene;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimFile;
typedef struct RxPacket;
typedef struct _iCollis;
typedef struct iEnv;
typedef struct zAssetPickupTable;
typedef struct _xEntCollis;
typedef struct _xEntDrive;
typedef struct xAnimTransitionList;
typedef struct RpWorldSector;
typedef struct _tagCamInfo;
typedef struct _xSphere;
typedef struct _tagp2CamStaticFollowAsset;
typedef enum RwTextureAddressMode;
typedef enum _tagRumbleType;
typedef struct _tagEmitRect;
typedef struct RpWorld;
typedef struct RxPipelineNode;
typedef struct _xQuat;
typedef struct zPlayerStatic;
typedef struct _zCutsceneMgr;
typedef struct _zPortal;
typedef struct xAnimTransition;
typedef struct p2EntPickupAsset;
typedef struct RpPolygon;
typedef struct RpClump;
typedef struct zCutsceneZbuffer;
typedef struct _tagxCamFollow;
typedef struct RwV3d;
typedef struct RxPipelineNodeParam;
typedef struct zParEmitterAsset;
typedef struct _xCylinder;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpLight;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct xParGroup;
typedef struct _xCollis;
typedef struct _zPlatform;
typedef struct p2LinkAsset;
typedef struct zAssetPickup;
typedef struct _xBox;
typedef struct xMemPool;
typedef struct xParCmdTex;
typedef struct _tagxCamPathAsset;
typedef struct _tagEmitLine;
typedef struct RwLLLink;
typedef struct RwRGBAReal;
typedef struct tag_xFile;
typedef enum RwCameraProjection;
typedef struct iFogParams;
typedef struct sceCdlFILE;
typedef struct zCutsceneZbufferHack;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct tag_iFile;
typedef struct _tagxCamShoulder;
typedef struct xPar;
typedef struct xSurface;
typedef enum RwTextureFilterMode;
typedef struct _tagKeyShake;
typedef struct xParCmdAsset;
typedef struct xQCData;
typedef struct _tagEmitVolume;
typedef struct RwObject;
typedef struct RpSector;
typedef struct _tagxCamFollowAsset;
typedef enum RxClusterValid;
typedef struct xFFX;
typedef struct xCamAsset;
typedef struct zCutsceneMgrAsset;
typedef struct RpGeometry;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct zPlayerGlobals;
typedef struct _xBBox;
typedef struct RwPlane;
typedef enum _tagCamType;
typedef struct RwCamera;
typedef struct _xEntShadow;
typedef struct RwLinkList;
typedef struct RpMaterialList;
typedef struct _tagEmitOffsetPoint;
typedef struct _tagxCamStatic;
typedef enum _tagPadState;
typedef struct iModelTag;
typedef struct _tagiPad;
typedef enum RwFogType;
typedef struct _tagxCamFrame;
typedef struct p2BaseAsset;
typedef struct RwFrustumPlane;
typedef struct zShaggy1Globals;
typedef struct _tagxCamShoulderAsset;
typedef enum RxClusterForcePresent;
typedef struct _xVec4;
typedef enum _tagTransType;
typedef struct RwBBox;
typedef struct _zParEmitterCustomSettings;
typedef struct _tagPadAnalog;
typedef struct _tagxCamStaticFollow;
typedef enum RxNodeDefEditable;
typedef struct zCheckPoint;
typedef struct _xRot;
typedef struct iShadowCache;
typedef struct RxIoSpec;

typedef uint32(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_8)(RwCamera*);
typedef RwCamera*(*type_12)(RwCamera*);
typedef void(*type_13)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef xBase*(*type_20)(uint32);
typedef void(*type_21)(_xEnt*, _xScene*, float32);
typedef int8*(*type_23)(xBase*);
typedef void(*type_25)(_xEnt*);
typedef int8*(*type_26)(uint32);
typedef void(*type_27)(_xEnt*);
typedef void(*type_28)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_32)(_xEnt*, _xVec3*);
typedef int32(*type_33)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_38)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_43)(RxNodeDefinition*);
typedef RpClump*(*type_46)(RpClump*, void*);
typedef void(*type_52)(RxNodeDefinition*);
typedef int32(*type_56)(RxPipelineNode*);
typedef void(*type_57)(xMemPool*, void*);
typedef void(*type_59)(void*, xParGroup*);
typedef RpWorldSector*(*type_60)(RpWorldSector*);
typedef void(*type_62)(int32);
typedef void(*type_63)(_xEnt*, _xVec3*);
typedef void(*type_65)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_70)(RwObjectHasFrame*);
typedef int32(*type_76)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_80)(RpAtomic*);
typedef uint32(*type_91)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_95)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_104)(RwResEntry*);
typedef int32(*type_107)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_115)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_121)(_zEntPickup*, _xScene*, float32);

typedef float32 type_1[2];
typedef uint16 type_2[3];
typedef _xVec3 type_3[4];
typedef uint8 type_4[4];
typedef uint8 type_5[4];
typedef float32 type_6[2];
typedef int8 type_7[32];
typedef uint8 type_9[3];
typedef RwTexCoords* type_10[8];
typedef int8 type_11[32];
typedef uint8 type_14[3];
typedef zEntPickupWarpPoint type_15[27];
typedef uint8 type_16[22];
typedef iModelTag type_17[4];
typedef uint32 type_18[2];
typedef uint8 type_19[22];
typedef int8 type_22[16];
typedef uint8 type_24[3];
typedef int8 type_29[128];
typedef int8 type_30[128][6];
typedef int8 type_31[64];
typedef RwFrustumPlane type_34[6];
typedef RpLight* type_35[2];
typedef float32 type_36[4];
typedef uint8 type_37[4];
typedef float32 type_39[4];
typedef RwTexCoords* type_40[8];
typedef float32 type_41[4];
typedef RwFrame* type_42[2];
typedef RwV3d type_44[8];
typedef uint8 type_45[4];
typedef uint8 type_47[3];
typedef float32 type_48[4];
typedef float32 type_49[4];
typedef int8 type_50[32];
typedef float32 type_51[4];
typedef uint8 type_53[3];
typedef uint8 type_54[2];
typedef float32 type_55[4];
typedef float32 type_58[3];
typedef float32 type_61[3];
typedef uint8 type_64[2];
typedef zGlobalGameStats type_66[30];
typedef zCutsceneZbuffer type_67[4];
typedef int8 type_68[16];
typedef float32 type_69[4];
typedef zGlobalGameStats type_71[13];
typedef uint8 type_72[8];
typedef _zEnt* type_73[10];
typedef uint32 type_74[1];
typedef _xVec3 type_75[2];
typedef zGlobalGameStats type_77[4];
typedef int8 type_78[128];
typedef int32 type_79[2];
typedef _xCollis type_81[18];
typedef _xQuat type_82[2];
typedef uint32 type_83[2];
typedef int32 type_84[2];
typedef uint32 type_85[2];
typedef RxCluster type_86[1];
typedef uint32 type_87[43];
typedef uint32 type_88[2];
typedef uint16 type_89[2];
typedef uint8 type_90[4];
typedef uint8 type_92[8];
typedef xBase* type_93[43];
typedef uint32 type_94[4];
typedef float32 type_96[2];
typedef uint8 type_97[8];
typedef float32 type_98[2];
typedef uint8 type_99[8];
typedef float32 type_100[2];
typedef int8 type_101[16];
typedef uint8 type_102[8];
typedef float32 type_103[2];
typedef int8 type_105[16];
typedef int8 type_106[64];
typedef _tagKeyShake type_108[4];
typedef uint8 type_109[2];
typedef uint32 type_110[2];
typedef uint8 type_111[3];
typedef uint8 type_112[2];
typedef uint8 type_113[3];
typedef float32 type_114[4];
typedef uint8 type_116[3];
typedef float32 type_117[4];
typedef float32 type_118[15];
typedef float32 type_119[15];
typedef _xVec4 type_120[8];
typedef uint16 type_122[3];
typedef uint32 type_123[15];

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _zEntPickup : _zEnt
{
	uint32 state;
	zAssetPickup* p;
	void* anim;
	float32 animTime;
	float32 timer;
	float32 shake_timer;
	_xVec3 shake_pos;
	int32 snackGateInfoDisplayed;
	float32 fx_timer;
	xPar* fx_par;
	_zParEmitter* fx_emit;
	float32 fx_scale;
	_xVec3 grab_pos;
	uint32 flyflags;
	int32 flg_opts;
	_xVec3 vel;
	_xVec3 droppos;
	xBase* followTarget;
	_xVec3 followOffset;
	xBase* dropParent;
	_xEnt* useThisEntPos;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

enum _tagGiveFXType
{
	GFXT_Unknown,
	GFXT_None,
	GFXT_Crumbs,
	GFXT_Mmmm,
	GFXT_QMark,
	GFXT_Gum,
	GFXT_Bubbles,
	GFXT_Ghost,
	GFXT_SDLogo,
	GFXT_PowerupSpecial
};

struct rxReq
{
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

struct _zCounter : xBase
{
	zCounterAsset* asset;
	int16 count;
	uint8 state;
	uint8 pad;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct zEntPickupWarpPoint
{
	int32 id;
	uint32 status;
	uint32 sceneID;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct _zUI : _zEnt
{
	zUIAsset* sasset;
	uint32 uiFlags;
	uint32 uiButton;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _tagEmitSphere
{
	float32 radius;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct zCounterAsset : p2BaseAsset
{
	int16 count;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct _iCollis
{
	int32 unknown;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _tagp2CamStaticFollowAsset
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct p2EntPickupAsset
{
	uint32 pickupHash;
	uint16 pickupFlags;
	uint16 pickupValue;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct _zPlatform
{
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

struct zAssetPickup
{
	uint32 pickupHash;
	uint8 pickupType;
	uint8 pickupIndex;
	uint16 pickupFlags;
	uint32 quantity;
	uint32 modelID;
	uint32 animID;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct _tagKeyShake
{
	_xVec3 orig_pos;
	float32 shake_timer;
	float32 shake_it;
	_zUI* ui;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RpSector
{
	int32 type;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
};

struct _tagxCamStatic
{
	uint32 unused;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _tagiPad
{
	int32 port;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

float32 sKeysOffTimer;
int32 zHudShowSnackGateInfo;
int32 sKeyCounterEnabledBeforeGive;
_tagKeyShake sKeyShake[4];
_xEntFrame gPickupFrame;
_xEntCollis gPickupCollis;
_zParEmitter* sEmitGlow;
_zParEmitter* sEmitMmm;
_zParEmitter* sEmitQMark;
_zParEmitter* sEmitBubble;
_zParEmitter* sEmitGum;
_zParEmitter* sEmitOdour;
_zParEmitter* sEmitGrabPowerup;
_zParEmitter* sEmitGrabCrumb;
_zParEmitter* sEmitGrabSnackBox;
_zParEmitter* sEmitGrabMmm;
_zParEmitter* sEmitGrabQMark;
_zParEmitter* sEmitGrabGum;
_zParEmitter* sEmitGrabBubbles;
_zParEmitter* sEmitLoveHart;
_zParEmitter* sEmitAkmalDaisy;
_zParEmitter* sEmitGrabGhost;
_zParEmitter* sEmitGrabSDLogo;
_zParEmitter* sEmitWarpGate;
_zParEmitter* sEmitMiniVanPuff;
_zCounter* keyCounter;
int32 zHudShowWarpGateInfo;
zEntPickupWarpPoint zWarpPointTable[27];
_zParEmitter* sEmitDust;
zGlobals globals;
uint8* giAnimScratch;
_xEnt* sDecrementSnackGateEnt;
int32(*zEntPickupEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntPickup_Update)(_zEntPickup*, _xScene*, float32);

void zEntPickup_SceneUpdate(float32 dt);
void zEntPickup_ShowKeyCnt(uint32 collected, uint32 total);
void zEntPickupResetWarps();
void zEntPickupCheat_allWarps();
void zEntPickup_UnlockSnackGate(_xEnt* ent);
uint32 zEntPickup_lastSnackInArea();
void zEntPickup_UpdateFlyToInterface(_zEntPickup* ent, uint32 pcount, float32 dt);
uint32 zEntPickup_WarpIsOpen(uint32 index);
void enableWarpPoint(uint32 index);
void zEntPickup_GiveFX(_zEntPickup* ent);
void zEntPickup_RenderList(_zEntPickup* plist, uint32 pcount);
void zEntPickup_PlaySound(_zEntPickup* ent);
void zEntPickup_UpdateFX(_zEntPickup* ent, float32 dt);
void zEntPickup_Drop(_zEntPickup* ent);
void zEntPickup_MakeDroppable(_zEntPickup* ent, _xVec3* pos, xBase* parent);
void zEntPickup_Load(_zEntPickup* ent, xSerial* s);
void zEntPickup_Save(_zEntPickup* ent, xSerial* s);
void zEntPickup_Reset(_zEntPickup* ent);
void zEntPickup_hideSnackGateInfo(_zEntPickup* ent);
void zEntPickup_Update(_zEntPickup* ent, _xScene* sc, float32 dt);
void zEntPickup_FlyToInterface(_zEntPickup* ent);
int32 zPickup_Give(_zEntPickup* ent, zAssetPickup* p, uint16 value);
int32 zEntPickupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget);
void zEntPickup_Setup();
void zEntPickup_Setup(_zEntPickup* p);
void zEntPickupInit(_zEntPickup* ent, p2EntAsset* asset);
void zEntPickupInit(void* ent, void* asset);
void PickupFallPhysics(_zEntPickup* ent, _xScene* sc, float32 dt);

// zEntPickup_SceneUpdate__Ff
// Start address: 0x18ed10
void zEntPickup_SceneUpdate(float32 dt)
{
	// Line 2356, Address: 0x18ed10, Func Offset: 0
	// Line 2357, Address: 0x18ed18, Func Offset: 0x8
	// Func End, Address: 0x18ed20, Func Offset: 0x10
}

// zEntPickup_ShowKeyCnt__FUiUi
// Start address: 0x18ed20
void zEntPickup_ShowKeyCnt(uint32 collected, uint32 total)
{
	int32 i;
	int8 s[64];
	// Line 2315, Address: 0x18ed20, Func Offset: 0
	// Line 2318, Address: 0x18ed3c, Func Offset: 0x1c
	// Line 2320, Address: 0x18ed44, Func Offset: 0x24
	// Line 2323, Address: 0x18ed4c, Func Offset: 0x2c
	// Line 2324, Address: 0x18ed60, Func Offset: 0x40
	// Line 2325, Address: 0x18ed6c, Func Offset: 0x4c
	// Line 2326, Address: 0x18ed80, Func Offset: 0x60
	// Line 2328, Address: 0x18ed8c, Func Offset: 0x6c
	// Line 2332, Address: 0x18ed94, Func Offset: 0x74
	// Line 2333, Address: 0x18eda8, Func Offset: 0x88
	// Line 2334, Address: 0x18edb4, Func Offset: 0x94
	// Line 2335, Address: 0x18edc8, Func Offset: 0xa8
	// Line 2337, Address: 0x18edd4, Func Offset: 0xb4
	// Line 2338, Address: 0x18edd8, Func Offset: 0xb8
	// Line 2340, Address: 0x18edec, Func Offset: 0xcc
	// Line 2343, Address: 0x18edf4, Func Offset: 0xd4
	// Line 2347, Address: 0x18edf8, Func Offset: 0xd8
	// Func End, Address: 0x18ee10, Func Offset: 0xf0
}

// zEntPickupResetWarps__Fv
// Start address: 0x18ee10
void zEntPickupResetWarps()
{
	uint32 i;
	// Line 2305, Address: 0x18ee18, Func Offset: 0x8
	// Line 2307, Address: 0x18ee20, Func Offset: 0x10
	// Line 2308, Address: 0x18ee6c, Func Offset: 0x5c
	// Line 2307, Address: 0x18ee70, Func Offset: 0x60
	// Line 2308, Address: 0x18ee74, Func Offset: 0x64
	// Line 2307, Address: 0x18ee78, Func Offset: 0x68
	// Line 2308, Address: 0x18ee7c, Func Offset: 0x6c
	// Line 2310, Address: 0x18ee88, Func Offset: 0x78
	// Line 2312, Address: 0x18ee8c, Func Offset: 0x7c
	// Func End, Address: 0x18ee94, Func Offset: 0x84
}

// zEntPickupCheat_allWarps__Fv
// Start address: 0x18eea0
void zEntPickupCheat_allWarps()
{
	uint32 i;
	// Line 2297, Address: 0x18eea8, Func Offset: 0x8
	// Line 2299, Address: 0x18eeb0, Func Offset: 0x10
	// Line 2300, Address: 0x18ef00, Func Offset: 0x60
	// Line 2299, Address: 0x18ef04, Func Offset: 0x64
	// Line 2300, Address: 0x18ef08, Func Offset: 0x68
	// Line 2299, Address: 0x18ef0c, Func Offset: 0x6c
	// Line 2300, Address: 0x18ef10, Func Offset: 0x70
	// Line 2301, Address: 0x18ef20, Func Offset: 0x80
	// Func End, Address: 0x18ef28, Func Offset: 0x88
}

// zEntPickup_UnlockSnackGate__FP5_xEnt
// Start address: 0x18ef30
void zEntPickup_UnlockSnackGate(_xEnt* ent)
{
	_zParEmitterCustomSettings info;
	_zEntPickup* pickup;
	// Line 2266, Address: 0x18ef30, Func Offset: 0
	// Line 2268, Address: 0x18ef40, Func Offset: 0x10
	// Line 2273, Address: 0x18ef4c, Func Offset: 0x1c
	// Line 2268, Address: 0x18ef54, Func Offset: 0x24
	// Line 2273, Address: 0x18ef5c, Func Offset: 0x2c
	// Line 2275, Address: 0x18ef64, Func Offset: 0x34
	// Line 2277, Address: 0x18ef8c, Func Offset: 0x5c
	// Line 2280, Address: 0x18efbc, Func Offset: 0x8c
	// Line 2283, Address: 0x18efcc, Func Offset: 0x9c
	// Line 2284, Address: 0x18efd0, Func Offset: 0xa0
	// Line 2285, Address: 0x18efe0, Func Offset: 0xb0
	// Line 2284, Address: 0x18efec, Func Offset: 0xbc
	// Line 2285, Address: 0x18f000, Func Offset: 0xd0
	// Line 2289, Address: 0x18f00c, Func Offset: 0xdc
	// Line 2292, Address: 0x18f01c, Func Offset: 0xec
	// Line 2293, Address: 0x18f024, Func Offset: 0xf4
	// Func End, Address: 0x18f038, Func Offset: 0x108
}

// zEntPickup_lastSnackInArea__Fv
// Start address: 0x18f040
uint32 zEntPickup_lastSnackInArea()
{
	// Line 2256, Address: 0x18f040, Func Offset: 0
	// Line 2258, Address: 0x18f04c, Func Offset: 0xc
	// Line 2262, Address: 0x18f074, Func Offset: 0x34
	// Line 2258, Address: 0x18f07c, Func Offset: 0x3c
	// Line 2262, Address: 0x18f084, Func Offset: 0x44
	// Func End, Address: 0x18f08c, Func Offset: 0x4c
}

// zEntPickup_UpdateFlyToInterface__FP11_zEntPickupUif
// Start address: 0x18f090
void zEntPickup_UpdateFlyToInterface(_zEntPickup* ent, uint32 pcount, float32 dt)
{
	float32 ydist;
	float32 xdist;
	_xVec3* ent_pos;
	int32 i;
	// Line 2201, Address: 0x18f090, Func Offset: 0
	// Line 2203, Address: 0x18f0bc, Func Offset: 0x2c
	// Line 2205, Address: 0x18f0c4, Func Offset: 0x34
	// Line 2207, Address: 0x18f0e4, Func Offset: 0x54
	// Line 2208, Address: 0x18f0ec, Func Offset: 0x5c
	// Line 2209, Address: 0x18f0f0, Func Offset: 0x60
	// Line 2210, Address: 0x18f0f4, Func Offset: 0x64
	// Line 2217, Address: 0x18f104, Func Offset: 0x74
	// Line 2219, Address: 0x18f10c, Func Offset: 0x7c
	// Line 2221, Address: 0x18f128, Func Offset: 0x98
	// Line 2222, Address: 0x18f12c, Func Offset: 0x9c
	// Line 2223, Address: 0x18f13c, Func Offset: 0xac
	// Line 2225, Address: 0x18f140, Func Offset: 0xb0
	// Line 2236, Address: 0x18f14c, Func Offset: 0xbc
	// Line 2227, Address: 0x18f158, Func Offset: 0xc8
	// Line 2236, Address: 0x18f15c, Func Offset: 0xcc
	// Line 2227, Address: 0x18f168, Func Offset: 0xd8
	// Line 2236, Address: 0x18f16c, Func Offset: 0xdc
	// Line 2239, Address: 0x18f170, Func Offset: 0xe0
	// Line 2240, Address: 0x18f184, Func Offset: 0xf4
	// Line 2243, Address: 0x18f188, Func Offset: 0xf8
	// Line 2244, Address: 0x18f194, Func Offset: 0x104
	// Line 2247, Address: 0x18f1a0, Func Offset: 0x110
	// Line 2248, Address: 0x18f1b0, Func Offset: 0x120
	// Func End, Address: 0x18f1d4, Func Offset: 0x144
}

// zEntPickup_WarpIsOpen__FUi
// Start address: 0x18f1e0
uint32 zEntPickup_WarpIsOpen(uint32 index)
{
	// Line 2190, Address: 0x18f1e0, Func Offset: 0
	// Line 2191, Address: 0x18f1f8, Func Offset: 0x18
	// Func End, Address: 0x18f200, Func Offset: 0x20
}

// enableWarpPoint__FUi
// Start address: 0x18f200
void enableWarpPoint(uint32 index)
{
	// Line 2185, Address: 0x18f200, Func Offset: 0
	// Line 2186, Address: 0x18f21c, Func Offset: 0x1c
	// Func End, Address: 0x18f224, Func Offset: 0x24
}

// zEntPickup_GiveFX__FP11_zEntPickup
// Start address: 0x18f230
void zEntPickup_GiveFX(_zEntPickup* ent)
{
	_zParEmitterCustomSettings info;
	_zParEmitterCustomSettings info;
	_tagGiveFXType type;
	int32 pickup_idx;
	int32 pickup_type;
	int32 kill_glow;
	// Line 2005, Address: 0x18f230, Func Offset: 0
	// Line 2007, Address: 0x18f250, Func Offset: 0x20
	// Line 2011, Address: 0x18f254, Func Offset: 0x24
	// Line 2007, Address: 0x18f25c, Func Offset: 0x2c
	// Line 2008, Address: 0x18f260, Func Offset: 0x30
	// Line 2011, Address: 0x18f264, Func Offset: 0x34
	// Line 2013, Address: 0x18f278, Func Offset: 0x48
	// Line 2016, Address: 0x18f2a8, Func Offset: 0x78
	// Line 2021, Address: 0x18f2ac, Func Offset: 0x7c
	// Line 2016, Address: 0x18f2b0, Func Offset: 0x80
	// Line 2018, Address: 0x18f2b4, Func Offset: 0x84
	// Line 2016, Address: 0x18f2b8, Func Offset: 0x88
	// Line 2021, Address: 0x18f2bc, Func Offset: 0x8c
	// Line 2023, Address: 0x18f2c4, Func Offset: 0x94
	// Line 2028, Address: 0x18f2ec, Func Offset: 0xbc
	// Line 2032, Address: 0x18f2f4, Func Offset: 0xc4
	// Line 2036, Address: 0x18f2fc, Func Offset: 0xcc
	// Line 2040, Address: 0x18f304, Func Offset: 0xd4
	// Line 2044, Address: 0x18f30c, Func Offset: 0xdc
	// Line 2046, Address: 0x18f310, Func Offset: 0xe0
	// Line 2051, Address: 0x18f318, Func Offset: 0xe8
	// Line 2061, Address: 0x18f320, Func Offset: 0xf0
	// Line 2062, Address: 0x18f328, Func Offset: 0xf8
	// Line 2066, Address: 0x18f334, Func Offset: 0x104
	// Line 2067, Address: 0x18f33c, Func Offset: 0x10c
	// Line 2070, Address: 0x18f34c, Func Offset: 0x11c
	// Line 2071, Address: 0x18f354, Func Offset: 0x124
	// Line 2085, Address: 0x18f35c, Func Offset: 0x12c
	// Line 2086, Address: 0x18f364, Func Offset: 0x134
	// Line 2088, Address: 0x18f378, Func Offset: 0x148
	// Line 2090, Address: 0x18f388, Func Offset: 0x158
	// Line 2093, Address: 0x18f394, Func Offset: 0x164
	// Line 2094, Address: 0x18f39c, Func Offset: 0x16c
	// Line 2095, Address: 0x18f3a0, Func Offset: 0x170
	// Line 2094, Address: 0x18f3b4, Func Offset: 0x184
	// Line 2095, Address: 0x18f3cc, Func Offset: 0x19c
	// Line 2097, Address: 0x18f3d4, Func Offset: 0x1a4
	// Line 2101, Address: 0x18f3dc, Func Offset: 0x1ac
	// Line 2114, Address: 0x18f3fc, Func Offset: 0x1cc
	// Line 2116, Address: 0x18f408, Func Offset: 0x1d8
	// Line 2118, Address: 0x18f41c, Func Offset: 0x1ec
	// Line 2120, Address: 0x18f424, Func Offset: 0x1f4
	// Line 2122, Address: 0x18f430, Func Offset: 0x200
	// Line 2124, Address: 0x18f444, Func Offset: 0x214
	// Line 2126, Address: 0x18f44c, Func Offset: 0x21c
	// Line 2128, Address: 0x18f458, Func Offset: 0x228
	// Line 2130, Address: 0x18f46c, Func Offset: 0x23c
	// Line 2132, Address: 0x18f474, Func Offset: 0x244
	// Line 2134, Address: 0x18f480, Func Offset: 0x250
	// Line 2136, Address: 0x18f494, Func Offset: 0x264
	// Line 2138, Address: 0x18f49c, Func Offset: 0x26c
	// Line 2140, Address: 0x18f4a8, Func Offset: 0x278
	// Line 2142, Address: 0x18f4bc, Func Offset: 0x28c
	// Line 2144, Address: 0x18f4c4, Func Offset: 0x294
	// Line 2146, Address: 0x18f4d0, Func Offset: 0x2a0
	// Line 2148, Address: 0x18f4e4, Func Offset: 0x2b4
	// Line 2150, Address: 0x18f4ec, Func Offset: 0x2bc
	// Line 2152, Address: 0x18f4f8, Func Offset: 0x2c8
	// Line 2162, Address: 0x18f50c, Func Offset: 0x2dc
	// Line 2168, Address: 0x18f520, Func Offset: 0x2f0
	// Line 2170, Address: 0x18f530, Func Offset: 0x300
	// Func End, Address: 0x18f554, Func Offset: 0x324
}

// zEntPickup_RenderList__FP11_zEntPickupUi
// Start address: 0x18f560
void zEntPickup_RenderList(_zEntPickup* plist, uint32 pcount)
{
	float32 dist2;
	int32 alpha;
	RwV3d vec_scale;
	RwFrame* frame;
	RwMatrixTag* imat;
	RpAtomic* imodel;
	int32 i;
	// Line 1942, Address: 0x18f560, Func Offset: 0
	// Line 1944, Address: 0x18f58c, Func Offset: 0x2c
	// Line 1945, Address: 0x18f598, Func Offset: 0x38
	// Line 1946, Address: 0x18f5a8, Func Offset: 0x48
	// Line 1947, Address: 0x18f5b0, Func Offset: 0x50
	// Line 1949, Address: 0x18f5b4, Func Offset: 0x54
	// Line 1950, Address: 0x18f5c8, Func Offset: 0x68
	// Line 1951, Address: 0x18f5cc, Func Offset: 0x6c
	// Line 1954, Address: 0x18f5d0, Func Offset: 0x70
	// Line 1951, Address: 0x18f5dc, Func Offset: 0x7c
	// Line 1954, Address: 0x18f658, Func Offset: 0xf8
	// Line 1957, Address: 0x18f66c, Func Offset: 0x10c
	// Line 1958, Address: 0x18f670, Func Offset: 0x110
	// Line 1960, Address: 0x18f674, Func Offset: 0x114
	// Line 1958, Address: 0x18f680, Func Offset: 0x120
	// Line 1959, Address: 0x18f684, Func Offset: 0x124
	// Line 1960, Address: 0x18f688, Func Offset: 0x128
	// Line 1963, Address: 0x18f690, Func Offset: 0x130
	// Line 1965, Address: 0x18f69c, Func Offset: 0x13c
	// Line 1975, Address: 0x18f6ac, Func Offset: 0x14c
	// Line 1978, Address: 0x18f6b4, Func Offset: 0x154
	// Line 1975, Address: 0x18f6bc, Func Offset: 0x15c
	// Line 1978, Address: 0x18f6e4, Func Offset: 0x184
	// Line 1980, Address: 0x18f6f4, Func Offset: 0x194
	// Line 1981, Address: 0x18f710, Func Offset: 0x1b0
	// Line 1982, Address: 0x18f718, Func Offset: 0x1b8
	// Line 1983, Address: 0x18f750, Func Offset: 0x1f0
	// Line 1984, Address: 0x18f75c, Func Offset: 0x1fc
	// Line 1985, Address: 0x18f760, Func Offset: 0x200
	// Line 1987, Address: 0x18f768, Func Offset: 0x208
	// Line 1988, Address: 0x18f770, Func Offset: 0x210
	// Line 1989, Address: 0x18f774, Func Offset: 0x214
	// Line 1991, Address: 0x18f778, Func Offset: 0x218
	// Line 1994, Address: 0x18f798, Func Offset: 0x238
	// Line 1999, Address: 0x18f7a4, Func Offset: 0x244
	// Line 2000, Address: 0x18f7a8, Func Offset: 0x248
	// Line 2001, Address: 0x18f7ac, Func Offset: 0x24c
	// Line 2002, Address: 0x18f7bc, Func Offset: 0x25c
	// Func End, Address: 0x18f7e0, Func Offset: 0x280
}

// zEntPickup_PlaySound__FP11_zEntPickup
// Start address: 0x18f7e0
void zEntPickup_PlaySound(_zEntPickup* ent)
{
	// Line 1842, Address: 0x18f7e0, Func Offset: 0
	// Line 1845, Address: 0x18f7e8, Func Offset: 0x8
	// Line 1847, Address: 0x18f7fc, Func Offset: 0x1c
	// Line 1853, Address: 0x18f824, Func Offset: 0x44
	// Line 1854, Address: 0x18f82c, Func Offset: 0x4c
	// Line 1857, Address: 0x18f834, Func Offset: 0x54
	// Line 1858, Address: 0x18f83c, Func Offset: 0x5c
	// Line 1861, Address: 0x18f844, Func Offset: 0x64
	// Line 1862, Address: 0x18f84c, Func Offset: 0x6c
	// Line 1865, Address: 0x18f854, Func Offset: 0x74
	// Line 1866, Address: 0x18f85c, Func Offset: 0x7c
	// Line 1870, Address: 0x18f864, Func Offset: 0x84
	// Line 1873, Address: 0x18f86c, Func Offset: 0x8c
	// Line 1874, Address: 0x18f874, Func Offset: 0x94
	// Line 1876, Address: 0x18f87c, Func Offset: 0x9c
	// Line 1877, Address: 0x18f884, Func Offset: 0xa4
	// Line 1878, Address: 0x18f88c, Func Offset: 0xac
	// Line 1879, Address: 0x18f894, Func Offset: 0xb4
	// Line 1881, Address: 0x18f8a4, Func Offset: 0xc4
	// Line 1882, Address: 0x18f8ac, Func Offset: 0xcc
	// Line 1886, Address: 0x18f8b4, Func Offset: 0xd4
	// Line 1888, Address: 0x18f8bc, Func Offset: 0xdc
	// Func End, Address: 0x18f8c8, Func Offset: 0xe8
}

// zEntPickup_UpdateFX__FP11_zEntPickupP7_xScenef
// Start address: 0x18f8d0
void zEntPickup_UpdateFX(_zEntPickup* ent, float32 dt)
{
	_zParEmitterCustomSettings info;
	_zParEmitterCustomSettings info;
	uint8 pupb;
	uint8 pupg;
	uint8 pupr;
	int32 powerup;
	// Line 1642, Address: 0x18f8d0, Func Offset: 0
	// Line 1648, Address: 0x18f8fc, Func Offset: 0x2c
	// Line 1653, Address: 0x18f930, Func Offset: 0x60
	// Line 1658, Address: 0x18f95c, Func Offset: 0x8c
	// Line 1659, Address: 0x18f964, Func Offset: 0x94
	// Line 1660, Address: 0x18f968, Func Offset: 0x98
	// Line 1659, Address: 0x18f974, Func Offset: 0xa4
	// Line 1661, Address: 0x18f978, Func Offset: 0xa8
	// Line 1659, Address: 0x18f97c, Func Offset: 0xac
	// Line 1661, Address: 0x18f980, Func Offset: 0xb0
	// Line 1659, Address: 0x18f988, Func Offset: 0xb8
	// Line 1664, Address: 0x18f98c, Func Offset: 0xbc
	// Line 1659, Address: 0x18f994, Func Offset: 0xc4
	// Line 1664, Address: 0x18f99c, Func Offset: 0xcc
	// Line 1659, Address: 0x18f9a0, Func Offset: 0xd0
	// Line 1660, Address: 0x18f9b4, Func Offset: 0xe4
	// Line 1661, Address: 0x18f9d0, Func Offset: 0x100
	// Line 1662, Address: 0x18f9dc, Func Offset: 0x10c
	// Line 1664, Address: 0x18f9f8, Func Offset: 0x128
	// Line 1665, Address: 0x18fa14, Func Offset: 0x144
	// Line 1668, Address: 0x18fa30, Func Offset: 0x160
	// Line 1669, Address: 0x18fa40, Func Offset: 0x170
	// Line 1671, Address: 0x18fa4c, Func Offset: 0x17c
	// Line 1674, Address: 0x18fa54, Func Offset: 0x184
	// Line 1677, Address: 0x18fa64, Func Offset: 0x194
	// Line 1675, Address: 0x18fa68, Func Offset: 0x198
	// Line 1674, Address: 0x18fa6c, Func Offset: 0x19c
	// Line 1675, Address: 0x18fa70, Func Offset: 0x1a0
	// Line 1674, Address: 0x18fa74, Func Offset: 0x1a4
	// Line 1677, Address: 0x18fa78, Func Offset: 0x1a8
	// Line 1674, Address: 0x18fa7c, Func Offset: 0x1ac
	// Line 1675, Address: 0x18fa88, Func Offset: 0x1b8
	// Line 1676, Address: 0x18fa8c, Func Offset: 0x1bc
	// Line 1677, Address: 0x18faa0, Func Offset: 0x1d0
	// Line 1679, Address: 0x18faa8, Func Offset: 0x1d8
	// Line 1684, Address: 0x18fab0, Func Offset: 0x1e0
	// Line 1686, Address: 0x18faf8, Func Offset: 0x228
	// Line 1689, Address: 0x18fb08, Func Offset: 0x238
	// Line 1691, Address: 0x18fb10, Func Offset: 0x240
	// Line 1692, Address: 0x18fb14, Func Offset: 0x244
	// Line 1691, Address: 0x18fb20, Func Offset: 0x250
	// Line 1692, Address: 0x18fb40, Func Offset: 0x270
	// Line 1695, Address: 0x18fb4c, Func Offset: 0x27c
	// Line 1700, Address: 0x18fb54, Func Offset: 0x284
	// Line 1706, Address: 0x18fb64, Func Offset: 0x294
	// Line 1708, Address: 0x18fb88, Func Offset: 0x2b8
	// Line 1711, Address: 0x18fb94, Func Offset: 0x2c4
	// Line 1713, Address: 0x18fbb4, Func Offset: 0x2e4
	// Line 1717, Address: 0x18fbbc, Func Offset: 0x2ec
	// Line 1718, Address: 0x18fbc0, Func Offset: 0x2f0
	// Line 1724, Address: 0x18fbd8, Func Offset: 0x308
	// Line 1725, Address: 0x18fbe0, Func Offset: 0x310
	// Line 1733, Address: 0x18fbe8, Func Offset: 0x318
	// Line 1727, Address: 0x18fbec, Func Offset: 0x31c
	// Line 1728, Address: 0x18fbf0, Func Offset: 0x320
	// Line 1725, Address: 0x18fbf4, Func Offset: 0x324
	// Line 1733, Address: 0x18fc10, Func Offset: 0x340
	// Line 1735, Address: 0x18fc20, Func Offset: 0x350
	// Line 1739, Address: 0x18fc4c, Func Offset: 0x37c
	// Line 1740, Address: 0x18fc50, Func Offset: 0x380
	// Line 1746, Address: 0x18fc58, Func Offset: 0x388
	// Line 1745, Address: 0x18fc5c, Func Offset: 0x38c
	// Line 1747, Address: 0x18fc60, Func Offset: 0x390
	// Line 1749, Address: 0x18fc64, Func Offset: 0x394
	// Line 1753, Address: 0x18fc6c, Func Offset: 0x39c
	// Line 1759, Address: 0x18fc74, Func Offset: 0x3a4
	// Line 1758, Address: 0x18fc78, Func Offset: 0x3a8
	// Line 1760, Address: 0x18fc7c, Func Offset: 0x3ac
	// Line 1762, Address: 0x18fc80, Func Offset: 0x3b0
	// Line 1766, Address: 0x18fc88, Func Offset: 0x3b8
	// Line 1765, Address: 0x18fc8c, Func Offset: 0x3bc
	// Line 1767, Address: 0x18fc90, Func Offset: 0x3c0
	// Line 1769, Address: 0x18fc94, Func Offset: 0x3c4
	// Line 1775, Address: 0x18fc9c, Func Offset: 0x3cc
	// Line 1776, Address: 0x18fca4, Func Offset: 0x3d4
	// Line 1779, Address: 0x18fcb0, Func Offset: 0x3e0
	// Line 1780, Address: 0x18fcb8, Func Offset: 0x3e8
	// Line 1782, Address: 0x18fcd0, Func Offset: 0x400
	// Line 1784, Address: 0x18fce0, Func Offset: 0x410
	// Line 1786, Address: 0x18fcf4, Func Offset: 0x424
	// Line 1784, Address: 0x18fcf8, Func Offset: 0x428
	// Line 1786, Address: 0x18fd04, Func Offset: 0x434
	// Line 1784, Address: 0x18fd0c, Func Offset: 0x43c
	// Line 1786, Address: 0x18fd10, Func Offset: 0x440
	// Line 1784, Address: 0x18fd14, Func Offset: 0x444
	// Line 1785, Address: 0x18fd1c, Func Offset: 0x44c
	// Line 1786, Address: 0x18fd28, Func Offset: 0x458
	// Line 1787, Address: 0x18fd38, Func Offset: 0x468
	// Line 1789, Address: 0x18fd3c, Func Offset: 0x46c
	// Line 1792, Address: 0x18fd44, Func Offset: 0x474
	// Line 1793, Address: 0x18fd4c, Func Offset: 0x47c
	// Line 1794, Address: 0x18fd6c, Func Offset: 0x49c
	// Line 1797, Address: 0x18fd70, Func Offset: 0x4a0
	// Line 1798, Address: 0x18fd78, Func Offset: 0x4a8
	// Line 1801, Address: 0x18fd84, Func Offset: 0x4b4
	// Line 1802, Address: 0x18fd88, Func Offset: 0x4b8
	// Line 1800, Address: 0x18fd8c, Func Offset: 0x4bc
	// Line 1801, Address: 0x18fd90, Func Offset: 0x4c0
	// Line 1802, Address: 0x18fd98, Func Offset: 0x4c8
	// Line 1804, Address: 0x18fd9c, Func Offset: 0x4cc
	// Line 1807, Address: 0x18fda4, Func Offset: 0x4d4
	// Line 1811, Address: 0x18fda8, Func Offset: 0x4d8
	// Line 1813, Address: 0x18fdcc, Func Offset: 0x4fc
	// Line 1815, Address: 0x18fddc, Func Offset: 0x50c
	// Line 1816, Address: 0x18fde0, Func Offset: 0x510
	// Line 1817, Address: 0x18fde4, Func Offset: 0x514
	// Line 1818, Address: 0x18fde8, Func Offset: 0x518
	// Line 1819, Address: 0x18fdec, Func Offset: 0x51c
	// Line 1822, Address: 0x18fdf0, Func Offset: 0x520
	// Line 1820, Address: 0x18fdf4, Func Offset: 0x524
	// Line 1822, Address: 0x18fdf8, Func Offset: 0x528
	// Line 1823, Address: 0x18fe00, Func Offset: 0x530
	// Line 1824, Address: 0x18fe1c, Func Offset: 0x54c
	// Line 1825, Address: 0x18fe24, Func Offset: 0x554
	// Line 1827, Address: 0x18fe30, Func Offset: 0x560
	// Line 1828, Address: 0x18fe34, Func Offset: 0x564
	// Line 1837, Address: 0x18fe38, Func Offset: 0x568
	// Func End, Address: 0x18fe64, Func Offset: 0x594
}

// zEntPickup_Drop__FP11_zEntPickup
// Start address: 0x18fe70
void zEntPickup_Drop(_zEntPickup* ent)
{
	uint32 solcnt;
	float32 sol[2];
	float32 c;
	float32 b;
	// Line 1572, Address: 0x18fe70, Func Offset: 0
	// Line 1574, Address: 0x18fe80, Func Offset: 0x10
	// Line 1575, Address: 0x18fe88, Func Offset: 0x18
	// Line 1580, Address: 0x18fe94, Func Offset: 0x24
	// Line 1584, Address: 0x18feb0, Func Offset: 0x40
	// Line 1585, Address: 0x18fed0, Func Offset: 0x60
	// Line 1591, Address: 0x18fefc, Func Offset: 0x8c
	// Line 1592, Address: 0x18ff0c, Func Offset: 0x9c
	// Line 1596, Address: 0x18ff1c, Func Offset: 0xac
	// Line 1597, Address: 0x18ff20, Func Offset: 0xb0
	// Line 1598, Address: 0x18ff24, Func Offset: 0xb4
	// Line 1602, Address: 0x18ff28, Func Offset: 0xb8
	// Line 1603, Address: 0x18ff38, Func Offset: 0xc8
	// Line 1604, Address: 0x18ff54, Func Offset: 0xe4
	// Line 1605, Address: 0x18ff5c, Func Offset: 0xec
	// Line 1606, Address: 0x18ff80, Func Offset: 0x110
	// Line 1608, Address: 0x18ff84, Func Offset: 0x114
	// Line 1609, Address: 0x18ffa8, Func Offset: 0x138
	// Line 1611, Address: 0x18ffb8, Func Offset: 0x148
	// Line 1612, Address: 0x18ffd8, Func Offset: 0x168
	// Line 1618, Address: 0x18fff8, Func Offset: 0x188
	// Line 1619, Address: 0x190004, Func Offset: 0x194
	// Func End, Address: 0x190018, Func Offset: 0x1a8
}

// zEntPickup_MakeDroppable__FP11_zEntPickupP6_xVec3P5xBase
// Start address: 0x190020
void zEntPickup_MakeDroppable(_zEntPickup* ent, _xVec3* pos, xBase* parent)
{
	// Line 1559, Address: 0x190020, Func Offset: 0
	// Line 1563, Address: 0x190024, Func Offset: 0x4
	// Line 1559, Address: 0x190028, Func Offset: 0x8
	// Line 1560, Address: 0x190044, Func Offset: 0x24
	// Line 1563, Address: 0x190064, Func Offset: 0x44
	// Line 1564, Address: 0x190068, Func Offset: 0x48
	// Line 1566, Address: 0x190074, Func Offset: 0x54
	// Func End, Address: 0x19007c, Func Offset: 0x5c
}

// zEntPickup_Load__FP11_zEntPickupP7xSerial
// Start address: 0x190080
void zEntPickup_Load(_zEntPickup* ent, xSerial* s)
{
	int32 is_a_dropper;
	// Line 1495, Address: 0x190080, Func Offset: 0
	// Line 1498, Address: 0x1900a8, Func Offset: 0x28
	// Line 1510, Address: 0x1900b0, Func Offset: 0x30
	// Line 1515, Address: 0x1900c4, Func Offset: 0x44
	// Line 1526, Address: 0x1900cc, Func Offset: 0x4c
	// Line 1530, Address: 0x1900e4, Func Offset: 0x64
	// Line 1536, Address: 0x190120, Func Offset: 0xa0
	// Line 1544, Address: 0x190190, Func Offset: 0x110
	// Line 1545, Address: 0x190198, Func Offset: 0x118
	// Line 1547, Address: 0x1901a0, Func Offset: 0x120
	// Line 1549, Address: 0x1901a8, Func Offset: 0x128
	// Line 1554, Address: 0x1901c8, Func Offset: 0x148
	// Func End, Address: 0x1901ec, Func Offset: 0x16c
}

// zEntPickup_Save__FP11_zEntPickupP7xSerial
// Start address: 0x1901f0
void zEntPickup_Save(_zEntPickup* ent, xSerial* s)
{
	// Line 1473, Address: 0x1901f0, Func Offset: 0
	// Line 1474, Address: 0x190204, Func Offset: 0x14
	// Line 1479, Address: 0x19020c, Func Offset: 0x1c
	// Line 1482, Address: 0x190218, Func Offset: 0x28
	// Func End, Address: 0x19022c, Func Offset: 0x3c
}

// zEntPickup_Reset__FP11_zEntPickup
// Start address: 0x190230
void zEntPickup_Reset(_zEntPickup* ent)
{
	// Line 1438, Address: 0x190230, Func Offset: 0
	// Line 1440, Address: 0x190240, Func Offset: 0x10
	// Line 1443, Address: 0x190248, Func Offset: 0x18
	// Line 1444, Address: 0x190250, Func Offset: 0x20
	// Line 1445, Address: 0x190254, Func Offset: 0x24
	// Line 1446, Address: 0x190258, Func Offset: 0x28
	// Line 1447, Address: 0x190264, Func Offset: 0x34
	// Line 1448, Address: 0x19026c, Func Offset: 0x3c
	// Line 1450, Address: 0x190270, Func Offset: 0x40
	// Line 1451, Address: 0x190274, Func Offset: 0x44
	// Line 1452, Address: 0x190278, Func Offset: 0x48
	// Line 1453, Address: 0x19027c, Func Offset: 0x4c
	// Line 1454, Address: 0x190284, Func Offset: 0x54
	// Line 1457, Address: 0x190288, Func Offset: 0x58
	// Line 1458, Address: 0x1902c4, Func Offset: 0x94
	// Line 1460, Address: 0x1902ec, Func Offset: 0xbc
	// Line 1461, Address: 0x190318, Func Offset: 0xe8
	// Func End, Address: 0x19032c, Func Offset: 0xfc
}

// zEntPickup_hideSnackGateInfo__FP11_zEntPickup
// Start address: 0x190330
void zEntPickup_hideSnackGateInfo(_zEntPickup* ent)
{
	// Line 1395, Address: 0x190330, Func Offset: 0
	// Line 1396, Address: 0x190340, Func Offset: 0x10
	// Line 1398, Address: 0x190350, Func Offset: 0x20
	// Line 1399, Address: 0x190360, Func Offset: 0x30
	// Line 1401, Address: 0x190368, Func Offset: 0x38
	// Func End, Address: 0x190378, Func Offset: 0x48
}

// zEntPickup_Update__FP11_zEntPickupP7_xScenef
// Start address: 0x190380
void zEntPickup_Update(_zEntPickup* ent, _xScene* sc, float32 dt)
{
	float32 spin_time;
	float32 rot_sec;
	_zParEmitterCustomSettings info;
	float32 dist;
	_xVec3* facept;
	_xVec3* t0;
	_xQuat* q0;
	float32 duration;
	_zParEmitterCustomSettings info;
	_zParEmitterCustomSettings info;
	_zParEmitterCustomSettings info;
	_zParEmitterCustomSettings info;
	xBase* b;
	float32 distsqr2;
	float32 distsqr;
	// Line 764, Address: 0x190380, Func Offset: 0
	// Line 771, Address: 0x19039c, Func Offset: 0x1c
	// Line 773, Address: 0x1903b4, Func Offset: 0x34
	// Line 777, Address: 0x1903c8, Func Offset: 0x48
	// Line 779, Address: 0x1903e4, Func Offset: 0x64
	// Line 780, Address: 0x1903e8, Func Offset: 0x68
	// Line 782, Address: 0x1903f8, Func Offset: 0x78
	// Line 783, Address: 0x190400, Func Offset: 0x80
	// Line 784, Address: 0x190414, Func Offset: 0x94
	// Line 792, Address: 0x190420, Func Offset: 0xa0
	// Line 795, Address: 0x190430, Func Offset: 0xb0
	// Line 798, Address: 0x19044c, Func Offset: 0xcc
	// Line 799, Address: 0x190454, Func Offset: 0xd4
	// Line 800, Address: 0x190458, Func Offset: 0xd8
	// Line 799, Address: 0x190464, Func Offset: 0xe4
	// Line 800, Address: 0x190484, Func Offset: 0x104
	// Line 802, Address: 0x190494, Func Offset: 0x114
	// Line 823, Address: 0x19049c, Func Offset: 0x11c
	// Line 828, Address: 0x1904d8, Func Offset: 0x158
	// Line 829, Address: 0x1904e0, Func Offset: 0x160
	// Line 830, Address: 0x1904fc, Func Offset: 0x17c
	// Line 831, Address: 0x190500, Func Offset: 0x180
	// Line 834, Address: 0x190510, Func Offset: 0x190
	// Line 838, Address: 0x190518, Func Offset: 0x198
	// Line 847, Address: 0x190534, Func Offset: 0x1b4
	// Line 838, Address: 0x190538, Func Offset: 0x1b8
	// Line 847, Address: 0x190544, Func Offset: 0x1c4
	// Line 838, Address: 0x190548, Func Offset: 0x1c8
	// Line 847, Address: 0x19054c, Func Offset: 0x1cc
	// Line 838, Address: 0x190550, Func Offset: 0x1d0
	// Line 847, Address: 0x19057c, Func Offset: 0x1fc
	// Line 856, Address: 0x190594, Func Offset: 0x214
	// Line 859, Address: 0x1905dc, Func Offset: 0x25c
	// Line 861, Address: 0x1905f0, Func Offset: 0x270
	// Line 864, Address: 0x190618, Func Offset: 0x298
	// Line 866, Address: 0x190624, Func Offset: 0x2a4
	// Line 864, Address: 0x19062c, Func Offset: 0x2ac
	// Line 866, Address: 0x190644, Func Offset: 0x2c4
	// Line 867, Address: 0x190670, Func Offset: 0x2f0
	// Line 868, Address: 0x1906a4, Func Offset: 0x324
	// Line 872, Address: 0x1906ac, Func Offset: 0x32c
	// Line 874, Address: 0x1906cc, Func Offset: 0x34c
	// Line 875, Address: 0x1906e4, Func Offset: 0x364
	// Line 883, Address: 0x1906ec, Func Offset: 0x36c
	// Line 885, Address: 0x190724, Func Offset: 0x3a4
	// Line 886, Address: 0x190730, Func Offset: 0x3b0
	// Line 887, Address: 0x19073c, Func Offset: 0x3bc
	// Line 890, Address: 0x190748, Func Offset: 0x3c8
	// Line 894, Address: 0x190750, Func Offset: 0x3d0
	// Line 897, Address: 0x190788, Func Offset: 0x408
	// Line 898, Address: 0x190790, Func Offset: 0x410
	// Line 902, Address: 0x1907ac, Func Offset: 0x42c
	// Line 905, Address: 0x1907b8, Func Offset: 0x438
	// Line 907, Address: 0x1907f0, Func Offset: 0x470
	// Line 909, Address: 0x190800, Func Offset: 0x480
	// Line 913, Address: 0x190824, Func Offset: 0x4a4
	// Line 917, Address: 0x190840, Func Offset: 0x4c0
	// Line 919, Address: 0x190888, Func Offset: 0x508
	// Line 921, Address: 0x1908a8, Func Offset: 0x528
	// Line 922, Address: 0x1908ac, Func Offset: 0x52c
	// Line 925, Address: 0x1908b4, Func Offset: 0x534
	// Line 929, Address: 0x1908bc, Func Offset: 0x53c
	// Line 931, Address: 0x1908d8, Func Offset: 0x558
	// Line 935, Address: 0x1908dc, Func Offset: 0x55c
	// Line 932, Address: 0x1908e4, Func Offset: 0x564
	// Line 931, Address: 0x1908e8, Func Offset: 0x568
	// Line 935, Address: 0x190904, Func Offset: 0x584
	// Line 936, Address: 0x190930, Func Offset: 0x5b0
	// Line 939, Address: 0x190960, Func Offset: 0x5e0
	// Line 942, Address: 0x190968, Func Offset: 0x5e8
	// Line 945, Address: 0x190970, Func Offset: 0x5f0
	// Line 949, Address: 0x190978, Func Offset: 0x5f8
	// Line 953, Address: 0x19099c, Func Offset: 0x61c
	// Line 954, Address: 0x1909a4, Func Offset: 0x624
	// Line 957, Address: 0x1909c0, Func Offset: 0x640
	// Line 960, Address: 0x1909f8, Func Offset: 0x678
	// Line 961, Address: 0x190a04, Func Offset: 0x684
	// Line 962, Address: 0x190a0c, Func Offset: 0x68c
	// Line 961, Address: 0x190a10, Func Offset: 0x690
	// Line 962, Address: 0x190a18, Func Offset: 0x698
	// Line 963, Address: 0x190a20, Func Offset: 0x6a0
	// Line 965, Address: 0x190a68, Func Offset: 0x6e8
	// Line 967, Address: 0x190a70, Func Offset: 0x6f0
	// Line 977, Address: 0x190a78, Func Offset: 0x6f8
	// Line 979, Address: 0x190a8c, Func Offset: 0x70c
	// Line 980, Address: 0x190a94, Func Offset: 0x714
	// Line 983, Address: 0x190ab0, Func Offset: 0x730
	// Line 986, Address: 0x190ae8, Func Offset: 0x768
	// Line 987, Address: 0x190af4, Func Offset: 0x774
	// Line 989, Address: 0x190afc, Func Offset: 0x77c
	// Line 987, Address: 0x190b00, Func Offset: 0x780
	// Line 989, Address: 0x190b0c, Func Offset: 0x78c
	// Line 991, Address: 0x190b50, Func Offset: 0x7d0
	// Line 993, Address: 0x190b58, Func Offset: 0x7d8
	// Line 1001, Address: 0x190b60, Func Offset: 0x7e0
	// Line 1005, Address: 0x190b74, Func Offset: 0x7f4
	// Line 1007, Address: 0x190b7c, Func Offset: 0x7fc
	// Line 1010, Address: 0x190b84, Func Offset: 0x804
	// Line 1012, Address: 0x190bbc, Func Offset: 0x83c
	// Line 1017, Address: 0x190be0, Func Offset: 0x860
	// Line 1018, Address: 0x190be8, Func Offset: 0x868
	// Line 1017, Address: 0x190bec, Func Offset: 0x86c
	// Line 1018, Address: 0x190bf4, Func Offset: 0x874
	// Line 1019, Address: 0x190bfc, Func Offset: 0x87c
	// Line 1021, Address: 0x190c04, Func Offset: 0x884
	// Line 1023, Address: 0x190c08, Func Offset: 0x888
	// Line 1021, Address: 0x190c10, Func Offset: 0x890
	// Line 1023, Address: 0x190c30, Func Offset: 0x8b0
	// Line 1025, Address: 0x190c34, Func Offset: 0x8b4
	// Line 1029, Address: 0x190c40, Func Offset: 0x8c0
	// Line 1035, Address: 0x190c48, Func Offset: 0x8c8
	// Line 1038, Address: 0x190c58, Func Offset: 0x8d8
	// Line 1039, Address: 0x190c60, Func Offset: 0x8e0
	// Line 1040, Address: 0x190c64, Func Offset: 0x8e4
	// Line 1039, Address: 0x190c78, Func Offset: 0x8f8
	// Line 1040, Address: 0x190c90, Func Offset: 0x910
	// Line 1041, Address: 0x190c98, Func Offset: 0x918
	// Line 1042, Address: 0x190ca0, Func Offset: 0x920
	// Line 1045, Address: 0x190cb0, Func Offset: 0x930
	// Line 1046, Address: 0x190cb8, Func Offset: 0x938
	// Line 1047, Address: 0x190cbc, Func Offset: 0x93c
	// Line 1046, Address: 0x190cd0, Func Offset: 0x950
	// Line 1047, Address: 0x190ce8, Func Offset: 0x968
	// Line 1048, Address: 0x190cf0, Func Offset: 0x970
	// Line 1049, Address: 0x190cf8, Func Offset: 0x978
	// Line 1052, Address: 0x190d08, Func Offset: 0x988
	// Line 1053, Address: 0x190d10, Func Offset: 0x990
	// Line 1054, Address: 0x190d14, Func Offset: 0x994
	// Line 1053, Address: 0x190d28, Func Offset: 0x9a8
	// Line 1054, Address: 0x190d40, Func Offset: 0x9c0
	// Line 1055, Address: 0x190d48, Func Offset: 0x9c8
	// Line 1058, Address: 0x190d50, Func Offset: 0x9d0
	// Line 1062, Address: 0x190d60, Func Offset: 0x9e0
	// Line 1063, Address: 0x190d68, Func Offset: 0x9e8
	// Line 1064, Address: 0x190d6c, Func Offset: 0x9ec
	// Line 1063, Address: 0x190d80, Func Offset: 0xa00
	// Line 1064, Address: 0x190d98, Func Offset: 0xa18
	// Line 1067, Address: 0x190da0, Func Offset: 0xa20
	// Line 1071, Address: 0x190da8, Func Offset: 0xa28
	// Line 1072, Address: 0x190db0, Func Offset: 0xa30
	// Line 1073, Address: 0x190dd0, Func Offset: 0xa50
	// Line 1076, Address: 0x190dd8, Func Offset: 0xa58
	// Line 1079, Address: 0x190df4, Func Offset: 0xa74
	// Line 1080, Address: 0x190dfc, Func Offset: 0xa7c
	// Line 1079, Address: 0x190e00, Func Offset: 0xa80
	// Line 1080, Address: 0x190e08, Func Offset: 0xa88
	// Line 1081, Address: 0x190e10, Func Offset: 0xa90
	// Line 1096, Address: 0x190e58, Func Offset: 0xad8
	// Line 1097, Address: 0x190e5c, Func Offset: 0xadc
	// Line 1096, Address: 0x190e60, Func Offset: 0xae0
	// Line 1097, Address: 0x190e7c, Func Offset: 0xafc
	// Line 1100, Address: 0x190ea4, Func Offset: 0xb24
	// Line 1101, Address: 0x190eb0, Func Offset: 0xb30
	// Line 1104, Address: 0x190ebc, Func Offset: 0xb3c
	// Line 1105, Address: 0x190ec4, Func Offset: 0xb44
	// Line 1109, Address: 0x190ecc, Func Offset: 0xb4c
	// Line 1110, Address: 0x190ed4, Func Offset: 0xb54
	// Line 1114, Address: 0x190ee4, Func Offset: 0xb64
	// Line 1117, Address: 0x190ee8, Func Offset: 0xb68
	// Line 1126, Address: 0x190ef4, Func Offset: 0xb74
	// Line 1127, Address: 0x190f04, Func Offset: 0xb84
	// Line 1131, Address: 0x190f0c, Func Offset: 0xb8c
	// Line 1133, Address: 0x190f28, Func Offset: 0xba8
	// Line 1134, Address: 0x190f30, Func Offset: 0xbb0
	// Line 1135, Address: 0x190f34, Func Offset: 0xbb4
	// Line 1134, Address: 0x190f38, Func Offset: 0xbb8
	// Line 1139, Address: 0x190f54, Func Offset: 0xbd4
	// Line 1140, Address: 0x190f5c, Func Offset: 0xbdc
	// Line 1142, Address: 0x190f90, Func Offset: 0xc10
	// Line 1144, Address: 0x190f9c, Func Offset: 0xc1c
	// Line 1153, Address: 0x190fa4, Func Offset: 0xc24
	// Line 1154, Address: 0x190fb0, Func Offset: 0xc30
	// Line 1155, Address: 0x190fb8, Func Offset: 0xc38
	// Line 1156, Address: 0x190fc0, Func Offset: 0xc40
	// Line 1157, Address: 0x190fd0, Func Offset: 0xc50
	// Line 1159, Address: 0x190fd8, Func Offset: 0xc58
	// Line 1161, Address: 0x190fdc, Func Offset: 0xc5c
	// Line 1160, Address: 0x190fe8, Func Offset: 0xc68
	// Line 1161, Address: 0x190fec, Func Offset: 0xc6c
	// Line 1162, Address: 0x190ff8, Func Offset: 0xc78
	// Line 1165, Address: 0x191014, Func Offset: 0xc94
	// Line 1167, Address: 0x191030, Func Offset: 0xcb0
	// Line 1168, Address: 0x191034, Func Offset: 0xcb4
	// Line 1171, Address: 0x191044, Func Offset: 0xcc4
	// Line 1173, Address: 0x191064, Func Offset: 0xce4
	// Line 1177, Address: 0x19106c, Func Offset: 0xcec
	// Line 1183, Address: 0x1910a0, Func Offset: 0xd20
	// Line 1186, Address: 0x1910ac, Func Offset: 0xd2c
	// Line 1189, Address: 0x1910d0, Func Offset: 0xd50
	// Line 1196, Address: 0x1910d4, Func Offset: 0xd54
	// Line 1189, Address: 0x1910d8, Func Offset: 0xd58
	// Line 1192, Address: 0x1910dc, Func Offset: 0xd5c
	// Line 1195, Address: 0x1910e4, Func Offset: 0xd64
	// Line 1196, Address: 0x1910e8, Func Offset: 0xd68
	// Line 1189, Address: 0x1910f0, Func Offset: 0xd70
	// Line 1196, Address: 0x1910f4, Func Offset: 0xd74
	// Line 1192, Address: 0x1910fc, Func Offset: 0xd7c
	// Line 1196, Address: 0x191100, Func Offset: 0xd80
	// Line 1191, Address: 0x191110, Func Offset: 0xd90
	// Line 1193, Address: 0x191114, Func Offset: 0xd94
	// Line 1196, Address: 0x191118, Func Offset: 0xd98
	// Line 1200, Address: 0x191120, Func Offset: 0xda0
	// Line 1203, Address: 0x191154, Func Offset: 0xdd4
	// Line 1207, Address: 0x1911a0, Func Offset: 0xe20
	// Line 1208, Address: 0x1911a8, Func Offset: 0xe28
	// Line 1213, Address: 0x1911ac, Func Offset: 0xe2c
	// Line 1208, Address: 0x1911b4, Func Offset: 0xe34
	// Line 1213, Address: 0x1911cc, Func Offset: 0xe4c
	// Line 1215, Address: 0x1911d4, Func Offset: 0xe54
	// Line 1219, Address: 0x1911dc, Func Offset: 0xe5c
	// Line 1224, Address: 0x191200, Func Offset: 0xe80
	// Line 1228, Address: 0x191240, Func Offset: 0xec0
	// Line 1230, Address: 0x19124c, Func Offset: 0xecc
	// Line 1232, Address: 0x191258, Func Offset: 0xed8
	// Line 1236, Address: 0x191260, Func Offset: 0xee0
	// Line 1237, Address: 0x191280, Func Offset: 0xf00
	// Line 1240, Address: 0x1912b8, Func Offset: 0xf38
	// Line 1242, Address: 0x1912bc, Func Offset: 0xf3c
	// Line 1240, Address: 0x1912c4, Func Offset: 0xf44
	// Line 1242, Address: 0x1912c8, Func Offset: 0xf48
	// Line 1243, Address: 0x1912d0, Func Offset: 0xf50
	// Line 1246, Address: 0x1912d8, Func Offset: 0xf58
	// Line 1247, Address: 0x1912e8, Func Offset: 0xf68
	// Line 1251, Address: 0x1912f0, Func Offset: 0xf70
	// Line 1253, Address: 0x191300, Func Offset: 0xf80
	// Line 1256, Address: 0x19130c, Func Offset: 0xf8c
	// Line 1258, Address: 0x191328, Func Offset: 0xfa8
	// Line 1260, Address: 0x191338, Func Offset: 0xfb8
	// Line 1266, Address: 0x191340, Func Offset: 0xfc0
	// Line 1268, Address: 0x191364, Func Offset: 0xfe4
	// Line 1269, Address: 0x19136c, Func Offset: 0xfec
	// Line 1270, Address: 0x191374, Func Offset: 0xff4
	// Line 1273, Address: 0x19137c, Func Offset: 0xffc
	// Line 1274, Address: 0x191384, Func Offset: 0x1004
	// Line 1278, Address: 0x19138c, Func Offset: 0x100c
	// Line 1281, Address: 0x1913d0, Func Offset: 0x1050
	// Line 1282, Address: 0x1913e0, Func Offset: 0x1060
	// Line 1287, Address: 0x1913e8, Func Offset: 0x1068
	// Line 1289, Address: 0x1913ec, Func Offset: 0x106c
	// Line 1287, Address: 0x1913f4, Func Offset: 0x1074
	// Line 1289, Address: 0x1913f8, Func Offset: 0x1078
	// Line 1291, Address: 0x191408, Func Offset: 0x1088
	// Line 1293, Address: 0x19141c, Func Offset: 0x109c
	// Line 1295, Address: 0x191430, Func Offset: 0x10b0
	// Line 1298, Address: 0x191438, Func Offset: 0x10b8
	// Line 1301, Address: 0x191454, Func Offset: 0x10d4
	// Line 1305, Address: 0x19145c, Func Offset: 0x10dc
	// Line 1307, Address: 0x19146c, Func Offset: 0x10ec
	// Line 1308, Address: 0x191474, Func Offset: 0x10f4
	// Line 1311, Address: 0x191480, Func Offset: 0x1100
	// Line 1313, Address: 0x191490, Func Offset: 0x1110
	// Line 1316, Address: 0x19149c, Func Offset: 0x111c
	// Line 1319, Address: 0x1914a4, Func Offset: 0x1124
	// Line 1322, Address: 0x1914ac, Func Offset: 0x112c
	// Line 1325, Address: 0x191558, Func Offset: 0x11d8
	// Line 1331, Address: 0x191570, Func Offset: 0x11f0
	// Line 1334, Address: 0x191578, Func Offset: 0x11f8
	// Line 1331, Address: 0x19157c, Func Offset: 0x11fc
	// Line 1332, Address: 0x191588, Func Offset: 0x1208
	// Line 1334, Address: 0x191594, Func Offset: 0x1214
	// Line 1335, Address: 0x191598, Func Offset: 0x1218
	// Line 1338, Address: 0x1915d0, Func Offset: 0x1250
	// Line 1376, Address: 0x1915d8, Func Offset: 0x1258
	// Line 1385, Address: 0x19162c, Func Offset: 0x12ac
	// Line 1387, Address: 0x191668, Func Offset: 0x12e8
	// Line 1388, Address: 0x191674, Func Offset: 0x12f4
	// Line 1391, Address: 0x191684, Func Offset: 0x1304
	// Func End, Address: 0x1916a4, Func Offset: 0x1324
}

// zEntPickup_FlyToInterface__FP11_zEntPickupf
// Start address: 0x1916b0
void zEntPickup_FlyToInterface(_zEntPickup* ent)
{
	float32 scale;
	_xVec3* src;
	float32 perc;
	_xMat4x3 dest;
	// Line 688, Address: 0x1916b0, Func Offset: 0
	// Line 691, Address: 0x1916c8, Func Offset: 0x18
	// Line 692, Address: 0x1916e8, Func Offset: 0x38
	// Line 691, Address: 0x1916ec, Func Offset: 0x3c
	// Line 692, Address: 0x191768, Func Offset: 0xb8
	// Line 695, Address: 0x191778, Func Offset: 0xc8
	// Line 697, Address: 0x19178c, Func Offset: 0xdc
	// Line 700, Address: 0x1917d8, Func Offset: 0x128
	// Line 701, Address: 0x1917e8, Func Offset: 0x138
	// Line 703, Address: 0x1917f0, Func Offset: 0x140
	// Line 704, Address: 0x191800, Func Offset: 0x150
	// Line 706, Address: 0x191808, Func Offset: 0x158
	// Line 707, Address: 0x191818, Func Offset: 0x168
	// Line 710, Address: 0x191820, Func Offset: 0x170
	// Line 714, Address: 0x191834, Func Offset: 0x184
	// Line 716, Address: 0x191844, Func Offset: 0x194
	// Line 719, Address: 0x19184c, Func Offset: 0x19c
	// Line 720, Address: 0x19185c, Func Offset: 0x1ac
	// Line 721, Address: 0x19186c, Func Offset: 0x1bc
	// Line 725, Address: 0x19187c, Func Offset: 0x1cc
	// Line 726, Address: 0x19188c, Func Offset: 0x1dc
	// Line 725, Address: 0x191890, Func Offset: 0x1e0
	// Line 726, Address: 0x1918a4, Func Offset: 0x1f4
	// Line 727, Address: 0x1918b4, Func Offset: 0x204
	// Line 728, Address: 0x1918bc, Func Offset: 0x20c
	// Line 729, Address: 0x1918cc, Func Offset: 0x21c
	// Line 732, Address: 0x1918d0, Func Offset: 0x220
	// Line 744, Address: 0x1918d8, Func Offset: 0x228
	// Line 750, Address: 0x1918e4, Func Offset: 0x234
	// Line 740, Address: 0x1918ec, Func Offset: 0x23c
	// Line 744, Address: 0x1918f4, Func Offset: 0x244
	// Line 739, Address: 0x1918f8, Func Offset: 0x248
	// Line 744, Address: 0x191900, Func Offset: 0x250
	// Line 752, Address: 0x191908, Func Offset: 0x258
	// Line 744, Address: 0x19190c, Func Offset: 0x25c
	// Line 740, Address: 0x191910, Func Offset: 0x260
	// Line 744, Address: 0x191914, Func Offset: 0x264
	// Line 745, Address: 0x191918, Func Offset: 0x268
	// Line 739, Address: 0x19191c, Func Offset: 0x26c
	// Line 745, Address: 0x191920, Func Offset: 0x270
	// Line 746, Address: 0x19192c, Func Offset: 0x27c
	// Line 745, Address: 0x191930, Func Offset: 0x280
	// Line 750, Address: 0x191938, Func Offset: 0x288
	// Line 752, Address: 0x19193c, Func Offset: 0x28c
	// Line 751, Address: 0x191944, Func Offset: 0x294
	// Line 746, Address: 0x191948, Func Offset: 0x298
	// Line 752, Address: 0x191950, Func Offset: 0x2a0
	// Line 746, Address: 0x191954, Func Offset: 0x2a4
	// Line 752, Address: 0x191960, Func Offset: 0x2b0
	// Line 756, Address: 0x191964, Func Offset: 0x2b4
	// Line 757, Address: 0x191968, Func Offset: 0x2b8
	// Line 758, Address: 0x19196c, Func Offset: 0x2bc
	// Line 759, Address: 0x191970, Func Offset: 0x2c0
	// Func End, Address: 0x19198c, Func Offset: 0x2dc
}

// zPickup_Give__FP11_zEntPickupP12zAssetPickupUs
// Start address: 0x191990
int32 zPickup_Give(_zEntPickup* ent, zAssetPickup* p, uint16 value)
{
	// Line 547, Address: 0x191990, Func Offset: 0
	// Line 548, Address: 0x1919a0, Func Offset: 0x10
	// Line 552, Address: 0x1919ec, Func Offset: 0x5c
	// Line 554, Address: 0x191a18, Func Offset: 0x88
	// Line 555, Address: 0x191a20, Func Offset: 0x90
	// Line 568, Address: 0x191a28, Func Offset: 0x98
	// Line 569, Address: 0x191a34, Func Offset: 0xa4
	// Line 570, Address: 0x191a44, Func Offset: 0xb4
	// Line 573, Address: 0x191a58, Func Offset: 0xc8
	// Line 580, Address: 0x191a60, Func Offset: 0xd0
	// Line 581, Address: 0x191a68, Func Offset: 0xd8
	// Line 584, Address: 0x191a70, Func Offset: 0xe0
	// Line 585, Address: 0x191a78, Func Offset: 0xe8
	// Line 588, Address: 0x191a80, Func Offset: 0xf0
	// Line 589, Address: 0x191a88, Func Offset: 0xf8
	// Line 593, Address: 0x191a90, Func Offset: 0x100
	// Line 595, Address: 0x191aa4, Func Offset: 0x114
	// Line 596, Address: 0x191aac, Func Offset: 0x11c
	// Line 600, Address: 0x191ab4, Func Offset: 0x124
	// Line 604, Address: 0x191abc, Func Offset: 0x12c
	// Line 605, Address: 0x191ac4, Func Offset: 0x134
	// Line 608, Address: 0x191acc, Func Offset: 0x13c
	// Line 609, Address: 0x191ad4, Func Offset: 0x144
	// Line 612, Address: 0x191adc, Func Offset: 0x14c
	// Line 613, Address: 0x191ae4, Func Offset: 0x154
	// Line 629, Address: 0x191aec, Func Offset: 0x15c
	// Line 630, Address: 0x191b00, Func Offset: 0x170
	// Line 633, Address: 0x191b08, Func Offset: 0x178
	// Line 638, Address: 0x191b14, Func Offset: 0x184
	// Line 641, Address: 0x191b1c, Func Offset: 0x18c
	// Line 642, Address: 0x191b3c, Func Offset: 0x1ac
	// Line 643, Address: 0x191b40, Func Offset: 0x1b0
	// Line 647, Address: 0x191b48, Func Offset: 0x1b8
	// Line 648, Address: 0x191b78, Func Offset: 0x1e8
	// Line 650, Address: 0x191b80, Func Offset: 0x1f0
	// Line 651, Address: 0x191bbc, Func Offset: 0x22c
	// Line 655, Address: 0x191bc4, Func Offset: 0x234
	// Line 658, Address: 0x191be8, Func Offset: 0x258
	// Line 659, Address: 0x191c3c, Func Offset: 0x2ac
	// Line 662, Address: 0x191c44, Func Offset: 0x2b4
	// Line 663, Address: 0x191c4c, Func Offset: 0x2bc
	// Line 668, Address: 0x191c7c, Func Offset: 0x2ec
	// Line 671, Address: 0x191c88, Func Offset: 0x2f8
	// Line 672, Address: 0x191c8c, Func Offset: 0x2fc
	// Func End, Address: 0x191ca0, Func Offset: 0x310
}

// zEntPickupEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x191ca0
int32 zEntPickupEventCB(xBase* to, uint32 toEvent, float32* toParam, xBase* toParamWidget)
{
	_zEntPickup* p;
	// Line 487, Address: 0x191ca0, Func Offset: 0
	// Line 494, Address: 0x191ca4, Func Offset: 0x4
	// Line 498, Address: 0x191ce8, Func Offset: 0x48
	// Line 499, Address: 0x191cf8, Func Offset: 0x58
	// Line 500, Address: 0x191d00, Func Offset: 0x60
	// Line 503, Address: 0x191d08, Func Offset: 0x68
	// Line 504, Address: 0x191d10, Func Offset: 0x70
	// Line 507, Address: 0x191d18, Func Offset: 0x78
	// Line 508, Address: 0x191d20, Func Offset: 0x80
	// Line 512, Address: 0x191d28, Func Offset: 0x88
	// Line 515, Address: 0x191d3c, Func Offset: 0x9c
	// Line 518, Address: 0x191d60, Func Offset: 0xc0
	// Line 519, Address: 0x191d64, Func Offset: 0xc4
	// Line 523, Address: 0x191d6c, Func Offset: 0xcc
	// Line 525, Address: 0x191d74, Func Offset: 0xd4
	// Line 526, Address: 0x191d84, Func Offset: 0xe4
	// Line 527, Address: 0x191d8c, Func Offset: 0xec
	// Line 530, Address: 0x191d94, Func Offset: 0xf4
	// Line 531, Address: 0x191d98, Func Offset: 0xf8
	// Line 532, Address: 0x191da0, Func Offset: 0x100
	// Line 533, Address: 0x191da8, Func Offset: 0x108
	// Line 538, Address: 0x191db0, Func Offset: 0x110
	// Line 537, Address: 0x191db4, Func Offset: 0x114
	// Line 538, Address: 0x191db8, Func Offset: 0x118
	// Func End, Address: 0x191dc0, Func Offset: 0x120
}

// zEntPickup_Setup__Fv
// Start address: 0x191dc0
void zEntPickup_Setup()
{
	_xVec3* srcPos;
	_zEntPickup* p;
	xBase* base;
	uint32 j;
	uint32 i;
	zScene* zsc;
	// Line 395, Address: 0x191dc0, Func Offset: 0
	// Line 398, Address: 0x191de0, Func Offset: 0x20
	// Line 401, Address: 0x191de8, Func Offset: 0x28
	// Line 402, Address: 0x191df4, Func Offset: 0x34
	// Line 404, Address: 0x191e08, Func Offset: 0x48
	// Line 405, Address: 0x191e14, Func Offset: 0x54
	// Line 406, Address: 0x191e2c, Func Offset: 0x6c
	// Line 407, Address: 0x191e34, Func Offset: 0x74
	// Line 409, Address: 0x191e5c, Func Offset: 0x9c
	// Line 413, Address: 0x191e60, Func Offset: 0xa0
	// Line 415, Address: 0x191ea4, Func Offset: 0xe4
	// Line 416, Address: 0x191eb0, Func Offset: 0xf0
	// Line 417, Address: 0x191ebc, Func Offset: 0xfc
	// Line 423, Address: 0x191ec0, Func Offset: 0x100
	// Line 427, Address: 0x191ec8, Func Offset: 0x108
	// Line 429, Address: 0x191f24, Func Offset: 0x164
	// Line 430, Address: 0x191f3c, Func Offset: 0x17c
	// Line 434, Address: 0x191f50, Func Offset: 0x190
	// Line 435, Address: 0x191f60, Func Offset: 0x1a0
	// Line 437, Address: 0x191f78, Func Offset: 0x1b8
	// Line 440, Address: 0x191f80, Func Offset: 0x1c0
	// Line 441, Address: 0x191f90, Func Offset: 0x1d0
	// Line 442, Address: 0x191fa0, Func Offset: 0x1e0
	// Line 443, Address: 0x191fb4, Func Offset: 0x1f4
	// Line 445, Address: 0x191fcc, Func Offset: 0x20c
	// Line 448, Address: 0x191fd4, Func Offset: 0x214
	// Line 449, Address: 0x191fe8, Func Offset: 0x228
	// Line 451, Address: 0x192000, Func Offset: 0x240
	// Line 455, Address: 0x192008, Func Offset: 0x248
	// Line 456, Address: 0x19201c, Func Offset: 0x25c
	// Line 458, Address: 0x19202c, Func Offset: 0x26c
	// Line 459, Address: 0x192040, Func Offset: 0x280
	// Line 460, Address: 0x192050, Func Offset: 0x290
	// Line 461, Address: 0x192060, Func Offset: 0x2a0
	// Line 462, Address: 0x192070, Func Offset: 0x2b0
	// Line 464, Address: 0x192080, Func Offset: 0x2c0
	// Line 465, Address: 0x192094, Func Offset: 0x2d4
	// Line 466, Address: 0x1920a4, Func Offset: 0x2e4
	// Line 467, Address: 0x1920b4, Func Offset: 0x2f4
	// Line 471, Address: 0x1920c0, Func Offset: 0x300
	// Line 467, Address: 0x1920c4, Func Offset: 0x304
	// Line 471, Address: 0x1920c8, Func Offset: 0x308
	// Line 472, Address: 0x1920f0, Func Offset: 0x330
	// Func End, Address: 0x192114, Func Offset: 0x354
}

// zEntPickup_Setup__FP11_zEntPickup
// Start address: 0x192120
void zEntPickup_Setup(_zEntPickup* p)
{
	// Line 349, Address: 0x192120, Func Offset: 0
	// Line 350, Address: 0x192128, Func Offset: 0x8
	// Line 352, Address: 0x192130, Func Offset: 0x10
	// Line 353, Address: 0x192148, Func Offset: 0x28
	// Func End, Address: 0x192154, Func Offset: 0x34
}

// zEntPickupInit__FP11_zEntPickupP10p2EntAsset
// Start address: 0x192160
void zEntPickupInit(_zEntPickup* ent, p2EntAsset* asset)
{
	void* animData;
	RpAtomic* modelData;
	zAssetPickup* ptbl;
	uint32 tmpsize;
	uint32 i;
	p2EntPickupAsset* pickupAsset;
	// Line 222, Address: 0x192160, Func Offset: 0
	// Line 224, Address: 0x19217c, Func Offset: 0x1c
	// Line 226, Address: 0x192190, Func Offset: 0x30
	// Line 227, Address: 0x19219c, Func Offset: 0x3c
	// Line 229, Address: 0x1921ac, Func Offset: 0x4c
	// Line 232, Address: 0x1921b0, Func Offset: 0x50
	// Line 243, Address: 0x1921b4, Func Offset: 0x54
	// Line 244, Address: 0x1921c4, Func Offset: 0x64
	// Line 245, Address: 0x1921d8, Func Offset: 0x78
	// Line 247, Address: 0x1921e4, Func Offset: 0x84
	// Line 250, Address: 0x1921f8, Func Offset: 0x98
	// Line 251, Address: 0x1921fc, Func Offset: 0x9c
	// Line 253, Address: 0x192200, Func Offset: 0xa0
	// Line 252, Address: 0x192204, Func Offset: 0xa4
	// Line 253, Address: 0x192208, Func Offset: 0xa8
	// Line 256, Address: 0x192210, Func Offset: 0xb0
	// Line 255, Address: 0x192214, Func Offset: 0xb4
	// Line 256, Address: 0x192218, Func Offset: 0xb8
	// Line 257, Address: 0x192220, Func Offset: 0xc0
	// Line 258, Address: 0x192224, Func Offset: 0xc4
	// Line 259, Address: 0x192228, Func Offset: 0xc8
	// Line 260, Address: 0x19222c, Func Offset: 0xcc
	// Line 261, Address: 0x192230, Func Offset: 0xd0
	// Line 262, Address: 0x192234, Func Offset: 0xd4
	// Line 263, Address: 0x192238, Func Offset: 0xd8
	// Line 270, Address: 0x19223c, Func Offset: 0xdc
	// Line 271, Address: 0x192244, Func Offset: 0xe4
	// Line 270, Address: 0x192248, Func Offset: 0xe8
	// Line 271, Address: 0x19224c, Func Offset: 0xec
	// Line 272, Address: 0x192258, Func Offset: 0xf8
	// Line 273, Address: 0x192268, Func Offset: 0x108
	// Line 274, Address: 0x192274, Func Offset: 0x114
	// Line 275, Address: 0x19227c, Func Offset: 0x11c
	// Line 276, Address: 0x192290, Func Offset: 0x130
	// Line 277, Address: 0x192298, Func Offset: 0x138
	// Line 281, Address: 0x1922a8, Func Offset: 0x148
	// Line 284, Address: 0x1922b4, Func Offset: 0x154
	// Line 281, Address: 0x1922b8, Func Offset: 0x158
	// Line 284, Address: 0x1922bc, Func Offset: 0x15c
	// Line 285, Address: 0x1922c4, Func Offset: 0x164
	// Line 290, Address: 0x1922d0, Func Offset: 0x170
	// Line 298, Address: 0x1922ec, Func Offset: 0x18c
	// Line 303, Address: 0x1922f0, Func Offset: 0x190
	// Line 304, Address: 0x19230c, Func Offset: 0x1ac
	// Line 307, Address: 0x192310, Func Offset: 0x1b0
	// Line 312, Address: 0x192314, Func Offset: 0x1b4
	// Line 304, Address: 0x192318, Func Offset: 0x1b8
	// Line 307, Address: 0x192324, Func Offset: 0x1c4
	// Line 308, Address: 0x192328, Func Offset: 0x1c8
	// Line 312, Address: 0x19232c, Func Offset: 0x1cc
	// Line 314, Address: 0x19233c, Func Offset: 0x1dc
	// Line 315, Address: 0x19234c, Func Offset: 0x1ec
	// Line 322, Address: 0x192350, Func Offset: 0x1f0
	// Line 324, Address: 0x192364, Func Offset: 0x204
	// Line 326, Address: 0x19237c, Func Offset: 0x21c
	// Line 327, Address: 0x19238c, Func Offset: 0x22c
	// Line 333, Address: 0x192398, Func Offset: 0x238
	// Line 334, Address: 0x19239c, Func Offset: 0x23c
	// Line 335, Address: 0x1923a0, Func Offset: 0x240
	// Line 336, Address: 0x1923a4, Func Offset: 0x244
	// Line 337, Address: 0x1923a8, Func Offset: 0x248
	// Line 338, Address: 0x1923ac, Func Offset: 0x24c
	// Line 339, Address: 0x1923b0, Func Offset: 0x250
	// Line 343, Address: 0x1923b8, Func Offset: 0x258
	// Line 344, Address: 0x1923c4, Func Offset: 0x264
	// Line 346, Address: 0x1923cc, Func Offset: 0x26c
	// Func End, Address: 0x1923ec, Func Offset: 0x28c
}

// zEntPickupInit__FPvPv
// Start address: 0x1923f0
void zEntPickupInit(void* ent, void* asset)
{
	// Line 210, Address: 0x1923f0, Func Offset: 0
	// Func End, Address: 0x1923f8, Func Offset: 0x8
}

// PickupFallPhysics__FP11_zEntPickupP7_xScenef
// Start address: 0x192400
void PickupFallPhysics(_zEntPickup* ent, _xScene* sc, float32 dt)
{
	// Line 164, Address: 0x192400, Func Offset: 0
	// Line 166, Address: 0x192414, Func Offset: 0x14
	// Line 167, Address: 0x192420, Func Offset: 0x20
	// Line 166, Address: 0x19242c, Func Offset: 0x2c
	// Line 170, Address: 0x192430, Func Offset: 0x30
	// Line 174, Address: 0x192438, Func Offset: 0x38
	// Line 166, Address: 0x192444, Func Offset: 0x44
	// Line 175, Address: 0x192448, Func Offset: 0x48
	// Line 170, Address: 0x192450, Func Offset: 0x50
	// Line 174, Address: 0x192454, Func Offset: 0x54
	// Line 166, Address: 0x192458, Func Offset: 0x58
	// Line 167, Address: 0x1924d4, Func Offset: 0xd4
	// Line 168, Address: 0x1924e0, Func Offset: 0xe0
	// Line 170, Address: 0x1924f8, Func Offset: 0xf8
	// Line 171, Address: 0x1924fc, Func Offset: 0xfc
	// Line 174, Address: 0x192500, Func Offset: 0x100
	// Line 175, Address: 0x192508, Func Offset: 0x108
	// Line 176, Address: 0x192518, Func Offset: 0x118
	// Line 178, Address: 0x19251c, Func Offset: 0x11c
	// Line 179, Address: 0x192530, Func Offset: 0x130
	// Line 180, Address: 0x192544, Func Offset: 0x144
	// Line 183, Address: 0x192558, Func Offset: 0x158
	// Line 186, Address: 0x192584, Func Offset: 0x184
	// Line 188, Address: 0x192588, Func Offset: 0x188
	// Line 189, Address: 0x192594, Func Offset: 0x194
	// Line 190, Address: 0x192598, Func Offset: 0x198
	// Line 194, Address: 0x19259c, Func Offset: 0x19c
	// Line 195, Address: 0x1925b8, Func Offset: 0x1b8
	// Line 198, Address: 0x192640, Func Offset: 0x240
	// Line 200, Address: 0x19266c, Func Offset: 0x26c
	// Line 201, Address: 0x192670, Func Offset: 0x270
	// Line 202, Address: 0x192674, Func Offset: 0x274
	// Line 203, Address: 0x192678, Func Offset: 0x278
	// Line 204, Address: 0x192688, Func Offset: 0x288
	// Line 206, Address: 0x192694, Func Offset: 0x294
	// Func End, Address: 0x1926ac, Func Offset: 0x2ac
}

