typedef struct xAnimFile;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct _xBBox;
typedef struct RpAtomic;
typedef struct RxPacket;
typedef struct RpGeometry;
typedef struct RwTexture;
typedef struct _zEntHangable;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct _tagxCamStatic;
typedef struct xAnimEffect;
typedef struct RpMorphTarget;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct zAssetPickupTable;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct RwV2d;
typedef struct _xEntFrame;
typedef struct xBase;
typedef struct xAnimTransitionList;
typedef enum RwTextureAddressMode;
typedef struct zJumpParam;
typedef struct RpSector;
typedef struct _xEnv;
typedef struct xAnimTable;
typedef struct RxPipelineNode;
typedef struct xCutsceneTime;
typedef struct xCutsceneData;
typedef struct RwResEntry;
typedef struct zSurfaceProps;
typedef struct iEnv;
typedef struct RwFrame;
typedef struct zGlobals;
typedef struct _tagxCamFrame;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwV3d;
typedef struct RwLLLink;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpWorld;
typedef struct RwCamera;
typedef struct _tagxCamShoulderAsset;
typedef struct _tagxPad;
typedef enum _tagTransType;
typedef struct xAnimActiveEffect;
typedef struct RpClump;
typedef struct _zEnt;
typedef struct RxNodeDefinition;
typedef struct xMemPool;
typedef enum _tagRumbleType;
typedef struct zSurfacePropTexAnim;
typedef struct _xEntShadow;
typedef struct zSurfMatFX;
typedef struct RwTexCoords;
typedef struct _tagxCamStaticFollow;
typedef struct RxPipelineCluster;
typedef struct RwRaster;
typedef struct p2EntHangableAsset;
typedef struct p2LinkAsset;
typedef struct RpPolygon;
typedef struct xModelInstance;
typedef struct RpLight;
typedef struct _tagxCam;
typedef struct _zPortal;
typedef struct RpTriangle;
typedef struct rxHeapBlockHeader;
typedef struct zScene;
typedef struct _zCutsceneMgr;
typedef struct iShadowCache;
typedef struct xCutscene;
typedef struct RxPipeline;
typedef struct zPlayerStatic;
typedef struct _xMat4x3;
typedef struct rxHeapFreeBlock;
typedef struct RwRGBAReal;
typedef struct zPortalAsset;
typedef struct _xScene;
typedef struct xCutsceneInfo;
typedef struct zSurfColorFX;
typedef struct RxClusterDefinition;
typedef struct _xVec3;
typedef enum RxClusterValidityReq;
typedef struct RwTexDictionary;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTransition;
typedef struct p2EntAsset;
typedef struct _xQuat;
typedef struct _tagxCamPath;
typedef struct _zPlatform;
typedef struct _tagp2CamStaticAsset;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct _xEnt;
typedef struct RwFrustumPlane;
typedef struct zSurfacePropUVFX;
typedef struct xCutsceneBreak;
typedef struct RpCollSector;
typedef enum RwTextureFilterMode;
typedef struct RwBBox;
typedef struct RwObject;
typedef struct _xVec4;
typedef struct RpMeshHeader;
typedef enum RxClusterValid;
typedef struct _xBound;
typedef struct zSurfUVFX;
typedef struct _xRot;
typedef struct RwPlane;
typedef struct RpWorldSector;
typedef struct _xEntDrive;
typedef struct zCutsceneZbuffer;
typedef struct RwLinkList;
typedef struct _tagCamInfo;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagxRumble;
typedef struct _xEntCollis;
typedef struct RpInterpolator;
typedef struct zSurfAsset;
typedef struct _tagxCamFollow;
typedef struct rxReq;
typedef struct iModelTag;
typedef struct xModelPool;
typedef enum RwFogType;
typedef struct zPlayerGlobals;
typedef struct _xCollis;
typedef struct xAnimPlay;
typedef enum RxClusterForcePresent;
typedef enum _tagPadState;
typedef struct tag_xFile;
typedef struct zCutsceneZbufferHack;
typedef struct _tagxCamPathAsset;
typedef struct sceCdlFILE;
typedef struct _tagiPad;
typedef struct RxClusterRef;
typedef struct xFFX;
typedef enum RxNodeDefEditable;
typedef struct tag_iFile;
typedef struct iFogParams;
typedef struct RpSkin;
typedef struct _iCollis;
typedef struct RxIoSpec;
typedef struct RwMatrixTag;
typedef enum RpWorldRenderOrder;
typedef struct _xSphere;
typedef struct _tagxCamShoulder;
typedef struct RxNodeMethods;
typedef struct _tagPadAnalog;
typedef struct zShaggy1Globals;
typedef struct RwSurfaceProperties;
typedef struct zCutsceneMgrAsset;
typedef struct _xCylinder;
typedef struct _tagxCamFollowAsset;
typedef struct RxHeap;
typedef struct xCamAsset;
typedef struct zCheckPoint;
typedef struct RxCluster;
typedef struct p2BaseAsset;
typedef struct xQCData;
typedef struct _xBox;
typedef enum _tagCamType;
typedef struct zSurfTextureAnim;
typedef enum RpMatFXMaterialFlags;
typedef struct zGlobalGameStats;
typedef enum RwCameraProjection;
typedef struct RwSphere;

