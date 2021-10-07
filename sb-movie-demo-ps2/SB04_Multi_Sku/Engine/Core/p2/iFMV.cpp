typedef struct xUpdateCullMgr;
typedef struct RxClusterDefinition;
typedef struct BINKSND;
typedef struct PKRAssetTOCInfo;
typedef struct RwCamera;
typedef struct BINKIO;
typedef enum RxNodeDefEditable;
typedef struct RwFrustumPlane;
typedef struct xCam;
typedef struct FreeNode;
typedef struct BINK;
typedef struct xVec2;
typedef struct xGlobals;
typedef struct xMat4x3;
typedef enum RwFogType;
typedef struct xBase;
typedef struct rxHeapBlockHeader;
typedef struct xUpdateCullEnt;
typedef struct RxIoSpec;
typedef struct xVec3;
typedef struct xCamGroup;
typedef struct xMemoryManagerGeneral;
typedef struct basic_rect;
typedef struct tag_iFile;
typedef struct _tagTRCPadInfo;
typedef struct RwBBox;
typedef struct xCamScreen;
typedef struct MOVIE;
typedef struct RpWorld;
typedef struct RwRaster;
typedef struct RxPacket;
typedef struct RwPlane;
typedef struct RxOutputSpec;
typedef struct xUpdateCullGroup;
typedef enum xCamCoordType;
typedef struct zPlayer;
typedef struct _tagxPad;
typedef enum Dir;
typedef struct zScene;
typedef struct RpWorldSector;
typedef struct analog_data;
typedef struct RxCluster;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct BINKRECT;
typedef struct tag_xFile;
typedef struct PS2DemoGlobals;
typedef enum RxClusterValid;
typedef struct RpSector;
typedef enum Strategy;
typedef struct RwV2d;
typedef struct xCamCoordCylinder;
typedef struct xBound;
typedef struct RxPipelineCluster;
typedef enum RxClusterValidityReq;
typedef struct PKRAssetType;
typedef struct RxClusterRef;
typedef struct RwTexture;
typedef struct _anon0;
typedef struct xGroupAsset;
typedef struct xCamBlend;
typedef struct xLinkAsset;
typedef struct RpMaterialList;
typedef struct BUNDLEPOINTERS;
typedef struct xQCData;
typedef struct RpVertexNormal;
typedef enum RxClusterForcePresent;
typedef struct RwRGBA;
typedef struct xCamCoordSphere;
typedef struct xBBox;
typedef struct RwMatrixTag;
typedef struct RpMaterial;
typedef struct xQuat;
typedef struct RxNodeMethods;
typedef enum RwCameraProjection;
typedef struct iFogParams;
typedef struct _anon1;
typedef struct RwResEntry;
typedef struct RwObjectHasFrame;
typedef enum rxEmbeddedPacketState;
typedef enum _tagPadInit;
typedef struct RwV3d;
typedef struct _tagiTRCPadInfo;
typedef struct RwSurfaceProperties;
typedef enum _tagPadState;
typedef struct RxPipelineNode;
typedef struct xVec4;
typedef struct xGroup;
typedef struct RwLLLink;
typedef enum _GameOstrich;
typedef enum RpWorldRenderOrder;
typedef struct xScene;
typedef struct RpMeshHeader;
typedef enum xCamOrientType;
typedef struct DebugAllocationHeader;
typedef struct RxPipeline;
typedef struct RxPipelineNodeTopSortData;
typedef struct _class_0;
typedef struct _tagPadAnalog;
typedef struct xMemoryManager;
typedef struct xColor_tag;
typedef struct xSphere;
typedef struct RxPipelineNodeParam;
typedef enum _tagTRCState;
typedef struct RwTexDictionary;
typedef struct xCamOrientEuler;
typedef struct xCamera;
typedef struct rxReq;
typedef struct xCylinder;
typedef enum xRegion;
typedef struct RwTexCoords;
typedef struct _tagiPad;
typedef enum sceDemoEndReason;
typedef struct xBox;
typedef struct RxPipelineRequiresCluster;
typedef struct RxHeap;
typedef struct _class_1;
typedef struct xMat3x3;
typedef struct RwLinkList;
typedef struct xBaseAsset;
typedef struct RxNodeDefinition;
typedef struct xCamConfigCommon;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RwObject;

typedef uint32(*type_0)(BINKIO*, int32, void*, uint32);
typedef void*(*type_2)(void*, uint32, void*, void*, uint32, uint32*);
typedef int32(*type_5)(BINKSND*, uint32, int32, int32, uint32, BINK*);
typedef void(*type_6)(void*, uint32, void*, int8*);
typedef uint32(*type_7)(BINKIO*, uint32, int32, void*, uint32);
typedef int32(*type_8)(BINKSND*);
typedef uint32(*type_9)(BINKIO*, uint32);
typedef int32(*type_11)(void*, uint32, void*, int32);
typedef int32(*type_16)(BINKSND*, uint8**, uint32*);
typedef void(*type_18)(void*, uint32);
typedef void(*type_20)(void*);
typedef void(*type_22)(BINKIO*, void*, uint32, uint32, uint32);
typedef RpWorldSector*(*type_23)(RpWorldSector*);
typedef int32(*type_24)(BINKSND*, uint32);
typedef uint32(*type_25)(BINKIO*);
typedef uint32(*type_27)(BINKIO*);
typedef void(*type_28)(tag_xFile*);
typedef void*(*type_29)(void*, uint32, void*, int32*, int32*);
typedef void(*type_31)(BINKSND*, int32);
typedef uint32(*type_32)(BINKIO*, uint32, int32, void*, uint32);
typedef void(*type_33)(BINKIO*);
typedef uint32(*type_35)(BINKIO*, uint32);
typedef void(*type_36)(BINKSND*, int32);
typedef void(*type_37)(BINKIO*);
typedef void(*type_38)(void*, uint32, void*);
typedef int32(*type_39)(BINKIO*);
typedef void(*type_42)(BINKSND*, uint32*, uint32);
typedef void(*type_44)(BINKIO*);
typedef void*(*type_46)(uint32);
typedef void*(*type_48)(void*, uint32, void*, uint32, uint32*);
typedef void(*type_49)(BINKIO*);
typedef void(*type_52)(BINKSND*, uint32*, int32*, uint32);
typedef void(*type_53)(void*);
typedef RwCamera*(*type_54)(RwCamera*);
typedef int32(*type_55)(BINKSND*, int32);
typedef RwCamera*(*type_56)(RwCamera*);
typedef int32(*type_57)(BINKSND*, int32);
typedef void(*type_59)(BINKSND*);
typedef uint32(*type_61)(void*, void*);
typedef uint32(*type_62)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_64)(BINKIO*);
typedef void(*type_66)(RwResEntry*);
typedef int32(*type_67)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_68)(RwObjectHasFrame*);
typedef void(*type_70)(RxPipelineNode*);
typedef int32(*type_74)(RxPipelineNode*);
typedef void(*type_75)(RxNodeDefinition*);
typedef int32(*type_76)(RxNodeDefinition*);
typedef void(*type_77)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
typedef int32(*type_78)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_81)(BINKIO*, int32, void*, uint32);
typedef int32(*)(BINKSND*, uint32, int32, int32, uint32, BINK*)(*type_82)(uint32);
typedef void(*type_84)(BINKIO*, void*, uint32, uint32, uint32);
typedef int32(*type_85)(BINKIO*, int8*, uint32);

typedef RwV3d type_1[8];
typedef RwFrustumPlane type_3[6];
typedef uint16 type_4[3];
typedef xVec4 type_10[12];
typedef int8 type_12[128];
typedef uint8 type_13[256];
typedef uint32 type_14[4];
typedef int8 type_15[32];
typedef uint32 type_17[4096];
typedef float32 type_19[22];
typedef float32 type_21[22];
typedef RxCluster type_26[1];
typedef int8 type_30[127];
typedef uint32 type_34[16];
typedef analog_data type_40[2];
typedef _tagTRCPadInfo type_41[4];
typedef _tagxPad* type_43[4];
typedef int8 type_45[64];
typedef int8 type_47[5];
typedef RwTexCoords* type_50[8];
typedef int8 type_51[32];
typedef float32 type_58[4];
typedef int8 type_60[16];
typedef int8 type_63[128];
typedef int8 type_65[128][6];
typedef int8 type_69[32];
typedef int8 type_71[32];
typedef int8 type_72[16];
typedef int8 type_73[32];
typedef uint8 type_79[160];
typedef xCam* type_80[32];
typedef uint32 type_83[1];
typedef BINKRECT type_86[8];
typedef _tagxPad type_87[4];
typedef uint32 type_88[5];
typedef xCamBlend* type_89[4];
typedef uint32 type_90[16];
typedef uint8 type_91[3];
typedef int8 type_92[16];
typedef void* type_93[2];
typedef void* type_94[2];
typedef xVec4 type_95[12];
typedef uint8 type_96[22];
typedef float32 type_97[3];
typedef uint8 type_98[22];

