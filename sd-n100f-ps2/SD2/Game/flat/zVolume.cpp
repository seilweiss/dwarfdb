typedef struct _xRot;
typedef struct zCutsceneZbufferHack;
typedef struct tag_xFile;
typedef struct xAnimState;
typedef struct _zEnt;
typedef struct xModelPool;
typedef struct _xEntFrame;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct xCutsceneInfo;
typedef struct RwRGBA;
typedef struct _tagxRumble;
typedef struct _xVec3;
typedef struct RxClusterDefinition;
typedef struct iFogParams;
typedef struct xBase;
typedef struct _zVolume;
typedef struct rxHeapFreeBlock;
typedef struct _xEntCollis;
typedef struct RwResEntry;
typedef struct xModelInstance;
typedef struct tag_iFile;
typedef struct RwRaster;
typedef struct _xEnt;
typedef struct RxNodeMethods;
typedef struct RwTexDictionary;
typedef struct rxReq;
typedef struct RpAtomic;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _tagxCam;
typedef struct RwSurfaceProperties;
typedef struct RpClump;
typedef struct _tagxCamShoulder;
typedef struct RxNodeDefinition;
typedef enum RpWorldRenderOrder;
typedef struct _xMat4x3;
typedef struct xSerial;
typedef struct RwFrame;
typedef struct RxHeap;
typedef struct _zCutsceneMgr;
typedef struct p2EntAsset;
typedef struct zShaggy1Globals;
typedef struct xAnimEffect;
typedef struct RxCluster;
typedef struct RpCollSector;
typedef struct _tagxCamFollowAsset;
typedef struct zCutsceneMgrAsset;
typedef struct zVolumeAsset;
typedef struct xCamAsset;
typedef struct xSurface;
typedef struct RxClusterRef;
typedef struct RpMeshHeader;
typedef struct rxHeapBlockHeader;
typedef struct _xBound;
typedef struct xCutscene;
typedef struct xAnimActiveEffect;
typedef struct RxPipeline;
typedef struct zCheckPoint;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineCluster;
typedef struct RwSphere;
typedef struct xAnimPlay;
typedef enum _tagCamType;
typedef struct RpWorldSector;
typedef struct _xEnv;
typedef struct xFFX;
typedef enum _tagRumbleType;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct zGlobalGameStats;
typedef struct zPortalAsset;
typedef struct _zEntHangable;
typedef enum RwTextureAddressMode;
typedef struct xAnimFile;
typedef struct _xSphere;
typedef struct RpWorld;
typedef struct _tagxCamStatic;
typedef struct RxPipelineNode;
typedef struct xAnimTransitionList;
typedef struct RpGeometry;
typedef struct _xEntShadow;
typedef struct iEnv;
typedef struct zAssetPickupTable;
typedef struct p2LinkAsset;
typedef struct RpVertexNormal;
typedef struct PreCalcOcclude;
typedef struct RpMaterialList;
typedef struct RxPipelineNodeParam;
typedef struct zJumpParam;
typedef struct xAnimTransition;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMorphTarget;
typedef struct _xCylinder;
typedef struct xCutsceneTime;
typedef struct RpMaterial;
typedef struct _tagxCamFrame;
typedef struct _xCollis;
typedef struct xCutsceneData;
typedef struct xMemPool;
typedef struct RpSector;
typedef struct xAnimSingle;
typedef struct _tagxCamShoulderAsset;
typedef struct RwCamera;
typedef struct zGlobals;
typedef enum _tagTransType;
typedef struct iModelTag;
typedef struct RpLight;
typedef struct RwLLLink;
typedef struct RwV3d;
typedef struct _xBox;
typedef struct _iCollis;
typedef struct _tagxPad;
typedef struct _tagxCamStaticFollow;
typedef struct RwRGBAReal;
typedef enum RwCameraProjection;
typedef struct RpPolygon;
typedef struct _zPortal;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineRequiresCluster;
typedef struct RwV2d;
typedef struct zPlayerStatic;
typedef struct RpTriangle;
typedef struct iShadowCache;
typedef struct zScene;
typedef enum RwTextureFilterMode;
typedef struct xAnimTable;
typedef struct _tagxCamPath;
typedef struct RwObject;
typedef struct _tagp2CamStaticAsset;
typedef struct _zPlatform;
typedef enum RxClusterValid;
typedef struct xCutsceneBreak;
typedef struct _xScene;
typedef struct p2EntHangableAsset;
typedef struct xQCData;
typedef struct p2BaseAsset;
typedef struct RwPlane;
typedef struct RwLinkList;
typedef enum _tagPadState;
typedef struct _xEntDrive;
typedef struct _xBBox;
typedef struct _tagiPad;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct zCutsceneZbuffer;
typedef enum RwFogType;
typedef struct _xQuat;
typedef struct RwTexCoords;
typedef struct _tagxCamFollow;
typedef struct RpInterpolator;
typedef struct RwFrustumPlane;
typedef struct _tagPadAnalog;
typedef enum RxClusterForcePresent;
typedef struct _xVec4;
typedef struct zPlayerGlobals;
typedef struct RwBBox;
typedef enum RxNodeDefEditable;
typedef struct _tagxCamPathAsset;
typedef struct sceCdlFILE;

