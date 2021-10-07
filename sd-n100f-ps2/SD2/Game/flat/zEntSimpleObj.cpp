typedef struct RxClusterDefinition;
typedef struct RwRaster;
typedef struct RwV3d;
typedef struct RwResEntry;
typedef struct xAnimTransitionList;
typedef struct xModelInstance;
typedef struct xAnimFile;
typedef struct xSurface;
typedef struct _xScene;
typedef enum RxClusterValid;
typedef struct RxPipelineCluster;
typedef struct RpVertexNormal;
typedef struct RxPipelineRequiresCluster;
typedef struct _zEntSimpleObj;
typedef struct _xMat4x3;
typedef struct xModelPool;
typedef struct RwTexCoords;
typedef struct rxReq;
typedef struct xFFX;
typedef struct _iCollis;
typedef struct xAnimTransition;
typedef struct p2SimpleObjAsset;
typedef struct RwRGBA;
typedef struct RwTexDictionary;
typedef struct xQCData;
typedef struct xAnimPlay;
typedef struct _xEnt;
typedef struct RpClump;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimSingle;
typedef struct RpAtomic;
typedef struct _xQuat;
typedef struct RxOutputSpec;
typedef struct xSerial;
typedef struct _xEntShadow;
typedef enum RxClusterForcePresent;
typedef enum RpWorldRenderOrder;
typedef struct xAnimState;
typedef struct _xBBox;
typedef struct RxClusterRef;
typedef enum RxNodeDefEditable;
typedef struct RwBBox;
typedef struct _xVec3;
typedef struct RwMatrixTag;
typedef struct RxIoSpec;
typedef struct xBase;
typedef struct RpCollSector;
typedef struct _xEntFrame;
typedef struct rxHeapFreeBlock;
typedef struct RwTexture;
typedef struct RpMeshHeader;
typedef struct RpWorldSector;
typedef struct _xRot;
typedef struct RxPipeline;
typedef struct xAnimEffect;
typedef struct RxNodeMethods;
typedef struct _xCollis;
typedef struct _xEnv;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct p2EntAsset;
typedef struct xAnimTable;
typedef struct RwSurfaceProperties;
typedef struct RpWorld;
typedef struct RxNodeDefinition;
typedef struct RpGeometry;
typedef struct RxHeap;
typedef struct p2LinkAsset;
typedef struct RwFrame;
typedef struct RxCluster;
typedef struct RpMorphTarget;
typedef struct xAnimActiveEffect;
typedef struct rxHeapBlockHeader;
typedef struct _zEnt;
typedef struct xMemPool;
typedef struct RpSector;
typedef struct RpMaterialList;
typedef enum RxClusterValidityReq;
typedef struct iShadowCache;
typedef struct RwSphere;
typedef struct RpMaterial;
typedef struct RwLLLink;
typedef enum rxEmbeddedPacketState;
typedef struct RxPacket;
typedef enum RwTextureAddressMode;
typedef struct RxPipelineNode;
typedef struct RpLight;
typedef struct _xSphere;
typedef struct _xBound;
typedef struct RpTriangle;
typedef struct RxPipelineNodeParam;
typedef struct RpPolygon;
typedef struct iEnv;
typedef struct _xCylinder;
typedef struct RwRGBAReal;
typedef struct _xBox;
typedef struct _xEntCollis;
typedef struct RwObjectHasFrame;
typedef enum RwTextureFilterMode;
typedef struct p2BaseAsset;
typedef struct RwObject;
typedef struct RpInterpolator;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*);
typedef void(*type_1)(RwResEntry*);
typedef void(*type_2)(RxPipelineNode*);
typedef int32(*type_4)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_6)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_7)(_xEnt*, _xScene*, float32, _xEntCollis*);
typedef uint32(*type_8)(_xEnt*, _xEnt*, _xScene*, float32, _xCollis*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef RpWorldSector*(*type_17)(RpWorldSector*);
typedef xBase*(*type_19)(uint32);
typedef int8*(*type_22)(xBase*);
typedef int8*(*type_26)(uint32);
typedef RpAtomic*(*type_27)(RpAtomic*);
typedef uint32(*type_28)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_29)(xMemPool*, void*);
typedef int32(*type_33)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_34)(_xEnt*, _xScene*, float32, _xEntFrame*);
typedef int32(*type_35)(xBase*, xBase*, uint32, float32*, xBase*);
typedef uint32(*type_37)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_39)(RxNodeDefinition*);
typedef void(*type_40)(_xEnt*, _xScene*, float32);
typedef void(*type_41)(RxNodeDefinition*);
typedef void(*type_42)(_xEnt*);
typedef int32(*type_43)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_44)(_xEnt*);
typedef void(*type_45)(_xEnt*, _xVec3*);
typedef RwObjectHasFrame*(*type_48)(RwObjectHasFrame*);
typedef void(*type_53)(_xEnt*, _xVec3*);

