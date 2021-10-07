typedef struct xBase;
typedef struct _zEntHangable;
typedef struct RwLinkList;
typedef struct _xEntShadow;
typedef struct RxNodeDefinition;
typedef struct xAnimSingle;
typedef struct RpMeshHeader;
typedef struct _xVec3;
typedef struct _tagxRumble;
typedef struct RxPacket;
typedef struct zAssetPickupTable;
typedef struct RxPipeline;
typedef struct RpWorldSector;
typedef struct RxClusterDefinition;
typedef struct RwResEntry;
typedef struct _tagxCamFrame;
typedef struct xAnimTable;
typedef struct _xEntFrame;
typedef struct xCutsceneData;
typedef enum RxClusterValid;
typedef struct zMusicSituation;
typedef struct RxPipelineCluster;
typedef struct zJumpParam;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimEffect;
typedef struct _tagxCamShoulderAsset;
typedef struct RwCamera;
typedef struct _xRot;
typedef enum _tagTransType;
typedef struct xCutsceneTime;
typedef struct zGlobals;
typedef struct xAnimTransition;
typedef struct rxReq;
typedef enum RwFogType;
typedef struct p2EntAsset;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RpGeometry;
typedef struct _tagxPad;
typedef struct _tagxCamStaticFollow;
typedef struct RwTexCoords;
typedef struct RwRaster;
typedef struct xAnimState;
typedef struct RxPipelineNodeTopSortData;
typedef struct p2LinkAsset;
typedef struct RpAtomic;
typedef struct RxOutputSpec;
typedef struct _tagxCam;
typedef struct RwTexDictionary;
typedef struct _zEnt;
typedef enum RxClusterForcePresent;
typedef struct RpMorphTarget;
typedef struct RwFrame;
typedef struct RpVertexNormal;
typedef struct RpMaterialList;
typedef struct RpSector;
typedef struct RxClusterRef;
typedef struct _xEnv;
typedef enum RxNodeDefEditable;
typedef struct RpMaterial;
typedef struct _zPortal;
typedef struct _zCutsceneMgr;
typedef struct RwLLLink;
typedef struct RwV3d;
typedef struct xCutscene;
typedef struct iShadowCache;
typedef struct RxIoSpec;
typedef struct zPortalAsset;
typedef struct zPlayerStatic;
typedef struct _xMat4x3;
typedef enum _tagRumbleType;
typedef struct zScene;
typedef struct rxHeapFreeBlock;
typedef enum eGameMode;
typedef struct _tagxCamPath;
typedef struct xCutsceneInfo;
typedef struct RpClump;
typedef struct _tagp2CamStaticAsset;
typedef struct RxNodeMethods;
typedef struct _xEnt;
typedef struct RpLight;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpPolygon;
typedef struct RwSurfaceProperties;
typedef struct p2EntHangableAsset;
typedef struct _zPlatform;
typedef struct RpTriangle;
typedef struct _xSphere;
typedef struct xCutsceneBreak;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct _xBound;
typedef struct _xScene;
typedef struct RxCluster;
typedef struct xMemPool;
typedef struct xAnimActiveEffect;
typedef struct rxHeapBlockHeader;
typedef struct _xEntDrive;
typedef struct _xCylinder;
typedef struct xAnimPlay;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef enum RxClusterValidityReq;
typedef struct RwSphere;
typedef struct _xCollis;
typedef struct xModelInstance;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimFile;
typedef struct zCutsceneZbuffer;
typedef struct _tagxCamFollow;
typedef struct iEnv;
typedef struct _xBox;
typedef struct _iCollis;
typedef struct RpCollSector;
typedef struct _xEntCollis;
typedef struct xAnimTransitionList;
typedef enum RwTextureAddressMode;
typedef struct xModelPool;
typedef enum RwCameraProjection;
typedef struct RxPipelineNode;
typedef struct iModelTag;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNodeParam;
typedef struct _tagxCamPathAsset;
typedef struct p2BaseAsset;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct tag_xFile;
typedef struct RwRGBA;
typedef struct sceCdlFILE;
typedef struct iFogParams;
typedef struct RpInterpolator;
typedef struct zCutsceneZbufferHack;
typedef struct tag_iFile;
typedef struct _tagxCamShoulder;
typedef struct RwRGBAReal;
typedef struct zMusicTrackInfo;
typedef enum _tagPadState;
typedef struct _tagiPad;
typedef struct RwV2d;
typedef struct _tagxCamFollowAsset;
typedef struct zCutsceneMgrAsset;
typedef struct xCamAsset;
typedef struct zShaggy1Globals;
typedef enum RwTextureFilterMode;
typedef enum _tagCamType;
typedef struct xQCData;
typedef struct RwObject;
typedef struct zCheckPoint;
typedef struct _xQuat;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct xFFX;
typedef struct _tagxCamStatic;
typedef struct zGlobalGameStats;
typedef struct _xBBox;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RwBBox;
typedef struct _xVec4;

