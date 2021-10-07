typedef struct _xScene;
typedef struct RpMeshHeader;
typedef struct xCutsceneData;
typedef struct RxPipelineNode;
typedef struct _xMat4x3;
typedef struct _xBox;
typedef struct rxHeapFreeBlock;
typedef struct xPar;
typedef struct RwTexture;
typedef struct RxPipeline;
typedef struct xAnimState;
typedef struct RxObjSpace3DVertex;
typedef struct RwRGBA;
typedef struct xParGroup;
typedef struct RwMatrixTag;
typedef struct _xEntFrame;
typedef struct _zEnt;
typedef struct zGlobals;
typedef struct RpWorldSector;
typedef struct xBase;
typedef enum RwCameraProjection;
typedef struct _zParGroup;
typedef struct _xEnv;
typedef struct RxClusterDefinition;
typedef struct RwLLLink;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineRequiresCluster;
typedef struct zPortalAsset;
typedef struct RwObjectHasFrame;
typedef struct _xVec3;
typedef struct xParCmdTex;
typedef struct RwRGBAReal;
typedef struct RwRaster;
typedef struct xCutsceneBreak;
typedef struct xAnimPlay;
typedef struct _tagxPad;
typedef struct xCutsceneTime;
typedef struct p2LinkAsset;
typedef struct RpWorld;
typedef struct zParEmitterAsset;
typedef struct zScene;
typedef struct xAnimFile;
typedef struct _tagxCamPath;
typedef struct xAnimTable;
typedef struct RpGeometry;
typedef struct _tagp2CamStaticAsset;
typedef struct _tagEmitLine;
typedef struct xModelPool;
typedef struct zAssetPickupTable;
typedef struct xAnimSingle;
typedef struct _tagxCam;
typedef struct RwV2d;
typedef struct xAnimEffect;
typedef struct RxPipelineCluster;
typedef struct _xEntShadow;
typedef struct rxHeapBlockHeader;
typedef struct RpAtomic;
typedef enum _tagRumbleType;
typedef struct RpVertexNormal;
typedef struct zParSysAsset;
typedef struct xAnimTransitionList;
typedef struct _zPortal;
typedef struct _xMat3x3;
typedef struct xModelInstance;
typedef struct RpMaterialList;
typedef enum RxClusterValid;
typedef struct RpMorphTarget;
typedef struct zPlayerStatic;
typedef struct _zCutsceneMgr;
typedef struct xParCmdAsset;
typedef struct iEnv;
typedef struct zParCmd;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct xParCmd;
typedef enum RwTextureFilterMode;
typedef struct zParSys;
typedef struct zCutsceneZbuffer;
typedef struct RwObject;
typedef struct RwResEntry;
typedef struct iShadowCache;
typedef struct RwV3d;
typedef struct _xEntDrive;
typedef struct RxNodeDefinition;
typedef struct _zPlatform;
typedef struct xMemPool;
typedef struct RwCamera;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct _tagCamInfo;
typedef struct RxPacket;
typedef struct _xEnt;
typedef struct p2EntAsset;
typedef struct RpLight;
typedef struct RpClump;
typedef struct _tagEmitVolume;
typedef struct RwPlane;
typedef struct RxColorUnion;
typedef struct RwFrame;
typedef struct xAnimActiveEffect;
typedef struct RpPolygon;
typedef struct RwLinkList;
typedef struct rxReq;
typedef struct _tagxCamFollow;
typedef struct tag_xFile;
typedef struct RpTriangle;
typedef struct _xBound;
typedef struct RwTexDictionary;
typedef struct sceCdlFILE;
typedef struct xCutsceneInfo;
typedef struct zCutsceneZbufferHack;
typedef struct p2EntHangableAsset;
typedef struct _xQuat;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxOutputSpec;
typedef enum RwFogType;
typedef enum RxClusterForcePresent;
typedef struct tag_iFile;
typedef struct RwFrustumPlane;
typedef struct RwTexCoords;
typedef struct _tagEmitOffsetPoint;
typedef struct _tagxCamPathAsset;
typedef struct xAnimTransition;
typedef struct RxClusterRef;
typedef struct RwBBox;
typedef enum RxNodeDefEditable;
typedef struct _xVec4;
typedef struct p2BaseAsset;
typedef struct _zEntHangable;
typedef struct _xCollis;
typedef struct _xEntCollis;
typedef struct RxIoSpec;
typedef struct RpCollSector;
typedef struct _tagxRumble;
typedef struct iFogParams;
typedef struct zCutsceneMgrAsset;
typedef struct _xRot;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct RxNodeMethods;
typedef struct _tagxCamShoulder;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xCutscene;
typedef struct RxHeap;
typedef struct _tagxCamFollowAsset;
typedef enum _tagPadState;
typedef struct xCamAsset;
typedef struct RxCluster;
typedef struct _tagEmitCircle;
typedef struct RwSurfaceProperties;
typedef struct RpInterpolator;
typedef struct _tagiPad;
typedef enum _tagCamType;
typedef struct zShaggy1Globals;
typedef enum rxEmbeddedPacketState;
typedef struct tagiRenderArrays;
typedef struct _tagxCamStatic;
typedef struct RwSphere;
typedef struct _tagPadAnalog;
typedef struct zCheckPoint;
typedef struct _tagEmitSphere;
typedef struct _iCollis;
typedef struct iModelTag;
typedef struct _xSphere;
typedef struct xFFX;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNodeParam;
typedef struct _tagxCamFrame;
typedef struct zGlobalGameStats;
typedef struct xQCData;
typedef struct _tagxCamShoulderAsset;
typedef enum RpWorldRenderOrder;
typedef struct _xCylinder;
typedef enum _tagTransType;
typedef struct _xBBox;
typedef struct _tagxCamStaticFollow;
typedef struct _tagEmitRect;
typedef struct zJumpParam;
typedef struct tagiRenderInput;

typedef int32(*type_1)(RxPipelineNode*);
typedef void(*type_4)(void*, xParGroup*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef void(*type_8)(RxPipelineNode*);
typedef RpWorldSector*(*type_11)(RpWorldSector*);
typedef int32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef uint32(*type_29)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_38)(RxNodeDefinition*);
typedef void(*type_41)(RxNodeDefinition*);
typedef uint32(*type_47)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_50)(RwCamera*);
typedef void(*type_51)(xMemPool*, void*);
typedef void(*type_54)(RwResEntry*);
typedef void(*type_59)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef void(*type_60)(int32);
typedef RwCamera*(*type_61)(RwCamera*);
typedef void(*type_70)(_xEnt*, _xScene*, float32);
typedef int32(*type_75)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_76)(_xEnt*);
typedef void(*type_82)(_xEnt*);
typedef uint32(*type_83)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_84)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef xBase*(*type_88)(uint32);
typedef void(*type_89)(_xEnt*, _xVec3*);
typedef int8*(*type_90)(xBase*);
typedef int8*(*type_92)(uint32);
typedef uint32(*type_93)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_103)(_xEnt*, _xVec3*);

