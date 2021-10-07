typedef struct _xEnv;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xBox;
typedef struct _xEnt;
typedef struct RwRGBA;
typedef struct tagiRenderInput;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeParam;
typedef struct RpWorld;
typedef struct _xEntFrame;
typedef struct xMemPool;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpGeometry;
typedef struct xBase;
typedef struct RwRaster;
typedef enum RwCameraProjection;
typedef struct xModelInstance;
typedef struct zShaggy1Globals;
typedef struct _tagxCamFrame;
typedef struct RxObjSpace3DVertex;
typedef struct RwCamera;
typedef struct RwMatrixTag;
typedef struct RwObjectHasFrame;
typedef struct xCutsceneData;
typedef struct RpLight;
typedef struct RxNodeDefinition;
typedef struct RpVertexNormal;
typedef struct RpAtomic;
typedef struct RwLine;
typedef struct RpMaterialList;
typedef struct _zEnt;
typedef struct _tagxCamShoulderAsset;
typedef struct xCutsceneTime;
typedef struct _xVec3;
typedef struct xAnimSingle;
typedef enum _tagTransType;
typedef struct RpMorphTarget;
typedef struct RxPipelineCluster;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct p2LinkAsset;
typedef struct _tagxCamStaticFollow;
typedef struct RwSky2DVertexAlignmentOverlay;
typedef struct rxHeapBlockHeader;
typedef struct zCheckPoint;
typedef struct RwLLLink;
typedef struct RwResEntry;
typedef struct xAnimTable;
typedef struct _xEntShadow;
typedef struct RxPipelineNode;
typedef struct RwRGBAReal;
typedef struct rxHeapFreeBlock;
typedef struct _tagxCam;
typedef struct iEnv;
typedef struct zGlobalGameStats;
typedef struct RwV3d;
typedef enum _tagRumbleType;
typedef struct xAnimEffect;
typedef struct _zEntHangable;
typedef struct xAnimTransition;
typedef struct RxClusterDefinition;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct RpClump;
typedef struct RwV2d;
typedef struct RxPipeline;
typedef struct zAssetPickupTable;
typedef struct iShadowCache;
typedef struct RpPolygon;
typedef struct RwFrame;
typedef struct xAnimState;
typedef struct xCutscene;
typedef struct _xMat4x3;
typedef struct p2BaseAsset;
typedef struct RpTriangle;
typedef struct RwSky2DVertex;
typedef struct xCutsceneInfo;
typedef struct iModelTag;
typedef struct _tagxCamPath;
typedef enum RwTextureFilterMode;
typedef enum RpIntersectType;
typedef struct p2EntAsset;
typedef struct _tagp2CamStaticAsset;
typedef struct zJumpParam;
typedef struct p2EntHangableAsset;
typedef struct xModelPool;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct zGlobals;
typedef struct xAnimPlay;
typedef struct zPortalAsset;
typedef struct _tagxPad;
typedef struct _xBound;
typedef struct xCutsceneBreak;
typedef struct _xScene;
typedef struct RwTexDictionary;
typedef struct RwPlane;
typedef struct _xQuat;
typedef struct RpIntersection;
typedef struct RwLinkList;
typedef struct RpCollSector;
typedef struct zScene;
typedef struct RxPacket;
typedef struct RwFrustumPlane;
typedef struct _xEntDrive;
typedef struct RxColorUnion;
typedef struct RpMeshHeader;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct _zCutsceneMgr;
typedef struct RwBBox;
typedef struct _xVec4;
typedef struct _zPortal;
typedef struct RpIntersectData;
typedef struct _iCollis;
typedef struct rxReq;
typedef struct RpCollisionTriangle;
typedef struct zPlayerStatic;
typedef struct RwTexture;
typedef enum RwFogType;
typedef struct zCutsceneZbuffer;
typedef struct RpWorldSector;
typedef struct _xEntCollis;
typedef struct _tagxCamFollow;
typedef struct _tagxRumble;
typedef struct RwTexCoords;
typedef struct _xRot;
typedef struct RxOutputSpec;
typedef struct _zPlatform;
typedef enum RxClusterForcePresent;
typedef struct RpInterpolator;
typedef struct xAnimFile;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct _tagxCamPathAsset;
typedef struct _xCollis;
typedef struct xAnimTransitionList;
typedef enum RwBlendFunction;
typedef struct tag_xFile;
typedef struct RxIoSpec;
typedef struct sceCdlFILE;
typedef struct iFogParams;
typedef enum _tagPadState;
typedef struct zCutsceneZbufferHack;
typedef struct _tagiPad;
typedef struct RxNodeMethods;
typedef struct tag_iFile;
typedef struct _ProjectionParam;
typedef struct _tagxCamShoulder;
typedef struct RwSurfaceProperties;
typedef struct _xRay3;
typedef struct RxHeap;
typedef struct RxCluster;
typedef struct _tagxCamFollowAsset;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct xSurface;
typedef struct xCamAsset;
typedef struct zCutsceneMgrAsset;
typedef struct zPlayerGlobals;
typedef struct _xSphere;
typedef struct xQCData;
typedef struct RwSky2DVertexFields;
typedef struct RwSphere;
typedef enum _tagCamType;
typedef struct xFFX;
typedef enum rxEmbeddedPacketState;
typedef struct _xCylinder;
typedef struct _xBBox;
typedef enum RwTextureAddressMode;
typedef struct _tagxCamStatic;

typedef int32(*type_1)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_5)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef void(*type_11)(RxNodeDefinition*);
typedef xBase*(*type_12)(uint32);
typedef RwObjectHasFrame*(*type_14)(RwObjectHasFrame*);
typedef int8*(*type_16)(xBase*);
typedef int32(*type_18)(RxPipelineNode*);
typedef int8*(*type_19)(uint32);
typedef void(*type_20)(void*);
typedef void(*type_22)(RxPipelineNode*);
typedef uint32(*type_24)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_26)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_30)(RpWorldSector*);
typedef void(*type_34)(void*);
typedef RwCamera*(*type_41)(RwCamera*);
typedef uint32(*type_42)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_46)(xMemPool*, void*);
typedef void(*type_49)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef RwCamera*(*type_50)(RwCamera*);
typedef void(*type_53)(RwResEntry*);
typedef void(*type_54)(_xEnt*, _xScene*, float32);
typedef void(*type_57)(_xEnt*);
typedef void(*type_58)(_xEnt*);
typedef RpCollisionTriangle*(*type_59)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
typedef void(*type_60)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_65)(_xEnt*, _xVec3*);
typedef uint32(*type_70)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_74)(int32);
typedef void(*type_89)(_xEnt*, _xVec3*);
typedef void(*type_102)(void*);
typedef RpClump*(*type_103)(RpClump*, void*);