typedef RpAtomic*(*type_3)(RpAtomic*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef int32(*type_8)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpMaterial*(*type_10)(RpMaterial*, void*);
typedef int32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_14)(uint32);
typedef RpMaterial*(*type_19)(RpMaterial*, void*);
typedef int32(*type_21)(RxNodeDefinition*);
typedef RpMaterial*(*type_22)(RpMaterial*, void*);
typedef int8*(*type_24)(xBase*);
typedef uint32(*type_25)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpMaterial*(*type_26)(RpMaterial*, void*);
typedef void(*type_27)(RxNodeDefinition*);
typedef RpWorldSector*(*type_28)(RpWorldSector*);
typedef int8*(*type_30)(uint32);
typedef int32(*type_32)(RxPipelineNode*);
typedef RwCamera*(*type_35)(RwCamera*);
typedef void(*type_36)(RxPipelineNode*);
typedef RwCamera*(*type_40)(RwCamera*);
typedef RpAtomic*(*type_41)(RpAtomic*, void*);
typedef int32(*type_46)(RxPipelineNode*, RxPipeline*);
typedef void(*type_48)(xMemPool*, void*);
typedef uint32(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_53)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_58)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_61)(_xEnt*, _xScene*, float32);
typedef void(*type_65)(_xEnt*);
typedef void(*type_70)(RwResEntry*);
typedef void(*type_72)(_xEnt*);
typedef void(*type_74)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_78)(_xEnt*, _xScene*, float32, void*);
typedef void(*type_79)(_xEnt*, _xVec3*);
typedef uint32(*type_85)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_91)(int32);
typedef RpWorldSector*(*type_92)(RpWorldSector*, void*);
typedef RpMaterial*(*type_95)(RpMaterial*, void*);
typedef RpMaterial*(*type_96)(RpMaterial*, void*);
typedef void(*type_100)(_xEnt*, _xVec3*);
typedef RpClump*(*type_104)(RpClump*, void*);
typedef RpMaterial*(*type_108)(RpMaterial*, void*);
typedef RpMaterial*(*type_109)(RpMaterial*, void*);
typedef RpMaterial*(*type_116)(RpMaterial*, void*);
typedef RpMaterial*(*type_118)(RpMaterial*, void*);

typedef float32 type_0[2];
typedef uint8 type_1[8];
typedef uint8 type_2[8];
typedef uint8 type_5[22];
typedef uint8 type_6[22];
typedef _xVec3 type_7[2];
typedef _xQuat type_9[2];
typedef float32 type_11[15];
typedef uint8 type_13[3];
typedef float32 type_15[15];
typedef iModelTag type_16[4];
typedef uint8 type_17[3];
typedef uint32 type_18[4096];
typedef uint32 type_20[15];
typedef _xVec4 type_23[8];
typedef uint16 type_29[3];
typedef uint16 type_31[3];
typedef int8 type_33[128];
typedef int8 type_34[128][6];
typedef _xVec3 type_37[4];
typedef float32 type_38[4];
typedef float32 type_39[2];
typedef float32 type_42[2];
typedef float32 type_43[4];
typedef int8 type_44[32];
typedef RwRGBA type_45[16];
typedef float32 type_47[4];
typedef uint8 type_50[3];
typedef int8 type_51[16];
typedef float32 type_52[4];
typedef float32 type_54[4];
typedef RxCluster type_55[1];
typedef float32 type_56[3];
typedef uint32 type_57[2];
typedef float32 type_59[3];
typedef uint32 type_60[4];
typedef uint8 type_62[3];
typedef zGlobalGameStats type_63[30];
typedef zGlobalGameStats type_64[13];
typedef _zEnt* type_66[10];
typedef uint32 type_67[1];
typedef zGlobalGameStats type_68[4];
typedef RwTexCoords* type_69[8];
typedef int32 type_71[2];
typedef int8 type_73[32];
typedef float32 type_75[2];
typedef int32 type_76[2];
typedef int8 type_77[32];
typedef float32 type_80[2];
typedef float32 type_81[3];
typedef zSurfacePropTexAnim type_82[2];
typedef float32 type_83[4];
typedef float32 type_84[2];
typedef RwTexCoords* type_86[8];
typedef float32 type_87[2];
typedef zSurfacePropUVFX type_88[2];
typedef RwTexture* type_89[32];
typedef float32 type_90[2];
typedef zCutsceneZbuffer type_93[4];
typedef int8 type_94[16];
typedef uint8 type_97[8];
typedef uint32 type_98[2];
typedef int8 type_99[128];
typedef uint32 type_101[2];
typedef uint32 type_102[43];
typedef uint32 type_103[2];
typedef RwFrustumPlane type_105[6];
typedef xBase* type_106[43];
typedef uint32 type_107[2];
typedef float32 type_110[4];
typedef float32 type_111[4];
typedef RwV3d type_112[8];
typedef _xCollis type_113[18];
typedef float32 type_114[4];
typedef zSurfTextureAnim type_115[2];
typedef RpLight* type_117[2];
typedef uint8 type_119[2];
typedef int8 type_120[16];
typedef zSurfUVFX type_121[2];
typedef uint8 type_122[8];
typedef RwFrame* type_123[2];
typedef int8 type_124[16];
typedef float32 type_125[2];
typedef uint8 type_126[8];
typedef uint8 type_127[3];

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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct _tagxCamStatic
{
	uint32 unused;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
};

