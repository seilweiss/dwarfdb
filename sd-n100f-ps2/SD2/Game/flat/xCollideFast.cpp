typedef struct xAnimState;
typedef struct _xEntFrame;
typedef struct p2LinkAsset;
typedef struct xModelInstance;
typedef struct RwFrame;
typedef enum RxClusterForcePresent;
typedef struct _xRay3;
typedef struct RpTriangle;
typedef struct _xCylinder;
typedef struct _xEntCollis;
typedef struct _xScene;
typedef struct xModelPool;
typedef struct RxPipeline;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RwTexture;
typedef struct xAnimPlay;
typedef struct xBase;
typedef struct _xEnt;
typedef struct iEnv;
typedef struct RxIoSpec;
typedef struct _xVec3;
typedef struct RxClusterDefinition;
typedef struct RpAtomic;
typedef struct _xCollis;
typedef struct RwRaster;
typedef struct rxHeapFreeBlock;
typedef struct _xBound;
typedef struct RwTexDictionary;
typedef struct RpCollSector;
typedef struct RxNodeMethods;
typedef struct xAnimEffect;
typedef struct rxReq;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xSurface;
typedef struct RpMeshHeader;
typedef struct RwSurfaceProperties;
typedef struct RpMaterial;
typedef struct xAnimActiveEffect;
typedef struct RxNodeDefinition;
typedef struct p2EntAsset;
typedef struct RwMatrixTag;
typedef struct RxHeap;
typedef struct xFFX;
typedef struct RxCluster;
typedef struct rxHeapBlockHeader;
typedef struct xAnimFile;
typedef enum RxClusterValidityReq;
typedef struct RpWorldSector;
typedef struct RxPipelineCluster;
typedef struct RwRGBA;
typedef struct _xEntShadow;
typedef struct RwSphere;
typedef struct xAnimTransitionList;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct _xEnv;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef struct RpPolygon;
typedef struct xAnimTransition;
typedef struct RwV3d;
typedef struct _iCollis;
typedef enum RwTextureAddressMode;
typedef struct RwResEntry;
typedef struct RpVertexNormal;
typedef struct RxPipelineNode;
typedef struct RpMorphTarget;
typedef struct xAnimSingle;
typedef struct xMemPool;
typedef struct _xBox;
typedef struct xQCData;
typedef struct RxPipelineNodeParam;
typedef struct RxPipelineNodeTopSortData;
typedef struct _xMat3x3;
typedef struct _xBBox;
typedef struct RpClump;
typedef struct _xIsect;
typedef struct iShadowCache;
typedef enum RpWorldRenderOrder;
typedef struct RwObjectHasFrame;
typedef struct RwLLLink;
typedef struct RwRGBAReal;
typedef struct _xMat4x3;
typedef struct xAnimTable;
typedef struct RxPipelineRequiresCluster;
typedef struct _xQuat;
typedef enum RwTextureFilterMode;
typedef struct RwObject;
typedef enum RxClusterValid;
typedef struct RpWorld;
typedef struct RpGeometry;
typedef struct _xSphere;
typedef struct RpMaterialList;
typedef struct RwLinkList;
typedef struct RpSector;
typedef struct _xRot;
typedef struct RwBBox;
typedef struct p2BaseAsset;
typedef struct RpLight;

typedef void(*type_0)(RwResEntry*);
typedef int32(*type_3)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpWorldSector*(*type_4)(RpWorldSector*);
typedef uint32(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_7)(_xEnt*);
typedef void(*type_8)(_xEnt*, _xVec3*);
typedef xBase*(*type_10)(uint32);
typedef int8*(*type_13)(xBase*);
typedef void(*type_15)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef int8*(*type_16)(uint32);
typedef uint32(*type_17)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_25)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_27)(xMemPool*, void*);
typedef int32(*type_29)(RxNodeDefinition*);
typedef void(*type_30)(RxNodeDefinition*);
typedef int32(*type_31)(RxPipelineNode*);
typedef RpClump*(*type_34)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_35)(RwObjectHasFrame*);
typedef void(*type_36)(RxPipelineNode*);
typedef int32(*type_41)(RxPipelineNode*, RxPipeline*);
typedef void(*type_42)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef uint32(*type_43)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_45)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_46)(_xEnt*, _xScene*, float32);
typedef void(*type_48)(_xEnt*);
typedef RpAtomic*(*type_49)(RpAtomic*);
typedef void(*type_50)(_xEnt*, _xVec3*);

