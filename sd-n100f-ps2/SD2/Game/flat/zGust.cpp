typedef struct _xEntFrame;
typedef struct RwTexture;
typedef struct _zGust;
typedef struct _xRot;
typedef struct xAnimTransition;
typedef struct zGustAsset;
typedef struct RpCollSector;
typedef struct _xEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwRaster;
typedef struct _tagEmitOffsetPoint;
typedef struct RwTexCoords;
typedef struct RxOutputSpec;
typedef struct _xScene;
typedef struct xAnimState;
typedef struct RpMeshHeader;
typedef enum RxClusterForcePresent;
typedef struct RwResEntry;
typedef struct RwTexDictionary;
typedef struct RpMaterial;
typedef struct p2EntAsset;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct xParGroup;
typedef struct _zParEmitter;
typedef struct _xEntCollis;
typedef struct RwFrame;
typedef struct RxPipeline;
typedef struct xSerial;
typedef struct RpAtomic;
typedef struct RxIoSpec;
typedef struct xModelInstance;
typedef struct RxClusterDefinition;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct xParCmdTex;
typedef struct _zParEmitterCustomSettings;
typedef struct zParEmitterAsset;
typedef struct RpWorldSector;
typedef struct RwRGBA;
typedef struct _xVec3;
typedef struct RpInterpolator;
typedef struct RxNodeMethods;
typedef struct rxReq;
typedef struct xAnimEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _xCollis;
typedef struct RpPolygon;
typedef struct RwV3d;
typedef struct RxNodeDefinition;
typedef struct xAnimActiveEffect;
typedef struct _tagEmitCircle;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct xBase;
typedef struct RpVertexNormal;
typedef struct _zVolume;
typedef struct RpMorphTarget;
typedef struct xAnimPlay;
typedef struct RwMatrixTag;
typedef struct RxCluster;
typedef struct _xSphere;
typedef struct rxHeapBlockHeader;
typedef struct p2LinkAsset;
typedef struct xAnimFile;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineCluster;
typedef struct _iCollis;
typedef struct xAnimTransitionList;
typedef struct _xCylinder;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef struct xMemPool;
typedef struct RxPacket;
typedef struct RpClump;
typedef struct _tagEmitSphere;
typedef struct iModelTag;
typedef struct xModelPool;
typedef enum RwTextureAddressMode;
typedef struct xSurface;
typedef enum RpWorldRenderOrder;
typedef struct zVolumeAsset;
typedef struct RxPipelineNode;
typedef struct _xBox;
typedef struct xAnimSingle;
typedef struct xQCData;
typedef struct zGustData;
typedef struct _xEnv;
typedef struct xFFX;
typedef struct RxPipelineNodeParam;
typedef struct RwObjectHasFrame;
typedef struct _xBBox;
typedef struct _tagEmitRect;
typedef struct _xEntShadow;
typedef struct RpWorld;
typedef struct RwRGBAReal;
typedef struct RpGeometry;
typedef struct RwLLLink;
typedef struct iEnv;
typedef struct RpMaterialList;
typedef struct xAnimTable;
typedef struct RxPipelineRequiresCluster;
typedef struct p2BaseAsset;
typedef struct _tagEmitLine;
typedef struct RpSector;
typedef struct RpLight;
typedef enum RwTextureFilterMode;
typedef struct _xMat4x3;
typedef enum RxClusterValid;
typedef struct RwObject;
typedef struct iShadowCache;
typedef struct xPar;
typedef struct _xQuat;
typedef struct xParCmdAsset;
typedef struct _tagEmitVolume;
typedef struct RwLinkList;
typedef struct RwBBox;
typedef struct _xBound;

