typedef struct iEnv;
typedef struct _xScene;
typedef struct RpGeometry;
typedef struct p2BaseAsset;
typedef struct rxReq;
typedef struct xAnimState;
typedef struct _xMovePoint;
typedef struct RpVertexNormal;
typedef struct RpWorld;
typedef struct _xEnt;
typedef struct RwTexDictionary;
typedef struct RpAtomic;
typedef struct RpMorphTarget;
typedef struct RwTexCoords;
typedef struct RwResEntry;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpSector;
typedef struct _xVec3;
typedef struct xSerial;
typedef struct _xEntCollis;
typedef struct RxOutputSpec;
typedef enum RxClusterForcePresent;
typedef struct RpLight;
typedef struct xModelInstance;
typedef struct RwLLLink;
typedef struct RwBBox;
typedef struct RxClusterRef;
typedef struct RwFrame;
typedef struct RwV3d;
typedef enum RxNodeDefEditable;
typedef struct _xRot;
typedef struct xAnimEffect;
typedef struct RpClump;
typedef struct RxIoSpec;
typedef struct xCoef3;
typedef struct _xCollis;
typedef struct RxClusterDefinition;
typedef struct RpMaterialList;
typedef struct RpPolygon;
typedef struct RwTexture;
typedef struct rxHeapFreeBlock;
typedef struct xAnimActiveEffect;
typedef struct _xEntFrame;
typedef struct RpMaterial;
typedef struct RwRaster;
typedef struct _xEnv;
typedef struct RxNodeMethods;
typedef struct xBase;
typedef struct RpTriangle;
typedef struct xAnimPlay;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RwSurfaceProperties;
typedef struct RxNodeDefinition;
typedef struct RxHeap;
typedef struct xAnimFile;
typedef struct RwMatrixTag;
typedef struct RxCluster;
typedef struct xAnimTransitionList;
typedef struct rxHeapBlockHeader;
typedef struct RpCollSector;
typedef struct _iCollis;
typedef enum RxClusterValidityReq;
typedef struct RxPipelineCluster;
typedef struct xAnimTransition;
typedef struct xSurface;
typedef struct xModelPool;
typedef struct RwSphere;
typedef struct RpMeshHeader;
typedef struct p2LinkAsset;
typedef enum rxEmbeddedPacketState;
typedef struct _xSphere;
typedef struct RxPacket;
typedef struct xAnimSingle;
typedef struct xQCData;
typedef struct xCoef;
typedef struct xFFX;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNode;
typedef struct _xBBox;
typedef struct _xCylinder;
typedef struct RpWorldSector;
typedef struct RxPipelineNodeParam;
typedef struct _xEntShadow;
typedef struct RwRGBA;
typedef struct RpInterpolator;
typedef struct xMemPool;
typedef struct _xBox;
typedef struct xAnimTable;
typedef struct p2MovePointAsset;
typedef struct RwRGBAReal;
typedef struct p2EntAsset;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineRequiresCluster;
typedef struct iShadowCache;
typedef enum RpWorldRenderOrder;
typedef enum RwTextureFilterMode;
typedef struct xSpline3;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct _xMat4x3;
typedef struct RwLinkList;
typedef struct _xBound;
typedef struct _xQuat;

typedef void(*type_0)(RxPipelineNode*);
typedef void(*type_1)(_xEnt*, _xScene*, float32);
typedef int32(*type_2)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_3)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_4)(_xEnt*);
typedef uint32(*type_5)(xAnimTransition*, xAnimSingle*, void*);
typedef RpAtomic*(*type_7)(RpAtomic*);
typedef void(*type_8)(RwResEntry*);
typedef void(*type_9)(_xEnt*);
typedef void(*type_11)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_13)(_xEnt*, _xVec3*);
typedef void(*type_15)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_16)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RpWorldSector*(*type_18)(RpWorldSector*);
typedef xBase*(*type_19)(uint32);
typedef int8*(*type_23)(xBase*);
typedef void(*type_24)(_xEnt*, _xVec3*);
typedef int8*(*type_25)(uint32);
typedef int32(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_38)(RxNodeDefinition*);
typedef void(*type_39)(RxNodeDefinition*);
typedef void(*type_41)(xMemPool*, void*);
typedef int32(*type_44)(RxPipelineNode*);
typedef uint32(*type_46)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_47)(RwObjectHasFrame*);
typedef int32(*type_49)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpClump*(*type_52)(RpClump*, void*);