typedef int32(*type_0)(RxNodeDefinition*);
typedef void(*type_2)(RxNodeDefinition*);
typedef uint32(*type_3)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef int32(*type_6)(RxPipelineNode*);
typedef void(*type_7)(RwResEntry*);
typedef RpWorldSector*(*type_8)(RpWorldSector*);
typedef void(*type_9)(RxPipelineNode*);
typedef int32(*type_10)(xBase*, xBase*, uint32, float32*, xBase*);
typedef int32(*type_13)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_16)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_19)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_24)(RwCamera*);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef RwCamera*(*type_28)(RwCamera*);
typedef void(*type_46)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_49)(xMemPool*, void*);
typedef void(*type_52)(_xEnt*, _xScene*, float32);
typedef void(*type_56)(_xEnt*);
typedef xBase*(*type_60)(uint32);
typedef void(*type_62)(_xEnt*);
typedef void(*type_63)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int8*(*type_64)(xBase*);
typedef int8*(*type_66)(uint32);
typedef void(*type_67)(_xEnt*, _xVec3*);
typedef int32(*type_68)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RwObjectHasFrame*(*type_72)(RwObjectHasFrame*);
typedef uint32(*type_74)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_77)(int32);
typedef void(*type_86)(_xEnt*, _xVec3*);

