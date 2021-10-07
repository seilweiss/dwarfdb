typedef struct RxPipeline;
typedef struct RxClusterDefinition;
typedef struct RwResEntry;
typedef struct _zEnt;
typedef struct _zParEmitter;
typedef struct p2BaseAsset;
typedef struct RpLight;
typedef struct _tagEmitRect;
typedef struct xAnimEffect;
typedef struct RpTriangle;
typedef struct zCutsceneZbufferHack;
typedef enum RxClusterValid;
typedef struct RxPipelineCluster;
typedef struct RxPipelineRequiresCluster;
typedef struct RwRGBA;
typedef struct _tagxCamStatic;
typedef struct RwFrame;
typedef struct p2EntAsset;
typedef struct RpInterpolator;
typedef struct rxReq;
typedef struct RpWorldSector;
typedef struct RwTexCoords;
typedef struct _tagxRumble;
typedef enum RwFogType;
typedef struct xAnimActiveEffect;
typedef struct xAnimPlay;
typedef struct zParEmitterAsset;
typedef struct RpMeshHeader;
typedef struct _tagxCamFrame;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RpPolygon;
typedef struct RxPipelineNodeTopSortData;
typedef struct xParGroup;
typedef struct _xEnt;
typedef struct xSurface;
typedef struct RxOutputSpec;
typedef struct _xVec3;
typedef struct RwV3d;
typedef struct RwRaster;
typedef struct xModelInstance;
typedef enum RxClusterForcePresent;
typedef struct RwCamera;
typedef struct RpMorphTarget;
typedef struct _tagxCamShoulderAsset;
typedef enum _tagTransType;
typedef struct xCutsceneData;
typedef struct RpVertexNormal;
typedef struct xFFX;
typedef struct xAnimFile;
typedef struct xParCmdTex;
typedef struct RxClusterRef;
typedef struct _tagEmitLine;
typedef struct iModelTag;
typedef struct zShaggy1Globals;
typedef enum RxNodeDefEditable;
typedef struct xCutsceneTime;
typedef struct xBase;
typedef struct xAnimTransitionList;
typedef struct xModelPool;
typedef struct _xMat4x3;
typedef struct _xScene;
typedef struct _tagxCamStaticFollow;
typedef struct _zEntDestructObj;
typedef struct _tagxCam;
typedef struct _xEntShadow;
typedef struct _iCollis;
typedef struct RxIoSpec;
typedef struct xQCData;
typedef struct xAnimTransition;
typedef struct zCheckPoint;
typedef struct rxHeapFreeBlock;
typedef struct RwTexDictionary;
typedef struct RpAtomic;
typedef struct zAssetPickupTable;
typedef struct RpClump;
typedef struct _xQuat;
typedef struct _xEnv;
typedef struct RxNodeMethods;
typedef struct xAnimSingle;
typedef struct zGlobalGameStats;
typedef enum _tagRumbleType;
typedef enum RpWorldRenderOrder;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xBBox;
typedef struct RwFrustumPlane;
typedef struct xPar;
typedef struct _zEntHangable;
typedef struct RwSurfaceProperties;
typedef struct xAnimState;
typedef struct RxNodeDefinition;
typedef struct xSerial;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct _tagEmitVolume;
typedef struct zEntDestructObjAsset;
typedef struct xParCmdAsset;
typedef struct xCutscene;
typedef struct _tagxCamPath;
typedef struct RpCollSector;
typedef struct _tagp2CamStaticAsset;
typedef struct RxCluster;
typedef struct _xEntFrame;
typedef struct xCutsceneInfo;
typedef struct zJumpParam;
typedef struct rxHeapBlockHeader;
typedef struct RwTexture;
typedef enum RxClusterValidityReq;
typedef struct _xRot;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct RwSphere;
typedef struct _xCollis;
typedef struct zPortalAsset;
typedef enum rxEmbeddedPacketState;
typedef enum _tagSDRumbleType;
typedef struct xCutsceneBreak;
typedef struct RpWorld;
typedef struct RxPacket;
typedef struct _tagxPad;
typedef struct xAnimTable;
typedef struct RpGeometry;
typedef struct _tagEmitOffsetPoint;
typedef enum RwTextureAddressMode;
typedef struct zScene;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct p2LinkAsset;
typedef struct RxPipelineNode;
typedef struct RpMaterialList;
typedef struct _xEntDrive;
typedef struct RpSector;
typedef struct RpMaterial;
typedef struct _zPortal;
typedef struct RxPipelineNodeParam;
typedef struct _zCutsceneMgr;
typedef struct iShadowCache;
typedef struct zPlayerStatic;
typedef struct _tagxCamFollow;
typedef struct zCutsceneZbuffer;
typedef struct RwLLLink;
typedef struct _zParEmitterCustomSettings;
typedef struct _tagxCamPathAsset;
typedef struct _zPlatform;
typedef struct RwRGBAReal;
typedef struct _tagEmitCircle;
typedef struct _xSphere;
typedef struct _xBound;
typedef struct tag_xFile;
typedef struct sceCdlFILE;
typedef struct RwV2d;
typedef enum _tagPadState;
typedef struct _xCylinder;
typedef struct iEnv;
typedef struct _tagxCamShoulder;
typedef struct tag_iFile;
typedef struct _tagiPad;
typedef struct p2EntHangableAsset;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef struct _xEntCollis;
typedef struct _tagEmitSphere;
typedef struct _xBox;
typedef struct _tagxCamFollowAsset;
typedef struct xCamAsset;
typedef enum RwCameraProjection;
typedef struct zCutsceneMgrAsset;
typedef struct RwObjectHasFrame;
typedef struct _tagPadAnalog;
typedef struct RwPlane;
typedef enum _tagCamType;
typedef struct RwLinkList;
typedef struct zPlayerGlobals;
typedef struct iFogParams;

