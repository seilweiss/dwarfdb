typedef struct RwMatrixTag;
typedef struct RxClusterDefinition;
typedef struct RwTexture;
typedef struct _xEnt;
typedef struct rxHeapFreeBlock;
typedef struct xAnimState;
typedef struct zEntTrigger;
typedef struct RwRaster;
typedef struct RxNodeMethods;
typedef struct p2EntAsset;
typedef struct _xMat4x3;
typedef struct rxReq;
typedef struct RpAtomic;
typedef struct RwTexDictionary;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTable;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct RwFrame;
typedef struct RxNodeDefinition;
typedef struct RwRGBA;
typedef struct xModelPool;
typedef struct xAnimEffect;
typedef struct RpInterpolator;
typedef struct RwTexCoords;
typedef struct _xBound;
typedef struct RpCollSector;
typedef struct RxHeap;
typedef struct _xScene;
typedef struct xModelInstance;
typedef struct _xEntFrame;
typedef struct RxCluster;
typedef struct xAnimActiveEffect;
typedef struct RpMeshHeader;
typedef struct RpMaterial;
typedef struct _xVec3;
typedef struct xSerial;
typedef struct RxClusterRef;
typedef struct rxHeapBlockHeader;
typedef struct _xEnv;
typedef struct RwResEntry;
typedef struct xAnimPlay;
typedef enum RxClusterValidityReq;
typedef struct RpMorphTarget;
typedef struct RxPipelineCluster;
typedef struct RwSphere;
typedef struct RxPipeline;
typedef struct RxOutputSpec;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimFile;
typedef struct RxPacket;
typedef struct _iCollis;
typedef struct iEnv;
typedef struct _xEntCollis;
typedef struct xAnimTransitionList;
typedef struct RpWorldSector;
typedef struct _xSphere;
typedef enum RwTextureAddressMode;
typedef struct RpWorld;
typedef struct RxPipelineNode;
typedef struct xAnimTransition;
typedef struct RpPolygon;
typedef struct RpClump;
typedef struct RwV3d;
typedef struct RxPipelineNodeParam;
typedef struct _xCylinder;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpLight;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct _xCollis;
typedef struct p2LinkAsset;
typedef struct _xBox;
typedef struct xMemPool;
typedef struct RwLLLink;
typedef struct RwRGBAReal;
typedef struct xBase;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineRequiresCluster;
typedef struct xSurface;
typedef enum RwTextureFilterMode;
typedef struct xQCData;
typedef struct RwObject;
typedef struct RpSector;
typedef enum RxClusterValid;
typedef struct xFFX;
typedef struct _xIsect;
typedef struct RpGeometry;
typedef struct _xBBox;
typedef struct _xEntShadow;
typedef struct RwLinkList;
typedef struct RpMaterialList;
typedef struct _xQuat;
typedef struct p2EntTriggerAsset;
typedef struct p2BaseAsset;
typedef enum RxClusterForcePresent;
typedef struct RwBBox;
typedef enum RxNodeDefEditable;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _xRot;
typedef struct iShadowCache;
typedef struct _zEnt;
typedef struct RxIoSpec;

typedef uint32(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_9)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_10)(xBase*, xBase*, uint32, float32*, xBase*);
typedef xBase*(*type_11)(uint32);
typedef void(*type_12)(_xEnt*, _xScene*, float32);
typedef int8*(*type_13)(xBase*);
typedef void(*type_14)(_xEnt*);
typedef int8*(*type_15)(uint32);
typedef void(*type_16)(_xEnt*);
typedef void(*type_17)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef void(*type_18)(_xEnt*, _xVec3*);
typedef int32(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_21)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef int32(*type_25)(RxNodeDefinition*);
typedef RpClump*(*type_26)(RpClump*, void*);
typedef void(*type_28)(RxNodeDefinition*);
typedef int32(*type_30)(RxPipelineNode*);
typedef void(*type_31)(xMemPool*, void*);
typedef RpWorldSector*(*type_32)(RpWorldSector*);
typedef void(*type_33)(_xEnt*, _xVec3*);
typedef void(*type_35)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_37)(RwObjectHasFrame*);
typedef int32(*type_39)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_40)(RpAtomic*);
typedef uint32(*type_44)(RxPipelineNode*, uint32, uint32, void*);
typedef uint32(*type_47)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_51)(RwResEntry*);
typedef int32(*type_52)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_54)(zEntTrigger*, _xScene*, float32);