struct xUpdateCullMgr
{
	uint32 entCount;
	uint32 entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	uint32 mgrCount;
	uint32 mgrCurr;
	xUpdateCullEnt* mgrList;
	uint32 grpCount;
	xUpdateCullGroup* grpList;
	void(*activateCB)(void*);
	void(*deactivateCB)(void*);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct BINKSND
{
	int32(*Ready)(BINKSND*);
	int32(*Lock)(BINKSND*, uint8**, uint32*);
	int32(*Unlock)(BINKSND*, uint32);
	void(*Volume)(BINKSND*, int32);
	void(*Pan)(BINKSND*, int32);
	int32(*Pause)(BINKSND*, int32);
	int32(*SetOnOff)(BINKSND*, int32);
	void(*Close)(BINKSND*);
	void(*MixBins)(BINKSND*, uint32*, uint32);
	void(*MixBinVols)(BINKSND*, uint32*, int32*, uint32);
	uint32 sndbufsize;
	uint8* sndbuf;
	uint8* sndend;
	uint8* sndwritepos;
	uint8* sndreadpos;
	uint32 sndcomp;
	uint32 sndamt;
	uint32 sndconvert8;
	uint32 sndendframe;
	uint32 sndprime;
	uint32 sndpad;
	uint32 BestSizeIn16;
	uint32 BestSizeMask;
	uint32 SoundDroppedOut;
	int32 NoThreadService;
	int32 OnOff;
	uint32 Latency;
	uint32 VideoScale;
	uint32 freq;
	int32 bits;
	int32 chans;
	uint8 snddata[256];
};

struct PKRAssetTOCInfo
{
	uint32 aid;
	PKRAssetType* typeref;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
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
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
};

struct BINKIO
{
	uint32(*ReadHeader)(BINKIO*, int32, void*, uint32);
	uint32(*ReadFrame)(BINKIO*, uint32, int32, void*, uint32);
	uint32(*GetBufferSize)(BINKIO*, uint32);
	void(*SetInfo)(BINKIO*, void*, uint32, uint32, uint32);
	uint32(*Idle)(BINKIO*);
	void(*Close)(BINKIO*);
	BINK* bink;
	uint32 ReadError;
	uint32 DoingARead;
	uint32 BytesRead;
	uint32 Working;
	uint32 TotalTime;
	uint32 ForegroundTime;
	uint32 IdleTime;
	uint32 ThreadTime;
	uint32 BufSize;
	uint32 BufHighUsed;
	uint32 CurBufSize;
	uint32 CurBufUsed;
	uint8 iodata[160];
	void(*suspend_callback)(BINKIO*);
	int32(*try_suspend_callback)(BINKIO*);
	void(*resume_callback)(BINKIO*);
	void(*idle_on_callback)(BINKIO*);
	uint32 callback_control[16];
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct xCam
{
	xMat4x3 mat;
	float32 fov;
	int32 flags;
	uint32 owner;
	xCamGroup* group;
	analog_data analog;
	float32 motion_factor;
	xCamCoordType coord_type;
	xCamOrientType orient_type;
	_class_0 coord;
	_class_1 orient;
	xCamConfigCommon cfg_common;
	int32 group_index;
	int32 group_flags;
	xCamBlend* blender;
};

struct FreeNode
{
	FreeNode* next;
	FreeNode* prev;
	uint32 size;
	uint32 pad[1];
};

struct BINK
{
	uint32 Width;
	uint32 Height;
	uint32 Frames;
	uint32 FrameNum;
	uint32 LastFrameNum;
	uint32 FrameRate;
	uint32 FrameRateDiv;
	uint32 ReadError;
	uint32 OpenFlags;
	uint32 BinkType;
	uint32 Size;
	uint32 FrameSize;
	uint32 SndSize;
	BINKRECT FrameRects[8];
	int32 NumRects;
	uint32 PlaneNum;
	void* YPlane[2];
	void* APlane[2];
	uint32 YWidth;
	uint32 YHeight;
	uint32 UVWidth;
	uint32 UVHeight;
	void* MaskPlane;
	uint32 MaskPitch;
	uint32 MaskLength;
	uint32 LargestFrameSize;
	uint32 InternalFrames;
	int32 NumTracks;
	uint32 Highest1SecRate;
	uint32 Highest1SecFrame;
	int32 Paused;
	uint32 BackgroundThread;
	void* compframe;
	void* preloadptr;
	uint32* frameoffsets;
	BINKIO bio;
	uint8* ioptr;
	uint32 iosize;
	uint32 decompwidth;
	uint32 decompheight;
	int32* trackindexes;
	uint32* tracksizes;
	uint32* tracktypes;
	int32* trackIDs;
	uint32 numrects;
	uint32 playedframes;
	uint32 firstframetime;
	uint32 startframetime;
	uint32 startblittime;
	uint32 startsynctime;
	uint32 startsyncframe;
	uint32 twoframestime;
	uint32 entireframetime;
	uint32 slowestframetime;
	uint32 slowestframe;
	uint32 slowest2frametime;
	uint32 slowest2frame;
	uint32 soundon;
	uint32 videoon;
	uint32 totalmem;
	uint32 timevdecomp;
	uint32 timeadecomp;
	uint32 timeblit;
	uint32 timeopen;
	uint32 fileframerate;
	uint32 fileframeratediv;
	uint32 runtimeframes;
	int32 rtindex;
	uint32* rtframetimes;
	uint32* rtadecomptimes;
	uint32* rtvdecomptimes;
	uint32* rtblittimes;
	uint32* rtreadtimes;
	uint32* rtidlereadtimes;
	uint32* rtthreadreadtimes;
	uint32 lastblitflags;
	uint32 lastdecompframe;
	uint32 lastresynctime;
	uint32 doresync;
	uint32 skipcount;
	uint32 toofewskipstomask;
	uint32 playingtracks;
	uint32 soundskips;
	BINKSND* bsnd;
	uint32 skippedlastblit;
	uint32 skipped_this_frame;
	uint32 skippedblits;
	BUNDLEPOINTERS bunp;
	uint32 skipped_in_a_row;
	uint32 big_sound_skip_adj;
	uint32 big_sound_skip_reduce;
	uint32 last_time_almost_empty;
	uint32 last_read_count;
	uint32 last_sound_count;
	uint32 snd_callback_buffer[16];
};

struct xVec2
{
	float32 x;
	float32 y;
};

struct xGlobals
{
	xCamera oldSkoolCamera;
	xCamGroup* cam;
	xCamScreen* screen;
	xVec4 frustplane[12];
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	_tagxPad* pad[4];
	int32 profile;
	int8 profFunc[128][6];
	xUpdateCullMgr* updateMgr;
	int32 sceneFirst;
	int8 sceneStart[32];
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	int64 fog_t0;
	int64 fog_t1;
	int32 option_vibration;
	int32 option_subtitles;
	uint32 slowdown;
	float32 update_dt;
	int16 ForceCinematic;
	int16 ForceAllCinematics;
	int32 useHIPHOP;
	uint8 NoMusic;
	uint8 NoCutscenes;
	uint8 NoPadCheck;
	int8 currentActivePad;
	uint8 firstStartPressed;
	uint8 fromLauncher;
	uint8 FlashWIP;
	uint8 inLoadingScreen;
	uint8 LoadingScene;
	uint8 InitializingLoadingScreen;
	uint8 ForceMono;
	uint32 minVSyncCnt;
	uint8 dontShowPadMessageDuringLoadingOrCutScene;
	uint8 autoSaveFeature;
	int32 asyncLoadingScreen;
	int32 asyncLoadingFlags;
	int8 fromLauncherUser[32];
	zPlayer* ___player_ent_dont_use_directly;
	zScene* sceneCur;
	zScene* scenePreload;
	PS2DemoGlobals* PS2demo;
	int8 watermark[127];
	uint8 watermarkAlpha;
	float32 watermarkSize;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	uint32 pad3;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	void(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*, uint32);
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xUpdateCullEnt
{
	uint16 index;
	int16 groupIndex;
	uint32(*update_cull_cb)(void*, void*);
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xVec3
{
	union
	{
		RwV3d m_RwV3d;
		float32 x;
	};
	float32 y;
	float32 z;
	float32 a[3];
};

struct xCamGroup
{
	xMat4x3 mat;
	xVec3 vel;
	float32 fov;
	float32 fov_default;
	int32 flags;
	xCam* primary;
	analog_data analog;
	xCam* owned[32];
	int32 size;
	int32 primary_index;
	int32 child_flags;
	int32 child_flags_mask;
	xCamBlend* blend_cam[4];
};

struct xMemoryManagerGeneral : xMemoryManager
{
	FreeNode* freeStart;
	FreeNode* freeEnd;
	Dir dir;
	Strategy strategy;
};

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	int32 offset;
	int32 length;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int32 id;
	_tagTRCState state;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xCamScreen
{
	RwCamera* icam;
	float32 fov;
};

struct MOVIE
{
	BINK* hBink;
	RwRaster* pBinkRaster;
	int32 asyncReadKey;
	RwTexture* pBinkTexture;
	uint8* pPreBuffer;
	uint8* pPreBufferAligned;
	uint32 PreBufferSize;
	int32 FileOffset;
	tag_xFile* pFile;
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
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xUpdateCullGroup
{
	uint32 active;
	uint16 startIndex;
	uint16 endIndex;
	xGroup* groupObject;
};

enum xCamCoordType
{
	XCAM_COORD_INVALID = 0xffffffff,
	XCAM_COORD_CART,
	XCAM_COORD_CYLINDER,
	XCAM_COORD_SPHERE,
	XCAM_COORD_MAX
};

struct zPlayer
{
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
	int16 port;
	int16 slot;
	_tagiPad context;
	float32 al2d_timer;
	float32 ar2d_timer;
	float32 d_timer;
	float32 up_tmr[22];
	float32 down_tmr[22];
	analog_data analog[2];
};

enum Dir
{
	Up,
	Down
};

struct zScene
{
};

struct RpWorldSector
{
	int32 type;
	RpTriangle* triangles;
	RwV3d* vertices;
	RpVertexNormal* normals;
	RwTexCoords* texCoords[8];
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numTriangles;
	uint16 pad;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float32 mag;
	float32 ang;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct BINKRECT
{
	int32 Left;
	int32 Top;
	int32 Width;
	int32 Height;
};

struct tag_xFile
{
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
};

struct PS2DemoGlobals
{
	uint16 language;
	uint16 aspect;
	uint16 play_mode;
	uint16 inactive_timeout;
	uint16 gameplay_timeout;
	sceDemoEndReason exit_code;
	struct
	{
		uint32 FMV_playing : 1;
		uint32 more_padding : 31;
	};
	float32 bail_timer;
	float32 inactive_timer;
	float32 gameplay_timer;
	int8 subdir[16];
	uint16 quit;
	uint16 vmode;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpSector
{
	int32 type;
};

enum Strategy
{
	FirstFit,
	BestFit
};

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xCamCoordCylinder
{
	xVec3 origin;
	float32 dist;
	float32 height;
	float32 theta;
};

struct xBound
{
	xQCData qcd;
	uint8 type;
	uint8 pad[3];
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct PKRAssetType
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct _anon0
{
};

struct xGroupAsset : xBaseAsset
{
	uint16 itemCount;
	uint16 groupFlags;
};

struct xCamBlend : xCam
{
	xCam* src;
	xCam* dst;
	float32 time;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct BUNDLEPOINTERS
{
	void* typeptr;
	void* type16ptr;
	void* colorptr;
	void* bits2ptr;
	void* motionXptr;
	void* motionYptr;
	void* dctptr;
	void* mdctptr;
	void* patptr;
};

struct xQCData
{
	int8 xmin;
	int8 ymin;
	int8 zmin;
	int8 zmin_dup;
	int8 xmax;
	int8 ymax;
	int8 zmax;
	int8 zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xCamCoordSphere
{
	xVec3 origin;
	float32 dist;
	xQuat dir;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct xQuat
{
	xVec3 v;
	float32 s;
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

struct _anon1
{
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
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

struct xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	uint32 last_index;
	int32 flg_group;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

enum _GameOstrich
{
	eGameOstrich_Loading,
	eGameOstrich_PlayingMovie,
	eGameOstrich_InScene,
	eGameOstrich_Total
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xScene
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

enum xCamOrientType
{
	XCAM_ORIENT_INVALID = 0xffffffff,
	XCAM_ORIENT_QUAT,
	XCAM_ORIENT_EULER,
	XCAM_ORIENT_MAX
};

struct DebugAllocationHeader
{
	int8* file;
	int32 line;
	int8* function;
	uint32 size;
	DebugAllocationHeader* prev;
	DebugAllocationHeader* next;
	xMemoryManager* manager;
	uint32 magic[5];
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

struct _class_0
{
	union
	{
		xVec3 cart;
		xCamCoordCylinder cylinder;
		xCamCoordSphere sphere;
	};
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

struct xMemoryManager
{
	void* arenaStart;
	void* arenaEnd;
	uint32 size;
	int8* lastFile;
	int8* lastFunction;
	int32 lastLine;
	uint32 debugDataSize;
	DebugAllocationHeader* activeList;
};

struct xColor_tag
{
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
	RwRGBA rgba;
};

struct xSphere
{
	xVec3 center;
	float32 r;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xCamOrientEuler
{
	float32 yaw;
	float32 pitch;
	float32 roll;
};

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	float32 fov;
	uint32 flags;
	float32 tmr;
	float32 tm_acc;
	float32 tm_dec;
	float32 ltmr;
	float32 ltm_acc;
	float32 ltm_dec;
	float32 dmin;
	float32 dmax;
	float32 dcur;
	float32 dgoal;
	float32 hmin;
	float32 hmax;
	float32 hcur;
	float32 hgoal;
	float32 pmin;
	float32 pmax;
	float32 pcur;
	float32 pgoal;
	float32 depv;
	float32 hepv;
	float32 pepv;
	float32 orn_epv;
	float32 yaw_epv;
	float32 pitch_epv;
	float32 roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float32 yaw_cur;
	float32 yaw_goal;
	float32 pitch_cur;
	float32 pitch_goal;
	float32 roll_cur;
	float32 roll_goal;
	float32 dct;
	float32 dcd;
	float32 dccv;
	float32 dcsv;
	float32 hct;
	float32 hcd;
	float32 hccv;
	float32 hcsv;
	float32 pct;
	float32 pcd;
	float32 pccv;
	float32 pcsv;
	float32 orn_ct;
	float32 orn_cd;
	float32 orn_ccv;
	float32 orn_csv;
	float32 yaw_ct;
	float32 yaw_cd;
	float32 yaw_ccv;
	float32 yaw_csv;
	float32 pitch_ct;
	float32 pitch_cd;
	float32 pitch_ccv;
	float32 pitch_csv;
	float32 roll_ct;
	float32 roll_cd;
	float32 roll_ccv;
	float32 roll_csv;
	xVec4 frustplane[12];
	float32 smoothOutwardSlidePos;
};

struct rxReq
{
};

struct xCylinder
{
	xVec3 center;
	float32 r;
	float32 h;
};

enum xRegion
{
	eRegionUnknown = 0xffffffff,
	eRegionUS,
	eRegionBE,
	eRegionCH,
	eRegionCZ,
	eRegionDE,
	eRegionDK,
	eRegionES,
	eRegionFI,
	eRegionFR,
	eRegionIT,
	eRegionJP,
	eRegionKR,
	eRegionNL,
	eRegionNO,
	eRegionPL,
	eRegionPT,
	eRegionRU,
	eRegionSE,
	eRegionSK,
	eRegionTW,
	eRegionUK,
	eRegionCount,
	eRegionMaxCount = 0x20
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _tagiPad
{
	int32 port;
};

enum sceDemoEndReason
{
	SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED,
	SCE_DEMO_ENDREASON_ATTRACT_COMPLETE,
	SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT,
	SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT,
	SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE,
	SCE_DEMO_ENDREASON_PLAYABLE_QUIT,
	SCE_DEMO_ENDREASON_NETCONFIG_REQUEST,
	SCE_DEMO_ENDREASON_NETCONFIG_COMPLETE
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _class_1
{
	union
	{
		xQuat quat;
		xCamOrientEuler euler;
	};
};

struct xMat3x3
{
	xVec3 right;
	int32 flags;
	xVec3 up;
	uint32 pad1;
	xVec3 at;
	uint32 pad2;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct xCamConfigCommon
{
	uint8 priority;
	uint8 pad1;
	uint8 pad2;
	uint8 pad3;
	float32 blend_time;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	uint16 matIndex;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

int8 buffer[16];
int8 buffer[16];
basic_rect screen_bounds;
basic_rect default_adjust;
xMemoryManagerGeneral binkAllocator;
void* iop_addr;
int32 initReferenceCount;
void(*BinkFileClose)(BINKIO*);
uint32(*BinkFileIdle)(BINKIO*);
void(*BinkFileSetInfo)(BINKIO*, void*, uint32, uint32, uint32);
uint32(*BinkFileGetBufferSize)(BINKIO*, uint32);
uint32(*BinkFileReadFrame)(BINKIO*, uint32, int32, void*, uint32);
uint32(*BinkFileReadHeader)(BINKIO*, int32, void*, uint32);
void(*DVDReadCallback)(tag_xFile*);
_tagTRCPadInfo gTrcPad[4];
xGlobals* xglobals;
_tagxPad mPad[4];
uint32 ourGlobals[4096];
xColor_tag g_BLACK;
int32(*)(BINKSND*, uint32, int32, int32, uint32, BINK*)(*BinkOpenRAD_IOP)(uint32);
_anon1 __vt__21xMemoryManagerGeneral;
_anon0 __vt__14xMemoryManager;
int32(*BinkFileOpen)(BINKIO*, int8*, uint32);
void(*_MovieFree)(void*);
void*(*_MovieAlloc)(uint32);

RwTexture* xFMVGetTexture(MOVIE* pMovie, uint16 looping, uint16 freezeframed, uint32 startframe, uint32 endframe);
int32 BinkFileOpen(BINKIO* bio, int8* filename, uint32 flags);
void BinkFileClose();
void BinkFileSetInfo(BINKIO* bio, void* buf, uint32 size, uint32 filesize);
uint32 BinkFileGetBufferSize(uint32 size);
uint32 BinkFileReadFrame(BINKIO* bio, int32 offset, void* dest, uint32 size);
uint32 BinkFileIdle(BINKIO* bio);
void ReadKickoff(BINKIO* bio);
void DVDReadCallback(tag_xFile* file);
uint32 BinkFileReadHeader(BINKIO* bio, int32 offset, void* dest, uint32 size);
uint32 iFMVPlay(int8* filename, uint32 buttons, uint32 uSubtitlesAID, uint8 skippable, uint8 lockController, int32 uAudioTrack);
uint32 iFMVPlay(int8* filename, uint32 buttons, float32 time, uint32 uSubtitlesAID, uint8 skippable, uint8 lockController);
void iFMVClose(MOVIE&* pMovie);
MOVIE* iFMVOpen(PKRAssetTOCInfo& rAssetInfo);
void iFMVPrebufferReadComplete(MOVIE* pMovie);
void iFMVInit();
uint8 iFMVSystemInit();
void _MovieFree(void* pMemToFree);
void* _MovieAlloc(uint32 uNumBytes);

// xFMVGetTexture__FP5MOVIEUsUsUiUiUi
// Start address: 0x4c1d90
RwTexture* xFMVGetTexture(MOVIE* pMovie, uint16 looping, uint16 freezeframed, uint32 startframe, uint32 endframe)
{
	uint8* pBits;
	// Line 1413, Address: 0x4c1d90, Func Offset: 0
	// Line 1414, Address: 0x4c1dbc, Func Offset: 0x2c
	// Line 1419, Address: 0x4c1dc4, Func Offset: 0x34
	// Line 1442, Address: 0x4c1dd0, Func Offset: 0x40
	// Line 1443, Address: 0x4c1dd8, Func Offset: 0x48
	// Line 1445, Address: 0x4c1de4, Func Offset: 0x54
	// Line 1447, Address: 0x4c1df4, Func Offset: 0x64
	// Line 1468, Address: 0x4c1dfc, Func Offset: 0x6c
	// Line 1524, Address: 0x4c1e0c, Func Offset: 0x7c
	// Line 1417, Address: 0x4c1e14, Func Offset: 0x84
	// Line 1524, Address: 0x4c1e1c, Func Offset: 0x8c
	// Line 1422, Address: 0x4c1e3c, Func Offset: 0xac
	// Line 1524, Address: 0x4c1e40, Func Offset: 0xb0
	// Line 1422, Address: 0x4c1e44, Func Offset: 0xb4
	// Line 1426, Address: 0x4c1e54, Func Offset: 0xc4
	// Line 1432, Address: 0x4c1e5c, Func Offset: 0xcc
	// Line 1524, Address: 0x4c1e64, Func Offset: 0xd4
	// Line 1474, Address: 0x4c1e80, Func Offset: 0xf0
	// Line 1524, Address: 0x4c1e84, Func Offset: 0xf4
	// Line 1479, Address: 0x4c1e90, Func Offset: 0x100
	// Line 1524, Address: 0x4c1e98, Func Offset: 0x108
	// Line 1479, Address: 0x4c1e9c, Func Offset: 0x10c
	// Line 1524, Address: 0x4c1ea4, Func Offset: 0x114
	// Line 1498, Address: 0x4c1ec0, Func Offset: 0x130
	// Line 1524, Address: 0x4c1ec4, Func Offset: 0x134
	// Line 1516, Address: 0x4c1f08, Func Offset: 0x178
	// Line 1524, Address: 0x4c1f10, Func Offset: 0x180
	// Line 1525, Address: 0x4c1f48, Func Offset: 0x1b8
	// Func End, Address: 0x4c1f68, Func Offset: 0x1d8
}

// BinkFileOpen__FP6BINKIOPCcUi
// Start address: 0x4c1f70
int32 BinkFileOpen(BINKIO* bio, int8* filename, uint32 flags)
{
	// Line 1366, Address: 0x4c1f70, Func Offset: 0
	// Line 1369, Address: 0x4c1f90, Func Offset: 0x20
	// Line 1371, Address: 0x4c1f9c, Func Offset: 0x2c
	// Line 1373, Address: 0x4c1fa0, Func Offset: 0x30
	// Line 1371, Address: 0x4c1fa4, Func Offset: 0x34
	// Line 1373, Address: 0x4c1fa8, Func Offset: 0x38
	// Line 1384, Address: 0x4c1fbc, Func Offset: 0x4c
	// Line 1385, Address: 0x4c1fd0, Func Offset: 0x60
	// Line 1386, Address: 0x4c1fe0, Func Offset: 0x70
	// Line 1388, Address: 0x4c1ff8, Func Offset: 0x88
	// Line 1386, Address: 0x4c1ffc, Func Offset: 0x8c
	// Line 1388, Address: 0x4c2000, Func Offset: 0x90
	// Line 1389, Address: 0x4c2010, Func Offset: 0xa0
	// Line 1391, Address: 0x4c202c, Func Offset: 0xbc
	// Line 1378, Address: 0x4c2038, Func Offset: 0xc8
	// Line 1391, Address: 0x4c203c, Func Offset: 0xcc
	// Line 1402, Address: 0x4c205c, Func Offset: 0xec
	// Line 1403, Address: 0x4c2060, Func Offset: 0xf0
	// Line 1402, Address: 0x4c2064, Func Offset: 0xf4
	// Line 1403, Address: 0x4c2068, Func Offset: 0xf8
	// Line 1402, Address: 0x4c206c, Func Offset: 0xfc
	// Line 1404, Address: 0x4c2070, Func Offset: 0x100
	// Line 1403, Address: 0x4c2074, Func Offset: 0x104
	// Line 1404, Address: 0x4c2078, Func Offset: 0x108
	// Line 1405, Address: 0x4c207c, Func Offset: 0x10c
	// Line 1404, Address: 0x4c2080, Func Offset: 0x110
	// Line 1405, Address: 0x4c2084, Func Offset: 0x114
	// Line 1406, Address: 0x4c2088, Func Offset: 0x118
	// Line 1405, Address: 0x4c208c, Func Offset: 0x11c
	// Line 1406, Address: 0x4c2090, Func Offset: 0x120
	// Line 1407, Address: 0x4c2094, Func Offset: 0x124
	// Line 1406, Address: 0x4c2098, Func Offset: 0x128
	// Line 1407, Address: 0x4c209c, Func Offset: 0x12c
	// Line 1409, Address: 0x4c20a0, Func Offset: 0x130
	// Line 1410, Address: 0x4c20c8, Func Offset: 0x158
	// Func End, Address: 0x4c20e0, Func Offset: 0x170
}

// BinkFileClose__FP6BINKIO
// Start address: 0x4c20e0
void BinkFileClose()
{
	// Line 1363, Address: 0x4c20e0, Func Offset: 0
	// Func End, Address: 0x4c20e8, Func Offset: 0x8
}

// BinkFileSetInfo__FP6BINKIOPvUiUiUi
// Start address: 0x4c20f0
void BinkFileSetInfo(BINKIO* bio, void* buf, uint32 size, uint32 filesize)
{
	uint32 BufAligned;
	uint8* Buffer;
	uint32 Size;
	// Line 1324, Address: 0x4c20f0, Func Offset: 0
	// Line 1326, Address: 0x4c20f4, Func Offset: 0x4
	// Line 1324, Address: 0x4c20f8, Func Offset: 0x8
	// Line 1326, Address: 0x4c20fc, Func Offset: 0xc
	// Line 1324, Address: 0x4c2100, Func Offset: 0x10
	// Line 1326, Address: 0x4c2104, Func Offset: 0x14
	// Line 1324, Address: 0x4c2108, Func Offset: 0x18
	// Line 1326, Address: 0x4c210c, Func Offset: 0x1c
	// Line 1324, Address: 0x4c2110, Func Offset: 0x20
	// Line 1327, Address: 0x4c2114, Func Offset: 0x24
	// Line 1324, Address: 0x4c2118, Func Offset: 0x28
	// Line 1328, Address: 0x4c2120, Func Offset: 0x30
	// Line 1332, Address: 0x4c2124, Func Offset: 0x34
	// Line 1333, Address: 0x4c212c, Func Offset: 0x3c
	// Line 1336, Address: 0x4c2130, Func Offset: 0x40
	// Line 1337, Address: 0x4c2138, Func Offset: 0x48
	// Line 1339, Address: 0x4c213c, Func Offset: 0x4c
	// Line 1341, Address: 0x4c2148, Func Offset: 0x58
	// Line 1342, Address: 0x4c2158, Func Offset: 0x68
	// Line 1345, Address: 0x4c2168, Func Offset: 0x78
	// Line 1346, Address: 0x4c217c, Func Offset: 0x8c
	// Line 1353, Address: 0x4c2180, Func Offset: 0x90
	// Line 1354, Address: 0x4c2184, Func Offset: 0x94
	// Line 1346, Address: 0x4c2188, Func Offset: 0x98
	// Line 1347, Address: 0x4c218c, Func Offset: 0x9c
	// Line 1348, Address: 0x4c2194, Func Offset: 0xa4
	// Line 1350, Address: 0x4c219c, Func Offset: 0xac
	// Line 1351, Address: 0x4c21a0, Func Offset: 0xb0
	// Line 1353, Address: 0x4c21a4, Func Offset: 0xb4
	// Line 1354, Address: 0x4c21a8, Func Offset: 0xb8
	// Line 1357, Address: 0x4c21ac, Func Offset: 0xbc
	// Line 1358, Address: 0x4c21b0, Func Offset: 0xc0
	// Func End, Address: 0x4c21cc, Func Offset: 0xdc
}

// BinkFileGetBufferSize__FP6BINKIOUi
// Start address: 0x4c21d0
uint32 BinkFileGetBufferSize(uint32 size)
{
	// Line 1317, Address: 0x4c21d0, Func Offset: 0
	// Line 1320, Address: 0x4c21dc, Func Offset: 0xc
	// Func End, Address: 0x4c21e4, Func Offset: 0x14
}

// BinkFileReadFrame__FP6BINKIOUiiPvUi
// Start address: 0x4c21f0
uint32 BinkFileReadFrame(BINKIO* bio, int32 offset, void* dest, uint32 size)
{
	uint32 amt;
	uint32 tamt;
	uint32 timer;
	uint8* pDest;
	uint32 read_offset;
	uint32 timer2;
	uint32 cpy;
	uint32 front;
	// Line 1133, Address: 0x4c21f0, Func Offset: 0
	// Line 1134, Address: 0x4c2228, Func Offset: 0x38
	// Line 1135, Address: 0x4c2234, Func Offset: 0x44
	// Line 1139, Address: 0x4c223c, Func Offset: 0x4c
	// Line 1153, Address: 0x4c2248, Func Offset: 0x58
	// Line 1155, Address: 0x4c2260, Func Offset: 0x70
	// Line 1159, Address: 0x4c227c, Func Offset: 0x8c
	// Line 1157, Address: 0x4c2280, Func Offset: 0x90
	// Line 1160, Address: 0x4c2284, Func Offset: 0x94
	// Line 1161, Address: 0x4c2290, Func Offset: 0xa0
	// Line 1162, Address: 0x4c229c, Func Offset: 0xac
	// Line 1163, Address: 0x4c22a8, Func Offset: 0xb8
	// Line 1164, Address: 0x4c22bc, Func Offset: 0xcc
	// Line 1166, Address: 0x4c22c4, Func Offset: 0xd4
	// Line 1171, Address: 0x4c22cc, Func Offset: 0xdc
	// Line 1172, Address: 0x4c22d4, Func Offset: 0xe4
	// Line 1173, Address: 0x4c22d8, Func Offset: 0xe8
	// Line 1175, Address: 0x4c22dc, Func Offset: 0xec
	// Line 1176, Address: 0x4c22e4, Func Offset: 0xf4
	// Line 1177, Address: 0x4c22e8, Func Offset: 0xf8
	// Line 1178, Address: 0x4c22f0, Func Offset: 0x100
	// Line 1181, Address: 0x4c2300, Func Offset: 0x110
	// Line 1279, Address: 0x4c2324, Func Offset: 0x134
	// Line 1232, Address: 0x4c23dc, Func Offset: 0x1ec
	// Line 1279, Address: 0x4c23e0, Func Offset: 0x1f0
	// Line 1257, Address: 0x4c2414, Func Offset: 0x224
	// Line 1279, Address: 0x4c2418, Func Offset: 0x228
	// Line 1261, Address: 0x4c2424, Func Offset: 0x234
	// Line 1279, Address: 0x4c2428, Func Offset: 0x238
	// Line 1183, Address: 0x4c2474, Func Offset: 0x284
	// Line 1279, Address: 0x4c2478, Func Offset: 0x288
	// Line 1185, Address: 0x4c247c, Func Offset: 0x28c
	// Line 1279, Address: 0x4c2484, Func Offset: 0x294
	// Line 1188, Address: 0x4c2498, Func Offset: 0x2a8
	// Line 1279, Address: 0x4c249c, Func Offset: 0x2ac
	// Line 1283, Address: 0x4c2510, Func Offset: 0x320
	// Line 1284, Address: 0x4c2518, Func Offset: 0x328
	// Line 1283, Address: 0x4c251c, Func Offset: 0x32c
	// Line 1284, Address: 0x4c2520, Func Offset: 0x330
	// Line 1285, Address: 0x4c253c, Func Offset: 0x34c
	// Line 1311, Address: 0x4c2558, Func Offset: 0x368
	// Line 1241, Address: 0x4c2568, Func Offset: 0x378
	// Line 1311, Address: 0x4c256c, Func Offset: 0x37c
	// Line 1312, Address: 0x4c25d4, Func Offset: 0x3e4
	// Func End, Address: 0x4c2604, Func Offset: 0x414
}

// BinkFileIdle__FP6BINKIO
// Start address: 0x4c2610
uint32 BinkFileIdle(BINKIO* bio)
{
	// Line 1113, Address: 0x4c2610, Func Offset: 0
	// Line 1114, Address: 0x4c261c, Func Offset: 0xc
	// Line 1115, Address: 0x4c2628, Func Offset: 0x18
	// Line 1117, Address: 0x4c2630, Func Offset: 0x20
	// Line 1119, Address: 0x4c2648, Func Offset: 0x38
	// Line 1126, Address: 0x4c2650, Func Offset: 0x40
	// Line 1128, Address: 0x4c2658, Func Offset: 0x48
	// Line 1129, Address: 0x4c2670, Func Offset: 0x60
	// Func End, Address: 0x4c2680, Func Offset: 0x70
}

// ReadKickoff__FP6BINKIO
// Start address: 0x4c2680
void ReadKickoff(BINKIO* bio)
{
	uint32 left;
	int32 readOffset;
	uint32 requestSize;
	// Line 1050, Address: 0x4c2680, Func Offset: 0
	// Line 1051, Address: 0x4c2684, Func Offset: 0x4
	// Line 1050, Address: 0x4c2688, Func Offset: 0x8
	// Line 1051, Address: 0x4c26a0, Func Offset: 0x20
	// Line 1057, Address: 0x4c26b8, Func Offset: 0x38
	// Line 1059, Address: 0x4c26c4, Func Offset: 0x44
	// Line 1061, Address: 0x4c26c8, Func Offset: 0x48
	// Line 1059, Address: 0x4c26d4, Func Offset: 0x54
	// Line 1061, Address: 0x4c26d8, Func Offset: 0x58
	// Line 1063, Address: 0x4c26ec, Func Offset: 0x6c
	// Line 1064, Address: 0x4c26f0, Func Offset: 0x70
	// Line 1066, Address: 0x4c26f8, Func Offset: 0x78
	// Line 1076, Address: 0x4c2708, Func Offset: 0x88
	// Line 1078, Address: 0x4c2714, Func Offset: 0x94
	// Line 1081, Address: 0x4c2718, Func Offset: 0x98
	// Line 1087, Address: 0x4c271c, Func Offset: 0x9c
	// Line 1081, Address: 0x4c2720, Func Offset: 0xa0
	// Line 1090, Address: 0x4c2724, Func Offset: 0xa4
	// Line 1083, Address: 0x4c2728, Func Offset: 0xa8
	// Line 1084, Address: 0x4c272c, Func Offset: 0xac
	// Line 1087, Address: 0x4c2738, Func Offset: 0xb8
	// Line 1090, Address: 0x4c273c, Func Offset: 0xbc
	// Line 1087, Address: 0x4c2740, Func Offset: 0xc0
	// Line 1090, Address: 0x4c274c, Func Offset: 0xcc
	// Line 1093, Address: 0x4c275c, Func Offset: 0xdc
	// Line 1094, Address: 0x4c2780, Func Offset: 0x100
	// Line 1096, Address: 0x4c2790, Func Offset: 0x110
	// Line 1099, Address: 0x4c2794, Func Offset: 0x114
	// Line 1054, Address: 0x4c279c, Func Offset: 0x11c
	// Line 1099, Address: 0x4c27a4, Func Offset: 0x124
	// Line 1071, Address: 0x4c27b0, Func Offset: 0x130
	// Line 1099, Address: 0x4c27b4, Func Offset: 0x134
	// Line 1075, Address: 0x4c27d0, Func Offset: 0x150
	// Line 1103, Address: 0x4c27d8, Func Offset: 0x158
	// Line 1110, Address: 0x4c27e0, Func Offset: 0x160
	// Func End, Address: 0x4c27fc, Func Offset: 0x17c
}

// DVDReadCallback__FP9tag_xFile
// Start address: 0x4c2800
void DVDReadCallback(tag_xFile* file)
{
	BINKIO* bio;
	// Line 996, Address: 0x4c2800, Func Offset: 0
	// Line 1000, Address: 0x4c2804, Func Offset: 0x4
	// Line 996, Address: 0x4c2808, Func Offset: 0x8
	// Line 997, Address: 0x4c2818, Func Offset: 0x18
	// Line 1000, Address: 0x4c281c, Func Offset: 0x1c
	// Line 1004, Address: 0x4c284c, Func Offset: 0x4c
	// Line 1009, Address: 0x4c2854, Func Offset: 0x54
	// Line 1010, Address: 0x4c2858, Func Offset: 0x58
	// Line 1011, Address: 0x4c285c, Func Offset: 0x5c
	// Line 1021, Address: 0x4c2864, Func Offset: 0x64
	// Line 1022, Address: 0x4c2878, Func Offset: 0x78
	// Line 1024, Address: 0x4c2888, Func Offset: 0x88
	// Line 1025, Address: 0x4c2898, Func Offset: 0x98
	// Line 1028, Address: 0x4c28ac, Func Offset: 0xac
	// Line 1029, Address: 0x4c28bc, Func Offset: 0xbc
	// Line 1031, Address: 0x4c28cc, Func Offset: 0xcc
	// Line 1034, Address: 0x4c28e0, Func Offset: 0xe0
	// Line 1035, Address: 0x4c28f4, Func Offset: 0xf4
	// Line 1037, Address: 0x4c2904, Func Offset: 0x104
	// Line 1040, Address: 0x4c291c, Func Offset: 0x11c
	// Line 1042, Address: 0x4c292c, Func Offset: 0x12c
	// Line 1046, Address: 0x4c2930, Func Offset: 0x130
	// Line 1042, Address: 0x4c2934, Func Offset: 0x134
	// Line 1046, Address: 0x4c2938, Func Offset: 0x138
	// Line 1047, Address: 0x4c2940, Func Offset: 0x140
	// Line 1038, Address: 0x4c296c, Func Offset: 0x16c
	// Line 1047, Address: 0x4c2974, Func Offset: 0x174
	// Func End, Address: 0x4c298c, Func Offset: 0x18c
}

// BinkFileReadHeader__FP6BINKIOiPvUi
// Start address: 0x4c2990
uint32 BinkFileReadHeader(BINKIO* bio, int32 offset, void* dest, uint32 size)
{
	uint32 nToReadBytes;
	void* newExtraSectors;
	void* newExtraSectorsAligned;
	uint32 amt;
	// Line 929, Address: 0x4c2990, Func Offset: 0
	// Line 950, Address: 0x4c2994, Func Offset: 0x4
	// Line 929, Address: 0x4c2998, Func Offset: 0x8
	// Line 950, Address: 0x4c29cc, Func Offset: 0x3c
	// Line 952, Address: 0x4c29f8, Func Offset: 0x68
	// Line 972, Address: 0x4c2a04, Func Offset: 0x74
	// Line 973, Address: 0x4c2a10, Func Offset: 0x80
	// Line 976, Address: 0x4c2a14, Func Offset: 0x84
	// Line 978, Address: 0x4c2a34, Func Offset: 0xa4
	// Line 980, Address: 0x4c2a40, Func Offset: 0xb0
	// Line 981, Address: 0x4c2a48, Func Offset: 0xb8
	// Line 980, Address: 0x4c2a4c, Func Offset: 0xbc
	// Line 981, Address: 0x4c2a50, Func Offset: 0xc0
	// Line 992, Address: 0x4c2a6c, Func Offset: 0xdc
	// Line 956, Address: 0x4c2a7c, Func Offset: 0xec
	// Line 992, Address: 0x4c2a80, Func Offset: 0xf0
	// Line 956, Address: 0x4c2a8c, Func Offset: 0xfc
	// Line 957, Address: 0x4c2a90, Func Offset: 0x100
	// Line 992, Address: 0x4c2a94, Func Offset: 0x104
	// Line 957, Address: 0x4c2a98, Func Offset: 0x108
	// Line 992, Address: 0x4c2a9c, Func Offset: 0x10c
	// Line 960, Address: 0x4c2aac, Func Offset: 0x11c
	// Line 992, Address: 0x4c2ab0, Func Offset: 0x120
	// Line 967, Address: 0x4c2ad0, Func Offset: 0x140
	// Line 992, Address: 0x4c2ad4, Func Offset: 0x144
	// Line 968, Address: 0x4c2b00, Func Offset: 0x170
	// Line 992, Address: 0x4c2b04, Func Offset: 0x174
	// Line 993, Address: 0x4c2b1c, Func Offset: 0x18c
	// Func End, Address: 0x4c2b4c, Func Offset: 0x1bc
}

// iFMVPlay__FPCcUifUibbi
// Start address: 0x4c2b50
uint32 iFMVPlay(int8* filename, uint32 buttons, uint32 uSubtitlesAID, uint8 skippable, uint8 lockController, int32 uAudioTrack)
{
	BINK* hBinkMovie;
	int64 delay;
	int64 now;
	uint8 bTrackFound;
	int32 track;
	RwRaster* pCamRaster;
	int32 iBackBufWidth;
	int32 iBackBufHeight;
	int32 iSafeWidth;
	int32 iSafeHeight;
	float32 fInvAspect;
	int32 iHorizPad;
	int32 iVertPad;
	RwRaster* pBinkRaster;
	int32 iBinkMovieHalfHeight;
	int32 controllerEnd;
	int64 fmvAbortDelay;
	uint8 aborted;
	int64 dwTimeNow;
	int32 i;
	int32 oneIfSkip;
	uint8* pBits;
	// Line 512, Address: 0x4c2b50, Func Offset: 0
	// Line 519, Address: 0x4c2b8c, Func Offset: 0x3c
	// Line 512, Address: 0x4c2b90, Func Offset: 0x40
	// Line 519, Address: 0x4c2b98, Func Offset: 0x48
	// Line 521, Address: 0x4c2ba4, Func Offset: 0x54
	// Line 533, Address: 0x4c2bac, Func Offset: 0x5c
	// Line 537, Address: 0x4c2bb8, Func Offset: 0x68
	// Line 538, Address: 0x4c2bdc, Func Offset: 0x8c
	// Line 553, Address: 0x4c2be4, Func Offset: 0x94
	// Line 552, Address: 0x4c2be8, Func Offset: 0x98
	// Line 553, Address: 0x4c2bec, Func Offset: 0x9c
	// Line 555, Address: 0x4c2c00, Func Offset: 0xb0
	// Line 558, Address: 0x4c2c0c, Func Offset: 0xbc
	// Line 560, Address: 0x4c2c14, Func Offset: 0xc4
	// Line 564, Address: 0x4c2c2c, Func Offset: 0xdc
	// Line 566, Address: 0x4c2ca4, Func Offset: 0x154
	// Line 567, Address: 0x4c2cc4, Func Offset: 0x174
	// Line 569, Address: 0x4c2cd4, Func Offset: 0x184
	// Line 570, Address: 0x4c2cec, Func Offset: 0x19c
	// Line 576, Address: 0x4c2cf0, Func Offset: 0x1a0
	// Line 577, Address: 0x4c2cf4, Func Offset: 0x1a4
	// Line 570, Address: 0x4c2cfc, Func Offset: 0x1ac
	// Line 572, Address: 0x4c2d08, Func Offset: 0x1b8
	// Line 573, Address: 0x4c2d0c, Func Offset: 0x1bc
	// Line 570, Address: 0x4c2d10, Func Offset: 0x1c0
	// Line 574, Address: 0x4c2d14, Func Offset: 0x1c4
	// Line 575, Address: 0x4c2d18, Func Offset: 0x1c8
	// Line 574, Address: 0x4c2d20, Func Offset: 0x1d0
	// Line 575, Address: 0x4c2d24, Func Offset: 0x1d4
	// Line 574, Address: 0x4c2d28, Func Offset: 0x1d8
	// Line 575, Address: 0x4c2d30, Func Offset: 0x1e0
	// Line 576, Address: 0x4c2d34, Func Offset: 0x1e4
	// Line 575, Address: 0x4c2d3c, Func Offset: 0x1ec
	// Line 577, Address: 0x4c2d44, Func Offset: 0x1f4
	// Line 578, Address: 0x4c2d48, Func Offset: 0x1f8
	// Line 580, Address: 0x4c2db8, Func Offset: 0x268
	// Line 582, Address: 0x4c2dbc, Func Offset: 0x26c
	// Line 583, Address: 0x4c2dc4, Func Offset: 0x274
	// Line 585, Address: 0x4c2dcc, Func Offset: 0x27c
	// Line 586, Address: 0x4c2de4, Func Offset: 0x294
	// Line 587, Address: 0x4c2dfc, Func Offset: 0x2ac
	// Line 589, Address: 0x4c2e00, Func Offset: 0x2b0
	// Line 592, Address: 0x4c2e0c, Func Offset: 0x2bc
	// Line 593, Address: 0x4c2e10, Func Offset: 0x2c0
	// Line 592, Address: 0x4c2e18, Func Offset: 0x2c8
	// Line 593, Address: 0x4c2e20, Func Offset: 0x2d0
	// Line 592, Address: 0x4c2e24, Func Offset: 0x2d4
	// Line 593, Address: 0x4c2e38, Func Offset: 0x2e8
	// Line 594, Address: 0x4c2e4c, Func Offset: 0x2fc
	// Line 596, Address: 0x4c2e68, Func Offset: 0x318
	// Line 601, Address: 0x4c2e74, Func Offset: 0x324
	// Line 602, Address: 0x4c2eb4, Func Offset: 0x364
	// Line 631, Address: 0x4c2ed8, Func Offset: 0x388
	// Line 644, Address: 0x4c2ee4, Func Offset: 0x394
	// Line 646, Address: 0x4c2ee8, Func Offset: 0x398
	// Line 648, Address: 0x4c2efc, Func Offset: 0x3ac
	// Line 650, Address: 0x4c2f04, Func Offset: 0x3b4
	// Line 651, Address: 0x4c2f10, Func Offset: 0x3c0
	// Line 656, Address: 0x4c2f18, Func Offset: 0x3c8
	// Line 663, Address: 0x4c2f24, Func Offset: 0x3d4
	// Line 656, Address: 0x4c2f28, Func Offset: 0x3d8
	// Line 663, Address: 0x4c2f2c, Func Offset: 0x3dc
	// Line 664, Address: 0x4c2f38, Func Offset: 0x3e8
	// Line 666, Address: 0x4c2f48, Func Offset: 0x3f8
	// Line 636, Address: 0x4c2f88, Func Offset: 0x438
	// Line 666, Address: 0x4c2f8c, Func Offset: 0x43c
	// Line 637, Address: 0x4c2fa4, Func Offset: 0x454
	// Line 666, Address: 0x4c2fac, Func Offset: 0x45c
	// Line 667, Address: 0x4c2fc4, Func Offset: 0x474
	// Line 669, Address: 0x4c2fcc, Func Offset: 0x47c
	// Line 672, Address: 0x4c2fd8, Func Offset: 0x488
	// Line 673, Address: 0x4c2fe0, Func Offset: 0x490
	// Line 678, Address: 0x4c3008, Func Offset: 0x4b8
	// Line 918, Address: 0x4c3018, Func Offset: 0x4c8
	// Line 920, Address: 0x4c3030, Func Offset: 0x4e0
	// Line 921, Address: 0x4c3038, Func Offset: 0x4e8
	// Line 922, Address: 0x4c308c, Func Offset: 0x53c
	// Line 523, Address: 0x4c3094, Func Offset: 0x544
	// Line 922, Address: 0x4c30a0, Func Offset: 0x550
	// Line 537, Address: 0x4c30d8, Func Offset: 0x588
	// Line 922, Address: 0x4c30dc, Func Offset: 0x58c
	// Line 537, Address: 0x4c3104, Func Offset: 0x5b4
	// Line 922, Address: 0x4c3108, Func Offset: 0x5b8
	// Line 550, Address: 0x4c3148, Func Offset: 0x5f8
	// Line 922, Address: 0x4c3150, Func Offset: 0x600
	// Line 566, Address: 0x4c31d8, Func Offset: 0x688
	// Line 922, Address: 0x4c31dc, Func Offset: 0x68c
	// Line 566, Address: 0x4c3204, Func Offset: 0x6b4
	// Line 922, Address: 0x4c3208, Func Offset: 0x6b8
	// Line 636, Address: 0x4c325c, Func Offset: 0x70c
	// Line 922, Address: 0x4c3260, Func Offset: 0x710
	// Line 659, Address: 0x4c32b8, Func Offset: 0x768
	// Line 922, Address: 0x4c32bc, Func Offset: 0x76c
	// Line 660, Address: 0x4c32d4, Func Offset: 0x784
	// Line 922, Address: 0x4c32dc, Func Offset: 0x78c
	// Line 659, Address: 0x4c32ec, Func Offset: 0x79c
	// Line 922, Address: 0x4c32f0, Func Offset: 0x7a0
	// Line 684, Address: 0x4c3320, Func Offset: 0x7d0
	// Line 922, Address: 0x4c3324, Func Offset: 0x7d4
	// Line 686, Address: 0x4c3364, Func Offset: 0x814
	// Line 922, Address: 0x4c3368, Func Offset: 0x818
	// Line 693, Address: 0x4c3370, Func Offset: 0x820
	// Line 922, Address: 0x4c3378, Func Offset: 0x828
	// Line 733, Address: 0x4c33b0, Func Offset: 0x860
	// Line 922, Address: 0x4c33b8, Func Offset: 0x868
	// Line 737, Address: 0x4c33c4, Func Offset: 0x874
	// Line 922, Address: 0x4c33e4, Func Offset: 0x894
	// Line 737, Address: 0x4c33fc, Func Offset: 0x8ac
	// Line 922, Address: 0x4c3400, Func Offset: 0x8b0
	// Line 759, Address: 0x4c3420, Func Offset: 0x8d0
	// Line 922, Address: 0x4c3428, Func Offset: 0x8d8
	// Line 782, Address: 0x4c3448, Func Offset: 0x8f8
	// Line 922, Address: 0x4c3450, Func Offset: 0x900
	// Line 785, Address: 0x4c345c, Func Offset: 0x90c
	// Line 922, Address: 0x4c347c, Func Offset: 0x92c
	// Line 817, Address: 0x4c34a4, Func Offset: 0x954
	// Line 922, Address: 0x4c34ac, Func Offset: 0x95c
	// Line 818, Address: 0x4c34b4, Func Offset: 0x964
	// Line 922, Address: 0x4c34b8, Func Offset: 0x968
	// Line 899, Address: 0x4c34e4, Func Offset: 0x994
	// Line 922, Address: 0x4c34e8, Func Offset: 0x998
	// Line 899, Address: 0x4c34f0, Func Offset: 0x9a0
	// Line 922, Address: 0x4c3518, Func Offset: 0x9c8
	// Line 899, Address: 0x4c3524, Func Offset: 0x9d4
	// Line 922, Address: 0x4c3560, Func Offset: 0xa10
	// Line 695, Address: 0x4c35c0, Func Offset: 0xa70
	// Line 922, Address: 0x4c35c4, Func Offset: 0xa74
	// Line 695, Address: 0x4c35d4, Func Offset: 0xa84
	// Line 922, Address: 0x4c35d8, Func Offset: 0xa88
	// Line 700, Address: 0x4c35e0, Func Offset: 0xa90
	// Line 701, Address: 0x4c35e8, Func Offset: 0xa98
	// Line 922, Address: 0x4c35f0, Func Offset: 0xaa0
	// Line 921, Address: 0x4c3600, Func Offset: 0xab0
	// Line 922, Address: 0x4c3604, Func Offset: 0xab4
	// Line 923, Address: 0x4c3624, Func Offset: 0xad4
	// Func End, Address: 0x4c3658, Func Offset: 0xb08
}

// iFMVPlay__FPCcUifUibb
// Start address: 0x4c3660
uint32 iFMVPlay(int8* filename, uint32 buttons, float32 time, uint32 uSubtitlesAID, uint8 skippable, uint8 lockController)
{
	int8 fullname[64];
	int8 BIK[5];
	_GameOstrich old;
	xRegion localRegion;
	uint32 ret;
	// Line 474, Address: 0x4c3660, Func Offset: 0
	// Line 477, Address: 0x4c3664, Func Offset: 0x4
	// Line 474, Address: 0x4c3668, Func Offset: 0x8
	// Line 477, Address: 0x4c369c, Func Offset: 0x3c
	// Line 478, Address: 0x4c36c8, Func Offset: 0x68
	// Line 479, Address: 0x4c36d0, Func Offset: 0x70
	// Line 480, Address: 0x4c36dc, Func Offset: 0x7c
	// Line 481, Address: 0x4c36ec, Func Offset: 0x8c
	// Line 482, Address: 0x4c36f8, Func Offset: 0x98
	// Line 488, Address: 0x4c3704, Func Offset: 0xa4
	// Line 489, Address: 0x4c371c, Func Offset: 0xbc
	// Line 491, Address: 0x4c3740, Func Offset: 0xe0
	// Line 493, Address: 0x4c3748, Func Offset: 0xe8
	// Line 494, Address: 0x4c3754, Func Offset: 0xf4
	// Line 496, Address: 0x4c375c, Func Offset: 0xfc
	// Line 497, Address: 0x4c3764, Func Offset: 0x104
	// Line 505, Address: 0x4c3788, Func Offset: 0x128
	// Line 507, Address: 0x4c3790, Func Offset: 0x130
	// Line 508, Address: 0x4c3798, Func Offset: 0x138
	// Line 509, Address: 0x4c379c, Func Offset: 0x13c
	// Func End, Address: 0x4c37c0, Func Offset: 0x160
}

// iFMVClose__FRP5MOVIE
// Start address: 0x4c37c0
void iFMVClose(MOVIE&* pMovie)
{
	// Line 325, Address: 0x4c37c0, Func Offset: 0
	// Line 326, Address: 0x4c37d4, Func Offset: 0x14
	// Line 328, Address: 0x4c37dc, Func Offset: 0x1c
	// Line 329, Address: 0x4c37e8, Func Offset: 0x28
	// Line 330, Address: 0x4c37f0, Func Offset: 0x30
	// Line 331, Address: 0x4c37f8, Func Offset: 0x38
	// Line 334, Address: 0x4c3808, Func Offset: 0x48
	// Line 335, Address: 0x4c3810, Func Offset: 0x50
	// Line 337, Address: 0x4c3820, Func Offset: 0x60
	// Line 338, Address: 0x4c3828, Func Offset: 0x68
	// Line 339, Address: 0x4c3830, Func Offset: 0x70
	// Line 341, Address: 0x4c3838, Func Offset: 0x78
	// Line 342, Address: 0x4c3844, Func Offset: 0x84
	// Line 343, Address: 0x4c3854, Func Offset: 0x94
	// Line 344, Address: 0x4c3858, Func Offset: 0x98
	// Line 345, Address: 0x4c3868, Func Offset: 0xa8
	// Line 344, Address: 0x4c3880, Func Offset: 0xc0
	// Line 345, Address: 0x4c3884, Func Offset: 0xc4
	// Func End, Address: 0x4c38b0, Func Offset: 0xf0
}

// iFMVOpen__FR15PKRAssetTOCInfo
// Start address: 0x4c38b0
MOVIE* iFMVOpen(PKRAssetTOCInfo& rAssetInfo)
{
	MOVIE* pMovie;
	int8* pFilename;
	uint32 file_ok;
	// Line 271, Address: 0x4c38b0, Func Offset: 0
	// Line 273, Address: 0x4c38c4, Func Offset: 0x14
	// Line 276, Address: 0x4c38cc, Func Offset: 0x1c
	// Line 278, Address: 0x4c38e4, Func Offset: 0x34
	// Line 279, Address: 0x4c38f4, Func Offset: 0x44
	// Line 280, Address: 0x4c38fc, Func Offset: 0x4c
	// Line 281, Address: 0x4c3904, Func Offset: 0x54
	// Line 280, Address: 0x4c3908, Func Offset: 0x58
	// Line 281, Address: 0x4c390c, Func Offset: 0x5c
	// Line 282, Address: 0x4c3924, Func Offset: 0x74
	// Line 288, Address: 0x4c392c, Func Offset: 0x7c
	// Line 290, Address: 0x4c3934, Func Offset: 0x84
	// Line 298, Address: 0x4c3944, Func Offset: 0x94
	// Line 301, Address: 0x4c3950, Func Offset: 0xa0
	// Line 302, Address: 0x4c39c0, Func Offset: 0x110
	// Line 285, Address: 0x4c3a20, Func Offset: 0x170
	// Line 302, Address: 0x4c3a24, Func Offset: 0x174
	// Line 286, Address: 0x4c3a3c, Func Offset: 0x18c
	// Line 302, Address: 0x4c3a44, Func Offset: 0x194
	// Line 285, Address: 0x4c3a54, Func Offset: 0x1a4
	// Line 302, Address: 0x4c3a58, Func Offset: 0x1a8
	// Line 301, Address: 0x4c3a88, Func Offset: 0x1d8
	// Line 302, Address: 0x4c3a8c, Func Offset: 0x1dc
	// Line 304, Address: 0x4c3aac, Func Offset: 0x1fc
	// Line 305, Address: 0x4c3ac8, Func Offset: 0x218
	// Line 307, Address: 0x4c3ad8, Func Offset: 0x228
	// Line 309, Address: 0x4c3af0, Func Offset: 0x240
	// Line 308, Address: 0x4c3af4, Func Offset: 0x244
	// Line 309, Address: 0x4c3b08, Func Offset: 0x258
	// Line 310, Address: 0x4c3b10, Func Offset: 0x260
	// Line 320, Address: 0x4c3b18, Func Offset: 0x268
	// Line 321, Address: 0x4c3b30, Func Offset: 0x280
	// Line 313, Address: 0x4c3b8c, Func Offset: 0x2dc
	// Line 321, Address: 0x4c3b90, Func Offset: 0x2e0
	// Line 314, Address: 0x4c3ba8, Func Offset: 0x2f8
	// Line 321, Address: 0x4c3bb0, Func Offset: 0x300
	// Line 313, Address: 0x4c3bc0, Func Offset: 0x310
	// Line 321, Address: 0x4c3bc4, Func Offset: 0x314
	// Line 322, Address: 0x4c3be4, Func Offset: 0x334
	// Func End, Address: 0x4c3bfc, Func Offset: 0x34c
}

// iFMVPrebufferReadComplete__FP5MOVIE
// Start address: 0x4c3c00
void iFMVPrebufferReadComplete(MOVIE* pMovie)
{
	// Line 239, Address: 0x4c3c00, Func Offset: 0
	// Line 240, Address: 0x4c3c04, Func Offset: 0x4
	// Line 239, Address: 0x4c3c08, Func Offset: 0x8
	// Line 240, Address: 0x4c3c10, Func Offset: 0x10
	// Line 244, Address: 0x4c3c20, Func Offset: 0x20
	// Line 245, Address: 0x4c3c50, Func Offset: 0x50
	// Line 247, Address: 0x4c3c80, Func Offset: 0x80
	// Line 248, Address: 0x4c3c94, Func Offset: 0x94
	// Line 255, Address: 0x4c3c9c, Func Offset: 0x9c
	// Line 257, Address: 0x4c3ca4, Func Offset: 0xa4
	// Line 258, Address: 0x4c3cb0, Func Offset: 0xb0
	// Line 261, Address: 0x4c3cb8, Func Offset: 0xb8
	// Line 262, Address: 0x4c3cc4, Func Offset: 0xc4
	// Line 265, Address: 0x4c3cd4, Func Offset: 0xd4
	// Line 266, Address: 0x4c3d44, Func Offset: 0x144
	// Line 251, Address: 0x4c3da4, Func Offset: 0x1a4
	// Line 266, Address: 0x4c3da8, Func Offset: 0x1a8
	// Line 252, Address: 0x4c3dc0, Func Offset: 0x1c0
	// Line 266, Address: 0x4c3dc8, Func Offset: 0x1c8
	// Line 251, Address: 0x4c3dd8, Func Offset: 0x1d8
	// Line 266, Address: 0x4c3ddc, Func Offset: 0x1dc
	// Line 265, Address: 0x4c3e0c, Func Offset: 0x20c
	// Line 266, Address: 0x4c3e10, Func Offset: 0x210
	// Line 268, Address: 0x4c3e30, Func Offset: 0x230
	// Func End, Address: 0x4c3e40, Func Offset: 0x240
}

// iFMVInit__Fv
// Start address: 0x4c3e40
void iFMVInit()
{
	RwResEntry* repEntryOwner;
	RwResEntry* repEntry;
	uint32 uIOPMem;
	// Line 135, Address: 0x4c3e40, Func Offset: 0
	// Line 137, Address: 0x4c3e44, Func Offset: 0x4
	// Line 135, Address: 0x4c3e4c, Func Offset: 0xc
	// Line 137, Address: 0x4c3e50, Func Offset: 0x10
	// Line 141, Address: 0x4c3e5c, Func Offset: 0x1c
	// Line 144, Address: 0x4c3e68, Func Offset: 0x28
	// Line 148, Address: 0x4c3e78, Func Offset: 0x38
	// Line 150, Address: 0x4c3e90, Func Offset: 0x50
	// Line 155, Address: 0x4c3e98, Func Offset: 0x58
	// Line 157, Address: 0x4c3eb4, Func Offset: 0x74
	// Line 159, Address: 0x4c3ed4, Func Offset: 0x94
	// Line 162, Address: 0x4c3edc, Func Offset: 0x9c
	// Line 167, Address: 0x4c3ee8, Func Offset: 0xa8
	// Line 171, Address: 0x4c3efc, Func Offset: 0xbc
	// Line 172, Address: 0x4c3f14, Func Offset: 0xd4
	// Line 175, Address: 0x4c3f24, Func Offset: 0xe4
	// Line 176, Address: 0x4c3f30, Func Offset: 0xf0
	// Func End, Address: 0x4c3f3c, Func Offset: 0xfc
}

// iFMVSystemInit__Fv
// Start address: 0x4c3f40
uint8 iFMVSystemInit()
{
	// Line 129, Address: 0x4c3f40, Func Offset: 0
	// Func End, Address: 0x4c3f48, Func Offset: 0x8
}

// _MovieFree__FPv
// Start address: 0x4c3f50
void _MovieFree(void* pMemToFree)
{
	// Line 122, Address: 0x4c3f54, Func Offset: 0x4
	// Func End, Address: 0x4c3f60, Func Offset: 0x10
}

// _MovieAlloc__FUi
// Start address: 0x4c3f60
void* _MovieAlloc(uint32 uNumBytes)
{
	void* pAllocated;
	// Line 115, Address: 0x4c3f64, Func Offset: 0x4
	// Func End, Address: 0x4c3f74, Func Offset: 0x14
}