typedef uint32(*type_0)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef int32(*type_4)(RxPipelineNode*);
typedef int32(*type_5)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_7)(RwResEntry*);
typedef void(*type_8)(RxPipelineNode*);
typedef void(*type_11)(_xEnt*);
typedef int32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef void(*type_14)(_xEnt*, _xVec3*);
typedef uint32(*type_15)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_23)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef RwCamera*(*type_29)(RwCamera*);
typedef void(*type_30)(void*, xParGroup*);
typedef RwCamera*(*type_36)(RwCamera*);
typedef RpClump*(*type_41)(RpClump*, void*);
typedef int32(*type_44)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpWorldSector*(*type_45)(RpWorldSector*);
typedef void(*type_51)(xMemPool*, void*);
typedef xBase*(*type_54)(uint32);
typedef int8*(*type_57)(xBase*);
typedef int8*(*type_60)(uint32);
typedef RpAtomic*(*type_61)(RpAtomic*);
typedef int32(*type_64)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_67)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_68)(RxNodeDefinition*);
typedef void(*type_73)(RxNodeDefinition*);
typedef void(*type_80)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_85)(int32);
typedef uint32(*type_86)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_90)(_xEnt*, _xScene*, float32);
typedef void(*type_96)(_zEntDestructObj*, _xScene*, float32);
typedef void(*type_97)(_xEnt*);
typedef void(*type_104)(_xEnt*, _xVec3*);
typedef void(*type_112)(_zEntDestructObj*, _xScene*, float32, _xEntFrame*);