typedef RwTexCoords* type_3[8];
typedef _xCollis type_5[18];
typedef float32 type_9[4];
typedef uint8 type_10[8];
typedef float32 type_11[4];
typedef uint8 type_12[8];
typedef uint8 type_13[8];
typedef uint8 type_15[2];
typedef uint8 type_16[8];
typedef uint8 type_18[3];
typedef _xVec3 type_20[2];
typedef int8 type_21[32];
typedef uint8 type_23[3];
typedef int8 type_24[32];
typedef _xQuat type_25[2];
typedef _xVec3 type_30[4];
typedef float32 type_31[4];
typedef uint8 type_32[3];
typedef uint16 type_36[3];
typedef uint16 type_38[3];
typedef float32 type_46[2];
typedef RpLight* type_47[2];
typedef RwFrame* type_49[2];
typedef RxCluster type_50[1];
typedef RwTexCoords* type_51[8];
typedef uint32 type_52[4];

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct _zEntSimpleObj : _zEnt
{
	p2SimpleObjAsset* sasset;
	uint32 sflags;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct rxReq
{
};

struct xFFX
{
};

struct _iCollis
{
	int32 unknown;
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

struct p2SimpleObjAsset
{
	float32 animSpeed;
	uint32 initAnimState;
	uint8 collType;
	uint8 flags;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xQCData
{
	uint32 xmask;
	uint32 ymask;
	uint32 zmask;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
	uint16 renderFrame;
	uint16 pad;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct _xQuat
{
	_xVec3 v;
	float32 s;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xSerial
{
};

struct _xEntShadow
{
	_xVec3 pos;
	_xVec3 vec;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _xBBox
{
	_xVec3 center;
	_xBox box;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct _xVec3
{
	float32 x;
	float32 y;
	float32 z;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
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

struct RpCollSector
{
	uint8 cType;
	uint8 vertex;
	uint8 start;
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct _xRot
{
	_xVec3 axis;
	float32 angle;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
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

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
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

struct p2LinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	float32 param[4];
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _zEnt : _xEnt
{
	xAnimTable* atbl;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iShadowCache
{
	_xVec3 pos;
	_xVec3 right;
	_xVec3 corner[4];
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct _xSphere
{
	_xVec3 center;
	float32 r;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
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

struct _xCylinder
{
	_xVec3 center;
	float32 r;
	float32 h;
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _xBox
{
	_xVec3 upper;
	_xVec3 lower;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct p2BaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

struct RwObject
{
	uint8 type;
	uint8 subType;
	uint8 flags;
	uint8 privateFlags;
	void* parent;
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

struct RwLinkList
{
	RwLLLink link;
};

int32(*zEntSimpleObjEventCB)(xBase*, xBase*, uint32, float32*, xBase*);

int32 zEntSimpleObjEventCB(xBase* to, uint32 toEvent, float32* toParam);
void zEntSimpleObj_Load(_zEntSimpleObj* ent, xSerial* s);
void zEntSimpleObj_Save(_zEntSimpleObj* ent, xSerial* s);
void zEntSimpleObj_Setup(_zEntSimpleObj* ent);
void DiggableSetup(_zEntSimpleObj* ent);
void zEntSimpleObj_Init(_zEntSimpleObj* ent, p2EntAsset* asset);
void zEntSimpleObj_Init(void* ent, void* asset);

// zEntSimpleObjEventCB__FP5xBaseP5xBaseUiPfP5xBase
// Start address: 0x1a34d0
int32 zEntSimpleObjEventCB(xBase* to, uint32 toEvent, float32* toParam)
{
	_zEntSimpleObj* s;
	// Line 172, Address: 0x1a34d0, Func Offset: 0
	// Line 181, Address: 0x1a34dc, Func Offset: 0xc
	// Line 184, Address: 0x1a3588, Func Offset: 0xb8
	// Line 185, Address: 0x1a3590, Func Offset: 0xc0
	// Line 188, Address: 0x1a3598, Func Offset: 0xc8
	// Line 189, Address: 0x1a35a0, Func Offset: 0xd0
	// Line 192, Address: 0x1a35a8, Func Offset: 0xd8
	// Line 194, Address: 0x1a35b4, Func Offset: 0xe4
	// Line 195, Address: 0x1a35b8, Func Offset: 0xe8
	// Line 198, Address: 0x1a35c0, Func Offset: 0xf0
	// Line 201, Address: 0x1a35cc, Func Offset: 0xfc
	// Line 204, Address: 0x1a35d4, Func Offset: 0x104
	// Line 205, Address: 0x1a3604, Func Offset: 0x134
	// Line 215, Address: 0x1a360c, Func Offset: 0x13c
	// Line 216, Address: 0x1a361c, Func Offset: 0x14c
	// Line 219, Address: 0x1a3624, Func Offset: 0x154
	// Line 220, Address: 0x1a362c, Func Offset: 0x15c
	// Line 223, Address: 0x1a3634, Func Offset: 0x164
	// Line 227, Address: 0x1a3640, Func Offset: 0x170
	// Line 229, Address: 0x1a364c, Func Offset: 0x17c
	// Line 232, Address: 0x1a3654, Func Offset: 0x184
	// Line 233, Address: 0x1a3660, Func Offset: 0x190
	// Line 237, Address: 0x1a3670, Func Offset: 0x1a0
	// Line 238, Address: 0x1a367c, Func Offset: 0x1ac
	// Line 249, Address: 0x1a3680, Func Offset: 0x1b0
	// Line 248, Address: 0x1a3688, Func Offset: 0x1b8
	// Line 249, Address: 0x1a368c, Func Offset: 0x1bc
	// Func End, Address: 0x1a3694, Func Offset: 0x1c4
}

// zEntSimpleObj_Load__FP14_zEntSimpleObjP7xSerial
// Start address: 0x1a36a0
void zEntSimpleObj_Load(_zEntSimpleObj* ent, xSerial* s)
{
	// Line 135, Address: 0x1a36a0, Func Offset: 0
	// Func End, Address: 0x1a36a8, Func Offset: 0x8
}

// zEntSimpleObj_Save__FP14_zEntSimpleObjP7xSerial
// Start address: 0x1a36b0
void zEntSimpleObj_Save(_zEntSimpleObj* ent, xSerial* s)
{
	// Line 116, Address: 0x1a36b0, Func Offset: 0
	// Func End, Address: 0x1a36b8, Func Offset: 0x8
}

// zEntSimpleObj_Setup__FP14_zEntSimpleObj
// Start address: 0x1a36c0
void zEntSimpleObj_Setup(_zEntSimpleObj* ent)
{
	// Line 99, Address: 0x1a36c0, Func Offset: 0
	// Line 101, Address: 0x1a36cc, Func Offset: 0xc
	// Line 102, Address: 0x1a36d4, Func Offset: 0x14
	// Line 103, Address: 0x1a36dc, Func Offset: 0x1c
	// Func End, Address: 0x1a36ec, Func Offset: 0x2c
}

// DiggableSetup__FP14_zEntSimpleObj
// Start address: 0x1a36f0
void DiggableSetup(_zEntSimpleObj* ent)
{
	xBase* tgt;
	p2LinkAsset* curlink;
	uint32 dug;
	uint32 i;
	// Line 75, Address: 0x1a36f0, Func Offset: 0
	// Line 78, Address: 0x1a3704, Func Offset: 0x14
	// Line 77, Address: 0x1a370c, Func Offset: 0x1c
	// Line 79, Address: 0x1a3710, Func Offset: 0x20
	// Line 80, Address: 0x1a3718, Func Offset: 0x28
	// Line 82, Address: 0x1a3728, Func Offset: 0x38
	// Line 83, Address: 0x1a3730, Func Offset: 0x40
	// Line 84, Address: 0x1a3754, Func Offset: 0x64
	// Line 85, Address: 0x1a376c, Func Offset: 0x7c
	// Line 89, Address: 0x1a3774, Func Offset: 0x84
	// Line 90, Address: 0x1a3778, Func Offset: 0x88
	// Line 91, Address: 0x1a377c, Func Offset: 0x8c
	// Line 93, Address: 0x1a3798, Func Offset: 0xa8
	// Line 94, Address: 0x1a37a0, Func Offset: 0xb0
	// Line 96, Address: 0x1a37ac, Func Offset: 0xbc
	// Func End, Address: 0x1a37c4, Func Offset: 0xd4
}

// zEntSimpleObj_Init__FP14_zEntSimpleObjP10p2EntAsset
// Start address: 0x1a37d0
void zEntSimpleObj_Init(_zEntSimpleObj* ent, p2EntAsset* asset)
{
	// Line 33, Address: 0x1a37d0, Func Offset: 0
	// Line 35, Address: 0x1a37e0, Func Offset: 0x10
	// Line 43, Address: 0x1a37f4, Func Offset: 0x24
	// Line 44, Address: 0x1a37fc, Func Offset: 0x2c
	// Line 47, Address: 0x1a3800, Func Offset: 0x30
	// Line 49, Address: 0x1a3804, Func Offset: 0x34
	// Line 53, Address: 0x1a3810, Func Offset: 0x40
	// Line 56, Address: 0x1a3824, Func Offset: 0x54
	// Line 58, Address: 0x1a382c, Func Offset: 0x5c
	// Line 61, Address: 0x1a3830, Func Offset: 0x60
	// Line 60, Address: 0x1a3834, Func Offset: 0x64
	// Line 61, Address: 0x1a3838, Func Offset: 0x68
	// Line 63, Address: 0x1a3840, Func Offset: 0x70
	// Line 64, Address: 0x1a384c, Func Offset: 0x7c
	// Line 66, Address: 0x1a385c, Func Offset: 0x8c
	// Line 68, Address: 0x1a3860, Func Offset: 0x90
	// Line 71, Address: 0x1a386c, Func Offset: 0x9c
	// Line 72, Address: 0x1a3874, Func Offset: 0xa4
	// Func End, Address: 0x1a3888, Func Offset: 0xb8
}

// zEntSimpleObj_Init__FPvPv
// Start address: 0x1a3890
void zEntSimpleObj_Init(void* ent, void* asset)
{
	// Line 29, Address: 0x1a3890, Func Offset: 0
	// Func End, Address: 0x1a3898, Func Offset: 0x8
}