typedef uint8 type_0[8];
typedef uint32 type_3[4096];
typedef uint8 type_4[22];
typedef uint8 type_7[3];
typedef uint8 type_8[22];
typedef float32 type_9[15];
typedef float32 type_13[15];
typedef _xVec4 type_15[8];
typedef uint32 type_17[15];
typedef <unknown fundamental type (0xa510)> type_21[4];
typedef uint8 type_23[3];
typedef _xRay3 type_25[3];
typedef RpLight* type_27[2];
typedef uint16 type_28[3];
typedef _xVec3 type_29[4];
typedef _xCollis type_31[3];
typedef RwFrame* type_32[2];
typedef uint16 type_33[3];
typedef RwV3d type_35[3];
typedef RxCluster type_36[1];
typedef float32 type_37[2];
typedef float32 type_38[2][3];
typedef float32 type_39[4];
typedef iModelTag type_40[4];
typedef RwV3d type_43[3];
typedef uint8 type_44[3];
typedef uint32 type_45[4];
typedef int8 type_47[16];
typedef uint32 type_48[2];
typedef uint8 type_51[3];
typedef float32 type_52[2];
typedef int8 type_55[128];
typedef int8 type_56[128][6];
typedef float32 type_61[4];
typedef int8 type_62[32];
typedef RwV2d type_63[2];
typedef float32 type_64[4];
typedef RwTexCoords* type_66[8];
typedef float32 type_67[4];
typedef float32 type_68[4];
typedef int8 type_69[32];
typedef int8 type_71[32];
typedef float32 type_72[4];
typedef float32 type_73[3];
typedef RwTexCoords* type_75[8];
typedef float32 type_76[3];
typedef zGlobalGameStats type_77[30];
typedef int8 type_78[16];
typedef zCutsceneZbuffer type_79[4];
typedef zGlobalGameStats type_80[13];
typedef _zEnt* type_81[10];
typedef uint8 type_82[8];
typedef uint32 type_83[1];
typedef zGlobalGameStats type_84[4];
typedef float32 type_85[4];
typedef int8 type_86[128];
typedef int32 type_87[2];
typedef RwV3d type_88[3];
typedef float32 type_90[4];
typedef int32 type_91[2];
typedef uint32 type_92[2];
typedef RwV3d type_93[3];
typedef float32 type_94[4];
typedef uint8 type_95[2];
typedef uint32 type_96[2];
typedef uint32 type_97[43];
typedef uint32 type_98[2];
typedef xBase* type_99[43];
typedef _xCollis type_100[18];
typedef RwSky2DVertex type_101[4];
typedef RwV3d* type_104[3];
typedef RwFrustumPlane type_105[6];
typedef int8 type_106[16];
typedef uint8 type_107[8];
typedef int8 type_108[16];
typedef RwV3d type_109[8];
typedef _xVec3 type_110[2];
typedef uint8 type_111[8];
typedef uint32 type_112[2];
typedef uint8 type_113[8];
typedef _xQuat type_114[2];

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct tagiRenderInput
{
	uint16* m_index;
	RxObjSpace3DVertex* m_vertex;
	float32* m_vertexTZ;
	uint32 m_mode;
	int32 m_vertexType;
	int32 m_vertexTypeSize;
	int32 m_indexCount;
	int32 m_vertexCount;
	_xMat4x3 m_camViewMatrix;
	_xVec4 m_camViewR;
	_xVec4 m_camViewU;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

struct RpSector
{
	int32 type;
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

struct RwSky2DVertexAlignmentOverlay
{
	union
	{
		RwSky2DVertexFields els;
		<unknown fundamental type (0xa510)> qWords[4];
	};
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct zCheckPoint
{
	_xVec3 pos;
	float32 rot;
	uint32 initCamID;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct RwV2d
{
	float32 x;
	float32 y;
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

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
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

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _zCutsceneMgr : xBase
{
	zCutsceneMgrAsset* tasset;
	xCutscene* csn;
	uint32 stop;
	zCutsceneZbufferHack* zhack;
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

struct _zPortal : xBase
{
	zPortalAsset* passet;
};

struct RpIntersectData
{
	union
	{
		RwLine line;
		RwV3d point;
		RwSphere sphere;
		RwBBox box;
		void* object;
	};
};

struct _iCollis
{
	int32 unknown;
};

struct rxReq
{
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int32 index;
	RwV3d* vertices[3];
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
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

struct _tagxCamFollow
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _zPlatform
{
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct zCutsceneZbufferHack
{
	int8* name;
	zCutsceneZbuffer times[4];
};

struct _tagiPad
{
	int32 port;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct _ProjectionParam
{
	RwV3d at;
	RwMatrixTag invMatrix;
	uint8 shadowValue;
	int32 fade;
	uint32 numIm3DBatch;
};

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float32 camVertex_z;
	float32 u;
	float32 v;
	float32 recipZ;
	float32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float32 pad2;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct _tagxCamStatic
{
	uint32 unused;
};

float32 SHADOW_BF_DOT;
float32 SHADOW_BOTH;
RxObjSpace3DVertex* Im3DBuffer;
uint32 Im3DBufferPos;
uint32 ShadowNumTriangles;
float32 ShadowThreshold;
float32 ShadowSubdArea;
RwCamera* ShadowCamera;
RwRaster* ShadowCameraRaster;
RwRaster* ShadowRenderRaster;
RwV2d ShadowPreviewVerts[2];
int32 ShadowEnabled;
uint32 ShadowResolutionIndex;
uint32 ShadowBlur;
int32 ShadowAA;
float32 ShadowZoneRadius;
float32 ShadowStrength;
int32 ShadowFade;
uint32 sShadowFlags;
_xSphere sSphere;
float32 zlim;
float32 zamt;
uint32 tri_no;
int32 watch_tri;
float32 shit;
RpCollisionTriangle*(*ShadowRenderTriangleCB)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float32, void*);
tagiRenderInput gRenderBuffer;
uint32 ourGlobals[4096];
zGlobals globals;
void(*modelRenderCB)(void*);

int32 ShadowRender(RwCamera* shadowCamera, RpWorld* world, RpIntersection* shadowZone, float32 shadowFactor, float32 fadeDist);
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data);
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*));
void ShadowCameraDestroy(RwCamera* shadowCamera);
void xShadowCameraDestroy();
void xShadowRender(_xEnt* ent);
void xShadowReceiveShadow(_xEnt* ent);
uint32 xShadowReceiveShadowSetup(_xEnt* ent);
uint32 xShadowEntIsOutsideFrustum(_xEnt* ent);
void modelRenderCB(void* model);
void xShadowRenderWorld(_xVec3* center, float32 radius);
void xShadowCameraUpdate(void* model, void(*renderCB)(void*), _xVec3* center, float32 radius);
int32 xShadowCameraCreate();
void xShadowSetLight(_xVec3* target_pos, _xVec3* in_vec);
void xShadowSetWorld(RpWorld* world);
int32 SetupShadow();

// ShadowRender__FP8RwCameraP8RwRasterP7RpWorldP14RpIntersectionff
// Start address: 0x1c31e0
int32 ShadowRender(RwCamera* shadowCamera, RpWorld* world, RpIntersection* shadowZone, float32 shadowFactor, float32 fadeDist)
{
	_xVec3 B;
	_xVec3 A;
	RwV3d tr;
	RwV3d scl;
	float32 radius;
	RwMatrixTag* shadowMatrix;
	_ProjectionParam param;
	// Line 2225, Address: 0x1c31e0, Func Offset: 0
	// Line 2254, Address: 0x1c320c, Func Offset: 0x2c
	// Line 2256, Address: 0x1c322c, Func Offset: 0x4c
	// Line 2258, Address: 0x1c3238, Func Offset: 0x58
	// Line 2265, Address: 0x1c3244, Func Offset: 0x64
	// Line 2267, Address: 0x1c3250, Func Offset: 0x70
	// Line 2274, Address: 0x1c3268, Func Offset: 0x88
	// Line 2278, Address: 0x1c3278, Func Offset: 0x98
	// Line 2282, Address: 0x1c3280, Func Offset: 0xa0
	// Line 2294, Address: 0x1c3288, Func Offset: 0xa8
	// Line 2298, Address: 0x1c328c, Func Offset: 0xac
	// Line 2295, Address: 0x1c3294, Func Offset: 0xb4
	// Line 2294, Address: 0x1c3298, Func Offset: 0xb8
	// Line 2295, Address: 0x1c329c, Func Offset: 0xbc
	// Line 2296, Address: 0x1c32b0, Func Offset: 0xd0
	// Line 2298, Address: 0x1c32b4, Func Offset: 0xd4
	// Line 2300, Address: 0x1c32bc, Func Offset: 0xdc
	// Line 2301, Address: 0x1c32c4, Func Offset: 0xe4
	// Line 2302, Address: 0x1c32cc, Func Offset: 0xec
	// Line 2300, Address: 0x1c32d4, Func Offset: 0xf4
	// Line 2302, Address: 0x1c32d8, Func Offset: 0xf8
	// Line 2301, Address: 0x1c32dc, Func Offset: 0xfc
	// Line 2300, Address: 0x1c32e0, Func Offset: 0x100
	// Line 2301, Address: 0x1c32e4, Func Offset: 0x104
	// Line 2300, Address: 0x1c32ec, Func Offset: 0x10c
	// Line 2302, Address: 0x1c32f0, Func Offset: 0x110
	// Line 2314, Address: 0x1c32f8, Func Offset: 0x118
	// Line 2315, Address: 0x1c3318, Func Offset: 0x138
	// Line 2319, Address: 0x1c332c, Func Offset: 0x14c
	// Line 2316, Address: 0x1c3334, Func Offset: 0x154
	// Line 2319, Address: 0x1c3338, Func Offset: 0x158
	// Line 2327, Address: 0x1c333c, Func Offset: 0x15c
	// Line 2335, Address: 0x1c3340, Func Offset: 0x160
	// Line 2319, Address: 0x1c3348, Func Offset: 0x168
	// Line 2327, Address: 0x1c334c, Func Offset: 0x16c
	// Line 2328, Address: 0x1c3350, Func Offset: 0x170
	// Line 2330, Address: 0x1c3354, Func Offset: 0x174
	// Line 2334, Address: 0x1c3358, Func Offset: 0x178
	// Line 2335, Address: 0x1c3360, Func Offset: 0x180
	// Line 2334, Address: 0x1c3368, Func Offset: 0x188
	// Line 2335, Address: 0x1c338c, Func Offset: 0x1ac
	// Line 2338, Address: 0x1c3394, Func Offset: 0x1b4
	// Line 2337, Address: 0x1c339c, Func Offset: 0x1bc
	// Line 2339, Address: 0x1c33a8, Func Offset: 0x1c8
	// Line 2338, Address: 0x1c33b0, Func Offset: 0x1d0
	// Line 2339, Address: 0x1c33b4, Func Offset: 0x1d4
	// Line 2363, Address: 0x1c33c0, Func Offset: 0x1e0
	// Line 2369, Address: 0x1c33d8, Func Offset: 0x1f8
	// Line 2371, Address: 0x1c33e4, Func Offset: 0x204
	// Line 2374, Address: 0x1c33fc, Func Offset: 0x21c
	// Line 2375, Address: 0x1c3404, Func Offset: 0x224
	// Line 2378, Address: 0x1c340c, Func Offset: 0x22c
	// Line 2388, Address: 0x1c3410, Func Offset: 0x230
	// Line 2389, Address: 0x1c341c, Func Offset: 0x23c
	// Line 2395, Address: 0x1c3428, Func Offset: 0x248
	// Line 2394, Address: 0x1c3450, Func Offset: 0x270
	// Line 2395, Address: 0x1c3454, Func Offset: 0x274
	// Func End, Address: 0x1c345c, Func Offset: 0x27c
}

// ShadowRenderTriangleCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1c3460
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data)
{
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	uint8 val;
	RxObjSpace3DVertex* imv;
	RwV3d vShad[3];
	RwV3d vIn[3];
	_ProjectionParam* param;
	// Line 1931, Address: 0x1c3460, Func Offset: 0
	// Line 2079, Address: 0x1c348c, Func Offset: 0x2c
	// Line 2081, Address: 0x1c34cc, Func Offset: 0x6c
	// Line 2088, Address: 0x1c34d4, Func Offset: 0x74
	// Line 2089, Address: 0x1c34dc, Func Offset: 0x7c
	// Line 2090, Address: 0x1c34e0, Func Offset: 0x80
	// Line 2088, Address: 0x1c34ec, Func Offset: 0x8c
	// Line 2092, Address: 0x1c34f0, Func Offset: 0x90
	// Line 2088, Address: 0x1c3500, Func Offset: 0xa0
	// Line 2089, Address: 0x1c3518, Func Offset: 0xb8
	// Line 2090, Address: 0x1c353c, Func Offset: 0xdc
	// Line 2092, Address: 0x1c3554, Func Offset: 0xf4
	// Line 2094, Address: 0x1c355c, Func Offset: 0xfc
	// Line 2095, Address: 0x1c3570, Func Offset: 0x110
	// Line 2096, Address: 0x1c3578, Func Offset: 0x118
	// Line 2102, Address: 0x1c35b0, Func Offset: 0x150
	// Line 2103, Address: 0x1c35c4, Func Offset: 0x164
	// Line 2104, Address: 0x1c35d0, Func Offset: 0x170
	// Line 2105, Address: 0x1c35dc, Func Offset: 0x17c
	// Line 2118, Address: 0x1c35e8, Func Offset: 0x188
	// Line 2125, Address: 0x1c3740, Func Offset: 0x2e0
	// Line 2132, Address: 0x1c374c, Func Offset: 0x2ec
	// Line 2134, Address: 0x1c3760, Func Offset: 0x300
	// Line 2137, Address: 0x1c3778, Func Offset: 0x318
	// Line 2138, Address: 0x1c3780, Func Offset: 0x320
	// Line 2141, Address: 0x1c3788, Func Offset: 0x328
	// Line 2142, Address: 0x1c3794, Func Offset: 0x334
	// Line 2157, Address: 0x1c3798, Func Offset: 0x338
	// Line 2153, Address: 0x1c37a0, Func Offset: 0x340
	// Line 2154, Address: 0x1c37a4, Func Offset: 0x344
	// Line 2155, Address: 0x1c37a8, Func Offset: 0x348
	// Line 2148, Address: 0x1c37ac, Func Offset: 0x34c
	// Line 2157, Address: 0x1c37b4, Func Offset: 0x354
	// Line 2153, Address: 0x1c37bc, Func Offset: 0x35c
	// Line 2148, Address: 0x1c37d0, Func Offset: 0x370
	// Line 2157, Address: 0x1c37e0, Func Offset: 0x380
	// Line 2154, Address: 0x1c37e4, Func Offset: 0x384
	// Line 2158, Address: 0x1c37e8, Func Offset: 0x388
	// Line 2210, Address: 0x1c37ec, Func Offset: 0x38c
	// Line 2155, Address: 0x1c37f0, Func Offset: 0x390
	// Line 2157, Address: 0x1c37f4, Func Offset: 0x394
	// Line 2158, Address: 0x1c380c, Func Offset: 0x3ac
	// Line 2159, Address: 0x1c3834, Func Offset: 0x3d4
	// Line 2166, Address: 0x1c3858, Func Offset: 0x3f8
	// Line 2167, Address: 0x1c3860, Func Offset: 0x400
	// Line 2168, Address: 0x1c3868, Func Offset: 0x408
	// Line 2170, Address: 0x1c3870, Func Offset: 0x410
	// Line 2171, Address: 0x1c3878, Func Offset: 0x418
	// Line 2172, Address: 0x1c3880, Func Offset: 0x420
	// Line 2196, Address: 0x1c3888, Func Offset: 0x428
	// Line 2198, Address: 0x1c388c, Func Offset: 0x42c
	// Line 2199, Address: 0x1c389c, Func Offset: 0x43c
	// Line 2200, Address: 0x1c38ac, Func Offset: 0x44c
	// Line 2206, Address: 0x1c38bc, Func Offset: 0x45c
	// Line 2207, Address: 0x1c38c8, Func Offset: 0x468
	// Line 2209, Address: 0x1c38d4, Func Offset: 0x474
	// Line 2211, Address: 0x1c38e0, Func Offset: 0x480
	// Func End, Address: 0x1c3910, Func Offset: 0x4b0
}

// ShadowCameraUpdate__FP8RwCameraPvPFPv_vP6_xVec3f
// Start address: 0x1c3910
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, void(*renderCB)(void*))
{
	RwCamera* camera;
	RwRGBA bgColor;
	// Line 1491, Address: 0x1c3910, Func Offset: 0
	// Line 1492, Address: 0x1c3928, Func Offset: 0x18
	// Line 1493, Address: 0x1c3930, Func Offset: 0x20
	// Line 1492, Address: 0x1c3940, Func Offset: 0x30
	// Line 1493, Address: 0x1c3944, Func Offset: 0x34
	// Line 1495, Address: 0x1c3948, Func Offset: 0x38
	// Line 1496, Address: 0x1c3950, Func Offset: 0x40
	// Line 1527, Address: 0x1c3958, Func Offset: 0x48
	// Line 1532, Address: 0x1c3968, Func Offset: 0x58
	// Line 1534, Address: 0x1c3978, Func Offset: 0x68
	// Line 1535, Address: 0x1c3980, Func Offset: 0x70
	// Line 1536, Address: 0x1c398c, Func Offset: 0x7c
	// Line 1539, Address: 0x1c3998, Func Offset: 0x88
	// Line 1541, Address: 0x1c39a0, Func Offset: 0x90
	// Line 1542, Address: 0x1c39ac, Func Offset: 0x9c
	// Line 1564, Address: 0x1c39b8, Func Offset: 0xa8
	// Line 1571, Address: 0x1c39c0, Func Offset: 0xb0
	// Line 1572, Address: 0x1c39c8, Func Offset: 0xb8
	// Line 1574, Address: 0x1c39d0, Func Offset: 0xc0
	// Line 1575, Address: 0x1c39d4, Func Offset: 0xc4
	// Func End, Address: 0x1c39f0, Func Offset: 0xe0
}

// ShadowCameraDestroy__FP8RwCamera
// Start address: 0x1c39f0
void ShadowCameraDestroy(RwCamera* shadowCamera)
{
	RwFrame* frame;
	RwRaster* raster;
	// Line 1321, Address: 0x1c39f0, Func Offset: 0
	// Line 1322, Address: 0x1c3a00, Func Offset: 0x10
	// Line 1329, Address: 0x1c3a08, Func Offset: 0x18
	// Line 1331, Address: 0x1c3a10, Func Offset: 0x20
	// Line 1332, Address: 0x1c3a14, Func Offset: 0x24
	// Line 1334, Address: 0x1c3a1c, Func Offset: 0x2c
	// Line 1335, Address: 0x1c3a24, Func Offset: 0x34
	// Line 1338, Address: 0x1c3a2c, Func Offset: 0x3c
	// Line 1339, Address: 0x1c3a30, Func Offset: 0x40
	// Line 1342, Address: 0x1c3a38, Func Offset: 0x48
	// Line 1345, Address: 0x1c3a40, Func Offset: 0x50
	// Line 1346, Address: 0x1c3a44, Func Offset: 0x54
	// Line 1350, Address: 0x1c3a4c, Func Offset: 0x5c
	// Line 1353, Address: 0x1c3a54, Func Offset: 0x64
	// Line 1357, Address: 0x1c3a60, Func Offset: 0x70
	// Func End, Address: 0x1c3a74, Func Offset: 0x84
}

// xShadowCameraDestroy__Fv
// Start address: 0x1c3a80
void xShadowCameraDestroy()
{
	RpWorld* world;
	// Line 1147, Address: 0x1c3a80, Func Offset: 0
	// Line 1148, Address: 0x1c3a8c, Func Offset: 0xc
	// Line 1150, Address: 0x1c3a94, Func Offset: 0x14
	// Line 1148, Address: 0x1c3a9c, Func Offset: 0x1c
	// Line 1150, Address: 0x1c3aa4, Func Offset: 0x24
	// Line 1152, Address: 0x1c3aac, Func Offset: 0x2c
	// Line 1153, Address: 0x1c3ab4, Func Offset: 0x34
	// Line 1154, Address: 0x1c3abc, Func Offset: 0x3c
	// Line 1158, Address: 0x1c3ac0, Func Offset: 0x40
	// Func End, Address: 0x1c3ad0, Func Offset: 0x50
}

// xShadowRender__FP5_xEnt
// Start address: 0x1c3ad0
void xShadowRender(_xEnt* ent)
{
	float32 radius;
	_xVec3 center;
	// Line 1132, Address: 0x1c3ad0, Func Offset: 0
	// Line 1137, Address: 0x1c3ae0, Func Offset: 0x10
	// Line 1139, Address: 0x1c3aec, Func Offset: 0x1c
	// Line 1140, Address: 0x1c3b04, Func Offset: 0x34
	// Line 1141, Address: 0x1c3cc4, Func Offset: 0x1f4
	// Func End, Address: 0x1c3cd4, Func Offset: 0x204
}

// xShadowReceiveShadow__FP5_xEnt
// Start address: 0x1c3ce0
void xShadowReceiveShadow(_xEnt* ent)
{
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 len;
	RwV3d c;
	_xVec3* v2;
	_xVec3* v1;
	_xVec3* v0;
	RwV3d vShad[3];
	RwV3d vIn[3];
	RxObjSpace3DVertex* imv;
	uint32 max_verts;
	xModelInstance* model;
	uint8 val;
	float32 shadowFactor;
	RpGeometry* geom;
	RpTriangle* tri;
	_xVec3* xvert;
	uint32 numverts;
	uint32 i;
	RwV3d tr;
	RwV3d scl;
	float32 radius;
	RwMatrixTag invMatrix;
	RwMatrixTag* shadowMatrix;
	RwCamera* shadowCamera;
	// Line 809, Address: 0x1c3ce0, Func Offset: 0
	// Line 810, Address: 0x1c3d20, Func Offset: 0x40
	// Line 832, Address: 0x1c3d28, Func Offset: 0x48
	// Line 836, Address: 0x1c3d38, Func Offset: 0x58
	// Line 838, Address: 0x1c3d78, Func Offset: 0x98
	// Line 860, Address: 0x1c3d80, Func Offset: 0xa0
	// Line 865, Address: 0x1c3d90, Func Offset: 0xb0
	// Line 867, Address: 0x1c3d9c, Func Offset: 0xbc
	// Line 874, Address: 0x1c3da8, Func Offset: 0xc8
	// Line 876, Address: 0x1c3db4, Func Offset: 0xd4
	// Line 877, Address: 0x1c3db8, Func Offset: 0xd8
	// Line 884, Address: 0x1c3dd0, Func Offset: 0xf0
	// Line 888, Address: 0x1c3de0, Func Offset: 0x100
	// Line 892, Address: 0x1c3de8, Func Offset: 0x108
	// Line 904, Address: 0x1c3df4, Func Offset: 0x114
	// Line 906, Address: 0x1c3df8, Func Offset: 0x118
	// Line 908, Address: 0x1c3dfc, Func Offset: 0x11c
	// Line 905, Address: 0x1c3e00, Func Offset: 0x120
	// Line 908, Address: 0x1c3e0c, Func Offset: 0x12c
	// Line 910, Address: 0x1c3e14, Func Offset: 0x134
	// Line 912, Address: 0x1c3e1c, Func Offset: 0x13c
	// Line 910, Address: 0x1c3e20, Func Offset: 0x140
	// Line 911, Address: 0x1c3e24, Func Offset: 0x144
	// Line 912, Address: 0x1c3e28, Func Offset: 0x148
	// Line 910, Address: 0x1c3e30, Func Offset: 0x150
	// Line 911, Address: 0x1c3e38, Func Offset: 0x158
	// Line 912, Address: 0x1c3e54, Func Offset: 0x174
	// Line 914, Address: 0x1c3e5c, Func Offset: 0x17c
	// Line 916, Address: 0x1c3e68, Func Offset: 0x188
	// Line 918, Address: 0x1c3e7c, Func Offset: 0x19c
	// Line 921, Address: 0x1c3e8c, Func Offset: 0x1ac
	// Line 918, Address: 0x1c3e90, Func Offset: 0x1b0
	// Line 923, Address: 0x1c3e94, Func Offset: 0x1b4
	// Line 928, Address: 0x1c3e9c, Func Offset: 0x1bc
	// Line 929, Address: 0x1c3ea8, Func Offset: 0x1c8
	// Line 930, Address: 0x1c3eb4, Func Offset: 0x1d4
	// Line 932, Address: 0x1c3eb8, Func Offset: 0x1d8
	// Line 933, Address: 0x1c3ebc, Func Offset: 0x1dc
	// Line 937, Address: 0x1c3ec8, Func Offset: 0x1e8
	// Line 938, Address: 0x1c3edc, Func Offset: 0x1fc
	// Line 942, Address: 0x1c3ee4, Func Offset: 0x204
	// Line 956, Address: 0x1c3efc, Func Offset: 0x21c
	// Line 957, Address: 0x1c3f04, Func Offset: 0x224
	// Line 959, Address: 0x1c3f14, Func Offset: 0x234
	// Line 964, Address: 0x1c3f18, Func Offset: 0x238
	// Line 959, Address: 0x1c3f20, Func Offset: 0x240
	// Line 964, Address: 0x1c3f24, Func Offset: 0x244
	// Line 959, Address: 0x1c3f28, Func Offset: 0x248
	// Line 964, Address: 0x1c3f30, Func Offset: 0x250
	// Line 970, Address: 0x1c3f40, Func Offset: 0x260
	// Line 971, Address: 0x1c3f54, Func Offset: 0x274
	// Line 972, Address: 0x1c3f5c, Func Offset: 0x27c
	// Line 980, Address: 0x1c3f64, Func Offset: 0x284
	// Line 982, Address: 0x1c3f74, Func Offset: 0x294
	// Line 985, Address: 0x1c3f90, Func Offset: 0x2b0
	// Line 986, Address: 0x1c3f98, Func Offset: 0x2b8
	// Line 989, Address: 0x1c3fa0, Func Offset: 0x2c0
	// Line 990, Address: 0x1c3fa4, Func Offset: 0x2c4
	// Line 992, Address: 0x1c3fa8, Func Offset: 0x2c8
	// Line 994, Address: 0x1c3fb0, Func Offset: 0x2d0
	// Line 995, Address: 0x1c3fb4, Func Offset: 0x2d4
	// Line 996, Address: 0x1c3fb8, Func Offset: 0x2d8
	// Line 1011, Address: 0x1c3fbc, Func Offset: 0x2dc
	// Line 992, Address: 0x1c3fc0, Func Offset: 0x2e0
	// Line 994, Address: 0x1c3fd4, Func Offset: 0x2f4
	// Line 995, Address: 0x1c3fe4, Func Offset: 0x304
	// Line 1007, Address: 0x1c3ff4, Func Offset: 0x314
	// Line 996, Address: 0x1c3ff8, Func Offset: 0x318
	// Line 1007, Address: 0x1c4008, Func Offset: 0x328
	// Line 1008, Address: 0x1c4018, Func Offset: 0x338
	// Line 1009, Address: 0x1c4028, Func Offset: 0x348
	// Line 1007, Address: 0x1c4030, Func Offset: 0x350
	// Line 1009, Address: 0x1c4038, Func Offset: 0x358
	// Line 1011, Address: 0x1c403c, Func Offset: 0x35c
	// Line 1009, Address: 0x1c4048, Func Offset: 0x368
	// Line 1007, Address: 0x1c404c, Func Offset: 0x36c
	// Line 1008, Address: 0x1c4058, Func Offset: 0x378
	// Line 1009, Address: 0x1c4070, Func Offset: 0x390
	// Line 1011, Address: 0x1c4084, Func Offset: 0x3a4
	// Line 1023, Address: 0x1c408c, Func Offset: 0x3ac
	// Line 1031, Address: 0x1c41ec, Func Offset: 0x50c
	// Line 1055, Address: 0x1c41f0, Func Offset: 0x510
	// Line 1058, Address: 0x1c41fc, Func Offset: 0x51c
	// Line 1055, Address: 0x1c4200, Func Offset: 0x520
	// Line 1056, Address: 0x1c4218, Func Offset: 0x538
	// Line 1055, Address: 0x1c421c, Func Offset: 0x53c
	// Line 1056, Address: 0x1c4220, Func Offset: 0x540
	// Line 1055, Address: 0x1c4224, Func Offset: 0x544
	// Line 1056, Address: 0x1c422c, Func Offset: 0x54c
	// Line 1055, Address: 0x1c423c, Func Offset: 0x55c
	// Line 1056, Address: 0x1c4240, Func Offset: 0x560
	// Line 1057, Address: 0x1c4248, Func Offset: 0x568
	// Line 1058, Address: 0x1c4270, Func Offset: 0x590
	// Line 1059, Address: 0x1c4278, Func Offset: 0x598
	// Line 1060, Address: 0x1c4284, Func Offset: 0x5a4
	// Line 1059, Address: 0x1c4288, Func Offset: 0x5a8
	// Line 1060, Address: 0x1c428c, Func Offset: 0x5ac
	// Line 1063, Address: 0x1c429c, Func Offset: 0x5bc
	// Line 1060, Address: 0x1c42a4, Func Offset: 0x5c4
	// Line 1063, Address: 0x1c42bc, Func Offset: 0x5dc
	// Line 1066, Address: 0x1c42f0, Func Offset: 0x610
	// Line 1067, Address: 0x1c42fc, Func Offset: 0x61c
	// Line 1066, Address: 0x1c4300, Func Offset: 0x620
	// Line 1067, Address: 0x1c4318, Func Offset: 0x638
	// Line 1068, Address: 0x1c433c, Func Offset: 0x65c
	// Line 1067, Address: 0x1c4340, Func Offset: 0x660
	// Line 1068, Address: 0x1c4350, Func Offset: 0x670
	// Line 1082, Address: 0x1c4374, Func Offset: 0x694
	// Line 1068, Address: 0x1c4378, Func Offset: 0x698
	// Line 1078, Address: 0x1c4388, Func Offset: 0x6a8
	// Line 1079, Address: 0x1c4390, Func Offset: 0x6b0
	// Line 1080, Address: 0x1c4398, Func Offset: 0x6b8
	// Line 1082, Address: 0x1c43a0, Func Offset: 0x6c0
	// Line 1083, Address: 0x1c43a8, Func Offset: 0x6c8
	// Line 1084, Address: 0x1c43b0, Func Offset: 0x6d0
	// Line 1086, Address: 0x1c43b8, Func Offset: 0x6d8
	// Line 1087, Address: 0x1c43c8, Func Offset: 0x6e8
	// Line 1088, Address: 0x1c43d8, Func Offset: 0x6f8
	// Line 1090, Address: 0x1c43e8, Func Offset: 0x708
	// Line 1091, Address: 0x1c43f4, Func Offset: 0x714
	// Line 1096, Address: 0x1c4414, Func Offset: 0x734
	// Line 1098, Address: 0x1c4420, Func Offset: 0x740
	// Line 1101, Address: 0x1c443c, Func Offset: 0x75c
	// Line 1102, Address: 0x1c4444, Func Offset: 0x764
	// Line 1103, Address: 0x1c444c, Func Offset: 0x76c
	// Line 1105, Address: 0x1c4450, Func Offset: 0x770
	// Line 1106, Address: 0x1c4454, Func Offset: 0x774
	// Line 1111, Address: 0x1c4458, Func Offset: 0x778
	// Line 1112, Address: 0x1c4464, Func Offset: 0x784
	// Line 1118, Address: 0x1c4470, Func Offset: 0x790
	// Line 1123, Address: 0x1c447c, Func Offset: 0x79c
	// Line 1124, Address: 0x1c4488, Func Offset: 0x7a8
	// Line 1129, Address: 0x1c4494, Func Offset: 0x7b4
	// Func End, Address: 0x1c44d8, Func Offset: 0x7f8
}

// xShadowReceiveShadowSetup__FP5_xEnt
// Start address: 0x1c44e0
uint32 xShadowReceiveShadowSetup(_xEnt* ent)
{
	uint32 rsf_valid;
	uint32 sceneID;
	// Line 761, Address: 0x1c44e0, Func Offset: 0
	// Line 762, Address: 0x1c44f0, Func Offset: 0x10
	// Line 769, Address: 0x1c44fc, Func Offset: 0x1c
	// Line 770, Address: 0x1c450c, Func Offset: 0x2c
	// Line 773, Address: 0x1c4514, Func Offset: 0x34
	// Line 774, Address: 0x1c4524, Func Offset: 0x44
	// Line 777, Address: 0x1c452c, Func Offset: 0x4c
	// Line 778, Address: 0x1c4548, Func Offset: 0x68
	// Line 783, Address: 0x1c4554, Func Offset: 0x74
	// Line 784, Address: 0x1c4598, Func Offset: 0xb8
	// Line 787, Address: 0x1c459c, Func Offset: 0xbc
	// Line 788, Address: 0x1c45b4, Func Offset: 0xd4
	// Line 792, Address: 0x1c45bc, Func Offset: 0xdc
	// Line 793, Address: 0x1c45cc, Func Offset: 0xec
	// Line 805, Address: 0x1c45d0, Func Offset: 0xf0
	// Func End, Address: 0x1c45e4, Func Offset: 0x104
}

// xShadowEntIsOutsideFrustum__FP5_xEnt
// Start address: 0x1c45f0
uint32 xShadowEntIsOutsideFrustum(_xEnt* ent)
{
	uint32 test;
	RwSphere worldsph;
	RwCamera* cam;
	RwMatrixTag* mat;
	RwV3d* at;
	RwV3d* up;
	float32 atomicScale;
	float32 zScale2;
	float32 yScale2;
	float32 xScale2;
	// Line 715, Address: 0x1c45f0, Func Offset: 0
	// Line 716, Address: 0x1c4600, Func Offset: 0x10
	// Line 717, Address: 0x1c4620, Func Offset: 0x30
	// Line 722, Address: 0x1c462c, Func Offset: 0x3c
	// Line 723, Address: 0x1c4630, Func Offset: 0x40
	// Line 727, Address: 0x1c4634, Func Offset: 0x44
	// Line 732, Address: 0x1c4648, Func Offset: 0x58
	// Line 733, Address: 0x1c4650, Func Offset: 0x60
	// Line 732, Address: 0x1c4658, Func Offset: 0x68
	// Line 734, Address: 0x1c465c, Func Offset: 0x6c
	// Line 732, Address: 0x1c4660, Func Offset: 0x70
	// Line 734, Address: 0x1c4664, Func Offset: 0x74
	// Line 733, Address: 0x1c4668, Func Offset: 0x78
	// Line 734, Address: 0x1c466c, Func Offset: 0x7c
	// Line 732, Address: 0x1c4670, Func Offset: 0x80
	// Line 733, Address: 0x1c4678, Func Offset: 0x88
	// Line 732, Address: 0x1c4680, Func Offset: 0x90
	// Line 733, Address: 0x1c4684, Func Offset: 0x94
	// Line 734, Address: 0x1c4688, Func Offset: 0x98
	// Line 733, Address: 0x1c4690, Func Offset: 0xa0
	// Line 734, Address: 0x1c4694, Func Offset: 0xa4
	// Line 736, Address: 0x1c469c, Func Offset: 0xac
	// Line 738, Address: 0x1c46e4, Func Offset: 0xf4
	// Line 742, Address: 0x1c46e8, Func Offset: 0xf8
	// Line 738, Address: 0x1c46f0, Func Offset: 0x100
	// Line 742, Address: 0x1c46f4, Func Offset: 0x104
	// Line 752, Address: 0x1c4704, Func Offset: 0x114
	// Func End, Address: 0x1c471c, Func Offset: 0x12c
}

// modelRenderCB__FPv
// Start address: 0x1c4720
void modelRenderCB(void* model)
{
	// Line 688, Address: 0x1c4720, Func Offset: 0
	// Func End, Address: 0x1c4728, Func Offset: 0x8
}

// xShadowRenderWorld__FP6_xVec3f
// Start address: 0x1c4730
void xShadowRenderWorld(_xVec3* center, float32 radius)
{
	_xCollis ecrec;
	_xVec3 hit;
	int32 i;
	float32 env_dist;
	float32 ent_dist;
	uint32 hit_ent;
	uint32 hit_env;
	float32 sf[2][3];
	_xCollis crec[3];
	_xRay3 R[3];
	_xVec3* rt;
	_xVec3* up;
	_xVec3* at;
	RwMatrixTag* camMatrix;
	_xSphere zone;
	RpIntersection shadowZone;
	// Line 510, Address: 0x1c4730, Func Offset: 0
	// Line 524, Address: 0x1c4774, Func Offset: 0x44
	// Line 586, Address: 0x1c4780, Func Offset: 0x50
	// Line 566, Address: 0x1c4788, Func Offset: 0x58
	// Line 582, Address: 0x1c4790, Func Offset: 0x60
	// Line 524, Address: 0x1c4794, Func Offset: 0x64
	// Line 587, Address: 0x1c4798, Func Offset: 0x68
	// Line 586, Address: 0x1c479c, Func Offset: 0x6c
	// Line 587, Address: 0x1c47a4, Func Offset: 0x74
	// Line 566, Address: 0x1c47ac, Func Offset: 0x7c
	// Line 524, Address: 0x1c47b4, Func Offset: 0x84
	// Line 566, Address: 0x1c47b8, Func Offset: 0x88
	// Line 524, Address: 0x1c47c0, Func Offset: 0x90
	// Line 525, Address: 0x1c47c4, Func Offset: 0x94
	// Line 581, Address: 0x1c47c8, Func Offset: 0x98
	// Line 582, Address: 0x1c47d0, Func Offset: 0xa0
	// Line 583, Address: 0x1c47d4, Func Offset: 0xa4
	// Line 566, Address: 0x1c47dc, Func Offset: 0xac
	// Line 581, Address: 0x1c47e4, Func Offset: 0xb4
	// Line 526, Address: 0x1c47e8, Func Offset: 0xb8
	// Line 584, Address: 0x1c47ec, Func Offset: 0xbc
	// Line 581, Address: 0x1c47f0, Func Offset: 0xc0
	// Line 589, Address: 0x1c4800, Func Offset: 0xd0
	// Line 594, Address: 0x1c4804, Func Offset: 0xd4
	// Line 595, Address: 0x1c4808, Func Offset: 0xd8
	// Line 597, Address: 0x1c480c, Func Offset: 0xdc
	// Line 589, Address: 0x1c4810, Func Offset: 0xe0
	// Line 590, Address: 0x1c4824, Func Offset: 0xf4
	// Line 591, Address: 0x1c483c, Func Offset: 0x10c
	// Line 592, Address: 0x1c487c, Func Offset: 0x14c
	// Line 593, Address: 0x1c48bc, Func Offset: 0x18c
	// Line 594, Address: 0x1c48c0, Func Offset: 0x190
	// Line 595, Address: 0x1c48c4, Func Offset: 0x194
	// Line 597, Address: 0x1c48c8, Func Offset: 0x198
	// Line 598, Address: 0x1c48d8, Func Offset: 0x1a8
	// Line 603, Address: 0x1c4940, Func Offset: 0x210
	// Line 604, Address: 0x1c4950, Func Offset: 0x220
	// Line 605, Address: 0x1c495c, Func Offset: 0x22c
	// Line 606, Address: 0x1c4960, Func Offset: 0x230
	// Line 605, Address: 0x1c4970, Func Offset: 0x240
	// Line 606, Address: 0x1c4974, Func Offset: 0x244
	// Line 607, Address: 0x1c497c, Func Offset: 0x24c
	// Line 608, Address: 0x1c4990, Func Offset: 0x260
	// Line 610, Address: 0x1c4994, Func Offset: 0x264
	// Line 614, Address: 0x1c4998, Func Offset: 0x268
	// Line 615, Address: 0x1c49b0, Func Offset: 0x280
	// Line 617, Address: 0x1c49c0, Func Offset: 0x290
	// Line 616, Address: 0x1c49e0, Func Offset: 0x2b0
	// Line 617, Address: 0x1c49e4, Func Offset: 0x2b4
	// Line 618, Address: 0x1c49f4, Func Offset: 0x2c4
	// Line 619, Address: 0x1c4a04, Func Offset: 0x2d4
	// Line 620, Address: 0x1c4a08, Func Offset: 0x2d8
	// Line 625, Address: 0x1c4a10, Func Offset: 0x2e0
	// Line 626, Address: 0x1c4a18, Func Offset: 0x2e8
	// Line 628, Address: 0x1c4a2c, Func Offset: 0x2fc
	// Line 630, Address: 0x1c4a40, Func Offset: 0x310
	// Line 629, Address: 0x1c4a4c, Func Offset: 0x31c
	// Line 630, Address: 0x1c4a50, Func Offset: 0x320
	// Line 635, Address: 0x1c4a5c, Func Offset: 0x32c
	// Line 640, Address: 0x1c4a60, Func Offset: 0x330
	// Line 630, Address: 0x1c4a68, Func Offset: 0x338
	// Line 640, Address: 0x1c4a70, Func Offset: 0x340
	// Line 642, Address: 0x1c4a78, Func Offset: 0x348
	// Line 645, Address: 0x1c4ad0, Func Offset: 0x3a0
	// Line 646, Address: 0x1c4ae4, Func Offset: 0x3b4
	// Line 647, Address: 0x1c4b14, Func Offset: 0x3e4
	// Line 648, Address: 0x1c4b28, Func Offset: 0x3f8
	// Line 649, Address: 0x1c4b5c, Func Offset: 0x42c
	// Line 651, Address: 0x1c4b70, Func Offset: 0x440
	// Line 652, Address: 0x1c4b84, Func Offset: 0x454
	// Line 654, Address: 0x1c4b8c, Func Offset: 0x45c
	// Line 652, Address: 0x1c4b90, Func Offset: 0x460
	// Line 653, Address: 0x1c4b94, Func Offset: 0x464
	// Line 654, Address: 0x1c4b9c, Func Offset: 0x46c
	// Line 656, Address: 0x1c4bac, Func Offset: 0x47c
	// Line 659, Address: 0x1c4bb4, Func Offset: 0x484
	// Line 663, Address: 0x1c4bbc, Func Offset: 0x48c
	// Line 664, Address: 0x1c4bc4, Func Offset: 0x494
	// Line 682, Address: 0x1c4bcc, Func Offset: 0x49c
	// Line 664, Address: 0x1c4bd0, Func Offset: 0x4a0
	// Line 665, Address: 0x1c4be4, Func Offset: 0x4b4
	// Line 682, Address: 0x1c4be8, Func Offset: 0x4b8
	// Line 665, Address: 0x1c4bec, Func Offset: 0x4bc
	// Line 682, Address: 0x1c4bf0, Func Offset: 0x4c0
	// Line 684, Address: 0x1c4c28, Func Offset: 0x4f8
	// Func End, Address: 0x1c4c70, Func Offset: 0x540
}

// xShadowCameraUpdate__FPvPFPv_vP6_xVec3f
// Start address: 0x1c4c70
void xShadowCameraUpdate(void* model, void(*renderCB)(void*), _xVec3* center, float32 radius)
{
	// Line 407, Address: 0x1c4c70, Func Offset: 0
	// Line 414, Address: 0x1c4c90, Func Offset: 0x20
	// Line 415, Address: 0x1c4ce8, Func Offset: 0x78
	// Line 458, Address: 0x1c4d74, Func Offset: 0x104
	// Line 476, Address: 0x1c4d8c, Func Offset: 0x11c
	// Line 492, Address: 0x1c4d94, Func Offset: 0x124
	// Func End, Address: 0x1c4db8, Func Offset: 0x148
}

// xShadowCameraCreate__Fv
// Start address: 0x1c4dc0
int32 xShadowCameraCreate()
{
	// Line 379, Address: 0x1c4dc0, Func Offset: 0
	// Line 394, Address: 0x1c4dc8, Func Offset: 0x8
	// Line 401, Address: 0x1c4dd0, Func Offset: 0x10
	// Line 394, Address: 0x1c4dd4, Func Offset: 0x14
	// Line 401, Address: 0x1c4dd8, Func Offset: 0x18
	// Func End, Address: 0x1c4de0, Func Offset: 0x20
}

// xShadowSetLight__FP6_xVec3P6_xVec3f
// Start address: 0x1c4de0
void xShadowSetLight(_xVec3* target_pos, _xVec3* in_vec)
{
	RwMatrixTag* camMatrix;
	RwFrame* camFrame;
	_xMat4x3 matrix;
	_xVec3 zvec;
	// Line 350, Address: 0x1c4de0, Func Offset: 0
	// Line 353, Address: 0x1c4df4, Func Offset: 0x14
	// Line 356, Address: 0x1c4dfc, Func Offset: 0x1c
	// Line 358, Address: 0x1c4e08, Func Offset: 0x28
	// Line 360, Address: 0x1c4e0c, Func Offset: 0x2c
	// Line 362, Address: 0x1c4e10, Func Offset: 0x30
	// Line 358, Address: 0x1c4e18, Func Offset: 0x38
	// Line 360, Address: 0x1c4e2c, Func Offset: 0x4c
	// Line 361, Address: 0x1c4e30, Func Offset: 0x50
	// Line 362, Address: 0x1c4e34, Func Offset: 0x54
	// Line 366, Address: 0x1c4e3c, Func Offset: 0x5c
	// Line 369, Address: 0x1c4e44, Func Offset: 0x64
	// Line 372, Address: 0x1c4e4c, Func Offset: 0x6c
	// Line 373, Address: 0x1c4e54, Func Offset: 0x74
	// Func End, Address: 0x1c4e68, Func Offset: 0x88
}

// xShadowSetWorld__FP7RpWorld
// Start address: 0x1c4e70
void xShadowSetWorld(RpWorld* world)
{
	uint32 sceneID;
	// Line 308, Address: 0x1c4e70, Func Offset: 0
	// Line 309, Address: 0x1c4e7c, Func Offset: 0xc
	// Line 313, Address: 0x1c4e88, Func Offset: 0x18
	// Line 318, Address: 0x1c4e90, Func Offset: 0x20
	// Line 325, Address: 0x1c4e98, Func Offset: 0x28
	// Line 327, Address: 0x1c4ea0, Func Offset: 0x30
	// Line 336, Address: 0x1c50ac, Func Offset: 0x23c
	// Line 340, Address: 0x1c50b4, Func Offset: 0x244
	// Line 341, Address: 0x1c50c0, Func Offset: 0x250
	// Line 343, Address: 0x1c5108, Func Offset: 0x298
	// Line 345, Address: 0x1c510c, Func Offset: 0x29c
	// Func End, Address: 0x1c511c, Func Offset: 0x2ac
}

// SetupShadow__Fv
// Start address: 0x1c5120
int32 SetupShadow()
{
	int32 res;
	// Line 181, Address: 0x1c5120, Func Offset: 0
	// Line 192, Address: 0x1c5134, Func Offset: 0x14
	// Line 193, Address: 0x1c513c, Func Offset: 0x1c
	// Line 194, Address: 0x1c5140, Func Offset: 0x20
	// Line 209, Address: 0x1c515c, Func Offset: 0x3c
	// Line 210, Address: 0x1c51d4, Func Offset: 0xb4
	// Line 212, Address: 0x1c51dc, Func Offset: 0xbc
	// Line 229, Address: 0x1c51e4, Func Offset: 0xc4
	// Line 230, Address: 0x1c520c, Func Offset: 0xec
	// Line 232, Address: 0x1c5214, Func Offset: 0xf4
	// Line 235, Address: 0x1c521c, Func Offset: 0xfc
	// Line 258, Address: 0x1c5220, Func Offset: 0x100
	// Line 235, Address: 0x1c5224, Func Offset: 0x104
	// Line 259, Address: 0x1c5228, Func Offset: 0x108
	// Func End, Address: 0x1c5240, Func Offset: 0x120
}