struct RpSector
{
	int32 type;
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct zSurfaceProps
{
	zSurfAsset* asset;
	uint32 texanim_flags;
	zSurfacePropTexAnim texanim[2];
	uint32 uvfx_flags;
	zSurfacePropUVFX uvfx[2];
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct zSurfacePropTexAnim
{
	uint16 mode;
	float32 speed;
	float32 frame;
	uint32 group;
	int32 group_idx;
	xBase* group_ptr;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct zSurfMatFX
{
	uint32 flags;
	uint32 bumpmapID;
	uint32 envmapID;
	float32 shininess;
	float32 bumpiness;
	uint32 dualmapID;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct zSurfColorFX
{
	uint16 flags;
	uint16 mode;
	float32 speed;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
};

struct _zPlatform
{
};

struct _tagp2CamStaticAsset
{
	uint32 unused;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct zSurfacePropUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	_xVec3 trans;
	_xVec3 trans_spd;
	_xVec3 scale;
	_xVec3 scale_spd;
};

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct zSurfUVFX
{
	int32 mode;
	float32 rot;
	float32 rot_spd;
	_xVec3 trans;
	_xVec3 trans_spd;
	_xVec3 scale;
	_xVec3 scale_spd;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
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

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct RwLinkList
{
	RwLLLink link;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct zSurfAsset : p2BaseAsset
{
	uint8 game_damage_type;
	uint8 game_sticky;
	uint8 game_damage_flags;
	uint8 surf_type;
	uint8 phys_pad;
	uint8 sld_start;
	uint8 sld_stop;
	uint8 phys_flags;
	float32 friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	uint32 texture_anim_flags;
	zSurfTextureAnim texture_anim[2];
	uint32 uvfx_flags;
	zSurfUVFX uvfx[2];
	uint8 on;
	uint8 surf_pad[3];
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

struct rxReq
{
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
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

struct _tagiPad
{
	int32 port;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xFFX
{
	uint32 flags;
	void(*doEffect)(_xEnt*, _xScene*, float32, void*);
	void* fdata;
	xFFX* next;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
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

struct RpSkin
{
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
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

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct zSurfTextureAnim
{
	uint16 pad;
	uint16 mode;
	uint32 group;
	float32 speed;
};

enum RpMatFXMaterialFlags
{
	rpMATFXEFFECTNULL,
	rpMATFXEFFECTBUMPMAP,
	rpMATFXEFFECTENVMAP,
	rpMATFXEFFECTBUMPENVMAP,
	rpMATFXEFFECTDUAL,
	rpMATFXEFFECTMAX,
	rpMATFXNUMEFFECTS = 0x4,
	rpMATFXFORCEENUMSIZEINT = 0x7fffffff
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

float32 EnvMapShininess;
uint32 EnvMapActiveMaterials;
float32 BumpMapBumpiness;
uint32 BumpMapActiveMaterials;
RpLight* MainLight;
uint32 xfx_initted;
float32 follow;
int32 sSetMaterialTextureBufferCount;
RwTexture* sSetMaterialTextureBuffer[32];
RwRGBA sMaterialColor[16];
int32 sMaterialTotal;
RxPipeline* xFXanimUVPipeline;
float32 xFXanimUVRotMat0[2];
float32 xFXanimUVRotMat1[2];
float32 xFXanimUVTrans[2];
float32 xFXanimUVScale[2];
float32 xFXanimUV2PRotMat0[2];
float32 xFXanimUV2PRotMat1[2];
float32 xFXanimUV2PTrans[2];
float32 xFXanimUV2PScale[2];
RwTexture* xFXanimUV2PTexture;
RpMaterial*(*iModelMatMultiplyResetCallBack)(RpMaterial*, void*);
RpMaterial*(*iModelMatMultiplyCallBack)(RpMaterial*, void*);
RpMaterial*(*iModelMaterialCallBack)(RpMaterial*, void*);
RpMaterial*(*iModelSetMaterialTextureRestoreCallBack)(RpMaterial*, void*);
RpMaterial*(*iModelSetMaterialTextureCallBack)(RpMaterial*, void*);
RpAtomic*(*AtomicResetMaterialEffects)(RpAtomic*, void*);
RpMaterial*(*MaterialResetEffects)(RpMaterial*, void*);
zGlobals globals;
uint32 gFXSurfaceFlags;
RpMaterial*(*MaterialSetBumpMap)(RpMaterial*, void*);
RpMaterial*(*MaterialSetBumpiness)(RpMaterial*, void*);
RpMaterial*(*MaterialSetShininess)(RpMaterial*, void*);
RpMaterial*(*MaterialSetEnvMap2)(RpMaterial*, void*);
uint32 ourGlobals[4096];
RpWorldSector*(*SectorMatFXEnableCB)(RpWorldSector*, void*);

RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic);
void xFXanimUV2PSetTexture(RwTexture* texture);
void xFXanimUV2PSetAngle(float32 angle);
void xFXanimUV2PSetScale(_xVec3* scale);
void xFXanimUV2PSetTranslation(_xVec3* trans);
void xFXanimUVSetAngle(float32 angle);
void xFXanimUVSetScale(_xVec3* scale);
void xFXanimUVSetTranslation(_xVec3* trans);
void iModelResetMaterial(RpAtomic* model);
void iModelMaterialMul(RpAtomic* model, float32 rm, float32 gm, float32 bm);
RpMaterial* iModelMatMultiplyResetCallBack(RpMaterial* material);
RpMaterial* iModelMatMultiplyCallBack(RpMaterial* material, void* data);
void iModelSetMaterialAlpha(RpAtomic* model, int32 alpha);
RpMaterial* iModelMaterialCallBack(RpMaterial* material, void* data);
void iModelSetMaterialTextureRestore(RpAtomic* model);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
RpMaterial* iModelSetMaterialTextureRestoreCallBack(RpMaterial* material);
RpMaterial* iModelSetMaterialTextureCallBack(RpMaterial* material, void* data);
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, uint32 envmapID, float32 shininess);
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data);
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data);
RpMaterial* MaterialSetShininess(RpMaterial* material);
RpWorldSector* SectorMatFXEnableCB(RpWorldSector* worldSector);
void xFXExit();
void xFXUpdate(float32 dt);
void iModelRenderShit();
void FindAtomicCallbackShit();
void xFX_SceneExit();
void xFX_SceneEnter(RpWorld* world);
void xFXInit();

// xFXanimUVAtomicSetup__FP8RpAtomic
// Start address: 0x1d9c70
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic)
{
	// Line 1274, Address: 0x1d9c70, Func Offset: 0
	// Line 1277, Address: 0x1d9c84, Func Offset: 0x14
	// Line 1283, Address: 0x1d9c88, Func Offset: 0x18
	// Line 1284, Address: 0x1d9c8c, Func Offset: 0x1c
	// Func End, Address: 0x1d9c94, Func Offset: 0x24
}

// xFXanimUV2PSetTexture__FP9RwTexture
// Start address: 0x1d9ca0
void xFXanimUV2PSetTexture(RwTexture* texture)
{
	// Line 1268, Address: 0x1d9ca0, Func Offset: 0
	// Func End, Address: 0x1d9ca8, Func Offset: 0x8
}

// xFXanimUV2PSetAngle__Ff
// Start address: 0x1d9cb0
void xFXanimUV2PSetAngle(float32 angle)
{
	float32 c;
	float32 s;
	// Line 1249, Address: 0x1d9cb0, Func Offset: 0
	// Line 1252, Address: 0x1d9cbc, Func Offset: 0xc
	// Line 1253, Address: 0x1d9cc4, Func Offset: 0x14
	// Line 1255, Address: 0x1d9cd0, Func Offset: 0x20
	// Line 1256, Address: 0x1d9ce0, Func Offset: 0x30
	// Line 1259, Address: 0x1d9cec, Func Offset: 0x3c
	// Func End, Address: 0x1d9cfc, Func Offset: 0x4c
}

// xFXanimUV2PSetScale__FP6_xVec3
// Start address: 0x1d9d00
void xFXanimUV2PSetScale(_xVec3* scale)
{
	// Line 1240, Address: 0x1d9d00, Func Offset: 0
	// Line 1241, Address: 0x1d9d0c, Func Offset: 0xc
	// Line 1244, Address: 0x1d9d10, Func Offset: 0x10
	// Func End, Address: 0x1d9d18, Func Offset: 0x18
}

// xFXanimUV2PSetTranslation__FP6_xVec3
// Start address: 0x1d9d20
void xFXanimUV2PSetTranslation(_xVec3* trans)
{
	// Line 1222, Address: 0x1d9d20, Func Offset: 0
	// Line 1223, Address: 0x1d9d2c, Func Offset: 0xc
	// Line 1226, Address: 0x1d9d30, Func Offset: 0x10
	// Func End, Address: 0x1d9d38, Func Offset: 0x18
}

// xFXanimUVSetAngle__Ff
// Start address: 0x1d9d40
void xFXanimUVSetAngle(float32 angle)
{
	float32 c;
	float32 s;
	// Line 1185, Address: 0x1d9d40, Func Offset: 0
	// Line 1188, Address: 0x1d9d4c, Func Offset: 0xc
	// Line 1189, Address: 0x1d9d54, Func Offset: 0x14
	// Line 1191, Address: 0x1d9d60, Func Offset: 0x20
	// Line 1192, Address: 0x1d9d70, Func Offset: 0x30
	// Line 1195, Address: 0x1d9d7c, Func Offset: 0x3c
	// Func End, Address: 0x1d9d8c, Func Offset: 0x4c
}

// xFXanimUVSetScale__FP6_xVec3
// Start address: 0x1d9d90
void xFXanimUVSetScale(_xVec3* scale)
{
	// Line 1176, Address: 0x1d9d90, Func Offset: 0
	// Line 1177, Address: 0x1d9d9c, Func Offset: 0xc
	// Line 1180, Address: 0x1d9da0, Func Offset: 0x10
	// Func End, Address: 0x1d9da8, Func Offset: 0x18
}

// xFXanimUVSetTranslation__FP6_xVec3
// Start address: 0x1d9db0
void xFXanimUVSetTranslation(_xVec3* trans)
{
	// Line 1158, Address: 0x1d9db0, Func Offset: 0
	// Line 1159, Address: 0x1d9dbc, Func Offset: 0xc
	// Line 1162, Address: 0x1d9dc0, Func Offset: 0x10
	// Func End, Address: 0x1d9dc8, Func Offset: 0x18
}

// iModelResetMaterial__FP8RpAtomic
// Start address: 0x1d9dd0
void iModelResetMaterial(RpAtomic* model)
{
	// Line 1125, Address: 0x1d9dd0, Func Offset: 0
	// Line 1126, Address: 0x1d9dd4, Func Offset: 0x4
	// Func End, Address: 0x1d9de8, Func Offset: 0x18
}

// iModelMaterialMul__FP8RpAtomicfff
// Start address: 0x1d9df0
void iModelMaterialMul(RpAtomic* model, float32 rm, float32 gm, float32 bm)
{
	float32 cols[3];
	RpGeometry* geom;
	// Line 1102, Address: 0x1d9df0, Func Offset: 0
	// Line 1104, Address: 0x1d9df8, Func Offset: 0x8
	// Line 1107, Address: 0x1d9dfc, Func Offset: 0xc
	// Line 1118, Address: 0x1d9e00, Func Offset: 0x10
	// Line 1111, Address: 0x1d9e0c, Func Offset: 0x1c
	// Line 1115, Address: 0x1d9e18, Func Offset: 0x28
	// Line 1116, Address: 0x1d9e1c, Func Offset: 0x2c
	// Line 1118, Address: 0x1d9e20, Func Offset: 0x30
	// Line 1119, Address: 0x1d9e28, Func Offset: 0x38
	// Func End, Address: 0x1d9e34, Func Offset: 0x44
}

// iModelMatMultiplyResetCallBack__FP10RpMaterialPv
// Start address: 0x1d9e40
RpMaterial* iModelMatMultiplyResetCallBack(RpMaterial* material)
{
	// Line 1095, Address: 0x1d9e40, Func Offset: 0
	// Line 1096, Address: 0x1d9e50, Func Offset: 0x10
	// Line 1095, Address: 0x1d9e54, Func Offset: 0x14
	// Line 1097, Address: 0x1d9e80, Func Offset: 0x40
	// Func End, Address: 0x1d9e88, Func Offset: 0x48
}

// iModelMatMultiplyCallBack__FP10RpMaterialPv
// Start address: 0x1d9e90
RpMaterial* iModelMatMultiplyCallBack(RpMaterial* material, void* data)
{
	float32 tmp;
	float32* mods;
	RwRGBA col;
	RwRGBA* rw_col;
	// Line 1074, Address: 0x1d9e90, Func Offset: 0
	// Line 1076, Address: 0x1d9ea8, Func Offset: 0x18
	// Line 1079, Address: 0x1d9f10, Func Offset: 0x80
	// Line 1080, Address: 0x1d9f48, Func Offset: 0xb8
	// Line 1079, Address: 0x1d9f4c, Func Offset: 0xbc
	// Line 1080, Address: 0x1d9f50, Func Offset: 0xc0
	// Line 1082, Address: 0x1d9f90, Func Offset: 0x100
	// Line 1083, Address: 0x1d9fc8, Func Offset: 0x138
	// Line 1082, Address: 0x1d9fd0, Func Offset: 0x140
	// Line 1083, Address: 0x1d9fd4, Func Offset: 0x144
	// Line 1084, Address: 0x1da014, Func Offset: 0x184
	// Line 1085, Address: 0x1da04c, Func Offset: 0x1bc
	// Line 1084, Address: 0x1da054, Func Offset: 0x1c4
	// Line 1085, Address: 0x1da058, Func Offset: 0x1c8
	// Line 1087, Address: 0x1da098, Func Offset: 0x208
	// Line 1089, Address: 0x1da09c, Func Offset: 0x20c
	// Line 1087, Address: 0x1da0a0, Func Offset: 0x210
	// Line 1090, Address: 0x1da0bc, Func Offset: 0x22c
	// Func End, Address: 0x1da0d8, Func Offset: 0x248
}

// iModelSetMaterialAlpha__FP8RpAtomici
// Start address: 0x1da0e0
void iModelSetMaterialAlpha(RpAtomic* model, int32 alpha)
{
	RpGeometry* geom;
	// Line 1046, Address: 0x1da0e0, Func Offset: 0
	// Line 1048, Address: 0x1da0ec, Func Offset: 0xc
	// Line 1055, Address: 0x1da0f0, Func Offset: 0x10
	// Line 1052, Address: 0x1da0fc, Func Offset: 0x1c
	// Line 1055, Address: 0x1da104, Func Offset: 0x24
	// Line 1056, Address: 0x1da10c, Func Offset: 0x2c
	// Func End, Address: 0x1da118, Func Offset: 0x38
}

// iModelMaterialCallBack__FP10RpMaterialPv
// Start address: 0x1da120
RpMaterial* iModelMaterialCallBack(RpMaterial* material, void* data)
{
	RwRGBA new_rw_col;
	// Line 1037, Address: 0x1da120, Func Offset: 0
	// Line 1035, Address: 0x1da130, Func Offset: 0x10
	// Line 1037, Address: 0x1da134, Func Offset: 0x14
	// Line 1038, Address: 0x1da138, Func Offset: 0x18
	// Line 1041, Address: 0x1da13c, Func Offset: 0x1c
	// Line 1037, Address: 0x1da140, Func Offset: 0x20
	// Line 1038, Address: 0x1da150, Func Offset: 0x30
	// Line 1039, Address: 0x1da158, Func Offset: 0x38
	// Line 1042, Address: 0x1da178, Func Offset: 0x58
	// Func End, Address: 0x1da180, Func Offset: 0x60
}

// iModelSetMaterialTextureRestore__FP8RpAtomic
// Start address: 0x1da180
void iModelSetMaterialTextureRestore(RpAtomic* model)
{
	// Line 1029, Address: 0x1da180, Func Offset: 0
	// Func End, Address: 0x1da194, Func Offset: 0x14
}

// iModelSetMaterialTexture__FP8RpAtomicPv
// Start address: 0x1da1a0
void iModelSetMaterialTexture(RpAtomic* model, void* texture)
{
	// Line 1017, Address: 0x1da1a0, Func Offset: 0
	// Func End, Address: 0x1da1b4, Func Offset: 0x14
}

// iModelSetMaterialTextureRestoreCallBack__FP10RpMaterialPv
// Start address: 0x1da1c0
RpMaterial* iModelSetMaterialTextureRestoreCallBack(RpMaterial* material)
{
	// Line 998, Address: 0x1da1c0, Func Offset: 0
	// Line 1001, Address: 0x1da1cc, Func Offset: 0xc
	// Line 1003, Address: 0x1da1f4, Func Offset: 0x34
	// Line 1004, Address: 0x1da1f8, Func Offset: 0x38
	// Func End, Address: 0x1da208, Func Offset: 0x48
}

// iModelSetMaterialTextureCallBack__FP10RpMaterialPv
// Start address: 0x1da210
RpMaterial* iModelSetMaterialTextureCallBack(RpMaterial* material, void* data)
{
	// Line 988, Address: 0x1da210, Func Offset: 0
	// Line 990, Address: 0x1da21c, Func Offset: 0xc
	// Line 992, Address: 0x1da248, Func Offset: 0x38
	// Line 994, Address: 0x1da250, Func Offset: 0x40
	// Line 995, Address: 0x1da254, Func Offset: 0x44
	// Func End, Address: 0x1da264, Func Offset: 0x54
}

// xFXAtomicEnvMapSetup__FP8RpAtomicUif
// Start address: 0x1da270
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, uint32 envmapID, float32 shininess)
{
	RpSkin* skin;
	float32 tmp;
	RwTexture* env;
	// Line 642, Address: 0x1da270, Func Offset: 0
	// Line 643, Address: 0x1da288, Func Offset: 0x18
	// Line 644, Address: 0x1da2a0, Func Offset: 0x30
	// Line 645, Address: 0x1da2a8, Func Offset: 0x38
	// Line 646, Address: 0x1da2cc, Func Offset: 0x5c
	// Line 647, Address: 0x1da2d4, Func Offset: 0x64
	// Line 648, Address: 0x1da2d8, Func Offset: 0x68
	// Line 649, Address: 0x1da2f0, Func Offset: 0x80
	// Line 654, Address: 0x1da2f4, Func Offset: 0x84
	// Line 655, Address: 0x1da2fc, Func Offset: 0x8c
	// Line 656, Address: 0x1da304, Func Offset: 0x94
	// Line 659, Address: 0x1da310, Func Offset: 0xa0
	// Line 664, Address: 0x1da314, Func Offset: 0xa4
	// Func End, Address: 0x1da330, Func Offset: 0xc0
}

// MaterialSetEnvMap2__FP10RpMaterialPv
// Start address: 0x1da330
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data)
{
	RwFrame* frame;
	RwTexture* texture;
	int8* textureName;
	// Line 581, Address: 0x1da330, Func Offset: 0
	// Line 585, Address: 0x1da344, Func Offset: 0x14
	// Line 590, Address: 0x1da350, Func Offset: 0x20
	// Line 600, Address: 0x1da354, Func Offset: 0x24
	// Line 602, Address: 0x1da378, Func Offset: 0x48
	// Line 603, Address: 0x1da37c, Func Offset: 0x4c
	// Line 606, Address: 0x1da384, Func Offset: 0x54
	// Line 608, Address: 0x1da390, Func Offset: 0x60
	// Line 610, Address: 0x1da39c, Func Offset: 0x6c
	// Line 619, Address: 0x1da3b4, Func Offset: 0x84
	// Line 620, Address: 0x1da3b8, Func Offset: 0x88
	// Func End, Address: 0x1da3d0, Func Offset: 0xa0
}

// MaterialSetEnvMap__FP10RpMaterialPv
// Start address: 0x1da3d0
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data)
{
	RwFrame* frame;
	RwTexture* texture;
	// Line 528, Address: 0x1da3d0, Func Offset: 0
	// Line 531, Address: 0x1da3e4, Func Offset: 0x14
	// Line 533, Address: 0x1da3ec, Func Offset: 0x1c
	// Line 538, Address: 0x1da3f4, Func Offset: 0x24
	// Line 542, Address: 0x1da400, Func Offset: 0x30
	// Line 545, Address: 0x1da404, Func Offset: 0x34
	// Line 549, Address: 0x1da40c, Func Offset: 0x3c
	// Line 551, Address: 0x1da41c, Func Offset: 0x4c
	// Line 552, Address: 0x1da428, Func Offset: 0x58
	// Line 555, Address: 0x1da430, Func Offset: 0x60
	// Line 557, Address: 0x1da434, Func Offset: 0x64
	// Line 560, Address: 0x1da43c, Func Offset: 0x6c
	// Line 562, Address: 0x1da448, Func Offset: 0x78
	// Line 566, Address: 0x1da454, Func Offset: 0x84
	// Line 568, Address: 0x1da470, Func Offset: 0xa0
	// Line 571, Address: 0x1da478, Func Offset: 0xa8
	// Line 575, Address: 0x1da480, Func Offset: 0xb0
	// Line 576, Address: 0x1da484, Func Offset: 0xb4
	// Func End, Address: 0x1da49c, Func Offset: 0xcc
}

// MaterialSetShininess__FP10RpMaterialPv
// Start address: 0x1da4a0
RpMaterial* MaterialSetShininess(RpMaterial* material)
{
	RpMatFXMaterialFlags flags;
	// Line 493, Address: 0x1da4a0, Func Offset: 0
	// Line 496, Address: 0x1da4ac, Func Offset: 0xc
	// Line 498, Address: 0x1da4b4, Func Offset: 0x14
	// Line 500, Address: 0x1da4c8, Func Offset: 0x28
	// Line 503, Address: 0x1da4d4, Func Offset: 0x34
	// Line 504, Address: 0x1da4d8, Func Offset: 0x38
	// Func End, Address: 0x1da4e8, Func Offset: 0x48
}

// SectorMatFXEnableCB__FP13RpWorldSectorPv
// Start address: 0x1da4f0
RpWorldSector* SectorMatFXEnableCB(RpWorldSector* worldSector)
{
	// Line 451, Address: 0x1da4f0, Func Offset: 0
	// Line 452, Address: 0x1da4fc, Func Offset: 0xc
	// Line 453, Address: 0x1da504, Func Offset: 0x14
	// Line 454, Address: 0x1da508, Func Offset: 0x18
	// Func End, Address: 0x1da518, Func Offset: 0x28
}

// xFXExit__Fv
// Start address: 0x1da520
void xFXExit()
{
	// Line 370, Address: 0x1da520, Func Offset: 0
	// Line 372, Address: 0x1da52c, Func Offset: 0xc
	// Line 374, Address: 0x1da548, Func Offset: 0x28
	// Line 375, Address: 0x1da54c, Func Offset: 0x2c
	// Func End, Address: 0x1da55c, Func Offset: 0x3c
}

// xFXUpdate__Ff
// Start address: 0x1da560
void xFXUpdate(float32 dt)
{
	// Line 300, Address: 0x1da560, Func Offset: 0
	// Func End, Address: 0x1da568, Func Offset: 0x8
}

// iModelRenderShit__FPv
// Start address: 0x1da570
void iModelRenderShit()
{
	// Line 291, Address: 0x1da570, Func Offset: 0
	// Func End, Address: 0x1da578, Func Offset: 0x8
}

// FindAtomicCallbackShit__FPv
// Start address: 0x1da580
void FindAtomicCallbackShit()
{
	// Line 274, Address: 0x1da580, Func Offset: 0
	// Func End, Address: 0x1da588, Func Offset: 0x8
}

// xFX_SceneExit__FP7RpWorld
// Start address: 0x1da590
void xFX_SceneExit()
{
	// Line 254, Address: 0x1da590, Func Offset: 0
	// Func End, Address: 0x1da598, Func Offset: 0x8
}

// xFX_SceneEnter__FP7RpWorld
// Start address: 0x1da5a0
void xFX_SceneEnter(RpWorld* world)
{
	_xEnt* ent;
	zScene* sc;
	RwTexture* bump;
	RwTexture* env;
	RwTexture* bump;
	RwTexture* env;
	RpMaterial* mp;
	zSurfMatFX* fxp;
	zSurfaceProps* pp;
	xSurface* sp;
	int32 num;
	int32 i;
	// Line 113, Address: 0x1da5a0, Func Offset: 0
	// Line 117, Address: 0x1da5cc, Func Offset: 0x2c
	// Line 113, Address: 0x1da5d0, Func Offset: 0x30
	// Line 117, Address: 0x1da5d8, Func Offset: 0x38
	// Line 120, Address: 0x1da5e8, Func Offset: 0x48
	// Line 121, Address: 0x1da5f0, Func Offset: 0x50
	// Line 122, Address: 0x1da618, Func Offset: 0x78
	// Line 123, Address: 0x1da620, Func Offset: 0x80
	// Line 124, Address: 0x1da624, Func Offset: 0x84
	// Line 129, Address: 0x1da638, Func Offset: 0x98
	// Line 133, Address: 0x1da644, Func Offset: 0xa4
	// Line 134, Address: 0x1da650, Func Offset: 0xb0
	// Line 136, Address: 0x1da658, Func Offset: 0xb8
	// Line 138, Address: 0x1da664, Func Offset: 0xc4
	// Line 144, Address: 0x1da670, Func Offset: 0xd0
	// Line 146, Address: 0x1da678, Func Offset: 0xd8
	// Line 147, Address: 0x1da688, Func Offset: 0xe8
	// Line 148, Address: 0x1da698, Func Offset: 0xf8
	// Line 152, Address: 0x1da6a0, Func Offset: 0x100
	// Line 153, Address: 0x1da6a8, Func Offset: 0x108
	// Line 157, Address: 0x1da6b4, Func Offset: 0x114
	// Line 158, Address: 0x1da6b8, Func Offset: 0x118
	// Line 159, Address: 0x1da6c8, Func Offset: 0x128
	// Line 160, Address: 0x1da6d8, Func Offset: 0x138
	// Line 164, Address: 0x1da6e0, Func Offset: 0x140
	// Line 165, Address: 0x1da740, Func Offset: 0x1a0
	// Line 168, Address: 0x1da74c, Func Offset: 0x1ac
	// Line 169, Address: 0x1da750, Func Offset: 0x1b0
	// Line 170, Address: 0x1da760, Func Offset: 0x1c0
	// Line 171, Address: 0x1da76c, Func Offset: 0x1cc
	// Line 170, Address: 0x1da770, Func Offset: 0x1d0
	// Line 171, Address: 0x1da774, Func Offset: 0x1d4
	// Line 172, Address: 0x1da77c, Func Offset: 0x1dc
	// Line 179, Address: 0x1da78c, Func Offset: 0x1ec
	// Line 186, Address: 0x1da804, Func Offset: 0x264
	// Line 190, Address: 0x1da820, Func Offset: 0x280
	// Line 200, Address: 0x1da828, Func Offset: 0x288
	// Line 201, Address: 0x1da838, Func Offset: 0x298
	// Line 207, Address: 0x1da83c, Func Offset: 0x29c
	// Line 201, Address: 0x1da844, Func Offset: 0x2a4
	// Line 207, Address: 0x1da84c, Func Offset: 0x2ac
	// Line 208, Address: 0x1da868, Func Offset: 0x2c8
	// Line 209, Address: 0x1da8f4, Func Offset: 0x354
	// Line 210, Address: 0x1da8f8, Func Offset: 0x358
	// Line 212, Address: 0x1da908, Func Offset: 0x368
	// Line 214, Address: 0x1da930, Func Offset: 0x390
	// Line 223, Address: 0x1da9bc, Func Offset: 0x41c
	// Line 224, Address: 0x1da9c0, Func Offset: 0x420
	// Line 226, Address: 0x1da9d0, Func Offset: 0x430
	// Line 227, Address: 0x1da9e4, Func Offset: 0x444
	// Line 232, Address: 0x1daa14, Func Offset: 0x474
	// Line 235, Address: 0x1daaa0, Func Offset: 0x500
	// Line 236, Address: 0x1daab4, Func Offset: 0x514
	// Line 237, Address: 0x1dab40, Func Offset: 0x5a0
	// Line 238, Address: 0x1dab54, Func Offset: 0x5b4
	// Line 242, Address: 0x1dabe0, Func Offset: 0x640
	// Line 243, Address: 0x1dac3c, Func Offset: 0x69c
	// Line 244, Address: 0x1dacc4, Func Offset: 0x724
	// Line 243, Address: 0x1dacc8, Func Offset: 0x728
	// Line 245, Address: 0x1daccc, Func Offset: 0x72c
	// Line 249, Address: 0x1dace0, Func Offset: 0x740
	// Func End, Address: 0x1dad18, Func Offset: 0x778
}

// xFXInit__Fv
// Start address: 0x1dad20
void xFXInit()
{
	RwFrame* frame;
	RpLight* light;
	// Line 79, Address: 0x1dad20, Func Offset: 0
	// Line 80, Address: 0x1dad30, Func Offset: 0x10
	// Line 88, Address: 0x1dad40, Func Offset: 0x20
	// Line 89, Address: 0x1dad4c, Func Offset: 0x2c
	// Line 93, Address: 0x1dad54, Func Offset: 0x34
	// Line 94, Address: 0x1dad5c, Func Offset: 0x3c
	// Line 96, Address: 0x1dad64, Func Offset: 0x44
	// Line 98, Address: 0x1dad70, Func Offset: 0x50
	// Line 103, Address: 0x1dadd8, Func Offset: 0xb8
	// Line 104, Address: 0x1dade0, Func Offset: 0xc0
	// Line 108, Address: 0x1dade8, Func Offset: 0xc8
	// Line 109, Address: 0x1dadf8, Func Offset: 0xd8
	// Func End, Address: 0x1dae0c, Func Offset: 0xec
}