typedef uint32(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_1)(RxPipelineNode*, RxPipeline*);
typedef int8*(*type_2)(uint32);
typedef void(*type_3)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_4)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_5)(_xEnt*, _xScene*, float32);
typedef void(*type_7)(RwResEntry*);
typedef void(*type_9)(_xEnt*);
typedef void(*type_13)(_xEnt*);
typedef void(*type_14)(void*, xParGroup*);
typedef void(*type_15)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_17)(_xEnt*, _xVec3*);
typedef uint32(*type_20)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef void(*type_24)(_xEnt*, _xVec3*);
typedef int32(*type_26)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_27)(xMemPool*, void*);
typedef RpClump*(*type_30)(RpClump*, void*);
typedef int32(*type_33)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_37)(uint32);
typedef int32(*type_40)(RxNodeDefinition*);
typedef int8*(*type_42)(xBase*);
typedef RpWorldSector*(*type_43)(RpWorldSector*);
typedef void(*type_45)(RxNodeDefinition*);
typedef RwObjectHasFrame*(*type_46)(RwObjectHasFrame*);
typedef int32(*type_49)(RxPipelineNode*);
typedef void(*type_53)(RxPipelineNode*);
typedef RpAtomic*(*type_56)(RpAtomic*);
typedef int32(*type_58)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_62)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);

typedef uint8 type_6[2];
typedef int8 type_8[32];
typedef uint8 type_10[2];
typedef uint8 type_11[3];
typedef int8 type_12[32];
typedef float32 type_16[2];
typedef float32 type_18[4];
typedef RwTexCoords* type_19[8];
typedef RwTexCoords* type_21[8];
typedef uint8 type_22[4];
typedef uint8 type_23[4];
typedef uint8 type_25[3];
typedef float32 type_28[4];
typedef _xCollis type_29[18];
typedef float32 type_31[4];
typedef float32 type_32[4];
typedef float32 type_34[4];
typedef _zGust* type_35[4];
typedef uint8 type_36[8];
typedef float32 type_38[4];
typedef uint8 type_39[2];
typedef uint8 type_41[8];
typedef uint8 type_44[8];
typedef uint8 type_47[8];
typedef uint8 type_48[4];
typedef uint8 type_50[4];
typedef uint8 type_51[3];
typedef uint8 type_52[3];
typedef _xVec3 type_54[2];
typedef uint8 type_55[3];
typedef _xQuat type_57[2];
typedef RpLight* type_59[2];
typedef RwFrame* type_60[2];
typedef uint8 type_61[2];
typedef RxCluster type_63[1];
typedef uint32 type_64[4];
typedef uint16 type_65[3];
typedef _xVec3 type_66[4];
typedef uint16 type_67[3];
typedef uint8 type_68[4];
typedef uint8 type_69[3];

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