typedef uint32(*type_0)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_2)(_xEnt*);
typedef void(*type_3)(int32);
typedef uint32(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_11)(_xEnt*);
typedef RwCamera*(*type_13)(RwCamera*);
typedef void(*type_15)(_xEnt*, _xVec3*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RpClump*(*type_22)(RpClump*, void*);
typedef void(*type_26)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef RpWorldSector*(*type_29)(RpWorldSector*);
typedef xBase*(*type_30)(uint32);
typedef int8*(*type_33)(xBase*);
typedef int8*(*type_35)(uint32);
typedef int32(*type_39)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpAtomic*(*type_40)(RpAtomic*);
typedef int32(*type_43)(RxNodeDefinition*);
typedef void(*type_50)(xMemPool*, void*);
typedef void(*type_51)(RxNodeDefinition*);
typedef int32(*type_59)(RxPipelineNode*);
typedef void(*type_60)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_65)(RwObjectHasFrame*);
typedef int32(*type_66)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_77)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_83)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_84)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_86)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_88)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_90)(RwResEntry*);
typedef void(*type_91)(_xEnt*, _xScene*, float32);
typedef void(*type_103)(_xEnt*, _xVec3*);

typedef RwTexCoords* type_1[8];
typedef int8 type_4[16];
typedef zCutsceneZbuffer type_5[4];
typedef uint8 type_7[8];
typedef int8 type_8[128];
typedef uint32 type_9[2];
typedef int8 type_10[32];
typedef uint32 type_12[2];
typedef int8 type_14[32];
typedef float32 type_16[2];
typedef uint32 type_17[2];
typedef uint8 type_19[22];
typedef uint32 type_20[2];
typedef uint32 type_21[43];
typedef uint8 type_23[22];
typedef xBase* type_24[43];
typedef _xCollis type_25[18];
typedef _xVec3 type_27[5];
typedef int8 type_28[16];
typedef int8 type_31[16];
typedef uint8 type_32[8];
typedef uint8 type_34[8];
typedef uint8 type_36[8];
typedef uint8 type_37[8];
typedef RwFrustumPlane type_38[6];
typedef uint8 type_41[3];
typedef _xVec4 type_42[4];
typedef RwV3d type_44[8];
typedef float32 type_45[15];
typedef float32 type_46[4];
typedef RpLight* type_47[2];
typedef iModelTag type_48[4];
typedef float32 type_49[15];
typedef float32 type_52[4];
typedef RwFrame* type_53[2];
typedef _xVec4 type_54[8];
typedef uint32 type_55[15];
typedef float32 type_56[4];
typedef uint8 type_57[2];
typedef float32 type_58[4];
typedef uint16 type_61[3];
typedef int8 type_62[128];
typedef int8 type_63[128][6];
typedef uint16 type_64[3];
typedef float32 type_67[4];
typedef PreCalcOcclude type_68[10];
typedef _xVec3 type_69[4];
typedef _xVec3 type_70[2];
typedef float32 type_71[4];
typedef RxCluster type_72[1];
typedef _xQuat type_73[2];
typedef float32 type_74[4];
typedef int8 type_75[32];
typedef int8 type_76[16];
typedef float32 type_78[4];
typedef uint8 type_79[3];
typedef uint32 type_80[4];
typedef float32 type_81[4];
typedef uint32 type_82[2];
typedef float32 type_85[3];
typedef uint8 type_87[3];
typedef float32 type_89[3];
typedef zGlobalGameStats type_92[30];
typedef _xVec4 type_93[4];
typedef zGlobalGameStats type_94[13];
typedef _zEnt* type_95[10];
typedef uint32 type_96[1];
typedef zGlobalGameStats type_97[4];
typedef _zVolume* type_98[10];
typedef int32 type_99[2];
typedef int32 type_100[2];
typedef RwTexCoords* type_101[8];
typedef uint8 type_102[3];

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct _zVolume : xBase
{
	zVolumeAsset* asset;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct rxReq
{
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xSerial
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct zVolumeAsset : p2BaseAsset
{
	uint32 flags;
	_xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct xFFX
{
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct _tagxCamStatic
{
	uint32 unused;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct PreCalcOcclude
{
	_xVec4 DepthVec;
	_xVec4 FrustVec[4];
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RpSector
{
	int32 type;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _iCollis
{
	int32 unknown;
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

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct _zPlatform
{
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RwLinkList
{
	RwLLLink link;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _tagiPad
{
	int32 port;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
};

_zVolume* vols;
uint16 nvols;
int32 gOccludeCount;
_zVolume* gOccludeList[10];
int32 gOccludeCalcCount;
PreCalcOcclude gOccludeCalc[10];
int32 occludeAlwaysFalse;
zGlobals globals;
int32(*zVolumeEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

int32 zVolumeEventCB(xBase* to, uint32 toEvent);
int32 zVolume_OccludeTest(RpAtomic* model, RwMatrixTag* mat);
void zVolume_OccludePrecalc(_xVec3* camPos);
_zVolume* zVolumeGetVolume(uint16 n);
_xBound* zVolumeGetBound(_zVolume* vol);
void zVolumeSetup();
void zVolumeInit();
void zVolumeLoad(_zVolume* ent, xSerial* s);
void zVolumeSave(_zVolume* ent, xSerial* s);

// zVolumeEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a67b0
int32 zVolumeEventCB(xBase* to, uint32 toEvent)
{
	int32 i;
	_zVolume* vol;
	// Line 411, Address: 0x1a67b0, Func Offset: 0
	// Line 419, Address: 0x1a67b4, Func Offset: 0x4
	// Line 422, Address: 0x1a67e0, Func Offset: 0x30
	// Line 423, Address: 0x1a67f0, Func Offset: 0x40
	// Line 426, Address: 0x1a67f8, Func Offset: 0x48
	// Line 427, Address: 0x1a6808, Func Offset: 0x58
	// Line 428, Address: 0x1a6814, Func Offset: 0x64
	// Line 429, Address: 0x1a6820, Func Offset: 0x70
	// Line 430, Address: 0x1a682c, Func Offset: 0x7c
	// Line 431, Address: 0x1a6834, Func Offset: 0x84
	// Line 432, Address: 0x1a6844, Func Offset: 0x94
	// Line 433, Address: 0x1a684c, Func Offset: 0x9c
	// Line 434, Address: 0x1a6854, Func Offset: 0xa4
	// Line 437, Address: 0x1a6860, Func Offset: 0xb0
	// Line 438, Address: 0x1a6878, Func Offset: 0xc8
	// Line 439, Address: 0x1a6884, Func Offset: 0xd4
	// Line 441, Address: 0x1a6890, Func Offset: 0xe0
	// Line 439, Address: 0x1a6894, Func Offset: 0xe4
	// Line 440, Address: 0x1a6898, Func Offset: 0xe8
	// Line 441, Address: 0x1a68a0, Func Offset: 0xf0
	// Line 442, Address: 0x1a68a8, Func Offset: 0xf8
	// Line 444, Address: 0x1a68bc, Func Offset: 0x10c
	// Line 445, Address: 0x1a68c0, Func Offset: 0x110
	// Line 446, Address: 0x1a68c4, Func Offset: 0x114
	// Func End, Address: 0x1a68d0, Func Offset: 0x120
}

// zVolume_OccludeTest__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1a68d0
int32 zVolume_OccludeTest(RpAtomic* model, RwMatrixTag* mat)
{
	int32 i;
	// Line 305, Address: 0x1a68d0, Func Offset: 0
	// Line 306, Address: 0x1a68dc, Func Offset: 0xc
	// Line 307, Address: 0x1a68e0, Func Offset: 0x10
	// Line 308, Address: 0x1a68e4, Func Offset: 0x14
	// Line 309, Address: 0x1a68e8, Func Offset: 0x18
	// Line 310, Address: 0x1a68ec, Func Offset: 0x1c
	// Line 311, Address: 0x1a68f0, Func Offset: 0x20
	// Line 312, Address: 0x1a68f4, Func Offset: 0x24
	// Line 313, Address: 0x1a68f8, Func Offset: 0x28
	// Line 314, Address: 0x1a68fc, Func Offset: 0x2c
	// Line 315, Address: 0x1a6900, Func Offset: 0x30
	// Line 316, Address: 0x1a6904, Func Offset: 0x34
	// Line 317, Address: 0x1a6908, Func Offset: 0x38
	// Line 318, Address: 0x1a690c, Func Offset: 0x3c
	// Line 319, Address: 0x1a6910, Func Offset: 0x40
	// Line 320, Address: 0x1a6914, Func Offset: 0x44
	// Line 321, Address: 0x1a6918, Func Offset: 0x48
	// Line 322, Address: 0x1a691c, Func Offset: 0x4c
	// Line 323, Address: 0x1a6920, Func Offset: 0x50
	// Line 324, Address: 0x1a6924, Func Offset: 0x54
	// Line 325, Address: 0x1a6928, Func Offset: 0x58
	// Line 326, Address: 0x1a692c, Func Offset: 0x5c
	// Line 327, Address: 0x1a6930, Func Offset: 0x60
	// Line 328, Address: 0x1a6934, Func Offset: 0x64
	// Line 329, Address: 0x1a6938, Func Offset: 0x68
	// Line 330, Address: 0x1a693c, Func Offset: 0x6c
	// Line 331, Address: 0x1a6940, Func Offset: 0x70
	// Line 332, Address: 0x1a6944, Func Offset: 0x74
	// Line 333, Address: 0x1a6948, Func Offset: 0x78
	// Line 334, Address: 0x1a694c, Func Offset: 0x7c
	// Line 335, Address: 0x1a6950, Func Offset: 0x80
	// Line 336, Address: 0x1a6954, Func Offset: 0x84
	// Line 337, Address: 0x1a6958, Func Offset: 0x88
	// Line 338, Address: 0x1a695c, Func Offset: 0x8c
	// Line 339, Address: 0x1a6960, Func Offset: 0x90
	// Line 340, Address: 0x1a6964, Func Offset: 0x94
	// Line 341, Address: 0x1a6968, Func Offset: 0x98
	// Line 342, Address: 0x1a696c, Func Offset: 0x9c
	// Line 343, Address: 0x1a6970, Func Offset: 0xa0
	// Line 345, Address: 0x1a6978, Func Offset: 0xa8
	// Line 346, Address: 0x1a697c, Func Offset: 0xac
	// Line 347, Address: 0x1a6980, Func Offset: 0xb0
	// Line 348, Address: 0x1a6984, Func Offset: 0xb4
	// Line 349, Address: 0x1a6988, Func Offset: 0xb8
	// Line 350, Address: 0x1a698c, Func Offset: 0xbc
	// Line 363, Address: 0x1a6994, Func Offset: 0xc4
	// Line 364, Address: 0x1a69a8, Func Offset: 0xd8
	// Line 365, Address: 0x1a69b4, Func Offset: 0xe4
	// Line 366, Address: 0x1a69b8, Func Offset: 0xe8
	// Line 367, Address: 0x1a69bc, Func Offset: 0xec
	// Line 368, Address: 0x1a69c0, Func Offset: 0xf0
	// Line 369, Address: 0x1a69c4, Func Offset: 0xf4
	// Line 370, Address: 0x1a69c8, Func Offset: 0xf8
	// Line 371, Address: 0x1a69cc, Func Offset: 0xfc
	// Line 372, Address: 0x1a69d0, Func Offset: 0x100
	// Line 373, Address: 0x1a69d4, Func Offset: 0x104
	// Line 374, Address: 0x1a69d8, Func Offset: 0x108
	// Line 375, Address: 0x1a69dc, Func Offset: 0x10c
	// Line 376, Address: 0x1a69e0, Func Offset: 0x110
	// Line 377, Address: 0x1a69e4, Func Offset: 0x114
	// Line 378, Address: 0x1a69e8, Func Offset: 0x118
	// Line 379, Address: 0x1a69ec, Func Offset: 0x11c
	// Line 380, Address: 0x1a69f0, Func Offset: 0x120
	// Line 381, Address: 0x1a69f4, Func Offset: 0x124
	// Line 382, Address: 0x1a69f8, Func Offset: 0x128
	// Line 384, Address: 0x1a6a00, Func Offset: 0x130
	// Line 388, Address: 0x1a6a04, Func Offset: 0x134
	// Line 389, Address: 0x1a6a08, Func Offset: 0x138
	// Line 390, Address: 0x1a6a1c, Func Offset: 0x14c
	// Line 393, Address: 0x1a6a24, Func Offset: 0x154
	// Line 397, Address: 0x1a6a28, Func Offset: 0x158
	// Func End, Address: 0x1a6a30, Func Offset: 0x160
}

// zVolume_OccludePrecalc__FP6_xVec3
// Start address: 0x1a6a30
void zVolume_OccludePrecalc(_xVec3* camPos)
{
	float32 camdot;
	float32 depthdot;
	_xVec4 locFrustVec[4];
	PreCalcOcclude* calc;
	float32 s;
	float32 c;
	zVolumeAsset* a;
	_xVec3 corner[5];
	int32 j;
	int32 i;
	// Line 185, Address: 0x1a6a30, Func Offset: 0
	// Line 191, Address: 0x1a6a6c, Func Offset: 0x3c
	// Line 193, Address: 0x1a6a84, Func Offset: 0x54
	// Line 196, Address: 0x1a6a90, Func Offset: 0x60
	// Line 197, Address: 0x1a6a98, Func Offset: 0x68
	// Line 198, Address: 0x1a6aa0, Func Offset: 0x70
	// Line 202, Address: 0x1a6aac, Func Offset: 0x7c
	// Line 199, Address: 0x1a6ab4, Func Offset: 0x84
	// Line 206, Address: 0x1a6ab8, Func Offset: 0x88
	// Line 208, Address: 0x1a6abc, Func Offset: 0x8c
	// Line 202, Address: 0x1a6ac0, Func Offset: 0x90
	// Line 199, Address: 0x1a6ac4, Func Offset: 0x94
	// Line 202, Address: 0x1a6ad0, Func Offset: 0xa0
	// Line 199, Address: 0x1a6ad4, Func Offset: 0xa4
	// Line 202, Address: 0x1a6ad8, Func Offset: 0xa8
	// Line 199, Address: 0x1a6adc, Func Offset: 0xac
	// Line 203, Address: 0x1a6ae0, Func Offset: 0xb0
	// Line 202, Address: 0x1a6ae4, Func Offset: 0xb4
	// Line 203, Address: 0x1a6ae8, Func Offset: 0xb8
	// Line 207, Address: 0x1a6aec, Func Offset: 0xbc
	// Line 227, Address: 0x1a6af0, Func Offset: 0xc0
	// Line 226, Address: 0x1a6af8, Func Offset: 0xc8
	// Line 203, Address: 0x1a6b00, Func Offset: 0xd0
	// Line 204, Address: 0x1a6b04, Func Offset: 0xd4
	// Line 206, Address: 0x1a6b24, Func Offset: 0xf4
	// Line 210, Address: 0x1a6b2c, Func Offset: 0xfc
	// Line 206, Address: 0x1a6b30, Func Offset: 0x100
	// Line 207, Address: 0x1a6b40, Func Offset: 0x110
	// Line 208, Address: 0x1a6b48, Func Offset: 0x118
	// Line 210, Address: 0x1a6b64, Func Offset: 0x134
	// Line 211, Address: 0x1a6b7c, Func Offset: 0x14c
	// Line 212, Address: 0x1a6b88, Func Offset: 0x158
	// Line 214, Address: 0x1a6ba8, Func Offset: 0x178
	// Line 218, Address: 0x1a6bb0, Func Offset: 0x180
	// Line 214, Address: 0x1a6bb4, Func Offset: 0x184
	// Line 215, Address: 0x1a6bc4, Func Offset: 0x194
	// Line 216, Address: 0x1a6bcc, Func Offset: 0x19c
	// Line 218, Address: 0x1a6be8, Func Offset: 0x1b8
	// Line 224, Address: 0x1a6c04, Func Offset: 0x1d4
	// Line 225, Address: 0x1a6c28, Func Offset: 0x1f8
	// Line 224, Address: 0x1a6c3c, Func Offset: 0x20c
	// Line 225, Address: 0x1a6c40, Func Offset: 0x210
	// Line 224, Address: 0x1a6c4c, Func Offset: 0x21c
	// Line 225, Address: 0x1a6c50, Func Offset: 0x220
	// Line 226, Address: 0x1a6c54, Func Offset: 0x224
	// Line 227, Address: 0x1a6c74, Func Offset: 0x244
	// Line 228, Address: 0x1a6c7c, Func Offset: 0x24c
	// Line 229, Address: 0x1a6c90, Func Offset: 0x260
	// Line 228, Address: 0x1a6c98, Func Offset: 0x268
	// Line 229, Address: 0x1a6cac, Func Offset: 0x27c
	// Line 228, Address: 0x1a6cb0, Func Offset: 0x280
	// Line 229, Address: 0x1a6cb4, Func Offset: 0x284
	// Line 228, Address: 0x1a6cbc, Func Offset: 0x28c
	// Line 229, Address: 0x1a6cc0, Func Offset: 0x290
	// Line 233, Address: 0x1a6cc8, Func Offset: 0x298
	// Line 234, Address: 0x1a6cd8, Func Offset: 0x2a8
	// Line 235, Address: 0x1a6ce0, Func Offset: 0x2b0
	// Line 234, Address: 0x1a6ce4, Func Offset: 0x2b4
	// Line 236, Address: 0x1a6cf0, Func Offset: 0x2c0
	// Line 234, Address: 0x1a6cf4, Func Offset: 0x2c4
	// Line 240, Address: 0x1a6d08, Func Offset: 0x2d8
	// Line 245, Address: 0x1a6d30, Func Offset: 0x300
	// Line 242, Address: 0x1a6d34, Func Offset: 0x304
	// Line 245, Address: 0x1a6d38, Func Offset: 0x308
	// Line 246, Address: 0x1a6d48, Func Offset: 0x318
	// Line 247, Address: 0x1a6d50, Func Offset: 0x320
	// Line 246, Address: 0x1a6d54, Func Offset: 0x324
	// Line 247, Address: 0x1a6d58, Func Offset: 0x328
	// Line 246, Address: 0x1a6d5c, Func Offset: 0x32c
	// Line 249, Address: 0x1a6d6c, Func Offset: 0x33c
	// Line 247, Address: 0x1a6d74, Func Offset: 0x344
	// Line 246, Address: 0x1a6d80, Func Offset: 0x350
	// Line 247, Address: 0x1a6d88, Func Offset: 0x358
	// Line 248, Address: 0x1a6d8c, Func Offset: 0x35c
	// Line 249, Address: 0x1a6dac, Func Offset: 0x37c
	// Line 250, Address: 0x1a6db4, Func Offset: 0x384
	// Line 249, Address: 0x1a6dbc, Func Offset: 0x38c
	// Line 250, Address: 0x1a6dc0, Func Offset: 0x390
	// Line 253, Address: 0x1a6dc8, Func Offset: 0x398
	// Line 255, Address: 0x1a6ddc, Func Offset: 0x3ac
	// Line 253, Address: 0x1a6df4, Func Offset: 0x3c4
	// Line 255, Address: 0x1a6e10, Func Offset: 0x3e0
	// Line 253, Address: 0x1a6e18, Func Offset: 0x3e8
	// Line 255, Address: 0x1a6e1c, Func Offset: 0x3ec
	// Line 257, Address: 0x1a6e34, Func Offset: 0x404
	// Line 262, Address: 0x1a6ed8, Func Offset: 0x4a8
	// Line 263, Address: 0x1a6ee0, Func Offset: 0x4b0
	// Line 264, Address: 0x1a6ef4, Func Offset: 0x4c4
	// Line 263, Address: 0x1a6ef8, Func Offset: 0x4c8
	// Line 264, Address: 0x1a6f00, Func Offset: 0x4d0
	// Line 263, Address: 0x1a6f04, Func Offset: 0x4d4
	// Line 264, Address: 0x1a6f18, Func Offset: 0x4e8
	// Line 268, Address: 0x1a6f20, Func Offset: 0x4f0
	// Line 269, Address: 0x1a6f28, Func Offset: 0x4f8
	// Line 270, Address: 0x1a6f30, Func Offset: 0x500
	// Line 271, Address: 0x1a6f38, Func Offset: 0x508
	// Line 273, Address: 0x1a6f40, Func Offset: 0x510
	// Line 274, Address: 0x1a6f48, Func Offset: 0x518
	// Line 275, Address: 0x1a6f50, Func Offset: 0x520
	// Line 276, Address: 0x1a6f58, Func Offset: 0x528
	// Line 278, Address: 0x1a6f60, Func Offset: 0x530
	// Line 279, Address: 0x1a6f68, Func Offset: 0x538
	// Line 280, Address: 0x1a6f70, Func Offset: 0x540
	// Line 281, Address: 0x1a6f78, Func Offset: 0x548
	// Line 283, Address: 0x1a6f80, Func Offset: 0x550
	// Line 284, Address: 0x1a6f88, Func Offset: 0x558
	// Line 285, Address: 0x1a6f90, Func Offset: 0x560
	// Line 286, Address: 0x1a6f98, Func Offset: 0x568
	// Line 288, Address: 0x1a6fa0, Func Offset: 0x570
	// Line 289, Address: 0x1a6fac, Func Offset: 0x57c
	// Line 288, Address: 0x1a6fb4, Func Offset: 0x584
	// Line 289, Address: 0x1a6fb8, Func Offset: 0x588
	// Line 295, Address: 0x1a6fd8, Func Offset: 0x5a8
	// Func End, Address: 0x1a700c, Func Offset: 0x5dc
}

// zVolumeGetVolume__FUs
// Start address: 0x1a7010
_zVolume* zVolumeGetVolume(uint16 n)
{
	// Line 154, Address: 0x1a7010, Func Offset: 0
	// Line 155, Address: 0x1a7024, Func Offset: 0x14
	// Func End, Address: 0x1a702c, Func Offset: 0x1c
}

// zVolumeGetBound__FP8_zVolume
// Start address: 0x1a7030
_xBound* zVolumeGetBound(_zVolume* vol)
{
	// Line 140, Address: 0x1a7030, Func Offset: 0
	// Line 141, Address: 0x1a7034, Func Offset: 0x4
	// Func End, Address: 0x1a703c, Func Offset: 0xc
}

// zVolumeSetup__Fv
// Start address: 0x1a7040
void zVolumeSetup()
{
	uint32 i;
	// Line 117, Address: 0x1a7040, Func Offset: 0
	// Line 127, Address: 0x1a7058, Func Offset: 0x18
	// Line 131, Address: 0x1a705c, Func Offset: 0x1c
	// Line 127, Address: 0x1a7060, Func Offset: 0x20
	// Line 131, Address: 0x1a7090, Func Offset: 0x50
	// Line 132, Address: 0x1a70a0, Func Offset: 0x60
	// Func End, Address: 0x1a70a8, Func Offset: 0x68
}

// zVolumeInit__Fv
// Start address: 0x1a70b0
void zVolumeInit()
{
	zVolumeAsset* asset;
	uint32 size;
	uint16 i;
	// Line 94, Address: 0x1a70b0, Func Offset: 0
	// Line 95, Address: 0x1a70c8, Func Offset: 0x18
	// Line 94, Address: 0x1a70cc, Func Offset: 0x1c
	// Line 95, Address: 0x1a70d0, Func Offset: 0x20
	// Line 98, Address: 0x1a70e4, Func Offset: 0x34
	// Line 99, Address: 0x1a70f0, Func Offset: 0x40
	// Line 102, Address: 0x1a7110, Func Offset: 0x60
	// Line 104, Address: 0x1a711c, Func Offset: 0x6c
	// Line 107, Address: 0x1a712c, Func Offset: 0x7c
	// Line 108, Address: 0x1a7170, Func Offset: 0xc0
	// Line 107, Address: 0x1a7174, Func Offset: 0xc4
	// Line 108, Address: 0x1a7178, Func Offset: 0xc8
	// Line 109, Address: 0x1a7194, Func Offset: 0xe4
	// Line 110, Address: 0x1a719c, Func Offset: 0xec
	// Line 112, Address: 0x1a71a0, Func Offset: 0xf0
	// Func End, Address: 0x1a71c4, Func Offset: 0x114
}

// zVolumeLoad__FP8_zVolumeP7xSerial
// Start address: 0x1a71d0
void zVolumeLoad(_zVolume* ent, xSerial* s)
{
	// Line 87, Address: 0x1a71d0, Func Offset: 0
	// Func End, Address: 0x1a71d8, Func Offset: 0x8
}

// zVolumeSave__FP8_zVolumeP7xSerial
// Start address: 0x1a71e0
void zVolumeSave(_zVolume* ent, xSerial* s)
{
	// Line 67, Address: 0x1a71e0, Func Offset: 0
	// Func End, Address: 0x1a71e8, Func Offset: 0x8
}