typedef _xVec3 type_6[2];
typedef RpLight* type_10[2];
typedef RwFrame* type_12[2];
typedef float32 type_14[2];
typedef uint16 type_17[3];
typedef uint16 type_20[3];
typedef int8 type_21[32];
typedef int8 type_22[32];
typedef _xCollis type_26[18];
typedef float32 type_27[4];
typedef float32 type_28[4];
typedef float32 type_29[4];
typedef uint8 type_30[8];
typedef uint8 type_31[8];
typedef uint8 type_32[2];
typedef uint8 type_33[8];
typedef RwTexCoords* type_35[8];
typedef float32 type_36[4];
typedef uint8 type_37[8];
typedef uint8 type_40[3];
typedef RwTexCoords* type_42[8];
typedef _xVec3 type_43[2];
typedef _xQuat type_45[2];
typedef uint8 type_48[2];
typedef _xVec3 type_50[4];
typedef RxCluster type_51[1];
typedef uint32 type_53[4];
typedef uint8 type_54[3];

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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct rxReq
{
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

struct _xMovePoint : xBase
{
	p2MovePointAsset* asset;
	_xVec3* pos;
	_xMovePoint** nodes;
	_xMovePoint* prev;
	uint32 node_wt_sum;
	uint8 on;
	uint8 flg_props;
	uint8 pad[2];
	float32 delay;
	xSpline3* spl;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct RpSector
{
	int32 type;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct xSerial
{
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

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
};

struct _iCollis
{
	int32 unknown;
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

struct xSurface
{
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct xCoef
{
	float32 a[4];
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct p2MovePointAsset : p2BaseAsset
{
	_xVec3 pos;
	uint16 wt;
	uint8 on;
	uint8 bezIndex;
	uint8 flg_props;
	uint8 pad;
	uint16 numPoints;
	float32 delay;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
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

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xSpline3
{
	uint16 type;
	uint16 flags;
	uint32 N;
	uint32 allocN;
	_xVec3* points;
	float32* time;
	_xVec3* p12;
	_xVec3* bctrl;
	float32* knot;
	xCoef3* coef;
	uint32 arcSample;
	float32* arcLength;
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

struct RwLinkList
{
	RwLLLink link;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

uint32 gActiveHeap;

_xVec3* xMovePointGetPos(_xMovePoint* m);
float32 xMovePointGetNext(_xMovePoint* m, _xMovePoint* prev, _xMovePoint** next, _xVec3* hdng);
void xMovePointSplineDestroy(_xMovePoint* m);
void xMovePointSplineSetup(_xMovePoint* m);
void xMovePointSetup(_xMovePoint* m, _xScene* sc);
void xMovePointReset(_xMovePoint* m);
void xMovePointLoad(_xMovePoint* ent, xSerial* s);
void xMovePointSave(_xMovePoint* ent, xSerial* s);
void xMovePointInit(_xMovePoint* m, p2MovePointAsset* asset);

// xMovePointGetPos__FPC11_xMovePoint
// Start address: 0x1a0450
_xVec3* xMovePointGetPos(_xMovePoint* m)
{
	// Line 243, Address: 0x1a0450, Func Offset: 0
	// Func End, Address: 0x1a0458, Func Offset: 0x8
}

// xMovePointGetNext__FPC11_xMovePointPC11_xMovePointPP11_xMovePointP6_xVec3
// Start address: 0x1a0460
float32 xMovePointGetNext(_xMovePoint* m, _xMovePoint* prev, _xMovePoint** next, _xVec3* hdng)
{
	_xMovePoint* previousOption;
	uint16 idx;
	int32 rnd;
	// Line 180, Address: 0x1a0460, Func Offset: 0
	// Line 186, Address: 0x1a047c, Func Offset: 0x1c
	// Line 188, Address: 0x1a0498, Func Offset: 0x38
	// Line 194, Address: 0x1a04a4, Func Offset: 0x44
	// Line 195, Address: 0x1a04b0, Func Offset: 0x50
	// Line 194, Address: 0x1a04b4, Func Offset: 0x54
	// Line 195, Address: 0x1a04c4, Func Offset: 0x64
	// Line 198, Address: 0x1a04cc, Func Offset: 0x6c
	// Line 199, Address: 0x1a04dc, Func Offset: 0x7c
	// Line 202, Address: 0x1a04e4, Func Offset: 0x84
	// Line 199, Address: 0x1a04e8, Func Offset: 0x88
	// Line 202, Address: 0x1a04ec, Func Offset: 0x8c
	// Line 205, Address: 0x1a04f4, Func Offset: 0x94
	// Line 213, Address: 0x1a04fc, Func Offset: 0x9c
	// Line 216, Address: 0x1a0504, Func Offset: 0xa4
	// Line 219, Address: 0x1a050c, Func Offset: 0xac
	// Line 222, Address: 0x1a0514, Func Offset: 0xb4
	// Line 219, Address: 0x1a051c, Func Offset: 0xbc
	// Line 222, Address: 0x1a0520, Func Offset: 0xc0
	// Line 224, Address: 0x1a0540, Func Offset: 0xe0
	// Line 227, Address: 0x1a054c, Func Offset: 0xec
	// Line 228, Address: 0x1a0554, Func Offset: 0xf4
	// Line 230, Address: 0x1a055c, Func Offset: 0xfc
	// Line 233, Address: 0x1a0568, Func Offset: 0x108
	// Line 234, Address: 0x1a0570, Func Offset: 0x110
	// Line 236, Address: 0x1a05c0, Func Offset: 0x160
	// Line 237, Address: 0x1a05c4, Func Offset: 0x164
	// Func End, Address: 0x1a05e4, Func Offset: 0x184
}

// xMovePointSplineDestroy__FP11_xMovePoint
// Start address: 0x1a05f0
void xMovePointSplineDestroy(_xMovePoint* m)
{
	// Line 173, Address: 0x1a05f0, Func Offset: 0
	// Line 175, Address: 0x1a05fc, Func Offset: 0xc
	// Line 177, Address: 0x1a0600, Func Offset: 0x10
	// Func End, Address: 0x1a0608, Func Offset: 0x18
}

// xMovePointSplineSetup__FP11_xMovePoint
// Start address: 0x1a0610
void xMovePointSplineSetup(_xMovePoint* m)
{
	_xVec3 p2;
	_xVec3 p1;
	_xVec3 points[2];
	_xMovePoint* w3;
	_xMovePoint* w2;
	_xMovePoint* w0;
	// Line 122, Address: 0x1a0610, Func Offset: 0
	// Line 129, Address: 0x1a0620, Func Offset: 0x10
	// Line 136, Address: 0x1a0640, Func Offset: 0x30
	// Line 138, Address: 0x1a0644, Func Offset: 0x34
	// Line 140, Address: 0x1a0648, Func Offset: 0x38
	// Line 138, Address: 0x1a064c, Func Offset: 0x3c
	// Line 140, Address: 0x1a0650, Func Offset: 0x40
	// Line 143, Address: 0x1a0668, Func Offset: 0x58
	// Line 145, Address: 0x1a0678, Func Offset: 0x68
	// Line 146, Address: 0x1a067c, Func Offset: 0x6c
	// Line 145, Address: 0x1a0680, Func Offset: 0x70
	// Line 146, Address: 0x1a0684, Func Offset: 0x74
	// Line 147, Address: 0x1a069c, Func Offset: 0x8c
	// Line 148, Address: 0x1a06b8, Func Offset: 0xa8
	// Line 149, Address: 0x1a06d0, Func Offset: 0xc0
	// Line 156, Address: 0x1a06d8, Func Offset: 0xc8
	// Line 157, Address: 0x1a0710, Func Offset: 0x100
	// Line 158, Address: 0x1a072c, Func Offset: 0x11c
	// Line 159, Address: 0x1a0748, Func Offset: 0x138
	// Line 160, Address: 0x1a0764, Func Offset: 0x154
	// Line 161, Address: 0x1a0780, Func Offset: 0x170
	// Line 162, Address: 0x1a079c, Func Offset: 0x18c
	// Line 166, Address: 0x1a07b8, Func Offset: 0x1a8
	// Line 167, Address: 0x1a07d8, Func Offset: 0x1c8
	// Line 169, Address: 0x1a07e4, Func Offset: 0x1d4
	// Func End, Address: 0x1a07f4, Func Offset: 0x1e4
}

// xMovePointSetup__FP11_xMovePointP7_xScene
// Start address: 0x1a0800
void xMovePointSetup(_xMovePoint* m, _xScene* sc)
{
	uint16 idx;
	// Line 97, Address: 0x1a0800, Func Offset: 0
	// Line 105, Address: 0x1a081c, Func Offset: 0x1c
	// Line 108, Address: 0x1a0820, Func Offset: 0x20
	// Line 112, Address: 0x1a083c, Func Offset: 0x3c
	// Line 118, Address: 0x1a084c, Func Offset: 0x4c
	// Line 117, Address: 0x1a0854, Func Offset: 0x54
	// Line 112, Address: 0x1a0858, Func Offset: 0x58
	// Line 115, Address: 0x1a0860, Func Offset: 0x60
	// Line 117, Address: 0x1a0880, Func Offset: 0x80
	// Line 118, Address: 0x1a0894, Func Offset: 0x94
	// Line 119, Address: 0x1a08b0, Func Offset: 0xb0
	// Func End, Address: 0x1a08d0, Func Offset: 0xd0
}

// xMovePointReset__FP11_xMovePoint
// Start address: 0x1a08d0
void xMovePointReset(_xMovePoint* m)
{
	// Line 84, Address: 0x1a08d0, Func Offset: 0
	// Line 89, Address: 0x1a08dc, Func Offset: 0xc
	// Line 92, Address: 0x1a08e8, Func Offset: 0x18
	// Line 93, Address: 0x1a08f4, Func Offset: 0x24
	// Line 94, Address: 0x1a0900, Func Offset: 0x30
	// Func End, Address: 0x1a0910, Func Offset: 0x40
}

// xMovePointLoad__FP11_xMovePointP7xSerial
// Start address: 0x1a0910
void xMovePointLoad(_xMovePoint* ent, xSerial* s)
{
	// Line 77, Address: 0x1a0910, Func Offset: 0
	// Func End, Address: 0x1a0918, Func Offset: 0x8
}

// xMovePointSave__FP11_xMovePointP7xSerial
// Start address: 0x1a0920
void xMovePointSave(_xMovePoint* ent, xSerial* s)
{
	// Line 58, Address: 0x1a0920, Func Offset: 0
	// Func End, Address: 0x1a0928, Func Offset: 0x8
}

// xMovePointInit__FP11_xMovePointP16p2MovePointAsset
// Start address: 0x1a0930
void xMovePointInit(_xMovePoint* m, p2MovePointAsset* asset)
{
	// Line 22, Address: 0x1a0930, Func Offset: 0
	// Line 26, Address: 0x1a0944, Func Offset: 0x14
	// Line 28, Address: 0x1a094c, Func Offset: 0x1c
	// Line 29, Address: 0x1a0950, Func Offset: 0x20
	// Line 32, Address: 0x1a095c, Func Offset: 0x2c
	// Line 33, Address: 0x1a0964, Func Offset: 0x34
	// Line 34, Address: 0x1a096c, Func Offset: 0x3c
	// Line 35, Address: 0x1a0974, Func Offset: 0x44
	// Line 37, Address: 0x1a0978, Func Offset: 0x48
	// Line 38, Address: 0x1a0984, Func Offset: 0x54
	// Line 40, Address: 0x1a0994, Func Offset: 0x64
	// Line 43, Address: 0x1a099c, Func Offset: 0x6c
	// Line 45, Address: 0x1a09a0, Func Offset: 0x70
	// Func End, Address: 0x1a09b4, Func Offset: 0x84
}