struct _zGust : xBase
{
	uint32 flags;
	zGustAsset* asset;
	_zVolume* volume;
	_zVolume* fx_volume;
	float32 debris_timer;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct zGustAsset : p2BaseAsset
{
	uint32 flags;
	uint32 volumeID;
	uint32 effectID;
	_xVec3 vel;
	float32 fade;
	float32 partMod;
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct _tagEmitOffsetPoint
{
	_xVec3 offset;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct xSerial
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct rxReq
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct _zVolume : xBase
{
	zVolumeAsset* asset;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct _iCollis
{
	int32 unknown;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct _tagEmitSphere
{
	float32 radius;
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

enum RwTextureAddressMode
{
	rwTEXTUREADDRESSNATEXTUREADDRESS,
	rwTEXTUREADDRESSWRAP,
	rwTEXTUREADDRESSMIRROR,
	rwTEXTUREADDRESSCLAMP,
	rwTEXTUREADDRESSBORDER,
	rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct xSurface
{
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zVolumeAsset : p2BaseAsset
{
	uint32 flags;
	_xBound bound;
	float32 rot;
	float32 xpivot;
	float32 zpivot;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
};

struct zGustData
{
	uint32 gust_on;
	_zGust* g[4];
	float32 lerp[4];
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct xFFX
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _tagEmitRect
{
	float32 x_len;
	float32 z_len;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct _tagEmitLine
{
	_xVec3 pos1;
	_xVec3 pos2;
	float32 radius;
};

struct RpSector
{
	int32 type;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct xParCmdAsset
{
	uint32 type;
	uint8 enabled;
	uint8 mode;
	uint8 pad[2];
};

struct _tagEmitVolume
{
	uint32 emit_volumeID;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

_zGust* gusts;
uint16 ngusts;
_zParEmitter* sGustDustEmitter;
_zParEmitter* sGustDebrisEmitter;
int32(*zGustEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
uint32 gActiveHeap;

void zGustUpdateFX(float32 seconds);
void UpdateGustFX(_zGust* g, float32 seconds);
int32 zGustEventCB(xBase* to, uint32 toEvent);
void zGustLoad(_zGust* ent, xSerial* s);
void zGustSave(_zGust* ent, xSerial* s);
void zGustUpdateEnt(_xEnt* ent, float32 dt, void* gdata);
_zGust* zGustGetGust(uint16 n);
void zGustSetup();
void zGustInit();

// zGustUpdateFX__Ff
// Start address: 0x1a5db0
void zGustUpdateFX(float32 seconds)
{
	int32 i;
	// Line 506, Address: 0x1a5db0, Func Offset: 0
	// Line 507, Address: 0x1a5dd0, Func Offset: 0x20
	// Line 509, Address: 0x1a5de4, Func Offset: 0x34
	// Line 511, Address: 0x1a5dfc, Func Offset: 0x4c
	// Line 512, Address: 0x1a5e04, Func Offset: 0x54
	// Line 511, Address: 0x1a5e08, Func Offset: 0x58
	// Line 513, Address: 0x1a5e0c, Func Offset: 0x5c
	// Line 514, Address: 0x1a5e20, Func Offset: 0x70
	// Func End, Address: 0x1a5e40, Func Offset: 0x90
}

// UpdateGustFX__FP6_zGustf
// Start address: 0x1a5e40
void UpdateGustFX(_zGust* g, float32 seconds)
{
	int32 i;
	int32 vol_area;
	int32 total_debris;
	_zParEmitter* e;
	_zParEmitterCustomSettings info;
	_xBBox* box;
	// Line 407, Address: 0x1a5e40, Func Offset: 0
	// Line 414, Address: 0x1a5e68, Func Offset: 0x28
	// Line 418, Address: 0x1a5e84, Func Offset: 0x44
	// Line 419, Address: 0x1a5e8c, Func Offset: 0x4c
	// Line 430, Address: 0x1a5e9c, Func Offset: 0x5c
	// Line 431, Address: 0x1a5ec0, Func Offset: 0x80
	// Line 435, Address: 0x1a5ee8, Func Offset: 0xa8
	// Line 436, Address: 0x1a5ef4, Func Offset: 0xb4
	// Line 437, Address: 0x1a5efc, Func Offset: 0xbc
	// Line 441, Address: 0x1a5f04, Func Offset: 0xc4
	// Line 442, Address: 0x1a5f10, Func Offset: 0xd0
	// Line 443, Address: 0x1a5f18, Func Offset: 0xd8
	// Line 444, Address: 0x1a5f20, Func Offset: 0xe0
	// Line 446, Address: 0x1a5f24, Func Offset: 0xe4
	// Line 448, Address: 0x1a5f48, Func Offset: 0x108
	// Line 449, Address: 0x1a5f5c, Func Offset: 0x11c
	// Line 451, Address: 0x1a5f64, Func Offset: 0x124
	// Line 452, Address: 0x1a5f6c, Func Offset: 0x12c
	// Line 457, Address: 0x1a5f74, Func Offset: 0x134
	// Line 455, Address: 0x1a5f78, Func Offset: 0x138
	// Line 457, Address: 0x1a5f7c, Func Offset: 0x13c
	// Line 459, Address: 0x1a5f84, Func Offset: 0x144
	// Line 462, Address: 0x1a5f94, Func Offset: 0x154
	// Line 463, Address: 0x1a5f98, Func Offset: 0x158
	// Line 462, Address: 0x1a5fa0, Func Offset: 0x160
	// Line 463, Address: 0x1a5fa4, Func Offset: 0x164
	// Line 462, Address: 0x1a5fa8, Func Offset: 0x168
	// Line 463, Address: 0x1a5fac, Func Offset: 0x16c
	// Line 466, Address: 0x1a5fc0, Func Offset: 0x180
	// Line 467, Address: 0x1a5fe0, Func Offset: 0x1a0
	// Line 477, Address: 0x1a5ff4, Func Offset: 0x1b4
	// Line 471, Address: 0x1a5ff8, Func Offset: 0x1b8
	// Line 476, Address: 0x1a6000, Func Offset: 0x1c0
	// Line 467, Address: 0x1a6004, Func Offset: 0x1c4
	// Line 477, Address: 0x1a6008, Func Offset: 0x1c8
	// Line 467, Address: 0x1a6010, Func Offset: 0x1d0
	// Line 470, Address: 0x1a6018, Func Offset: 0x1d8
	// Line 471, Address: 0x1a601c, Func Offset: 0x1dc
	// Line 472, Address: 0x1a6020, Func Offset: 0x1e0
	// Line 476, Address: 0x1a6024, Func Offset: 0x1e4
	// Line 477, Address: 0x1a603c, Func Offset: 0x1fc
	// Line 478, Address: 0x1a6044, Func Offset: 0x204
	// Line 485, Address: 0x1a604c, Func Offset: 0x20c
	// Line 486, Address: 0x1a6054, Func Offset: 0x214
	// Line 487, Address: 0x1a6074, Func Offset: 0x234
	// Line 488, Address: 0x1a6090, Func Offset: 0x250
	// Line 491, Address: 0x1a609c, Func Offset: 0x25c
	// Line 494, Address: 0x1a60a4, Func Offset: 0x264
	// Line 488, Address: 0x1a60ac, Func Offset: 0x26c
	// Line 491, Address: 0x1a60bc, Func Offset: 0x27c
	// Line 492, Address: 0x1a60cc, Func Offset: 0x28c
	// Line 493, Address: 0x1a60dc, Func Offset: 0x29c
	// Line 494, Address: 0x1a60ec, Func Offset: 0x2ac
	// Line 495, Address: 0x1a60fc, Func Offset: 0x2bc
	// Line 496, Address: 0x1a6100, Func Offset: 0x2c0
	// Line 497, Address: 0x1a6104, Func Offset: 0x2c4
	// Line 496, Address: 0x1a610c, Func Offset: 0x2cc
	// Line 497, Address: 0x1a6110, Func Offset: 0x2d0
	// Line 496, Address: 0x1a6118, Func Offset: 0x2d8
	// Line 497, Address: 0x1a611c, Func Offset: 0x2dc
	// Line 496, Address: 0x1a6120, Func Offset: 0x2e0
	// Line 497, Address: 0x1a6124, Func Offset: 0x2e4
	// Line 498, Address: 0x1a612c, Func Offset: 0x2ec
	// Line 500, Address: 0x1a613c, Func Offset: 0x2fc
	// Line 501, Address: 0x1a6140, Func Offset: 0x300
	// Func End, Address: 0x1a616c, Func Offset: 0x32c
}

// zGustEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a6170
int32 zGustEventCB(xBase* to, uint32 toEvent)
{
	_zGust* g;
	// Line 375, Address: 0x1a6170, Func Offset: 0
	// Line 383, Address: 0x1a617c, Func Offset: 0xc
	// Line 386, Address: 0x1a61ac, Func Offset: 0x3c
	// Line 387, Address: 0x1a61c0, Func Offset: 0x50
	// Line 390, Address: 0x1a61c8, Func Offset: 0x58
	// Line 391, Address: 0x1a61d4, Func Offset: 0x64
	// Line 394, Address: 0x1a61dc, Func Offset: 0x6c
	// Line 395, Address: 0x1a61f0, Func Offset: 0x80
	// Line 398, Address: 0x1a61f8, Func Offset: 0x88
	// Line 402, Address: 0x1a6210, Func Offset: 0xa0
	// Line 401, Address: 0x1a6218, Func Offset: 0xa8
	// Line 402, Address: 0x1a621c, Func Offset: 0xac
	// Func End, Address: 0x1a6224, Func Offset: 0xb4
}

// zGustLoad__FP6_zGustP7xSerial
// Start address: 0x1a6230
void zGustLoad(_zGust* ent, xSerial* s)
{
	// Line 344, Address: 0x1a6230, Func Offset: 0
	// Func End, Address: 0x1a6238, Func Offset: 0x8
}

// zGustSave__FP6_zGustP7xSerial
// Start address: 0x1a6240
void zGustSave(_zGust* ent, xSerial* s)
{
	// Line 325, Address: 0x1a6240, Func Offset: 0
	// Func End, Address: 0x1a6248, Func Offset: 0x8
}

// zGustUpdateEnt__FP5_xEntP7_xScenefPv
// Start address: 0x1a6250
void zGustUpdateEnt(_xEnt* ent, float32 dt, void* gdata)
{
	_xVec3* gvel;
	float32 lerpinc;
	_xCollis coll;
	zGustData* data;
	uint32 minidx;
	uint32 j;
	uint32 i;
	// Line 180, Address: 0x1a6250, Func Offset: 0
	// Line 186, Address: 0x1a6278, Func Offset: 0x28
	// Line 194, Address: 0x1a628c, Func Offset: 0x3c
	// Line 198, Address: 0x1a6290, Func Offset: 0x40
	// Line 202, Address: 0x1a6294, Func Offset: 0x44
	// Line 205, Address: 0x1a62a4, Func Offset: 0x54
	// Line 211, Address: 0x1a62bc, Func Offset: 0x6c
	// Line 215, Address: 0x1a62d4, Func Offset: 0x84
	// Line 216, Address: 0x1a62e4, Func Offset: 0x94
	// Line 218, Address: 0x1a62f8, Func Offset: 0xa8
	// Line 220, Address: 0x1a6314, Func Offset: 0xc4
	// Line 222, Address: 0x1a6318, Func Offset: 0xc8
	// Line 228, Address: 0x1a6324, Func Offset: 0xd4
	// Line 229, Address: 0x1a6338, Func Offset: 0xe8
	// Line 230, Address: 0x1a6344, Func Offset: 0xf4
	// Line 231, Address: 0x1a6348, Func Offset: 0xf8
	// Line 230, Address: 0x1a634c, Func Offset: 0xfc
	// Line 231, Address: 0x1a6350, Func Offset: 0x100
	// Line 233, Address: 0x1a6354, Func Offset: 0x104
	// Line 234, Address: 0x1a635c, Func Offset: 0x10c
	// Line 236, Address: 0x1a6370, Func Offset: 0x120
	// Line 237, Address: 0x1a639c, Func Offset: 0x14c
	// Line 238, Address: 0x1a63a4, Func Offset: 0x154
	// Line 246, Address: 0x1a63ac, Func Offset: 0x15c
	// Line 248, Address: 0x1a63bc, Func Offset: 0x16c
	// Line 246, Address: 0x1a63c0, Func Offset: 0x170
	// Line 248, Address: 0x1a63c4, Func Offset: 0x174
	// Line 254, Address: 0x1a63dc, Func Offset: 0x18c
	// Line 258, Address: 0x1a63e8, Func Offset: 0x198
	// Line 263, Address: 0x1a63f8, Func Offset: 0x1a8
	// Line 264, Address: 0x1a6410, Func Offset: 0x1c0
	// Line 268, Address: 0x1a642c, Func Offset: 0x1dc
	// Line 273, Address: 0x1a6434, Func Offset: 0x1e4
	// Line 274, Address: 0x1a6440, Func Offset: 0x1f0
	// Line 277, Address: 0x1a645c, Func Offset: 0x20c
	// Line 278, Address: 0x1a6460, Func Offset: 0x210
	// Line 281, Address: 0x1a647c, Func Offset: 0x22c
	// Line 284, Address: 0x1a6484, Func Offset: 0x234
	// Line 285, Address: 0x1a6488, Func Offset: 0x238
	// Line 284, Address: 0x1a6490, Func Offset: 0x240
	// Line 285, Address: 0x1a6494, Func Offset: 0x244
	// Line 290, Address: 0x1a64a4, Func Offset: 0x254
	// Line 291, Address: 0x1a64a8, Func Offset: 0x258
	// Line 292, Address: 0x1a64ac, Func Offset: 0x25c
	// Line 293, Address: 0x1a64b0, Func Offset: 0x260
	// Line 296, Address: 0x1a64c0, Func Offset: 0x270
	// Line 297, Address: 0x1a64c4, Func Offset: 0x274
	// Line 300, Address: 0x1a64cc, Func Offset: 0x27c
	// Line 304, Address: 0x1a64d8, Func Offset: 0x288
	// Line 307, Address: 0x1a64e0, Func Offset: 0x290
	// Line 309, Address: 0x1a64e4, Func Offset: 0x294
	// Line 307, Address: 0x1a64e8, Func Offset: 0x298
	// Line 309, Address: 0x1a64ec, Func Offset: 0x29c
	// Line 310, Address: 0x1a64f8, Func Offset: 0x2a8
	// Line 309, Address: 0x1a64fc, Func Offset: 0x2ac
	// Line 310, Address: 0x1a6500, Func Offset: 0x2b0
	// Line 309, Address: 0x1a6504, Func Offset: 0x2b4
	// Line 310, Address: 0x1a6508, Func Offset: 0x2b8
	// Line 309, Address: 0x1a650c, Func Offset: 0x2bc
	// Line 310, Address: 0x1a6510, Func Offset: 0x2c0
	// Line 309, Address: 0x1a6514, Func Offset: 0x2c4
	// Line 310, Address: 0x1a6518, Func Offset: 0x2c8
	// Line 311, Address: 0x1a6538, Func Offset: 0x2e8
	// Line 312, Address: 0x1a6548, Func Offset: 0x2f8
	// Func End, Address: 0x1a6574, Func Offset: 0x324
}

// zGustGetGust__FUs
// Start address: 0x1a6580
_zGust* zGustGetGust(uint16 n)
{
	// Line 162, Address: 0x1a6580, Func Offset: 0
	// Line 167, Address: 0x1a65a0, Func Offset: 0x20
	// Func End, Address: 0x1a65a8, Func Offset: 0x28
}

// zGustSetup__Fv
// Start address: 0x1a65b0
void zGustSetup()
{
	uint16 i;
	// Line 101, Address: 0x1a65b0, Func Offset: 0
	// Line 103, Address: 0x1a65cc, Func Offset: 0x1c
	// Line 108, Address: 0x1a65e0, Func Offset: 0x30
	// Line 109, Address: 0x1a65e8, Func Offset: 0x38
	// Line 110, Address: 0x1a6610, Func Offset: 0x60
	// Line 109, Address: 0x1a6614, Func Offset: 0x64
	// Line 110, Address: 0x1a6618, Func Offset: 0x68
	// Line 112, Address: 0x1a6634, Func Offset: 0x84
	// Line 113, Address: 0x1a6648, Func Offset: 0x98
	// Line 114, Address: 0x1a6660, Func Offset: 0xb0
	// Func End, Address: 0x1a6680, Func Offset: 0xd0
}

// zGustInit__Fv
// Start address: 0x1a6680
void zGustInit()
{
	zGustAsset* asset;
	uint32 size;
	uint16 i;
	// Line 79, Address: 0x1a6680, Func Offset: 0
	// Line 80, Address: 0x1a6698, Func Offset: 0x18
	// Line 79, Address: 0x1a669c, Func Offset: 0x1c
	// Line 80, Address: 0x1a66a0, Func Offset: 0x20
	// Line 83, Address: 0x1a66b4, Func Offset: 0x34
	// Line 84, Address: 0x1a66c0, Func Offset: 0x40
	// Line 87, Address: 0x1a66e0, Func Offset: 0x60
	// Line 89, Address: 0x1a66ec, Func Offset: 0x6c
	// Line 92, Address: 0x1a66fc, Func Offset: 0x7c
	// Line 93, Address: 0x1a6754, Func Offset: 0xd4
	// Line 92, Address: 0x1a6758, Func Offset: 0xd8
	// Line 93, Address: 0x1a675c, Func Offset: 0xdc
	// Line 94, Address: 0x1a6774, Func Offset: 0xf4
	// Line 95, Address: 0x1a677c, Func Offset: 0xfc
	// Line 97, Address: 0x1a6780, Func Offset: 0x100
	// Func End, Address: 0x1a67a4, Func Offset: 0x124
}