typedef uint8 type_1[8];
typedef uint8 type_4[8];
typedef uint8 type_11[3];
typedef float32 type_12[15];
typedef uint8 type_14[3];
typedef float32 type_15[15];
typedef _xVec4 type_17[8];
typedef uint32 type_18[15];
typedef iModelTag type_20[4];
typedef int32 type_21[2];
typedef uint8 type_22[22];
typedef uint8 type_23[22];
typedef int8 type_26[32];
typedef int8 type_27[32];
typedef int8 type_29[128];
typedef int8 type_30[128][6];
typedef _xVec3 type_31[4];
typedef zMusicSituation type_32[7];
typedef float32 type_33[4];
typedef int8 type_34[32];
typedef float32 type_35[4];
typedef float32 type_36[2];
typedef int8 type_37[16];
typedef float32 type_38[4];
typedef uint32 type_39[2];
typedef uint8 type_40[3];
typedef uint16 type_41[3];
typedef uint16 type_42[3];
typedef float32 type_43[4];
typedef uint8 type_44[3];
typedef float32 type_45[4];
typedef RwFrustumPlane type_47[6];
typedef float32 type_48[3];
typedef zGlobalGameStats type_50[30];
typedef float32 type_51[3];
typedef RwV3d type_53[8];
typedef zGlobalGameStats type_54[13];
typedef zGlobalGameStats type_55[4];
typedef _zEnt* type_57[10];
typedef uint32 type_58[1];
typedef float32 type_59[2];
typedef int32 type_61[2];
typedef int32 type_65[2];
typedef float32 type_69[4];
typedef RpLight* type_70[2];
typedef RwFrame* type_71[2];
typedef float32 type_73[4];
typedef RwTexCoords* type_75[8];
typedef float32 type_76[4];
typedef int8 type_78[16];
typedef uint8 type_79[2];
typedef zCutsceneZbuffer type_80[4];
typedef uint8 type_81[8];
typedef int8 type_82[128];
typedef uint32 type_83[2];
typedef uint32 type_84[2][45];
typedef uint32 type_85[2];
typedef uint32 type_87[2];
typedef RwTexCoords* type_88[8];
typedef uint32 type_89[2];
typedef float32 type_90[4];
typedef uint32 type_91[43];
typedef uint32 type_92[2];
typedef _xVec3 type_93[2];
typedef xBase* type_94[43];
typedef _xQuat type_95[2];
typedef _xCollis type_96[18];
typedef RxCluster type_97[1];
typedef int8 type_98[16];
typedef zMusicSituation* type_99[2];
typedef zMusicTrackInfo type_100[2];
typedef int8 type_101[16];
typedef uint32 type_102[4];
typedef uint8 type_103[8];
typedef uint8 type_104[8];

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RwLinkList
{
	RwLLLink link;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zMusicSituation
{
	int32 track;
	uint32 priority;
	uint32 countMax;
	float32 delay;
	float32 punchDelay;
	float32 elapsedTime;
	uint32 count;
	uint32 sndid;
	int32 situation;
	int32 music_enum;
	int32 game_state;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpSector
{
	int32 type;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _zPlatform
{
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct _iCollis
{
	int32 unknown;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct sceCdlFILE
{
	uint32 lsn;
	uint32 size;
	int8 name[16];
	uint8 date[8];
	uint32 flag;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct zMusicTrackInfo
{
	uint32 snd_id;
	uint32 loop;
	zMusicSituation* situation;
	uint32 assetID;
	float32 lastVol;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagiPad
{
	int32 port;
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
};

struct _tagxCamStatic
{
	uint32 unused;
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

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

uint32 sMusicPaused;
uint32 sMusicSoundID[2][45];
int32 sMusicLastEnum[2];
float32 sMusicTimer[2];
zMusicSituation* sMusicQueueData[2];
zMusicSituation sMusicInfo[7];
zMusicTrackInfo sMusicTrack[2];
eGameMode gGameMode;
zGlobals globals;

void zMusicUnpause(int32 kill);
void zMusicPause();
void zMusicKill();
void zMusicUpdate(float32 dt);
void zMusicNotifyEvent(float32* toParam);
void zMusicNotify(int32 situation);
int32 zMusicDo(int32 track);
void zMusicInit();

// zMusicUnpause__Fi
// Start address: 0x277820
void zMusicUnpause(int32 kill)
{
	int32 i;
	// Line 920, Address: 0x277820, Func Offset: 0
	// Line 921, Address: 0x277838, Func Offset: 0x18
	// Line 923, Address: 0x27784c, Func Offset: 0x2c
	// Line 925, Address: 0x277854, Func Offset: 0x34
	// Line 927, Address: 0x277860, Func Offset: 0x40
	// Line 930, Address: 0x277868, Func Offset: 0x48
	// Line 933, Address: 0x277870, Func Offset: 0x50
	// Line 938, Address: 0x2778a0, Func Offset: 0x80
	// Line 940, Address: 0x2778b4, Func Offset: 0x94
	// Line 941, Address: 0x2778b8, Func Offset: 0x98
	// Line 944, Address: 0x2778c8, Func Offset: 0xa8
	// Line 947, Address: 0x2778cc, Func Offset: 0xac
	// Func End, Address: 0x2778e8, Func Offset: 0xc8
}

// zMusicPause__Fv
// Start address: 0x2778f0
void zMusicPause()
{
	int32 i;
	// Line 899, Address: 0x2778f0, Func Offset: 0
	// Line 900, Address: 0x277904, Func Offset: 0x14
	// Line 903, Address: 0x277914, Func Offset: 0x24
	// Line 905, Address: 0x27791c, Func Offset: 0x2c
	// Line 907, Address: 0x277928, Func Offset: 0x38
	// Line 908, Address: 0x277938, Func Offset: 0x48
	// Line 910, Address: 0x277940, Func Offset: 0x50
	// Line 912, Address: 0x277950, Func Offset: 0x60
	// Line 916, Address: 0x277958, Func Offset: 0x68
	// Func End, Address: 0x277970, Func Offset: 0x80
}

// zMusicKill__Fv
// Start address: 0x277970
void zMusicKill()
{
	int32 i;
	// Line 881, Address: 0x277970, Func Offset: 0
	// Line 885, Address: 0x277984, Func Offset: 0x14
	// Line 887, Address: 0x27798c, Func Offset: 0x1c
	// Line 889, Address: 0x277998, Func Offset: 0x28
	// Line 890, Address: 0x2779a0, Func Offset: 0x30
	// Line 891, Address: 0x2779a4, Func Offset: 0x34
	// Line 892, Address: 0x2779a8, Func Offset: 0x38
	// Line 893, Address: 0x2779ac, Func Offset: 0x3c
	// Line 894, Address: 0x2779b0, Func Offset: 0x40
	// Line 897, Address: 0x2779c0, Func Offset: 0x50
	// Func End, Address: 0x2779d4, Func Offset: 0x64
}

// zMusicUpdate__Ff
// Start address: 0x2779e0
void zMusicUpdate(float32 dt)
{
	int32 i;
	// Line 836, Address: 0x2779e0, Func Offset: 0
	// Line 838, Address: 0x2779fc, Func Offset: 0x1c
	// Line 844, Address: 0x277a08, Func Offset: 0x28
	// Line 853, Address: 0x277a14, Func Offset: 0x34
	// Line 844, Address: 0x277a24, Func Offset: 0x44
	// Line 858, Address: 0x277a74, Func Offset: 0x94
	// Line 860, Address: 0x277aa0, Func Offset: 0xc0
	// Line 864, Address: 0x277abc, Func Offset: 0xdc
	// Line 866, Address: 0x277ad4, Func Offset: 0xf4
	// Line 867, Address: 0x277adc, Func Offset: 0xfc
	// Line 868, Address: 0x277aec, Func Offset: 0x10c
	// Line 871, Address: 0x277af0, Func Offset: 0x110
	// Line 873, Address: 0x277b18, Func Offset: 0x138
	// Line 877, Address: 0x277b20, Func Offset: 0x140
	// Line 873, Address: 0x277b28, Func Offset: 0x148
	// Line 877, Address: 0x277b2c, Func Offset: 0x14c
	// Line 878, Address: 0x277b34, Func Offset: 0x154
	// Func End, Address: 0x277b54, Func Offset: 0x174
}

// zMusicNotifyEvent__FPfP5xBase
// Start address: 0x277b60
void zMusicNotifyEvent(float32* toParam)
{
	zMusicSituation* s;
	// Line 790, Address: 0x277b60, Func Offset: 0
	// Line 799, Address: 0x277b6c, Func Offset: 0xc
	// Line 805, Address: 0x277bac, Func Offset: 0x4c
	// Line 811, Address: 0x277bc8, Func Offset: 0x68
	// Line 818, Address: 0x277be4, Func Offset: 0x84
	// Line 824, Address: 0x277bfc, Func Offset: 0x9c
	// Line 825, Address: 0x277c0c, Func Offset: 0xac
	// Line 826, Address: 0x277c1c, Func Offset: 0xbc
	// Line 831, Address: 0x277c3c, Func Offset: 0xdc
	// Line 832, Address: 0x277c60, Func Offset: 0x100
	// Func End, Address: 0x277c68, Func Offset: 0x108
}

// zMusicNotify__Fi
// Start address: 0x277c70
void zMusicNotify(int32 situation)
{
	zMusicSituation* s;
	// Line 747, Address: 0x277c70, Func Offset: 0
	// Line 755, Address: 0x277c7c, Func Offset: 0xc
	// Line 767, Address: 0x277c98, Func Offset: 0x28
	// Line 774, Address: 0x277cb4, Func Offset: 0x44
	// Line 780, Address: 0x277ccc, Func Offset: 0x5c
	// Line 781, Address: 0x277cd8, Func Offset: 0x68
	// Line 780, Address: 0x277cdc, Func Offset: 0x6c
	// Line 781, Address: 0x277ce8, Func Offset: 0x78
	// Line 782, Address: 0x277cf8, Func Offset: 0x88
	// Line 784, Address: 0x277d18, Func Offset: 0xa8
	// Func End, Address: 0x277d20, Func Offset: 0xb0
}

// zMusicDo__Fi
// Start address: 0x277d20
int32 zMusicDo(int32 track)
{
	float32 vol;
	int32 snd_enum;
	// Line 205, Address: 0x277d20, Func Offset: 0
	// Line 207, Address: 0x277d44, Func Offset: 0x24
	// Line 205, Address: 0x277d48, Func Offset: 0x28
	// Line 207, Address: 0x277d4c, Func Offset: 0x2c
	// Line 212, Address: 0x277d54, Func Offset: 0x34
	// Line 215, Address: 0x277d64, Func Offset: 0x44
	// Line 212, Address: 0x277d74, Func Offset: 0x54
	// Line 215, Address: 0x277d78, Func Offset: 0x58
	// Line 224, Address: 0x277da0, Func Offset: 0x80
	// Line 221, Address: 0x277da8, Func Offset: 0x88
	// Line 224, Address: 0x277db0, Func Offset: 0x90
	// Line 227, Address: 0x277dfc, Func Offset: 0xdc
	// Line 228, Address: 0x277e04, Func Offset: 0xe4
	// Line 231, Address: 0x277e44, Func Offset: 0x124
	// Line 232, Address: 0x277e4c, Func Offset: 0x12c
	// Line 235, Address: 0x277e8c, Func Offset: 0x16c
	// Line 236, Address: 0x277e94, Func Offset: 0x174
	// Line 240, Address: 0x277ed4, Func Offset: 0x1b4
	// Line 244, Address: 0x277edc, Func Offset: 0x1bc
	// Line 248, Address: 0x277ee4, Func Offset: 0x1c4
	// Line 252, Address: 0x277eec, Func Offset: 0x1cc
	// Line 255, Address: 0x277f40, Func Offset: 0x220
	// Line 256, Address: 0x277f48, Func Offset: 0x228
	// Line 259, Address: 0x277f88, Func Offset: 0x268
	// Line 260, Address: 0x277f90, Func Offset: 0x270
	// Line 263, Address: 0x277fd0, Func Offset: 0x2b0
	// Line 264, Address: 0x277fd8, Func Offset: 0x2b8
	// Line 267, Address: 0x278018, Func Offset: 0x2f8
	// Line 268, Address: 0x278020, Func Offset: 0x300
	// Line 271, Address: 0x278060, Func Offset: 0x340
	// Line 272, Address: 0x278068, Func Offset: 0x348
	// Line 276, Address: 0x2780ec, Func Offset: 0x3cc
	// Line 277, Address: 0x2780f4, Func Offset: 0x3d4
	// Line 280, Address: 0x278134, Func Offset: 0x414
	// Line 281, Address: 0x27813c, Func Offset: 0x41c
	// Line 284, Address: 0x27817c, Func Offset: 0x45c
	// Line 285, Address: 0x278184, Func Offset: 0x464
	// Line 290, Address: 0x2781c4, Func Offset: 0x4a4
	// Line 291, Address: 0x2781cc, Func Offset: 0x4ac
	// Line 294, Address: 0x27820c, Func Offset: 0x4ec
	// Line 295, Address: 0x278214, Func Offset: 0x4f4
	// Line 298, Address: 0x278254, Func Offset: 0x534
	// Line 299, Address: 0x27825c, Func Offset: 0x53c
	// Line 302, Address: 0x27829c, Func Offset: 0x57c
	// Line 303, Address: 0x2782a4, Func Offset: 0x584
	// Line 308, Address: 0x2782e4, Func Offset: 0x5c4
	// Line 309, Address: 0x2782ec, Func Offset: 0x5cc
	// Line 312, Address: 0x27832c, Func Offset: 0x60c
	// Line 313, Address: 0x278334, Func Offset: 0x614
	// Line 316, Address: 0x278374, Func Offset: 0x654
	// Line 317, Address: 0x27837c, Func Offset: 0x65c
	// Line 320, Address: 0x2783bc, Func Offset: 0x69c
	// Line 321, Address: 0x2783c4, Func Offset: 0x6a4
	// Line 324, Address: 0x278404, Func Offset: 0x6e4
	// Line 325, Address: 0x27840c, Func Offset: 0x6ec
	// Line 330, Address: 0x27844c, Func Offset: 0x72c
	// Line 331, Address: 0x278454, Func Offset: 0x734
	// Line 335, Address: 0x278494, Func Offset: 0x774
	// Line 336, Address: 0x27849c, Func Offset: 0x77c
	// Line 340, Address: 0x2784dc, Func Offset: 0x7bc
	// Line 341, Address: 0x2784e4, Func Offset: 0x7c4
	// Line 345, Address: 0x278524, Func Offset: 0x804
	// Line 346, Address: 0x27852c, Func Offset: 0x80c
	// Line 351, Address: 0x278534, Func Offset: 0x814
	// Line 352, Address: 0x27853c, Func Offset: 0x81c
	// Line 357, Address: 0x27857c, Func Offset: 0x85c
	// Line 358, Address: 0x278584, Func Offset: 0x864
	// Line 363, Address: 0x2785c4, Func Offset: 0x8a4
	// Line 364, Address: 0x2785cc, Func Offset: 0x8ac
	// Line 368, Address: 0x27860c, Func Offset: 0x8ec
	// Line 369, Address: 0x278614, Func Offset: 0x8f4
	// Line 373, Address: 0x278654, Func Offset: 0x934
	// Line 374, Address: 0x27865c, Func Offset: 0x93c
	// Line 379, Address: 0x27869c, Func Offset: 0x97c
	// Line 380, Address: 0x2786a4, Func Offset: 0x984
	// Line 385, Address: 0x2786e4, Func Offset: 0x9c4
	// Line 386, Address: 0x2786ec, Func Offset: 0x9cc
	// Line 391, Address: 0x27872c, Func Offset: 0xa0c
	// Line 392, Address: 0x278734, Func Offset: 0xa14
	// Line 395, Address: 0x278774, Func Offset: 0xa54
	// Line 396, Address: 0x27877c, Func Offset: 0xa5c
	// Line 399, Address: 0x2787bc, Func Offset: 0xa9c
	// Line 400, Address: 0x2787c4, Func Offset: 0xaa4
	// Line 403, Address: 0x278804, Func Offset: 0xae4
	// Line 404, Address: 0x27880c, Func Offset: 0xaec
	// Line 407, Address: 0x27884c, Func Offset: 0xb2c
	// Line 408, Address: 0x278854, Func Offset: 0xb34
	// Line 411, Address: 0x278894, Func Offset: 0xb74
	// Line 412, Address: 0x27889c, Func Offset: 0xb7c
	// Line 415, Address: 0x2788dc, Func Offset: 0xbbc
	// Line 416, Address: 0x2788e4, Func Offset: 0xbc4
	// Line 421, Address: 0x278924, Func Offset: 0xc04
	// Line 422, Address: 0x27892c, Func Offset: 0xc0c
	// Line 427, Address: 0x27896c, Func Offset: 0xc4c
	// Line 428, Address: 0x278974, Func Offset: 0xc54
	// Line 431, Address: 0x2789b4, Func Offset: 0xc94
	// Line 432, Address: 0x2789bc, Func Offset: 0xc9c
	// Line 435, Address: 0x2789fc, Func Offset: 0xcdc
	// Line 436, Address: 0x278a04, Func Offset: 0xce4
	// Line 439, Address: 0x278a44, Func Offset: 0xd24
	// Line 440, Address: 0x278a4c, Func Offset: 0xd2c
	// Line 443, Address: 0x278a8c, Func Offset: 0xd6c
	// Line 444, Address: 0x278a94, Func Offset: 0xd74
	// Line 447, Address: 0x278ad4, Func Offset: 0xdb4
	// Line 448, Address: 0x278adc, Func Offset: 0xdbc
	// Line 451, Address: 0x278b1c, Func Offset: 0xdfc
	// Line 452, Address: 0x278b24, Func Offset: 0xe04
	// Line 455, Address: 0x278b64, Func Offset: 0xe44
	// Line 456, Address: 0x278b6c, Func Offset: 0xe4c
	// Line 459, Address: 0x278bac, Func Offset: 0xe8c
	// Line 460, Address: 0x278bb4, Func Offset: 0xe94
	// Line 464, Address: 0x278bf4, Func Offset: 0xed4
	// Line 465, Address: 0x278bfc, Func Offset: 0xedc
	// Line 469, Address: 0x278c3c, Func Offset: 0xf1c
	// Line 470, Address: 0x278c44, Func Offset: 0xf24
	// Line 474, Address: 0x278c84, Func Offset: 0xf64
	// Line 475, Address: 0x278c8c, Func Offset: 0xf6c
	// Line 480, Address: 0x278ccc, Func Offset: 0xfac
	// Line 481, Address: 0x278cd4, Func Offset: 0xfb4
	// Line 486, Address: 0x278d14, Func Offset: 0xff4
	// Line 488, Address: 0x278d1c, Func Offset: 0xffc
	// Line 493, Address: 0x278d5c, Func Offset: 0x103c
	// Line 494, Address: 0x278d64, Func Offset: 0x1044
	// Line 499, Address: 0x278da4, Func Offset: 0x1084
	// Line 500, Address: 0x278dac, Func Offset: 0x108c
	// Line 505, Address: 0x278dec, Func Offset: 0x10cc
	// Line 506, Address: 0x278df4, Func Offset: 0x10d4
	// Line 511, Address: 0x278e34, Func Offset: 0x1114
	// Line 512, Address: 0x278e3c, Func Offset: 0x111c
	// Line 515, Address: 0x278e7c, Func Offset: 0x115c
	// Line 516, Address: 0x278e84, Func Offset: 0x1164
	// Line 519, Address: 0x278ec4, Func Offset: 0x11a4
	// Line 520, Address: 0x278ecc, Func Offset: 0x11ac
	// Line 523, Address: 0x278f0c, Func Offset: 0x11ec
	// Line 524, Address: 0x278f14, Func Offset: 0x11f4
	// Line 528, Address: 0x278f54, Func Offset: 0x1234
	// Line 529, Address: 0x278f5c, Func Offset: 0x123c
	// Line 532, Address: 0x278f9c, Func Offset: 0x127c
	// Line 533, Address: 0x278fa4, Func Offset: 0x1284
	// Line 536, Address: 0x278fac, Func Offset: 0x128c
	// Line 537, Address: 0x278fb4, Func Offset: 0x1294
	// Line 540, Address: 0x278ff4, Func Offset: 0x12d4
	// Line 541, Address: 0x278ffc, Func Offset: 0x12dc
	// Line 544, Address: 0x27903c, Func Offset: 0x131c
	// Line 545, Address: 0x279044, Func Offset: 0x1324
	// Line 548, Address: 0x279084, Func Offset: 0x1364
	// Line 549, Address: 0x27908c, Func Offset: 0x136c
	// Line 552, Address: 0x2790cc, Func Offset: 0x13ac
	// Line 553, Address: 0x2790d4, Func Offset: 0x13b4
	// Line 556, Address: 0x279114, Func Offset: 0x13f4
	// Line 557, Address: 0x27911c, Func Offset: 0x13fc
	// Line 560, Address: 0x27915c, Func Offset: 0x143c
	// Line 561, Address: 0x279164, Func Offset: 0x1444
	// Line 564, Address: 0x2791a4, Func Offset: 0x1484
	// Line 565, Address: 0x2791ac, Func Offset: 0x148c
	// Line 568, Address: 0x2791b4, Func Offset: 0x1494
	// Line 569, Address: 0x2791bc, Func Offset: 0x149c
	// Line 574, Address: 0x2791fc, Func Offset: 0x14dc
	// Line 575, Address: 0x279204, Func Offset: 0x14e4
	// Line 578, Address: 0x279244, Func Offset: 0x1524
	// Line 579, Address: 0x27924c, Func Offset: 0x152c
	// Line 583, Address: 0x27928c, Func Offset: 0x156c
	// Line 584, Address: 0x279294, Func Offset: 0x1574
	// Line 588, Address: 0x2792d4, Func Offset: 0x15b4
	// Line 589, Address: 0x2792dc, Func Offset: 0x15bc
	// Line 593, Address: 0x27931c, Func Offset: 0x15fc
	// Line 594, Address: 0x279324, Func Offset: 0x1604
	// Line 598, Address: 0x279364, Func Offset: 0x1644
	// Line 599, Address: 0x27936c, Func Offset: 0x164c
	// Line 602, Address: 0x2793ac, Func Offset: 0x168c
	// Line 603, Address: 0x2793b4, Func Offset: 0x1694
	// Line 607, Address: 0x2793f4, Func Offset: 0x16d4
	// Line 608, Address: 0x2793fc, Func Offset: 0x16dc
	// Line 612, Address: 0x27943c, Func Offset: 0x171c
	// Line 613, Address: 0x279444, Func Offset: 0x1724
	// Line 617, Address: 0x279484, Func Offset: 0x1764
	// Line 618, Address: 0x27948c, Func Offset: 0x176c
	// Line 622, Address: 0x2794cc, Func Offset: 0x17ac
	// Line 623, Address: 0x2794d4, Func Offset: 0x17b4
	// Line 626, Address: 0x279514, Func Offset: 0x17f4
	// Line 627, Address: 0x27951c, Func Offset: 0x17fc
	// Line 630, Address: 0x27955c, Func Offset: 0x183c
	// Line 631, Address: 0x279564, Func Offset: 0x1844
	// Line 635, Address: 0x2795a4, Func Offset: 0x1884
	// Line 636, Address: 0x2795ac, Func Offset: 0x188c
	// Line 640, Address: 0x2795ec, Func Offset: 0x18cc
	// Line 641, Address: 0x2795f4, Func Offset: 0x18d4
	// Line 645, Address: 0x279634, Func Offset: 0x1914
	// Line 646, Address: 0x27963c, Func Offset: 0x191c
	// Line 649, Address: 0x27967c, Func Offset: 0x195c
	// Line 650, Address: 0x279684, Func Offset: 0x1964
	// Line 653, Address: 0x2796c4, Func Offset: 0x19a4
	// Line 654, Address: 0x2796cc, Func Offset: 0x19ac
	// Line 657, Address: 0x2796d4, Func Offset: 0x19b4
	// Line 658, Address: 0x2796dc, Func Offset: 0x19bc
	// Line 661, Address: 0x27971c, Func Offset: 0x19fc
	// Line 662, Address: 0x279724, Func Offset: 0x1a04
	// Line 665, Address: 0x279764, Func Offset: 0x1a44
	// Line 666, Address: 0x27976c, Func Offset: 0x1a4c
	// Line 670, Address: 0x2797ac, Func Offset: 0x1a8c
	// Line 671, Address: 0x2797b4, Func Offset: 0x1a94
	// Line 674, Address: 0x2797f4, Func Offset: 0x1ad4
	// Line 675, Address: 0x2797fc, Func Offset: 0x1adc
	// Line 679, Address: 0x27983c, Func Offset: 0x1b1c
	// Line 680, Address: 0x279844, Func Offset: 0x1b24
	// Line 686, Address: 0x279884, Func Offset: 0x1b64
	// Line 690, Address: 0x27988c, Func Offset: 0x1b6c
	// Line 692, Address: 0x2798a8, Func Offset: 0x1b88
	// Line 696, Address: 0x2798b0, Func Offset: 0x1b90
	// Line 699, Address: 0x2798b8, Func Offset: 0x1b98
	// Line 703, Address: 0x2798d4, Func Offset: 0x1bb4
	// Line 705, Address: 0x2798f8, Func Offset: 0x1bd8
	// Line 706, Address: 0x279900, Func Offset: 0x1be0
	// Line 709, Address: 0x279904, Func Offset: 0x1be4
	// Line 712, Address: 0x27991c, Func Offset: 0x1bfc
	// Line 709, Address: 0x27992c, Func Offset: 0x1c0c
	// Line 712, Address: 0x279930, Func Offset: 0x1c10
	// Line 720, Address: 0x279950, Func Offset: 0x1c30
	// Line 721, Address: 0x279964, Func Offset: 0x1c44
	// Line 724, Address: 0x279970, Func Offset: 0x1c50
	// Line 725, Address: 0x27997c, Func Offset: 0x1c5c
	// Line 727, Address: 0x279980, Func Offset: 0x1c60
	// Line 731, Address: 0x27998c, Func Offset: 0x1c6c
	// Line 732, Address: 0x279994, Func Offset: 0x1c74
	// Line 733, Address: 0x27999c, Func Offset: 0x1c7c
	// Line 735, Address: 0x2799ac, Func Offset: 0x1c8c
	// Line 737, Address: 0x2799b0, Func Offset: 0x1c90
	// Line 738, Address: 0x2799bc, Func Offset: 0x1c9c
	// Line 742, Address: 0x2799c0, Func Offset: 0x1ca0
	// Func End, Address: 0x2799ec, Func Offset: 0x1ccc
}

// zMusicInit__Fv
// Start address: 0x2799f0
void zMusicInit()
{
	// Line 126, Address: 0x2799f0, Func Offset: 0
	// Line 133, Address: 0x2799f8, Func Offset: 0x8
	// Line 126, Address: 0x2799fc, Func Offset: 0xc
	// Line 133, Address: 0x279a00, Func Offset: 0x10
	// Line 128, Address: 0x279a04, Func Offset: 0x14
	// Line 133, Address: 0x279a08, Func Offset: 0x18
	// Line 134, Address: 0x279a10, Func Offset: 0x20
	// Line 135, Address: 0x279a14, Func Offset: 0x24
	// Line 139, Address: 0x279a20, Func Offset: 0x30
	// Line 135, Address: 0x279a24, Func Offset: 0x34
	// Line 139, Address: 0x279a28, Func Offset: 0x38
	// Line 140, Address: 0x279a44, Func Offset: 0x54
	// Line 141, Address: 0x279a5c, Func Offset: 0x6c
	// Line 142, Address: 0x279a74, Func Offset: 0x84
	// Line 144, Address: 0x279a8c, Func Offset: 0x9c
	// Line 145, Address: 0x279aa4, Func Offset: 0xb4
	// Line 146, Address: 0x279abc, Func Offset: 0xcc
	// Line 147, Address: 0x279ad4, Func Offset: 0xe4
	// Line 148, Address: 0x279aec, Func Offset: 0xfc
	// Line 149, Address: 0x279b04, Func Offset: 0x114
	// Line 150, Address: 0x279b1c, Func Offset: 0x12c
	// Line 151, Address: 0x279b34, Func Offset: 0x144
	// Line 152, Address: 0x279b4c, Func Offset: 0x15c
	// Line 153, Address: 0x279b64, Func Offset: 0x174
	// Line 155, Address: 0x279b7c, Func Offset: 0x18c
	// Line 156, Address: 0x279b94, Func Offset: 0x1a4
	// Line 157, Address: 0x279bac, Func Offset: 0x1bc
	// Line 158, Address: 0x279bc4, Func Offset: 0x1d4
	// Line 159, Address: 0x279bdc, Func Offset: 0x1ec
	// Line 160, Address: 0x279bf4, Func Offset: 0x204
	// Line 161, Address: 0x279c0c, Func Offset: 0x21c
	// Line 163, Address: 0x279c24, Func Offset: 0x234
	// Line 164, Address: 0x279c34, Func Offset: 0x244
	// Line 165, Address: 0x279c48, Func Offset: 0x258
	// Line 167, Address: 0x279c5c, Func Offset: 0x26c
	// Line 168, Address: 0x279c78, Func Offset: 0x288
	// Line 169, Address: 0x279c90, Func Offset: 0x2a0
	// Line 171, Address: 0x279ca8, Func Offset: 0x2b8
	// Line 172, Address: 0x279cc0, Func Offset: 0x2d0
	// Line 173, Address: 0x279cd8, Func Offset: 0x2e8
	// Line 174, Address: 0x279cf0, Func Offset: 0x300
	// Line 175, Address: 0x279d08, Func Offset: 0x318
	// Line 177, Address: 0x279d20, Func Offset: 0x330
	// Line 179, Address: 0x279d38, Func Offset: 0x348
	// Line 180, Address: 0x279d48, Func Offset: 0x358
	// Line 181, Address: 0x279d5c, Func Offset: 0x36c
	// Line 183, Address: 0x279d70, Func Offset: 0x380
	// Line 184, Address: 0x279d84, Func Offset: 0x394
	// Line 185, Address: 0x279d98, Func Offset: 0x3a8
	// Line 186, Address: 0x279dac, Func Offset: 0x3bc
	// Line 187, Address: 0x279dc0, Func Offset: 0x3d0
	// Line 188, Address: 0x279dd4, Func Offset: 0x3e4
	// Line 189, Address: 0x279de8, Func Offset: 0x3f8
	// Line 190, Address: 0x279dfc, Func Offset: 0x40c
	// Line 191, Address: 0x279e10, Func Offset: 0x420
	// Line 192, Address: 0x279e24, Func Offset: 0x434
	// Line 193, Address: 0x279e38, Func Offset: 0x448
	// Line 194, Address: 0x279e4c, Func Offset: 0x45c
	// Line 198, Address: 0x279e60, Func Offset: 0x470
	// Line 194, Address: 0x279e64, Func Offset: 0x474
	// Line 198, Address: 0x279e68, Func Offset: 0x478
	// Line 199, Address: 0x279e74, Func Offset: 0x484
	// Line 201, Address: 0x279ec0, Func Offset: 0x4d0
	// Func End, Address: 0x279ed0, Func Offset: 0x4e0
}