typedef uint8 type_0[8];
typedef RxObjSpace3DVertex type_2[4];
typedef float32 type_3[4];
typedef float32 type_6[4];
typedef uint8 type_7[22];
typedef uint8 type_9[4];
typedef iModelTag type_10[4];
typedef uint8 type_12[2];
typedef uint8 type_13[22];
typedef uint8 type_14[4];
typedef uint8 type_15[3];
typedef int8 type_16[16];
typedef uint16 type_17[6];
typedef uint8 type_18[3];
typedef RxObjSpace3DVertex type_21[4];
typedef float32 type_22[256];
typedef RwRGBA type_23[8];
typedef RxCluster type_24[1];
typedef int8 type_26[128];
typedef int8 type_27[128][6];
typedef _xVec3 type_28[2];
typedef uint8 type_30[2];
typedef uint16 type_31[6];
typedef uint32 type_32[2];
typedef uint32 type_33[4];
typedef _xQuat type_35[2];
typedef float32 type_36[4];
typedef uint8 type_37[3];
typedef float32 type_39[4];
typedef float32 type_40[4];
typedef _xVec3 type_42[4];
typedef float32 type_43[4];
typedef int8 type_44[32];
typedef RpLight* type_45[2];
typedef float32 type_46[4];
typedef RwFrame* type_48[2];
typedef float32 type_49[4];
typedef uint8 type_52[3];
typedef float32 type_53[3];
typedef uint16 type_55[3];
typedef float32 type_56[3];
typedef uint8 type_57[4];
typedef uint16 type_58[3];
typedef uint8 type_62[2];
typedef zGlobalGameStats type_63[30];
typedef int8 type_64[16];
typedef zCutsceneZbuffer type_65[4];
typedef zGlobalGameStats type_66[13];
typedef _zEnt* type_67[10];
typedef uint8 type_68[8];
typedef uint32 type_69[1];
typedef zGlobalGameStats type_71[4];
typedef int8 type_72[128];
typedef int32 type_73[2];
typedef float32 type_74[0];
typedef int32 type_77[2];
typedef uint32 type_78[2];
typedef uint32 type_79[43];
typedef uint8 type_80[2];
typedef uint32 type_81[2];
typedef xBase* type_85[43];
typedef uint8 type_86[3];
typedef uint32 type_87[2];
typedef int8 type_91[16];
typedef int8 type_94[32];
typedef float32 type_95[4];
typedef int8 type_96[16];
typedef int8 type_97[32];
typedef RxObjSpace3DVertex type_98[4];
typedef RwTexCoords* type_99[8];
typedef float32 type_100[2];
typedef uint32 type_101[2];
typedef uint16 type_102[6];
typedef RwTexCoords* type_104[8];
typedef float32 type_105[15];
typedef uint16 type_106[960];
typedef float32 type_107[15];
typedef RxObjSpace3DVertex type_108[480];
typedef uint32 type_109[15];
typedef float32 type_110[480];
typedef _xCollis type_111[18];
typedef float32 type_112[4];
typedef RwFrustumPlane type_113[6];
typedef uint8 type_114[8];
typedef RwV3d type_115[8];
typedef uint8 type_116[8];
typedef _xVec4 type_117[8];
typedef uint32 type_118[4096];
typedef uint8 type_119[8];

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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float32 u;
	float32 v;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _zParGroup : xParGroup
{
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct zPortalAsset : p2BaseAsset
{
	uint32 assetCameraID;
	uint32 assetMarkerID;
	float32 ang;
	uint32 sceneID;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
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

struct _tagxCamPath
{
	uint32 assetID;
	float32 time_end;
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

struct _tagp2CamStaticAsset
{
	uint32 unused;
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct zAssetPickupTable
{
	uint32 Magic;
	uint32 Count;
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

struct RwV2d
{
	float32 x;
	float32 y;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _zPortal : xBase
{
	zPortalAsset* passet;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
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

struct zParCmd : xParCmd
{
	xParCmdAsset* tasset;
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

struct xParCmd
{
	uint32 flag;
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

struct zParSys : xBase
{
	zParSysAsset* tasset;
	uint32 cmdCount;
	zParCmd* cmd;
	zParSys* parent;
	_zParGroup* group;
	uint8 visible;
};

struct zCutsceneZbuffer
{
	float32 start;
	float32 end;
	float32 near;
	float32 far;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct _zPlatform
{
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct RwPlane
{
	RwV3d normal;
	float32 distance;
};

struct RxColorUnion
{
	union
	{
		RwRGBA preLitColor;
		RwRGBA color;
	};
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RwLinkList
{
	RwLLLink link;
};

struct rxReq
{
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

struct tag_xFile
{
	int8 relname[16];
	tag_iFile ps;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	sceCdlFILE file;
	void(*cb)(int32);
};

struct RwFrustumPlane
{
	RwPlane plane;
	uint8 closestX;
	uint8 closestY;
	uint8 closestZ;
	uint8 pad;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
};

struct _tagxCamPathAsset
{
	uint32 assetID;
	float32 time_end;
	float32 time_delay;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct _xVec4
{
	float32 x;
	float32 y;
	float32 z;
	float32 w;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float32 seconds;
	_tagxRumble* next;
	int16 active;
	uint16 fxflags;
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

struct zCutsceneMgrAsset : p2BaseAsset
{
	uint32 cutsceneAssetID;
	uint32 flags;
	float32 interpSpeed;
	float32 startTime[15];
	float32 endTime[15];
	uint32 emitID[15];
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct _tagxCamShoulder
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
	int32 state;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct _tagxCamFollowAsset
{
	float32 rotation;
	float32 distance;
	float32 height;
	float32 rubber_band;
	float32 start_speed;
	float32 end_speed;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct _tagiPad
{
	int32 port;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagiRenderArrays
{
	uint16 m_index[960];
	RxObjSpace3DVertex m_vertex[480];
	float32 m_vertexTZ[480];
};

struct _tagxCamStatic
{
	uint32 unused;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _tagPadAnalog
{
	int8 x;
	int8 y;
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

struct _iCollis
{
	int32 unknown;
};

struct iModelTag
{
	_xVec3 v;
	uint32 matidx;
	float32 wt[4];
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct xFFX
{
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct _tagxCamShoulderAsset
{
	float32 distance;
	float32 height;
	float32 realign_speed;
	float32 realign_delay;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _tagxCamStaticFollow
{
	float32 rubber_band;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct zJumpParam
{
	float32 PeakHeight;
	float32 TimeGravChange;
	float32 TimeHold;
	float32 ImpulseVel;
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

int32 gColorTableInit;
float32 gColorTable[256];
RpAtomic* sParAtomic;
RpClump* sParClump;
RpMaterial* sParMaterial;
RwFrame* sParClumpFrame;
RwFrame* sParAtomicFrame;
RwTexture* sParTexture;
float32 sParEmitterWidth;
float32 sParEmitterLength;
float32 sParEmitterAngle;
float32 sParSize;
float32 sParGrowth;
float32 sParAspectRatio;
float32 sParFlightTime;
float32 sParMinSpeed;
float32 sParMaxSpeed;
float32 sParDamping;
RwV3d sParForce;
int32 sParStartColor;
int32 sParStartAlpha;
int32 sParEndColor;
int32 sParEndAlpha;
RwRGBA sParColors[8];
int32 sParAdded;
tagiRenderArrays gRenderArr;
tagiRenderInput gRenderBuffer;
uint32 ourGlobals[4096];
zGlobals globals;
float32 cosSinPolynomial[0];

void iParMgrRenderParSys_Flat(void* data, xParGroup* ps);
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps);
void iParMgrRenderParSys_Static();
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps);
void iRenderTrianglesImmediate(void* vertices, int32 vertexCount, uint16* indices, int32 indexCount);
void iRenderPushFlat(xPar* p, xParCmdTex* tex);
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex);
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps);
void iParMgrRender();
void iParMgrUpdate();
void iParMgrInit();

// iParMgrRenderParSys_Flat__FPvP9xParGroup
// Start address: 0x1af280
void iParMgrRenderParSys_Flat(void* data, xParGroup* ps)
{
	RwRaster* raster;
	RwTexture* texture;
	xPar* idx;
	// Line 1620, Address: 0x1af280, Func Offset: 0
	// Line 1624, Address: 0x1af294, Func Offset: 0x14
	// Line 1622, Address: 0x1af29c, Func Offset: 0x1c
	// Line 1624, Address: 0x1af2a0, Func Offset: 0x20
	// Line 1627, Address: 0x1af428, Func Offset: 0x1a8
	// Line 1628, Address: 0x1af438, Func Offset: 0x1b8
	// Line 1630, Address: 0x1af440, Func Offset: 0x1c0
	// Line 1631, Address: 0x1af444, Func Offset: 0x1c4
	// Line 1633, Address: 0x1af44c, Func Offset: 0x1cc
	// Line 1643, Address: 0x1af454, Func Offset: 0x1d4
	// Line 1646, Address: 0x1af45c, Func Offset: 0x1dc
	// Line 1649, Address: 0x1af468, Func Offset: 0x1e8
	// Line 1650, Address: 0x1af46c, Func Offset: 0x1ec
	// Line 1652, Address: 0x1af478, Func Offset: 0x1f8
	// Line 1653, Address: 0x1af4a4, Func Offset: 0x224
	// Func End, Address: 0x1af4bc, Func Offset: 0x23c
}

// iParMgrRenderParSys_Ground__FPvP9xParGroup
// Start address: 0x1af4c0
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps)
{
	uint16* dst;
	float32 v2;
	float32 v1;
	float32 u2;
	float32 u1;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 angz;
	float32 angy;
	float32 angx;
	_xMat3x3 groundmat;
	uint8 a;
	uint8 b;
	uint8 g;
	uint8 r;
	float32 size;
	void* vertices;
	xParCmdTex* tex;
	RwRaster* raster;
	RwTexture* texture;
	xPar* idx;
	uint16 i3d[6];
	RxObjSpace3DVertex v3d[4];
	// Line 1402, Address: 0x1af4c0, Func Offset: 0
	// Line 1405, Address: 0x1af4e4, Func Offset: 0x24
	// Line 1402, Address: 0x1af4e8, Func Offset: 0x28
	// Line 1405, Address: 0x1af4ec, Func Offset: 0x2c
	// Line 1403, Address: 0x1af4f4, Func Offset: 0x34
	// Line 1405, Address: 0x1af4f8, Func Offset: 0x38
	// Line 1408, Address: 0x1af680, Func Offset: 0x1c0
	// Line 1409, Address: 0x1af690, Func Offset: 0x1d0
	// Line 1411, Address: 0x1af698, Func Offset: 0x1d8
	// Line 1412, Address: 0x1af69c, Func Offset: 0x1dc
	// Line 1414, Address: 0x1af6a4, Func Offset: 0x1e4
	// Line 1419, Address: 0x1af6ac, Func Offset: 0x1ec
	// Line 1422, Address: 0x1af6c0, Func Offset: 0x200
	// Line 1446, Address: 0x1af6dc, Func Offset: 0x21c
	// Line 1452, Address: 0x1af708, Func Offset: 0x248
	// Line 1455, Address: 0x1af730, Func Offset: 0x270
	// Line 1456, Address: 0x1af744, Func Offset: 0x284
	// Line 1459, Address: 0x1af748, Func Offset: 0x288
	// Line 1463, Address: 0x1af75c, Func Offset: 0x29c
	// Line 1478, Address: 0x1af784, Func Offset: 0x2c4
	// Line 1466, Address: 0x1af788, Func Offset: 0x2c8
	// Line 1467, Address: 0x1af78c, Func Offset: 0x2cc
	// Line 1468, Address: 0x1af790, Func Offset: 0x2d0
	// Line 1477, Address: 0x1af794, Func Offset: 0x2d4
	// Line 1469, Address: 0x1af798, Func Offset: 0x2d8
	// Line 1477, Address: 0x1af79c, Func Offset: 0x2dc
	// Line 1478, Address: 0x1af7a0, Func Offset: 0x2e0
	// Line 1480, Address: 0x1af7a8, Func Offset: 0x2e8
	// Line 1482, Address: 0x1af7f8, Func Offset: 0x338
	// Line 1484, Address: 0x1af804, Func Offset: 0x344
	// Line 1485, Address: 0x1af854, Func Offset: 0x394
	// Line 1486, Address: 0x1af858, Func Offset: 0x398
	// Line 1488, Address: 0x1af864, Func Offset: 0x3a4
	// Line 1489, Address: 0x1af8b4, Func Offset: 0x3f4
	// Line 1492, Address: 0x1af8b8, Func Offset: 0x3f8
	// Line 1493, Address: 0x1af8f0, Func Offset: 0x430
	// Line 1494, Address: 0x1af928, Func Offset: 0x468
	// Line 1496, Address: 0x1af958, Func Offset: 0x498
	// Line 1497, Address: 0x1af9a0, Func Offset: 0x4e0
	// Line 1498, Address: 0x1af9c0, Func Offset: 0x500
	// Line 1499, Address: 0x1afa20, Func Offset: 0x560
	// Line 1500, Address: 0x1afa60, Func Offset: 0x5a0
	// Line 1507, Address: 0x1afa74, Func Offset: 0x5b4
	// Line 1508, Address: 0x1afa78, Func Offset: 0x5b8
	// Line 1509, Address: 0x1afa7c, Func Offset: 0x5bc
	// Line 1512, Address: 0x1afa80, Func Offset: 0x5c0
	// Line 1513, Address: 0x1afa84, Func Offset: 0x5c4
	// Line 1514, Address: 0x1afa88, Func Offset: 0x5c8
	// Line 1517, Address: 0x1afa8c, Func Offset: 0x5cc
	// Line 1518, Address: 0x1afa90, Func Offset: 0x5d0
	// Line 1519, Address: 0x1afa94, Func Offset: 0x5d4
	// Line 1507, Address: 0x1afa98, Func Offset: 0x5d8
	// Line 1542, Address: 0x1afa9c, Func Offset: 0x5dc
	// Line 1543, Address: 0x1afaac, Func Offset: 0x5ec
	// Line 1544, Address: 0x1afabc, Func Offset: 0x5fc
	// Line 1545, Address: 0x1afacc, Func Offset: 0x60c
	// Line 1508, Address: 0x1afad8, Func Offset: 0x618
	// Line 1545, Address: 0x1afadc, Func Offset: 0x61c
	// Line 1509, Address: 0x1afae0, Func Offset: 0x620
	// Line 1512, Address: 0x1afae4, Func Offset: 0x624
	// Line 1513, Address: 0x1afae8, Func Offset: 0x628
	// Line 1514, Address: 0x1afaec, Func Offset: 0x62c
	// Line 1523, Address: 0x1afaf0, Func Offset: 0x630
	// Line 1528, Address: 0x1afaf4, Func Offset: 0x634
	// Line 1523, Address: 0x1afaf8, Func Offset: 0x638
	// Line 1547, Address: 0x1afafc, Func Offset: 0x63c
	// Line 1550, Address: 0x1afb00, Func Offset: 0x640
	// Line 1524, Address: 0x1afb04, Func Offset: 0x644
	// Line 1529, Address: 0x1afb08, Func Offset: 0x648
	// Line 1524, Address: 0x1afb0c, Func Offset: 0x64c
	// Line 1547, Address: 0x1afb10, Func Offset: 0x650
	// Line 1550, Address: 0x1afb14, Func Offset: 0x654
	// Line 1525, Address: 0x1afb18, Func Offset: 0x658
	// Line 1530, Address: 0x1afb1c, Func Offset: 0x65c
	// Line 1525, Address: 0x1afb20, Func Offset: 0x660
	// Line 1547, Address: 0x1afb24, Func Offset: 0x664
	// Line 1550, Address: 0x1afb28, Func Offset: 0x668
	// Line 1528, Address: 0x1afb2c, Func Offset: 0x66c
	// Line 1548, Address: 0x1afb30, Func Offset: 0x670
	// Line 1529, Address: 0x1afb34, Func Offset: 0x674
	// Line 1548, Address: 0x1afb38, Func Offset: 0x678
	// Line 1530, Address: 0x1afb3c, Func Offset: 0x67c
	// Line 1549, Address: 0x1afb40, Func Offset: 0x680
	// Line 1548, Address: 0x1afb44, Func Offset: 0x684
	// Line 1549, Address: 0x1afb48, Func Offset: 0x688
	// Line 1550, Address: 0x1afb5c, Func Offset: 0x69c
	// Line 1552, Address: 0x1afb64, Func Offset: 0x6a4
	// Line 1557, Address: 0x1afb6c, Func Offset: 0x6ac
	// Line 1558, Address: 0x1afba4, Func Offset: 0x6e4
	// Line 1557, Address: 0x1afba8, Func Offset: 0x6e8
	// Line 1558, Address: 0x1afbac, Func Offset: 0x6ec
	// Line 1560, Address: 0x1afbdc, Func Offset: 0x71c
	// Line 1558, Address: 0x1afbe8, Func Offset: 0x728
	// Line 1560, Address: 0x1afbec, Func Offset: 0x72c
	// Line 1558, Address: 0x1afbf0, Func Offset: 0x730
	// Line 1561, Address: 0x1afbf4, Func Offset: 0x734
	// Line 1560, Address: 0x1afbfc, Func Offset: 0x73c
	// Line 1563, Address: 0x1afc00, Func Offset: 0x740
	// Line 1560, Address: 0x1afc04, Func Offset: 0x744
	// Line 1558, Address: 0x1afc08, Func Offset: 0x748
	// Line 1561, Address: 0x1afc10, Func Offset: 0x750
	// Line 1563, Address: 0x1afc18, Func Offset: 0x758
	// Line 1561, Address: 0x1afc1c, Func Offset: 0x75c
	// Line 1564, Address: 0x1afc20, Func Offset: 0x760
	// Line 1561, Address: 0x1afc24, Func Offset: 0x764
	// Line 1564, Address: 0x1afc2c, Func Offset: 0x76c
	// Line 1565, Address: 0x1afc30, Func Offset: 0x770
	// Line 1566, Address: 0x1afc38, Func Offset: 0x778
	// Line 1568, Address: 0x1afc3c, Func Offset: 0x77c
	// Line 1571, Address: 0x1afc44, Func Offset: 0x784
	// Line 1572, Address: 0x1afc4c, Func Offset: 0x78c
	// Line 1573, Address: 0x1afc58, Func Offset: 0x798
	// Line 1574, Address: 0x1afc60, Func Offset: 0x7a0
	// Line 1583, Address: 0x1afc68, Func Offset: 0x7a8
	// Line 1588, Address: 0x1afc70, Func Offset: 0x7b0
	// Line 1592, Address: 0x1afc78, Func Offset: 0x7b8
	// Line 1583, Address: 0x1afc7c, Func Offset: 0x7bc
	// Line 1588, Address: 0x1afc84, Func Offset: 0x7c4
	// Line 1592, Address: 0x1afcdc, Func Offset: 0x81c
	// Line 1597, Address: 0x1afcf8, Func Offset: 0x838
	// Line 1598, Address: 0x1afd04, Func Offset: 0x844
	// Line 1602, Address: 0x1afd10, Func Offset: 0x850
	// Line 1603, Address: 0x1afd14, Func Offset: 0x854
	// Line 1608, Address: 0x1afd20, Func Offset: 0x860
	// Line 1609, Address: 0x1afd4c, Func Offset: 0x88c
	// Func End, Address: 0x1afd78, Func Offset: 0x8b8
}

// iParMgrRenderParSys_Static__FPvP9xParGroup
// Start address: 0x1afd80
void iParMgrRenderParSys_Static()
{
	// Line 1391, Address: 0x1afd80, Func Offset: 0
	// Func End, Address: 0x1afd88, Func Offset: 0x8
}

// iParMgrRenderParSys_QuadStreak__FPvP9xParGroup
// Start address: 0x1afd90
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps)
{
	RwRaster* raster;
	RwTexture* texture;
	xPar* idx;
	// Line 1343, Address: 0x1afd90, Func Offset: 0
	// Line 1347, Address: 0x1afda4, Func Offset: 0x14
	// Line 1345, Address: 0x1afdac, Func Offset: 0x1c
	// Line 1347, Address: 0x1afdb0, Func Offset: 0x20
	// Line 1350, Address: 0x1aff38, Func Offset: 0x1a8
	// Line 1351, Address: 0x1aff48, Func Offset: 0x1b8
	// Line 1353, Address: 0x1aff50, Func Offset: 0x1c0
	// Line 1354, Address: 0x1aff54, Func Offset: 0x1c4
	// Line 1356, Address: 0x1aff5c, Func Offset: 0x1cc
	// Line 1358, Address: 0x1aff64, Func Offset: 0x1d4
	// Line 1361, Address: 0x1aff6c, Func Offset: 0x1dc
	// Line 1370, Address: 0x1aff74, Func Offset: 0x1e4
	// Line 1372, Address: 0x1aff7c, Func Offset: 0x1ec
	// Line 1375, Address: 0x1aff88, Func Offset: 0x1f8
	// Line 1376, Address: 0x1aff8c, Func Offset: 0x1fc
	// Line 1378, Address: 0x1aff98, Func Offset: 0x208
	// Line 1379, Address: 0x1affc4, Func Offset: 0x234
	// Func End, Address: 0x1affdc, Func Offset: 0x24c
}

// iParMgrRenderParSys_InvStreak__FPvP9xParGroup
// Start address: 0x1affe0
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps)
{
	RxObjSpace3DVertex* v3d;
	RwRaster* raster;
	RwTexture* texture;
	xPar* idx;
	// Line 1187, Address: 0x1affe0, Func Offset: 0
	// Line 1192, Address: 0x1afff4, Func Offset: 0x14
	// Line 1187, Address: 0x1afff8, Func Offset: 0x18
	// Line 1192, Address: 0x1afffc, Func Offset: 0x1c
	// Line 1195, Address: 0x1b018c, Func Offset: 0x1ac
	// Line 1196, Address: 0x1b019c, Func Offset: 0x1bc
	// Line 1198, Address: 0x1b01a4, Func Offset: 0x1c4
	// Line 1199, Address: 0x1b01a8, Func Offset: 0x1c8
	// Line 1201, Address: 0x1b01b0, Func Offset: 0x1d0
	// Line 1203, Address: 0x1b01b8, Func Offset: 0x1d8
	// Line 1206, Address: 0x1b01c0, Func Offset: 0x1e0
	// Line 1214, Address: 0x1b01c8, Func Offset: 0x1e8
	// Line 1217, Address: 0x1b01dc, Func Offset: 0x1fc
	// Line 1218, Address: 0x1b01e0, Func Offset: 0x200
	// Line 1227, Address: 0x1b01e4, Func Offset: 0x204
	// Line 1253, Address: 0x1b01f4, Func Offset: 0x214
	// Line 1254, Address: 0x1b01f8, Func Offset: 0x218
	// Line 1255, Address: 0x1b01fc, Func Offset: 0x21c
	// Line 1256, Address: 0x1b0204, Func Offset: 0x224
	// Line 1257, Address: 0x1b0208, Func Offset: 0x228
	// Line 1258, Address: 0x1b020c, Func Offset: 0x22c
	// Line 1259, Address: 0x1b0210, Func Offset: 0x230
	// Line 1260, Address: 0x1b0214, Func Offset: 0x234
	// Line 1261, Address: 0x1b0218, Func Offset: 0x238
	// Line 1262, Address: 0x1b021c, Func Offset: 0x23c
	// Line 1263, Address: 0x1b0220, Func Offset: 0x240
	// Line 1264, Address: 0x1b0224, Func Offset: 0x244
	// Line 1265, Address: 0x1b0228, Func Offset: 0x248
	// Line 1266, Address: 0x1b022c, Func Offset: 0x24c
	// Line 1267, Address: 0x1b0230, Func Offset: 0x250
	// Line 1268, Address: 0x1b0234, Func Offset: 0x254
	// Line 1269, Address: 0x1b0238, Func Offset: 0x258
	// Line 1270, Address: 0x1b023c, Func Offset: 0x25c
	// Line 1271, Address: 0x1b0240, Func Offset: 0x260
	// Line 1272, Address: 0x1b0244, Func Offset: 0x264
	// Line 1273, Address: 0x1b0248, Func Offset: 0x268
	// Line 1274, Address: 0x1b024c, Func Offset: 0x26c
	// Line 1276, Address: 0x1b0254, Func Offset: 0x274
	// Line 1277, Address: 0x1b0258, Func Offset: 0x278
	// Line 1278, Address: 0x1b025c, Func Offset: 0x27c
	// Line 1279, Address: 0x1b0260, Func Offset: 0x280
	// Line 1280, Address: 0x1b0264, Func Offset: 0x284
	// Line 1281, Address: 0x1b0268, Func Offset: 0x288
	// Line 1282, Address: 0x1b026c, Func Offset: 0x28c
	// Line 1283, Address: 0x1b0270, Func Offset: 0x290
	// Line 1284, Address: 0x1b0274, Func Offset: 0x294
	// Line 1285, Address: 0x1b0278, Func Offset: 0x298
	// Line 1286, Address: 0x1b027c, Func Offset: 0x29c
	// Line 1287, Address: 0x1b0280, Func Offset: 0x2a0
	// Line 1288, Address: 0x1b0284, Func Offset: 0x2a4
	// Line 1289, Address: 0x1b0288, Func Offset: 0x2a8
	// Line 1290, Address: 0x1b028c, Func Offset: 0x2ac
	// Line 1291, Address: 0x1b0290, Func Offset: 0x2b0
	// Line 1292, Address: 0x1b0294, Func Offset: 0x2b4
	// Line 1293, Address: 0x1b0298, Func Offset: 0x2b8
	// Line 1294, Address: 0x1b029c, Func Offset: 0x2bc
	// Line 1295, Address: 0x1b02a0, Func Offset: 0x2c0
	// Line 1296, Address: 0x1b02a4, Func Offset: 0x2c4
	// Line 1300, Address: 0x1b02a8, Func Offset: 0x2c8
	// Line 1301, Address: 0x1b02b8, Func Offset: 0x2d8
	// Line 1302, Address: 0x1b02c0, Func Offset: 0x2e0
	// Line 1305, Address: 0x1b02c8, Func Offset: 0x2e8
	// Line 1309, Address: 0x1b02d4, Func Offset: 0x2f4
	// Line 1312, Address: 0x1b02e8, Func Offset: 0x308
	// Line 1313, Address: 0x1b0310, Func Offset: 0x330
	// Line 1316, Address: 0x1b0314, Func Offset: 0x334
	// Line 1319, Address: 0x1b0328, Func Offset: 0x348
	// Line 1320, Address: 0x1b032c, Func Offset: 0x34c
	// Line 1327, Address: 0x1b0330, Func Offset: 0x350
	// Line 1328, Address: 0x1b0334, Func Offset: 0x354
	// Line 1330, Address: 0x1b0340, Func Offset: 0x360
	// Line 1332, Address: 0x1b036c, Func Offset: 0x38c
	// Func End, Address: 0x1b0388, Func Offset: 0x3a8
}

// iParMgrRenderParSys_Streak__FPvP9xParGroup
// Start address: 0x1b0390
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps)
{
	RxObjSpace3DVertex* v3d;
	RwRaster* raster;
	RwTexture* texture;
	xPar* idx;
	// Line 975, Address: 0x1b0390, Func Offset: 0
	// Line 979, Address: 0x1b03a4, Func Offset: 0x14
	// Line 975, Address: 0x1b03a8, Func Offset: 0x18
	// Line 979, Address: 0x1b03ac, Func Offset: 0x1c
	// Line 982, Address: 0x1b053c, Func Offset: 0x1ac
	// Line 983, Address: 0x1b054c, Func Offset: 0x1bc
	// Line 985, Address: 0x1b0554, Func Offset: 0x1c4
	// Line 986, Address: 0x1b0558, Func Offset: 0x1c8
	// Line 988, Address: 0x1b0560, Func Offset: 0x1d0
	// Line 990, Address: 0x1b0568, Func Offset: 0x1d8
	// Line 993, Address: 0x1b0570, Func Offset: 0x1e0
	// Line 1002, Address: 0x1b0578, Func Offset: 0x1e8
	// Line 1005, Address: 0x1b058c, Func Offset: 0x1fc
	// Line 1006, Address: 0x1b0590, Func Offset: 0x200
	// Line 1015, Address: 0x1b0594, Func Offset: 0x204
	// Line 1042, Address: 0x1b05a4, Func Offset: 0x214
	// Line 1043, Address: 0x1b05a8, Func Offset: 0x218
	// Line 1044, Address: 0x1b05ac, Func Offset: 0x21c
	// Line 1045, Address: 0x1b05b4, Func Offset: 0x224
	// Line 1046, Address: 0x1b05b8, Func Offset: 0x228
	// Line 1047, Address: 0x1b05bc, Func Offset: 0x22c
	// Line 1048, Address: 0x1b05c0, Func Offset: 0x230
	// Line 1049, Address: 0x1b05c4, Func Offset: 0x234
	// Line 1050, Address: 0x1b05c8, Func Offset: 0x238
	// Line 1051, Address: 0x1b05cc, Func Offset: 0x23c
	// Line 1052, Address: 0x1b05d0, Func Offset: 0x240
	// Line 1053, Address: 0x1b05d4, Func Offset: 0x244
	// Line 1054, Address: 0x1b05d8, Func Offset: 0x248
	// Line 1055, Address: 0x1b05dc, Func Offset: 0x24c
	// Line 1056, Address: 0x1b05e0, Func Offset: 0x250
	// Line 1057, Address: 0x1b05e4, Func Offset: 0x254
	// Line 1058, Address: 0x1b05e8, Func Offset: 0x258
	// Line 1059, Address: 0x1b05ec, Func Offset: 0x25c
	// Line 1060, Address: 0x1b05f0, Func Offset: 0x260
	// Line 1061, Address: 0x1b05f4, Func Offset: 0x264
	// Line 1062, Address: 0x1b05f8, Func Offset: 0x268
	// Line 1063, Address: 0x1b05fc, Func Offset: 0x26c
	// Line 1065, Address: 0x1b0604, Func Offset: 0x274
	// Line 1066, Address: 0x1b0608, Func Offset: 0x278
	// Line 1067, Address: 0x1b060c, Func Offset: 0x27c
	// Line 1068, Address: 0x1b0610, Func Offset: 0x280
	// Line 1069, Address: 0x1b0614, Func Offset: 0x284
	// Line 1070, Address: 0x1b0618, Func Offset: 0x288
	// Line 1071, Address: 0x1b061c, Func Offset: 0x28c
	// Line 1072, Address: 0x1b0620, Func Offset: 0x290
	// Line 1073, Address: 0x1b0624, Func Offset: 0x294
	// Line 1074, Address: 0x1b0628, Func Offset: 0x298
	// Line 1075, Address: 0x1b062c, Func Offset: 0x29c
	// Line 1076, Address: 0x1b0630, Func Offset: 0x2a0
	// Line 1077, Address: 0x1b0634, Func Offset: 0x2a4
	// Line 1078, Address: 0x1b0638, Func Offset: 0x2a8
	// Line 1079, Address: 0x1b063c, Func Offset: 0x2ac
	// Line 1080, Address: 0x1b0640, Func Offset: 0x2b0
	// Line 1081, Address: 0x1b0644, Func Offset: 0x2b4
	// Line 1082, Address: 0x1b0648, Func Offset: 0x2b8
	// Line 1083, Address: 0x1b064c, Func Offset: 0x2bc
	// Line 1084, Address: 0x1b0650, Func Offset: 0x2c0
	// Line 1085, Address: 0x1b0654, Func Offset: 0x2c4
	// Line 1140, Address: 0x1b0658, Func Offset: 0x2c8
	// Line 1141, Address: 0x1b0668, Func Offset: 0x2d8
	// Line 1142, Address: 0x1b0670, Func Offset: 0x2e0
	// Line 1145, Address: 0x1b0678, Func Offset: 0x2e8
	// Line 1149, Address: 0x1b0684, Func Offset: 0x2f4
	// Line 1152, Address: 0x1b0698, Func Offset: 0x308
	// Line 1153, Address: 0x1b06c0, Func Offset: 0x330
	// Line 1157, Address: 0x1b06c4, Func Offset: 0x334
	// Line 1160, Address: 0x1b06d8, Func Offset: 0x348
	// Line 1161, Address: 0x1b06dc, Func Offset: 0x34c
	// Line 1169, Address: 0x1b06e0, Func Offset: 0x350
	// Line 1170, Address: 0x1b06e4, Func Offset: 0x354
	// Line 1172, Address: 0x1b06f0, Func Offset: 0x360
	// Line 1173, Address: 0x1b071c, Func Offset: 0x38c
	// Func End, Address: 0x1b0738, Func Offset: 0x3a8
}

// iRenderTrianglesImmediate__FiiPviPUsi
// Start address: 0x1b0740
void iRenderTrianglesImmediate(void* vertices, int32 vertexCount, uint16* indices, int32 indexCount)
{
	// Line 950, Address: 0x1b0740, Func Offset: 0
	// Line 955, Address: 0x1b0750, Func Offset: 0x10
	// Line 957, Address: 0x1b0774, Func Offset: 0x34
	// Line 958, Address: 0x1b077c, Func Offset: 0x3c
	// Line 959, Address: 0x1b078c, Func Offset: 0x4c
	// Line 960, Address: 0x1b0794, Func Offset: 0x54
	// Line 962, Address: 0x1b079c, Func Offset: 0x5c
	// Line 964, Address: 0x1b07a4, Func Offset: 0x64
	// Func End, Address: 0x1b07b8, Func Offset: 0x78
}

// iRenderPushFlat__FP4xParP10xParCmdTex
// Start address: 0x1b07c0
void iRenderPushFlat(xPar* p, xParCmdTex* tex)
{
	uint16* dst;
	float32 v2;
	float32 v1;
	float32 u2;
	float32 u1;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 yaw;
	_xMat3x3 groundmat;
	float32 size;
	uint8 a;
	uint8 b;
	uint8 g;
	uint8 r;
	uint16* indices;
	void* vertices;
	uint16 i3d[6];
	RxObjSpace3DVertex v3d[4];
	// Line 797, Address: 0x1b07c0, Func Offset: 0
	// Line 800, Address: 0x1b07e4, Func Offset: 0x24
	// Line 797, Address: 0x1b07e8, Func Offset: 0x28
	// Line 800, Address: 0x1b07ec, Func Offset: 0x2c
	// Line 797, Address: 0x1b07f0, Func Offset: 0x30
	// Line 801, Address: 0x1b07f4, Func Offset: 0x34
	// Line 807, Address: 0x1b07fc, Func Offset: 0x3c
	// Line 797, Address: 0x1b0800, Func Offset: 0x40
	// Line 807, Address: 0x1b0804, Func Offset: 0x44
	// Line 808, Address: 0x1b0820, Func Offset: 0x60
	// Line 810, Address: 0x1b0848, Func Offset: 0x88
	// Line 811, Address: 0x1b085c, Func Offset: 0x9c
	// Line 820, Address: 0x1b0884, Func Offset: 0xc4
	// Line 815, Address: 0x1b0890, Func Offset: 0xd0
	// Line 825, Address: 0x1b0894, Func Offset: 0xd4
	// Line 816, Address: 0x1b0898, Func Offset: 0xd8
	// Line 817, Address: 0x1b089c, Func Offset: 0xdc
	// Line 818, Address: 0x1b08a0, Func Offset: 0xe0
	// Line 824, Address: 0x1b08a4, Func Offset: 0xe4
	// Line 825, Address: 0x1b08a8, Func Offset: 0xe8
	// Line 827, Address: 0x1b08b0, Func Offset: 0xf0
	// Line 829, Address: 0x1b0900, Func Offset: 0x140
	// Line 838, Address: 0x1b0910, Func Offset: 0x150
	// Line 833, Address: 0x1b0914, Func Offset: 0x154
	// Line 835, Address: 0x1b0918, Func Offset: 0x158
	// Line 840, Address: 0x1b091c, Func Offset: 0x15c
	// Line 843, Address: 0x1b0920, Func Offset: 0x160
	// Line 844, Address: 0x1b0924, Func Offset: 0x164
	// Line 838, Address: 0x1b0928, Func Offset: 0x168
	// Line 845, Address: 0x1b092c, Func Offset: 0x16c
	// Line 840, Address: 0x1b0930, Func Offset: 0x170
	// Line 868, Address: 0x1b0934, Func Offset: 0x174
	// Line 869, Address: 0x1b0944, Func Offset: 0x184
	// Line 870, Address: 0x1b0954, Func Offset: 0x194
	// Line 871, Address: 0x1b0964, Func Offset: 0x1a4
	// Line 849, Address: 0x1b0970, Func Offset: 0x1b0
	// Line 871, Address: 0x1b0974, Func Offset: 0x1b4
	// Line 854, Address: 0x1b0978, Func Offset: 0x1b8
	// Line 851, Address: 0x1b097c, Func Offset: 0x1bc
	// Line 833, Address: 0x1b0980, Func Offset: 0x1c0
	// Line 849, Address: 0x1b0984, Func Offset: 0x1c4
	// Line 873, Address: 0x1b0988, Func Offset: 0x1c8
	// Line 835, Address: 0x1b098c, Func Offset: 0x1cc
	// Line 873, Address: 0x1b0990, Func Offset: 0x1d0
	// Line 856, Address: 0x1b0994, Func Offset: 0x1d4
	// Line 851, Address: 0x1b0998, Func Offset: 0x1d8
	// Line 873, Address: 0x1b099c, Func Offset: 0x1dc
	// Line 876, Address: 0x1b09a0, Func Offset: 0x1e0
	// Line 854, Address: 0x1b09a4, Func Offset: 0x1e4
	// Line 874, Address: 0x1b09a8, Func Offset: 0x1e8
	// Line 876, Address: 0x1b09ac, Func Offset: 0x1ec
	// Line 874, Address: 0x1b09b0, Func Offset: 0x1f0
	// Line 856, Address: 0x1b09b4, Func Offset: 0x1f4
	// Line 875, Address: 0x1b09b8, Func Offset: 0x1f8
	// Line 874, Address: 0x1b09bc, Func Offset: 0x1fc
	// Line 875, Address: 0x1b09c0, Func Offset: 0x200
	// Line 876, Address: 0x1b09d0, Func Offset: 0x210
	// Line 878, Address: 0x1b09d8, Func Offset: 0x218
	// Line 883, Address: 0x1b09e0, Func Offset: 0x220
	// Line 884, Address: 0x1b0a18, Func Offset: 0x258
	// Line 883, Address: 0x1b0a1c, Func Offset: 0x25c
	// Line 884, Address: 0x1b0a20, Func Offset: 0x260
	// Line 886, Address: 0x1b0a50, Func Offset: 0x290
	// Line 884, Address: 0x1b0a5c, Func Offset: 0x29c
	// Line 886, Address: 0x1b0a60, Func Offset: 0x2a0
	// Line 884, Address: 0x1b0a64, Func Offset: 0x2a4
	// Line 887, Address: 0x1b0a68, Func Offset: 0x2a8
	// Line 886, Address: 0x1b0a70, Func Offset: 0x2b0
	// Line 889, Address: 0x1b0a74, Func Offset: 0x2b4
	// Line 886, Address: 0x1b0a78, Func Offset: 0x2b8
	// Line 884, Address: 0x1b0a7c, Func Offset: 0x2bc
	// Line 887, Address: 0x1b0a84, Func Offset: 0x2c4
	// Line 889, Address: 0x1b0a8c, Func Offset: 0x2cc
	// Line 887, Address: 0x1b0a90, Func Offset: 0x2d0
	// Line 890, Address: 0x1b0a94, Func Offset: 0x2d4
	// Line 891, Address: 0x1b0a9c, Func Offset: 0x2dc
	// Line 887, Address: 0x1b0aa0, Func Offset: 0x2e0
	// Line 891, Address: 0x1b0aa8, Func Offset: 0x2e8
	// Line 892, Address: 0x1b0aac, Func Offset: 0x2ec
	// Line 894, Address: 0x1b0ab0, Func Offset: 0x2f0
	// Line 897, Address: 0x1b0ab8, Func Offset: 0x2f8
	// Line 898, Address: 0x1b0ac0, Func Offset: 0x300
	// Line 899, Address: 0x1b0acc, Func Offset: 0x30c
	// Line 900, Address: 0x1b0ad4, Func Offset: 0x314
	// Line 909, Address: 0x1b0adc, Func Offset: 0x31c
	// Line 914, Address: 0x1b0ae4, Func Offset: 0x324
	// Line 918, Address: 0x1b0aec, Func Offset: 0x32c
	// Line 909, Address: 0x1b0af0, Func Offset: 0x330
	// Line 914, Address: 0x1b0af8, Func Offset: 0x338
	// Line 918, Address: 0x1b0b50, Func Offset: 0x390
	// Line 923, Address: 0x1b0b6c, Func Offset: 0x3ac
	// Line 924, Address: 0x1b0b78, Func Offset: 0x3b8
	// Line 925, Address: 0x1b0b84, Func Offset: 0x3c4
	// Func End, Address: 0x1b0bb8, Func Offset: 0x3f8
}

// iRenderPushQuadStreak__FP4xParP10xParCmdTex
// Start address: 0x1b0bc0
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex)
{
	uint16* dst;
	float32 v2;
	float32 v1;
	float32 u2;
	float32 u1;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float32 size;
	uint8 a;
	uint8 b;
	uint8 g;
	uint8 r;
	uint16* indices;
	void* vertices;
	uint16 i3d[6];
	RxObjSpace3DVertex v3d[4];
	// Line 661, Address: 0x1b0bc0, Func Offset: 0
	// Line 664, Address: 0x1b0bd4, Func Offset: 0x14
	// Line 661, Address: 0x1b0bd8, Func Offset: 0x18
	// Line 664, Address: 0x1b0bdc, Func Offset: 0x1c
	// Line 661, Address: 0x1b0be0, Func Offset: 0x20
	// Line 665, Address: 0x1b0be4, Func Offset: 0x24
	// Line 672, Address: 0x1b0bec, Func Offset: 0x2c
	// Line 673, Address: 0x1b0c0c, Func Offset: 0x4c
	// Line 675, Address: 0x1b0c34, Func Offset: 0x74
	// Line 676, Address: 0x1b0c48, Func Offset: 0x88
	// Line 686, Address: 0x1b0c70, Func Offset: 0xb0
	// Line 687, Address: 0x1b0c74, Func Offset: 0xb4
	// Line 688, Address: 0x1b0c78, Func Offset: 0xb8
	// Line 689, Address: 0x1b0c7c, Func Offset: 0xbc
	// Line 694, Address: 0x1b0c80, Func Offset: 0xc0
	// Line 695, Address: 0x1b0c84, Func Offset: 0xc4
	// Line 696, Address: 0x1b0c88, Func Offset: 0xc8
	// Line 687, Address: 0x1b0c8c, Func Offset: 0xcc
	// Line 680, Address: 0x1b0c90, Func Offset: 0xd0
	// Line 681, Address: 0x1b0c94, Func Offset: 0xd4
	// Line 682, Address: 0x1b0c98, Func Offset: 0xd8
	// Line 683, Address: 0x1b0c9c, Func Offset: 0xdc
	// Line 688, Address: 0x1b0ca0, Func Offset: 0xe0
	// Line 705, Address: 0x1b0ca4, Func Offset: 0xe4
	// Line 706, Address: 0x1b0ca8, Func Offset: 0xe8
	// Line 705, Address: 0x1b0cac, Func Offset: 0xec
	// Line 707, Address: 0x1b0cb0, Func Offset: 0xf0
	// Line 689, Address: 0x1b0cb4, Func Offset: 0xf4
	// Line 705, Address: 0x1b0cb8, Func Offset: 0xf8
	// Line 736, Address: 0x1b0cbc, Func Offset: 0xfc
	// Line 705, Address: 0x1b0cc8, Func Offset: 0x108
	// Line 736, Address: 0x1b0ccc, Func Offset: 0x10c
	// Line 737, Address: 0x1b0cd0, Func Offset: 0x110
	// Line 706, Address: 0x1b0cdc, Func Offset: 0x11c
	// Line 737, Address: 0x1b0ce0, Func Offset: 0x120
	// Line 738, Address: 0x1b0ce4, Func Offset: 0x124
	// Line 707, Address: 0x1b0cf0, Func Offset: 0x130
	// Line 738, Address: 0x1b0cf4, Func Offset: 0x134
	// Line 739, Address: 0x1b0cf8, Func Offset: 0x138
	// Line 705, Address: 0x1b0d04, Func Offset: 0x144
	// Line 739, Address: 0x1b0d08, Func Offset: 0x148
	// Line 699, Address: 0x1b0d0c, Func Offset: 0x14c
	// Line 710, Address: 0x1b0d10, Func Offset: 0x150
	// Line 706, Address: 0x1b0d14, Func Offset: 0x154
	// Line 700, Address: 0x1b0d18, Func Offset: 0x158
	// Line 711, Address: 0x1b0d1c, Func Offset: 0x15c
	// Line 707, Address: 0x1b0d20, Func Offset: 0x160
	// Line 701, Address: 0x1b0d24, Func Offset: 0x164
	// Line 712, Address: 0x1b0d28, Func Offset: 0x168
	// Line 716, Address: 0x1b0d2c, Func Offset: 0x16c
	// Line 717, Address: 0x1b0d30, Func Offset: 0x170
	// Line 741, Address: 0x1b0d34, Func Offset: 0x174
	// Line 718, Address: 0x1b0d38, Func Offset: 0x178
	// Line 741, Address: 0x1b0d3c, Func Offset: 0x17c
	// Line 721, Address: 0x1b0d40, Func Offset: 0x180
	// Line 741, Address: 0x1b0d44, Func Offset: 0x184
	// Line 722, Address: 0x1b0d48, Func Offset: 0x188
	// Line 742, Address: 0x1b0d4c, Func Offset: 0x18c
	// Line 723, Address: 0x1b0d50, Func Offset: 0x190
	// Line 742, Address: 0x1b0d54, Func Offset: 0x194
	// Line 726, Address: 0x1b0d58, Func Offset: 0x198
	// Line 742, Address: 0x1b0d5c, Func Offset: 0x19c
	// Line 727, Address: 0x1b0d60, Func Offset: 0x1a0
	// Line 743, Address: 0x1b0d64, Func Offset: 0x1a4
	// Line 728, Address: 0x1b0d68, Func Offset: 0x1a8
	// Line 743, Address: 0x1b0d6c, Func Offset: 0x1ac
	// Line 731, Address: 0x1b0d70, Func Offset: 0x1b0
	// Line 743, Address: 0x1b0d74, Func Offset: 0x1b4
	// Line 732, Address: 0x1b0d78, Func Offset: 0x1b8
	// Line 744, Address: 0x1b0d7c, Func Offset: 0x1bc
	// Line 733, Address: 0x1b0d80, Func Offset: 0x1c0
	// Line 744, Address: 0x1b0d84, Func Offset: 0x1c4
	// Line 746, Address: 0x1b0d88, Func Offset: 0x1c8
	// Line 751, Address: 0x1b0d90, Func Offset: 0x1d0
	// Line 752, Address: 0x1b0dc8, Func Offset: 0x208
	// Line 751, Address: 0x1b0dcc, Func Offset: 0x20c
	// Line 752, Address: 0x1b0dd0, Func Offset: 0x210
	// Line 754, Address: 0x1b0e00, Func Offset: 0x240
	// Line 752, Address: 0x1b0e0c, Func Offset: 0x24c
	// Line 754, Address: 0x1b0e10, Func Offset: 0x250
	// Line 752, Address: 0x1b0e14, Func Offset: 0x254
	// Line 755, Address: 0x1b0e18, Func Offset: 0x258
	// Line 754, Address: 0x1b0e20, Func Offset: 0x260
	// Line 757, Address: 0x1b0e24, Func Offset: 0x264
	// Line 754, Address: 0x1b0e28, Func Offset: 0x268
	// Line 752, Address: 0x1b0e2c, Func Offset: 0x26c
	// Line 755, Address: 0x1b0e34, Func Offset: 0x274
	// Line 757, Address: 0x1b0e48, Func Offset: 0x288
	// Line 758, Address: 0x1b0e4c, Func Offset: 0x28c
	// Line 759, Address: 0x1b0e54, Func Offset: 0x294
	// Line 760, Address: 0x1b0e5c, Func Offset: 0x29c
	// Line 762, Address: 0x1b0e60, Func Offset: 0x2a0
	// Line 765, Address: 0x1b0e68, Func Offset: 0x2a8
	// Line 766, Address: 0x1b0e74, Func Offset: 0x2b4
	// Line 767, Address: 0x1b0e7c, Func Offset: 0x2bc
	// Line 768, Address: 0x1b0e84, Func Offset: 0x2c4
	// Line 776, Address: 0x1b0e8c, Func Offset: 0x2cc
	// Line 781, Address: 0x1b0e94, Func Offset: 0x2d4
	// Line 785, Address: 0x1b0e9c, Func Offset: 0x2dc
	// Line 776, Address: 0x1b0ea0, Func Offset: 0x2e0
	// Line 781, Address: 0x1b0ea8, Func Offset: 0x2e8
	// Line 785, Address: 0x1b0f00, Func Offset: 0x340
	// Line 790, Address: 0x1b0f1c, Func Offset: 0x35c
	// Line 791, Address: 0x1b0f28, Func Offset: 0x368
	// Line 792, Address: 0x1b0f34, Func Offset: 0x374
	// Func End, Address: 0x1b0f54, Func Offset: 0x394
}

// iParMgrRenderParSys_Sprite__FPvP9xParGroup
// Start address: 0x1b0f60
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps)
{
	float32 v2;
	float32 v1;
	float32 u2;
	float32 u1;
	xPar* p;
	xParCmdTex* tex;
	RxObjSpace3DVertex* v3d;
	uint16* i3d;
	int32 vertexCount;
	int32 indexCount;
	RwRaster* raster;
	RwTexture* texture;
	zParSys* s;
	xPar* idx;
	// Line 378, Address: 0x1b0f60, Func Offset: 0
	// Line 379, Address: 0x1b0f78, Func Offset: 0x18
	// Line 381, Address: 0x1b0f7c, Func Offset: 0x1c
	// Line 384, Address: 0x1b11bc, Func Offset: 0x25c
	// Line 385, Address: 0x1b11cc, Func Offset: 0x26c
	// Line 387, Address: 0x1b11d4, Func Offset: 0x274
	// Line 388, Address: 0x1b11d8, Func Offset: 0x278
	// Line 390, Address: 0x1b11e0, Func Offset: 0x280
	// Line 401, Address: 0x1b11e8, Func Offset: 0x288
	// Line 399, Address: 0x1b11ec, Func Offset: 0x28c
	// Line 405, Address: 0x1b11f0, Func Offset: 0x290
	// Line 397, Address: 0x1b11f4, Func Offset: 0x294
	// Line 398, Address: 0x1b11f8, Func Offset: 0x298
	// Line 405, Address: 0x1b11fc, Func Offset: 0x29c
	// Line 399, Address: 0x1b1200, Func Offset: 0x2a0
	// Line 400, Address: 0x1b1204, Func Offset: 0x2a4
	// Line 405, Address: 0x1b1210, Func Offset: 0x2b0
	// Line 408, Address: 0x1b1220, Func Offset: 0x2c0
	// Line 409, Address: 0x1b1230, Func Offset: 0x2d0
	// Line 410, Address: 0x1b1234, Func Offset: 0x2d4
	// Line 411, Address: 0x1b1238, Func Offset: 0x2d8
	// Line 412, Address: 0x1b123c, Func Offset: 0x2dc
	// Line 413, Address: 0x1b1240, Func Offset: 0x2e0
	// Line 419, Address: 0x1b1244, Func Offset: 0x2e4
	// Line 423, Address: 0x1b124c, Func Offset: 0x2ec
	// Line 444, Address: 0x1b1254, Func Offset: 0x2f4
	// Line 445, Address: 0x1b1258, Func Offset: 0x2f8
	// Line 446, Address: 0x1b125c, Func Offset: 0x2fc
	// Line 447, Address: 0x1b1260, Func Offset: 0x300
	// Line 448, Address: 0x1b1264, Func Offset: 0x304
	// Line 449, Address: 0x1b1268, Func Offset: 0x308
	// Line 450, Address: 0x1b126c, Func Offset: 0x30c
	// Line 452, Address: 0x1b1274, Func Offset: 0x314
	// Line 454, Address: 0x1b1278, Func Offset: 0x318
	// Line 455, Address: 0x1b127c, Func Offset: 0x31c
	// Line 456, Address: 0x1b1280, Func Offset: 0x320
	// Line 457, Address: 0x1b1284, Func Offset: 0x324
	// Line 459, Address: 0x1b128c, Func Offset: 0x32c
	// Line 460, Address: 0x1b1290, Func Offset: 0x330
	// Line 461, Address: 0x1b1294, Func Offset: 0x334
	// Line 462, Address: 0x1b1298, Func Offset: 0x338
	// Line 463, Address: 0x1b129c, Func Offset: 0x33c
	// Line 464, Address: 0x1b12a0, Func Offset: 0x340
	// Line 465, Address: 0x1b12a4, Func Offset: 0x344
	// Line 466, Address: 0x1b12a8, Func Offset: 0x348
	// Line 467, Address: 0x1b12ac, Func Offset: 0x34c
	// Line 468, Address: 0x1b12b0, Func Offset: 0x350
	// Line 469, Address: 0x1b12b4, Func Offset: 0x354
	// Line 470, Address: 0x1b12b8, Func Offset: 0x358
	// Line 471, Address: 0x1b12bc, Func Offset: 0x35c
	// Line 472, Address: 0x1b12c0, Func Offset: 0x360
	// Line 473, Address: 0x1b12c4, Func Offset: 0x364
	// Line 474, Address: 0x1b12c8, Func Offset: 0x368
	// Line 475, Address: 0x1b12cc, Func Offset: 0x36c
	// Line 476, Address: 0x1b12d0, Func Offset: 0x370
	// Line 477, Address: 0x1b12d4, Func Offset: 0x374
	// Line 478, Address: 0x1b12d8, Func Offset: 0x378
	// Line 479, Address: 0x1b12dc, Func Offset: 0x37c
	// Line 480, Address: 0x1b12e0, Func Offset: 0x380
	// Line 481, Address: 0x1b12e4, Func Offset: 0x384
	// Line 482, Address: 0x1b12e8, Func Offset: 0x388
	// Line 483, Address: 0x1b12ec, Func Offset: 0x38c
	// Line 484, Address: 0x1b12f0, Func Offset: 0x390
	// Line 485, Address: 0x1b12f4, Func Offset: 0x394
	// Line 537, Address: 0x1b12f8, Func Offset: 0x398
	// Line 542, Address: 0x1b1300, Func Offset: 0x3a0
	// Line 543, Address: 0x1b1338, Func Offset: 0x3d8
	// Line 542, Address: 0x1b133c, Func Offset: 0x3dc
	// Line 543, Address: 0x1b1340, Func Offset: 0x3e0
	// Line 545, Address: 0x1b1374, Func Offset: 0x414
	// Line 546, Address: 0x1b1378, Func Offset: 0x418
	// Line 543, Address: 0x1b137c, Func Offset: 0x41c
	// Line 545, Address: 0x1b1380, Func Offset: 0x420
	// Line 543, Address: 0x1b1388, Func Offset: 0x428
	// Line 545, Address: 0x1b138c, Func Offset: 0x42c
	// Line 546, Address: 0x1b1390, Func Offset: 0x430
	// Line 543, Address: 0x1b1394, Func Offset: 0x434
	// Line 548, Address: 0x1b1398, Func Offset: 0x438
	// Line 545, Address: 0x1b139c, Func Offset: 0x43c
	// Line 546, Address: 0x1b13a0, Func Offset: 0x440
	// Line 545, Address: 0x1b13a4, Func Offset: 0x444
	// Line 548, Address: 0x1b13a8, Func Offset: 0x448
	// Line 546, Address: 0x1b13ac, Func Offset: 0x44c
	// Line 545, Address: 0x1b13b0, Func Offset: 0x450
	// Line 546, Address: 0x1b13b4, Func Offset: 0x454
	// Line 545, Address: 0x1b13b8, Func Offset: 0x458
	// Line 546, Address: 0x1b13bc, Func Offset: 0x45c
	// Line 549, Address: 0x1b13c0, Func Offset: 0x460
	// Line 550, Address: 0x1b13c8, Func Offset: 0x468
	// Line 551, Address: 0x1b13d0, Func Offset: 0x470
	// Line 553, Address: 0x1b13d4, Func Offset: 0x474
	// Line 556, Address: 0x1b13dc, Func Offset: 0x47c
	// Line 557, Address: 0x1b13e4, Func Offset: 0x484
	// Line 558, Address: 0x1b13f0, Func Offset: 0x490
	// Line 559, Address: 0x1b13f8, Func Offset: 0x498
	// Line 566, Address: 0x1b1400, Func Offset: 0x4a0
	// Line 576, Address: 0x1b1420, Func Offset: 0x4c0
	// Line 566, Address: 0x1b1424, Func Offset: 0x4c4
	// Line 581, Address: 0x1b1428, Func Offset: 0x4c8
	// Line 575, Address: 0x1b142c, Func Offset: 0x4cc
	// Line 577, Address: 0x1b1430, Func Offset: 0x4d0
	// Line 581, Address: 0x1b1434, Func Offset: 0x4d4
	// Line 585, Address: 0x1b1448, Func Offset: 0x4e8
	// Line 586, Address: 0x1b1450, Func Offset: 0x4f0
	// Line 587, Address: 0x1b1458, Func Offset: 0x4f8
	// Line 588, Address: 0x1b1460, Func Offset: 0x500
	// Line 592, Address: 0x1b1468, Func Offset: 0x508
	// Line 598, Address: 0x1b14ac, Func Offset: 0x54c
	// Line 592, Address: 0x1b14b0, Func Offset: 0x550
	// Line 593, Address: 0x1b14b4, Func Offset: 0x554
	// Line 594, Address: 0x1b14b8, Func Offset: 0x558
	// Line 598, Address: 0x1b14bc, Func Offset: 0x55c
	// Line 599, Address: 0x1b14d0, Func Offset: 0x570
	// Line 600, Address: 0x1b14e0, Func Offset: 0x580
	// Line 601, Address: 0x1b14e4, Func Offset: 0x584
	// Line 602, Address: 0x1b14e8, Func Offset: 0x588
	// Line 603, Address: 0x1b14ec, Func Offset: 0x58c
	// Line 604, Address: 0x1b14f0, Func Offset: 0x590
	// Line 608, Address: 0x1b14f4, Func Offset: 0x594
	// Line 611, Address: 0x1b14f8, Func Offset: 0x598
	// Line 614, Address: 0x1b1500, Func Offset: 0x5a0
	// Line 615, Address: 0x1b1508, Func Offset: 0x5a8
	// Line 619, Address: 0x1b1510, Func Offset: 0x5b0
	// Line 620, Address: 0x1b155c, Func Offset: 0x5fc
	// Func End, Address: 0x1b1578, Func Offset: 0x618
}

// iParMgrRender__Fv
// Start address: 0x1b1580
void iParMgrRender()
{
	// Line 215, Address: 0x1b1580, Func Offset: 0
	// Func End, Address: 0x1b1588, Func Offset: 0x8
}

// iParMgrUpdate__Ff
// Start address: 0x1b1590
void iParMgrUpdate()
{
	// Line 177, Address: 0x1b1590, Func Offset: 0
	// Func End, Address: 0x1b1598, Func Offset: 0x8
}

// iParMgrInit__Fv
// Start address: 0x1b15a0
void iParMgrInit()
{
	int32 i;
	// Line 133, Address: 0x1b15a0, Func Offset: 0
	// Line 137, Address: 0x1b15d8, Func Offset: 0x38
	// Line 140, Address: 0x1b15e8, Func Offset: 0x48
	// Line 141, Address: 0x1b15f0, Func Offset: 0x50
	// Line 143, Address: 0x1b16b8, Func Offset: 0x118
	// Line 147, Address: 0x1b16c0, Func Offset: 0x120
	// Func End, Address: 0x1b16c8, Func Offset: 0x128
}