typedef float32 type_1[2];
typedef RpLight* type_3[2];
typedef int8 type_6[16];
typedef int8 type_9[16];
typedef RwFrame* type_10[2];
typedef RwTexCoords* type_12[8];
typedef uint8 type_16[4];
typedef uint32 type_17[2];
typedef uint8 type_18[4];
typedef uint8 type_19[3];
typedef _xCollis type_20[18];
typedef RwTexCoords* type_21[8];
typedef uint8 type_22[3];
typedef float32 type_24[15];
typedef _xVec4 type_25[8];
typedef uint8 type_26[22];
typedef float32 type_27[15];
typedef uint8 type_28[22];
typedef uint32 type_31[15];
typedef float32 type_32[4];
typedef uint8 type_33[8];
typedef uint8 type_34[8];
typedef uint8 type_35[2];
typedef uint8 type_37[8];
typedef float32 type_38[4];
typedef uint8 type_39[8];
typedef float32 type_40[4];
typedef uint8 type_42[2];
typedef uint8 type_43[4];
typedef uint8 type_46[3];
typedef uint32 type_47[2];
typedef int8 type_48[16];
typedef iModelTag type_49[4];
typedef uint8 type_50[3];
typedef int8 type_52[32];
typedef _xVec3 type_53[2];
typedef int8 type_55[32];
typedef uint8 type_56[3];
typedef _xQuat type_58[2];
typedef uint8 type_59[2];
typedef uint8 type_62[2];
typedef uint8 type_63[3];
typedef int8 type_65[128];
typedef int8 type_66[128][6];
typedef _xVec3 type_69[4];
typedef float32 type_70[4];
typedef uint8 type_71[3];
typedef float32 type_72[4];
typedef float32 type_74[4];
typedef float32 type_75[4];
typedef int8 type_76[32];
typedef float32 type_77[4];
typedef float32 type_78[4];
typedef uint16 type_79[3];
typedef float32 type_81[4];
typedef uint16 type_82[3];
typedef float32 type_83[3];
typedef RwFrustumPlane type_84[6];
typedef uint8 type_87[4];
typedef float32 type_88[3];
typedef uint8 type_89[4];
typedef int8 type_91[16];
typedef RwV3d type_92[8];
typedef zCutsceneZbuffer type_93[4];
typedef zGlobalGameStats type_94[30];
typedef uint8 type_95[8];
typedef zGlobalGameStats type_98[13];
typedef int8 type_99[128];
typedef _zEnt* type_100[10];
typedef uint8 type_101[2];
typedef uint32 type_102[1];
typedef zGlobalGameStats type_103[4];
typedef RxCluster type_105[1];
typedef uint8 type_106[3];
typedef int32 type_107[2];
typedef uint32 type_108[2];
typedef int32 type_109[2];
typedef uint32 type_110[4];
typedef uint32 type_111[2];
typedef uint32 type_113[43];
typedef uint32 type_114[2];
typedef xBase* type_115[43];

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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct st_SERIAL_CLIENTINFO
{
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct xFFX
{
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct _zEntDestructObj : _zEnt
{
	zEntDestructObjAsset* dasset;
	uint32 state;
	uint32 healthCnt;
	float32 fx_timer;
	_zParEmitter* fx_emitter;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct _iCollis
{
	int32 unknown;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct zEntDestructObjAsset
{
	float32 animSpeed;
	uint32 initAnimState;
	uint32 health;
	uint32 spawnItemID;
	uint32 dflags;
	uint8 collType;
	uint8 fxType;
	uint8 pad[2];
	float32 blast_radius;
	float32 blast_strength;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagSDRumbleType
{
	SDR_Digging,
	SDR_Headbutt,
	SDR_ButtbounceJump,
	SDR_Buttbounce,
	SDR_VillainCollideScare,
	SDR_FleaScratch,
	SDR_ScreechingStop,
	SDR_GotScared,
	SDR_WebDestroyed,
	SDR_XploDestroyedObj,
	SDR_DustDestroyedObj,
	SDR_EventLight,
	SDR_EventMedium,
	SDR_EventHeavy,
	SDR_Test,
	SDR_FireworkBang,
	SDR_Total
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpSector
{
	int32 type;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct _zPlatform
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _tagEmitCircle
{
	float32 radius;
	float32 deflection;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

struct RwV2d
{
	float32 x;
	float32 y;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct _tagEmitSphere
{
	float32 radius;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RwLinkList
{
	RwLLLink link;
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

_zParEmitter* sEmitDust;
_zParEmitter* sEmitXplo;
_zParEmitter* sEmitWeb;
zGlobals globals;
int32(*zEntDestructObjEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntDestructObj_Update)(_zEntDestructObj*, _xScene*, float32);
void(*zEntDextructObj_Move)(_zEntDestructObj*, _xScene*, float32, _xEntFrame*);

int32 zEntDestructObjEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zEntDestructObj_DestroyFX(_zEntDestructObj* o);
uint32 zEntDestructObj_CheckState(_zEntDestructObj* ent);
void zEntDestructObj_Load(_zEntDestructObj* ent, xSerial* s);
void zEntDestructObj_Save(_zEntDestructObj* ent, xSerial* s);
uint32 zEntDestructObj_Headbutt(_zEntDestructObj* ent);
uint32 zEntDestructObj_ButtBounce(_zEntDestructObj* ent);
void zEntDestructObj_Update(_zEntDestructObj* ent, _xScene* sc, float32 dt);
void zEntDextructObj_Move();
void zEntDestructObj_Init(_zEntDestructObj* ent, p2EntAsset* asset);
void zEntDestructObj_Init(void* ent, void* asset);
void zEntDestructObj_FindFX();

// zEntDestructObjEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a5750
int32 zEntDestructObjEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	_zEntDestructObj* s;
	// Line 273, Address: 0x1a5750, Func Offset: 0
	// Line 282, Address: 0x1a575c, Func Offset: 0xc
	// Line 285, Address: 0x1a5814, Func Offset: 0xc4
	// Line 286, Address: 0x1a581c, Func Offset: 0xcc
	// Line 288, Address: 0x1a5824, Func Offset: 0xd4
	// Line 289, Address: 0x1a582c, Func Offset: 0xdc
	// Line 291, Address: 0x1a5834, Func Offset: 0xe4
	// Line 292, Address: 0x1a583c, Func Offset: 0xec
	// Line 294, Address: 0x1a5844, Func Offset: 0xf4
	// Line 295, Address: 0x1a584c, Func Offset: 0xfc
	// Line 297, Address: 0x1a5854, Func Offset: 0x104
	// Line 298, Address: 0x1a5860, Func Offset: 0x110
	// Line 299, Address: 0x1a5868, Func Offset: 0x118
	// Line 301, Address: 0x1a5870, Func Offset: 0x120
	// Line 302, Address: 0x1a587c, Func Offset: 0x12c
	// Line 303, Address: 0x1a5884, Func Offset: 0x134
	// Line 305, Address: 0x1a588c, Func Offset: 0x13c
	// Line 307, Address: 0x1a5890, Func Offset: 0x140
	// Line 305, Address: 0x1a5894, Func Offset: 0x144
	// Line 306, Address: 0x1a589c, Func Offset: 0x14c
	// Line 307, Address: 0x1a58a4, Func Offset: 0x154
	// Line 308, Address: 0x1a58ac, Func Offset: 0x15c
	// Line 311, Address: 0x1a58b4, Func Offset: 0x164
	// Line 312, Address: 0x1a5910, Func Offset: 0x1c0
	// Line 322, Address: 0x1a5918, Func Offset: 0x1c8
	// Line 323, Address: 0x1a5928, Func Offset: 0x1d8
	// Line 326, Address: 0x1a5930, Func Offset: 0x1e0
	// Line 327, Address: 0x1a5938, Func Offset: 0x1e8
	// Line 330, Address: 0x1a5940, Func Offset: 0x1f0
	// Line 334, Address: 0x1a594c, Func Offset: 0x1fc
	// Line 336, Address: 0x1a5958, Func Offset: 0x208
	// Line 339, Address: 0x1a5960, Func Offset: 0x210
	// Line 340, Address: 0x1a596c, Func Offset: 0x21c
	// Line 344, Address: 0x1a597c, Func Offset: 0x22c
	// Line 347, Address: 0x1a5988, Func Offset: 0x238
	// Line 350, Address: 0x1a5990, Func Offset: 0x240
	// Line 352, Address: 0x1a599c, Func Offset: 0x24c
	// Line 353, Address: 0x1a59a8, Func Offset: 0x258
	// Line 364, Address: 0x1a59b0, Func Offset: 0x260
	// Line 363, Address: 0x1a59b8, Func Offset: 0x268
	// Line 364, Address: 0x1a59bc, Func Offset: 0x26c
	// Func End, Address: 0x1a59c4, Func Offset: 0x274
}

// zEntDestructObj_DestroyFX__FP16_zEntDestructObj
// Start address: 0x1a59d0
void zEntDestructObj_DestroyFX(_zEntDestructObj* o)
{
	_tagSDRumbleType rt;
	// Line 214, Address: 0x1a59d0, Func Offset: 0
	// Line 218, Address: 0x1a59d4, Func Offset: 0x4
	// Line 214, Address: 0x1a59d8, Func Offset: 0x8
	// Line 218, Address: 0x1a59dc, Func Offset: 0xc
	// Line 221, Address: 0x1a59e4, Func Offset: 0x14
	// Line 225, Address: 0x1a5a1c, Func Offset: 0x4c
	// Line 228, Address: 0x1a5a24, Func Offset: 0x54
	// Line 229, Address: 0x1a5a28, Func Offset: 0x58
	// Line 230, Address: 0x1a5a2c, Func Offset: 0x5c
	// Line 233, Address: 0x1a5a34, Func Offset: 0x64
	// Line 234, Address: 0x1a5a38, Func Offset: 0x68
	// Line 235, Address: 0x1a5a3c, Func Offset: 0x6c
	// Line 238, Address: 0x1a5a44, Func Offset: 0x74
	// Line 239, Address: 0x1a5a48, Func Offset: 0x78
	// Line 238, Address: 0x1a5a4c, Func Offset: 0x7c
	// Line 250, Address: 0x1a5a50, Func Offset: 0x80
	// Line 253, Address: 0x1a5a5c, Func Offset: 0x8c
	// Line 255, Address: 0x1a5a68, Func Offset: 0x98
	// Line 253, Address: 0x1a5a70, Func Offset: 0xa0
	// Line 255, Address: 0x1a5a9c, Func Offset: 0xcc
	// Line 256, Address: 0x1a5abc, Func Offset: 0xec
	// Line 258, Address: 0x1a5ac4, Func Offset: 0xf4
	// Func End, Address: 0x1a5ad0, Func Offset: 0x100
}

// zEntDestructObj_CheckState__FP16_zEntDestructObj
// Start address: 0x1a5ad0
uint32 zEntDestructObj_CheckState(_zEntDestructObj* ent)
{
	// Line 207, Address: 0x1a5ad0, Func Offset: 0
	// Func End, Address: 0x1a5ad8, Func Offset: 0x8
}

// zEntDestructObj_Load__FP16_zEntDestructObjP7xSerial
// Start address: 0x1a5ae0
void zEntDestructObj_Load(_zEntDestructObj* ent, xSerial* s)
{
	// Line 176, Address: 0x1a5ae0, Func Offset: 0
	// Line 177, Address: 0x1a5af4, Func Offset: 0x14
	// Line 182, Address: 0x1a5afc, Func Offset: 0x1c
	// Line 183, Address: 0x1a5b08, Func Offset: 0x28
	// Func End, Address: 0x1a5b1c, Func Offset: 0x3c
}

// zEntDestructObj_Save__FP16_zEntDestructObjP7xSerial
// Start address: 0x1a5b20
void zEntDestructObj_Save(_zEntDestructObj* ent, xSerial* s)
{
	// Line 156, Address: 0x1a5b20, Func Offset: 0
	// Line 157, Address: 0x1a5b34, Func Offset: 0x14
	// Line 162, Address: 0x1a5b3c, Func Offset: 0x1c
	// Line 163, Address: 0x1a5b48, Func Offset: 0x28
	// Func End, Address: 0x1a5b5c, Func Offset: 0x3c
}

// zEntDestructObj_Headbutt__FP16_zEntDestructObj
// Start address: 0x1a5b60
uint32 zEntDestructObj_Headbutt(_zEntDestructObj* ent)
{
	// Line 134, Address: 0x1a5b60, Func Offset: 0
	// Line 137, Address: 0x1a5b74, Func Offset: 0x14
	// Line 144, Address: 0x1a5b84, Func Offset: 0x24
	// Func End, Address: 0x1a5b8c, Func Offset: 0x2c
}

// zEntDestructObj_ButtBounce__FP16_zEntDestructObj
// Start address: 0x1a5b90
uint32 zEntDestructObj_ButtBounce(_zEntDestructObj* ent)
{
	// Line 127, Address: 0x1a5b90, Func Offset: 0
	// Line 130, Address: 0x1a5ba0, Func Offset: 0x10
	// Func End, Address: 0x1a5ba8, Func Offset: 0x18
}

// zEntDestructObj_Update__FP16_zEntDestructObjP7_xScenef
// Start address: 0x1a5bb0
void zEntDestructObj_Update(_zEntDestructObj* ent, _xScene* sc, float32 dt)
{
	_zParEmitterCustomSettings info;
	// Line 101, Address: 0x1a5bb0, Func Offset: 0
	// Line 103, Address: 0x1a5bc4, Func Offset: 0x14
	// Line 106, Address: 0x1a5bcc, Func Offset: 0x1c
	// Line 107, Address: 0x1a5bdc, Func Offset: 0x2c
	// Line 109, Address: 0x1a5be4, Func Offset: 0x34
	// Line 113, Address: 0x1a5be8, Func Offset: 0x38
	// Line 118, Address: 0x1a5c10, Func Offset: 0x60
	// Line 119, Address: 0x1a5c14, Func Offset: 0x64
	// Line 115, Address: 0x1a5c18, Func Offset: 0x68
	// Line 119, Address: 0x1a5c1c, Func Offset: 0x6c
	// Line 120, Address: 0x1a5c28, Func Offset: 0x78
	// Line 119, Address: 0x1a5c2c, Func Offset: 0x7c
	// Line 120, Address: 0x1a5c40, Func Offset: 0x90
	// Line 122, Address: 0x1a5c4c, Func Offset: 0x9c
	// Func End, Address: 0x1a5c60, Func Offset: 0xb0
}

// zEntDextructObj_Move__FP16_zEntDestructObjP7_xScenefP10_xEntFrame
// Start address: 0x1a5c60
void zEntDextructObj_Move()
{
	// Line 98, Address: 0x1a5c60, Func Offset: 0
	// Func End, Address: 0x1a5c68, Func Offset: 0x8
}

// zEntDestructObj_Init__FP16_zEntDestructObjP10p2EntAsset
// Start address: 0x1a5c70
void zEntDestructObj_Init(_zEntDestructObj* ent, p2EntAsset* asset)
{
	zEntDestructObjAsset* dasset;
	// Line 52, Address: 0x1a5c70, Func Offset: 0
	// Line 54, Address: 0x1a5c80, Func Offset: 0x10
	// Line 61, Address: 0x1a5c94, Func Offset: 0x24
	// Line 62, Address: 0x1a5c98, Func Offset: 0x28
	// Line 63, Address: 0x1a5c9c, Func Offset: 0x2c
	// Line 68, Address: 0x1a5ca4, Func Offset: 0x34
	// Line 70, Address: 0x1a5cb0, Func Offset: 0x40
	// Line 73, Address: 0x1a5cb4, Func Offset: 0x44
	// Line 74, Address: 0x1a5cc8, Func Offset: 0x58
	// Line 76, Address: 0x1a5cd8, Func Offset: 0x68
	// Line 80, Address: 0x1a5cdc, Func Offset: 0x6c
	// Line 81, Address: 0x1a5ce8, Func Offset: 0x78
	// Line 82, Address: 0x1a5cf4, Func Offset: 0x84
	// Line 84, Address: 0x1a5d00, Func Offset: 0x90
	// Line 85, Address: 0x1a5d0c, Func Offset: 0x9c
	// Line 87, Address: 0x1a5d1c, Func Offset: 0xac
	// Line 89, Address: 0x1a5d20, Func Offset: 0xb0
	// Line 92, Address: 0x1a5d2c, Func Offset: 0xbc
	// Line 94, Address: 0x1a5d34, Func Offset: 0xc4
	// Func End, Address: 0x1a5d48, Func Offset: 0xd8
}

// zEntDestructObj_Init__FPvPv
// Start address: 0x1a5d50
void zEntDestructObj_Init(void* ent, void* asset)
{
	// Line 48, Address: 0x1a5d50, Func Offset: 0
	// Func End, Address: 0x1a5d58, Func Offset: 0x8
}

// zEntDestructObj_FindFX__Fv
// Start address: 0x1a5d60
void zEntDestructObj_FindFX()
{
	// Line 38, Address: 0x1a5d60, Func Offset: 0
	// Line 39, Address: 0x1a5d64, Func Offset: 0x4
	// Line 38, Address: 0x1a5d68, Func Offset: 0x8
	// Line 39, Address: 0x1a5d6c, Func Offset: 0xc
	// Line 40, Address: 0x1a5d78, Func Offset: 0x18
	// Line 41, Address: 0x1a5d88, Func Offset: 0x28
	// Line 42, Address: 0x1a5d98, Func Offset: 0x38
	// Func End, Address: 0x1a5da4, Func Offset: 0x44
}