typedef uint16 type_1[3];
typedef _xVec3 type_2[4];
typedef float32 type_3[2];
typedef _xVec3 type_4[4];
typedef int8 type_5[32];
typedef uint8 type_6[3];
typedef RwTexCoords* type_7[8];
typedef int8 type_8[32];
typedef RpLight* type_20[2];
typedef float32 type_22[4];
typedef RwTexCoords* type_23[8];
typedef RwFrame* type_24[2];
typedef float32 type_27[4];
typedef uint8 type_29[2];
typedef uint8 type_34[3];
typedef float32 type_36[4];
typedef _xVec3 type_38[2];
typedef _xCollis type_41[18];
typedef _xQuat type_42[2];
typedef RxCluster type_43[1];
typedef uint8 type_45[8];
typedef uint32 type_46[4];
typedef uint8 type_48[8];
typedef uint8 type_49[8];
typedef uint8 type_50[8];
typedef uint8 type_53[3];
typedef uint16 type_55[3];

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

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct zEntTrigger : _zEnt
{
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct _xEnv
{
	iEnv* geom;
	iEnv ienv;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct _iCollis
{
	int32 unknown;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	p2LinkAsset* link;
	int32(*eventFunc)(xBase*, xBase*, uint32, float32*, xBase*);
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

struct RpSector
{
	int32 type;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct p2EntTriggerAsset
{
	_xVec3 p[4];
	_xVec3 direction;
	uint32 flags;
};

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct st_SERIAL_CLIENTINFO
{
};

struct _xRot
{
	_xVec3 axis;
	float32 angle;
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
};

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

int32(*zEntTriggerEventCB)(xBase*, xBase*, uint32, float32*, xBase*);
void(*zEntTriggerUpdate)(zEntTrigger*, _xScene*, float32);

void zEntTriggerLoad(zEntTrigger* ent, xSerial* s);
void zEntTriggerSave(zEntTrigger* ent, xSerial* s);
int32 zEntTriggerEventCB(xBase* to, uint32 toEvent);
void zEntTriggerUpdate(zEntTrigger* trig);
void zEntTriggerInit(void* ent, void* asset);

// zEntTriggerLoad__FP11zEntTriggerP7xSerial
// Start address: 0x18e840
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s)
{
	// Line 233, Address: 0x18e840, Func Offset: 0
	// Func End, Address: 0x18e848, Func Offset: 0x8
}

// zEntTriggerSave__FP11zEntTriggerP7xSerial
// Start address: 0x18e850
void zEntTriggerSave(zEntTrigger* ent, xSerial* s)
{
	// Line 214, Address: 0x18e850, Func Offset: 0
	// Func End, Address: 0x18e858, Func Offset: 0x8
}

// zEntTriggerEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x18e860
int32 zEntTriggerEventCB(xBase* to, uint32 toEvent)
{
	zEntTrigger* trig;
	// Line 187, Address: 0x18e860, Func Offset: 0
	// Line 193, Address: 0x18e864, Func Offset: 0x4
	// Line 196, Address: 0x18e878, Func Offset: 0x18
	// Line 201, Address: 0x18e880, Func Offset: 0x20
	// Line 200, Address: 0x18e884, Func Offset: 0x24
	// Line 201, Address: 0x18e888, Func Offset: 0x28
	// Func End, Address: 0x18e890, Func Offset: 0x30
}

// zEntTriggerUpdate__FP11zEntTriggerP7_xScenef
// Start address: 0x18e890
void zEntTriggerUpdate(zEntTrigger* trig)
{
	_xIsect isect;
	_xSphere sphere;
	_xIsect isect;
	_xCylinder cylinder;
	_xIsect isect;
	_xSphere sphere;
	_xBox box;
	_xVec3* chkPos;
	_xEnt* chkEnt;
	int32 collide;
	_xIsect isect;
	p2EntTriggerAsset* tasset;
	p2LinkAsset* link;
	uint32 i;
	// Line 49, Address: 0x18e890, Func Offset: 0
	// Line 50, Address: 0x18e8ac, Func Offset: 0x1c
	// Line 55, Address: 0x18e8bc, Func Offset: 0x2c
	// Line 54, Address: 0x18e8c0, Func Offset: 0x30
	// Line 59, Address: 0x18e8c4, Func Offset: 0x34
	// Line 60, Address: 0x18e8d0, Func Offset: 0x40
	// Line 68, Address: 0x18e8f4, Func Offset: 0x64
	// Line 70, Address: 0x18e8fc, Func Offset: 0x6c
	// Line 72, Address: 0x18e904, Func Offset: 0x74
	// Line 75, Address: 0x18e90c, Func Offset: 0x7c
	// Line 77, Address: 0x18e91c, Func Offset: 0x8c
	// Line 78, Address: 0x18e924, Func Offset: 0x94
	// Line 81, Address: 0x18e930, Func Offset: 0xa0
	// Line 86, Address: 0x18e958, Func Offset: 0xc8
	// Line 89, Address: 0x18e95c, Func Offset: 0xcc
	// Line 86, Address: 0x18e964, Func Offset: 0xd4
	// Line 87, Address: 0x18e978, Func Offset: 0xe8
	// Line 89, Address: 0x18e98c, Func Offset: 0xfc
	// Line 90, Address: 0x18e994, Func Offset: 0x104
	// Line 92, Address: 0x18e9b4, Func Offset: 0x124
	// Line 98, Address: 0x18e9bc, Func Offset: 0x12c
	// Line 101, Address: 0x18e9c0, Func Offset: 0x130
	// Line 98, Address: 0x18e9c8, Func Offset: 0x138
	// Line 99, Address: 0x18e9dc, Func Offset: 0x14c
	// Line 101, Address: 0x18e9e0, Func Offset: 0x150
	// Line 102, Address: 0x18e9e8, Func Offset: 0x158
	// Line 104, Address: 0x18ea08, Func Offset: 0x178
	// Line 110, Address: 0x18ea10, Func Offset: 0x180
	// Line 114, Address: 0x18ea14, Func Offset: 0x184
	// Line 110, Address: 0x18ea1c, Func Offset: 0x18c
	// Line 111, Address: 0x18ea30, Func Offset: 0x1a0
	// Line 112, Address: 0x18ea38, Func Offset: 0x1a8
	// Line 114, Address: 0x18ea3c, Func Offset: 0x1ac
	// Line 115, Address: 0x18ea44, Func Offset: 0x1b4
	// Line 117, Address: 0x18ea64, Func Offset: 0x1d4
	// Line 123, Address: 0x18ea6c, Func Offset: 0x1dc
	// Line 127, Address: 0x18ea70, Func Offset: 0x1e0
	// Line 123, Address: 0x18ea78, Func Offset: 0x1e8
	// Line 124, Address: 0x18ea8c, Func Offset: 0x1fc
	// Line 127, Address: 0x18ea90, Func Offset: 0x200
	// Line 128, Address: 0x18ea98, Func Offset: 0x208
	// Line 142, Address: 0x18eabc, Func Offset: 0x22c
	// Line 149, Address: 0x18eac0, Func Offset: 0x230
	// Line 150, Address: 0x18eac8, Func Offset: 0x238
	// Line 151, Address: 0x18ead8, Func Offset: 0x248
	// Line 152, Address: 0x18eae0, Func Offset: 0x250
	// Line 155, Address: 0x18eb14, Func Offset: 0x284
	// Line 156, Address: 0x18eb18, Func Offset: 0x288
	// Line 159, Address: 0x18eb28, Func Offset: 0x298
	// Line 160, Address: 0x18eb30, Func Offset: 0x2a0
	// Line 161, Address: 0x18eb40, Func Offset: 0x2b0
	// Line 162, Address: 0x18eb48, Func Offset: 0x2b8
	// Line 165, Address: 0x18eb7c, Func Offset: 0x2ec
	// Line 166, Address: 0x18eb80, Func Offset: 0x2f0
	// Line 167, Address: 0x18eb90, Func Offset: 0x300
	// Line 170, Address: 0x18eb94, Func Offset: 0x304
	// Line 171, Address: 0x18eb98, Func Offset: 0x308
	// Line 172, Address: 0x18eb9c, Func Offset: 0x30c
	// Line 173, Address: 0x18ebb0, Func Offset: 0x320
	// Func End, Address: 0x18ebd0, Func Offset: 0x340
}

// zEntTriggerInit__FPvPv
// Start address: 0x18ebd0
void zEntTriggerInit(void* ent, void* asset)
{
	// Line 27, Address: 0x18ebd0, Func Offset: 0
	// Line 28, Address: 0x18ebdc, Func Offset: 0xc
	// Line 29, Address: 0x18ec28, Func Offset: 0x58
	// Func End, Address: 0x18ec38, Func Offset: 0x68
}