typedef uint16 type_1[3];
typedef RwFrame* type_2[2];
typedef uint16 type_5[3];
typedef float32 type_9[2];
typedef int8 type_11[32];
typedef int8 type_12[32];
typedef _xCollis type_14[18];
typedef uint8 type_18[8];
typedef uint8 type_19[8];
typedef uint8 type_20[8];
typedef RwTexCoords* type_21[8];
typedef uint8 type_22[8];
typedef RwTexCoords* type_23[8];
typedef float32 type_24[4];
typedef float32 type_26[4];
typedef uint8 type_28[2];
typedef _xVec3 type_32[4];
typedef uint8 type_33[3];
typedef _xVec3 type_37[2];
typedef _xQuat type_38[2];
typedef float32 type_39[4];
typedef uint8 type_40[3];
typedef RxCluster type_44[1];
typedef uint32 type_47[4];
typedef RpLight* type_51[2];

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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _xRay3
{
	_xVec3 origin;
	_xVec3 dir;
	float32 min_t;
	float32 max_t;
	int32 flags;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct rxReq
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct xSurface
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

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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

struct xFFX
{
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct _iCollis
{
	int32 unknown;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct _xMat3x3
{
	_xVec3 right;
	int32 flags;
	_xVec3 up;
	uint32 pad1;
	_xVec3 at;
	uint32 pad2;
};

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct _xIsect
{
	uint32 flags;
	float32 penned;
	float32 contained;
	float32 lapped;
	_xVec3 point;
	_xVec3 norm;
	float32 dist;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpSector
{
	int32 type;
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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


uint32 xRayHitsSceneFast(_xRay3* r, _xScene* sc);
uint32 xRayHitsEnvFast(_xRay3* r, _xEnv* env);
uint32 xRayHitsBoundFast(_xRay3* r, _xBound* b);
void xCollideFastInit(_xScene* sc);

// xRayHitsSceneFast__FPC6_xRay3PC7_xScene
// Start address: 0x24c1a0
uint32 xRayHitsSceneFast(_xRay3* r, _xScene* sc)
{
	_xEnt* ent;
	_xEnt* ent;
	_xEnt* ent;
	xQCData qcr;
	uint32 hit;
	int32 i;
	// Line 164, Address: 0x24c1a0, Func Offset: 0
	// Line 172, Address: 0x24c1c4, Func Offset: 0x24
	// Line 178, Address: 0x24c1d0, Func Offset: 0x30
	// Line 179, Address: 0x24c1dc, Func Offset: 0x3c
	// Line 180, Address: 0x24c1e8, Func Offset: 0x48
	// Line 184, Address: 0x24c1f4, Func Offset: 0x54
	// Line 188, Address: 0x24c208, Func Offset: 0x68
	// Line 191, Address: 0x24c218, Func Offset: 0x78
	// Line 192, Address: 0x24c228, Func Offset: 0x88
	// Line 193, Address: 0x24c234, Func Offset: 0x94
	// Line 194, Address: 0x24c23c, Func Offset: 0x9c
	// Line 197, Address: 0x24c244, Func Offset: 0xa4
	// Line 199, Address: 0x24c250, Func Offset: 0xb0
	// Line 200, Address: 0x24c268, Func Offset: 0xc8
	// Line 201, Address: 0x24c274, Func Offset: 0xd4
	// Line 202, Address: 0x24c280, Func Offset: 0xe0
	// Line 206, Address: 0x24c28c, Func Offset: 0xec
	// Line 210, Address: 0x24c2a0, Func Offset: 0x100
	// Line 213, Address: 0x24c2b0, Func Offset: 0x110
	// Line 214, Address: 0x24c2c0, Func Offset: 0x120
	// Line 215, Address: 0x24c2cc, Func Offset: 0x12c
	// Line 216, Address: 0x24c2d4, Func Offset: 0x134
	// Line 219, Address: 0x24c2dc, Func Offset: 0x13c
	// Line 221, Address: 0x24c2e8, Func Offset: 0x148
	// Line 222, Address: 0x24c300, Func Offset: 0x160
	// Line 223, Address: 0x24c30c, Func Offset: 0x16c
	// Line 224, Address: 0x24c318, Func Offset: 0x178
	// Line 228, Address: 0x24c324, Func Offset: 0x184
	// Line 232, Address: 0x24c338, Func Offset: 0x198
	// Line 233, Address: 0x24c348, Func Offset: 0x1a8
	// Line 235, Address: 0x24c354, Func Offset: 0x1b4
	// Line 236, Address: 0x24c368, Func Offset: 0x1c8
	// Line 237, Address: 0x24c374, Func Offset: 0x1d4
	// Func End, Address: 0x24c394, Func Offset: 0x1f4
}

// xRayHitsEnvFast__FPC6_xRay3PC5_xEnv
// Start address: 0x24c3a0
uint32 xRayHitsEnvFast(_xRay3* r, _xEnv* env)
{
	// Line 155, Address: 0x24c3a0, Func Offset: 0
	// Func End, Address: 0x24c3a8, Func Offset: 0x8
}

// xRayHitsBoundFast__FPC6_xRay3PC7_xBound
// Start address: 0x24c3b0
uint32 xRayHitsBoundFast(_xRay3* r, _xBound* b)
{
	_xMat3x3 mn;
	_xRay3 lr;
	// Line 114, Address: 0x24c3b0, Func Offset: 0
	// Line 118, Address: 0x24c3c4, Func Offset: 0x14
	// Line 119, Address: 0x24c3d8, Func Offset: 0x28
	// Line 121, Address: 0x24c4c4, Func Offset: 0x114
	// Line 126, Address: 0x24c4d0, Func Offset: 0x120
	// Line 129, Address: 0x24c4f4, Func Offset: 0x144
	// Line 126, Address: 0x24c4f8, Func Offset: 0x148
	// Line 129, Address: 0x24c4fc, Func Offset: 0x14c
	// Line 130, Address: 0x24c504, Func Offset: 0x154
	// Line 131, Address: 0x24c544, Func Offset: 0x194
	// Line 132, Address: 0x24c554, Func Offset: 0x1a4
	// Line 135, Address: 0x24c558, Func Offset: 0x1a8
	// Line 132, Address: 0x24c564, Func Offset: 0x1b4
	// Line 133, Address: 0x24c56c, Func Offset: 0x1bc
	// Line 134, Address: 0x24c578, Func Offset: 0x1c8
	// Line 135, Address: 0x24c57c, Func Offset: 0x1cc
	// Line 137, Address: 0x24c5d8, Func Offset: 0x228
	// Line 138, Address: 0x24c5e0, Func Offset: 0x230
	// Line 140, Address: 0x24c644, Func Offset: 0x294
	// Line 141, Address: 0x24c64c, Func Offset: 0x29c
	// Line 146, Address: 0x24c6a8, Func Offset: 0x2f8
	// Func End, Address: 0x24c6c0, Func Offset: 0x310
}

// xCollideFastInit__FP7_xScene
// Start address: 0x24c6c0
void xCollideFastInit(_xScene* sc)
{
	// Line 41, Address: 0x24c6c0, Func Offset: 0
	// Func End, Address: 0x24c6c8, Func Offset: 0x8
}

